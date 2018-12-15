// ECE527 Fall 2017
// University of Illinois, Urbana-Champaign
// Author - Ashutosh Dhar
// Demo Code for deploying simple
// vector multiplier accelerator in bare metal SDK app
// HLS code of accelerator provided separately

#include <stdio.h>
#include "malloc.h"
#include "platform.h"
#include "xil_printf.h"
#include "xvector_multiplier.h"
#include "xparameters.h"
#include "xtmrctr.h"

#define TMRCTR_DEVICE_ID    XPAR_AXI_TIMER_0_DEVICE_ID

//Size of Array. Fixed in HLS code to 64 as well.
#define SIZE 64

int main()
{
	//Init platform
	init_platform();
	xil_printf("Accelerator Demo Code\n\r");

	//Data arrays
	int *src_a, *src_b, *src_c;
	int ret = 0;
	int status;

	//Timer variables to measure time
	u32 timerCount_Stop;
	u32 timerCount_Start;

	//AXI device object for AXI Timer
	XTmrCtr timer;

	//Vector multiplier objects from xvector_multiplier.h
	XVector_multiplier accelerator;
	XVector_multiplier_Config *accelerator_config;

	// Get config data struct for vector mult
	accelerator_config = XVector_multiplier_LookupConfig(XPAR_XVECTOR_MULTIPLIER_0_DEVICE_ID);
	if(!accelerator_config)
	{
		xil_printf("No acc config found!\n");
		return 1;
	}
	else
	{
		xil_printf("Got acc config\n");
	}

	// Using config object to initialize the accelerator object
	status = XVector_multiplier_CfgInitialize(&accelerator, accelerator_config);

	if(status != XST_SUCCESS)
	{
		xil_printf("Initialization of acc failed\n");
	}
	else
	{
		xil_printf("Initialization of acc successful\n");
	}

	//Initialize timer object
	status = XTmrCtr_Initialize(&timer, TMRCTR_DEVICE_ID);
	if (status != XST_SUCCESS)
	{
		xil_printf("Timer init fail\n");
		return XST_FAILURE;
	}

	status = XTmrCtr_SelfTest(&timer, 0);
	if (status != XST_SUCCESS)
	{
		xil_printf("Timer self test fail\n");
		return XST_FAILURE;
	}

	//Allocating arrays
	//Make sure you have updated the lscript.ld file to adjust stack and heap sizes.
	src_a = (int*)malloc(sizeof(int)*SIZE);
	if(src_a==NULL)
	{
		xil_printf("Malloc src a fail\n");
		//return 1;
	}

	src_b = (int*)malloc(sizeof(int)*SIZE);
	if(src_b==NULL)
	{
		xil_printf("Malloc src b fail\n");
		//return 1;
	}

	src_c = (int*)malloc(sizeof(int)*SIZE);
	if(src_c==NULL)
	{
		xil_printf("Malloc src c fail\n");
		//return 1;
	}

	//Start initializing data
	xil_printf("Init data\r\n");

	for(int i=0; i<SIZE; i++)
	{
		src_a[i] = i;
		src_b[i] = i;
		src_c[i] = 0;
	}

	xil_printf("Init data done\r\n");

	//Flush caches!
	// Make sure that all writes have propogated to DRAM,
	// since accelerator is not cache coherent
	Xil_L1DCacheFlush();
	Xil_L2CacheFlush();

	//Set the offset address on the accelerator
	//Note that src_a is a pointer to the data in the array
	//The pointer is an address which is being typecast to u32
	//so that we can send the address over AXI
	XVector_multiplier_Set_a(&accelerator, (u32)src_a);
	XVector_multiplier_Set_b(&accelerator, (u32)src_b);
	XVector_multiplier_Set_c(&accelerator, (u32)src_c);

	//Read back the offsets to confirm they were correctly written
	u32 offset_a = XVector_multiplier_Get_a(&accelerator);
	u32 offset_b = XVector_multiplier_Get_b(&accelerator);
	u32 offset_c = XVector_multiplier_Get_c(&accelerator);

	xil_printf("Base offset set as %x %x %x on accelerator, from proc as %x %x %x\n", offset_a, offset_b, offset_c, (u32)src_a, (u32)src_b, (u32)src_c);
	xil_printf("Starting acc\n");

	//Reset the timer
	XTmrCtr_Reset(&timer, 0);
	XTmrCtr_ClearStats(&timer);
	XTmrCtr_Start(&timer, 0);
	//Start the timer
	timerCount_Start = XTmrCtr_GetValue(&timer, 0);

	//Start the accelerator
	XVector_multiplier_Start(&accelerator);
	//Wait till the accelerator is not done
	while(!XVector_multiplier_IsDone(&accelerator))
	{
		xil_printf("Waiting on acc\n");
	}

	//Stop the timer since the accelerator is done
	timerCount_Stop = XTmrCtr_GetValue(&timer, 0);
	xil_printf("Accelerator Done\n");

	//Display time
	xil_printf("Time Accelerator: %d\n", (timerCount_Stop - timerCount_Start));

	//Get the value returned by the accelerator
	//This is the value passed by the "return" at the end of your HLS kernel
	//It is not necessary unless you pass back something useful, like a debug value
	ret = XVector_multiplier_Get_return(&accelerator);
	xil_printf("Return acc flag %x \n", ret);

	//Sanity Check
	//Print out A and B, and check whether the values in C are correct
	//C should have been calculated by the accelerator
	for(int i=0; i<SIZE; i++)
	{
		xil_printf("A: %d B: %d C: %d \n", src_a[i], src_b[i], src_c[i] );
	}

	xil_printf("Test done\n");

	cleanup_platform();
	return 0;
}

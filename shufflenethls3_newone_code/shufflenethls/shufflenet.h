#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

void ShuffleNetV2(float image[1][3][32][32],
		float conv1_weight[24][3][3][3],
		float shuffle_conv_3x3[1080][1][3][3],
		float shuffle_conv_1x1[5496][24][1][1],
		float conv_last_weight[512][192][1][1],
		float fc_weight[10][512],
		float bias[3618],
		float fc_output[1000]
		);


void conv1_p(float input[1][3][34][34],
	float weight[24][3][3][3],
	float bias[24],
	float output[1][24][34][34]);

/**unit0**/



void subconv_1x1_32_p(float input[1][24][34][34],
	float weight[24][24][1][1],
	float bias[24],
	float output[1][24][34][34]);


void subconv_1x1_16_p(float input[1][24][18][18],
	float weight[24][24][1][1],
	float bias[24],
	float output[1][24][18][18]);



void subconv_3x3_32_stride_no_relu_p(float input[1][24][34][34],
	float weight[24][1][3][3],
	float bias[24],
	float output[1][24][18][18]);



void subconv_3x3_16_no_relu_p(float input[1][24][18][18],
	float weight[24][1][3][3],
	float bias[24],
	float output[1][24][18][18]);

void shuffle_24_p(float left[1][24][18][18],float right[1][24][18][18],float output[1][48][18][18]);


void shuffle_24_l_p(float left[1][24][18][18], float output[1][48][18][18]);

void shuffle_24_r_p(float right[1][24][18][18], float output[1][48][18][18]);



/**unit1**/


void subconv_1x1_16p_p(float input[1][48][18][18],
	float weight[48][48][1][1],
	float bias[48],
	float output[1][48][18][18]);



void subconv_1x1_8_p(float input[1][48][10][10],
	float weight[48][48][1][1],
	float bias[48],
	float output[1][48][10][10]);



void subconv_3x3_16_stride_no_relu_p(float input[1][48][18][18],
	float weight[48][1][3][3],
	float bias[48],
	float output[1][48][10][10]);



void subconv_3x3_8_no_relu_p(float input[1][48][10][10],
	float weight[48][1][3][3],
	float bias[48],
	float output[1][48][10][10]);

void shuffle_48_p(float left[1][48][10][10],float right[1][48][10][10],float output[1][96][10][10]);


void shuffle_48_l_p(float left[1][48][10][10], float output[1][96][10][10]);


void shuffle_48_r_p(float right[1][48][10][10], float output[1][96][10][10]);




/**unit2**/

void subconv_1x1_8p_p(float input[1][96][10][10],
	float weight[96][96][1][1],
	float bias[96],
	float output[1][96][10][10]);


void subconv_1x1_4_p(float input[1][96][6][6],
	float weight[96][96][1][1],
	float bias[96],
	float output[1][96][6][6]);

void subconv_3x3_8_stride_no_relu_p(float input[1][96][10][10],
	float weight[96][1][3][3],
	float bias[96],
	float output[1][96][6][6]);


void subconv_3x3_4_no_relu_p(float input[1][96][6][6],
	float weight[96][1][3][3],
	float bias[96],
	float output[1][96][6][6]);


void shuffle_96_p(float left[1][96][6][6],float right[1][96][6][6],float output[1][192][6][6]);

void shuffle_96_l_p(float left[1][96][6][6], float output[1][192][6][6]);

void shuffle_96_r_p(float right[1][96][6][6], float output[1][192][6][6]);

void conv_last(float input[1][192][4][4],
	float weight[512][192][1][1],
	float bias[512],
	float output[1][512][4][4]);

void avgpool(float input[1][512][4][4],
	float output[512]);

void fc(float input[512],
	float weight[10][512],
	float bias[10],
	float output[10]);


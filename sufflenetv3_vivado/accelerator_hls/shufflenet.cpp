#include "shufflenet.h"

float conv1_output[1][24][32][32] = {0};
/*FIXME:If bram is still not enough, could use double buffer to buffer the following !!*/
float downsampleunit0_output[1][48][16][16] = {0};
float shuffleunit0_0_output[1][48][16][16] = {0};
float shuffleunit0_1_output[1][48][16][16] = {0};
float shuffleunit0_2_output[1][48][16][16] = {0};
float downsampleunit1_output[1][96][8][8] = {0};
float shuffleunit1_0_output[1][96][8][8] = {0};
float shuffleunit1_1_output[1][96][8][8] = {0};
float shuffleunit1_2_output[1][96][8][8] = {0};
float shuffleunit1_3_output[1][96][8][8] = {0};
float shuffleunit1_4_output[1][96][8][8] = {0};
float shuffleunit1_5_output[1][96][8][8] = {0};
float shuffleunit1_6_output[1][96][8][8] = {0};
float shuffleunit1_7_output[1][96][8][8] = {0};
float downsampleunit2_output[1][192][4][4] = {0};
float shuffleunit2_0_output[1][192][4][4] = {0};
float shuffleunit2_1_output[1][192][4][4] = {0};
float shuffleunit2_2_output[1][192][4][4] = {0};
float conv_last_output[1][512][4][4] = {0};
float avgpool_output[512] = {0};

float conv1_bias [24];
/*-------------Original variables of DownsampleUnit0-------------------
float ShuffleConvs_0_DownsampleUnit_conv1r_weight [24][24][1][1];
float ShuffleConvs_0_DownsampleUnit_conv1r_bias [24];
float ShuffleConvs_0_DownsampleUnit_conv2r_weight [24][1][3][3];
float ShuffleConvs_0_DownsampleUnit_conv2r_bias [24];
float ShuffleConvs_0_DownsampleUnit_conv3r_weight [24][24][1][1];
float ShuffleConvs_0_DownsampleUnit_conv3r_bias [24];
float ShuffleConvs_0_DownsampleUnit_conv1l_weight [24][1][3][3];
float ShuffleConvs_0_DownsampleUnit_conv1l_bias [24];
float ShuffleConvs_0_DownsampleUnit_conv2l_weight [24][24][1][1];
float ShuffleConvs_0_DownsampleUnit_conv2l_bias [24];
//float ShuffleConvs_0_DownsampleUnit__conv1r_output[1][24][32][32]={0};
//float ShuffleConvs_0_DownsampleUnit__conv2r_ourput[1][24][16][16]={0};
//float ShuffleConvs_0_DownsampleUnit__conv3r_ourput[1][24][16][16]={0};
//float ShuffleConvs_0_DownsampleUnit__conv1l_output[1][24][16][16]={0};
//float ShuffleConvs_0_DownsampleUnit__conv2l_output[1][24][16][16]={0};

---------------New variables of DownsampleUnit0 and ShuffleUnit0-------------------------*/
float weights_24_24_1x1 [24][24][1][1];
float weights_24_1_3x3 [24][1][3][3];
float bias_24 [24];
float ShuffleConvs_0_DownsampleUnit__conv1r_output[1][24][32][32]={0};
float buffer0_1_24_16x16[1][24][16][16]={0};
float buffer1_1_24_16x16[1][24][16][16]={0};

/*------------Original variables of ShuffleUnit0---------------------
float ShuffleConvs_0_ShuffleUnit0_0_conv1_weight [24][24][1][1];
float ShuffleConvs_0_ShuffleUnit0_0_conv1_bias [24];
float ShuffleConvs_0_ShuffleUnit0_0_conv2_weight [24][1][3][3];
float ShuffleConvs_0_ShuffleUnit0_0_conv2_bias [24];
float ShuffleConvs_0_ShuffleUnit0_0_conv3_weight [24][24][1][1];
float ShuffleConvs_0_ShuffleUnit0_0_conv3_bias [24];
float ShuffleConvs_0_ShuffleUnit0_1_conv1_weight [24][24][1][1];
float ShuffleConvs_0_ShuffleUnit0_1_conv1_bias [24];
float ShuffleConvs_0_ShuffleUnit0_1_conv2_weight [24][1][3][3];
float ShuffleConvs_0_ShuffleUnit0_1_conv2_bias [24];
float ShuffleConvs_0_ShuffleUnit0_1_conv3_weight [24][24][1][1];
float ShuffleConvs_0_ShuffleUnit0_1_conv3_bias [24];
float ShuffleConvs_0_ShuffleUnit0_2_conv1_weight [24][24][1][1];
float ShuffleConvs_0_ShuffleUnit0_2_conv1_bias [24];
float ShuffleConvs_0_ShuffleUnit0_2_conv2_weight [24][1][3][3];
float ShuffleConvs_0_ShuffleUnit0_2_conv2_bias [24];
float ShuffleConvs_0_ShuffleUnit0_2_conv3_weight [24][24][1][1];
float ShuffleConvs_0_ShuffleUnit0_2_conv3_bias [24];
//float left_part[1][24][16][16] = {0};
//float right_part[1][24][16][16] = {0};
//float conv1_output[1][24][16][16] = {0};
//float conv2_output[1][24][16][16] = {0};
//float conv3_output[1][24][16][16] = {0};*/

/*------------Original variables of DownsampleUnit1------------
float ShuffleConvs_1_DownsampleUnit_conv1r_weight [48][48][1][1];
float ShuffleConvs_1_DownsampleUnit_conv1r_bias [48];
float ShuffleConvs_1_DownsampleUnit_conv2r_weight [48][1][3][3];
float ShuffleConvs_1_DownsampleUnit_conv2r_bias [48];
float ShuffleConvs_1_DownsampleUnit_conv3r_weight [48][48][1][1];
float ShuffleConvs_1_DownsampleUnit_conv3r_bias [48];
float ShuffleConvs_1_DownsampleUnit_conv1l_weight [48][1][3][3];
float ShuffleConvs_1_DownsampleUnit_conv1l_bias [48];
float ShuffleConvs_1_DownsampleUnit_conv2l_weight [48][48][1][1];
float ShuffleConvs_1_DownsampleUnit_conv2l_bias [48];
//float conv1r_output[1][48][16][16]={0};
//float conv2r_ourput[1][48][8][8]={0};
//float conv3r_ourput[1][48][8][8]={0};
//float conv1l_output[1][48][8][8]={0};
//float conv2l_output[1][48][8][8]={0};*/
//------------New variables of DownsampleUnit1 and ShuffleUnit1---
float weights_48_48_1x1 [48][48][1][1];
float weights_48_1_3x3 [48][1][3][3];
float bias_48 [48];
float ShuffleConvs_1_DownsampleUnit__conv1r_output[1][48][16][16]={0};
float buffer0_1_48_8x8[1][48][8][8]={0};
float buffer1_1_48_8x8[1][48][8][8]={0};

/*-----------Original variables of ShuffleUnit1----------------
float ShuffleConvs_1_ShuffleUnit1_0_conv1_weight [48][48][1][1];
float ShuffleConvs_1_ShuffleUnit1_0_conv1_bias [48];
float ShuffleConvs_1_ShuffleUnit1_0_conv2_weight [48][1][3][3];
float ShuffleConvs_1_ShuffleUnit1_0_conv2_bias [48];
float ShuffleConvs_1_ShuffleUnit1_0_conv3_weight [48][48][1][1];
float ShuffleConvs_1_ShuffleUnit1_0_conv3_bias [48];
float ShuffleConvs_1_ShuffleUnit1_1_conv1_weight [48][48][1][1];
float ShuffleConvs_1_ShuffleUnit1_1_conv1_bias [48];
float ShuffleConvs_1_ShuffleUnit1_1_conv2_weight [48][1][3][3];
float ShuffleConvs_1_ShuffleUnit1_1_conv2_bias [48];
float ShuffleConvs_1_ShuffleUnit1_1_conv3_weight [48][48][1][1];
float ShuffleConvs_1_ShuffleUnit1_1_conv3_bias [48];
float ShuffleConvs_1_ShuffleUnit1_2_conv1_weight [48][48][1][1];
float ShuffleConvs_1_ShuffleUnit1_2_conv1_bias [48];
float ShuffleConvs_1_ShuffleUnit1_2_conv2_weight [48][1][3][3];
float ShuffleConvs_1_ShuffleUnit1_2_conv2_bias [48];
float ShuffleConvs_1_ShuffleUnit1_2_conv3_weight [48][48][1][1];
float ShuffleConvs_1_ShuffleUnit1_2_conv3_bias [48];
float ShuffleConvs_1_ShuffleUnit1_3_conv1_weight [48][48][1][1];
float ShuffleConvs_1_ShuffleUnit1_3_conv1_bias [48];
float ShuffleConvs_1_ShuffleUnit1_3_conv2_weight [48][1][3][3];
float ShuffleConvs_1_ShuffleUnit1_3_conv2_bias [48];
float ShuffleConvs_1_ShuffleUnit1_3_conv3_weight [48][48][1][1];
float ShuffleConvs_1_ShuffleUnit1_3_conv3_bias [48];
float ShuffleConvs_1_ShuffleUnit1_4_conv1_weight [48][48][1][1];
float ShuffleConvs_1_ShuffleUnit1_4_conv1_bias [48];
float ShuffleConvs_1_ShuffleUnit1_4_conv2_weight [48][1][3][3];
float ShuffleConvs_1_ShuffleUnit1_4_conv2_bias [48];
float ShuffleConvs_1_ShuffleUnit1_4_conv3_weight [48][48][1][1];
float ShuffleConvs_1_ShuffleUnit1_4_conv3_bias [48];
float ShuffleConvs_1_ShuffleUnit1_5_conv1_weight [48][48][1][1];
float ShuffleConvs_1_ShuffleUnit1_5_conv1_bias [48];
float ShuffleConvs_1_ShuffleUnit1_5_conv2_weight [48][1][3][3];
float ShuffleConvs_1_ShuffleUnit1_5_conv2_bias [48];
float ShuffleConvs_1_ShuffleUnit1_5_conv3_weight [48][48][1][1];
float ShuffleConvs_1_ShuffleUnit1_5_conv3_bias [48];
float ShuffleConvs_1_ShuffleUnit1_6_conv1_weight  [48][48][1][1];
float ShuffleConvs_1_ShuffleUnit1_6_conv1_bias  [48];
float ShuffleConvs_1_ShuffleUnit1_6_conv2_weight  [48][1][3][3];
float ShuffleConvs_1_ShuffleUnit1_6_conv2_bias   [48];
float ShuffleConvs_1_ShuffleUnit1_6_conv3_weight [48][48][1][1];
float ShuffleConvs_1_ShuffleUnit1_6_conv3_bias [48];
float ShuffleConvs_1_ShuffleUnit1_7_conv1_weight  [48][48][1][1];
float ShuffleConvs_1_ShuffleUnit1_7_conv1_bias [48];
float ShuffleConvs_1_ShuffleUnit1_7_conv2_weight   [48][1][3][3];
float ShuffleConvs_1_ShuffleUnit1_7_conv2_bias  [48];
float ShuffleConvs_1_ShuffleUnit1_7_conv3_weight   [48][48][1][1];
float ShuffleConvs_1_ShuffleUnit1_7_conv3_bias [48];
//float left_part[1][96][4][4] = {0};
//float right_part[1][96][4][4] = {0};
//float conv1_output[1][96][4][4] = {0};
//float conv2_output[1][96][4][4] = {0};
//float conv3_output[1][96][4][4] = {0};*/
/*----------Original variables of DownsampleUnit2----------------
float ShuffleConvs_2_DownsampleUnit_conv1r_weight [96][96][1][1];
float ShuffleConvs_2_DownsampleUnit_conv1r_bias [96];
float ShuffleConvs_2_DownsampleUnit_conv2r_weight [96][1][3][3];
float ShuffleConvs_2_DownsampleUnit_conv2r_bias [96];
float ShuffleConvs_2_DownsampleUnit_conv3r_weight [96][96][1][1];
float ShuffleConvs_2_DownsampleUnit_conv3r_bias [96];
float ShuffleConvs_2_DownsampleUnit_conv1l_weight [96][1][3][3];
float ShuffleConvs_2_DownsampleUnit_conv1l_bias [96];
float ShuffleConvs_2_DownsampleUnit_conv2l_weight [96][96][1][1];
float ShuffleConvs_2_DownsampleUnit_conv2l_bias [96];
//float conv1r_output[1][96][8][8]={0};
//float conv2r_ourput[1][96][4][4]={0};
//float conv3r_ourput[1][96][4][4]={0};
//float conv1l_output[1][96][4][4]={0};
//float conv2l_output[1][96][4][4]={0};*/
//------------New variables of DownsampleUnit2 and ShuffleUnit2---
float weights_96_96_1x1 [96][96][1][1];
float weights_96_1_3x3 [96][1][3][3];
float bias_96 [96];
float ShuffleConvs_2_DownsampleUnit__conv1r_output[1][96][8][8]={0};
float buffer0_1_96_4x4[1][96][4][4]={0};
float buffer1_1_96_4x4[1][96][4][4]={0};
/*----------------Original variables of ShuffleUnit2---------------
float ShuffleConvs_2_ShuffleUnit2_0_conv1_weight [96][96][1][1];
float ShuffleConvs_2_ShuffleUnit2_0_conv1_bias [96];
float ShuffleConvs_2_ShuffleUnit2_0_conv2_weight [96][1][3][3];
float ShuffleConvs_2_ShuffleUnit2_0_conv2_bias [96];
float ShuffleConvs_2_ShuffleUnit2_0_conv3_weight [96][96][1][1];
float ShuffleConvs_2_ShuffleUnit2_0_conv3_bias [96];
float ShuffleConvs_2_ShuffleUnit2_1_conv1_weight [96][96][1][1];
float ShuffleConvs_2_ShuffleUnit2_1_conv1_bias [96];
float ShuffleConvs_2_ShuffleUnit2_1_conv2_weight [96][1][3][3];
float ShuffleConvs_2_ShuffleUnit2_1_conv2_bias [96];
float ShuffleConvs_2_ShuffleUnit2_1_conv3_weight [96][96][1][1];
float ShuffleConvs_2_ShuffleUnit2_1_conv3_bias [96];
float ShuffleConvs_2_ShuffleUnit2_2_conv1_weight [96][96][1][1];
float ShuffleConvs_2_ShuffleUnit2_2_conv1_bias [96];
float ShuffleConvs_2_ShuffleUnit2_2_conv2_weight [96][1][3][3];
float ShuffleConvs_2_ShuffleUnit2_2_conv2_bias [96];
float ShuffleConvs_2_ShuffleUnit2_2_conv3_weight [96][96][1][1];
float ShuffleConvs_2_ShuffleUnit2_2_conv3_bias [96];*/

float conv_last_bias [512];
float fc_bias [10];

void ShuffleNetV2(float image[1][3][32][32],
		float conv1_weight[24][3][3][3],
		float shuffle_conv_3x3[1080][1][3][3],
		float shuffle_conv_1x1[5496][24][1][1],
		float conv_last_weight[512][192][1][1],
		float fc_weight[10][512],
		float bias[3618],
		float fc_output[1000]
		)
{
	//3x3
	    for(int co = 0; co < 24; co ++){
	        for(int ci = 0; ci <24; ci ++){
	            //ShuffleConvs_0_DownsampleUnit_conv1r_weight[co][ci][0][0] = shuffle_conv_1x1[co][ci][0][0];
	            //ShuffleConvs_0_DownsampleUnit_conv3r_weight[co][ci][0][0] = shuffle_conv_1x1[co+24][ci][0][0];
	            //ShuffleConvs_0_DownsampleUnit_conv2l_weight[co][ci][0][0] = shuffle_conv_1x1[co+24*2][ci][0][0];

	            //ShuffleConvs_0_ShuffleUnit0_0_conv1_weight[co][ci][0][0] = shuffle_conv_1x1[co+24*3][ci][0][0];
	            //ShuffleConvs_0_ShuffleUnit0_0_conv3_weight[co][ci][0][0] = shuffle_conv_1x1[co+24*4][ci][0][0];
	            //ShuffleConvs_0_ShuffleUnit0_1_conv1_weight[co][ci][0][0] = shuffle_conv_1x1[co+24*5][ci][0][0];
	            //ShuffleConvs_0_ShuffleUnit0_1_conv3_weight[co][ci][0][0] = shuffle_conv_1x1[co+24*6][ci][0][0];
	            //ShuffleConvs_0_ShuffleUnit0_2_conv1_weight[co][ci][0][0] = shuffle_conv_1x1[co+24*7][ci][0][0];
	            //ShuffleConvs_0_ShuffleUnit0_2_conv3_weight[co][ci][0][0] = shuffle_conv_1x1[co+24*8][ci][0][0];

	            for(int i = 0; i < 4; i ++ ){
	            //ShuffleConvs_1_DownsampleUnit_conv1r_weight[co/2 + i *12][ci + 24*(co%2)][0][0] =shuffle_conv_1x1[co+24*9 + 24 *i][ci][0][0];
	            //ShuffleConvs_1_DownsampleUnit_conv3r_weight[co/2 + i *12][ci + 24*(co%2)][0][0] =shuffle_conv_1x1[co+24*13 + 24 *i][ci][0][0];
	            //ShuffleConvs_1_DownsampleUnit_conv2l_weight[co/2 + i *12][ci + 24*(co%2)][0][0] =shuffle_conv_1x1[co+24*17 + 24 *i][ci][0][0];
	            
				//ShuffleConvs_1_ShuffleUnit1_0_conv1_weight[co/2 + i *12][ci + 24*(co%2)][0][0] =shuffle_conv_1x1[co+24*21 + 24 *i][ci][0][0];
	            //ShuffleConvs_1_ShuffleUnit1_0_conv3_weight[co/2 + i *12][ci + 24*(co%2)][0][0] =shuffle_conv_1x1[co+24*25 + 24 *i][ci][0][0];
	            //ShuffleConvs_1_ShuffleUnit1_1_conv1_weight[co/2 + i *12][ci + 24*(co%2)][0][0] =shuffle_conv_1x1[co+24*29 + 24 *i][ci][0][0];
	            //ShuffleConvs_1_ShuffleUnit1_1_conv3_weight[co/2 + i *12][ci + 24*(co%2)][0][0] =shuffle_conv_1x1[co+24*33 + 24 *i][ci][0][0];
	            //ShuffleConvs_1_ShuffleUnit1_2_conv1_weight[co/2 + i *12][ci + 24*(co%2)][0][0] =shuffle_conv_1x1[co+24*37 + 24 *i][ci][0][0];
	            //ShuffleConvs_1_ShuffleUnit1_2_conv3_weight[co/2 + i *12][ci + 24*(co%2)][0][0] =shuffle_conv_1x1[co+24*41 + 24 *i][ci][0][0];
	            //ShuffleConvs_1_ShuffleUnit1_3_conv1_weight[co/2 + i *12][ci + 24*(co%2)][0][0] =shuffle_conv_1x1[co+24*45 + 24 *i][ci][0][0];
	            //ShuffleConvs_1_ShuffleUnit1_3_conv3_weight[co/2 + i *12][ci + 24*(co%2)][0][0] =shuffle_conv_1x1[co+24*49 + 24 *i][ci][0][0];
	            //ShuffleConvs_1_ShuffleUnit1_4_conv1_weight[co/2 + i *12][ci + 24*(co%2)][0][0] =shuffle_conv_1x1[co+24*53 + 24 *i][ci][0][0];
	            //ShuffleConvs_1_ShuffleUnit1_4_conv3_weight[co/2 + i *12][ci + 24*(co%2)][0][0] =shuffle_conv_1x1[co+24*57 + 24 *i][ci][0][0];
	            //ShuffleConvs_1_ShuffleUnit1_5_conv1_weight[co/2 + i *12][ci + 24*(co%2)][0][0] =shuffle_conv_1x1[co+24*61 + 24 *i][ci][0][0];
	            //ShuffleConvs_1_ShuffleUnit1_5_conv3_weight[co/2 + i *12][ci + 24*(co%2)][0][0] =shuffle_conv_1x1[co+24*65 + 24 *i][ci][0][0];
	            //ShuffleConvs_1_ShuffleUnit1_6_conv1_weight[co/2 + i *12][ci + 24*(co%2)][0][0] =shuffle_conv_1x1[co+24*69 + 24 *i][ci][0][0];
	            //ShuffleConvs_1_ShuffleUnit1_6_conv3_weight[co/2 + i *12][ci + 24*(co%2)][0][0] =shuffle_conv_1x1[co+24*73 + 24 *i][ci][0][0];
	            //ShuffleConvs_1_ShuffleUnit1_7_conv1_weight[co/2 + i *12][ci + 24*(co%2)][0][0] =shuffle_conv_1x1[co+24*77 + 24 *i][ci][0][0];
	            //ShuffleConvs_1_ShuffleUnit1_7_conv3_weight[co/2 + i *12][ci + 24*(co%2)][0][0] =shuffle_conv_1x1[co+24*81 + 24 *i][ci][0][0];
	            }

	            for(int i = 0; i < 16;i++){
	                //ShuffleConvs_2_DownsampleUnit_conv1r_weight[co/4 + i * 6][ci + 24*(co%4)][0][0] =shuffle_conv_1x1[co+24*85 + 24 * i][ci][0][0];
	                //ShuffleConvs_2_DownsampleUnit_conv3r_weight[co/4 + i * 6][ci + 24*(co%4)][0][0] =shuffle_conv_1x1[co+24*101 + 24 * i][ci][0][0];
	                //ShuffleConvs_2_DownsampleUnit_conv2l_weight[co/4 + i * 6][ci + 24*(co%4)][0][0] =shuffle_conv_1x1[co+24*117 + 24 * i][ci][0][0];
	                
					//ShuffleConvs_2_ShuffleUnit2_0_conv1_weight[co/4 + i * 6][ci + 24*(co%4)][0][0] =shuffle_conv_1x1[co+24*133 + 24 * i][ci][0][0];
	                //ShuffleConvs_2_ShuffleUnit2_0_conv3_weight[co/4 + i * 6][ci + 24*(co%4)][0][0] =shuffle_conv_1x1[co+24*149 + 24 * i][ci][0][0];
	                //ShuffleConvs_2_ShuffleUnit2_1_conv1_weight[co/4 + i * 6][ci + 24*(co%4)][0][0] =shuffle_conv_1x1[co+24*165 + 24 * i][ci][0][0];
	                //ShuffleConvs_2_ShuffleUnit2_1_conv3_weight[co/4 + i * 6][ci + 24*(co%4)][0][0] =shuffle_conv_1x1[co+24*181 + 24 * i][ci][0][0];
	                //ShuffleConvs_2_ShuffleUnit2_2_conv1_weight[co/4 + i * 6][ci + 24*(co%4)][0][0] =shuffle_conv_1x1[co+24*197 + 24 * i][ci][0][0];
	                //ShuffleConvs_2_ShuffleUnit2_2_conv3_weight[co/4 + i * 6][ci + 24*(co%4)][0][0] =shuffle_conv_1x1[co+24*213 + 24 * i][ci][0][0];
	            }
	        }
	    }
	//1x1
	    for(int co = 0;co<24;co++){
	        for(int w = 0; w <3; w++){
	            for(int h = 0; h <3;h++){

	                //ShuffleConvs_0_DownsampleUnit_conv2r_weight[co][0][w][h] = shuffle_conv_3x3[co][0][w][h];
	                //ShuffleConvs_0_DownsampleUnit_conv1l_weight[co][0][w][h] = shuffle_conv_3x3[co+24][0][w][h];

	                //ShuffleConvs_0_ShuffleUnit0_0_conv2_weight[co][0][w][h] = shuffle_conv_3x3[co+24*2][0][w][h];
	                //ShuffleConvs_0_ShuffleUnit0_1_conv2_weight[co][0][w][h] = shuffle_conv_3x3[co+24*3][0][w][h];
	                //ShuffleConvs_0_ShuffleUnit0_2_conv2_weight[co][0][w][h] = shuffle_conv_3x3[co+24*4][0][w][h];

	                for(int i = 0; i < 2; i++){
	                    //ShuffleConvs_1_DownsampleUnit_conv2r_weight[co + i*24][0][w][h] = shuffle_conv_3x3[co+24*5+ i*24][0][w][h];
	                    //ShuffleConvs_1_DownsampleUnit_conv1l_weight[co+ i*24][0][w][h] = shuffle_conv_3x3[co+24*7+ i*24][0][w][h];

	                    //ShuffleConvs_1_ShuffleUnit1_0_conv2_weight[co+ i*24][0][w][h] = shuffle_conv_3x3[co+24*9+ i*24][0][w][h];
	                    //ShuffleConvs_1_ShuffleUnit1_1_conv2_weight[co+ i*24][0][w][h] = shuffle_conv_3x3[co+24*11+ i*24][0][w][h];
	                    //ShuffleConvs_1_ShuffleUnit1_2_conv2_weight[co+ i*24][0][w][h] = shuffle_conv_3x3[co+24*13+ i*24][0][w][h];
	                    //ShuffleConvs_1_ShuffleUnit1_3_conv2_weight[co+ i*24][0][w][h] = shuffle_conv_3x3[co+24*15+ i*24][0][w][h];
	                    //ShuffleConvs_1_ShuffleUnit1_4_conv2_weight[co+ i*24][0][w][h] = shuffle_conv_3x3[co+24*17+ i*24][0][w][h];
	                    //ShuffleConvs_1_ShuffleUnit1_5_conv2_weight[co+ i*24][0][w][h] = shuffle_conv_3x3[co+24*19+ i*24][0][w][h];
	                    //ShuffleConvs_1_ShuffleUnit1_6_conv2_weight[co+ i*24][0][w][h] = shuffle_conv_3x3[co+24*21+ i*24][0][w][h];
	                    //ShuffleConvs_1_ShuffleUnit1_7_conv2_weight[co+ i*24][0][w][h] = shuffle_conv_3x3[co+24*23+ i*24][0][w][h];
	                }

	                for(int i = 0; i < 4; i++){
	                    //ShuffleConvs_2_DownsampleUnit_conv2r_weight[co + i*24][0][w][h] = shuffle_conv_3x3[co+24*25+ i*24][0][w][h];
	                    //ShuffleConvs_2_DownsampleUnit_conv1l_weight[co + i*24][0][w][h] = shuffle_conv_3x3[co+24*29+ i*24][0][w][h];
	                    
						//ShuffleConvs_2_ShuffleUnit2_0_conv2_weight[co + i*24][0][w][h] = shuffle_conv_3x3[co+24*33+ i*24][0][w][h];
	                    //ShuffleConvs_2_ShuffleUnit2_1_conv2_weight[co + i*24][0][w][h] = shuffle_conv_3x3[co+24*37+ i*24][0][w][h];
	                    //ShuffleConvs_2_ShuffleUnit2_2_conv2_weight[co + i*24][0][w][h] = shuffle_conv_3x3[co+24*41+ i*24][0][w][h];
	                }
	            }
	        }

	    }
	//bias

	    for(int i = 0; i<24; i++){
	        conv1_bias[i] = bias[i];
	        //ShuffleConvs_0_DownsampleUnit_conv1r_bias[i] = bias[i+24];
	        //ShuffleConvs_0_DownsampleUnit_conv2r_bias[i] = bias[i+24*2];
	        //ShuffleConvs_0_DownsampleUnit_conv3r_bias[i] = bias[i+24*3];
	        //ShuffleConvs_0_DownsampleUnit_conv1l_bias[i] = bias[i+24*4];
	        //ShuffleConvs_0_DownsampleUnit_conv2l_bias[i] = bias[i+24*5];

	        //ShuffleConvs_0_ShuffleUnit0_0_conv1_bias[i] = bias[i+24*6];
	        //ShuffleConvs_0_ShuffleUnit0_0_conv2_bias[i] = bias[i+24*7];
	        //ShuffleConvs_0_ShuffleUnit0_0_conv3_bias[i] = bias[i+24*8];
	        //ShuffleConvs_0_ShuffleUnit0_1_conv1_bias[i] = bias[i+24*9];
	        //ShuffleConvs_0_ShuffleUnit0_1_conv2_bias[i] = bias[i+24*10];
	        //ShuffleConvs_0_ShuffleUnit0_1_conv3_bias[i] = bias[i+24*11];
	        //ShuffleConvs_0_ShuffleUnit0_2_conv1_bias[i] = bias[i+24*12];
	        //ShuffleConvs_0_ShuffleUnit0_2_conv2_bias[i] = bias[i+24*13];
	        //ShuffleConvs_0_ShuffleUnit0_2_conv3_bias[i] = bias[i+24*14];
	        for(int k = 0;k < 2;k++){
	            //ShuffleConvs_1_DownsampleUnit_conv1r_bias[i+k*24] = bias[i+24*15+k*24];
	            //ShuffleConvs_1_DownsampleUnit_conv2r_bias[i+k*24] = bias[i+24*17+k*24];
	            //ShuffleConvs_1_DownsampleUnit_conv3r_bias[i+k*24] = bias[i+24*19+k*24];
	            //ShuffleConvs_1_DownsampleUnit_conv1l_bias[i+k*24] = bias[i+24*21+k*24];
	            //ShuffleConvs_1_DownsampleUnit_conv2l_bias[i+k*24] = bias[i+24*23+k*24];

	            //ShuffleConvs_1_ShuffleUnit1_0_conv1_bias[i+k*24] = bias[i+24*25+k*24];
	            //ShuffleConvs_1_ShuffleUnit1_0_conv2_bias[i+k*24] = bias[i+24*27+k*24];
	            //ShuffleConvs_1_ShuffleUnit1_0_conv3_bias[i+k*24] = bias[i+24*29+k*24];
	            //ShuffleConvs_1_ShuffleUnit1_1_conv1_bias[i+k*24] = bias[i+24*31+k*24];
	            //ShuffleConvs_1_ShuffleUnit1_1_conv2_bias[i+k*24] = bias[i+24*33+k*24];
	            //ShuffleConvs_1_ShuffleUnit1_1_conv3_bias[i+k*24] = bias[i+24*35+k*24];
	            //ShuffleConvs_1_ShuffleUnit1_2_conv1_bias[i+k*24] = bias[i+24*37+k*24];
	            //ShuffleConvs_1_ShuffleUnit1_2_conv2_bias[i+k*24] = bias[i+24*39+k*24];
	            //ShuffleConvs_1_ShuffleUnit1_2_conv3_bias[i+k*24] = bias[i+24*41+k*24];
	            //ShuffleConvs_1_ShuffleUnit1_3_conv1_bias[i+k*24] = bias[i+24*43+k*24];
	            //ShuffleConvs_1_ShuffleUnit1_3_conv2_bias[i+k*24] = bias[i+24*45+k*24];
	            //ShuffleConvs_1_ShuffleUnit1_3_conv3_bias[i+k*24] = bias[i+24*47+k*24];
	            //ShuffleConvs_1_ShuffleUnit1_4_conv1_bias[i+k*24] = bias[i+24*49+k*24];
	            //ShuffleConvs_1_ShuffleUnit1_4_conv2_bias[i+k*24] = bias[i+24*51+k*24];
	            //ShuffleConvs_1_ShuffleUnit1_4_conv3_bias[i+k*24] = bias[i+24*53+k*24];
	            //ShuffleConvs_1_ShuffleUnit1_5_conv1_bias[i+k*24] = bias[i+24*55+k*24];
	            //ShuffleConvs_1_ShuffleUnit1_5_conv2_bias[i+k*24] = bias[i+24*57+k*24];
	            //ShuffleConvs_1_ShuffleUnit1_5_conv3_bias[i+k*24] = bias[i+24*59+k*24];
	            //ShuffleConvs_1_ShuffleUnit1_6_conv1_bias[i+k*24] = bias[i+24*61+k*24];
	            //ShuffleConvs_1_ShuffleUnit1_6_conv2_bias[i+k*24] = bias[i+24*63+k*24];
	            //ShuffleConvs_1_ShuffleUnit1_6_conv3_bias[i+k*24] = bias[i+24*65+k*24];
	            //ShuffleConvs_1_ShuffleUnit1_7_conv1_bias[i+k*24] = bias[i+24*67+k*24];
	            //ShuffleConvs_1_ShuffleUnit1_7_conv2_bias[i+k*24] = bias[i+24*69+k*24];
	            //ShuffleConvs_1_ShuffleUnit1_7_conv3_bias[i+k*24] = bias[i+24*71+k*24];
	        }

	        for(int k = 0;k < 4;k++){
	        //ShuffleConvs_2_DownsampleUnit_conv1r_bias[i+k*24] = bias[i+24*73+k*24];
	        //ShuffleConvs_2_DownsampleUnit_conv2r_bias[i+k*24] = bias[i+24*77+k*24];
	        //ShuffleConvs_2_DownsampleUnit_conv3r_bias[i+k*24] = bias[i+24*81+k*24];
	        //ShuffleConvs_2_DownsampleUnit_conv1l_bias[i+k*24] = bias[i+24*85+k*24];
	        //ShuffleConvs_2_DownsampleUnit_conv2l_bias[i+k*24] = bias[i+24*89+k*24];
	        
			//ShuffleConvs_2_ShuffleUnit2_0_conv1_bias[i+k*24] = bias[i+24*93+k*24];
	        //ShuffleConvs_2_ShuffleUnit2_0_conv2_bias[i+k*24] = bias[i+24*97+k*24];
	        //ShuffleConvs_2_ShuffleUnit2_0_conv3_bias[i+k*24] = bias[i+24*101+k*24];
	        //ShuffleConvs_2_ShuffleUnit2_1_conv1_bias[i+k*24] = bias[i+24*105+k*24];
	        //ShuffleConvs_2_ShuffleUnit2_1_conv2_bias[i+k*24] = bias[i+24*109+k*24];
	        //ShuffleConvs_2_ShuffleUnit2_1_conv3_bias[i+k*24] = bias[i+24*113+k*24];
	        //ShuffleConvs_2_ShuffleUnit2_2_conv1_bias[i+k*24] = bias[i+24*117+k*24];
	        //ShuffleConvs_2_ShuffleUnit2_2_conv2_bias[i+k*24] = bias[i+24*121+k*24];
	        //ShuffleConvs_2_ShuffleUnit2_2_conv3_bias[i+k*24] = bias[i+24*125+k*24];
	        }
	    }
	    for(int i = 0; i < 512 ; i++){
	        conv_last_bias[i] = bias[24*129 + i];
	    }
	    for(int i = 0;i<10;i++){
	        fc_bias[i] = bias[24*129 + 512 + i];
	    }



    /** conv1 **/
    conv1(image,conv1_weight,conv1_bias,conv1_output);

/*----------------Original DownsampleUnit0-----------------------
    DownsampleUnit0(conv1_output,
                    ShuffleConvs_0_DownsampleUnit_conv1r_weight,
                    ShuffleConvs_0_DownsampleUnit_conv1r_bias,
                    ShuffleConvs_0_DownsampleUnit_conv2r_weight,
                    ShuffleConvs_0_DownsampleUnit_conv2r_bias,
                    ShuffleConvs_0_DownsampleUnit_conv3r_weight,
                    ShuffleConvs_0_DownsampleUnit_conv3r_bias,
                    ShuffleConvs_0_DownsampleUnit_conv1l_weight,
                    ShuffleConvs_0_DownsampleUnit_conv1l_bias,
                    ShuffleConvs_0_DownsampleUnit_conv2l_weight,
                    ShuffleConvs_0_DownsampleUnit_conv2l_bias,
                    downsampleunit0_output);

void DownsampleUnit0(float input[1][24][32][32],
	float conv1r_weight[24][24][1][1],
	float conv1r_bias[24],
	float conv2r_weight[24][1][3][3],
	float conv2r_bias[24],
	float conv3r_weight[24][24][1][1],
	float conv3r_bias[24],
	float conv1l_weight[24][1][3][3],
	float conv1l_bias[24],
	float conv2l_weight[24][24][1][1],
	float conv2l_bias[24],
	float output[1][48][16][16]){

	float conv1r_output[1][24][32][32]={0};
	float conv2r_ourput[1][24][16][16]={0};
	float conv3r_ourput[1][24][16][16]={0};
	float conv1l_output[1][24][16][16]={0};
	float conv2l_output[1][24][16][16]={0};


	//conv1r
	subconv_1x1_32(input,conv1r_weight,conv1r_bias,conv1r_output);
	//conv2r
	subconv_3x3_32_stride_no_relu(conv1r_output,conv2r_weight,conv2r_bias,conv2r_ourput);
	//conv3r
	subconv_1x1_16(conv2r_ourput,conv3r_weight,conv3r_bias,conv3r_ourput);
	//conv1l
	subconv_3x3_32_stride_no_relu(input,conv1l_weight,conv1l_bias,conv1l_output);
	//conv2l
	subconv_1x1_16(conv1l_output,conv2l_weight,conv2l_bias,conv2l_output);

	//shuffle
	shuffle_24(conv3r_ourput,conv2l_output,output);//!!!!!!!! attention: for downsample, r l is swapped
}------------------------New DownsampleUnit0-------------*/ 
	//conv1r
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
            weights_24_24_1x1[co][ci][0][0] = shuffle_conv_1x1[co][ci][0][0];

    for(int i = 0; i<24; i++)
        bias_24[i] = bias[i+24];
	subconv_1x1_32(conv1_output,weights_24_24_1x1,bias_24,ShuffleConvs_0_DownsampleUnit__conv1r_output);
	//conv2r
    for(int co = 0;co<24;co++)
        for(int w = 0; w <3; w++)
            for(int h = 0; h <3;h++)
                weights_24_1_3x3[co][0][w][h] = shuffle_conv_3x3[co][0][w][h];
    for(int i = 0; i<24; i++)
	    bias_24[i] = bias[i+24*2];
    subconv_3x3_32_stride_no_relu(ShuffleConvs_0_DownsampleUnit__conv1r_output,weights_24_1_3x3,bias_24,buffer0_1_24_16x16);
	//conv3r
    for(int co = 0; co < 24; co ++)
	    for(int ci = 0; ci <24; ci ++)
	        weights_24_24_1x1[co][ci][0][0] = shuffle_conv_1x1[co+24][ci][0][0];
    for(int i = 0; i<24; i++)
        bias_24[i] = bias[i+24*3];
	subconv_1x1_16(buffer0_1_24_16x16,weights_24_24_1x1,bias_24,buffer1_1_24_16x16);
	//shuffle_r
    shuffle_24_l(buffer1_1_24_16x16, downsampleunit0_output);//!!!!!!!! attention: for downsample, r l is swapped
    //conv1l
    for(int co = 0;co<24;co++)
	    for(int w = 0; w <3; w++)
	        for(int h = 0; h <3;h++)
                weights_24_1_3x3[co][0][w][h] = shuffle_conv_3x3[co+24][0][w][h];
    for(int i = 0; i<24; i++)
        bias_24[i] = bias[i+24*4];
	subconv_3x3_32_stride_no_relu(conv1_output,weights_24_1_3x3,bias_24,buffer0_1_24_16x16);
	//conv2l
    for(int co = 0; co < 24; co ++)
	    for(int ci = 0; ci <24; ci ++)
	        weights_24_24_1x1[co][ci][0][0] = shuffle_conv_1x1[co+24*2][ci][0][0];
    for(int i = 0; i<24; i++)
        bias_24[i] = bias[i+24*5];
	subconv_1x1_16(buffer0_1_24_16x16,weights_24_24_1x1,bias_24,buffer1_1_24_16x16);
	//shuffle_l
	shuffle_24_r(buffer1_1_24_16x16, downsampleunit0_output);

/*---------------Original ShuffleUnit0-----------------------
//ShuffleUnit0_0
    ShuffleUnit0(downsampleunit0_output,
                 ShuffleConvs_0_ShuffleUnit0_0_conv1_weight,
                 ShuffleConvs_0_ShuffleUnit0_0_conv1_bias,
                 ShuffleConvs_0_ShuffleUnit0_0_conv2_weight,
                 ShuffleConvs_0_ShuffleUnit0_0_conv2_bias,
                 ShuffleConvs_0_ShuffleUnit0_0_conv3_weight,
                 ShuffleConvs_0_ShuffleUnit0_0_conv3_bias,
                 shuffleunit0_0_output
                 );
//ShuffleUnit0_1
    ShuffleUnit0(shuffleunit0_0_output,
                 ShuffleConvs_0_ShuffleUnit0_1_conv1_weight,
                 ShuffleConvs_0_ShuffleUnit0_1_conv1_bias,
                 ShuffleConvs_0_ShuffleUnit0_1_conv2_weight,
                 ShuffleConvs_0_ShuffleUnit0_1_conv2_bias,
                 ShuffleConvs_0_ShuffleUnit0_1_conv3_weight,
                 ShuffleConvs_0_ShuffleUnit0_1_conv3_bias,
                 shuffleunit0_1_output
                 );
//ShuffleUnit0_2
    ShuffleUnit0(shuffleunit0_1_output,
                 ShuffleConvs_0_ShuffleUnit0_2_conv1_weight,
                 ShuffleConvs_0_ShuffleUnit0_2_conv1_bias,
                 ShuffleConvs_0_ShuffleUnit0_2_conv2_weight,
                 ShuffleConvs_0_ShuffleUnit0_2_conv2_bias,
                 ShuffleConvs_0_ShuffleUnit0_2_conv3_weight,
                 ShuffleConvs_0_ShuffleUnit0_2_conv3_bias,
                 shuffleunit0_2_output
                 );
    
void ShuffleUnit0(float input[1][48][16][16],
	float conv1_weight[24][24][1][1],
	float conv1_bias[24],
	float conv2_weight[24][1][3][3],
	float conv2_bias[24],
	float conv3_weight[24][24][1][1],
	float conv3_bias[24],
	float output[1][48][16][16]
	){
	float left_part[1][24][16][16] = {0};
	float right_part[1][24][16][16] = {0};
	float conv1_output[1][24][16][16] = {0};
	float conv2_output[1][24][16][16] = {0};
	float conv3_output[1][24][16][16] = {0};
	//right
	for(int co = 0;co <24;co ++){
		for(int h=0;h<16;h++){
			for(int w = 0;w<16;w++){
				right_part[0][co][h][w] = input[0][24+co][h][w];
				left_part[0][co][h][w] = input[0][co][h][w];
			}
		}
	}
	//conv1
	subconv_1x1_16(right_part,conv1_weight,conv1_bias,conv1_output);
	//conv2
	subconv_3x3_16_no_relu(conv1_output,conv2_weight,conv2_bias,conv2_output);
	//conv3
	subconv_1x1_16(conv2_output,conv3_weight,conv3_bias,conv3_output);

	shuffle_24(left_part,conv3_output,output);
}-------------------New ShuffleUnit0-------------------------*/
//------------------ShuffleUnit0_0-----------------------------
    for(int co = 0;co <24;co ++){
		for(int h=0;h<16;h++){
			for(int w = 0;w<16;w++){
				buffer0_1_24_16x16[0][co][h][w] = downsampleunit0_output[0][24+co][h][w];
				//left_part[0][co][h][w] = downsampleunit0_output[0][co][h][w];
			}
		}
	}
	//conv1
	for(int co = 0; co < 24; co ++)
	    for(int ci = 0; ci <24; ci ++)
			weights_24_24_1x1[co][ci][0][0] = shuffle_conv_1x1[co+24*3][ci][0][0];
	for(int i = 0; i < 24; i++)
		bias_24[i] = bias[i+24*6];
	subconv_1x1_16(buffer0_1_24_16x16,weights_24_24_1x1,bias_24,buffer1_1_24_16x16);
	//conv2
	for(int co = 0;co<24;co++)
	    for(int w = 0; w <3; w++)
	        for(int h = 0; h <3;h++)
				weights_24_1_3x3[co][0][w][h] = shuffle_conv_3x3[co+24*2][0][w][h];
	for(int i = 0; i < 24; i++)
		bias_24[i] = bias[i+24*7];
	subconv_3x3_16_no_relu(buffer1_1_24_16x16,weights_24_1_3x3,bias_24,buffer0_1_24_16x16);
	//conv3
	for(int co = 0; co < 24; co ++)
	    for(int ci = 0; ci <24; ci ++)
			weights_24_24_1x1[co][ci][0][0] = shuffle_conv_1x1[co+24*4][ci][0][0];
	for(int i = 0; i < 24; i++)
		bias_24[i] = bias[i+24*8];		
	subconv_1x1_16(buffer0_1_24_16x16,weights_24_24_1x1,bias_24,buffer1_1_24_16x16);
    //shuffle


    for(int co = 0;co <24;co ++){
		for(int h=0;h<16;h++){
			for(int w = 0;w<16;w++){
				//right_part[0][co][h][w] = downsampleunit0_output[0][24+co][h][w];
				buffer0_1_24_16x16[0][co][h][w] = downsampleunit0_output[0][co][h][w];
			}
		}
	}
	shuffle_24(buffer0_1_24_16x16,buffer1_1_24_16x16,shuffleunit0_0_output);
//------------------ShuffleUnit0_1-----------------------------
    for(int co = 0;co <24;co ++){
		for(int h=0;h<16;h++){
			for(int w = 0;w<16;w++){
				buffer0_1_24_16x16[0][co][h][w] = shuffleunit0_0_output[0][24+co][h][w];
				//left_part[0][co][h][w] = downsampleunit0_output[0][co][h][w];
			}
		}
	}
	//conv1
	for(int co = 0; co < 24; co ++)
	    for(int ci = 0; ci <24; ci ++)
			weights_24_24_1x1[co][ci][0][0] = shuffle_conv_1x1[co+24*5][ci][0][0];
	for(int i = 0; i < 24; i++)
		bias_24[i] = bias[i+24*9];
	subconv_1x1_16(buffer0_1_24_16x16,weights_24_24_1x1,bias_24,buffer1_1_24_16x16);
	//conv2
	for(int co = 0;co<24;co++)
	    for(int w = 0; w <3; w++)
	        for(int h = 0; h <3;h++)
				weights_24_1_3x3[co][0][w][h] = shuffle_conv_3x3[co+24*3][0][w][h];
	for(int i = 0; i < 24; i++)
		bias_24[i] = bias[i+24*10];
	subconv_3x3_16_no_relu(buffer1_1_24_16x16,weights_24_1_3x3,bias_24,buffer0_1_24_16x16);
	//conv3
	for(int co = 0; co < 24; co ++)
	    for(int ci = 0; ci <24; ci ++)
			weights_24_24_1x1[co][ci][0][0] = shuffle_conv_1x1[co+24*6][ci][0][0];
	for(int i = 0; i < 24; i++)
		bias_24[i] = bias[i+24*11];		
	subconv_1x1_16(buffer0_1_24_16x16,weights_24_24_1x1,bias_24,buffer1_1_24_16x16);
    //shuffle
    for(int co = 0;co <24;co ++){
		for(int h=0;h<16;h++){
			for(int w = 0;w<16;w++){
				//right_part[0][co][h][w] = downsampleunit0_output[0][24+co][h][w];
				buffer0_1_24_16x16[0][co][h][w] = shuffleunit0_0_output[0][co][h][w];
			}
		}
	}
	shuffle_24(buffer0_1_24_16x16,buffer1_1_24_16x16,shuffleunit0_1_output);
//------------------ShuffleUnit0_2-----------------------------
    for(int co = 0;co <24;co ++){
		for(int h=0;h<16;h++){
			for(int w = 0;w<16;w++){
				buffer0_1_24_16x16[0][co][h][w] = shuffleunit0_1_output[0][24+co][h][w];
				//left_part[0][co][h][w] = downsampleunit0_output[0][co][h][w];
			}
		}
	}
	//conv1
	for(int co = 0; co < 24; co ++)
	    for(int ci = 0; ci <24; ci ++)
			weights_24_24_1x1[co][ci][0][0] = shuffle_conv_1x1[co+24*7][ci][0][0];
	for(int i = 0; i < 24; i++)
		bias_24[i] = bias[i+24*12];
	subconv_1x1_16(buffer0_1_24_16x16,weights_24_24_1x1,bias_24,buffer1_1_24_16x16);
	//conv2
	for(int co = 0;co<24;co++)
	    for(int w = 0; w <3; w++)
	        for(int h = 0; h <3;h++)
				weights_24_1_3x3[co][0][w][h] = shuffle_conv_3x3[co+24*4][0][w][h];
	for(int i = 0; i < 24; i++)
		bias_24[i] = bias[i+24*13];
	subconv_3x3_16_no_relu(buffer1_1_24_16x16,weights_24_1_3x3,bias_24,buffer0_1_24_16x16);
	//conv3
	for(int co = 0; co < 24; co ++)
	    for(int ci = 0; ci <24; ci ++)
			weights_24_24_1x1[co][ci][0][0] = shuffle_conv_1x1[co+24*8][ci][0][0];
	for(int i = 0; i < 24; i++)
		bias_24[i] = bias[i+24*14];		
	subconv_1x1_16(buffer0_1_24_16x16,weights_24_24_1x1,bias_24,buffer1_1_24_16x16);
    //shuffle
    for(int co = 0;co <24;co ++){
		for(int h=0;h<16;h++){
			for(int w = 0;w<16;w++){
				//right_part[0][co][h][w] = downsampleunit0_output[0][24+co][h][w];
				buffer0_1_24_16x16[0][co][h][w] = shuffleunit0_1_output[0][co][h][w];
			}
		}
	}
	shuffle_24(buffer0_1_24_16x16,buffer1_1_24_16x16,shuffleunit0_2_output);
/*-------------Original DownsampleUnit1----------------------
//DownsampleUnit1
    DownsampleUnit1(shuffleunit0_2_output,
                    ShuffleConvs_1_DownsampleUnit_conv1r_weight,
                    ShuffleConvs_1_DownsampleUnit_conv1r_bias,
                    ShuffleConvs_1_DownsampleUnit_conv2r_weight,
                    ShuffleConvs_1_DownsampleUnit_conv2r_bias,
                    ShuffleConvs_1_DownsampleUnit_conv3r_weight,
                    ShuffleConvs_1_DownsampleUnit_conv3r_bias,
                    ShuffleConvs_1_DownsampleUnit_conv1l_weight,
                    ShuffleConvs_1_DownsampleUnit_conv1l_bias,
                    ShuffleConvs_1_DownsampleUnit_conv2l_weight,
                    ShuffleConvs_1_DownsampleUnit_conv2l_bias,
                    downsampleunit1_output);
void DownsampleUnit1(float input[1][48][16][16],
	float conv1r_weight[48][48][1][1],
	float conv1r_bias[48],
	float conv2r_weight[48][1][3][3],
	float conv2r_bias[48],
	float conv3r_weight[48][48][1][1],
	float conv3r_bias[48],
	float conv1l_weight[48][1][3][3],
	float conv1l_bias[48],
	float conv2l_weight[48][48][1][1],
	float conv2l_bias[48],
	float output[1][96][8][8]){

	float conv1r_output[1][48][16][16]={0};
	float conv2r_ourput[1][48][8][8]={0};
	float conv3r_ourput[1][48][8][8]={0};
	float conv1l_output[1][48][8][8]={0};
	float conv2l_output[1][48][8][8]={0};


	//conv1r
	subconv_1x1_16p(input,conv1r_weight,conv1r_bias,conv1r_output);
	//conv2r
	subconv_3x3_16_stride_no_relu(conv1r_output,conv2r_weight,conv2r_bias,conv2r_ourput);
	//conv3r
	subconv_1x1_8(conv2r_ourput,conv3r_weight,conv3r_bias,conv3r_ourput);
	//conv1l
	subconv_3x3_16_stride_no_relu(input,conv1l_weight,conv1l_bias,conv1l_output);
	//conv2l
	subconv_1x1_8(conv1l_output,conv2l_weight,conv2l_bias,conv2l_output);

	//shuffle
	shuffle_48(conv3r_ourput,conv2l_output,output);


}*/
/*---------------New DownsampleUnit1-----------------------------------*/
	//conv1r
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] =shuffle_conv_1x1[co+24*9 + 24 *i][ci][0][0];

    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*15+k*24];
	subconv_1x1_16p(shuffleunit0_2_output,weights_48_48_1x1,bias_48,ShuffleConvs_1_DownsampleUnit__conv1r_output);
	//conv2r
    for(int co = 0;co<24;co++)
        for(int w = 0; w <3; w++)
            for(int h = 0; h <3;h++)
				for(int i = 0; i < 2; i++)
                	weights_48_1_3x3[co + i*24][0][w][h] = shuffle_conv_3x3[co+24*5+ i*24][0][w][h];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*17+k*24];
    subconv_3x3_16_stride_no_relu(ShuffleConvs_1_DownsampleUnit__conv1r_output,weights_48_1_3x3,bias_48,buffer0_1_48_8x8);

/*----------------Used for DEBUG------------------*/
    /*for(int co = 0; co < 5; co++){
        for(int w = 0; w < 5; w++){
            for(int h = 0; h < 5; h++){
                cout<< ShuffleConvs_1_DownsampleUnit__conv1r_output[0][co][w][h] <<" ";
            }cout<<endl;
        }cout<< endl;
    }cout<<"INPUT above"<<endl;*/
    /*for(int co = 0; co < 5; co++){
        for(int w = 0; w < 1; w++){
            for(int h = 0; h < 5; h++){
                cout<< weights_48_48_1x1[0][co][w][h] <<" ";
            }cout<<endl;
        }cout<< endl;
    }cout<<"WEIGHTS above"<<endl;*/
    /*for(int i = 0; i < 48; i++){
		cout<< bias_48[i]<<" ";
    }cout<<"BIAS above"<<endl;*/
    /*for(int co = 0; co < 5; co++){
        for(int w = 0; w < 1; w++){
            for(int h = 0; h < 5; h++){
                cout<< buffer0_1_48_8x8[0][co][w][h] <<" ";
            }cout<<endl;
        }cout<< endl;
    }cout<<"OUTPUT above"<<endl;*/

	//conv3r
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] = shuffle_conv_1x1[co+24*13 + 24 *i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*19+k*24];
	subconv_1x1_8(buffer0_1_48_8x8,weights_48_48_1x1,bias_48,buffer1_1_48_8x8);
	//shuffle_r
    shuffle_48_l(buffer1_1_48_8x8, downsampleunit1_output);//!!!!!!!! attention: for downsample, r l is swapped
    //conv1l
    for(int co = 0;co<24;co++)
        for(int w = 0; w <3; w++)
            for(int h = 0; h <3;h++)
				for(int i = 0; i < 2; i++)
                	weights_48_1_3x3[co+ i*24][0][w][h] = shuffle_conv_3x3[co+24*7+ i*24][0][w][h];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*21+k*24];
	subconv_3x3_16_stride_no_relu(shuffleunit0_2_output,weights_48_1_3x3,bias_48,buffer0_1_48_8x8);
	//conv2l
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] = shuffle_conv_1x1[co+24*17 + 24 *i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*23+k*24];
	subconv_1x1_8(buffer0_1_48_8x8,weights_48_48_1x1,bias_48,buffer1_1_48_8x8);
	//shuffle_l
	shuffle_48_r(buffer1_1_48_8x8, downsampleunit1_output);
/*--------------Original ShuffleUnit1---------------------
//ShuffleUnit1_0
    ShuffleUnit1(downsampleunit1_output,
                 ShuffleConvs_1_ShuffleUnit1_0_conv1_weight,
                 ShuffleConvs_1_ShuffleUnit1_0_conv1_bias,
                 ShuffleConvs_1_ShuffleUnit1_0_conv2_weight,
                 ShuffleConvs_1_ShuffleUnit1_0_conv2_bias,
                 ShuffleConvs_1_ShuffleUnit1_0_conv3_weight,
                 ShuffleConvs_1_ShuffleUnit1_0_conv3_bias,
                 shuffleunit1_0_output);
//ShuffleUnit1_1
    ShuffleUnit1(shuffleunit1_0_output,
                 ShuffleConvs_1_ShuffleUnit1_1_conv1_weight,
                 ShuffleConvs_1_ShuffleUnit1_1_conv1_bias,
                 ShuffleConvs_1_ShuffleUnit1_1_conv2_weight,
                 ShuffleConvs_1_ShuffleUnit1_1_conv2_bias,
                 ShuffleConvs_1_ShuffleUnit1_1_conv3_weight,
                 ShuffleConvs_1_ShuffleUnit1_1_conv3_bias,
                 shuffleunit1_1_output);
//ShuffleUnit1_2
    ShuffleUnit1(shuffleunit1_1_output,
                 ShuffleConvs_1_ShuffleUnit1_2_conv1_weight,
                 ShuffleConvs_1_ShuffleUnit1_2_conv1_bias,
                 ShuffleConvs_1_ShuffleUnit1_2_conv2_weight,
                 ShuffleConvs_1_ShuffleUnit1_2_conv2_bias,
                 ShuffleConvs_1_ShuffleUnit1_2_conv3_weight,
                 ShuffleConvs_1_ShuffleUnit1_2_conv3_bias,
                 shuffleunit1_2_output);
//ShuffleUnit1_3
    ShuffleUnit1(shuffleunit1_2_output,
                 ShuffleConvs_1_ShuffleUnit1_3_conv1_weight,
                 ShuffleConvs_1_ShuffleUnit1_3_conv1_bias,
                 ShuffleConvs_1_ShuffleUnit1_3_conv2_weight,
                 ShuffleConvs_1_ShuffleUnit1_3_conv2_bias,
                 ShuffleConvs_1_ShuffleUnit1_3_conv3_weight,
                 ShuffleConvs_1_ShuffleUnit1_3_conv3_bias,
                 shuffleunit1_3_output);
//ShuffleUnit1_4
    ShuffleUnit1(shuffleunit1_3_output,
                 ShuffleConvs_1_ShuffleUnit1_4_conv1_weight,
                 ShuffleConvs_1_ShuffleUnit1_4_conv1_bias,
                 ShuffleConvs_1_ShuffleUnit1_4_conv2_weight,
                 ShuffleConvs_1_ShuffleUnit1_4_conv2_bias,
                 ShuffleConvs_1_ShuffleUnit1_4_conv3_weight,
                 ShuffleConvs_1_ShuffleUnit1_4_conv3_bias,
                 shuffleunit1_4_output);
//ShuffleUnit1_5
    ShuffleUnit1(shuffleunit1_4_output,
                 ShuffleConvs_1_ShuffleUnit1_5_conv1_weight,
                 ShuffleConvs_1_ShuffleUnit1_5_conv1_bias,
                 ShuffleConvs_1_ShuffleUnit1_5_conv2_weight,
                 ShuffleConvs_1_ShuffleUnit1_5_conv2_bias,
                 ShuffleConvs_1_ShuffleUnit1_5_conv3_weight,
                 ShuffleConvs_1_ShuffleUnit1_5_conv3_bias,
                 shuffleunit1_5_output);
//ShuffleUnit1_6
    ShuffleUnit1(shuffleunit1_5_output,
                 ShuffleConvs_1_ShuffleUnit1_6_conv1_weight,
                 ShuffleConvs_1_ShuffleUnit1_6_conv1_bias,
                 ShuffleConvs_1_ShuffleUnit1_6_conv2_weight,
                 ShuffleConvs_1_ShuffleUnit1_6_conv2_bias,
                 ShuffleConvs_1_ShuffleUnit1_6_conv3_weight,
                 ShuffleConvs_1_ShuffleUnit1_6_conv3_bias,
                 shuffleunit1_6_output);
//ShuffleUnit1_7
    ShuffleUnit1(shuffleunit1_6_output,
                 ShuffleConvs_1_ShuffleUnit1_7_conv1_weight,
                 ShuffleConvs_1_ShuffleUnit1_7_conv1_bias,
                 ShuffleConvs_1_ShuffleUnit1_7_conv2_weight,
                 ShuffleConvs_1_ShuffleUnit1_7_conv2_bias,
                 ShuffleConvs_1_ShuffleUnit1_7_conv3_weight,
                 ShuffleConvs_1_ShuffleUnit1_7_conv3_bias,
                 shuffleunit1_7_output);

void ShuffleUnit1(float input[1][96][8][8],
	float conv1_weight[48][48][1][1],
	float conv1_bias[48],
	float conv2_weight[48][1][3][3],
	float conv2_bias[48],
	float conv3_weight[48][48][1][1],
	float conv3_bias[48],
	float output[1][96][8][8]
	){
	float left_part[1][48][8][8] = {0};
	float right_part[1][48][8][8] = {0};
	float conv1_output[1][48][8][8] = {0};
	float conv2_output[1][48][8][8] = {0};
	float conv3_output[1][48][8][8] = {0};

	//right
	for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				right_part[0][co][h][w] = input[0][48+co][h][w];
				left_part[0][co][h][w] = input[0][co][h][w];
			}
		}
	}
	//conv1
	subconv_1x1_8(right_part,conv1_weight,conv1_bias,conv1_output);


	//conv2
	subconv_3x3_8_no_relu(conv1_output,conv2_weight,conv2_bias,conv2_output);
	//conv3
	subconv_1x1_8(conv2_output,conv3_weight,conv3_bias,conv3_output);

	shuffle_48(left_part,conv3_output,output);
}*/
/*--------------New ShuffleUnit1---------------------*/
//------------------ShuffleUnit1_0-----------------------------
    for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				buffer0_1_48_8x8[0][co][h][w] = downsampleunit1_output[0][48+co][h][w];
				//left_part[0][co][h][w] = downsampleunit0_output[0][co][h][w];
			}
		}
	}
	//conv1
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] = shuffle_conv_1x1[co+24*21 + 24 *i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*25+k*24];
	subconv_1x1_8(buffer0_1_48_8x8,weights_48_48_1x1,bias_48,buffer1_1_48_8x8);
	//conv2
    for(int co = 0;co<24;co++)
        for(int w = 0; w <3; w++)
            for(int h = 0; h <3;h++)
				for(int i = 0; i < 2; i++)
                	weights_48_1_3x3[co+ i*24][0][w][h] = shuffle_conv_3x3[co+24*9+ i*24][0][w][h];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*27+k*24];
	subconv_3x3_8_no_relu(buffer1_1_48_8x8,weights_48_1_3x3,bias_48,buffer0_1_48_8x8);
	//conv3
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] = shuffle_conv_1x1[co+24*25 + 24 *i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*29+k*24];		
	subconv_1x1_8(buffer0_1_48_8x8,weights_48_48_1x1,bias_48,buffer1_1_48_8x8);
    //shuffle


    for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				//right_part[0][co][h][w] = downsampleunit0_output[0][24+co][h][w];
				buffer0_1_48_8x8[0][co][h][w] = downsampleunit1_output[0][co][h][w];
			}
		}
	}
	shuffle_48(buffer0_1_48_8x8,buffer1_1_48_8x8,shuffleunit1_0_output);
//------------------ShuffleUnit1_1-----------------------------
    for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				buffer0_1_48_8x8[0][co][h][w] = shuffleunit1_0_output[0][48+co][h][w];
				//left_part[0][co][h][w] = downsampleunit0_output[0][co][h][w];
			}
		}
	}
	//conv1
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] = shuffle_conv_1x1[co+24*29 + 24 *i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*31+k*24];
	subconv_1x1_8(buffer0_1_48_8x8,weights_48_48_1x1,bias_48,buffer1_1_48_8x8);
	//conv2
    for(int co = 0;co<24;co++)
        for(int w = 0; w <3; w++)
            for(int h = 0; h <3;h++)
				for(int i = 0; i < 2; i++)
                	weights_48_1_3x3[co+ i*24][0][w][h] = shuffle_conv_3x3[co+24*11+ i*24][0][w][h];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*33+k*24];
	subconv_3x3_8_no_relu(buffer1_1_48_8x8,weights_48_1_3x3,bias_48,buffer0_1_48_8x8);
	//conv3
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] = shuffle_conv_1x1[co+24*33 + 24 *i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*35+k*24];		
	subconv_1x1_8(buffer0_1_48_8x8,weights_48_48_1x1,bias_48,buffer1_1_48_8x8);
    //shuffle


    for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				//right_part[0][co][h][w] = downsampleunit0_output[0][24+co][h][w];
				buffer0_1_48_8x8[0][co][h][w] = shuffleunit1_0_output[0][co][h][w];
			}
		}
	}
	shuffle_48(buffer0_1_48_8x8,buffer1_1_48_8x8,shuffleunit1_1_output);

//------------------ShuffleUnit1_2-----------------------------
    for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				buffer0_1_48_8x8[0][co][h][w] = shuffleunit1_1_output[0][48+co][h][w];
				//left_part[0][co][h][w] = downsampleunit0_output[0][co][h][w];
			}
		}
	}
	//conv1
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] = shuffle_conv_1x1[co+24*37 + 24 *i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*37+k*24];
	subconv_1x1_8(buffer0_1_48_8x8,weights_48_48_1x1,bias_48,buffer1_1_48_8x8);
	//conv2
    for(int co = 0;co<24;co++)
        for(int w = 0; w <3; w++)
            for(int h = 0; h <3;h++)
				for(int i = 0; i < 2; i++)
                	weights_48_1_3x3[co+ i*24][0][w][h] = shuffle_conv_3x3[co+24*13+ i*24][0][w][h];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*39+k*24];
	subconv_3x3_8_no_relu(buffer1_1_48_8x8,weights_48_1_3x3,bias_48,buffer0_1_48_8x8);
	//conv3
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] = shuffle_conv_1x1[co+24*41 + 24 *i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*41+k*24];		
	subconv_1x1_8(buffer0_1_48_8x8,weights_48_48_1x1,bias_48,buffer1_1_48_8x8);
    //shuffle
    for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				//right_part[0][co][h][w] = downsampleunit0_output[0][24+co][h][w];
				buffer0_1_48_8x8[0][co][h][w] = shuffleunit1_1_output[0][co][h][w];
			}
		}
	}
	shuffle_48(buffer0_1_48_8x8,buffer1_1_48_8x8,shuffleunit1_2_output);
//------------------ShuffleUnit1_3-----------------------------
    for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				buffer0_1_48_8x8[0][co][h][w] = shuffleunit1_2_output[0][48+co][h][w];
				//left_part[0][co][h][w] = downsampleunit0_output[0][co][h][w];
			}
		}
	}
	//conv1
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] = shuffle_conv_1x1[co+24*45 + 24 *i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*43+k*24];
	subconv_1x1_8(buffer0_1_48_8x8,weights_48_48_1x1,bias_48,buffer1_1_48_8x8);
	//conv2
    for(int co = 0;co<24;co++)
        for(int w = 0; w <3; w++)
            for(int h = 0; h <3;h++)
				for(int i = 0; i < 2; i++)
                	weights_48_1_3x3[co+ i*24][0][w][h] = shuffle_conv_3x3[co+24*15+ i*24][0][w][h];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*45+k*24];
	subconv_3x3_8_no_relu(buffer1_1_48_8x8,weights_48_1_3x3,bias_48,buffer0_1_48_8x8);
	//conv3
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] = shuffle_conv_1x1[co+24*49 + 24 *i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*47+k*24];		
	subconv_1x1_8(buffer0_1_48_8x8,weights_48_48_1x1,bias_48,buffer1_1_48_8x8);
    //shuffle
    for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				//right_part[0][co][h][w] = downsampleunit0_output[0][24+co][h][w];
				buffer0_1_48_8x8[0][co][h][w] = shuffleunit1_2_output[0][co][h][w];
			}
		}
	}
	shuffle_48(buffer0_1_48_8x8,buffer1_1_48_8x8,shuffleunit1_3_output);
//------------------ShuffleUnit1_4-----------------------------
    for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				buffer0_1_48_8x8[0][co][h][w] = shuffleunit1_3_output[0][48+co][h][w];
				//left_part[0][co][h][w] = downsampleunit0_output[0][co][h][w];
			}
		}
	}
	//conv1
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] = shuffle_conv_1x1[co+24*53 + 24 *i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*49+k*24];
	subconv_1x1_8(buffer0_1_48_8x8,weights_48_48_1x1,bias_48,buffer1_1_48_8x8);
	//conv2
    for(int co = 0;co<24;co++)
        for(int w = 0; w <3; w++)
            for(int h = 0; h <3;h++)
				for(int i = 0; i < 2; i++)
                	weights_48_1_3x3[co+ i*24][0][w][h] = shuffle_conv_3x3[co+24*17+ i*24][0][w][h];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*51+k*24];
	subconv_3x3_8_no_relu(buffer1_1_48_8x8,weights_48_1_3x3,bias_48,buffer0_1_48_8x8);
	//conv3
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] = shuffle_conv_1x1[co+24*57 + 24 *i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*53+k*24];		
	subconv_1x1_8(buffer0_1_48_8x8,weights_48_48_1x1,bias_48,buffer1_1_48_8x8);
    //shuffle
    for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				//right_part[0][co][h][w] = downsampleunit0_output[0][24+co][h][w];
				buffer0_1_48_8x8[0][co][h][w] = shuffleunit1_3_output[0][co][h][w];
			}
		}
	}
	shuffle_48(buffer0_1_48_8x8,buffer1_1_48_8x8,shuffleunit1_4_output);
//------------------ShuffleUnit1_5-----------------------------
    for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				buffer0_1_48_8x8[0][co][h][w] = shuffleunit1_4_output[0][48+co][h][w];
				//left_part[0][co][h][w] = downsampleunit0_output[0][co][h][w];
			}
		}
	}
	//conv1
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] = shuffle_conv_1x1[co+24*61 + 24 *i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*55+k*24];
	subconv_1x1_8(buffer0_1_48_8x8,weights_48_48_1x1,bias_48,buffer1_1_48_8x8);
	//conv2
    for(int co = 0;co<24;co++)
        for(int w = 0; w <3; w++)
            for(int h = 0; h <3;h++)
				for(int i = 0; i < 2; i++)
                	weights_48_1_3x3[co+ i*24][0][w][h] = shuffle_conv_3x3[co+24*19+ i*24][0][w][h];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*57+k*24];
	subconv_3x3_8_no_relu(buffer1_1_48_8x8,weights_48_1_3x3,bias_48,buffer0_1_48_8x8);
	//conv3
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] = shuffle_conv_1x1[co+24*65 + 24 *i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*59+k*24];		
	subconv_1x1_8(buffer0_1_48_8x8,weights_48_48_1x1,bias_48,buffer1_1_48_8x8);
    //shuffle
    for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				//right_part[0][co][h][w] = downsampleunit0_output[0][24+co][h][w];
				buffer0_1_48_8x8[0][co][h][w] = shuffleunit1_4_output[0][co][h][w];
			}
		}
	}
	shuffle_48(buffer0_1_48_8x8,buffer1_1_48_8x8,shuffleunit1_5_output);
//------------------ShuffleUnit1_6-----------------------------
    for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				buffer0_1_48_8x8[0][co][h][w] = shuffleunit1_5_output[0][48+co][h][w];
				//left_part[0][co][h][w] = downsampleunit0_output[0][co][h][w];
			}
		}
	}
	//conv1
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] = shuffle_conv_1x1[co+24*69 + 24 *i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*61+k*24];
	subconv_1x1_8(buffer0_1_48_8x8,weights_48_48_1x1,bias_48,buffer1_1_48_8x8);
	//conv2
    for(int co = 0;co<24;co++)
        for(int w = 0; w <3; w++)
            for(int h = 0; h <3;h++)
				for(int i = 0; i < 2; i++)
                	weights_48_1_3x3[co+ i*24][0][w][h] = shuffle_conv_3x3[co+24*21+ i*24][0][w][h];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*63+k*24];
	subconv_3x3_8_no_relu(buffer1_1_48_8x8,weights_48_1_3x3,bias_48,buffer0_1_48_8x8);
	//conv3
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] = shuffle_conv_1x1[co+24*73 + 24 *i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*65+k*24];		
	subconv_1x1_8(buffer0_1_48_8x8,weights_48_48_1x1,bias_48,buffer1_1_48_8x8);
    //shuffle
    for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				//right_part[0][co][h][w] = downsampleunit0_output[0][24+co][h][w];
				buffer0_1_48_8x8[0][co][h][w] = shuffleunit1_5_output[0][co][h][w];
			}
		}
	}
	shuffle_48(buffer0_1_48_8x8,buffer1_1_48_8x8,shuffleunit1_6_output);
//------------------ShuffleUnit1_7-----------------------------
    for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				buffer0_1_48_8x8[0][co][h][w] = shuffleunit1_6_output[0][48+co][h][w];
				//left_part[0][co][h][w] = downsampleunit0_output[0][co][h][w];
			}
		}
	}
	//conv1
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] = shuffle_conv_1x1[co+24*77 + 24 *i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*67+k*24];
	subconv_1x1_8(buffer0_1_48_8x8,weights_48_48_1x1,bias_48,buffer1_1_48_8x8);
	//conv2
    for(int co = 0;co<24;co++)
        for(int w = 0; w <3; w++)
            for(int h = 0; h <3;h++)
				for(int i = 0; i < 2; i++)
                	weights_48_1_3x3[co+ i*24][0][w][h] = shuffle_conv_3x3[co+24*23+ i*24][0][w][h];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*69+k*24];
	subconv_3x3_8_no_relu(buffer1_1_48_8x8,weights_48_1_3x3,bias_48,buffer0_1_48_8x8);
	//conv3
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] = shuffle_conv_1x1[co+24*81 + 24 *i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*71+k*24];		
	subconv_1x1_8(buffer0_1_48_8x8,weights_48_48_1x1,bias_48,buffer1_1_48_8x8);
    //shuffle
    for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				//right_part[0][co][h][w] = downsampleunit0_output[0][24+co][h][w];
				buffer0_1_48_8x8[0][co][h][w] = shuffleunit1_6_output[0][co][h][w];
			}
		}
	}
	shuffle_48(buffer0_1_48_8x8,buffer1_1_48_8x8,shuffleunit1_7_output);
	
/*------------Original DwonsampleUnit2--------------------------
//DownsampleUnit2
    DownsampleUnit2(shuffleunit1_7_output,
                    ShuffleConvs_2_DownsampleUnit_conv1r_weight,
                    ShuffleConvs_2_DownsampleUnit_conv1r_bias,
                    ShuffleConvs_2_DownsampleUnit_conv2r_weight,
                    ShuffleConvs_2_DownsampleUnit_conv2r_bias,
                    ShuffleConvs_2_DownsampleUnit_conv3r_weight,
                    ShuffleConvs_2_DownsampleUnit_conv3r_bias,
                    ShuffleConvs_2_DownsampleUnit_conv1l_weight,
                    ShuffleConvs_2_DownsampleUnit_conv1l_bias,
                    ShuffleConvs_2_DownsampleUnit_conv2l_weight,
                    ShuffleConvs_2_DownsampleUnit_conv2l_bias,
                    downsampleunit2_output);
void DownsampleUnit2(float input[1][96][8][8],
	float conv1r_weight[96][96][1][1],
	float conv1r_bias[96],
	float conv2r_weight[96][1][3][3],
	float conv2r_bias[96],
	float conv3r_weight[96][96][1][1],
	float conv3r_bias[96],
	float conv1l_weight[96][1][3][3],
	float conv1l_bias[96],
	float conv2l_weight[96][96][1][1],
	float conv2l_bias[96],
	float output[1][192][4][4]){

	float conv1r_output[1][96][8][8]={0};
	float conv2r_ourput[1][96][4][4]={0};
	float conv3r_ourput[1][96][4][4]={0};
	float conv1l_output[1][96][4][4]={0};
	float conv2l_output[1][96][4][4]={0};


	//conv1r
	subconv_1x1_8p(input,conv1r_weight,conv1r_bias,conv1r_output);
	//conv2r
	subconv_3x3_8_stride_no_relu(conv1r_output,conv2r_weight,conv2r_bias,conv2r_ourput);
	//conv3r
	subconv_1x1_4(conv2r_ourput,conv3r_weight,conv3r_bias,conv3r_ourput);
	//conv1l
	subconv_3x3_8_stride_no_relu(input,conv1l_weight,conv1l_bias,conv1l_output);
	//conv2l
	subconv_1x1_4(conv1l_output,conv2l_weight,conv2l_bias,conv2l_output);

	//shuffle
	shuffle_96(conv3r_ourput,conv2l_output,output);


}*/
/*-----------New DownsampleUnit2-------------------------------*/
	//conv1r
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 16; i ++ )
            	weights_96_96_1x1[co/4 + i * 6][ci + 24*(co%4)][0][0] =shuffle_conv_1x1[co+24*85 + 24 * i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 4;k++)
        	bias_96[i+k*24] = bias[i+24*73+k*24];
	subconv_1x1_8p(shuffleunit1_7_output,weights_96_96_1x1,bias_96,ShuffleConvs_2_DownsampleUnit__conv1r_output);
	//conv2r
    for(int co = 0;co<24;co++)
        for(int w = 0; w <3; w++)
            for(int h = 0; h <3;h++)
				for(int i = 0; i < 4; i++)
                	weights_96_1_3x3[co + i*24][0][w][h] = shuffle_conv_3x3[co+24*25+ i*24][0][w][h];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 4;k++)
        	bias_96[i+k*24] = bias[i+24*77+k*24];
    subconv_3x3_8_stride_no_relu(ShuffleConvs_2_DownsampleUnit__conv1r_output,weights_96_1_3x3,bias_96,buffer0_1_96_4x4);
	//conv3r
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 16; i ++ )
            	weights_96_96_1x1[co/4 + i * 6][ci + 24*(co%4)][0][0] =shuffle_conv_1x1[co+24*101 + 24 * i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 4;k++)
        	bias_96[i+k*24] = bias[i+24*81+k*24];
	subconv_1x1_4(buffer0_1_96_4x4,weights_96_96_1x1,bias_96,buffer1_1_96_4x4);
	//shuffle_r
    shuffle_96_l(buffer1_1_96_4x4, downsampleunit2_output);//!!!!!!!! attention: for downsample, r l is swapped
    //conv1l
    for(int co = 0;co<24;co++)
        for(int w = 0; w <3; w++)
            for(int h = 0; h <3;h++)
				for(int i = 0; i < 4; i++)
                	weights_96_1_3x3[co + i*24][0][w][h] = shuffle_conv_3x3[co+24*29+ i*24][0][w][h];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 4;k++)
        	bias_96[i+k*24] = bias[i+24*85+k*24];
	subconv_3x3_8_stride_no_relu(shuffleunit1_7_output,weights_96_1_3x3,bias_96,buffer0_1_96_4x4);
	//conv2l
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 16; i ++ )
            	weights_96_96_1x1[co/4 + i * 6][ci + 24*(co%4)][0][0] =shuffle_conv_1x1[co+24*117 + 24 * i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 4;k++)
        	bias_96[i+k*24] = bias[i+24*89+k*24];
	subconv_1x1_4(buffer0_1_96_4x4,weights_96_96_1x1,bias_96,buffer1_1_96_4x4);
	//shuffle_l
	shuffle_96_r(buffer1_1_96_4x4, downsampleunit2_output);
/*----------------Original ShuffleUnit2----------------------
//ShuffleUnit2_0
    ShuffleUnit2(downsampleunit2_output,
                 ShuffleConvs_2_ShuffleUnit2_0_conv1_weight,
                 ShuffleConvs_2_ShuffleUnit2_0_conv1_bias,
                 ShuffleConvs_2_ShuffleUnit2_0_conv2_weight,
                 ShuffleConvs_2_ShuffleUnit2_0_conv2_bias,
                 ShuffleConvs_2_ShuffleUnit2_0_conv3_weight,
                 ShuffleConvs_2_ShuffleUnit2_0_conv3_bias,
                 shuffleunit2_0_output);
    //ShuffleUnit2_1
    ShuffleUnit2(shuffleunit2_0_output,
                 ShuffleConvs_2_ShuffleUnit2_1_conv1_weight,
                 ShuffleConvs_2_ShuffleUnit2_1_conv1_bias,
                 ShuffleConvs_2_ShuffleUnit2_1_conv2_weight,
                 ShuffleConvs_2_ShuffleUnit2_1_conv2_bias,
                 ShuffleConvs_2_ShuffleUnit2_1_conv3_weight,
                 ShuffleConvs_2_ShuffleUnit2_1_conv3_bias,
                 shuffleunit2_1_output);
    //ShuffleUnit2_2
    ShuffleUnit2(shuffleunit2_1_output,
                 ShuffleConvs_2_ShuffleUnit2_2_conv1_weight,
                 ShuffleConvs_2_ShuffleUnit2_2_conv1_bias,
                 ShuffleConvs_2_ShuffleUnit2_2_conv2_weight,
                 ShuffleConvs_2_ShuffleUnit2_2_conv2_bias,
                 ShuffleConvs_2_ShuffleUnit2_2_conv3_weight,
                 ShuffleConvs_2_ShuffleUnit2_2_conv3_bias,
                 shuffleunit2_2_output);

void ShuffleUnit2(float input[1][192][4][4],
	float conv1_weight[96][96][1][1],
	float conv1_bias[96],
	float conv2_weight[96][1][3][3],
	float conv2_bias[96],
	float conv3_weight[96][96][1][1],
	float conv3_bias[96],
	float output[1][192][4][4]
	){
	float left_part[1][96][4][4] = {0};
	float right_part[1][96][4][4] = {0};
	float conv1_output[1][96][4][4] = {0};
	float conv2_output[1][96][4][4] = {0};
	float conv3_output[1][96][4][4] = {0};

	//right
	for(int co = 0;co <96;co ++){
		for(int h=0;h<4;h++){
			for(int w = 0;w<4;w++){
				right_part[0][co][h][w] = input[0][96+co][h][w];
				left_part[0][co][h][w] = input[0][co][h][w];
			}
		}
	}
	//conv1
	subconv_1x1_4(right_part,conv1_weight,conv1_bias,conv1_output);


	//conv2
	subconv_3x3_4_no_relu(conv1_output,conv2_weight,conv2_bias,conv2_output);
	//conv3
	subconv_1x1_4(conv2_output,conv3_weight,conv3_bias,conv3_output);

	shuffle_96(left_part,conv3_output,output);
}*/
/*------------------New ShuffleUnit2-----------------------*/
/*------------------ShuffleUNit2_0-------------------------*/
	//right
	for(int co = 0;co <96;co ++){
		for(int h=0;h<4;h++){
			for(int w = 0;w<4;w++){
				buffer0_1_96_4x4[0][co][h][w] = downsampleunit2_output[0][96+co][h][w];
				//left_part[0][co][h][w] = input[0][co][h][w];
			}
		}
	}
	//conv1
	for(int co = 0; co < 24; co ++)
		for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 16;i++)
				weights_96_96_1x1[co/4 + i * 6][ci + 24*(co%4)][0][0] =shuffle_conv_1x1[co+24*133 + 24 * i][ci][0][0];
	for(int i = 0; i<24; i++)
		for(int k = 0;k < 4;k++)
				bias_96[i+k*24] = bias[i+24*93+k*24];
	subconv_1x1_4(buffer0_1_96_4x4,weights_96_96_1x1,bias_96,buffer1_1_96_4x4);
	//conv2
	for(int co = 0;co<24;co++)
		for(int w = 0; w <3; w++)
			for(int h = 0; h <3;h++)
				for(int i = 0; i < 4; i++)
					weights_96_1_3x3[co + i*24][0][w][h] = shuffle_conv_3x3[co+24*33+ i*24][0][w][h];
	for(int i = 0; i<24; i++)
		for(int k = 0;k < 4;k++)
				bias_96[i+k*24] = bias[i+24*97+k*24];
	subconv_3x3_4_no_relu(buffer1_1_96_4x4,weights_96_1_3x3,bias_96,buffer0_1_96_4x4);
	//conv3
	for(int co = 0; co < 24; co ++)
		for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 16;i++)
				weights_96_96_1x1[co/4 + i * 6][ci + 24*(co%4)][0][0] =shuffle_conv_1x1[co+24*149 + 24 * i][ci][0][0];
	for(int i = 0; i<24; i++)
		for(int k = 0;k < 4;k++)
				bias_96[i+k*24] = bias[i+24*101+k*24];
	subconv_1x1_4(buffer0_1_96_4x4,weights_96_96_1x1,bias_96,buffer1_1_96_4x4);
	for(int co = 0;co <96;co ++){
		for(int h=0;h<4;h++){
			for(int w = 0;w<4;w++){
				//buffer0_1_96_4x4[0][co][h][w] = downsampleunit2_output[0][96+co][h][w];
				buffer0_1_96_4x4[0][co][h][w] = downsampleunit2_output[0][co][h][w];
			}
		}
	}
	shuffle_96(buffer0_1_96_4x4,buffer1_1_96_4x4,shuffleunit2_0_output);

	/*------------------ShuffleUNit2_1-------------------------*/
	//right
	for(int co = 0;co <96;co ++){
		for(int h=0;h<4;h++){
			for(int w = 0;w<4;w++){
				buffer0_1_96_4x4[0][co][h][w] = shuffleunit2_0_output[0][96+co][h][w];
				//left_part[0][co][h][w] = input[0][co][h][w];
			}
		}
	}
	//conv1
	for(int co = 0; co < 24; co ++)
		for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 16;i++)
				weights_96_96_1x1[co/4 + i * 6][ci + 24*(co%4)][0][0] =shuffle_conv_1x1[co+24*165 + 24 * i][ci][0][0];
	for(int i = 0; i<24; i++)
		for(int k = 0;k < 4;k++)
				bias_96[i+k*24] = bias[i+24*105+k*24];
	subconv_1x1_4(buffer0_1_96_4x4,weights_96_96_1x1,bias_96,buffer1_1_96_4x4);
	//conv2
	for(int co = 0;co<24;co++)
		for(int w = 0; w <3; w++)
			for(int h = 0; h <3;h++)
				for(int i = 0; i < 4; i++)
					weights_96_1_3x3[co + i*24][0][w][h] = shuffle_conv_3x3[co+24*37+ i*24][0][w][h];
	for(int i = 0; i<24; i++)
		for(int k = 0;k < 4;k++)
				bias_96[i+k*24] = bias[i+24*109+k*24];
	subconv_3x3_4_no_relu(buffer1_1_96_4x4,weights_96_1_3x3,bias_96,buffer0_1_96_4x4);
	//conv3
	for(int co = 0; co < 24; co ++)
		for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 16;i++)
				weights_96_96_1x1[co/4 + i * 6][ci + 24*(co%4)][0][0] =shuffle_conv_1x1[co+24*181 + 24 * i][ci][0][0];
	for(int i = 0; i<24; i++)
		for(int k = 0;k < 4;k++)
				bias_96[i+k*24] = bias[i+24*113+k*24];
	subconv_1x1_4(buffer0_1_96_4x4,weights_96_96_1x1,bias_96,buffer1_1_96_4x4);
	for(int co = 0;co <96;co ++){
		for(int h=0;h<4;h++){
			for(int w = 0;w<4;w++){
				//buffer0_1_96_4x4[0][co][h][w] = downsampleunit2_output[0][96+co][h][w];
				buffer0_1_96_4x4[0][co][h][w] = shuffleunit2_0_output[0][co][h][w];
			}
		}
	}
	shuffle_96(buffer0_1_96_4x4,buffer1_1_96_4x4,shuffleunit2_1_output);

	/*------------------ShuffleUNit2_2-------------------------*/
	//right
	for(int co = 0;co <96;co ++){
		for(int h=0;h<4;h++){
			for(int w = 0;w<4;w++){
				buffer0_1_96_4x4[0][co][h][w] = shuffleunit2_1_output[0][96+co][h][w];
				//left_part[0][co][h][w] = input[0][co][h][w];
			}
		}
	}
	//conv1
	for(int co = 0; co < 24; co ++)
		for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 16;i++)
				weights_96_96_1x1[co/4 + i * 6][ci + 24*(co%4)][0][0] =shuffle_conv_1x1[co+24*197 + 24 * i][ci][0][0];
	for(int i = 0; i<24; i++)
		for(int k = 0;k < 4;k++)
				bias_96[i+k*24] = bias[i+24*117+k*24];
	subconv_1x1_4(buffer0_1_96_4x4,weights_96_96_1x1,bias_96,buffer1_1_96_4x4);
	//conv2
	for(int co = 0;co<24;co++)
		for(int w = 0; w <3; w++)
			for(int h = 0; h <3;h++)
				for(int i = 0; i < 4; i++)
					weights_96_1_3x3[co + i*24][0][w][h] = shuffle_conv_3x3[co+24*41+ i*24][0][w][h];
	for(int i = 0; i<24; i++)
		for(int k = 0;k < 4;k++)
				bias_96[i+k*24] = bias[i+24*121+k*24];
	subconv_3x3_4_no_relu(buffer1_1_96_4x4,weights_96_1_3x3,bias_96,buffer0_1_96_4x4);
	//conv3
	for(int co = 0; co < 24; co ++)
		for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 16;i++)
				weights_96_96_1x1[co/4 + i * 6][ci + 24*(co%4)][0][0] =shuffle_conv_1x1[co+24*213 + 24 * i][ci][0][0];
	for(int i = 0; i<24; i++)
		for(int k = 0;k < 4;k++)
				bias_96[i+k*24] = bias[i+24*125+k*24];
	subconv_1x1_4(buffer0_1_96_4x4,weights_96_96_1x1,bias_96,buffer1_1_96_4x4);
	for(int co = 0;co <96;co ++){
		for(int h=0;h<4;h++){
			for(int w = 0;w<4;w++){
				//buffer0_1_96_4x4[0][co][h][w] = downsampleunit2_output[0][96+co][h][w];
				buffer0_1_96_4x4[0][co][h][w] = shuffleunit2_1_output[0][co][h][w];
			}
		}
	}

	shuffle_96(buffer0_1_96_4x4,buffer1_1_96_4x4,shuffleunit2_2_output);

    conv_last(shuffleunit2_2_output,
              conv_last_weight,
              conv_last_bias,
              conv_last_output
              );

    avgpool(conv_last_output,avgpool_output);

    fc(avgpool_output,fc_weight,fc_bias,fc_output);
	/*
    for(int i = 0; i <3; i ++){
                	for(int j = 0; j <32; j++){
                		for(int k = 0; k <32; k++){
                			cout<<image[0][i][j][k]<<" ";
                		}cout<<endl;
                	}cout<<endl;
                }cout<<"image above"<<endl;

    for(int i = 0; i <24;i++){
    	cout<<conv1_bias[i]<<endl;
    }cout<<"conv1_bias above"<<endl;

    for(int w=0;w<32;w++){
                for(int h=0;h<32;h++){
                    cout<< conv1_output[0][0][w][h] <<" ";
                }cout<<endl;
        }cout<<"conv1_output above"<<endl;*/
    
/*----------------Used for DEBUG------------------*/
    /*for(int co = 0; co < 5; co++){
        for(int w = 0; w < 5; w++){
            for(int h = 0; h < 5; h++){
                cout<< buffer0_1_96_4x4[0][co][w][h] <<" ";
            }cout<<endl;
        }cout<< endl;
    }cout<<"INPUT above"<<endl;*/
    /*for(int co = 0; co < 5; co++){
        for(int w = 0; w < 1; w++){
            for(int h = 0; h < 5; h++){
                cout<< weights_48_48_1x1[0][co][w][h] <<" ";
            }cout<<endl;
        }cout<< endl;
    }cout<<"WEIGHTS above"<<endl;*/
    /*for(int i = 0; i < 48; i++){
		cout<< bias_48[i]<<" ";
    }cout<<"BIAS above"<<endl;*/
    /*for(int co = 0; co < 96; co++){
        for(int w = 0; w < 4; w++){
            for(int h = 0; h < 4; h++){
                cout<< buffer1_1_96_4x4[0][co][w][h] <<" ";
            }cout<<endl;
        }cout<< co <<endl;
    }cout<<"OUTPUT above"<<endl;*/

    for(int i =0;i<10;i++){
    	cout<<fc_output[i]<<endl;
    }cout<<"result above"<<endl;

}

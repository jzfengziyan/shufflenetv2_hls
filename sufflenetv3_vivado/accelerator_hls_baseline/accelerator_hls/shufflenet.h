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

void conv1(float input[1][3][32][32],
	float weight[24][3][3][3],
	float bias[24],
	float output[1][24][32][32]);


/**unit0**/

void subconv_1x1_32(float input[1][24][32][32],
	float weight[24][24][1][1],
	float bias[24],
	float output[1][24][32][32]);

void subconv_1x1_16(float input[1][24][16][16],
	float weight[24][24][1][1],
	float bias[24],
	float output[1][24][16][16]);

void subconv_3x3_32_stride_no_relu(float input[1][24][32][32],
	float weight[24][1][3][3],
	float bias[24],
	float output[1][24][16][16]);

void subconv_3x3_16_no_relu(float input[1][24][16][16],
	float weight[24][1][3][3],
	float bias[24],
	float output[1][24][16][16]);

void shuffle_24(float left[1][24][16][16],float right[1][24][16][16],float output[1][48][16][16]);


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
	float output[1][48][16][16]);



void ShuffleUnit0(float input[1][48][16][16],
	float conv1_weight[24][24][1][1],
	float conv1_bias[24],
	float conv2_weight[24][1][3][3],
	float conv2_bias[24],
	float conv3_weight[24][24][1][1],
	float conv3_bias[24],
	float output[1][48][16][16]
	);

/**unit1**/

void subconv_1x1_16p(float input[1][48][16][16],
	float weight[48][48][1][1],
	float bias[48],
	float output[1][48][16][16]);

void subconv_1x1_8(float input[1][48][8][8],
	float weight[48][48][1][1],
	float bias[48],
	float output[1][48][8][8]);


void subconv_3x3_16_stride_no_relu(float input[1][48][16][16],
	float weight[48][1][3][3],
	float bias[48],
	float output[1][48][8][8]);


void subconv_3x3_8_no_relu(float input[1][48][8][8],
	float weight[48][1][3][3],
	float bias[48],
	float output[1][48][8][8]);

void shuffle_48(float left[1][48][8][8],float right[1][48][8][8],float output[1][96][8][8]);


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
	float output[1][96][8][8]);


void ShuffleUnit1(float input[1][96][8][8],
	float conv1_weight[48][48][1][1],
	float conv1_bias[48],
	float conv2_weight[48][1][3][3],
	float conv2_bias[48],
	float conv3_weight[48][48][1][1],
	float conv3_bias[48],
	float output[1][96][8][8]
	);


/**unit2**/
void subconv_1x1_8p(float input[1][96][8][8],
	float weight[96][96][1][1],
	float bias[96],
	float output[1][96][8][8]);

void subconv_1x1_4(float input[1][96][4][4],
	float weight[96][96][1][1],
	float bias[96],
	float output[1][96][4][4]);

void subconv_3x3_8_stride_no_relu(float input[1][96][8][8],
	float weight[96][1][3][3],
	float bias[96],
	float output[1][96][4][4]);


void subconv_3x3_4_no_relu(float input[1][96][4][4],
	float weight[96][1][3][3],
	float bias[96],
	float output[1][96][4][4]);


void shuffle_96(float left[1][96][4][4],float right[1][96][4][4],float output[1][192][4][4]);

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
	float output[1][192][4][4]);

void ShuffleUnit2(float input[1][192][4][4],
	float conv1_weight[96][96][1][1],
	float conv1_bias[96],
	float conv2_weight[96][1][3][3],
	float conv2_bias[96],
	float conv3_weight[96][96][1][1],
	float conv3_bias[96],
	float output[1][192][4][4]
	);


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


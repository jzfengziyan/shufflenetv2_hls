#include <iostream>
#include <fstream>
#include <math.h>
#include <ap_fixed.h>
using namespace std;
typedef ap_fixed<8, 2, AP_RND, AP_SAT> FIX_8;
//typedef ap_int<8> FIX_8;
typedef ap_fixed<16, 4, AP_RND, AP_SAT> FIX_16;
//typedef ap_int<16> FIX_16;


//typedef float FIX_8;
void MUL_DP( FIX_8 a, FIX_8 b, FIX_8 w, FIX_16 rr[2]);


int ShuffleNetV2(FIX_8 image[1][3][32][32],
		FIX_8 conv1_weight[24][3][3][3],
		FIX_8 shuffle_conv_3x3[1080][1][3][3],
		FIX_8 shuffle_conv_1x1[5496][24][1][1],
		FIX_8 conv_last_weight[512][192][1][1],
		FIX_8 fc_weight[10][512],
		FIX_8 bias[3618],
		FIX_8 fc_output[1000]
		);

/*void conv1(FIX_8 input[1][3][32][32],
	FIX_8 weight[24][3][3][3],
	FIX_8 bias[24],
	FIX_8 output[1][24][32][32]);*/
void conv1_p(FIX_8 input[1][3][34][34],
	FIX_8 weight[24][3][3][3],
	FIX_8 bias[24],
	FIX_8 output[1][24][34][34]);

/**unit0**/

void subconv_1x1_32(FIX_8 input[1][24][32][32],
	FIX_8 weight[24][24][1][1],
	FIX_8 bias[24],
	FIX_8 output[1][24][32][32]);

void subconv_1x1_32_p(FIX_8 input[1][24][34][34],
	FIX_8 weight[24][24][1][1],
	FIX_8 bias[24],
	FIX_8 output[1][24][34][34]);

void subconv_1x1_16(FIX_8 input[1][24][16][16],
	FIX_8 weight[24][24][1][1],
	FIX_8 bias[24],
	FIX_8 output[1][24][16][16]);

void subconv_1x1_16_p(FIX_8 input[1][24][18][18],
	FIX_8 weight[24][24][1][1],
	FIX_8 bias[24],
	FIX_8 output[1][24][18][18]);

void subconv_3x3_32_stride_no_relu(FIX_8 input[1][24][32][32],
	FIX_8 weight[24][1][3][3],
	FIX_8 bias[24],
	FIX_8 output[1][24][16][16]);

void subconv_3x3_32_stride_no_relu_p(FIX_8 input[1][24][34][34],
	FIX_8 weight[24][1][3][3],
	FIX_8 bias[24],
	FIX_8 output[1][24][18][18]);

void subconv_3x3_16_no_relu(FIX_8 input[1][24][16][16],
	FIX_8 weight[24][1][3][3],
	FIX_8 bias[24],
	FIX_8 output[1][24][16][16]);

void subconv_3x3_16_no_relu_p(FIX_8 input[1][24][18][18],
	FIX_8 weight[24][1][3][3],
	FIX_8 bias[24],
	FIX_8 output[1][24][18][18]);

void shuffle_24(FIX_8 left[1][24][16][16],FIX_8 right[1][24][16][16],FIX_8 output[1][48][16][16]);
void shuffle_24_p(FIX_8 left[1][24][18][18],FIX_8 right[1][24][18][18],FIX_8 output[1][48][18][18]);
void shuffle_24_r(FIX_8 right[1][24][16][16],FIX_8 output[1][48][16][16]);

void shuffle_24_l(FIX_8 left[1][24][16][16],FIX_8 output[1][48][16][16]);

void shuffle_24_l_p(FIX_8 left[1][24][18][18], FIX_8 output[1][48][18][18]);

void shuffle_24_r_p(FIX_8 right[1][24][18][18], FIX_8 output[1][48][18][18]);

void DownsampleUnit0(FIX_8 input[1][24][32][32],
	FIX_8 conv1r_weight[24][24][1][1],
	FIX_8 conv1r_bias[24],
	FIX_8 conv2r_weight[24][1][3][3],
	FIX_8 conv2r_bias[24],
	FIX_8 conv3r_weight[24][24][1][1],
	FIX_8 conv3r_bias[24],
	FIX_8 conv1l_weight[24][1][3][3],
	FIX_8 conv1l_bias[24],
	FIX_8 conv2l_weight[24][24][1][1],
	FIX_8 conv2l_bias[24],
	FIX_8 output[1][48][16][16]);



void ShuffleUnit0(FIX_8 input[1][48][16][16],
	FIX_8 conv1_weight[24][24][1][1],
	FIX_8 conv1_bias[24],
	FIX_8 conv2_weight[24][1][3][3],
	FIX_8 conv2_bias[24],
	FIX_8 conv3_weight[24][24][1][1],
	FIX_8 conv3_bias[24],
	FIX_8 output[1][48][16][16]
	);

/**unit1**/

void subconv_1x1_16p(FIX_8 input[1][48][16][16],
	FIX_8 weight[48][48][1][1],
	FIX_8 bias[48],
	FIX_8 output[1][48][16][16]);

void subconv_1x1_16p_p(FIX_8 input[1][48][18][18],
	FIX_8 weight[48][48][1][1],
	FIX_8 bias[48],
	FIX_8 output[1][48][18][18]);

void subconv_1x1_8(FIX_8 input[1][48][8][8],
	FIX_8 weight[48][48][1][1],
	FIX_8 bias[48],
	FIX_8 output[1][48][8][8]);

void subconv_1x1_8_p(FIX_8 input[1][48][10][10],
	FIX_8 weight[48][48][1][1],
	FIX_8 bias[48],
	FIX_8 output[1][48][10][10]);

void subconv_3x3_16_stride_no_relu(FIX_8 input[1][48][16][16],
	FIX_8 weight[48][1][3][3],
	FIX_8 bias[48],
	FIX_8 output[1][48][8][8]);

void subconv_3x3_16_stride_no_relu_p(FIX_8 input[1][48][18][18],
	FIX_8 weight[48][1][3][3],
	FIX_8 bias[48],
	FIX_8 output[1][48][10][10]);

void subconv_3x3_8_no_relu(FIX_8 input[1][48][8][8],
	FIX_8 weight[48][1][3][3],
	FIX_8 bias[48],
	FIX_8 output[1][48][8][8]);

void subconv_3x3_8_no_relu_p(FIX_8 input[1][48][10][10],
	FIX_8 weight[48][1][3][3],
	FIX_8 bias[48],
	FIX_8 output[1][48][10][10]);

void shuffle_48(FIX_8 left[1][48][8][8],FIX_8 right[1][48][8][8],FIX_8 output[1][96][8][8]);
void shuffle_48_p(FIX_8 left[1][48][10][10],FIX_8 right[1][48][10][10],FIX_8 output[1][96][10][10]);

void shuffle_48_l(FIX_8 left[1][48][8][8], FIX_8 output[1][96][8][8]);

void shuffle_48_l_p(FIX_8 left[1][48][10][10], FIX_8 output[1][96][10][10]);

void shuffle_48_r(FIX_8 right[1][48][8][8], FIX_8 output[1][96][8][8]);

void shuffle_48_r_p(FIX_8 right[1][48][10][10], FIX_8 output[1][96][10][10]);

void DownsampleUnit1(FIX_8 input[1][48][16][16],
	FIX_8 conv1r_weight[48][48][1][1],
	FIX_8 conv1r_bias[48],
	FIX_8 conv2r_weight[48][1][3][3],
	FIX_8 conv2r_bias[48],
	FIX_8 conv3r_weight[48][48][1][1],
	FIX_8 conv3r_bias[48],
	FIX_8 conv1l_weight[48][1][3][3],
	FIX_8 conv1l_bias[48],
	FIX_8 conv2l_weight[48][48][1][1],
	FIX_8 conv2l_bias[48],
	FIX_8 output[1][96][8][8]);



void ShuffleUnit1(FIX_8 input[1][96][8][8],
	FIX_8 conv1_weight[48][48][1][1],
	FIX_8 conv1_bias[48],
	FIX_8 conv2_weight[48][1][3][3],
	FIX_8 conv2_bias[48],
	FIX_8 conv3_weight[48][48][1][1],
	FIX_8 conv3_bias[48],
	FIX_8 output[1][96][8][8]
	);


/**unit2**/
void subconv_1x1_8p(FIX_8 input[1][96][8][8],
	FIX_8 weight[96][96][1][1],
	FIX_8 bias[96],
	FIX_8 output[1][96][8][8]);

void subconv_1x1_8p_p(FIX_8 input[1][96][10][10],
	FIX_8 weight[96][96][1][1],
	FIX_8 bias[96],
	FIX_8 output[1][96][10][10]);

void subconv_1x1_4(FIX_8 input[1][96][4][4],
	FIX_8 weight[96][96][1][1],
	FIX_8 bias[96],
	FIX_8 output[1][96][4][4]);

void subconv_1x1_4_p(FIX_8 input[1][96][6][6],
	FIX_8 weight[96][96][1][1],
	FIX_8 bias[96],
	FIX_8 output[1][96][6][6]);

void subconv_3x3_8_stride_no_relu(FIX_8 input[1][96][8][8],
	FIX_8 weight[96][1][3][3],
	FIX_8 bias[96],
	FIX_8 output[1][96][4][4]);

void subconv_3x3_8_stride_no_relu_p(FIX_8 input[1][96][10][10],
	FIX_8 weight[96][1][3][3],
	FIX_8 bias[96],
	FIX_8 output[1][96][6][6]);

void subconv_3x3_4_no_relu(FIX_8 input[1][96][4][4],
	FIX_8 weight[96][1][3][3],
	FIX_8 bias[96],
	FIX_8 output[1][96][4][4]);

void subconv_3x3_4_no_relu_p(FIX_8 input[1][96][6][6],
	FIX_8 weight[96][1][3][3],
	FIX_8 bias[96],
	FIX_8 output[1][96][6][6]);


void shuffle_96(FIX_8 left[1][96][4][4],FIX_8 right[1][96][4][4],FIX_8 output[1][192][4][4]);
void shuffle_96_p(FIX_8 left[1][96][6][6],FIX_8 right[1][96][6][6],FIX_8 output[1][192][6][6]);

void shuffle_96_l(FIX_8 left[1][96][4][4], FIX_8 output[1][192][4][4]);
void shuffle_96_l_p(FIX_8 left[1][96][6][6], FIX_8 output[1][192][6][6]);
void shuffle_96_r(FIX_8 right[1][96][4][4], FIX_8 output[1][192][4][4]);
void shuffle_96_r_p(FIX_8 right[1][96][6][6], FIX_8 output[1][192][6][6]);

void DownsampleUnit2(FIX_8 input[1][96][8][8],
	FIX_8 conv1r_weight[96][96][1][1],
	FIX_8 conv1r_bias[96],
	FIX_8 conv2r_weight[96][1][3][3],
	FIX_8 conv2r_bias[96],
	FIX_8 conv3r_weight[96][96][1][1],
	FIX_8 conv3r_bias[96],
	FIX_8 conv1l_weight[96][1][3][3],
	FIX_8 conv1l_bias[96],
	FIX_8 conv2l_weight[96][96][1][1],
	FIX_8 conv2l_bias[96],
	FIX_8 output[1][192][4][4]);

void ShuffleUnit2(FIX_8 input[1][192][4][4],
	FIX_8 conv1_weight[96][96][1][1],
	FIX_8 conv1_bias[96],
	FIX_8 conv2_weight[96][1][3][3],
	FIX_8 conv2_bias[96],
	FIX_8 conv3_weight[96][96][1][1],
	FIX_8 conv3_bias[96],
	FIX_8 output[1][192][4][4]
	);


void conv_last(FIX_8 input[1][192][4][4],
	FIX_8 weight[512][192][1][1],
	FIX_8 bias[512],
	FIX_8 output[1][512][4][4]);

void avgpool(FIX_8 input[1][512][4][4],
	FIX_8 output[512]);

void fc(FIX_8 input[512],
	FIX_8 weight[10][512],
	FIX_8 bias[10],
	FIX_8 output[10]);

void conv_last_q(FIX_8 input[1][96][4][4],
		FIX_8 weight[256][96][1][1],
		FIX_8 bias[256],
		FIX_8 output[1][256][4][4]);

#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

void conv1(float input[1][3][32][32],
	float weight[24][3][3][3],
	float bias[24],
	float output[1][24][32][32]){
	for(int co = 0;co<24;co++){
		for(int h = 0;h<32;h++){
			for(int w = 0;w<32;w++){
				float sum = 0;
				for(int ci = 0;ci<3;ci++){
					for(int m = 0;m<3;m++){
						for(int n = 0;n<3;n++){
							sum += weight[co][ci][m][n] * (( h+m-1 >= 0 && w+n-1 >= 0 && h+m-1 < 32 && w+n-1 < 32) ?input[0][ci][h+m-1][w+n-1]:0);
						}
					}
				}
				float result = sum + bias[co];
				output[0][co][h][w] = (result > 0)? result : 0.0f;
			}
		}
	}
}



/**unit0**/

void subconv_1x1_32(float input[1][24][32][32],
	float weight[24][24][1][1],
	float bias[24],
	float output[1][24][32][32]){

	for(int co = 0;co<24;co++){
		for(int h = 0;h<32;h++){
			for(int w = 0;w<32;w++){
				float sum = 0;
				for(int ci = 0;ci<24;ci++){
					sum += weight[co][ci][0][0]*input[0][ci][h][w];
				}
				float result = sum + bias[co];
                output[0][co][h][w] = (result > 0)? result : 0.0f;
			}
		}
	}

}

void subconv_1x1_16(float input[1][24][16][16],
	float weight[24][24][1][1],
	float bias[24],
	float output[1][24][16][16]){


	for(int co = 0;co<24;co++){
		for(int h = 0;h<16;h++){
			for(int w = 0;w<16;w++){
				float sum = 0;
				for(int ci = 0;ci<24;ci++){
					sum += weight[co][ci][0][0]*input[0][ci][h][w];




				}
				float result = sum + bias[co];
                output[0][co][h][w] = (result > 0)? result : 0.0f;
			}
		}
	}
}

void subconv_3x3_32_stride_no_relu(float input[1][24][32][32],
	float weight[24][1][3][3],
	float bias[24],
	float output[1][24][16][16]){
	for(int co = 0;co<24;co++){
		for(int h = 0;h<16;h++){
			for(int w = 0;w<16;w++){
				float sum = 0;
				for(int m = 0;m<3;m++){
						for(int n = 0;n<3;n++){
							sum += weight[co][0][m][n] * (( h*2+m-1 >= 0 && w*2+n-1 >= 0 && h*2+m-1 < 32 && w*2+n-1 < 32) ?input[0][co][h*2+m-1][w*2+n-1]:0);
						}
					}
				float result = sum + bias[co];
				output[0][co][h][w] = result;

			}
		}
	}

}


void subconv_3x3_16_no_relu(float input[1][24][16][16],
	float weight[24][1][3][3],
	float bias[24],
	float output[1][24][16][16]){
	for(int co = 0;co<24;co++){
		for(int h = 0;h<16;h++){
			for(int w = 0;w<16;w++){
				float sum = 0;
				for(int m = 0;m<3;m++){
						for(int n = 0;n<3;n++){
							sum += weight[co][0][m][n] * (( h+m-1 >= 0 && w+n-1 >= 0 && h+m-1 < 16 && w+n-1 < 16) ?input[0][co][h+m-1][w+n-1]:0);
						}
					}
				float result = sum + bias[co];
				output[0][co][h][w] = result;

			}
		}
	}
}

void shuffle_24(float left[1][24][16][16],float right[1][24][16][16],float output[1][48][16][16]){
	for(int co = 0;co <48;co ++){
		for(int h=0;h<16;h++){
			for(int w = 0;w<16;w++){
				if (co%2 == 0)output[0][co][h][w] = left[0][co/2][h][w];
				else output[0][co][h][w] = right[0][co/2][h][w];
			}
		}
	}
}

void shuffle_24_l(float left[1][24][16][16], float output[1][48][16][16]){
	for(int co = 0;co <48;co ++){
		for(int h=0;h<16;h++){
			for(int w = 0;w<16;w++){
				if (co%2 == 0)output[0][co][h][w] = left[0][co/2][h][w];
				//else output[0][co][h][w] = right[0][co/2][h][w];
			}
		}
	}
}

void shuffle_24_r(float right[1][24][16][16], float output[1][48][16][16]){
	for(int co = 0;co <48;co ++){
		for(int h=0;h<16;h++){
			for(int w = 0;w<16;w++){
				//if (co%2 == 0)output[0][co][h][w] = left[0][co/2][h][w];
				if(co%2 != 0) output[0][co][h][w] = right[0][co/2][h][w];
			}
		}
	}
}

/*-----------Original DownsampleUnit0---------------------------
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
	shuffle_24(conv3r_ourput,conv2l_output,output);
}-------------------------------------*/


/*-----------Original ShuffleUnit0------------------------
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
}*/

/**unit1**/

void subconv_1x1_16p(float input[1][48][16][16],
	float weight[48][48][1][1],
	float bias[48],
	float output[1][48][16][16]){

	for(int co = 0;co<48;co++){
		for(int h = 0;h<16;h++){
			for(int w = 0;w<16;w++){
				float sum = 0;
				for(int ci = 0;ci<48;ci++){
					sum += weight[co][ci][0][0]*input[0][ci][h][w];




				}
				float result = sum + bias[co];
                output[0][co][h][w] = (result > 0)? result : 0.0f;
			}
		}
	}

}

void subconv_1x1_8(float input[1][48][8][8],
	float weight[48][48][1][1],
	float bias[48],
	float output[1][48][8][8]){


	for(int co = 0;co<48;co++){
		for(int h = 0;h<8;h++){
			for(int w = 0;w<8;w++){
				float sum = 0;
				for(int ci = 0;ci<48;ci++){
					sum += weight[co][ci][0][0]*input[0][ci][h][w];
				}
				float result = sum + bias[co];
                output[0][co][h][w] = (result > 0)? result : 0.0f;
			}
		}
	}
}


void subconv_3x3_16_stride_no_relu(float input[1][48][16][16],
	float weight[48][1][3][3],
	float bias[48],
	float output[1][48][8][8]){
	for(int co = 0;co<48;co++){
		for(int h = 0;h<8;h++){
			for(int w = 0;w<8;w++){
				float sum = 0;
				for(int m = 0;m<3;m++){
						for(int n = 0;n<3;n++){
							sum += weight[co][0][m][n] * (( h*2+m-1 >= 0 && w*2+n-1 >= 0 && h*2+m-1 < 16 && w*2+n-1 < 16) ?input[0][co][h*2+m-1][w*2+n-1]:0);
						}
					}
				float result = sum + bias[co];
				output[0][co][h][w] = result;

			}
		}
	}
}


void subconv_3x3_8_no_relu(float input[1][48][8][8],
	float weight[48][1][3][3],
	float bias[48],
	float output[1][48][8][8]){
	for(int co = 0;co<48;co++){
		for(int h = 0;h<8;h++){
			for(int w = 0;w<8;w++){
				float sum = 0;
				for(int m = 0;m<3;m++){
						for(int n = 0;n<3;n++){
							sum += weight[co][0][m][n] * (( h+m-1 >= 0 && w+n-1 >= 0 && h+m-1 < 8 && w+n-1 < 8) ?input[0][co][h+m-1][w+n-1]:0);
						}
					}
				float result = sum + bias[co];
				output[0][co][h][w] = result;
			}
		}
	}
}

void shuffle_48(float left[1][48][8][8],float right[1][48][8][8],float output[1][96][8][8]){
	for(int co = 0;co <96;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				if (co%2 == 0)output[0][co][h][w] = left[0][co/2][h][w];
				else output[0][co][h][w] = right[0][co/2][h][w];
			}
		}
	}
}

void shuffle_48_l(float left[1][48][8][8], float output[1][96][8][8]){
	for(int co = 0;co <96;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				if (co%2 == 0)output[0][co][h][w] = left[0][co/2][h][w];
				//else output[0][co][h][w] = right[0][co/2][h][w];
			}
		}
	}
}

void shuffle_48_r(float right[1][48][8][8], float output[1][96][8][8]){
	for(int co = 0;co <96;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				//if (co%2 == 0)output[0][co][h][w] = left[0][co/2][h][w];
				if(co%2 != 0) output[0][co][h][w] = right[0][co/2][h][w];
			}
		}
	}
}

/*-----Original DownsampleUnit1--------------------
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

/*------------Original ShuffleUnit1-------------
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


/**unit2**/
void subconv_1x1_8p(float input[1][96][8][8],
	float weight[96][96][1][1],
	float bias[96],
	float output[1][96][8][8]){

	for(int co = 0;co<96;co++){
		for(int h = 0;h<8;h++){
			for(int w = 0;w<8;w++){
				float sum = 0;
				for(int ci = 0;ci<96;ci++){
					sum += weight[co][ci][0][0]*input[0][ci][h][w];
				}
				float result = sum + bias[co];
                output[0][co][h][w] = (result > 0)? result : 0.0f;
			}
		}
	}
}

void subconv_1x1_4(float input[1][96][4][4],
	float weight[96][96][1][1],
	float bias[96],
	float output[1][96][4][4]){


	for(int co = 0;co<96;co++){
		for(int h = 0;h<4;h++){
			for(int w = 0;w<4;w++){
				float sum = 0;
				for(int ci = 0;ci<96;ci++){
					sum += weight[co][ci][0][0]*input[0][ci][h][w];
				}
				float result = sum + bias[co];
                output[0][co][h][w] = (result > 0)? result : 0.0f;
			}
		}
	}
}

void subconv_3x3_8_stride_no_relu(float input[1][96][8][8],
	float weight[96][1][3][3],
	float bias[96],
	float output[1][96][4][4]){
	for(int co = 0;co<96;co++){
		for(int h = 0;h<4;h++){
			for(int w = 0;w<4;w++){
				float sum = 0;
				for(int m = 0;m<3;m++){
						for(int n = 0;n<3;n++){
							sum += weight[co][0][m][n] * (( h*2+m-1 >= 0 && w*2+n-1 >= 0 && h*2+m-1 < 8 && w*2+n-1 < 8) ?input[0][co][h*2+m-1][w*2+n-1]:0);
						}
					}
				float result = sum + bias[co];
				output[0][co][h][w] = result;

			}
		}
	}
}


void subconv_3x3_4_no_relu(float input[1][96][4][4],
	float weight[96][1][3][3],
	float bias[96],
	float output[1][96][4][4]){
	for(int co = 0;co<96;co++){
		for(int h = 0;h<4;h++){
			for(int w = 0;w<4;w++){
				float sum = 0;
				for(int m = 0;m<3;m++){
						for(int n = 0;n<3;n++){
							sum += weight[co][0][m][n] * (( h+m-1 >= 0 && w+n-1 >= 0 && h+m-1 < 4 && w+n-1 < 4) ?input[0][co][h+m-1][w+n-1]:0);
						}
					}
				float result = sum + bias[co];
				output[0][co][h][w] = result;
			}
		}
	}
}


void shuffle_96(float left[1][96][4][4],float right[1][96][4][4],float output[1][192][4][4]){
	for(int co = 0;co <192;co ++){
		for(int h=0;h<4;h++){
			for(int w = 0;w<4;w++){
				if (co%2 == 0)output[0][co][h][w] = left[0][co/2][h][w];
				else output[0][co][h][w] = right[0][co/2][h][w];
			}
		}
	}
}

void shuffle_96_l(float left[1][96][4][4], float output[1][192][4][4]){
	for(int co = 0;co <192;co ++){
		for(int h=0;h<4;h++){
			for(int w = 0;w<4;w++){
				if (co%2 == 0)output[0][co][h][w] = left[0][co/2][h][w];
				//else output[0][co][h][w] = right[0][co/2][h][w];
			}
		}
	}
}

void shuffle_96_r(float right[1][96][4][4], float output[1][192][4][4]){
	for(int co = 0;co <192;co ++){
		for(int h=0;h<4;h++){
			for(int w = 0;w<4;w++){
				//if (co%2 == 0)output[0][co][h][w] = left[0][co/2][h][w];
				if(co%2 != 0) output[0][co][h][w] = right[0][co/2][h][w];
			}
		}
	}
}

/*---------------Original DownsampleUnit2------------------
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
/*------------Original ShuffleUnit2-----------------
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


void conv_last(float input[1][192][4][4],
	float weight[512][192][1][1],
	float bias[512],
	float output[1][512][4][4]){

	for(int co = 0;co<512;co++){
		for(int h = 0;h<4;h++){
			for(int w = 0;w<4;w++){
				float sum = 0;
				for(int ci = 0;ci<192;ci++){
					sum += weight[co][ci][0][0]*input[0][ci][h][w];
				}
				float result = sum + bias[co];
                output[0][co][h][w] = (result > 0)? result : 0.0f;
			}
		}
	}
}

void avgpool(float input[1][512][4][4],
	float output[512]){

	for(int co = 0;co<512;co++){
		float sum = 0;
		for(int h = 0;h<4;h++){
			for(int w=0;w<4;w++){
				sum += input[0][co][h][w];
			}
		}
		output[co] = sum/16;
	}
}

void fc(float input[512],
	float weight[10][512],
	float bias[10],
	float output[10]){

	for(int co = 0;co<10;co++){
		float sum = 0;
		for(int ci = 0;ci<512;ci++){
			sum += weight[co][ci] * input[ci];

		}
		float result = sum + bias[co];
		output[co] = result;
	}
}



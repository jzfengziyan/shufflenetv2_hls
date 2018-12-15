#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
/**conv1**/
void conv1_p(float input[1][3][34][34],
	float weight[24][3][3][3],
	float bias[24],
	float output[1][24][34][34]){
//bias
	for(int co = 0;co<24;co++){
		for(int h = 1;h<33;h++){
			for(int w = 1;w<33;w++){
				output[0][co][h][w] = bias[co];
			}
		}
	}
//conv
	for(int co = 0;co<24;co++){
		for(int h = 1;h<33;h++){
			for(int w = 1;w<33;w++){
				float sum = 0;
				for(int ci = 0;ci<3;ci++){
					for(int m = 0;m<3;m++){
						for(int n = 0;n<3;n++){
							sum += weight[co][ci][m][n] * input[0][ci][h+m-1][w+n-1];
						}
					}
				}
				output[0][co][h][w] += sum;
			}
		}
	}
//ReLU
	for(int co = 0;co<24;co++){
		for(int h = 1;h<33;h++){
			for(int w = 1;w<33;w++){
				if(output[0][co][h][w]<0){
					output[0][co][h][w] = 0;
				}
			}
		}
	}
}



/**unit0**/
void subconv_1x1_32_p(float input[1][24][34][34],
	float weight[24][24][1][1],
	float bias[24],
	float output[1][24][34][34]){
//bias
	for(int co = 0;co<24;co++){
		for(int h = 1;h<33;h++){
			for(int w = 1;w<33;w++){
				output[0][co][h][w] = bias[co];
			}
		}
	}
//conv
	for(int co = 0;co<24;co++){
		for(int h = 1;h<33;h++){
			for(int w = 1;w<33;w++){
				float sum = 0;
				for(int ci = 0;ci<24;ci++){
					sum += weight[co][ci][0][0]*input[0][ci][h][w];
				}
                output[0][co][h][w] += sum;
			}
		}
	}
//ReLU
	for(int co = 0;co<24;co++){
		for(int h = 1;h<33;h++){
			for(int w = 1;w<33;w++){
				if(output[0][co][h][w]<0){
					output[0][co][h][w] = 0;
				}
			}
		}
	}
}

void subconv_1x1_16_p(float input[1][24][18][18],
	float weight[24][24][1][1],
	float bias[24],
	float output[1][24][18][18]){

//bias
	for(int co = 0;co<24;co++){
		for(int h = 1;h<17;h++){
			for(int w = 1;w<17;w++){
				output[0][co][h][w] = bias[co];
			}
		}
	}
//conv
	for(int co = 0;co<24;co++){
		for(int h = 1;h<17;h++){
			for(int w = 1;w<17;w++){
				float sum = 0;
				for(int ci = 0;ci<24;ci++){
					sum += weight[co][ci][0][0]*input[0][ci][h][w];
				}
				output[0][co][h][w] += sum ;
			}
		}
	}
//ReLU
	for(int co = 0;co<24;co++){
		for(int h = 1;h<17;h++){
			for(int w = 1;w<17;w++){
				if(output[0][co][h][w]<0){
					output[0][co][h][w] = 0;
				}
			}
		}
	}
}


void subconv_3x3_32_stride_no_relu_p(float input[1][24][34][34],
	float weight[24][1][3][3],
	float bias[24],
	float output[1][24][18][18]){
//bias
	for(int co = 0;co<24;co++){
		for(int h = 1;h<17;h++){
			for(int w = 1;w<17;w++){
				output[0][co][h][w] = bias[co];
			}
		}
	}
//conv
	for(int co = 0;co<24;co++){
		for(int h = 1;h<17;h++){
			for(int w = 1;w<17;w++){
				float sum = 0;
				for(int m = 0;m<3;m++){
						for(int n = 0;n<3;n++){
							sum += weight[co][0][m][n] * input[0][co][h*2+m-2][w*2+n-2];
						}
					}
				output[0][co][h][w] += sum ;

			}
		}
	}
}

void subconv_3x3_16_no_relu_p(float input[1][24][18][18],
	float weight[24][1][3][3],
	float bias[24],
	float output[1][24][18][18]){
//bias
	for(int co = 0;co<24;co++){
		for(int h = 1;h<17;h++){
			for(int w = 1;w<17;w++){
				output[0][co][h][w] = bias[co];
			}
		}
	}
//conv
	for(int co = 0;co<24;co++){
		for(int h = 1;h<17;h++){
			for(int w = 1;w<17;w++){
				float sum = 0;
				for(int m = 0;m<3;m++){
						for(int n = 0;n<3;n++){
							sum += weight[co][0][m][n] * input[0][co][h+m-1][w+n-1];
						}
					}
				output[0][co][h][w] += sum;
			}
		}
	}
}

void shuffle_24_p(float left[1][24][18][18],float right[1][24][18][18],float output[1][48][18][18]){
//conv
	for(int co = 0;co <48;co ++){
		for(int h=0;h<18;h++){
			for(int w = 0;w<18;w++){
				if (co%2 == 0)output[0][co][h][w] = left[0][co/2][h][w];
				else output[0][co][h][w] = right[0][co/2][h][w];
			}
		}
	}
}

void shuffle_24_l_p(float left[1][24][18][18], float output[1][48][18][18]){
	for(int co = 0;co <48;co ++){
		for(int h=0;h<18;h++){
			for(int w = 0;w<18;w++){
				if (co%2 == 0)output[0][co][h][w] = left[0][co/2][h][w];
				//else output[0][co][h][w] = right[0][co/2][h][w];
			}
		}
	}
}

void shuffle_24_r_p(float right[1][24][18][18], float output[1][48][18][18]){
	for(int co = 0;co <48;co ++){
		for(int h=0;h<18;h++){
			for(int w = 0;w<18;w++){
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


void subconv_1x1_16p_p(float input[1][48][18][18],
	float weight[48][48][1][1],
	float bias[48],
	float output[1][48][18][18]){
//bias
	for(int co = 0;co<48;co++){
		for(int h = 1;h<17;h++){
			for(int w = 1;w<17;w++){
				output[0][co][h][w] = bias[co];
			}
		}
	}
//conv
	for(int co = 0;co<48;co++){
		for(int h = 1;h<17;h++){
			for(int w = 1;w<17;w++){
				float sum = 0;
				for(int ci = 0;ci<48;ci++){
					sum += weight[co][ci][0][0]*input[0][ci][h][w];
				}
				output[0][co][h][w] += sum;
			}
		}
	}
//ReLU
	for(int co = 0;co<48;co++){
		for(int h = 1;h<17;h++){
			for(int w = 1;w<17;w++){
				if(output[0][co][h][w]<0){
					output[0][co][h][w] = 0;
				}
			}
		}
	}
}


void subconv_1x1_8_p(float input[1][48][10][10],
	float weight[48][48][1][1],
	float bias[48],
	float output[1][48][10][10]){
//bias
	for(int co = 0;co<48;co++){
		for(int h = 1;h<9;h++){
			for(int w = 1;w<9;w++){
				output[0][co][h][w] = bias[co];
			}
		}
	}
//conv
	for(int co = 0;co<48;co++){
		for(int h = 1;h<9;h++){
			for(int w = 1;w<9;w++){
				float sum = 0;
				for(int ci = 0;ci<48;ci++){
					sum += weight[co][ci][0][0]*input[0][ci][h][w];
				}
				output[0][co][h][w] += sum;
			}
		}
	}
//ReLU
	for(int co = 0;co<48;co++){
		for(int h = 1;h<9;h++){
			for(int w = 1;w<9;w++){
				if(output[0][co][h][w]<0){
					output[0][co][h][w] = 0;
				}
			}
		}
	}
}


void subconv_3x3_16_stride_no_relu_p(float input[1][48][18][18],
	float weight[48][1][3][3],
	float bias[48],
	float output[1][48][10][10]){
//bias
	for(int co = 0;co<48;co++){
		for(int h = 1;h<9;h++){
			for(int w = 1;w<9;w++){
				output[0][co][h][w] = bias[co];
			}
		}
	}
//conv
	for(int co = 0;co<48;co++){
		for(int h = 1;h<9;h++){
			for(int w = 1;w<9;w++){
				float sum = 0;
				for(int m = 0;m<3;m++){
						for(int n = 0;n<3;n++){
							sum += weight[co][0][m][n] * input[0][co][h*2+m-2][w*2+n-2];
						
						}
					}
				output[0][co][h][w] += sum;
			}
		}
	}
}


void subconv_3x3_8_no_relu_p(float input[1][48][10][10],
	float weight[48][1][3][3],
	float bias[48],
	float output[1][48][10][10]){
//bias
	for(int co = 0;co<48;co++){
		for(int h = 1;h<9;h++){
			for(int w = 1;w<9;w++){
				output[0][co][h][w] = bias[co];
			}
		}
	}
//conv
	for(int co = 0;co<48;co++){
		for(int h = 1;h<9;h++){
			for(int w = 1;w<9;w++){
				float sum = 0;
				for(int m = 0;m<3;m++){
						for(int n = 0;n<3;n++){
							sum += weight[co][0][m][n] * input[0][co][h+m-1][w+n-1];
						}
					}
				output[0][co][h][w] += sum;
			}
		}
	}
}

void shuffle_48_p(float left[1][48][10][10],float right[1][48][10][10],float output[1][96][10][10]){
	for(int co = 0;co <96;co ++){
		for(int h=0;h<10;h++){
			for(int w = 0;w<10;w++){
				if (co%2 == 0)output[0][co][h][w] = left[0][co/2][h][w];
				else output[0][co][h][w] = right[0][co/2][h][w];
			}
		}
	}
}

void shuffle_48_l_p(float left[1][48][10][10], float output[1][96][10][10]){
	for(int co = 0;co <96;co ++){
		for(int h=0;h<10;h++){
			for(int w = 0;w<10;w++){
				if (co%2 == 0)output[0][co][h][w] = left[0][co/2][h][w];
				//else output[0][co][h][w] = right[0][co/2][h][w];
			}
		}
	}
}


void shuffle_48_r_p(float right[1][48][10][10], float output[1][96][10][10]){
	for(int co = 0;co <96;co ++){
		for(int h=0;h<10;h++){
			for(int w = 0;w<10;w++){
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

void subconv_1x1_8p_p(float input[1][96][10][10],
	float weight[96][96][1][1],
	float bias[96],
	float output[1][96][10][10]){
//bias
	for(int co = 0;co<96;co++){
		for(int h = 1;h<9;h++){
			for(int w = 1;w<9;w++){
				output[0][co][h][w] = bias[co];
			}
		}
	}
//conv
	for(int co = 0;co<96;co++){
		for(int h = 1;h<9;h++){
			for(int w = 1;w<9;w++){
				float sum = 0;
				for(int ci = 0;ci<96;ci++){
					sum += weight[co][ci][0][0]*input[0][ci][h][w];
				}
				output[0][co][h][w] += sum;
			}
		}
	}
//ReLU
	for(int co = 0;co<96;co++){
		for(int h = 1;h<9;h++){
			for(int w = 1;w<9;w++){
				if(output[0][co][h][w]<0){
					output[0][co][h][w] = 0;
				}
			}
		}
	}
}


void subconv_1x1_4_p(float input[1][96][6][6],
	float weight[96][96][1][1],
	float bias[96],
	float output[1][96][6][6]){
//bias
	for(int co = 0;co<96;co++){
		for(int h = 1;h<5;h++){
			for(int w = 1;w<5;w++){
				output[0][co][h][w] = bias[co];
			}
		}
	}
//conv
	for(int co = 0;co<96;co++){
		for(int h = 1;h<5;h++){
			for(int w = 1;w<5;w++){
				float sum = 0;
				for(int ci = 0;ci<96;ci++){
					sum += weight[co][ci][0][0]*input[0][ci][h][w];
				}
				 output[0][co][h][w] += sum;
			}
		}
	}
//ReLU
	for(int co = 0;co<96;co++){
		for(int h = 1;h<5;h++){
			for(int w = 1;w<5;w++){
				if(output[0][co][h][w]<0){
					output[0][co][h][w] = 0;
				}
			}
		}
	}
}


void subconv_3x3_8_stride_no_relu_p(float input[1][96][10][10],
	float weight[96][1][3][3],
	float bias[96],
	float output[1][96][6][6]){
//bias
	for(int co = 0;co<96;co++){
		for(int h = 1;h<5;h++){
			for(int w = 1;w<5;w++){
				output[0][co][h][w] = bias[co];
			}
		}
	}
//conv
	for(int co = 0;co<96;co++){
		for(int h = 1;h<5;h++){
			for(int w = 1;w<5;w++){
				float sum = 0;
				for(int m = 0;m<3;m++){
						for(int n = 0;n<3;n++){
							sum += weight[co][0][m][n] * input[0][co][h*2+m-2][w*2+n-2];
						}
					}
				output[0][co][h][w] += sum;

			}
		}
	}
}



void subconv_3x3_4_no_relu_p(float input[1][96][6][6],
	float weight[96][1][3][3],
	float bias[96],
	float output[1][96][6][6]){
//bias
	for(int co = 0;co<96;co++){
		for(int h = 1;h<5;h++){
			for(int w = 1;w<5;w++){
				output[0][co][h][w] = bias[co];
			}
		}
	}
//conv
	for(int co = 0;co<96;co++){
		for(int h = 1;h<5;h++){
			for(int w = 1;w<5;w++){
				float sum = 0;
				for(int m = 0;m<3;m++){
						for(int n = 0;n<3;n++){
							sum += weight[co][0][m][n] * input[0][co][h+m-1][w+n-1];
						}
					}
				output[0][co][h][w] += sum;
			}
		}
	}
}



void shuffle_96_p(float left[1][96][6][6],float right[1][96][6][6],float output[1][192][6][6]){
	for(int co = 0;co <192;co ++){
		for(int h=0;h<6;h++){
			for(int w = 0;w<6;w++){
				if (co%2 == 0)output[0][co][h][w] = left[0][co/2][h][w];
				else output[0][co][h][w] = right[0][co/2][h][w];
			}
		}
	}
}





void shuffle_96_l_p(float left[1][96][6][6], float output[1][192][6][6]){
	for(int co = 0;co <192;co ++){
		for(int h=0;h<6;h++){
			for(int w = 0;w<6;w++){
				if (co%2 == 0)output[0][co][h][w] = left[0][co/2][h][w];
				//else output[0][co][h][w] = right[0][co/2][h][w];
			}
		}
	}
}

void shuffle_96_r_p(float right[1][96][6][6], float output[1][192][6][6]){
	for(int co = 0;co <192;co ++){
		for(int h=0;h<6;h++){
			for(int w = 0;w<6;w++){
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
//bias
	for(int co = 0;co<512;co++){
		for(int h = 0;h<4;h++){
			for(int w = 0;w<4;w++){
				output[0][co][h][w] = bias[co];
			}
		}
	}
//conv
	for(int co = 0;co<512;co++){
		for(int h = 0;h<4;h++){
			for(int w = 0;w<4;w++){
				float sum = 0;
				for(int ci = 0;ci<192;ci++){
					sum += weight[co][ci][0][0]*input[0][ci][h][w];
				}
				output[0][co][h][w] += sum;
			}
		}
	}
//ReLU
	for(int co = 0;co<512;co++){
		for(int h = 0;h<4;h++){
			for(int w = 0;w<4;w++){
				if(output[0][co][h][w]<0){
					output[0][co][h][w] = 0;
				}
			}
		}
	}
}


float pool_engine(float inp1,float inp2,float inp3,float inp4,
	float inp5,float inp6,float inp7,float inp8,
	float inp9,float inp10,float inp11,float inp12,
	float inp13,float inp14,float inp15,float inp16){
	float temp1,temp2,temp3,temp4,temp5,temp6,temp7,temp8,temp9,temp10,temp11,temp12,temp13,temp14,temp15;
	temp1 = inp1 + inp2;
	temp2 = inp3 + inp4;
	temp3 = inp5 + inp6;
	temp4 = inp7 + inp8;
	temp5 = inp9 + inp10;
	temp6 = inp11 + inp12;
	temp7 = inp13 + inp14;
	temp8 = inp15 + inp16;

	temp9 = temp1 + temp2;
	temp10 = temp3 + temp4;
	temp11 = temp5 + temp6;
	temp12 = temp7 + temp8;

	temp13 = temp9 + temp10;
	temp14 = temp11 + temp12;

	temp15 = temp13 + temp14;
	return temp15;

}

void avgpool(float input[1][512][4][4],
	float output[512]){

	for(int co = 0;co<512;co++){
		float sum = 0;
		sum = pool_engine(input[0][co][0][0],input[0][co][0][1],input[0][co][0][2],input[0][co][0][3],
			input[0][co][1][0],input[0][co][1][1],input[0][co][1][2],input[0][co][1][3],
			input[0][co][2][0],input[0][co][2][1],input[0][co][2][2],input[0][co][2][3],
			input[0][co][3][0],input[0][co][3][1],input[0][co][3][2],input[0][co][3][3]);
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



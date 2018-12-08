
#include <cstddef>  // this is to fix the bug for <'::max_align_t’ has not been declared>
#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;
/**hls engine**/
float DDR_PL_1[1][24][114][114];
float DDR_PL_2[1][48][58][58];

void load_weights(float weight_buf[24],
				  float weights[1][24][3][3],
				  int i, int j)
{

	for(int coo = 0; coo < 24; coo++){
		weight_buf[coo] = weights[0][coo][i][j];
	}
}


void CONV_3X3_ENGINE(float input[1][24][9][9], 
	float output[1][24][9][9],
	float weight[1][24][3][3]){

	float weight_buf[24];

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			load_weights(weight_buf, weight, i, j);
			for(int h = 1; h < 8; h++){
				for(int w = 1; w < 8; w++){
					for(int co = 0; co < 24; co++){

						output[0][co][h][w] += weight[0][co][i][j] * input[0][co][h+i-1][w+j-1];}
					}
				}
			}
		}
}


void CONV_3X3_STRIDE_ENGINE(float input[1][24][16][16], 
	float output[1][24][9][9],
	float weight[1][24][3][3]){

	float weight_buf[24];

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			load_weights(weight_buf, weight, i, j);
			for(int h = 1; h < 8; h++){
				for(int w = 1; w < 8; w++){
					for(int co = 0; co < 24; co++){

						output[0][co][h][w] += weight[0][co][i][j] * input[0][co][h*2+i-1][w*2+j-1];}
					}
				}
			}
		}
}

float COMPUTE_ENGINE(float w0, float b0,
	float w1, float b1,
	float w2, float b2,
	float w3, float b3,
	float w4, float b4,
	float w5, float b5,
	float w6, float b6,
	float w7, float b7,
	float w8, float b8,
	float w9, float b9,
	float w10, float b10,
	float w11, float b11,
	float w12, float b12,
	float w13, float b13,
	float w14, float b14,
	float w15, float b15,
	float w16, float b16,
	float w17, float b17,
	float w18, float b18,
	float w19, float b19,
	float w20, float b20,
	float w21, float b21,
	float w22, float b22,
	float w23, float b23){
	float mul0, mul1, mul2 ,mul3,mul4,mul5,mul6,mul7,mul8,mul9,mul10,mul11,mul12,mul13,mul14,mul15,mul16,mul17,mul18,mul19,mul20,mul21,mul22,mul23;
	float add0, add1, add2, add3, add4, add5, add6,add7,add8,add9,add10,add11,add12,add13,add14,add15,add16,add17,add18,add19,add20,add21,add22;
	mul0  = w0  * b0;
	mul1  = w1  * b1;
	mul2  = w2  * b2;
	mul3  = w3  * b3;
	mul4  = w4  * b4;
	mul5  = w5  * b5;
	mul6  = w6  * b6;
	mul7  = w7  * b7;
	mul8  = w8  * b8;
	mul9  = w9  * b9;
	mul10 = w10 * b10;
	mul11 = w11 * b11;
	mul12 = w12 * b12;
	mul13 = w13 * b13;
	mul14 = w14 * b14;
	mul15 = w15 * b15;
	mul16 = w16 * b16;
	mul17 = w17 * b17;
	mul18 = w18 * b18;
	mul19 = w19 * b19;
	mul20 = w20 * b20;
	mul21 = w21 * b21;
	mul22 = w22 * b22;
	mul23 = w23 * b23;
/**step 1**/
	add0 = mul0  + mul1;
	add1 = mul2  + mul3;
	add2 = mul4  + mul5;
	add3 = mul6  + mul7;
	add4 = mul8  + mul9;
	add5 = mul10 + mul11;
	add6 = mul12 + mul13;
	add7 = mul14 + mul15;
	add8 = mul16 + mul17;
	add9 = mul18 + mul19;
	add10 = mul20 + mul21;
	add11 = mul22 + mul23;
/**step 2**/

	add12 = add0 + add1;
	add13 = add2 + add3;
	add14 = add4 + add5;
	add15 = add6 + add7;
	add16 = add8 + add9;
	add17 = add10 + add11;
/**step 3**/

	add18 = add12 + add13;
	add19 = add14 + add15;
	add20 = add16 + add17;
/**step 4**/
	add21 = add18 + add19;
/**step 5**/	
	add22 = add20 + add21;
	return add22;

}

void CONV_1X1_ENGINE(float input[1][24][9][9],
	float output[1][24][9][9],
	float weights[24][24][1][1]){

float weight_buf[24][24][1][1];
float tmp[24];

	for(int i = 0; i < 24; i++){
		for(int j = 0; j < 24; j++){
			weight_buf[i][j][0][0] = weights[i][j][0][0];
		}}

	for(int h = 1; h <= 8; h++){
		for(int w = 1; w <= 8; w++) {
			for(int co = 0;co < 16;co+=16){
				tmp[co] = COMPUTE_ENGINE(
					weight_buf[co][0][0][0],  input[0][0][h][w],
					weight_buf[co][1][0][0],  input[0][1][h][w],
					weight_buf[co][2][0][0],  input[0][2][h][w],
					weight_buf[co][3][0][0],  input[0][3][h][w],
					weight_buf[co][4][0][0],  input[0][4][h][w],
					weight_buf[co][5][0][0],  input[0][5][h][w],
					weight_buf[co][6][0][0],  input[0][6][h][w],
					weight_buf[co][7][0][0],  input[0][7][h][w],
					weight_buf[co][8][0][0],  input[0][8][h][w],
					weight_buf[co][9][0][0],  input[0][9][h][w],
					weight_buf[co][10][0][0],  input[0][10][h][w],
					weight_buf[co][11][0][0],  input[0][11][h][w],
					weight_buf[co][12][0][0],  input[0][12][h][w],
					weight_buf[co][13][0][0],  input[0][13][h][w],
					weight_buf[co][14][0][0],  input[0][14][h][w],
					weight_buf[co][15][0][0],  input[0][15][h][w],
					weight_buf[co][16][0][0],  input[0][16][h][w],
					weight_buf[co][17][0][0],  input[0][17][h][w],
					weight_buf[co][18][0][0],  input[0][18][h][w],
					weight_buf[co][19][0][0],  input[0][19][h][w],
					weight_buf[co][20][0][0],  input[0][20][h][w],
					weight_buf[co][21][0][0],  input[0][21][h][w],
					weight_buf[co][22][0][0],  input[0][22][h][w],
					weight_buf[co][23][0][0],  input[0][23][h][w]);
					}
					
			for(int co = 0; co < 16; co++){
				output[0][co][h][w] += tmp[co];
			}


				
			}
		}
	}



void RELU_ENGINE(float buf[1][24][7][7]){
	for(int j = 1; j <= 24; j++) {
		for(int k = 1; k <= 7; k++) {
			for(int i = 0; i < 7; i++) {
				if( buf[0][i][j][k] < 0 ) {
					buf[0][i][j][k] = 0;
				}
			}
		}
	}
}


/**prelayers**/




void conv1(float input[1][3][224][224],
	float weight[24][3][3][3],
	float bias[24],
	float output[1][24][112][112]){



	for(int co = 0;co<24;co++){
		
		for(int h = 0;h<112;h++){
			for(int w = 0;w<112;w++){
				float sum = 0;
				for(int ci = 0;ci<3;ci++){
					for(int m = 0;m<3;m++){
						for(int n = 0;n<3;n++){
							sum += weight[co][ci][m][n] * (( h*2+m-1 >= 0 && w*2+n-1 >= 0 && h*2+m-1 < 224 && w*2+n-1 < 224) ?input[0][ci][h*2+m-1][w*2+n-1]:0);
						}
					}
				}
				float result = sum + bias[co];
				output[0][co][h][w] = (result > 0)? result : 0.0f;
			}
		}
	}
}



float max_9(float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9)
{
    float tmp1, tmp2, tmp3,tmp4,tmp11,tmp22,tmp111 ;

    if(a1 > a2) tmp1 = a1; else tmp1 = a2;
    if(a3 > a4) tmp2 = a3; else tmp2 = a4;
    if(a5 > a6) tmp3 = a5; else tmp3 = a6;
    if(a7 > a8) tmp4 = a7; else tmp4 = a8;

    if(tmp1 > tmp2) tmp11 = tmp1;else tmp11 = tmp2;
    if(tmp3 > tmp4) tmp22 = tmp3;else tmp22 = tmp4;
    if(tmp11>tmp22) tmp111 = tmp11;else tmp111 = tmp22;
    if(tmp111>a9) return tmp111;else return a9;

}

void maxpool(float input[1][24][112][112],float output[1][24][55][55]){
	for(int co =0;co<24;co++){
		for(int h = 0;h<55;h++){
			for(int w = 0;w<55;w++){
				output[0][co][h][w] = max_9(input[0][co][h*2][w*2],
					input[0][co][h*2+1][w*2],input[0][co][h*2+2][w*2],
					input[0][co][h*2][w*2+1],input[0][co][h*2+1][w*2+1],
					input[0][co][h*2+2][w*2+1],input[0][co][h*2][w*2+2],
					input[0][co][h*2+1][w*2+2],input[0][co][h*2+2][w*2+2]);

			}
		}
	}

}

/**unit0**/

void subconv_1x1_55(float input[1][24][55][55],
	float weight[24][24][1][1],
	float bias[24],
	float output[1][24][55][55]){

	for(int co = 0;co<24;co++){
		for(int h = 0;h<55;h++){
			for(int w = 0;w<55;w++){
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


void subconv_1x1_28(float input[1][24][28][28],
	float weight[24][24][1][1],
	float bias[24],
	float output[1][24][28][28]){


	for(int co = 0;co<24;co++){
		for(int h = 0;h<28;h++){
			for(int w = 0;w<28;w++){
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

void subconv_3x3_55_stride_no_relu(float input[1][24][55][55],
	float weight[24][1][3][3],
	float bias[24],
	float output[1][24][28][28]){

	float input_buffer[1][24][58][58]={0};
	float output_buffer[1][24][30][30]={0};


	float input_crop_buffer[1][24][16][16]={0};
	float output_crop_buffer[1][24][9][9]={0}; 
	
	for(int i = 0;i<55;i++){
		for(int j = 0;j<55;j++){
			for(int k = 0;k<24;k++){
				input_buffer[0][k][i+1][j+1] = input[0][k][i][j];
			}
		}

	}
	
	for(int h = 0;h < 4;h ++){
		for(int w = 0;w<4;w++){
			//copy
			
			for(int j = 0;j<24;j++){
				for(int m = 0;m<16;m++){
					for(int n = 0;n<16;n++){
						input_crop_buffer[0][j][m][n] = input_buffer[0][j][m+h*14][n+w*14];
					}
				}
			}

			

			CONV_3X3_STRIDE_ENGINE(input_crop_buffer,output_crop_buffer,weight);


			for(int j = 0;j<24;j++){
				for(int m = 0;m<9;m++){
					for(int n = 0;n<9;n++){
						output_buffer[0][j][m][n] = output_crop_buffer[0][j][m+h*7][n+w*7];
					}
				}
			}
		}
	}

	for(int i = 0;i<28;i++){
		for(int j = 0;j<28;j++){
			for(int k = 0;k<24;k++){
				output[0][k][i][j] = output_buffer[0][k][i+1][j+1]+bias[k];
			}
		}
	}
/**
	for(int co = 0;co<24;co++){
		for(int h = 0;h<28;h++){
			for(int w = 0;w<28;w++){
				float sum = 0;
				for(int m = 0;m<3;m++){
						for(int n = 0;n<3;n++){
							sum += weight[co][0][m][n] * (( h*2+m-1 >= 0 && w*2+n-1 >= 0 && h*2+m-1 < 55 && w*2+n-1 < 55) ?input[0][co][h*2+m-1][w*2+n-1]:0);
						}
					}
				float result = sum + bias[co];
				output[0][co][h][w] = result;

			}
		}
	}
**/
}

void subconv_3x3_28_no_relu(float input[1][24][28][28],
	float weight[24][1][3][3],
	float bias[24],
	float output[1][24][28][28]){
	for(int co = 0;co<24;co++){
		for(int h = 0;h<28;h++){
			for(int w = 0;w<28;w++){
				float sum = 0;
				for(int m = 0;m<3;m++){
						for(int n = 0;n<3;n++){
							sum += weight[co][0][m][n] * (( h+m-1 >= 0 && w+n-1 >= 0 && h+m-1 < 28 && w+n-1 < 28) ?input[0][co][h+m-1][w+n-1]:0);
						}
					}
				float result = sum + bias[co];
				output[0][co][h][w] = result;

			}
		}
	}
}

void shuffle_24(float left[1][24][28][28],float right[1][24][28][28],float output[1][48][28][28]){
	for(int co = 0;co <48;co ++){
		for(int h=0;h<28;h++){
			for(int w = 0;w<28;w++){
				if (co%2 == 0)output[0][co][h][w] = left[0][co/2][h][w];
				else output[0][co][h][w] = right[0][co/2][h][w];
			}
		}
	}
}


void DownsampleUnit0(float input[1][24][55][55],
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
	float output[1][48][28][28]){

	float conv1r_output[1][24][55][55]={0};
	float conv2r_ourput[1][24][28][28]={0};
	float conv3r_ourput[1][24][28][28]={0};
	float conv1l_output[1][24][28][28]={0};
	float conv2l_output[1][24][28][28]={0};


	//conv1r
	subconv_1x1_55(input,conv1r_weight,conv1r_bias,conv1r_output);
	//conv2r
	subconv_3x3_55_stride_no_relu(conv1r_output,conv2r_weight,conv2r_bias,conv2r_ourput);
	//conv3r
	subconv_1x1_28(conv2r_ourput,conv3r_weight,conv3r_bias,conv3r_ourput);
	//conv1l
	subconv_3x3_55_stride_no_relu(input,conv1l_weight,conv1l_bias,conv1l_output);
	//conv2l
	subconv_1x1_28(conv1l_output,conv2l_weight,conv2l_bias,conv2l_output);

	//shuffle
	shuffle_24(conv3r_ourput,conv2l_output,output);
}


void ShuffleUnit0(float input[1][48][28][28],
	float conv1_weight[24][24][1][1],
	float conv1_bias[24],
	float conv2_weight[24][1][3][3],
	float conv2_bias[24],
	float conv3_weight[24][24][1][1],
	float conv3_bias[24],
	float output[1][48][28][28]
	){
	float left_part[1][24][28][28] = {0};
	float right_part[1][24][28][28] = {0};
	float conv1_output[1][24][28][28] = {0};
	float conv2_output[1][24][28][28] = {0};
	float conv3_output[1][24][28][28] = {0};
	//right
	for(int co = 0;co <24;co ++){
		for(int h=0;h<28;h++){
			for(int w = 0;w<28;w++){
				right_part[0][co][h][w] = input[0][24+co][h][w];
				left_part[0][co][h][w] = input[0][co][h][w];
			}
		}
	}
	//conv1
	subconv_1x1_28(right_part,conv1_weight,conv1_bias,conv1_output);
	//conv2
	subconv_3x3_28_no_relu(conv1_output,conv2_weight,conv2_bias,conv2_output);
	//conv3
	subconv_1x1_28(conv2_output,conv3_weight,conv3_bias,conv3_output);

	shuffle_24(left_part,conv3_output,output);
}
/**unit1**/

void subconv_1x1_28p(float input[1][48][28][28],
	float weight[48][48][1][1],
	float bias[48],
	float output[1][48][28][28]){

	for(int co = 0;co<48;co++){
		for(int h = 0;h<28;h++){
			for(int w = 0;w<28;w++){
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

void subconv_1x1_14(float input[1][48][14][14],
	float weight[48][48][1][1],
	float bias[48],
	float output[1][48][14][14]){


	for(int co = 0;co<48;co++){
		for(int h = 0;h<14;h++){
			for(int w = 0;w<14;w++){
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

void subconv_3x3_28_stride_no_relu(float input[1][48][28][28],
	float weight[48][1][3][3],
	float bias[48],
	float output[1][48][14][14]){
	for(int co = 0;co<48;co++){
		for(int h = 0;h<14;h++){
			for(int w = 0;w<14;w++){
				float sum = 0;
				for(int m = 0;m<3;m++){
						for(int n = 0;n<3;n++){
							sum += weight[co][0][m][n] * (( h*2+m-1 >= 0 && w*2+n-1 >= 0 && h*2+m-1 < 28 && w*2+n-1 < 28) ?input[0][co][h*2+m-1][w*2+n-1]:0);
						}
					}
				float result = sum + bias[co];
				output[0][co][h][w] = result;

			}
		}
	}

}

void subconv_3x3_14_no_relu(float input[1][48][14][14],
	float weight[48][1][3][3],
	float bias[48],
	float output[1][48][14][14]){
	for(int co = 0;co<48;co++){
		for(int h = 0;h<14;h++){
			for(int w = 0;w<14;w++){
				float sum = 0;
				for(int m = 0;m<3;m++){
						for(int n = 0;n<3;n++){
							sum += weight[co][0][m][n] * (( h+m-1 >= 0 && w+n-1 >= 0 && h+m-1 < 14 && w+n-1 < 14) ?input[0][co][h+m-1][w+n-1]:0);
						}
					}
				float result = sum + bias[co];
				output[0][co][h][w] = result;
			}
		}
	}
}

void shuffle_48(float left[1][48][14][14],float right[1][48][14][14],float output[1][96][14][14]){
	for(int co = 0;co <96;co ++){
		for(int h=0;h<14;h++){
			for(int w = 0;w<14;w++){
				if (co%2 == 0)output[0][co][h][w] = left[0][co/2][h][w];
				else output[0][co][h][w] = right[0][co/2][h][w];
			}
		}
	}
}

void DownsampleUnit1(float input[1][48][28][28],
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
	float output[1][96][14][14]){

	float conv1r_output[1][48][28][28]={0};
	float conv2r_ourput[1][48][14][14]={0};
	float conv3r_ourput[1][48][14][14]={0};
	float conv1l_output[1][48][14][14]={0};
	float conv2l_output[1][48][14][14]={0};


	//conv1r
	subconv_1x1_28p(input,conv1r_weight,conv1r_bias,conv1r_output);
	//conv2r
	subconv_3x3_28_stride_no_relu(conv1r_output,conv2r_weight,conv2r_bias,conv2r_ourput);
	//conv3r
	subconv_1x1_14(conv2r_ourput,conv3r_weight,conv3r_bias,conv3r_ourput);
	//conv1l
	subconv_3x3_28_stride_no_relu(input,conv1l_weight,conv1l_bias,conv1l_output);
	//conv2l
	subconv_1x1_14(conv1l_output,conv2l_weight,conv2l_bias,conv2l_output);

	//shuffle
	shuffle_48(conv3r_ourput,conv2l_output,output);

	
}

void ShuffleUnit1(float input[1][96][14][14],
	float conv1_weight[48][48][1][1],
	float conv1_bias[48],
	float conv2_weight[48][1][3][3],
	float conv2_bias[48],
	float conv3_weight[48][48][1][1],
	float conv3_bias[48],
	float output[1][96][14][14]
	){
	float left_part[1][48][14][14] = {0};
	float right_part[1][48][14][14] = {0};
	float conv1_output[1][48][14][14] = {0};
	float conv2_output[1][48][14][14] = {0};
	float conv3_output[1][48][14][14] = {0};

	//right
	for(int co = 0;co <48;co ++){
		for(int h=0;h<14;h++){
			for(int w = 0;w<14;w++){
				right_part[0][co][h][w] = input[0][48+co][h][w];
				left_part[0][co][h][w] = input[0][co][h][w];
			}
		}
	}
	//conv1
	subconv_1x1_14(right_part,conv1_weight,conv1_bias,conv1_output);

	
	//conv2
	subconv_3x3_14_no_relu(conv1_output,conv2_weight,conv2_bias,conv2_output);
	//conv3
	subconv_1x1_14(conv2_output,conv3_weight,conv3_bias,conv3_output);

	shuffle_48(left_part,conv3_output,output);
}
/**unit2**/
void subconv_1x1_14p(float input[1][96][14][14],
	float weight[96][96][1][1],
	float bias[96],
	float output[1][96][14][14]){

	for(int co = 0;co<96;co++){
		for(int h = 0;h<14;h++){
			for(int w = 0;w<14;w++){
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

void subconv_1x1_7(float input[1][96][7][7],
	float weight[96][96][1][1],
	float bias[96],
	float output[1][96][7][7]){


	for(int co = 0;co<96;co++){
		for(int h = 0;h<7;h++){
			for(int w = 0;w<7;w++){
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

void subconv_3x3_14_stride_no_relu(float input[1][96][14][14],
	float weight[96][1][3][3],
	float bias[96],
	float output[1][96][7][7]){
	for(int co = 0;co<96;co++){
		for(int h = 0;h<7;h++){
			for(int w = 0;w<7;w++){
				float sum = 0;
				for(int m = 0;m<3;m++){
						for(int n = 0;n<3;n++){
							sum += weight[co][0][m][n] * (( h*2+m-1 >= 0 && w*2+n-1 >= 0 && h*2+m-1 < 14 && w*2+n-1 < 14) ?input[0][co][h*2+m-1][w*2+n-1]:0);
						}
					}
				float result = sum + bias[co];
				output[0][co][h][w] = result;

			}
		}
	}
}


void subconv_3x3_7_no_relu(float input[1][96][7][7],
	float weight[96][1][3][3],
	float bias[96],
	float output[1][96][7][7]){
	for(int co = 0;co<96;co++){
		for(int h = 0;h<7;h++){
			for(int w = 0;w<7;w++){
				float sum = 0;
				for(int m = 0;m<3;m++){
						for(int n = 0;n<3;n++){
							sum += weight[co][0][m][n] * (( h+m-1 >= 0 && w+n-1 >= 0 && h+m-1 < 7 && w+n-1 < 7) ?input[0][co][h+m-1][w+n-1]:0);
						}
					}
				float result = sum + bias[co];
				output[0][co][h][w] = result;
			}
		}
	}
}

void shuffle_96(float left[1][96][7][7],float right[1][96][7][7],float output[1][192][7][7]){
	for(int co = 0;co <192;co ++){
		for(int h=0;h<7;h++){
			for(int w = 0;w<7;w++){
				if (co%2 == 0)output[0][co][h][w] = left[0][co/2][h][w];
				else output[0][co][h][w] = right[0][co/2][h][w];
			}
		}
	}
}

void DownsampleUnit2(float input[1][96][14][14],
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
	float output[1][192][7][7]){

	float conv1r_output[1][96][14][14]={0};
	float conv2r_ourput[1][96][7][7]={0};
	float conv3r_ourput[1][96][7][7]={0};
	float conv1l_output[1][96][7][7]={0};
	float conv2l_output[1][96][7][7]={0};


	//conv1r
	subconv_1x1_14p(input,conv1r_weight,conv1r_bias,conv1r_output);
	//conv2r
	subconv_3x3_14_stride_no_relu(conv1r_output,conv2r_weight,conv2r_bias,conv2r_ourput);
	//conv3r
	subconv_1x1_7(conv2r_ourput,conv3r_weight,conv3r_bias,conv3r_ourput);
	//conv1l
	subconv_3x3_14_stride_no_relu(input,conv1l_weight,conv1l_bias,conv1l_output);
	//conv2l
	subconv_1x1_7(conv1l_output,conv2l_weight,conv2l_bias,conv2l_output);

	//shuffle
	shuffle_96(conv3r_ourput,conv2l_output,output);

	
}

void ShuffleUnit2(float input[1][192][7][7],
	float conv1_weight[96][96][1][1],
	float conv1_bias[96],
	float conv2_weight[96][1][3][3],
	float conv2_bias[96],
	float conv3_weight[96][96][1][1],
	float conv3_bias[96],
	float output[1][192][7][7]
	){
	float left_part[1][96][7][7] = {0};
	float right_part[1][96][7][7] = {0};
	float conv1_output[1][96][7][7] = {0};
	float conv2_output[1][96][7][7] = {0};
	float conv3_output[1][96][7][7] = {0};

	//right
	for(int co = 0;co <96;co ++){
		for(int h=0;h<7;h++){
			for(int w = 0;w<7;w++){
				right_part[0][co][h][w] = input[0][96+co][h][w];
				left_part[0][co][h][w] = input[0][co][h][w];
			}
		}
	}
	//conv1
	subconv_1x1_7(right_part,conv1_weight,conv1_bias,conv1_output);

	
	//conv2
	subconv_3x3_7_no_relu(conv1_output,conv2_weight,conv2_bias,conv2_output);
	//conv3
	subconv_1x1_7(conv2_output,conv3_weight,conv3_bias,conv3_output);

	shuffle_96(left_part,conv3_output,output);
}

void conv_last(float input[1][192][7][7],
	float weight[1024][192][1][1],
	float bias[1024],
	float output[1][1024][7][7]){

	for(int co = 0;co<1024;co++){
		for(int h = 0;h<7;h++){
			for(int w = 0;w<7;w++){
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

void avgpool(float input[1][1024][7][7],
	float output[1024]){

	for(int co = 0;co<1024;co++){
		float sum = 0;
		for(int h = 0;h<7;h++){
			for(int w=0;w<7;w++){
				sum += input[0][co][h][w];
			}
		}
		output[co] = sum/49;
	}
}

void fc(float input[1024],
	float weight[1000][1024],
	float bias[1000],
	float output[1000]){
	
	for(int co = 0;co<1000;co++){
		float sum = 0;
		for(int ci = 0;ci<1024;ci++){
			sum += weight[co][ci] * input[ci];

		}
		float result = sum + bias[co];
		output[co] = result;
	}
}

int main(){
	/**featuremaps**/
	auto image = new float[1][3][224][224];
	auto conv1_output = new float[1][24][112][112];
	auto maxpool_output = new float[1][24][55][55];
	auto downsampleunit0_output = new float[1][48][28][28];
	auto shuffleunit0_0_output = new float[1][48][28][28];
	auto shuffleunit0_1_output = new float[1][48][28][28];
	auto shuffleunit0_2_output = new float[1][48][28][28];
	auto downsampleunit1_output = new float[1][96][14][14];
	auto shuffleunit1_0_output = new float[1][96][14][14];
	auto shuffleunit1_1_output = new float[1][96][14][14];
	auto shuffleunit1_2_output = new float[1][96][14][14];
	auto shuffleunit1_3_output = new float[1][96][14][14];
	auto shuffleunit1_4_output = new float[1][96][14][14];
	auto shuffleunit1_5_output = new float[1][96][14][14];
	auto shuffleunit1_6_output = new float[1][96][14][14];
	auto shuffleunit1_7_output = new float[1][96][14][14];
	auto downsampleunit2_output = new float[1][192][7][7];
	auto shuffleunit2_0_output = new float[1][192][7][7];
	auto shuffleunit2_1_output = new float[1][192][7][7];
	auto shuffleunit2_2_output = new float[1][192][7][7];
	auto conv_last_output = new float[1][1024][7][7];
	auto avgpool_output = new float[1024];
	auto fc_output = new float[1000];
	/**weights**/
	auto conv1_weight = new float[24][3][3][3];
	auto conv1_bias = new float[24];
	


	auto ShuffleConvs_0_DownsampleUnit_conv1r_weight = new float[24][24][1][1];
	auto ShuffleConvs_0_DownsampleUnit_conv1r_bias = new float[24];
	auto ShuffleConvs_0_DownsampleUnit_conv2r_weight = new float[24][1][3][3];
	auto ShuffleConvs_0_DownsampleUnit_conv2r_bias = new float[24];
	auto ShuffleConvs_0_DownsampleUnit_conv3r_weight = new float[24][24][1][1];
	auto ShuffleConvs_0_DownsampleUnit_conv3r_bias = new float[24];
	auto ShuffleConvs_0_DownsampleUnit_conv1l_weight = new float[24][1][3][3];
	auto ShuffleConvs_0_DownsampleUnit_conv1l_bias = new float[24];
	auto ShuffleConvs_0_DownsampleUnit_conv2l_weight = new float[24][24][1][1];
	auto ShuffleConvs_0_DownsampleUnit_conv2l_bias = new float[24];
	auto ShuffleConvs_0_ShuffleUnit0_0_conv1_weight = new float[24][24][1][1];
	auto ShuffleConvs_0_ShuffleUnit0_0_conv1_bias = new float[24];
	auto ShuffleConvs_0_ShuffleUnit0_0_conv2_weight = new float[24][1][3][3];
	auto ShuffleConvs_0_ShuffleUnit0_0_conv2_bias = new float[24];
	auto ShuffleConvs_0_ShuffleUnit0_0_conv3_weight = new float[24][24][1][1];
	auto ShuffleConvs_0_ShuffleUnit0_0_conv3_bias = new float[24];
	auto ShuffleConvs_0_ShuffleUnit0_1_conv1_weight = new float[24][24][1][1];
	auto ShuffleConvs_0_ShuffleUnit0_1_conv1_bias = new float[24];
	auto ShuffleConvs_0_ShuffleUnit0_1_conv2_weight = new float[24][1][3][3];
	auto ShuffleConvs_0_ShuffleUnit0_1_conv2_bias = new float[24];
	auto ShuffleConvs_0_ShuffleUnit0_1_conv3_weight = new float[24][24][1][1];
	auto ShuffleConvs_0_ShuffleUnit0_1_conv3_bias = new float[24];
	auto ShuffleConvs_0_ShuffleUnit0_2_conv1_weight = new float[24][24][1][1];
	auto ShuffleConvs_0_ShuffleUnit0_2_conv1_bias = new float[24];
	auto ShuffleConvs_0_ShuffleUnit0_2_conv2_weight = new float[24][1][3][3];
	auto ShuffleConvs_0_ShuffleUnit0_2_conv2_bias = new float[24];
	auto ShuffleConvs_0_ShuffleUnit0_2_conv3_weight = new float[24][24][1][1];
	auto ShuffleConvs_0_ShuffleUnit0_2_conv3_bias = new float[24]; 
	auto ShuffleConvs_1_DownsampleUnit_conv1r_weight = new float[48][48][1][1]; 
	auto ShuffleConvs_1_DownsampleUnit_conv1r_bias = new float[48];
	auto ShuffleConvs_1_DownsampleUnit_conv2r_weight = new float[48][1][3][3];
	auto ShuffleConvs_1_DownsampleUnit_conv2r_bias = new float[48];
	auto ShuffleConvs_1_DownsampleUnit_conv3r_weight = new float[48][48][1][1];
	auto ShuffleConvs_1_DownsampleUnit_conv3r_bias = new float[48];
	auto ShuffleConvs_1_DownsampleUnit_conv1l_weight = new float[48][1][3][3];
	auto ShuffleConvs_1_DownsampleUnit_conv1l_bias = new float[48];
	auto ShuffleConvs_1_DownsampleUnit_conv2l_weight = new float[48][48][1][1];
	auto ShuffleConvs_1_DownsampleUnit_conv2l_bias = new float[48];
	auto ShuffleConvs_1_ShuffleUnit1_0_conv1_weight = new float[48][48][1][1];
	auto ShuffleConvs_1_ShuffleUnit1_0_conv1_bias = new float[48];
	auto ShuffleConvs_1_ShuffleUnit1_0_conv2_weight = new float[48][1][3][3];
	auto ShuffleConvs_1_ShuffleUnit1_0_conv2_bias = new float[48];
	auto ShuffleConvs_1_ShuffleUnit1_0_conv3_weight = new float[48][48][1][1];
	auto ShuffleConvs_1_ShuffleUnit1_0_conv3_bias = new float[48];
	auto ShuffleConvs_1_ShuffleUnit1_1_conv1_weight = new float[48][48][1][1];
	auto ShuffleConvs_1_ShuffleUnit1_1_conv1_bias = new float[48];
	auto ShuffleConvs_1_ShuffleUnit1_1_conv2_weight = new float[48][1][3][3];
	auto ShuffleConvs_1_ShuffleUnit1_1_conv2_bias = new float[48];
	auto ShuffleConvs_1_ShuffleUnit1_1_conv3_weight = new float[48][48][1][1];
	auto ShuffleConvs_1_ShuffleUnit1_1_conv3_bias = new float[48];
	auto ShuffleConvs_1_ShuffleUnit1_2_conv1_weight = new float[48][48][1][1];
	auto ShuffleConvs_1_ShuffleUnit1_2_conv1_bias = new float[48];
	auto ShuffleConvs_1_ShuffleUnit1_2_conv2_weight = new float[48][1][3][3];
	auto ShuffleConvs_1_ShuffleUnit1_2_conv2_bias = new float[48];
	auto ShuffleConvs_1_ShuffleUnit1_2_conv3_weight = new float[48][48][1][1];
	auto ShuffleConvs_1_ShuffleUnit1_2_conv3_bias = new float[48];
	auto ShuffleConvs_1_ShuffleUnit1_3_conv1_weight = new float[48][48][1][1];
	auto ShuffleConvs_1_ShuffleUnit1_3_conv1_bias = new float[48];
	auto ShuffleConvs_1_ShuffleUnit1_3_conv2_weight = new float[48][1][3][3];
	auto ShuffleConvs_1_ShuffleUnit1_3_conv2_bias = new float[48];
	auto ShuffleConvs_1_ShuffleUnit1_3_conv3_weight = new float[48][48][1][1];
	auto ShuffleConvs_1_ShuffleUnit1_3_conv3_bias = new float[48];
	auto ShuffleConvs_1_ShuffleUnit1_4_conv1_weight = new float[48][48][1][1];
	auto ShuffleConvs_1_ShuffleUnit1_4_conv1_bias = new float[48];
	auto ShuffleConvs_1_ShuffleUnit1_4_conv2_weight = new float[48][1][3][3];
	auto ShuffleConvs_1_ShuffleUnit1_4_conv2_bias = new float[48];
	auto ShuffleConvs_1_ShuffleUnit1_4_conv3_weight = new float[48][48][1][1];
	auto ShuffleConvs_1_ShuffleUnit1_4_conv3_bias = new float[48];
	auto ShuffleConvs_1_ShuffleUnit1_5_conv1_weight = new float[48][48][1][1];
	auto ShuffleConvs_1_ShuffleUnit1_5_conv1_bias = new float[48];
	auto ShuffleConvs_1_ShuffleUnit1_5_conv2_weight = new float[48][1][3][3];
	auto ShuffleConvs_1_ShuffleUnit1_5_conv2_bias = new float[48];
	auto ShuffleConvs_1_ShuffleUnit1_5_conv3_weight = new float[48][48][1][1]; 
	auto ShuffleConvs_1_ShuffleUnit1_5_conv3_bias = new float[48];
	auto ShuffleConvs_1_ShuffleUnit1_6_conv1_weight  = new float[48][48][1][1];
	auto ShuffleConvs_1_ShuffleUnit1_6_conv1_bias  = new float[48];
	auto ShuffleConvs_1_ShuffleUnit1_6_conv2_weight  = new float[48][1][3][3];
	auto ShuffleConvs_1_ShuffleUnit1_6_conv2_bias   = new float[48];
	auto ShuffleConvs_1_ShuffleUnit1_6_conv3_weight = new float[48][48][1][1];
	auto ShuffleConvs_1_ShuffleUnit1_6_conv3_bias = new float[48];
	auto ShuffleConvs_1_ShuffleUnit1_7_conv1_weight  = new float[48][48][1][1];
	auto ShuffleConvs_1_ShuffleUnit1_7_conv1_bias = new float[48];
	auto ShuffleConvs_1_ShuffleUnit1_7_conv2_weight   = new float[48][1][3][3];
	auto ShuffleConvs_1_ShuffleUnit1_7_conv2_bias  = new float[48];
	auto ShuffleConvs_1_ShuffleUnit1_7_conv3_weight   = new float[48][48][1][1];
	auto ShuffleConvs_1_ShuffleUnit1_7_conv3_bias = new float[48];
	auto ShuffleConvs_2_DownsampleUnit_conv1r_weight = new float[96][96][1][1];
	auto ShuffleConvs_2_DownsampleUnit_conv1r_bias = new float[96];
	auto ShuffleConvs_2_DownsampleUnit_conv2r_weight = new float[96][1][3][3];
	auto ShuffleConvs_2_DownsampleUnit_conv2r_bias = new float[96];
	auto ShuffleConvs_2_DownsampleUnit_conv3r_weight = new float[96][96][1][1];
	auto ShuffleConvs_2_DownsampleUnit_conv3r_bias = new float[96];
	auto ShuffleConvs_2_DownsampleUnit_conv1l_weight = new float[96][1][3][3];
	auto ShuffleConvs_2_DownsampleUnit_conv1l_bias = new float[96];
	auto ShuffleConvs_2_DownsampleUnit_conv2l_weight = new float[96][96][1][1];
	auto ShuffleConvs_2_DownsampleUnit_conv2l_bias = new float[96];
	auto ShuffleConvs_2_ShuffleUnit2_0_conv1_weight = new float[96][96][1][1];
	auto ShuffleConvs_2_ShuffleUnit2_0_conv1_bias = new float[96];
	auto ShuffleConvs_2_ShuffleUnit2_0_conv2_weight = new float[96][1][3][3];
	auto ShuffleConvs_2_ShuffleUnit2_0_conv2_bias = new float[96];
	auto ShuffleConvs_2_ShuffleUnit2_0_conv3_weight = new float[96][96][1][1];
	auto ShuffleConvs_2_ShuffleUnit2_0_conv3_bias = new float[96];
	auto ShuffleConvs_2_ShuffleUnit2_1_conv1_weight = new float[96][96][1][1];
	auto ShuffleConvs_2_ShuffleUnit2_1_conv1_bias = new float[96];
	auto ShuffleConvs_2_ShuffleUnit2_1_conv2_weight = new float[96][1][3][3];
	auto ShuffleConvs_2_ShuffleUnit2_1_conv2_bias = new float[96];
	auto ShuffleConvs_2_ShuffleUnit2_1_conv3_weight = new float[96][96][1][1];
	auto ShuffleConvs_2_ShuffleUnit2_1_conv3_bias = new float[96];
	auto ShuffleConvs_2_ShuffleUnit2_2_conv1_weight = new float[96][96][1][1];
	auto ShuffleConvs_2_ShuffleUnit2_2_conv1_bias = new float[96];
	auto ShuffleConvs_2_ShuffleUnit2_2_conv2_weight = new float[96][1][3][3];
	auto ShuffleConvs_2_ShuffleUnit2_2_conv2_bias = new float[96];
	auto ShuffleConvs_2_ShuffleUnit2_2_conv3_weight = new float[96][96][1][1];
	auto ShuffleConvs_2_ShuffleUnit2_2_conv3_bias = new float[96];
	auto conv_last_weight = new float[1024][192][1][1];
	auto conv_last_bias = new float[1024];
	auto fc_weight = new float[1000][1024];
	auto fc_bias = new float[1000];


	string img_path = "cat.bin";
	string weights_path = "weights.bin";

/** initialize weights and image **/

	cout<<"initialize pic"<<endl;
	ifstream ifs_image_raw(img_path, ios::in | ios::binary);
	ifs_image_raw.read((char*)(***image), 1*3*224*224*sizeof(float));
    ifs_image_raw.close();
    cout<<"initialize weights"<<endl;
    ifstream ifs_param(weights_path, ios::in | ios::binary);
    ifs_param.read((char*)(***conv1_weight), 24*3*3*3*sizeof(float));
    ifs_param.read((char*)conv1_bias, 24*sizeof(float));
    ifs_param.read((char*)(***ShuffleConvs_0_DownsampleUnit_conv1r_weight), 24*24*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_0_DownsampleUnit_conv1r_bias, 24*sizeof(float));
    ifs_param.read((char*)(***ShuffleConvs_0_DownsampleUnit_conv2r_weight), 24*1*3*3*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_0_DownsampleUnit_conv2r_bias, 24*sizeof(float));
	ifs_param.read((char*)(***ShuffleConvs_0_DownsampleUnit_conv3r_weight), 24*24*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_0_DownsampleUnit_conv3r_bias, 24*sizeof(float));//verified
	ifs_param.read((char*)(***ShuffleConvs_0_DownsampleUnit_conv1l_weight), 24*1*3*3*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_0_DownsampleUnit_conv1l_bias, 24*sizeof(float));
	ifs_param.read((char*)(***ShuffleConvs_0_DownsampleUnit_conv2l_weight), 24*24*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_0_DownsampleUnit_conv2l_bias, 24*sizeof(float));//verified
    ifs_param.read((char*)(***ShuffleConvs_0_ShuffleUnit0_0_conv1_weight), 24*24*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_0_ShuffleUnit0_0_conv1_bias, 24*sizeof(float));
    ifs_param.read((char*)(***ShuffleConvs_0_ShuffleUnit0_0_conv2_weight), 24*1*3*3*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_0_ShuffleUnit0_0_conv2_bias, 24*sizeof(float));
	ifs_param.read((char*)(***ShuffleConvs_0_ShuffleUnit0_0_conv3_weight), 24*24*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_0_ShuffleUnit0_0_conv3_bias, 24*sizeof(float));//verified
    ifs_param.read((char*)(***ShuffleConvs_0_ShuffleUnit0_1_conv1_weight), 24*24*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_0_ShuffleUnit0_1_conv1_bias, 24*sizeof(float));
    ifs_param.read((char*)(***ShuffleConvs_0_ShuffleUnit0_1_conv2_weight), 24*1*3*3*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_0_ShuffleUnit0_1_conv2_bias, 24*sizeof(float));
	ifs_param.read((char*)(***ShuffleConvs_0_ShuffleUnit0_1_conv3_weight), 24*24*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_0_ShuffleUnit0_1_conv3_bias, 24*sizeof(float));//verified
    ifs_param.read((char*)(***ShuffleConvs_0_ShuffleUnit0_2_conv1_weight), 24*24*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_0_ShuffleUnit0_2_conv1_bias, 24*sizeof(float));
    ifs_param.read((char*)(***ShuffleConvs_0_ShuffleUnit0_2_conv2_weight), 24*1*3*3*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_0_ShuffleUnit0_2_conv2_bias, 24*sizeof(float));
	ifs_param.read((char*)(***ShuffleConvs_0_ShuffleUnit0_2_conv3_weight), 24*24*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_0_ShuffleUnit0_2_conv3_bias, 24*sizeof(float));//verified
    ifs_param.read((char*)(***ShuffleConvs_1_DownsampleUnit_conv1r_weight), 48*48*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_DownsampleUnit_conv1r_bias, 48*sizeof(float));
    ifs_param.read((char*)(***ShuffleConvs_1_DownsampleUnit_conv2r_weight), 48*1*3*3*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_DownsampleUnit_conv2r_bias, 48*sizeof(float));
	ifs_param.read((char*)(***ShuffleConvs_1_DownsampleUnit_conv3r_weight), 48*48*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_DownsampleUnit_conv3r_bias, 48*sizeof(float));//verified
	ifs_param.read((char*)(***ShuffleConvs_1_DownsampleUnit_conv1l_weight), 48*1*3*3*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_DownsampleUnit_conv1l_bias, 48*sizeof(float));
	ifs_param.read((char*)(***ShuffleConvs_1_DownsampleUnit_conv2l_weight), 48*48*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_DownsampleUnit_conv2l_bias, 48*sizeof(float));//verified
    ifs_param.read((char*)(***ShuffleConvs_1_ShuffleUnit1_0_conv1_weight), 48*48*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_ShuffleUnit1_0_conv1_bias, 48*sizeof(float));
    ifs_param.read((char*)(***ShuffleConvs_1_ShuffleUnit1_0_conv2_weight), 48*1*3*3*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_ShuffleUnit1_0_conv2_bias, 48*sizeof(float));
	ifs_param.read((char*)(***ShuffleConvs_1_ShuffleUnit1_0_conv3_weight), 48*48*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_ShuffleUnit1_0_conv3_bias, 48*sizeof(float));//verified
    ifs_param.read((char*)(***ShuffleConvs_1_ShuffleUnit1_1_conv1_weight), 48*48*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_ShuffleUnit1_1_conv1_bias, 48*sizeof(float));
    ifs_param.read((char*)(***ShuffleConvs_1_ShuffleUnit1_1_conv2_weight), 48*1*3*3*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_ShuffleUnit1_1_conv2_bias, 48*sizeof(float));
	ifs_param.read((char*)(***ShuffleConvs_1_ShuffleUnit1_1_conv3_weight), 48*48*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_ShuffleUnit1_1_conv3_bias, 48*sizeof(float));//verified
    ifs_param.read((char*)(***ShuffleConvs_1_ShuffleUnit1_2_conv1_weight), 48*48*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_ShuffleUnit1_2_conv1_bias, 48*sizeof(float));
    ifs_param.read((char*)(***ShuffleConvs_1_ShuffleUnit1_2_conv2_weight), 48*1*3*3*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_ShuffleUnit1_2_conv2_bias, 48*sizeof(float));
	ifs_param.read((char*)(***ShuffleConvs_1_ShuffleUnit1_2_conv3_weight), 48*48*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_ShuffleUnit1_2_conv3_bias, 48*sizeof(float));//verified
    ifs_param.read((char*)(***ShuffleConvs_1_ShuffleUnit1_3_conv1_weight), 48*48*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_ShuffleUnit1_3_conv1_bias, 48*sizeof(float));
    ifs_param.read((char*)(***ShuffleConvs_1_ShuffleUnit1_3_conv2_weight), 48*1*3*3*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_ShuffleUnit1_3_conv2_bias, 48*sizeof(float));
	ifs_param.read((char*)(***ShuffleConvs_1_ShuffleUnit1_3_conv3_weight), 48*48*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_ShuffleUnit1_3_conv3_bias, 48*sizeof(float));//verified
    ifs_param.read((char*)(***ShuffleConvs_1_ShuffleUnit1_4_conv1_weight), 48*48*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_ShuffleUnit1_4_conv1_bias, 48*sizeof(float));
    ifs_param.read((char*)(***ShuffleConvs_1_ShuffleUnit1_4_conv2_weight), 48*1*3*3*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_ShuffleUnit1_4_conv2_bias, 48*sizeof(float));
	ifs_param.read((char*)(***ShuffleConvs_1_ShuffleUnit1_4_conv3_weight), 48*48*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_ShuffleUnit1_4_conv3_bias, 48*sizeof(float));//verified
    ifs_param.read((char*)(***ShuffleConvs_1_ShuffleUnit1_5_conv1_weight), 48*48*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_ShuffleUnit1_5_conv1_bias, 48*sizeof(float));
    ifs_param.read((char*)(***ShuffleConvs_1_ShuffleUnit1_5_conv2_weight), 48*1*3*3*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_ShuffleUnit1_5_conv2_bias, 48*sizeof(float));
	ifs_param.read((char*)(***ShuffleConvs_1_ShuffleUnit1_5_conv3_weight), 48*48*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_ShuffleUnit1_5_conv3_bias, 48*sizeof(float));//verified
    ifs_param.read((char*)(***ShuffleConvs_1_ShuffleUnit1_6_conv1_weight), 48*48*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_ShuffleUnit1_6_conv1_bias, 48*sizeof(float));
    ifs_param.read((char*)(***ShuffleConvs_1_ShuffleUnit1_6_conv2_weight), 48*1*3*3*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_ShuffleUnit1_6_conv2_bias, 48*sizeof(float));
	ifs_param.read((char*)(***ShuffleConvs_1_ShuffleUnit1_6_conv3_weight), 48*48*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_ShuffleUnit1_6_conv3_bias, 48*sizeof(float));//verified
    ifs_param.read((char*)(***ShuffleConvs_1_ShuffleUnit1_7_conv1_weight), 48*48*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_ShuffleUnit1_7_conv1_bias, 48*sizeof(float));
    ifs_param.read((char*)(***ShuffleConvs_1_ShuffleUnit1_7_conv2_weight), 48*1*3*3*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_ShuffleUnit1_7_conv2_bias, 48*sizeof(float));
	ifs_param.read((char*)(***ShuffleConvs_1_ShuffleUnit1_7_conv3_weight), 48*48*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_1_ShuffleUnit1_7_conv3_bias, 48*sizeof(float));//verified
    ifs_param.read((char*)(***ShuffleConvs_2_DownsampleUnit_conv1r_weight), 96*96*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_2_DownsampleUnit_conv1r_bias, 96*sizeof(float));
    ifs_param.read((char*)(***ShuffleConvs_2_DownsampleUnit_conv2r_weight), 96*1*3*3*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_2_DownsampleUnit_conv2r_bias, 96*sizeof(float));
	ifs_param.read((char*)(***ShuffleConvs_2_DownsampleUnit_conv3r_weight), 96*96*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_2_DownsampleUnit_conv3r_bias, 96*sizeof(float));//verified
	ifs_param.read((char*)(***ShuffleConvs_2_DownsampleUnit_conv1l_weight), 96*1*3*3*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_2_DownsampleUnit_conv1l_bias, 96*sizeof(float));
	ifs_param.read((char*)(***ShuffleConvs_2_DownsampleUnit_conv2l_weight), 96*96*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_2_DownsampleUnit_conv2l_bias, 96*sizeof(float));//verified
    ifs_param.read((char*)(***ShuffleConvs_2_ShuffleUnit2_0_conv1_weight), 96*96*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_2_ShuffleUnit2_0_conv1_bias, 96*sizeof(float));
    ifs_param.read((char*)(***ShuffleConvs_2_ShuffleUnit2_0_conv2_weight), 96*1*3*3*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_2_ShuffleUnit2_0_conv2_bias, 96*sizeof(float));
	ifs_param.read((char*)(***ShuffleConvs_2_ShuffleUnit2_0_conv3_weight), 96*96*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_2_ShuffleUnit2_0_conv3_bias, 96*sizeof(float));//verified
    ifs_param.read((char*)(***ShuffleConvs_2_ShuffleUnit2_1_conv1_weight), 96*96*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_2_ShuffleUnit2_1_conv1_bias, 96*sizeof(float));
    ifs_param.read((char*)(***ShuffleConvs_2_ShuffleUnit2_1_conv2_weight), 96*1*3*3*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_2_ShuffleUnit2_1_conv2_bias, 96*sizeof(float));
	ifs_param.read((char*)(***ShuffleConvs_2_ShuffleUnit2_1_conv3_weight), 96*96*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_2_ShuffleUnit2_1_conv3_bias, 96*sizeof(float));//verified
    ifs_param.read((char*)(***ShuffleConvs_2_ShuffleUnit2_2_conv1_weight), 96*96*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_2_ShuffleUnit2_2_conv1_bias, 96*sizeof(float));
    ifs_param.read((char*)(***ShuffleConvs_2_ShuffleUnit2_2_conv2_weight), 96*1*3*3*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_2_ShuffleUnit2_2_conv2_bias, 96*sizeof(float));
	ifs_param.read((char*)(***ShuffleConvs_2_ShuffleUnit2_2_conv3_weight), 96*96*1*1*sizeof(float));
    ifs_param.read((char*)ShuffleConvs_2_ShuffleUnit2_2_conv3_bias, 96*sizeof(float));//verified
	ifs_param.read((char*)(***conv_last_weight), 1024*192*1*1*sizeof(float));
    ifs_param.read((char*)conv_last_bias, 1024*sizeof(float));//verified
	ifs_param.read((char*)(*fc_weight), 1000*1024*sizeof(float));
    ifs_param.read((char*)fc_bias, 1000*sizeof(float));//verified
    ifs_param.close();

/** conv1 **/
    conv1(image,conv1_weight,conv1_bias,conv1_output);
/** maxpooling **/
    maxpool(conv1_output,maxpool_output);
    
/**DownsampleUnit0**/
    DownsampleUnit0(maxpool_output,
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

/**ShuffleUnit0_0**/
    ShuffleUnit0(downsampleunit0_output,
    	ShuffleConvs_0_ShuffleUnit0_0_conv1_weight,
    	ShuffleConvs_0_ShuffleUnit0_0_conv1_bias,
    	ShuffleConvs_0_ShuffleUnit0_0_conv2_weight,
    	ShuffleConvs_0_ShuffleUnit0_0_conv2_bias,
    	ShuffleConvs_0_ShuffleUnit0_0_conv3_weight,
    	ShuffleConvs_0_ShuffleUnit0_0_conv3_bias,
    	shuffleunit0_0_output
    	);
    
/**ShuffleUnit0_1**/
    ShuffleUnit0(shuffleunit0_0_output,
    	ShuffleConvs_0_ShuffleUnit0_1_conv1_weight,
    	ShuffleConvs_0_ShuffleUnit0_1_conv1_bias,
    	ShuffleConvs_0_ShuffleUnit0_1_conv2_weight,
    	ShuffleConvs_0_ShuffleUnit0_1_conv2_bias,
    	ShuffleConvs_0_ShuffleUnit0_1_conv3_weight,
    	ShuffleConvs_0_ShuffleUnit0_1_conv3_bias,
    	shuffleunit0_1_output
    	);
/**ShuffleUnit0_2**/
    ShuffleUnit0(shuffleunit0_1_output,
    	ShuffleConvs_0_ShuffleUnit0_2_conv1_weight,
    	ShuffleConvs_0_ShuffleUnit0_2_conv1_bias,
    	ShuffleConvs_0_ShuffleUnit0_2_conv2_weight,
    	ShuffleConvs_0_ShuffleUnit0_2_conv2_bias,
    	ShuffleConvs_0_ShuffleUnit0_2_conv3_weight,
    	ShuffleConvs_0_ShuffleUnit0_2_conv3_bias,
    	shuffleunit0_2_output
    	);
/**DownsampleUnit1**/
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
/**ShuffleUnit1_0**/
    ShuffleUnit1(downsampleunit1_output,
    	ShuffleConvs_1_ShuffleUnit1_0_conv1_weight,
    	ShuffleConvs_1_ShuffleUnit1_0_conv1_bias,
    	ShuffleConvs_1_ShuffleUnit1_0_conv2_weight,
    	ShuffleConvs_1_ShuffleUnit1_0_conv2_bias,
    	ShuffleConvs_1_ShuffleUnit1_0_conv3_weight,
    	ShuffleConvs_1_ShuffleUnit1_0_conv3_bias,
    	shuffleunit1_0_output);
/**ShuffleUnit1_1**/
    ShuffleUnit1(shuffleunit1_0_output,
    	ShuffleConvs_1_ShuffleUnit1_1_conv1_weight,
    	ShuffleConvs_1_ShuffleUnit1_1_conv1_bias,
    	ShuffleConvs_1_ShuffleUnit1_1_conv2_weight,
    	ShuffleConvs_1_ShuffleUnit1_1_conv2_bias,
    	ShuffleConvs_1_ShuffleUnit1_1_conv3_weight,
    	ShuffleConvs_1_ShuffleUnit1_1_conv3_bias,
    	shuffleunit1_1_output);
/**ShuffleUnit1_2**/
    ShuffleUnit1(shuffleunit1_1_output,
    	ShuffleConvs_1_ShuffleUnit1_2_conv1_weight,
    	ShuffleConvs_1_ShuffleUnit1_2_conv1_bias,
    	ShuffleConvs_1_ShuffleUnit1_2_conv2_weight,
    	ShuffleConvs_1_ShuffleUnit1_2_conv2_bias,
    	ShuffleConvs_1_ShuffleUnit1_2_conv3_weight,
    	ShuffleConvs_1_ShuffleUnit1_2_conv3_bias,
    	shuffleunit1_2_output);
/**ShuffleUnit1_3**/
    ShuffleUnit1(shuffleunit1_2_output,
    	ShuffleConvs_1_ShuffleUnit1_3_conv1_weight,
    	ShuffleConvs_1_ShuffleUnit1_3_conv1_bias,
    	ShuffleConvs_1_ShuffleUnit1_3_conv2_weight,
    	ShuffleConvs_1_ShuffleUnit1_3_conv2_bias,
    	ShuffleConvs_1_ShuffleUnit1_3_conv3_weight,
    	ShuffleConvs_1_ShuffleUnit1_3_conv3_bias,
    	shuffleunit1_3_output);
/**ShuffleUnit1_4**/
    ShuffleUnit1(shuffleunit1_3_output,
    	ShuffleConvs_1_ShuffleUnit1_4_conv1_weight,
    	ShuffleConvs_1_ShuffleUnit1_4_conv1_bias,
    	ShuffleConvs_1_ShuffleUnit1_4_conv2_weight,
    	ShuffleConvs_1_ShuffleUnit1_4_conv2_bias,
    	ShuffleConvs_1_ShuffleUnit1_4_conv3_weight,
    	ShuffleConvs_1_ShuffleUnit1_4_conv3_bias,
    	shuffleunit1_4_output);
/**ShuffleUnit1_5**/
    ShuffleUnit1(shuffleunit1_4_output,
    	ShuffleConvs_1_ShuffleUnit1_5_conv1_weight,
    	ShuffleConvs_1_ShuffleUnit1_5_conv1_bias,
    	ShuffleConvs_1_ShuffleUnit1_5_conv2_weight,
    	ShuffleConvs_1_ShuffleUnit1_5_conv2_bias,
    	ShuffleConvs_1_ShuffleUnit1_5_conv3_weight,
    	ShuffleConvs_1_ShuffleUnit1_5_conv3_bias,
    	shuffleunit1_5_output);
/**ShuffleUnit1_6**/
    ShuffleUnit1(shuffleunit1_5_output,
    	ShuffleConvs_1_ShuffleUnit1_6_conv1_weight,
    	ShuffleConvs_1_ShuffleUnit1_6_conv1_bias,
    	ShuffleConvs_1_ShuffleUnit1_6_conv2_weight,
    	ShuffleConvs_1_ShuffleUnit1_6_conv2_bias,
    	ShuffleConvs_1_ShuffleUnit1_6_conv3_weight,
    	ShuffleConvs_1_ShuffleUnit1_6_conv3_bias,
    	shuffleunit1_6_output);
/**ShuffleUnit1_7**/
    ShuffleUnit1(shuffleunit1_6_output,
    	ShuffleConvs_1_ShuffleUnit1_7_conv1_weight,
    	ShuffleConvs_1_ShuffleUnit1_7_conv1_bias,
    	ShuffleConvs_1_ShuffleUnit1_7_conv2_weight,
    	ShuffleConvs_1_ShuffleUnit1_7_conv2_bias,
    	ShuffleConvs_1_ShuffleUnit1_7_conv3_weight,
    	ShuffleConvs_1_ShuffleUnit1_7_conv3_bias,
    	shuffleunit1_7_output);	
/**DownsampleUnit2**/
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
/**ShuffleUnit2_0**/
	ShuffleUnit2(downsampleunit2_output,
	    	ShuffleConvs_2_ShuffleUnit2_0_conv1_weight,
	    	ShuffleConvs_2_ShuffleUnit2_0_conv1_bias,
	    	ShuffleConvs_2_ShuffleUnit2_0_conv2_weight,
	    	ShuffleConvs_2_ShuffleUnit2_0_conv2_bias,
	    	ShuffleConvs_2_ShuffleUnit2_0_conv3_weight,
	    	ShuffleConvs_2_ShuffleUnit2_0_conv3_bias,
	    	shuffleunit2_0_output);
/**ShuffleUnit2_1**/
	ShuffleUnit2(shuffleunit2_0_output,
	    	ShuffleConvs_2_ShuffleUnit2_1_conv1_weight,
	    	ShuffleConvs_2_ShuffleUnit2_1_conv1_bias,
	    	ShuffleConvs_2_ShuffleUnit2_1_conv2_weight,
	    	ShuffleConvs_2_ShuffleUnit2_1_conv2_bias,
	    	ShuffleConvs_2_ShuffleUnit2_1_conv3_weight,
	    	ShuffleConvs_2_ShuffleUnit2_1_conv3_bias,
	    	shuffleunit2_1_output);
/**ShuffleUnit2_2**/
	ShuffleUnit2(shuffleunit2_1_output,
	    	ShuffleConvs_2_ShuffleUnit2_2_conv1_weight,
	    	ShuffleConvs_2_ShuffleUnit2_2_conv1_bias,
	    	ShuffleConvs_2_ShuffleUnit2_2_conv2_weight,
	    	ShuffleConvs_2_ShuffleUnit2_2_conv2_bias,
	    	ShuffleConvs_2_ShuffleUnit2_2_conv3_weight,
	    	ShuffleConvs_2_ShuffleUnit2_2_conv3_bias,
	    	shuffleunit2_2_output);
/**last layer**/
	conv_last(shuffleunit2_2_output,
		conv_last_weight,
		conv_last_bias,
		conv_last_output
		);
	avgpool(conv_last_output,avgpool_output);
	fc(avgpool_output,fc_weight,fc_bias,fc_output);

	for(int i = 0;i<1000;i++){
		
			cout<<fc_output[i]<<endl;
	}
    
}

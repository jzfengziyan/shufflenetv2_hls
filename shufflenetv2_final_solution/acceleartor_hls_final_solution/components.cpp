#include <iostream>
#include <fstream>
#include <math.h>
//#include <ap_fixed.h>
using namespace std;
#include "shufflenet.h"
void MUL_DP( FIX_8 a, FIX_8 b, FIX_8 w, FIX_16 rr[2])
{
#pragma HLS pipeline

	ap_int<25> ai=0;
	ap_int<8> bi,ci;
	ap_int<33> rst;
	ap_uint<18> cst=0;

	ai.range(24,17)=a.range(7,0);
	bi.range(7,0)=b.range(7,0);
	ci.range(7,0)=w.range(7,0);
	//if( ((ci<0)&&(bi>0)) || ((ci>0) && (bi<0))) cst=0x20000;
	//rst=(ai+bi) *ci+cst;
	rst = (ai + bi) * ci;
	//rr[0].range(15,0)=rst.range(32,17);
	rr[0].range(15,0)=rst.range(32,17) + rst[15];//a * w
	rr[1].range(15,0)=rst.range(15,0);//b*w
}

void conv1_p(FIX_8 input[1][3][34][34],
	FIX_8 weight[24][3][3][3],
	FIX_8 bias[24],
	FIX_8 output[1][24][34][34]){

	FIX_8 weight_temp[24][3][3][3]={FIX_8(0)};

#pragma HLS ARRAY_PARTITION variable=weight_temp cyclic factor=12 dim=1
#pragma HLS ARRAY_PARTITION variable=output cyclic factor=12 dim=2

	int i = 0;
	int j = 0;
	int k = 0;
	int p = 0;
//----------------Load--------------------
	for(i = 0; i < 24; i++){
		for(j = 0; j < 3; j++){
			for(k = 0; k < 3; k++){
				for(p = 0; p < 3; p++){
				#pragma HLS PIPELINE
					weight_temp[i][j][k][p] = weight[i][j][k][p];
				}
			}
		}
	}
//----------Compute------------------------
    for(i = 0;i < 24;i++){
        for(j = 1;j < 33;j++){
        	for(k = 1;k < 33;k++){
			#pragma HLS PIPELINE
        		output[0][i][j][k] =  bias[i];
        	}
        }
    }
	/*for(int h = 1;h<33;h++){
		for(int w = 1;w<33;w++){
			for(int m = 0;m<3;m++){
				for(int n = 0;n<3;n++){
					for(int ci = 0;ci<3;ci++){
						for(int co = 0;co<24;co++){
						//#pragma HLS UNROLL factor=24
							output[0][co][h][w] += weight_temp[co][ci][m][n] * input[0][ci][h+m-1][w+n-1];

						}
					}
				}
			}
		}
	}*/
	FIX_16 rr[2] = {0};
    for(int h = 1;h<33;h++){
    		for(int w = 1;w<33;w++){
    			for(int m = 0;m<3;m++){
    				for(int n = 0;n<3;n++){
    					for(int ci = 0;ci<3;ci++){
    						for(int co = 0;co<12;co++){
#pragma HLS UNROLL factor=12
						MUL_DP( weight_temp[co][ci][m][n], weight_temp[co+12][ci][m][n], input[0][ci][h+m-1][w+n-1], rr);
						output[0][co][h][w] +=rr[0];
						output[0][co+12][h][w] += rr[1];
    						}
    					}
    				}
    			}
    		}
    	}
//------------Write--------------
    for(i = 0;i < 24;i++){
        for(j = 1;j < 33;j++){
        	for(k = 1;k < 33;k++){
			#pragma HLS PIPELINE
				if(output[0][i][j][k] < 0){
					output[0][i][j][k] = 0;
				}
        	}
        }
    }
}
/*FIX_8 COMPUTE_ENGINE(FIX_8 w0, FIX_8 b0,FIX_8 w1, FIX_8 b1,FIX_8 w2, FIX_8 b2,FIX_8 w3, FIX_8 b3,FIX_8 w4, FIX_8 b4,
		FIX_8 w5, FIX_8 b5,FIX_8 w6, FIX_8 b6,FIX_8 w7, FIX_8 b7,FIX_8 w8, FIX_8 b8,FIX_8 w9, FIX_8 b9,FIX_8 w10, FIX_8 b10,
		FIX_8 w11, FIX_8 b11,FIX_8 w12, FIX_8 b12,FIX_8 w13, FIX_8 b13,FIX_8 w14, FIX_8 b14,FIX_8 w15, FIX_8 b15,
		FIX_8 w16, FIX_8 b16,FIX_8 w17, FIX_8 b17,FIX_8 w18, FIX_8 b18,FIX_8 w19, FIX_8 b19,FIX_8 w20, FIX_8 b20,
		FIX_8 w21, FIX_8 b21,FIX_8 w22, FIX_8 b22,FIX_8 w23, FIX_8 b23){
	FIX_8 mul0, mul1, mul2 ,mul3,mul4,mul5,mul6,mul7,mul8,mul9,mul10,mul11,mul12,mul13,mul14,mul15,mul16,mul17,mul18,mul19,mul20,mul21,mul22,mul23;
	FIX_8 add0, add1, add2, add3, add4, add5, add6,add7,add8,add9,add10,add11,add12,add13,add14,add15,add16,add17,add18,add19,add20,add21,add22;
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
//step 1
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
//step 2

	add12 = add0 + add1;
	add13 = add2 + add3;
	add14 = add4 + add5;
	add15 = add6 + add7;
	add16 = add8 + add9;
	add17 = add10 + add11;
//step 3

	add18 = add12 + add13;
	add19 = add14 + add15;
	add20 = add16 + add17;
//step 4
	add21 = add18 + add19;
//step 5
	add22 = add20 + add21;
	return add22;

}*/

void subconv_1x1_32_p(FIX_8 input[1][24][34][34],
	FIX_8 weight[24][24][1][1],
	FIX_8 bias[24],
	FIX_8 output[1][24][34][34]){
#pragma HLS ARRAY_PARTITION variable=weight cyclic factor=24 dim=1
#pragma HLS ARRAY_PARTITION variable=output cyclic factor=24 dim=2
	//bias
		for(int co = 0;co<24;co++){
			for(int h = 1;h<33;h++){
				for(int w = 1;w<33;w++){
#pragma HLS PIPELINE
					output[0][co][h][w] = bias[co];
				}
			}
		}
	//conv
		/*FIX_16 rr[2] = {0};
		for(int h = 1;h<33;h++){
			for(int w = 1;w<33;w++){
				for(int ci = 0;ci<24;ci++){
//#pragma HLS PIPELINE
					for(int co = 0;co<6;co++){
#pragma HLS UNROLL factor=24

						MUL_DP( weight[co][ci][0][0], weight[co+12][ci][0][0], input[0][ci][h][w], rr);

						output[0][co][h][w] +=rr[0];
						output[0][co+12][h][w] += rr[1];
//						output[0][co][h][w] += weight[co][ci][0][0]*input[0][ci][h][w];
//						output[0][co+12][h][w] += weight[co+12][ci][0][0]*input[0][ci][h][w];
//						cout<<rr[0]<<" "<<weight[co][ci][0][0]*input[0][ci][h][w] <<"|";


					}
				}
			}
		}
		for(int h = 1;h<33;h++){
					for(int w = 1;w<33;w++){
						for(int ci = 0;ci<24;ci++){
		//#pragma HLS PIPELINE
							for(int co = 6;co<12;co++){
#pragma HLS UNROLL factor=24
								//FIX_16 rr[2] = {0};
								MUL_DP( weight[co][ci][0][0], weight[co+12][ci][0][0], input[0][ci][h][w], rr);

								output[0][co][h][w] +=rr[0];
								output[0][co+12][h][w] += rr[1];
		//						output[0][co][h][w] += weight[co][ci][0][0]*input[0][ci][h][w];
		//						output[0][co+12][h][w] += weight[co+12][ci][0][0]*input[0][ci][h][w];
		//						cout<<rr[0]<<" "<<weight[co][ci][0][0]*input[0][ci][h][w] <<"|";


							}
						}
					}
				}*/
	FIX_16 rr[2] = {0};
			for(int h = 1;h<33;h++){
				for(int w = 1;w<33;w++){
					for(int ci = 0;ci<24;ci++){
	//#pragma HLS PIPELINE
						for(int co = 0;co<12;co++){
	#pragma HLS UNROLL factor=24

							MUL_DP( weight[co][ci][0][0], weight[co+12][ci][0][0], input[0][ci][h][w], rr);
							output[0][co][h][w] +=rr[0];
							output[0][co+12][h][w] += rr[1];
						}
					}
				}
			}


	//ReLU
		for(int co = 0;co<24;co++){
			for(int h = 1;h<33;h++){
				for(int w = 1;w<33;w++){
#pragma HLS PIPELINE
					if(output[0][co][h][w]<0){
						output[0][co][h][w] = 0;
					}
				}
			}
		}
}

void subconv_1x1_16_p(FIX_8 input[1][24][18][18],
	FIX_8 weight[24][24][1][1],
	FIX_8 bias[24],
	FIX_8 output[1][24][18][18]){
//fix_point problem
#pragma HLS ARRAY_PARTITION variable=weight cyclic factor=24 dim=1
#pragma HLS ARRAY_PARTITION variable=output cyclic factor=24 dim=2
	FIX_16 rr[2] = {0};

//-----------3rd version (not same result as 1st and 2nd)---------------------------
	//bias
	for(int co = 0;co<24;co++){
		for(int h = 1;h<17;h++){
			for(int w = 1;w<17;w++){
#pragma HLS PIPELINE
				output[0][co][h][w] = bias[co];
			}
		}
	}
//conv

	/*for(int h = 1;h<17;h++){
		for(int w = 1;w<17;w++){
			for(int ci = 0;ci<24;ci++){
				for(int co = 0;co<6;co++){
#pragma HLS UNROLL
				MUL_DP( weight[co][ci][0][0], weight[co+12][ci][0][0], input[0][ci][h][w], rr);

				output[0][co][h][w] +=rr[0];
				output[0][co+12][h][w] += rr[1];

				//output[0][co][h][w] += weight[co][ci][0][0]*input[0][ci][h][w];
				}
			}
		}
	}

	for(int h = 1;h<17;h++){
			for(int w = 1;w<17;w++){
				for(int ci = 0;ci<24;ci++){
					for(int co = 6;co<12;co++){
	#pragma HLS UNROLL
					MUL_DP( weight[co][ci][0][0], weight[co+12][ci][0][0], input[0][ci][h][w], rr);

					output[0][co][h][w] +=rr[0];
					output[0][co+12][h][w] += rr[1];

					//output[0][co][h][w] += weight[co][ci][0][0]*input[0][ci][h][w];
					}
				}
			}
		}*/
	for(int h = 1;h<17;h++){
			for(int w = 1;w<17;w++){
				for(int ci = 0;ci<24;ci++){
					for(int co = 0;co<12;co++){
	#pragma HLS UNROLL factor=24
					MUL_DP( weight[co][ci][0][0], weight[co+12][ci][0][0], input[0][ci][h][w], rr);

					output[0][co][h][w] +=rr[0];
					output[0][co+12][h][w] += rr[1];

					//output[0][co][h][w] += weight[co][ci][0][0]*input[0][ci][h][w];
					}
				}
			}
		}

//ReLU
	for(int co = 0;co<24;co++){
		for(int h = 1;h<17;h++){
			for(int w = 1;w<17;w++){
#pragma HLS PIPELINE
				if(output[0][co][h][w]<0){
					output[0][co][h][w] = 0;
				}
			}
		}
	}
}

void subconv_3x3_32_stride_no_relu_p(FIX_8 input[1][24][34][34],
	FIX_8 weight[24][1][3][3],
	FIX_8 bias[24],
	FIX_8 output[1][24][18][18]){
	for(int co = 0;co<24;co++){
		for(int h = 1;h<17;h++){
			for(int w = 1;w<17;w++){
				FIX_8 sum = 0;
				for(int m = 0;m<3;m++){
						for(int n = 0;n<3;n++){
							sum += weight[co][0][m][n] * input[0][co][h*2+m-2][w*2+n-2];
						}
					}
				FIX_8 result = sum + bias[co];
				output[0][co][h][w] = result;
			}
		}
	}
/*#pragma HLS ARRAY_PARTITION variable=weight cyclic factor=24 dim=1
#pragma HLS ARRAY_PARTITION variable=output cyclic factor=24 dim=2
	//bias
	for(int co = 0;co<24;co++){
		for(int h = 1;h<17;h++){
			for(int w = 1;w<17;w++){
#pragma HLS PIPELINE
				output[0][co][h][w] = bias[co];
			}
		}
	}
//conv

	for(int h = 1;h<17;h++){
		for(int w = 1;w<17;w++){
			for(int m = 0;m<3;m++){
				for(int n = 0;n<3;n++){
					for(int co = 0;co<24;co++){
#pragma HLS UNROLL factor=24
						output[0][co][h][w] += weight[co][0][m][n] * input[0][co][h*2+m-2][w*2+n-2];
					}
				}
			}
		}
	}*/
}

void subconv_3x3_16_no_relu_p(FIX_8 input[1][24][18][18],
	FIX_8 weight[24][1][3][3],
	FIX_8 bias[24],
	FIX_8 output[1][24][18][18]){
	for(int co = 0;co<24;co++){
		for(int h = 1;h<17;h++){
			for(int w = 1;w<17;w++){
				FIX_8 sum = 0;
				for(int m = 0;m<3;m++){
						for(int n = 0;n<3;n++){
							sum += weight[co][0][m][n] * input[0][co][h+m-1][w+n-1];
						}
					}
				FIX_8 result = sum + bias[co];
				output[0][co][h][w] = result;
			}
		}
	}
/*#pragma HLS ARRAY_PARTITION variable=weight cyclic factor=24 dim=1
#pragma HLS ARRAY_PARTITION variable=output cyclic factor=24 dim=2
//bias
	for(int co = 0;co<24;co++){
		for(int h = 1;h<17;h++){
			for(int w = 1;w<17;w++){
#pragma HLS PIPELINE
				output[0][co][h][w] = bias[co];
			}
		}
	}
//conv

	for(int h = 1;h<17;h++){
		for(int w = 1;w<17;w++){
			for(int m = 0;m<3;m++){
				for(int n = 0;n<3;n++){
					for(int co = 0;co<24;co++){
#pragma HLS UNROLL factor=24
						output[0][co][h][w] += weight[co][0][m][n] * input[0][co][h+m-1][w+n-1];
					}
				}
			}
		}
	}*/
}

void shuffle_24_p(FIX_8 left[1][24][18][18],FIX_8 right[1][24][18][18],FIX_8 output[1][48][18][18]){
	for(int co = 0;co <48;co ++){
		for(int h=0;h<18;h++){
			for(int w = 0;w<18;w++){
				if (co%2 == 0)output[0][co][h][w] = left[0][co/2][h][w];
				else output[0][co][h][w] = right[0][co/2][h][w];
			}
		}
	}
}

void shuffle_24_l_p(FIX_8 left[1][24][18][18], FIX_8 output[1][48][18][18]){
	for(int co = 0;co <48;co ++){
		for(int h=0;h<18;h++){
			for(int w = 0;w<18;w++){
				if (co%2 == 0)output[0][co][h][w] = left[0][co/2][h][w];
				//else output[0][co][h][w] = right[0][co/2][h][w];
			}
		}
	}
}

void shuffle_24_r_p(FIX_8 right[1][24][18][18], FIX_8 output[1][48][18][18]){
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
	FIX_8 output[1][48][16][16]){

	FIX_8 conv1r_output[1][24][32][32]={0};
	FIX_8 conv2r_ourput[1][24][16][16]={0};
	FIX_8 conv3r_ourput[1][24][16][16]={0};
	FIX_8 conv1l_output[1][24][16][16]={0};
	FIX_8 conv2l_output[1][24][16][16]={0};


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
void ShuffleUnit0(FIX_8 input[1][48][16][16],
	FIX_8 conv1_weight[24][24][1][1],
	FIX_8 conv1_bias[24],
	FIX_8 conv2_weight[24][1][3][3],
	FIX_8 conv2_bias[24],
	FIX_8 conv3_weight[24][24][1][1],
	FIX_8 conv3_bias[24],
	FIX_8 output[1][48][16][16]
	){
	FIX_8 left_part[1][24][16][16] = {0};
	FIX_8 right_part[1][24][16][16] = {0};
	FIX_8 conv1_output[1][24][16][16] = {0};
	FIX_8 conv2_output[1][24][16][16] = {0};
	FIX_8 conv3_output[1][24][16][16] = {0};
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

/*void subconv_1x1_16p(FIX_8 input[1][48][16][16],
	FIX_8 weight[48][48][1][1],
	FIX_8 bias[48],
	FIX_8 output[1][48][16][16]){

	for(int co = 0;co<48;co++){
		for(int h = 0;h<16;h++){
			for(int w = 0;w<16;w++){
				FIX_8 sum = 0;
				for(int ci = 0;ci<48;ci++){
					sum += weight[co][ci][0][0]*input[0][ci][h][w];




				}
				FIX_8 result = sum + bias[co];
                output[0][co][h][w] = (result > 0)? result : 0f;
			}
		}
	}

}*/

void subconv_1x1_16p_p(FIX_8 input[1][48][18][18],
	FIX_8 weight[48][48][1][1],
	FIX_8 bias[48],
	FIX_8 output[1][48][18][18]){
#pragma HLS ARRAY_PARTITION variable=weight cyclic factor=24 dim=1
#pragma HLS ARRAY_PARTITION variable=output cyclic factor=24 dim=2
	FIX_16 rr[2] = {0};
	//bias
		for(int co = 0;co<48;co++){
			for(int h = 1;h<17;h++){
				for(int w = 1;w<17;w++){
#pragma HLS PIPELINE
					output[0][co][h][w] = bias[co];
				}
			}
		}
	//conv

		/*for(int h = 1;h<17;h++){
			for(int w = 1;w<17;w++){
				for(int ci = 0;ci<48;ci++){
					for(int co = 0;co<6;co++){
#pragma HLS UNROLL factor=24
					MUL_DP( weight[co][ci][0][0], weight[co+24][ci][0][0], input[0][ci][h][w], rr);

					output[0][co][h][w] +=rr[0];
					output[0][co+24][h][w] += rr[1];
					}
				}
			}
		}
		for(int h = 1;h<17;h++){
					for(int w = 1;w<17;w++){
						for(int ci = 0;ci<48;ci++){
							for(int co = 6;co<12;co++){
#pragma HLS UNROLL factor=24
							MUL_DP( weight[co][ci][0][0], weight[co+24][ci][0][0], input[0][ci][h][w], rr);

							output[0][co][h][w] +=rr[0];
							output[0][co+24][h][w] += rr[1];
							}
						}
					}
				}
		for(int h = 1;h<17;h++){
					for(int w = 1;w<17;w++){
						for(int ci = 0;ci<48;ci++){
							for(int co = 12;co<18;co++){
		#pragma HLS UNROLL
							MUL_DP( weight[co][ci][0][0], weight[co+24][ci][0][0], input[0][ci][h][w], rr);

							output[0][co][h][w] +=rr[0];
							output[0][co+24][h][w] += rr[1];
							}
						}
					}
						}
		for(int h = 1;h<17;h++){
			for(int w = 1;w<17;w++){
				for(int ci = 0;ci<48;ci++){
					for(int co = 18;co<24;co++){
#pragma HLS UNROLL
					MUL_DP( weight[co][ci][0][0], weight[co+24][ci][0][0], input[0][ci][h][w], rr);

					output[0][co][h][w] +=rr[0];
					output[0][co+24][h][w] += rr[1];
					}
				}
			}
		}*/
		for(int h = 1;h<17;h++){
			for(int w = 1;w<17;w++){
				for(int ci = 0;ci<48;ci++){
					for(int co = 0;co<24;co++){
#pragma HLS UNROLL factor=24
					MUL_DP( weight[co][ci][0][0], weight[co+24][ci][0][0], input[0][ci][h][w], rr);

					output[0][co][h][w] +=rr[0];
					output[0][co+24][h][w] += rr[1];
					}
				}
			}
		}
	//ReLU
		for(int co = 0;co<48;co++){
			for(int h = 1;h<17;h++){
				for(int w = 1;w<17;w++){
#pragma HLS PIPELINE
					if(output[0][co][h][w]<0){
						output[0][co][h][w] = 0;
					}
				}
			}
		}
}

void subconv_1x1_8_p(FIX_8 input[1][48][10][10],
	FIX_8 weight[48][48][1][1],
	FIX_8 bias[48],
	FIX_8 output[1][48][10][10]){

	FIX_16 rr[2] = {0};

#pragma HLS ARRAY_PARTITION variable=weight cyclic factor=24 dim=1
#pragma HLS ARRAY_PARTITION variable=output cyclic factor=24 dim=2
	//bias
		for(int co = 0;co<48;co++){
			for(int h = 1;h<9;h++){
				for(int w = 1;w<9;w++){
#pragma HLS PIPELINE
					output[0][co][h][w] = bias[co];
				}
			}
		}
	//conv

		for(int h = 1;h<9;h++){
			for(int w = 1;w<9;w++){
				for(int ci = 0;ci<48;ci++){
					for(int co = 0;co<24;co++){
#pragma HLS UNROLL factor=24
						MUL_DP( weight[co][ci][0][0], weight[co+24][ci][0][0], input[0][ci][h][w], rr);

						output[0][co][h][w] +=rr[0];
						output[0][co+24][h][w] += rr[1];
					}
				}
			}
		}
	/*for(int h = 1;h<9;h++){
		for(int w = 1;w<9;w++){
			for(int ci = 0;ci<48;ci++){
				for(int co = 0;co<6;co++){
	#pragma HLS UNROLL factor=24
					MUL_DP( weight[co][ci][0][0], weight[co+24][ci][0][0], input[0][ci][h][w], rr);
					output[0][co][h][w] +=rr[0];
					output[0][co+24][h][w] += rr[1];
				}
			}
		}
	}
	for(int h = 1;h<9;h++){
		for(int w = 1;w<9;w++){
			for(int ci = 0;ci<48;ci++){
				for(int co = 6;co<12;co++){
	#pragma HLS UNROLL factor=24
					MUL_DP( weight[co][ci][0][0], weight[co+24][ci][0][0], input[0][ci][h][w], rr);
					output[0][co][h][w] +=rr[0];
					output[0][co+24][h][w] += rr[1];
				}
			}
		}
	}
	for(int h = 1;h<9;h++){
		for(int w = 1;w<9;w++){
			for(int ci = 0;ci<48;ci++){
				for(int co = 12;co<18;co++){
	#pragma HLS UNROLL factor=24
					MUL_DP( weight[co][ci][0][0], weight[co+24][ci][0][0], input[0][ci][h][w], rr);
					output[0][co][h][w] +=rr[0];
					output[0][co+24][h][w] += rr[1];
				}
			}
		}
	}
	for(int h = 1;h<9;h++){
		for(int w = 1;w<9;w++){
			for(int ci = 0;ci<48;ci++){
				for(int co = 18;co<24;co++){
	#pragma HLS UNROLL factor=24
					MUL_DP( weight[co][ci][0][0], weight[co+24][ci][0][0], input[0][ci][h][w], rr);
					output[0][co][h][w] +=rr[0];
					output[0][co+24][h][w] += rr[1];
				}
			}
		}
	}*/


	//ReLU
		for(int co = 0;co<48;co++){
			for(int h = 1;h<9;h++){
				for(int w = 1;w<9;w++){
#pragma HLS PIPELINE
					if(output[0][co][h][w]<0){
						output[0][co][h][w] = 0;
					}
				}
			}
		}
}

void subconv_3x3_16_stride_no_relu_p(FIX_8 input[1][48][18][18],
	FIX_8 weight[48][1][3][3],
	FIX_8 bias[48],
	FIX_8 output[1][48][10][10]){
	for(int co = 0;co<48;co++){
		for(int h = 1;h<9;h++){
			for(int w = 1;w<9;w++){
				FIX_8 sum = 0;
				for(int m = 0;m<3;m++){
						for(int n = 0;n<3;n++){
							sum += weight[co][0][m][n] * input[0][co][h*2+m-2][w*2+n-2];
						
						}
					}
				FIX_8 result = sum + bias[co];
				output[0][co][h][w] = result;
			}
		}
	}
/*#pragma HLS ARRAY_PARTITION variable=weight cyclic factor=24 dim=1
#pragma HLS ARRAY_PARTITION variable=output cyclic factor=24 dim=2
	//bias
		for(int co = 0;co<48;co++){
			for(int h = 1;h<9;h++){
				for(int w = 1;w<9;w++){
#pragma HLS PIPELINE
					output[0][co][h][w] = bias[co];
				}
			}
		}
	//conv

		for(int h = 1;h<9;h++){
			for(int w = 1;w<9;w++){
				for(int m = 0;m<3;m++){
					for(int n = 0;n<3;n++){
						for(int co = 0;co<48;co++){
#pragma HLS UNROLL factor=24
							output[0][co][h][w] += weight[co][0][m][n] * input[0][co][h*2+m-2][w*2+n-2];

						}
					}
				}
			}
		}*/
}

void subconv_3x3_8_no_relu_p(FIX_8 input[1][48][10][10],
	FIX_8 weight[48][1][3][3],
	FIX_8 bias[48],
	FIX_8 output[1][48][10][10]){
	for(int co = 0;co<48;co++){
		for(int h = 1;h<9;h++){
			for(int w = 1;w<9;w++){
				FIX_8 sum = 0;
				for(int m = 0;m<3;m++){
						for(int n = 0;n<3;n++){
							sum += weight[co][0][m][n] * input[0][co][h+m-1][w+n-1];
						}
					}
				FIX_8 result = sum + bias[co];
				output[0][co][h][w] = result;
			}
		}
	}
/*#pragma HLS ARRAY_PARTITION variable=weight cyclic factor=24 dim=1
#pragma HLS ARRAY_PARTITION variable=output cyclic factor=24 dim=2
	//bias
		for(int co = 0;co<48;co++){
			for(int h = 1;h<9;h++){
				for(int w = 1;w<9;w++){
#pragma HLS PIPELINE
					output[0][co][h][w] = bias[co];
				}
			}
		}
	//conv

		for(int h = 1;h<9;h++){
			for(int w = 1;w<9;w++){
				for(int m = 0;m<3;m++){
					for(int n = 0;n<3;n++){
						for(int co = 0;co<48;co++){
#pragma HLS UNROLL factor=24
							output[0][co][h][w] += weight[co][0][m][n] * input[0][co][h+m-1][w+n-1];
						}
					}
				}
			}
		}*/
}

void shuffle_48_p(FIX_8 left[1][48][10][10],FIX_8 right[1][48][10][10],FIX_8 output[1][96][10][10]){
	for(int co = 0;co <96;co ++){
		for(int h=0;h<10;h++){
			for(int w = 0;w<10;w++){
				if (co%2 == 0)output[0][co][h][w] = left[0][co/2][h][w];
				else output[0][co][h][w] = right[0][co/2][h][w];
			}
		}
	}
}

void shuffle_48_l_p(FIX_8 left[1][48][10][10], FIX_8 output[1][96][10][10]){
	for(int co = 0;co <96;co ++){
		for(int h=0;h<10;h++){
			for(int w = 0;w<10;w++){
				if (co%2 == 0)output[0][co][h][w] = left[0][co/2][h][w];
				//else output[0][co][h][w] = right[0][co/2][h][w];
			}
		}
	}
}



void shuffle_48_r_p(FIX_8 right[1][48][10][10], FIX_8 output[1][96][10][10]){
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
	FIX_8 output[1][96][8][8]){

	FIX_8 conv1r_output[1][48][16][16]={0};
	FIX_8 conv2r_ourput[1][48][8][8]={0};
	FIX_8 conv3r_ourput[1][48][8][8]={0};
	FIX_8 conv1l_output[1][48][8][8]={0};
	FIX_8 conv2l_output[1][48][8][8]={0};


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
void ShuffleUnit1(FIX_8 input[1][96][8][8],
	FIX_8 conv1_weight[48][48][1][1],
	FIX_8 conv1_bias[48],
	FIX_8 conv2_weight[48][1][3][3],
	FIX_8 conv2_bias[48],
	FIX_8 conv3_weight[48][48][1][1],
	FIX_8 conv3_bias[48],
	FIX_8 output[1][96][8][8]
	){
	FIX_8 left_part[1][48][8][8] = {0};
	FIX_8 right_part[1][48][8][8] = {0};
	FIX_8 conv1_output[1][48][8][8] = {0};
	FIX_8 conv2_output[1][48][8][8] = {0};
	FIX_8 conv3_output[1][48][8][8] = {0};

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
/*void subconv_1x1_8p(FIX_8 input[1][96][8][8],
	FIX_8 weight[96][96][1][1],
	FIX_8 bias[96],
	FIX_8 output[1][96][8][8]){

	for(int co = 0;co<96;co++){
		for(int h = 0;h<8;h++){
			for(int w = 0;w<8;w++){
				FIX_8 sum = 0;
				for(int ci = 0;ci<96;ci++){
					sum += weight[co][ci][0][0]*input[0][ci][h][w];
				}
				FIX_8 result = sum + bias[co];
                output[0][co][h][w] = (result > 0)? result : 0f;
			}
		}
	}
}*/

void subconv_1x1_8p_p(FIX_8 input[1][96][10][10],
	FIX_8 weight[96][96][1][1],
	FIX_8 bias[96],
	FIX_8 output[1][96][10][10]){

	/*for(int co = 0;co<96;co++){
		for(int h = 1;h<9;h++){
			for(int w = 1;w<9;w++){
				FIX_8 sum = 0;
				for(int ci = 0;ci<96;ci++){
					sum += weight[co][ci][0][0]*input[0][ci][h][w];
				}
				FIX_8 result = sum + bias[co];
                output[0][co][h][w] = (result > 0)? result : FIX_8(0);
			}
		}
	}*/
#pragma HLS ARRAY_PARTITION variable=weight cyclic factor=12 dim=1
#pragma HLS ARRAY_PARTITION variable=output cyclic factor=12 dim=2
	//bias
		for(int co = 0;co<96;co++){
			for(int h = 1;h<9;h++){
				for(int w = 1;w<9;w++){
#pragma HLS PIPELINE
					output[0][co][h][w] = bias[co];
				}
			}
		}
	//conv

		/*for(int h = 1;h<9;h++){
			for(int w = 1;w<9;w++){
				for(int ci = 0;ci<96;ci++){
					for(int co = 0;co<96;co++){
#pragma HLS UNROLL factor=24
					output[0][co][h][w] += weight[co][ci][0][0]*input[0][ci][h][w];
					}
				}
			}
		}*/
	/*FIX_16 rr[2] = {0};
	for(int h = 1;h<9;h++){
		for(int w = 1;w<9;w++){
			for(int ci = 0;ci<96;ci++){
				for(int co = 0;co<12;co++){
	#pragma HLS UNROLL factor=12
					MUL_DP( weight[co][ci][h][w], weight[co+48][ci][0][0], input[0][ci][h][w], rr);
					output[0][co][h][w] +=rr[0];
					output[0][co+48][h][w] += rr[1];
				}
			}
		}
	}
	for(int h = 1;h<9;h++){
		for(int w = 1;w<9;w++){
			for(int ci = 0;ci<96;ci++){
				for(int co = 12;co<24;co++){
	#pragma HLS UNROLL factor=12
					MUL_DP( weight[co][ci][h][w], weight[co+48][ci][0][0], input[0][ci][h][w], rr);
					output[0][co][h][w] +=rr[0];
					output[0][co+48][h][w] += rr[1];
				}
			}
		}
	}
	for(int h = 1;h<9;h++){
		for(int w = 1;w<9;w++){
			for(int ci = 0;ci<96;ci++){
				for(int co = 24;co<36;co++){
	#pragma HLS UNROLL factor=12
					MUL_DP( weight[co][ci][h][w], weight[co+48][ci][0][0], input[0][ci][h][w], rr);
					output[0][co][h][w] +=rr[0];
					output[0][co+48][h][w] += rr[1];
				}
			}
		}
	}
	for(int h = 1;h<9;h++){
		for(int w = 1;w<9;w++){
			for(int ci = 0;ci<96;ci++){
				for(int co = 36;co<48;co++){
	#pragma HLS UNROLL factor=12
					MUL_DP( weight[co][ci][h][w], weight[co+48][ci][0][0], input[0][ci][h][w], rr);
					output[0][co][h][w] +=rr[0];
					output[0][co+48][h][w] += rr[1];
				}
			}
		}
	}*/
		FIX_16 rr[2] = {0};
		for(int h = 1;h<9;h++){
			for(int w = 1;w<9;w++){
				for(int ci = 0;ci<96;ci++){
					for(int co = 0;co<48;co++){
		#pragma HLS UNROLL factor=12
						MUL_DP( weight[co][ci][h][w], weight[co+48][ci][0][0], input[0][ci][h][w], rr);
						output[0][co][h][w] +=rr[0];
						output[0][co+48][h][w] += rr[1];
					}
				}
			}
		}
	//ReLU
		for(int co = 0;co<96;co++){
			for(int h = 1;h<9;h++){
				for(int w = 1;w<9;w++){
#pragma HLS PIPELINE
					if(output[0][co][h][w]<0){
						output[0][co][h][w] = 0;
					}
				}
			}
		}
}

void subconv_1x1_4_p(FIX_8 input[1][96][6][6],
	FIX_8 weight[96][96][1][1],
	FIX_8 bias[96],
	FIX_8 output[1][96][6][6]){


	/*for(int co = 0;co<96;co++){
		for(int h = 1;h<5;h++){
			for(int w = 1;w<5;w++){
				FIX_8 sum = 0;
				for(int ci = 0;ci<96;ci++){
					sum += weight[co][ci][0][0]*input[0][ci][h][w];
				}
				FIX_8 result = sum + bias[co];
                output[0][co][h][w] = (result > 0)? result : FIX_8(0);
			}
		}
	}*/
	//bias
#pragma HLS ARRAY_PARTITION variable=weight cyclic factor=12 dim=1
#pragma HLS ARRAY_PARTITION variable=output cyclic factor=12 dim=2
		for(int co = 0;co<96;co++){
			for(int h = 1;h<5;h++){
				for(int w = 1;w<5;w++){
#pragma HLS PIPELINE
					output[0][co][h][w] = bias[co];
				}
			}
		}
	//conv

		/*for(int h = 1;h<5;h++){
			for(int w = 1;w<5;w++){
				for(int ci = 0;ci<96;ci++){
					for(int co = 0;co<96;co++){
#pragma HLS UNROLL factor=24
						output[0][co][h][w] += weight[co][ci][0][0]*input[0][ci][h][w];
					}
				}
			}
		}*/
	FIX_16 rr[2] = {0};
	for(int h = 1;h<5;h++){
		for(int w = 1;w<5;w++){
			for(int ci = 0;ci<96;ci++){
				for(int co = 0;co<24;co++){
	#pragma HLS UNROLL factor=12
					MUL_DP(weight[co][ci][h][w], weight[co+48][ci][0][0], input[0][ci][h][w], rr);
					output[0][co][h][w] +=rr[0];
					output[0][co+48][h][w] += rr[1];
				}
			}
		}
	}
	for(int h = 1;h<5;h++){
		for(int w = 1;w<5;w++){
			for(int ci = 0;ci<96;ci++){
				for(int co =24;co<48;co++){
	#pragma HLS UNROLL factor=12
					MUL_DP(weight[co][ci][h][w], weight[co+48][ci][0][0], input[0][ci][h][w], rr);
					output[0][co][h][w] +=rr[0];
					output[0][co+48][h][w] += rr[1];
				}
			}
		}
	}
	//ReLU
		for(int co = 0;co<96;co++){
			for(int h = 1;h<5;h++){
				for(int w = 1;w<5;w++){
#pragma HLS PIPELINE
					if(output[0][co][h][w]<0){
						output[0][co][h][w] = 0;
					}
				}
			}
		}
}

void subconv_3x3_8_stride_no_relu_p(FIX_8 input[1][96][10][10],
	FIX_8 weight[96][1][3][3],
	FIX_8 bias[96],
	FIX_8 output[1][96][6][6]){
	for(int co = 0;co<96;co++){
		for(int h = 1;h<5;h++){
			for(int w = 1;w<5;w++){
				FIX_8 sum = 0;
				for(int m = 0;m<3;m++){
						for(int n = 0;n<3;n++){
							sum += weight[co][0][m][n] * input[0][co][h*2+m-2][w*2+n-2];
						}
					}
				FIX_8 result = sum + bias[co];
				output[0][co][h][w] = result;

			}
		}
	}
/*#pragma HLS ARRAY_PARTITION variable=weight cyclic factor=24 dim=1
#pragma HLS ARRAY_PARTITION variable=output cyclic factor=24 dim=2
	//bias
		for(int co = 0;co<96;co++){
			for(int h = 1;h<5;h++){
				for(int w = 1;w<5;w++){
#pragma HLS PIPELINE
					output[0][co][h][w] = bias[co];
				}
			}
		}
	//conv

		for(int h = 1;h<5;h++){
			for(int w = 1;w<5;w++){
				for(int m = 0;m<3;m++){
					for(int n = 0;n<3;n++){
						for(int co = 0;co<96;co++){
#pragma HLS UNROLL factor=24
							output[0][co][h][w] += weight[co][0][m][n] * input[0][co][h*2+m-2][w*2+n-2];
						}
					}
				}
			}
		}*/
}

void subconv_3x3_4_no_relu_p(FIX_8 input[1][96][6][6],
	FIX_8 weight[96][1][3][3],
	FIX_8 bias[96],
	FIX_8 output[1][96][6][6]){
	for(int co = 0;co<96;co++){
		for(int h = 1;h<5;h++){
			for(int w = 1;w<5;w++){
				FIX_8 sum = 0;
				for(int m = 0;m<3;m++){
						for(int n = 0;n<3;n++){
							sum += weight[co][0][m][n] * input[0][co][h+m-1][w+n-1];
						}
					}
				FIX_8 result = sum + bias[co];
				output[0][co][h][w] = result;
			}
		}
	}
/*#pragma HLS ARRAY_PARTITION variable=weight cyclic factor=24 dim=1
#pragma HLS ARRAY_PARTITION variable=output cyclic factor=24 dim=2
	//bias
		for(int co = 0;co<96;co++){
			for(int h = 1;h<5;h++){
				for(int w = 1;w<5;w++){
#pragma HLS PIPELINE
					output[0][co][h][w] = bias[co];
				}
			}
		}
	//conv

		for(int h = 1;h<5;h++){
			for(int w = 1;w<5;w++){
				for(int m = 0;m<3;m++){
					for(int n = 0;n<3;n++){
						for(int co = 0;co<96;co++){
#pragma HLS UNROLL factor=24
							output[0][co][h][w] += weight[co][0][m][n] * input[0][co][h+m-1][w+n-1];
						}
					}
				}
			}
		}*/
}

void shuffle_96_p(FIX_8 left[1][96][6][6],FIX_8 right[1][96][6][6],FIX_8 output[1][192][6][6]){
	for(int co = 0;co <192;co ++){
		for(int h=0;h<6;h++){
			for(int w = 0;w<6;w++){
				if (co%2 == 0)output[0][co][h][w] = left[0][co/2][h][w];
				else output[0][co][h][w] = right[0][co/2][h][w];
			}
		}
	}
}

void shuffle_96_l_p(FIX_8 left[1][96][6][6], FIX_8 output[1][192][6][6]){
	for(int co = 0;co <192;co ++){
		for(int h=0;h<6;h++){
			for(int w = 0;w<6;w++){
				if (co%2 == 0)output[0][co][h][w] = left[0][co/2][h][w];
				//else output[0][co][h][w] = right[0][co/2][h][w];
			}
		}
	}
}

void shuffle_96_r_p(FIX_8 right[1][96][6][6], FIX_8 output[1][192][6][6]){
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
	FIX_8 output[1][192][4][4]){

	FIX_8 conv1r_output[1][96][8][8]={0};
	FIX_8 conv2r_ourput[1][96][4][4]={0};
	FIX_8 conv3r_ourput[1][96][4][4]={0};
	FIX_8 conv1l_output[1][96][4][4]={0};
	FIX_8 conv2l_output[1][96][4][4]={0};


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
void ShuffleUnit2(FIX_8 input[1][192][4][4],
	FIX_8 conv1_weight[96][96][1][1],
	FIX_8 conv1_bias[96],
	FIX_8 conv2_weight[96][1][3][3],
	FIX_8 conv2_bias[96],
	FIX_8 conv3_weight[96][96][1][1],
	FIX_8 conv3_bias[96],
	FIX_8 output[1][192][4][4]
	){
	FIX_8 left_part[1][96][4][4] = {0};
	FIX_8 right_part[1][96][4][4] = {0};
	FIX_8 conv1_output[1][96][4][4] = {0};
	FIX_8 conv2_output[1][96][4][4] = {0};
	FIX_8 conv3_output[1][96][4][4] = {0};

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


void conv_last(FIX_8 input[1][192][4][4],
	FIX_8 weight[512][192][1][1],
	FIX_8 bias[512],
	FIX_8 output[1][512][4][4]){

	//FIX_8 input_temp[1][192][4][4]={FIX_8(0)};
	//FIX_8 weight_temp[512][192][1][1]={FIX_8(0)};
	//FIX_8 bias_temp[512]={FIX_8(0)};
	//FIX_8 output_temp[1][512][4][4]={FIX_8(0)};

#pragma HLS ARRAY_PARTITION variable=weight cyclic factor=8 dim=1
#pragma HLS ARRAY_PARTITION variable=output cyclic factor=8 dim=2

	int i = 0;
	int j = 0;
	int k = 0;
	int p = 0;
//----------------Load--------------------

	/*for(i = 0; i < 512; i++){
		for(j = 0; j < 192; j++){
		#pragma HLS PIPELINE
			weight_temp[i][j][0][0] = weight[i][j][0][0];
		}
	}*/
	for(i = 0;i < 512;i++){
		for(j = 0;j < 4;j++){
			for(k = 0;k < 4;k++){
			#pragma HLS PIPELINE
				output[0][i][j][k] = bias[i];
			}
		}
	}
//----------Compute------------------------
	/*for(int co = 0;co<512;co++){
		for(int h = 0;h<4;h++){
			for(int w = 0;w<4;w++){
				FIX_8 sum = 0;
				for(int ci = 0;ci<192;ci++){
					sum += weight[co][ci][0][0]*input[0][ci][h][w];
				}
				FIX_8 result = sum + bias[co];
                output[0][co][h][w] = (result > 0)? result : FIX_8(0);
			}
		}
	}*/

	/*for(int h = 0;h<4;h++){
		for(int w = 0;w<4;w++){
			for(int ci = 0;ci<192;ci++){
				for(int co = 0;co<512;co++){
//#pragma HLS RESOURCE variable=output[0][co][h][w] core=DSP48
				#pragma HLS UNROLL factor=24
					output[0][co][h][w] += weight_temp[co][ci][0][0]*input[0][ci][h][w];
				}
			}
		}
	}*/
	FIX_16 rr[2] = {0};
	for(int h = 0;h<4;h++){
			for(int w = 0;w<4;w++){
				for(int ci = 0;ci<192;ci++){
					for(int co = 0;co<256;co++){
					#pragma HLS UNROLL factor=8
						MUL_DP( weight[co][ci][0][0], weight[co+256][ci][0][0], input[0][ci][h][w], rr);
						output[0][co][h][w] +=rr[0];
						output[0][co+256][h][w] += rr[1];
					}
				}
			}
		}

//------------Write--------------
	for(i = 0;i < 512;i++){
		for(j = 0;j < 4;j++){
			for(k = 0;k < 4;k++){
			#pragma HLS PIPELINE
				if(output[0][i][j][k] < 0)
					output[0][i][j][k] = 0;
			}
		}
	}
}

void avgpool(FIX_8 input[1][512][4][4],
	FIX_8 output[512]){

	for(int co = 0;co<512;co++){
		FIX_8 sum = 0;
		for(int h = 0;h<4;h++){
			for(int w=0;w<4;w++){
				sum += input[0][co][h][w];
			}
		}
		output[co] = sum/16;
	}
}

void fc(FIX_8 input[512],
	FIX_8 weight[10][512],
	FIX_8 bias[10],
	FIX_8 output[10]){

	for(int co = 0;co<10;co++){
		FIX_8 sum = 0;
		for(int ci = 0;ci<512;ci++){
			sum += weight[co][ci] * input[ci];

		}
		FIX_8 result = sum + bias[co];
		output[co] = result;
	}
}



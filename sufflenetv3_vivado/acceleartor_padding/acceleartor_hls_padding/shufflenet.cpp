#include "shufflenet.h"

FIX_8 image_p[1][3][34][34] = {0};

FIX_8 conv1_output[1][24][32][32] = {0};

FIX_8 conv1_output_p[1][24][34][34] = {0};

/*FIXME:If bram is still not enough, could use double buffer to buffer the following !!*/

FIX_8 conv1_bias [24];

FIX_8 downsampleunit0_output_p[1][48][18][18] = {0};
FIX_8 shuffleunit0_0_output_p[1][48][18][18] = {0};
FIX_8 shuffleunit0_1_output_p[1][48][18][18] = {0};
FIX_8 shuffleunit0_2_output_p[1][48][18][18] = {0};
FIX_8 downsampleunit1_output_p[1][96][10][10] = {0};
FIX_8 shuffleunit1_0_output_p[1][96][10][10] = {0};
FIX_8 shuffleunit1_1_output_p[1][96][10][10] = {0};
FIX_8 shuffleunit1_2_output_p[1][96][10][10] = {0};
FIX_8 shuffleunit1_3_output_p[1][96][10][10] = {0};
FIX_8 shuffleunit1_4_output_p[1][96][10][10] = {0};
FIX_8 shuffleunit1_5_output_p[1][96][10][10] = {0};
FIX_8 shuffleunit1_6_output_p[1][96][10][10] = {0};
FIX_8 shuffleunit1_7_output_p[1][96][10][10] = {0};
FIX_8 downsampleunit2_output_p[1][192][6][6] = {0};
FIX_8 shuffleunit2_0_output_p[1][192][6][6] = {0};
FIX_8 shuffleunit2_1_output_p[1][192][6][6] = {0};
FIX_8 shuffleunit2_2_output_p[1][192][6][6] = {0};

FIX_8 shuffleunit2_2_output[1][192][4][4] = {0};
FIX_8 conv_last_output[1][512][4][4] = {0};
FIX_8 avgpool_output[512] = {0};



//---------------New variables of DownsampleUnit0 and ShuffleUnit0-------------------------*/
FIX_8 weights_24_24_1x1 [24][24][1][1];
FIX_8 weights_24_1_3x3 [24][1][3][3];
FIX_8 bias_24 [24];

FIX_8 ShuffleConvs_0_DownsampleUnit__conv1r_output_p[1][24][34][34]={0};
FIX_8 buffer0_1_24_16x16_p[1][24][18][18]={0};
FIX_8 buffer1_1_24_16x16_p[1][24][18][18]={0};



//------------New variables of DownsampleUnit1 and ShuffleUnit1---
FIX_8 weights_48_48_1x1 [48][48][1][1];
FIX_8 weights_48_1_3x3 [48][1][3][3];
FIX_8 bias_48 [48];

FIX_8 ShuffleConvs_1_DownsampleUnit__conv1r_output_p[1][48][18][18]={0};
FIX_8 buffer0_1_48_8x8_p[1][48][10][10]={0};
FIX_8 buffer1_1_48_8x8_p[1][48][10][10]={0};



//------------New variables of DownsampleUnit2 and ShuffleUnit2---
FIX_8 weights_96_96_1x1 [96][96][1][1];
FIX_8 weights_96_1_3x3 [96][1][3][3];
FIX_8 bias_96 [96];

FIX_8 ShuffleConvs_2_DownsampleUnit__conv1r_output_p[1][96][10][10]={0};
FIX_8 buffer0_1_96_4x4_p[1][96][6][6]={0};
FIX_8 buffer1_1_96_4x4_p[1][96][6][6]={0};

FIX_8 conv_last_bias [512];
FIX_8 fc_bias [10];

int ShuffleNetV2(FIX_8 image[1][3][32][32],
		FIX_8 conv1_weight[24][3][3][3],
		FIX_8 shuffle_conv_3x3[1080][1][3][3],
		FIX_8 shuffle_conv_1x1[5496][24][1][1],
		FIX_8 conv_last_weight[512][192][1][1],
		FIX_8 fc_weight[10][512],
		FIX_8 bias[3618],
		FIX_8 fc_output[1000]
		)
{
#pragma HLS INTERFACE m_axi depth=3072 port=image offset=slave bundle=DATA_INPUT_OUTPUT
#pragma HLS INTERFACE m_axi depth=648 port=conv1_weight offset=slave bundle=DATA_OTHER_WEIGHTS
#pragma HLS INTERFACE m_axi depth=3618 port=bias offset=slave bundle=DATA_BIAS
#pragma HLS INTERFACE m_axi depth=9720 port=shuffle_conv_3x3 offset=slave bundle=3X3_1X1_WEIGHTS
#pragma HLS INTERFACE m_axi depth=131904 port=shuffle_conv_1x1 offset=slave bundle=3X3_1X1_WEIGHTS
#pragma HLS INTERFACE m_axi depth=5120 port=fc_weight offset=slave bundle=DATA_OTHER_WEIGHTS
#pragma HLS INTERFACE m_axi depth=1000 port=fc_output offset=slave bundle=DATA_INPUT_OUTPUT
#pragma HLS INTERFACE m_axi depth=98304 port=conv_last_weight offset=slave bundle=DATA_OTHER_WEIGHTS
#pragma HLS INTERFACE s_axilite register port=return bundle=CTL

	//bias

	    for(int i = 0; i<24; i++){
	        conv1_bias[i] = bias[i];
	    }
	    for(int i = 0; i < 512 ; i++){
	        conv_last_bias[i] = bias[24*129 + i];
	    }
	    for(int i = 0;i<10;i++){
	        fc_bias[i] = bias[24*129 + 512 + i];
	    }

    /** conv1 **/
    for(int ci = 0; ci <3; ci++){
    	for(int w = 0;w <32;w++){
    		for(int h = 0;h<32;h++){
    			image_p[0][ci][w+1][h+1] = image[0][ci][w][h];
    		}
    	}
    }

    conv1_p(image_p,conv1_weight,conv1_bias,conv1_output_p);
    
    

//------------------------New DownsampleUnit0------------- 
	//conv1r
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
            weights_24_24_1x1[co][ci][0][0] = shuffle_conv_1x1[co][ci][0][0];

    for(int i = 0; i<24; i++)
        bias_24[i] = bias[i+24];
	
	subconv_1x1_32_p(conv1_output_p,weights_24_24_1x1,bias_24,ShuffleConvs_0_DownsampleUnit__conv1r_output_p);

	

	//conv2r
    for(int co = 0;co<24;co++)
        for(int w = 0; w <3; w++)
            for(int h = 0; h <3;h++)
                weights_24_1_3x3[co][0][w][h] = shuffle_conv_3x3[co][0][w][h];
    for(int i = 0; i<24; i++)
	    bias_24[i] = bias[i+24*2];
    
    subconv_3x3_32_stride_no_relu_p(ShuffleConvs_0_DownsampleUnit__conv1r_output_p,weights_24_1_3x3,bias_24,buffer0_1_24_16x16_p);
	

	//conv3r
    for(int co = 0; co < 24; co ++)
	    for(int ci = 0; ci <24; ci ++)
	        weights_24_24_1x1[co][ci][0][0] = shuffle_conv_1x1[co+24][ci][0][0];
    for(int i = 0; i<24; i++)
        bias_24[i] = bias[i+24*3];

	subconv_1x1_16_p(buffer0_1_24_16x16_p,weights_24_24_1x1,bias_24,buffer1_1_24_16x16_p);

	
	//shuffle_r

    shuffle_24_l_p(buffer1_1_24_16x16_p, downsampleunit0_output_p);
    
    //conv1l
    for(int co = 0;co<24;co++)
	    for(int w = 0; w <3; w++)
	        for(int h = 0; h <3;h++)
                weights_24_1_3x3[co][0][w][h] = shuffle_conv_3x3[co+24][0][w][h];
    for(int i = 0; i<24; i++)
        bias_24[i] = bias[i+24*4];

	subconv_3x3_32_stride_no_relu_p(conv1_output_p,weights_24_1_3x3,bias_24,buffer0_1_24_16x16_p);


	//conv2l
    for(int co = 0; co < 24; co ++)
	    for(int ci = 0; ci <24; ci ++)
	        weights_24_24_1x1[co][ci][0][0] = shuffle_conv_1x1[co+24*2][ci][0][0];
    for(int i = 0; i<24; i++)
        bias_24[i] = bias[i+24*5];

	subconv_1x1_16_p(buffer0_1_24_16x16_p,weights_24_24_1x1,bias_24,buffer1_1_24_16x16_p);

	
	//shuffle_l

	shuffle_24_r_p(buffer1_1_24_16x16_p, downsampleunit0_output_p);


//-------------------New ShuffleUnit0-------------------------
//------------------ShuffleUnit0_0-----------------------------

	for(int co = 0;co <24;co ++){
		for(int h=0;h<16;h++){
			for(int w = 0;w<16;w++){
				buffer0_1_24_16x16_p[0][co][h+1][w+1] = downsampleunit0_output_p[0][24+co][h+1][w+1];
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

	subconv_1x1_16_p(buffer0_1_24_16x16_p,weights_24_24_1x1,bias_24,buffer1_1_24_16x16_p);

	
	//conv2
	for(int co = 0;co<24;co++)
	    for(int w = 0; w <3; w++)
	        for(int h = 0; h <3;h++)
				weights_24_1_3x3[co][0][w][h] = shuffle_conv_3x3[co+24*2][0][w][h];
	for(int i = 0; i < 24; i++)
		bias_24[i] = bias[i+24*7];

	subconv_3x3_16_no_relu_p(buffer1_1_24_16x16_p,weights_24_1_3x3,bias_24,buffer0_1_24_16x16_p);
	
	
	//conv3
	for(int co = 0; co < 24; co ++)
	    for(int ci = 0; ci <24; ci ++)
			weights_24_24_1x1[co][ci][0][0] = shuffle_conv_1x1[co+24*4][ci][0][0];
	for(int i = 0; i < 24; i++)
		bias_24[i] = bias[i+24*8];		

	subconv_1x1_16_p(buffer0_1_24_16x16_p,weights_24_24_1x1,bias_24,buffer1_1_24_16x16_p);
    

    //shuffle


	for(int co = 0;co <24;co ++){
		for(int h=0;h<16;h++){
			for(int w = 0;w<16;w++){
				//right_part[0][co][h][w] = downsampleunit0_output[0][24+co][h][w];
				buffer0_1_24_16x16_p[0][co][h+1][w+1] = downsampleunit0_output_p[0][co][h+1][w+1];
			}
		}
	}

	shuffle_24_p(buffer0_1_24_16x16_p,buffer1_1_24_16x16_p,shuffleunit0_0_output_p);


//------------------ShuffleUnit0_1-----------------------------
	for(int co = 0;co <24;co ++){
		for(int h=0;h<16;h++){
			for(int w = 0;w<16;w++){
				buffer0_1_24_16x16_p[0][co][h+1][w+1] = shuffleunit0_0_output_p[0][24+co][h+1][w+1];
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


	subconv_1x1_16_p(buffer0_1_24_16x16_p,weights_24_24_1x1,bias_24,buffer1_1_24_16x16_p);
	
	//conv2
	for(int co = 0;co<24;co++)
	    for(int w = 0; w <3; w++)
	        for(int h = 0; h <3;h++)
				weights_24_1_3x3[co][0][w][h] = shuffle_conv_3x3[co+24*3][0][w][h];
	for(int i = 0; i < 24; i++)
		bias_24[i] = bias[i+24*10];
	subconv_3x3_16_no_relu_p(buffer1_1_24_16x16_p,weights_24_1_3x3,bias_24,buffer0_1_24_16x16_p);

	//conv3
	for(int co = 0; co < 24; co ++)
	    for(int ci = 0; ci <24; ci ++)
			weights_24_24_1x1[co][ci][0][0] = shuffle_conv_1x1[co+24*6][ci][0][0];
	for(int i = 0; i < 24; i++)
		bias_24[i] = bias[i+24*11];		
	subconv_1x1_16_p(buffer0_1_24_16x16_p,weights_24_24_1x1,bias_24,buffer1_1_24_16x16_p);
	
    //shuffle
	for(int co = 0;co <24;co ++){
		for(int h=0;h<16;h++){
			for(int w = 0;w<16;w++){
				//right_part[0][co][h][w] = downsampleunit0_output[0][24+co][h][w];
				buffer0_1_24_16x16_p[0][co][h+1][w+1] = shuffleunit0_0_output_p[0][co][h+1][w+1];
			}
		}
	}
	shuffle_24_p(buffer0_1_24_16x16_p,buffer1_1_24_16x16_p,shuffleunit0_1_output_p);


//------------------ShuffleUnit0_2-----------------------------
	for(int co = 0;co <24;co ++){
		for(int h=0;h<16;h++){
			for(int w = 0;w<16;w++){
				buffer0_1_24_16x16_p[0][co][h+1][w+1] = shuffleunit0_1_output_p[0][24+co][h+1][w+1];
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
	subconv_1x1_16_p(buffer0_1_24_16x16_p,weights_24_24_1x1,bias_24,buffer1_1_24_16x16_p);
	
	

	//conv2
	for(int co = 0;co<24;co++)
	    for(int w = 0; w <3; w++)
	        for(int h = 0; h <3;h++)
				weights_24_1_3x3[co][0][w][h] = shuffle_conv_3x3[co+24*4][0][w][h];
	for(int i = 0; i < 24; i++)
		bias_24[i] = bias[i+24*13];
	subconv_3x3_16_no_relu_p(buffer1_1_24_16x16_p,weights_24_1_3x3,bias_24,buffer0_1_24_16x16_p);
	
	
	//conv3
	for(int co = 0; co < 24; co ++)
	    for(int ci = 0; ci <24; ci ++)
			weights_24_24_1x1[co][ci][0][0] = shuffle_conv_1x1[co+24*8][ci][0][0];
	for(int i = 0; i < 24; i++)
		bias_24[i] = bias[i+24*14];		
	subconv_1x1_16_p(buffer0_1_24_16x16_p,weights_24_24_1x1,bias_24,buffer1_1_24_16x16_p);
    

    //shuffle
	for(int co = 0;co <24;co ++){
		for(int h=0;h<16;h++){
			for(int w = 0;w<16;w++){
				//right_part[0][co][h][w] = downsampleunit0_output[0][24+co][h][w];
				buffer0_1_24_16x16_p[0][co][h+1][w+1] = shuffleunit0_1_output_p[0][co][h+1][w+1];
			}
		}
	}
	shuffle_24_p(buffer0_1_24_16x16_p,buffer1_1_24_16x16_p,shuffleunit0_2_output_p);

	


/*---------------New DownsampleUnit1-----------------------------------*/
	//conv1r
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] =shuffle_conv_1x1[co+24*9 + 24 *i][ci][0][0];

    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*15+k*24];
	subconv_1x1_16p_p(shuffleunit0_2_output_p,weights_48_48_1x1,bias_48,ShuffleConvs_1_DownsampleUnit__conv1r_output_p);
	//conv2r
    for(int co = 0;co<24;co++)
        for(int w = 0; w <3; w++)
            for(int h = 0; h <3;h++)
				for(int i = 0; i < 2; i++)
                	weights_48_1_3x3[co + i*24][0][w][h] = shuffle_conv_3x3[co+24*5+ i*24][0][w][h];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*17+k*24];
    subconv_3x3_16_stride_no_relu_p(ShuffleConvs_1_DownsampleUnit__conv1r_output_p,weights_48_1_3x3,bias_48,buffer0_1_48_8x8_p);

	

    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] = shuffle_conv_1x1[co+24*13 + 24 *i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*19+k*24];
	subconv_1x1_8_p(buffer0_1_48_8x8_p,weights_48_48_1x1,bias_48,buffer1_1_48_8x8_p);
	

	//shuffle_r
    shuffle_48_l_p(buffer1_1_48_8x8_p, downsampleunit1_output_p);
    
    //conv1l
    for(int co = 0;co<24;co++)
        for(int w = 0; w <3; w++)
            for(int h = 0; h <3;h++)
				for(int i = 0; i < 2; i++)
                	weights_48_1_3x3[co+ i*24][0][w][h] = shuffle_conv_3x3[co+24*7+ i*24][0][w][h];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*21+k*24];
	subconv_3x3_16_stride_no_relu_p(shuffleunit0_2_output_p,weights_48_1_3x3,bias_48,buffer0_1_48_8x8_p);
	
	

	//conv2l
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] = shuffle_conv_1x1[co+24*17 + 24 *i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*23+k*24];
	subconv_1x1_8_p(buffer0_1_48_8x8_p,weights_48_48_1x1,bias_48,buffer1_1_48_8x8_p);
	
	//shuffle_l
	shuffle_48_r_p(buffer1_1_48_8x8_p, downsampleunit1_output_p);



/*--------------New ShuffleUnit1---------------------*/
//------------------ShuffleUnit1_0-----------------------------

	for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				buffer0_1_48_8x8_p[0][co][h+1][w+1] = downsampleunit1_output_p[0][48+co][h+1][w+1];
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
	subconv_1x1_8_p(buffer0_1_48_8x8_p,weights_48_48_1x1,bias_48,buffer1_1_48_8x8_p);
	

	//conv2
    for(int co = 0;co<24;co++)
        for(int w = 0; w <3; w++)
            for(int h = 0; h <3;h++)
				for(int i = 0; i < 2; i++)
                	weights_48_1_3x3[co+ i*24][0][w][h] = shuffle_conv_3x3[co+24*9+ i*24][0][w][h];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*27+k*24];

	subconv_3x3_8_no_relu_p(buffer1_1_48_8x8_p,weights_48_1_3x3,bias_48,buffer0_1_48_8x8_p);
	
	//conv3
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] = shuffle_conv_1x1[co+24*25 + 24 *i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*29+k*24];		
	subconv_1x1_8_p(buffer0_1_48_8x8_p,weights_48_48_1x1,bias_48,buffer1_1_48_8x8_p);
    
    //shuffle


    

	for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				//right_part[0][co][h][w] = downsampleunit0_output[0][24+co][h][w];
				buffer0_1_48_8x8_p[0][co][h+1][w+1] = downsampleunit1_output_p[0][co][h+1][w+1];
			}
		}
	}
	shuffle_48_p(buffer0_1_48_8x8_p,buffer1_1_48_8x8_p,shuffleunit1_0_output_p);

	
//------------------ShuffleUnit1_1-----------------------------


	for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				buffer0_1_48_8x8_p[0][co][h+1][w+1] = shuffleunit1_0_output_p[0][48+co][h+1][w+1];
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
	subconv_1x1_8_p(buffer0_1_48_8x8_p,weights_48_48_1x1,bias_48,buffer1_1_48_8x8_p);
	

	//conv2
    for(int co = 0;co<24;co++)
        for(int w = 0; w <3; w++)
            for(int h = 0; h <3;h++)
				for(int i = 0; i < 2; i++)
                	weights_48_1_3x3[co+ i*24][0][w][h] = shuffle_conv_3x3[co+24*11+ i*24][0][w][h];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*33+k*24];
	subconv_3x3_8_no_relu_p(buffer1_1_48_8x8_p,weights_48_1_3x3,bias_48,buffer0_1_48_8x8_p);
	

	//conv3
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] = shuffle_conv_1x1[co+24*33 + 24 *i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*35+k*24];		
	subconv_1x1_8_p(buffer0_1_48_8x8_p,weights_48_48_1x1,bias_48,buffer1_1_48_8x8_p);
    
    
    //shuffle


    
	for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				//right_part[0][co][h][w] = downsampleunit0_output[0][24+co][h][w];
				buffer0_1_48_8x8_p[0][co][h+1][w+1] = shuffleunit1_0_output_p[0][co][h+1][w+1];
			}
		}
	}	
	shuffle_48_p(buffer0_1_48_8x8_p,buffer1_1_48_8x8_p,shuffleunit1_1_output_p);
	



//------------------ShuffleUnit1_2-----------------------------

	for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				buffer0_1_48_8x8_p[0][co][h+1][w+1] = shuffleunit1_1_output_p[0][48+co][h+1][w+1];
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
	subconv_1x1_8_p(buffer0_1_48_8x8_p,weights_48_48_1x1,bias_48,buffer1_1_48_8x8_p);

	

	//conv2
    for(int co = 0;co<24;co++)
        for(int w = 0; w <3; w++)
            for(int h = 0; h <3;h++)
				for(int i = 0; i < 2; i++)
                	weights_48_1_3x3[co+ i*24][0][w][h] = shuffle_conv_3x3[co+24*13+ i*24][0][w][h];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*39+k*24];
	subconv_3x3_8_no_relu_p(buffer1_1_48_8x8_p,weights_48_1_3x3,bias_48,buffer0_1_48_8x8_p);
	

	//conv3
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] = shuffle_conv_1x1[co+24*41 + 24 *i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*41+k*24];		
	subconv_1x1_8_p(buffer0_1_48_8x8_p,weights_48_48_1x1,bias_48,buffer1_1_48_8x8_p);
    
    

    //shuffle

	for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				//right_part[0][co][h][w] = downsampleunit0_output[0][24+co][h][w];
				buffer0_1_48_8x8_p[0][co][h+1][w+1] = shuffleunit1_1_output_p[0][co][h+1][w+1];
			}
		}
	}
	shuffle_48_p(buffer0_1_48_8x8_p,buffer1_1_48_8x8_p,shuffleunit1_2_output_p);
	
	
//------------------ShuffleUnit1_3-----------------------------

	for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				buffer0_1_48_8x8_p[0][co][h+1][w+1] = shuffleunit1_2_output_p[0][48+co][h+1][w+1];
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
	subconv_1x1_8_p(buffer0_1_48_8x8_p,weights_48_48_1x1,bias_48,buffer1_1_48_8x8_p);
	
	

	//conv2
    for(int co = 0;co<24;co++)
        for(int w = 0; w <3; w++)
            for(int h = 0; h <3;h++)
				for(int i = 0; i < 2; i++)
                	weights_48_1_3x3[co+ i*24][0][w][h] = shuffle_conv_3x3[co+24*15+ i*24][0][w][h];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*45+k*24];
	subconv_3x3_8_no_relu_p(buffer1_1_48_8x8_p,weights_48_1_3x3,bias_48,buffer0_1_48_8x8_p);
	

	//conv3
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] = shuffle_conv_1x1[co+24*49 + 24 *i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*47+k*24];		
	subconv_1x1_8_p(buffer0_1_48_8x8_p,weights_48_48_1x1,bias_48,buffer1_1_48_8x8_p);
    

    

    //shuffle

	for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				//right_part[0][co][h][w] = downsampleunit0_output[0][24+co][h][w];
				buffer0_1_48_8x8_p[0][co][h+1][w+1] = shuffleunit1_2_output_p[0][co][h+1][w+1];
			}
		}
	}
	shuffle_48_p(buffer0_1_48_8x8_p,buffer1_1_48_8x8_p,shuffleunit1_3_output_p);

	

//------------------ShuffleUnit1_4-----------------------------

	for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				buffer0_1_48_8x8_p[0][co][h+1][w+1] = shuffleunit1_3_output_p[0][48+co][h+1][w+1];
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

	subconv_1x1_8_p(buffer0_1_48_8x8_p,weights_48_48_1x1,bias_48,buffer1_1_48_8x8_p);
	
	

	//conv2
    for(int co = 0;co<24;co++)
        for(int w = 0; w <3; w++)
            for(int h = 0; h <3;h++)
				for(int i = 0; i < 2; i++)
                	weights_48_1_3x3[co+ i*24][0][w][h] = shuffle_conv_3x3[co+24*17+ i*24][0][w][h];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*51+k*24];
	subconv_3x3_8_no_relu_p(buffer1_1_48_8x8_p,weights_48_1_3x3,bias_48,buffer0_1_48_8x8_p);
	
	//conv3
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] = shuffle_conv_1x1[co+24*57 + 24 *i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*53+k*24];		
	subconv_1x1_8_p(buffer0_1_48_8x8_p,weights_48_48_1x1,bias_48,buffer1_1_48_8x8_p);
    
    

    //shuffle
	for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				//right_part[0][co][h][w] = downsampleunit0_output[0][24+co][h][w];
				buffer0_1_48_8x8_p[0][co][h+1][w+1] = shuffleunit1_3_output_p[0][co][h+1][w+1];
			}
		}
	}
	shuffle_48_p(buffer0_1_48_8x8_p,buffer1_1_48_8x8_p,shuffleunit1_4_output_p);
	

//------------------ShuffleUnit1_5-----------------------------

	for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				buffer0_1_48_8x8_p[0][co][h+1][w+1] = shuffleunit1_4_output_p[0][48+co][h+1][w+1];
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
	subconv_1x1_8_p(buffer0_1_48_8x8_p,weights_48_48_1x1,bias_48,buffer1_1_48_8x8_p);

	

	//conv2
    for(int co = 0;co<24;co++)
        for(int w = 0; w <3; w++)
            for(int h = 0; h <3;h++)
				for(int i = 0; i < 2; i++)
                	weights_48_1_3x3[co+ i*24][0][w][h] = shuffle_conv_3x3[co+24*19+ i*24][0][w][h];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*57+k*24];
	subconv_3x3_8_no_relu_p(buffer1_1_48_8x8_p,weights_48_1_3x3,bias_48,buffer0_1_48_8x8_p);
	
	

	//conv3
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] = shuffle_conv_1x1[co+24*65 + 24 *i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*59+k*24];		
	subconv_1x1_8_p(buffer0_1_48_8x8_p,weights_48_48_1x1,bias_48,buffer1_1_48_8x8_p);
    
	

    //shuffle
	for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				//right_part[0][co][h][w] = downsampleunit0_output[0][24+co][h][w];
				buffer0_1_48_8x8_p[0][co][h+1][w+1] = shuffleunit1_4_output_p[0][co][h+1][w+1];
			}
		}
	}
	shuffle_48_p(buffer0_1_48_8x8_p,buffer1_1_48_8x8_p,shuffleunit1_5_output_p);

	

//------------------ShuffleUnit1_6-----------------------------

	for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				buffer0_1_48_8x8_p[0][co][h+1][w+1] = shuffleunit1_5_output_p[0][48+co][h+1][w+1];
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
	subconv_1x1_8_p(buffer0_1_48_8x8_p,weights_48_48_1x1,bias_48,buffer1_1_48_8x8_p);
	
	
	//conv2
    for(int co = 0;co<24;co++)
        for(int w = 0; w <3; w++)
            for(int h = 0; h <3;h++)
				for(int i = 0; i < 2; i++)
                	weights_48_1_3x3[co+ i*24][0][w][h] = shuffle_conv_3x3[co+24*21+ i*24][0][w][h];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*63+k*24];
	subconv_3x3_8_no_relu_p(buffer1_1_48_8x8_p,weights_48_1_3x3,bias_48,buffer0_1_48_8x8_p);


	//conv3
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] = shuffle_conv_1x1[co+24*73 + 24 *i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*65+k*24];		
	subconv_1x1_8_p(buffer0_1_48_8x8_p,weights_48_48_1x1,bias_48,buffer1_1_48_8x8_p);
    
    

    //shuffle

	for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				//right_part[0][co][h][w] = downsampleunit0_output[0][24+co][h][w];
				buffer0_1_48_8x8_p[0][co][h+1][w+1] = shuffleunit1_5_output_p[0][co][h+1][w+1];
			}
		}
	}
	shuffle_48_p(buffer0_1_48_8x8_p,buffer1_1_48_8x8_p,shuffleunit1_6_output_p);

//------------------ShuffleUnit1_7-----------------------------

	for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				buffer0_1_48_8x8_p[0][co][h+1][w+1] = shuffleunit1_6_output_p[0][48+co][h+1][w+1];
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
	
	subconv_1x1_8_p(buffer0_1_48_8x8_p,weights_48_48_1x1,bias_48,buffer1_1_48_8x8_p);
	
	//conv2
    for(int co = 0;co<24;co++)
        for(int w = 0; w <3; w++)
            for(int h = 0; h <3;h++)
				for(int i = 0; i < 2; i++)
                	weights_48_1_3x3[co+ i*24][0][w][h] = shuffle_conv_3x3[co+24*23+ i*24][0][w][h];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*69+k*24];
	subconv_3x3_8_no_relu_p(buffer1_1_48_8x8_p,weights_48_1_3x3,bias_48,buffer0_1_48_8x8_p);

	//conv3
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 4; i ++ )
            	weights_48_48_1x1[co/2 + i *12][ci + 24*(co%2)][0][0] = shuffle_conv_1x1[co+24*81 + 24 *i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 2;k++)
        	bias_48[i+k*24] = bias[i+24*71+k*24];		
	subconv_1x1_8_p(buffer0_1_48_8x8_p,weights_48_48_1x1,bias_48,buffer1_1_48_8x8_p);
    
    

    //shuffle
    

	for(int co = 0;co <48;co ++){
		for(int h=0;h<8;h++){
			for(int w = 0;w<8;w++){
				//right_part[0][co][h][w] = downsampleunit0_output[0][24+co][h][w];
				buffer0_1_48_8x8_p[0][co][h+1][w+1] = shuffleunit1_6_output_p[0][co][h+1][w+1];
			}
		}
	}
	shuffle_48_p(buffer0_1_48_8x8_p,buffer1_1_48_8x8_p,shuffleunit1_7_output_p);
	
	

/*-----------New DownsampleUnit2-------------------------------*/
	//conv1r
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 16; i ++ )
            	weights_96_96_1x1[co/4 + i * 6][ci + 24*(co%4)][0][0] =shuffle_conv_1x1[co+24*85 + 24 * i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 4;k++)
        	bias_96[i+k*24] = bias[i+24*73+k*24];	
	subconv_1x1_8p_p(shuffleunit1_7_output_p,weights_96_96_1x1,bias_96,ShuffleConvs_2_DownsampleUnit__conv1r_output_p);
	
	

	//conv2r
    for(int co = 0;co<24;co++)
        for(int w = 0; w <3; w++)
            for(int h = 0; h <3;h++)
				for(int i = 0; i < 4; i++)
                	weights_96_1_3x3[co + i*24][0][w][h] = shuffle_conv_3x3[co+24*25+ i*24][0][w][h];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 4;k++)
        	bias_96[i+k*24] = bias[i+24*77+k*24];
    subconv_3x3_8_stride_no_relu_p(ShuffleConvs_2_DownsampleUnit__conv1r_output_p,weights_96_1_3x3,bias_96,buffer0_1_96_4x4_p);


	//conv3r
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 16; i ++ )
            	weights_96_96_1x1[co/4 + i * 6][ci + 24*(co%4)][0][0] =shuffle_conv_1x1[co+24*101 + 24 * i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 4;k++)
        	bias_96[i+k*24] = bias[i+24*81+k*24];
	subconv_1x1_4_p(buffer0_1_96_4x4_p,weights_96_96_1x1,bias_96,buffer1_1_96_4x4_p);
	

	//shuffle_r
    shuffle_96_l_p(buffer1_1_96_4x4_p, downsampleunit2_output_p);//!!!!!!!! attention: for downsample, r l is swapped
    
    

    //conv1l
    for(int co = 0;co<24;co++)
        for(int w = 0; w <3; w++)
            for(int h = 0; h <3;h++)
				for(int i = 0; i < 4; i++)
                	weights_96_1_3x3[co + i*24][0][w][h] = shuffle_conv_3x3[co+24*29+ i*24][0][w][h];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 4;k++)
        	bias_96[i+k*24] = bias[i+24*85+k*24];
	subconv_3x3_8_stride_no_relu_p(shuffleunit1_7_output_p,weights_96_1_3x3,bias_96,buffer0_1_96_4x4_p);
	

	//conv2l
    for(int co = 0; co < 24; co ++)
        for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 16; i ++ )
            	weights_96_96_1x1[co/4 + i * 6][ci + 24*(co%4)][0][0] =shuffle_conv_1x1[co+24*117 + 24 * i][ci][0][0];
    for(int i = 0; i<24; i++)
		for(int k = 0;k < 4;k++)
        	bias_96[i+k*24] = bias[i+24*89+k*24];
	subconv_1x1_4_p(buffer0_1_96_4x4_p,weights_96_96_1x1,bias_96,buffer1_1_96_4x4_p);
	
	
	//shuffle_l
	shuffle_96_r_p(buffer1_1_96_4x4_p, downsampleunit2_output_p);

	

/*------------------New ShuffleUnit2-----------------------*/
/*------------------ShuffleUNit2_0-------------------------*/
	//right

	for(int co = 0;co <96;co ++){
		for(int h=0;h<4;h++){
			for(int w = 0;w<4;w++){
				buffer0_1_96_4x4_p[0][co][h+1][w+1] = downsampleunit2_output_p[0][96+co][h+1][w+1];
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
	subconv_1x1_4_p(buffer0_1_96_4x4_p,weights_96_96_1x1,bias_96,buffer1_1_96_4x4_p);
	
	//conv2
	for(int co = 0;co<24;co++)
		for(int w = 0; w <3; w++)
			for(int h = 0; h <3;h++)
				for(int i = 0; i < 4; i++)
					weights_96_1_3x3[co + i*24][0][w][h] = shuffle_conv_3x3[co+24*33+ i*24][0][w][h];
	for(int i = 0; i<24; i++)
		for(int k = 0;k < 4;k++)
				bias_96[i+k*24] = bias[i+24*97+k*24];
	subconv_3x3_4_no_relu_p(buffer1_1_96_4x4_p,weights_96_1_3x3,bias_96,buffer0_1_96_4x4_p);
	
	//conv3
	for(int co = 0; co < 24; co ++)
		for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 16;i++)
				weights_96_96_1x1[co/4 + i * 6][ci + 24*(co%4)][0][0] =shuffle_conv_1x1[co+24*149 + 24 * i][ci][0][0];
	for(int i = 0; i<24; i++)
		for(int k = 0;k < 4;k++)
				bias_96[i+k*24] = bias[i+24*101+k*24];
	subconv_1x1_4_p(buffer0_1_96_4x4_p,weights_96_96_1x1,bias_96,buffer1_1_96_4x4_p);



	for(int co = 0;co <96;co ++){
		for(int h=0;h<4;h++){
			for(int w = 0;w<4;w++){
				//buffer0_1_96_4x4[0][co][h][w] = downsampleunit2_output[0][96+co][h][w];
				buffer0_1_96_4x4_p[0][co][h+1][w+1] = downsampleunit2_output_p[0][co][h+1][w+1];
			}
		}
	}
	shuffle_96_p(buffer0_1_96_4x4_p,buffer1_1_96_4x4_p,shuffleunit2_0_output_p);


	/*------------------ShuffleUNit2_1-------------------------*/
	//right

	for(int co = 0;co <96;co ++){
		for(int h=0;h<4;h++){
			for(int w = 0;w<4;w++){
				buffer0_1_96_4x4_p[0][co][h+1][w+1] = shuffleunit2_0_output_p[0][96+co][h+1][w+1];
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
	subconv_1x1_4_p(buffer0_1_96_4x4_p,weights_96_96_1x1,bias_96,buffer1_1_96_4x4_p);
	
	
	//conv2
	for(int co = 0;co<24;co++)
		for(int w = 0; w <3; w++)
			for(int h = 0; h <3;h++)
				for(int i = 0; i < 4; i++)
					weights_96_1_3x3[co + i*24][0][w][h] = shuffle_conv_3x3[co+24*37+ i*24][0][w][h];
	for(int i = 0; i<24; i++)
		for(int k = 0;k < 4;k++)
				bias_96[i+k*24] = bias[i+24*109+k*24];
	subconv_3x3_4_no_relu_p(buffer1_1_96_4x4_p,weights_96_1_3x3,bias_96,buffer0_1_96_4x4_p);
	
	
	//conv3
	for(int co = 0; co < 24; co ++)
		for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 16;i++)
				weights_96_96_1x1[co/4 + i * 6][ci + 24*(co%4)][0][0] =shuffle_conv_1x1[co+24*181 + 24 * i][ci][0][0];
	for(int i = 0; i<24; i++)
		for(int k = 0;k < 4;k++)
				bias_96[i+k*24] = bias[i+24*113+k*24];
	subconv_1x1_4_p(buffer0_1_96_4x4_p,weights_96_96_1x1,bias_96,buffer1_1_96_4x4_p);
	
	


	for(int co = 0;co <96;co ++){
		for(int h=0;h<4;h++){
			for(int w = 0;w<4;w++){
				//buffer0_1_96_4x4[0][co][h][w] = downsampleunit2_output[0][96+co][h][w];
				buffer0_1_96_4x4_p[0][co][h+1][w+1] = shuffleunit2_0_output_p[0][co][h+1][w+1];
			}
		}
	}

	shuffle_96_p(buffer0_1_96_4x4_p,buffer1_1_96_4x4_p,shuffleunit2_1_output_p);



	/*------------------ShuffleUNit2_2-------------------------*/
	//right

	for(int co = 0;co <96;co ++){
		for(int h=0;h<4;h++){
			for(int w = 0;w<4;w++){
				buffer0_1_96_4x4_p[0][co][h+1][w+1] = shuffleunit2_1_output_p[0][96+co][h+1][w+1];
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
	subconv_1x1_4_p(buffer0_1_96_4x4_p,weights_96_96_1x1,bias_96,buffer1_1_96_4x4_p);
	

	//conv2
	for(int co = 0;co<24;co++)
		for(int w = 0; w <3; w++)
			for(int h = 0; h <3;h++)
				for(int i = 0; i < 4; i++)
					weights_96_1_3x3[co + i*24][0][w][h] = shuffle_conv_3x3[co+24*41+ i*24][0][w][h];
	for(int i = 0; i<24; i++)
		for(int k = 0;k < 4;k++)
				bias_96[i+k*24] = bias[i+24*121+k*24];
	subconv_3x3_4_no_relu_p(buffer1_1_96_4x4_p,weights_96_1_3x3,bias_96,buffer0_1_96_4x4_p);
	

	//conv3
	for(int co = 0; co < 24; co ++)
		for(int ci = 0; ci <24; ci ++)
			for(int i = 0; i < 16;i++)
				weights_96_96_1x1[co/4 + i * 6][ci + 24*(co%4)][0][0] =shuffle_conv_1x1[co+24*213 + 24 * i][ci][0][0];
	for(int i = 0; i<24; i++)
		for(int k = 0;k < 4;k++)
				bias_96[i+k*24] = bias[i+24*125+k*24];
	subconv_1x1_4_p(buffer0_1_96_4x4_p,weights_96_96_1x1,bias_96,buffer1_1_96_4x4_p);
	


	for(int co = 0;co <96;co ++){
		for(int h=0;h<4;h++){
			for(int w = 0;w<4;w++){
				//buffer0_1_96_4x4[0][co][h][w] = downsampleunit2_output[0][96+co][h][w];
				buffer0_1_96_4x4_p[0][co][h+1][w+1] = shuffleunit2_1_output_p[0][co][h+1][w+1];
			}
		}
	}
	shuffle_96_p(buffer0_1_96_4x4_p,buffer1_1_96_4x4_p,shuffleunit2_2_output_p);


    for(int ci = 0; ci < 192; ci++){
    	for(int w = 0;w<4;w++){
    		for(int h = 0; h <4;h++){
    			shuffleunit2_2_output[0][ci][w][h] = shuffleunit2_2_output_p[0][ci][w+1][h+1];
    		}
    	}
    }

    conv_last(shuffleunit2_2_output,
              conv_last_weight,
              conv_last_bias,
              conv_last_output
              );

    avgpool(conv_last_output,avgpool_output);

    fc(avgpool_output,fc_weight,fc_bias,fc_output);

    for(int i =0;i<10;i++){
    	cout<<fc_output[i]<<endl;
    }cout<<"result above"<<endl;
    return 0;
}

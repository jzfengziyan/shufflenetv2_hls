#include "shufflenet.h"
#include <cstddef>
#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;



float image_f[1][3][32][32] = {0};

float fc_output_f[10] = {0};

float conv1_weight_f[24][3][3][3] = {0};

float conv_last_weight_f[512][192][1][1] = {0};

float fc_weight_f[10][512] = {0};

float bias_f[3618] = {0};

float shuffle_conv_1x1_f[5496][24][1][1] = {0};

float shuffle_conv_3x3_f[1080][1][3][3] = {0};

FIX_8 image[1][3][32][32] = {0};

FIX_8 fc_output[10] = {0};

FIX_8 conv1_weight[24][3][3][3] = {0};

FIX_8 conv_last_weight[512][192][1][1] = {0};

FIX_8 fc_weight[10][512] = {0};

FIX_8 bias[3618] = {0};

FIX_8 shuffle_conv_1x1[5496][24][1][1] = {0};

FIX_8 shuffle_conv_3x3[1080][1][3][3] = {0};


string img_path = "plane.bin";

string bias_path = "bias.bin";

string shuffle_conv_1x1_path = "shuffle_conv_1x1.bin";

string shuffle_conv_3x3_path = "shuffle_conv_3x3.bin";

string conv1_weight_path = "conv1_weight.bin";

string conv_last_weight_path = "conv_last_weight.bin";

string fc_weight_path = "fc_weight.bin";

int main(){
	cout<<"initialize pic"<<endl;
	ifstream ifs_image_raw(img_path.c_str(), ios::in | ios::binary);
	ifs_image_raw.read((char*)(***image_f), 1*3*36*36*sizeof(float));
    ifs_image_raw.close();



    cout<<"initialize bias"<<endl;
    ifstream ifs_bias(bias_path.c_str(), ios::in | ios::binary);
    ifs_bias.read((char*)(bias_f), 3618*sizeof(float));
    ifs_bias.close();

    cout<<"initialize shuffle_conv_1x1"<<endl;
    ifstream ifs_shuffle_conv_1x1(shuffle_conv_1x1_path.c_str(), ios::in | ios::binary);
    ifs_shuffle_conv_1x1.read((char*)(***shuffle_conv_1x1_f), 5496*24*1*1*sizeof(float));
    ifs_shuffle_conv_1x1.close();



    cout<<"initialize shuffle_conv_3x3"<<endl;
    ifstream ifs_shuffle_conv_3x3(shuffle_conv_3x3_path.c_str(), ios::in | ios::binary);
    ifs_shuffle_conv_3x3.read((char*)(***shuffle_conv_3x3_f), 1080*1*3*3*sizeof(float));
    ifs_shuffle_conv_3x3.close();



    cout<<"initialize conv1_weight"<<endl;
    ifstream ifs_conv1_weight(conv1_weight_path.c_str(), ios::in | ios::binary);
    ifs_conv1_weight.read((char*)(***conv1_weight_f), 24*3*3*3*sizeof(float));
    ifs_conv1_weight.close();

    cout<<"initialize conv_last_weight"<<endl;
    ifstream ifs_conv_last_weight(conv_last_weight_path.c_str(), ios::in | ios::binary);
    ifs_conv_last_weight.read((char*)(***conv_last_weight_f), 512*192*1*1*sizeof(float));
    ifs_conv_last_weight.close();

    cout<<"initialize fc_weight"<<endl;
    ifstream ifs_fc_weight(fc_weight_path.c_str(), ios::in | ios::binary);
    ifs_fc_weight.read((char*)(*fc_weight_f), 10*512*sizeof(float));
    ifs_fc_weight.close();

    for(int i = 0; i <3;i++){
    	for(int j = 0;j<32;j++){
    		for(int k = 0; k <32;k++){
    			image[0][i][j][k] = FIX_8(image_f[0][i][j][k]);
    		}
    	}
    }
    for(int i = 0;i<24;i++){
    	for(int j = 0; j <3;j++){
    		for(int k = 0; k <3;k++){
    			for(int l = 0; l<3;l++){
    				conv1_weight[i][j][k][l] = FIX_8(conv1_weight_f[i][j][k][l]);
    			}
    		}
    	}
    }

    for(int i = 0;i<1080;i++){
        	for(int j = 0; j <3;j++){
        		for(int k = 0; k <3;k++){
        				shuffle_conv_3x3[i][0][j][k] = FIX_8(shuffle_conv_3x3_f[i][0][j][k]);
        			}
        		}
        	}

    for(int i = 0;i<5496;i++){
            	for(int j = 0; j <24;j++){

            		shuffle_conv_1x1[i][j][0][0] = FIX_8(shuffle_conv_1x1_f[i][j][0][0]);

            		}
            	}
    for(int i = 0; i <512;i++){
    	for(int j = 0;j<192;j++){
    		conv_last_weight[i][j][0][0] = FIX_8(conv_last_weight_f[i][j][0][0]);
    	}
    }

    for(int i =0; i <10;i++){
    	for(int j = 0;j<512;j++){
    		fc_weight[i][j] = FIX_8(fc_weight_f[i][j]);
    	}
    }
    for(int i =0; i <3618;i++){
        	bias[i] = FIX_8(bias_f[i]);

        }
    cout<<conv_last_weight[0][0][0][0]<<" "<<conv_last_weight_f[0][0][0][0]<<endl;


    ShuffleNetV2( image,
    		 conv1_weight,
    		 shuffle_conv_3x3,
    		 shuffle_conv_1x1,
    		 conv_last_weight,
    		 fc_weight,
			 bias,
    		 fc_output
    		);




}

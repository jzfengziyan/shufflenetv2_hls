#include "shufflenet.h"
#include <cstddef>
#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

float image[1][3][32][32] = {0};

float fc_output[10] = {0};

float conv1_weight[24][3][3][3] = {0};


float conv_last_weight[512][192][1][1] = {0};


float fc_weight[10][512] = {0};

float bias[3618] = {0};

float shuffle_conv_1x1[5496][24][1][1] = {0};

float shuffle_conv_3x3[1080][1][3][3] = {0};

string img_path = "D:/MyWorkingSpace/Xilinx/ece527/shufflenetv2/plane.bin";

string bias_path = "D:/MyWorkingSpace/Xilinx/ece527/shufflenetv2/bias.bin";

string shuffle_conv_1x1_path = "D:/MyWorkingSpace/Xilinx/ece527/shufflenetv2/shuffle_conv_1x1.bin";

string shuffle_conv_3x3_path = "D:/MyWorkingSpace/Xilinx/ece527/shufflenetv2/shuffle_conv_3x3.bin";

string conv1_weight_path = "D:/MyWorkingSpace/Xilinx/ece527/shufflenetv2/conv1_weight.bin";

string conv_last_weight_path = "D:/MyWorkingSpace/Xilinx/ece527/shufflenetv2/conv_last_weight.bin";

string fc_weight_path = "D:/MyWorkingSpace/Xilinx/ece527/shufflenetv2/fc_weight.bin";

int main(){
	cout<<"initialize pic"<<endl;
	ifstream ifs_image_raw(img_path.c_str(), ios::in | ios::binary);
	ifs_image_raw.read((char*)(***image), 1*3*36*36*sizeof(float));
    ifs_image_raw.close();



    cout<<"initialize bias"<<endl;
    ifstream ifs_bias(bias_path.c_str(), ios::in | ios::binary);
    ifs_bias.read((char*)(bias), 3618*sizeof(float));
    ifs_bias.close();

    cout<<"initialize shuffle_conv_1x1"<<endl;
    ifstream ifs_shuffle_conv_1x1(shuffle_conv_1x1_path.c_str(), ios::in | ios::binary);
    ifs_shuffle_conv_1x1.read((char*)(***shuffle_conv_1x1), 5496*24*1*1*sizeof(float));
    ifs_shuffle_conv_1x1.close();



    cout<<"initialize shuffle_conv_3x3"<<endl;
    ifstream ifs_shuffle_conv_3x3(shuffle_conv_3x3_path.c_str(), ios::in | ios::binary);
    ifs_shuffle_conv_3x3.read((char*)(***shuffle_conv_3x3), 1080*1*3*3*sizeof(float));
    ifs_shuffle_conv_3x3.close();



    cout<<"initialize conv1_weight"<<endl;
    ifstream ifs_conv1_weight(conv1_weight_path.c_str(), ios::in | ios::binary);
    ifs_conv1_weight.read((char*)(***conv1_weight), 24*3*3*3*sizeof(float));
    ifs_conv1_weight.close();

    cout<<"initialize conv_last_weight"<<endl;
    ifstream ifs_conv_last_weight(conv_last_weight_path.c_str(), ios::in | ios::binary);
    ifs_conv_last_weight.read((char*)(***conv_last_weight), 512*192*1*1*sizeof(float));
    ifs_conv_last_weight.close();

    cout<<"initialize fc_weight"<<endl;
    ifstream ifs_fc_weight(fc_weight_path.c_str(), ios::in | ios::binary);
    ifs_fc_weight.read((char*)(*fc_weight), 10*512*sizeof(float));
    ifs_fc_weight.close();



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

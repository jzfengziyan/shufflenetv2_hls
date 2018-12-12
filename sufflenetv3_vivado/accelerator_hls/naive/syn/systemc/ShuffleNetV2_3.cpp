#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"image_r_address0\" :  \"" << image_r_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"image_r_ce0\" :  \"" << image_r_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"image_r_q0\" :  \"" << image_r_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"conv1_weight_address0\" :  \"" << conv1_weight_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"conv1_weight_ce0\" :  \"" << conv1_weight_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"conv1_weight_q0\" :  \"" << conv1_weight_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"shuffle_conv_3x3_address0\" :  \"" << shuffle_conv_3x3_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"shuffle_conv_3x3_ce0\" :  \"" << shuffle_conv_3x3_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"shuffle_conv_3x3_q0\" :  \"" << shuffle_conv_3x3_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"shuffle_conv_1x1_address0\" :  \"" << shuffle_conv_1x1_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"shuffle_conv_1x1_ce0\" :  \"" << shuffle_conv_1x1_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"shuffle_conv_1x1_q0\" :  \"" << shuffle_conv_1x1_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"conv_last_weight_address0\" :  \"" << conv_last_weight_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"conv_last_weight_ce0\" :  \"" << conv_last_weight_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"conv_last_weight_q0\" :  \"" << conv_last_weight_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"fc_weight_address0\" :  \"" << fc_weight_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"fc_weight_ce0\" :  \"" << fc_weight_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"fc_weight_q0\" :  \"" << fc_weight_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bias_address0\" :  \"" << bias_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bias_ce0\" :  \"" << bias_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"bias_q0\" :  \"" << bias_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"fc_output_address0\" :  \"" << fc_output_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"fc_output_ce0\" :  \"" << fc_output_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"fc_output_we0\" :  \"" << fc_output_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"fc_output_d0\" :  \"" << fc_output_d0.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}


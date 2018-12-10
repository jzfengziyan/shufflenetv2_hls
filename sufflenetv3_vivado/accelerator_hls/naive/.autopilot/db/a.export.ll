; ModuleID = '/home/ziyan/ziyan/ece527/shufflenetv2_master/sufflenetv3_vivado/accelerator_hls/naive/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@shuffleunit2_2_outpu = global [3072 x float] zeroinitializer
@shuffleunit2_1_outpu = global [3072 x float] zeroinitializer
@shuffleunit2_0_outpu = global [3072 x float] zeroinitializer
@shuffleunit1_7_outpu = global [6144 x float] zeroinitializer
@shuffleunit1_6_outpu = global [6144 x float] zeroinitializer
@shuffleunit1_5_outpu = global [6144 x float] zeroinitializer
@shuffleunit1_4_outpu = global [6144 x float] zeroinitializer
@shuffleunit1_3_outpu = global [6144 x float] zeroinitializer
@shuffleunit1_2_outpu = global [6144 x float] zeroinitializer
@shuffleunit1_1_outpu = global [6144 x float] zeroinitializer
@shuffleunit1_0_outpu = global [6144 x float] zeroinitializer
@shuffleunit0_2_outpu = global [12288 x float] zeroinitializer
@shuffleunit0_1_outpu = global [12288 x float] zeroinitializer
@shuffleunit0_0_outpu = global [12288 x float] zeroinitializer
@memset_right_part_st = internal unnamed_addr constant [18 x i8] c"memset_right_part\00"
@memset_left_part_str = internal unnamed_addr constant [17 x i8] c"memset_left_part\00"
@memset_conv3r_ourput = internal unnamed_addr constant [21 x i8] c"memset_conv3r_ourput\00"
@memset_conv3_output_s = internal unnamed_addr constant [20 x i8] c"memset_conv3_output\00"
@memset_conv2r_ourput = internal unnamed_addr constant [21 x i8] c"memset_conv2r_ourput\00"
@memset_conv2l_output = internal unnamed_addr constant [21 x i8] c"memset_conv2l_output\00"
@memset_conv2_output_s = internal unnamed_addr constant [20 x i8] c"memset_conv2_output\00"
@memset_conv1r_output = internal unnamed_addr constant [21 x i8] c"memset_conv1r_output\00"
@memset_conv1l_output = internal unnamed_addr constant [21 x i8] c"memset_conv1l_output\00"
@memset_conv1_output_s = internal unnamed_addr constant [20 x i8] c"memset_conv1_output\00"
@llvm_global_ctors_1 = appending global [2 x void ()*] [void ()* @_GLOBAL__I_a, void ()* @_GLOBAL__I_a25]
@llvm_global_ctors_0 = appending global [2 x i32] [i32 65535, i32 65535]
@fc_bias = global [10 x float] zeroinitializer, align 16
@downsampleunit2_outp = global [3072 x float] zeroinitializer
@downsampleunit1_outp = global [6144 x float] zeroinitializer
@downsampleunit0_outp = global [12288 x float] zeroinitializer
@conv_last_output = global [8192 x float] zeroinitializer
@conv_last_bias = global [512 x float] zeroinitializer, align 16
@conv1_output = global [24576 x float] zeroinitializer
@conv1_bias = global [24 x float] zeroinitializer, align 16
@avgpool_output = global [512 x float] zeroinitializer, align 16
@ShuffleNetV2_str = internal unnamed_addr constant [13 x i8] c"ShuffleNetV2\00"
@ShuffleConvs_2_Shuff_9 = global [864 x float] zeroinitializer
@ShuffleConvs_2_Shuff_8 = global [9216 x float] zeroinitializer
@ShuffleConvs_2_Shuff_7 = global [9216 x float] zeroinitializer
@ShuffleConvs_2_Shuff_6 = global [864 x float] zeroinitializer
@ShuffleConvs_2_Shuff_5 = global [9216 x float] zeroinitializer
@ShuffleConvs_2_Shuff_4 = global [96 x float] zeroinitializer, align 16
@ShuffleConvs_2_Shuff_3 = global [96 x float] zeroinitializer, align 16
@ShuffleConvs_2_Shuff_22 = global [96 x float] zeroinitializer, align 16
@ShuffleConvs_2_Shuff_21 = global [96 x float] zeroinitializer, align 16
@ShuffleConvs_2_Shuff_20 = global [96 x float] zeroinitializer, align 16
@ShuffleConvs_2_Shuff_19 = global [96 x float] zeroinitializer, align 16
@ShuffleConvs_2_Shuff_18 = global [9216 x float] zeroinitializer
@ShuffleConvs_2_Shuff_17 = global [96 x float] zeroinitializer, align 16
@ShuffleConvs_2_Shuff_15 = global [864 x float] zeroinitializer
@ShuffleConvs_2_Shuff_13 = global [9216 x float] zeroinitializer
@ShuffleConvs_2_Shuff_11 = global [9216 x float] zeroinitializer
@ShuffleConvs_2_Shuff_1 = global [96 x float] zeroinitializer, align 16
@ShuffleConvs_2_Shuff = global [96 x float] zeroinitializer, align 16
@ShuffleConvs_2_Downs_9 = global [864 x float] zeroinitializer
@ShuffleConvs_2_Downs_8 = global [9216 x float] zeroinitializer
@ShuffleConvs_2_Downs_7 = global [9216 x float] zeroinitializer
@ShuffleConvs_2_Downs_6 = global [864 x float] zeroinitializer
@ShuffleConvs_2_Downs_5 = global [96 x float] zeroinitializer, align 16
@ShuffleConvs_2_Downs_4 = global [96 x float] zeroinitializer, align 16
@ShuffleConvs_2_Downs_3 = global [96 x float] zeroinitializer, align 16
@ShuffleConvs_2_Downs_10 = global [9216 x float] zeroinitializer
@ShuffleConvs_2_Downs_1 = global [96 x float] zeroinitializer, align 16
@ShuffleConvs_2_Downs = global [96 x float] zeroinitializer, align 16
@ShuffleConvs_1_Shuff_9 = global [432 x float] zeroinitializer
@ShuffleConvs_1_Shuff_71 = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_1_Shuff_70 = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_1_Shuff_7 = global [2304 x float] zeroinitializer
@ShuffleConvs_1_Shuff_69 = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_1_Shuff_68 = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_1_Shuff_67 = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_1_Shuff_66 = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_1_Shuff_65 = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_1_Shuff_64 = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_1_Shuff_63 = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_1_Shuff_62 = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_1_Shuff_61 = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_1_Shuff_60 = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_1_Shuff_59 = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_1_Shuff_58 = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_1_Shuff_57 = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_1_Shuff_56 = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_1_Shuff_55 = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_1_Shuff_54 = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_1_Shuff_53 = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_1_Shuff_52 = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_1_Shuff_51 = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_1_Shuff_50 = global [2304 x float] zeroinitializer
@ShuffleConvs_1_Shuff_5 = global [2304 x float] zeroinitializer
@ShuffleConvs_1_Shuff_49 = global [432 x float] zeroinitializer
@ShuffleConvs_1_Shuff_47 = global [2304 x float] zeroinitializer
@ShuffleConvs_1_Shuff_45 = global [2304 x float] zeroinitializer
@ShuffleConvs_1_Shuff_43 = global [432 x float] zeroinitializer
@ShuffleConvs_1_Shuff_41 = global [2304 x float] zeroinitializer
@ShuffleConvs_1_Shuff_39 = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_1_Shuff_37 = global [2304 x float] zeroinitializer
@ShuffleConvs_1_Shuff_35 = global [432 x float] zeroinitializer
@ShuffleConvs_1_Shuff_33 = global [2304 x float] zeroinitializer
@ShuffleConvs_1_Shuff_31 = global [2304 x float] zeroinitializer
@ShuffleConvs_1_Shuff_3 = global [432 x float] zeroinitializer
@ShuffleConvs_1_Shuff_29 = global [432 x float] zeroinitializer
@ShuffleConvs_1_Shuff_27 = global [2304 x float] zeroinitializer
@ShuffleConvs_1_Shuff_25 = global [2304 x float] zeroinitializer
@ShuffleConvs_1_Shuff_23 = global [432 x float] zeroinitializer
@ShuffleConvs_1_Shuff_21 = global [2304 x float] zeroinitializer
@ShuffleConvs_1_Shuff_19 = global [2304 x float] zeroinitializer
@ShuffleConvs_1_Shuff_17 = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_1_Shuff_15 = global [432 x float] zeroinitializer
@ShuffleConvs_1_Shuff_13 = global [2304 x float] zeroinitializer
@ShuffleConvs_1_Shuff_11 = global [2304 x float] zeroinitializer
@ShuffleConvs_1_Shuff_1 = global [2304 x float] zeroinitializer
@ShuffleConvs_1_Shuff = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_1_Downs_9 = global [432 x float] zeroinitializer
@ShuffleConvs_1_Downs_8 = global [2304 x float] zeroinitializer
@ShuffleConvs_1_Downs_7 = global [2304 x float] zeroinitializer
@ShuffleConvs_1_Downs_6 = global [432 x float] zeroinitializer
@ShuffleConvs_1_Downs_5 = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_1_Downs_4 = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_1_Downs_3 = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_1_Downs_10 = global [2304 x float] zeroinitializer
@ShuffleConvs_1_Downs_1 = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_1_Downs = global [48 x float] zeroinitializer, align 16
@ShuffleConvs_0_Shuff_9 = global [216 x float] zeroinitializer
@ShuffleConvs_0_Shuff_8 = global [576 x float] zeroinitializer
@ShuffleConvs_0_Shuff_7 = global [576 x float] zeroinitializer
@ShuffleConvs_0_Shuff_6 = global [216 x float] zeroinitializer
@ShuffleConvs_0_Shuff_5 = global [576 x float] zeroinitializer
@ShuffleConvs_0_Shuff_4 = global [24 x float] zeroinitializer, align 16
@ShuffleConvs_0_Shuff_3 = global [24 x float] zeroinitializer, align 16
@ShuffleConvs_0_Shuff_22 = global [24 x float] zeroinitializer, align 16
@ShuffleConvs_0_Shuff_21 = global [24 x float] zeroinitializer, align 16
@ShuffleConvs_0_Shuff_20 = global [24 x float] zeroinitializer, align 16
@ShuffleConvs_0_Shuff_19 = global [24 x float] zeroinitializer, align 16
@ShuffleConvs_0_Shuff_18 = global [576 x float] zeroinitializer
@ShuffleConvs_0_Shuff_17 = global [24 x float] zeroinitializer, align 16
@ShuffleConvs_0_Shuff_15 = global [216 x float] zeroinitializer
@ShuffleConvs_0_Shuff_13 = global [576 x float] zeroinitializer
@ShuffleConvs_0_Shuff_11 = global [576 x float] zeroinitializer
@ShuffleConvs_0_Shuff_1 = global [24 x float] zeroinitializer, align 16
@ShuffleConvs_0_Shuff = global [24 x float] zeroinitializer, align 16
@ShuffleConvs_0_Downs_9 = global [216 x float] zeroinitializer
@ShuffleConvs_0_Downs_8 = global [576 x float] zeroinitializer
@ShuffleConvs_0_Downs_7 = global [576 x float] zeroinitializer
@ShuffleConvs_0_Downs_6 = global [216 x float] zeroinitializer
@ShuffleConvs_0_Downs_5 = global [24 x float] zeroinitializer, align 16
@ShuffleConvs_0_Downs_4 = global [24 x float] zeroinitializer, align 16
@ShuffleConvs_0_Downs_3 = global [24 x float] zeroinitializer, align 16
@ShuffleConvs_0_Downs_10 = global [576 x float] zeroinitializer
@ShuffleConvs_0_Downs_1 = global [24 x float] zeroinitializer, align 16
@ShuffleConvs_0_Downs = global [24 x float] zeroinitializer, align 16

define internal fastcc void @subconv_3x3_8_stride([6144 x float]* nocapture %input_r, [864 x float]* nocapture %weight, [96 x float]* nocapture %bias, [1536 x float]* nocapture %output_0) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader7
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_1, %.loopexit.loopexit ]
  %exitcond4 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_1 = add i7 %co, 1
  br i1 %exitcond4, label %2, label %.preheader7.preheader

.preheader7.preheader:                            ; preds = %.loopexit
  %tmp = zext i7 %co to i64
  %tmp_cast = zext i7 %co to i10
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0)
  %tmp_15_cast = zext i10 %tmp_s to i11
  %tmp_2 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %co, i2 0)
  %p_shl_cast = zext i9 %tmp_2 to i10
  %tmp_3 = sub i10 %p_shl_cast, %tmp_cast
  %tmp_17_cast = sext i10 %tmp_3 to i11
  %bias_addr = getelementptr [96 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader7

.preheader7.loopexit:                             ; preds = %.preheader6
  br label %.preheader7

.preheader7:                                      ; preds = %.preheader7.loopexit, %.preheader7.preheader
  %h = phi i3 [ 0, %.preheader7.preheader ], [ %h_1, %.preheader7.loopexit ]
  %exitcond3 = icmp eq i3 %h, -4
  %empty_15 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %h_1 = add i3 %h, 1
  br i1 %exitcond3, label %.loopexit.loopexit, label %.preheader6.preheader

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_5 = shl i3 %h, 1
  %tmp_2_cast = zext i3 %tmp_5 to i4
  %tmp_3_cast = zext i3 %h to i10
  %tmp_6 = add i10 %p_shl_cast, %tmp_3_cast
  %tmp_23_cast = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_6, i2 0)
  br label %.preheader6

.preheader6:                                      ; preds = %1, %.preheader6.preheader
  %w = phi i3 [ %w_1, %1 ], [ 0, %.preheader6.preheader ]
  %exitcond2 = icmp eq i3 %w, -4
  %empty_16 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %w_1 = add i3 %w, 1
  br i1 %exitcond2, label %.preheader7.loopexit, label %.preheader5.preheader

.preheader5.preheader:                            ; preds = %.preheader6
  %tmp_7 = shl i3 %w, 1
  %tmp_5_cast = zext i3 %tmp_7 to i4
  %tmp_1 = sub i4 0, %tmp_5_cast
  br label %.preheader5

.preheader5.loopexit:                             ; preds = %.preheader
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %sum = phi float [ 0.000000e+00, %.preheader5.preheader ], [ %sum_1, %.preheader5.loopexit ]
  %m = phi i2 [ 0, %.preheader5.preheader ], [ %m_1, %.preheader5.loopexit ]
  %m_cast8_cast = zext i2 %m to i3
  %exitcond1 = icmp eq i2 %m, -1
  %empty_17 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_1 = add i2 %m, 1
  br i1 %exitcond1, label %1, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader5
  %tmp_8_cast = zext i2 %m to i11
  %tmp_11 = add i11 %tmp_8_cast, %tmp_17_cast
  %tmp_14 = shl i11 %tmp_11, 2
  %tmp_15 = sub i11 %tmp_14, %tmp_11
  %tmp3 = add i2 -1, %m
  %tmp3_cast = sext i2 %tmp3 to i4
  %tmp_4 = add i4 %tmp3_cast, %tmp_2_cast
  %tmp_7_cast = sext i4 %tmp_4 to i11
  %tmp_16 = add i11 %tmp_7_cast, %tmp_15_cast
  %tmp_31_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_16, i3 0)
  %tmp_9 = sub i3 0, %m_cast8_cast
  %tmp_9_cast = sext i3 %tmp_9 to i4
  %sel_tmp = icmp eq i4 %tmp_2_cast, %tmp_9_cast
  br label %.preheader

.preheader:                                       ; preds = %_ifconv, %.preheader.preheader
  %sum_1 = phi float [ %sum_2, %_ifconv ], [ %sum, %.preheader.preheader ]
  %n = phi i2 [ %n_1, %_ifconv ], [ 0, %.preheader.preheader ]
  %n_cast6 = zext i2 %n to i4
  %exitcond = icmp eq i2 %n, -1
  %empty_18 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_1 = add i2 %n, 1
  br i1 %exitcond, label %.preheader5.loopexit, label %_ifconv

_ifconv:                                          ; preds = %.preheader
  %tmp_cast_19 = zext i2 %n to i11
  %tmp_17 = add i11 %tmp_15, %tmp_cast_19
  %tmp_32_cast = zext i11 %tmp_17 to i64
  %weight_addr = getelementptr [864 x float]* %weight, i64 0, i64 %tmp_32_cast
  %weight_load = load float* %weight_addr, align 4
  %p_not = icmp eq i4 %n_cast6, %tmp_1
  %tmp4 = add i2 %n, -1
  %tmp4_cast = sext i2 %tmp4 to i4
  %tmp_10 = add i4 %tmp_5_cast, %tmp4_cast
  %tmp_11_cast = sext i4 %tmp_10 to i14
  %tmp_18 = add i14 %tmp_31_cast, %tmp_11_cast
  %tmp_33_cast = zext i14 %tmp_18 to i64
  %input_addr = getelementptr [6144 x float]* %input_r, i64 0, i64 %tmp_33_cast
  %input_load = load float* %input_addr, align 4
  %sel_tmp1 = or i1 %sel_tmp, %p_not
  %tmp_12 = select i1 %sel_tmp1, float 0.000000e+00, float %input_load
  %tmp_13 = fmul float %weight_load, %tmp_12
  %sum_2 = fadd float %sum_1, %tmp_13
  br label %.preheader

; <label>:1                                       ; preds = %.preheader5
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %tmp_6_cast = zext i3 %w to i12
  %tmp_8 = add i12 %tmp_23_cast, %tmp_6_cast
  %tmp_25_cast = zext i12 %tmp_8 to i64
  %output_0_addr = getelementptr [1536 x float]* %output_0, i64 0, i64 %tmp_25_cast
  store float %result, float* %output_0_addr, align 4
  br label %.preheader6

; <label>:2                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_3x3_8_no_rel([3072 x float]* nocapture %input_0, [432 x float]* nocapture %weight, [48 x float]* nocapture %bias, [3072 x float]* nocapture %output_0) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader7
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_2, %.loopexit.loopexit ]
  %exitcond4 = icmp eq i6 %co, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_2 = add i6 %co, 1
  br i1 %exitcond4, label %2, label %.preheader7.preheader

.preheader7.preheader:                            ; preds = %.loopexit
  %tmp = zext i6 %co to i64
  %tmp_cast = zext i6 %co to i9
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co, i3 0)
  %tmp_35_cast2 = zext i9 %tmp_s to i10
  %tmp_35_cast = zext i9 %tmp_s to i10
  %tmp_19 = call i8 @_ssdm_op_BitConcatenate.i8.i6.i2(i6 %co, i2 0)
  %p_shl_cast = zext i8 %tmp_19 to i9
  %tmp_20 = sub i9 %p_shl_cast, %tmp_cast
  %tmp_37_cast = sext i9 %tmp_20 to i10
  %bias_addr = getelementptr [48 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader7

.preheader7.loopexit:                             ; preds = %.preheader6
  br label %.preheader7

.preheader7:                                      ; preds = %.preheader7.loopexit, %.preheader7.preheader
  %h = phi i4 [ 0, %.preheader7.preheader ], [ %h_2, %.preheader7.loopexit ]
  %h_cast = zext i4 %h to i5
  %exitcond3 = icmp eq i4 %h, -8
  %empty_20 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %h_2 = add i4 %h, 1
  br i1 %exitcond3, label %.loopexit.loopexit, label %.preheader6.preheader

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_cast_21 = zext i4 %h to i10
  %tmp_22 = add i10 %tmp_cast_21, %tmp_35_cast
  %tmp_40_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_22, i3 0)
  br label %.preheader6

.preheader6:                                      ; preds = %1, %.preheader6.preheader
  %w = phi i4 [ %w_2, %1 ], [ 0, %.preheader6.preheader ]
  %w_cast = zext i4 %w to i5
  %exitcond2 = icmp eq i4 %w, -8
  %empty_22 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %w_2 = add i4 %w, 1
  br i1 %exitcond2, label %.preheader7.loopexit, label %.preheader5.preheader

.preheader5.preheader:                            ; preds = %.preheader6
  %tmp_23 = sub i4 0, %w
  br label %.preheader5

.preheader5.loopexit:                             ; preds = %.preheader
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %sum = phi float [ 0.000000e+00, %.preheader5.preheader ], [ %sum_1, %.preheader5.loopexit ]
  %m = phi i2 [ 0, %.preheader5.preheader ], [ %m_2, %.preheader5.loopexit ]
  %m_cast_cast = zext i2 %m to i3
  %exitcond1 = icmp eq i2 %m, -1
  %empty_23 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_2 = add i2 %m, 1
  br i1 %exitcond1, label %1, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader5
  %tmp_15_cast = zext i2 %m to i10
  %tmp_27 = add i10 %tmp_15_cast, %tmp_37_cast
  %tmp_15 = shl i10 %tmp_27, 2
  %tmp_28 = sub i10 %tmp_15, %tmp_27
  %tmp_16 = sub i3 0, %m_cast_cast
  %tmp_16_cast = sext i3 %tmp_16 to i4
  %tmp_17 = icmp ne i4 %h, %tmp_16_cast
  %tmp4 = add i2 -1, %m
  %tmp4_cast = sext i2 %tmp4 to i5
  %tmp_18 = add i5 %tmp4_cast, %h_cast
  %tmp_19_cast = sext i5 %tmp_18 to i10
  %tmp_29 = add i10 %tmp_19_cast, %tmp_35_cast2
  %tmp_47_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_29, i3 0)
  %tmp_30 = call i2 @_ssdm_op_PartSelect.i2.i5.i32.i32(i5 %tmp_18, i32 3, i32 4)
  %icmp = icmp ne i2 %tmp_30, 1
  br label %.preheader

.preheader:                                       ; preds = %_ifconv, %.preheader.preheader
  %sum_1 = phi float [ %sum_3, %_ifconv ], [ %sum, %.preheader.preheader ]
  %n = phi i2 [ %n_2, %_ifconv ], [ 0, %.preheader.preheader ]
  %n_cast9 = zext i2 %n to i4
  %exitcond = icmp eq i2 %n, -1
  %empty_24 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_2 = add i2 %n, 1
  br i1 %exitcond, label %.preheader5.loopexit, label %_ifconv

_ifconv:                                          ; preds = %.preheader
  %tmp_20_cast = zext i2 %n to i10
  %tmp_31 = add i10 %tmp_28, %tmp_20_cast
  %tmp_48_cast = zext i10 %tmp_31 to i64
  %weight_addr = getelementptr [432 x float]* %weight, i64 0, i64 %tmp_48_cast
  %weight_load = load float* %weight_addr, align 4
  %tmp5 = add i2 %n, -1
  %tmp5_cast = sext i2 %tmp5 to i5
  %tmp_21 = add i5 %w_cast, %tmp5_cast
  %tmp_32 = call i2 @_ssdm_op_PartSelect.i2.i5.i32.i32(i5 %tmp_21, i32 3, i32 4)
  %icmp5 = icmp ne i2 %tmp_32, 1
  %tmp_23_cast = sext i5 %tmp_21 to i13
  %tmp_33 = add i13 %tmp_47_cast, %tmp_23_cast
  %tmp_49_cast = zext i13 %tmp_33 to i64
  %input_0_addr = getelementptr [3072 x float]* %input_0, i64 0, i64 %tmp_49_cast
  %input_0_load = load float* %input_0_addr, align 4
  %notlhs = icmp ne i4 %n_cast9, %tmp_23
  %tmp6 = and i1 %icmp, %notlhs
  %tmp7 = and i1 %tmp_17, %icmp5
  %sel_tmp2 = and i1 %tmp7, %tmp6
  %tmp_25 = select i1 %sel_tmp2, float %input_0_load, float 0.000000e+00
  %tmp_26 = fmul float %weight_load, %tmp_25
  %sum_3 = fadd float %sum_1, %tmp_26
  br label %.preheader

; <label>:1                                       ; preds = %.preheader5
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %tmp_14_cast = zext i4 %w to i13
  %tmp_24 = add i13 %tmp_40_cast, %tmp_14_cast
  %tmp_41_cast = zext i13 %tmp_24 to i64
  %output_0_addr = getelementptr [3072 x float]* %output_0, i64 0, i64 %tmp_41_cast
  store float %result, float* %output_0_addr, align 4
  br label %.preheader6

; <label>:2                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_3x3_4_no_rel([1536 x float]* nocapture %input_0, [864 x float]* nocapture %weight, [96 x float]* nocapture %bias, [1536 x float]* nocapture %output_0) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader7
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_3, %.loopexit.loopexit ]
  %exitcond4 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_3 = add i7 %co, 1
  br i1 %exitcond4, label %2, label %.preheader7.preheader

.preheader7.preheader:                            ; preds = %.loopexit
  %tmp = zext i7 %co to i64
  %tmp_cast = zext i7 %co to i10
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %co, i2 0)
  %tmp_51_cast2 = zext i9 %tmp_s to i10
  %tmp_51_cast = zext i9 %tmp_s to i10
  %tmp_35 = sub i10 %tmp_51_cast, %tmp_cast
  %tmp_53_cast = sext i10 %tmp_35 to i11
  %bias_addr = getelementptr [96 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader7

.preheader7.loopexit:                             ; preds = %.preheader6
  br label %.preheader7

.preheader7:                                      ; preds = %.preheader7.loopexit, %.preheader7.preheader
  %h = phi i3 [ 0, %.preheader7.preheader ], [ %h_3, %.preheader7.loopexit ]
  %h_cast = zext i3 %h to i4
  %exitcond3 = icmp eq i3 %h, -4
  %empty_25 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %h_3 = add i3 %h, 1
  br i1 %exitcond3, label %.loopexit.loopexit, label %.preheader6.preheader

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_cast_26 = zext i3 %h to i10
  %tmp_36 = add i10 %tmp_cast_26, %tmp_51_cast
  %tmp_56_cast = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_36, i2 0)
  br label %.preheader6

.preheader6:                                      ; preds = %1, %.preheader6.preheader
  %w = phi i3 [ %w_3, %1 ], [ 0, %.preheader6.preheader ]
  %w_cast = zext i3 %w to i4
  %exitcond2 = icmp eq i3 %w, -4
  %empty_27 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %w_3 = add i3 %w, 1
  br i1 %exitcond2, label %.preheader7.loopexit, label %.preheader5.preheader

.preheader5.preheader:                            ; preds = %.preheader6
  %tmp_37 = sub i3 0, %w
  br label %.preheader5

.preheader5.loopexit:                             ; preds = %.preheader
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %sum = phi float [ 0.000000e+00, %.preheader5.preheader ], [ %sum_1, %.preheader5.loopexit ]
  %m = phi i2 [ 0, %.preheader5.preheader ], [ %m_3, %.preheader5.loopexit ]
  %m_cast = zext i2 %m to i3
  %exitcond1 = icmp eq i2 %m, -1
  %empty_28 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_3 = add i2 %m, 1
  br i1 %exitcond1, label %1, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader5
  %tmp_28_cast = zext i2 %m to i11
  %tmp_41 = add i11 %tmp_28_cast, %tmp_53_cast
  %tmp_33 = shl i11 %tmp_41, 2
  %tmp_42 = sub i11 %tmp_33, %tmp_41
  %tmp_29 = sub i3 0, %m_cast
  %tmp_30 = icmp ne i3 %h, %tmp_29
  %tmp4 = add i2 -1, %m
  %tmp4_cast = sext i2 %tmp4 to i4
  %tmp_31 = add i4 %tmp4_cast, %h_cast
  %tmp_32_cast = sext i4 %tmp_31 to i10
  %tmp_43 = add i10 %tmp_32_cast, %tmp_51_cast2
  %tmp_63_cast = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_43, i2 0)
  %tmp_44 = call i2 @_ssdm_op_PartSelect.i2.i4.i32.i32(i4 %tmp_31, i32 2, i32 3)
  %icmp = icmp ne i2 %tmp_44, 1
  br label %.preheader

.preheader:                                       ; preds = %_ifconv, %.preheader.preheader
  %sum_1 = phi float [ %sum_4, %_ifconv ], [ %sum, %.preheader.preheader ]
  %n = phi i2 [ %n_3, %_ifconv ], [ 0, %.preheader.preheader ]
  %n_cast = zext i2 %n to i3
  %exitcond = icmp eq i2 %n, -1
  %empty_29 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_3 = add i2 %n, 1
  br i1 %exitcond, label %.preheader5.loopexit, label %_ifconv

_ifconv:                                          ; preds = %.preheader
  %tmp_33_cast = zext i2 %n to i11
  %tmp_45 = add i11 %tmp_42, %tmp_33_cast
  %tmp_64_cast = zext i11 %tmp_45 to i64
  %weight_addr = getelementptr [864 x float]* %weight, i64 0, i64 %tmp_64_cast
  %weight_load = load float* %weight_addr, align 4
  %tmp5 = add i2 %n, -1
  %tmp5_cast = sext i2 %tmp5 to i4
  %tmp_34 = add i4 %w_cast, %tmp5_cast
  %tmp_46 = call i2 @_ssdm_op_PartSelect.i2.i4.i32.i32(i4 %tmp_34, i32 2, i32 3)
  %icmp5 = icmp ne i2 %tmp_46, 1
  %tmp_36_cast = sext i4 %tmp_34 to i12
  %tmp_47 = add i12 %tmp_63_cast, %tmp_36_cast
  %tmp_65_cast = zext i12 %tmp_47 to i64
  %input_0_addr = getelementptr [1536 x float]* %input_0, i64 0, i64 %tmp_65_cast
  %input_0_load = load float* %input_0_addr, align 4
  %notlhs = icmp ne i3 %n_cast, %tmp_37
  %tmp6 = and i1 %icmp, %notlhs
  %tmp7 = and i1 %tmp_30, %icmp5
  %sel_tmp2 = and i1 %tmp7, %tmp6
  %tmp_38 = select i1 %sel_tmp2, float %input_0_load, float 0.000000e+00
  %tmp_39 = fmul float %weight_load, %tmp_38
  %sum_4 = fadd float %sum_1, %tmp_39
  br label %.preheader

; <label>:1                                       ; preds = %.preheader5
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %tmp_27_cast = zext i3 %w to i12
  %tmp_40 = add i12 %tmp_56_cast, %tmp_27_cast
  %tmp_57_cast = zext i12 %tmp_40 to i64
  %output_0_addr = getelementptr [1536 x float]* %output_0, i64 0, i64 %tmp_57_cast
  store float %result, float* %output_0_addr, align 4
  br label %.preheader6

; <label>:2                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_3x3_32_strid([24576 x float]* nocapture %input_r, [216 x float]* nocapture %weight, [24 x float]* nocapture %bias, [6144 x float]* nocapture %output_0) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader7
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i5 [ 0, %0 ], [ %co_4, %.loopexit.loopexit ]
  %exitcond4 = icmp eq i5 %co, -8
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_4 = add i5 %co, 1
  br i1 %exitcond4, label %2, label %.preheader7.preheader

.preheader7.preheader:                            ; preds = %.loopexit
  %tmp = zext i5 %co to i64
  %tmp_cast = zext i5 %co to i8
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co, i5 0)
  %tmp_67_cast = zext i10 %tmp_s to i11
  %tmp_49 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co, i2 0)
  %p_shl_cast = zext i7 %tmp_49 to i8
  %tmp_53 = sub i8 %p_shl_cast, %tmp_cast
  %tmp_69_cast = sext i8 %tmp_53 to i9
  %tmp_54 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co, i4 0)
  %tmp_71_cast = zext i9 %tmp_54 to i10
  %bias_addr = getelementptr [24 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader7

.preheader7.loopexit:                             ; preds = %.preheader6
  br label %.preheader7

.preheader7:                                      ; preds = %.preheader7.loopexit, %.preheader7.preheader
  %h = phi i5 [ 0, %.preheader7.preheader ], [ %h_4, %.preheader7.loopexit ]
  %exitcond3 = icmp eq i5 %h, -16
  %empty_30 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %h_4 = add i5 %h, 1
  br i1 %exitcond3, label %.loopexit.loopexit, label %.preheader6.preheader

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_55 = shl i5 %h, 1
  %tmp_cast_31 = zext i5 %tmp_55 to i6
  %tmp_40_cast = zext i5 %h to i10
  %tmp_56 = add i10 %tmp_71_cast, %tmp_40_cast
  %tmp_75_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_56, i4 0)
  br label %.preheader6

.preheader6:                                      ; preds = %1, %.preheader6.preheader
  %w = phi i5 [ %w_4, %1 ], [ 0, %.preheader6.preheader ]
  %exitcond2 = icmp eq i5 %w, -16
  %empty_32 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %w_4 = add i5 %w, 1
  br i1 %exitcond2, label %.preheader7.loopexit, label %.preheader5.preheader

.preheader5.preheader:                            ; preds = %.preheader6
  %tmp_57 = shl i5 %w, 1
  %tmp_48_cast = zext i5 %tmp_57 to i6
  %tmp_47 = sub i6 0, %tmp_48_cast
  br label %.preheader5

.preheader5.loopexit:                             ; preds = %.preheader
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %sum = phi float [ 0.000000e+00, %.preheader5.preheader ], [ %sum_1, %.preheader5.loopexit ]
  %m = phi i2 [ 0, %.preheader5.preheader ], [ %m_4, %.preheader5.loopexit ]
  %m_cast8_cast = zext i2 %m to i3
  %exitcond1 = icmp eq i2 %m, -1
  %empty_33 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_4 = add i2 %m, 1
  br i1 %exitcond1, label %1, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader5
  %tmp_43_cast = zext i2 %m to i9
  %tmp_59 = add i9 %tmp_43_cast, %tmp_69_cast
  %tmp_60 = shl i9 %tmp_59, 2
  %tmp_61 = sub i9 %tmp_60, %tmp_59
  %tmp3 = add i2 -1, %m
  %tmp3_cast = sext i2 %tmp3 to i6
  %tmp_44 = add i6 %tmp3_cast, %tmp_cast_31
  %tmp_45_cast = sext i6 %tmp_44 to i11
  %tmp_62 = add i11 %tmp_45_cast, %tmp_67_cast
  %tmp_83_cast = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_62, i5 0)
  %tmp_50 = sub i3 0, %m_cast8_cast
  %tmp_50_cast = sext i3 %tmp_50 to i6
  %sel_tmp = icmp eq i6 %tmp_cast_31, %tmp_50_cast
  br label %.preheader

.preheader:                                       ; preds = %_ifconv, %.preheader.preheader
  %sum_1 = phi float [ %sum_5, %_ifconv ], [ %sum, %.preheader.preheader ]
  %n = phi i2 [ %n_4, %_ifconv ], [ 0, %.preheader.preheader ]
  %n_cast6 = zext i2 %n to i6
  %exitcond = icmp eq i2 %n, -1
  %empty_34 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_4 = add i2 %n, 1
  br i1 %exitcond, label %.preheader5.loopexit, label %_ifconv

_ifconv:                                          ; preds = %.preheader
  %tmp_46_cast = zext i2 %n to i9
  %tmp_63 = add i9 %tmp_61, %tmp_46_cast
  %tmp_84_cast = zext i9 %tmp_63 to i64
  %weight_addr = getelementptr [216 x float]* %weight, i64 0, i64 %tmp_84_cast
  %weight_load = load float* %weight_addr, align 4
  %p_not = icmp eq i6 %n_cast6, %tmp_47
  %tmp4 = add i2 %n, -1
  %tmp4_cast = sext i2 %tmp4 to i6
  %tmp_48 = add i6 %tmp_48_cast, %tmp4_cast
  %tmp_49_cast = sext i6 %tmp_48 to i16
  %tmp_64 = add i16 %tmp_83_cast, %tmp_49_cast
  %tmp_85_cast = zext i16 %tmp_64 to i64
  %input_addr = getelementptr [24576 x float]* %input_r, i64 0, i64 %tmp_85_cast
  %input_load = load float* %input_addr, align 4
  %sel_tmp1 = or i1 %sel_tmp, %p_not
  %tmp_51 = select i1 %sel_tmp1, float 0.000000e+00, float %input_load
  %tmp_52 = fmul float %weight_load, %tmp_51
  %sum_5 = fadd float %sum_1, %tmp_52
  br label %.preheader

; <label>:1                                       ; preds = %.preheader5
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %tmp_42_cast = zext i5 %w to i14
  %tmp_58 = add i14 %tmp_75_cast, %tmp_42_cast
  %tmp_77_cast = zext i14 %tmp_58 to i64
  %output_0_addr = getelementptr [6144 x float]* %output_0, i64 0, i64 %tmp_77_cast
  store float %result, float* %output_0_addr, align 4
  br label %.preheader6

; <label>:2                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_3x3_16_strid([12288 x float]* nocapture %input_r, [432 x float]* nocapture %weight, [48 x float]* nocapture %bias, [3072 x float]* nocapture %output_0) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader7
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_5, %.loopexit.loopexit ]
  %exitcond4 = icmp eq i6 %co, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_5 = add i6 %co, 1
  br i1 %exitcond4, label %2, label %.preheader7.preheader

.preheader7.preheader:                            ; preds = %.loopexit
  %tmp = zext i6 %co to i64
  %tmp_cast = zext i6 %co to i9
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co, i4 0)
  %tmp_87_cast = zext i10 %tmp_s to i11
  %tmp_66 = call i8 @_ssdm_op_BitConcatenate.i8.i6.i2(i6 %co, i2 0)
  %p_shl_cast = zext i8 %tmp_66 to i9
  %tmp_67 = sub i9 %p_shl_cast, %tmp_cast
  %tmp_89_cast = sext i9 %tmp_67 to i10
  %tmp_68 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co, i3 0)
  %tmp_91_cast = zext i9 %tmp_68 to i10
  %bias_addr = getelementptr [48 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader7

.preheader7.loopexit:                             ; preds = %.preheader6
  br label %.preheader7

.preheader7:                                      ; preds = %.preheader7.loopexit, %.preheader7.preheader
  %h = phi i4 [ 0, %.preheader7.preheader ], [ %h_5, %.preheader7.loopexit ]
  %exitcond3 = icmp eq i4 %h, -8
  %empty_35 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %h_5 = add i4 %h, 1
  br i1 %exitcond3, label %.loopexit.loopexit, label %.preheader6.preheader

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_62 = shl i4 %h, 1
  %tmp_cast_36 = zext i4 %tmp_62 to i5
  %tmp_53_cast = zext i4 %h to i10
  %tmp_69 = add i10 %tmp_91_cast, %tmp_53_cast
  %tmp_95_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_69, i3 0)
  br label %.preheader6

.preheader6:                                      ; preds = %1, %.preheader6.preheader
  %w = phi i4 [ %w_5, %1 ], [ 0, %.preheader6.preheader ]
  %exitcond2 = icmp eq i4 %w, -8
  %empty_37 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %w_5 = add i4 %w, 1
  br i1 %exitcond2, label %.preheader7.loopexit, label %.preheader5.preheader

.preheader5.preheader:                            ; preds = %.preheader6
  %tmp_70 = shl i4 %w, 1
  %tmp_64_cast = zext i4 %tmp_70 to i5
  %tmp_60 = sub i5 0, %tmp_64_cast
  br label %.preheader5

.preheader5.loopexit:                             ; preds = %.preheader
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %sum = phi float [ 0.000000e+00, %.preheader5.preheader ], [ %sum_1, %.preheader5.loopexit ]
  %m = phi i2 [ 0, %.preheader5.preheader ], [ %m_5, %.preheader5.loopexit ]
  %m_cast8_cast = zext i2 %m to i3
  %exitcond1 = icmp eq i2 %m, -1
  %empty_38 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_5 = add i2 %m, 1
  br i1 %exitcond1, label %1, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader5
  %tmp_56_cast = zext i2 %m to i10
  %tmp_72 = add i10 %tmp_56_cast, %tmp_89_cast
  %tmp_73 = shl i10 %tmp_72, 2
  %tmp_74 = sub i10 %tmp_73, %tmp_72
  %tmp3 = add i2 -1, %m
  %tmp3_cast = sext i2 %tmp3 to i5
  %tmp_57 = add i5 %tmp3_cast, %tmp_cast_36
  %tmp_58_cast = sext i5 %tmp_57 to i11
  %tmp_75 = add i11 %tmp_58_cast, %tmp_87_cast
  %tmp_103_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_75, i4 0)
  %tmp_63 = sub i3 0, %m_cast8_cast
  %tmp_63_cast = sext i3 %tmp_63 to i5
  %sel_tmp = icmp eq i5 %tmp_cast_36, %tmp_63_cast
  br label %.preheader

.preheader:                                       ; preds = %_ifconv, %.preheader.preheader
  %sum_1 = phi float [ %sum_6, %_ifconv ], [ %sum, %.preheader.preheader ]
  %n = phi i2 [ %n_5, %_ifconv ], [ 0, %.preheader.preheader ]
  %n_cast6 = zext i2 %n to i5
  %exitcond = icmp eq i2 %n, -1
  %empty_39 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_5 = add i2 %n, 1
  br i1 %exitcond, label %.preheader5.loopexit, label %_ifconv

_ifconv:                                          ; preds = %.preheader
  %tmp_59_cast = zext i2 %n to i10
  %tmp_76 = add i10 %tmp_74, %tmp_59_cast
  %tmp_104_cast = zext i10 %tmp_76 to i64
  %weight_addr = getelementptr [432 x float]* %weight, i64 0, i64 %tmp_104_cast
  %weight_load = load float* %weight_addr, align 4
  %p_not = icmp eq i5 %n_cast6, %tmp_60
  %tmp4 = add i2 %n, -1
  %tmp4_cast = sext i2 %tmp4 to i5
  %tmp_61 = add i5 %tmp_64_cast, %tmp4_cast
  %tmp_62_cast = sext i5 %tmp_61 to i15
  %tmp_77 = add i15 %tmp_103_cast, %tmp_62_cast
  %tmp_105_cast = zext i15 %tmp_77 to i64
  %input_addr = getelementptr [12288 x float]* %input_r, i64 0, i64 %tmp_105_cast
  %input_load = load float* %input_addr, align 4
  %sel_tmp1 = or i1 %sel_tmp, %p_not
  %tmp_64 = select i1 %sel_tmp1, float 0.000000e+00, float %input_load
  %tmp_65 = fmul float %weight_load, %tmp_64
  %sum_6 = fadd float %sum_1, %tmp_65
  br label %.preheader

; <label>:1                                       ; preds = %.preheader5
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %tmp_55_cast = zext i4 %w to i13
  %tmp_71 = add i13 %tmp_95_cast, %tmp_55_cast
  %tmp_97_cast = zext i13 %tmp_71 to i64
  %output_0_addr = getelementptr [3072 x float]* %output_0, i64 0, i64 %tmp_97_cast
  store float %result, float* %output_0_addr, align 4
  br label %.preheader6

; <label>:2                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_3x3_16_no_re([6144 x float]* nocapture %input_0, [216 x float]* nocapture %weight, [24 x float]* nocapture %bias, [6144 x float]* nocapture %output_0) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader7
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i5 [ 0, %0 ], [ %co_6, %.loopexit.loopexit ]
  %exitcond4 = icmp eq i5 %co, -8
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_6 = add i5 %co, 1
  br i1 %exitcond4, label %2, label %.preheader7.preheader

.preheader7.preheader:                            ; preds = %.loopexit
  %tmp = zext i5 %co to i64
  %tmp_cast = zext i5 %co to i8
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co, i4 0)
  %tmp_107_cast2 = zext i9 %tmp_s to i10
  %tmp_107_cast = zext i9 %tmp_s to i10
  %tmp_79 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co, i2 0)
  %p_shl_cast = zext i7 %tmp_79 to i8
  %tmp_80 = sub i8 %p_shl_cast, %tmp_cast
  %tmp_109_cast = sext i8 %tmp_80 to i9
  %bias_addr = getelementptr [24 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader7

.preheader7.loopexit:                             ; preds = %.preheader6
  br label %.preheader7

.preheader7:                                      ; preds = %.preheader7.loopexit, %.preheader7.preheader
  %h = phi i5 [ 0, %.preheader7.preheader ], [ %h_6, %.preheader7.loopexit ]
  %h_cast = zext i5 %h to i6
  %exitcond3 = icmp eq i5 %h, -16
  %empty_40 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %h_6 = add i5 %h, 1
  br i1 %exitcond3, label %.loopexit.loopexit, label %.preheader6.preheader

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_cast_41 = zext i5 %h to i10
  %tmp_81 = add i10 %tmp_cast_41, %tmp_107_cast
  %tmp_112_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_81, i4 0)
  br label %.preheader6

.preheader6:                                      ; preds = %1, %.preheader6.preheader
  %w = phi i5 [ %w_6, %1 ], [ 0, %.preheader6.preheader ]
  %w_cast = zext i5 %w to i6
  %exitcond2 = icmp eq i5 %w, -16
  %empty_42 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %w_6 = add i5 %w, 1
  br i1 %exitcond2, label %.preheader7.loopexit, label %.preheader5.preheader

.preheader5.preheader:                            ; preds = %.preheader6
  %tmp_76 = sub i5 0, %w
  br label %.preheader5

.preheader5.loopexit:                             ; preds = %.preheader
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %sum = phi float [ 0.000000e+00, %.preheader5.preheader ], [ %sum_1, %.preheader5.loopexit ]
  %m = phi i2 [ 0, %.preheader5.preheader ], [ %m_6, %.preheader5.loopexit ]
  %m_cast_cast = zext i2 %m to i3
  %exitcond1 = icmp eq i2 %m, -1
  %empty_43 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_6 = add i2 %m, 1
  br i1 %exitcond1, label %1, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader5
  %tmp_67_cast = zext i2 %m to i9
  %tmp_83 = add i9 %tmp_67_cast, %tmp_109_cast
  %tmp_74 = shl i9 %tmp_83, 2
  %tmp_84 = sub i9 %tmp_74, %tmp_83
  %tmp_68 = sub i3 0, %m_cast_cast
  %tmp_68_cast = sext i3 %tmp_68 to i5
  %tmp_69 = icmp ne i5 %h, %tmp_68_cast
  %tmp4 = add i2 -1, %m
  %tmp4_cast = sext i2 %tmp4 to i6
  %tmp_70 = add i6 %tmp4_cast, %h_cast
  %tmp_71_cast = sext i6 %tmp_70 to i10
  %tmp_85 = add i10 %tmp_71_cast, %tmp_107_cast2
  %tmp_119_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_85, i4 0)
  %tmp_75 = call i2 @_ssdm_op_PartSelect.i2.i6.i32.i32(i6 %tmp_70, i32 4, i32 5)
  %icmp = icmp ne i2 %tmp_75, 1
  br label %.preheader

.preheader:                                       ; preds = %_ifconv, %.preheader.preheader
  %sum_1 = phi float [ %sum_7, %_ifconv ], [ %sum, %.preheader.preheader ]
  %n = phi i2 [ %n_6, %_ifconv ], [ 0, %.preheader.preheader ]
  %n_cast9 = zext i2 %n to i5
  %exitcond = icmp eq i2 %n, -1
  %empty_44 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_6 = add i2 %n, 1
  br i1 %exitcond, label %.preheader5.loopexit, label %_ifconv

_ifconv:                                          ; preds = %.preheader
  %tmp_72_cast = zext i2 %n to i9
  %tmp_86 = add i9 %tmp_84, %tmp_72_cast
  %tmp_120_cast = zext i9 %tmp_86 to i64
  %weight_addr = getelementptr [216 x float]* %weight, i64 0, i64 %tmp_120_cast
  %weight_load = load float* %weight_addr, align 4
  %tmp5 = add i2 %n, -1
  %tmp5_cast = sext i2 %tmp5 to i6
  %tmp_73 = add i6 %w_cast, %tmp5_cast
  %tmp_87 = call i2 @_ssdm_op_PartSelect.i2.i6.i32.i32(i6 %tmp_73, i32 4, i32 5)
  %icmp5 = icmp ne i2 %tmp_87, 1
  %tmp_75_cast = sext i6 %tmp_73 to i14
  %tmp_88 = add i14 %tmp_119_cast, %tmp_75_cast
  %tmp_121_cast = zext i14 %tmp_88 to i64
  %input_0_addr = getelementptr [6144 x float]* %input_0, i64 0, i64 %tmp_121_cast
  %input_0_load = load float* %input_0_addr, align 4
  %notlhs = icmp ne i5 %n_cast9, %tmp_76
  %tmp6 = and i1 %icmp, %notlhs
  %tmp7 = and i1 %tmp_69, %icmp5
  %sel_tmp2 = and i1 %tmp7, %tmp6
  %tmp_77 = select i1 %sel_tmp2, float %input_0_load, float 0.000000e+00
  %tmp_78 = fmul float %weight_load, %tmp_77
  %sum_7 = fadd float %sum_1, %tmp_78
  br label %.preheader

; <label>:1                                       ; preds = %.preheader5
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %tmp_66_cast = zext i5 %w to i14
  %tmp_82 = add i14 %tmp_112_cast, %tmp_66_cast
  %tmp_113_cast = zext i14 %tmp_82 to i64
  %output_0_addr = getelementptr [6144 x float]* %output_0, i64 0, i64 %tmp_113_cast
  store float %result, float* %output_0_addr, align 4
  br label %.preheader6

; <label>:2                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_1x1_8p20([9216 x float]* nocapture %weight, [96 x float]* nocapture %bias, [6144 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader5
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_7, %.loopexit.loopexit ]
  %exitcond3 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_7 = add i7 %co, 1
  br i1 %exitcond3, label %3, label %.preheader5.preheader

.preheader5.preheader:                            ; preds = %.loopexit
  %tmp = zext i7 %co to i64
  %tmp_s = call i14 @_ssdm_op_BitConcatenate.i14.i7.i7(i7 %co, i7 0)
  %p_shl_cast = zext i14 %tmp_s to i15
  %tmp_89 = call i12 @_ssdm_op_BitConcatenate.i12.i7.i5(i7 %co, i5 0)
  %p_shl1_cast = zext i12 %tmp_89 to i15
  %tmp_90 = sub i15 %p_shl_cast, %p_shl1_cast
  %tmp_91 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0)
  %tmp_126_cast = zext i10 %tmp_91 to i11
  %bias_addr = getelementptr [96 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader5

.preheader5.loopexit:                             ; preds = %.preheader4
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %h = phi i4 [ 0, %.preheader5.preheader ], [ %h_7, %.preheader5.loopexit ]
  %exitcond2 = icmp eq i4 %h, -8
  %empty_45 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %h_7 = add i4 %h, 1
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader4.preheader

.preheader4.preheader:                            ; preds = %.preheader5
  %tmp_cast = zext i4 %h to i11
  %tmp_92 = add i11 %tmp_cast, %tmp_126_cast
  %tmp_129_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_92, i3 0)
  br label %.preheader4

.preheader4:                                      ; preds = %2, %.preheader4.preheader
  %w = phi i4 [ %w_7, %2 ], [ 0, %.preheader4.preheader ]
  %exitcond1 = icmp eq i4 %w, -8
  %empty_46 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %w_7 = add i4 %w, 1
  br i1 %exitcond1, label %.preheader5.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_79_cast = zext i4 %w to i14
  %tmp_93 = add i14 %tmp_129_cast, %tmp_79_cast
  %tmp_130_cast = zext i14 %tmp_93 to i64
  %output_addr = getelementptr [6144 x float]* %output_r, i64 0, i64 %tmp_130_cast
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum = phi float [ %sum_8, %1 ], [ 0.000000e+00, %.preheader.preheader ]
  %ci = phi i7 [ %ci_1, %1 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i7 %ci, -32
  %empty_47 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %ci_1 = add i7 %ci, 1
  br i1 %exitcond, label %2, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_80_cast = zext i7 %ci to i15
  %tmp_94 = add i15 %tmp_80_cast, %tmp_90
  %tmp_131_cast = sext i15 %tmp_94 to i64
  %weight_addr = getelementptr [9216 x float]* %weight, i64 0, i64 %tmp_131_cast
  %tmp_95 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %ci, i3 0)
  %tmp_133_cast = zext i10 %tmp_95 to i11
  %tmp_96 = add i11 %tmp_cast, %tmp_133_cast
  %tmp_136_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_96, i3 0)
  %tmp_97 = add i14 %tmp_79_cast, %tmp_136_cast
  %tmp_137_cast = zext i14 %tmp_97 to i64
  %shuffleunit1_7_outpu = getelementptr [6144 x float]* @shuffleunit1_7_outpu, i64 0, i64 %tmp_137_cast
  %weight_load = load float* %weight_addr, align 4
  %shuffleunit1_7_outpu_1 = load float* %shuffleunit1_7_outpu, align 4
  %tmp_81 = fmul float %weight_load, %shuffleunit1_7_outpu_1
  %sum_8 = fadd float %sum, %tmp_81
  br label %.preheader

; <label>:2                                       ; preds = %.preheader
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %result_to_int = bitcast float %result to i32
  %tmp_1 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %result_to_int, i32 23, i32 30)
  %tmp_88 = trunc i32 %result_to_int to i23
  %notlhs = icmp ne i8 %tmp_1, -1
  %notrhs = icmp eq i23 %tmp_88, 0
  %tmp_3 = or i1 %notrhs, %notlhs
  %tmp_4 = fcmp ogt float %result, 0.000000e+00
  %tmp_5 = and i1 %tmp_3, %tmp_4
  %result_1 = select i1 %tmp_5, float %result, float 0.000000e+00
  store float %result_1, float* %output_addr, align 4
  br label %.preheader4

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_1x1_89([3072 x float]* nocapture %input_0, [2304 x float]* nocapture %weight, [48 x float]* nocapture %bias, [3072 x float]* nocapture %output_0) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader5
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_8, %.loopexit.loopexit ]
  %exitcond3 = icmp eq i6 %co, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_8 = add i6 %co, 1
  br i1 %exitcond3, label %3, label %.preheader5.preheader

.preheader5.preheader:                            ; preds = %.loopexit
  %tmp = zext i6 %co to i64
  %tmp_s = call i12 @_ssdm_op_BitConcatenate.i12.i6.i6(i6 %co, i6 0)
  %p_shl_cast = zext i12 %tmp_s to i13
  %tmp_98 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co, i4 0)
  %p_shl1_cast = zext i10 %tmp_98 to i13
  %tmp_99 = sub i13 %p_shl_cast, %p_shl1_cast
  %tmp_100 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co, i3 0)
  %tmp_142_cast = zext i9 %tmp_100 to i10
  %bias_addr = getelementptr [48 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader5

.preheader5.loopexit:                             ; preds = %.preheader4
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %h = phi i4 [ 0, %.preheader5.preheader ], [ %h_8, %.preheader5.loopexit ]
  %exitcond2 = icmp eq i4 %h, -8
  %empty_48 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %h_8 = add i4 %h, 1
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader4.preheader

.preheader4.preheader:                            ; preds = %.preheader5
  %tmp_cast = zext i4 %h to i10
  %tmp_101 = add i10 %tmp_cast, %tmp_142_cast
  %tmp_145_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_101, i3 0)
  br label %.preheader4

.preheader4:                                      ; preds = %2, %.preheader4.preheader
  %w = phi i4 [ %w_8, %2 ], [ 0, %.preheader4.preheader ]
  %exitcond1 = icmp eq i4 %w, -8
  %empty_49 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %w_8 = add i4 %w, 1
  br i1 %exitcond1, label %.preheader5.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_82_cast = zext i4 %w to i13
  %tmp_102 = add i13 %tmp_145_cast, %tmp_82_cast
  %tmp_146_cast = zext i13 %tmp_102 to i64
  %output_0_addr = getelementptr [3072 x float]* %output_0, i64 0, i64 %tmp_146_cast
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum = phi float [ %sum_9, %1 ], [ 0.000000e+00, %.preheader.preheader ]
  %ci = phi i6 [ %ci_2, %1 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i6 %ci, -16
  %empty_50 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %ci_2 = add i6 %ci, 1
  br i1 %exitcond, label %2, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_83_cast = zext i6 %ci to i13
  %tmp_103 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %ci, i3 0)
  %tmp_148_cast = zext i9 %tmp_103 to i10
  %tmp_104 = add i10 %tmp_cast, %tmp_148_cast
  %tmp_151_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_104, i3 0)
  %tmp_105 = add i13 %tmp_82_cast, %tmp_151_cast
  %tmp_152_cast = zext i13 %tmp_105 to i64
  %input_0_addr = getelementptr [3072 x float]* %input_0, i64 0, i64 %tmp_152_cast
  %tmp_106 = add i13 %tmp_83_cast, %tmp_99
  %tmp_153_cast = sext i13 %tmp_106 to i64
  %weight_addr = getelementptr [2304 x float]* %weight, i64 0, i64 %tmp_153_cast
  %weight_load = load float* %weight_addr, align 4
  %input_0_load = load float* %input_0_addr, align 4
  %tmp_84 = fmul float %weight_load, %input_0_load
  %sum_9 = fadd float %sum, %tmp_84
  br label %.preheader

; <label>:2                                       ; preds = %.preheader
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %result_to_int = bitcast float %result to i32
  %tmp_6 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %result_to_int, i32 23, i32 30)
  %tmp_89 = trunc i32 %result_to_int to i23
  %notlhs = icmp ne i8 %tmp_6, -1
  %notrhs = icmp eq i23 %tmp_89, 0
  %tmp_8 = or i1 %notrhs, %notlhs
  %tmp_9 = fcmp ogt float %result, 0.000000e+00
  %tmp_10 = and i1 %tmp_8, %tmp_9
  %result_2 = select i1 %tmp_10, float %result, float 0.000000e+00
  store float %result_2, float* %output_0_addr, align 4
  br label %.preheader4

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_1x1_419([1536 x float]* nocapture %input_0, [9216 x float]* nocapture %weight, [96 x float]* nocapture %bias, [1536 x float]* nocapture %output_0) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader5
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_9, %.loopexit.loopexit ]
  %exitcond3 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_9 = add i7 %co, 1
  br i1 %exitcond3, label %3, label %.preheader5.preheader

.preheader5.preheader:                            ; preds = %.loopexit
  %tmp = zext i7 %co to i64
  %tmp_s = call i14 @_ssdm_op_BitConcatenate.i14.i7.i7(i7 %co, i7 0)
  %p_shl_cast = zext i14 %tmp_s to i15
  %tmp_107 = call i12 @_ssdm_op_BitConcatenate.i12.i7.i5(i7 %co, i5 0)
  %p_shl1_cast = zext i12 %tmp_107 to i15
  %tmp_108 = sub i15 %p_shl_cast, %p_shl1_cast
  %tmp_109 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %co, i2 0)
  %tmp_158_cast = zext i9 %tmp_109 to i10
  %bias_addr = getelementptr [96 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader5

.preheader5.loopexit:                             ; preds = %.preheader4
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %h = phi i3 [ 0, %.preheader5.preheader ], [ %h_9, %.preheader5.loopexit ]
  %exitcond2 = icmp eq i3 %h, -4
  %empty_51 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %h_9 = add i3 %h, 1
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader4.preheader

.preheader4.preheader:                            ; preds = %.preheader5
  %tmp_cast = zext i3 %h to i10
  %tmp_110 = add i10 %tmp_cast, %tmp_158_cast
  %tmp_161_cast = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_110, i2 0)
  br label %.preheader4

.preheader4:                                      ; preds = %2, %.preheader4.preheader
  %w = phi i3 [ %w_9, %2 ], [ 0, %.preheader4.preheader ]
  %exitcond1 = icmp eq i3 %w, -4
  %empty_52 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %w_9 = add i3 %w, 1
  br i1 %exitcond1, label %.preheader5.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_85_cast = zext i3 %w to i12
  %tmp_111 = add i12 %tmp_161_cast, %tmp_85_cast
  %tmp_162_cast = zext i12 %tmp_111 to i64
  %output_0_addr = getelementptr [1536 x float]* %output_0, i64 0, i64 %tmp_162_cast
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum = phi float [ %sum_10, %1 ], [ 0.000000e+00, %.preheader.preheader ]
  %ci = phi i7 [ %ci_3, %1 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i7 %ci, -32
  %empty_53 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %ci_3 = add i7 %ci, 1
  br i1 %exitcond, label %2, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_86_cast = zext i7 %ci to i15
  %tmp_112 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %ci, i2 0)
  %tmp_164_cast = zext i9 %tmp_112 to i10
  %tmp_113 = add i10 %tmp_cast, %tmp_164_cast
  %tmp_167_cast = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_113, i2 0)
  %tmp_114 = add i12 %tmp_85_cast, %tmp_167_cast
  %tmp_168_cast = zext i12 %tmp_114 to i64
  %input_0_addr = getelementptr [1536 x float]* %input_0, i64 0, i64 %tmp_168_cast
  %tmp_115 = add i15 %tmp_86_cast, %tmp_108
  %tmp_169_cast = sext i15 %tmp_115 to i64
  %weight_addr = getelementptr [9216 x float]* %weight, i64 0, i64 %tmp_169_cast
  %weight_load = load float* %weight_addr, align 4
  %input_0_load = load float* %input_0_addr, align 4
  %tmp_87 = fmul float %weight_load, %input_0_load
  %sum_10 = fadd float %sum, %tmp_87
  br label %.preheader

; <label>:2                                       ; preds = %.preheader
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %result_to_int = bitcast float %result to i32
  %tmp_11 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %result_to_int, i32 23, i32 30)
  %tmp_90 = trunc i32 %result_to_int to i23
  %notlhs = icmp ne i8 %tmp_11, -1
  %notrhs = icmp eq i23 %tmp_90, 0
  %tmp_13 = or i1 %notrhs, %notlhs
  %tmp_14 = fcmp ogt float %result, 0.000000e+00
  %tmp_15 = and i1 %tmp_13, %tmp_14
  %result_3 = select i1 %tmp_15, float %result, float 0.000000e+00
  store float %result_3, float* %output_0_addr, align 4
  br label %.preheader4

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_1x1_3214([24576 x float]* nocapture %input_r, [576 x float]* nocapture %weight, [24 x float]* nocapture %bias, [24576 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader5
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i5 [ 0, %0 ], [ %co_10, %.loopexit.loopexit ]
  %exitcond3 = icmp eq i5 %co, -8
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_10 = add i5 %co, 1
  br i1 %exitcond3, label %3, label %.preheader5.preheader

.preheader5.preheader:                            ; preds = %.loopexit
  %tmp = zext i5 %co to i64
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co, i5 0)
  %p_shl_cast = zext i10 %tmp_s to i11
  %tmp_116 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co, i3 0)
  %p_shl1_cast = zext i8 %tmp_116 to i11
  %tmp_117 = sub i11 %p_shl_cast, %p_shl1_cast
  %bias_addr = getelementptr [24 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader5

.preheader5.loopexit:                             ; preds = %.preheader4
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %h = phi i6 [ 0, %.preheader5.preheader ], [ %h_10, %.preheader5.loopexit ]
  %exitcond2 = icmp eq i6 %h, -32
  %empty_54 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  %h_10 = add i6 %h, 1
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader4.preheader

.preheader4.preheader:                            ; preds = %.preheader5
  %tmp_cast = zext i6 %h to i11
  %tmp_118 = add i11 %tmp_cast, %p_shl_cast
  %tmp_177_cast = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_118, i5 0)
  br label %.preheader4

.preheader4:                                      ; preds = %2, %.preheader4.preheader
  %w = phi i6 [ %w_10, %2 ], [ 0, %.preheader4.preheader ]
  %exitcond1 = icmp eq i6 %w, -32
  %empty_55 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  %w_10 = add i6 %w, 1
  br i1 %exitcond1, label %.preheader5.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_88_cast = zext i6 %w to i16
  %tmp_119 = add i16 %tmp_177_cast, %tmp_88_cast
  %tmp_178_cast = zext i16 %tmp_119 to i64
  %output_addr = getelementptr [24576 x float]* %output_r, i64 0, i64 %tmp_178_cast
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum = phi float [ %sum_11, %1 ], [ 0.000000e+00, %.preheader.preheader ]
  %ci = phi i5 [ %ci_4, %1 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i5 %ci, -8
  %empty_56 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_4 = add i5 %ci, 1
  br i1 %exitcond, label %2, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_89_cast = zext i5 %ci to i11
  %tmp_120 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %ci, i5 0)
  %tmp_180_cast = zext i10 %tmp_120 to i11
  %tmp_121 = add i11 %tmp_cast, %tmp_180_cast
  %tmp_183_cast = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_121, i5 0)
  %tmp_122 = add i16 %tmp_88_cast, %tmp_183_cast
  %tmp_184_cast = zext i16 %tmp_122 to i64
  %input_addr = getelementptr [24576 x float]* %input_r, i64 0, i64 %tmp_184_cast
  %tmp_123 = add i11 %tmp_89_cast, %tmp_117
  %tmp_185_cast = sext i11 %tmp_123 to i64
  %weight_addr = getelementptr [576 x float]* %weight, i64 0, i64 %tmp_185_cast
  %weight_load = load float* %weight_addr, align 4
  %input_load = load float* %input_addr, align 4
  %tmp_90 = fmul float %weight_load, %input_load
  %sum_11 = fadd float %sum, %tmp_90
  br label %.preheader

; <label>:2                                       ; preds = %.preheader
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %result_to_int = bitcast float %result to i32
  %tmp_16 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %result_to_int, i32 23, i32 30)
  %tmp_91 = trunc i32 %result_to_int to i23
  %notlhs = icmp ne i8 %tmp_16, -1
  %notrhs = icmp eq i23 %tmp_91, 0
  %tmp_18 = or i1 %notrhs, %notlhs
  %tmp_19 = fcmp ogt float %result, 0.000000e+00
  %tmp_20 = and i1 %tmp_18, %tmp_19
  %result_4 = select i1 %tmp_20, float %result, float 0.000000e+00
  store float %result_4, float* %output_addr, align 4
  br label %.preheader4

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_1x1_16p16([2304 x float]* nocapture %weight, [48 x float]* nocapture %bias, [12288 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader5
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_11, %.loopexit.loopexit ]
  %exitcond3 = icmp eq i6 %co, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_11 = add i6 %co, 1
  br i1 %exitcond3, label %3, label %.preheader5.preheader

.preheader5.preheader:                            ; preds = %.loopexit
  %tmp = zext i6 %co to i64
  %tmp_s = call i12 @_ssdm_op_BitConcatenate.i12.i6.i6(i6 %co, i6 0)
  %p_shl_cast = zext i12 %tmp_s to i13
  %tmp_124 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co, i4 0)
  %p_shl1_cast2 = zext i10 %tmp_124 to i11
  %p_shl1_cast = zext i10 %tmp_124 to i13
  %tmp_125 = sub i13 %p_shl_cast, %p_shl1_cast
  %bias_addr = getelementptr [48 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader5

.preheader5.loopexit:                             ; preds = %.preheader4
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %h = phi i5 [ 0, %.preheader5.preheader ], [ %h_11, %.preheader5.loopexit ]
  %exitcond2 = icmp eq i5 %h, -16
  %empty_57 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %h_11 = add i5 %h, 1
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader4.preheader

.preheader4.preheader:                            ; preds = %.preheader5
  %tmp_cast = zext i5 %h to i11
  %tmp_126 = add i11 %tmp_cast, %p_shl1_cast2
  %tmp_193_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_126, i4 0)
  br label %.preheader4

.preheader4:                                      ; preds = %2, %.preheader4.preheader
  %w = phi i5 [ %w_11, %2 ], [ 0, %.preheader4.preheader ]
  %exitcond1 = icmp eq i5 %w, -16
  %empty_58 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %w_11 = add i5 %w, 1
  br i1 %exitcond1, label %.preheader5.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_91_cast = zext i5 %w to i15
  %tmp_127 = add i15 %tmp_193_cast, %tmp_91_cast
  %tmp_194_cast = zext i15 %tmp_127 to i64
  %output_addr = getelementptr [12288 x float]* %output_r, i64 0, i64 %tmp_194_cast
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum = phi float [ %sum_12, %1 ], [ 0.000000e+00, %.preheader.preheader ]
  %ci = phi i6 [ %ci_5, %1 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i6 %ci, -16
  %empty_59 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %ci_5 = add i6 %ci, 1
  br i1 %exitcond, label %2, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_92_cast = zext i6 %ci to i13
  %tmp_128 = add i13 %tmp_92_cast, %tmp_125
  %tmp_195_cast = sext i13 %tmp_128 to i64
  %weight_addr = getelementptr [2304 x float]* %weight, i64 0, i64 %tmp_195_cast
  %tmp_129 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %ci, i4 0)
  %tmp_197_cast = zext i10 %tmp_129 to i11
  %tmp_130 = add i11 %tmp_cast, %tmp_197_cast
  %tmp_200_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_130, i4 0)
  %tmp_131 = add i15 %tmp_91_cast, %tmp_200_cast
  %tmp_201_cast = zext i15 %tmp_131 to i64
  %shuffleunit0_2_outpu = getelementptr [12288 x float]* @shuffleunit0_2_outpu, i64 0, i64 %tmp_201_cast
  %weight_load = load float* %weight_addr, align 4
  %shuffleunit0_2_outpu_1 = load float* %shuffleunit0_2_outpu, align 4
  %tmp_93 = fmul float %weight_load, %shuffleunit0_2_outpu_1
  %sum_12 = fadd float %sum, %tmp_93
  br label %.preheader

; <label>:2                                       ; preds = %.preheader
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %result_to_int = bitcast float %result to i32
  %tmp_21 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %result_to_int, i32 23, i32 30)
  %tmp_92 = trunc i32 %result_to_int to i23
  %notlhs = icmp ne i8 %tmp_21, -1
  %notrhs = icmp eq i23 %tmp_92, 0
  %tmp_23 = or i1 %notrhs, %notlhs
  %tmp_24 = fcmp ogt float %result, 0.000000e+00
  %tmp_25 = and i1 %tmp_23, %tmp_24
  %result_5 = select i1 %tmp_25, float %result, float 0.000000e+00
  store float %result_5, float* %output_addr, align 4
  br label %.preheader4

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_1x1_1612([6144 x float]* nocapture %input_0, [576 x float]* nocapture %weight, [24 x float]* nocapture %bias, [6144 x float]* nocapture %output_0) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader5
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i5 [ 0, %0 ], [ %co_12, %.loopexit.loopexit ]
  %exitcond3 = icmp eq i5 %co, -8
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_12 = add i5 %co, 1
  br i1 %exitcond3, label %3, label %.preheader5.preheader

.preheader5.preheader:                            ; preds = %.loopexit
  %tmp = zext i5 %co to i64
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co, i5 0)
  %p_shl_cast = zext i10 %tmp_s to i11
  %tmp_132 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co, i3 0)
  %p_shl1_cast = zext i8 %tmp_132 to i11
  %tmp_133 = sub i11 %p_shl_cast, %p_shl1_cast
  %tmp_134 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co, i4 0)
  %tmp_206_cast = zext i9 %tmp_134 to i10
  %bias_addr = getelementptr [24 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader5

.preheader5.loopexit:                             ; preds = %.preheader4
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %h = phi i5 [ 0, %.preheader5.preheader ], [ %h_12, %.preheader5.loopexit ]
  %exitcond2 = icmp eq i5 %h, -16
  %empty_60 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %h_12 = add i5 %h, 1
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader4.preheader

.preheader4.preheader:                            ; preds = %.preheader5
  %tmp_cast = zext i5 %h to i10
  %tmp_135 = add i10 %tmp_cast, %tmp_206_cast
  %tmp_209_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_135, i4 0)
  br label %.preheader4

.preheader4:                                      ; preds = %2, %.preheader4.preheader
  %w = phi i5 [ %w_12, %2 ], [ 0, %.preheader4.preheader ]
  %exitcond1 = icmp eq i5 %w, -16
  %empty_61 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %w_12 = add i5 %w, 1
  br i1 %exitcond1, label %.preheader5.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_94_cast = zext i5 %w to i14
  %tmp_136 = add i14 %tmp_209_cast, %tmp_94_cast
  %tmp_210_cast = zext i14 %tmp_136 to i64
  %output_0_addr = getelementptr [6144 x float]* %output_0, i64 0, i64 %tmp_210_cast
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum = phi float [ %sum_13, %1 ], [ 0.000000e+00, %.preheader.preheader ]
  %ci = phi i5 [ %ci_6, %1 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i5 %ci, -8
  %empty_62 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_6 = add i5 %ci, 1
  br i1 %exitcond, label %2, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_95_cast = zext i5 %ci to i11
  %tmp_137 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %ci, i4 0)
  %tmp_212_cast = zext i9 %tmp_137 to i10
  %tmp_138 = add i10 %tmp_cast, %tmp_212_cast
  %tmp_215_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_138, i4 0)
  %tmp_139 = add i14 %tmp_94_cast, %tmp_215_cast
  %tmp_216_cast = zext i14 %tmp_139 to i64
  %input_0_addr = getelementptr [6144 x float]* %input_0, i64 0, i64 %tmp_216_cast
  %tmp_140 = add i11 %tmp_95_cast, %tmp_133
  %tmp_217_cast = sext i11 %tmp_140 to i64
  %weight_addr = getelementptr [576 x float]* %weight, i64 0, i64 %tmp_217_cast
  %weight_load = load float* %weight_addr, align 4
  %input_0_load = load float* %input_0_addr, align 4
  %tmp_96 = fmul float %weight_load, %input_0_load
  %sum_13 = fadd float %sum, %tmp_96
  br label %.preheader

; <label>:2                                       ; preds = %.preheader
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %result_to_int = bitcast float %result to i32
  %tmp_26 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %result_to_int, i32 23, i32 30)
  %tmp_93 = trunc i32 %result_to_int to i23
  %notlhs = icmp ne i8 %tmp_26, -1
  %notrhs = icmp eq i23 %tmp_93, 0
  %tmp_28 = or i1 %notrhs, %notlhs
  %tmp_29 = fcmp ogt float %result, 0.000000e+00
  %tmp_30 = and i1 %tmp_28, %tmp_29
  %result_6 = select i1 %tmp_30, float %result, float 0.000000e+00
  store float %result_6, float* %output_0_addr, align 4
  br label %.preheader4

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_9621([1536 x float]* nocapture %left_0, [1536 x float]* nocapture %right_0, [3072 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i8 [ 0, %0 ], [ %co_13, %.loopexit.loopexit ]
  %tmp_94 = trunc i8 %co to i1
  %exitcond2 = icmp eq i8 %co, -64
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 192, i64 192, i64 192)
  %co_13 = add i8 1, %co
  br i1 %exitcond2, label %5, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i7 @_ssdm_op_PartSelect.i7.i8.i32.i32(i8 %co, i32 1, i32 7)
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp, i2 0)
  %tmp_219_cast = zext i9 %tmp_s to i10
  %tmp_141 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %co, i2 0)
  %tmp_221_cast = zext i10 %tmp_141 to i11
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i3 [ 0, %.preheader3.preheader ], [ %h_13, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i3 %h, -4
  %empty_63 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %h_13 = add i3 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast2 = zext i3 %h to i11
  %tmp_cast = zext i3 %h to i10
  %tmp_142 = add i10 %tmp_cast, %tmp_219_cast
  %tmp_224_cast = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_142, i2 0)
  %tmp_143 = add i11 %tmp_cast2, %tmp_221_cast
  %tmp_227_cast = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_143, i2 0)
  br label %.preheader

.preheader:                                       ; preds = %4, %.preheader.preheader
  %w = phi i3 [ %w_13, %4 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i3 %w, -4
  %empty_64 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %w_13 = add i3 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_97_cast1 = zext i3 %w to i13
  %tmp_97_cast = zext i3 %w to i12
  %tmp_144 = add i12 %tmp_224_cast, %tmp_97_cast
  %tmp_228_cast = zext i12 %tmp_144 to i64
  %left_0_addr = getelementptr [1536 x float]* %left_0, i64 0, i64 %tmp_228_cast
  %right_0_addr = getelementptr [1536 x float]* %right_0, i64 0, i64 %tmp_228_cast
  %tmp_145 = add i13 %tmp_227_cast, %tmp_97_cast1
  %tmp_229_cast = zext i13 %tmp_145 to i64
  %output_addr = getelementptr [3072 x float]* %output_r, i64 0, i64 %tmp_229_cast
  br i1 %tmp_94, label %3, label %2

; <label>:2                                       ; preds = %1
  %left_0_load = load float* %left_0_addr, align 4
  br label %4

; <label>:3                                       ; preds = %1
  %right_0_load = load float* %right_0_addr, align 4
  br label %4

; <label>:4                                       ; preds = %3, %2
  %storemerge = phi float [ %left_0_load, %2 ], [ %right_0_load, %3 ]
  store float %storemerge, float* %output_addr, align 4
  br label %.preheader

; <label>:5                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_4811([3072 x float]* nocapture %left_0, [3072 x float]* nocapture %right_0, [6144 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_14, %.loopexit.loopexit ]
  %tmp_95 = trunc i7 %co to i1
  %exitcond2 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_14 = add i7 1, %co
  br i1 %exitcond2, label %5, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i6 @_ssdm_op_PartSelect.i6.i7.i32.i32(i7 %co, i32 1, i32 6)
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %tmp, i3 0)
  %tmp_231_cast = zext i9 %tmp_s to i10
  %tmp_146 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0)
  %tmp_233_cast = zext i10 %tmp_146 to i11
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i4 [ 0, %.preheader3.preheader ], [ %h_14, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i4 %h, -8
  %empty_65 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %h_14 = add i4 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast2 = zext i4 %h to i11
  %tmp_cast = zext i4 %h to i10
  %tmp_147 = add i10 %tmp_cast, %tmp_231_cast
  %tmp_236_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_147, i3 0)
  %tmp_148 = add i11 %tmp_cast2, %tmp_233_cast
  %tmp_239_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_148, i3 0)
  br label %.preheader

.preheader:                                       ; preds = %4, %.preheader.preheader
  %w = phi i4 [ %w_14, %4 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i4 %w, -8
  %empty_66 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %w_14 = add i4 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_98_cast1 = zext i4 %w to i14
  %tmp_98_cast = zext i4 %w to i13
  %tmp_149 = add i13 %tmp_236_cast, %tmp_98_cast
  %tmp_240_cast = zext i13 %tmp_149 to i64
  %left_0_addr = getelementptr [3072 x float]* %left_0, i64 0, i64 %tmp_240_cast
  %right_0_addr = getelementptr [3072 x float]* %right_0, i64 0, i64 %tmp_240_cast
  %tmp_150 = add i14 %tmp_239_cast, %tmp_98_cast1
  %tmp_241_cast = zext i14 %tmp_150 to i64
  %output_addr = getelementptr [6144 x float]* %output_r, i64 0, i64 %tmp_241_cast
  br i1 %tmp_95, label %3, label %2

; <label>:2                                       ; preds = %1
  %left_0_load = load float* %left_0_addr, align 4
  br label %4

; <label>:3                                       ; preds = %1
  %right_0_load = load float* %right_0_addr, align 4
  br label %4

; <label>:4                                       ; preds = %3, %2
  %storemerge = phi float [ %left_0_load, %2 ], [ %right_0_load, %3 ]
  store float %storemerge, float* %output_addr, align 4
  br label %.preheader

; <label>:5                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_2415([6144 x float]* nocapture %left_0, [6144 x float]* nocapture %right_0, [12288 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_15, %.loopexit.loopexit ]
  %tmp_96 = trunc i6 %co to i1
  %exitcond2 = icmp eq i6 %co, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_15 = add i6 1, %co
  br i1 %exitcond2, label %5, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i5 @_ssdm_op_PartSelect.i5.i6.i32.i32(i6 %co, i32 1, i32 5)
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %tmp, i4 0)
  %tmp_243_cast = zext i9 %tmp_s to i10
  %tmp_151 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co, i4 0)
  %tmp_245_cast = zext i10 %tmp_151 to i11
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i5 [ 0, %.preheader3.preheader ], [ %h_15, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i5 %h, -16
  %empty_67 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %h_15 = add i5 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast2 = zext i5 %h to i11
  %tmp_cast = zext i5 %h to i10
  %tmp_152 = add i10 %tmp_cast, %tmp_243_cast
  %tmp_248_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_152, i4 0)
  %tmp_153 = add i11 %tmp_cast2, %tmp_245_cast
  %tmp_251_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_153, i4 0)
  br label %.preheader

.preheader:                                       ; preds = %4, %.preheader.preheader
  %w = phi i5 [ %w_15, %4 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i5 %w, -16
  %empty_68 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %w_15 = add i5 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_99_cast1 = zext i5 %w to i15
  %tmp_99_cast = zext i5 %w to i14
  %tmp_154 = add i14 %tmp_248_cast, %tmp_99_cast
  %tmp_252_cast = zext i14 %tmp_154 to i64
  %left_0_addr = getelementptr [6144 x float]* %left_0, i64 0, i64 %tmp_252_cast
  %right_0_addr = getelementptr [6144 x float]* %right_0, i64 0, i64 %tmp_252_cast
  %tmp_155 = add i15 %tmp_251_cast, %tmp_99_cast1
  %tmp_253_cast = zext i15 %tmp_155 to i64
  %output_addr = getelementptr [12288 x float]* %output_r, i64 0, i64 %tmp_253_cast
  br i1 %tmp_96, label %3, label %2

; <label>:2                                       ; preds = %1
  %left_0_load = load float* %left_0_addr, align 4
  br label %4

; <label>:3                                       ; preds = %1
  %right_0_load = load float* %right_0_addr, align 4
  br label %4

; <label>:4                                       ; preds = %3, %2
  %storemerge = phi float [ %left_0_load, %2 ], [ %right_0_load, %3 ]
  store float %storemerge, float* %output_addr, align 4
  br label %.preheader

; <label>:5                                       ; preds = %.loopexit
  ret void
}

declare i8 @llvm.part.select.i8(i8, i32, i32) nounwind readnone

declare i7 @llvm.part.select.i7(i7, i32, i32) nounwind readnone

declare i6 @llvm.part.select.i6(i6, i32, i32) nounwind readnone

declare i5 @llvm.part.select.i5(i5, i32, i32) nounwind readnone

declare i4 @llvm.part.select.i4(i4, i32, i32) nounwind readnone

declare i32 @llvm.part.select.i32(i32, i32, i32) nounwind readnone

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

define internal fastcc void @conv_last([98304 x float]* nocapture %weight, [512 x float]* nocapture %bias, [8192 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader5
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i10 [ 0, %0 ], [ %co_16, %.loopexit.loopexit ]
  %exitcond3 = icmp eq i10 %co, -512
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512)
  %co_16 = add i10 %co, 1
  br i1 %exitcond3, label %3, label %.preheader5.preheader

.preheader5.preheader:                            ; preds = %.loopexit
  %tmp = zext i10 %co to i64
  %tmp_s = call i18 @_ssdm_op_BitConcatenate.i18.i10.i8(i10 %co, i8 0)
  %tmp_156 = call i16 @_ssdm_op_BitConcatenate.i16.i10.i6(i10 %co, i6 0)
  %p_shl1_cast = zext i16 %tmp_156 to i18
  %tmp_157 = sub i18 %tmp_s, %p_shl1_cast
  %tmp_158 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %co, i2 0)
  %tmp_258_cast = zext i12 %tmp_158 to i13
  %bias_addr = getelementptr [512 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader5

.preheader5.loopexit:                             ; preds = %.preheader4
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %h = phi i3 [ 0, %.preheader5.preheader ], [ %h_16, %.preheader5.loopexit ]
  %exitcond2 = icmp eq i3 %h, -4
  %empty_69 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %h_16 = add i3 %h, 1
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader4.preheader

.preheader4.preheader:                            ; preds = %.preheader5
  %tmp_cast3 = zext i3 %h to i11
  %tmp_cast = zext i3 %h to i13
  %tmp_159 = add i13 %tmp_cast, %tmp_258_cast
  %tmp_261_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_159, i2 0)
  br label %.preheader4

.preheader4:                                      ; preds = %2, %.preheader4.preheader
  %w = phi i3 [ %w_16, %2 ], [ 0, %.preheader4.preheader ]
  %exitcond1 = icmp eq i3 %w, -4
  %empty_70 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %w_16 = add i3 %w, 1
  br i1 %exitcond1, label %.preheader5.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_100_cast2 = zext i3 %w to i13
  %tmp_100_cast = zext i3 %w to i15
  %tmp_160 = add i15 %tmp_261_cast, %tmp_100_cast
  %tmp_262_cast = zext i15 %tmp_160 to i64
  %output_addr = getelementptr [8192 x float]* %output_r, i64 0, i64 %tmp_262_cast
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum = phi float [ %sum_14, %1 ], [ 0.000000e+00, %.preheader.preheader ]
  %ci = phi i8 [ %ci_7, %1 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i8 %ci, -64
  %empty_71 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 192, i64 192, i64 192)
  %ci_7 = add i8 %ci, 1
  br i1 %exitcond, label %2, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_101_cast = zext i8 %ci to i18
  %tmp_161 = add i18 %tmp_101_cast, %tmp_157
  %tmp_263_cast = sext i18 %tmp_161 to i64
  %weight_addr = getelementptr [98304 x float]* %weight, i64 0, i64 %tmp_263_cast
  %tmp_162 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %ci, i2 0)
  %tmp_265_cast = zext i10 %tmp_162 to i11
  %tmp_163 = add i11 %tmp_cast3, %tmp_265_cast
  %tmp_268_cast = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_163, i2 0)
  %tmp_164 = add i13 %tmp_100_cast2, %tmp_268_cast
  %tmp_269_cast = zext i13 %tmp_164 to i64
  %shuffleunit2_2_outpu = getelementptr [3072 x float]* @shuffleunit2_2_outpu, i64 0, i64 %tmp_269_cast
  %weight_load = load float* %weight_addr, align 4
  %shuffleunit2_2_outpu_1 = load float* %shuffleunit2_2_outpu, align 4
  %tmp_102 = fmul float %weight_load, %shuffleunit2_2_outpu_1
  %sum_14 = fadd float %sum, %tmp_102
  br label %.preheader

; <label>:2                                       ; preds = %.preheader
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %result_to_int = bitcast float %result to i32
  %tmp_31 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %result_to_int, i32 23, i32 30)
  %tmp_97 = trunc i32 %result_to_int to i23
  %notlhs = icmp ne i8 %tmp_31, -1
  %notrhs = icmp eq i23 %tmp_97, 0
  %tmp_33 = or i1 %notrhs, %notlhs
  %tmp_34 = fcmp ogt float %result, 0.000000e+00
  %tmp_35 = and i1 %tmp_33, %tmp_34
  %result_7 = select i1 %tmp_35, float %result, float 0.000000e+00
  store float %result_7, float* %output_addr, align 4
  br label %.preheader4

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @conv1([3072 x float]* nocapture %input_r, [648 x float]* nocapture %weight, [24 x float]* nocapture %bias) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader9
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i5 [ 0, %0 ], [ %co_17, %.loopexit.loopexit ]
  %exitcond5 = icmp eq i5 %co, -8
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_17 = add i5 %co, 1
  br i1 %exitcond5, label %2, label %.preheader9.preheader

.preheader9.preheader:                            ; preds = %.loopexit
  %tmp = zext i5 %co to i64
  %tmp_cast = zext i5 %co to i8
  %tmp_s = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co, i2 0)
  %p_shl_cast = zext i7 %tmp_s to i8
  %tmp_165 = sub i8 %p_shl_cast, %tmp_cast
  %tmp_271_cast = sext i8 %tmp_165 to i9
  %tmp_166 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co, i5 0)
  %tmp_273_cast = zext i10 %tmp_166 to i11
  %bias_addr = getelementptr [24 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader9

.preheader9.loopexit:                             ; preds = %.preheader8
  br label %.preheader9

.preheader9:                                      ; preds = %.preheader9.loopexit, %.preheader9.preheader
  %h = phi i6 [ 0, %.preheader9.preheader ], [ %h_17, %.preheader9.loopexit ]
  %h_cast = zext i6 %h to i7
  %exitcond4 = icmp eq i6 %h, -32
  %empty_72 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  %h_17 = add i6 %h, 1
  br i1 %exitcond4, label %.loopexit.loopexit, label %.preheader8.preheader

.preheader8.preheader:                            ; preds = %.preheader9
  %tmp_cast_73 = zext i6 %h to i11
  %tmp_167 = add i11 %tmp_cast_73, %tmp_273_cast
  %tmp_276_cast = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_167, i5 0)
  br label %.preheader8

.preheader8:                                      ; preds = %1, %.preheader8.preheader
  %w = phi i6 [ %w_17, %1 ], [ 0, %.preheader8.preheader ]
  %w_cast = zext i6 %w to i7
  %exitcond3 = icmp eq i6 %w, -32
  %empty_74 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  %w_17 = add i6 %w, 1
  br i1 %exitcond3, label %.preheader9.loopexit, label %.preheader7.preheader

.preheader7.preheader:                            ; preds = %.preheader8
  %tmp_103 = sub i6 0, %w
  br label %.preheader7

.preheader7.loopexit:                             ; preds = %.preheader6
  br label %.preheader7

.preheader7:                                      ; preds = %.preheader7.loopexit, %.preheader7.preheader
  %sum = phi float [ 0.000000e+00, %.preheader7.preheader ], [ %sum_1, %.preheader7.loopexit ]
  %ci = phi i2 [ 0, %.preheader7.preheader ], [ %ci_8, %.preheader7.loopexit ]
  %exitcond2 = icmp eq i2 %ci, -1
  %empty_75 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %ci_8 = add i2 %ci, 1
  br i1 %exitcond2, label %1, label %.preheader6.preheader

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_105_cast = zext i2 %ci to i9
  %tmp_169 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %ci, i5 0)
  %tmp_279_cast = zext i7 %tmp_169 to i8
  %tmp_170 = add i9 %tmp_105_cast, %tmp_271_cast
  %tmp_280_cast = sext i9 %tmp_170 to i64
  %tmp_99 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_170, i2 0)
  %p_shl1 = sext i11 %tmp_99 to i64
  %tmp_171 = sub i64 %p_shl1, %tmp_280_cast
  br label %.preheader6

.preheader6.loopexit:                             ; preds = %.preheader
  br label %.preheader6

.preheader6:                                      ; preds = %.preheader6.loopexit, %.preheader6.preheader
  %sum_1 = phi float [ %sum, %.preheader6.preheader ], [ %sum_2, %.preheader6.loopexit ]
  %m = phi i2 [ 0, %.preheader6.preheader ], [ %m_7, %.preheader6.loopexit ]
  %m_cast8_cast = zext i2 %m to i3
  %exitcond1 = icmp eq i2 %m, -1
  %empty_76 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_7 = add i2 %m, 1
  br i1 %exitcond1, label %.preheader7.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader6
  %tmp_106 = zext i2 %m to i64
  %tmp_172 = add i64 %tmp_106, %tmp_171
  %tmp_100 = trunc i64 %tmp_172 to i11
  %tmp_101 = trunc i64 %tmp_172 to i9
  %p_shl2_cast = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_101, i2 0)
  %tmp_173 = sub i11 %p_shl2_cast, %tmp_100
  %tmp_107 = sub i3 0, %m_cast8_cast
  %tmp_107_cast = sext i3 %tmp_107 to i6
  %tmp_108 = icmp ne i6 %h, %tmp_107_cast
  %tmp1 = add i2 -1, %m
  %tmp1_cast = sext i2 %tmp1 to i7
  %tmp_109 = add i7 %tmp1_cast, %h_cast
  %tmp_110_cast = sext i7 %tmp_109 to i8
  %tmp_174 = add i8 %tmp_110_cast, %tmp_279_cast
  %tmp_288_cast = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_174, i5 0)
  %tmp_102 = call i2 @_ssdm_op_PartSelect.i2.i7.i32.i32(i7 %tmp_109, i32 5, i32 6)
  %icmp = icmp ne i2 %tmp_102, 1
  br label %.preheader

.preheader:                                       ; preds = %_ifconv, %.preheader.preheader
  %sum_2 = phi float [ %sum_15, %_ifconv ], [ %sum_1, %.preheader.preheader ]
  %n = phi i2 [ %n_7, %_ifconv ], [ 0, %.preheader.preheader ]
  %n_cast6 = zext i2 %n to i6
  %exitcond = icmp eq i2 %n, -1
  %empty_77 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_7 = add i2 %n, 1
  br i1 %exitcond, label %.preheader6.loopexit, label %_ifconv

_ifconv:                                          ; preds = %.preheader
  %tmp_111_cast = zext i2 %n to i11
  %tmp_175 = add i11 %tmp_173, %tmp_111_cast
  %tmp_289_cast = zext i11 %tmp_175 to i64
  %weight_addr = getelementptr [648 x float]* %weight, i64 0, i64 %tmp_289_cast
  %weight_load = load float* %weight_addr, align 4
  %tmp2 = add i2 %n, -1
  %tmp2_cast = sext i2 %tmp2 to i7
  %tmp_112 = add i7 %w_cast, %tmp2_cast
  %tmp_104 = call i2 @_ssdm_op_PartSelect.i2.i7.i32.i32(i7 %tmp_112, i32 5, i32 6)
  %icmp5 = icmp ne i2 %tmp_104, 1
  %tmp_114_cast = sext i7 %tmp_112 to i13
  %tmp_176 = add i13 %tmp_288_cast, %tmp_114_cast
  %tmp_290_cast = zext i13 %tmp_176 to i64
  %input_addr = getelementptr [3072 x float]* %input_r, i64 0, i64 %tmp_290_cast
  %input_load = load float* %input_addr, align 4
  %notlhs = icmp ne i6 %n_cast6, %tmp_103
  %tmp3 = and i1 %icmp, %notlhs
  %tmp4 = and i1 %tmp_108, %icmp5
  %sel_tmp2 = and i1 %tmp4, %tmp3
  %tmp_115 = select i1 %sel_tmp2, float %input_load, float 0.000000e+00
  %tmp_116 = fmul float %weight_load, %tmp_115
  %sum_15 = fadd float %sum_2, %tmp_116
  br label %.preheader

; <label>:1                                       ; preds = %.preheader7
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %result_to_int = bitcast float %result to i32
  %tmp_36 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %result_to_int, i32 23, i32 30)
  %tmp_98 = trunc i32 %result_to_int to i23
  %notlhs1 = icmp ne i8 %tmp_36, -1
  %notrhs1 = icmp eq i23 %tmp_98, 0
  %tmp_38 = or i1 %notrhs1, %notlhs1
  %tmp_39 = fcmp ogt float %result, 0.000000e+00
  %tmp_40 = and i1 %tmp_38, %tmp_39
  %result_8 = select i1 %tmp_40, float %result, float 0.000000e+00
  %tmp_104_cast = zext i6 %w to i16
  %tmp_168 = add i16 %tmp_276_cast, %tmp_104_cast
  %tmp_277_cast = zext i16 %tmp_168 to i64
  %conv1_output_addr = getelementptr [24576 x float]* @conv1_output, i64 0, i64 %tmp_277_cast
  store float %result_8, float* %conv1_output_addr, align 4
  br label %.preheader8

; <label>:2                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @avgpool([512 x float]* nocapture %output_r) {
  br label %1

; <label>:1                                       ; preds = %3, %0
  %co = phi i10 [ 0, %0 ], [ %co_18, %3 ]
  %exitcond2 = icmp eq i10 %co, -512
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512)
  %co_18 = add i10 %co, 1
  br i1 %exitcond2, label %4, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %1
  %tmp = zext i10 %co to i64
  %tmp_177 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %co, i2 0)
  %tmp_292_cast = zext i12 %tmp_177 to i13
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %sum = phi float [ 0.000000e+00, %.preheader3.preheader ], [ %sum_1, %.preheader3.loopexit ]
  %h = phi i3 [ 0, %.preheader3.preheader ], [ %h_18, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i3 %h, -4
  %empty_78 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %h_18 = add i3 %h, 1
  br i1 %exitcond1, label %3, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_117_cast = zext i3 %h to i13
  %tmp_178 = add i13 %tmp_117_cast, %tmp_292_cast
  %tmp_295_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_178, i2 0)
  br label %.preheader

.preheader:                                       ; preds = %2, %.preheader.preheader
  %sum_1 = phi float [ %sum_16, %2 ], [ %sum, %.preheader.preheader ]
  %w = phi i3 [ %w_18, %2 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i3 %w, -4
  %empty_79 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %w_18 = add i3 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %2

; <label>:2                                       ; preds = %.preheader
  %tmp_118_cast = zext i3 %w to i15
  %tmp_179 = add i15 %tmp_295_cast, %tmp_118_cast
  %tmp_296_cast = zext i15 %tmp_179 to i64
  %conv_last_output_add = getelementptr [8192 x float]* @conv_last_output, i64 0, i64 %tmp_296_cast
  %conv_last_output_loa = load float* %conv_last_output_add, align 4
  %sum_16 = fadd float %sum_1, %conv_last_output_loa
  br label %.preheader

; <label>:3                                       ; preds = %.preheader3
  %tmp_s = fmul float %sum, 6.250000e-02
  %output_addr = getelementptr [512 x float]* %output_r, i64 0, i64 %tmp
  store float %tmp_s, float* %output_addr, align 4
  br label %1

; <label>:4                                       ; preds = %1
  ret void
}

define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecLoopName(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

declare i9 @_ssdm_op_PartSelect.i9.i64.i32.i32(i64, i32, i32) nounwind readnone

declare i9 @_ssdm_op_PartSelect.i9.i36.i32.i32(i36, i32, i32) nounwind readnone

declare i9 @_ssdm_op_PartSelect.i9.i11.i32.i32(i11, i32, i32) nounwind readnone

declare i8 @_ssdm_op_PartSelect.i8.i36.i32.i32(i36, i32, i32) nounwind readnone

define weak i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2)
  %empty_80 = trunc i32 %empty to i8
  ret i8 %empty_80
}

declare i8 @_ssdm_op_PartSelect.i8.i10.i32.i32(i10, i32, i32) nounwind readnone

declare i7 @_ssdm_op_PartSelect.i7.i9.i32.i32(i9, i32, i32) nounwind readnone

define weak i7 @_ssdm_op_PartSelect.i7.i8.i32.i32(i8, i32, i32) nounwind readnone {
entry:
  %empty = call i8 @llvm.part.select.i8(i8 %0, i32 %1, i32 %2)
  %empty_81 = trunc i8 %empty to i7
  ret i7 %empty_81
}

define weak i6 @_ssdm_op_PartSelect.i6.i7.i32.i32(i7, i32, i32) nounwind readnone {
entry:
  %empty = call i7 @llvm.part.select.i7(i7 %0, i32 %1, i32 %2)
  %empty_82 = trunc i7 %empty to i6
  ret i6 %empty_82
}

define weak i5 @_ssdm_op_PartSelect.i5.i6.i32.i32(i6, i32, i32) nounwind readnone {
entry:
  %empty = call i6 @llvm.part.select.i6(i6 %0, i32 %1, i32 %2)
  %empty_83 = trunc i6 %empty to i5
  ret i5 %empty_83
}

define weak i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5, i32, i32) nounwind readnone {
entry:
  %empty = call i5 @llvm.part.select.i5(i5 %0, i32 %1, i32 %2)
  %empty_84 = trunc i5 %empty to i4
  ret i4 %empty_84
}

define weak i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5, i32, i32) nounwind readnone {
entry:
  %empty = call i5 @llvm.part.select.i5(i5 %0, i32 %1, i32 %2)
  %empty_85 = trunc i5 %empty to i3
  ret i3 %empty_85
}

declare i3 @_ssdm_op_PartSelect.i3.i4.i32.i32(i4, i32, i32) nounwind readnone

declare i23 @_ssdm_op_PartSelect.i23.i32.i32.i32(i32, i32, i32) nounwind readnone

define weak i2 @_ssdm_op_PartSelect.i2.i7.i32.i32(i7, i32, i32) nounwind readnone {
entry:
  %empty = call i7 @llvm.part.select.i7(i7 %0, i32 %1, i32 %2)
  %empty_86 = trunc i7 %empty to i2
  ret i2 %empty_86
}

define weak i2 @_ssdm_op_PartSelect.i2.i6.i32.i32(i6, i32, i32) nounwind readnone {
entry:
  %empty = call i6 @llvm.part.select.i6(i6 %0, i32 %1, i32 %2)
  %empty_87 = trunc i6 %empty to i2
  ret i2 %empty_87
}

define weak i2 @_ssdm_op_PartSelect.i2.i5.i32.i32(i5, i32, i32) nounwind readnone {
entry:
  %empty = call i5 @llvm.part.select.i5(i5 %0, i32 %1, i32 %2)
  %empty_88 = trunc i5 %empty to i2
  ret i2 %empty_88
}

define weak i2 @_ssdm_op_PartSelect.i2.i4.i32.i32(i4, i32, i32) nounwind readnone {
entry:
  %empty = call i4 @llvm.part.select.i4(i4 %0, i32 %1, i32 %2)
  %empty_89 = trunc i4 %empty to i2
  ret i2 %empty_89
}

declare i2 @_ssdm_op_PartSelect.i2.i3.i32.i32(i3, i32, i32) nounwind readnone

declare i13 @_ssdm_op_PartSelect.i13.i15.i32.i32(i15, i32, i32) nounwind readnone

declare i13 @_ssdm_op_PartSelect.i13.i14.i32.i32(i14, i32, i32) nounwind readnone

declare i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64, i32, i32) nounwind readnone

declare i11 @_ssdm_op_PartSelect.i11.i36.i32.i32(i36, i32, i32) nounwind readnone

declare i10 @_ssdm_op_PartSelect.i10.i36.i32.i32(i36, i32, i32) nounwind readnone

declare i1 @_ssdm_op_PartSelect.i1.i8.i32.i32(i8, i32, i32) nounwind readnone

declare i1 @_ssdm_op_PartSelect.i1.i7.i32.i32(i7, i32, i32) nounwind readnone

declare i1 @_ssdm_op_PartSelect.i1.i6.i32.i32(i6, i32, i32) nounwind readnone

declare i1 @_ssdm_op_PartSelect.i1.i5.i32.i32(i5, i32, i32) nounwind readnone

declare i1 @_ssdm_op_PartSelect.i1.i2.i32.i32(i2, i32, i32) nounwind readnone

define weak i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7, i2) nounwind readnone {
entry:
  %empty = zext i7 %0 to i9
  %empty_90 = zext i2 %1 to i9
  %empty_91 = shl i9 %empty, 2
  %empty_92 = or i9 %empty_91, %empty_90
  ret i9 %empty_92
}

define weak i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6, i3) nounwind readnone {
entry:
  %empty = zext i6 %0 to i9
  %empty_93 = zext i3 %1 to i9
  %empty_94 = shl i9 %empty, 3
  %empty_95 = or i9 %empty_94, %empty_93
  ret i9 %empty_95
}

define weak i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5, i4) nounwind readnone {
entry:
  %empty = zext i5 %0 to i9
  %empty_96 = zext i4 %1 to i9
  %empty_97 = shl i9 %empty, 4
  %empty_98 = or i9 %empty_97, %empty_96
  ret i9 %empty_98
}

define weak i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4, i5) nounwind readnone {
entry:
  %empty = zext i4 %0 to i9
  %empty_99 = zext i5 %1 to i9
  %empty_100 = shl i9 %empty, 5
  %empty_101 = or i9 %empty_100, %empty_99
  ret i9 %empty_101
}

define weak i9 @_ssdm_op_BitConcatenate.i9.i1.i5.i3(i1, i5, i3) nounwind readnone {
entry:
  %empty = zext i5 %1 to i8
  %empty_102 = zext i3 %2 to i8
  %empty_103 = shl i8 %empty, 3
  %empty_104 = or i8 %empty_103, %empty_102
  %empty_105 = zext i1 %0 to i9
  %empty_106 = zext i8 %empty_104 to i9
  %empty_107 = shl i9 %empty_105, 8
  %empty_108 = or i9 %empty_107, %empty_106
  ret i9 %empty_108
}

define weak i8 @_ssdm_op_BitConcatenate.i8.i6.i2(i6, i2) nounwind readnone {
entry:
  %empty = zext i6 %0 to i8
  %empty_109 = zext i2 %1 to i8
  %empty_110 = shl i8 %empty, 2
  %empty_111 = or i8 %empty_110, %empty_109
  ret i8 %empty_111
}

define weak i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5, i3) nounwind readnone {
entry:
  %empty = zext i5 %0 to i8
  %empty_112 = zext i3 %1 to i8
  %empty_113 = shl i8 %empty, 3
  %empty_114 = or i8 %empty_113, %empty_112
  ret i8 %empty_114
}

define weak i8 @_ssdm_op_BitConcatenate.i8.i1.i5.i2(i1, i5, i2) nounwind readnone {
entry:
  %empty = zext i5 %1 to i7
  %empty_115 = zext i2 %2 to i7
  %empty_116 = shl i7 %empty, 2
  %empty_117 = or i7 %empty_116, %empty_115
  %empty_118 = zext i1 %0 to i8
  %empty_119 = zext i7 %empty_117 to i8
  %empty_120 = shl i8 %empty_118, 7
  %empty_121 = or i8 %empty_120, %empty_119
  ret i8 %empty_121
}

define weak i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5, i2) nounwind readnone {
entry:
  %empty = zext i5 %0 to i7
  %empty_122 = zext i2 %1 to i7
  %empty_123 = shl i7 %empty, 2
  %empty_124 = or i7 %empty_123, %empty_122
  ret i7 %empty_124
}

define weak i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4, i3) nounwind readnone {
entry:
  %empty = zext i4 %0 to i7
  %empty_125 = zext i3 %1 to i7
  %empty_126 = shl i7 %empty, 3
  %empty_127 = or i7 %empty_126, %empty_125
  ret i7 %empty_127
}

define weak i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2, i5) nounwind readnone {
entry:
  %empty = zext i2 %0 to i7
  %empty_128 = zext i5 %1 to i7
  %empty_129 = shl i7 %empty, 5
  %empty_130 = or i7 %empty_129, %empty_128
  ret i7 %empty_130
}

define weak i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2, i4) nounwind readnone {
entry:
  %empty = zext i2 %0 to i6
  %empty_131 = zext i4 %1 to i6
  %empty_132 = shl i6 %empty, 4
  %empty_133 = or i6 %empty_132, %empty_131
  ret i6 %empty_133
}

define weak i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1, i5) nounwind readnone {
entry:
  %empty = zext i1 %0 to i6
  %empty_134 = zext i5 %1 to i6
  %empty_135 = shl i6 %empty, 5
  %empty_136 = or i6 %empty_135, %empty_134
  ret i6 %empty_136
}

declare i5 @_ssdm_op_BitConcatenate.i5.i4.i1(i4, i1) nounwind readnone

define weak i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2, i3) nounwind readnone {
entry:
  %empty = zext i2 %0 to i5
  %empty_137 = zext i3 %1 to i5
  %empty_138 = shl i5 %empty, 3
  %empty_139 = or i5 %empty_138, %empty_137
  ret i5 %empty_139
}

declare i4 @_ssdm_op_BitConcatenate.i4.i3.i1(i3, i1) nounwind readnone

define weak i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2, i2) nounwind readnone {
entry:
  %empty = zext i2 %0 to i4
  %empty_140 = zext i2 %1 to i4
  %empty_141 = shl i4 %empty, 2
  %empty_142 = or i4 %empty_141, %empty_140
  ret i4 %empty_142
}

define weak i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1, i3) nounwind readnone {
entry:
  %empty = zext i1 %0 to i4
  %empty_143 = zext i3 %1 to i4
  %empty_144 = shl i4 %empty, 3
  %empty_145 = or i4 %empty_144, %empty_143
  ret i4 %empty_145
}

declare i3 @_ssdm_op_BitConcatenate.i3.i2.i1(i2, i1) nounwind readnone

define weak i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13, i5) nounwind readnone {
entry:
  %empty = zext i13 %0 to i18
  %empty_146 = zext i5 %1 to i18
  %empty_147 = shl i18 %empty, 5
  %empty_148 = or i18 %empty_147, %empty_146
  ret i18 %empty_148
}

define weak i18 @_ssdm_op_BitConcatenate.i18.i10.i8(i10, i8) nounwind readnone {
entry:
  %empty = zext i10 %0 to i18
  %empty_149 = zext i8 %1 to i18
  %empty_150 = shl i18 %empty, 8
  %empty_151 = or i18 %empty_150, %empty_149
  ret i18 %empty_151
}

define weak i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12, i5) nounwind readnone {
entry:
  %empty = zext i12 %0 to i17
  %empty_152 = zext i5 %1 to i17
  %empty_153 = shl i17 %empty, 5
  %empty_154 = or i17 %empty_153, %empty_152
  ret i17 %empty_154
}

define weak i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13, i3) nounwind readnone {
entry:
  %empty = zext i13 %0 to i16
  %empty_155 = zext i3 %1 to i16
  %empty_156 = shl i16 %empty, 3
  %empty_157 = or i16 %empty_156, %empty_155
  ret i16 %empty_157
}

define weak i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11, i5) nounwind readnone {
entry:
  %empty = zext i11 %0 to i16
  %empty_158 = zext i5 %1 to i16
  %empty_159 = shl i16 %empty, 5
  %empty_160 = or i16 %empty_159, %empty_158
  ret i16 %empty_160
}

define weak i16 @_ssdm_op_BitConcatenate.i16.i10.i6(i10, i6) nounwind readnone {
entry:
  %empty = zext i10 %0 to i16
  %empty_161 = zext i6 %1 to i16
  %empty_162 = shl i16 %empty, 6
  %empty_163 = or i16 %empty_162, %empty_161
  ret i16 %empty_163
}

define weak i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8, i7) nounwind readnone {
entry:
  %empty = zext i8 %0 to i15
  %empty_164 = zext i7 %1 to i15
  %empty_165 = shl i15 %empty, 7
  %empty_166 = or i15 %empty_165, %empty_164
  ret i15 %empty_166
}

define weak i15 @_ssdm_op_BitConcatenate.i15.i5.i5.i5(i5, i5, i5) nounwind readnone {
entry:
  %empty = zext i5 %1 to i10
  %empty_167 = zext i5 %2 to i10
  %empty_168 = shl i10 %empty, 5
  %empty_169 = or i10 %empty_168, %empty_167
  %empty_170 = zext i5 %0 to i15
  %empty_171 = zext i10 %empty_169 to i15
  %empty_172 = shl i15 %empty_170, 10
  %empty_173 = or i15 %empty_172, %empty_171
  ret i15 %empty_173
}

define weak i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13, i2) nounwind readnone {
entry:
  %empty = zext i13 %0 to i15
  %empty_174 = zext i2 %1 to i15
  %empty_175 = shl i15 %empty, 2
  %empty_176 = or i15 %empty_175, %empty_174
  ret i15 %empty_176
}

define weak i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12, i3) nounwind readnone {
entry:
  %empty = zext i12 %0 to i15
  %empty_177 = zext i3 %1 to i15
  %empty_178 = shl i15 %empty, 3
  %empty_179 = or i15 %empty_178, %empty_177
  ret i15 %empty_179
}

define weak i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11, i4) nounwind readnone {
entry:
  %empty = zext i11 %0 to i15
  %empty_180 = zext i4 %1 to i15
  %empty_181 = shl i15 %empty, 4
  %empty_182 = or i15 %empty_181, %empty_180
  ret i15 %empty_182
}

define weak i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10, i5) nounwind readnone {
entry:
  %empty = zext i10 %0 to i15
  %empty_183 = zext i5 %1 to i15
  %empty_184 = shl i15 %empty, 5
  %empty_185 = or i15 %empty_184, %empty_183
  ret i15 %empty_185
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i9.i5(i9, i5) nounwind readnone {
entry:
  %empty = zext i9 %0 to i14
  %empty_186 = zext i5 %1 to i14
  %empty_187 = shl i14 %empty, 5
  %empty_188 = or i14 %empty_187, %empty_186
  ret i14 %empty_188
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i7.i7(i7, i7) nounwind readnone {
entry:
  %empty = zext i7 %0 to i14
  %empty_189 = zext i7 %1 to i14
  %empty_190 = shl i14 %empty, 7
  %empty_191 = or i14 %empty_190, %empty_189
  ret i14 %empty_191
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i6.i4.i4(i6, i4, i4) nounwind readnone {
entry:
  %empty = zext i4 %1 to i8
  %empty_192 = zext i4 %2 to i8
  %empty_193 = shl i8 %empty, 4
  %empty_194 = or i8 %empty_193, %empty_192
  %empty_195 = zext i6 %0 to i14
  %empty_196 = zext i8 %empty_194 to i14
  %empty_197 = shl i14 %empty_195, 8
  %empty_198 = or i14 %empty_197, %empty_196
  ret i14 %empty_198
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12, i2) nounwind readnone {
entry:
  %empty = zext i12 %0 to i14
  %empty_199 = zext i2 %1 to i14
  %empty_200 = shl i14 %empty, 2
  %empty_201 = or i14 %empty_200, %empty_199
  ret i14 %empty_201
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11, i3) nounwind readnone {
entry:
  %empty = zext i11 %0 to i14
  %empty_202 = zext i3 %1 to i14
  %empty_203 = shl i14 %empty, 3
  %empty_204 = or i14 %empty_203, %empty_202
  ret i14 %empty_204
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10, i4) nounwind readnone {
entry:
  %empty = zext i10 %0 to i14
  %empty_205 = zext i4 %1 to i14
  %empty_206 = shl i14 %empty, 4
  %empty_207 = or i14 %empty_206, %empty_205
  ret i14 %empty_207
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8, i5) nounwind readnone {
entry:
  %empty = zext i8 %0 to i13
  %empty_208 = zext i5 %1 to i13
  %empty_209 = shl i13 %empty, 5
  %empty_210 = or i13 %empty_209, %empty_208
  ret i13 %empty_210
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7, i6) nounwind readnone {
entry:
  %empty = zext i7 %0 to i13
  %empty_211 = zext i6 %1 to i13
  %empty_212 = shl i13 %empty, 6
  %empty_213 = or i13 %empty_212, %empty_211
  ret i13 %empty_213
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i7.i3.i3(i7, i3, i3) nounwind readnone {
entry:
  %empty = zext i3 %1 to i6
  %empty_214 = zext i3 %2 to i6
  %empty_215 = shl i6 %empty, 3
  %empty_216 = or i6 %empty_215, %empty_214
  %empty_217 = zext i7 %0 to i13
  %empty_218 = zext i6 %empty_216 to i13
  %empty_219 = shl i13 %empty_217, 6
  %empty_220 = or i13 %empty_219, %empty_218
  ret i13 %empty_220
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i5.i4.i4(i5, i4, i4) nounwind readnone {
entry:
  %empty = zext i4 %1 to i8
  %empty_221 = zext i4 %2 to i8
  %empty_222 = shl i8 %empty, 4
  %empty_223 = or i8 %empty_222, %empty_221
  %empty_224 = zext i5 %0 to i13
  %empty_225 = zext i8 %empty_223 to i13
  %empty_226 = shl i13 %empty_224, 8
  %empty_227 = or i13 %empty_226, %empty_225
  ret i13 %empty_227
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i4.i9(i4, i9) nounwind readnone {
entry:
  %empty = zext i4 %0 to i13
  %empty_228 = zext i9 %1 to i13
  %empty_229 = shl i13 %empty, 9
  %empty_230 = or i13 %empty_229, %empty_228
  ret i13 %empty_230
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11, i2) nounwind readnone {
entry:
  %empty = zext i11 %0 to i13
  %empty_231 = zext i2 %1 to i13
  %empty_232 = shl i13 %empty, 2
  %empty_233 = or i13 %empty_232, %empty_231
  ret i13 %empty_233
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10, i3) nounwind readnone {
entry:
  %empty = zext i10 %0 to i13
  %empty_234 = zext i3 %1 to i13
  %empty_235 = shl i13 %empty, 3
  %empty_236 = or i13 %empty_235, %empty_234
  ret i13 %empty_236
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9, i3) nounwind readnone {
entry:
  %empty = zext i9 %0 to i12
  %empty_237 = zext i3 %1 to i12
  %empty_238 = shl i12 %empty, 3
  %empty_239 = or i12 %empty_238, %empty_237
  ret i12 %empty_239
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i7.i5(i7, i5) nounwind readnone {
entry:
  %empty = zext i7 %0 to i12
  %empty_240 = zext i5 %1 to i12
  %empty_241 = shl i12 %empty, 5
  %empty_242 = or i12 %empty_241, %empty_240
  ret i12 %empty_242
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i6.i6(i6, i6) nounwind readnone {
entry:
  %empty = zext i6 %0 to i12
  %empty_243 = zext i6 %1 to i12
  %empty_244 = shl i12 %empty, 6
  %empty_245 = or i12 %empty_244, %empty_243
  ret i12 %empty_245
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i6.i3.i3(i6, i3, i3) nounwind readnone {
entry:
  %empty = zext i3 %1 to i6
  %empty_246 = zext i3 %2 to i6
  %empty_247 = shl i6 %empty, 3
  %empty_248 = or i6 %empty_247, %empty_246
  %empty_249 = zext i6 %0 to i12
  %empty_250 = zext i6 %empty_248 to i12
  %empty_251 = shl i12 %empty_249, 6
  %empty_252 = or i12 %empty_251, %empty_250
  ret i12 %empty_252
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i2.i5.i5(i2, i5, i5) nounwind readnone {
entry:
  %empty = zext i5 %1 to i10
  %empty_253 = zext i5 %2 to i10
  %empty_254 = shl i10 %empty, 5
  %empty_255 = or i10 %empty_254, %empty_253
  %empty_256 = zext i2 %0 to i12
  %empty_257 = zext i10 %empty_255 to i12
  %empty_258 = shl i12 %empty_256, 10
  %empty_259 = or i12 %empty_258, %empty_257
  ret i12 %empty_259
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10, i2) nounwind readnone {
entry:
  %empty = zext i10 %0 to i12
  %empty_260 = zext i2 %1 to i12
  %empty_261 = shl i12 %empty, 2
  %empty_262 = or i12 %empty_261, %empty_260
  ret i12 %empty_262
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9, i2) nounwind readnone {
entry:
  %empty = zext i9 %0 to i11
  %empty_263 = zext i2 %1 to i11
  %empty_264 = shl i11 %empty, 2
  %empty_265 = or i11 %empty_264, %empty_263
  ret i11 %empty_265
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8, i3) nounwind readnone {
entry:
  %empty = zext i8 %0 to i11
  %empty_266 = zext i3 %1 to i11
  %empty_267 = shl i11 %empty, 3
  %empty_268 = or i11 %empty_267, %empty_266
  ret i11 %empty_268
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7, i4) nounwind readnone {
entry:
  %empty = zext i7 %0 to i11
  %empty_269 = zext i4 %1 to i11
  %empty_270 = shl i11 %empty, 4
  %empty_271 = or i11 %empty_270, %empty_269
  ret i11 %empty_271
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i7.i2.i2(i7, i2, i2) nounwind readnone {
entry:
  %empty = zext i2 %1 to i4
  %empty_272 = zext i2 %2 to i4
  %empty_273 = shl i4 %empty, 2
  %empty_274 = or i4 %empty_273, %empty_272
  %empty_275 = zext i7 %0 to i11
  %empty_276 = zext i4 %empty_274 to i11
  %empty_277 = shl i11 %empty_275, 4
  %empty_278 = or i11 %empty_277, %empty_276
  ret i11 %empty_278
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i6.i5(i6, i5) nounwind readnone {
entry:
  %empty = zext i6 %0 to i11
  %empty_279 = zext i5 %1 to i11
  %empty_280 = shl i11 %empty, 5
  %empty_281 = or i11 %empty_280, %empty_279
  ret i11 %empty_281
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i1.i5.i5(i1, i5, i5) nounwind readnone {
entry:
  %empty = zext i5 %1 to i10
  %empty_282 = zext i5 %2 to i10
  %empty_283 = shl i10 %empty, 5
  %empty_284 = or i10 %empty_283, %empty_282
  %empty_285 = zext i1 %0 to i11
  %empty_286 = zext i10 %empty_284 to i11
  %empty_287 = shl i11 %empty_285, 10
  %empty_288 = or i11 %empty_287, %empty_286
  ret i11 %empty_288
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8, i2) nounwind readnone {
entry:
  %empty = zext i8 %0 to i10
  %empty_289 = zext i2 %1 to i10
  %empty_290 = shl i10 %empty, 2
  %empty_291 = or i10 %empty_290, %empty_289
  ret i10 %empty_291
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7, i3) nounwind readnone {
entry:
  %empty = zext i7 %0 to i10
  %empty_292 = zext i3 %1 to i10
  %empty_293 = shl i10 %empty, 3
  %empty_294 = or i10 %empty_293, %empty_292
  ret i10 %empty_294
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6, i4) nounwind readnone {
entry:
  %empty = zext i6 %0 to i10
  %empty_295 = zext i4 %1 to i10
  %empty_296 = shl i10 %empty, 4
  %empty_297 = or i10 %empty_296, %empty_295
  ret i10 %empty_297
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5, i5) nounwind readnone {
entry:
  %empty = zext i5 %0 to i10
  %empty_298 = zext i5 %1 to i10
  %empty_299 = shl i10 %empty, 5
  %empty_300 = or i10 %empty_299, %empty_298
  ret i10 %empty_300
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i2.i5.i3(i2, i5, i3) nounwind readnone {
entry:
  %empty = zext i5 %1 to i8
  %empty_301 = zext i3 %2 to i8
  %empty_302 = shl i8 %empty, 3
  %empty_303 = or i8 %empty_302, %empty_301
  %empty_304 = zext i2 %0 to i10
  %empty_305 = zext i8 %empty_303 to i10
  %empty_306 = shl i10 %empty_304, 8
  %empty_307 = or i10 %empty_306, %empty_305
  ret i10 %empty_307
}

declare void @_GLOBAL__I_a25() nounwind section ".text.startup"

declare void @_GLOBAL__I_a() nounwind section ".text.startup"

define internal fastcc void @ShuffleUnit2([3072 x float]* nocapture %input_r, [9216 x float]* nocapture %conv1_weight, [96 x float]* nocapture %conv1_bias, [864 x float]* nocapture %conv2_weight, [96 x float]* nocapture %conv2_bias, [9216 x float]* nocapture %conv3_weight, [96 x float]* nocapture %conv3_bias, [3072 x float]* nocapture %output_r) {
meminst.0:
  %left_part_0 = alloca [1536 x float], align 4
  %right_part_0 = alloca [1536 x float], align 4
  %conv1_output_0 = alloca [1536 x float], align 4
  %conv2_output_0 = alloca [1536 x float], align 4
  %conv3_output_0 = alloca [1536 x float], align 4
  br label %meminst5.0

meminst58.0:                                      ; preds = %meminst912.0
  %tmp_120 = icmp eq i7 %invdar6, -33
  %empty = call i32 (...)* @_ssdm_op_SpecLoopName([17 x i8]* @memset_left_part_str) nounwind
  br i1 %tmp_120, label %meminst20.0.preheader, label %meminst5.0

meminst20.0.preheader:                            ; preds = %meminst58.0
  br label %meminst20.0

meminst912.0:                                     ; preds = %meminst13.0
  %tmp_119 = icmp eq i2 %invdar1, -1
  %empty_308 = call i32 (...)* @_ssdm_op_SpecLoopName([17 x i8]* @memset_left_part_str) nounwind
  br i1 %tmp_119, label %meminst58.0, label %meminst9.0

meminst13.0:                                      ; preds = %meminst9.0, %meminst13.0
  %invdar2 = phi i2 [ 0, %meminst9.0 ], [ %indvarinc2, %meminst13.0 ]
  %indvarinc2 = add i2 %invdar2, 1
  %tmp = call i11 @_ssdm_op_BitConcatenate.i11.i7.i2.i2(i7 %invdar6, i2 %invdar1, i2 %invdar2)
  %tmp_180 = zext i11 %tmp to i64
  %left_part_0_addr = getelementptr [1536 x float]* %left_part_0, i64 0, i64 %tmp_180
  store float 0.000000e+00, float* %left_part_0_addr, align 4
  %tmp_s = icmp eq i2 %invdar2, -1
  %empty_309 = call i32 (...)* @_ssdm_op_SpecLoopName([17 x i8]* @memset_left_part_str) nounwind
  %empty_310 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %tmp_s, label %meminst912.0, label %meminst13.0

meminst9.0:                                       ; preds = %meminst5.0, %meminst912.0
  %invdar1 = phi i2 [ 0, %meminst5.0 ], [ %indvarinc1, %meminst912.0 ]
  %indvarinc1 = add i2 %invdar1, 1
  %empty_311 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br label %meminst13.0

meminst5.0:                                       ; preds = %meminst58.0, %meminst.0
  %invdar6 = phi i7 [ 0, %meminst.0 ], [ %indvarinc7, %meminst58.0 ]
  %indvarinc7 = add i7 %invdar6, 1
  %empty_312 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  br label %meminst9.0

meminst2023.0:                                    ; preds = %meminst2427.0
  %tmp_123 = icmp eq i7 %invdar4, -33
  %empty_313 = call i32 (...)* @_ssdm_op_SpecLoopName([18 x i8]* @memset_right_part_st) nounwind
  br i1 %tmp_123, label %meminst35.0.preheader, label %meminst20.0

meminst35.0.preheader:                            ; preds = %meminst2023.0
  br label %meminst35.0

meminst2427.0:                                    ; preds = %meminst28.0
  %tmp_122 = icmp eq i2 %invdar5, -1
  %empty_314 = call i32 (...)* @_ssdm_op_SpecLoopName([18 x i8]* @memset_right_part_st) nounwind
  br i1 %tmp_122, label %meminst2023.0, label %meminst24.0

meminst28.0:                                      ; preds = %meminst24.0, %meminst28.0
  %invdar7 = phi i2 [ 0, %meminst24.0 ], [ %indvarinc6, %meminst28.0 ]
  %indvarinc6 = add i2 %invdar7, 1
  %tmp_105 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i2.i2(i7 %invdar4, i2 %invdar5, i2 %invdar7)
  %tmp_181 = zext i11 %tmp_105 to i64
  %right_part_0_addr = getelementptr [1536 x float]* %right_part_0, i64 0, i64 %tmp_181
  store float 0.000000e+00, float* %right_part_0_addr, align 4
  %tmp_121 = icmp eq i2 %invdar7, -1
  %empty_315 = call i32 (...)* @_ssdm_op_SpecLoopName([18 x i8]* @memset_right_part_st) nounwind
  %empty_316 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %tmp_121, label %meminst2427.0, label %meminst28.0

meminst24.0:                                      ; preds = %meminst20.0, %meminst2427.0
  %invdar5 = phi i2 [ 0, %meminst20.0 ], [ %indvarinc5, %meminst2427.0 ]
  %indvarinc5 = add i2 %invdar5, 1
  %empty_317 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br label %meminst28.0

meminst20.0:                                      ; preds = %meminst20.0.preheader, %meminst2023.0
  %invdar4 = phi i7 [ %indvarinc4, %meminst2023.0 ], [ 0, %meminst20.0.preheader ]
  %indvarinc4 = add i7 %invdar4, 1
  %empty_318 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  br label %meminst24.0

meminst3538.0:                                    ; preds = %meminst3942.0
  %tmp_126 = icmp eq i7 %invdar9, -33
  %empty_319 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv1_output_s) nounwind
  br i1 %tmp_126, label %meminst50.0.preheader, label %meminst35.0

meminst50.0.preheader:                            ; preds = %meminst3538.0
  br label %meminst50.0

meminst3942.0:                                    ; preds = %meminst43.0
  %tmp_125 = icmp eq i2 %invdar, -1
  %empty_320 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv1_output_s) nounwind
  br i1 %tmp_125, label %meminst3538.0, label %meminst39.0

meminst43.0:                                      ; preds = %meminst39.0, %meminst43.0
  %invdar3 = phi i2 [ 0, %meminst39.0 ], [ %indvarinc3, %meminst43.0 ]
  %indvarinc3 = add i2 %invdar3, 1
  %tmp_106 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i2.i2(i7 %invdar9, i2 %invdar, i2 %invdar3)
  %tmp_182 = zext i11 %tmp_106 to i64
  %conv1_output_0_addr = getelementptr [1536 x float]* %conv1_output_0, i64 0, i64 %tmp_182
  store float 0.000000e+00, float* %conv1_output_0_addr, align 4
  %tmp_124 = icmp eq i2 %invdar3, -1
  %empty_321 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv1_output_s) nounwind
  %empty_322 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %tmp_124, label %meminst3942.0, label %meminst43.0

meminst39.0:                                      ; preds = %meminst35.0, %meminst3942.0
  %invdar = phi i2 [ 0, %meminst35.0 ], [ %indvarinc, %meminst3942.0 ]
  %indvarinc = add i2 %invdar, 1
  %empty_323 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br label %meminst43.0

meminst35.0:                                      ; preds = %meminst35.0.preheader, %meminst3538.0
  %invdar9 = phi i7 [ %indvarinc9, %meminst3538.0 ], [ 0, %meminst35.0.preheader ]
  %indvarinc9 = add i7 %invdar9, 1
  %empty_324 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  br label %meminst39.0

meminst5053.0:                                    ; preds = %meminst5457.0
  %tmp_129 = icmp eq i7 %invdar8, -33
  %empty_325 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv2_output_s) nounwind
  br i1 %tmp_129, label %meminst66.0.preheader, label %meminst50.0

meminst66.0.preheader:                            ; preds = %meminst5053.0
  br label %meminst66.0

meminst5457.0:                                    ; preds = %meminst59.0
  %tmp_128 = icmp eq i2 %invdar10, -1
  %empty_326 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv2_output_s) nounwind
  br i1 %tmp_128, label %meminst5053.0, label %meminst54.0

meminst59.0:                                      ; preds = %meminst54.0, %meminst59.0
  %invdar11 = phi i2 [ 0, %meminst54.0 ], [ %indvarinc11, %meminst59.0 ]
  %indvarinc11 = add i2 %invdar11, 1
  %tmp_107 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i2.i2(i7 %invdar8, i2 %invdar10, i2 %invdar11)
  %tmp_183 = zext i11 %tmp_107 to i64
  %conv2_output_0_addr = getelementptr [1536 x float]* %conv2_output_0, i64 0, i64 %tmp_183
  store float 0.000000e+00, float* %conv2_output_0_addr, align 4
  %tmp_127 = icmp eq i2 %invdar11, -1
  %empty_327 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv2_output_s) nounwind
  %empty_328 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %tmp_127, label %meminst5457.0, label %meminst59.0

meminst54.0:                                      ; preds = %meminst50.0, %meminst5457.0
  %invdar10 = phi i2 [ 0, %meminst50.0 ], [ %indvarinc10, %meminst5457.0 ]
  %indvarinc10 = add i2 %invdar10, 1
  %empty_329 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br label %meminst59.0

meminst50.0:                                      ; preds = %meminst50.0.preheader, %meminst5053.0
  %invdar8 = phi i7 [ %indvarinc8, %meminst5053.0 ], [ 0, %meminst50.0.preheader ]
  %indvarinc8 = add i7 %invdar8, 1
  %empty_330 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  br label %meminst54.0

meminst6669.0:                                    ; preds = %meminst7073.0
  %tmp_132 = icmp eq i7 %invdar12, -33
  %empty_331 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv3_output_s) nounwind
  br i1 %tmp_132, label %.preheader77.preheader, label %meminst66.0

.preheader77.preheader:                           ; preds = %meminst6669.0
  br label %.preheader77

meminst7073.0:                                    ; preds = %meminst74.0
  %tmp_131 = icmp eq i2 %invdar13, -1
  %empty_332 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv3_output_s) nounwind
  br i1 %tmp_131, label %meminst6669.0, label %meminst70.0

meminst74.0:                                      ; preds = %meminst70.0, %meminst74.0
  %invdar14 = phi i2 [ 0, %meminst70.0 ], [ %indvarinc14, %meminst74.0 ]
  %indvarinc14 = add i2 %invdar14, 1
  %tmp_108 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i2.i2(i7 %invdar12, i2 %invdar13, i2 %invdar14)
  %tmp_184 = zext i11 %tmp_108 to i64
  %conv3_output_0_addr = getelementptr [1536 x float]* %conv3_output_0, i64 0, i64 %tmp_184
  store float 0.000000e+00, float* %conv3_output_0_addr, align 4
  %tmp_130 = icmp eq i2 %invdar14, -1
  %empty_333 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv3_output_s) nounwind
  %empty_334 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %tmp_130, label %meminst7073.0, label %meminst74.0

meminst70.0:                                      ; preds = %meminst66.0, %meminst7073.0
  %invdar13 = phi i2 [ 0, %meminst66.0 ], [ %indvarinc13, %meminst7073.0 ]
  %indvarinc13 = add i2 %invdar13, 1
  %empty_335 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br label %meminst74.0

meminst66.0:                                      ; preds = %meminst66.0.preheader, %meminst6669.0
  %invdar12 = phi i7 [ %indvarinc12, %meminst6669.0 ], [ 0, %meminst66.0.preheader ]
  %indvarinc12 = add i7 %invdar12, 1
  %empty_336 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  br label %meminst70.0

.preheader77.loopexit:                            ; preds = %.preheader3
  br label %.preheader77

.preheader77:                                     ; preds = %.preheader77.preheader, %.preheader77.loopexit
  %co = phi i7 [ %co_19, %.preheader77.loopexit ], [ 0, %.preheader77.preheader ]
  %co_cast = zext i7 %co to i8
  %exitcond2 = icmp eq i7 %co, -32
  %empty_337 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_19 = add i7 %co, 1
  br i1 %exitcond2, label %1, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.preheader77
  %tmp_133 = add i8 %co_cast, 96
  %tmp_185 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_133, i2 0)
  %tmp_307_cast = zext i10 %tmp_185 to i11
  %tmp_186 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %co, i2 0)
  %tmp_309_cast = zext i9 %tmp_186 to i10
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i3 [ 0, %.preheader3.preheader ], [ %h_19, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i3 %h, -4
  %empty_338 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %h_19 = add i3 %h, 1
  br i1 %exitcond1, label %.preheader77.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_134_cast1 = zext i3 %h to i10
  %tmp_134_cast = zext i3 %h to i11
  %tmp_187 = add i11 %tmp_307_cast, %tmp_134_cast
  %tmp_312_cast = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_187, i2 0)
  %tmp_188 = add i10 %tmp_309_cast, %tmp_134_cast1
  %tmp_109 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_188, i2 0)
  %tmp_315_cast = zext i12 %tmp_109 to i13
  br label %.preheader

.preheader:                                       ; preds = %0, %.preheader.preheader
  %w = phi i3 [ %w_19, %0 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i3 %w, -4
  %empty_339 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %w_19 = add i3 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %0

; <label>:0                                       ; preds = %.preheader
  %tmp_135_cast = zext i3 %w to i13
  %tmp_189 = add i13 %tmp_312_cast, %tmp_135_cast
  %tmp_316_cast = zext i13 %tmp_189 to i64
  %input_addr = getelementptr [3072 x float]* %input_r, i64 0, i64 %tmp_316_cast
  %tmp_190 = add i13 %tmp_315_cast, %tmp_135_cast
  %tmp_317_cast = zext i13 %tmp_190 to i64
  %input_addr_1 = getelementptr [3072 x float]* %input_r, i64 0, i64 %tmp_317_cast
  %left_part_0_addr_1 = getelementptr [1536 x float]* %left_part_0, i64 0, i64 %tmp_317_cast
  %right_part_0_addr_1 = getelementptr [1536 x float]* %right_part_0, i64 0, i64 %tmp_317_cast
  %input_load = load float* %input_addr, align 4
  store float %input_load, float* %right_part_0_addr_1, align 4
  %input_load_1 = load float* %input_addr_1, align 4
  store float %input_load_1, float* %left_part_0_addr_1, align 4
  br label %.preheader

; <label>:1                                       ; preds = %.preheader77
  call fastcc void @subconv_1x1_419([1536 x float]* %right_part_0, [9216 x float]* %conv1_weight, [96 x float]* %conv1_bias, [1536 x float]* %conv1_output_0)
  call fastcc void @subconv_3x3_4_no_rel([1536 x float]* %conv1_output_0, [864 x float]* %conv2_weight, [96 x float]* %conv2_bias, [1536 x float]* %conv2_output_0)
  call fastcc void @subconv_1x1_419([1536 x float]* %conv2_output_0, [9216 x float]* %conv3_weight, [96 x float]* %conv3_bias, [1536 x float]* %conv3_output_0)
  call fastcc void @shuffle_9621([1536 x float]* %left_part_0, [1536 x float]* %conv3_output_0, [3072 x float]* %output_r)
  ret void
}

define internal fastcc void @ShuffleUnit1([6144 x float]* nocapture %input_r, [2304 x float]* nocapture %conv1_weight, [48 x float]* nocapture %conv1_bias, [432 x float]* nocapture %conv2_weight, [48 x float]* nocapture %conv2_bias, [2304 x float]* nocapture %conv3_weight, [48 x float]* nocapture %conv3_bias, [6144 x float]* nocapture %output_r) {
meminst.0:
  %left_part_0 = alloca [3072 x float], align 4
  %right_part_0 = alloca [3072 x float], align 4
  %conv1_output_0 = alloca [3072 x float], align 4
  %conv2_output_0 = alloca [3072 x float], align 4
  %conv3_output_0 = alloca [3072 x float], align 4
  br label %meminst5.0

meminst58.0:                                      ; preds = %meminst912.0
  %tmp_137 = icmp eq i6 %invdar6, -17
  %empty = call i32 (...)* @_ssdm_op_SpecLoopName([17 x i8]* @memset_left_part_str) nounwind
  br i1 %tmp_137, label %meminst20.0.preheader, label %meminst5.0

meminst20.0.preheader:                            ; preds = %meminst58.0
  br label %meminst20.0

meminst912.0:                                     ; preds = %meminst13.0
  %tmp_136 = icmp eq i3 %invdar10, -1
  %empty_340 = call i32 (...)* @_ssdm_op_SpecLoopName([17 x i8]* @memset_left_part_str) nounwind
  br i1 %tmp_136, label %meminst58.0, label %meminst9.0

meminst13.0:                                      ; preds = %meminst9.0, %meminst13.0
  %invdar14 = phi i3 [ 0, %meminst9.0 ], [ %indvarinc, %meminst13.0 ]
  %indvarinc = add i3 %invdar14, 1
  %tmp = call i12 @_ssdm_op_BitConcatenate.i12.i6.i3.i3(i6 %invdar6, i3 %invdar10, i3 %invdar14)
  %tmp_191 = zext i12 %tmp to i64
  %left_part_0_addr = getelementptr [3072 x float]* %left_part_0, i64 0, i64 %tmp_191
  store float 0.000000e+00, float* %left_part_0_addr, align 4
  %tmp_s = icmp eq i3 %invdar14, -1
  %empty_341 = call i32 (...)* @_ssdm_op_SpecLoopName([17 x i8]* @memset_left_part_str) nounwind
  %empty_342 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %tmp_s, label %meminst912.0, label %meminst13.0

meminst9.0:                                       ; preds = %meminst5.0, %meminst912.0
  %invdar10 = phi i3 [ 0, %meminst5.0 ], [ %indvarinc11, %meminst912.0 ]
  %indvarinc11 = add i3 %invdar10, 1
  %empty_343 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br label %meminst13.0

meminst5.0:                                       ; preds = %meminst58.0, %meminst.0
  %invdar6 = phi i6 [ 0, %meminst.0 ], [ %indvarinc7, %meminst58.0 ]
  %indvarinc7 = add i6 %invdar6, 1
  %empty_344 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  br label %meminst9.0

meminst2023.0:                                    ; preds = %meminst2427.0
  %tmp_140 = icmp eq i6 %invdar, -17
  %empty_345 = call i32 (...)* @_ssdm_op_SpecLoopName([18 x i8]* @memset_right_part_st) nounwind
  br i1 %tmp_140, label %meminst35.0.preheader, label %meminst20.0

meminst35.0.preheader:                            ; preds = %meminst2023.0
  br label %meminst35.0

meminst2427.0:                                    ; preds = %meminst28.0
  %tmp_139 = icmp eq i3 %invdar15, -1
  %empty_346 = call i32 (...)* @_ssdm_op_SpecLoopName([18 x i8]* @memset_right_part_st) nounwind
  br i1 %tmp_139, label %meminst2023.0, label %meminst24.0

meminst28.0:                                      ; preds = %meminst24.0, %meminst28.0
  %invdar16 = phi i3 [ 0, %meminst24.0 ], [ %indvarinc17, %meminst28.0 ]
  %indvarinc17 = add i3 %invdar16, 1
  %tmp_110 = call i12 @_ssdm_op_BitConcatenate.i12.i6.i3.i3(i6 %invdar, i3 %invdar15, i3 %invdar16)
  %tmp_192 = zext i12 %tmp_110 to i64
  %right_part_0_addr = getelementptr [3072 x float]* %right_part_0, i64 0, i64 %tmp_192
  store float 0.000000e+00, float* %right_part_0_addr, align 4
  %tmp_138 = icmp eq i3 %invdar16, -1
  %empty_347 = call i32 (...)* @_ssdm_op_SpecLoopName([18 x i8]* @memset_right_part_st) nounwind
  %empty_348 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %tmp_138, label %meminst2427.0, label %meminst28.0

meminst24.0:                                      ; preds = %meminst20.0, %meminst2427.0
  %invdar15 = phi i3 [ 0, %meminst20.0 ], [ %indvarinc16, %meminst2427.0 ]
  %indvarinc16 = add i3 %invdar15, 1
  %empty_349 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br label %meminst28.0

meminst20.0:                                      ; preds = %meminst20.0.preheader, %meminst2023.0
  %invdar = phi i6 [ %indvarinc15, %meminst2023.0 ], [ 0, %meminst20.0.preheader ]
  %indvarinc15 = add i6 %invdar, 1
  %empty_350 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  br label %meminst24.0

meminst3538.0:                                    ; preds = %meminst3942.0
  %tmp_143 = icmp eq i6 %invdar17, -17
  %empty_351 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv1_output_s) nounwind
  br i1 %tmp_143, label %meminst50.0.preheader, label %meminst35.0

meminst50.0.preheader:                            ; preds = %meminst3538.0
  br label %meminst50.0

meminst3942.0:                                    ; preds = %meminst43.0
  %tmp_142 = icmp eq i3 %invdar18, -1
  %empty_352 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv1_output_s) nounwind
  br i1 %tmp_142, label %meminst3538.0, label %meminst39.0

meminst43.0:                                      ; preds = %meminst39.0, %meminst43.0
  %invdar19 = phi i3 [ 0, %meminst39.0 ], [ %indvarinc20, %meminst43.0 ]
  %indvarinc20 = add i3 %invdar19, 1
  %tmp_111 = call i12 @_ssdm_op_BitConcatenate.i12.i6.i3.i3(i6 %invdar17, i3 %invdar18, i3 %invdar19)
  %tmp_193 = zext i12 %tmp_111 to i64
  %conv1_output_0_addr = getelementptr [3072 x float]* %conv1_output_0, i64 0, i64 %tmp_193
  store float 0.000000e+00, float* %conv1_output_0_addr, align 4
  %tmp_141 = icmp eq i3 %invdar19, -1
  %empty_353 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv1_output_s) nounwind
  %empty_354 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %tmp_141, label %meminst3942.0, label %meminst43.0

meminst39.0:                                      ; preds = %meminst35.0, %meminst3942.0
  %invdar18 = phi i3 [ 0, %meminst35.0 ], [ %indvarinc19, %meminst3942.0 ]
  %indvarinc19 = add i3 %invdar18, 1
  %empty_355 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br label %meminst43.0

meminst35.0:                                      ; preds = %meminst35.0.preheader, %meminst3538.0
  %invdar17 = phi i6 [ %indvarinc18, %meminst3538.0 ], [ 0, %meminst35.0.preheader ]
  %indvarinc18 = add i6 %invdar17, 1
  %empty_356 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  br label %meminst39.0

meminst5053.0:                                    ; preds = %meminst5457.0
  %tmp_146 = icmp eq i6 %invdar20, -17
  %empty_357 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv2_output_s) nounwind
  br i1 %tmp_146, label %meminst66.0.preheader, label %meminst50.0

meminst66.0.preheader:                            ; preds = %meminst5053.0
  br label %meminst66.0

meminst5457.0:                                    ; preds = %meminst59.0
  %tmp_145 = icmp eq i3 %invdar21, -1
  %empty_358 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv2_output_s) nounwind
  br i1 %tmp_145, label %meminst5053.0, label %meminst54.0

meminst59.0:                                      ; preds = %meminst54.0, %meminst59.0
  %invdar22 = phi i3 [ 0, %meminst54.0 ], [ %indvarinc23, %meminst59.0 ]
  %indvarinc23 = add i3 %invdar22, 1
  %tmp_112 = call i12 @_ssdm_op_BitConcatenate.i12.i6.i3.i3(i6 %invdar20, i3 %invdar21, i3 %invdar22)
  %tmp_194 = zext i12 %tmp_112 to i64
  %conv2_output_0_addr = getelementptr [3072 x float]* %conv2_output_0, i64 0, i64 %tmp_194
  store float 0.000000e+00, float* %conv2_output_0_addr, align 4
  %tmp_144 = icmp eq i3 %invdar22, -1
  %empty_359 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv2_output_s) nounwind
  %empty_360 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %tmp_144, label %meminst5457.0, label %meminst59.0

meminst54.0:                                      ; preds = %meminst50.0, %meminst5457.0
  %invdar21 = phi i3 [ 0, %meminst50.0 ], [ %indvarinc22, %meminst5457.0 ]
  %indvarinc22 = add i3 %invdar21, 1
  %empty_361 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br label %meminst59.0

meminst50.0:                                      ; preds = %meminst50.0.preheader, %meminst5053.0
  %invdar20 = phi i6 [ %indvarinc21, %meminst5053.0 ], [ 0, %meminst50.0.preheader ]
  %indvarinc21 = add i6 %invdar20, 1
  %empty_362 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  br label %meminst54.0

meminst6669.0:                                    ; preds = %meminst7073.0
  %tmp_149 = icmp eq i6 %invdar23, -17
  %empty_363 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv3_output_s) nounwind
  br i1 %tmp_149, label %.preheader77.preheader, label %meminst66.0

.preheader77.preheader:                           ; preds = %meminst6669.0
  br label %.preheader77

meminst7073.0:                                    ; preds = %meminst74.0
  %tmp_148 = icmp eq i3 %invdar24, -1
  %empty_364 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv3_output_s) nounwind
  br i1 %tmp_148, label %meminst6669.0, label %meminst70.0

meminst74.0:                                      ; preds = %meminst70.0, %meminst74.0
  %invdar25 = phi i3 [ 0, %meminst70.0 ], [ %indvarinc26, %meminst74.0 ]
  %indvarinc26 = add i3 %invdar25, 1
  %tmp_113 = call i12 @_ssdm_op_BitConcatenate.i12.i6.i3.i3(i6 %invdar23, i3 %invdar24, i3 %invdar25)
  %tmp_195 = zext i12 %tmp_113 to i64
  %conv3_output_0_addr = getelementptr [3072 x float]* %conv3_output_0, i64 0, i64 %tmp_195
  store float 0.000000e+00, float* %conv3_output_0_addr, align 4
  %tmp_147 = icmp eq i3 %invdar25, -1
  %empty_365 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv3_output_s) nounwind
  %empty_366 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %tmp_147, label %meminst7073.0, label %meminst74.0

meminst70.0:                                      ; preds = %meminst66.0, %meminst7073.0
  %invdar24 = phi i3 [ 0, %meminst66.0 ], [ %indvarinc25, %meminst7073.0 ]
  %indvarinc25 = add i3 %invdar24, 1
  %empty_367 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br label %meminst74.0

meminst66.0:                                      ; preds = %meminst66.0.preheader, %meminst6669.0
  %invdar23 = phi i6 [ %indvarinc24, %meminst6669.0 ], [ 0, %meminst66.0.preheader ]
  %indvarinc24 = add i6 %invdar23, 1
  %empty_368 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  br label %meminst70.0

.preheader77.loopexit:                            ; preds = %.preheader3
  br label %.preheader77

.preheader77:                                     ; preds = %.preheader77.preheader, %.preheader77.loopexit
  %co = phi i6 [ %co_20, %.preheader77.loopexit ], [ 0, %.preheader77.preheader ]
  %co_cast = zext i6 %co to i7
  %exitcond2 = icmp eq i6 %co, -16
  %empty_369 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_20 = add i6 %co, 1
  br i1 %exitcond2, label %1, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.preheader77
  %tmp_150 = add i7 %co_cast, 48
  %tmp_196 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_150, i3 0)
  %tmp_328_cast = zext i10 %tmp_196 to i11
  %tmp_197 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co, i3 0)
  %tmp_330_cast = zext i9 %tmp_197 to i10
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i4 [ 0, %.preheader3.preheader ], [ %h_20, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i4 %h, -8
  %empty_370 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %h_20 = add i4 %h, 1
  br i1 %exitcond1, label %.preheader77.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_151_cast1 = zext i4 %h to i10
  %tmp_151_cast = zext i4 %h to i11
  %tmp_198 = add i11 %tmp_328_cast, %tmp_151_cast
  %tmp_333_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_198, i3 0)
  %tmp_199 = add i10 %tmp_330_cast, %tmp_151_cast1
  %tmp_114 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_199, i3 0)
  %tmp_336_cast = zext i13 %tmp_114 to i14
  br label %.preheader

.preheader:                                       ; preds = %0, %.preheader.preheader
  %w = phi i4 [ %w_20, %0 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i4 %w, -8
  %empty_371 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %w_20 = add i4 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %0

; <label>:0                                       ; preds = %.preheader
  %tmp_152_cast = zext i4 %w to i14
  %tmp_200 = add i14 %tmp_333_cast, %tmp_152_cast
  %tmp_337_cast = zext i14 %tmp_200 to i64
  %input_addr = getelementptr [6144 x float]* %input_r, i64 0, i64 %tmp_337_cast
  %tmp_201 = add i14 %tmp_336_cast, %tmp_152_cast
  %tmp_338_cast = zext i14 %tmp_201 to i64
  %input_addr_2 = getelementptr [6144 x float]* %input_r, i64 0, i64 %tmp_338_cast
  %right_part_0_addr_2 = getelementptr [3072 x float]* %right_part_0, i64 0, i64 %tmp_338_cast
  %left_part_0_addr_2 = getelementptr [3072 x float]* %left_part_0, i64 0, i64 %tmp_338_cast
  %input_load = load float* %input_addr, align 4
  store float %input_load, float* %right_part_0_addr_2, align 4
  %input_load_2 = load float* %input_addr_2, align 4
  store float %input_load_2, float* %left_part_0_addr_2, align 4
  br label %.preheader

; <label>:1                                       ; preds = %.preheader77
  call fastcc void @subconv_1x1_89([3072 x float]* %right_part_0, [2304 x float]* %conv1_weight, [48 x float]* %conv1_bias, [3072 x float]* %conv1_output_0)
  call fastcc void @subconv_3x3_8_no_rel([3072 x float]* %conv1_output_0, [432 x float]* %conv2_weight, [48 x float]* %conv2_bias, [3072 x float]* %conv2_output_0)
  call fastcc void @subconv_1x1_89([3072 x float]* %conv2_output_0, [2304 x float]* %conv3_weight, [48 x float]* %conv3_bias, [3072 x float]* %conv3_output_0)
  call fastcc void @shuffle_4811([3072 x float]* %left_part_0, [3072 x float]* %conv3_output_0, [6144 x float]* %output_r)
  ret void
}

define internal fastcc void @ShuffleUnit0([12288 x float]* nocapture %input_r, [576 x float]* nocapture %conv1_weight, [24 x float]* nocapture %conv1_bias, [216 x float]* nocapture %conv2_weight, [24 x float]* nocapture %conv2_bias, [576 x float]* nocapture %conv3_weight, [24 x float]* nocapture %conv3_bias, [12288 x float]* nocapture %output_r) {
meminst.0:
  %left_part_0 = alloca [6144 x float], align 4
  %right_part_0 = alloca [6144 x float], align 4
  %conv1_output_0 = alloca [6144 x float], align 4
  %conv2_output_0 = alloca [6144 x float], align 4
  %conv3_output_0 = alloca [6144 x float], align 4
  br label %meminst5.0

meminst58.0:                                      ; preds = %meminst912.0
  %tmp_154 = icmp eq i5 %invdar6, -9
  %empty = call i32 (...)* @_ssdm_op_SpecLoopName([17 x i8]* @memset_left_part_str) nounwind
  br i1 %tmp_154, label %meminst20.0.preheader, label %meminst5.0

meminst20.0.preheader:                            ; preds = %meminst58.0
  br label %meminst20.0

meminst912.0:                                     ; preds = %meminst13.0
  %tmp_153 = icmp eq i4 %invdar10, -1
  %empty_372 = call i32 (...)* @_ssdm_op_SpecLoopName([17 x i8]* @memset_left_part_str) nounwind
  br i1 %tmp_153, label %meminst58.0, label %meminst9.0

meminst13.0:                                      ; preds = %meminst9.0, %meminst13.0
  %invdar14 = phi i4 [ 0, %meminst9.0 ], [ %indvarinc15, %meminst13.0 ]
  %indvarinc15 = add i4 %invdar14, 1
  %tmp = call i13 @_ssdm_op_BitConcatenate.i13.i5.i4.i4(i5 %invdar6, i4 %invdar10, i4 %invdar14)
  %tmp_202 = zext i13 %tmp to i64
  %left_part_0_addr = getelementptr [6144 x float]* %left_part_0, i64 0, i64 %tmp_202
  store float 0.000000e+00, float* %left_part_0_addr, align 4
  %tmp_s = icmp eq i4 %invdar14, -1
  %empty_373 = call i32 (...)* @_ssdm_op_SpecLoopName([17 x i8]* @memset_left_part_str) nounwind
  %empty_374 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %tmp_s, label %meminst912.0, label %meminst13.0

meminst9.0:                                       ; preds = %meminst5.0, %meminst912.0
  %invdar10 = phi i4 [ 0, %meminst5.0 ], [ %indvarinc11, %meminst912.0 ]
  %indvarinc11 = add i4 %invdar10, 1
  %empty_375 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br label %meminst13.0

meminst5.0:                                       ; preds = %meminst58.0, %meminst.0
  %invdar6 = phi i5 [ 0, %meminst.0 ], [ %indvarinc7, %meminst58.0 ]
  %indvarinc7 = add i5 %invdar6, 1
  %empty_376 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  br label %meminst9.0

meminst2023.0:                                    ; preds = %meminst2427.0
  %tmp_157 = icmp eq i5 %invdar21, -9
  %empty_377 = call i32 (...)* @_ssdm_op_SpecLoopName([18 x i8]* @memset_right_part_st) nounwind
  br i1 %tmp_157, label %meminst35.0.preheader, label %meminst20.0

meminst35.0.preheader:                            ; preds = %meminst2023.0
  br label %meminst35.0

meminst2427.0:                                    ; preds = %meminst28.0
  %tmp_156 = icmp eq i4 %invdar25, -1
  %empty_378 = call i32 (...)* @_ssdm_op_SpecLoopName([18 x i8]* @memset_right_part_st) nounwind
  br i1 %tmp_156, label %meminst2023.0, label %meminst24.0

meminst28.0:                                      ; preds = %meminst24.0, %meminst28.0
  %invdar = phi i4 [ 0, %meminst24.0 ], [ %indvarinc, %meminst28.0 ]
  %indvarinc = add i4 %invdar, 1
  %tmp_115 = call i13 @_ssdm_op_BitConcatenate.i13.i5.i4.i4(i5 %invdar21, i4 %invdar25, i4 %invdar)
  %tmp_203 = zext i13 %tmp_115 to i64
  %right_part_0_addr = getelementptr [6144 x float]* %right_part_0, i64 0, i64 %tmp_203
  store float 0.000000e+00, float* %right_part_0_addr, align 4
  %tmp_155 = icmp eq i4 %invdar, -1
  %empty_379 = call i32 (...)* @_ssdm_op_SpecLoopName([18 x i8]* @memset_right_part_st) nounwind
  %empty_380 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %tmp_155, label %meminst2427.0, label %meminst28.0

meminst24.0:                                      ; preds = %meminst20.0, %meminst2427.0
  %invdar25 = phi i4 [ 0, %meminst20.0 ], [ %indvarinc26, %meminst2427.0 ]
  %indvarinc26 = add i4 %invdar25, 1
  %empty_381 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br label %meminst28.0

meminst20.0:                                      ; preds = %meminst20.0.preheader, %meminst2023.0
  %invdar21 = phi i5 [ %indvarinc22, %meminst2023.0 ], [ 0, %meminst20.0.preheader ]
  %indvarinc22 = add i5 %invdar21, 1
  %empty_382 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  br label %meminst24.0

meminst3538.0:                                    ; preds = %meminst3942.0
  %tmp_160 = icmp eq i5 %invdar26, -9
  %empty_383 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv1_output_s) nounwind
  br i1 %tmp_160, label %meminst50.0.preheader, label %meminst35.0

meminst50.0.preheader:                            ; preds = %meminst3538.0
  br label %meminst50.0

meminst3942.0:                                    ; preds = %meminst43.0
  %tmp_159 = icmp eq i4 %invdar27, -1
  %empty_384 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv1_output_s) nounwind
  br i1 %tmp_159, label %meminst3538.0, label %meminst39.0

meminst43.0:                                      ; preds = %meminst39.0, %meminst43.0
  %invdar28 = phi i4 [ 0, %meminst39.0 ], [ %indvarinc29, %meminst43.0 ]
  %indvarinc29 = add i4 %invdar28, 1
  %tmp_116 = call i13 @_ssdm_op_BitConcatenate.i13.i5.i4.i4(i5 %invdar26, i4 %invdar27, i4 %invdar28)
  %tmp_204 = zext i13 %tmp_116 to i64
  %conv1_output_0_addr = getelementptr [6144 x float]* %conv1_output_0, i64 0, i64 %tmp_204
  store float 0.000000e+00, float* %conv1_output_0_addr, align 4
  %tmp_158 = icmp eq i4 %invdar28, -1
  %empty_385 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv1_output_s) nounwind
  %empty_386 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %tmp_158, label %meminst3942.0, label %meminst43.0

meminst39.0:                                      ; preds = %meminst35.0, %meminst3942.0
  %invdar27 = phi i4 [ 0, %meminst35.0 ], [ %indvarinc28, %meminst3942.0 ]
  %indvarinc28 = add i4 %invdar27, 1
  %empty_387 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br label %meminst43.0

meminst35.0:                                      ; preds = %meminst35.0.preheader, %meminst3538.0
  %invdar26 = phi i5 [ %indvarinc27, %meminst3538.0 ], [ 0, %meminst35.0.preheader ]
  %indvarinc27 = add i5 %invdar26, 1
  %empty_388 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  br label %meminst39.0

meminst5053.0:                                    ; preds = %meminst5457.0
  %tmp_163 = icmp eq i5 %invdar29, -9
  %empty_389 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv2_output_s) nounwind
  br i1 %tmp_163, label %meminst66.0.preheader, label %meminst50.0

meminst66.0.preheader:                            ; preds = %meminst5053.0
  br label %meminst66.0

meminst5457.0:                                    ; preds = %meminst59.0
  %tmp_162 = icmp eq i4 %invdar30, -1
  %empty_390 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv2_output_s) nounwind
  br i1 %tmp_162, label %meminst5053.0, label %meminst54.0

meminst59.0:                                      ; preds = %meminst54.0, %meminst59.0
  %invdar31 = phi i4 [ 0, %meminst54.0 ], [ %indvarinc32, %meminst59.0 ]
  %indvarinc32 = add i4 %invdar31, 1
  %tmp_117 = call i13 @_ssdm_op_BitConcatenate.i13.i5.i4.i4(i5 %invdar29, i4 %invdar30, i4 %invdar31)
  %tmp_205 = zext i13 %tmp_117 to i64
  %conv2_output_0_addr = getelementptr [6144 x float]* %conv2_output_0, i64 0, i64 %tmp_205
  store float 0.000000e+00, float* %conv2_output_0_addr, align 4
  %tmp_161 = icmp eq i4 %invdar31, -1
  %empty_391 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv2_output_s) nounwind
  %empty_392 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %tmp_161, label %meminst5457.0, label %meminst59.0

meminst54.0:                                      ; preds = %meminst50.0, %meminst5457.0
  %invdar30 = phi i4 [ 0, %meminst50.0 ], [ %indvarinc31, %meminst5457.0 ]
  %indvarinc31 = add i4 %invdar30, 1
  %empty_393 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br label %meminst59.0

meminst50.0:                                      ; preds = %meminst50.0.preheader, %meminst5053.0
  %invdar29 = phi i5 [ %indvarinc30, %meminst5053.0 ], [ 0, %meminst50.0.preheader ]
  %indvarinc30 = add i5 %invdar29, 1
  %empty_394 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  br label %meminst54.0

meminst6669.0:                                    ; preds = %meminst7073.0
  %tmp_169 = icmp eq i5 %invdar32, -9
  %empty_395 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv3_output_s) nounwind
  br i1 %tmp_169, label %.preheader77.preheader, label %meminst66.0

.preheader77.preheader:                           ; preds = %meminst6669.0
  br label %.preheader77

meminst7073.0:                                    ; preds = %meminst74.0
  %tmp_166 = icmp eq i4 %invdar33, -1
  %empty_396 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv3_output_s) nounwind
  br i1 %tmp_166, label %meminst6669.0, label %meminst70.0

meminst74.0:                                      ; preds = %meminst70.0, %meminst74.0
  %invdar34 = phi i4 [ 0, %meminst70.0 ], [ %indvarinc35, %meminst74.0 ]
  %indvarinc35 = add i4 %invdar34, 1
  %tmp_118 = call i13 @_ssdm_op_BitConcatenate.i13.i5.i4.i4(i5 %invdar32, i4 %invdar33, i4 %invdar34)
  %tmp_206 = zext i13 %tmp_118 to i64
  %conv3_output_0_addr = getelementptr [6144 x float]* %conv3_output_0, i64 0, i64 %tmp_206
  store float 0.000000e+00, float* %conv3_output_0_addr, align 4
  %tmp_165 = icmp eq i4 %invdar34, -1
  %empty_397 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv3_output_s) nounwind
  %empty_398 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %tmp_165, label %meminst7073.0, label %meminst74.0

meminst70.0:                                      ; preds = %meminst66.0, %meminst7073.0
  %invdar33 = phi i4 [ 0, %meminst66.0 ], [ %indvarinc34, %meminst7073.0 ]
  %indvarinc34 = add i4 %invdar33, 1
  %empty_399 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br label %meminst74.0

meminst66.0:                                      ; preds = %meminst66.0.preheader, %meminst6669.0
  %invdar32 = phi i5 [ %indvarinc33, %meminst6669.0 ], [ 0, %meminst66.0.preheader ]
  %indvarinc33 = add i5 %invdar32, 1
  %empty_400 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  br label %meminst70.0

.preheader77.loopexit:                            ; preds = %.preheader3
  br label %.preheader77

.preheader77:                                     ; preds = %.preheader77.preheader, %.preheader77.loopexit
  %co = phi i5 [ %co_21, %.preheader77.loopexit ], [ 0, %.preheader77.preheader ]
  %co_cast = zext i5 %co to i6
  %exitcond2 = icmp eq i5 %co, -8
  %empty_401 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_21 = add i5 %co, 1
  br i1 %exitcond2, label %1, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.preheader77
  %tmp_164 = add i6 %co_cast, 24
  %tmp_207 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %tmp_164, i4 0)
  %tmp_349_cast = zext i10 %tmp_207 to i11
  %tmp_208 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co, i4 0)
  %tmp_351_cast = zext i9 %tmp_208 to i10
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i5 [ 0, %.preheader3.preheader ], [ %h_21, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i5 %h, -16
  %empty_402 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %h_21 = add i5 %h, 1
  br i1 %exitcond1, label %.preheader77.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_167_cast1 = zext i5 %h to i10
  %tmp_167_cast = zext i5 %h to i11
  %tmp_209 = add i11 %tmp_349_cast, %tmp_167_cast
  %tmp_354_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_209, i4 0)
  %tmp_210 = add i10 %tmp_351_cast, %tmp_167_cast1
  %tmp_119 = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_210, i4 0)
  %tmp_357_cast = zext i14 %tmp_119 to i15
  br label %.preheader

.preheader:                                       ; preds = %0, %.preheader.preheader
  %w = phi i5 [ %w_21, %0 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i5 %w, -16
  %empty_403 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %w_21 = add i5 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %0

; <label>:0                                       ; preds = %.preheader
  %tmp_168_cast = zext i5 %w to i15
  %tmp_211 = add i15 %tmp_354_cast, %tmp_168_cast
  %tmp_358_cast = zext i15 %tmp_211 to i64
  %input_addr = getelementptr [12288 x float]* %input_r, i64 0, i64 %tmp_358_cast
  %tmp_212 = add i15 %tmp_357_cast, %tmp_168_cast
  %tmp_359_cast = zext i15 %tmp_212 to i64
  %input_addr_3 = getelementptr [12288 x float]* %input_r, i64 0, i64 %tmp_359_cast
  %left_part_0_addr_3 = getelementptr [6144 x float]* %left_part_0, i64 0, i64 %tmp_359_cast
  %right_part_0_addr_3 = getelementptr [6144 x float]* %right_part_0, i64 0, i64 %tmp_359_cast
  %input_load = load float* %input_addr, align 4
  store float %input_load, float* %right_part_0_addr_3, align 4
  %input_load_3 = load float* %input_addr_3, align 4
  store float %input_load_3, float* %left_part_0_addr_3, align 4
  br label %.preheader

; <label>:1                                       ; preds = %.preheader77
  call fastcc void @subconv_1x1_1612([6144 x float]* %right_part_0, [576 x float]* %conv1_weight, [24 x float]* %conv1_bias, [6144 x float]* %conv1_output_0)
  call fastcc void @subconv_3x3_16_no_re([6144 x float]* %conv1_output_0, [216 x float]* %conv2_weight, [24 x float]* %conv2_bias, [6144 x float]* %conv2_output_0)
  call fastcc void @subconv_1x1_1612([6144 x float]* %conv2_output_0, [576 x float]* %conv3_weight, [24 x float]* %conv3_bias, [6144 x float]* %conv3_output_0)
  call fastcc void @shuffle_2415([6144 x float]* %left_part_0, [6144 x float]* %conv3_output_0, [12288 x float]* %output_r)
  ret void
}

define void @ShuffleNetV2([3072 x float]* %image_r, [648 x float]* %conv1_weight, [9720 x float]* %shuffle_conv_3x3, [131904 x float]* %shuffle_conv_1x1, [98304 x float]* %conv_last_weight, [5120 x float]* %fc_weight, [3618 x float]* %bias, [1000 x float]* %fc_output) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap([3072 x float]* %image_r) nounwind, !map !874
  call void (...)* @_ssdm_op_SpecBitsMap([648 x float]* %conv1_weight) nounwind, !map !879
  call void (...)* @_ssdm_op_SpecBitsMap([9720 x float]* %shuffle_conv_3x3) nounwind, !map !884
  call void (...)* @_ssdm_op_SpecBitsMap([131904 x float]* %shuffle_conv_1x1) nounwind, !map !890
  call void (...)* @_ssdm_op_SpecBitsMap([98304 x float]* %conv_last_weight) nounwind, !map !896
  call void (...)* @_ssdm_op_SpecBitsMap([5120 x float]* %fc_weight) nounwind, !map !901
  call void (...)* @_ssdm_op_SpecBitsMap([3618 x float]* %bias) nounwind, !map !906
  call void (...)* @_ssdm_op_SpecBitsMap([1000 x float]* %fc_output) nounwind, !map !912
  call void (...)* @_ssdm_op_SpecTopModule([13 x i8]* @ShuffleNetV2_str) nounwind
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader35
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i5 [ 0, %0 ], [ %co_22, %.loopexit.loopexit ]
  %co_cast1 = zext i5 %co to i13
  %co_cast2 = zext i5 %co to i12
  %co_cast144_cast = zext i5 %co to i11
  %co_cast143_cast1 = zext i5 %co to i9
  %co_cast143_cast = zext i5 %co to i10
  %co_cast8 = zext i5 %co to i8
  %co_cast138_cast = zext i5 %co to i7
  %co_cast137_cast = zext i5 %co to i6
  %exitcond = icmp eq i5 %co, -8
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_22 = add i5 %co, 1
  br i1 %exitcond, label %.preheader33.preheader, label %.preheader35.preheader

.preheader33.preheader:                           ; preds = %.loopexit
  br label %.preheader33

.preheader35.preheader:                           ; preds = %.loopexit
  %tmp = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co, i5 0)
  %p_shl35_cast = zext i10 %tmp to i11
  %tmp_218 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co, i3 0)
  %p_shl36_cast = zext i8 %tmp_218 to i11
  %tmp_220 = sub i11 %p_shl35_cast, %p_shl36_cast
  %tmp_362_cast = sext i11 %tmp_220 to i12
  %tmp_s = add i6 24, %co_cast137_cast
  %tmp_309 = call i11 @_ssdm_op_BitConcatenate.i11.i6.i5(i6 %tmp_s, i5 0)
  %p_shl33_cast = zext i11 %tmp_309 to i12
  %tmp_355 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %tmp_s, i3 0)
  %p_shl34_cast = zext i9 %tmp_355 to i12
  %tmp_357 = sub i12 %p_shl33_cast, %p_shl34_cast
  %tmp_368_cast = sext i12 %tmp_357 to i13
  %tmp_170 = add i7 48, %co_cast138_cast
  %tmp_359 = call i12 @_ssdm_op_BitConcatenate.i12.i7.i5(i7 %tmp_170, i5 0)
  %p_shl31_cast = zext i12 %tmp_359 to i13
  %tmp_360 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_170, i3 0)
  %p_shl32_cast = zext i10 %tmp_360 to i13
  %tmp_362 = sub i13 %p_shl31_cast, %p_shl32_cast
  %tmp_439_cast = sext i13 %tmp_362 to i14
  %tmp_171 = add i7 -56, %co_cast138_cast
  %tmp_363 = call i12 @_ssdm_op_BitConcatenate.i12.i7.i5(i7 %tmp_171, i5 0)
  %p_shl29_cast = zext i12 %tmp_363 to i13
  %tmp_364 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_171, i3 0)
  %p_shl30_cast = zext i10 %tmp_364 to i13
  %tmp_366 = sub i13 %p_shl29_cast, %p_shl30_cast
  %tmp_442_cast = sext i13 %tmp_366 to i14
  %tmp_367 = call i11 @_ssdm_op_BitConcatenate.i11.i1.i5.i5(i1 true, i5 %co, i5 0)
  %tmp_368 = sext i11 %tmp_367 to i12
  %p_shl27_cast = zext i12 %tmp_368 to i13
  %tmp_370 = call i9 @_ssdm_op_BitConcatenate.i9.i1.i5.i3(i1 true, i5 %co, i3 0)
  %tmp_371 = sext i9 %tmp_370 to i10
  %p_shl28_cast = zext i10 %tmp_371 to i13
  %tmp_373 = sub i13 %p_shl27_cast, %p_shl28_cast
  %tmp_447_cast = sext i13 %tmp_373 to i14
  %tmp_172 = add i8 120, %co_cast8
  %tmp_375 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_172, i5 0)
  %p_shl25_cast = zext i13 %tmp_375 to i14
  %tmp_377 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %tmp_172, i3 0)
  %p_shl26_cast = zext i11 %tmp_377 to i14
  %tmp_379 = sub i14 %p_shl25_cast, %p_shl26_cast
  %tmp_450_cast = sext i14 %tmp_379 to i15
  %tmp_173 = add i8 -112, %co_cast8
  %tmp_381 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_173, i5 0)
  %p_shl23_cast = zext i13 %tmp_381 to i14
  %tmp_384 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %tmp_173, i3 0)
  %p_shl24_cast = zext i11 %tmp_384 to i14
  %tmp_386 = sub i14 %p_shl23_cast, %p_shl24_cast
  %tmp_453_cast = sext i14 %tmp_386 to i15
  %tmp_174 = add i8 -88, %co_cast8
  %tmp_388 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_174, i5 0)
  %p_shl21_cast = zext i13 %tmp_388 to i14
  %tmp_390 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %tmp_174, i3 0)
  %p_shl22_cast = zext i11 %tmp_390 to i14
  %tmp_392 = sub i14 %p_shl21_cast, %p_shl22_cast
  %tmp_456_cast = sext i14 %tmp_392 to i15
  %tmp_394 = call i12 @_ssdm_op_BitConcatenate.i12.i2.i5.i5(i2 -2, i5 %co, i5 0)
  %tmp_395 = sext i12 %tmp_394 to i13
  %p_shl19_cast = zext i13 %tmp_395 to i14
  %tmp_396 = call i10 @_ssdm_op_BitConcatenate.i10.i2.i5.i3(i2 -2, i5 %co, i3 0)
  %tmp_397 = sext i10 %tmp_396 to i11
  %p_shl20_cast = zext i11 %tmp_397 to i14
  %tmp_398 = sub i14 %p_shl19_cast, %p_shl20_cast
  %tmp_461_cast = sext i14 %tmp_398 to i15
  %tmp_120 = trunc i5 %co to i1
  %p_shl1 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_120, i5 0)
  %p_shl1_cast = zext i6 %p_shl1 to i7
  %p_shl2 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_120, i3 0)
  %p_shl2_cast = zext i4 %p_shl2 to i7
  %tmp_175 = sub i7 %p_shl1_cast, %p_shl2_cast
  %p_lshr_f1_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co, i32 1, i32 4)
  %tmp_186_cast = zext i4 %p_lshr_f1_cast to i7
  %tmp_121 = trunc i5 %co to i2
  %p_shl = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_121, i5 0)
  %p_shl_cast = zext i7 %p_shl to i8
  %tmp_122 = shl i5 %co, 3
  %p_shl3_cast = zext i5 %tmp_122 to i8
  %tmp_176 = sub i8 %p_shl_cast, %p_shl3_cast
  %p_lshr_f_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co, i32 2, i32 4)
  %tmp_189_cast = zext i3 %p_lshr_f_cast to i8
  br label %.preheader35

.preheader35.loopexit:                            ; preds = %.preheader34
  br label %.preheader35

.preheader35:                                     ; preds = %.preheader35.loopexit, %.preheader35.preheader
  %ci = phi i5 [ 0, %.preheader35.preheader ], [ %ci_9, %.preheader35.loopexit ]
  %ci_cast = zext i5 %ci to i8
  %ci_cast1 = zext i5 %ci to i7
  %exitcond2 = icmp eq i5 %ci, -8
  %empty_404 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_9 = add i5 %ci, 1
  br i1 %exitcond2, label %.loopexit.loopexit, label %1

; <label>:1                                       ; preds = %.preheader35
  %tmp_186_cast1 = zext i5 %ci to i18
  %tmp_186_cast2 = zext i5 %ci to i17
  %tmp_186_cast3 = zext i5 %ci to i16
  %tmp_186_cast4 = zext i5 %ci to i19
  %tmp_186_cast5 = zext i5 %ci to i15
  %tmp_186_cast6 = zext i5 %ci to i14
  %tmp_186_cast7 = zext i5 %ci to i13
  %tmp_186_cast8 = zext i5 %ci to i12
  %tmp_410 = add i12 %tmp_186_cast8, %tmp_362_cast
  %tmp_477_cast = sext i12 %tmp_410 to i64
  %shuffle_conv_1x1_add = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_477_cast
  %tmp_411 = add i13 %tmp_186_cast7, %tmp_368_cast
  %tmp_478_cast = sext i13 %tmp_411 to i64
  %shuffle_conv_1x1_add_1 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_478_cast
  %tmp_412 = add i14 %tmp_186_cast6, %tmp_439_cast
  %tmp_479_cast = sext i14 %tmp_412 to i64
  %shuffle_conv_1x1_add_2 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_479_cast
  %tmp_413 = add i14 %tmp_186_cast6, %tmp_442_cast
  %tmp_480_cast = sext i14 %tmp_413 to i64
  %shuffle_conv_1x1_add_3 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_480_cast
  %tmp_414 = add i14 %tmp_186_cast6, %tmp_447_cast
  %tmp_481_cast = sext i14 %tmp_414 to i64
  %shuffle_conv_1x1_add_4 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_481_cast
  %tmp_415 = add i15 %tmp_186_cast5, %tmp_450_cast
  %tmp_482_cast = sext i15 %tmp_415 to i64
  %shuffle_conv_1x1_add_5 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_482_cast
  %tmp_416 = add i15 %tmp_186_cast5, %tmp_453_cast
  %tmp_483_cast = sext i15 %tmp_416 to i64
  %shuffle_conv_1x1_add_6 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_483_cast
  %tmp_417 = add i15 %tmp_186_cast5, %tmp_456_cast
  %tmp_484_cast = sext i15 %tmp_417 to i64
  %shuffle_conv_1x1_add_7 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_484_cast
  %tmp_418 = add i15 %tmp_186_cast5, %tmp_461_cast
  %tmp_485_cast = sext i15 %tmp_418 to i64
  %shuffle_conv_1x1_add_8 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_485_cast
  %ShuffleConvs_0_Shuff = getelementptr [576 x float]* @ShuffleConvs_0_Shuff_7, i64 0, i64 %tmp_477_cast
  %ShuffleConvs_0_Shuff_23 = getelementptr [576 x float]* @ShuffleConvs_0_Shuff_11, i64 0, i64 %tmp_477_cast
  %ShuffleConvs_0_Shuff_24 = getelementptr [576 x float]* @ShuffleConvs_0_Shuff_8, i64 0, i64 %tmp_477_cast
  %ShuffleConvs_0_Downs = getelementptr [576 x float]* @ShuffleConvs_0_Downs_7, i64 0, i64 %tmp_477_cast
  %ShuffleConvs_0_Downs_11 = getelementptr [576 x float]* @ShuffleConvs_0_Downs_8, i64 0, i64 %tmp_477_cast
  %ShuffleConvs_0_Shuff_25 = getelementptr [576 x float]* @ShuffleConvs_0_Shuff_18, i64 0, i64 %tmp_477_cast
  %ShuffleConvs_0_Downs_12 = getelementptr [576 x float]* @ShuffleConvs_0_Downs_10, i64 0, i64 %tmp_477_cast
  %ShuffleConvs_0_Shuff_26 = getelementptr [576 x float]* @ShuffleConvs_0_Shuff_5, i64 0, i64 %tmp_477_cast
  %ShuffleConvs_0_Shuff_27 = getelementptr [576 x float]* @ShuffleConvs_0_Shuff_13, i64 0, i64 %tmp_477_cast
  %shuffle_conv_1x1_loa = load float* %shuffle_conv_1x1_add, align 4
  store float %shuffle_conv_1x1_loa, float* %ShuffleConvs_0_Downs, align 4
  %shuffle_conv_1x1_loa_1 = load float* %shuffle_conv_1x1_add_1, align 4
  store float %shuffle_conv_1x1_loa_1, float* %ShuffleConvs_0_Downs_12, align 4
  %shuffle_conv_1x1_loa_2 = load float* %shuffle_conv_1x1_add_2, align 4
  store float %shuffle_conv_1x1_loa_2, float* %ShuffleConvs_0_Downs_11, align 4
  %shuffle_conv_1x1_loa_3 = load float* %shuffle_conv_1x1_add_3, align 4
  store float %shuffle_conv_1x1_loa_3, float* %ShuffleConvs_0_Shuff_26, align 4
  %shuffle_conv_1x1_loa_4 = load float* %shuffle_conv_1x1_add_4, align 4
  store float %shuffle_conv_1x1_loa_4, float* %ShuffleConvs_0_Shuff, align 4
  %shuffle_conv_1x1_loa_5 = load float* %shuffle_conv_1x1_add_5, align 4
  store float %shuffle_conv_1x1_loa_5, float* %ShuffleConvs_0_Shuff_24, align 4
  %shuffle_conv_1x1_loa_6 = load float* %shuffle_conv_1x1_add_6, align 4
  store float %shuffle_conv_1x1_loa_6, float* %ShuffleConvs_0_Shuff_23, align 4
  %shuffle_conv_1x1_loa_7 = load float* %shuffle_conv_1x1_add_7, align 4
  store float %shuffle_conv_1x1_loa_7, float* %ShuffleConvs_0_Shuff_27, align 4
  %shuffle_conv_1x1_loa_8 = load float* %shuffle_conv_1x1_add_8, align 4
  store float %shuffle_conv_1x1_loa_8, float* %ShuffleConvs_0_Shuff_25, align 4
  %tmp_187 = add i7 %tmp_175, %ci_cast1
  %tmp_188_cast = sext i7 %tmp_187 to i13
  br label %2

; <label>:2                                       ; preds = %3, %1
  %i = phi i3 [ 0, %1 ], [ %i_1, %3 ]
  %exitcond5 = icmp eq i3 %i, -4
  %empty_405 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_1 = add i3 %i, 1
  br i1 %exitcond5, label %.preheader34.preheader, label %3

.preheader34.preheader:                           ; preds = %2
  %tmp_219 = add i8 %tmp_176, %ci_cast
  %tmp_220_cast = sext i8 %tmp_219 to i15
  br label %.preheader34

; <label>:3                                       ; preds = %2
  %tmp_128 = trunc i3 %i to i2
  %p_shl6 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_128, i5 0)
  %p_shl6_cast = zext i7 %p_shl6 to i8
  %p_shl7 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_128, i3 0)
  %p_shl7_cast = zext i5 %p_shl7 to i8
  %tmp_221 = sub i8 %p_shl6_cast, %p_shl7_cast
  %tmp_330_cast1 = sext i8 %tmp_221 to i11
  %tmp_330_cast127_cast_1 = sext i8 %tmp_221 to i9
  %tmp_330_cast127_cast = sext i8 %tmp_221 to i10
  %tmp1 = add i9 216, %tmp_330_cast127_cast_1
  %tmp_222 = add i9 %tmp1, %co_cast143_cast1
  %tmp_429 = call i14 @_ssdm_op_BitConcatenate.i14.i9.i5(i9 %tmp_222, i5 0)
  %p_shl75_cast = zext i14 %tmp_429 to i15
  %tmp_430 = call i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9 %tmp_222, i3 0)
  %p_shl76_cast = zext i12 %tmp_430 to i15
  %tmp_431 = sub i15 %p_shl75_cast, %p_shl76_cast
  %tmp_505_cast2 = sext i15 %tmp_431 to i16
  %tmp_432 = add i16 %tmp_186_cast3, %tmp_505_cast2
  %tmp_506_cast = sext i16 %tmp_432 to i64
  %shuffle_conv_1x1_add_9 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_506_cast
  %shuffle_conv_1x1_loa_9 = load float* %shuffle_conv_1x1_add_9, align 4
  %p_shl8 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_128, i4 0)
  %p_shl8_cast = zext i6 %p_shl8 to i7
  %p_shl9 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_128, i2 0)
  %p_shl9_cast = zext i4 %p_shl9 to i7
  %tmp_223 = sub i7 %p_shl8_cast, %p_shl9_cast
  %tmp_224 = add i7 %tmp_223, %tmp_186_cast
  %tmp_433 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_224, i6 0)
  %tmp_434 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_224, i4 0)
  %p_shl74_cast = sext i11 %tmp_434 to i13
  %tmp_435 = sub i13 %tmp_433, %p_shl74_cast
  %tmp_436 = add i13 %tmp_188_cast, %tmp_435
  %tmp_514_cast = sext i13 %tmp_436 to i64
  %ShuffleConvs_1_Shuff = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_50, i64 0, i64 %tmp_514_cast
  %ShuffleConvs_1_Shuff_72 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_13, i64 0, i64 %tmp_514_cast
  %ShuffleConvs_1_Shuff_73 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_11, i64 0, i64 %tmp_514_cast
  %ShuffleConvs_1_Shuff_74 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_21, i64 0, i64 %tmp_514_cast
  %ShuffleConvs_1_Shuff_75 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_19, i64 0, i64 %tmp_514_cast
  %ShuffleConvs_1_Shuff_76 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_37, i64 0, i64 %tmp_514_cast
  %ShuffleConvs_1_Shuff_77 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_41, i64 0, i64 %tmp_514_cast
  %ShuffleConvs_1_Shuff_78 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_27, i64 0, i64 %tmp_514_cast
  %ShuffleConvs_1_Shuff_79 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_25, i64 0, i64 %tmp_514_cast
  %ShuffleConvs_1_Shuff_80 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_5, i64 0, i64 %tmp_514_cast
  %ShuffleConvs_1_Shuff_81 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_7, i64 0, i64 %tmp_514_cast
  %ShuffleConvs_1_Downs = getelementptr [2304 x float]* @ShuffleConvs_1_Downs_10, i64 0, i64 %tmp_514_cast
  %ShuffleConvs_1_Shuff_82 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_1, i64 0, i64 %tmp_514_cast
  %ShuffleConvs_1_Shuff_83 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_33, i64 0, i64 %tmp_514_cast
  %ShuffleConvs_1_Shuff_84 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_47, i64 0, i64 %tmp_514_cast
  %ShuffleConvs_1_Shuff_85 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_45, i64 0, i64 %tmp_514_cast
  %ShuffleConvs_1_Downs_11 = getelementptr [2304 x float]* @ShuffleConvs_1_Downs_7, i64 0, i64 %tmp_514_cast
  %ShuffleConvs_1_Downs_12 = getelementptr [2304 x float]* @ShuffleConvs_1_Downs_8, i64 0, i64 %tmp_514_cast
  %ShuffleConvs_1_Shuff_86 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_31, i64 0, i64 %tmp_514_cast
  store float %shuffle_conv_1x1_loa_9, float* %ShuffleConvs_1_Downs_11, align 4
  %tmp2 = add i9 -200, %tmp_330_cast127_cast_1
  %tmp_225 = add i9 %tmp2, %co_cast143_cast1
  %tmp_437 = call i14 @_ssdm_op_BitConcatenate.i14.i9.i5(i9 %tmp_225, i5 0)
  %p_shl71_cast = zext i14 %tmp_437 to i15
  %tmp_438 = call i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9 %tmp_225, i3 0)
  %p_shl72_cast = zext i12 %tmp_438 to i15
  %tmp_439 = sub i15 %p_shl71_cast, %p_shl72_cast
  %tmp_517_cast = sext i15 %tmp_439 to i16
  %tmp_440 = add i16 %tmp_186_cast3, %tmp_517_cast
  %tmp_518_cast = sext i16 %tmp_440 to i64
  %shuffle_conv_1x1_add_10 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_518_cast
  %shuffle_conv_1x1_loa_10 = load float* %shuffle_conv_1x1_add_10, align 4
  store float %shuffle_conv_1x1_loa_10, float* %ShuffleConvs_1_Downs, align 4
  %tmp3 = add i9 -104, %tmp_330_cast127_cast_1
  %tmp3_cast = zext i9 %tmp3 to i10
  %tmp_226 = add i10 %tmp3_cast, %co_cast143_cast
  %tmp_441 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_226, i5 0)
  %p_shl69_cast = zext i15 %tmp_441 to i16
  %tmp_442 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_226, i3 0)
  %p_shl70_cast = zext i13 %tmp_442 to i16
  %tmp_443 = sub i16 %p_shl69_cast, %p_shl70_cast
  %tmp_521_cast = sext i16 %tmp_443 to i17
  %tmp_444 = add i17 %tmp_186_cast2, %tmp_521_cast
  %tmp_522_cast = sext i17 %tmp_444 to i64
  %shuffle_conv_1x1_add_11 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_522_cast
  %shuffle_conv_1x1_loa_11 = load float* %shuffle_conv_1x1_add_11, align 4
  store float %shuffle_conv_1x1_loa_11, float* %ShuffleConvs_1_Downs_12, align 4
  %tmp4 = add i10 504, %tmp_330_cast127_cast
  %tmp_227 = add i10 %tmp4, %co_cast143_cast
  %tmp_445 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_227, i5 0)
  %p_shl67_cast = zext i15 %tmp_445 to i16
  %tmp_446 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_227, i3 0)
  %p_shl68_cast = zext i13 %tmp_446 to i16
  %tmp_447 = sub i16 %p_shl67_cast, %p_shl68_cast
  %tmp_525_cast = sext i16 %tmp_447 to i17
  %tmp_448 = add i17 %tmp_186_cast2, %tmp_525_cast
  %tmp_526_cast = sext i17 %tmp_448 to i64
  %shuffle_conv_1x1_add_12 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_526_cast
  %shuffle_conv_1x1_loa_12 = load float* %shuffle_conv_1x1_add_12, align 4
  store float %shuffle_conv_1x1_loa_12, float* %ShuffleConvs_1_Shuff_82, align 4
  %tmp5 = add i10 -424, %tmp_330_cast127_cast
  %tmp_228 = add i10 %tmp5, %co_cast143_cast
  %tmp_449 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_228, i5 0)
  %p_shl65_cast = zext i15 %tmp_449 to i16
  %tmp_450 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_228, i3 0)
  %p_shl66_cast = zext i13 %tmp_450 to i16
  %tmp_451 = sub i16 %p_shl65_cast, %p_shl66_cast
  %tmp_529_cast = sext i16 %tmp_451 to i17
  %tmp_452 = add i17 %tmp_186_cast2, %tmp_529_cast
  %tmp_530_cast = sext i17 %tmp_452 to i64
  %shuffle_conv_1x1_add_13 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_530_cast
  %shuffle_conv_1x1_loa_13 = load float* %shuffle_conv_1x1_add_13, align 4
  store float %shuffle_conv_1x1_loa_13, float* %ShuffleConvs_1_Shuff_80, align 4
  %tmp6 = add i10 -328, %tmp_330_cast127_cast
  %tmp_229 = add i10 %tmp6, %co_cast143_cast
  %tmp_453 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_229, i5 0)
  %p_shl63_cast = zext i15 %tmp_453 to i16
  %tmp_454 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_229, i3 0)
  %p_shl64_cast = zext i13 %tmp_454 to i16
  %tmp_455 = sub i16 %p_shl63_cast, %p_shl64_cast
  %tmp_533_cast = sext i16 %tmp_455 to i17
  %tmp_456 = add i17 %tmp_186_cast2, %tmp_533_cast
  %tmp_534_cast = sext i17 %tmp_456 to i64
  %shuffle_conv_1x1_add_14 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_534_cast
  %shuffle_conv_1x1_loa_14 = load float* %shuffle_conv_1x1_add_14, align 4
  store float %shuffle_conv_1x1_loa_14, float* %ShuffleConvs_1_Shuff_81, align 4
  %tmp7 = add i10 -232, %tmp_330_cast127_cast
  %tmp_230 = add i10 %tmp7, %co_cast143_cast
  %tmp_457 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_230, i5 0)
  %p_shl61_cast = zext i15 %tmp_457 to i16
  %tmp_458 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_230, i3 0)
  %p_shl62_cast = zext i13 %tmp_458 to i16
  %tmp_459 = sub i16 %p_shl61_cast, %p_shl62_cast
  %tmp_537_cast = sext i16 %tmp_459 to i17
  %tmp_460 = add i17 %tmp_186_cast2, %tmp_537_cast
  %tmp_538_cast = sext i17 %tmp_460 to i64
  %shuffle_conv_1x1_add_15 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_538_cast
  %shuffle_conv_1x1_loa_15 = load float* %shuffle_conv_1x1_add_15, align 4
  store float %shuffle_conv_1x1_loa_15, float* %ShuffleConvs_1_Shuff_73, align 4
  %tmp8 = add i9 -136, %tmp_330_cast127_cast_1
  %tmp_234 = add i9 %tmp8, %co_cast143_cast1
  %tmp_461 = call i14 @_ssdm_op_BitConcatenate.i14.i9.i5(i9 %tmp_234, i5 0)
  %tmp_462 = sext i14 %tmp_461 to i15
  %p_shl59_cast = zext i15 %tmp_462 to i16
  %tmp_463 = call i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9 %tmp_234, i3 0)
  %tmp_464 = sext i12 %tmp_463 to i13
  %p_shl60_cast = zext i13 %tmp_464 to i16
  %tmp_465 = sub i16 %p_shl59_cast, %p_shl60_cast
  %tmp_543_cast = sext i16 %tmp_465 to i17
  %tmp_466 = add i17 %tmp_186_cast2, %tmp_543_cast
  %tmp_544_cast = sext i17 %tmp_466 to i64
  %shuffle_conv_1x1_add_16 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_544_cast
  %shuffle_conv_1x1_loa_16 = load float* %shuffle_conv_1x1_add_16, align 4
  store float %shuffle_conv_1x1_loa_16, float* %ShuffleConvs_1_Shuff_72, align 4
  %tmp9 = add i11 984, %tmp_330_cast1
  %tmp_239 = add i11 %tmp9, %co_cast144_cast
  %tmp_467 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_239, i5 0)
  %p_shl57_cast = zext i16 %tmp_467 to i17
  %tmp_468 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_239, i3 0)
  %p_shl58_cast = zext i14 %tmp_468 to i17
  %tmp_469 = sub i17 %p_shl57_cast, %p_shl58_cast
  %tmp_547_cast = sext i17 %tmp_469 to i18
  %tmp_470 = add i18 %tmp_186_cast1, %tmp_547_cast
  %tmp_548_cast = sext i18 %tmp_470 to i64
  %shuffle_conv_1x1_add_17 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_548_cast
  %shuffle_conv_1x1_loa_17 = load float* %shuffle_conv_1x1_add_17, align 4
  store float %shuffle_conv_1x1_loa_17, float* %ShuffleConvs_1_Shuff_75, align 4
  %tmp10 = add i11 -968, %tmp_330_cast1
  %tmp_244 = add i11 %tmp10, %co_cast144_cast
  %tmp_471 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_244, i5 0)
  %p_shl55_cast = zext i16 %tmp_471 to i17
  %tmp_472 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_244, i3 0)
  %p_shl56_cast = zext i14 %tmp_472 to i17
  %tmp_473 = sub i17 %p_shl55_cast, %p_shl56_cast
  %tmp_551_cast = sext i17 %tmp_473 to i18
  %tmp_474 = add i18 %tmp_186_cast1, %tmp_551_cast
  %tmp_552_cast = sext i18 %tmp_474 to i64
  %shuffle_conv_1x1_add_18 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_552_cast
  %shuffle_conv_1x1_loa_18 = load float* %shuffle_conv_1x1_add_18, align 4
  store float %shuffle_conv_1x1_loa_18, float* %ShuffleConvs_1_Shuff_74, align 4
  %tmp11 = add i11 -872, %tmp_330_cast1
  %tmp_247 = add i11 %tmp11, %co_cast144_cast
  %tmp_475 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_247, i5 0)
  %p_shl53_cast = zext i16 %tmp_475 to i17
  %tmp_476 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_247, i3 0)
  %p_shl54_cast = zext i14 %tmp_476 to i17
  %tmp_477 = sub i17 %p_shl53_cast, %p_shl54_cast
  %tmp_555_cast = sext i17 %tmp_477 to i18
  %tmp_478 = add i18 %tmp_186_cast1, %tmp_555_cast
  %tmp_556_cast = sext i18 %tmp_478 to i64
  %shuffle_conv_1x1_add_19 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_556_cast
  %shuffle_conv_1x1_loa_19 = load float* %shuffle_conv_1x1_add_19, align 4
  store float %shuffle_conv_1x1_loa_19, float* %ShuffleConvs_1_Shuff_79, align 4
  %tmp12 = add i11 -776, %tmp_330_cast1
  %tmp_250 = add i11 %tmp12, %co_cast144_cast
  %tmp_479 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_250, i5 0)
  %p_shl51_cast = zext i16 %tmp_479 to i17
  %tmp_480 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_250, i3 0)
  %p_shl52_cast = zext i14 %tmp_480 to i17
  %tmp_481 = sub i17 %p_shl51_cast, %p_shl52_cast
  %tmp_559_cast = sext i17 %tmp_481 to i18
  %tmp_482 = add i18 %tmp_186_cast1, %tmp_559_cast
  %tmp_560_cast = sext i18 %tmp_482 to i64
  %shuffle_conv_1x1_add_20 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_560_cast
  %shuffle_conv_1x1_loa_20 = load float* %shuffle_conv_1x1_add_20, align 4
  store float %shuffle_conv_1x1_loa_20, float* %ShuffleConvs_1_Shuff_78, align 4
  %tmp13 = add i11 -680, %tmp_330_cast1
  %tmp_253 = add i11 %tmp13, %co_cast144_cast
  %tmp_483 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_253, i5 0)
  %p_shl49_cast = zext i16 %tmp_483 to i17
  %tmp_484 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_253, i3 0)
  %p_shl50_cast = zext i14 %tmp_484 to i17
  %tmp_485 = sub i17 %p_shl49_cast, %p_shl50_cast
  %tmp_563_cast = sext i17 %tmp_485 to i18
  %tmp_486 = add i18 %tmp_186_cast1, %tmp_563_cast
  %tmp_564_cast = sext i18 %tmp_486 to i64
  %shuffle_conv_1x1_add_21 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_564_cast
  %shuffle_conv_1x1_loa_21 = load float* %shuffle_conv_1x1_add_21, align 4
  store float %shuffle_conv_1x1_loa_21, float* %ShuffleConvs_1_Shuff_86, align 4
  %tmp14 = add i11 -584, %tmp_330_cast1
  %tmp_256 = add i11 %tmp14, %co_cast144_cast
  %tmp_487 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_256, i5 0)
  %p_shl47_cast = zext i16 %tmp_487 to i17
  %tmp_488 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_256, i3 0)
  %p_shl48_cast = zext i14 %tmp_488 to i17
  %tmp_489 = sub i17 %p_shl47_cast, %p_shl48_cast
  %tmp_567_cast = sext i17 %tmp_489 to i18
  %tmp_490 = add i18 %tmp_186_cast1, %tmp_567_cast
  %tmp_568_cast = sext i18 %tmp_490 to i64
  %shuffle_conv_1x1_add_22 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_568_cast
  %shuffle_conv_1x1_loa_22 = load float* %shuffle_conv_1x1_add_22, align 4
  store float %shuffle_conv_1x1_loa_22, float* %ShuffleConvs_1_Shuff_83, align 4
  %tmp15 = add i11 -488, %tmp_330_cast1
  %tmp_259 = add i11 %tmp15, %co_cast144_cast
  %tmp_491 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_259, i5 0)
  %p_shl45_cast = zext i16 %tmp_491 to i17
  %tmp_492 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_259, i3 0)
  %p_shl46_cast = zext i14 %tmp_492 to i17
  %tmp_493 = sub i17 %p_shl45_cast, %p_shl46_cast
  %tmp_571_cast = sext i17 %tmp_493 to i18
  %tmp_494 = add i18 %tmp_186_cast1, %tmp_571_cast
  %tmp_572_cast = sext i18 %tmp_494 to i64
  %shuffle_conv_1x1_add_23 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_572_cast
  %shuffle_conv_1x1_loa_23 = load float* %shuffle_conv_1x1_add_23, align 4
  store float %shuffle_conv_1x1_loa_23, float* %ShuffleConvs_1_Shuff_76, align 4
  %tmp16 = add i10 -392, %tmp_330_cast127_cast
  %tmp_262 = add i10 %tmp16, %co_cast143_cast
  %tmp_495 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_262, i5 0)
  %tmp_496 = sext i15 %tmp_495 to i16
  %p_shl43_cast = zext i16 %tmp_496 to i17
  %tmp_497 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_262, i3 0)
  %tmp_498 = sext i13 %tmp_497 to i14
  %p_shl44_cast = zext i14 %tmp_498 to i17
  %tmp_499 = sub i17 %p_shl43_cast, %p_shl44_cast
  %tmp_577_cast = sext i17 %tmp_499 to i18
  %tmp_500 = add i18 %tmp_186_cast1, %tmp_577_cast
  %tmp_578_cast = sext i18 %tmp_500 to i64
  %shuffle_conv_1x1_add_24 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_578_cast
  %shuffle_conv_1x1_loa_24 = load float* %shuffle_conv_1x1_add_24, align 4
  store float %shuffle_conv_1x1_loa_24, float* %ShuffleConvs_1_Shuff_77, align 4
  %tmp17 = add i10 -296, %tmp_330_cast127_cast
  %tmp_265 = add i10 %tmp17, %co_cast143_cast
  %tmp_501 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_265, i5 0)
  %tmp_502 = sext i15 %tmp_501 to i16
  %p_shl41_cast = zext i16 %tmp_502 to i17
  %tmp_503 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_265, i3 0)
  %tmp_504 = sext i13 %tmp_503 to i14
  %p_shl42_cast = zext i14 %tmp_504 to i17
  %tmp_505 = sub i17 %p_shl41_cast, %p_shl42_cast
  %tmp_583_cast = sext i17 %tmp_505 to i18
  %tmp_506 = add i18 %tmp_186_cast1, %tmp_583_cast
  %tmp_584_cast = sext i18 %tmp_506 to i64
  %shuffle_conv_1x1_add_25 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_584_cast
  %shuffle_conv_1x1_loa_25 = load float* %shuffle_conv_1x1_add_25, align 4
  store float %shuffle_conv_1x1_loa_25, float* %ShuffleConvs_1_Shuff_85, align 4
  %tmp_507 = sext i14 %tmp_437 to i16
  %p_shl39_cast = zext i16 %tmp_507 to i17
  %tmp_508 = sext i12 %tmp_438 to i14
  %p_shl40_cast = zext i14 %tmp_508 to i17
  %tmp_509 = sub i17 %p_shl39_cast, %p_shl40_cast
  %tmp_589_cast = sext i17 %tmp_509 to i18
  %tmp_510 = add i18 %tmp_186_cast1, %tmp_589_cast
  %tmp_590_cast = sext i18 %tmp_510 to i64
  %shuffle_conv_1x1_add_26 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_590_cast
  %shuffle_conv_1x1_loa_26 = load float* %shuffle_conv_1x1_add_26, align 4
  store float %shuffle_conv_1x1_loa_26, float* %ShuffleConvs_1_Shuff_84, align 4
  %tmp19_cast1 = sext i9 %tmp3 to i11
  %tmp19_cast = zext i11 %tmp19_cast1 to i12
  %tmp_268 = add i12 %tmp19_cast, %co_cast2
  %tmp_511 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_268, i5 0)
  %p_shl37_cast = zext i17 %tmp_511 to i18
  %tmp_512 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_268, i3 0)
  %p_shl38_cast = zext i15 %tmp_512 to i18
  %tmp_513 = sub i18 %p_shl37_cast, %p_shl38_cast
  %tmp_593_cast = sext i18 %tmp_513 to i19
  %tmp_514 = add i19 %tmp_186_cast4, %tmp_593_cast
  %tmp_594_cast = sext i19 %tmp_514 to i64
  %shuffle_conv_1x1_add_27 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_594_cast
  %shuffle_conv_1x1_loa_27 = load float* %shuffle_conv_1x1_add_27, align 4
  store float %shuffle_conv_1x1_loa_27, float* %ShuffleConvs_1_Shuff, align 4
  br label %2

.preheader34:                                     ; preds = %4, %.preheader34.preheader
  %i1 = phi i5 [ %i_3, %4 ], [ 0, %.preheader34.preheader ]
  %exitcond11 = icmp eq i5 %i1, -16
  %empty_406 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %i_3 = add i5 %i1, 1
  br i1 %exitcond11, label %.preheader35.loopexit, label %4

; <label>:4                                       ; preds = %.preheader34
  %tmp_130 = trunc i5 %i1 to i4
  %p_shl3 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_130, i5 0)
  %p_shl12_cast = zext i9 %p_shl3 to i10
  %p_shl12 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_130, i3 0)
  %p_shl13_cast1 = zext i7 %p_shl12 to i8
  %p_shl13_cast = zext i7 %p_shl12 to i10
  %tmp_310 = sub i10 %p_shl12_cast, %p_shl13_cast
  %tmp_438_cast1 = sext i10 %tmp_310 to i13
  %tmp_438_cast = sext i10 %tmp_310 to i12
  %tmp_438_cast_cast = sext i10 %tmp_310 to i11
  %tmp20 = add i12 2040, %tmp_438_cast
  %tmp_311 = add i12 %tmp20, %co_cast2
  %tmp_520 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_311, i5 0)
  %p_shl95_cast = zext i17 %tmp_520 to i18
  %tmp_521 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_311, i3 0)
  %p_shl96_cast = zext i15 %tmp_521 to i18
  %tmp_522 = sub i18 %p_shl95_cast, %p_shl96_cast
  %tmp_606_cast = sext i18 %tmp_522 to i19
  %tmp_523 = add i19 %tmp_186_cast4, %tmp_606_cast
  %tmp_607_cast = sext i19 %tmp_523 to i64
  %shuffle_conv_1x1_add_28 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_607_cast
  %shuffle_conv_1x1_loa_28 = load float* %shuffle_conv_1x1_add_28, align 4
  %tmp_131 = shl i5 %i1, 1
  %p_shl14_cast = zext i5 %tmp_131 to i8
  %tmp_312 = sub i8 %p_shl13_cast1, %p_shl14_cast
  %tmp_313 = add i8 %tmp_312, %tmp_189_cast
  %tmp_524 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_313, i7 0)
  %tmp_525 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_313, i5 0)
  %p_shl94_cast = sext i13 %tmp_525 to i15
  %tmp_526 = sub i15 %tmp_524, %p_shl94_cast
  %tmp_527 = add i15 %tmp_220_cast, %tmp_526
  %tmp_614_cast = sext i15 %tmp_527 to i64
  %ShuffleConvs_2_Shuff = getelementptr [9216 x float]* @ShuffleConvs_2_Shuff_13, i64 0, i64 %tmp_614_cast
  %ShuffleConvs_2_Shuff_23 = getelementptr [9216 x float]* @ShuffleConvs_2_Shuff_5, i64 0, i64 %tmp_614_cast
  %ShuffleConvs_2_Downs = getelementptr [9216 x float]* @ShuffleConvs_2_Downs_10, i64 0, i64 %tmp_614_cast
  %ShuffleConvs_2_Shuff_24 = getelementptr [9216 x float]* @ShuffleConvs_2_Shuff_8, i64 0, i64 %tmp_614_cast
  %ShuffleConvs_2_Downs_11 = getelementptr [9216 x float]* @ShuffleConvs_2_Downs_8, i64 0, i64 %tmp_614_cast
  %ShuffleConvs_2_Downs_12 = getelementptr [9216 x float]* @ShuffleConvs_2_Downs_7, i64 0, i64 %tmp_614_cast
  %ShuffleConvs_2_Shuff_25 = getelementptr [9216 x float]* @ShuffleConvs_2_Shuff_18, i64 0, i64 %tmp_614_cast
  %ShuffleConvs_2_Shuff_26 = getelementptr [9216 x float]* @ShuffleConvs_2_Shuff_7, i64 0, i64 %tmp_614_cast
  %ShuffleConvs_2_Shuff_27 = getelementptr [9216 x float]* @ShuffleConvs_2_Shuff_11, i64 0, i64 %tmp_614_cast
  store float %shuffle_conv_1x1_loa_28, float* %ShuffleConvs_2_Downs_12, align 4
  %tmp21 = add i12 -1672, %tmp_438_cast
  %tmp_314 = add i12 %tmp21, %co_cast2
  %tmp_528 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_314, i5 0)
  %p_shl91_cast = zext i17 %tmp_528 to i18
  %tmp_529 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_314, i3 0)
  %p_shl92_cast = zext i15 %tmp_529 to i18
  %tmp_530 = sub i18 %p_shl91_cast, %p_shl92_cast
  %tmp_617_cast = sext i18 %tmp_530 to i19
  %tmp_531 = add i19 %tmp_186_cast4, %tmp_617_cast
  %tmp_618_cast = sext i19 %tmp_531 to i64
  %shuffle_conv_1x1_add_29 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_618_cast
  %shuffle_conv_1x1_loa_29 = load float* %shuffle_conv_1x1_add_29, align 4
  store float %shuffle_conv_1x1_loa_29, float* %ShuffleConvs_2_Downs, align 4
  %tmp22 = add i12 -1288, %tmp_438_cast
  %tmp_315 = add i12 %tmp22, %co_cast2
  %tmp_532 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_315, i5 0)
  %p_shl89_cast = zext i17 %tmp_532 to i18
  %tmp_533 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_315, i3 0)
  %p_shl90_cast = zext i15 %tmp_533 to i18
  %tmp_534 = sub i18 %p_shl89_cast, %p_shl90_cast
  %tmp_621_cast = sext i18 %tmp_534 to i19
  %tmp_535 = add i19 %tmp_186_cast4, %tmp_621_cast
  %tmp_622_cast = sext i19 %tmp_535 to i64
  %shuffle_conv_1x1_add_30 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_622_cast
  %shuffle_conv_1x1_loa_30 = load float* %shuffle_conv_1x1_add_30, align 4
  store float %shuffle_conv_1x1_loa_30, float* %ShuffleConvs_2_Downs_11, align 4
  %tmp23 = add i12 -904, %tmp_438_cast
  %tmp_316 = add i12 %tmp23, %co_cast2
  %tmp_536 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_316, i5 0)
  %p_shl87_cast = zext i17 %tmp_536 to i18
  %tmp_537 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_316, i3 0)
  %p_shl88_cast = zext i15 %tmp_537 to i18
  %tmp_538 = sub i18 %p_shl87_cast, %p_shl88_cast
  %tmp_625_cast = sext i18 %tmp_538 to i19
  %tmp_539 = add i19 %tmp_186_cast4, %tmp_625_cast
  %tmp_626_cast = sext i19 %tmp_539 to i64
  %shuffle_conv_1x1_add_31 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_626_cast
  %shuffle_conv_1x1_loa_31 = load float* %shuffle_conv_1x1_add_31, align 4
  store float %shuffle_conv_1x1_loa_31, float* %ShuffleConvs_2_Shuff_23, align 4
  %tmp24 = add i11 -520, %tmp_438_cast_cast
  %tmp_317 = add i11 %tmp24, %co_cast144_cast
  %tmp_540 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_317, i5 0)
  %tmp_541 = sext i16 %tmp_540 to i17
  %p_shl85_cast = zext i17 %tmp_541 to i18
  %tmp_542 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_317, i3 0)
  %tmp_543 = sext i14 %tmp_542 to i15
  %p_shl86_cast = zext i15 %tmp_543 to i18
  %tmp_544 = sub i18 %p_shl85_cast, %p_shl86_cast
  %tmp_631_cast = sext i18 %tmp_544 to i19
  %tmp_545 = add i19 %tmp_186_cast4, %tmp_631_cast
  %tmp_632_cast = sext i19 %tmp_545 to i64
  %shuffle_conv_1x1_add_32 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_632_cast
  %shuffle_conv_1x1_loa_32 = load float* %shuffle_conv_1x1_add_32, align 4
  store float %shuffle_conv_1x1_loa_32, float* %ShuffleConvs_2_Shuff_26, align 4
  %tmp25 = add i13 3960, %tmp_438_cast1
  %tmp_318 = add i13 %tmp25, %co_cast1
  %tmp_546 = call i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13 %tmp_318, i5 0)
  %p_shl83_cast = zext i18 %tmp_546 to i19
  %tmp_547 = call i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13 %tmp_318, i3 0)
  %p_shl84_cast = zext i16 %tmp_547 to i19
  %tmp_548 = sub i19 %p_shl83_cast, %p_shl84_cast
  %tmp_549 = add i19 %tmp_186_cast4, %tmp_548
  %tmp_636_cast = sext i19 %tmp_549 to i64
  %shuffle_conv_1x1_add_33 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_636_cast
  %shuffle_conv_1x1_loa_33 = load float* %shuffle_conv_1x1_add_33, align 4
  store float %shuffle_conv_1x1_loa_33, float* %ShuffleConvs_2_Shuff_24, align 4
  %tmp26 = add i13 -3848, %tmp_438_cast1
  %tmp_319 = add i13 %tmp26, %co_cast1
  %tmp_550 = call i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13 %tmp_319, i5 0)
  %p_shl81_cast = zext i18 %tmp_550 to i19
  %tmp_551 = call i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13 %tmp_319, i3 0)
  %p_shl82_cast = zext i16 %tmp_551 to i19
  %tmp_552 = sub i19 %p_shl81_cast, %p_shl82_cast
  %tmp_553 = add i19 %tmp_186_cast4, %tmp_552
  %tmp_640_cast = sext i19 %tmp_553 to i64
  %shuffle_conv_1x1_add_34 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_640_cast
  %shuffle_conv_1x1_loa_34 = load float* %shuffle_conv_1x1_add_34, align 4
  store float %shuffle_conv_1x1_loa_34, float* %ShuffleConvs_2_Shuff_27, align 4
  %tmp27 = add i13 -3464, %tmp_438_cast1
  %tmp_320 = add i13 %tmp27, %co_cast1
  %tmp_554 = call i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13 %tmp_320, i5 0)
  %p_shl79_cast = zext i18 %tmp_554 to i19
  %tmp_555 = call i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13 %tmp_320, i3 0)
  %p_shl80_cast = zext i16 %tmp_555 to i19
  %tmp_556 = sub i19 %p_shl79_cast, %p_shl80_cast
  %tmp_557 = add i19 %tmp_186_cast4, %tmp_556
  %tmp_644_cast = sext i19 %tmp_557 to i64
  %shuffle_conv_1x1_add_35 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_644_cast
  %shuffle_conv_1x1_loa_35 = load float* %shuffle_conv_1x1_add_35, align 4
  store float %shuffle_conv_1x1_loa_35, float* %ShuffleConvs_2_Shuff, align 4
  %tmp28 = add i13 -3080, %tmp_438_cast1
  %tmp_321 = add i13 %tmp28, %co_cast1
  %tmp_558 = call i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13 %tmp_321, i5 0)
  %p_shl77_cast = zext i18 %tmp_558 to i19
  %tmp_559 = call i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13 %tmp_321, i3 0)
  %p_shl78_cast = zext i16 %tmp_559 to i19
  %tmp_560 = sub i19 %p_shl77_cast, %p_shl78_cast
  %tmp_561 = add i19 %tmp_186_cast4, %tmp_560
  %tmp_648_cast = sext i19 %tmp_561 to i64
  %shuffle_conv_1x1_add_36 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_648_cast
  %shuffle_conv_1x1_loa_36 = load float* %shuffle_conv_1x1_add_36, align 4
  store float %shuffle_conv_1x1_loa_36, float* %ShuffleConvs_2_Shuff_25, align 4
  br label %.preheader34

.preheader33.loopexit:                            ; preds = %.preheader32
  br label %.preheader33

.preheader33:                                     ; preds = %.preheader33.preheader, %.preheader33.loopexit
  %co2 = phi i5 [ %co_23, %.preheader33.loopexit ], [ 0, %.preheader33.preheader ]
  %co2_cast1 = zext i5 %co2 to i11
  %co2_cast2 = zext i5 %co2 to i10
  %co2_cast120_cast = zext i5 %co2 to i9
  %co2_cast119_cast = zext i5 %co2 to i8
  %co2_cast5 = zext i5 %co2 to i7
  %co2_cast117_cast = zext i5 %co2 to i6
  %exitcond1 = icmp eq i5 %co2, -8
  %empty_407 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_23 = add i5 %co2, 1
  br i1 %exitcond1, label %.preheader29.preheader, label %.preheader32.preheader

.preheader29.preheader:                           ; preds = %.preheader33
  br label %.preheader29

.preheader32.preheader:                           ; preds = %.preheader33
  %tmp_399 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co2, i2 0)
  %p_shl101_cast = zext i7 %tmp_399 to i8
  %tmp_400 = sub i8 %p_shl101_cast, %co2_cast119_cast
  %tmp_467_cast = sext i8 %tmp_400 to i9
  %tmp_178 = add i6 %co2_cast117_cast, 24
  %tmp_179_cast = zext i6 %tmp_178 to i9
  %tmp_401 = call i8 @_ssdm_op_BitConcatenate.i8.i6.i2(i6 %tmp_178, i2 0)
  %p_shl100_cast = zext i8 %tmp_401 to i9
  %tmp_402 = sub i9 %p_shl100_cast, %tmp_179_cast
  %tmp_180 = add i7 %co2_cast5, 48
  %tmp_181_cast = zext i7 %tmp_180 to i10
  %tmp_403 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_180, i2 0)
  %p_shl99_cast = zext i9 %tmp_403 to i10
  %tmp_404 = sub i10 %p_shl99_cast, %tmp_181_cast
  %tmp_182 = add i7 %co2_cast5, -56
  %tmp_183_cast = zext i7 %tmp_182 to i10
  %tmp_405 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_182, i2 0)
  %p_shl98_cast = zext i9 %tmp_405 to i10
  %tmp_406 = sub i10 %p_shl98_cast, %tmp_183_cast
  %tmp_184 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 true, i5 %co2)
  %tmp_197_cast = sext i6 %tmp_184 to i7
  %tmp_185_cast = zext i7 %tmp_197_cast to i10
  %tmp_407 = call i8 @_ssdm_op_BitConcatenate.i8.i1.i5.i2(i1 true, i5 %co2, i2 0)
  %tmp_408 = sext i8 %tmp_407 to i9
  %p_shl97_cast = zext i9 %tmp_408 to i10
  %tmp_409 = sub i10 %p_shl97_cast, %tmp_185_cast
  %tmp_476_cast = sext i10 %tmp_409 to i11
  br label %.preheader32

.preheader32.loopexit:                            ; preds = %.preheader31
  br label %.preheader32

.preheader32:                                     ; preds = %.preheader32.loopexit, %.preheader32.preheader
  %w = phi i2 [ 0, %.preheader32.preheader ], [ %w_22, %.preheader32.loopexit ]
  %exitcond4 = icmp eq i2 %w, -1
  %empty_408 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_22 = add i2 %w, 1
  br i1 %exitcond4, label %.preheader33.loopexit, label %.preheader31.preheader

.preheader31.preheader:                           ; preds = %.preheader32
  %tmp_218_cast1 = zext i2 %w to i12
  %tmp_218_cast2 = zext i2 %w to i15
  %tmp_218_cast3 = zext i2 %w to i14
  %tmp_218_cast4 = zext i2 %w to i36
  %tmp_218_cast5 = zext i2 %w to i13
  %tmp_218_cast6 = zext i2 %w to i11
  %tmp_218_cast7 = zext i2 %w to i10
  %tmp_218_cast = zext i2 %w to i9
  %tmp_419 = add i9 %tmp_218_cast, %tmp_467_cast
  %tmp_486_cast = sext i9 %tmp_419 to i15
  %tmp_123 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_419, i2 0)
  %p_shl106_cast = sext i11 %tmp_123 to i15
  %tmp_420 = sub i15 %p_shl106_cast, %tmp_486_cast
  %tmp_421 = add i9 %tmp_218_cast, %tmp_402
  %tmp_489_cast = sext i9 %tmp_421 to i15
  %tmp_124 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_421, i2 0)
  %p_shl105_cast = sext i11 %tmp_124 to i15
  %tmp_422 = sub i15 %p_shl105_cast, %tmp_489_cast
  %tmp_423 = add i10 %tmp_218_cast7, %tmp_404
  %tmp_492_cast1 = sext i10 %tmp_423 to i15
  %tmp_125 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_423, i2 0)
  %p_shl104_cast = sext i12 %tmp_125 to i15
  %tmp_424 = sub i15 %p_shl104_cast, %tmp_492_cast1
  %tmp_425 = add i10 %tmp_218_cast7, %tmp_406
  %tmp_495_cast1 = sext i10 %tmp_425 to i15
  %tmp_126 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_425, i2 0)
  %p_shl103_cast = sext i12 %tmp_126 to i15
  %tmp_426 = sub i15 %p_shl103_cast, %tmp_495_cast1
  %tmp_427 = add i11 %tmp_218_cast6, %tmp_476_cast
  %tmp_498_cast = sext i11 %tmp_427 to i15
  %tmp_127 = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_427, i2 0)
  %p_shl102_cast = sext i13 %tmp_127 to i15
  %tmp_428 = sub i15 %p_shl102_cast, %tmp_498_cast
  br label %.preheader31

.preheader31.loopexit:                            ; preds = %.preheader30
  br label %.preheader31

.preheader31:                                     ; preds = %.preheader31.loopexit, %.preheader31.preheader
  %h = phi i2 [ 0, %.preheader31.preheader ], [ %h_22, %.preheader31.loopexit ]
  %exitcond10 = icmp eq i2 %h, -1
  %empty_409 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_22 = add i2 %h, 1
  br i1 %exitcond10, label %.preheader32.loopexit, label %5

; <label>:5                                       ; preds = %.preheader31
  %tmp_309_cast1 = zext i2 %h to i10
  %tmp_309_cast2 = zext i2 %h to i11
  %tmp_309_cast = zext i2 %h to i15
  %tmp_515 = add i15 %tmp_420, %tmp_309_cast
  %tmp_597_cast = zext i15 %tmp_515 to i64
  %shuffle_conv_3x3_add = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_597_cast
  %tmp_516 = add i15 %tmp_422, %tmp_309_cast
  %tmp_598_cast = zext i15 %tmp_516 to i64
  %shuffle_conv_3x3_add_1 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_598_cast
  %tmp_517 = add i15 %tmp_424, %tmp_309_cast
  %tmp_599_cast = zext i15 %tmp_517 to i64
  %shuffle_conv_3x3_add_2 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_599_cast
  %tmp_518 = add i15 %tmp_426, %tmp_309_cast
  %tmp_600_cast = zext i15 %tmp_518 to i64
  %shuffle_conv_3x3_add_3 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_600_cast
  %tmp_519 = add i15 %tmp_428, %tmp_309_cast
  %tmp_601_cast = zext i15 %tmp_519 to i64
  %shuffle_conv_3x3_add_4 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_601_cast
  %ShuffleConvs_0_Shuff_28 = getelementptr [216 x float]* @ShuffleConvs_0_Shuff_9, i64 0, i64 %tmp_597_cast
  %ShuffleConvs_0_Shuff_29 = getelementptr [216 x float]* @ShuffleConvs_0_Shuff_6, i64 0, i64 %tmp_597_cast
  %ShuffleConvs_0_Downs_13 = getelementptr [216 x float]* @ShuffleConvs_0_Downs_6, i64 0, i64 %tmp_597_cast
  %ShuffleConvs_0_Downs_14 = getelementptr [216 x float]* @ShuffleConvs_0_Downs_9, i64 0, i64 %tmp_597_cast
  %ShuffleConvs_0_Shuff_30 = getelementptr [216 x float]* @ShuffleConvs_0_Shuff_15, i64 0, i64 %tmp_597_cast
  %shuffle_conv_3x3_loa = load float* %shuffle_conv_3x3_add, align 4
  store float %shuffle_conv_3x3_loa, float* %ShuffleConvs_0_Downs_14, align 4
  %shuffle_conv_3x3_loa_1 = load float* %shuffle_conv_3x3_add_1, align 4
  store float %shuffle_conv_3x3_loa_1, float* %ShuffleConvs_0_Downs_13, align 4
  %shuffle_conv_3x3_loa_2 = load float* %shuffle_conv_3x3_add_2, align 4
  store float %shuffle_conv_3x3_loa_2, float* %ShuffleConvs_0_Shuff_29, align 4
  %shuffle_conv_3x3_loa_3 = load float* %shuffle_conv_3x3_add_3, align 4
  store float %shuffle_conv_3x3_loa_3, float* %ShuffleConvs_0_Shuff_28, align 4
  %shuffle_conv_3x3_loa_4 = load float* %shuffle_conv_3x3_add_4, align 4
  store float %shuffle_conv_3x3_loa_4, float* %ShuffleConvs_0_Shuff_30, align 4
  br label %6

; <label>:6                                       ; preds = %7, %5
  %i3 = phi i2 [ 0, %5 ], [ %i_6, %7 ]
  %exitcond13 = icmp eq i2 %i3, -2
  %empty_410 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_6 = add i2 %i3, 1
  br i1 %exitcond13, label %.preheader30.preheader, label %7

.preheader30.preheader:                           ; preds = %6
  br label %.preheader30

; <label>:7                                       ; preds = %6
  %tmp_133 = trunc i2 %i3 to i1
  %p_shl13 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_133, i5 0)
  %p_shl15_cast = zext i6 %p_shl13 to i7
  %p_shl14 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_133, i3 0)
  %p_shl16_cast = zext i4 %p_shl14 to i7
  %tmp_353 = sub i7 %p_shl15_cast, %p_shl16_cast
  %tmp_470_cast1 = sext i7 %tmp_353 to i10
  %tmp_470_cast2 = sext i7 %tmp_353 to i9
  %tmp_470_cast110_cast = sext i7 %tmp_353 to i8
  %tmp29 = add i8 120, %tmp_470_cast110_cast
  %tmp_354 = add i8 %tmp29, %co2_cast119_cast
  %tmp_355_cast = zext i8 %tmp_354 to i11
  %tmp_562 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_354, i2 0)
  %p_shl128_cast = zext i10 %tmp_562 to i11
  %tmp_563 = sub i11 %p_shl128_cast, %tmp_355_cast
  %tmp_654_cast = sext i11 %tmp_563 to i12
  %tmp_564 = add i12 %tmp_218_cast1, %tmp_654_cast
  %tmp_655_cast = sext i12 %tmp_564 to i15
  %tmp_134 = call i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12 %tmp_564, i2 0)
  %p_shl127_cast = sext i14 %tmp_134 to i15
  %tmp_565 = sub i15 %p_shl127_cast, %tmp_655_cast
  %tmp_566 = add i15 %tmp_309_cast, %tmp_565
  %tmp_658_cast = zext i15 %tmp_566 to i64
  %shuffle_conv_3x3_add_5 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_658_cast
  %shuffle_conv_3x3_loa_5 = load float* %shuffle_conv_3x3_add_5, align 4
  %tmp_356 = add i7 %co2_cast5, %tmp_353
  %tmp_474_cast = sext i7 %tmp_356 to i32
  %tmp_357_cast = zext i32 %tmp_474_cast to i35
  %tmp_567 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_356, i2 0)
  %tmp_568 = sext i9 %tmp_567 to i34
  %p_shl126_cast = zext i34 %tmp_568 to i35
  %tmp_569 = sub i35 %p_shl126_cast, %tmp_357_cast
  %tmp_661_cast = sext i35 %tmp_569 to i36
  %tmp_570 = add i36 %tmp_218_cast4, %tmp_661_cast
  %tmp_135 = trunc i36 %tmp_570 to i10
  %tmp_136 = trunc i36 %tmp_570 to i8
  %p_shl125_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_136, i2 0)
  %tmp_571 = sub i10 %p_shl125_cast, %tmp_135
  %tmp_572 = add i10 %tmp_309_cast1, %tmp_571
  %tmp_665_cast = zext i10 %tmp_572 to i64
  %ShuffleConvs_1_Shuff_87 = getelementptr [432 x float]* @ShuffleConvs_1_Shuff_49, i64 0, i64 %tmp_665_cast
  %ShuffleConvs_1_Shuff_88 = getelementptr [432 x float]* @ShuffleConvs_1_Shuff_9, i64 0, i64 %tmp_665_cast
  %ShuffleConvs_1_Shuff_89 = getelementptr [432 x float]* @ShuffleConvs_1_Shuff_23, i64 0, i64 %tmp_665_cast
  %ShuffleConvs_1_Shuff_90 = getelementptr [432 x float]* @ShuffleConvs_1_Shuff_15, i64 0, i64 %tmp_665_cast
  %ShuffleConvs_1_Shuff_91 = getelementptr [432 x float]* @ShuffleConvs_1_Shuff_35, i64 0, i64 %tmp_665_cast
  %ShuffleConvs_1_Downs_13 = getelementptr [432 x float]* @ShuffleConvs_1_Downs_6, i64 0, i64 %tmp_665_cast
  %ShuffleConvs_1_Shuff_92 = getelementptr [432 x float]* @ShuffleConvs_1_Shuff_3, i64 0, i64 %tmp_665_cast
  %ShuffleConvs_1_Downs_14 = getelementptr [432 x float]* @ShuffleConvs_1_Downs_9, i64 0, i64 %tmp_665_cast
  %ShuffleConvs_1_Shuff_93 = getelementptr [432 x float]* @ShuffleConvs_1_Shuff_43, i64 0, i64 %tmp_665_cast
  %ShuffleConvs_1_Shuff_94 = getelementptr [432 x float]* @ShuffleConvs_1_Shuff_29, i64 0, i64 %tmp_665_cast
  store float %shuffle_conv_3x3_loa_5, float* %ShuffleConvs_1_Downs_14, align 4
  %tmp30 = add i8 -88, %tmp_470_cast110_cast
  %tmp_358 = add i8 %tmp30, %co2_cast119_cast
  %tmp_359_cast = zext i8 %tmp_358 to i11
  %tmp_573 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_358, i2 0)
  %p_shl124_cast = zext i10 %tmp_573 to i11
  %tmp_574 = sub i11 %p_shl124_cast, %tmp_359_cast
  %tmp_575 = add i11 %tmp_218_cast6, %tmp_574
  %tmp_668_cast = sext i11 %tmp_575 to i15
  %tmp_137 = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_575, i2 0)
  %p_shl123_cast = sext i13 %tmp_137 to i15
  %tmp_576 = sub i15 %p_shl123_cast, %tmp_668_cast
  %tmp_577 = add i15 %tmp_309_cast, %tmp_576
  %tmp_671_cast = zext i15 %tmp_577 to i64
  %shuffle_conv_3x3_add_6 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_671_cast
  %shuffle_conv_3x3_loa_6 = load float* %shuffle_conv_3x3_add_6, align 4
  store float %shuffle_conv_3x3_loa_6, float* %ShuffleConvs_1_Downs_13, align 4
  %tmp31 = add i7 -40, %tmp_353
  %tmp31_cast1 = sext i7 %tmp31 to i8
  %tmp31_cast = zext i8 %tmp31_cast1 to i9
  %tmp_361 = add i9 %tmp31_cast, %co2_cast120_cast
  %tmp_363_cast = zext i9 %tmp_361 to i12
  %tmp_578 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_361, i2 0)
  %p_shl122_cast = zext i11 %tmp_578 to i12
  %tmp_579 = sub i12 %p_shl122_cast, %tmp_363_cast
  %tmp_673_cast = sext i12 %tmp_579 to i13
  %tmp_580 = add i13 %tmp_218_cast5, %tmp_673_cast
  %tmp_674_cast = sext i13 %tmp_580 to i15
  %p_shl121_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_580, i2 0)
  %tmp_581 = sub i15 %p_shl121_cast, %tmp_674_cast
  %tmp_582 = add i15 %tmp_309_cast, %tmp_581
  %tmp_677_cast = zext i15 %tmp_582 to i64
  %shuffle_conv_3x3_add_7 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_677_cast
  %shuffle_conv_3x3_loa_7 = load float* %shuffle_conv_3x3_add_7, align 4
  store float %shuffle_conv_3x3_loa_7, float* %ShuffleConvs_1_Shuff_92, align 4
  %tmp32 = add i9 -248, %tmp_470_cast2
  %tmp_365 = add i9 %tmp32, %co2_cast120_cast
  %tmp_367_cast = zext i9 %tmp_365 to i12
  %tmp_583 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_365, i2 0)
  %p_shl120_cast = zext i11 %tmp_583 to i12
  %tmp_584 = sub i12 %p_shl120_cast, %tmp_367_cast
  %tmp_679_cast = sext i12 %tmp_584 to i13
  %tmp_585 = add i13 %tmp_218_cast5, %tmp_679_cast
  %tmp_680_cast = sext i13 %tmp_585 to i15
  %p_shl119_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_585, i2 0)
  %tmp_586 = sub i15 %p_shl119_cast, %tmp_680_cast
  %tmp_587 = add i15 %tmp_309_cast, %tmp_586
  %tmp_683_cast = zext i15 %tmp_587 to i64
  %shuffle_conv_3x3_add_8 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_683_cast
  %shuffle_conv_3x3_loa_8 = load float* %shuffle_conv_3x3_add_8, align 4
  store float %shuffle_conv_3x3_loa_8, float* %ShuffleConvs_1_Shuff_88, align 4
  %tmp33 = add i9 -200, %tmp_470_cast2
  %tmp_369 = add i9 %tmp33, %co2_cast120_cast
  %tmp_371_cast = zext i9 %tmp_369 to i12
  %tmp_588 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_369, i2 0)
  %p_shl118_cast = zext i11 %tmp_588 to i12
  %tmp_589 = sub i12 %p_shl118_cast, %tmp_371_cast
  %tmp_590 = add i12 %tmp_218_cast1, %tmp_589
  %tmp_686_cast = sext i12 %tmp_590 to i15
  %tmp_138 = call i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12 %tmp_590, i2 0)
  %p_shl117_cast = sext i14 %tmp_138 to i15
  %tmp_591 = sub i15 %p_shl117_cast, %tmp_686_cast
  %tmp_592 = add i15 %tmp_309_cast, %tmp_591
  %tmp_689_cast = zext i15 %tmp_592 to i64
  %shuffle_conv_3x3_add_9 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_689_cast
  %shuffle_conv_3x3_loa_9 = load float* %shuffle_conv_3x3_add_9, align 4
  store float %shuffle_conv_3x3_loa_9, float* %ShuffleConvs_1_Shuff_90, align 4
  %tmp34 = add i9 -152, %tmp_470_cast2
  %tmp_372 = add i9 %tmp34, %co2_cast120_cast
  %tmp_373_cast = zext i9 %tmp_372 to i12
  %tmp_593 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_372, i2 0)
  %p_shl116_cast = zext i11 %tmp_593 to i12
  %tmp_594 = sub i12 %p_shl116_cast, %tmp_373_cast
  %tmp_595 = add i12 %tmp_218_cast1, %tmp_594
  %tmp_692_cast = sext i12 %tmp_595 to i15
  %tmp_139 = call i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12 %tmp_595, i2 0)
  %p_shl115_cast = sext i14 %tmp_139 to i15
  %tmp_596 = sub i15 %p_shl115_cast, %tmp_692_cast
  %tmp_597 = add i15 %tmp_309_cast, %tmp_596
  %tmp_695_cast = zext i15 %tmp_597 to i64
  %shuffle_conv_3x3_add_10 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_695_cast
  %shuffle_conv_3x3_loa_10 = load float* %shuffle_conv_3x3_add_10, align 4
  store float %shuffle_conv_3x3_loa_10, float* %ShuffleConvs_1_Shuff_89, align 4
  %tmp35 = add i8 -104, %tmp_470_cast110_cast
  %tmp_374 = add i8 %tmp35, %co2_cast119_cast
  %tmp_492_cast = sext i8 %tmp_374 to i9
  %tmp_375_cast = zext i9 %tmp_492_cast to i12
  %tmp_598 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_374, i2 0)
  %tmp_599 = sext i10 %tmp_598 to i11
  %p_shl114_cast = zext i11 %tmp_599 to i12
  %tmp_600 = sub i12 %p_shl114_cast, %tmp_375_cast
  %tmp_601 = add i12 %tmp_218_cast1, %tmp_600
  %tmp_699_cast = sext i12 %tmp_601 to i15
  %tmp_140 = call i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12 %tmp_601, i2 0)
  %p_shl113_cast = sext i14 %tmp_140 to i15
  %tmp_602 = sub i15 %p_shl113_cast, %tmp_699_cast
  %tmp_603 = add i15 %tmp_309_cast, %tmp_602
  %tmp_702_cast = zext i15 %tmp_603 to i64
  %shuffle_conv_3x3_add_11 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_702_cast
  %shuffle_conv_3x3_loa_11 = load float* %shuffle_conv_3x3_add_11, align 4
  store float %shuffle_conv_3x3_loa_11, float* %ShuffleConvs_1_Shuff_94, align 4
  %tmp36 = add i8 -56, %tmp_470_cast110_cast
  %tmp_376 = add i8 %tmp36, %co2_cast119_cast
  %tmp_495_cast = sext i8 %tmp_376 to i9
  %tmp_377_cast = zext i9 %tmp_495_cast to i12
  %tmp_604 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_376, i2 0)
  %tmp_605 = sext i10 %tmp_604 to i11
  %p_shl112_cast = zext i11 %tmp_605 to i12
  %tmp_606 = sub i12 %p_shl112_cast, %tmp_377_cast
  %tmp_705_cast = sext i12 %tmp_606 to i13
  %tmp_607 = add i13 %tmp_218_cast5, %tmp_705_cast
  %tmp_706_cast = sext i13 %tmp_607 to i15
  %p_shl111_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_607, i2 0)
  %tmp_608 = sub i15 %p_shl111_cast, %tmp_706_cast
  %tmp_609 = add i15 %tmp_309_cast, %tmp_608
  %tmp_709_cast = zext i15 %tmp_609 to i64
  %shuffle_conv_3x3_add_12 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_709_cast
  %shuffle_conv_3x3_loa_12 = load float* %shuffle_conv_3x3_add_12, align 4
  store float %shuffle_conv_3x3_loa_12, float* %ShuffleConvs_1_Shuff_91, align 4
  %tmp37 = add i10 504, %tmp_470_cast1
  %tmp_378 = add i10 %tmp37, %co2_cast2
  %tmp_379_cast = zext i10 %tmp_378 to i13
  %tmp_610 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_378, i2 0)
  %p_shl110_cast = zext i12 %tmp_610 to i13
  %tmp_611 = sub i13 %p_shl110_cast, %tmp_379_cast
  %tmp_711_cast = sext i13 %tmp_611 to i14
  %tmp_612 = add i14 %tmp_218_cast3, %tmp_711_cast
  %tmp_712_cast = sext i14 %tmp_612 to i15
  %tmp_141 = trunc i14 %tmp_612 to i13
  %p_shl109_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_141, i2 0)
  %tmp_613 = sub i15 %p_shl109_cast, %tmp_712_cast
  %tmp_614 = add i15 %tmp_309_cast, %tmp_613
  %tmp_715_cast = zext i15 %tmp_614 to i64
  %shuffle_conv_3x3_add_13 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_715_cast
  %shuffle_conv_3x3_loa_13 = load float* %shuffle_conv_3x3_add_13, align 4
  store float %shuffle_conv_3x3_loa_13, float* %ShuffleConvs_1_Shuff_93, align 4
  %tmp38 = add i10 -472, %tmp_470_cast1
  %tmp_380 = add i10 %tmp38, %co2_cast2
  %tmp_381_cast = zext i10 %tmp_380 to i13
  %tmp_615 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_380, i2 0)
  %p_shl108_cast = zext i12 %tmp_615 to i13
  %tmp_616 = sub i13 %p_shl108_cast, %tmp_381_cast
  %tmp_617 = add i13 %tmp_218_cast5, %tmp_616
  %tmp_718_cast = sext i13 %tmp_617 to i15
  %p_shl107_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_617, i2 0)
  %tmp_618 = sub i15 %p_shl107_cast, %tmp_718_cast
  %tmp_619 = add i15 %tmp_309_cast, %tmp_618
  %tmp_721_cast = zext i15 %tmp_619 to i64
  %shuffle_conv_3x3_add_14 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_721_cast
  %shuffle_conv_3x3_loa_14 = load float* %shuffle_conv_3x3_add_14, align 4
  store float %shuffle_conv_3x3_loa_14, float* %ShuffleConvs_1_Shuff_87, align 4
  br label %6

.preheader30:                                     ; preds = %.preheader30.preheader, %8
  %i4 = phi i3 [ %i_7, %8 ], [ 0, %.preheader30.preheader ]
  %exitcond12 = icmp eq i3 %i4, -4
  %empty_411 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_7 = add i3 %i4, 1
  br i1 %exitcond12, label %.preheader31.loopexit, label %8

; <label>:8                                       ; preds = %.preheader30
  %tmp_142 = trunc i3 %i4 to i2
  %p_shl15 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_142, i5 0)
  %p_shl17_cast = zext i7 %p_shl15 to i8
  %p_shl16 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_142, i3 0)
  %p_shl18_cast = zext i5 %p_shl16 to i8
  %tmp_382 = sub i8 %p_shl17_cast, %p_shl18_cast
  %tmp_505_cast1 = sext i8 %tmp_382 to i11
  %tmp_505_cast = sext i8 %tmp_382 to i10
  %tmp_505_cast_cast = sext i8 %tmp_382 to i9
  %tmp39 = add i10 -424, %tmp_505_cast
  %tmp_383 = add i10 %co2_cast2, %tmp39
  %tmp_384_cast = zext i10 %tmp_383 to i13
  %tmp_621 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_383, i2 0)
  %p_shl140_cast = zext i12 %tmp_621 to i13
  %tmp_622 = sub i13 %p_shl140_cast, %tmp_384_cast
  %tmp_623 = add i13 %tmp_622, %tmp_218_cast5
  %tmp_728_cast = sext i13 %tmp_623 to i15
  %p_shl139_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_623, i2 0)
  %tmp_624 = sub i15 %p_shl139_cast, %tmp_728_cast
  %tmp_625 = add i15 %tmp_624, %tmp_309_cast
  %tmp_731_cast = zext i15 %tmp_625 to i64
  %shuffle_conv_3x3_add_15 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_731_cast
  %shuffle_conv_3x3_loa_15 = load float* %shuffle_conv_3x3_add_15, align 4
  %tmp_385 = add i8 %tmp_382, %co2_cast119_cast
  %tmp_509_cast = sext i8 %tmp_385 to i32
  %tmp_386_cast = zext i32 %tmp_509_cast to i35
  %tmp_626 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_385, i2 0)
  %tmp_627 = sext i10 %tmp_626 to i34
  %p_shl138_cast = zext i34 %tmp_627 to i35
  %tmp_628 = sub i35 %p_shl138_cast, %tmp_386_cast
  %tmp_734_cast = sext i35 %tmp_628 to i36
  %tmp_629 = add i36 %tmp_734_cast, %tmp_218_cast4
  %tmp_143 = trunc i36 %tmp_629 to i11
  %tmp_144 = trunc i36 %tmp_629 to i9
  %p_shl137_cast = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_144, i2 0)
  %tmp_630 = sub i11 %p_shl137_cast, %tmp_143
  %tmp_631 = add i11 %tmp_630, %tmp_309_cast2
  %tmp_738_cast = zext i11 %tmp_631 to i64
  %ShuffleConvs_2_Downs_13 = getelementptr [864 x float]* @ShuffleConvs_2_Downs_6, i64 0, i64 %tmp_738_cast
  %ShuffleConvs_2_Shuff_28 = getelementptr [864 x float]* @ShuffleConvs_2_Shuff_6, i64 0, i64 %tmp_738_cast
  %ShuffleConvs_2_Shuff_29 = getelementptr [864 x float]* @ShuffleConvs_2_Shuff_15, i64 0, i64 %tmp_738_cast
  %ShuffleConvs_2_Downs_14 = getelementptr [864 x float]* @ShuffleConvs_2_Downs_9, i64 0, i64 %tmp_738_cast
  %ShuffleConvs_2_Shuff_30 = getelementptr [864 x float]* @ShuffleConvs_2_Shuff_9, i64 0, i64 %tmp_738_cast
  store float %shuffle_conv_3x3_loa_15, float* %ShuffleConvs_2_Downs_14, align 4
  %tmp40 = add i10 -328, %tmp_505_cast
  %tmp_387 = add i10 %co2_cast2, %tmp40
  %tmp_388_cast = zext i10 %tmp_387 to i13
  %tmp_632 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_387, i2 0)
  %p_shl136_cast = zext i12 %tmp_632 to i13
  %tmp_633 = sub i13 %p_shl136_cast, %tmp_388_cast
  %tmp_634 = add i13 %tmp_633, %tmp_218_cast5
  %tmp_741_cast = sext i13 %tmp_634 to i15
  %p_shl135_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_634, i2 0)
  %tmp_635 = sub i15 %p_shl135_cast, %tmp_741_cast
  %tmp_636 = add i15 %tmp_635, %tmp_309_cast
  %tmp_744_cast = zext i15 %tmp_636 to i64
  %shuffle_conv_3x3_add_16 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_744_cast
  %shuffle_conv_3x3_loa_16 = load float* %shuffle_conv_3x3_add_16, align 4
  store float %shuffle_conv_3x3_loa_16, float* %ShuffleConvs_2_Downs_13, align 4
  %tmp41 = add i10 -232, %tmp_505_cast
  %tmp_389 = add i10 %co2_cast2, %tmp41
  %tmp_390_cast = zext i10 %tmp_389 to i13
  %tmp_637 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_389, i2 0)
  %p_shl134_cast = zext i12 %tmp_637 to i13
  %tmp_638 = sub i13 %p_shl134_cast, %tmp_390_cast
  %tmp_639 = add i13 %tmp_638, %tmp_218_cast5
  %tmp_747_cast = sext i13 %tmp_639 to i15
  %p_shl133_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_639, i2 0)
  %tmp_640 = sub i15 %p_shl133_cast, %tmp_747_cast
  %tmp_641 = add i15 %tmp_640, %tmp_309_cast
  %tmp_750_cast = zext i15 %tmp_641 to i64
  %shuffle_conv_3x3_add_17 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_750_cast
  %shuffle_conv_3x3_loa_17 = load float* %shuffle_conv_3x3_add_17, align 4
  store float %shuffle_conv_3x3_loa_17, float* %ShuffleConvs_2_Shuff_28, align 4
  %tmp42 = add i9 -136, %tmp_505_cast_cast
  %tmp_391 = add i9 %co2_cast120_cast, %tmp42
  %tmp_515_cast = sext i9 %tmp_391 to i10
  %tmp_392_cast = zext i10 %tmp_515_cast to i13
  %tmp_642 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_391, i2 0)
  %tmp_643 = sext i11 %tmp_642 to i12
  %p_shl132_cast = zext i12 %tmp_643 to i13
  %tmp_644 = sub i13 %p_shl132_cast, %tmp_392_cast
  %tmp_753_cast = sext i13 %tmp_644 to i14
  %tmp_645 = add i14 %tmp_753_cast, %tmp_218_cast3
  %tmp_754_cast = sext i14 %tmp_645 to i15
  %tmp_145 = trunc i14 %tmp_645 to i13
  %p_shl131_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_145, i2 0)
  %tmp_646 = sub i15 %p_shl131_cast, %tmp_754_cast
  %tmp_647 = add i15 %tmp_646, %tmp_309_cast
  %tmp_757_cast = zext i15 %tmp_647 to i64
  %shuffle_conv_3x3_add_18 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_757_cast
  %shuffle_conv_3x3_loa_18 = load float* %shuffle_conv_3x3_add_18, align 4
  store float %shuffle_conv_3x3_loa_18, float* %ShuffleConvs_2_Shuff_30, align 4
  %tmp43 = add i11 984, %tmp_505_cast1
  %tmp_393 = add i11 %co2_cast1, %tmp43
  %tmp_394_cast = zext i11 %tmp_393 to i14
  %tmp_648 = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_393, i2 0)
  %p_shl130_cast = zext i13 %tmp_648 to i14
  %tmp_649 = sub i14 %p_shl130_cast, %tmp_394_cast
  %tmp_759_cast = sext i14 %tmp_649 to i15
  %tmp_650 = add i15 %tmp_759_cast, %tmp_218_cast2
  %tmp_146 = shl i15 %tmp_650, 2
  %tmp_651 = sub i15 %tmp_146, %tmp_650
  %tmp_652 = add i15 %tmp_651, %tmp_309_cast
  %tmp_763_cast = zext i15 %tmp_652 to i64
  %shuffle_conv_3x3_add_19 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_763_cast
  %shuffle_conv_3x3_loa_19 = load float* %shuffle_conv_3x3_add_19, align 4
  store float %shuffle_conv_3x3_loa_19, float* %ShuffleConvs_2_Shuff_29, align 4
  br label %.preheader30

.preheader29.loopexit:                            ; preds = %.preheader28
  br label %.preheader29

.preheader29:                                     ; preds = %.preheader29.preheader, %.preheader29.loopexit
  %i5 = phi i5 [ %i_5, %.preheader29.loopexit ], [ 0, %.preheader29.preheader ]
  %i5_cast1 = zext i5 %i5 to i12
  %i5_cast2 = zext i5 %i5 to i11
  %i5_cast105_cast1 = zext i5 %i5 to i9
  %i5_cast105_cast = zext i5 %i5 to i10
  %i5_cast104_cast1 = zext i5 %i5 to i8
  %i5_cast102_cast = zext i5 %i5 to i7
  %i5_cast101_cast = zext i5 %i5 to i6
  %exitcond3 = icmp eq i5 %i5, -8
  %empty_412 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_5 = add i5 %i5, 1
  br i1 %exitcond3, label %.preheader27.preheader, label %9

.preheader27.preheader:                           ; preds = %.preheader29
  br label %.preheader27

; <label>:9                                       ; preds = %.preheader29
  %tmp_189 = zext i5 %i5 to i64
  %bias_addr = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_189
  %bias_load = load float* %bias_addr, align 4
  %conv1_bias_addr = getelementptr inbounds [24 x float]* @conv1_bias, i64 0, i64 %tmp_189
  store float %bias_load, float* %conv1_bias_addr, align 4
  %tmp_190 = add i6 %i5_cast101_cast, 24
  %tmp_191 = zext i6 %tmp_190 to i64
  %bias_addr_1 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_191
  %bias_load_1 = load float* %bias_addr_1, align 4
  %ShuffleConvs_0_Downs_15 = getelementptr inbounds [24 x float]* @ShuffleConvs_0_Downs_3, i64 0, i64 %tmp_189
  store float %bias_load_1, float* %ShuffleConvs_0_Downs_15, align 4
  %tmp_192 = add i7 %i5_cast102_cast, 48
  %tmp_193 = zext i7 %tmp_192 to i64
  %bias_addr_2 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_193
  %bias_load_2 = load float* %bias_addr_2, align 4
  %ShuffleConvs_0_Downs_16 = getelementptr inbounds [24 x float]* @ShuffleConvs_0_Downs_5, i64 0, i64 %tmp_189
  store float %bias_load_2, float* %ShuffleConvs_0_Downs_16, align 4
  %tmp_194 = add i7 %i5_cast102_cast, -56
  %tmp_195 = zext i7 %tmp_194 to i64
  %bias_addr_3 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_195
  %bias_load_3 = load float* %bias_addr_3, align 4
  %ShuffleConvs_0_Downs_17 = getelementptr inbounds [24 x float]* @ShuffleConvs_0_Downs, i64 0, i64 %tmp_189
  store float %bias_load_3, float* %ShuffleConvs_0_Downs_17, align 4
  %tmp_196 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 true, i5 %i5)
  %tmp_206_cast = sext i6 %tmp_196 to i7
  %tmp_197 = zext i7 %tmp_206_cast to i64
  %bias_addr_4 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_197
  %bias_load_4 = load float* %bias_addr_4, align 4
  %ShuffleConvs_0_Downs_18 = getelementptr inbounds [24 x float]* @ShuffleConvs_0_Downs_1, i64 0, i64 %tmp_189
  store float %bias_load_4, float* %ShuffleConvs_0_Downs_18, align 4
  %tmp_198 = add i8 %i5_cast104_cast1, 120
  %tmp_199 = zext i8 %tmp_198 to i64
  %bias_addr_5 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_199
  %bias_load_5 = load float* %bias_addr_5, align 4
  %ShuffleConvs_0_Downs_19 = getelementptr inbounds [24 x float]* @ShuffleConvs_0_Downs_4, i64 0, i64 %tmp_189
  store float %bias_load_5, float* %ShuffleConvs_0_Downs_19, align 4
  %tmp_200 = add i8 %i5_cast104_cast1, -112
  %tmp_201 = zext i8 %tmp_200 to i64
  %bias_addr_6 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_201
  %bias_load_6 = load float* %bias_addr_6, align 4
  %ShuffleConvs_0_Shuff_31 = getelementptr inbounds [24 x float]* @ShuffleConvs_0_Shuff_19, i64 0, i64 %tmp_189
  store float %bias_load_6, float* %ShuffleConvs_0_Shuff_31, align 4
  %tmp_202 = add i8 %i5_cast104_cast1, -88
  %tmp_203 = zext i8 %tmp_202 to i64
  %bias_addr_7 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_203
  %bias_load_7 = load float* %bias_addr_7, align 4
  %ShuffleConvs_0_Shuff_32 = getelementptr inbounds [24 x float]* @ShuffleConvs_0_Shuff_20, i64 0, i64 %tmp_189
  store float %bias_load_7, float* %ShuffleConvs_0_Shuff_32, align 4
  %tmp_204 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 -2, i5 %i5)
  %tmp_214_cast = sext i7 %tmp_204 to i8
  %tmp_205 = zext i8 %tmp_214_cast to i64
  %bias_addr_8 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_205
  %bias_load_8 = load float* %bias_addr_8, align 4
  %ShuffleConvs_0_Shuff_33 = getelementptr inbounds [24 x float]* @ShuffleConvs_0_Shuff_21, i64 0, i64 %tmp_189
  store float %bias_load_8, float* %ShuffleConvs_0_Shuff_33, align 4
  %tmp_206 = add i7 %i5_cast102_cast, -40
  %tmp_216_cast = sext i7 %tmp_206 to i8
  %tmp_207 = zext i8 %tmp_216_cast to i64
  %bias_addr_9 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_207
  %bias_load_9 = load float* %bias_addr_9, align 4
  %ShuffleConvs_0_Shuff_34 = getelementptr inbounds [24 x float]* @ShuffleConvs_0_Shuff_22, i64 0, i64 %tmp_189
  store float %bias_load_9, float* %ShuffleConvs_0_Shuff_34, align 4
  %tmp_208 = add i9 %i5_cast105_cast1, 240
  %tmp_209 = zext i9 %tmp_208 to i64
  %bias_addr_10 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_209
  %bias_load_10 = load float* %bias_addr_10, align 4
  %ShuffleConvs_0_Shuff_35 = getelementptr inbounds [24 x float]* @ShuffleConvs_0_Shuff_1, i64 0, i64 %tmp_189
  store float %bias_load_10, float* %ShuffleConvs_0_Shuff_35, align 4
  %tmp_210 = add i9 %i5_cast105_cast1, -248
  %tmp_211 = zext i9 %tmp_210 to i64
  %bias_addr_11 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_211
  %bias_load_11 = load float* %bias_addr_11, align 4
  %ShuffleConvs_0_Shuff_36 = getelementptr inbounds [24 x float]* @ShuffleConvs_0_Shuff_3, i64 0, i64 %tmp_189
  store float %bias_load_11, float* %ShuffleConvs_0_Shuff_36, align 4
  %tmp_212 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 -7, i5 %i5)
  %tmp_213 = zext i9 %tmp_212 to i64
  %bias_addr_12 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_213
  %bias_load_12 = load float* %bias_addr_12, align 4
  %ShuffleConvs_0_Shuff_37 = getelementptr inbounds [24 x float]* @ShuffleConvs_0_Shuff_4, i64 0, i64 %tmp_189
  store float %bias_load_12, float* %ShuffleConvs_0_Shuff_37, align 4
  %tmp_214 = add i9 %i5_cast105_cast1, -200
  %tmp_215 = zext i9 %tmp_214 to i64
  %bias_addr_13 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_215
  %bias_load_13 = load float* %bias_addr_13, align 4
  %ShuffleConvs_0_Shuff_38 = getelementptr inbounds [24 x float]* @ShuffleConvs_0_Shuff_17, i64 0, i64 %tmp_189
  store float %bias_load_13, float* %ShuffleConvs_0_Shuff_38, align 4
  %tmp_216 = add i9 %i5_cast105_cast1, -176
  %tmp_217 = zext i9 %tmp_216 to i64
  %bias_addr_14 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_217
  %bias_load_14 = load float* %bias_addr_14, align 4
  %ShuffleConvs_0_Shuff_39 = getelementptr inbounds [24 x float]* @ShuffleConvs_0_Shuff, i64 0, i64 %tmp_189
  store float %bias_load_14, float* %ShuffleConvs_0_Shuff_39, align 4
  br label %10

; <label>:10                                      ; preds = %11, %9
  %k = phi i2 [ 0, %9 ], [ %k_1, %11 ]
  %exitcond6 = icmp eq i2 %k, -2
  %empty_413 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_1 = add i2 %k, 1
  br i1 %exitcond6, label %.preheader28.preheader, label %11

.preheader28.preheader:                           ; preds = %10
  br label %.preheader28

; <label>:11                                      ; preds = %10
  %tmp_129 = trunc i2 %k to i1
  %p_shl4 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_129, i5 0)
  %p_shl4_cast = zext i6 %p_shl4 to i7
  %p_shl5 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_129, i3 0)
  %p_shl5_cast = zext i4 %p_shl5 to i7
  %tmp_238 = sub i7 %p_shl4_cast, %p_shl5_cast
  %tmp_238_cast1 = sext i7 %tmp_238 to i11
  %tmp_238_cast97_cast = sext i7 %tmp_238 to i10
  %tmp_238_cast96_cast1 = sext i7 %tmp_238 to i8
  %tmp_238_cast96_cast = sext i7 %tmp_238 to i9
  %tmp44 = add i9 -152, %tmp_238_cast96_cast
  %tmp_240 = add i9 %i5_cast105_cast1, %tmp44
  %tmp_241 = zext i9 %tmp_240 to i64
  %bias_addr_17 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_241
  %bias_load_16 = load float* %bias_addr_17, align 4
  %tmp_242 = add i7 %tmp_238, %i5_cast102_cast
  %tmp_242_cast = sext i7 %tmp_242 to i32
  %tmp_243 = zext i32 %tmp_242_cast to i64
  %ShuffleConvs_1_Downs_15 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Downs_3, i64 0, i64 %tmp_243
  store float %bias_load_16, float* %ShuffleConvs_1_Downs_15, align 4
  %tmp45 = add i8 -104, %tmp_238_cast96_cast1
  %tmp_245 = add i8 %i5_cast104_cast1, %tmp45
  %tmp_245_cast = sext i8 %tmp_245 to i9
  %tmp_246 = zext i9 %tmp_245_cast to i64
  %bias_addr_18 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_246
  %bias_load_17 = load float* %bias_addr_18, align 4
  %ShuffleConvs_1_Downs_16 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Downs_5, i64 0, i64 %tmp_243
  store float %bias_load_17, float* %ShuffleConvs_1_Downs_16, align 4
  %tmp46 = add i8 -56, %tmp_238_cast96_cast1
  %tmp_248 = add i8 %i5_cast104_cast1, %tmp46
  %tmp_248_cast = sext i8 %tmp_248 to i9
  %tmp_249 = zext i9 %tmp_248_cast to i64
  %bias_addr_19 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_249
  %bias_load_18 = load float* %bias_addr_19, align 4
  %ShuffleConvs_1_Downs_17 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Downs, i64 0, i64 %tmp_243
  store float %bias_load_18, float* %ShuffleConvs_1_Downs_17, align 4
  %tmp47 = add i10 504, %tmp_238_cast97_cast
  %tmp_251 = add i10 %i5_cast105_cast, %tmp47
  %tmp_252 = zext i10 %tmp_251 to i64
  %bias_addr_20 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_252
  %bias_load_19 = load float* %bias_addr_20, align 4
  %ShuffleConvs_1_Downs_18 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Downs_1, i64 0, i64 %tmp_243
  store float %bias_load_19, float* %ShuffleConvs_1_Downs_18, align 4
  %tmp48 = add i10 -472, %tmp_238_cast97_cast
  %tmp_254 = add i10 %i5_cast105_cast, %tmp48
  %tmp_255 = zext i10 %tmp_254 to i64
  %bias_addr_21 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_255
  %bias_load_20 = load float* %bias_addr_21, align 4
  %ShuffleConvs_1_Downs_19 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Downs_4, i64 0, i64 %tmp_243
  store float %bias_load_20, float* %ShuffleConvs_1_Downs_19, align 4
  %tmp49 = add i10 -424, %tmp_238_cast97_cast
  %tmp_257 = add i10 %i5_cast105_cast, %tmp49
  %tmp_258 = zext i10 %tmp_257 to i64
  %bias_addr_22 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_258
  %bias_load_21 = load float* %bias_addr_22, align 4
  %ShuffleConvs_1_Shuff_95 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_51, i64 0, i64 %tmp_243
  store float %bias_load_21, float* %ShuffleConvs_1_Shuff_95, align 4
  %tmp50 = add i10 -376, %tmp_238_cast97_cast
  %tmp_260 = add i10 %i5_cast105_cast, %tmp50
  %tmp_261 = zext i10 %tmp_260 to i64
  %bias_addr_23 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_261
  %bias_load_22 = load float* %bias_addr_23, align 4
  %ShuffleConvs_1_Shuff_96 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_52, i64 0, i64 %tmp_243
  store float %bias_load_22, float* %ShuffleConvs_1_Shuff_96, align 4
  %tmp51 = add i10 -328, %tmp_238_cast97_cast
  %tmp_263 = add i10 %i5_cast105_cast, %tmp51
  %tmp_264 = zext i10 %tmp_263 to i64
  %bias_addr_24 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_264
  %bias_load_23 = load float* %bias_addr_24, align 4
  %ShuffleConvs_1_Shuff_97 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_53, i64 0, i64 %tmp_243
  store float %bias_load_23, float* %ShuffleConvs_1_Shuff_97, align 4
  %tmp52 = add i10 -280, %tmp_238_cast97_cast
  %tmp_266 = add i10 %i5_cast105_cast, %tmp52
  %tmp_267 = zext i10 %tmp_266 to i64
  %bias_addr_25 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_267
  %bias_load_24 = load float* %bias_addr_25, align 4
  %ShuffleConvs_1_Shuff_98 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_54, i64 0, i64 %tmp_243
  store float %bias_load_24, float* %ShuffleConvs_1_Shuff_98, align 4
  %tmp53 = add i9 -232, %tmp_238_cast96_cast
  %tmp_269 = add i9 %i5_cast105_cast1, %tmp53
  %tmp_269_cast = sext i9 %tmp_269 to i10
  %tmp_270 = zext i10 %tmp_269_cast to i64
  %bias_addr_26 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_270
  %bias_load_25 = load float* %bias_addr_26, align 4
  %ShuffleConvs_1_Shuff_99 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_56, i64 0, i64 %tmp_243
  store float %bias_load_25, float* %ShuffleConvs_1_Shuff_99, align 4
  %tmp54 = add i9 -184, %tmp_238_cast96_cast
  %tmp_271 = add i9 %i5_cast105_cast1, %tmp54
  %tmp_272_cast = sext i9 %tmp_271 to i10
  %tmp_272 = zext i10 %tmp_272_cast to i64
  %bias_addr_27 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_272
  %bias_load_26 = load float* %bias_addr_27, align 4
  %ShuffleConvs_1_Shuff_100 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_57, i64 0, i64 %tmp_243
  store float %bias_load_26, float* %ShuffleConvs_1_Shuff_100, align 4
  %tmp55 = add i9 -136, %tmp_238_cast96_cast
  %tmp_273 = add i9 %i5_cast105_cast1, %tmp55
  %tmp_275_cast = sext i9 %tmp_273 to i10
  %tmp_274 = zext i10 %tmp_275_cast to i64
  %bias_addr_28 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_274
  %bias_load_27 = load float* %bias_addr_28, align 4
  %ShuffleConvs_1_Shuff_101 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_58, i64 0, i64 %tmp_243
  store float %bias_load_27, float* %ShuffleConvs_1_Shuff_101, align 4
  %tmp56 = add i8 -88, %tmp_238_cast96_cast1
  %tmp_275 = add i8 %i5_cast104_cast1, %tmp56
  %tmp_278_cast = sext i8 %tmp_275 to i10
  %tmp_276 = zext i10 %tmp_278_cast to i64
  %bias_addr_29 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_276
  %bias_load_28 = load float* %bias_addr_29, align 4
  %ShuffleConvs_1_Shuff_102 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_59, i64 0, i64 %tmp_243
  store float %bias_load_28, float* %ShuffleConvs_1_Shuff_102, align 4
  %tmp57 = add i7 -40, %tmp_238
  %tmp57_cast1 = sext i7 %tmp57 to i10
  %tmp57_cast = zext i10 %tmp57_cast1 to i11
  %tmp_277 = add i11 %i5_cast2, %tmp57_cast
  %tmp_278 = zext i11 %tmp_277 to i64
  %bias_addr_30 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_278
  %bias_load_29 = load float* %bias_addr_30, align 4
  %ShuffleConvs_1_Shuff_103 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_60, i64 0, i64 %tmp_243
  store float %bias_load_29, float* %ShuffleConvs_1_Shuff_103, align 4
  %tmp58 = add i11 -1016, %tmp_238_cast1
  %tmp_279 = add i11 %i5_cast2, %tmp58
  %tmp_280 = zext i11 %tmp_279 to i64
  %bias_addr_31 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_280
  %bias_load_30 = load float* %bias_addr_31, align 4
  %ShuffleConvs_1_Shuff_104 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_61, i64 0, i64 %tmp_243
  store float %bias_load_30, float* %ShuffleConvs_1_Shuff_104, align 4
  %tmp59 = add i11 -968, %tmp_238_cast1
  %tmp_281 = add i11 %i5_cast2, %tmp59
  %tmp_282 = zext i11 %tmp_281 to i64
  %bias_addr_32 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_282
  %bias_load_31 = load float* %bias_addr_32, align 4
  %ShuffleConvs_1_Shuff_105 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_62, i64 0, i64 %tmp_243
  store float %bias_load_31, float* %ShuffleConvs_1_Shuff_105, align 4
  %tmp60 = add i11 -920, %tmp_238_cast1
  %tmp_283 = add i11 %i5_cast2, %tmp60
  %tmp_284 = zext i11 %tmp_283 to i64
  %bias_addr_33 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_284
  %bias_load_32 = load float* %bias_addr_33, align 4
  %ShuffleConvs_1_Shuff_106 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_63, i64 0, i64 %tmp_243
  store float %bias_load_32, float* %ShuffleConvs_1_Shuff_106, align 4
  %tmp61 = add i11 -872, %tmp_238_cast1
  %tmp_285 = add i11 %i5_cast2, %tmp61
  %tmp_286 = zext i11 %tmp_285 to i64
  %bias_addr_34 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_286
  %bias_load_33 = load float* %bias_addr_34, align 4
  %ShuffleConvs_1_Shuff_107 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_64, i64 0, i64 %tmp_243
  store float %bias_load_33, float* %ShuffleConvs_1_Shuff_107, align 4
  %tmp62 = add i11 -824, %tmp_238_cast1
  %tmp_287 = add i11 %i5_cast2, %tmp62
  %tmp_288 = zext i11 %tmp_287 to i64
  %bias_addr_35 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_288
  %bias_load_34 = load float* %bias_addr_35, align 4
  %ShuffleConvs_1_Shuff_108 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_65, i64 0, i64 %tmp_243
  store float %bias_load_34, float* %ShuffleConvs_1_Shuff_108, align 4
  %tmp63 = add i11 -776, %tmp_238_cast1
  %tmp_289 = add i11 %i5_cast2, %tmp63
  %tmp_290 = zext i11 %tmp_289 to i64
  %bias_addr_36 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_290
  %bias_load_35 = load float* %bias_addr_36, align 4
  %ShuffleConvs_1_Shuff_109 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_67, i64 0, i64 %tmp_243
  store float %bias_load_35, float* %ShuffleConvs_1_Shuff_109, align 4
  %tmp64 = add i11 -728, %tmp_238_cast1
  %tmp_291 = add i11 %i5_cast2, %tmp64
  %tmp_292 = zext i11 %tmp_291 to i64
  %bias_addr_37 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_292
  %bias_load_36 = load float* %bias_addr_37, align 4
  %ShuffleConvs_1_Shuff_110 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_68, i64 0, i64 %tmp_243
  store float %bias_load_36, float* %ShuffleConvs_1_Shuff_110, align 4
  %tmp65 = add i11 -680, %tmp_238_cast1
  %tmp_293 = add i11 %i5_cast2, %tmp65
  %tmp_294 = zext i11 %tmp_293 to i64
  %bias_addr_38 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_294
  %bias_load_37 = load float* %bias_addr_38, align 4
  %ShuffleConvs_1_Shuff_111 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_69, i64 0, i64 %tmp_243
  store float %bias_load_37, float* %ShuffleConvs_1_Shuff_111, align 4
  %tmp66 = add i11 -632, %tmp_238_cast1
  %tmp_295 = add i11 %i5_cast2, %tmp66
  %tmp_296 = zext i11 %tmp_295 to i64
  %bias_addr_39 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_296
  %bias_load_38 = load float* %bias_addr_39, align 4
  %ShuffleConvs_1_Shuff_112 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_70, i64 0, i64 %tmp_243
  store float %bias_load_38, float* %ShuffleConvs_1_Shuff_112, align 4
  %tmp67 = add i11 -584, %tmp_238_cast1
  %tmp_297 = add i11 %i5_cast2, %tmp67
  %tmp_298 = zext i11 %tmp_297 to i64
  %bias_addr_40 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_298
  %bias_load_39 = load float* %bias_addr_40, align 4
  %ShuffleConvs_1_Shuff_113 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_71, i64 0, i64 %tmp_243
  store float %bias_load_39, float* %ShuffleConvs_1_Shuff_113, align 4
  %tmp68 = add i11 -536, %tmp_238_cast1
  %tmp_299 = add i11 %i5_cast2, %tmp68
  %tmp_300 = zext i11 %tmp_299 to i64
  %bias_addr_41 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_300
  %bias_load_40 = load float* %bias_addr_41, align 4
  %ShuffleConvs_1_Shuff_114 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_17, i64 0, i64 %tmp_243
  store float %bias_load_40, float* %ShuffleConvs_1_Shuff_114, align 4
  %tmp69 = add i10 -488, %tmp_238_cast97_cast
  %tmp_301 = add i10 %i5_cast105_cast, %tmp69
  %tmp_317_cast = sext i10 %tmp_301 to i11
  %tmp_302 = zext i11 %tmp_317_cast to i64
  %bias_addr_42 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_302
  %bias_load_41 = load float* %bias_addr_42, align 4
  %ShuffleConvs_1_Shuff_115 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_39, i64 0, i64 %tmp_243
  store float %bias_load_41, float* %ShuffleConvs_1_Shuff_115, align 4
  %tmp70 = add i10 -440, %tmp_238_cast97_cast
  %tmp_303 = add i10 %i5_cast105_cast, %tmp70
  %tmp_320_cast = sext i10 %tmp_303 to i11
  %tmp_304 = zext i11 %tmp_320_cast to i64
  %bias_addr_43 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_304
  %bias_load_42 = load float* %bias_addr_43, align 4
  %ShuffleConvs_1_Shuff_116 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_55, i64 0, i64 %tmp_243
  store float %bias_load_42, float* %ShuffleConvs_1_Shuff_116, align 4
  %tmp71 = add i10 -392, %tmp_238_cast97_cast
  %tmp_305 = add i10 %i5_cast105_cast, %tmp71
  %tmp_323_cast = sext i10 %tmp_305 to i11
  %tmp_306 = zext i11 %tmp_323_cast to i64
  %bias_addr_44 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_306
  %bias_load_43 = load float* %bias_addr_44, align 4
  %ShuffleConvs_1_Shuff_117 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_66, i64 0, i64 %tmp_243
  store float %bias_load_43, float* %ShuffleConvs_1_Shuff_117, align 4
  %tmp72 = add i10 -344, %tmp_238_cast97_cast
  %tmp_307 = add i10 %i5_cast105_cast, %tmp72
  %tmp_326_cast = sext i10 %tmp_307 to i11
  %tmp_308 = zext i11 %tmp_326_cast to i64
  %bias_addr_45 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_308
  %bias_load_44 = load float* %bias_addr_45, align 4
  %ShuffleConvs_1_Shuff_118 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff, i64 0, i64 %tmp_243
  store float %bias_load_44, float* %ShuffleConvs_1_Shuff_118, align 4
  br label %10

.preheader28:                                     ; preds = %.preheader28.preheader, %12
  %k6 = phi i3 [ %k_2, %12 ], [ 0, %.preheader28.preheader ]
  %exitcond9 = icmp eq i3 %k6, -4
  %empty_414 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_2 = add i3 %k6, 1
  br i1 %exitcond9, label %.preheader29.loopexit, label %12

; <label>:12                                      ; preds = %.preheader28
  %tmp_132 = trunc i3 %k6 to i2
  %p_shl10 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_132, i5 0)
  %p_shl10_cast = zext i7 %p_shl10 to i8
  %p_shl11 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_132, i3 0)
  %p_shl11_cast = zext i5 %p_shl11 to i8
  %tmp_322 = sub i8 %p_shl10_cast, %p_shl11_cast
  %tmp_391_cast = sext i8 %tmp_322 to i12
  %tmp_391_cast_cast1 = sext i8 %tmp_322 to i9
  %tmp_391_cast_cast = sext i8 %tmp_322 to i10
  %tmp73 = add i10 -296, %tmp_391_cast_cast
  %tmp_323 = add i10 %i5_cast105_cast, %tmp73
  %tmp_393_cast = sext i10 %tmp_323 to i11
  %tmp_324 = zext i11 %tmp_393_cast to i64
  %bias_addr_46 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_324
  %bias_load_46 = load float* %bias_addr_46, align 4
  %tmp_325 = add i8 %tmp_322, %i5_cast104_cast1
  %tmp_395_cast = sext i8 %tmp_325 to i32
  %tmp_326 = zext i32 %tmp_395_cast to i64
  %ShuffleConvs_2_Downs_15 = getelementptr inbounds [96 x float]* @ShuffleConvs_2_Downs_3, i64 0, i64 %tmp_326
  store float %bias_load_46, float* %ShuffleConvs_2_Downs_15, align 4
  %tmp74 = add i9 -200, %tmp_391_cast_cast1
  %tmp_327 = add i9 %i5_cast105_cast1, %tmp74
  %tmp_398_cast = sext i9 %tmp_327 to i11
  %tmp_328 = zext i11 %tmp_398_cast to i64
  %bias_addr_47 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_328
  %bias_load_47 = load float* %bias_addr_47, align 4
  %ShuffleConvs_2_Downs_16 = getelementptr inbounds [96 x float]* @ShuffleConvs_2_Downs_5, i64 0, i64 %tmp_326
  store float %bias_load_47, float* %ShuffleConvs_2_Downs_16, align 4
  %tmp75 = add i9 -104, %tmp_391_cast_cast1
  %tmp75_cast1 = sext i9 %tmp75 to i11
  %tmp75_cast = zext i11 %tmp75_cast1 to i12
  %tmp_329 = add i12 %i5_cast1, %tmp75_cast
  %tmp_330 = zext i12 %tmp_329 to i64
  %bias_addr_48 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_330
  %bias_load_48 = load float* %bias_addr_48, align 4
  %ShuffleConvs_2_Downs_17 = getelementptr inbounds [96 x float]* @ShuffleConvs_2_Downs, i64 0, i64 %tmp_326
  store float %bias_load_48, float* %ShuffleConvs_2_Downs_17, align 4
  %tmp76 = add i12 2040, %tmp_391_cast
  %tmp_331 = add i12 %i5_cast1, %tmp76
  %tmp_332 = zext i12 %tmp_331 to i64
  %bias_addr_49 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_332
  %bias_load_49 = load float* %bias_addr_49, align 4
  %ShuffleConvs_2_Downs_18 = getelementptr inbounds [96 x float]* @ShuffleConvs_2_Downs_1, i64 0, i64 %tmp_326
  store float %bias_load_49, float* %ShuffleConvs_2_Downs_18, align 4
  %tmp77 = add i12 -1960, %tmp_391_cast
  %tmp_333 = add i12 %i5_cast1, %tmp77
  %tmp_334 = zext i12 %tmp_333 to i64
  %bias_addr_50 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_334
  %bias_load_50 = load float* %bias_addr_50, align 4
  %ShuffleConvs_2_Downs_19 = getelementptr inbounds [96 x float]* @ShuffleConvs_2_Downs_4, i64 0, i64 %tmp_326
  store float %bias_load_50, float* %ShuffleConvs_2_Downs_19, align 4
  %tmp78 = add i12 -1864, %tmp_391_cast
  %tmp_335 = add i12 %i5_cast1, %tmp78
  %tmp_336 = zext i12 %tmp_335 to i64
  %bias_addr_51 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_336
  %bias_load_51 = load float* %bias_addr_51, align 4
  %ShuffleConvs_2_Shuff_31 = getelementptr inbounds [96 x float]* @ShuffleConvs_2_Shuff_19, i64 0, i64 %tmp_326
  store float %bias_load_51, float* %ShuffleConvs_2_Shuff_31, align 4
  %tmp79 = add i12 -1768, %tmp_391_cast
  %tmp_337 = add i12 %i5_cast1, %tmp79
  %tmp_338 = zext i12 %tmp_337 to i64
  %bias_addr_52 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_338
  %bias_load_52 = load float* %bias_addr_52, align 4
  %ShuffleConvs_2_Shuff_32 = getelementptr inbounds [96 x float]* @ShuffleConvs_2_Shuff_20, i64 0, i64 %tmp_326
  store float %bias_load_52, float* %ShuffleConvs_2_Shuff_32, align 4
  %tmp80 = add i12 -1672, %tmp_391_cast
  %tmp_339 = add i12 %i5_cast1, %tmp80
  %tmp_340 = zext i12 %tmp_339 to i64
  %bias_addr_53 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_340
  %bias_load_53 = load float* %bias_addr_53, align 4
  %ShuffleConvs_2_Shuff_33 = getelementptr inbounds [96 x float]* @ShuffleConvs_2_Shuff_21, i64 0, i64 %tmp_326
  store float %bias_load_53, float* %ShuffleConvs_2_Shuff_33, align 4
  %tmp81 = add i12 -1576, %tmp_391_cast
  %tmp_341 = add i12 %i5_cast1, %tmp81
  %tmp_342 = zext i12 %tmp_341 to i64
  %bias_addr_54 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_342
  %bias_load_54 = load float* %bias_addr_54, align 4
  %ShuffleConvs_2_Shuff_34 = getelementptr inbounds [96 x float]* @ShuffleConvs_2_Shuff_22, i64 0, i64 %tmp_326
  store float %bias_load_54, float* %ShuffleConvs_2_Shuff_34, align 4
  %tmp82 = add i12 -1480, %tmp_391_cast
  %tmp_343 = add i12 %i5_cast1, %tmp82
  %tmp_344 = zext i12 %tmp_343 to i64
  %bias_addr_55 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_344
  %bias_load_55 = load float* %bias_addr_55, align 4
  %ShuffleConvs_2_Shuff_35 = getelementptr inbounds [96 x float]* @ShuffleConvs_2_Shuff_1, i64 0, i64 %tmp_326
  store float %bias_load_55, float* %ShuffleConvs_2_Shuff_35, align 4
  %tmp83 = add i12 -1384, %tmp_391_cast
  %tmp_345 = add i12 %i5_cast1, %tmp83
  %tmp_346 = zext i12 %tmp_345 to i64
  %bias_addr_56 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_346
  %bias_load_56 = load float* %bias_addr_56, align 4
  %ShuffleConvs_2_Shuff_36 = getelementptr inbounds [96 x float]* @ShuffleConvs_2_Shuff_3, i64 0, i64 %tmp_326
  store float %bias_load_56, float* %ShuffleConvs_2_Shuff_36, align 4
  %tmp84 = add i12 -1288, %tmp_391_cast
  %tmp_347 = add i12 %i5_cast1, %tmp84
  %tmp_348 = zext i12 %tmp_347 to i64
  %bias_addr_57 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_348
  %bias_load_57 = load float* %bias_addr_57, align 4
  %ShuffleConvs_2_Shuff_37 = getelementptr inbounds [96 x float]* @ShuffleConvs_2_Shuff_4, i64 0, i64 %tmp_326
  store float %bias_load_57, float* %ShuffleConvs_2_Shuff_37, align 4
  %tmp85 = add i12 -1192, %tmp_391_cast
  %tmp_349 = add i12 %i5_cast1, %tmp85
  %tmp_350 = zext i12 %tmp_349 to i64
  %bias_addr_58 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_350
  %bias_load_58 = load float* %bias_addr_58, align 4
  %ShuffleConvs_2_Shuff_38 = getelementptr inbounds [96 x float]* @ShuffleConvs_2_Shuff_17, i64 0, i64 %tmp_326
  store float %bias_load_58, float* %ShuffleConvs_2_Shuff_38, align 4
  %tmp86 = add i12 -1096, %tmp_391_cast
  %tmp_351 = add i12 %i5_cast1, %tmp86
  %tmp_352 = zext i12 %tmp_351 to i64
  %bias_addr_59 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_352
  %bias_load_59 = load float* %bias_addr_59, align 4
  %ShuffleConvs_2_Shuff_39 = getelementptr inbounds [96 x float]* @ShuffleConvs_2_Shuff, i64 0, i64 %tmp_326
  store float %bias_load_59, float* %ShuffleConvs_2_Shuff_39, align 4
  br label %.preheader28

.preheader27:                                     ; preds = %.preheader27.preheader, %13
  %i7 = phi i10 [ %i_2, %13 ], [ 0, %.preheader27.preheader ]
  %i7_cast92_cast = zext i10 %i7 to i11
  %exitcond8 = icmp eq i10 %i7, -512
  %empty_415 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512) nounwind
  %i_2 = add i10 %i7, 1
  br i1 %exitcond8, label %.preheader26.preheader, label %13

.preheader26.preheader:                           ; preds = %.preheader27
  br label %.preheader26

; <label>:13                                      ; preds = %.preheader27
  %tmp_231 = add i11 %i7_cast92_cast, -1000
  %tmp_231_cast = sext i11 %tmp_231 to i12
  %tmp_232 = zext i12 %tmp_231_cast to i64
  %bias_addr_15 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_232
  %bias_load_15 = load float* %bias_addr_15, align 4
  %tmp_233 = zext i10 %i7 to i64
  %conv_last_bias_addr = getelementptr inbounds [512 x float]* @conv_last_bias, i64 0, i64 %tmp_233
  store float %bias_load_15, float* %conv_last_bias_addr, align 4
  br label %.preheader27

.preheader26:                                     ; preds = %.preheader26.preheader, %14
  %i8 = phi i4 [ %i_4, %14 ], [ 0, %.preheader26.preheader ]
  %i8_cast90_cast = zext i4 %i8 to i10
  %exitcond7 = icmp eq i4 %i8, -6
  %empty_416 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10) nounwind
  %i_4 = add i4 %i8, 1
  br i1 %exitcond7, label %15, label %14

; <label>:14                                      ; preds = %.preheader26
  %tmp_235 = add i10 %i8_cast90_cast, -488
  %tmp_235_cast = sext i10 %tmp_235 to i12
  %tmp_236 = zext i12 %tmp_235_cast to i64
  %bias_addr_16 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_236
  %bias_load_45 = load float* %bias_addr_16, align 4
  %tmp_237 = zext i4 %i8 to i64
  %fc_bias_addr = getelementptr inbounds [10 x float]* @fc_bias, i64 0, i64 %tmp_237
  store float %bias_load_45, float* %fc_bias_addr, align 4
  br label %.preheader26

; <label>:15                                      ; preds = %.preheader26
  call fastcc void @conv1([3072 x float]* %image_r, [648 x float]* %conv1_weight, [24 x float]* @conv1_bias) nounwind
  call fastcc void @DownsampleUnit0([24576 x float]* @conv1_output, [576 x float]* @ShuffleConvs_0_Downs_7, [24 x float]* @ShuffleConvs_0_Downs_3, [216 x float]* @ShuffleConvs_0_Downs_9, [24 x float]* @ShuffleConvs_0_Downs_5, [576 x float]* @ShuffleConvs_0_Downs_10, [24 x float]* @ShuffleConvs_0_Downs, [216 x float]* @ShuffleConvs_0_Downs_6, [24 x float]* @ShuffleConvs_0_Downs_1, [576 x float]* @ShuffleConvs_0_Downs_8, [24 x float]* @ShuffleConvs_0_Downs_4) nounwind
  call fastcc void @ShuffleUnit0([12288 x float]* @downsampleunit0_outp, [576 x float]* @ShuffleConvs_0_Shuff_5, [24 x float]* @ShuffleConvs_0_Shuff_19, [216 x float]* @ShuffleConvs_0_Shuff_6, [24 x float]* @ShuffleConvs_0_Shuff_20, [576 x float]* @ShuffleConvs_0_Shuff_7, [24 x float]* @ShuffleConvs_0_Shuff_21, [12288 x float]* @shuffleunit0_0_outpu) nounwind
  call fastcc void @ShuffleUnit0([12288 x float]* @shuffleunit0_0_outpu, [576 x float]* @ShuffleConvs_0_Shuff_8, [24 x float]* @ShuffleConvs_0_Shuff_22, [216 x float]* @ShuffleConvs_0_Shuff_9, [24 x float]* @ShuffleConvs_0_Shuff_1, [576 x float]* @ShuffleConvs_0_Shuff_11, [24 x float]* @ShuffleConvs_0_Shuff_3, [12288 x float]* @shuffleunit0_1_outpu) nounwind
  call fastcc void @ShuffleUnit0([12288 x float]* @shuffleunit0_1_outpu, [576 x float]* @ShuffleConvs_0_Shuff_13, [24 x float]* @ShuffleConvs_0_Shuff_4, [216 x float]* @ShuffleConvs_0_Shuff_15, [24 x float]* @ShuffleConvs_0_Shuff_17, [576 x float]* @ShuffleConvs_0_Shuff_18, [24 x float]* @ShuffleConvs_0_Shuff, [12288 x float]* @shuffleunit0_2_outpu) nounwind
  call fastcc void @DownsampleUnit1([2304 x float]* @ShuffleConvs_1_Downs_7, [48 x float]* @ShuffleConvs_1_Downs_3, [432 x float]* @ShuffleConvs_1_Downs_9, [48 x float]* @ShuffleConvs_1_Downs_5, [2304 x float]* @ShuffleConvs_1_Downs_10, [48 x float]* @ShuffleConvs_1_Downs, [432 x float]* @ShuffleConvs_1_Downs_6, [48 x float]* @ShuffleConvs_1_Downs_1, [2304 x float]* @ShuffleConvs_1_Downs_8, [48 x float]* @ShuffleConvs_1_Downs_4) nounwind
  call fastcc void @ShuffleUnit1([6144 x float]* @downsampleunit1_outp, [2304 x float]* @ShuffleConvs_1_Shuff_1, [48 x float]* @ShuffleConvs_1_Shuff_51, [432 x float]* @ShuffleConvs_1_Shuff_3, [48 x float]* @ShuffleConvs_1_Shuff_52, [2304 x float]* @ShuffleConvs_1_Shuff_5, [48 x float]* @ShuffleConvs_1_Shuff_53, [6144 x float]* @shuffleunit1_0_outpu) nounwind
  call fastcc void @ShuffleUnit1([6144 x float]* @shuffleunit1_0_outpu, [2304 x float]* @ShuffleConvs_1_Shuff_7, [48 x float]* @ShuffleConvs_1_Shuff_54, [432 x float]* @ShuffleConvs_1_Shuff_9, [48 x float]* @ShuffleConvs_1_Shuff_56, [2304 x float]* @ShuffleConvs_1_Shuff_11, [48 x float]* @ShuffleConvs_1_Shuff_57, [6144 x float]* @shuffleunit1_1_outpu) nounwind
  call fastcc void @ShuffleUnit1([6144 x float]* @shuffleunit1_1_outpu, [2304 x float]* @ShuffleConvs_1_Shuff_13, [48 x float]* @ShuffleConvs_1_Shuff_58, [432 x float]* @ShuffleConvs_1_Shuff_15, [48 x float]* @ShuffleConvs_1_Shuff_59, [2304 x float]* @ShuffleConvs_1_Shuff_19, [48 x float]* @ShuffleConvs_1_Shuff_60, [6144 x float]* @shuffleunit1_2_outpu) nounwind
  call fastcc void @ShuffleUnit1([6144 x float]* @shuffleunit1_2_outpu, [2304 x float]* @ShuffleConvs_1_Shuff_21, [48 x float]* @ShuffleConvs_1_Shuff_61, [432 x float]* @ShuffleConvs_1_Shuff_23, [48 x float]* @ShuffleConvs_1_Shuff_62, [2304 x float]* @ShuffleConvs_1_Shuff_25, [48 x float]* @ShuffleConvs_1_Shuff_63, [6144 x float]* @shuffleunit1_3_outpu) nounwind
  call fastcc void @ShuffleUnit1([6144 x float]* @shuffleunit1_3_outpu, [2304 x float]* @ShuffleConvs_1_Shuff_27, [48 x float]* @ShuffleConvs_1_Shuff_64, [432 x float]* @ShuffleConvs_1_Shuff_29, [48 x float]* @ShuffleConvs_1_Shuff_65, [2304 x float]* @ShuffleConvs_1_Shuff_31, [48 x float]* @ShuffleConvs_1_Shuff_67, [6144 x float]* @shuffleunit1_4_outpu) nounwind
  call fastcc void @ShuffleUnit1([6144 x float]* @shuffleunit1_4_outpu, [2304 x float]* @ShuffleConvs_1_Shuff_33, [48 x float]* @ShuffleConvs_1_Shuff_68, [432 x float]* @ShuffleConvs_1_Shuff_35, [48 x float]* @ShuffleConvs_1_Shuff_69, [2304 x float]* @ShuffleConvs_1_Shuff_37, [48 x float]* @ShuffleConvs_1_Shuff_70, [6144 x float]* @shuffleunit1_5_outpu) nounwind
  call fastcc void @ShuffleUnit1([6144 x float]* @shuffleunit1_5_outpu, [2304 x float]* @ShuffleConvs_1_Shuff_41, [48 x float]* @ShuffleConvs_1_Shuff_71, [432 x float]* @ShuffleConvs_1_Shuff_43, [48 x float]* @ShuffleConvs_1_Shuff_17, [2304 x float]* @ShuffleConvs_1_Shuff_45, [48 x float]* @ShuffleConvs_1_Shuff_39, [6144 x float]* @shuffleunit1_6_outpu) nounwind
  call fastcc void @ShuffleUnit1([6144 x float]* @shuffleunit1_6_outpu, [2304 x float]* @ShuffleConvs_1_Shuff_47, [48 x float]* @ShuffleConvs_1_Shuff_55, [432 x float]* @ShuffleConvs_1_Shuff_49, [48 x float]* @ShuffleConvs_1_Shuff_66, [2304 x float]* @ShuffleConvs_1_Shuff_50, [48 x float]* @ShuffleConvs_1_Shuff, [6144 x float]* @shuffleunit1_7_outpu) nounwind
  call fastcc void @DownsampleUnit2([9216 x float]* @ShuffleConvs_2_Downs_7, [96 x float]* @ShuffleConvs_2_Downs_3, [864 x float]* @ShuffleConvs_2_Downs_9, [96 x float]* @ShuffleConvs_2_Downs_5, [9216 x float]* @ShuffleConvs_2_Downs_10, [96 x float]* @ShuffleConvs_2_Downs, [864 x float]* @ShuffleConvs_2_Downs_6, [96 x float]* @ShuffleConvs_2_Downs_1, [9216 x float]* @ShuffleConvs_2_Downs_8, [96 x float]* @ShuffleConvs_2_Downs_4) nounwind
  call fastcc void @ShuffleUnit2([3072 x float]* @downsampleunit2_outp, [9216 x float]* @ShuffleConvs_2_Shuff_5, [96 x float]* @ShuffleConvs_2_Shuff_19, [864 x float]* @ShuffleConvs_2_Shuff_6, [96 x float]* @ShuffleConvs_2_Shuff_20, [9216 x float]* @ShuffleConvs_2_Shuff_7, [96 x float]* @ShuffleConvs_2_Shuff_21, [3072 x float]* @shuffleunit2_0_outpu) nounwind
  call fastcc void @ShuffleUnit2([3072 x float]* @shuffleunit2_0_outpu, [9216 x float]* @ShuffleConvs_2_Shuff_8, [96 x float]* @ShuffleConvs_2_Shuff_22, [864 x float]* @ShuffleConvs_2_Shuff_9, [96 x float]* @ShuffleConvs_2_Shuff_1, [9216 x float]* @ShuffleConvs_2_Shuff_11, [96 x float]* @ShuffleConvs_2_Shuff_3, [3072 x float]* @shuffleunit2_1_outpu) nounwind
  call fastcc void @ShuffleUnit2([3072 x float]* @shuffleunit2_1_outpu, [9216 x float]* @ShuffleConvs_2_Shuff_13, [96 x float]* @ShuffleConvs_2_Shuff_4, [864 x float]* @ShuffleConvs_2_Shuff_15, [96 x float]* @ShuffleConvs_2_Shuff_17, [9216 x float]* @ShuffleConvs_2_Shuff_18, [96 x float]* @ShuffleConvs_2_Shuff, [3072 x float]* @shuffleunit2_2_outpu) nounwind
  call fastcc void @conv_last([98304 x float]* %conv_last_weight, [512 x float]* @conv_last_bias, [8192 x float]* @conv_last_output) nounwind
  call fastcc void @avgpool([512 x float]* @avgpool_output) nounwind
  br label %16

; <label>:16                                      ; preds = %18, %15
  %co_i = phi i4 [ 0, %15 ], [ %co_24, %18 ]
  %exitcond1_i = icmp eq i4 %co_i, -6
  %empty_417 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10) nounwind
  %co_24 = add i4 %co_i, 1
  br i1 %exitcond1_i, label %fc.exit.preheader_ifconv, label %.preheader.preheader.i

fc.exit.preheader_ifconv:                         ; preds = %16
  ret void

.preheader.preheader.i:                           ; preds = %16
  %tmp_i = zext i4 %co_i to i64
  %tmp_620 = call i13 @_ssdm_op_BitConcatenate.i13.i4.i9(i4 %co_i, i9 0)
  %tmp_723_cast = zext i13 %tmp_620 to i14
  br label %.preheader.i

.preheader.i:                                     ; preds = %17, %.preheader.preheader.i
  %sum_i = phi float [ %sum, %17 ], [ 0.000000e+00, %.preheader.preheader.i ]
  %ci_i = phi i10 [ %ci_10, %17 ], [ 0, %.preheader.preheader.i ]
  %exitcond_i = icmp eq i10 %ci_i, -512
  %empty_418 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512) nounwind
  %ci_10 = add i10 %ci_i, 1
  br i1 %exitcond_i, label %18, label %17

; <label>:17                                      ; preds = %.preheader.i
  %tmp_i_419 = zext i10 %ci_i to i64
  %tmp_i_cast = zext i10 %ci_i to i14
  %tmp_653 = add i14 %tmp_723_cast, %tmp_i_cast
  %tmp_764_cast = zext i14 %tmp_653 to i64
  %fc_weight_addr = getelementptr [5120 x float]* %fc_weight, i64 0, i64 %tmp_764_cast
  %fc_weight_load = load float* %fc_weight_addr, align 4
  %avgpool_output_addr = getelementptr [512 x float]* @avgpool_output, i64 0, i64 %tmp_i_419
  %avgpool_output_load = load float* %avgpool_output_addr, align 4
  %tmp_130_i = fmul float %fc_weight_load, %avgpool_output_load
  %sum = fadd float %sum_i, %tmp_130_i
  br label %.preheader.i

; <label>:18                                      ; preds = %.preheader.i
  %fc_bias_addr_1 = getelementptr [10 x float]* @fc_bias, i64 0, i64 %tmp_i
  %fc_bias_load = load float* %fc_bias_addr_1, align 4
  %result = fadd float %sum_i, %fc_bias_load
  %fc_output_addr = getelementptr [1000 x float]* %fc_output, i64 0, i64 %tmp_i
  store float %result, float* %fc_output_addr, align 4
  br label %16
}

define internal fastcc void @DownsampleUnit2([9216 x float]* nocapture %conv1r_weight, [96 x float]* nocapture %conv1r_bias, [864 x float]* nocapture %conv2r_weight, [96 x float]* nocapture %conv2r_bias, [9216 x float]* nocapture %conv3r_weight, [96 x float]* nocapture %conv3r_bias, [864 x float]* nocapture %conv1l_weight, [96 x float]* nocapture %conv1l_bias, [9216 x float]* nocapture %conv2l_weight, [96 x float]* nocapture %conv2l_bias) {
meminst.0:
  %conv1r_output = alloca [6144 x float], align 4
  %conv2r_ourput_0 = alloca [1536 x float], align 4
  %conv3r_ourput_0 = alloca [1536 x float], align 4
  %conv1l_output_0 = alloca [1536 x float], align 4
  %conv2l_output_0 = alloca [1536 x float], align 4
  br label %meminst2.0

meminst25.0:                                      ; preds = %meminst69.0
  %tmp_396 = icmp eq i7 %invdar3, -33
  %empty = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1r_output) nounwind
  br i1 %tmp_396, label %meminst17.0.preheader, label %meminst2.0

meminst17.0.preheader:                            ; preds = %meminst25.0
  br label %meminst17.0

meminst69.0:                                      ; preds = %meminst10.0
  %tmp_395 = icmp eq i3 %invdar7, -1
  %empty_420 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1r_output) nounwind
  br i1 %tmp_395, label %meminst25.0, label %meminst6.0

meminst10.0:                                      ; preds = %meminst6.0, %meminst10.0
  %invdar11 = phi i3 [ 0, %meminst6.0 ], [ %indvarinc12, %meminst10.0 ]
  %indvarinc12 = add i3 %invdar11, 1
  %tmp = call i13 @_ssdm_op_BitConcatenate.i13.i7.i3.i3(i7 %invdar3, i3 %invdar7, i3 %invdar11)
  %tmp_654 = zext i13 %tmp to i64
  %conv1r_output_addr = getelementptr [6144 x float]* %conv1r_output, i64 0, i64 %tmp_654
  store float 0.000000e+00, float* %conv1r_output_addr, align 4
  %tmp_s = icmp eq i3 %invdar11, -1
  %empty_421 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1r_output) nounwind
  %empty_422 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %tmp_s, label %meminst69.0, label %meminst10.0

meminst6.0:                                       ; preds = %meminst2.0, %meminst69.0
  %invdar7 = phi i3 [ 0, %meminst2.0 ], [ %indvarinc8, %meminst69.0 ]
  %indvarinc8 = add i3 %invdar7, 1
  %empty_423 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br label %meminst10.0

meminst2.0:                                       ; preds = %meminst25.0, %meminst.0
  %invdar3 = phi i7 [ 0, %meminst.0 ], [ %indvarinc4, %meminst25.0 ]
  %indvarinc4 = add i7 %invdar3, 1
  %empty_424 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  br label %meminst6.0

meminst1720.0:                                    ; preds = %meminst2124.0
  %tmp_399 = icmp eq i7 %invdar18, -33
  %empty_425 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2r_ourput) nounwind
  br i1 %tmp_399, label %meminst33.0.preheader, label %meminst17.0

meminst33.0.preheader:                            ; preds = %meminst1720.0
  br label %meminst33.0

meminst2124.0:                                    ; preds = %meminst26.0
  %tmp_398 = icmp eq i2 %invdar22, -1
  %empty_426 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2r_ourput) nounwind
  br i1 %tmp_398, label %meminst1720.0, label %meminst21.0

meminst26.0:                                      ; preds = %meminst21.0, %meminst26.0
  %invdar27 = phi i2 [ 0, %meminst21.0 ], [ %indvarinc28, %meminst26.0 ]
  %indvarinc28 = add i2 %invdar27, 1
  %tmp_147 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i2.i2(i7 %invdar18, i2 %invdar22, i2 %invdar27)
  %tmp_655 = zext i11 %tmp_147 to i64
  %conv2r_ourput_0_add = getelementptr [1536 x float]* %conv2r_ourput_0, i64 0, i64 %tmp_655
  store float 0.000000e+00, float* %conv2r_ourput_0_add, align 4
  %tmp_397 = icmp eq i2 %invdar27, -1
  %empty_427 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2r_ourput) nounwind
  %empty_428 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %tmp_397, label %meminst2124.0, label %meminst26.0

meminst21.0:                                      ; preds = %meminst17.0, %meminst2124.0
  %invdar22 = phi i2 [ 0, %meminst17.0 ], [ %indvarinc23, %meminst2124.0 ]
  %indvarinc23 = add i2 %invdar22, 1
  %empty_429 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br label %meminst26.0

meminst17.0:                                      ; preds = %meminst17.0.preheader, %meminst1720.0
  %invdar18 = phi i7 [ %indvarinc19, %meminst1720.0 ], [ 0, %meminst17.0.preheader ]
  %indvarinc19 = add i7 %invdar18, 1
  %empty_430 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  br label %meminst21.0

meminst3336.0:                                    ; preds = %meminst3740.0
  %tmp_402 = icmp eq i7 %invdar34, -33
  %empty_431 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv3r_ourput) nounwind
  br i1 %tmp_402, label %meminst48.0.preheader, label %meminst33.0

meminst48.0.preheader:                            ; preds = %meminst3336.0
  br label %meminst48.0

meminst3740.0:                                    ; preds = %meminst41.0
  %tmp_401 = icmp eq i2 %invdar, -1
  %empty_432 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv3r_ourput) nounwind
  br i1 %tmp_401, label %meminst3336.0, label %meminst37.0

meminst41.0:                                      ; preds = %meminst37.0, %meminst41.0
  %invdar35 = phi i2 [ 0, %meminst37.0 ], [ %indvarinc36, %meminst41.0 ]
  %indvarinc36 = add i2 %invdar35, 1
  %tmp_148 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i2.i2(i7 %invdar34, i2 %invdar, i2 %invdar35)
  %tmp_656 = zext i11 %tmp_148 to i64
  %conv3r_ourput_0_add = getelementptr [1536 x float]* %conv3r_ourput_0, i64 0, i64 %tmp_656
  store float 0.000000e+00, float* %conv3r_ourput_0_add, align 4
  %tmp_400 = icmp eq i2 %invdar35, -1
  %empty_433 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv3r_ourput) nounwind
  %empty_434 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %tmp_400, label %meminst3740.0, label %meminst41.0

meminst37.0:                                      ; preds = %meminst33.0, %meminst3740.0
  %invdar = phi i2 [ 0, %meminst33.0 ], [ %indvarinc, %meminst3740.0 ]
  %indvarinc = add i2 %invdar, 1
  %empty_435 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br label %meminst41.0

meminst33.0:                                      ; preds = %meminst33.0.preheader, %meminst3336.0
  %invdar34 = phi i7 [ %indvarinc35, %meminst3336.0 ], [ 0, %meminst33.0.preheader ]
  %indvarinc35 = add i7 %invdar34, 1
  %empty_436 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  br label %meminst37.0

meminst4851.0:                                    ; preds = %meminst5255.0
  %tmp_405 = icmp eq i7 %invdar36, -33
  %empty_437 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1l_output) nounwind
  br i1 %tmp_405, label %meminst63.0.preheader, label %meminst48.0

meminst63.0.preheader:                            ; preds = %meminst4851.0
  br label %meminst63.0

meminst5255.0:                                    ; preds = %meminst56.0
  %tmp_404 = icmp eq i2 %invdar37, -1
  %empty_438 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1l_output) nounwind
  br i1 %tmp_404, label %meminst4851.0, label %meminst52.0

meminst56.0:                                      ; preds = %meminst52.0, %meminst56.0
  %invdar38 = phi i2 [ 0, %meminst52.0 ], [ %indvarinc39, %meminst56.0 ]
  %indvarinc39 = add i2 %invdar38, 1
  %tmp_149 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i2.i2(i7 %invdar36, i2 %invdar37, i2 %invdar38)
  %tmp_657 = zext i11 %tmp_149 to i64
  %conv1l_output_0_add = getelementptr [1536 x float]* %conv1l_output_0, i64 0, i64 %tmp_657
  store float 0.000000e+00, float* %conv1l_output_0_add, align 4
  %tmp_403 = icmp eq i2 %invdar38, -1
  %empty_439 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1l_output) nounwind
  %empty_440 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %tmp_403, label %meminst5255.0, label %meminst56.0

meminst52.0:                                      ; preds = %meminst48.0, %meminst5255.0
  %invdar37 = phi i2 [ 0, %meminst48.0 ], [ %indvarinc38, %meminst5255.0 ]
  %indvarinc38 = add i2 %invdar37, 1
  %empty_441 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br label %meminst56.0

meminst48.0:                                      ; preds = %meminst48.0.preheader, %meminst4851.0
  %invdar36 = phi i7 [ %indvarinc37, %meminst4851.0 ], [ 0, %meminst48.0.preheader ]
  %indvarinc37 = add i7 %invdar36, 1
  %empty_442 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  br label %meminst52.0

meminst6366.0:                                    ; preds = %meminst6770.0
  %tmp_408 = icmp eq i7 %invdar39, -33
  %empty_443 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2l_output) nounwind
  br i1 %tmp_408, label %meminst5962.0, label %meminst63.0

meminst6770.0:                                    ; preds = %meminst71.0
  %tmp_407 = icmp eq i2 %invdar40, -1
  %empty_444 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2l_output) nounwind
  br i1 %tmp_407, label %meminst6366.0, label %meminst67.0

meminst71.0:                                      ; preds = %meminst67.0, %meminst71.0
  %invdar41 = phi i2 [ 0, %meminst67.0 ], [ %indvarinc42, %meminst71.0 ]
  %indvarinc42 = add i2 %invdar41, 1
  %tmp_150 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i2.i2(i7 %invdar39, i2 %invdar40, i2 %invdar41)
  %tmp_658 = zext i11 %tmp_150 to i64
  %conv2l_output_0_add = getelementptr [1536 x float]* %conv2l_output_0, i64 0, i64 %tmp_658
  store float 0.000000e+00, float* %conv2l_output_0_add, align 4
  %tmp_406 = icmp eq i2 %invdar41, -1
  %empty_445 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2l_output) nounwind
  %empty_446 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %tmp_406, label %meminst6770.0, label %meminst71.0

meminst67.0:                                      ; preds = %meminst63.0, %meminst6770.0
  %invdar40 = phi i2 [ 0, %meminst63.0 ], [ %indvarinc41, %meminst6770.0 ]
  %indvarinc41 = add i2 %invdar40, 1
  %empty_447 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br label %meminst71.0

meminst63.0:                                      ; preds = %meminst63.0.preheader, %meminst6366.0
  %invdar39 = phi i7 [ %indvarinc40, %meminst6366.0 ], [ 0, %meminst63.0.preheader ]
  %indvarinc40 = add i7 %invdar39, 1
  %empty_448 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  br label %meminst67.0

meminst5962.0:                                    ; preds = %meminst6366.0
  call fastcc void @subconv_1x1_8p20([9216 x float]* %conv1r_weight, [96 x float]* %conv1r_bias, [6144 x float]* %conv1r_output)
  call fastcc void @subconv_3x3_8_stride([6144 x float]* %conv1r_output, [864 x float]* %conv2r_weight, [96 x float]* %conv2r_bias, [1536 x float]* %conv2r_ourput_0)
  call fastcc void @subconv_1x1_419([1536 x float]* %conv2r_ourput_0, [9216 x float]* %conv3r_weight, [96 x float]* %conv3r_bias, [1536 x float]* %conv3r_ourput_0)
  call fastcc void @subconv_3x3_8_stride([6144 x float]* @shuffleunit1_7_outpu, [864 x float]* %conv1l_weight, [96 x float]* %conv1l_bias, [1536 x float]* %conv1l_output_0)
  call fastcc void @subconv_1x1_419([1536 x float]* %conv1l_output_0, [9216 x float]* %conv2l_weight, [96 x float]* %conv2l_bias, [1536 x float]* %conv2l_output_0)
  call fastcc void @shuffle_9621([1536 x float]* %conv3r_ourput_0, [1536 x float]* %conv2l_output_0, [3072 x float]* @downsampleunit2_outp)
  ret void
}

define internal fastcc void @DownsampleUnit1([2304 x float]* nocapture %conv1r_weight, [48 x float]* nocapture %conv1r_bias, [432 x float]* nocapture %conv2r_weight, [48 x float]* nocapture %conv2r_bias, [2304 x float]* nocapture %conv3r_weight, [48 x float]* nocapture %conv3r_bias, [432 x float]* nocapture %conv1l_weight, [48 x float]* nocapture %conv1l_bias, [2304 x float]* nocapture %conv2l_weight, [48 x float]* nocapture %conv2l_bias) {
meminst.0:
  %conv1r_output = alloca [12288 x float], align 4
  %conv2r_ourput_0 = alloca [3072 x float], align 4
  %conv3r_ourput_0 = alloca [3072 x float], align 4
  %conv1l_output_0 = alloca [3072 x float], align 4
  %conv2l_output_0 = alloca [3072 x float], align 4
  br label %meminst2.0

meminst25.0:                                      ; preds = %meminst69.0
  %tmp_410 = icmp eq i6 %invdar3, -17
  %empty = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1r_output) nounwind
  br i1 %tmp_410, label %meminst17.0.preheader, label %meminst2.0

meminst17.0.preheader:                            ; preds = %meminst25.0
  br label %meminst17.0

meminst69.0:                                      ; preds = %meminst10.0
  %tmp_409 = icmp eq i4 %invdar7, -1
  %empty_449 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1r_output) nounwind
  br i1 %tmp_409, label %meminst25.0, label %meminst6.0

meminst10.0:                                      ; preds = %meminst6.0, %meminst10.0
  %invdar11 = phi i4 [ 0, %meminst6.0 ], [ %indvarinc12, %meminst10.0 ]
  %indvarinc12 = add i4 %invdar11, 1
  %tmp = call i14 @_ssdm_op_BitConcatenate.i14.i6.i4.i4(i6 %invdar3, i4 %invdar7, i4 %invdar11)
  %tmp_659 = zext i14 %tmp to i64
  %conv1r_output_addr = getelementptr [12288 x float]* %conv1r_output, i64 0, i64 %tmp_659
  store float 0.000000e+00, float* %conv1r_output_addr, align 4
  %tmp_s = icmp eq i4 %invdar11, -1
  %empty_450 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1r_output) nounwind
  %empty_451 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %tmp_s, label %meminst69.0, label %meminst10.0

meminst6.0:                                       ; preds = %meminst2.0, %meminst69.0
  %invdar7 = phi i4 [ 0, %meminst2.0 ], [ %indvarinc8, %meminst69.0 ]
  %indvarinc8 = add i4 %invdar7, 1
  %empty_452 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br label %meminst10.0

meminst2.0:                                       ; preds = %meminst25.0, %meminst.0
  %invdar3 = phi i6 [ 0, %meminst.0 ], [ %indvarinc4, %meminst25.0 ]
  %indvarinc4 = add i6 %invdar3, 1
  %empty_453 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  br label %meminst6.0

meminst1720.0:                                    ; preds = %meminst2124.0
  %tmp_413 = icmp eq i6 %invdar18, -17
  %empty_454 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2r_ourput) nounwind
  br i1 %tmp_413, label %meminst33.0.preheader, label %meminst17.0

meminst33.0.preheader:                            ; preds = %meminst1720.0
  br label %meminst33.0

meminst2124.0:                                    ; preds = %meminst26.0
  %tmp_412 = icmp eq i3 %invdar22, -1
  %empty_455 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2r_ourput) nounwind
  br i1 %tmp_412, label %meminst1720.0, label %meminst21.0

meminst26.0:                                      ; preds = %meminst21.0, %meminst26.0
  %invdar27 = phi i3 [ 0, %meminst21.0 ], [ %indvarinc28, %meminst26.0 ]
  %indvarinc28 = add i3 %invdar27, 1
  %tmp_151 = call i12 @_ssdm_op_BitConcatenate.i12.i6.i3.i3(i6 %invdar18, i3 %invdar22, i3 %invdar27)
  %tmp_660 = zext i12 %tmp_151 to i64
  %conv2r_ourput_0_add = getelementptr [3072 x float]* %conv2r_ourput_0, i64 0, i64 %tmp_660
  store float 0.000000e+00, float* %conv2r_ourput_0_add, align 4
  %tmp_411 = icmp eq i3 %invdar27, -1
  %empty_456 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2r_ourput) nounwind
  %empty_457 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %tmp_411, label %meminst2124.0, label %meminst26.0

meminst21.0:                                      ; preds = %meminst17.0, %meminst2124.0
  %invdar22 = phi i3 [ 0, %meminst17.0 ], [ %indvarinc23, %meminst2124.0 ]
  %indvarinc23 = add i3 %invdar22, 1
  %empty_458 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br label %meminst26.0

meminst17.0:                                      ; preds = %meminst17.0.preheader, %meminst1720.0
  %invdar18 = phi i6 [ %indvarinc19, %meminst1720.0 ], [ 0, %meminst17.0.preheader ]
  %indvarinc19 = add i6 %invdar18, 1
  %empty_459 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  br label %meminst21.0

meminst3336.0:                                    ; preds = %meminst3740.0
  %tmp_416 = icmp eq i6 %invdar34, -17
  %empty_460 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv3r_ourput) nounwind
  br i1 %tmp_416, label %meminst48.0.preheader, label %meminst33.0

meminst48.0.preheader:                            ; preds = %meminst3336.0
  br label %meminst48.0

meminst3740.0:                                    ; preds = %meminst41.0
  %tmp_415 = icmp eq i3 %invdar38, -1
  %empty_461 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv3r_ourput) nounwind
  br i1 %tmp_415, label %meminst3336.0, label %meminst37.0

meminst41.0:                                      ; preds = %meminst37.0, %meminst41.0
  %invdar = phi i3 [ 0, %meminst37.0 ], [ %indvarinc, %meminst41.0 ]
  %indvarinc = add i3 %invdar, 1
  %tmp_152 = call i12 @_ssdm_op_BitConcatenate.i12.i6.i3.i3(i6 %invdar34, i3 %invdar38, i3 %invdar)
  %tmp_661 = zext i12 %tmp_152 to i64
  %conv3r_ourput_0_add = getelementptr [3072 x float]* %conv3r_ourput_0, i64 0, i64 %tmp_661
  store float 0.000000e+00, float* %conv3r_ourput_0_add, align 4
  %tmp_414 = icmp eq i3 %invdar, -1
  %empty_462 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv3r_ourput) nounwind
  %empty_463 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %tmp_414, label %meminst3740.0, label %meminst41.0

meminst37.0:                                      ; preds = %meminst33.0, %meminst3740.0
  %invdar38 = phi i3 [ 0, %meminst33.0 ], [ %indvarinc39, %meminst3740.0 ]
  %indvarinc39 = add i3 %invdar38, 1
  %empty_464 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br label %meminst41.0

meminst33.0:                                      ; preds = %meminst33.0.preheader, %meminst3336.0
  %invdar34 = phi i6 [ %indvarinc35, %meminst3336.0 ], [ 0, %meminst33.0.preheader ]
  %indvarinc35 = add i6 %invdar34, 1
  %empty_465 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  br label %meminst37.0

meminst4851.0:                                    ; preds = %meminst5255.0
  %tmp_419 = icmp eq i6 %invdar42, -17
  %empty_466 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1l_output) nounwind
  br i1 %tmp_419, label %meminst63.0.preheader, label %meminst48.0

meminst63.0.preheader:                            ; preds = %meminst4851.0
  br label %meminst63.0

meminst5255.0:                                    ; preds = %meminst56.0
  %tmp_418 = icmp eq i3 %invdar43, -1
  %empty_467 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1l_output) nounwind
  br i1 %tmp_418, label %meminst4851.0, label %meminst52.0

meminst56.0:                                      ; preds = %meminst52.0, %meminst56.0
  %invdar44 = phi i3 [ 0, %meminst52.0 ], [ %indvarinc45, %meminst56.0 ]
  %indvarinc45 = add i3 %invdar44, 1
  %tmp_153 = call i12 @_ssdm_op_BitConcatenate.i12.i6.i3.i3(i6 %invdar42, i3 %invdar43, i3 %invdar44)
  %tmp_662 = zext i12 %tmp_153 to i64
  %conv1l_output_0_add = getelementptr [3072 x float]* %conv1l_output_0, i64 0, i64 %tmp_662
  store float 0.000000e+00, float* %conv1l_output_0_add, align 4
  %tmp_417 = icmp eq i3 %invdar44, -1
  %empty_468 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1l_output) nounwind
  %empty_469 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %tmp_417, label %meminst5255.0, label %meminst56.0

meminst52.0:                                      ; preds = %meminst48.0, %meminst5255.0
  %invdar43 = phi i3 [ 0, %meminst48.0 ], [ %indvarinc44, %meminst5255.0 ]
  %indvarinc44 = add i3 %invdar43, 1
  %empty_470 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br label %meminst56.0

meminst48.0:                                      ; preds = %meminst48.0.preheader, %meminst4851.0
  %invdar42 = phi i6 [ %indvarinc43, %meminst4851.0 ], [ 0, %meminst48.0.preheader ]
  %indvarinc43 = add i6 %invdar42, 1
  %empty_471 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  br label %meminst52.0

meminst6366.0:                                    ; preds = %meminst6770.0
  %tmp_422 = icmp eq i6 %invdar45, -17
  %empty_472 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2l_output) nounwind
  br i1 %tmp_422, label %meminst5962.0, label %meminst63.0

meminst6770.0:                                    ; preds = %meminst71.0
  %tmp_421 = icmp eq i3 %invdar46, -1
  %empty_473 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2l_output) nounwind
  br i1 %tmp_421, label %meminst6366.0, label %meminst67.0

meminst71.0:                                      ; preds = %meminst67.0, %meminst71.0
  %invdar47 = phi i3 [ 0, %meminst67.0 ], [ %indvarinc48, %meminst71.0 ]
  %indvarinc48 = add i3 %invdar47, 1
  %tmp_154 = call i12 @_ssdm_op_BitConcatenate.i12.i6.i3.i3(i6 %invdar45, i3 %invdar46, i3 %invdar47)
  %tmp_663 = zext i12 %tmp_154 to i64
  %conv2l_output_0_add = getelementptr [3072 x float]* %conv2l_output_0, i64 0, i64 %tmp_663
  store float 0.000000e+00, float* %conv2l_output_0_add, align 4
  %tmp_420 = icmp eq i3 %invdar47, -1
  %empty_474 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2l_output) nounwind
  %empty_475 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %tmp_420, label %meminst6770.0, label %meminst71.0

meminst67.0:                                      ; preds = %meminst63.0, %meminst6770.0
  %invdar46 = phi i3 [ 0, %meminst63.0 ], [ %indvarinc47, %meminst6770.0 ]
  %indvarinc47 = add i3 %invdar46, 1
  %empty_476 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br label %meminst71.0

meminst63.0:                                      ; preds = %meminst63.0.preheader, %meminst6366.0
  %invdar45 = phi i6 [ %indvarinc46, %meminst6366.0 ], [ 0, %meminst63.0.preheader ]
  %indvarinc46 = add i6 %invdar45, 1
  %empty_477 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  br label %meminst67.0

meminst5962.0:                                    ; preds = %meminst6366.0
  call fastcc void @subconv_1x1_16p16([2304 x float]* %conv1r_weight, [48 x float]* %conv1r_bias, [12288 x float]* %conv1r_output)
  call fastcc void @subconv_3x3_16_strid([12288 x float]* %conv1r_output, [432 x float]* %conv2r_weight, [48 x float]* %conv2r_bias, [3072 x float]* %conv2r_ourput_0)
  call fastcc void @subconv_1x1_89([3072 x float]* %conv2r_ourput_0, [2304 x float]* %conv3r_weight, [48 x float]* %conv3r_bias, [3072 x float]* %conv3r_ourput_0)
  call fastcc void @subconv_3x3_16_strid([12288 x float]* @shuffleunit0_2_outpu, [432 x float]* %conv1l_weight, [48 x float]* %conv1l_bias, [3072 x float]* %conv1l_output_0)
  call fastcc void @subconv_1x1_89([3072 x float]* %conv1l_output_0, [2304 x float]* %conv2l_weight, [48 x float]* %conv2l_bias, [3072 x float]* %conv2l_output_0)
  call fastcc void @shuffle_4811([3072 x float]* %conv3r_ourput_0, [3072 x float]* %conv2l_output_0, [6144 x float]* @downsampleunit1_outp)
  ret void
}

define internal fastcc void @DownsampleUnit0([24576 x float]* nocapture %input_r, [576 x float]* nocapture %conv1r_weight, [24 x float]* nocapture %conv1r_bias, [216 x float]* nocapture %conv2r_weight, [24 x float]* nocapture %conv2r_bias, [576 x float]* nocapture %conv3r_weight, [24 x float]* nocapture %conv3r_bias, [216 x float]* nocapture %conv1l_weight, [24 x float]* nocapture %conv1l_bias, [576 x float]* nocapture %conv2l_weight, [24 x float]* nocapture %conv2l_bias) {
meminst.0:
  %conv1r_output = alloca [24576 x float], align 4
  %conv2r_ourput_0 = alloca [6144 x float], align 4
  %conv3r_ourput_0 = alloca [6144 x float], align 4
  %conv1l_output_0 = alloca [6144 x float], align 4
  %conv2l_output_0 = alloca [6144 x float], align 4
  br label %meminst2.0

meminst25.0:                                      ; preds = %meminst69.0
  %tmp_424 = icmp eq i5 %invdar3, -9
  %empty = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1r_output) nounwind
  br i1 %tmp_424, label %meminst17.0.preheader, label %meminst2.0

meminst17.0.preheader:                            ; preds = %meminst25.0
  br label %meminst17.0

meminst69.0:                                      ; preds = %meminst10.0
  %tmp_423 = icmp eq i5 %invdar7, -1
  %empty_478 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1r_output) nounwind
  br i1 %tmp_423, label %meminst25.0, label %meminst6.0

meminst10.0:                                      ; preds = %meminst6.0, %meminst10.0
  %invdar11 = phi i5 [ 0, %meminst6.0 ], [ %indvarinc12, %meminst10.0 ]
  %indvarinc12 = add i5 %invdar11, 1
  %tmp = call i15 @_ssdm_op_BitConcatenate.i15.i5.i5.i5(i5 %invdar3, i5 %invdar7, i5 %invdar11)
  %tmp_664 = zext i15 %tmp to i64
  %conv1r_output_addr = getelementptr [24576 x float]* %conv1r_output, i64 0, i64 %tmp_664
  store float 0.000000e+00, float* %conv1r_output_addr, align 4
  %tmp_s = icmp eq i5 %invdar11, -1
  %empty_479 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1r_output) nounwind
  %empty_480 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  br i1 %tmp_s, label %meminst69.0, label %meminst10.0

meminst6.0:                                       ; preds = %meminst2.0, %meminst69.0
  %invdar7 = phi i5 [ 0, %meminst2.0 ], [ %indvarinc8, %meminst69.0 ]
  %indvarinc8 = add i5 %invdar7, 1
  %empty_481 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  br label %meminst10.0

meminst2.0:                                       ; preds = %meminst25.0, %meminst.0
  %invdar3 = phi i5 [ 0, %meminst.0 ], [ %indvarinc4, %meminst25.0 ]
  %indvarinc4 = add i5 %invdar3, 1
  %empty_482 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  br label %meminst6.0

meminst1720.0:                                    ; preds = %meminst2124.0
  %tmp_427 = icmp eq i5 %invdar18, -9
  %empty_483 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2r_ourput) nounwind
  br i1 %tmp_427, label %meminst33.0.preheader, label %meminst17.0

meminst33.0.preheader:                            ; preds = %meminst1720.0
  br label %meminst33.0

meminst2124.0:                                    ; preds = %meminst26.0
  %tmp_426 = icmp eq i4 %invdar22, -1
  %empty_484 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2r_ourput) nounwind
  br i1 %tmp_426, label %meminst1720.0, label %meminst21.0

meminst26.0:                                      ; preds = %meminst21.0, %meminst26.0
  %invdar27 = phi i4 [ 0, %meminst21.0 ], [ %indvarinc28, %meminst26.0 ]
  %indvarinc28 = add i4 %invdar27, 1
  %tmp_155 = call i13 @_ssdm_op_BitConcatenate.i13.i5.i4.i4(i5 %invdar18, i4 %invdar22, i4 %invdar27)
  %tmp_665 = zext i13 %tmp_155 to i64
  %conv2r_ourput_0_add = getelementptr [6144 x float]* %conv2r_ourput_0, i64 0, i64 %tmp_665
  store float 0.000000e+00, float* %conv2r_ourput_0_add, align 4
  %tmp_425 = icmp eq i4 %invdar27, -1
  %empty_485 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2r_ourput) nounwind
  %empty_486 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %tmp_425, label %meminst2124.0, label %meminst26.0

meminst21.0:                                      ; preds = %meminst17.0, %meminst2124.0
  %invdar22 = phi i4 [ 0, %meminst17.0 ], [ %indvarinc23, %meminst2124.0 ]
  %indvarinc23 = add i4 %invdar22, 1
  %empty_487 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br label %meminst26.0

meminst17.0:                                      ; preds = %meminst17.0.preheader, %meminst1720.0
  %invdar18 = phi i5 [ %indvarinc19, %meminst1720.0 ], [ 0, %meminst17.0.preheader ]
  %indvarinc19 = add i5 %invdar18, 1
  %empty_488 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  br label %meminst21.0

meminst3336.0:                                    ; preds = %meminst3740.0
  %tmp_430 = icmp eq i5 %invdar34, -9
  %empty_489 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv3r_ourput) nounwind
  br i1 %tmp_430, label %meminst48.0.preheader, label %meminst33.0

meminst48.0.preheader:                            ; preds = %meminst3336.0
  br label %meminst48.0

meminst3740.0:                                    ; preds = %meminst41.0
  %tmp_429 = icmp eq i4 %invdar38, -1
  %empty_490 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv3r_ourput) nounwind
  br i1 %tmp_429, label %meminst3336.0, label %meminst37.0

meminst41.0:                                      ; preds = %meminst37.0, %meminst41.0
  %invdar42 = phi i4 [ 0, %meminst37.0 ], [ %indvarinc43, %meminst41.0 ]
  %indvarinc43 = add i4 %invdar42, 1
  %tmp_156 = call i13 @_ssdm_op_BitConcatenate.i13.i5.i4.i4(i5 %invdar34, i4 %invdar38, i4 %invdar42)
  %tmp_666 = zext i13 %tmp_156 to i64
  %conv3r_ourput_0_add = getelementptr [6144 x float]* %conv3r_ourput_0, i64 0, i64 %tmp_666
  store float 0.000000e+00, float* %conv3r_ourput_0_add, align 4
  %tmp_428 = icmp eq i4 %invdar42, -1
  %empty_491 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv3r_ourput) nounwind
  %empty_492 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %tmp_428, label %meminst3740.0, label %meminst41.0

meminst37.0:                                      ; preds = %meminst33.0, %meminst3740.0
  %invdar38 = phi i4 [ 0, %meminst33.0 ], [ %indvarinc39, %meminst3740.0 ]
  %indvarinc39 = add i4 %invdar38, 1
  %empty_493 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br label %meminst41.0

meminst33.0:                                      ; preds = %meminst33.0.preheader, %meminst3336.0
  %invdar34 = phi i5 [ %indvarinc35, %meminst3336.0 ], [ 0, %meminst33.0.preheader ]
  %indvarinc35 = add i5 %invdar34, 1
  %empty_494 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  br label %meminst37.0

meminst4851.0:                                    ; preds = %meminst5255.0
  %tmp_433 = icmp eq i5 %invdar, -9
  %empty_495 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1l_output) nounwind
  br i1 %tmp_433, label %meminst63.0.preheader, label %meminst48.0

meminst63.0.preheader:                            ; preds = %meminst4851.0
  br label %meminst63.0

meminst5255.0:                                    ; preds = %meminst56.0
  %tmp_432 = icmp eq i4 %invdar48, -1
  %empty_496 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1l_output) nounwind
  br i1 %tmp_432, label %meminst4851.0, label %meminst52.0

meminst56.0:                                      ; preds = %meminst52.0, %meminst56.0
  %invdar49 = phi i4 [ 0, %meminst52.0 ], [ %indvarinc50, %meminst56.0 ]
  %indvarinc50 = add i4 %invdar49, 1
  %tmp_157 = call i13 @_ssdm_op_BitConcatenate.i13.i5.i4.i4(i5 %invdar, i4 %invdar48, i4 %invdar49)
  %tmp_667 = zext i13 %tmp_157 to i64
  %conv1l_output_0_add = getelementptr [6144 x float]* %conv1l_output_0, i64 0, i64 %tmp_667
  store float 0.000000e+00, float* %conv1l_output_0_add, align 4
  %tmp_431 = icmp eq i4 %invdar49, -1
  %empty_497 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1l_output) nounwind
  %empty_498 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %tmp_431, label %meminst5255.0, label %meminst56.0

meminst52.0:                                      ; preds = %meminst48.0, %meminst5255.0
  %invdar48 = phi i4 [ 0, %meminst48.0 ], [ %indvarinc49, %meminst5255.0 ]
  %indvarinc49 = add i4 %invdar48, 1
  %empty_499 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br label %meminst56.0

meminst48.0:                                      ; preds = %meminst48.0.preheader, %meminst4851.0
  %invdar = phi i5 [ %indvarinc, %meminst4851.0 ], [ 0, %meminst48.0.preheader ]
  %indvarinc = add i5 %invdar, 1
  %empty_500 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  br label %meminst52.0

meminst6366.0:                                    ; preds = %meminst6770.0
  %tmp_436 = icmp eq i5 %invdar50, -9
  %empty_501 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2l_output) nounwind
  br i1 %tmp_436, label %meminst5962.0, label %meminst63.0

meminst6770.0:                                    ; preds = %meminst71.0
  %tmp_435 = icmp eq i4 %invdar51, -1
  %empty_502 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2l_output) nounwind
  br i1 %tmp_435, label %meminst6366.0, label %meminst67.0

meminst71.0:                                      ; preds = %meminst67.0, %meminst71.0
  %invdar52 = phi i4 [ 0, %meminst67.0 ], [ %indvarinc53, %meminst71.0 ]
  %indvarinc53 = add i4 %invdar52, 1
  %tmp_158 = call i13 @_ssdm_op_BitConcatenate.i13.i5.i4.i4(i5 %invdar50, i4 %invdar51, i4 %invdar52)
  %tmp_668 = zext i13 %tmp_158 to i64
  %conv2l_output_0_add = getelementptr [6144 x float]* %conv2l_output_0, i64 0, i64 %tmp_668
  store float 0.000000e+00, float* %conv2l_output_0_add, align 4
  %tmp_434 = icmp eq i4 %invdar52, -1
  %empty_503 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2l_output) nounwind
  %empty_504 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %tmp_434, label %meminst6770.0, label %meminst71.0

meminst67.0:                                      ; preds = %meminst63.0, %meminst6770.0
  %invdar51 = phi i4 [ 0, %meminst63.0 ], [ %indvarinc52, %meminst6770.0 ]
  %indvarinc52 = add i4 %invdar51, 1
  %empty_505 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br label %meminst71.0

meminst63.0:                                      ; preds = %meminst63.0.preheader, %meminst6366.0
  %invdar50 = phi i5 [ %indvarinc51, %meminst6366.0 ], [ 0, %meminst63.0.preheader ]
  %indvarinc51 = add i5 %invdar50, 1
  %empty_506 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  br label %meminst67.0

meminst5962.0:                                    ; preds = %meminst6366.0
  call fastcc void @subconv_1x1_3214([24576 x float]* %input_r, [576 x float]* %conv1r_weight, [24 x float]* %conv1r_bias, [24576 x float]* %conv1r_output)
  call fastcc void @subconv_3x3_32_strid([24576 x float]* %conv1r_output, [216 x float]* %conv2r_weight, [24 x float]* %conv2r_bias, [6144 x float]* %conv2r_ourput_0)
  call fastcc void @subconv_1x1_1612([6144 x float]* %conv2r_ourput_0, [576 x float]* %conv3r_weight, [24 x float]* %conv3r_bias, [6144 x float]* %conv3r_ourput_0)
  call fastcc void @subconv_3x3_32_strid([24576 x float]* %input_r, [216 x float]* %conv1l_weight, [24 x float]* %conv1l_bias, [6144 x float]* %conv1l_output_0)
  call fastcc void @subconv_1x1_1612([6144 x float]* %conv1l_output_0, [576 x float]* %conv2l_weight, [24 x float]* %conv2l_bias, [6144 x float]* %conv2l_output_0)
  call fastcc void @shuffle_2415([6144 x float]* %conv3r_ourput_0, [6144 x float]* %conv2l_output_0, [12288 x float]* @downsampleunit0_outp)
  ret void
}

!opencl.kernels = !{!0, !7, !13, !15, !17, !19, !21, !27, !33, !36, !38, !40, !42, !44, !46, !48, !50, !52, !54, !56, !58, !60, !62, !64, !66, !72, !74}
!hls.encrypted.func = !{}
!llvm.map.gv = !{!78, !87, !92, !97, !105, !110, !115, !120, !125, !130, !135, !140, !148, !153, !158, !165, !172, !177, !182, !187, !194, !200, !208, !214, !219, !225, !231, !238, !243, !248, !253, !258, !263, !268, !273, !278, !283, !288, !293, !298, !303, !308, !313, !318, !323, !328, !333, !338, !343, !348, !353, !358, !363, !369, !375, !381, !386, !391, !396, !401, !406, !411, !416, !421, !426, !431, !436, !441, !446, !451, !456, !461, !466, !471, !476, !481, !486, !491, !496, !501, !506, !511, !516, !521, !526, !531, !536, !541, !546, !551, !556, !561, !566, !571, !576, !581, !586, !591, !596, !601, !606, !611, !616, !621, !626, !631, !636, !641, !646, !651, !656, !662, !667, !673, !678, !683, !688, !693, !698, !703, !708, !713, !718, !723, !728, !733, !738, !743, !748, !753, !758, !763, !768, !773, !778, !783, !788, !793, !798, !799, !800, !801, !802, !803, !804, !805, !806, !807, !808, !809, !810, !811, !812, !813, !814, !815, !816, !817, !818, !819, !820, !821, !822, !823, !824, !825, !826, !827, !828, !829, !830, !831, !832, !833, !834, !835, !836, !837, !838, !839, !840, !841, !842, !843, !844, !845, !846, !847, !848, !849, !850, !851, !852, !853, !854, !855, !856, !857, !858, !859, !860, !861, !862, !863, !864, !865, !866, !867, !868, !869, !870, !871, !872, !873}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1, i32 1, i32 1, i32 1, i32 1, i32 1}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"float [3][32][32]*", metadata !"float [3][3][3]*", metadata !"float [1][3][3]*", metadata !"float [24][1][1]*", metadata !"float [192][1][1]*", metadata !"float [512]*", metadata !"float*", metadata !"float*"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !"", metadata !"", metadata !"", metadata !"", metadata !"", metadata !""}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"image", metadata !"conv1_weight", metadata !"shuffle_conv_3x3", metadata !"shuffle_conv_1x1", metadata !"conv_last_weight", metadata !"fc_weight", metadata !"bias", metadata !"fc_output"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{null, metadata !8, metadata !9, metadata !10, metadata !11, metadata !12, metadata !6}
!8 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1, i32 1}
!9 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none", metadata !"none"}
!10 = metadata !{metadata !"kernel_arg_type", metadata !"float [3][32][32]*", metadata !"float [3][3][3]*", metadata !"float*", metadata !"float [24][32][32]*"}
!11 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !"", metadata !""}
!12 = metadata !{metadata !"kernel_arg_name", metadata !"input", metadata !"weight", metadata !"bias", metadata !"output"}
!13 = metadata !{null, metadata !8, metadata !9, metadata !14, metadata !11, metadata !12, metadata !6}
!14 = metadata !{metadata !"kernel_arg_type", metadata !"float [24][32][32]*", metadata !"float [24][1][1]*", metadata !"float*", metadata !"float [24][32][32]*"}
!15 = metadata !{null, metadata !8, metadata !9, metadata !16, metadata !11, metadata !12, metadata !6}
!16 = metadata !{metadata !"kernel_arg_type", metadata !"float [24][16][16]*", metadata !"float [24][1][1]*", metadata !"float*", metadata !"float [24][16][16]*"}
!17 = metadata !{null, metadata !8, metadata !9, metadata !18, metadata !11, metadata !12, metadata !6}
!18 = metadata !{metadata !"kernel_arg_type", metadata !"float [24][32][32]*", metadata !"float [1][3][3]*", metadata !"float*", metadata !"float [24][16][16]*"}
!19 = metadata !{null, metadata !8, metadata !9, metadata !20, metadata !11, metadata !12, metadata !6}
!20 = metadata !{metadata !"kernel_arg_type", metadata !"float [24][16][16]*", metadata !"float [1][3][3]*", metadata !"float*", metadata !"float [24][16][16]*"}
!21 = metadata !{null, metadata !22, metadata !23, metadata !24, metadata !25, metadata !26, metadata !6}
!22 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1}
!23 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none"}
!24 = metadata !{metadata !"kernel_arg_type", metadata !"float [24][16][16]*", metadata !"float [24][16][16]*", metadata !"float [48][16][16]*"}
!25 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !""}
!26 = metadata !{metadata !"kernel_arg_name", metadata !"left", metadata !"right", metadata !"output"}
!27 = metadata !{null, metadata !28, metadata !29, metadata !30, metadata !31, metadata !32, metadata !6}
!28 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1, i32 1, i32 1, i32 1, i32 1, i32 1, i32 1, i32 1, i32 1, i32 1}
!29 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none"}
!30 = metadata !{metadata !"kernel_arg_type", metadata !"float [24][32][32]*", metadata !"float [24][1][1]*", metadata !"float*", metadata !"float [1][3][3]*", metadata !"float*", metadata !"float [24][1][1]*", metadata !"float*", metadata !"float [1][3][3]*", metadata !"float*", metadata !"float [24][1][1]*", metadata !"float*", metadata !"float [48][16][16]*"}
!31 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !"", metadata !"", metadata !"", metadata !"", metadata !"", metadata !"", metadata !"", metadata !"", metadata !"", metadata !""}
!32 = metadata !{metadata !"kernel_arg_name", metadata !"input", metadata !"conv1r_weight", metadata !"conv1r_bias", metadata !"conv2r_weight", metadata !"conv2r_bias", metadata !"conv3r_weight", metadata !"conv3r_bias", metadata !"conv1l_weight", metadata !"conv1l_bias", metadata !"conv2l_weight", metadata !"conv2l_bias", metadata !"output"}
!33 = metadata !{null, metadata !1, metadata !2, metadata !34, metadata !4, metadata !35, metadata !6}
!34 = metadata !{metadata !"kernel_arg_type", metadata !"float [48][16][16]*", metadata !"float [24][1][1]*", metadata !"float*", metadata !"float [1][3][3]*", metadata !"float*", metadata !"float [24][1][1]*", metadata !"float*", metadata !"float [48][16][16]*"}
!35 = metadata !{metadata !"kernel_arg_name", metadata !"input", metadata !"conv1_weight", metadata !"conv1_bias", metadata !"conv2_weight", metadata !"conv2_bias", metadata !"conv3_weight", metadata !"conv3_bias", metadata !"output"}
!36 = metadata !{null, metadata !8, metadata !9, metadata !37, metadata !11, metadata !12, metadata !6}
!37 = metadata !{metadata !"kernel_arg_type", metadata !"float [48][16][16]*", metadata !"float [48][1][1]*", metadata !"float*", metadata !"float [48][16][16]*"}
!38 = metadata !{null, metadata !8, metadata !9, metadata !39, metadata !11, metadata !12, metadata !6}
!39 = metadata !{metadata !"kernel_arg_type", metadata !"float [48][8][8]*", metadata !"float [48][1][1]*", metadata !"float*", metadata !"float [48][8][8]*"}
!40 = metadata !{null, metadata !8, metadata !9, metadata !41, metadata !11, metadata !12, metadata !6}
!41 = metadata !{metadata !"kernel_arg_type", metadata !"float [48][16][16]*", metadata !"float [1][3][3]*", metadata !"float*", metadata !"float [48][8][8]*"}
!42 = metadata !{null, metadata !8, metadata !9, metadata !43, metadata !11, metadata !12, metadata !6}
!43 = metadata !{metadata !"kernel_arg_type", metadata !"float [48][8][8]*", metadata !"float [1][3][3]*", metadata !"float*", metadata !"float [48][8][8]*"}
!44 = metadata !{null, metadata !22, metadata !23, metadata !45, metadata !25, metadata !26, metadata !6}
!45 = metadata !{metadata !"kernel_arg_type", metadata !"float [48][8][8]*", metadata !"float [48][8][8]*", metadata !"float [96][8][8]*"}
!46 = metadata !{null, metadata !28, metadata !29, metadata !47, metadata !31, metadata !32, metadata !6}
!47 = metadata !{metadata !"kernel_arg_type", metadata !"float [48][16][16]*", metadata !"float [48][1][1]*", metadata !"float*", metadata !"float [1][3][3]*", metadata !"float*", metadata !"float [48][1][1]*", metadata !"float*", metadata !"float [1][3][3]*", metadata !"float*", metadata !"float [48][1][1]*", metadata !"float*", metadata !"float [96][8][8]*"}
!48 = metadata !{null, metadata !1, metadata !2, metadata !49, metadata !4, metadata !35, metadata !6}
!49 = metadata !{metadata !"kernel_arg_type", metadata !"float [96][8][8]*", metadata !"float [48][1][1]*", metadata !"float*", metadata !"float [1][3][3]*", metadata !"float*", metadata !"float [48][1][1]*", metadata !"float*", metadata !"float [96][8][8]*"}
!50 = metadata !{null, metadata !8, metadata !9, metadata !51, metadata !11, metadata !12, metadata !6}
!51 = metadata !{metadata !"kernel_arg_type", metadata !"float [96][8][8]*", metadata !"float [96][1][1]*", metadata !"float*", metadata !"float [96][8][8]*"}
!52 = metadata !{null, metadata !8, metadata !9, metadata !53, metadata !11, metadata !12, metadata !6}
!53 = metadata !{metadata !"kernel_arg_type", metadata !"float [96][4][4]*", metadata !"float [96][1][1]*", metadata !"float*", metadata !"float [96][4][4]*"}
!54 = metadata !{null, metadata !8, metadata !9, metadata !55, metadata !11, metadata !12, metadata !6}
!55 = metadata !{metadata !"kernel_arg_type", metadata !"float [96][8][8]*", metadata !"float [1][3][3]*", metadata !"float*", metadata !"float [96][4][4]*"}
!56 = metadata !{null, metadata !8, metadata !9, metadata !57, metadata !11, metadata !12, metadata !6}
!57 = metadata !{metadata !"kernel_arg_type", metadata !"float [96][4][4]*", metadata !"float [1][3][3]*", metadata !"float*", metadata !"float [96][4][4]*"}
!58 = metadata !{null, metadata !22, metadata !23, metadata !59, metadata !25, metadata !26, metadata !6}
!59 = metadata !{metadata !"kernel_arg_type", metadata !"float [96][4][4]*", metadata !"float [96][4][4]*", metadata !"float [192][4][4]*"}
!60 = metadata !{null, metadata !28, metadata !29, metadata !61, metadata !31, metadata !32, metadata !6}
!61 = metadata !{metadata !"kernel_arg_type", metadata !"float [96][8][8]*", metadata !"float [96][1][1]*", metadata !"float*", metadata !"float [1][3][3]*", metadata !"float*", metadata !"float [96][1][1]*", metadata !"float*", metadata !"float [1][3][3]*", metadata !"float*", metadata !"float [96][1][1]*", metadata !"float*", metadata !"float [192][4][4]*"}
!62 = metadata !{null, metadata !1, metadata !2, metadata !63, metadata !4, metadata !35, metadata !6}
!63 = metadata !{metadata !"kernel_arg_type", metadata !"float [192][4][4]*", metadata !"float [96][1][1]*", metadata !"float*", metadata !"float [1][3][3]*", metadata !"float*", metadata !"float [96][1][1]*", metadata !"float*", metadata !"float [192][4][4]*"}
!64 = metadata !{null, metadata !8, metadata !9, metadata !65, metadata !11, metadata !12, metadata !6}
!65 = metadata !{metadata !"kernel_arg_type", metadata !"float [192][4][4]*", metadata !"float [192][1][1]*", metadata !"float*", metadata !"float [512][4][4]*"}
!66 = metadata !{null, metadata !67, metadata !68, metadata !69, metadata !70, metadata !71, metadata !6}
!67 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!68 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!69 = metadata !{metadata !"kernel_arg_type", metadata !"float [512][4][4]*", metadata !"float*"}
!70 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!71 = metadata !{metadata !"kernel_arg_name", metadata !"input", metadata !"output"}
!72 = metadata !{null, metadata !8, metadata !9, metadata !73, metadata !11, metadata !12, metadata !6}
!73 = metadata !{metadata !"kernel_arg_type", metadata !"float*", metadata !"float [512]*", metadata !"float*", metadata !"float*"}
!74 = metadata !{null, metadata !22, metadata !23, metadata !75, metadata !76, metadata !77, metadata !6}
!75 = metadata !{metadata !"kernel_arg_type", metadata !"int*", metadata !"int*", metadata !"int*"}
!76 = metadata !{metadata !"kernel_arg_type_qual", metadata !"volatile", metadata !"volatile", metadata !"volatile"}
!77 = metadata !{metadata !"kernel_arg_name", metadata !"a", metadata !"b", metadata !"c"}
!78 = metadata !{metadata !79, null}
!79 = metadata !{metadata !80}
!80 = metadata !{i32 0, i32 31, metadata !81}
!81 = metadata !{metadata !82}
!82 = metadata !{metadata !"shuffleunit2_2_output", metadata !83, metadata !"float", i32 0, i32 31}
!83 = metadata !{metadata !84, metadata !85, metadata !86, metadata !86}
!84 = metadata !{i32 0, i32 0, i32 1}
!85 = metadata !{i32 0, i32 191, i32 1}
!86 = metadata !{i32 0, i32 3, i32 1}
!87 = metadata !{metadata !88, null}
!88 = metadata !{metadata !89}
!89 = metadata !{i32 0, i32 31, metadata !90}
!90 = metadata !{metadata !91}
!91 = metadata !{metadata !"shuffleunit2_1_output", metadata !83, metadata !"float", i32 0, i32 31}
!92 = metadata !{metadata !93, null}
!93 = metadata !{metadata !94}
!94 = metadata !{i32 0, i32 31, metadata !95}
!95 = metadata !{metadata !96}
!96 = metadata !{metadata !"shuffleunit2_0_output", metadata !83, metadata !"float", i32 0, i32 31}
!97 = metadata !{metadata !98, null}
!98 = metadata !{metadata !99}
!99 = metadata !{i32 0, i32 31, metadata !100}
!100 = metadata !{metadata !101}
!101 = metadata !{metadata !"shuffleunit1_7_output", metadata !102, metadata !"float", i32 0, i32 31}
!102 = metadata !{metadata !84, metadata !103, metadata !104, metadata !104}
!103 = metadata !{i32 0, i32 95, i32 1}
!104 = metadata !{i32 0, i32 7, i32 1}
!105 = metadata !{metadata !106, null}
!106 = metadata !{metadata !107}
!107 = metadata !{i32 0, i32 31, metadata !108}
!108 = metadata !{metadata !109}
!109 = metadata !{metadata !"shuffleunit1_6_output", metadata !102, metadata !"float", i32 0, i32 31}
!110 = metadata !{metadata !111, null}
!111 = metadata !{metadata !112}
!112 = metadata !{i32 0, i32 31, metadata !113}
!113 = metadata !{metadata !114}
!114 = metadata !{metadata !"shuffleunit1_5_output", metadata !102, metadata !"float", i32 0, i32 31}
!115 = metadata !{metadata !116, null}
!116 = metadata !{metadata !117}
!117 = metadata !{i32 0, i32 31, metadata !118}
!118 = metadata !{metadata !119}
!119 = metadata !{metadata !"shuffleunit1_4_output", metadata !102, metadata !"float", i32 0, i32 31}
!120 = metadata !{metadata !121, null}
!121 = metadata !{metadata !122}
!122 = metadata !{i32 0, i32 31, metadata !123}
!123 = metadata !{metadata !124}
!124 = metadata !{metadata !"shuffleunit1_3_output", metadata !102, metadata !"float", i32 0, i32 31}
!125 = metadata !{metadata !126, null}
!126 = metadata !{metadata !127}
!127 = metadata !{i32 0, i32 31, metadata !128}
!128 = metadata !{metadata !129}
!129 = metadata !{metadata !"shuffleunit1_2_output", metadata !102, metadata !"float", i32 0, i32 31}
!130 = metadata !{metadata !131, null}
!131 = metadata !{metadata !132}
!132 = metadata !{i32 0, i32 31, metadata !133}
!133 = metadata !{metadata !134}
!134 = metadata !{metadata !"shuffleunit1_1_output", metadata !102, metadata !"float", i32 0, i32 31}
!135 = metadata !{metadata !136, null}
!136 = metadata !{metadata !137}
!137 = metadata !{i32 0, i32 31, metadata !138}
!138 = metadata !{metadata !139}
!139 = metadata !{metadata !"shuffleunit1_0_output", metadata !102, metadata !"float", i32 0, i32 31}
!140 = metadata !{metadata !141, null}
!141 = metadata !{metadata !142}
!142 = metadata !{i32 0, i32 31, metadata !143}
!143 = metadata !{metadata !144}
!144 = metadata !{metadata !"shuffleunit0_2_output", metadata !145, metadata !"float", i32 0, i32 31}
!145 = metadata !{metadata !84, metadata !146, metadata !147, metadata !147}
!146 = metadata !{i32 0, i32 47, i32 1}
!147 = metadata !{i32 0, i32 15, i32 1}
!148 = metadata !{metadata !149, null}
!149 = metadata !{metadata !150}
!150 = metadata !{i32 0, i32 31, metadata !151}
!151 = metadata !{metadata !152}
!152 = metadata !{metadata !"shuffleunit0_1_output", metadata !145, metadata !"float", i32 0, i32 31}
!153 = metadata !{metadata !154, null}
!154 = metadata !{metadata !155}
!155 = metadata !{i32 0, i32 31, metadata !156}
!156 = metadata !{metadata !157}
!157 = metadata !{metadata !"shuffleunit0_0_output", metadata !145, metadata !"float", i32 0, i32 31}
!158 = metadata !{metadata !159, [2 x i32]* @llvm_global_ctors_0}
!159 = metadata !{metadata !160}
!160 = metadata !{i32 0, i32 31, metadata !161}
!161 = metadata !{metadata !162}
!162 = metadata !{metadata !"llvm.global_ctors.0", metadata !163, metadata !"", i32 0, i32 31}
!163 = metadata !{metadata !164}
!164 = metadata !{i32 0, i32 1, i32 1}
!165 = metadata !{metadata !166, [10 x float]* @fc_bias}
!166 = metadata !{metadata !167}
!167 = metadata !{i32 0, i32 31, metadata !168}
!168 = metadata !{metadata !169}
!169 = metadata !{metadata !"fc_bias", metadata !170, metadata !"float", i32 0, i32 31}
!170 = metadata !{metadata !171}
!171 = metadata !{i32 0, i32 9, i32 1}
!172 = metadata !{metadata !173, null}
!173 = metadata !{metadata !174}
!174 = metadata !{i32 0, i32 31, metadata !175}
!175 = metadata !{metadata !176}
!176 = metadata !{metadata !"downsampleunit2_output", metadata !83, metadata !"float", i32 0, i32 31}
!177 = metadata !{metadata !178, null}
!178 = metadata !{metadata !179}
!179 = metadata !{i32 0, i32 31, metadata !180}
!180 = metadata !{metadata !181}
!181 = metadata !{metadata !"downsampleunit1_output", metadata !102, metadata !"float", i32 0, i32 31}
!182 = metadata !{metadata !183, null}
!183 = metadata !{metadata !184}
!184 = metadata !{i32 0, i32 31, metadata !185}
!185 = metadata !{metadata !186}
!186 = metadata !{metadata !"downsampleunit0_output", metadata !145, metadata !"float", i32 0, i32 31}
!187 = metadata !{metadata !188, null}
!188 = metadata !{metadata !189}
!189 = metadata !{i32 0, i32 31, metadata !190}
!190 = metadata !{metadata !191}
!191 = metadata !{metadata !"conv_last_output", metadata !192, metadata !"float", i32 0, i32 31}
!192 = metadata !{metadata !84, metadata !193, metadata !86, metadata !86}
!193 = metadata !{i32 0, i32 511, i32 1}
!194 = metadata !{metadata !195, [512 x float]* @conv_last_bias}
!195 = metadata !{metadata !196}
!196 = metadata !{i32 0, i32 31, metadata !197}
!197 = metadata !{metadata !198}
!198 = metadata !{metadata !"conv_last_bias", metadata !199, metadata !"float", i32 0, i32 31}
!199 = metadata !{metadata !193}
!200 = metadata !{metadata !201, null}
!201 = metadata !{metadata !202}
!202 = metadata !{i32 0, i32 31, metadata !203}
!203 = metadata !{metadata !204}
!204 = metadata !{metadata !"conv1_output", metadata !205, metadata !"float", i32 0, i32 31}
!205 = metadata !{metadata !84, metadata !206, metadata !207, metadata !207}
!206 = metadata !{i32 0, i32 23, i32 1}
!207 = metadata !{i32 0, i32 31, i32 1}
!208 = metadata !{metadata !209, [24 x float]* @conv1_bias}
!209 = metadata !{metadata !210}
!210 = metadata !{i32 0, i32 31, metadata !211}
!211 = metadata !{metadata !212}
!212 = metadata !{metadata !"conv1_bias", metadata !213, metadata !"float", i32 0, i32 31}
!213 = metadata !{metadata !206}
!214 = metadata !{metadata !215, [512 x float]* @avgpool_output}
!215 = metadata !{metadata !216}
!216 = metadata !{i32 0, i32 31, metadata !217}
!217 = metadata !{metadata !218}
!218 = metadata !{metadata !"avgpool_output", metadata !199, metadata !"float", i32 0, i32 31}
!219 = metadata !{metadata !220, null}
!220 = metadata !{metadata !221}
!221 = metadata !{i32 0, i32 31, metadata !222}
!222 = metadata !{metadata !223}
!223 = metadata !{metadata !"ShuffleConvs_2_ShuffleUnit2_2_conv3_weight", metadata !224, metadata !"float", i32 0, i32 31}
!224 = metadata !{metadata !103, metadata !103, metadata !84, metadata !84}
!225 = metadata !{metadata !226, [96 x float]* @ShuffleConvs_2_Shuff}
!226 = metadata !{metadata !227}
!227 = metadata !{i32 0, i32 31, metadata !228}
!228 = metadata !{metadata !229}
!229 = metadata !{metadata !"ShuffleConvs_2_ShuffleUnit2_2_conv3_bias", metadata !230, metadata !"float", i32 0, i32 31}
!230 = metadata !{metadata !103}
!231 = metadata !{metadata !232, null}
!232 = metadata !{metadata !233}
!233 = metadata !{i32 0, i32 31, metadata !234}
!234 = metadata !{metadata !235}
!235 = metadata !{metadata !"ShuffleConvs_2_ShuffleUnit2_2_conv2_weight", metadata !236, metadata !"float", i32 0, i32 31}
!236 = metadata !{metadata !103, metadata !84, metadata !237, metadata !237}
!237 = metadata !{i32 0, i32 2, i32 1}
!238 = metadata !{metadata !239, [96 x float]* @ShuffleConvs_2_Shuff_17}
!239 = metadata !{metadata !240}
!240 = metadata !{i32 0, i32 31, metadata !241}
!241 = metadata !{metadata !242}
!242 = metadata !{metadata !"ShuffleConvs_2_ShuffleUnit2_2_conv2_bias", metadata !230, metadata !"float", i32 0, i32 31}
!243 = metadata !{metadata !244, null}
!244 = metadata !{metadata !245}
!245 = metadata !{i32 0, i32 31, metadata !246}
!246 = metadata !{metadata !247}
!247 = metadata !{metadata !"ShuffleConvs_2_ShuffleUnit2_2_conv1_weight", metadata !224, metadata !"float", i32 0, i32 31}
!248 = metadata !{metadata !249, [96 x float]* @ShuffleConvs_2_Shuff_4}
!249 = metadata !{metadata !250}
!250 = metadata !{i32 0, i32 31, metadata !251}
!251 = metadata !{metadata !252}
!252 = metadata !{metadata !"ShuffleConvs_2_ShuffleUnit2_2_conv1_bias", metadata !230, metadata !"float", i32 0, i32 31}
!253 = metadata !{metadata !254, null}
!254 = metadata !{metadata !255}
!255 = metadata !{i32 0, i32 31, metadata !256}
!256 = metadata !{metadata !257}
!257 = metadata !{metadata !"ShuffleConvs_2_ShuffleUnit2_1_conv3_weight", metadata !224, metadata !"float", i32 0, i32 31}
!258 = metadata !{metadata !259, [96 x float]* @ShuffleConvs_2_Shuff_3}
!259 = metadata !{metadata !260}
!260 = metadata !{i32 0, i32 31, metadata !261}
!261 = metadata !{metadata !262}
!262 = metadata !{metadata !"ShuffleConvs_2_ShuffleUnit2_1_conv3_bias", metadata !230, metadata !"float", i32 0, i32 31}
!263 = metadata !{metadata !264, null}
!264 = metadata !{metadata !265}
!265 = metadata !{i32 0, i32 31, metadata !266}
!266 = metadata !{metadata !267}
!267 = metadata !{metadata !"ShuffleConvs_2_ShuffleUnit2_1_conv2_weight", metadata !236, metadata !"float", i32 0, i32 31}
!268 = metadata !{metadata !269, [96 x float]* @ShuffleConvs_2_Shuff_1}
!269 = metadata !{metadata !270}
!270 = metadata !{i32 0, i32 31, metadata !271}
!271 = metadata !{metadata !272}
!272 = metadata !{metadata !"ShuffleConvs_2_ShuffleUnit2_1_conv2_bias", metadata !230, metadata !"float", i32 0, i32 31}
!273 = metadata !{metadata !274, null}
!274 = metadata !{metadata !275}
!275 = metadata !{i32 0, i32 31, metadata !276}
!276 = metadata !{metadata !277}
!277 = metadata !{metadata !"ShuffleConvs_2_ShuffleUnit2_1_conv1_weight", metadata !224, metadata !"float", i32 0, i32 31}
!278 = metadata !{metadata !279, [96 x float]* @ShuffleConvs_2_Shuff_22}
!279 = metadata !{metadata !280}
!280 = metadata !{i32 0, i32 31, metadata !281}
!281 = metadata !{metadata !282}
!282 = metadata !{metadata !"ShuffleConvs_2_ShuffleUnit2_1_conv1_bias", metadata !230, metadata !"float", i32 0, i32 31}
!283 = metadata !{metadata !284, null}
!284 = metadata !{metadata !285}
!285 = metadata !{i32 0, i32 31, metadata !286}
!286 = metadata !{metadata !287}
!287 = metadata !{metadata !"ShuffleConvs_2_ShuffleUnit2_0_conv3_weight", metadata !224, metadata !"float", i32 0, i32 31}
!288 = metadata !{metadata !289, [96 x float]* @ShuffleConvs_2_Shuff_21}
!289 = metadata !{metadata !290}
!290 = metadata !{i32 0, i32 31, metadata !291}
!291 = metadata !{metadata !292}
!292 = metadata !{metadata !"ShuffleConvs_2_ShuffleUnit2_0_conv3_bias", metadata !230, metadata !"float", i32 0, i32 31}
!293 = metadata !{metadata !294, null}
!294 = metadata !{metadata !295}
!295 = metadata !{i32 0, i32 31, metadata !296}
!296 = metadata !{metadata !297}
!297 = metadata !{metadata !"ShuffleConvs_2_ShuffleUnit2_0_conv2_weight", metadata !236, metadata !"float", i32 0, i32 31}
!298 = metadata !{metadata !299, [96 x float]* @ShuffleConvs_2_Shuff_20}
!299 = metadata !{metadata !300}
!300 = metadata !{i32 0, i32 31, metadata !301}
!301 = metadata !{metadata !302}
!302 = metadata !{metadata !"ShuffleConvs_2_ShuffleUnit2_0_conv2_bias", metadata !230, metadata !"float", i32 0, i32 31}
!303 = metadata !{metadata !304, null}
!304 = metadata !{metadata !305}
!305 = metadata !{i32 0, i32 31, metadata !306}
!306 = metadata !{metadata !307}
!307 = metadata !{metadata !"ShuffleConvs_2_ShuffleUnit2_0_conv1_weight", metadata !224, metadata !"float", i32 0, i32 31}
!308 = metadata !{metadata !309, [96 x float]* @ShuffleConvs_2_Shuff_19}
!309 = metadata !{metadata !310}
!310 = metadata !{i32 0, i32 31, metadata !311}
!311 = metadata !{metadata !312}
!312 = metadata !{metadata !"ShuffleConvs_2_ShuffleUnit2_0_conv1_bias", metadata !230, metadata !"float", i32 0, i32 31}
!313 = metadata !{metadata !314, null}
!314 = metadata !{metadata !315}
!315 = metadata !{i32 0, i32 31, metadata !316}
!316 = metadata !{metadata !317}
!317 = metadata !{metadata !"ShuffleConvs_2_DownsampleUnit_conv3r_weight", metadata !224, metadata !"float", i32 0, i32 31}
!318 = metadata !{metadata !319, [96 x float]* @ShuffleConvs_2_Downs}
!319 = metadata !{metadata !320}
!320 = metadata !{i32 0, i32 31, metadata !321}
!321 = metadata !{metadata !322}
!322 = metadata !{metadata !"ShuffleConvs_2_DownsampleUnit_conv3r_bias", metadata !230, metadata !"float", i32 0, i32 31}
!323 = metadata !{metadata !324, null}
!324 = metadata !{metadata !325}
!325 = metadata !{i32 0, i32 31, metadata !326}
!326 = metadata !{metadata !327}
!327 = metadata !{metadata !"ShuffleConvs_2_DownsampleUnit_conv2r_weight", metadata !236, metadata !"float", i32 0, i32 31}
!328 = metadata !{metadata !329, [96 x float]* @ShuffleConvs_2_Downs_5}
!329 = metadata !{metadata !330}
!330 = metadata !{i32 0, i32 31, metadata !331}
!331 = metadata !{metadata !332}
!332 = metadata !{metadata !"ShuffleConvs_2_DownsampleUnit_conv2r_bias", metadata !230, metadata !"float", i32 0, i32 31}
!333 = metadata !{metadata !334, null}
!334 = metadata !{metadata !335}
!335 = metadata !{i32 0, i32 31, metadata !336}
!336 = metadata !{metadata !337}
!337 = metadata !{metadata !"ShuffleConvs_2_DownsampleUnit_conv2l_weight", metadata !224, metadata !"float", i32 0, i32 31}
!338 = metadata !{metadata !339, [96 x float]* @ShuffleConvs_2_Downs_4}
!339 = metadata !{metadata !340}
!340 = metadata !{i32 0, i32 31, metadata !341}
!341 = metadata !{metadata !342}
!342 = metadata !{metadata !"ShuffleConvs_2_DownsampleUnit_conv2l_bias", metadata !230, metadata !"float", i32 0, i32 31}
!343 = metadata !{metadata !344, null}
!344 = metadata !{metadata !345}
!345 = metadata !{i32 0, i32 31, metadata !346}
!346 = metadata !{metadata !347}
!347 = metadata !{metadata !"ShuffleConvs_2_DownsampleUnit_conv1r_weight", metadata !224, metadata !"float", i32 0, i32 31}
!348 = metadata !{metadata !349, [96 x float]* @ShuffleConvs_2_Downs_3}
!349 = metadata !{metadata !350}
!350 = metadata !{i32 0, i32 31, metadata !351}
!351 = metadata !{metadata !352}
!352 = metadata !{metadata !"ShuffleConvs_2_DownsampleUnit_conv1r_bias", metadata !230, metadata !"float", i32 0, i32 31}
!353 = metadata !{metadata !354, null}
!354 = metadata !{metadata !355}
!355 = metadata !{i32 0, i32 31, metadata !356}
!356 = metadata !{metadata !357}
!357 = metadata !{metadata !"ShuffleConvs_2_DownsampleUnit_conv1l_weight", metadata !236, metadata !"float", i32 0, i32 31}
!358 = metadata !{metadata !359, [96 x float]* @ShuffleConvs_2_Downs_1}
!359 = metadata !{metadata !360}
!360 = metadata !{i32 0, i32 31, metadata !361}
!361 = metadata !{metadata !362}
!362 = metadata !{metadata !"ShuffleConvs_2_DownsampleUnit_conv1l_bias", metadata !230, metadata !"float", i32 0, i32 31}
!363 = metadata !{metadata !364, null}
!364 = metadata !{metadata !365}
!365 = metadata !{i32 0, i32 31, metadata !366}
!366 = metadata !{metadata !367}
!367 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_7_conv3_weight", metadata !368, metadata !"float", i32 0, i32 31}
!368 = metadata !{metadata !146, metadata !146, metadata !84, metadata !84}
!369 = metadata !{metadata !370, [48 x float]* @ShuffleConvs_1_Shuff}
!370 = metadata !{metadata !371}
!371 = metadata !{i32 0, i32 31, metadata !372}
!372 = metadata !{metadata !373}
!373 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_7_conv3_bias", metadata !374, metadata !"float", i32 0, i32 31}
!374 = metadata !{metadata !146}
!375 = metadata !{metadata !376, null}
!376 = metadata !{metadata !377}
!377 = metadata !{i32 0, i32 31, metadata !378}
!378 = metadata !{metadata !379}
!379 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_7_conv2_weight", metadata !380, metadata !"float", i32 0, i32 31}
!380 = metadata !{metadata !146, metadata !84, metadata !237, metadata !237}
!381 = metadata !{metadata !382, [48 x float]* @ShuffleConvs_1_Shuff_66}
!382 = metadata !{metadata !383}
!383 = metadata !{i32 0, i32 31, metadata !384}
!384 = metadata !{metadata !385}
!385 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_7_conv2_bias", metadata !374, metadata !"float", i32 0, i32 31}
!386 = metadata !{metadata !387, null}
!387 = metadata !{metadata !388}
!388 = metadata !{i32 0, i32 31, metadata !389}
!389 = metadata !{metadata !390}
!390 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_7_conv1_weight", metadata !368, metadata !"float", i32 0, i32 31}
!391 = metadata !{metadata !392, [48 x float]* @ShuffleConvs_1_Shuff_55}
!392 = metadata !{metadata !393}
!393 = metadata !{i32 0, i32 31, metadata !394}
!394 = metadata !{metadata !395}
!395 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_7_conv1_bias", metadata !374, metadata !"float", i32 0, i32 31}
!396 = metadata !{metadata !397, null}
!397 = metadata !{metadata !398}
!398 = metadata !{i32 0, i32 31, metadata !399}
!399 = metadata !{metadata !400}
!400 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_6_conv3_weight", metadata !368, metadata !"float", i32 0, i32 31}
!401 = metadata !{metadata !402, [48 x float]* @ShuffleConvs_1_Shuff_39}
!402 = metadata !{metadata !403}
!403 = metadata !{i32 0, i32 31, metadata !404}
!404 = metadata !{metadata !405}
!405 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_6_conv3_bias", metadata !374, metadata !"float", i32 0, i32 31}
!406 = metadata !{metadata !407, null}
!407 = metadata !{metadata !408}
!408 = metadata !{i32 0, i32 31, metadata !409}
!409 = metadata !{metadata !410}
!410 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_6_conv2_weight", metadata !380, metadata !"float", i32 0, i32 31}
!411 = metadata !{metadata !412, [48 x float]* @ShuffleConvs_1_Shuff_17}
!412 = metadata !{metadata !413}
!413 = metadata !{i32 0, i32 31, metadata !414}
!414 = metadata !{metadata !415}
!415 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_6_conv2_bias", metadata !374, metadata !"float", i32 0, i32 31}
!416 = metadata !{metadata !417, null}
!417 = metadata !{metadata !418}
!418 = metadata !{i32 0, i32 31, metadata !419}
!419 = metadata !{metadata !420}
!420 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_6_conv1_weight", metadata !368, metadata !"float", i32 0, i32 31}
!421 = metadata !{metadata !422, [48 x float]* @ShuffleConvs_1_Shuff_71}
!422 = metadata !{metadata !423}
!423 = metadata !{i32 0, i32 31, metadata !424}
!424 = metadata !{metadata !425}
!425 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_6_conv1_bias", metadata !374, metadata !"float", i32 0, i32 31}
!426 = metadata !{metadata !427, null}
!427 = metadata !{metadata !428}
!428 = metadata !{i32 0, i32 31, metadata !429}
!429 = metadata !{metadata !430}
!430 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_5_conv3_weight", metadata !368, metadata !"float", i32 0, i32 31}
!431 = metadata !{metadata !432, [48 x float]* @ShuffleConvs_1_Shuff_70}
!432 = metadata !{metadata !433}
!433 = metadata !{i32 0, i32 31, metadata !434}
!434 = metadata !{metadata !435}
!435 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_5_conv3_bias", metadata !374, metadata !"float", i32 0, i32 31}
!436 = metadata !{metadata !437, null}
!437 = metadata !{metadata !438}
!438 = metadata !{i32 0, i32 31, metadata !439}
!439 = metadata !{metadata !440}
!440 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_5_conv2_weight", metadata !380, metadata !"float", i32 0, i32 31}
!441 = metadata !{metadata !442, [48 x float]* @ShuffleConvs_1_Shuff_69}
!442 = metadata !{metadata !443}
!443 = metadata !{i32 0, i32 31, metadata !444}
!444 = metadata !{metadata !445}
!445 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_5_conv2_bias", metadata !374, metadata !"float", i32 0, i32 31}
!446 = metadata !{metadata !447, null}
!447 = metadata !{metadata !448}
!448 = metadata !{i32 0, i32 31, metadata !449}
!449 = metadata !{metadata !450}
!450 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_5_conv1_weight", metadata !368, metadata !"float", i32 0, i32 31}
!451 = metadata !{metadata !452, [48 x float]* @ShuffleConvs_1_Shuff_68}
!452 = metadata !{metadata !453}
!453 = metadata !{i32 0, i32 31, metadata !454}
!454 = metadata !{metadata !455}
!455 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_5_conv1_bias", metadata !374, metadata !"float", i32 0, i32 31}
!456 = metadata !{metadata !457, null}
!457 = metadata !{metadata !458}
!458 = metadata !{i32 0, i32 31, metadata !459}
!459 = metadata !{metadata !460}
!460 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_4_conv3_weight", metadata !368, metadata !"float", i32 0, i32 31}
!461 = metadata !{metadata !462, [48 x float]* @ShuffleConvs_1_Shuff_67}
!462 = metadata !{metadata !463}
!463 = metadata !{i32 0, i32 31, metadata !464}
!464 = metadata !{metadata !465}
!465 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_4_conv3_bias", metadata !374, metadata !"float", i32 0, i32 31}
!466 = metadata !{metadata !467, null}
!467 = metadata !{metadata !468}
!468 = metadata !{i32 0, i32 31, metadata !469}
!469 = metadata !{metadata !470}
!470 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_4_conv2_weight", metadata !380, metadata !"float", i32 0, i32 31}
!471 = metadata !{metadata !472, [48 x float]* @ShuffleConvs_1_Shuff_65}
!472 = metadata !{metadata !473}
!473 = metadata !{i32 0, i32 31, metadata !474}
!474 = metadata !{metadata !475}
!475 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_4_conv2_bias", metadata !374, metadata !"float", i32 0, i32 31}
!476 = metadata !{metadata !477, null}
!477 = metadata !{metadata !478}
!478 = metadata !{i32 0, i32 31, metadata !479}
!479 = metadata !{metadata !480}
!480 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_4_conv1_weight", metadata !368, metadata !"float", i32 0, i32 31}
!481 = metadata !{metadata !482, [48 x float]* @ShuffleConvs_1_Shuff_64}
!482 = metadata !{metadata !483}
!483 = metadata !{i32 0, i32 31, metadata !484}
!484 = metadata !{metadata !485}
!485 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_4_conv1_bias", metadata !374, metadata !"float", i32 0, i32 31}
!486 = metadata !{metadata !487, null}
!487 = metadata !{metadata !488}
!488 = metadata !{i32 0, i32 31, metadata !489}
!489 = metadata !{metadata !490}
!490 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_3_conv3_weight", metadata !368, metadata !"float", i32 0, i32 31}
!491 = metadata !{metadata !492, [48 x float]* @ShuffleConvs_1_Shuff_63}
!492 = metadata !{metadata !493}
!493 = metadata !{i32 0, i32 31, metadata !494}
!494 = metadata !{metadata !495}
!495 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_3_conv3_bias", metadata !374, metadata !"float", i32 0, i32 31}
!496 = metadata !{metadata !497, null}
!497 = metadata !{metadata !498}
!498 = metadata !{i32 0, i32 31, metadata !499}
!499 = metadata !{metadata !500}
!500 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_3_conv2_weight", metadata !380, metadata !"float", i32 0, i32 31}
!501 = metadata !{metadata !502, [48 x float]* @ShuffleConvs_1_Shuff_62}
!502 = metadata !{metadata !503}
!503 = metadata !{i32 0, i32 31, metadata !504}
!504 = metadata !{metadata !505}
!505 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_3_conv2_bias", metadata !374, metadata !"float", i32 0, i32 31}
!506 = metadata !{metadata !507, null}
!507 = metadata !{metadata !508}
!508 = metadata !{i32 0, i32 31, metadata !509}
!509 = metadata !{metadata !510}
!510 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_3_conv1_weight", metadata !368, metadata !"float", i32 0, i32 31}
!511 = metadata !{metadata !512, [48 x float]* @ShuffleConvs_1_Shuff_61}
!512 = metadata !{metadata !513}
!513 = metadata !{i32 0, i32 31, metadata !514}
!514 = metadata !{metadata !515}
!515 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_3_conv1_bias", metadata !374, metadata !"float", i32 0, i32 31}
!516 = metadata !{metadata !517, null}
!517 = metadata !{metadata !518}
!518 = metadata !{i32 0, i32 31, metadata !519}
!519 = metadata !{metadata !520}
!520 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_2_conv3_weight", metadata !368, metadata !"float", i32 0, i32 31}
!521 = metadata !{metadata !522, [48 x float]* @ShuffleConvs_1_Shuff_60}
!522 = metadata !{metadata !523}
!523 = metadata !{i32 0, i32 31, metadata !524}
!524 = metadata !{metadata !525}
!525 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_2_conv3_bias", metadata !374, metadata !"float", i32 0, i32 31}
!526 = metadata !{metadata !527, null}
!527 = metadata !{metadata !528}
!528 = metadata !{i32 0, i32 31, metadata !529}
!529 = metadata !{metadata !530}
!530 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_2_conv2_weight", metadata !380, metadata !"float", i32 0, i32 31}
!531 = metadata !{metadata !532, [48 x float]* @ShuffleConvs_1_Shuff_59}
!532 = metadata !{metadata !533}
!533 = metadata !{i32 0, i32 31, metadata !534}
!534 = metadata !{metadata !535}
!535 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_2_conv2_bias", metadata !374, metadata !"float", i32 0, i32 31}
!536 = metadata !{metadata !537, null}
!537 = metadata !{metadata !538}
!538 = metadata !{i32 0, i32 31, metadata !539}
!539 = metadata !{metadata !540}
!540 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_2_conv1_weight", metadata !368, metadata !"float", i32 0, i32 31}
!541 = metadata !{metadata !542, [48 x float]* @ShuffleConvs_1_Shuff_58}
!542 = metadata !{metadata !543}
!543 = metadata !{i32 0, i32 31, metadata !544}
!544 = metadata !{metadata !545}
!545 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_2_conv1_bias", metadata !374, metadata !"float", i32 0, i32 31}
!546 = metadata !{metadata !547, null}
!547 = metadata !{metadata !548}
!548 = metadata !{i32 0, i32 31, metadata !549}
!549 = metadata !{metadata !550}
!550 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_1_conv3_weight", metadata !368, metadata !"float", i32 0, i32 31}
!551 = metadata !{metadata !552, [48 x float]* @ShuffleConvs_1_Shuff_57}
!552 = metadata !{metadata !553}
!553 = metadata !{i32 0, i32 31, metadata !554}
!554 = metadata !{metadata !555}
!555 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_1_conv3_bias", metadata !374, metadata !"float", i32 0, i32 31}
!556 = metadata !{metadata !557, null}
!557 = metadata !{metadata !558}
!558 = metadata !{i32 0, i32 31, metadata !559}
!559 = metadata !{metadata !560}
!560 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_1_conv2_weight", metadata !380, metadata !"float", i32 0, i32 31}
!561 = metadata !{metadata !562, [48 x float]* @ShuffleConvs_1_Shuff_56}
!562 = metadata !{metadata !563}
!563 = metadata !{i32 0, i32 31, metadata !564}
!564 = metadata !{metadata !565}
!565 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_1_conv2_bias", metadata !374, metadata !"float", i32 0, i32 31}
!566 = metadata !{metadata !567, null}
!567 = metadata !{metadata !568}
!568 = metadata !{i32 0, i32 31, metadata !569}
!569 = metadata !{metadata !570}
!570 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_1_conv1_weight", metadata !368, metadata !"float", i32 0, i32 31}
!571 = metadata !{metadata !572, [48 x float]* @ShuffleConvs_1_Shuff_54}
!572 = metadata !{metadata !573}
!573 = metadata !{i32 0, i32 31, metadata !574}
!574 = metadata !{metadata !575}
!575 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_1_conv1_bias", metadata !374, metadata !"float", i32 0, i32 31}
!576 = metadata !{metadata !577, null}
!577 = metadata !{metadata !578}
!578 = metadata !{i32 0, i32 31, metadata !579}
!579 = metadata !{metadata !580}
!580 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_0_conv3_weight", metadata !368, metadata !"float", i32 0, i32 31}
!581 = metadata !{metadata !582, [48 x float]* @ShuffleConvs_1_Shuff_53}
!582 = metadata !{metadata !583}
!583 = metadata !{i32 0, i32 31, metadata !584}
!584 = metadata !{metadata !585}
!585 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_0_conv3_bias", metadata !374, metadata !"float", i32 0, i32 31}
!586 = metadata !{metadata !587, null}
!587 = metadata !{metadata !588}
!588 = metadata !{i32 0, i32 31, metadata !589}
!589 = metadata !{metadata !590}
!590 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_0_conv2_weight", metadata !380, metadata !"float", i32 0, i32 31}
!591 = metadata !{metadata !592, [48 x float]* @ShuffleConvs_1_Shuff_52}
!592 = metadata !{metadata !593}
!593 = metadata !{i32 0, i32 31, metadata !594}
!594 = metadata !{metadata !595}
!595 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_0_conv2_bias", metadata !374, metadata !"float", i32 0, i32 31}
!596 = metadata !{metadata !597, null}
!597 = metadata !{metadata !598}
!598 = metadata !{i32 0, i32 31, metadata !599}
!599 = metadata !{metadata !600}
!600 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_0_conv1_weight", metadata !368, metadata !"float", i32 0, i32 31}
!601 = metadata !{metadata !602, [48 x float]* @ShuffleConvs_1_Shuff_51}
!602 = metadata !{metadata !603}
!603 = metadata !{i32 0, i32 31, metadata !604}
!604 = metadata !{metadata !605}
!605 = metadata !{metadata !"ShuffleConvs_1_ShuffleUnit1_0_conv1_bias", metadata !374, metadata !"float", i32 0, i32 31}
!606 = metadata !{metadata !607, null}
!607 = metadata !{metadata !608}
!608 = metadata !{i32 0, i32 31, metadata !609}
!609 = metadata !{metadata !610}
!610 = metadata !{metadata !"ShuffleConvs_1_DownsampleUnit_conv3r_weight", metadata !368, metadata !"float", i32 0, i32 31}
!611 = metadata !{metadata !612, [48 x float]* @ShuffleConvs_1_Downs}
!612 = metadata !{metadata !613}
!613 = metadata !{i32 0, i32 31, metadata !614}
!614 = metadata !{metadata !615}
!615 = metadata !{metadata !"ShuffleConvs_1_DownsampleUnit_conv3r_bias", metadata !374, metadata !"float", i32 0, i32 31}
!616 = metadata !{metadata !617, null}
!617 = metadata !{metadata !618}
!618 = metadata !{i32 0, i32 31, metadata !619}
!619 = metadata !{metadata !620}
!620 = metadata !{metadata !"ShuffleConvs_1_DownsampleUnit_conv2r_weight", metadata !380, metadata !"float", i32 0, i32 31}
!621 = metadata !{metadata !622, [48 x float]* @ShuffleConvs_1_Downs_5}
!622 = metadata !{metadata !623}
!623 = metadata !{i32 0, i32 31, metadata !624}
!624 = metadata !{metadata !625}
!625 = metadata !{metadata !"ShuffleConvs_1_DownsampleUnit_conv2r_bias", metadata !374, metadata !"float", i32 0, i32 31}
!626 = metadata !{metadata !627, null}
!627 = metadata !{metadata !628}
!628 = metadata !{i32 0, i32 31, metadata !629}
!629 = metadata !{metadata !630}
!630 = metadata !{metadata !"ShuffleConvs_1_DownsampleUnit_conv2l_weight", metadata !368, metadata !"float", i32 0, i32 31}
!631 = metadata !{metadata !632, [48 x float]* @ShuffleConvs_1_Downs_4}
!632 = metadata !{metadata !633}
!633 = metadata !{i32 0, i32 31, metadata !634}
!634 = metadata !{metadata !635}
!635 = metadata !{metadata !"ShuffleConvs_1_DownsampleUnit_conv2l_bias", metadata !374, metadata !"float", i32 0, i32 31}
!636 = metadata !{metadata !637, null}
!637 = metadata !{metadata !638}
!638 = metadata !{i32 0, i32 31, metadata !639}
!639 = metadata !{metadata !640}
!640 = metadata !{metadata !"ShuffleConvs_1_DownsampleUnit_conv1r_weight", metadata !368, metadata !"float", i32 0, i32 31}
!641 = metadata !{metadata !642, [48 x float]* @ShuffleConvs_1_Downs_3}
!642 = metadata !{metadata !643}
!643 = metadata !{i32 0, i32 31, metadata !644}
!644 = metadata !{metadata !645}
!645 = metadata !{metadata !"ShuffleConvs_1_DownsampleUnit_conv1r_bias", metadata !374, metadata !"float", i32 0, i32 31}
!646 = metadata !{metadata !647, null}
!647 = metadata !{metadata !648}
!648 = metadata !{i32 0, i32 31, metadata !649}
!649 = metadata !{metadata !650}
!650 = metadata !{metadata !"ShuffleConvs_1_DownsampleUnit_conv1l_weight", metadata !380, metadata !"float", i32 0, i32 31}
!651 = metadata !{metadata !652, [48 x float]* @ShuffleConvs_1_Downs_1}
!652 = metadata !{metadata !653}
!653 = metadata !{i32 0, i32 31, metadata !654}
!654 = metadata !{metadata !655}
!655 = metadata !{metadata !"ShuffleConvs_1_DownsampleUnit_conv1l_bias", metadata !374, metadata !"float", i32 0, i32 31}
!656 = metadata !{metadata !657, null}
!657 = metadata !{metadata !658}
!658 = metadata !{i32 0, i32 31, metadata !659}
!659 = metadata !{metadata !660}
!660 = metadata !{metadata !"ShuffleConvs_0_ShuffleUnit0_2_conv3_weight", metadata !661, metadata !"float", i32 0, i32 31}
!661 = metadata !{metadata !206, metadata !206, metadata !84, metadata !84}
!662 = metadata !{metadata !663, [24 x float]* @ShuffleConvs_0_Shuff}
!663 = metadata !{metadata !664}
!664 = metadata !{i32 0, i32 31, metadata !665}
!665 = metadata !{metadata !666}
!666 = metadata !{metadata !"ShuffleConvs_0_ShuffleUnit0_2_conv3_bias", metadata !213, metadata !"float", i32 0, i32 31}
!667 = metadata !{metadata !668, null}
!668 = metadata !{metadata !669}
!669 = metadata !{i32 0, i32 31, metadata !670}
!670 = metadata !{metadata !671}
!671 = metadata !{metadata !"ShuffleConvs_0_ShuffleUnit0_2_conv2_weight", metadata !672, metadata !"float", i32 0, i32 31}
!672 = metadata !{metadata !206, metadata !84, metadata !237, metadata !237}
!673 = metadata !{metadata !674, [24 x float]* @ShuffleConvs_0_Shuff_17}
!674 = metadata !{metadata !675}
!675 = metadata !{i32 0, i32 31, metadata !676}
!676 = metadata !{metadata !677}
!677 = metadata !{metadata !"ShuffleConvs_0_ShuffleUnit0_2_conv2_bias", metadata !213, metadata !"float", i32 0, i32 31}
!678 = metadata !{metadata !679, null}
!679 = metadata !{metadata !680}
!680 = metadata !{i32 0, i32 31, metadata !681}
!681 = metadata !{metadata !682}
!682 = metadata !{metadata !"ShuffleConvs_0_ShuffleUnit0_2_conv1_weight", metadata !661, metadata !"float", i32 0, i32 31}
!683 = metadata !{metadata !684, [24 x float]* @ShuffleConvs_0_Shuff_4}
!684 = metadata !{metadata !685}
!685 = metadata !{i32 0, i32 31, metadata !686}
!686 = metadata !{metadata !687}
!687 = metadata !{metadata !"ShuffleConvs_0_ShuffleUnit0_2_conv1_bias", metadata !213, metadata !"float", i32 0, i32 31}
!688 = metadata !{metadata !689, null}
!689 = metadata !{metadata !690}
!690 = metadata !{i32 0, i32 31, metadata !691}
!691 = metadata !{metadata !692}
!692 = metadata !{metadata !"ShuffleConvs_0_ShuffleUnit0_1_conv3_weight", metadata !661, metadata !"float", i32 0, i32 31}
!693 = metadata !{metadata !694, [24 x float]* @ShuffleConvs_0_Shuff_3}
!694 = metadata !{metadata !695}
!695 = metadata !{i32 0, i32 31, metadata !696}
!696 = metadata !{metadata !697}
!697 = metadata !{metadata !"ShuffleConvs_0_ShuffleUnit0_1_conv3_bias", metadata !213, metadata !"float", i32 0, i32 31}
!698 = metadata !{metadata !699, null}
!699 = metadata !{metadata !700}
!700 = metadata !{i32 0, i32 31, metadata !701}
!701 = metadata !{metadata !702}
!702 = metadata !{metadata !"ShuffleConvs_0_ShuffleUnit0_1_conv2_weight", metadata !672, metadata !"float", i32 0, i32 31}
!703 = metadata !{metadata !704, [24 x float]* @ShuffleConvs_0_Shuff_1}
!704 = metadata !{metadata !705}
!705 = metadata !{i32 0, i32 31, metadata !706}
!706 = metadata !{metadata !707}
!707 = metadata !{metadata !"ShuffleConvs_0_ShuffleUnit0_1_conv2_bias", metadata !213, metadata !"float", i32 0, i32 31}
!708 = metadata !{metadata !709, null}
!709 = metadata !{metadata !710}
!710 = metadata !{i32 0, i32 31, metadata !711}
!711 = metadata !{metadata !712}
!712 = metadata !{metadata !"ShuffleConvs_0_ShuffleUnit0_1_conv1_weight", metadata !661, metadata !"float", i32 0, i32 31}
!713 = metadata !{metadata !714, [24 x float]* @ShuffleConvs_0_Shuff_22}
!714 = metadata !{metadata !715}
!715 = metadata !{i32 0, i32 31, metadata !716}
!716 = metadata !{metadata !717}
!717 = metadata !{metadata !"ShuffleConvs_0_ShuffleUnit0_1_conv1_bias", metadata !213, metadata !"float", i32 0, i32 31}
!718 = metadata !{metadata !719, null}
!719 = metadata !{metadata !720}
!720 = metadata !{i32 0, i32 31, metadata !721}
!721 = metadata !{metadata !722}
!722 = metadata !{metadata !"ShuffleConvs_0_ShuffleUnit0_0_conv3_weight", metadata !661, metadata !"float", i32 0, i32 31}
!723 = metadata !{metadata !724, [24 x float]* @ShuffleConvs_0_Shuff_21}
!724 = metadata !{metadata !725}
!725 = metadata !{i32 0, i32 31, metadata !726}
!726 = metadata !{metadata !727}
!727 = metadata !{metadata !"ShuffleConvs_0_ShuffleUnit0_0_conv3_bias", metadata !213, metadata !"float", i32 0, i32 31}
!728 = metadata !{metadata !729, null}
!729 = metadata !{metadata !730}
!730 = metadata !{i32 0, i32 31, metadata !731}
!731 = metadata !{metadata !732}
!732 = metadata !{metadata !"ShuffleConvs_0_ShuffleUnit0_0_conv2_weight", metadata !672, metadata !"float", i32 0, i32 31}
!733 = metadata !{metadata !734, [24 x float]* @ShuffleConvs_0_Shuff_20}
!734 = metadata !{metadata !735}
!735 = metadata !{i32 0, i32 31, metadata !736}
!736 = metadata !{metadata !737}
!737 = metadata !{metadata !"ShuffleConvs_0_ShuffleUnit0_0_conv2_bias", metadata !213, metadata !"float", i32 0, i32 31}
!738 = metadata !{metadata !739, null}
!739 = metadata !{metadata !740}
!740 = metadata !{i32 0, i32 31, metadata !741}
!741 = metadata !{metadata !742}
!742 = metadata !{metadata !"ShuffleConvs_0_ShuffleUnit0_0_conv1_weight", metadata !661, metadata !"float", i32 0, i32 31}
!743 = metadata !{metadata !744, [24 x float]* @ShuffleConvs_0_Shuff_19}
!744 = metadata !{metadata !745}
!745 = metadata !{i32 0, i32 31, metadata !746}
!746 = metadata !{metadata !747}
!747 = metadata !{metadata !"ShuffleConvs_0_ShuffleUnit0_0_conv1_bias", metadata !213, metadata !"float", i32 0, i32 31}
!748 = metadata !{metadata !749, null}
!749 = metadata !{metadata !750}
!750 = metadata !{i32 0, i32 31, metadata !751}
!751 = metadata !{metadata !752}
!752 = metadata !{metadata !"ShuffleConvs_0_DownsampleUnit_conv3r_weight", metadata !661, metadata !"float", i32 0, i32 31}
!753 = metadata !{metadata !754, [24 x float]* @ShuffleConvs_0_Downs}
!754 = metadata !{metadata !755}
!755 = metadata !{i32 0, i32 31, metadata !756}
!756 = metadata !{metadata !757}
!757 = metadata !{metadata !"ShuffleConvs_0_DownsampleUnit_conv3r_bias", metadata !213, metadata !"float", i32 0, i32 31}
!758 = metadata !{metadata !759, null}
!759 = metadata !{metadata !760}
!760 = metadata !{i32 0, i32 31, metadata !761}
!761 = metadata !{metadata !762}
!762 = metadata !{metadata !"ShuffleConvs_0_DownsampleUnit_conv2r_weight", metadata !672, metadata !"float", i32 0, i32 31}
!763 = metadata !{metadata !764, [24 x float]* @ShuffleConvs_0_Downs_5}
!764 = metadata !{metadata !765}
!765 = metadata !{i32 0, i32 31, metadata !766}
!766 = metadata !{metadata !767}
!767 = metadata !{metadata !"ShuffleConvs_0_DownsampleUnit_conv2r_bias", metadata !213, metadata !"float", i32 0, i32 31}
!768 = metadata !{metadata !769, null}
!769 = metadata !{metadata !770}
!770 = metadata !{i32 0, i32 31, metadata !771}
!771 = metadata !{metadata !772}
!772 = metadata !{metadata !"ShuffleConvs_0_DownsampleUnit_conv2l_weight", metadata !661, metadata !"float", i32 0, i32 31}
!773 = metadata !{metadata !774, [24 x float]* @ShuffleConvs_0_Downs_4}
!774 = metadata !{metadata !775}
!775 = metadata !{i32 0, i32 31, metadata !776}
!776 = metadata !{metadata !777}
!777 = metadata !{metadata !"ShuffleConvs_0_DownsampleUnit_conv2l_bias", metadata !213, metadata !"float", i32 0, i32 31}
!778 = metadata !{metadata !779, null}
!779 = metadata !{metadata !780}
!780 = metadata !{i32 0, i32 31, metadata !781}
!781 = metadata !{metadata !782}
!782 = metadata !{metadata !"ShuffleConvs_0_DownsampleUnit_conv1r_weight", metadata !661, metadata !"float", i32 0, i32 31}
!783 = metadata !{metadata !784, [24 x float]* @ShuffleConvs_0_Downs_3}
!784 = metadata !{metadata !785}
!785 = metadata !{i32 0, i32 31, metadata !786}
!786 = metadata !{metadata !787}
!787 = metadata !{metadata !"ShuffleConvs_0_DownsampleUnit_conv1r_bias", metadata !213, metadata !"float", i32 0, i32 31}
!788 = metadata !{metadata !789, null}
!789 = metadata !{metadata !790}
!790 = metadata !{i32 0, i32 31, metadata !791}
!791 = metadata !{metadata !792}
!792 = metadata !{metadata !"ShuffleConvs_0_DownsampleUnit_conv1l_weight", metadata !672, metadata !"float", i32 0, i32 31}
!793 = metadata !{metadata !794, [24 x float]* @ShuffleConvs_0_Downs_1}
!794 = metadata !{metadata !795}
!795 = metadata !{i32 0, i32 31, metadata !796}
!796 = metadata !{metadata !797}
!797 = metadata !{metadata !"ShuffleConvs_0_DownsampleUnit_conv1l_bias", metadata !213, metadata !"float", i32 0, i32 31}
!798 = metadata !{metadata !79, [3072 x float]* @shuffleunit2_2_outpu}
!799 = metadata !{metadata !88, [3072 x float]* @shuffleunit2_1_outpu}
!800 = metadata !{metadata !93, [3072 x float]* @shuffleunit2_0_outpu}
!801 = metadata !{metadata !98, [6144 x float]* @shuffleunit1_7_outpu}
!802 = metadata !{metadata !106, [6144 x float]* @shuffleunit1_6_outpu}
!803 = metadata !{metadata !111, [6144 x float]* @shuffleunit1_5_outpu}
!804 = metadata !{metadata !116, [6144 x float]* @shuffleunit1_4_outpu}
!805 = metadata !{metadata !121, [6144 x float]* @shuffleunit1_3_outpu}
!806 = metadata !{metadata !126, [6144 x float]* @shuffleunit1_2_outpu}
!807 = metadata !{metadata !131, [6144 x float]* @shuffleunit1_1_outpu}
!808 = metadata !{metadata !136, [6144 x float]* @shuffleunit1_0_outpu}
!809 = metadata !{metadata !141, [12288 x float]* @shuffleunit0_2_outpu}
!810 = metadata !{metadata !149, [12288 x float]* @shuffleunit0_1_outpu}
!811 = metadata !{metadata !154, [12288 x float]* @shuffleunit0_0_outpu}
!812 = metadata !{metadata !173, [3072 x float]* @downsampleunit2_outp}
!813 = metadata !{metadata !178, [6144 x float]* @downsampleunit1_outp}
!814 = metadata !{metadata !183, [12288 x float]* @downsampleunit0_outp}
!815 = metadata !{metadata !188, [8192 x float]* @conv_last_output}
!816 = metadata !{metadata !201, [24576 x float]* @conv1_output}
!817 = metadata !{metadata !220, [9216 x float]* @ShuffleConvs_2_Shuff_18}
!818 = metadata !{metadata !232, [864 x float]* @ShuffleConvs_2_Shuff_15}
!819 = metadata !{metadata !244, [9216 x float]* @ShuffleConvs_2_Shuff_13}
!820 = metadata !{metadata !254, [9216 x float]* @ShuffleConvs_2_Shuff_11}
!821 = metadata !{metadata !264, [864 x float]* @ShuffleConvs_2_Shuff_9}
!822 = metadata !{metadata !274, [9216 x float]* @ShuffleConvs_2_Shuff_8}
!823 = metadata !{metadata !284, [9216 x float]* @ShuffleConvs_2_Shuff_7}
!824 = metadata !{metadata !294, [864 x float]* @ShuffleConvs_2_Shuff_6}
!825 = metadata !{metadata !304, [9216 x float]* @ShuffleConvs_2_Shuff_5}
!826 = metadata !{metadata !314, [9216 x float]* @ShuffleConvs_2_Downs_10}
!827 = metadata !{metadata !324, [864 x float]* @ShuffleConvs_2_Downs_9}
!828 = metadata !{metadata !334, [9216 x float]* @ShuffleConvs_2_Downs_8}
!829 = metadata !{metadata !344, [9216 x float]* @ShuffleConvs_2_Downs_7}
!830 = metadata !{metadata !354, [864 x float]* @ShuffleConvs_2_Downs_6}
!831 = metadata !{metadata !364, [2304 x float]* @ShuffleConvs_1_Shuff_50}
!832 = metadata !{metadata !376, [432 x float]* @ShuffleConvs_1_Shuff_49}
!833 = metadata !{metadata !387, [2304 x float]* @ShuffleConvs_1_Shuff_47}
!834 = metadata !{metadata !397, [2304 x float]* @ShuffleConvs_1_Shuff_45}
!835 = metadata !{metadata !407, [432 x float]* @ShuffleConvs_1_Shuff_43}
!836 = metadata !{metadata !417, [2304 x float]* @ShuffleConvs_1_Shuff_41}
!837 = metadata !{metadata !427, [2304 x float]* @ShuffleConvs_1_Shuff_37}
!838 = metadata !{metadata !437, [432 x float]* @ShuffleConvs_1_Shuff_35}
!839 = metadata !{metadata !447, [2304 x float]* @ShuffleConvs_1_Shuff_33}
!840 = metadata !{metadata !457, [2304 x float]* @ShuffleConvs_1_Shuff_31}
!841 = metadata !{metadata !467, [432 x float]* @ShuffleConvs_1_Shuff_29}
!842 = metadata !{metadata !477, [2304 x float]* @ShuffleConvs_1_Shuff_27}
!843 = metadata !{metadata !487, [2304 x float]* @ShuffleConvs_1_Shuff_25}
!844 = metadata !{metadata !497, [432 x float]* @ShuffleConvs_1_Shuff_23}
!845 = metadata !{metadata !507, [2304 x float]* @ShuffleConvs_1_Shuff_21}
!846 = metadata !{metadata !517, [2304 x float]* @ShuffleConvs_1_Shuff_19}
!847 = metadata !{metadata !527, [432 x float]* @ShuffleConvs_1_Shuff_15}
!848 = metadata !{metadata !537, [2304 x float]* @ShuffleConvs_1_Shuff_13}
!849 = metadata !{metadata !547, [2304 x float]* @ShuffleConvs_1_Shuff_11}
!850 = metadata !{metadata !557, [432 x float]* @ShuffleConvs_1_Shuff_9}
!851 = metadata !{metadata !567, [2304 x float]* @ShuffleConvs_1_Shuff_7}
!852 = metadata !{metadata !577, [2304 x float]* @ShuffleConvs_1_Shuff_5}
!853 = metadata !{metadata !587, [432 x float]* @ShuffleConvs_1_Shuff_3}
!854 = metadata !{metadata !597, [2304 x float]* @ShuffleConvs_1_Shuff_1}
!855 = metadata !{metadata !607, [2304 x float]* @ShuffleConvs_1_Downs_10}
!856 = metadata !{metadata !617, [432 x float]* @ShuffleConvs_1_Downs_9}
!857 = metadata !{metadata !627, [2304 x float]* @ShuffleConvs_1_Downs_8}
!858 = metadata !{metadata !637, [2304 x float]* @ShuffleConvs_1_Downs_7}
!859 = metadata !{metadata !647, [432 x float]* @ShuffleConvs_1_Downs_6}
!860 = metadata !{metadata !657, [576 x float]* @ShuffleConvs_0_Shuff_18}
!861 = metadata !{metadata !668, [216 x float]* @ShuffleConvs_0_Shuff_15}
!862 = metadata !{metadata !679, [576 x float]* @ShuffleConvs_0_Shuff_13}
!863 = metadata !{metadata !689, [576 x float]* @ShuffleConvs_0_Shuff_11}
!864 = metadata !{metadata !699, [216 x float]* @ShuffleConvs_0_Shuff_9}
!865 = metadata !{metadata !709, [576 x float]* @ShuffleConvs_0_Shuff_8}
!866 = metadata !{metadata !719, [576 x float]* @ShuffleConvs_0_Shuff_7}
!867 = metadata !{metadata !729, [216 x float]* @ShuffleConvs_0_Shuff_6}
!868 = metadata !{metadata !739, [576 x float]* @ShuffleConvs_0_Shuff_5}
!869 = metadata !{metadata !749, [576 x float]* @ShuffleConvs_0_Downs_10}
!870 = metadata !{metadata !759, [216 x float]* @ShuffleConvs_0_Downs_9}
!871 = metadata !{metadata !769, [576 x float]* @ShuffleConvs_0_Downs_8}
!872 = metadata !{metadata !779, [576 x float]* @ShuffleConvs_0_Downs_7}
!873 = metadata !{metadata !789, [216 x float]* @ShuffleConvs_0_Downs_6}
!874 = metadata !{metadata !875}
!875 = metadata !{i32 0, i32 31, metadata !876}
!876 = metadata !{metadata !877}
!877 = metadata !{metadata !"image", metadata !878, metadata !"float", i32 0, i32 31}
!878 = metadata !{metadata !84, metadata !237, metadata !207, metadata !207}
!879 = metadata !{metadata !880}
!880 = metadata !{i32 0, i32 31, metadata !881}
!881 = metadata !{metadata !882}
!882 = metadata !{metadata !"conv1_weight", metadata !883, metadata !"float", i32 0, i32 31}
!883 = metadata !{metadata !206, metadata !237, metadata !237, metadata !237}
!884 = metadata !{metadata !885}
!885 = metadata !{i32 0, i32 31, metadata !886}
!886 = metadata !{metadata !887}
!887 = metadata !{metadata !"shuffle_conv_3x3", metadata !888, metadata !"float", i32 0, i32 31}
!888 = metadata !{metadata !889, metadata !84, metadata !237, metadata !237}
!889 = metadata !{i32 0, i32 1079, i32 1}
!890 = metadata !{metadata !891}
!891 = metadata !{i32 0, i32 31, metadata !892}
!892 = metadata !{metadata !893}
!893 = metadata !{metadata !"shuffle_conv_1x1", metadata !894, metadata !"float", i32 0, i32 31}
!894 = metadata !{metadata !895, metadata !206, metadata !84, metadata !84}
!895 = metadata !{i32 0, i32 5495, i32 1}
!896 = metadata !{metadata !897}
!897 = metadata !{i32 0, i32 31, metadata !898}
!898 = metadata !{metadata !899}
!899 = metadata !{metadata !"conv_last_weight", metadata !900, metadata !"float", i32 0, i32 31}
!900 = metadata !{metadata !193, metadata !85, metadata !84, metadata !84}
!901 = metadata !{metadata !902}
!902 = metadata !{i32 0, i32 31, metadata !903}
!903 = metadata !{metadata !904}
!904 = metadata !{metadata !"fc_weight", metadata !905, metadata !"float", i32 0, i32 31}
!905 = metadata !{metadata !171, metadata !193}
!906 = metadata !{metadata !907}
!907 = metadata !{i32 0, i32 31, metadata !908}
!908 = metadata !{metadata !909}
!909 = metadata !{metadata !"bias", metadata !910, metadata !"float", i32 0, i32 31}
!910 = metadata !{metadata !911}
!911 = metadata !{i32 0, i32 3617, i32 1}
!912 = metadata !{metadata !913}
!913 = metadata !{i32 0, i32 31, metadata !914}
!914 = metadata !{metadata !915}
!915 = metadata !{metadata !"fc_output", metadata !916, metadata !"float", i32 0, i32 31}
!916 = metadata !{metadata !917}
!917 = metadata !{i32 0, i32 999, i32 1}

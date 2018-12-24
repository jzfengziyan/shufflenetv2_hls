; ModuleID = '/home/ziyan/ziyan/ece527/shufflenetv2_master/sufflenetv3_vivado/acceleartor_padding/acceleartor_hls_padding/naive/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@weights_96_96_1x1_V = global [9216 x i8] zeroinitializer
@weights_96_1_3x3_V = global [864 x i8] zeroinitializer
@weights_48_48_1x1_V = global [2304 x i8] zeroinitializer
@weights_48_1_3x3_V = global [432 x i8] zeroinitializer
@weights_24_24_1x1_V = global [576 x i8] zeroinitializer
@weights_24_1_3x3_V = global [216 x i8] zeroinitializer
@shuffleunit2_2_outpu_1 = global [3072 x i8] zeroinitializer
@shuffleunit2_2_outpu = global [6912 x i8] zeroinitializer
@shuffleunit2_1_outpu = global [6912 x i8] zeroinitializer
@shuffleunit2_0_outpu = global [6912 x i8] zeroinitializer
@shuffleunit1_7_outpu = global [9600 x i8] zeroinitializer
@shuffleunit1_6_outpu = global [9600 x i8] zeroinitializer
@shuffleunit1_5_outpu = global [9600 x i8] zeroinitializer
@shuffleunit1_4_outpu = global [9600 x i8] zeroinitializer
@shuffleunit1_3_outpu = global [9600 x i8] zeroinitializer
@shuffleunit1_2_outpu = global [9600 x i8] zeroinitializer
@shuffleunit1_1_outpu = global [9600 x i8] zeroinitializer
@shuffleunit1_0_outpu = global [9600 x i8] zeroinitializer
@shuffleunit0_2_outpu = global [15552 x i8] zeroinitializer
@shuffleunit0_1_outpu = global [15552 x i8] zeroinitializer
@shuffleunit0_0_outpu = global [15552 x i8] zeroinitializer
@mode45 = internal constant [10 x i8] c"s_axilite\00"
@mode43 = internal constant [10 x i8] c"s_axilite\00"
@mode41 = internal constant [10 x i8] c"s_axilite\00"
@mode39 = internal constant [10 x i8] c"s_axilite\00"
@mode37 = internal constant [10 x i8] c"s_axilite\00"
@mode35 = internal constant [10 x i8] c"s_axilite\00"
@mode33 = internal constant [10 x i8] c"s_axilite\00"
@mode = internal constant [10 x i8] c"s_axilite\00"
@llvm_global_ctors_1 = appending global [2 x void ()*] [void ()* @_GLOBAL__I_a, void ()* @_GLOBAL__I_a97]
@llvm_global_ctors_0 = appending global [2 x i32] [i32 65535, i32 65535]
@image_p_V = global [3468 x i8] zeroinitializer
@fc_bias_V = global [10 x i8] zeroinitializer
@downsampleunit2_outp = global [6912 x i8] zeroinitializer
@downsampleunit1_outp = global [9600 x i8] zeroinitializer
@downsampleunit0_outp = global [15552 x i8] zeroinitializer
@conv_last_output_V = global [8192 x i8] zeroinitializer
@conv_last_bias_V = global [512 x i8] zeroinitializer
@conv1_output_p_V = global [27744 x i8] zeroinitializer
@conv1_output_V = constant [24576 x i8] zeroinitializer
@conv1_bias_V = global [24 x i8] zeroinitializer
@bundle46 = internal constant [1 x i8] zeroinitializer
@bundle44 = internal constant [1 x i8] zeroinitializer
@bundle42 = internal constant [1 x i8] zeroinitializer
@bundle40 = internal constant [1 x i8] zeroinitializer
@bundle38 = internal constant [1 x i8] zeroinitializer
@bundle36 = internal constant [1 x i8] zeroinitializer
@bundle34 = internal constant [1 x i8] zeroinitializer
@bundle = internal constant [1 x i8] zeroinitializer
@buffer1_1_96_4x4_p_V = global [3456 x i8] zeroinitializer
@buffer1_1_48_8x8_p_V = global [4800 x i8] zeroinitializer
@buffer1_1_24_16x16_p = global [7776 x i8] zeroinitializer
@buffer0_1_96_4x4_p_V = global [3456 x i8] zeroinitializer
@buffer0_1_48_8x8_p_V = global [4800 x i8] zeroinitializer
@buffer0_1_24_16x16_p = global [7776 x i8] zeroinitializer
@bias_96_V = global [96 x i8] zeroinitializer
@bias_48_V = global [48 x i8] zeroinitializer
@bias_24_V = global [24 x i8] zeroinitializer
@avgpool_output_V = global [512 x i8] zeroinitializer
@ShuffleNetV2_str = internal unnamed_addr constant [13 x i8] c"ShuffleNetV2\00"
@ShuffleConvs_2_Downs = global [9600 x i8] zeroinitializer
@ShuffleConvs_1_Downs = global [15552 x i8] zeroinitializer
@ShuffleConvs_0_Downs = global [27744 x i8] zeroinitializer
@p_str52 = private unnamed_addr constant [4 x i8] c"CTL\00", align 1
@p_str51 = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1
@p_str50 = private unnamed_addr constant [16 x i8] c"3X3_1X1_WEIGHTS\00", align 1
@p_str49 = private unnamed_addr constant [10 x i8] c"DATA_BIAS\00", align 1
@p_str48 = private unnamed_addr constant [19 x i8] c"DATA_OTHER_WEIGHTS\00", align 1
@p_str47 = private unnamed_addr constant [6 x i8] c"slave\00", align 1
@p_str46 = private unnamed_addr constant [18 x i8] c"DATA_INPUT_OUTPUT\00", align 1
@p_str45 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1
@p_str = private unnamed_addr constant [6 x i8] c"m_axi\00", align 1

define internal fastcc void @subconv_3x3_8_stride([9600 x i8]* nocapture %input_V, [864 x i8]* nocapture %weight_V, [96 x i8]* nocapture %bias_V, [3456 x i8]* nocapture %output_V) {
  br label %.loopexit10

.loopexit10.loopexit:                             ; preds = %.preheader47
  br label %.loopexit10

.loopexit10:                                      ; preds = %.loopexit10.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_1, %.loopexit10.loopexit ]
  %exitcond1 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_1 = add i7 %co, 1
  br i1 %exitcond1, label %2, label %.preheader47.preheader

.preheader47.preheader:                           ; preds = %.loopexit10
  %tmp = zext i7 %co to i64
  %tmp_cast = zext i7 %co to i10
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0)
  %p_shl3_cast = zext i10 %tmp_s to i11
  %tmp_1 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co, i1 false)
  %p_shl4_cast = zext i8 %tmp_1 to i11
  %tmp_3 = add i11 %p_shl4_cast, %p_shl3_cast
  %tmp_9 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %co, i2 0)
  %p_shl2_cast = zext i9 %tmp_9 to i10
  %tmp_10 = sub i10 %p_shl2_cast, %tmp_cast
  %tmp_23_cast = sext i10 %tmp_10 to i11
  %tmp_12 = sub i11 %p_shl3_cast, %p_shl4_cast
  %tmp_26_cast = sext i11 %tmp_12 to i12
  %bias_V_addr = getelementptr [96 x i8]* %bias_V, i64 0, i64 %tmp
  br label %.preheader47

.preheader47:                                     ; preds = %1, %.preheader47.preheader
  %h = phi i3 [ %h_1, %1 ], [ 1, %.preheader47.preheader ]
  %exitcond2 = icmp eq i3 %h, -3
  %empty_14 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %exitcond2, label %.loopexit10.loopexit, label %.preheader46.preheader

.preheader46.preheader:                           ; preds = %.preheader47
  %tmp_2 = call i4 @_ssdm_op_BitConcatenate.i4.i3.i1(i3 %h, i1 false)
  %tmp_3_cast = zext i3 %h to i12
  %tmp_14 = add i12 %tmp_26_cast, %tmp_3_cast
  %tmp_20 = trunc i12 %tmp_14 to i10
  %p_shl5_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_20, i3 0)
  %p_shl6_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_14, i1 false)
  %tmp_21 = sub i13 %p_shl5_cast, %p_shl6_cast
  br label %.preheader46

.preheader46:                                     ; preds = %_ifconv1, %.preheader46.preheader
  %w = phi i3 [ %w_1, %_ifconv1 ], [ 1, %.preheader46.preheader ]
  %exitcond3 = icmp eq i3 %w, -3
  %empty_15 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %exitcond3, label %1, label %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i

_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i: ; preds = %.preheader46
  %tmp_5 = call i4 @_ssdm_op_BitConcatenate.i4.i3.i1(i3 %w, i1 false)
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i
  %p_Val2_s = phi i8 [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i ], [ %p_Val2_4, %.loopexit.loopexit ]
  %m = phi i2 [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i ], [ %m_1, %.loopexit.loopexit ]
  %exitcond4 = icmp eq i2 %m, -1
  %empty_16 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_1 = add i2 %m, 1
  br i1 %exitcond4, label %_ifconv1, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.loopexit
  %tmp_1_cast = zext i2 %m to i11
  %tmp_23 = add i11 %tmp_23_cast, %tmp_1_cast
  %tmp_24 = shl i11 %tmp_23, 2
  %tmp_25 = sub i11 %tmp_24, %tmp_23
  %tmp2 = xor i2 %m, -2
  %tmp2_cast = sext i2 %tmp2 to i4
  %tmp_8 = add i4 %tmp_2, %tmp2_cast
  %tmp_cast_17 = zext i4 %tmp_8 to i11
  %tmp_26 = add i11 %tmp_3, %tmp_cast_17
  %tmp_27 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_26, i3 0)
  %p_shl7_cast = zext i14 %tmp_27 to i15
  %tmp_28 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_26, i1 false)
  %p_shl8_cast = zext i12 %tmp_28 to i15
  %tmp_29 = add i15 %p_shl8_cast, %p_shl7_cast
  br label %.preheader

.preheader:                                       ; preds = %_ifconv, %.preheader.preheader
  %p_Val2_4 = phi i8 [ %p_Val2_s, %.preheader.preheader ], [ %sum_V, %_ifconv ]
  %n = phi i2 [ 0, %.preheader.preheader ], [ %n_1, %_ifconv ]
  %exitcond = icmp eq i2 %n, -1
  %empty_18 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_1 = add i2 %n, 1
  br i1 %exitcond, label %.loopexit.loopexit, label %_ifconv

_ifconv:                                          ; preds = %.preheader
  %tmp_10_cast = zext i2 %n to i11
  %tmp_30 = add i11 %tmp_10_cast, %tmp_25
  %tmp_39_cast = zext i11 %tmp_30 to i64
  %weight_V_addr = getelementptr [864 x i8]* %weight_V, i64 0, i64 %tmp_39_cast
  %tmp3 = xor i2 %n, -2
  %tmp3_cast = sext i2 %tmp3 to i4
  %tmp_11 = add i4 %tmp3_cast, %tmp_5
  %tmp_12_cast = zext i4 %tmp_11 to i15
  %tmp_31 = add i15 %tmp_12_cast, %tmp_29
  %tmp_40_cast = zext i15 %tmp_31 to i64
  %input_V_addr = getelementptr [9600 x i8]* %input_V, i64 0, i64 %tmp_40_cast
  %weight_V_load = load i8* %weight_V_addr, align 1
  %OP1_V = sext i8 %weight_V_load to i16
  %input_V_load = load i8* %input_V_addr, align 1
  %OP2_V = sext i8 %input_V_load to i16
  %p_Val2_5 = mul i16 %OP1_V, %OP2_V
  %tmp_13 = call i14 @_ssdm_op_BitConcatenate.i14.i8.i6(i8 %p_Val2_4, i6 0)
  %tmp_16_cast = sext i14 %tmp_13 to i16
  %p_Val2_6 = add i16 %tmp_16_cast, %p_Val2_5
  %signbit = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_6, i32 15)
  %p_Val2_7 = call i8 @_ssdm_op_PartSelect.i8.i16.i32.i32(i16 %p_Val2_6, i32 6, i32 13)
  %tmp_33 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_5, i32 5)
  %tmp_15 = zext i1 %tmp_33 to i8
  %tmp_34 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_6, i32 13)
  %p_Val2_8 = add i8 %p_Val2_7, %tmp_15
  %newsignbit = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %p_Val2_8, i32 7)
  %tmp_16 = xor i1 %newsignbit, true
  %carry = and i1 %tmp_34, %tmp_16
  %tmp_36 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_6, i32 14)
  %tmp_18 = call i2 @_ssdm_op_PartSelect.i2.i16.i32.i32(i16 %p_Val2_6, i32 14, i32 15)
  %Range1_all_ones = icmp eq i2 %tmp_18, -1
  %Range1_all_zeros = icmp eq i2 %tmp_18, 0
  %deleted_zeros = select i1 %carry, i1 %Range1_all_ones, i1 %Range1_all_zeros
  %tmp_17 = xor i1 %tmp_36, true
  %p_41_i_i = and i1 %signbit, %tmp_17
  %deleted_ones = select i1 %carry, i1 %p_41_i_i, i1 %Range1_all_ones
  %p_38_i_i = and i1 %carry, %Range1_all_ones
  %p_not_i_i = xor i1 %deleted_zeros, true
  %brmerge_i_i1 = or i1 %newsignbit, %p_not_i_i
  %tmp_19 = xor i1 %signbit, true
  %overflow = and i1 %brmerge_i_i1, %tmp_19
  %brmerge40_demorgan_i = and i1 %newsignbit, %deleted_ones
  %tmp4_demorgan = or i1 %p_38_i_i, %brmerge40_demorgan_i
  %tmp4 = xor i1 %tmp4_demorgan, true
  %underflow = and i1 %signbit, %tmp4
  %brmerge_i_i_i = or i1 %underflow, %overflow
  %tmp5 = or i1 %brmerge40_demorgan_i, %tmp_19
  %underflow_not = or i1 %tmp5, %p_38_i_i
  %p_Val2_8_mux = select i1 %brmerge_i_i_i, i8 127, i8 %p_Val2_8
  %p_Val2_8_19 = select i1 %underflow, i8 -128, i8 %p_Val2_8
  %sum_V = select i1 %underflow_not, i8 %p_Val2_8_mux, i8 %p_Val2_8_19
  br label %.preheader

_ifconv1:                                         ; preds = %.loopexit
  %tmp_6 = sext i8 %p_Val2_s to i9
  %p_Val2_1 = load i8* %bias_V_addr, align 1
  %tmp_7 = sext i8 %p_Val2_1 to i9
  %p_Val2_2 = add i9 %tmp_6, %tmp_7
  %isneg = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %p_Val2_2, i32 8)
  %result_V = add i8 %p_Val2_s, %p_Val2_1
  %newsignbit_1 = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %result_V, i32 7)
  %tmp_4 = xor i1 %newsignbit_1, true
  %underflow_1 = and i1 %isneg, %tmp_4
  %brmerge_i_i = xor i1 %isneg, %newsignbit_1
  %isneg_not = xor i1 %isneg, true
  %brmerge9 = or i1 %newsignbit_1, %isneg_not
  %result_V_mux = select i1 %brmerge_i_i, i8 127, i8 %result_V
  %p_result_V = select i1 %underflow_1, i8 -128, i8 %result_V
  %result_1 = select i1 %brmerge9, i8 %result_V_mux, i8 %p_result_V
  %tmp_9_cast = zext i3 %w to i13
  %tmp_22 = add i13 %tmp_21, %tmp_9_cast
  %tmp_31_cast = zext i13 %tmp_22 to i64
  %output_V_addr = getelementptr [3456 x i8]* %output_V, i64 0, i64 %tmp_31_cast
  store i8 %result_1, i8* %output_V_addr, align 1
  %w_1 = add i3 %w, 1
  br label %.preheader46

; <label>:1                                       ; preds = %.preheader46
  %h_1 = add i3 %h, 1
  br label %.preheader47

; <label>:2                                       ; preds = %.loopexit10
  ret void
}

define internal fastcc void @subconv_3x3_8_no_rel([4800 x i8]* nocapture %input_V, [432 x i8]* nocapture %weight_V, [48 x i8]* nocapture %bias_V, [4800 x i8]* nocapture %output_V) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader47
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_2, %.loopexit.loopexit ]
  %exitcond5 = icmp eq i6 %co, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_2 = add i6 %co, 1
  br i1 %exitcond5, label %2, label %.preheader47.preheader

.preheader47.preheader:                           ; preds = %.loopexit
  %tmp = zext i6 %co to i64
  %tmp_cast = zext i6 %co to i9
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co, i3 0)
  %p_shl1_cast = zext i9 %tmp_s to i10
  %tmp_36 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co, i1 false)
  %p_shl2_cast = zext i7 %tmp_36 to i10
  %tmp_37 = add i10 %p_shl2_cast, %p_shl1_cast
  %tmp_38 = call i8 @_ssdm_op_BitConcatenate.i8.i6.i2(i6 %co, i2 0)
  %p_shl_cast = zext i8 %tmp_38 to i9
  %tmp_39 = sub i9 %p_shl_cast, %tmp_cast
  %tmp_45_cast = sext i9 %tmp_39 to i10
  %bias_V_addr = getelementptr [48 x i8]* %bias_V, i64 0, i64 %tmp
  br label %.preheader47

.preheader47:                                     ; preds = %1, %.preheader47.preheader
  %h = phi i4 [ %h_2, %1 ], [ 1, %.preheader47.preheader ]
  %exitcond6 = icmp eq i4 %h, -7
  %empty_20 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond6, label %.loopexit.loopexit, label %.preheader46.preheader

.preheader46.preheader:                           ; preds = %.preheader47
  %tmp_cast_21 = zext i4 %h to i10
  %tmp_40 = add i10 %tmp_cast_21, %tmp_37
  %tmp_41 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_40, i3 0)
  %p_shl3_cast = zext i13 %tmp_41 to i14
  %tmp_42 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_40, i1 false)
  %p_shl4_cast = zext i11 %tmp_42 to i14
  %tmp_43 = add i14 %p_shl3_cast, %p_shl4_cast
  br label %.preheader46

.preheader46:                                     ; preds = %_ifconv1, %.preheader46.preheader
  %w = phi i4 [ %w_2, %_ifconv1 ], [ 1, %.preheader46.preheader ]
  %exitcond7 = icmp eq i4 %w, -7
  %empty_22 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond7, label %1, label %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.preheader

_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.preheader: ; preds = %.preheader46
  br label %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i

_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.loopexit: ; preds = %.preheader
  br label %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i

_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i: ; preds = %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.preheader, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.loopexit
  %p_Val2_s = phi i8 [ %p_Val2_12, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.loopexit ], [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.preheader ]
  %m = phi i2 [ %m_2, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.loopexit ], [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.preheader ]
  %exitcond8 = icmp eq i2 %m, -1
  %empty_23 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_2 = add i2 %m, 1
  br i1 %exitcond8, label %_ifconv1, label %.preheader.preheader

.preheader.preheader:                             ; preds = %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i
  %tmp_24_cast = zext i2 %m to i10
  %tmp_45 = add i10 %tmp_45_cast, %tmp_24_cast
  %tmp_46 = shl i10 %tmp_45, 2
  %tmp_47 = sub i10 %tmp_46, %tmp_45
  %tmp2 = add i2 -1, %m
  %tmp2_cast = sext i2 %tmp2 to i4
  %tmp_25 = add i4 %h, %tmp2_cast
  %tmp_26_cast = zext i4 %tmp_25 to i10
  %tmp_48 = add i10 %tmp_37, %tmp_26_cast
  %tmp_49 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_48, i3 0)
  %p_shl5_cast = zext i13 %tmp_49 to i14
  %tmp_50 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_48, i1 false)
  %p_shl6_cast = zext i11 %tmp_50 to i14
  %tmp_51 = add i14 %p_shl6_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %_ifconv, %.preheader.preheader
  %p_Val2_12 = phi i8 [ %p_Val2_s, %.preheader.preheader ], [ %sum_V, %_ifconv ]
  %n = phi i2 [ 0, %.preheader.preheader ], [ %n_2, %_ifconv ]
  %exitcond = icmp eq i2 %n, -1
  %empty_24 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_2 = add i2 %n, 1
  br i1 %exitcond, label %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.loopexit, label %_ifconv

_ifconv:                                          ; preds = %.preheader
  %tmp_27_cast = zext i2 %n to i10
  %tmp_52 = add i10 %tmp_27_cast, %tmp_47
  %tmp_58_cast = zext i10 %tmp_52 to i64
  %weight_V_addr = getelementptr [432 x i8]* %weight_V, i64 0, i64 %tmp_58_cast
  %tmp3 = add i2 %n, -1
  %tmp3_cast = sext i2 %tmp3 to i4
  %tmp_28 = add i4 %tmp3_cast, %w
  %tmp_29_cast = zext i4 %tmp_28 to i14
  %tmp_53 = add i14 %tmp_29_cast, %tmp_51
  %tmp_59_cast = zext i14 %tmp_53 to i64
  %input_V_addr = getelementptr [4800 x i8]* %input_V, i64 0, i64 %tmp_59_cast
  %weight_V_load = load i8* %weight_V_addr, align 1
  %OP1_V = sext i8 %weight_V_load to i16
  %input_V_load = load i8* %input_V_addr, align 1
  %OP2_V = sext i8 %input_V_load to i16
  %p_Val2_1 = mul i16 %OP1_V, %OP2_V
  %tmp_30 = call i14 @_ssdm_op_BitConcatenate.i14.i8.i6(i8 %p_Val2_12, i6 0)
  %tmp_38_cast = sext i14 %tmp_30 to i16
  %p_Val2_13 = add i16 %tmp_38_cast, %p_Val2_1
  %signbit = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_13, i32 15)
  %p_Val2_14 = call i8 @_ssdm_op_PartSelect.i8.i16.i32.i32(i16 %p_Val2_13, i32 6, i32 13)
  %tmp_55 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_1, i32 5)
  %tmp_31 = zext i1 %tmp_55 to i8
  %tmp_56 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_13, i32 13)
  %p_Val2_15 = add i8 %p_Val2_14, %tmp_31
  %newsignbit = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %p_Val2_15, i32 7)
  %tmp_32 = xor i1 %newsignbit, true
  %carry = and i1 %tmp_56, %tmp_32
  %tmp_58 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_13, i32 14)
  %tmp_34 = call i2 @_ssdm_op_PartSelect.i2.i16.i32.i32(i16 %p_Val2_13, i32 14, i32 15)
  %Range1_all_ones = icmp eq i2 %tmp_34, -1
  %Range1_all_zeros = icmp eq i2 %tmp_34, 0
  %deleted_zeros = select i1 %carry, i1 %Range1_all_ones, i1 %Range1_all_zeros
  %tmp_33 = xor i1 %tmp_58, true
  %p_41_i_i = and i1 %signbit, %tmp_33
  %deleted_ones = select i1 %carry, i1 %p_41_i_i, i1 %Range1_all_ones
  %p_38_i_i = and i1 %carry, %Range1_all_ones
  %p_not_i_i = xor i1 %deleted_zeros, true
  %brmerge_i_i2 = or i1 %newsignbit, %p_not_i_i
  %tmp_35 = xor i1 %signbit, true
  %overflow = and i1 %brmerge_i_i2, %tmp_35
  %brmerge40_demorgan_i = and i1 %newsignbit, %deleted_ones
  %tmp4_demorgan = or i1 %p_38_i_i, %brmerge40_demorgan_i
  %tmp4 = xor i1 %tmp4_demorgan, true
  %underflow = and i1 %signbit, %tmp4
  %brmerge_i_i_i = or i1 %underflow, %overflow
  %tmp5 = or i1 %brmerge40_demorgan_i, %tmp_35
  %underflow_not = or i1 %tmp5, %p_38_i_i
  %p_Val2_16_mux = select i1 %brmerge_i_i_i, i8 127, i8 %p_Val2_15
  %p_Val2_s_25 = select i1 %underflow, i8 -128, i8 %p_Val2_15
  %sum_V = select i1 %underflow_not, i8 %p_Val2_16_mux, i8 %p_Val2_s_25
  br label %.preheader

_ifconv1:                                         ; preds = %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i
  %tmp_20 = sext i8 %p_Val2_s to i9
  %p_Val2_9 = load i8* %bias_V_addr, align 1
  %tmp_21 = sext i8 %p_Val2_9 to i9
  %p_Val2_10 = add i9 %tmp_20, %tmp_21
  %isneg = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %p_Val2_10, i32 8)
  %result_V = add i8 %p_Val2_s, %p_Val2_9
  %newsignbit_2 = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %result_V, i32 7)
  %tmp_22 = xor i1 %newsignbit_2, true
  %underflow_2 = and i1 %isneg, %tmp_22
  %brmerge_i_i = xor i1 %isneg, %newsignbit_2
  %isneg_not = xor i1 %isneg, true
  %brmerge9 = or i1 %newsignbit_2, %isneg_not
  %result_V_mux = select i1 %brmerge_i_i, i8 127, i8 %result_V
  %p_result_V = select i1 %underflow_2, i8 -128, i8 %result_V
  %result_1 = select i1 %brmerge9, i8 %result_V_mux, i8 %p_result_V
  %tmp_23_cast = zext i4 %w to i14
  %tmp_44 = add i14 %tmp_43, %tmp_23_cast
  %tmp_50_cast = zext i14 %tmp_44 to i64
  %output_V_addr = getelementptr [4800 x i8]* %output_V, i64 0, i64 %tmp_50_cast
  store i8 %result_1, i8* %output_V_addr, align 1
  %w_2 = add i4 %w, 1
  br label %.preheader46

; <label>:1                                       ; preds = %.preheader46
  %h_2 = add i4 %h, 1
  br label %.preheader47

; <label>:2                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_3x3_4_no_rel([3456 x i8]* nocapture %input_V, [864 x i8]* nocapture %weight_V, [96 x i8]* nocapture %bias_V, [3456 x i8]* nocapture %output_V) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader47
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_3, %.loopexit.loopexit ]
  %exitcond9 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_3 = add i7 %co, 1
  br i1 %exitcond9, label %2, label %.preheader47.preheader

.preheader47.preheader:                           ; preds = %.loopexit
  %tmp = zext i7 %co to i64
  %tmp_cast = zext i7 %co to i10
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0)
  %p_shl1_cast = zext i10 %tmp_s to i11
  %tmp_54 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co, i1 false)
  %p_shl2_cast = zext i8 %tmp_54 to i11
  %tmp_55 = sub i11 %p_shl1_cast, %p_shl2_cast
  %tmp_62_cast = sext i11 %tmp_55 to i12
  %tmp_56 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %co, i2 0)
  %p_shl_cast = zext i9 %tmp_56 to i10
  %tmp_57 = sub i10 %p_shl_cast, %tmp_cast
  %tmp_64_cast = sext i10 %tmp_57 to i11
  %bias_V_addr = getelementptr [96 x i8]* %bias_V, i64 0, i64 %tmp
  br label %.preheader47

.preheader47:                                     ; preds = %1, %.preheader47.preheader
  %h = phi i3 [ %h_3, %1 ], [ 1, %.preheader47.preheader ]
  %exitcond1 = icmp eq i3 %h, -3
  %empty_26 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader46.preheader

.preheader46.preheader:                           ; preds = %.preheader47
  %tmp_cast_27 = zext i3 %h to i12
  %tmp_58 = add i12 %tmp_cast_27, %tmp_62_cast
  %tmp_59 = trunc i12 %tmp_58 to i10
  %p_shl3_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_59, i3 0)
  %p_shl4_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_58, i1 false)
  %tmp_60 = sub i13 %p_shl3_cast, %p_shl4_cast
  br label %.preheader46

.preheader46:                                     ; preds = %_ifconv1, %.preheader46.preheader
  %w = phi i3 [ %w_3, %_ifconv1 ], [ 1, %.preheader46.preheader ]
  %exitcond2 = icmp eq i3 %w, -3
  %empty_28 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %exitcond2, label %1, label %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.preheader

_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.preheader: ; preds = %.preheader46
  br label %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i

_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.loopexit: ; preds = %.preheader
  br label %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i

_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i: ; preds = %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.preheader, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.loopexit
  %p_Val2_s = phi i8 [ %p_Val2_19, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.loopexit ], [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.preheader ]
  %m = phi i2 [ %m_3, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.loopexit ], [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.preheader ]
  %exitcond3 = icmp eq i2 %m, -1
  %empty_29 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_3 = add i2 %m, 1
  br i1 %exitcond3, label %_ifconv1, label %.preheader.preheader

.preheader.preheader:                             ; preds = %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i
  %tmp_40_cast = zext i2 %m to i11
  %tmp_62 = add i11 %tmp_40_cast, %tmp_64_cast
  %tmp_63 = shl i11 %tmp_62, 2
  %tmp_64 = sub i11 %tmp_63, %tmp_62
  %tmp2 = add i2 -1, %m
  %tmp2_cast = sext i2 %tmp2 to i3
  %tmp_41 = add i3 %tmp2_cast, %h
  %tmp_42_cast = zext i3 %tmp_41 to i12
  %tmp_65 = add i12 %tmp_42_cast, %tmp_62_cast
  %tmp_66 = trunc i12 %tmp_65 to i10
  %p_shl5_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_66, i3 0)
  %p_shl6_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_65, i1 false)
  %tmp_67 = sub i13 %p_shl5_cast, %p_shl6_cast
  br label %.preheader

.preheader:                                       ; preds = %_ifconv, %.preheader.preheader
  %p_Val2_19 = phi i8 [ %p_Val2_s, %.preheader.preheader ], [ %sum_V, %_ifconv ]
  %n = phi i2 [ 0, %.preheader.preheader ], [ %n_3, %_ifconv ]
  %exitcond = icmp eq i2 %n, -1
  %empty_30 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_3 = add i2 %n, 1
  br i1 %exitcond, label %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.loopexit, label %_ifconv

_ifconv:                                          ; preds = %.preheader
  %tmp_43_cast = zext i2 %n to i11
  %tmp_68 = add i11 %tmp_43_cast, %tmp_64
  %tmp_77_cast = zext i11 %tmp_68 to i64
  %weight_V_addr = getelementptr [864 x i8]* %weight_V, i64 0, i64 %tmp_77_cast
  %tmp3 = add i2 %n, -1
  %tmp3_cast = sext i2 %tmp3 to i3
  %tmp_44 = add i3 %tmp3_cast, %w
  %tmp_45_cast = zext i3 %tmp_44 to i13
  %tmp_69 = add i13 %tmp_45_cast, %tmp_67
  %tmp_78_cast = zext i13 %tmp_69 to i64
  %input_V_addr = getelementptr [3456 x i8]* %input_V, i64 0, i64 %tmp_78_cast
  %weight_V_load = load i8* %weight_V_addr, align 1
  %OP1_V = sext i8 %weight_V_load to i16
  %input_V_load = load i8* %input_V_addr, align 1
  %OP2_V = sext i8 %input_V_load to i16
  %p_Val2_2 = mul i16 %OP1_V, %OP2_V
  %tmp_46 = call i14 @_ssdm_op_BitConcatenate.i14.i8.i6(i8 %p_Val2_19, i6 0)
  %tmp_60_cast = sext i14 %tmp_46 to i16
  %p_Val2_20 = add i16 %tmp_60_cast, %p_Val2_2
  %signbit = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_20, i32 15)
  %p_Val2_21 = call i8 @_ssdm_op_PartSelect.i8.i16.i32.i32(i16 %p_Val2_20, i32 6, i32 13)
  %tmp_71 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_2, i32 5)
  %tmp_47 = zext i1 %tmp_71 to i8
  %tmp_72 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_20, i32 13)
  %p_Val2_22 = add i8 %p_Val2_21, %tmp_47
  %newsignbit = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %p_Val2_22, i32 7)
  %tmp_48 = xor i1 %newsignbit, true
  %carry = and i1 %tmp_72, %tmp_48
  %tmp_74 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_20, i32 14)
  %tmp_50 = call i2 @_ssdm_op_PartSelect.i2.i16.i32.i32(i16 %p_Val2_20, i32 14, i32 15)
  %Range1_all_ones = icmp eq i2 %tmp_50, -1
  %Range1_all_zeros = icmp eq i2 %tmp_50, 0
  %deleted_zeros = select i1 %carry, i1 %Range1_all_ones, i1 %Range1_all_zeros
  %tmp_49 = xor i1 %tmp_74, true
  %p_41_i_i = and i1 %signbit, %tmp_49
  %deleted_ones = select i1 %carry, i1 %p_41_i_i, i1 %Range1_all_ones
  %p_38_i_i = and i1 %carry, %Range1_all_ones
  %p_not_i_i = xor i1 %deleted_zeros, true
  %brmerge_i_i3 = or i1 %newsignbit, %p_not_i_i
  %tmp_51 = xor i1 %signbit, true
  %overflow = and i1 %brmerge_i_i3, %tmp_51
  %brmerge40_demorgan_i = and i1 %newsignbit, %deleted_ones
  %tmp4_demorgan = or i1 %p_38_i_i, %brmerge40_demorgan_i
  %tmp4 = xor i1 %tmp4_demorgan, true
  %underflow = and i1 %signbit, %tmp4
  %brmerge_i_i_i = or i1 %underflow, %overflow
  %tmp5 = or i1 %brmerge40_demorgan_i, %tmp_51
  %underflow_not = or i1 %tmp5, %p_38_i_i
  %p_Val2_24_mux = select i1 %brmerge_i_i_i, i8 127, i8 %p_Val2_22
  %p_Val2_s_31 = select i1 %underflow, i8 -128, i8 %p_Val2_22
  %sum_V = select i1 %underflow_not, i8 %p_Val2_24_mux, i8 %p_Val2_s_31
  br label %.preheader

_ifconv1:                                         ; preds = %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i
  %tmp_36 = sext i8 %p_Val2_s to i9
  %p_Val2_16 = load i8* %bias_V_addr, align 1
  %tmp_37 = sext i8 %p_Val2_16 to i9
  %p_Val2_17 = add i9 %tmp_36, %tmp_37
  %isneg = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %p_Val2_17, i32 8)
  %result_V = add i8 %p_Val2_s, %p_Val2_16
  %newsignbit_3 = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %result_V, i32 7)
  %tmp_38 = xor i1 %newsignbit_3, true
  %underflow_3 = and i1 %isneg, %tmp_38
  %brmerge_i_i = xor i1 %isneg, %newsignbit_3
  %isneg_not = xor i1 %isneg, true
  %brmerge9 = or i1 %newsignbit_3, %isneg_not
  %result_V_mux = select i1 %brmerge_i_i, i8 127, i8 %result_V
  %p_result_V = select i1 %underflow_3, i8 -128, i8 %result_V
  %result_1 = select i1 %brmerge9, i8 %result_V_mux, i8 %p_result_V
  %tmp_39_cast = zext i3 %w to i13
  %tmp_61 = add i13 %tmp_60, %tmp_39_cast
  %tmp_69_cast = zext i13 %tmp_61 to i64
  %output_V_addr = getelementptr [3456 x i8]* %output_V, i64 0, i64 %tmp_69_cast
  store i8 %result_1, i8* %output_V_addr, align 1
  %w_3 = add i3 %w, 1
  br label %.preheader46

; <label>:1                                       ; preds = %.preheader46
  %h_3 = add i3 %h, 1
  br label %.preheader47

; <label>:2                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_3x3_32_strid([27744 x i8]* nocapture %input_V, [216 x i8]* nocapture %weight_V, [24 x i8]* nocapture %bias_V, [7776 x i8]* nocapture %output_V) {
  br label %.loopexit11

.loopexit11.loopexit:                             ; preds = %.preheader47
  br label %.loopexit11

.loopexit11:                                      ; preds = %.loopexit11.loopexit, %0
  %co = phi i5 [ 0, %0 ], [ %co_4, %.loopexit11.loopexit ]
  %exitcond4 = icmp eq i5 %co, -8
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_4 = add i5 %co, 1
  br i1 %exitcond4, label %2, label %.preheader47.preheader

.preheader47.preheader:                           ; preds = %.loopexit11
  %tmp = zext i5 %co to i64
  %tmp_cast = zext i5 %co to i8
  %tmp_70 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co, i5 0)
  %p_shl3_cast = zext i10 %tmp_70 to i11
  %tmp_71 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co, i1 false)
  %p_shl4_cast1 = zext i6 %tmp_71 to i10
  %p_shl4_cast = zext i6 %tmp_71 to i11
  %tmp_72 = add i11 %p_shl4_cast, %p_shl3_cast
  %tmp_73 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co, i2 0)
  %p_shl2_cast = zext i7 %tmp_73 to i8
  %tmp_74 = sub i8 %p_shl2_cast, %tmp_cast
  %tmp_83_cast = sext i8 %tmp_74 to i9
  %tmp_75 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co, i4 0)
  %p_shl_cast = zext i9 %tmp_75 to i10
  %tmp_76 = add i10 %p_shl4_cast1, %p_shl_cast
  %bias_V_addr = getelementptr [24 x i8]* %bias_V, i64 0, i64 %tmp
  br label %.preheader47

.preheader47:                                     ; preds = %1, %.preheader47.preheader
  %h = phi i5 [ %h_4, %1 ], [ 1, %.preheader47.preheader ]
  %exitcond5 = icmp eq i5 %h, -15
  %empty_32 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond5, label %.loopexit11.loopexit, label %.preheader46.preheader

.preheader46.preheader:                           ; preds = %.preheader47
  %tmp_s = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %h, i1 false)
  %tmp_52_cast = zext i5 %h to i10
  %tmp_77 = add i10 %tmp_76, %tmp_52_cast
  %p_shl5_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_77, i4 0)
  %tmp_78 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_77, i1 false)
  %p_shl6_cast = zext i11 %tmp_78 to i14
  %tmp_79 = add i14 %p_shl6_cast, %p_shl5_cast
  br label %.preheader46

.preheader46:                                     ; preds = %_ifconv1, %.preheader46.preheader
  %w = phi i5 [ %w_4, %_ifconv1 ], [ 1, %.preheader46.preheader ]
  %exitcond6 = icmp eq i5 %w, -15
  %empty_33 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond6, label %1, label %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i

_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i: ; preds = %.preheader46
  %tmp_53 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %w, i1 false)
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i
  %p_Val2_s = phi i8 [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i ], [ %p_Val2_26, %.loopexit.loopexit ]
  %m = phi i2 [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i ], [ %m_4, %.loopexit.loopexit ]
  %exitcond7 = icmp eq i2 %m, -1
  %empty_34 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_4 = add i2 %m, 1
  br i1 %exitcond7, label %_ifconv1, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.loopexit
  %tmp_58_cast = zext i2 %m to i9
  %tmp_81 = add i9 %tmp_83_cast, %tmp_58_cast
  %tmp_82 = shl i9 %tmp_81, 2
  %tmp_83 = sub i9 %tmp_82, %tmp_81
  %tmp2 = xor i2 %m, -2
  %tmp2_cast = sext i2 %tmp2 to i6
  %tmp_59 = add i6 %tmp_s, %tmp2_cast
  %tmp_60_cast = zext i6 %tmp_59 to i11
  %tmp_84 = add i11 %tmp_72, %tmp_60_cast
  %p_shl7_cast = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_84, i5 0)
  %tmp_85 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_84, i1 false)
  %p_shl8_cast = zext i12 %tmp_85 to i16
  %tmp_86 = add i16 %p_shl8_cast, %p_shl7_cast
  br label %.preheader

.preheader:                                       ; preds = %_ifconv, %.preheader.preheader
  %p_Val2_26 = phi i8 [ %p_Val2_s, %.preheader.preheader ], [ %sum_V, %_ifconv ]
  %n = phi i2 [ 0, %.preheader.preheader ], [ %n_4, %_ifconv ]
  %exitcond = icmp eq i2 %n, -1
  %empty_35 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_4 = add i2 %n, 1
  br i1 %exitcond, label %.loopexit.loopexit, label %_ifconv

_ifconv:                                          ; preds = %.preheader
  %tmp_61_cast = zext i2 %n to i9
  %tmp_87 = add i9 %tmp_61_cast, %tmp_83
  %tmp_99_cast = zext i9 %tmp_87 to i64
  %weight_V_addr = getelementptr [216 x i8]* %weight_V, i64 0, i64 %tmp_99_cast
  %tmp3 = xor i2 %n, -2
  %tmp3_cast = sext i2 %tmp3 to i6
  %tmp_62 = add i6 %tmp3_cast, %tmp_53
  %tmp_63_cast = zext i6 %tmp_62 to i16
  %tmp_88 = add i16 %tmp_63_cast, %tmp_86
  %tmp_100_cast = zext i16 %tmp_88 to i64
  %input_V_addr = getelementptr [27744 x i8]* %input_V, i64 0, i64 %tmp_100_cast
  %weight_V_load = load i8* %weight_V_addr, align 1
  %OP1_V = sext i8 %weight_V_load to i16
  %input_V_load = load i8* %input_V_addr, align 1
  %OP2_V = sext i8 %input_V_load to i16
  %p_Val2_3 = mul i16 %OP1_V, %OP2_V
  %tmp_64 = call i14 @_ssdm_op_BitConcatenate.i14.i8.i6(i8 %p_Val2_26, i6 0)
  %tmp_84_cast = sext i14 %tmp_64 to i16
  %p_Val2_27 = add i16 %tmp_84_cast, %p_Val2_3
  %signbit = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_27, i32 15)
  %p_Val2_28 = call i8 @_ssdm_op_PartSelect.i8.i16.i32.i32(i16 %p_Val2_27, i32 6, i32 13)
  %tmp_90 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_3, i32 5)
  %tmp_65 = zext i1 %tmp_90 to i8
  %tmp_91 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_27, i32 13)
  %p_Val2_29 = add i8 %p_Val2_28, %tmp_65
  %newsignbit = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %p_Val2_29, i32 7)
  %tmp_66 = xor i1 %newsignbit, true
  %carry = and i1 %tmp_91, %tmp_66
  %tmp_93 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_27, i32 14)
  %tmp_68 = call i2 @_ssdm_op_PartSelect.i2.i16.i32.i32(i16 %p_Val2_27, i32 14, i32 15)
  %Range1_all_ones = icmp eq i2 %tmp_68, -1
  %Range1_all_zeros = icmp eq i2 %tmp_68, 0
  %deleted_zeros = select i1 %carry, i1 %Range1_all_ones, i1 %Range1_all_zeros
  %tmp_67 = xor i1 %tmp_93, true
  %p_41_i_i = and i1 %signbit, %tmp_67
  %deleted_ones = select i1 %carry, i1 %p_41_i_i, i1 %Range1_all_ones
  %p_38_i_i = and i1 %carry, %Range1_all_ones
  %p_not_i_i = xor i1 %deleted_zeros, true
  %brmerge_i_i4 = or i1 %newsignbit, %p_not_i_i
  %tmp_69 = xor i1 %signbit, true
  %overflow = and i1 %brmerge_i_i4, %tmp_69
  %brmerge40_demorgan_i = and i1 %newsignbit, %deleted_ones
  %tmp4_demorgan = or i1 %p_38_i_i, %brmerge40_demorgan_i
  %tmp4 = xor i1 %tmp4_demorgan, true
  %underflow = and i1 %signbit, %tmp4
  %brmerge_i_i_i = or i1 %underflow, %overflow
  %tmp5 = or i1 %brmerge40_demorgan_i, %tmp_69
  %underflow_not = or i1 %tmp5, %p_38_i_i
  %p_Val2_32_mux = select i1 %brmerge_i_i_i, i8 127, i8 %p_Val2_29
  %p_Val2_s_36 = select i1 %underflow, i8 -128, i8 %p_Val2_29
  %sum_V = select i1 %underflow_not, i8 %p_Val2_32_mux, i8 %p_Val2_s_36
  br label %.preheader

_ifconv1:                                         ; preds = %.loopexit
  %tmp_54 = sext i8 %p_Val2_s to i9
  %p_Val2_23 = load i8* %bias_V_addr, align 1
  %tmp_55 = sext i8 %p_Val2_23 to i9
  %p_Val2_24 = add i9 %tmp_54, %tmp_55
  %isneg = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %p_Val2_24, i32 8)
  %result_V = add i8 %p_Val2_s, %p_Val2_23
  %newsignbit_4 = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %result_V, i32 7)
  %tmp_56 = xor i1 %newsignbit_4, true
  %underflow_4 = and i1 %isneg, %tmp_56
  %brmerge_i_i = xor i1 %isneg, %newsignbit_4
  %isneg_not = xor i1 %isneg, true
  %brmerge9 = or i1 %newsignbit_4, %isneg_not
  %result_V_mux = select i1 %brmerge_i_i, i8 127, i8 %result_V
  %p_result_V = select i1 %underflow_4, i8 -128, i8 %result_V
  %result_1 = select i1 %brmerge9, i8 %result_V_mux, i8 %p_result_V
  %tmp_57_cast = zext i5 %w to i14
  %tmp_80 = add i14 %tmp_79, %tmp_57_cast
  %tmp_91_cast = zext i14 %tmp_80 to i64
  %output_V_addr = getelementptr [7776 x i8]* %output_V, i64 0, i64 %tmp_91_cast
  store i8 %result_1, i8* %output_V_addr, align 1
  %w_4 = add i5 %w, 1
  br label %.preheader46

; <label>:1                                       ; preds = %.preheader46
  %h_4 = add i5 %h, 1
  br label %.preheader47

; <label>:2                                       ; preds = %.loopexit11
  ret void
}

define internal fastcc void @subconv_3x3_16_strid([15552 x i8]* nocapture %input_V, [432 x i8]* nocapture %weight_V, [48 x i8]* nocapture %bias_V, [4800 x i8]* nocapture %output_V) {
  br label %.loopexit11

.loopexit11.loopexit:                             ; preds = %.preheader47
  br label %.loopexit11

.loopexit11:                                      ; preds = %.loopexit11.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_5, %.loopexit11.loopexit ]
  %exitcond8 = icmp eq i6 %co, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_5 = add i6 %co, 1
  br i1 %exitcond8, label %2, label %.preheader47.preheader

.preheader47.preheader:                           ; preds = %.loopexit11
  %tmp = zext i6 %co to i64
  %tmp_cast = zext i6 %co to i9
  %tmp_89 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co, i4 0)
  %p_shl3_cast = zext i10 %tmp_89 to i11
  %tmp_90 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co, i1 false)
  %p_shl4_cast2 = zext i7 %tmp_90 to i10
  %p_shl4_cast = zext i7 %tmp_90 to i11
  %tmp_91 = add i11 %p_shl4_cast, %p_shl3_cast
  %tmp_92 = call i8 @_ssdm_op_BitConcatenate.i8.i6.i2(i6 %co, i2 0)
  %p_shl2_cast = zext i8 %tmp_92 to i9
  %tmp_93 = sub i9 %p_shl2_cast, %tmp_cast
  %tmp_105_cast = sext i9 %tmp_93 to i10
  %tmp_94 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co, i3 0)
  %p_shl_cast = zext i9 %tmp_94 to i10
  %tmp_95 = add i10 %p_shl4_cast2, %p_shl_cast
  %bias_V_addr = getelementptr [48 x i8]* %bias_V, i64 0, i64 %tmp
  br label %.preheader47

.preheader47:                                     ; preds = %1, %.preheader47.preheader
  %h = phi i4 [ %h_5, %1 ], [ 1, %.preheader47.preheader ]
  %exitcond9 = icmp eq i4 %h, -7
  %empty_37 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond9, label %.loopexit11.loopexit, label %.preheader46.preheader

.preheader46.preheader:                           ; preds = %.preheader47
  %tmp_s = call i5 @_ssdm_op_BitConcatenate.i5.i4.i1(i4 %h, i1 false)
  %tmp_70_cast = zext i4 %h to i10
  %tmp_96 = add i10 %tmp_95, %tmp_70_cast
  %tmp_97 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_96, i3 0)
  %p_shl5_cast = zext i13 %tmp_97 to i14
  %tmp_98 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_96, i1 false)
  %p_shl6_cast = zext i11 %tmp_98 to i14
  %tmp_99 = add i14 %p_shl6_cast, %p_shl5_cast
  br label %.preheader46

.preheader46:                                     ; preds = %_ifconv1, %.preheader46.preheader
  %w = phi i4 [ %w_5, %_ifconv1 ], [ 1, %.preheader46.preheader ]
  %exitcond1 = icmp eq i4 %w, -7
  %empty_38 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond1, label %1, label %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i

_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i: ; preds = %.preheader46
  %tmp_71 = call i5 @_ssdm_op_BitConcatenate.i5.i4.i1(i4 %w, i1 false)
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i
  %p_Val2_s = phi i8 [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i ], [ %p_Val2_33, %.loopexit.loopexit ]
  %m = phi i2 [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i ], [ %m_5, %.loopexit.loopexit ]
  %exitcond2 = icmp eq i2 %m, -1
  %empty_39 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_5 = add i2 %m, 1
  br i1 %exitcond2, label %_ifconv1, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.loopexit
  %tmp_76_cast = zext i2 %m to i10
  %tmp_101 = add i10 %tmp_105_cast, %tmp_76_cast
  %tmp_102 = shl i10 %tmp_101, 2
  %tmp_103 = sub i10 %tmp_102, %tmp_101
  %tmp2 = xor i2 %m, -2
  %tmp2_cast = sext i2 %tmp2 to i5
  %tmp_77 = add i5 %tmp_s, %tmp2_cast
  %tmp_78_cast = zext i5 %tmp_77 to i11
  %tmp_104 = add i11 %tmp_91, %tmp_78_cast
  %p_shl7_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_104, i4 0)
  %tmp_105 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_104, i1 false)
  %p_shl8_cast = zext i12 %tmp_105 to i15
  %tmp_106 = add i15 %p_shl8_cast, %p_shl7_cast
  br label %.preheader

.preheader:                                       ; preds = %_ifconv, %.preheader.preheader
  %p_Val2_33 = phi i8 [ %p_Val2_s, %.preheader.preheader ], [ %sum_V, %_ifconv ]
  %n = phi i2 [ 0, %.preheader.preheader ], [ %n_5, %_ifconv ]
  %exitcond = icmp eq i2 %n, -1
  %empty_40 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_5 = add i2 %n, 1
  br i1 %exitcond, label %.loopexit.loopexit, label %_ifconv

_ifconv:                                          ; preds = %.preheader
  %tmp_79_cast = zext i2 %n to i10
  %tmp_107 = add i10 %tmp_79_cast, %tmp_103
  %tmp_121_cast = zext i10 %tmp_107 to i64
  %weight_V_addr = getelementptr [432 x i8]* %weight_V, i64 0, i64 %tmp_121_cast
  %tmp3 = xor i2 %n, -2
  %tmp3_cast = sext i2 %tmp3 to i5
  %tmp_80 = add i5 %tmp3_cast, %tmp_71
  %tmp_81_cast = zext i5 %tmp_80 to i15
  %tmp_108 = add i15 %tmp_81_cast, %tmp_106
  %tmp_122_cast = zext i15 %tmp_108 to i64
  %input_V_addr = getelementptr [15552 x i8]* %input_V, i64 0, i64 %tmp_122_cast
  %weight_V_load = load i8* %weight_V_addr, align 1
  %OP1_V = sext i8 %weight_V_load to i16
  %input_V_load = load i8* %input_V_addr, align 1
  %OP2_V = sext i8 %input_V_load to i16
  %p_Val2_4 = mul i16 %OP1_V, %OP2_V
  %tmp_82 = call i14 @_ssdm_op_BitConcatenate.i14.i8.i6(i8 %p_Val2_33, i6 0)
  %tmp_108_cast = sext i14 %tmp_82 to i16
  %p_Val2_34 = add i16 %tmp_108_cast, %p_Val2_4
  %signbit = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_34, i32 15)
  %p_Val2_35 = call i8 @_ssdm_op_PartSelect.i8.i16.i32.i32(i16 %p_Val2_34, i32 6, i32 13)
  %tmp_110 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_4, i32 5)
  %tmp_83 = zext i1 %tmp_110 to i8
  %tmp_111 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_34, i32 13)
  %p_Val2_36 = add i8 %p_Val2_35, %tmp_83
  %newsignbit = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %p_Val2_36, i32 7)
  %tmp_84 = xor i1 %newsignbit, true
  %carry = and i1 %tmp_111, %tmp_84
  %tmp_113 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_34, i32 14)
  %tmp_86 = call i2 @_ssdm_op_PartSelect.i2.i16.i32.i32(i16 %p_Val2_34, i32 14, i32 15)
  %Range1_all_ones = icmp eq i2 %tmp_86, -1
  %Range1_all_zeros = icmp eq i2 %tmp_86, 0
  %deleted_zeros = select i1 %carry, i1 %Range1_all_ones, i1 %Range1_all_zeros
  %tmp_85 = xor i1 %tmp_113, true
  %p_41_i_i = and i1 %signbit, %tmp_85
  %deleted_ones = select i1 %carry, i1 %p_41_i_i, i1 %Range1_all_ones
  %p_38_i_i = and i1 %carry, %Range1_all_ones
  %p_not_i_i = xor i1 %deleted_zeros, true
  %brmerge_i_i5 = or i1 %newsignbit, %p_not_i_i
  %tmp_87 = xor i1 %signbit, true
  %overflow = and i1 %brmerge_i_i5, %tmp_87
  %brmerge40_demorgan_i = and i1 %newsignbit, %deleted_ones
  %tmp4_demorgan = or i1 %p_38_i_i, %brmerge40_demorgan_i
  %tmp4 = xor i1 %tmp4_demorgan, true
  %underflow = and i1 %signbit, %tmp4
  %brmerge_i_i_i = or i1 %underflow, %overflow
  %tmp5 = or i1 %brmerge40_demorgan_i, %tmp_87
  %underflow_not = or i1 %tmp5, %p_38_i_i
  %p_Val2_40_mux = select i1 %brmerge_i_i_i, i8 127, i8 %p_Val2_36
  %p_Val2_s_41 = select i1 %underflow, i8 -128, i8 %p_Val2_36
  %sum_V = select i1 %underflow_not, i8 %p_Val2_40_mux, i8 %p_Val2_s_41
  br label %.preheader

_ifconv1:                                         ; preds = %.loopexit
  %tmp_72 = sext i8 %p_Val2_s to i9
  %p_Val2_30 = load i8* %bias_V_addr, align 1
  %tmp_73 = sext i8 %p_Val2_30 to i9
  %p_Val2_31 = add i9 %tmp_72, %tmp_73
  %isneg = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %p_Val2_31, i32 8)
  %result_V = add i8 %p_Val2_s, %p_Val2_30
  %newsignbit_5 = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %result_V, i32 7)
  %tmp_74 = xor i1 %newsignbit_5, true
  %underflow_5 = and i1 %isneg, %tmp_74
  %brmerge_i_i = xor i1 %isneg, %newsignbit_5
  %isneg_not = xor i1 %isneg, true
  %brmerge9 = or i1 %newsignbit_5, %isneg_not
  %result_V_mux = select i1 %brmerge_i_i, i8 127, i8 %result_V
  %p_result_V = select i1 %underflow_5, i8 -128, i8 %result_V
  %result_1 = select i1 %brmerge9, i8 %result_V_mux, i8 %p_result_V
  %tmp_75_cast = zext i4 %w to i14
  %tmp_100 = add i14 %tmp_99, %tmp_75_cast
  %tmp_113_cast = zext i14 %tmp_100 to i64
  %output_V_addr = getelementptr [4800 x i8]* %output_V, i64 0, i64 %tmp_113_cast
  store i8 %result_1, i8* %output_V_addr, align 1
  %w_5 = add i4 %w, 1
  br label %.preheader46

; <label>:1                                       ; preds = %.preheader46
  %h_5 = add i4 %h, 1
  br label %.preheader47

; <label>:2                                       ; preds = %.loopexit11
  ret void
}

define internal fastcc void @subconv_3x3_16_no_re([7776 x i8]* nocapture %input_V, [216 x i8]* nocapture %weight_V, [24 x i8]* nocapture %bias_V, [7776 x i8]* nocapture %output_V) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader47
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i5 [ 0, %0 ], [ %co_6, %.loopexit.loopexit ]
  %exitcond3 = icmp eq i5 %co, -8
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_6 = add i5 %co, 1
  br i1 %exitcond3, label %2, label %.preheader47.preheader

.preheader47.preheader:                           ; preds = %.loopexit
  %tmp = zext i5 %co to i64
  %tmp_cast = zext i5 %co to i8
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co, i4 0)
  %p_shl1_cast = zext i9 %tmp_s to i10
  %tmp_109 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co, i1 false)
  %p_shl2_cast = zext i6 %tmp_109 to i10
  %tmp_110 = add i10 %p_shl2_cast, %p_shl1_cast
  %tmp_111 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co, i2 0)
  %p_shl_cast = zext i7 %tmp_111 to i8
  %tmp_112 = sub i8 %p_shl_cast, %tmp_cast
  %tmp_127_cast = sext i8 %tmp_112 to i9
  %bias_V_addr = getelementptr [24 x i8]* %bias_V, i64 0, i64 %tmp
  br label %.preheader47

.preheader47:                                     ; preds = %1, %.preheader47.preheader
  %h = phi i5 [ %h_6, %1 ], [ 1, %.preheader47.preheader ]
  %exitcond4 = icmp eq i5 %h, -15
  %empty_42 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond4, label %.loopexit.loopexit, label %.preheader46.preheader

.preheader46.preheader:                           ; preds = %.preheader47
  %tmp_cast_43 = zext i5 %h to i10
  %tmp_113 = add i10 %tmp_cast_43, %tmp_110
  %p_shl3_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_113, i4 0)
  %tmp_114 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_113, i1 false)
  %p_shl4_cast = zext i11 %tmp_114 to i14
  %tmp_115 = add i14 %p_shl3_cast, %p_shl4_cast
  br label %.preheader46

.preheader46:                                     ; preds = %_ifconv1, %.preheader46.preheader
  %w = phi i5 [ %w_6, %_ifconv1 ], [ 1, %.preheader46.preheader ]
  %exitcond5 = icmp eq i5 %w, -15
  %empty_44 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond5, label %1, label %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.preheader

_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.preheader: ; preds = %.preheader46
  br label %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i

_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.loopexit: ; preds = %.preheader
  br label %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i

_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i: ; preds = %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.preheader, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.loopexit
  %p_Val2_s = phi i8 [ %p_Val2_40, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.loopexit ], [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.preheader ]
  %m = phi i2 [ %m_6, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.loopexit ], [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.preheader ]
  %exitcond6 = icmp eq i2 %m, -1
  %empty_45 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_6 = add i2 %m, 1
  br i1 %exitcond6, label %_ifconv1, label %.preheader.preheader

.preheader.preheader:                             ; preds = %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i
  %tmp_92_cast = zext i2 %m to i9
  %tmp_117 = add i9 %tmp_127_cast, %tmp_92_cast
  %tmp_118 = shl i9 %tmp_117, 2
  %tmp_119 = sub i9 %tmp_118, %tmp_117
  %tmp2 = add i2 -1, %m
  %tmp2_cast = sext i2 %tmp2 to i5
  %tmp_93 = add i5 %h, %tmp2_cast
  %tmp_94_cast = zext i5 %tmp_93 to i10
  %tmp_120 = add i10 %tmp_110, %tmp_94_cast
  %p_shl5_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_120, i4 0)
  %tmp_121 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_120, i1 false)
  %p_shl6_cast = zext i11 %tmp_121 to i14
  %tmp_122 = add i14 %p_shl6_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %_ifconv, %.preheader.preheader
  %p_Val2_40 = phi i8 [ %p_Val2_s, %.preheader.preheader ], [ %sum_V, %_ifconv ]
  %n = phi i2 [ 0, %.preheader.preheader ], [ %n_6, %_ifconv ]
  %exitcond = icmp eq i2 %n, -1
  %empty_46 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_6 = add i2 %n, 1
  br i1 %exitcond, label %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i.loopexit, label %_ifconv

_ifconv:                                          ; preds = %.preheader
  %tmp_95_cast = zext i2 %n to i9
  %tmp_123 = add i9 %tmp_95_cast, %tmp_119
  %tmp_140_cast = zext i9 %tmp_123 to i64
  %weight_V_addr = getelementptr [216 x i8]* %weight_V, i64 0, i64 %tmp_140_cast
  %tmp3 = add i2 %n, -1
  %tmp3_cast = sext i2 %tmp3 to i5
  %tmp_96 = add i5 %tmp3_cast, %w
  %tmp_97_cast = zext i5 %tmp_96 to i14
  %tmp_124 = add i14 %tmp_97_cast, %tmp_122
  %tmp_141_cast = zext i14 %tmp_124 to i64
  %input_V_addr = getelementptr [7776 x i8]* %input_V, i64 0, i64 %tmp_141_cast
  %weight_V_load = load i8* %weight_V_addr, align 1
  %OP1_V = sext i8 %weight_V_load to i16
  %input_V_load = load i8* %input_V_addr, align 1
  %OP2_V = sext i8 %input_V_load to i16
  %p_Val2_5 = mul i16 %OP1_V, %OP2_V
  %tmp_98 = call i14 @_ssdm_op_BitConcatenate.i14.i8.i6(i8 %p_Val2_40, i6 0)
  %tmp_130_cast = sext i14 %tmp_98 to i16
  %p_Val2_41 = add i16 %tmp_130_cast, %p_Val2_5
  %signbit = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_41, i32 15)
  %p_Val2_42 = call i8 @_ssdm_op_PartSelect.i8.i16.i32.i32(i16 %p_Val2_41, i32 6, i32 13)
  %tmp_126 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_5, i32 5)
  %tmp_99 = zext i1 %tmp_126 to i8
  %tmp_127 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_41, i32 13)
  %p_Val2_43 = add i8 %p_Val2_42, %tmp_99
  %newsignbit = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %p_Val2_43, i32 7)
  %tmp_100 = xor i1 %newsignbit, true
  %carry = and i1 %tmp_127, %tmp_100
  %tmp_129 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_41, i32 14)
  %tmp_102 = call i2 @_ssdm_op_PartSelect.i2.i16.i32.i32(i16 %p_Val2_41, i32 14, i32 15)
  %Range1_all_ones = icmp eq i2 %tmp_102, -1
  %Range1_all_zeros = icmp eq i2 %tmp_102, 0
  %deleted_zeros = select i1 %carry, i1 %Range1_all_ones, i1 %Range1_all_zeros
  %tmp_101 = xor i1 %tmp_129, true
  %p_41_i_i = and i1 %signbit, %tmp_101
  %deleted_ones = select i1 %carry, i1 %p_41_i_i, i1 %Range1_all_ones
  %p_38_i_i = and i1 %carry, %Range1_all_ones
  %p_not_i_i = xor i1 %deleted_zeros, true
  %brmerge_i_i6 = or i1 %newsignbit, %p_not_i_i
  %tmp_103 = xor i1 %signbit, true
  %overflow = and i1 %brmerge_i_i6, %tmp_103
  %brmerge40_demorgan_i = and i1 %newsignbit, %deleted_ones
  %tmp4_demorgan = or i1 %p_38_i_i, %brmerge40_demorgan_i
  %tmp4 = xor i1 %tmp4_demorgan, true
  %underflow = and i1 %signbit, %tmp4
  %brmerge_i_i_i = or i1 %underflow, %overflow
  %tmp5 = or i1 %brmerge40_demorgan_i, %tmp_103
  %underflow_not = or i1 %tmp5, %p_38_i_i
  %p_Val2_48_mux = select i1 %brmerge_i_i_i, i8 127, i8 %p_Val2_43
  %p_Val2_s_47 = select i1 %underflow, i8 -128, i8 %p_Val2_43
  %sum_V = select i1 %underflow_not, i8 %p_Val2_48_mux, i8 %p_Val2_s_47
  br label %.preheader

_ifconv1:                                         ; preds = %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i
  %tmp_88 = sext i8 %p_Val2_s to i9
  %p_Val2_37 = load i8* %bias_V_addr, align 1
  %tmp_89 = sext i8 %p_Val2_37 to i9
  %p_Val2_38 = add i9 %tmp_88, %tmp_89
  %isneg = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %p_Val2_38, i32 8)
  %result_V = add i8 %p_Val2_s, %p_Val2_37
  %newsignbit_6 = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %result_V, i32 7)
  %tmp_90 = xor i1 %newsignbit_6, true
  %underflow_6 = and i1 %isneg, %tmp_90
  %brmerge_i_i = xor i1 %isneg, %newsignbit_6
  %isneg_not = xor i1 %isneg, true
  %brmerge9 = or i1 %newsignbit_6, %isneg_not
  %result_V_mux = select i1 %brmerge_i_i, i8 127, i8 %result_V
  %p_result_V = select i1 %underflow_6, i8 -128, i8 %result_V
  %result_1 = select i1 %brmerge9, i8 %result_V_mux, i8 %p_result_V
  %tmp_91_cast = zext i5 %w to i14
  %tmp_116 = add i14 %tmp_115, %tmp_91_cast
  %tmp_132_cast = zext i14 %tmp_116 to i64
  %output_V_addr = getelementptr [7776 x i8]* %output_V, i64 0, i64 %tmp_132_cast
  store i8 %result_1, i8* %output_V_addr, align 1
  %w_6 = add i5 %w, 1
  br label %.preheader46

; <label>:1                                       ; preds = %.preheader46
  %h_6 = add i5 %h, 1
  br label %.preheader47

; <label>:2                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_1x1_8p_p([9216 x i8]* nocapture %weight_V, [96 x i8]* nocapture %bias_V) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader61
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_7, %.loopexit.loopexit ]
  %exitcond7 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_7 = add i7 %co, 1
  br i1 %exitcond7, label %3, label %.preheader61.preheader

.preheader61.preheader:                           ; preds = %.loopexit
  %tmp = zext i7 %co to i64
  %tmp_s = call i14 @_ssdm_op_BitConcatenate.i14.i7.i7(i7 %co, i7 0)
  %p_shl2_cast = zext i14 %tmp_s to i15
  %tmp_125 = call i12 @_ssdm_op_BitConcatenate.i12.i7.i5(i7 %co, i5 0)
  %p_shl3_cast = zext i12 %tmp_125 to i15
  %tmp_126 = sub i15 %p_shl2_cast, %p_shl3_cast
  %tmp_127 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0)
  %p_shl_cast = zext i10 %tmp_127 to i11
  %tmp_128 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co, i1 false)
  %p_shl1_cast = zext i8 %tmp_128 to i11
  %tmp_129 = add i11 %p_shl1_cast, %p_shl_cast
  %bias_V_addr = getelementptr [96 x i8]* %bias_V, i64 0, i64 %tmp
  br label %.preheader61

.preheader61:                                     ; preds = %2, %.preheader61.preheader
  %h = phi i4 [ %h_7, %2 ], [ 1, %.preheader61.preheader ]
  %exitcond8 = icmp eq i4 %h, -7
  %empty_48 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond8, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader61
  %tmp_cast = zext i4 %h to i11
  %tmp_130 = add i11 %tmp_cast, %tmp_129
  %tmp_131 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_130, i3 0)
  %p_shl4_cast = zext i14 %tmp_131 to i15
  %tmp_132 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_130, i1 false)
  %p_shl5_cast = zext i12 %tmp_132 to i15
  %tmp_133 = add i15 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %_ifconv1, %.preheader.preheader
  %w = phi i4 [ %w_7, %_ifconv1 ], [ 1, %.preheader.preheader ]
  %exitcond9 = icmp eq i4 %w, -7
  %empty_49 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond9, label %2, label %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78

_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78: ; preds = %.preheader
  %tmp_104_cast = zext i4 %w to i15
  %tmp_134 = add i15 %tmp_133, %tmp_104_cast
  %tmp_152_cast = zext i15 %tmp_134 to i64
  %ShuffleConvs_2_Downs = getelementptr [9600 x i8]* @ShuffleConvs_2_Downs, i64 0, i64 %tmp_152_cast
  br label %1

; <label>:1                                       ; preds = %_ifconv, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78
  %p_Val2_s = phi i8 [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78 ], [ %sum_V, %_ifconv ]
  %ci = phi i7 [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78 ], [ %ci_1, %_ifconv ]
  %exitcond = icmp eq i7 %ci, -32
  %empty_50 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %ci_1 = add i7 %ci, 1
  br i1 %exitcond, label %_ifconv1, label %_ifconv

_ifconv:                                          ; preds = %1
  %tmp_109_cast = zext i7 %ci to i15
  %tmp_135 = add i15 %tmp_109_cast, %tmp_126
  %tmp_153_cast = sext i15 %tmp_135 to i64
  %weight_V_addr = getelementptr [9216 x i8]* %weight_V, i64 0, i64 %tmp_153_cast
  %tmp_136 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %ci, i3 0)
  %p_shl8_cast = zext i10 %tmp_136 to i11
  %tmp_138 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %ci, i1 false)
  %p_shl9_cast = zext i8 %tmp_138 to i11
  %tmp_139 = add i11 %p_shl8_cast, %p_shl9_cast
  %tmp_140 = add i11 %tmp_cast, %tmp_139
  %tmp_141 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_140, i3 0)
  %p_shl6_cast = zext i14 %tmp_141 to i15
  %tmp_142 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_140, i1 false)
  %p_shl7_cast = zext i12 %tmp_142 to i15
  %tmp_143 = add i15 %p_shl6_cast, %p_shl7_cast
  %tmp_144 = add i15 %tmp_104_cast, %tmp_143
  %tmp_161_cast = zext i15 %tmp_144 to i64
  %shuffleunit1_7_outpu = getelementptr [9600 x i8]* @shuffleunit1_7_outpu, i64 0, i64 %tmp_161_cast
  %weight_V_load = load i8* %weight_V_addr, align 1
  %OP1_V = sext i8 %weight_V_load to i16
  %shuffleunit1_7_outpu_1 = load i8* %shuffleunit1_7_outpu, align 1
  %OP2_V = sext i8 %shuffleunit1_7_outpu_1 to i16
  %p_Val2_47 = mul i16 %OP1_V, %OP2_V
  %tmp_110 = call i14 @_ssdm_op_BitConcatenate.i14.i8.i6(i8 %p_Val2_s, i6 0)
  %tmp_144_cast = sext i14 %tmp_110 to i16
  %p_Val2_48 = add i16 %tmp_144_cast, %p_Val2_47
  %signbit = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_48, i32 15)
  %p_Val2_49 = call i8 @_ssdm_op_PartSelect.i8.i16.i32.i32(i16 %p_Val2_48, i32 6, i32 13)
  %tmp_146 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_47, i32 5)
  %tmp_111 = zext i1 %tmp_146 to i8
  %tmp_147 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_48, i32 13)
  %p_Val2_50 = add i8 %p_Val2_49, %tmp_111
  %newsignbit = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %p_Val2_50, i32 7)
  %tmp_112 = xor i1 %newsignbit, true
  %carry = and i1 %tmp_147, %tmp_112
  %tmp_149 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_48, i32 14)
  %tmp_114 = call i2 @_ssdm_op_PartSelect.i2.i16.i32.i32(i16 %p_Val2_48, i32 14, i32 15)
  %Range1_all_ones = icmp eq i2 %tmp_114, -1
  %Range1_all_zeros = icmp eq i2 %tmp_114, 0
  %deleted_zeros = select i1 %carry, i1 %Range1_all_ones, i1 %Range1_all_zeros
  %tmp_113 = xor i1 %tmp_149, true
  %p_41_i_i = and i1 %signbit, %tmp_113
  %deleted_ones = select i1 %carry, i1 %p_41_i_i, i1 %Range1_all_ones
  %p_38_i_i = and i1 %carry, %Range1_all_ones
  %p_not_i_i = xor i1 %deleted_zeros, true
  %brmerge_i_i7 = or i1 %newsignbit, %p_not_i_i
  %tmp_115 = xor i1 %signbit, true
  %overflow = and i1 %brmerge_i_i7, %tmp_115
  %brmerge40_demorgan_i = and i1 %newsignbit, %deleted_ones
  %tmp2_demorgan = or i1 %p_38_i_i, %brmerge40_demorgan_i
  %tmp2 = xor i1 %tmp2_demorgan, true
  %underflow = and i1 %signbit, %tmp2
  %brmerge_i_i_i = or i1 %underflow, %overflow
  %tmp3 = or i1 %brmerge40_demorgan_i, %tmp_115
  %underflow_not = or i1 %tmp3, %p_38_i_i
  %p_Val2_55_mux = select i1 %brmerge_i_i_i, i8 127, i8 %p_Val2_50
  %p_Val2_s_51 = select i1 %underflow, i8 -128, i8 %p_Val2_50
  %sum_V = select i1 %underflow_not, i8 %p_Val2_55_mux, i8 %p_Val2_s_51
  br label %1

_ifconv1:                                         ; preds = %1
  %tmp_105 = sext i8 %p_Val2_s to i9
  %p_Val2_44 = load i8* %bias_V_addr, align 1
  %tmp_106 = sext i8 %p_Val2_44 to i9
  %p_Val2_45 = add i9 %tmp_106, %tmp_105
  %isneg = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %p_Val2_45, i32 8)
  %result_V = add i8 %p_Val2_44, %p_Val2_s
  %newsignbit_7 = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %result_V, i32 7)
  %tmp_107 = xor i1 %newsignbit_7, true
  %underflow_7 = and i1 %isneg, %tmp_107
  %brmerge_i_i = xor i1 %isneg, %newsignbit_7
  %isneg_not = xor i1 %isneg, true
  %brmerge9 = or i1 %newsignbit_7, %isneg_not
  %result_V_mux = select i1 %brmerge_i_i, i8 127, i8 %result_V
  %p_result_V = select i1 %underflow_7, i8 -128, i8 %result_V
  %result_1 = select i1 %brmerge9, i8 %result_V_mux, i8 %p_result_V
  %tmp_137 = trunc i8 %result_1 to i7
  %tmp_108 = icmp sgt i8 %result_1, 0
  %p_s = select i1 %tmp_108, i7 %tmp_137, i7 0
  %p_cast = zext i7 %p_s to i8
  store i8 %p_cast, i8* %ShuffleConvs_2_Downs, align 1
  %w_7 = add i4 1, %w
  br label %.preheader

; <label>:2                                       ; preds = %.preheader
  %h_7 = add i4 %h, 1
  br label %.preheader61

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_1x1_8_p([4800 x i8]* nocapture %input_V, [2304 x i8]* nocapture %weight_V, [48 x i8]* nocapture %bias_V, [4800 x i8]* nocapture %output_V) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader61
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_8, %.loopexit.loopexit ]
  %exitcond1 = icmp eq i6 %co, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_8 = add i6 %co, 1
  br i1 %exitcond1, label %3, label %.preheader61.preheader

.preheader61.preheader:                           ; preds = %.loopexit
  %tmp = zext i6 %co to i64
  %tmp_s = call i12 @_ssdm_op_BitConcatenate.i12.i6.i6(i6 %co, i6 0)
  %p_shl2_cast = zext i12 %tmp_s to i13
  %tmp_145 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co, i4 0)
  %p_shl3_cast = zext i10 %tmp_145 to i13
  %tmp_146 = sub i13 %p_shl2_cast, %p_shl3_cast
  %tmp_147 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co, i3 0)
  %p_shl_cast = zext i9 %tmp_147 to i10
  %tmp_148 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co, i1 false)
  %p_shl1_cast = zext i7 %tmp_148 to i10
  %tmp_149 = add i10 %p_shl1_cast, %p_shl_cast
  %bias_V_addr = getelementptr [48 x i8]* %bias_V, i64 0, i64 %tmp
  br label %.preheader61

.preheader61:                                     ; preds = %2, %.preheader61.preheader
  %h = phi i4 [ %h_8, %2 ], [ 1, %.preheader61.preheader ]
  %exitcond2 = icmp eq i4 %h, -7
  %empty_52 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader61
  %tmp_cast = zext i4 %h to i10
  %tmp_150 = add i10 %tmp_cast, %tmp_149
  %tmp_151 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_150, i3 0)
  %p_shl4_cast = zext i13 %tmp_151 to i14
  %tmp_152 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_150, i1 false)
  %p_shl5_cast = zext i11 %tmp_152 to i14
  %tmp_153 = add i14 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %_ifconv1, %.preheader.preheader
  %w = phi i4 [ %w_8, %_ifconv1 ], [ 1, %.preheader.preheader ]
  %exitcond3 = icmp eq i4 %w, -7
  %empty_53 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond3, label %2, label %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78

_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78: ; preds = %.preheader
  %tmp_116_cast = zext i4 %w to i14
  %tmp_154 = add i14 %tmp_153, %tmp_116_cast
  %tmp_172_cast = zext i14 %tmp_154 to i64
  %output_V_addr = getelementptr [4800 x i8]* %output_V, i64 0, i64 %tmp_172_cast
  br label %1

; <label>:1                                       ; preds = %_ifconv, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78
  %p_Val2_s = phi i8 [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78 ], [ %sum_V, %_ifconv ]
  %ci = phi i6 [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78 ], [ %ci_2, %_ifconv ]
  %exitcond = icmp eq i6 %ci, -16
  %empty_54 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %ci_2 = add i6 %ci, 1
  br i1 %exitcond, label %_ifconv1, label %_ifconv

_ifconv:                                          ; preds = %1
  %tmp_121_cast = zext i6 %ci to i13
  %tmp_155 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %ci, i3 0)
  %p_shl8_cast = zext i9 %tmp_155 to i10
  %tmp_156 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %ci, i1 false)
  %p_shl9_cast = zext i7 %tmp_156 to i10
  %tmp_158 = add i10 %p_shl8_cast, %p_shl9_cast
  %tmp_159 = add i10 %tmp_cast, %tmp_158
  %tmp_160 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_159, i3 0)
  %p_shl6_cast = zext i13 %tmp_160 to i14
  %tmp_161 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_159, i1 false)
  %p_shl7_cast = zext i11 %tmp_161 to i14
  %tmp_162 = add i14 %p_shl6_cast, %p_shl7_cast
  %tmp_163 = add i14 %tmp_116_cast, %tmp_162
  %tmp_180_cast = zext i14 %tmp_163 to i64
  %input_V_addr = getelementptr [4800 x i8]* %input_V, i64 0, i64 %tmp_180_cast
  %tmp_164 = add i13 %tmp_121_cast, %tmp_146
  %tmp_181_cast = sext i13 %tmp_164 to i64
  %weight_V_addr = getelementptr [2304 x i8]* %weight_V, i64 0, i64 %tmp_181_cast
  %weight_V_load = load i8* %weight_V_addr, align 1
  %OP1_V = sext i8 %weight_V_load to i16
  %input_V_load = load i8* %input_V_addr, align 1
  %OP2_V = sext i8 %input_V_load to i16
  %p_Val2_54 = mul i16 %OP1_V, %OP2_V
  %tmp_122 = call i14 @_ssdm_op_BitConcatenate.i14.i8.i6(i8 %p_Val2_s, i6 0)
  %tmp_160_cast = sext i14 %tmp_122 to i16
  %p_Val2_55 = add i16 %tmp_160_cast, %p_Val2_54
  %signbit = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_55, i32 15)
  %p_Val2_56 = call i8 @_ssdm_op_PartSelect.i8.i16.i32.i32(i16 %p_Val2_55, i32 6, i32 13)
  %tmp_166 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_54, i32 5)
  %tmp_123 = zext i1 %tmp_166 to i8
  %tmp_167 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_55, i32 13)
  %p_Val2_57 = add i8 %p_Val2_56, %tmp_123
  %newsignbit = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %p_Val2_57, i32 7)
  %tmp_124 = xor i1 %newsignbit, true
  %carry = and i1 %tmp_167, %tmp_124
  %tmp_169 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_55, i32 14)
  %tmp_126 = call i2 @_ssdm_op_PartSelect.i2.i16.i32.i32(i16 %p_Val2_55, i32 14, i32 15)
  %Range1_all_ones = icmp eq i2 %tmp_126, -1
  %Range1_all_zeros = icmp eq i2 %tmp_126, 0
  %deleted_zeros = select i1 %carry, i1 %Range1_all_ones, i1 %Range1_all_zeros
  %tmp_125 = xor i1 %tmp_169, true
  %p_41_i_i = and i1 %signbit, %tmp_125
  %deleted_ones = select i1 %carry, i1 %p_41_i_i, i1 %Range1_all_ones
  %p_38_i_i = and i1 %carry, %Range1_all_ones
  %p_not_i_i = xor i1 %deleted_zeros, true
  %brmerge_i_i8 = or i1 %newsignbit, %p_not_i_i
  %tmp_127 = xor i1 %signbit, true
  %overflow = and i1 %brmerge_i_i8, %tmp_127
  %brmerge40_demorgan_i = and i1 %newsignbit, %deleted_ones
  %tmp2_demorgan = or i1 %p_38_i_i, %brmerge40_demorgan_i
  %tmp2 = xor i1 %tmp2_demorgan, true
  %underflow = and i1 %signbit, %tmp2
  %brmerge_i_i_i = or i1 %underflow, %overflow
  %tmp3 = or i1 %brmerge40_demorgan_i, %tmp_127
  %underflow_not = or i1 %tmp3, %p_38_i_i
  %p_Val2_62_mux = select i1 %brmerge_i_i_i, i8 127, i8 %p_Val2_57
  %p_Val2_s_55 = select i1 %underflow, i8 -128, i8 %p_Val2_57
  %sum_V = select i1 %underflow_not, i8 %p_Val2_62_mux, i8 %p_Val2_s_55
  br label %1

_ifconv1:                                         ; preds = %1
  %tmp_117 = sext i8 %p_Val2_s to i9
  %p_Val2_51 = load i8* %bias_V_addr, align 1
  %tmp_118 = sext i8 %p_Val2_51 to i9
  %p_Val2_52 = add i9 %tmp_118, %tmp_117
  %isneg = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %p_Val2_52, i32 8)
  %result_V = add i8 %p_Val2_51, %p_Val2_s
  %newsignbit_8 = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %result_V, i32 7)
  %tmp_119 = xor i1 %newsignbit_8, true
  %underflow_8 = and i1 %isneg, %tmp_119
  %brmerge_i_i = xor i1 %isneg, %newsignbit_8
  %isneg_not = xor i1 %isneg, true
  %brmerge9 = or i1 %newsignbit_8, %isneg_not
  %result_V_mux = select i1 %brmerge_i_i, i8 127, i8 %result_V
  %p_result_V = select i1 %underflow_8, i8 -128, i8 %result_V
  %result_1 = select i1 %brmerge9, i8 %result_V_mux, i8 %p_result_V
  %tmp_157 = trunc i8 %result_1 to i7
  %tmp_120 = icmp sgt i8 %result_1, 0
  %p_s = select i1 %tmp_120, i7 %tmp_157, i7 0
  %p_cast = zext i7 %p_s to i8
  store i8 %p_cast, i8* %output_V_addr, align 1
  %w_8 = add i4 1, %w
  br label %.preheader

; <label>:2                                       ; preds = %.preheader
  %h_8 = add i4 %h, 1
  br label %.preheader61

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_1x1_4_p([3456 x i8]* nocapture %input_V, [9216 x i8]* nocapture %weight_V, [96 x i8]* nocapture %bias_V, [3456 x i8]* nocapture %output_V) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader61
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_9, %.loopexit.loopexit ]
  %exitcond4 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_9 = add i7 %co, 1
  br i1 %exitcond4, label %3, label %.preheader61.preheader

.preheader61.preheader:                           ; preds = %.loopexit
  %tmp = zext i7 %co to i64
  %tmp_s = call i14 @_ssdm_op_BitConcatenate.i14.i7.i7(i7 %co, i7 0)
  %p_shl2_cast = zext i14 %tmp_s to i15
  %tmp_165 = call i12 @_ssdm_op_BitConcatenate.i12.i7.i5(i7 %co, i5 0)
  %p_shl3_cast = zext i12 %tmp_165 to i15
  %tmp_166 = sub i15 %p_shl2_cast, %p_shl3_cast
  %tmp_167 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0)
  %p_shl_cast = zext i10 %tmp_167 to i11
  %tmp_168 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co, i1 false)
  %p_shl1_cast = zext i8 %tmp_168 to i11
  %tmp_169 = sub i11 %p_shl_cast, %p_shl1_cast
  %tmp_187_cast = sext i11 %tmp_169 to i12
  %bias_V_addr = getelementptr [96 x i8]* %bias_V, i64 0, i64 %tmp
  br label %.preheader61

.preheader61:                                     ; preds = %2, %.preheader61.preheader
  %h = phi i3 [ %h_9, %2 ], [ 1, %.preheader61.preheader ]
  %exitcond5 = icmp eq i3 %h, -3
  %empty_56 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %exitcond5, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader61
  %tmp_cast = zext i3 %h to i12
  %tmp_170 = add i12 %tmp_cast, %tmp_187_cast
  %tmp_171 = trunc i12 %tmp_170 to i10
  %p_shl4_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_171, i3 0)
  %p_shl5_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_170, i1 false)
  %tmp_172 = sub i13 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %_ifconv1, %.preheader.preheader
  %w = phi i3 [ %w_9, %_ifconv1 ], [ 1, %.preheader.preheader ]
  %exitcond6 = icmp eq i3 %w, -3
  %empty_57 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %exitcond6, label %2, label %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78

_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78: ; preds = %.preheader
  %tmp_128_cast = zext i3 %w to i13
  %tmp_173 = add i13 %tmp_172, %tmp_128_cast
  %tmp_192_cast = zext i13 %tmp_173 to i64
  %output_V_addr = getelementptr [3456 x i8]* %output_V, i64 0, i64 %tmp_192_cast
  br label %1

; <label>:1                                       ; preds = %_ifconv, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78
  %p_Val2_s = phi i8 [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78 ], [ %sum_V, %_ifconv ]
  %ci = phi i7 [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78 ], [ %ci_3, %_ifconv ]
  %exitcond = icmp eq i7 %ci, -32
  %empty_58 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %ci_3 = add i7 %ci, 1
  br i1 %exitcond, label %_ifconv1, label %_ifconv

_ifconv:                                          ; preds = %1
  %tmp_133_cast = zext i7 %ci to i15
  %tmp_174 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %ci, i3 0)
  %p_shl8_cast = zext i10 %tmp_174 to i11
  %tmp_175 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %ci, i1 false)
  %p_shl9_cast = zext i8 %tmp_175 to i11
  %tmp_177 = sub i11 %p_shl8_cast, %p_shl9_cast
  %tmp_195_cast = sext i11 %tmp_177 to i12
  %tmp_178 = add i12 %tmp_cast, %tmp_195_cast
  %tmp_179 = trunc i12 %tmp_178 to i10
  %p_shl6_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_179, i3 0)
  %p_shl7_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_178, i1 false)
  %tmp_180 = sub i13 %p_shl6_cast, %p_shl7_cast
  %tmp_181 = add i13 %tmp_128_cast, %tmp_180
  %tmp_200_cast = zext i13 %tmp_181 to i64
  %input_V_addr = getelementptr [3456 x i8]* %input_V, i64 0, i64 %tmp_200_cast
  %tmp_182 = add i15 %tmp_133_cast, %tmp_166
  %tmp_201_cast = sext i15 %tmp_182 to i64
  %weight_V_addr = getelementptr [9216 x i8]* %weight_V, i64 0, i64 %tmp_201_cast
  %weight_V_load = load i8* %weight_V_addr, align 1
  %OP1_V = sext i8 %weight_V_load to i16
  %input_V_load = load i8* %input_V_addr, align 1
  %OP2_V = sext i8 %input_V_load to i16
  %p_Val2_61 = mul i16 %OP1_V, %OP2_V
  %tmp_134 = call i14 @_ssdm_op_BitConcatenate.i14.i8.i6(i8 %p_Val2_s, i6 0)
  %tmp_176_cast = sext i14 %tmp_134 to i16
  %p_Val2_62 = add i16 %tmp_176_cast, %p_Val2_61
  %signbit = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_62, i32 15)
  %p_Val2_63 = call i8 @_ssdm_op_PartSelect.i8.i16.i32.i32(i16 %p_Val2_62, i32 6, i32 13)
  %tmp_184 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_61, i32 5)
  %tmp_135 = zext i1 %tmp_184 to i8
  %tmp_185 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_62, i32 13)
  %p_Val2_64 = add i8 %p_Val2_63, %tmp_135
  %newsignbit = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %p_Val2_64, i32 7)
  %tmp_136 = xor i1 %newsignbit, true
  %carry = and i1 %tmp_185, %tmp_136
  %tmp_187 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_62, i32 14)
  %tmp_138 = call i2 @_ssdm_op_PartSelect.i2.i16.i32.i32(i16 %p_Val2_62, i32 14, i32 15)
  %Range1_all_ones = icmp eq i2 %tmp_138, -1
  %Range1_all_zeros = icmp eq i2 %tmp_138, 0
  %deleted_zeros = select i1 %carry, i1 %Range1_all_ones, i1 %Range1_all_zeros
  %tmp_137 = xor i1 %tmp_187, true
  %p_41_i_i = and i1 %signbit, %tmp_137
  %deleted_ones = select i1 %carry, i1 %p_41_i_i, i1 %Range1_all_ones
  %p_38_i_i = and i1 %carry, %Range1_all_ones
  %p_not_i_i = xor i1 %deleted_zeros, true
  %brmerge_i_i9 = or i1 %newsignbit, %p_not_i_i
  %tmp_139 = xor i1 %signbit, true
  %overflow = and i1 %brmerge_i_i9, %tmp_139
  %brmerge40_demorgan_i = and i1 %newsignbit, %deleted_ones
  %tmp2_demorgan = or i1 %p_38_i_i, %brmerge40_demorgan_i
  %tmp2 = xor i1 %tmp2_demorgan, true
  %underflow = and i1 %signbit, %tmp2
  %brmerge_i_i_i = or i1 %underflow, %overflow
  %tmp3 = or i1 %brmerge40_demorgan_i, %tmp_139
  %underflow_not = or i1 %tmp3, %p_38_i_i
  %p_Val2_69_mux = select i1 %brmerge_i_i_i, i8 127, i8 %p_Val2_64
  %p_Val2_s_59 = select i1 %underflow, i8 -128, i8 %p_Val2_64
  %sum_V = select i1 %underflow_not, i8 %p_Val2_69_mux, i8 %p_Val2_s_59
  br label %1

_ifconv1:                                         ; preds = %1
  %tmp_129 = sext i8 %p_Val2_s to i9
  %p_Val2_58 = load i8* %bias_V_addr, align 1
  %tmp_130 = sext i8 %p_Val2_58 to i9
  %p_Val2_59 = add i9 %tmp_130, %tmp_129
  %isneg = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %p_Val2_59, i32 8)
  %result_V = add i8 %p_Val2_58, %p_Val2_s
  %newsignbit_9 = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %result_V, i32 7)
  %tmp_131 = xor i1 %newsignbit_9, true
  %underflow_9 = and i1 %isneg, %tmp_131
  %brmerge_i_i = xor i1 %isneg, %newsignbit_9
  %isneg_not = xor i1 %isneg, true
  %brmerge9 = or i1 %newsignbit_9, %isneg_not
  %result_V_mux = select i1 %brmerge_i_i, i8 127, i8 %result_V
  %p_result_V = select i1 %underflow_9, i8 -128, i8 %result_V
  %result_1 = select i1 %brmerge9, i8 %result_V_mux, i8 %p_result_V
  %tmp_176 = trunc i8 %result_1 to i7
  %tmp_132 = icmp sgt i8 %result_1, 0
  %p_s = select i1 %tmp_132, i7 %tmp_176, i7 0
  %p_cast = zext i7 %p_s to i8
  store i8 %p_cast, i8* %output_V_addr, align 1
  %w_9 = add i3 1, %w
  br label %.preheader

; <label>:2                                       ; preds = %.preheader
  %h_9 = add i3 %h, 1
  br label %.preheader61

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_1x1_32_p([576 x i8]* nocapture %weight_V, [24 x i8]* nocapture %bias_V) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader61
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i5 [ 0, %0 ], [ %co_10, %.loopexit.loopexit ]
  %exitcond7 = icmp eq i5 %co, -8
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_10 = add i5 %co, 1
  br i1 %exitcond7, label %3, label %.preheader61.preheader

.preheader61.preheader:                           ; preds = %.loopexit
  %tmp = zext i5 %co to i64
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co, i5 0)
  %p_shl2_cast = zext i10 %tmp_s to i11
  %tmp_183 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co, i3 0)
  %p_shl3_cast = zext i8 %tmp_183 to i11
  %tmp_184 = sub i11 %p_shl2_cast, %p_shl3_cast
  %tmp_185 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co, i1 false)
  %p_shl1_cast = zext i6 %tmp_185 to i11
  %tmp_186 = add i11 %p_shl1_cast, %p_shl2_cast
  %bias_V_addr = getelementptr [24 x i8]* %bias_V, i64 0, i64 %tmp
  br label %.preheader61

.preheader61:                                     ; preds = %2, %.preheader61.preheader
  %h = phi i6 [ %h_10, %2 ], [ 1, %.preheader61.preheader ]
  %exitcond8 = icmp eq i6 %h, -31
  %empty_60 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  br i1 %exitcond8, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader61
  %tmp_cast = zext i6 %h to i11
  %tmp_187 = add i11 %tmp_cast, %tmp_186
  %p_shl4_cast = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_187, i5 0)
  %tmp_188 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_187, i1 false)
  %p_shl5_cast = zext i12 %tmp_188 to i16
  %tmp_189 = add i16 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %_ifconv1, %.preheader.preheader
  %w = phi i6 [ %w_10, %_ifconv1 ], [ 1, %.preheader.preheader ]
  %exitcond9 = icmp eq i6 %w, -31
  %empty_61 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  br i1 %exitcond9, label %2, label %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78

_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78: ; preds = %.preheader
  %tmp_140_cast = zext i6 %w to i16
  %tmp_190 = add i16 %tmp_189, %tmp_140_cast
  %tmp_212_cast = zext i16 %tmp_190 to i64
  %ShuffleConvs_0_Downs = getelementptr [27744 x i8]* @ShuffleConvs_0_Downs, i64 0, i64 %tmp_212_cast
  br label %1

; <label>:1                                       ; preds = %_ifconv, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78
  %p_Val2_s = phi i8 [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78 ], [ %sum_V, %_ifconv ]
  %ci = phi i5 [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78 ], [ %ci_4, %_ifconv ]
  %exitcond = icmp eq i5 %ci, -8
  %empty_62 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_4 = add i5 %ci, 1
  br i1 %exitcond, label %_ifconv1, label %_ifconv

_ifconv:                                          ; preds = %1
  %tmp_145_cast = zext i5 %ci to i11
  %tmp_191 = add i11 %tmp_145_cast, %tmp_184
  %tmp_213_cast = sext i11 %tmp_191 to i64
  %weight_V_addr = getelementptr [576 x i8]* %weight_V, i64 0, i64 %tmp_213_cast
  %tmp_192 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %ci, i5 0)
  %p_shl8_cast = zext i10 %tmp_192 to i11
  %tmp_194 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %ci, i1 false)
  %p_shl9_cast = zext i6 %tmp_194 to i11
  %tmp_195 = add i11 %p_shl8_cast, %p_shl9_cast
  %tmp_196 = add i11 %tmp_cast, %tmp_195
  %p_shl6_cast = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_196, i5 0)
  %tmp_197 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_196, i1 false)
  %p_shl7_cast = zext i12 %tmp_197 to i16
  %tmp_198 = add i16 %p_shl6_cast, %p_shl7_cast
  %tmp_199 = add i16 %tmp_140_cast, %tmp_198
  %tmp_221_cast = zext i16 %tmp_199 to i64
  %conv1_output_p_V_add = getelementptr [27744 x i8]* @conv1_output_p_V, i64 0, i64 %tmp_221_cast
  %weight_V_load = load i8* %weight_V_addr, align 1
  %OP1_V = sext i8 %weight_V_load to i16
  %conv1_output_p_V_loa = load i8* %conv1_output_p_V_add, align 1
  %OP2_V = sext i8 %conv1_output_p_V_loa to i16
  %p_Val2_68 = mul i16 %OP1_V, %OP2_V
  %tmp_146 = call i14 @_ssdm_op_BitConcatenate.i14.i8.i6(i8 %p_Val2_s, i6 0)
  %tmp_192_cast = sext i14 %tmp_146 to i16
  %p_Val2_69 = add i16 %tmp_192_cast, %p_Val2_68
  %signbit = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_69, i32 15)
  %p_Val2_70 = call i8 @_ssdm_op_PartSelect.i8.i16.i32.i32(i16 %p_Val2_69, i32 6, i32 13)
  %tmp_201 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_68, i32 5)
  %tmp_147 = zext i1 %tmp_201 to i8
  %tmp_202 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_69, i32 13)
  %p_Val2_71 = add i8 %p_Val2_70, %tmp_147
  %newsignbit = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %p_Val2_71, i32 7)
  %tmp_148 = xor i1 %newsignbit, true
  %carry = and i1 %tmp_202, %tmp_148
  %tmp_204 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_69, i32 14)
  %tmp_150 = call i2 @_ssdm_op_PartSelect.i2.i16.i32.i32(i16 %p_Val2_69, i32 14, i32 15)
  %Range1_all_ones = icmp eq i2 %tmp_150, -1
  %Range1_all_zeros = icmp eq i2 %tmp_150, 0
  %deleted_zeros = select i1 %carry, i1 %Range1_all_ones, i1 %Range1_all_zeros
  %tmp_149 = xor i1 %tmp_204, true
  %p_41_i_i = and i1 %signbit, %tmp_149
  %deleted_ones = select i1 %carry, i1 %p_41_i_i, i1 %Range1_all_ones
  %p_38_i_i = and i1 %carry, %Range1_all_ones
  %p_not_i_i = xor i1 %deleted_zeros, true
  %brmerge_i_i1 = or i1 %newsignbit, %p_not_i_i
  %tmp_151 = xor i1 %signbit, true
  %overflow = and i1 %brmerge_i_i1, %tmp_151
  %brmerge40_demorgan_i = and i1 %newsignbit, %deleted_ones
  %tmp2_demorgan = or i1 %p_38_i_i, %brmerge40_demorgan_i
  %tmp2 = xor i1 %tmp2_demorgan, true
  %underflow = and i1 %signbit, %tmp2
  %brmerge_i_i_i = or i1 %underflow, %overflow
  %tmp3 = or i1 %brmerge40_demorgan_i, %tmp_151
  %underflow_not = or i1 %tmp3, %p_38_i_i
  %p_Val2_76_mux = select i1 %brmerge_i_i_i, i8 127, i8 %p_Val2_71
  %p_Val2_s_63 = select i1 %underflow, i8 -128, i8 %p_Val2_71
  %sum_V = select i1 %underflow_not, i8 %p_Val2_76_mux, i8 %p_Val2_s_63
  br label %1

_ifconv1:                                         ; preds = %1
  %tmp_141 = sext i8 %p_Val2_s to i9
  %p_Val2_65 = load i8* %bias_V_addr, align 1
  %tmp_142 = sext i8 %p_Val2_65 to i9
  %p_Val2_66 = add i9 %tmp_142, %tmp_141
  %isneg = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %p_Val2_66, i32 8)
  %result_V = add i8 %p_Val2_65, %p_Val2_s
  %newsignbit_10 = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %result_V, i32 7)
  %tmp_143 = xor i1 %newsignbit_10, true
  %underflow_10 = and i1 %isneg, %tmp_143
  %brmerge_i_i = xor i1 %isneg, %newsignbit_10
  %isneg_not = xor i1 %isneg, true
  %brmerge9 = or i1 %newsignbit_10, %isneg_not
  %result_V_mux = select i1 %brmerge_i_i, i8 127, i8 %result_V
  %p_result_V = select i1 %underflow_10, i8 -128, i8 %result_V
  %result_1 = select i1 %brmerge9, i8 %result_V_mux, i8 %p_result_V
  %tmp_193 = trunc i8 %result_1 to i7
  %tmp_144 = icmp sgt i8 %result_1, 0
  %p_s = select i1 %tmp_144, i7 %tmp_193, i7 0
  %p_cast = zext i7 %p_s to i8
  store i8 %p_cast, i8* %ShuffleConvs_0_Downs, align 1
  %w_10 = add i6 1, %w
  br label %.preheader

; <label>:2                                       ; preds = %.preheader
  %h_10 = add i6 %h, 1
  br label %.preheader61

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_1x1_16p_p([2304 x i8]* nocapture %weight_V, [48 x i8]* nocapture %bias_V) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader61
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_11, %.loopexit.loopexit ]
  %exitcond1 = icmp eq i6 %co, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_11 = add i6 %co, 1
  br i1 %exitcond1, label %3, label %.preheader61.preheader

.preheader61.preheader:                           ; preds = %.loopexit
  %tmp = zext i6 %co to i64
  %tmp_s = call i12 @_ssdm_op_BitConcatenate.i12.i6.i6(i6 %co, i6 0)
  %p_shl2_cast = zext i12 %tmp_s to i13
  %tmp_200 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co, i4 0)
  %p_shl3_cast1 = zext i10 %tmp_200 to i11
  %p_shl3_cast = zext i10 %tmp_200 to i13
  %tmp_201 = sub i13 %p_shl2_cast, %p_shl3_cast
  %tmp_202 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co, i1 false)
  %p_shl1_cast = zext i7 %tmp_202 to i11
  %tmp_203 = add i11 %p_shl1_cast, %p_shl3_cast1
  %bias_V_addr = getelementptr [48 x i8]* %bias_V, i64 0, i64 %tmp
  br label %.preheader61

.preheader61:                                     ; preds = %2, %.preheader61.preheader
  %h = phi i5 [ %h_11, %2 ], [ 1, %.preheader61.preheader ]
  %exitcond2 = icmp eq i5 %h, -15
  %empty_64 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader61
  %tmp_cast = zext i5 %h to i11
  %tmp_204 = add i11 %tmp_cast, %tmp_203
  %p_shl4_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_204, i4 0)
  %tmp_205 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_204, i1 false)
  %p_shl5_cast = zext i12 %tmp_205 to i15
  %tmp_206 = add i15 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %_ifconv1, %.preheader.preheader
  %w = phi i5 [ %w_11, %_ifconv1 ], [ 1, %.preheader.preheader ]
  %exitcond3 = icmp eq i5 %w, -15
  %empty_65 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond3, label %2, label %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78

_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78: ; preds = %.preheader
  %tmp_152_cast = zext i5 %w to i15
  %tmp_207 = add i15 %tmp_206, %tmp_152_cast
  %tmp_232_cast = zext i15 %tmp_207 to i64
  %ShuffleConvs_1_Downs = getelementptr [15552 x i8]* @ShuffleConvs_1_Downs, i64 0, i64 %tmp_232_cast
  br label %1

; <label>:1                                       ; preds = %_ifconv, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78
  %p_Val2_s = phi i8 [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78 ], [ %sum_V, %_ifconv ]
  %ci = phi i6 [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78 ], [ %ci_5, %_ifconv ]
  %exitcond = icmp eq i6 %ci, -16
  %empty_66 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %ci_5 = add i6 %ci, 1
  br i1 %exitcond, label %_ifconv1, label %_ifconv

_ifconv:                                          ; preds = %1
  %tmp_157_cast = zext i6 %ci to i13
  %tmp_208 = add i13 %tmp_157_cast, %tmp_201
  %tmp_233_cast = sext i13 %tmp_208 to i64
  %weight_V_addr = getelementptr [2304 x i8]* %weight_V, i64 0, i64 %tmp_233_cast
  %tmp_209 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %ci, i4 0)
  %p_shl8_cast = zext i10 %tmp_209 to i11
  %tmp_211 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %ci, i1 false)
  %p_shl9_cast = zext i7 %tmp_211 to i11
  %tmp_212 = add i11 %p_shl8_cast, %p_shl9_cast
  %tmp_213 = add i11 %tmp_cast, %tmp_212
  %p_shl6_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_213, i4 0)
  %tmp_214 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_213, i1 false)
  %p_shl7_cast = zext i12 %tmp_214 to i15
  %tmp_215 = add i15 %p_shl6_cast, %p_shl7_cast
  %tmp_216 = add i15 %tmp_152_cast, %tmp_215
  %tmp_241_cast = zext i15 %tmp_216 to i64
  %shuffleunit0_2_outpu = getelementptr [15552 x i8]* @shuffleunit0_2_outpu, i64 0, i64 %tmp_241_cast
  %weight_V_load = load i8* %weight_V_addr, align 1
  %OP1_V = sext i8 %weight_V_load to i16
  %shuffleunit0_2_outpu_1 = load i8* %shuffleunit0_2_outpu, align 1
  %OP2_V = sext i8 %shuffleunit0_2_outpu_1 to i16
  %p_Val2_75 = mul i16 %OP1_V, %OP2_V
  %tmp_158 = call i14 @_ssdm_op_BitConcatenate.i14.i8.i6(i8 %p_Val2_s, i6 0)
  %tmp_208_cast = sext i14 %tmp_158 to i16
  %p_Val2_76 = add i16 %tmp_208_cast, %p_Val2_75
  %signbit = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_76, i32 15)
  %p_Val2_77 = call i8 @_ssdm_op_PartSelect.i8.i16.i32.i32(i16 %p_Val2_76, i32 6, i32 13)
  %tmp_218 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_75, i32 5)
  %tmp_159 = zext i1 %tmp_218 to i8
  %tmp_219 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_76, i32 13)
  %p_Val2_78 = add i8 %p_Val2_77, %tmp_159
  %newsignbit = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %p_Val2_78, i32 7)
  %tmp_160 = xor i1 %newsignbit, true
  %carry = and i1 %tmp_219, %tmp_160
  %tmp_221 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_76, i32 14)
  %tmp_162 = call i2 @_ssdm_op_PartSelect.i2.i16.i32.i32(i16 %p_Val2_76, i32 14, i32 15)
  %Range1_all_ones = icmp eq i2 %tmp_162, -1
  %Range1_all_zeros = icmp eq i2 %tmp_162, 0
  %deleted_zeros = select i1 %carry, i1 %Range1_all_ones, i1 %Range1_all_zeros
  %tmp_161 = xor i1 %tmp_221, true
  %p_41_i_i = and i1 %signbit, %tmp_161
  %deleted_ones = select i1 %carry, i1 %p_41_i_i, i1 %Range1_all_ones
  %p_38_i_i = and i1 %carry, %Range1_all_ones
  %p_not_i_i = xor i1 %deleted_zeros, true
  %brmerge_i_i2 = or i1 %newsignbit, %p_not_i_i
  %tmp_163 = xor i1 %signbit, true
  %overflow = and i1 %brmerge_i_i2, %tmp_163
  %brmerge40_demorgan_i = and i1 %newsignbit, %deleted_ones
  %tmp2_demorgan = or i1 %p_38_i_i, %brmerge40_demorgan_i
  %tmp2 = xor i1 %tmp2_demorgan, true
  %underflow = and i1 %signbit, %tmp2
  %brmerge_i_i_i = or i1 %underflow, %overflow
  %tmp3 = or i1 %brmerge40_demorgan_i, %tmp_163
  %underflow_not = or i1 %tmp3, %p_38_i_i
  %p_Val2_83_mux = select i1 %brmerge_i_i_i, i8 127, i8 %p_Val2_78
  %p_Val2_s_67 = select i1 %underflow, i8 -128, i8 %p_Val2_78
  %sum_V = select i1 %underflow_not, i8 %p_Val2_83_mux, i8 %p_Val2_s_67
  br label %1

_ifconv1:                                         ; preds = %1
  %tmp_153 = sext i8 %p_Val2_s to i9
  %p_Val2_72 = load i8* %bias_V_addr, align 1
  %tmp_154 = sext i8 %p_Val2_72 to i9
  %p_Val2_73 = add i9 %tmp_154, %tmp_153
  %isneg = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %p_Val2_73, i32 8)
  %result_V = add i8 %p_Val2_72, %p_Val2_s
  %newsignbit_11 = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %result_V, i32 7)
  %tmp_155 = xor i1 %newsignbit_11, true
  %underflow_11 = and i1 %isneg, %tmp_155
  %brmerge_i_i = xor i1 %isneg, %newsignbit_11
  %isneg_not = xor i1 %isneg, true
  %brmerge9 = or i1 %newsignbit_11, %isneg_not
  %result_V_mux = select i1 %brmerge_i_i, i8 127, i8 %result_V
  %p_result_V = select i1 %underflow_11, i8 -128, i8 %result_V
  %result_1 = select i1 %brmerge9, i8 %result_V_mux, i8 %p_result_V
  %tmp_210 = trunc i8 %result_1 to i7
  %tmp_156 = icmp sgt i8 %result_1, 0
  %p_s = select i1 %tmp_156, i7 %tmp_210, i7 0
  %p_cast = zext i7 %p_s to i8
  store i8 %p_cast, i8* %ShuffleConvs_1_Downs, align 1
  %w_11 = add i5 1, %w
  br label %.preheader

; <label>:2                                       ; preds = %.preheader
  %h_11 = add i5 %h, 1
  br label %.preheader61

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_1x1_16_p([7776 x i8]* nocapture %input_V, [576 x i8]* nocapture %weight_V, [24 x i8]* nocapture %bias_V, [7776 x i8]* nocapture %output_V) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader61
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i5 [ 0, %0 ], [ %co_12, %.loopexit.loopexit ]
  %exitcond4 = icmp eq i5 %co, -8
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_12 = add i5 %co, 1
  br i1 %exitcond4, label %3, label %.preheader61.preheader

.preheader61.preheader:                           ; preds = %.loopexit
  %tmp = zext i5 %co to i64
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co, i5 0)
  %p_shl2_cast = zext i10 %tmp_s to i11
  %tmp_217 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co, i3 0)
  %p_shl3_cast = zext i8 %tmp_217 to i11
  %tmp_218 = sub i11 %p_shl2_cast, %p_shl3_cast
  %tmp_219 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co, i4 0)
  %p_shl_cast = zext i9 %tmp_219 to i10
  %tmp_220 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co, i1 false)
  %p_shl1_cast = zext i6 %tmp_220 to i10
  %tmp_221 = add i10 %p_shl1_cast, %p_shl_cast
  %bias_V_addr = getelementptr [24 x i8]* %bias_V, i64 0, i64 %tmp
  br label %.preheader61

.preheader61:                                     ; preds = %2, %.preheader61.preheader
  %h = phi i5 [ %h_12, %2 ], [ 1, %.preheader61.preheader ]
  %exitcond5 = icmp eq i5 %h, -15
  %empty_68 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond5, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader61
  %tmp_cast = zext i5 %h to i10
  %tmp_222 = add i10 %tmp_cast, %tmp_221
  %p_shl4_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_222, i4 0)
  %tmp_223 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_222, i1 false)
  %p_shl5_cast = zext i11 %tmp_223 to i14
  %tmp_224 = add i14 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %_ifconv1, %.preheader.preheader
  %w = phi i5 [ %w_12, %_ifconv1 ], [ 1, %.preheader.preheader ]
  %exitcond6 = icmp eq i5 %w, -15
  %empty_69 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond6, label %2, label %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78

_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78: ; preds = %.preheader
  %tmp_164_cast = zext i5 %w to i14
  %tmp_225 = add i14 %tmp_224, %tmp_164_cast
  %tmp_252_cast = zext i14 %tmp_225 to i64
  %output_V_addr = getelementptr [7776 x i8]* %output_V, i64 0, i64 %tmp_252_cast
  br label %1

; <label>:1                                       ; preds = %_ifconv, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78
  %p_Val2_s = phi i8 [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78 ], [ %sum_V, %_ifconv ]
  %ci = phi i5 [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78 ], [ %ci_6, %_ifconv ]
  %exitcond = icmp eq i5 %ci, -8
  %empty_70 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_6 = add i5 %ci, 1
  br i1 %exitcond, label %_ifconv1, label %_ifconv

_ifconv:                                          ; preds = %1
  %tmp_169_cast = zext i5 %ci to i11
  %tmp_226 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %ci, i4 0)
  %p_shl8_cast = zext i9 %tmp_226 to i10
  %tmp_227 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %ci, i1 false)
  %p_shl9_cast = zext i6 %tmp_227 to i10
  %tmp_229 = add i10 %p_shl8_cast, %p_shl9_cast
  %tmp_230 = add i10 %tmp_cast, %tmp_229
  %p_shl6_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_230, i4 0)
  %tmp_231 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_230, i1 false)
  %p_shl7_cast = zext i11 %tmp_231 to i14
  %tmp_232 = add i14 %p_shl6_cast, %p_shl7_cast
  %tmp_233 = add i14 %tmp_164_cast, %tmp_232
  %tmp_260_cast = zext i14 %tmp_233 to i64
  %input_V_addr = getelementptr [7776 x i8]* %input_V, i64 0, i64 %tmp_260_cast
  %tmp_234 = add i11 %tmp_169_cast, %tmp_218
  %tmp_261_cast = sext i11 %tmp_234 to i64
  %weight_V_addr = getelementptr [576 x i8]* %weight_V, i64 0, i64 %tmp_261_cast
  %weight_V_load = load i8* %weight_V_addr, align 1
  %OP1_V = sext i8 %weight_V_load to i16
  %input_V_load = load i8* %input_V_addr, align 1
  %OP2_V = sext i8 %input_V_load to i16
  %p_Val2_82 = mul i16 %OP1_V, %OP2_V
  %tmp_170 = call i14 @_ssdm_op_BitConcatenate.i14.i8.i6(i8 %p_Val2_s, i6 0)
  %tmp_224_cast = sext i14 %tmp_170 to i16
  %p_Val2_83 = add i16 %tmp_224_cast, %p_Val2_82
  %signbit = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_83, i32 15)
  %p_Val2_84 = call i8 @_ssdm_op_PartSelect.i8.i16.i32.i32(i16 %p_Val2_83, i32 6, i32 13)
  %tmp_236 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_82, i32 5)
  %tmp_171 = zext i1 %tmp_236 to i8
  %tmp_237 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_83, i32 13)
  %p_Val2_85 = add i8 %p_Val2_84, %tmp_171
  %newsignbit = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %p_Val2_85, i32 7)
  %tmp_172 = xor i1 %newsignbit, true
  %carry = and i1 %tmp_237, %tmp_172
  %tmp_239 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_83, i32 14)
  %tmp_174 = call i2 @_ssdm_op_PartSelect.i2.i16.i32.i32(i16 %p_Val2_83, i32 14, i32 15)
  %Range1_all_ones = icmp eq i2 %tmp_174, -1
  %Range1_all_zeros = icmp eq i2 %tmp_174, 0
  %deleted_zeros = select i1 %carry, i1 %Range1_all_ones, i1 %Range1_all_zeros
  %tmp_173 = xor i1 %tmp_239, true
  %p_41_i_i = and i1 %signbit, %tmp_173
  %deleted_ones = select i1 %carry, i1 %p_41_i_i, i1 %Range1_all_ones
  %p_38_i_i = and i1 %carry, %Range1_all_ones
  %p_not_i_i = xor i1 %deleted_zeros, true
  %brmerge_i_i3 = or i1 %newsignbit, %p_not_i_i
  %tmp_175 = xor i1 %signbit, true
  %overflow = and i1 %brmerge_i_i3, %tmp_175
  %brmerge40_demorgan_i = and i1 %newsignbit, %deleted_ones
  %tmp2_demorgan = or i1 %p_38_i_i, %brmerge40_demorgan_i
  %tmp2 = xor i1 %tmp2_demorgan, true
  %underflow = and i1 %signbit, %tmp2
  %brmerge_i_i_i = or i1 %underflow, %overflow
  %tmp3 = or i1 %brmerge40_demorgan_i, %tmp_175
  %underflow_not = or i1 %tmp3, %p_38_i_i
  %p_Val2_90_mux = select i1 %brmerge_i_i_i, i8 127, i8 %p_Val2_85
  %p_Val2_s_71 = select i1 %underflow, i8 -128, i8 %p_Val2_85
  %sum_V = select i1 %underflow_not, i8 %p_Val2_90_mux, i8 %p_Val2_s_71
  br label %1

_ifconv1:                                         ; preds = %1
  %tmp_165 = sext i8 %p_Val2_s to i9
  %p_Val2_79 = load i8* %bias_V_addr, align 1
  %tmp_166 = sext i8 %p_Val2_79 to i9
  %p_Val2_80 = add i9 %tmp_166, %tmp_165
  %isneg = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %p_Val2_80, i32 8)
  %result_V = add i8 %p_Val2_79, %p_Val2_s
  %newsignbit_12 = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %result_V, i32 7)
  %tmp_167 = xor i1 %newsignbit_12, true
  %underflow_12 = and i1 %isneg, %tmp_167
  %brmerge_i_i = xor i1 %isneg, %newsignbit_12
  %isneg_not = xor i1 %isneg, true
  %brmerge9 = or i1 %newsignbit_12, %isneg_not
  %result_V_mux = select i1 %brmerge_i_i, i8 127, i8 %result_V
  %p_result_V = select i1 %underflow_12, i8 -128, i8 %result_V
  %result_1 = select i1 %brmerge9, i8 %result_V_mux, i8 %p_result_V
  %tmp_228 = trunc i8 %result_1 to i7
  %tmp_168 = icmp sgt i8 %result_1, 0
  %p_s = select i1 %tmp_168, i7 %tmp_228, i7 0
  %p_cast = zext i7 %p_s to i8
  store i8 %p_cast, i8* %output_V_addr, align 1
  %w_12 = add i5 1, %w
  br label %.preheader

; <label>:2                                       ; preds = %.preheader
  %h_12 = add i5 %h, 1
  br label %.preheader61

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_96_r_p([3456 x i8]* nocapture %right_V, [6912 x i8]* nocapture %output_V) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader4
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i8 [ 0, %0 ], [ %co_13, %.loopexit.loopexit ]
  %tmp_240 = trunc i8 %co to i1
  %exitcond3 = icmp eq i8 %co, -64
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 192, i64 192, i64 192)
  %co_13 = add i8 1, %co
  br i1 %exitcond3, label %3, label %.preheader4.preheader

.preheader4.preheader:                            ; preds = %.loopexit
  %tmp = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %co, i3 0)
  %p_shl2_cast = zext i11 %tmp to i12
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %co, i1 false)
  %p_shl3_cast = zext i9 %tmp_s to i12
  %tmp_235 = sub i12 %p_shl2_cast, %p_shl3_cast
  %tmp_263_cast = sext i12 %tmp_235 to i13
  %tmp_236 = call i7 @_ssdm_op_PartSelect.i7.i8.i32.i32(i8 %co, i32 1, i32 7)
  %tmp_237 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_236, i3 0)
  %p_shl_cast = zext i10 %tmp_237 to i11
  %tmp_238 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp_236, i1 false)
  %p_shl1_cast = zext i8 %tmp_238 to i11
  %tmp_239 = sub i11 %p_shl_cast, %p_shl1_cast
  %tmp_268_cast = sext i11 %tmp_239 to i12
  br label %.preheader4

.preheader4.loopexit:                             ; preds = %.preheader
  br label %.preheader4

.preheader4:                                      ; preds = %.preheader4.loopexit, %.preheader4.preheader
  %h = phi i3 [ 0, %.preheader4.preheader ], [ %h_13, %.preheader4.loopexit ]
  %exitcond2 = icmp eq i3 %h, -2
  %empty_72 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 6, i64 6, i64 6)
  %h_13 = add i3 %h, 1
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_cast9 = zext i3 %h to i13
  %tmp_cast = zext i3 %h to i12
  %tmp_241 = add i12 %tmp_cast, %tmp_268_cast
  %tmp_242 = trunc i12 %tmp_241 to i10
  %p_shl6_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_242, i3 0)
  %p_shl7_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_241, i1 false)
  %tmp_243 = sub i13 %p_shl6_cast, %p_shl7_cast
  %tmp_244 = add i13 %tmp_cast9, %tmp_263_cast
  %tmp_245 = trunc i13 %tmp_244 to i11
  %p_shl4_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_245, i3 0)
  %p_shl5_cast = call i14 @_ssdm_op_BitConcatenate.i14.i13.i1(i13 %tmp_244, i1 false)
  %tmp_246 = sub i14 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w = phi i3 [ %w_13, %._crit_edge ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i3 %w, -2
  %empty_73 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 6, i64 6, i64 6)
  %w_13 = add i3 %w, 1
  br i1 %exitcond, label %.preheader4.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  br i1 %tmp_240, label %2, label %._crit_edge

; <label>:2                                       ; preds = %1
  %tmp_176_cast8 = zext i3 %w to i14
  %tmp_176_cast = zext i3 %w to i13
  %tmp_247 = add i13 %tmp_243, %tmp_176_cast
  %tmp_277_cast = zext i13 %tmp_247 to i64
  %right_V_addr = getelementptr [3456 x i8]* %right_V, i64 0, i64 %tmp_277_cast
  %tmp_248 = add i14 %tmp_246, %tmp_176_cast8
  %tmp_278_cast = zext i14 %tmp_248 to i64
  %output_V_addr = getelementptr [6912 x i8]* %output_V, i64 0, i64 %tmp_278_cast
  %right_V_load = load i8* %right_V_addr, align 1
  store i8 %right_V_load, i8* %output_V_addr, align 1
  br label %._crit_edge

._crit_edge:                                      ; preds = %2, %1
  br label %.preheader

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_96_p([3456 x i8]* nocapture %left_V, [6912 x i8]* nocapture %output_V) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader6
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i8 [ 0, %0 ], [ %co_14, %.loopexit.loopexit ]
  %tmp_246 = trunc i8 %co to i1
  %exitcond5 = icmp eq i8 %co, -64
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 192, i64 192, i64 192)
  %co_14 = add i8 1, %co
  br i1 %exitcond5, label %5, label %.preheader6.preheader

.preheader6.preheader:                            ; preds = %.loopexit
  %tmp = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %co, i3 0)
  %p_shl2_cast = zext i11 %tmp to i12
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %co, i1 false)
  %p_shl3_cast = zext i9 %tmp_s to i12
  %tmp_249 = sub i12 %p_shl2_cast, %p_shl3_cast
  %tmp_280_cast = sext i12 %tmp_249 to i13
  %tmp_250 = call i7 @_ssdm_op_PartSelect.i7.i8.i32.i32(i8 %co, i32 1, i32 7)
  %tmp_251 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_250, i3 0)
  %p_shl_cast = zext i10 %tmp_251 to i11
  %tmp_252 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp_250, i1 false)
  %p_shl1_cast = zext i8 %tmp_252 to i11
  %tmp_253 = sub i11 %p_shl_cast, %p_shl1_cast
  %tmp_285_cast = sext i11 %tmp_253 to i12
  br label %.preheader6

.preheader6.loopexit:                             ; preds = %.preheader
  br label %.preheader6

.preheader6:                                      ; preds = %.preheader6.loopexit, %.preheader6.preheader
  %h = phi i3 [ 0, %.preheader6.preheader ], [ %h_14, %.preheader6.loopexit ]
  %exitcond4 = icmp eq i3 %h, -2
  %empty_74 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 6, i64 6, i64 6)
  %h_14 = add i3 %h, 1
  br i1 %exitcond4, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader6
  %tmp_cast9 = zext i3 %h to i13
  %tmp_cast = zext i3 %h to i12
  %tmp_254 = add i12 %tmp_cast, %tmp_285_cast
  %tmp_247 = trunc i12 %tmp_254 to i10
  %p_shl6_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_247, i3 0)
  %p_shl7_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_254, i1 false)
  %tmp_255 = sub i13 %p_shl6_cast, %p_shl7_cast
  %tmp_256 = add i13 %tmp_cast9, %tmp_280_cast
  %tmp_248 = trunc i13 %tmp_256 to i11
  %p_shl4_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_248, i3 0)
  %p_shl5_cast = call i14 @_ssdm_op_BitConcatenate.i14.i13.i1(i13 %tmp_256, i1 false)
  %tmp_257 = sub i14 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %4, %.preheader.preheader
  %w = phi i3 [ %w_14, %4 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i3 %w, -2
  %empty_75 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 6, i64 6, i64 6)
  %w_14 = add i3 %w, 1
  br i1 %exitcond, label %.preheader6.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_177_cast8 = zext i3 %w to i14
  %tmp_177_cast = zext i3 %w to i13
  %tmp_258 = add i13 %tmp_255, %tmp_177_cast
  %tmp_294_cast = zext i13 %tmp_258 to i64
  %left_V_addr = getelementptr [3456 x i8]* %left_V, i64 0, i64 %tmp_294_cast
  %tmp_259 = add i14 %tmp_257, %tmp_177_cast8
  %tmp_295_cast = zext i14 %tmp_259 to i64
  %output_V_addr = getelementptr [6912 x i8]* %output_V, i64 0, i64 %tmp_295_cast
  %buffer1_1_96_4x4_p_V = getelementptr [3456 x i8]* @buffer1_1_96_4x4_p_V, i64 0, i64 %tmp_294_cast
  br i1 %tmp_246, label %3, label %2

; <label>:2                                       ; preds = %1
  %left_V_load = load i8* %left_V_addr, align 1
  br label %4

; <label>:3                                       ; preds = %1
  %buffer1_1_96_4x4_p_V_1 = load i8* %buffer1_1_96_4x4_p_V, align 1
  br label %4

; <label>:4                                       ; preds = %3, %2
  %storemerge = phi i8 [ %left_V_load, %2 ], [ %buffer1_1_96_4x4_p_V_1, %3 ]
  store i8 %storemerge, i8* %output_V_addr, align 1
  br label %.preheader

; <label>:5                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_96_l_p([3456 x i8]* nocapture %left_V, [6912 x i8]* nocapture %output_V) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader4
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i8 [ 0, %0 ], [ %co_15, %.loopexit.loopexit ]
  %tmp_249 = trunc i8 %co to i1
  %exitcond3 = icmp eq i8 %co, -64
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 192, i64 192, i64 192)
  %co_15 = add i8 1, %co
  br i1 %exitcond3, label %3, label %.preheader4.preheader

.preheader4.preheader:                            ; preds = %.loopexit
  %tmp = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %co, i3 0)
  %p_shl2_cast = zext i11 %tmp to i12
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %co, i1 false)
  %p_shl3_cast = zext i9 %tmp_s to i12
  %tmp_260 = sub i12 %p_shl2_cast, %p_shl3_cast
  %tmp_297_cast = sext i12 %tmp_260 to i13
  %tmp_261 = call i7 @_ssdm_op_PartSelect.i7.i8.i32.i32(i8 %co, i32 1, i32 7)
  %tmp_262 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_261, i3 0)
  %p_shl_cast = zext i10 %tmp_262 to i11
  %tmp_263 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp_261, i1 false)
  %p_shl1_cast = zext i8 %tmp_263 to i11
  %tmp_264 = sub i11 %p_shl_cast, %p_shl1_cast
  %tmp_302_cast = sext i11 %tmp_264 to i12
  br label %.preheader4

.preheader4.loopexit:                             ; preds = %.preheader
  br label %.preheader4

.preheader4:                                      ; preds = %.preheader4.loopexit, %.preheader4.preheader
  %h = phi i3 [ 0, %.preheader4.preheader ], [ %h_15, %.preheader4.loopexit ]
  %exitcond2 = icmp eq i3 %h, -2
  %empty_76 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 6, i64 6, i64 6)
  %h_15 = add i3 %h, 1
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_cast9 = zext i3 %h to i13
  %tmp_cast = zext i3 %h to i12
  %tmp_265 = add i12 %tmp_cast, %tmp_302_cast
  %tmp_250 = trunc i12 %tmp_265 to i10
  %p_shl6_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_250, i3 0)
  %p_shl7_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_265, i1 false)
  %tmp_266 = sub i13 %p_shl6_cast, %p_shl7_cast
  %tmp_267 = add i13 %tmp_cast9, %tmp_297_cast
  %tmp_251 = trunc i13 %tmp_267 to i11
  %p_shl4_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_251, i3 0)
  %p_shl5_cast = call i14 @_ssdm_op_BitConcatenate.i14.i13.i1(i13 %tmp_267, i1 false)
  %tmp_268 = sub i14 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w = phi i3 [ %w_15, %._crit_edge ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i3 %w, -2
  %empty_77 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 6, i64 6, i64 6)
  %w_15 = add i3 %w, 1
  br i1 %exitcond, label %.preheader4.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  br i1 %tmp_249, label %._crit_edge, label %2

; <label>:2                                       ; preds = %1
  %tmp_178_cast8 = zext i3 %w to i14
  %tmp_178_cast = zext i3 %w to i13
  %tmp_269 = add i13 %tmp_266, %tmp_178_cast
  %tmp_311_cast = zext i13 %tmp_269 to i64
  %left_V_addr = getelementptr [3456 x i8]* %left_V, i64 0, i64 %tmp_311_cast
  %tmp_270 = add i14 %tmp_268, %tmp_178_cast8
  %tmp_312_cast = zext i14 %tmp_270 to i64
  %output_V_addr = getelementptr [6912 x i8]* %output_V, i64 0, i64 %tmp_312_cast
  %left_V_load = load i8* %left_V_addr, align 1
  store i8 %left_V_load, i8* %output_V_addr, align 1
  br label %._crit_edge

._crit_edge:                                      ; preds = %2, %1
  br label %.preheader

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_48_r_p([4800 x i8]* nocapture %right_V, [9600 x i8]* nocapture %output_V) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader4
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_16, %.loopexit.loopexit ]
  %tmp_252 = trunc i7 %co to i1
  %exitcond3 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_16 = add i7 1, %co
  br i1 %exitcond3, label %3, label %.preheader4.preheader

.preheader4.preheader:                            ; preds = %.loopexit
  %tmp = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0)
  %p_shl2_cast = zext i10 %tmp to i11
  %tmp_s = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co, i1 false)
  %p_shl3_cast = zext i8 %tmp_s to i11
  %tmp_271 = add i11 %p_shl3_cast, %p_shl2_cast
  %tmp_272 = call i6 @_ssdm_op_PartSelect.i6.i7.i32.i32(i7 %co, i32 1, i32 6)
  %tmp_273 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %tmp_272, i3 0)
  %p_shl_cast = zext i9 %tmp_273 to i10
  %tmp_274 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %tmp_272, i1 false)
  %p_shl1_cast = zext i7 %tmp_274 to i10
  %tmp_275 = add i10 %p_shl1_cast, %p_shl_cast
  br label %.preheader4

.preheader4.loopexit:                             ; preds = %.preheader
  br label %.preheader4

.preheader4:                                      ; preds = %.preheader4.loopexit, %.preheader4.preheader
  %h = phi i4 [ 0, %.preheader4.preheader ], [ %h_16, %.preheader4.loopexit ]
  %exitcond2 = icmp eq i4 %h, -6
  %empty_78 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10)
  %h_16 = add i4 %h, 1
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_cast9 = zext i4 %h to i11
  %tmp_cast = zext i4 %h to i10
  %tmp_276 = add i10 %tmp_cast, %tmp_275
  %tmp_253 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_276, i3 0)
  %p_shl6_cast = zext i13 %tmp_253 to i14
  %tmp_254 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_276, i1 false)
  %p_shl7_cast = zext i11 %tmp_254 to i14
  %tmp_277 = add i14 %p_shl6_cast, %p_shl7_cast
  %tmp_278 = add i11 %tmp_cast9, %tmp_271
  %tmp_255 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_278, i3 0)
  %p_shl4_cast = zext i14 %tmp_255 to i15
  %tmp_256 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_278, i1 false)
  %p_shl5_cast = zext i12 %tmp_256 to i15
  %tmp_279 = add i15 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w = phi i4 [ %w_16, %._crit_edge ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i4 %w, -6
  %empty_79 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10)
  %w_16 = add i4 %w, 1
  br i1 %exitcond, label %.preheader4.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  br i1 %tmp_252, label %2, label %._crit_edge

; <label>:2                                       ; preds = %1
  %tmp_179_cast8 = zext i4 %w to i15
  %tmp_179_cast = zext i4 %w to i14
  %tmp_280 = add i14 %tmp_277, %tmp_179_cast
  %tmp_328_cast = zext i14 %tmp_280 to i64
  %right_V_addr = getelementptr [4800 x i8]* %right_V, i64 0, i64 %tmp_328_cast
  %tmp_281 = add i15 %tmp_279, %tmp_179_cast8
  %tmp_329_cast = zext i15 %tmp_281 to i64
  %output_V_addr = getelementptr [9600 x i8]* %output_V, i64 0, i64 %tmp_329_cast
  %right_V_load = load i8* %right_V_addr, align 1
  store i8 %right_V_load, i8* %output_V_addr, align 1
  br label %._crit_edge

._crit_edge:                                      ; preds = %2, %1
  br label %.preheader

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_48_p([4800 x i8]* nocapture %left_V, [9600 x i8]* nocapture %output_V) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader6
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_17, %.loopexit.loopexit ]
  %tmp_257 = trunc i7 %co to i1
  %exitcond5 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_17 = add i7 1, %co
  br i1 %exitcond5, label %5, label %.preheader6.preheader

.preheader6.preheader:                            ; preds = %.loopexit
  %tmp = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0)
  %p_shl2_cast = zext i10 %tmp to i11
  %tmp_s = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co, i1 false)
  %p_shl3_cast = zext i8 %tmp_s to i11
  %tmp_282 = add i11 %p_shl3_cast, %p_shl2_cast
  %tmp_283 = call i6 @_ssdm_op_PartSelect.i6.i7.i32.i32(i7 %co, i32 1, i32 6)
  %tmp_284 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %tmp_283, i3 0)
  %p_shl_cast = zext i9 %tmp_284 to i10
  %tmp_285 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %tmp_283, i1 false)
  %p_shl1_cast = zext i7 %tmp_285 to i10
  %tmp_286 = add i10 %p_shl1_cast, %p_shl_cast
  br label %.preheader6

.preheader6.loopexit:                             ; preds = %.preheader
  br label %.preheader6

.preheader6:                                      ; preds = %.preheader6.loopexit, %.preheader6.preheader
  %h = phi i4 [ 0, %.preheader6.preheader ], [ %h_17, %.preheader6.loopexit ]
  %exitcond4 = icmp eq i4 %h, -6
  %empty_80 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10)
  %h_17 = add i4 %h, 1
  br i1 %exitcond4, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader6
  %tmp_cast9 = zext i4 %h to i11
  %tmp_cast = zext i4 %h to i10
  %tmp_287 = add i10 %tmp_cast, %tmp_286
  %tmp_258 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_287, i3 0)
  %p_shl6_cast = zext i13 %tmp_258 to i14
  %tmp_259 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_287, i1 false)
  %p_shl7_cast = zext i11 %tmp_259 to i14
  %tmp_288 = add i14 %p_shl6_cast, %p_shl7_cast
  %tmp_289 = add i11 %tmp_cast9, %tmp_282
  %tmp_260 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_289, i3 0)
  %p_shl4_cast = zext i14 %tmp_260 to i15
  %tmp_261 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_289, i1 false)
  %p_shl5_cast = zext i12 %tmp_261 to i15
  %tmp_290 = add i15 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %4, %.preheader.preheader
  %w = phi i4 [ %w_17, %4 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i4 %w, -6
  %empty_81 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10)
  %w_17 = add i4 %w, 1
  br i1 %exitcond, label %.preheader6.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_180_cast8 = zext i4 %w to i15
  %tmp_180_cast = zext i4 %w to i14
  %tmp_291 = add i14 %tmp_288, %tmp_180_cast
  %tmp_345_cast = zext i14 %tmp_291 to i64
  %left_V_addr = getelementptr [4800 x i8]* %left_V, i64 0, i64 %tmp_345_cast
  %tmp_292 = add i15 %tmp_290, %tmp_180_cast8
  %tmp_346_cast = zext i15 %tmp_292 to i64
  %output_V_addr = getelementptr [9600 x i8]* %output_V, i64 0, i64 %tmp_346_cast
  %buffer1_1_48_8x8_p_V = getelementptr [4800 x i8]* @buffer1_1_48_8x8_p_V, i64 0, i64 %tmp_345_cast
  br i1 %tmp_257, label %3, label %2

; <label>:2                                       ; preds = %1
  %left_V_load = load i8* %left_V_addr, align 1
  br label %4

; <label>:3                                       ; preds = %1
  %buffer1_1_48_8x8_p_V_1 = load i8* %buffer1_1_48_8x8_p_V, align 1
  br label %4

; <label>:4                                       ; preds = %3, %2
  %storemerge = phi i8 [ %left_V_load, %2 ], [ %buffer1_1_48_8x8_p_V_1, %3 ]
  store i8 %storemerge, i8* %output_V_addr, align 1
  br label %.preheader

; <label>:5                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_48_l_p([4800 x i8]* nocapture %left_V, [9600 x i8]* nocapture %output_V) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader4
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_18, %.loopexit.loopexit ]
  %tmp_262 = trunc i7 %co to i1
  %exitcond3 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_18 = add i7 1, %co
  br i1 %exitcond3, label %3, label %.preheader4.preheader

.preheader4.preheader:                            ; preds = %.loopexit
  %tmp = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0)
  %p_shl2_cast = zext i10 %tmp to i11
  %tmp_s = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co, i1 false)
  %p_shl3_cast = zext i8 %tmp_s to i11
  %tmp_293 = add i11 %p_shl3_cast, %p_shl2_cast
  %tmp_294 = call i6 @_ssdm_op_PartSelect.i6.i7.i32.i32(i7 %co, i32 1, i32 6)
  %tmp_295 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %tmp_294, i3 0)
  %p_shl_cast = zext i9 %tmp_295 to i10
  %tmp_296 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %tmp_294, i1 false)
  %p_shl1_cast = zext i7 %tmp_296 to i10
  %tmp_297 = add i10 %p_shl1_cast, %p_shl_cast
  br label %.preheader4

.preheader4.loopexit:                             ; preds = %.preheader
  br label %.preheader4

.preheader4:                                      ; preds = %.preheader4.loopexit, %.preheader4.preheader
  %h = phi i4 [ 0, %.preheader4.preheader ], [ %h_18, %.preheader4.loopexit ]
  %exitcond2 = icmp eq i4 %h, -6
  %empty_82 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10)
  %h_18 = add i4 %h, 1
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_cast9 = zext i4 %h to i11
  %tmp_cast = zext i4 %h to i10
  %tmp_298 = add i10 %tmp_cast, %tmp_297
  %tmp_263 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_298, i3 0)
  %p_shl6_cast = zext i13 %tmp_263 to i14
  %tmp_264 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_298, i1 false)
  %p_shl7_cast = zext i11 %tmp_264 to i14
  %tmp_299 = add i14 %p_shl6_cast, %p_shl7_cast
  %tmp_300 = add i11 %tmp_cast9, %tmp_293
  %tmp_265 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_300, i3 0)
  %p_shl4_cast = zext i14 %tmp_265 to i15
  %tmp_266 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_300, i1 false)
  %p_shl5_cast = zext i12 %tmp_266 to i15
  %tmp_301 = add i15 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w = phi i4 [ %w_18, %._crit_edge ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i4 %w, -6
  %empty_83 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10)
  %w_18 = add i4 %w, 1
  br i1 %exitcond, label %.preheader4.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  br i1 %tmp_262, label %._crit_edge, label %2

; <label>:2                                       ; preds = %1
  %tmp_181_cast8 = zext i4 %w to i15
  %tmp_181_cast = zext i4 %w to i14
  %tmp_302 = add i14 %tmp_299, %tmp_181_cast
  %tmp_362_cast = zext i14 %tmp_302 to i64
  %left_V_addr = getelementptr [4800 x i8]* %left_V, i64 0, i64 %tmp_362_cast
  %tmp_303 = add i15 %tmp_301, %tmp_181_cast8
  %tmp_363_cast = zext i15 %tmp_303 to i64
  %output_V_addr = getelementptr [9600 x i8]* %output_V, i64 0, i64 %tmp_363_cast
  %left_V_load = load i8* %left_V_addr, align 1
  store i8 %left_V_load, i8* %output_V_addr, align 1
  br label %._crit_edge

._crit_edge:                                      ; preds = %2, %1
  br label %.preheader

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_24_r_p([7776 x i8]* nocapture %right_V, [15552 x i8]* nocapture %output_V) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader4
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_19, %.loopexit.loopexit ]
  %tmp_267 = trunc i6 %co to i1
  %exitcond3 = icmp eq i6 %co, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_19 = add i6 1, %co
  br i1 %exitcond3, label %3, label %.preheader4.preheader

.preheader4.preheader:                            ; preds = %.loopexit
  %tmp = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co, i4 0)
  %p_shl2_cast = zext i10 %tmp to i11
  %tmp_s = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co, i1 false)
  %p_shl3_cast = zext i7 %tmp_s to i11
  %tmp_304 = add i11 %p_shl3_cast, %p_shl2_cast
  %tmp_305 = call i5 @_ssdm_op_PartSelect.i5.i6.i32.i32(i6 %co, i32 1, i32 5)
  %tmp_306 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %tmp_305, i4 0)
  %p_shl_cast = zext i9 %tmp_306 to i10
  %tmp_307 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %tmp_305, i1 false)
  %p_shl1_cast = zext i6 %tmp_307 to i10
  %tmp_308 = add i10 %p_shl1_cast, %p_shl_cast
  br label %.preheader4

.preheader4.loopexit:                             ; preds = %.preheader
  br label %.preheader4

.preheader4:                                      ; preds = %.preheader4.loopexit, %.preheader4.preheader
  %h = phi i5 [ 0, %.preheader4.preheader ], [ %h_19, %.preheader4.loopexit ]
  %exitcond2 = icmp eq i5 %h, -14
  %empty_84 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 18, i64 18, i64 18)
  %h_19 = add i5 %h, 1
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_cast9 = zext i5 %h to i11
  %tmp_cast = zext i5 %h to i10
  %tmp_309 = add i10 %tmp_cast, %tmp_308
  %p_shl6_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_309, i4 0)
  %tmp_268 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_309, i1 false)
  %p_shl7_cast = zext i11 %tmp_268 to i14
  %tmp_310 = add i14 %p_shl6_cast, %p_shl7_cast
  %tmp_311 = add i11 %tmp_cast9, %tmp_304
  %p_shl4_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_311, i4 0)
  %tmp_269 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_311, i1 false)
  %p_shl5_cast = zext i12 %tmp_269 to i15
  %tmp_312 = add i15 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w = phi i5 [ %w_19, %._crit_edge ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i5 %w, -14
  %empty_85 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 18, i64 18, i64 18)
  %w_19 = add i5 %w, 1
  br i1 %exitcond, label %.preheader4.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  br i1 %tmp_267, label %2, label %._crit_edge

; <label>:2                                       ; preds = %1
  %tmp_182_cast8 = zext i5 %w to i15
  %tmp_182_cast = zext i5 %w to i14
  %tmp_313 = add i14 %tmp_310, %tmp_182_cast
  %tmp_379_cast = zext i14 %tmp_313 to i64
  %right_V_addr = getelementptr [7776 x i8]* %right_V, i64 0, i64 %tmp_379_cast
  %tmp_314 = add i15 %tmp_312, %tmp_182_cast8
  %tmp_380_cast = zext i15 %tmp_314 to i64
  %output_V_addr = getelementptr [15552 x i8]* %output_V, i64 0, i64 %tmp_380_cast
  %right_V_load = load i8* %right_V_addr, align 1
  store i8 %right_V_load, i8* %output_V_addr, align 1
  br label %._crit_edge

._crit_edge:                                      ; preds = %2, %1
  br label %.preheader

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_24_p([7776 x i8]* nocapture %left_V, [15552 x i8]* nocapture %output_V) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader6
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_20, %.loopexit.loopexit ]
  %tmp_270 = trunc i6 %co to i1
  %exitcond5 = icmp eq i6 %co, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_20 = add i6 1, %co
  br i1 %exitcond5, label %5, label %.preheader6.preheader

.preheader6.preheader:                            ; preds = %.loopexit
  %tmp = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co, i4 0)
  %p_shl2_cast = zext i10 %tmp to i11
  %tmp_s = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co, i1 false)
  %p_shl3_cast = zext i7 %tmp_s to i11
  %tmp_315 = add i11 %p_shl3_cast, %p_shl2_cast
  %tmp_316 = call i5 @_ssdm_op_PartSelect.i5.i6.i32.i32(i6 %co, i32 1, i32 5)
  %tmp_317 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %tmp_316, i4 0)
  %p_shl_cast = zext i9 %tmp_317 to i10
  %tmp_318 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %tmp_316, i1 false)
  %p_shl1_cast = zext i6 %tmp_318 to i10
  %tmp_319 = add i10 %p_shl1_cast, %p_shl_cast
  br label %.preheader6

.preheader6.loopexit:                             ; preds = %.preheader
  br label %.preheader6

.preheader6:                                      ; preds = %.preheader6.loopexit, %.preheader6.preheader
  %h = phi i5 [ 0, %.preheader6.preheader ], [ %h_20, %.preheader6.loopexit ]
  %exitcond4 = icmp eq i5 %h, -14
  %empty_86 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 18, i64 18, i64 18)
  %h_20 = add i5 %h, 1
  br i1 %exitcond4, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader6
  %tmp_cast9 = zext i5 %h to i11
  %tmp_cast = zext i5 %h to i10
  %tmp_320 = add i10 %tmp_cast, %tmp_319
  %p_shl6_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_320, i4 0)
  %tmp_271 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_320, i1 false)
  %p_shl7_cast = zext i11 %tmp_271 to i14
  %tmp_321 = add i14 %p_shl6_cast, %p_shl7_cast
  %tmp_322 = add i11 %tmp_cast9, %tmp_315
  %p_shl4_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_322, i4 0)
  %tmp_272 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_322, i1 false)
  %p_shl5_cast = zext i12 %tmp_272 to i15
  %tmp_323 = add i15 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %4, %.preheader.preheader
  %w = phi i5 [ %w_20, %4 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i5 %w, -14
  %empty_87 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 18, i64 18, i64 18)
  %w_20 = add i5 %w, 1
  br i1 %exitcond, label %.preheader6.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_183_cast8 = zext i5 %w to i15
  %tmp_183_cast = zext i5 %w to i14
  %tmp_324 = add i14 %tmp_321, %tmp_183_cast
  %tmp_396_cast = zext i14 %tmp_324 to i64
  %left_V_addr = getelementptr [7776 x i8]* %left_V, i64 0, i64 %tmp_396_cast
  %tmp_325 = add i15 %tmp_323, %tmp_183_cast8
  %tmp_397_cast = zext i15 %tmp_325 to i64
  %output_V_addr = getelementptr [15552 x i8]* %output_V, i64 0, i64 %tmp_397_cast
  %buffer1_1_24_16x16_p = getelementptr [7776 x i8]* @buffer1_1_24_16x16_p, i64 0, i64 %tmp_396_cast
  br i1 %tmp_270, label %3, label %2

; <label>:2                                       ; preds = %1
  %left_V_load = load i8* %left_V_addr, align 1
  br label %4

; <label>:3                                       ; preds = %1
  %buffer1_1_24_16x16_p_1 = load i8* %buffer1_1_24_16x16_p, align 1
  br label %4

; <label>:4                                       ; preds = %3, %2
  %storemerge = phi i8 [ %left_V_load, %2 ], [ %buffer1_1_24_16x16_p_1, %3 ]
  store i8 %storemerge, i8* %output_V_addr, align 1
  br label %.preheader

; <label>:5                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_24_l_p([7776 x i8]* nocapture %left_V, [15552 x i8]* nocapture %output_V) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader4
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_21, %.loopexit.loopexit ]
  %tmp_273 = trunc i6 %co to i1
  %exitcond3 = icmp eq i6 %co, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_21 = add i6 1, %co
  br i1 %exitcond3, label %3, label %.preheader4.preheader

.preheader4.preheader:                            ; preds = %.loopexit
  %tmp = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co, i4 0)
  %p_shl2_cast = zext i10 %tmp to i11
  %tmp_s = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co, i1 false)
  %p_shl3_cast = zext i7 %tmp_s to i11
  %tmp_326 = add i11 %p_shl3_cast, %p_shl2_cast
  %tmp_327 = call i5 @_ssdm_op_PartSelect.i5.i6.i32.i32(i6 %co, i32 1, i32 5)
  %tmp_328 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %tmp_327, i4 0)
  %p_shl_cast = zext i9 %tmp_328 to i10
  %tmp_329 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %tmp_327, i1 false)
  %p_shl1_cast = zext i6 %tmp_329 to i10
  %tmp_330 = add i10 %p_shl1_cast, %p_shl_cast
  br label %.preheader4

.preheader4.loopexit:                             ; preds = %.preheader
  br label %.preheader4

.preheader4:                                      ; preds = %.preheader4.loopexit, %.preheader4.preheader
  %h = phi i5 [ 0, %.preheader4.preheader ], [ %h_21, %.preheader4.loopexit ]
  %exitcond2 = icmp eq i5 %h, -14
  %empty_88 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 18, i64 18, i64 18)
  %h_21 = add i5 %h, 1
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_cast9 = zext i5 %h to i11
  %tmp_cast = zext i5 %h to i10
  %tmp_331 = add i10 %tmp_cast, %tmp_330
  %p_shl6_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_331, i4 0)
  %tmp_274 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_331, i1 false)
  %p_shl7_cast = zext i11 %tmp_274 to i14
  %tmp_332 = add i14 %p_shl6_cast, %p_shl7_cast
  %tmp_333 = add i11 %tmp_cast9, %tmp_326
  %p_shl4_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_333, i4 0)
  %tmp_275 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_333, i1 false)
  %p_shl5_cast = zext i12 %tmp_275 to i15
  %tmp_334 = add i15 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w = phi i5 [ %w_21, %._crit_edge ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i5 %w, -14
  %empty_89 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 18, i64 18, i64 18)
  %w_21 = add i5 %w, 1
  br i1 %exitcond, label %.preheader4.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  br i1 %tmp_273, label %._crit_edge, label %2

; <label>:2                                       ; preds = %1
  %tmp_184_cast8 = zext i5 %w to i15
  %tmp_184_cast = zext i5 %w to i14
  %tmp_335 = add i14 %tmp_332, %tmp_184_cast
  %tmp_413_cast = zext i14 %tmp_335 to i64
  %left_V_addr = getelementptr [7776 x i8]* %left_V, i64 0, i64 %tmp_413_cast
  %tmp_336 = add i15 %tmp_334, %tmp_184_cast8
  %tmp_414_cast = zext i15 %tmp_336 to i64
  %output_V_addr = getelementptr [15552 x i8]* %output_V, i64 0, i64 %tmp_414_cast
  %left_V_load = load i8* %left_V_addr, align 1
  store i8 %left_V_load, i8* %output_V_addr, align 1
  br label %._crit_edge

._crit_edge:                                      ; preds = %2, %1
  br label %.preheader

; <label>:3                                       ; preds = %.loopexit
  ret void
}

declare i9 @llvm.part.select.i9(i9, i32, i32) nounwind readnone

declare i8 @llvm.part.select.i8(i8, i32, i32) nounwind readnone

declare i7 @llvm.part.select.i7(i7, i32, i32) nounwind readnone

declare i6 @llvm.part.select.i6(i6, i32, i32) nounwind readnone

declare i5 @llvm.part.select.i5(i5, i32, i32) nounwind readnone

declare i16 @llvm.part.select.i16(i16, i32, i32) nounwind readnone

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

define internal fastcc void @fc(i8* %weight_V, i32 %fc_weight_V11, [10 x i8]* nocapture %bias_V, i8* %output_V, i32 %fc_output_V15) {
  call void (...)* @_ssdm_op_SpecInterface(i8* %output_V, [6 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str45, i32 0, i32 1000, [18 x i8]* @p_str46, [6 x i8]* @p_str47, [1 x i8]* @p_str45, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str45, [1 x i8]* @p_str45)
  call void (...)* @_ssdm_op_SpecInterface(i8* %weight_V, [6 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str45, i32 0, i32 5120, [19 x i8]* @p_str48, [6 x i8]* @p_str47, [1 x i8]* @p_str45, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str45, [1 x i8]* @p_str45)
  %fc_output_V15_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %fc_output_V15)
  %fc_weight_V11_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %fc_weight_V11)
  %sext2 = sext i32 %fc_output_V15_read to i64
  %output_V_addr = getelementptr i8* %output_V, i64 %sext2
  %sext_cast = sext i32 %fc_weight_V11_read to i33
  %output_V_addr_wr_req = call i1 @_ssdm_op_WriteReq.m_axi.i8P(i8* %output_V_addr, i32 10)
  br label %1

; <label>:1                                       ; preds = %_ifconv1, %0
  %co = phi i4 [ 0, %0 ], [ %co_22, %_ifconv1 ]
  %exitcond7 = icmp eq i4 %co, -6
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10)
  %co_22 = add i4 %co, 1
  br i1 %exitcond7, label %3, label %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i

_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i: ; preds = %1
  %tmp = zext i4 %co to i64
  %tmp_337 = call i13 @_ssdm_op_BitConcatenate.i13.i4.i9(i4 %co, i9 0)
  %tmp_276 = zext i13 %tmp_337 to i33
  %tmp_277 = add i33 %tmp_276, %sext_cast
  %tmp_278 = sext i33 %tmp_277 to i64
  %weight_V_addr = getelementptr i8* %weight_V, i64 %tmp_278
  %p_rd_req = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %weight_V_addr, i32 512)
  br label %2

; <label>:2                                       ; preds = %_ifconv, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i
  %p_Val2_s = phi i8 [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i ], [ %sum_V, %_ifconv ]
  %ci = phi i10 [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i ], [ %ci_7, %_ifconv ]
  %exitcond = icmp eq i10 %ci, -512
  %empty_90 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512)
  %ci_7 = add i10 %ci, 1
  br i1 %exitcond, label %_ifconv1, label %_ifconv

_ifconv:                                          ; preds = %2
  %tmp_187 = zext i10 %ci to i64
  %weight_V_addr_read = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %weight_V_addr)
  %OP1_V = sext i8 %weight_V_addr_read to i16
  %avgpool_output_V_add = getelementptr [512 x i8]* @avgpool_output_V, i64 0, i64 %tmp_187
  %avgpool_output_V_loa = load i8* %avgpool_output_V_add, align 1
  %OP2_V = sext i8 %avgpool_output_V_loa to i16
  %p_Val2_89 = mul i16 %OP2_V, %OP1_V
  %tmp_188 = call i14 @_ssdm_op_BitConcatenate.i14.i8.i6(i8 %p_Val2_s, i6 0)
  %tmp_274_cast = sext i14 %tmp_188 to i16
  %p_Val2_90 = add i16 %p_Val2_89, %tmp_274_cast
  %signbit = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_90, i32 15)
  %p_Val2_91 = call i8 @_ssdm_op_PartSelect.i8.i16.i32.i32(i16 %p_Val2_90, i32 6, i32 13)
  %tmp_282 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_89, i32 5)
  %tmp_189 = zext i1 %tmp_282 to i8
  %tmp_283 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_90, i32 13)
  %p_Val2_92 = add i8 %tmp_189, %p_Val2_91
  %newsignbit = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %p_Val2_92, i32 7)
  %tmp_190 = xor i1 %newsignbit, true
  %carry = and i1 %tmp_283, %tmp_190
  %tmp_285 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_90, i32 14)
  %tmp_179 = call i2 @_ssdm_op_PartSelect.i2.i16.i32.i32(i16 %p_Val2_90, i32 14, i32 15)
  %Range1_all_ones = icmp eq i2 %tmp_179, -1
  %Range1_all_zeros = icmp eq i2 %tmp_179, 0
  %deleted_zeros = select i1 %carry, i1 %Range1_all_ones, i1 %Range1_all_zeros
  %tmp_191 = xor i1 %tmp_285, true
  %p_41_i_i = and i1 %signbit, %tmp_191
  %deleted_ones = select i1 %carry, i1 %p_41_i_i, i1 %Range1_all_ones
  %p_38_i_i = and i1 %carry, %Range1_all_ones
  %p_not_i_i = xor i1 %deleted_zeros, true
  %brmerge_i_i4 = or i1 %newsignbit, %p_not_i_i
  %tmp_192 = xor i1 %signbit, true
  %overflow = and i1 %brmerge_i_i4, %tmp_192
  %brmerge40_demorgan_i = and i1 %newsignbit, %deleted_ones
  %tmp2_demorgan = or i1 %p_38_i_i, %brmerge40_demorgan_i
  %tmp2 = xor i1 %tmp2_demorgan, true
  %underflow = and i1 %signbit, %tmp2
  %brmerge_i_i_i = or i1 %underflow, %overflow
  %tmp3 = or i1 %brmerge40_demorgan_i, %tmp_192
  %underflow_not = or i1 %tmp3, %p_38_i_i
  %p_Val2_97_mux = select i1 %brmerge_i_i_i, i8 127, i8 %p_Val2_92
  %p_Val2_s_91 = select i1 %underflow, i8 -128, i8 %p_Val2_92
  %sum_V = select i1 %underflow_not, i8 %p_Val2_97_mux, i8 %p_Val2_s_91
  br label %2

_ifconv1:                                         ; preds = %2
  %tmp_s = sext i8 %p_Val2_s to i9
  %bias_V_addr = getelementptr [10 x i8]* %bias_V, i64 0, i64 %tmp
  %p_Val2_86 = load i8* %bias_V_addr, align 1
  %tmp_185 = sext i8 %p_Val2_86 to i9
  %p_Val2_87 = add i9 %tmp_185, %tmp_s
  %isneg = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %p_Val2_87, i32 8)
  %result_V = add i8 %p_Val2_86, %p_Val2_s
  %newsignbit_13 = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %result_V, i32 7)
  %tmp_186 = xor i1 %newsignbit_13, true
  %underflow_13 = and i1 %isneg, %tmp_186
  %brmerge_i_i = xor i1 %isneg, %newsignbit_13
  %isneg_not = xor i1 %isneg, true
  %brmerge1 = or i1 %newsignbit_13, %isneg_not
  %result_V_mux = select i1 %brmerge_i_i, i8 127, i8 %result_V
  %p_result_V = select i1 %underflow_13, i8 -128, i8 %result_V
  %result_1 = select i1 %brmerge1, i8 %result_V_mux, i8 %p_result_V
  call void @_ssdm_op_Write.m_axi.i8P(i8* %output_V_addr, i8 %result_1, i1 true)
  br label %1

; <label>:3                                       ; preds = %1
  %output_V_addr_wr_res = call i1 @_ssdm_op_WriteResp.m_axi.i8P(i8* %output_V_addr)
  ret void
}

define internal fastcc void @conv_last([3072 x i8]* nocapture %input_V, i8* %weight_V, i32 %conv_last_weight_V9, [512 x i8]* nocapture %bias_V, [8192 x i8]* nocapture %output_V) {
  call void (...)* @_ssdm_op_SpecInterface(i8* %weight_V, [6 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str45, i32 0, i32 98304, [19 x i8]* @p_str48, [6 x i8]* @p_str47, [1 x i8]* @p_str45, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str45, [1 x i8]* @p_str45)
  %conv_last_weight_V9_s = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %conv_last_weight_V9)
  %sext_cast = sext i32 %conv_last_weight_V9_s to i33
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader61
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i10 [ 0, %0 ], [ %co_23, %.loopexit.loopexit ]
  %exitcond8 = icmp eq i10 %co, -512
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512)
  %co_23 = add i10 %co, 1
  br i1 %exitcond8, label %2, label %.preheader61.preheader

.preheader61.preheader:                           ; preds = %.loopexit
  %tmp = zext i10 %co to i64
  %tmp_s = call i18 @_ssdm_op_BitConcatenate.i18.i10.i8(i10 %co, i8 0)
  %p_shl_cast = zext i18 %tmp_s to i19
  %tmp_338 = call i16 @_ssdm_op_BitConcatenate.i16.i10.i6(i10 %co, i6 0)
  %p_shl1_cast = zext i16 %tmp_338 to i19
  %tmp_339 = sub i19 %p_shl_cast, %p_shl1_cast
  %tmp_340 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %co, i2 0)
  %tmp_422_cast = zext i12 %tmp_340 to i13
  %bias_V_addr = getelementptr [512 x i8]* %bias_V, i64 0, i64 %tmp
  br label %.preheader61

.preheader61.loopexit:                            ; preds = %.preheader
  br label %.preheader61

.preheader61:                                     ; preds = %.preheader61.loopexit, %.preheader61.preheader
  %h = phi i3 [ 0, %.preheader61.preheader ], [ %h_22, %.preheader61.loopexit ]
  %exitcond9 = icmp eq i3 %h, -4
  %empty_92 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %h_22 = add i3 %h, 1
  br i1 %exitcond9, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader61
  %tmp_cast1 = zext i3 %h to i11
  %tmp_cast = zext i3 %h to i13
  %tmp_341 = add i13 %tmp_cast, %tmp_422_cast
  %tmp_425_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_341, i2 0)
  br label %.preheader

.preheader:                                       ; preds = %_ifconv1, %.preheader.preheader
  %w = phi i3 [ %w_22, %_ifconv1 ], [ 0, %.preheader.preheader ]
  %exitcond1 = icmp eq i3 %w, -4
  %empty_93 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %w_22 = add i3 %w, 1
  br i1 %exitcond1, label %.preheader61.loopexit, label %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78

_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78: ; preds = %.preheader
  %tmp_193_cast1 = zext i3 %w to i13
  %tmp_193_cast = zext i3 %w to i15
  %tmp_342 = add i15 %tmp_425_cast, %tmp_193_cast
  %tmp_426_cast = zext i15 %tmp_342 to i64
  %output_V_addr = getelementptr [8192 x i8]* %output_V, i64 0, i64 %tmp_426_cast
  %tmp_286 = sext i19 %tmp_339 to i33
  %tmp_287 = add i33 %tmp_286, %sext_cast
  %tmp_288 = sext i33 %tmp_287 to i64
  %weight_V_addr = getelementptr i8* %weight_V, i64 %tmp_288
  %p_rd_req = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %weight_V_addr, i32 192)
  br label %1

; <label>:1                                       ; preds = %_ifconv, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78
  %p_Val2_s = phi i8 [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78 ], [ %sum_V, %_ifconv ]
  %ci = phi i8 [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i78 ], [ %ci_8, %_ifconv ]
  %exitcond = icmp eq i8 %ci, -64
  %empty_94 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 192, i64 192, i64 192)
  %ci_8 = add i8 %ci, 1
  br i1 %exitcond, label %_ifconv1, label %_ifconv

_ifconv:                                          ; preds = %1
  %tmp_343 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %ci, i2 0)
  %tmp_428_cast = zext i10 %tmp_343 to i11
  %tmp_344 = add i11 %tmp_cast1, %tmp_428_cast
  %tmp_431_cast = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_344, i2 0)
  %tmp_345 = add i13 %tmp_193_cast1, %tmp_431_cast
  %tmp_432_cast = zext i13 %tmp_345 to i64
  %input_V_addr = getelementptr [3072 x i8]* %input_V, i64 0, i64 %tmp_432_cast
  %weight_V_addr_read = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %weight_V_addr)
  %OP1_V = sext i8 %weight_V_addr_read to i16
  %input_V_load = load i8* %input_V_addr, align 1
  %OP2_V = sext i8 %input_V_load to i16
  %p_Val2_96 = mul i16 %OP1_V, %OP2_V
  %tmp_199 = call i14 @_ssdm_op_BitConcatenate.i14.i8.i6(i8 %p_Val2_s, i6 0)
  %tmp_289_cast = sext i14 %tmp_199 to i16
  %p_Val2_97 = add i16 %tmp_289_cast, %p_Val2_96
  %signbit = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_97, i32 15)
  %p_Val2_98 = call i8 @_ssdm_op_PartSelect.i8.i16.i32.i32(i16 %p_Val2_97, i32 6, i32 13)
  %tmp_293 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_96, i32 5)
  %tmp_200 = zext i1 %tmp_293 to i8
  %tmp_294 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_97, i32 13)
  %p_Val2_99 = add i8 %p_Val2_98, %tmp_200
  %newsignbit = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %p_Val2_99, i32 7)
  %tmp_201 = xor i1 %newsignbit, true
  %carry = and i1 %tmp_294, %tmp_201
  %tmp_296 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_97, i32 14)
  %tmp_182 = call i2 @_ssdm_op_PartSelect.i2.i16.i32.i32(i16 %p_Val2_97, i32 14, i32 15)
  %Range1_all_ones = icmp eq i2 %tmp_182, -1
  %Range1_all_zeros = icmp eq i2 %tmp_182, 0
  %deleted_zeros = select i1 %carry, i1 %Range1_all_ones, i1 %Range1_all_zeros
  %tmp_202 = xor i1 %tmp_296, true
  %p_41_i_i = and i1 %signbit, %tmp_202
  %deleted_ones = select i1 %carry, i1 %p_41_i_i, i1 %Range1_all_ones
  %p_38_i_i = and i1 %carry, %Range1_all_ones
  %p_not_i_i = xor i1 %deleted_zeros, true
  %brmerge_i_i5 = or i1 %newsignbit, %p_not_i_i
  %tmp_203 = xor i1 %signbit, true
  %overflow = and i1 %brmerge_i_i5, %tmp_203
  %brmerge40_demorgan_i = and i1 %newsignbit, %deleted_ones
  %tmp2_demorgan = or i1 %p_38_i_i, %brmerge40_demorgan_i
  %tmp2 = xor i1 %tmp2_demorgan, true
  %underflow = and i1 %signbit, %tmp2
  %brmerge_i_i_i = or i1 %underflow, %overflow
  %tmp3 = or i1 %brmerge40_demorgan_i, %tmp_203
  %underflow_not = or i1 %tmp3, %p_38_i_i
  %p_Val2_104_mux = select i1 %brmerge_i_i_i, i8 127, i8 %p_Val2_99
  %p_Val2_s_95 = select i1 %underflow, i8 -128, i8 %p_Val2_99
  %sum_V = select i1 %underflow_not, i8 %p_Val2_104_mux, i8 %p_Val2_s_95
  br label %1

_ifconv1:                                         ; preds = %1
  %tmp_194 = sext i8 %p_Val2_s to i9
  %p_Val2_93 = load i8* %bias_V_addr, align 1
  %tmp_195 = sext i8 %p_Val2_93 to i9
  %p_Val2_94 = add i9 %tmp_195, %tmp_194
  %isneg = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %p_Val2_94, i32 8)
  %result_V = add i8 %p_Val2_93, %p_Val2_s
  %newsignbit_14 = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %result_V, i32 7)
  %tmp_196 = xor i1 %newsignbit_14, true
  %underflow_14 = and i1 %isneg, %tmp_196
  %brmerge_i_i = xor i1 %isneg, %newsignbit_14
  %isneg_not = xor i1 %isneg, true
  %brmerge9 = or i1 %newsignbit_14, %isneg_not
  %result_V_mux = select i1 %brmerge_i_i, i8 127, i8 %result_V
  %p_result_V = select i1 %underflow_14, i8 -128, i8 %result_V
  %result_1 = select i1 %brmerge9, i8 %result_V_mux, i8 %p_result_V
  %tmp_291 = trunc i8 %result_1 to i7
  %tmp_197 = icmp sgt i8 %result_1, 0
  %p_s = select i1 %tmp_197, i7 %tmp_291, i7 0
  %p_cast = zext i7 %p_s to i8
  store i8 %p_cast, i8* %output_V_addr, align 1
  br label %.preheader

; <label>:2                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @conv1_p([3468 x i8]* nocapture %input_V, i8* %weight_V, i32 %conv1_weight_V3, [24 x i8]* nocapture %bias_V, [27744 x i8]* nocapture %output_V) {
  call void (...)* @_ssdm_op_SpecInterface(i8* %weight_V, [6 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str45, i32 0, i32 648, [19 x i8]* @p_str48, [6 x i8]* @p_str47, [1 x i8]* @p_str45, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str45, [1 x i8]* @p_str45)
  %conv1_weight_V3_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %conv1_weight_V3)
  %sext = sext i32 %conv1_weight_V3_read to i64
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader67
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i5 [ 0, %0 ], [ %co_24, %.loopexit.loopexit ]
  %exitcond2 = icmp eq i5 %co, -8
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_24 = add i5 %co, 1
  br i1 %exitcond2, label %2, label %.preheader67.preheader

.preheader67.preheader:                           ; preds = %.loopexit
  %tmp = zext i5 %co to i64
  %tmp_cast = zext i5 %co to i8
  %tmp_s = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co, i2 0)
  %p_shl2_cast = zext i7 %tmp_s to i8
  %tmp_346 = sub i8 %p_shl2_cast, %tmp_cast
  %tmp_435_cast = sext i8 %tmp_346 to i9
  %tmp_347 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co, i5 0)
  %p_shl_cast = zext i10 %tmp_347 to i11
  %tmp_348 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co, i1 false)
  %p_shl1_cast = zext i6 %tmp_348 to i11
  %tmp_349 = add i11 %p_shl1_cast, %p_shl_cast
  %bias_V_addr = getelementptr [24 x i8]* %bias_V, i64 0, i64 %tmp
  br label %.preheader67

.preheader67:                                     ; preds = %1, %.preheader67.preheader
  %h = phi i6 [ %h_23, %1 ], [ 1, %.preheader67.preheader ]
  %exitcond3 = icmp eq i6 %h, -31
  %empty_96 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  br i1 %exitcond3, label %.loopexit.loopexit, label %.preheader66.preheader

.preheader66.preheader:                           ; preds = %.preheader67
  %tmp_cast_97 = zext i6 %h to i11
  %tmp_350 = add i11 %tmp_cast_97, %tmp_349
  %p_shl3_cast = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_350, i5 0)
  %tmp_297 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_350, i1 false)
  %p_shl4_cast = zext i12 %tmp_297 to i16
  %tmp_351 = add i16 %p_shl3_cast, %p_shl4_cast
  br label %.preheader66

.preheader66:                                     ; preds = %_ifconv1, %.preheader66.preheader
  %w = phi i6 [ %w_23, %_ifconv1 ], [ 1, %.preheader66.preheader ]
  %exitcond4 = icmp eq i6 %w, -31
  %empty_98 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  br i1 %exitcond4, label %1, label %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i84.preheader

_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i84.preheader: ; preds = %.preheader66
  br label %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i84

_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i84.loopexit: ; preds = %.preheader65
  br label %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i84

_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i84: ; preds = %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i84.preheader, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i84.loopexit
  %p_Val2_s = phi i8 [ %sum_1, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i84.loopexit ], [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i84.preheader ]
  %ci = phi i2 [ %ci_9, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i84.loopexit ], [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i84.preheader ]
  %exitcond5 = icmp eq i2 %ci, -1
  %empty_99 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %ci_9 = add i2 %ci, 1
  br i1 %exitcond5, label %_ifconv1, label %.preheader65.preheader

.preheader65.preheader:                           ; preds = %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i84
  %tmp_209_cast = zext i2 %ci to i9
  %tmp_353 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %ci, i5 0)
  %p_shl6_cast = zext i7 %tmp_353 to i8
  %tmp_354 = call i3 @_ssdm_op_BitConcatenate.i3.i2.i1(i2 %ci, i1 false)
  %p_shl7_cast = zext i3 %tmp_354 to i8
  %tmp_355 = add i8 %p_shl7_cast, %p_shl6_cast
  %tmp_356 = add i9 %tmp_435_cast, %tmp_209_cast
  %tmp_447_cast = sext i9 %tmp_356 to i64
  %tmp_301 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_356, i2 0)
  %p_shl5 = sext i11 %tmp_301 to i64
  %tmp_357 = sub i64 %p_shl5, %tmp_447_cast
  br label %.preheader65

.preheader65.loopexit:                            ; preds = %.preheader
  br label %.preheader65

.preheader65:                                     ; preds = %.preheader65.loopexit, %.preheader65.preheader
  %sum_1 = phi i8 [ %p_Val2_s, %.preheader65.preheader ], [ %p_Val2_103, %.preheader65.loopexit ]
  %m = phi i2 [ 0, %.preheader65.preheader ], [ %m_7, %.preheader65.loopexit ]
  %exitcond6 = icmp eq i2 %m, -1
  %empty_100 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_7 = add i2 %m, 1
  br i1 %exitcond6, label %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i84.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader65
  %tmp_210 = zext i2 %m to i64
  %tmp_358 = add i64 %tmp_357, %tmp_210
  %tmp_302 = shl i64 %tmp_358, 2
  %tmp_359 = sub i64 %tmp_302, %tmp_358
  %tmp2 = add i2 -1, %m
  %tmp2_cast = sext i2 %tmp2 to i6
  %tmp_211 = add i6 %h, %tmp2_cast
  %tmp_212_cast = zext i6 %tmp_211 to i8
  %tmp_360 = add i8 %tmp_355, %tmp_212_cast
  %p_shl8_cast = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_360, i5 0)
  %tmp_303 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_360, i1 false)
  %p_shl9_cast = zext i9 %tmp_303 to i13
  %tmp_361 = add i13 %p_shl9_cast, %p_shl8_cast
  %tmp_304 = add i64 %tmp_359, %sext
  %weight_V_addr = getelementptr i8* %weight_V, i64 %tmp_304
  %p_rd_req = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %weight_V_addr, i32 3)
  br label %.preheader

.preheader:                                       ; preds = %_ifconv, %.preheader.preheader
  %p_Val2_103 = phi i8 [ %sum_1, %.preheader.preheader ], [ %sum_V, %_ifconv ]
  %n = phi i2 [ 0, %.preheader.preheader ], [ %n_7, %_ifconv ]
  %exitcond = icmp eq i2 %n, -1
  %empty_101 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_7 = add i2 %n, 1
  br i1 %exitcond, label %.preheader65.loopexit, label %_ifconv

_ifconv:                                          ; preds = %.preheader
  %tmp3 = add i2 %n, -1
  %tmp3_cast = sext i2 %tmp3 to i6
  %tmp_214 = add i6 %tmp3_cast, %w
  %tmp_215_cast = zext i6 %tmp_214 to i13
  %tmp_362 = add i13 %tmp_215_cast, %tmp_361
  %tmp_458_cast = zext i13 %tmp_362 to i64
  %input_V_addr = getelementptr [3468 x i8]* %input_V, i64 0, i64 %tmp_458_cast
  %weight_V_addr_read = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %weight_V_addr)
  %OP1_V = sext i8 %weight_V_addr_read to i16
  %input_V_load = load i8* %input_V_addr, align 1
  %OP2_V = sext i8 %input_V_load to i16
  %p_Val2_6 = mul i16 %OP1_V, %OP2_V
  %tmp_216 = call i14 @_ssdm_op_BitConcatenate.i14.i8.i6(i8 %p_Val2_103, i6 0)
  %tmp_316_cast = sext i14 %tmp_216 to i16
  %p_Val2_104 = add i16 %tmp_316_cast, %p_Val2_6
  %signbit = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_104, i32 15)
  %p_Val2_105 = call i8 @_ssdm_op_PartSelect.i8.i16.i32.i32(i16 %p_Val2_104, i32 6, i32 13)
  %tmp_306 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_6, i32 5)
  %tmp_217 = zext i1 %tmp_306 to i8
  %tmp_307 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_104, i32 13)
  %p_Val2_106 = add i8 %p_Val2_105, %tmp_217
  %newsignbit = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %p_Val2_106, i32 7)
  %tmp_218 = xor i1 %newsignbit, true
  %carry = and i1 %tmp_307, %tmp_218
  %tmp_309 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_Val2_104, i32 14)
  %tmp_185 = call i2 @_ssdm_op_PartSelect.i2.i16.i32.i32(i16 %p_Val2_104, i32 14, i32 15)
  %Range1_all_ones = icmp eq i2 %tmp_185, -1
  %Range1_all_zeros = icmp eq i2 %tmp_185, 0
  %deleted_zeros = select i1 %carry, i1 %Range1_all_ones, i1 %Range1_all_zeros
  %tmp_219 = xor i1 %tmp_309, true
  %p_41_i_i = and i1 %signbit, %tmp_219
  %deleted_ones = select i1 %carry, i1 %p_41_i_i, i1 %Range1_all_ones
  %p_38_i_i = and i1 %carry, %Range1_all_ones
  %p_not_i_i = xor i1 %deleted_zeros, true
  %brmerge_i_i6 = or i1 %newsignbit, %p_not_i_i
  %tmp_220 = xor i1 %signbit, true
  %overflow = and i1 %brmerge_i_i6, %tmp_220
  %brmerge40_demorgan_i = and i1 %newsignbit, %deleted_ones
  %tmp4_demorgan = or i1 %p_38_i_i, %brmerge40_demorgan_i
  %tmp4 = xor i1 %tmp4_demorgan, true
  %underflow = and i1 %signbit, %tmp4
  %brmerge_i_i_i = or i1 %underflow, %overflow
  %tmp5 = or i1 %brmerge40_demorgan_i, %tmp_220
  %underflow_not = or i1 %tmp5, %p_38_i_i
  %p_Val2_112_mux = select i1 %brmerge_i_i_i, i8 127, i8 %p_Val2_106
  %p_Val2_s_102 = select i1 %underflow, i8 -128, i8 %p_Val2_106
  %sum_V = select i1 %underflow_not, i8 %p_Val2_112_mux, i8 %p_Val2_s_102
  br label %.preheader

_ifconv1:                                         ; preds = %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i84
  %tmp_204 = sext i8 %p_Val2_s to i9
  %p_Val2_100 = load i8* %bias_V_addr, align 1
  %tmp_205 = sext i8 %p_Val2_100 to i9
  %p_Val2_101 = add i9 %tmp_204, %tmp_205
  %isneg = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %p_Val2_101, i32 8)
  %result_V = add i8 %p_Val2_s, %p_Val2_100
  %newsignbit_15 = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %result_V, i32 7)
  %tmp_206 = xor i1 %newsignbit_15, true
  %underflow_15 = and i1 %isneg, %tmp_206
  %brmerge_i_i = xor i1 %isneg, %newsignbit_15
  %isneg_not = xor i1 %isneg, true
  %brmerge9 = or i1 %newsignbit_15, %isneg_not
  %result_V_mux = select i1 %brmerge_i_i, i8 127, i8 %result_V
  %p_result_V = select i1 %underflow_15, i8 -128, i8 %result_V
  %result_1 = select i1 %brmerge9, i8 %result_V_mux, i8 %p_result_V
  %tmp_300 = trunc i8 %result_1 to i7
  %tmp_207_cast = zext i6 %w to i16
  %tmp_352 = add i16 %tmp_351, %tmp_207_cast
  %tmp_443_cast = zext i16 %tmp_352 to i64
  %output_V_addr = getelementptr [27744 x i8]* %output_V, i64 0, i64 %tmp_443_cast
  %tmp_208 = icmp sgt i8 %result_1, 0
  %p_s = select i1 %tmp_208, i7 %tmp_300, i7 0
  %p_cast = zext i7 %p_s to i8
  store i8 %p_cast, i8* %output_V_addr, align 1
  %w_23 = add i6 1, %w
  br label %.preheader66

; <label>:1                                       ; preds = %.preheader66
  %h_23 = add i6 %h, 1
  br label %.preheader67

; <label>:2                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @avgpool([512 x i8]* nocapture %output_V) {
  br label %1

; <label>:1                                       ; preds = %_ifconv1, %0
  %co = phi i10 [ 0, %0 ], [ %co_25, %_ifconv1 ]
  %exitcond7 = icmp eq i10 %co, -512
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512)
  %co_25 = add i10 %co, 1
  br i1 %exitcond7, label %2, label %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i

_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i: ; preds = %1
  %tmp = zext i10 %co to i64
  %tmp_s = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %co, i2 0)
  %tmp_460_cast = zext i12 %tmp_s to i13
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i
  %p_Val2_s = phi i8 [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i ], [ %p_Val2_108, %.loopexit.loopexit ]
  %h = phi i3 [ 0, %_ZrsILi32ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit1._crit_edge.i.i ], [ %h_24, %.loopexit.loopexit ]
  %exitcond8 = icmp eq i3 %h, -4
  %empty_103 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %h_24 = add i3 %h, 1
  br i1 %exitcond8, label %_ifconv1, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.loopexit
  %tmp_cast = zext i3 %h to i13
  %tmp_364 = add i13 %tmp_cast, %tmp_460_cast
  %tmp_464_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_364, i2 0)
  br label %.preheader

.preheader:                                       ; preds = %_ifconv, %.preheader.preheader
  %p_Val2_108 = phi i8 [ %p_Val2_s, %.preheader.preheader ], [ %sum_V, %_ifconv ]
  %w = phi i3 [ 0, %.preheader.preheader ], [ %w_24, %_ifconv ]
  %exitcond = icmp eq i3 %w, -4
  %empty_104 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %w_24 = add i3 %w, 1
  br i1 %exitcond, label %.loopexit.loopexit, label %_ifconv

_ifconv:                                          ; preds = %.preheader
  %tmp_221_cast = zext i3 %w to i15
  %tmp_365 = add i15 %tmp_464_cast, %tmp_221_cast
  %tmp_465_cast = zext i15 %tmp_365 to i64
  %conv_last_output_V_a = getelementptr [8192 x i8]* @conv_last_output_V, i64 0, i64 %tmp_465_cast
  %tmp_222 = sext i8 %p_Val2_108 to i9
  %p_Val2_109 = load i8* %conv_last_output_V_a, align 1
  %tmp_223 = sext i8 %p_Val2_109 to i9
  %p_Val2_110 = add i9 %tmp_222, %tmp_223
  %isneg = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %p_Val2_110, i32 8)
  %p_Val2_111 = add i8 %p_Val2_108, %p_Val2_109
  %newsignbit = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %p_Val2_111, i32 7)
  %tmp_224 = xor i1 %newsignbit, true
  %underflow = and i1 %isneg, %tmp_224
  %brmerge_i_i_i = xor i1 %isneg, %newsignbit
  %isneg_not = xor i1 %isneg, true
  %brmerge = or i1 %newsignbit, %isneg_not
  %p_Val2_118_mux = select i1 %brmerge_i_i_i, i8 127, i8 %p_Val2_111
  %p_Val2_1 = select i1 %underflow, i8 -128, i8 %p_Val2_111
  %sum_V = select i1 %brmerge, i8 %p_Val2_118_mux, i8 %p_Val2_1
  br label %.preheader

_ifconv1:                                         ; preds = %.loopexit
  %tmp_tr = sext i8 %p_Val2_s to i9
  %tmp_310 = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %p_Val2_s, i32 7)
  %p_neg = sub i9 0, %tmp_tr
  %tmp_363 = call i5 @_ssdm_op_PartSelect.i5.i9.i32.i32(i9 %p_neg, i32 4, i32 8)
  %p_lshr_cast = zext i5 %tmp_363 to i6
  %p_neg_t = sub i6 0, %p_lshr_cast
  %tmp_13 = call i4 @_ssdm_op_PartSelect.i4.i8.i32.i32(i8 %p_Val2_s, i32 4, i32 7)
  %tmp_14 = sext i4 %tmp_13 to i5
  %p_lshr_f_cast = zext i5 %tmp_14 to i6
  %tmp_15 = select i1 %tmp_310, i6 %p_neg_t, i6 %p_lshr_f_cast
  %p_Val2_107 = sext i6 %tmp_15 to i8
  %output_V_addr = getelementptr [512 x i8]* %output_V, i64 0, i64 %tmp
  store i8 %p_Val2_107, i8* %output_V_addr, align 1
  br label %1

; <label>:2                                       ; preds = %1
  ret void
}

define weak i1 @_ssdm_op_WriteResp.m_axi.i8P(i8*) {
entry:
  ret i1 true
}

define weak i1 @_ssdm_op_WriteReq.m_axi.i8P(i8*, i32) {
entry:
  ret i1 true
}

define weak void @_ssdm_op_Write.m_axi.i8P(i8*, i8, i1) {
entry:
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

define weak void @_ssdm_op_SpecInterface(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define weak i1 @_ssdm_op_ReadReq.m_axi.i8P(i8*, i32) {
entry:
  ret i1 true
}

define weak i32 @_ssdm_op_Read.s_axilite.i32(i32) {
entry:
  ret i32 %0
}

define weak i8 @_ssdm_op_Read.m_axi.i8P(i8*) {
entry:
  %empty = load i8* %0
  ret i8 %empty
}

define weak i32 @_ssdm_op_Read.ap_auto.i32(i32) {
entry:
  ret i32 %0
}

declare i9 @_ssdm_op_PartSelect.i9.i36.i32.i32(i36, i32, i32) nounwind readnone

declare i9 @_ssdm_op_PartSelect.i9.i11.i32.i32(i11, i32, i32) nounwind readnone

declare i8 @_ssdm_op_PartSelect.i8.i36.i32.i32(i36, i32, i32) nounwind readnone

define weak i8 @_ssdm_op_PartSelect.i8.i16.i32.i32(i16, i32, i32) nounwind readnone {
entry:
  %empty = call i16 @llvm.part.select.i16(i16 %0, i32 %1, i32 %2)
  %empty_105 = trunc i16 %empty to i8
  ret i8 %empty_105
}

declare i8 @_ssdm_op_PartSelect.i8.i10.i32.i32(i10, i32, i32) nounwind readnone

declare i7 @_ssdm_op_PartSelect.i7.i9.i32.i32(i9, i32, i32) nounwind readnone

define weak i7 @_ssdm_op_PartSelect.i7.i8.i32.i32(i8, i32, i32) nounwind readnone {
entry:
  %empty = call i8 @llvm.part.select.i8(i8 %0, i32 %1, i32 %2)
  %empty_106 = trunc i8 %empty to i7
  ret i7 %empty_106
}

declare i62 @_ssdm_op_PartSelect.i62.i64.i32.i32(i64, i32, i32) nounwind readnone

define weak i6 @_ssdm_op_PartSelect.i6.i7.i32.i32(i7, i32, i32) nounwind readnone {
entry:
  %empty = call i7 @llvm.part.select.i7(i7 %0, i32 %1, i32 %2)
  %empty_107 = trunc i7 %empty to i6
  ret i6 %empty_107
}

define weak i5 @_ssdm_op_PartSelect.i5.i9.i32.i32(i9, i32, i32) nounwind readnone {
entry:
  %empty = call i9 @llvm.part.select.i9(i9 %0, i32 %1, i32 %2)
  %empty_108 = trunc i9 %empty to i5
  ret i5 %empty_108
}

define weak i5 @_ssdm_op_PartSelect.i5.i6.i32.i32(i6, i32, i32) nounwind readnone {
entry:
  %empty = call i6 @llvm.part.select.i6(i6 %0, i32 %1, i32 %2)
  %empty_109 = trunc i6 %empty to i5
  ret i5 %empty_109
}

define weak i4 @_ssdm_op_PartSelect.i4.i8.i32.i32(i8, i32, i32) nounwind readnone {
entry:
  %empty = call i8 @llvm.part.select.i8(i8 %0, i32 %1, i32 %2)
  %empty_110 = trunc i8 %empty to i4
  ret i4 %empty_110
}

define weak i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5, i32, i32) nounwind readnone {
entry:
  %empty = call i5 @llvm.part.select.i5(i5 %0, i32 %1, i32 %2)
  %empty_111 = trunc i5 %empty to i4
  ret i4 %empty_111
}

define weak i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5, i32, i32) nounwind readnone {
entry:
  %empty = call i5 @llvm.part.select.i5(i5 %0, i32 %1, i32 %2)
  %empty_112 = trunc i5 %empty to i3
  ret i3 %empty_112
}

declare i2 @_ssdm_op_PartSelect.i2.i5.i32.i32(i5, i32, i32) nounwind readnone

declare i2 @_ssdm_op_PartSelect.i2.i3.i32.i32(i3, i32, i32) nounwind readnone

define weak i2 @_ssdm_op_PartSelect.i2.i16.i32.i32(i16, i32, i32) nounwind readnone {
entry:
  %empty = call i16 @llvm.part.select.i16(i16 %0, i32 %1, i32 %2)
  %empty_113 = trunc i16 %empty to i2
  ret i2 %empty_113
}

declare i11 @_ssdm_op_PartSelect.i11.i36.i32.i32(i36, i32, i32) nounwind readnone

declare i11 @_ssdm_op_PartSelect.i11.i13.i32.i32(i13, i32, i32) nounwind readnone

declare i11 @_ssdm_op_PartSelect.i11.i12.i32.i32(i12, i32, i32) nounwind readnone

declare i10 @_ssdm_op_PartSelect.i10.i36.i32.i32(i36, i32, i32) nounwind readnone

declare i10 @_ssdm_op_PartSelect.i10.i12.i32.i32(i12, i32, i32) nounwind readnone

declare i1 @_ssdm_op_PartSelect.i1.i8.i32.i32(i8, i32, i32) nounwind readnone

declare i1 @_ssdm_op_PartSelect.i1.i7.i32.i32(i7, i32, i32) nounwind readnone

declare i1 @_ssdm_op_PartSelect.i1.i6.i32.i32(i6, i32, i32) nounwind readnone

declare i1 @_ssdm_op_PartSelect.i1.i5.i32.i32(i5, i32, i32) nounwind readnone

declare i1 @_ssdm_op_PartSelect.i1.i2.i32.i32(i2, i32, i32) nounwind readnone

define weak i1 @_ssdm_op_BitSelect.i1.i9.i32(i9, i32) nounwind readnone {
entry:
  %empty = trunc i32 %1 to i9
  %empty_114 = shl i9 1, %empty
  %empty_115 = and i9 %0, %empty_114
  %empty_116 = icmp ne i9 %empty_115, 0
  ret i1 %empty_116
}

define weak i1 @_ssdm_op_BitSelect.i1.i8.i32(i8, i32) nounwind readnone {
entry:
  %empty = trunc i32 %1 to i8
  %empty_117 = shl i8 1, %empty
  %empty_118 = and i8 %0, %empty_117
  %empty_119 = icmp ne i8 %empty_118, 0
  ret i1 %empty_119
}

define weak i1 @_ssdm_op_BitSelect.i1.i16.i32(i16, i32) nounwind readnone {
entry:
  %empty = trunc i32 %1 to i16
  %empty_120 = shl i16 1, %empty
  %empty_121 = and i16 %0, %empty_120
  %empty_122 = icmp ne i16 %empty_121, 0
  ret i1 %empty_122
}

define weak i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8, i1) nounwind readnone {
entry:
  %empty = zext i8 %0 to i9
  %empty_123 = zext i1 %1 to i9
  %empty_124 = shl i9 %empty, 1
  %empty_125 = or i9 %empty_124, %empty_123
  ret i9 %empty_125
}

define weak i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7, i2) nounwind readnone {
entry:
  %empty = zext i7 %0 to i9
  %empty_126 = zext i2 %1 to i9
  %empty_127 = shl i9 %empty, 2
  %empty_128 = or i9 %empty_127, %empty_126
  ret i9 %empty_128
}

define weak i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6, i3) nounwind readnone {
entry:
  %empty = zext i6 %0 to i9
  %empty_129 = zext i3 %1 to i9
  %empty_130 = shl i9 %empty, 3
  %empty_131 = or i9 %empty_130, %empty_129
  ret i9 %empty_131
}

define weak i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5, i4) nounwind readnone {
entry:
  %empty = zext i5 %0 to i9
  %empty_132 = zext i4 %1 to i9
  %empty_133 = shl i9 %empty, 4
  %empty_134 = or i9 %empty_133, %empty_132
  ret i9 %empty_134
}

define weak i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4, i5) nounwind readnone {
entry:
  %empty = zext i4 %0 to i9
  %empty_135 = zext i5 %1 to i9
  %empty_136 = shl i9 %empty, 5
  %empty_137 = or i9 %empty_136, %empty_135
  ret i9 %empty_137
}

define weak i9 @_ssdm_op_BitConcatenate.i9.i1.i5.i3(i1, i5, i3) nounwind readnone {
entry:
  %empty = zext i5 %1 to i8
  %empty_138 = zext i3 %2 to i8
  %empty_139 = shl i8 %empty, 3
  %empty_140 = or i8 %empty_139, %empty_138
  %empty_141 = zext i1 %0 to i9
  %empty_142 = zext i8 %empty_140 to i9
  %empty_143 = shl i9 %empty_141, 8
  %empty_144 = or i9 %empty_143, %empty_142
  ret i9 %empty_144
}

define weak i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7, i1) nounwind readnone {
entry:
  %empty = zext i7 %0 to i8
  %empty_145 = zext i1 %1 to i8
  %empty_146 = shl i8 %empty, 1
  %empty_147 = or i8 %empty_146, %empty_145
  ret i8 %empty_147
}

define weak i8 @_ssdm_op_BitConcatenate.i8.i6.i2(i6, i2) nounwind readnone {
entry:
  %empty = zext i6 %0 to i8
  %empty_148 = zext i2 %1 to i8
  %empty_149 = shl i8 %empty, 2
  %empty_150 = or i8 %empty_149, %empty_148
  ret i8 %empty_150
}

define weak i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5, i3) nounwind readnone {
entry:
  %empty = zext i5 %0 to i8
  %empty_151 = zext i3 %1 to i8
  %empty_152 = shl i8 %empty, 3
  %empty_153 = or i8 %empty_152, %empty_151
  ret i8 %empty_153
}

define weak i8 @_ssdm_op_BitConcatenate.i8.i1.i5.i2(i1, i5, i2) nounwind readnone {
entry:
  %empty = zext i5 %1 to i7
  %empty_154 = zext i2 %2 to i7
  %empty_155 = shl i7 %empty, 2
  %empty_156 = or i7 %empty_155, %empty_154
  %empty_157 = zext i1 %0 to i8
  %empty_158 = zext i7 %empty_156 to i8
  %empty_159 = shl i8 %empty_157, 7
  %empty_160 = or i8 %empty_159, %empty_158
  ret i8 %empty_160
}

define weak i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6, i1) nounwind readnone {
entry:
  %empty = zext i6 %0 to i7
  %empty_161 = zext i1 %1 to i7
  %empty_162 = shl i7 %empty, 1
  %empty_163 = or i7 %empty_162, %empty_161
  ret i7 %empty_163
}

define weak i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5, i2) nounwind readnone {
entry:
  %empty = zext i5 %0 to i7
  %empty_164 = zext i2 %1 to i7
  %empty_165 = shl i7 %empty, 2
  %empty_166 = or i7 %empty_165, %empty_164
  ret i7 %empty_166
}

define weak i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4, i3) nounwind readnone {
entry:
  %empty = zext i4 %0 to i7
  %empty_167 = zext i3 %1 to i7
  %empty_168 = shl i7 %empty, 3
  %empty_169 = or i7 %empty_168, %empty_167
  ret i7 %empty_169
}

define weak i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2, i5) nounwind readnone {
entry:
  %empty = zext i2 %0 to i7
  %empty_170 = zext i5 %1 to i7
  %empty_171 = shl i7 %empty, 5
  %empty_172 = or i7 %empty_171, %empty_170
  ret i7 %empty_172
}

declare i64 @_ssdm_op_BitConcatenate.i64.i62.i2(i62, i2) nounwind readnone

define weak i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5, i1) nounwind readnone {
entry:
  %empty = zext i5 %0 to i6
  %empty_173 = zext i1 %1 to i6
  %empty_174 = shl i6 %empty, 1
  %empty_175 = or i6 %empty_174, %empty_173
  ret i6 %empty_175
}

define weak i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2, i4) nounwind readnone {
entry:
  %empty = zext i2 %0 to i6
  %empty_176 = zext i4 %1 to i6
  %empty_177 = shl i6 %empty, 4
  %empty_178 = or i6 %empty_177, %empty_176
  ret i6 %empty_178
}

define weak i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1, i5) nounwind readnone {
entry:
  %empty = zext i1 %0 to i6
  %empty_179 = zext i5 %1 to i6
  %empty_180 = shl i6 %empty, 5
  %empty_181 = or i6 %empty_180, %empty_179
  ret i6 %empty_181
}

define weak i5 @_ssdm_op_BitConcatenate.i5.i4.i1(i4, i1) nounwind readnone {
entry:
  %empty = zext i4 %0 to i5
  %empty_182 = zext i1 %1 to i5
  %empty_183 = shl i5 %empty, 1
  %empty_184 = or i5 %empty_183, %empty_182
  ret i5 %empty_184
}

define weak i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2, i3) nounwind readnone {
entry:
  %empty = zext i2 %0 to i5
  %empty_185 = zext i3 %1 to i5
  %empty_186 = shl i5 %empty, 3
  %empty_187 = or i5 %empty_186, %empty_185
  ret i5 %empty_187
}

define weak i4 @_ssdm_op_BitConcatenate.i4.i3.i1(i3, i1) nounwind readnone {
entry:
  %empty = zext i3 %0 to i4
  %empty_188 = zext i1 %1 to i4
  %empty_189 = shl i4 %empty, 1
  %empty_190 = or i4 %empty_189, %empty_188
  ret i4 %empty_190
}

define weak i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2, i2) nounwind readnone {
entry:
  %empty = zext i2 %0 to i4
  %empty_191 = zext i2 %1 to i4
  %empty_192 = shl i4 %empty, 2
  %empty_193 = or i4 %empty_192, %empty_191
  ret i4 %empty_193
}

define weak i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1, i3) nounwind readnone {
entry:
  %empty = zext i1 %0 to i4
  %empty_194 = zext i3 %1 to i4
  %empty_195 = shl i4 %empty, 3
  %empty_196 = or i4 %empty_195, %empty_194
  ret i4 %empty_196
}

define weak i3 @_ssdm_op_BitConcatenate.i3.i2.i1(i2, i1) nounwind readnone {
entry:
  %empty = zext i2 %0 to i3
  %empty_197 = zext i1 %1 to i3
  %empty_198 = shl i3 %empty, 1
  %empty_199 = or i3 %empty_198, %empty_197
  ret i3 %empty_199
}

define weak i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13, i5) nounwind readnone {
entry:
  %empty = zext i13 %0 to i18
  %empty_200 = zext i5 %1 to i18
  %empty_201 = shl i18 %empty, 5
  %empty_202 = or i18 %empty_201, %empty_200
  ret i18 %empty_202
}

define weak i18 @_ssdm_op_BitConcatenate.i18.i10.i8(i10, i8) nounwind readnone {
entry:
  %empty = zext i10 %0 to i18
  %empty_203 = zext i8 %1 to i18
  %empty_204 = shl i18 %empty, 8
  %empty_205 = or i18 %empty_204, %empty_203
  ret i18 %empty_205
}

define weak i17 @_ssdm_op_BitConcatenate.i17.i15.i2(i15, i2) nounwind readnone {
entry:
  %empty = zext i15 %0 to i17
  %empty_206 = zext i2 %1 to i17
  %empty_207 = shl i17 %empty, 2
  %empty_208 = or i17 %empty_207, %empty_206
  ret i17 %empty_208
}

define weak i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12, i5) nounwind readnone {
entry:
  %empty = zext i12 %0 to i17
  %empty_209 = zext i5 %1 to i17
  %empty_210 = shl i17 %empty, 5
  %empty_211 = or i17 %empty_210, %empty_209
  ret i17 %empty_211
}

define weak i16 @_ssdm_op_BitConcatenate.i16.i14.i2(i14, i2) nounwind readnone {
entry:
  %empty = zext i14 %0 to i16
  %empty_212 = zext i2 %1 to i16
  %empty_213 = shl i16 %empty, 2
  %empty_214 = or i16 %empty_213, %empty_212
  ret i16 %empty_214
}

define weak i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13, i3) nounwind readnone {
entry:
  %empty = zext i13 %0 to i16
  %empty_215 = zext i3 %1 to i16
  %empty_216 = shl i16 %empty, 3
  %empty_217 = or i16 %empty_216, %empty_215
  ret i16 %empty_217
}

define weak i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11, i5) nounwind readnone {
entry:
  %empty = zext i11 %0 to i16
  %empty_218 = zext i5 %1 to i16
  %empty_219 = shl i16 %empty, 5
  %empty_220 = or i16 %empty_219, %empty_218
  ret i16 %empty_220
}

define weak i16 @_ssdm_op_BitConcatenate.i16.i10.i6(i10, i6) nounwind readnone {
entry:
  %empty = zext i10 %0 to i16
  %empty_221 = zext i6 %1 to i16
  %empty_222 = shl i16 %empty, 6
  %empty_223 = or i16 %empty_222, %empty_221
  ret i16 %empty_223
}

define weak i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8, i7) nounwind readnone {
entry:
  %empty = zext i8 %0 to i15
  %empty_224 = zext i7 %1 to i15
  %empty_225 = shl i15 %empty, 7
  %empty_226 = or i15 %empty_225, %empty_224
  ret i15 %empty_226
}

define weak i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13, i2) nounwind readnone {
entry:
  %empty = zext i13 %0 to i15
  %empty_227 = zext i2 %1 to i15
  %empty_228 = shl i15 %empty, 2
  %empty_229 = or i15 %empty_228, %empty_227
  ret i15 %empty_229
}

define weak i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12, i3) nounwind readnone {
entry:
  %empty = zext i12 %0 to i15
  %empty_230 = zext i3 %1 to i15
  %empty_231 = shl i15 %empty, 3
  %empty_232 = or i15 %empty_231, %empty_230
  ret i15 %empty_232
}

define weak i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11, i4) nounwind readnone {
entry:
  %empty = zext i11 %0 to i15
  %empty_233 = zext i4 %1 to i15
  %empty_234 = shl i15 %empty, 4
  %empty_235 = or i15 %empty_234, %empty_233
  ret i15 %empty_235
}

define weak i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10, i5) nounwind readnone {
entry:
  %empty = zext i10 %0 to i15
  %empty_236 = zext i5 %1 to i15
  %empty_237 = shl i15 %empty, 5
  %empty_238 = or i15 %empty_237, %empty_236
  ret i15 %empty_238
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i9.i5(i9, i5) nounwind readnone {
entry:
  %empty = zext i9 %0 to i14
  %empty_239 = zext i5 %1 to i14
  %empty_240 = shl i14 %empty, 5
  %empty_241 = or i14 %empty_240, %empty_239
  ret i14 %empty_241
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i8.i6(i8, i6) nounwind readnone {
entry:
  %empty = zext i8 %0 to i14
  %empty_242 = zext i6 %1 to i14
  %empty_243 = shl i14 %empty, 6
  %empty_244 = or i14 %empty_243, %empty_242
  ret i14 %empty_244
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i7.i7(i7, i7) nounwind readnone {
entry:
  %empty = zext i7 %0 to i14
  %empty_245 = zext i7 %1 to i14
  %empty_246 = shl i14 %empty, 7
  %empty_247 = or i14 %empty_246, %empty_245
  ret i14 %empty_247
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i13.i1(i13, i1) nounwind readnone {
entry:
  %empty = zext i13 %0 to i14
  %empty_248 = zext i1 %1 to i14
  %empty_249 = shl i14 %empty, 1
  %empty_250 = or i14 %empty_249, %empty_248
  ret i14 %empty_250
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12, i2) nounwind readnone {
entry:
  %empty = zext i12 %0 to i14
  %empty_251 = zext i2 %1 to i14
  %empty_252 = shl i14 %empty, 2
  %empty_253 = or i14 %empty_252, %empty_251
  ret i14 %empty_253
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11, i3) nounwind readnone {
entry:
  %empty = zext i11 %0 to i14
  %empty_254 = zext i3 %1 to i14
  %empty_255 = shl i14 %empty, 3
  %empty_256 = or i14 %empty_255, %empty_254
  ret i14 %empty_256
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10, i4) nounwind readnone {
entry:
  %empty = zext i10 %0 to i14
  %empty_257 = zext i4 %1 to i14
  %empty_258 = shl i14 %empty, 4
  %empty_259 = or i14 %empty_258, %empty_257
  ret i14 %empty_259
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8, i5) nounwind readnone {
entry:
  %empty = zext i8 %0 to i13
  %empty_260 = zext i5 %1 to i13
  %empty_261 = shl i13 %empty, 5
  %empty_262 = or i13 %empty_261, %empty_260
  ret i13 %empty_262
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7, i6) nounwind readnone {
entry:
  %empty = zext i7 %0 to i13
  %empty_263 = zext i6 %1 to i13
  %empty_264 = shl i13 %empty, 6
  %empty_265 = or i13 %empty_264, %empty_263
  ret i13 %empty_265
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i4.i9(i4, i9) nounwind readnone {
entry:
  %empty = zext i4 %0 to i13
  %empty_266 = zext i9 %1 to i13
  %empty_267 = shl i13 %empty, 9
  %empty_268 = or i13 %empty_267, %empty_266
  ret i13 %empty_268
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12, i1) nounwind readnone {
entry:
  %empty = zext i12 %0 to i13
  %empty_269 = zext i1 %1 to i13
  %empty_270 = shl i13 %empty, 1
  %empty_271 = or i13 %empty_270, %empty_269
  ret i13 %empty_271
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11, i2) nounwind readnone {
entry:
  %empty = zext i11 %0 to i13
  %empty_272 = zext i2 %1 to i13
  %empty_273 = shl i13 %empty, 2
  %empty_274 = or i13 %empty_273, %empty_272
  ret i13 %empty_274
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10, i3) nounwind readnone {
entry:
  %empty = zext i10 %0 to i13
  %empty_275 = zext i3 %1 to i13
  %empty_276 = shl i13 %empty, 3
  %empty_277 = or i13 %empty_276, %empty_275
  ret i13 %empty_277
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9, i3) nounwind readnone {
entry:
  %empty = zext i9 %0 to i12
  %empty_278 = zext i3 %1 to i12
  %empty_279 = shl i12 %empty, 3
  %empty_280 = or i12 %empty_279, %empty_278
  ret i12 %empty_280
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i7.i5(i7, i5) nounwind readnone {
entry:
  %empty = zext i7 %0 to i12
  %empty_281 = zext i5 %1 to i12
  %empty_282 = shl i12 %empty, 5
  %empty_283 = or i12 %empty_282, %empty_281
  ret i12 %empty_283
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i6.i6(i6, i6) nounwind readnone {
entry:
  %empty = zext i6 %0 to i12
  %empty_284 = zext i6 %1 to i12
  %empty_285 = shl i12 %empty, 6
  %empty_286 = or i12 %empty_285, %empty_284
  ret i12 %empty_286
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i2.i5.i5(i2, i5, i5) nounwind readnone {
entry:
  %empty = zext i5 %1 to i10
  %empty_287 = zext i5 %2 to i10
  %empty_288 = shl i10 %empty, 5
  %empty_289 = or i10 %empty_288, %empty_287
  %empty_290 = zext i2 %0 to i12
  %empty_291 = zext i10 %empty_289 to i12
  %empty_292 = shl i12 %empty_290, 10
  %empty_293 = or i12 %empty_292, %empty_291
  ret i12 %empty_293
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11, i1) nounwind readnone {
entry:
  %empty = zext i11 %0 to i12
  %empty_294 = zext i1 %1 to i12
  %empty_295 = shl i12 %empty, 1
  %empty_296 = or i12 %empty_295, %empty_294
  ret i12 %empty_296
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10, i2) nounwind readnone {
entry:
  %empty = zext i10 %0 to i12
  %empty_297 = zext i2 %1 to i12
  %empty_298 = shl i12 %empty, 2
  %empty_299 = or i12 %empty_298, %empty_297
  ret i12 %empty_299
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9, i2) nounwind readnone {
entry:
  %empty = zext i9 %0 to i11
  %empty_300 = zext i2 %1 to i11
  %empty_301 = shl i11 %empty, 2
  %empty_302 = or i11 %empty_301, %empty_300
  ret i11 %empty_302
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8, i3) nounwind readnone {
entry:
  %empty = zext i8 %0 to i11
  %empty_303 = zext i3 %1 to i11
  %empty_304 = shl i11 %empty, 3
  %empty_305 = or i11 %empty_304, %empty_303
  ret i11 %empty_305
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7, i4) nounwind readnone {
entry:
  %empty = zext i7 %0 to i11
  %empty_306 = zext i4 %1 to i11
  %empty_307 = shl i11 %empty, 4
  %empty_308 = or i11 %empty_307, %empty_306
  ret i11 %empty_308
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i6.i5(i6, i5) nounwind readnone {
entry:
  %empty = zext i6 %0 to i11
  %empty_309 = zext i5 %1 to i11
  %empty_310 = shl i11 %empty, 5
  %empty_311 = or i11 %empty_310, %empty_309
  ret i11 %empty_311
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10, i1) nounwind readnone {
entry:
  %empty = zext i10 %0 to i11
  %empty_312 = zext i1 %1 to i11
  %empty_313 = shl i11 %empty, 1
  %empty_314 = or i11 %empty_313, %empty_312
  ret i11 %empty_314
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i1.i5.i5(i1, i5, i5) nounwind readnone {
entry:
  %empty = zext i5 %1 to i10
  %empty_315 = zext i5 %2 to i10
  %empty_316 = shl i10 %empty, 5
  %empty_317 = or i10 %empty_316, %empty_315
  %empty_318 = zext i1 %0 to i11
  %empty_319 = zext i10 %empty_317 to i11
  %empty_320 = shl i11 %empty_318, 10
  %empty_321 = or i11 %empty_320, %empty_319
  ret i11 %empty_321
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8, i2) nounwind readnone {
entry:
  %empty = zext i8 %0 to i10
  %empty_322 = zext i2 %1 to i10
  %empty_323 = shl i10 %empty, 2
  %empty_324 = or i10 %empty_323, %empty_322
  ret i10 %empty_324
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7, i3) nounwind readnone {
entry:
  %empty = zext i7 %0 to i10
  %empty_325 = zext i3 %1 to i10
  %empty_326 = shl i10 %empty, 3
  %empty_327 = or i10 %empty_326, %empty_325
  ret i10 %empty_327
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6, i4) nounwind readnone {
entry:
  %empty = zext i6 %0 to i10
  %empty_328 = zext i4 %1 to i10
  %empty_329 = shl i10 %empty, 4
  %empty_330 = or i10 %empty_329, %empty_328
  ret i10 %empty_330
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5, i5) nounwind readnone {
entry:
  %empty = zext i5 %0 to i10
  %empty_331 = zext i5 %1 to i10
  %empty_332 = shl i10 %empty, 5
  %empty_333 = or i10 %empty_332, %empty_331
  ret i10 %empty_333
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i2.i5.i3(i2, i5, i3) nounwind readnone {
entry:
  %empty = zext i5 %1 to i8
  %empty_334 = zext i3 %2 to i8
  %empty_335 = shl i8 %empty, 3
  %empty_336 = or i8 %empty_335, %empty_334
  %empty_337 = zext i2 %0 to i10
  %empty_338 = zext i8 %empty_336 to i10
  %empty_339 = shl i10 %empty_337, 8
  %empty_340 = or i10 %empty_339, %empty_338
  ret i10 %empty_340
}

declare void @_GLOBAL__I_a97() nounwind section ".text.startup"

declare void @_GLOBAL__I_a() nounwind section ".text.startup"

define i32 @ShuffleNetV2(i8* %DATA_INPUT_OUTPUT, i8* %DATA_OTHER_WEIGHTS, i8* %p3X3_1X1_WEIGHTS, i8* %DATA_BIAS, i32 %image_V, i32 %conv1_weight_V, i32 %shuffle_conv_3x3_V, i32 %shuffle_conv_1x1_V, i32 %conv_last_weight_V, i32 %fc_weight_V, i32 %bias_V, i32 %fc_output_V) {
  %fc_output_V_read = call i32 @_ssdm_op_Read.s_axilite.i32(i32 %fc_output_V)
  %bias_V_read = call i32 @_ssdm_op_Read.s_axilite.i32(i32 %bias_V)
  %fc_weight_V_read = call i32 @_ssdm_op_Read.s_axilite.i32(i32 %fc_weight_V)
  %conv_last_weight_V_r = call i32 @_ssdm_op_Read.s_axilite.i32(i32 %conv_last_weight_V)
  %shuffle_conv_1x1_V_r = call i32 @_ssdm_op_Read.s_axilite.i32(i32 %shuffle_conv_1x1_V)
  %shuffle_conv_3x3_V_r = call i32 @_ssdm_op_Read.s_axilite.i32(i32 %shuffle_conv_3x3_V)
  %conv1_weight_V_read = call i32 @_ssdm_op_Read.s_axilite.i32(i32 %conv1_weight_V)
  %image_V_read = call i32 @_ssdm_op_Read.s_axilite.i32(i32 %image_V)
  %tmp_367 = sext i32 %bias_V_read to i64
  %tmp_482_cast = sext i32 %bias_V_read to i33
  %DATA_BIAS_addr = getelementptr i8* %DATA_BIAS, i64 %tmp_367
  %tmp_490_cast = sext i32 %shuffle_conv_1x1_V_r to i33
  %tmp_373 = sext i32 %shuffle_conv_3x3_V_r to i64
  %tmp_376 = sext i32 %image_V_read to i64
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %DATA_BIAS), !map !433
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %p3X3_1X1_WEIGHTS), !map !439
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %DATA_OTHER_WEIGHTS), !map !448
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %DATA_INPUT_OUTPUT), !map !457
  call void (...)* @_ssdm_op_SpecBitsMap(i32 0) nounwind, !map !466
  call void (...)* @_ssdm_op_SpecTopModule([13 x i8]* @ShuffleNetV2_str) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i8* %DATA_INPUT_OUTPUT, [6 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str45, i32 0, i32 3072, [18 x i8]* @p_str46, [6 x i8]* @p_str47, [1 x i8]* @p_str45, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str45, [1 x i8]* @p_str45)
  call void (...)* @_ssdm_op_SpecInterface(i32 %image_V, [10 x i8]* @mode, i32 0, i32 0, [1 x i8]* @p_str45, i32 0, i32 3072, [1 x i8]* @bundle, [6 x i8]* @p_str47, [1 x i8]* @p_str45, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str45, [1 x i8]* @p_str45)
  call void (...)* @_ssdm_op_SpecInterface(i8* %DATA_OTHER_WEIGHTS, [6 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str45, i32 0, i32 648, [19 x i8]* @p_str48, [6 x i8]* @p_str47, [1 x i8]* @p_str45, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str45, [1 x i8]* @p_str45)
  call void (...)* @_ssdm_op_SpecInterface(i32 %conv1_weight_V, [10 x i8]* @mode33, i32 0, i32 0, [1 x i8]* @p_str45, i32 0, i32 648, [1 x i8]* @bundle34, [6 x i8]* @p_str47, [1 x i8]* @p_str45, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str45, [1 x i8]* @p_str45)
  call void (...)* @_ssdm_op_SpecInterface(i8* %DATA_BIAS, [6 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str45, i32 0, i32 3618, [10 x i8]* @p_str49, [6 x i8]* @p_str47, [1 x i8]* @p_str45, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str45, [1 x i8]* @p_str45)
  call void (...)* @_ssdm_op_SpecInterface(i32 %bias_V, [10 x i8]* @mode43, i32 0, i32 0, [1 x i8]* @p_str45, i32 0, i32 3618, [1 x i8]* @bundle44, [6 x i8]* @p_str47, [1 x i8]* @p_str45, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str45, [1 x i8]* @p_str45)
  call void (...)* @_ssdm_op_SpecInterface(i8* %p3X3_1X1_WEIGHTS, [6 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str45, i32 0, i32 9720, [16 x i8]* @p_str50, [6 x i8]* @p_str47, [1 x i8]* @p_str45, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str45, [1 x i8]* @p_str45)
  call void (...)* @_ssdm_op_SpecInterface(i32 %shuffle_conv_3x3_V, [10 x i8]* @mode35, i32 0, i32 0, [1 x i8]* @p_str45, i32 0, i32 9720, [1 x i8]* @bundle36, [6 x i8]* @p_str47, [1 x i8]* @p_str45, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str45, [1 x i8]* @p_str45)
  call void (...)* @_ssdm_op_SpecInterface(i32 %shuffle_conv_1x1_V, [10 x i8]* @mode37, i32 0, i32 0, [1 x i8]* @p_str45, i32 0, i32 131904, [1 x i8]* @bundle38, [6 x i8]* @p_str47, [1 x i8]* @p_str45, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str45, [1 x i8]* @p_str45)
  call void (...)* @_ssdm_op_SpecInterface(i32 %fc_weight_V, [10 x i8]* @mode41, i32 0, i32 0, [1 x i8]* @p_str45, i32 0, i32 5120, [1 x i8]* @bundle42, [6 x i8]* @p_str47, [1 x i8]* @p_str45, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str45, [1 x i8]* @p_str45)
  call void (...)* @_ssdm_op_SpecInterface(i32 %fc_output_V, [10 x i8]* @mode45, i32 0, i32 0, [1 x i8]* @p_str45, i32 0, i32 1000, [1 x i8]* @bundle46, [6 x i8]* @p_str47, [1 x i8]* @p_str45, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str45, [1 x i8]* @p_str45)
  call void (...)* @_ssdm_op_SpecInterface(i32 %conv_last_weight_V, [10 x i8]* @mode39, i32 0, i32 0, [1 x i8]* @p_str45, i32 0, i32 98304, [1 x i8]* @bundle40, [6 x i8]* @p_str47, [1 x i8]* @p_str45, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str45, [1 x i8]* @p_str45)
  call void (...)* @_ssdm_op_SpecInterface(i32 0, [10 x i8]* @p_str51, i32 1, i32 1, [1 x i8]* @p_str45, i32 0, i32 0, [4 x i8]* @p_str52, [1 x i8]* @p_str45, [1 x i8]* @p_str45, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str45, [1 x i8]* @p_str45) nounwind
  %DATA_BIAS_addr_rd_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr, i32 24)
  br label %1

; <label>:1                                       ; preds = %2, %0
  %i = phi i5 [ 0, %0 ], [ %i_1, %2 ]
  %exitcond = icmp eq i5 %i, -8
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_1 = add i5 %i, 1
  br i1 %exitcond, label %.preheader960.preheader, label %2

.preheader960.preheader:                          ; preds = %1
  %tmp_313 = add i33 %tmp_482_cast, 3096
  %tmp_314 = sext i33 %tmp_313 to i64
  %DATA_BIAS_addr_1 = getelementptr i8* %DATA_BIAS, i64 %tmp_314
  %p_rd_req = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_1, i32 512)
  br label %.preheader960

; <label>:2                                       ; preds = %1
  %tmp = zext i5 %i to i64
  %DATA_BIAS_addr_read = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr)
  %conv1_bias_V_addr = getelementptr [24 x i8]* @conv1_bias_V, i64 0, i64 %tmp
  store i8 %DATA_BIAS_addr_read, i8* %conv1_bias_V_addr, align 1
  br label %1

.preheader960:                                    ; preds = %.preheader960.preheader, %3
  %i1 = phi i10 [ %i_2, %3 ], [ 0, %.preheader960.preheader ]
  %exitcond9 = icmp eq i10 %i1, -512
  %empty_341 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512)
  %i_2 = add i10 %i1, 1
  br i1 %exitcond9, label %.preheader959.preheader, label %3

.preheader959.preheader:                          ; preds = %.preheader960
  %tmp_315 = add i33 %tmp_482_cast, 3608
  %tmp_317 = sext i33 %tmp_315 to i64
  %DATA_BIAS_addr_2 = getelementptr i8* %DATA_BIAS, i64 %tmp_317
  %p_rd_req916 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_2, i32 10)
  br label %.preheader959

; <label>:3                                       ; preds = %.preheader960
  %tmp_s = zext i10 %i1 to i64
  %DATA_BIAS_addr_1_rea = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_1)
  %conv_last_bias_V_add = getelementptr [512 x i8]* @conv_last_bias_V, i64 0, i64 %tmp_s
  store i8 %DATA_BIAS_addr_1_rea, i8* %conv_last_bias_V_add, align 1
  br label %.preheader960

.preheader959:                                    ; preds = %.preheader959.preheader, %4
  %i2 = phi i4 [ %i_3, %4 ], [ 0, %.preheader959.preheader ]
  %exitcond1 = icmp eq i4 %i2, -6
  %empty_342 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10)
  %i_3 = add i4 %i2, 1
  br i1 %exitcond1, label %.preheader958.preheader, label %4

.preheader958.preheader:                          ; preds = %.preheader959
  br label %.preheader958

; <label>:4                                       ; preds = %.preheader959
  %tmp_227 = zext i4 %i2 to i64
  %DATA_BIAS_addr_2_rea = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_2)
  %fc_bias_V_addr = getelementptr [10 x i8]* @fc_bias_V, i64 0, i64 %tmp_227
  store i8 %DATA_BIAS_addr_2_rea, i8* %fc_bias_V_addr, align 1
  br label %.preheader959

.preheader958.loopexit:                           ; preds = %.preheader957
  br label %.preheader958

.preheader958:                                    ; preds = %.preheader958.preheader, %.preheader958.loopexit
  %ci = phi i2 [ %ci_10, %.preheader958.loopexit ], [ 0, %.preheader958.preheader ]
  %exitcond2 = icmp eq i2 %ci, -1
  %empty_343 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %ci_10 = add i2 %ci, 1
  br i1 %exitcond2, label %6, label %.preheader957.preheader

.preheader957.preheader:                          ; preds = %.preheader958
  %tmp_377 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %ci, i5 0)
  %tmp_512_cast = zext i7 %tmp_377 to i8
  %tmp_380 = call i3 @_ssdm_op_BitConcatenate.i3.i2.i1(i2 %ci, i1 false)
  %p_shl276_cast = zext i3 %tmp_380 to i8
  %tmp_382 = add i8 %p_shl276_cast, %tmp_512_cast
  br label %.preheader957

.preheader957.loopexit:                           ; preds = %.preheader956
  br label %.preheader957

.preheader957:                                    ; preds = %.preheader957.loopexit, %.preheader957.preheader
  %w = phi i6 [ 0, %.preheader957.preheader ], [ %w_25, %.preheader957.loopexit ]
  %exitcond4 = icmp eq i6 %w, -32
  %empty_344 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  %w_25 = add i6 %w, 1
  br i1 %exitcond4, label %.preheader958.loopexit, label %.preheader956.preheader

.preheader956.preheader:                          ; preds = %.preheader957
  %tmp_230_cast = zext i6 %w_25 to i8
  %tmp_397 = add i8 %tmp_230_cast, %tmp_382
  %p_shl277_cast = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_397, i5 0)
  %tmp_325 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_397, i1 false)
  %p_shl278_cast = zext i9 %tmp_325 to i13
  %tmp_398 = add i13 %p_shl277_cast, %p_shl278_cast
  %tmp_231_cast = zext i6 %w to i8
  %tmp_403 = add i8 %tmp_231_cast, %tmp_512_cast
  %tmp_326 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_403, i5 0)
  %tmp_408 = zext i13 %tmp_326 to i64
  %tmp_328 = add i64 %tmp_376, %tmp_408
  %DATA_INPUT_OUTPUT_ad = getelementptr i8* %DATA_INPUT_OUTPUT, i64 %tmp_328
  %p_rd_req917 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_INPUT_OUTPUT_ad, i32 32)
  br label %.preheader956

.preheader956:                                    ; preds = %5, %.preheader956.preheader
  %h = phi i6 [ %h_25, %5 ], [ 0, %.preheader956.preheader ]
  %exitcond7 = icmp eq i6 %h, -32
  %empty_345 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  %h_25 = add i6 %h, 1
  br i1 %exitcond7, label %.preheader957.loopexit, label %5

; <label>:5                                       ; preds = %.preheader956
  %tmp_236_cast = zext i6 %h_25 to i13
  %tmp_417 = add i13 %tmp_398, %tmp_236_cast
  %tmp_615_cast = zext i13 %tmp_417 to i64
  %image_p_V_addr = getelementptr [3468 x i8]* @image_p_V, i64 0, i64 %tmp_615_cast
  %DATA_INPUT_OUTPUT_ad_1 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_INPUT_OUTPUT_ad)
  store i8 %DATA_INPUT_OUTPUT_ad_1, i8* %image_p_V_addr, align 1
  br label %.preheader956

; <label>:6                                       ; preds = %.preheader958
  call fastcc void @conv1_p([3468 x i8]* nocapture @image_p_V, i8* %DATA_OTHER_WEIGHTS, i32 %conv1_weight_V_read, [24 x i8]* nocapture @conv1_bias_V, [27744 x i8]* nocapture @conv1_output_p_V)
  br label %.loopexit1021

.loopexit1021.loopexit:                           ; preds = %.preheader955
  br label %.loopexit1021

.loopexit1021:                                    ; preds = %.loopexit1021.loopexit, %6
  %co = phi i5 [ 0, %6 ], [ %co_26, %.loopexit1021.loopexit ]
  %exitcond3 = icmp eq i5 %co, -8
  %empty_346 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_26 = add i5 %co, 1
  br i1 %exitcond3, label %.preheader954.preheader, label %.preheader955.preheader

.preheader954.preheader:                          ; preds = %.loopexit1021
  %tmp_319 = add i33 %tmp_482_cast, 24
  %tmp_320 = sext i33 %tmp_319 to i64
  %DATA_BIAS_addr_3 = getelementptr i8* %DATA_BIAS, i64 %tmp_320
  %p_rd_req919 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_3, i32 24)
  br label %.preheader954

.preheader955.preheader:                          ; preds = %.loopexit1021
  %tmp_388 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co, i5 0)
  %p_shl279_cast = zext i10 %tmp_388 to i11
  %tmp_394 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co, i3 0)
  %p_shl280_cast = zext i8 %tmp_394 to i11
  %tmp_396 = sub i11 %p_shl279_cast, %p_shl280_cast
  %tmp_546_cast = sext i11 %tmp_396 to i12
  %tmp_321 = sext i11 %tmp_396 to i33
  %tmp_322 = add i33 %tmp_321, %tmp_490_cast
  %tmp_324 = sext i33 %tmp_322 to i64
  %p3X3_1X1_WEIGHTS_addr = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %tmp_324
  %p_rd_req918 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr, i32 24)
  br label %.preheader955

.preheader955:                                    ; preds = %7, %.preheader955.preheader
  %ci3 = phi i5 [ %ci_11, %7 ], [ 0, %.preheader955.preheader ]
  %exitcond6 = icmp eq i5 %ci3, -8
  %empty_347 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_11 = add i5 %ci3, 1
  br i1 %exitcond6, label %.loopexit1021.loopexit, label %7

; <label>:7                                       ; preds = %.preheader955
  %tmp_235_cast = zext i5 %ci3 to i12
  %tmp_414 = add i12 %tmp_546_cast, %tmp_235_cast
  %tmp_612_cast = sext i12 %tmp_414 to i64
  %weights_24_24_1x1_V_s = getelementptr [576 x i8]* @weights_24_24_1x1_V, i64 0, i64 %tmp_612_cast
  %p3X3_1X1_WEIGHTS_addr_57 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr)
  store i8 %p3X3_1X1_WEIGHTS_addr_57, i8* %weights_24_24_1x1_V_s, align 1
  br label %.preheader955

.preheader954:                                    ; preds = %.preheader954.preheader, %8
  %i4 = phi i5 [ %i_4, %8 ], [ 0, %.preheader954.preheader ]
  %exitcond5 = icmp eq i5 %i4, -8
  %empty_348 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_4 = add i5 %i4, 1
  br i1 %exitcond5, label %9, label %8

; <label>:8                                       ; preds = %.preheader954
  %tmp_232 = zext i5 %i4 to i64
  %DATA_BIAS_addr_3_rea = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_3)
  %bias_24_V_addr = getelementptr [24 x i8]* @bias_24_V, i64 0, i64 %tmp_232
  store i8 %DATA_BIAS_addr_3_rea, i8* %bias_24_V_addr, align 1
  br label %.preheader954

; <label>:9                                       ; preds = %.preheader954
  call fastcc void @subconv_1x1_32_p([576 x i8]* @weights_24_24_1x1_V, [24 x i8]* @bias_24_V)
  br label %.loopexit1020

.loopexit1020.loopexit:                           ; preds = %.preheader953
  br label %.loopexit1020

.loopexit1020:                                    ; preds = %.loopexit1020.loopexit, %9
  %co5 = phi i5 [ 0, %9 ], [ %co_27, %.loopexit1020.loopexit ]
  %exitcond8 = icmp eq i5 %co5, -8
  %empty_349 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_27 = add i5 %co5, 1
  br i1 %exitcond8, label %.preheader951.preheader, label %.preheader953.preheader

.preheader951.preheader:                          ; preds = %.loopexit1020
  %tmp_330 = add i33 %tmp_482_cast, 48
  %tmp_331 = sext i33 %tmp_330 to i64
  %DATA_BIAS_addr_4 = getelementptr i8* %DATA_BIAS, i64 %tmp_331
  %p_rd_req921 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_4, i32 24)
  br label %.preheader951

.preheader953.preheader:                          ; preds = %.loopexit1020
  %tmp_238_cast = zext i5 %co5 to i8
  %tmp_418 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co5, i2 0)
  %p_shl281_cast = zext i7 %tmp_418 to i8
  %tmp_421 = sub i8 %p_shl281_cast, %tmp_238_cast
  %tmp_643_cast = sext i8 %tmp_421 to i9
  br label %.preheader953

.preheader953.loopexit:                           ; preds = %.preheader952
  br label %.preheader953

.preheader953:                                    ; preds = %.preheader953.loopexit, %.preheader953.preheader
  %w6 = phi i2 [ 0, %.preheader953.preheader ], [ %w_26, %.preheader953.loopexit ]
  %exitcond11 = icmp eq i2 %w6, -1
  %empty_350 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %w_26 = add i2 %w6, 1
  br i1 %exitcond11, label %.loopexit1020.loopexit, label %.preheader952.preheader

.preheader952.preheader:                          ; preds = %.preheader953
  %tmp_242_cast = zext i2 %w6 to i9
  %tmp_423 = add i9 %tmp_643_cast, %tmp_242_cast
  %tmp_644_cast = sext i9 %tmp_423 to i64
  %tmp_332 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_423, i2 0)
  %p_shl193 = sext i11 %tmp_332 to i64
  %tmp_428 = sub i64 %p_shl193, %tmp_644_cast
  %tmp_337 = add i64 %tmp_428, %tmp_373
  %p3X3_1X1_WEIGHTS_addr_1 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %tmp_337
  %p_rd_req920 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_1, i32 3)
  br label %.preheader952

.preheader952:                                    ; preds = %10, %.preheader952.preheader
  %h7 = phi i2 [ %h_26, %10 ], [ 0, %.preheader952.preheader ]
  %exitcond13 = icmp eq i2 %h7, -1
  %empty_351 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %h_26 = add i2 %h7, 1
  br i1 %exitcond13, label %.preheader953.loopexit, label %10

; <label>:10                                      ; preds = %.preheader952
  %tmp_244 = zext i2 %h7 to i64
  %tmp_446 = add i64 %tmp_244, %tmp_428
  %weights_24_1_3x3_V_a = getelementptr [216 x i8]* @weights_24_1_3x3_V, i64 0, i64 %tmp_446
  %p3X3_1X1_WEIGHTS_addr_58 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_1)
  store i8 %p3X3_1X1_WEIGHTS_addr_58, i8* %weights_24_1_3x3_V_a, align 1
  br label %.preheader952

.preheader951:                                    ; preds = %.preheader951.preheader, %11
  %i8 = phi i5 [ %i_5, %11 ], [ 0, %.preheader951.preheader ]
  %exitcond10 = icmp eq i5 %i8, -8
  %empty_352 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_5 = add i5 %i8, 1
  br i1 %exitcond10, label %12, label %11

; <label>:11                                      ; preds = %.preheader951
  %tmp_239 = zext i5 %i8 to i64
  %DATA_BIAS_addr_4_rea = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_4)
  %bias_24_V_addr_1 = getelementptr [24 x i8]* @bias_24_V, i64 0, i64 %tmp_239
  store i8 %DATA_BIAS_addr_4_rea, i8* %bias_24_V_addr_1, align 1
  br label %.preheader951

; <label>:12                                      ; preds = %.preheader951
  call fastcc void @subconv_3x3_32_strid([27744 x i8]* @ShuffleConvs_0_Downs, [216 x i8]* @weights_24_1_3x3_V, [24 x i8]* @bias_24_V, [7776 x i8]* @buffer0_1_24_16x16_p)
  br label %.loopexit1019

.loopexit1019.loopexit:                           ; preds = %.preheader950
  br label %.loopexit1019

.loopexit1019:                                    ; preds = %.loopexit1019.loopexit, %12
  %co9 = phi i5 [ 0, %12 ], [ %co_28, %.loopexit1019.loopexit ]
  %co9_cast = zext i5 %co9 to i6
  %exitcond12 = icmp eq i5 %co9, -8
  %empty_353 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_28 = add i5 %co9, 1
  br i1 %exitcond12, label %.preheader949.preheader, label %.preheader950.preheader

.preheader949.preheader:                          ; preds = %.loopexit1019
  %tmp_342 = add i33 %tmp_482_cast, 72
  %tmp_348 = sext i33 %tmp_342 to i64
  %DATA_BIAS_addr_5 = getelementptr i8* %DATA_BIAS, i64 %tmp_348
  %p_rd_req923 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_5, i32 24)
  br label %.preheader949

.preheader950.preheader:                          ; preds = %.loopexit1019
  %tmp_434 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co9, i5 0)
  %p_shl285_cast = zext i10 %tmp_434 to i11
  %tmp_436 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co9, i3 0)
  %p_shl286_cast = zext i8 %tmp_436 to i11
  %tmp_437 = sub i11 %p_shl285_cast, %p_shl286_cast
  %tmp_243 = add i6 %co9_cast, 24
  %tmp_439 = call i11 @_ssdm_op_BitConcatenate.i11.i6.i5(i6 %tmp_243, i5 0)
  %p_shl283_cast = zext i11 %tmp_439 to i12
  %tmp_440 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %tmp_243, i3 0)
  %p_shl284_cast = zext i9 %tmp_440 to i12
  %tmp_441 = sub i12 %p_shl283_cast, %p_shl284_cast
  %tmp_351 = sext i12 %tmp_441 to i33
  %tmp_352 = add i33 %tmp_351, %tmp_490_cast
  %tmp_355 = sext i33 %tmp_352 to i64
  %p3X3_1X1_WEIGHTS_addr_2 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %tmp_355
  %p_rd_req922 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_2, i32 24)
  br label %.preheader950

.preheader950:                                    ; preds = %13, %.preheader950.preheader
  %ci10 = phi i5 [ %ci_12, %13 ], [ 0, %.preheader950.preheader ]
  %exitcond15 = icmp eq i5 %ci10, -8
  %empty_354 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_12 = add i5 %ci10, 1
  br i1 %exitcond15, label %.loopexit1019.loopexit, label %13

; <label>:13                                      ; preds = %.preheader950
  %tmp_248_cast = zext i5 %ci10 to i11
  %tmp_451 = add i11 %tmp_437, %tmp_248_cast
  %tmp_732_cast = sext i11 %tmp_451 to i64
  %weights_24_24_1x1_V_1 = getelementptr [576 x i8]* @weights_24_24_1x1_V, i64 0, i64 %tmp_732_cast
  %p3X3_1X1_WEIGHTS_addr_59 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_2)
  store i8 %p3X3_1X1_WEIGHTS_addr_59, i8* %weights_24_24_1x1_V_1, align 1
  br label %.preheader950

.preheader949:                                    ; preds = %.preheader949.preheader, %14
  %i6 = phi i5 [ %i_6, %14 ], [ 0, %.preheader949.preheader ]
  %exitcond14 = icmp eq i5 %i6, -8
  %empty_355 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_6 = add i5 %i6, 1
  br i1 %exitcond14, label %15, label %14

; <label>:14                                      ; preds = %.preheader949
  %tmp_245 = zext i5 %i6 to i64
  %DATA_BIAS_addr_5_rea = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_5)
  %bias_24_V_addr_2 = getelementptr [24 x i8]* @bias_24_V, i64 0, i64 %tmp_245
  store i8 %DATA_BIAS_addr_5_rea, i8* %bias_24_V_addr_2, align 1
  br label %.preheader949

; <label>:15                                      ; preds = %.preheader949
  call fastcc void @subconv_1x1_16_p([7776 x i8]* @buffer0_1_24_16x16_p, [576 x i8]* @weights_24_24_1x1_V, [24 x i8]* @bias_24_V, [7776 x i8]* @buffer1_1_24_16x16_p)
  call fastcc void @shuffle_24_l_p([7776 x i8]* @buffer1_1_24_16x16_p, [15552 x i8]* @downsampleunit0_outp)
  br label %.loopexit1018

.loopexit1018.loopexit:                           ; preds = %.preheader948
  br label %.loopexit1018

.loopexit1018:                                    ; preds = %.loopexit1018.loopexit, %15
  %co12 = phi i5 [ 0, %15 ], [ %co_29, %.loopexit1018.loopexit ]
  %co12_cast = zext i5 %co12 to i6
  %exitcond16 = icmp eq i5 %co12, -8
  %empty_356 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_29 = add i5 %co12, 1
  br i1 %exitcond16, label %.preheader946.preheader, label %.preheader948.preheader

.preheader946.preheader:                          ; preds = %.loopexit1018
  br label %.preheader946

.preheader948.preheader:                          ; preds = %.loopexit1018
  %tmp_249_cast = zext i5 %co12 to i8
  %tmp_457 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co12, i2 0)
  %p_shl288_cast = zext i7 %tmp_457 to i8
  %tmp_460 = sub i8 %p_shl288_cast, %tmp_249_cast
  %tmp_743_cast = sext i8 %tmp_460 to i9
  %tmp_250 = add i6 %co12_cast, 24
  %tmp_251_cast = zext i6 %tmp_250 to i9
  %tmp_461 = call i8 @_ssdm_op_BitConcatenate.i8.i6.i2(i6 %tmp_250, i2 0)
  %p_shl287_cast = zext i8 %tmp_461 to i9
  %tmp_464 = sub i9 %p_shl287_cast, %tmp_251_cast
  br label %.preheader948

.preheader948.loopexit:                           ; preds = %.preheader947
  br label %.preheader948

.preheader948:                                    ; preds = %.preheader948.loopexit, %.preheader948.preheader
  %w13 = phi i2 [ 0, %.preheader948.preheader ], [ %w_27, %.preheader948.loopexit ]
  %exitcond18 = icmp eq i2 %w13, -1
  %empty_357 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %w_27 = add i2 %w13, 1
  br i1 %exitcond18, label %.loopexit1018.loopexit, label %.preheader947.preheader

.preheader947.preheader:                          ; preds = %.preheader948
  %tmp_255_cast = zext i2 %w13 to i9
  %tmp_480 = add i9 %tmp_255_cast, %tmp_464
  %tmp_762_cast1 = sext i9 %tmp_480 to i64
  %tmp_482 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_480, i2 0)
  %p_shl197 = sext i11 %tmp_482 to i64
  %tmp_483 = sub i64 %p_shl197, %tmp_762_cast1
  %tmp_484 = add i9 %tmp_255_cast, %tmp_743_cast
  %tmp_485 = shl i9 %tmp_484, 2
  %tmp_490 = sub i9 %tmp_485, %tmp_484
  %tmp_491 = add i64 %tmp_373, %tmp_483
  %p3X3_1X1_WEIGHTS_addr_3 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %tmp_491
  %p_rd_req924 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_3, i32 3)
  br label %.preheader947

.preheader947:                                    ; preds = %16, %.preheader947.preheader
  %h14 = phi i2 [ %h_27, %16 ], [ 0, %.preheader947.preheader ]
  %exitcond20 = icmp eq i2 %h14, -1
  %empty_358 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %h_27 = add i2 %h14, 1
  br i1 %exitcond20, label %.preheader948.loopexit, label %16

; <label>:16                                      ; preds = %.preheader947
  %tmp_257_cast = zext i2 %h14 to i9
  %tmp_521 = add i9 %tmp_490, %tmp_257_cast
  %tmp_860_cast = zext i9 %tmp_521 to i64
  %weights_24_1_3x3_V_a_1 = getelementptr [216 x i8]* @weights_24_1_3x3_V, i64 0, i64 %tmp_860_cast
  %p3X3_1X1_WEIGHTS_addr_60 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_3)
  store i8 %p3X3_1X1_WEIGHTS_addr_60, i8* %weights_24_1_3x3_V_a_1, align 1
  br label %.preheader947

.preheader946:                                    ; preds = %.preheader946.preheader, %17
  %tmp_357 = phi i5 [ %i_7, %17 ], [ 0, %.preheader946.preheader ]
  %exitcond17 = icmp eq i5 %tmp_357, -8
  %empty_359 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_7 = add i5 %tmp_357, 1
  br i1 %exitcond17, label %18, label %17

; <label>:17                                      ; preds = %.preheader946
  %tmp_252 = zext i5 %tmp_357 to i64
  %tmp_362 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 true, i5 %tmp_357)
  %tmp_466 = sext i6 %tmp_362 to i7
  %tmp_471 = zext i7 %tmp_466 to i33
  %tmp_477 = add i33 %tmp_471, %tmp_482_cast
  %tmp_479 = sext i33 %tmp_477 to i64
  %DATA_BIAS_addr_6 = getelementptr i8* %DATA_BIAS, i64 %tmp_479
  %DATA_BIAS_load_6_req = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_6, i32 1)
  %DATA_BIAS_addr_6_rea = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_6)
  %bias_24_V_addr_3 = getelementptr [24 x i8]* @bias_24_V, i64 0, i64 %tmp_252
  store i8 %DATA_BIAS_addr_6_rea, i8* %bias_24_V_addr_3, align 1
  br label %.preheader946

; <label>:18                                      ; preds = %.preheader946
  call fastcc void @subconv_3x3_32_strid([27744 x i8]* @conv1_output_p_V, [216 x i8]* @weights_24_1_3x3_V, [24 x i8]* @bias_24_V, [7776 x i8]* @buffer0_1_24_16x16_p)
  br label %.loopexit1017

.loopexit1017.loopexit:                           ; preds = %.preheader945
  br label %.loopexit1017

.loopexit1017:                                    ; preds = %.loopexit1017.loopexit, %18
  %co16 = phi i5 [ 0, %18 ], [ %co_30, %.loopexit1017.loopexit ]
  %co16_cast = zext i5 %co16 to i7
  %exitcond19 = icmp eq i5 %co16, -8
  %empty_360 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_30 = add i5 %co16, 1
  br i1 %exitcond19, label %.preheader944.preheader, label %.preheader945.preheader

.preheader944.preheader:                          ; preds = %.loopexit1017
  %tmp_493 = add i33 %tmp_482_cast, 120
  %tmp_494 = sext i33 %tmp_493 to i64
  %DATA_BIAS_addr_7 = getelementptr i8* %DATA_BIAS, i64 %tmp_494
  %p_rd_req926 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_7, i32 24)
  br label %.preheader944

.preheader945.preheader:                          ; preds = %.loopexit1017
  %tmp_496 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co16, i5 0)
  %p_shl293_cast = zext i10 %tmp_496 to i11
  %tmp_499 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co16, i3 0)
  %p_shl294_cast = zext i8 %tmp_499 to i11
  %tmp_505 = sub i11 %p_shl293_cast, %p_shl294_cast
  %tmp_256 = add i7 %co16_cast, 48
  %tmp_508 = call i12 @_ssdm_op_BitConcatenate.i12.i7.i5(i7 %tmp_256, i5 0)
  %p_shl291_cast = zext i12 %tmp_508 to i13
  %tmp_509 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_256, i3 0)
  %p_shl292_cast = zext i10 %tmp_509 to i13
  %tmp_512 = sub i13 %p_shl291_cast, %p_shl292_cast
  %tmp_513 = sext i13 %tmp_512 to i33
  %tmp_515 = add i33 %tmp_513, %tmp_490_cast
  %tmp_516 = sext i33 %tmp_515 to i64
  %p3X3_1X1_WEIGHTS_addr_4 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %tmp_516
  %p_rd_req925 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_4, i32 24)
  br label %.preheader945

.preheader945:                                    ; preds = %19, %.preheader945.preheader
  %ci13 = phi i5 [ %ci_14, %19 ], [ 0, %.preheader945.preheader ]
  %exitcond22 = icmp eq i5 %ci13, -8
  %empty_361 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_14 = add i5 %ci13, 1
  br i1 %exitcond22, label %.loopexit1017.loopexit, label %19

; <label>:19                                      ; preds = %.preheader945
  %tmp_261_cast = zext i5 %ci13 to i11
  %tmp_527 = add i11 %tmp_505, %tmp_261_cast
  %tmp_887_cast = sext i11 %tmp_527 to i64
  %weights_24_24_1x1_V_2 = getelementptr [576 x i8]* @weights_24_24_1x1_V, i64 0, i64 %tmp_887_cast
  %p3X3_1X1_WEIGHTS_addr_61 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_4)
  store i8 %p3X3_1X1_WEIGHTS_addr_61, i8* %weights_24_24_1x1_V_2, align 1
  br label %.preheader945

.preheader944:                                    ; preds = %.preheader944.preheader, %20
  %i9 = phi i5 [ %i_8, %20 ], [ 0, %.preheader944.preheader ]
  %exitcond21 = icmp eq i5 %i9, -8
  %empty_362 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_8 = add i5 %i9, 1
  br i1 %exitcond21, label %21, label %20

; <label>:20                                      ; preds = %.preheader944
  %tmp_258 = zext i5 %i9 to i64
  %DATA_BIAS_addr_7_rea = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_7)
  %bias_24_V_addr_4 = getelementptr [24 x i8]* @bias_24_V, i64 0, i64 %tmp_258
  store i8 %DATA_BIAS_addr_7_rea, i8* %bias_24_V_addr_4, align 1
  br label %.preheader944

; <label>:21                                      ; preds = %.preheader944
  call fastcc void @subconv_1x1_16_p([7776 x i8]* @buffer0_1_24_16x16_p, [576 x i8]* @weights_24_24_1x1_V, [24 x i8]* @bias_24_V, [7776 x i8]* @buffer1_1_24_16x16_p)
  call fastcc void @shuffle_24_r_p([7776 x i8]* @buffer1_1_24_16x16_p, [15552 x i8]* @downsampleunit0_outp)
  br label %.loopexit1016

.loopexit1016.loopexit:                           ; preds = %.preheader943
  br label %.loopexit1016

.loopexit1016:                                    ; preds = %.loopexit1016.loopexit, %21
  %co19 = phi i5 [ 0, %21 ], [ %co_31, %.loopexit1016.loopexit ]
  %co19_cast = zext i5 %co19 to i6
  %exitcond23 = icmp eq i5 %co19, -8
  %empty_363 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_31 = add i5 %co19, 1
  br i1 %exitcond23, label %.preheader941.preheader, label %.preheader943.preheader

.preheader941.preheader:                          ; preds = %.loopexit1016
  br label %.preheader941

.preheader943.preheader:                          ; preds = %.loopexit1016
  %tmp_529 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co19, i4 0)
  %p_shl297_cast = zext i9 %tmp_529 to i10
  %tmp_530 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co19, i1 false)
  %p_shl298_cast = zext i6 %tmp_530 to i10
  %tmp_532 = add i10 %p_shl298_cast, %p_shl297_cast
  %tmp_262 = add i6 %co19_cast, 24
  %tmp_533 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %tmp_262, i4 0)
  %p_shl295_cast = zext i10 %tmp_533 to i11
  %tmp_534 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %tmp_262, i1 false)
  %p_shl296_cast = zext i7 %tmp_534 to i11
  %tmp_535 = add i11 %p_shl296_cast, %p_shl295_cast
  br label %.preheader943

.preheader943.loopexit:                           ; preds = %.preheader942
  br label %.preheader943

.preheader943:                                    ; preds = %.preheader943.loopexit, %.preheader943.preheader
  %h20 = phi i5 [ 0, %.preheader943.preheader ], [ %h_28, %.preheader943.loopexit ]
  %exitcond25 = icmp eq i5 %h20, -16
  %empty_364 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %h_28 = add i5 %h20, 1
  br i1 %exitcond25, label %.loopexit1016.loopexit, label %.preheader942.preheader

.preheader942.preheader:                          ; preds = %.preheader943
  %tmp_264_cast1 = zext i5 %h_28 to i11
  %tmp_264_cast = zext i5 %h_28 to i10
  %tmp_565 = add i10 %tmp_264_cast, %tmp_532
  %p_shl301_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_565, i4 0)
  %tmp_566 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_565, i1 false)
  %p_shl302_cast = zext i11 %tmp_566 to i14
  %tmp_571 = add i14 %p_shl301_cast, %p_shl302_cast
  %tmp_577 = add i11 %tmp_264_cast1, %tmp_535
  %p_shl299_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_577, i4 0)
  %tmp_579 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_577, i1 false)
  %p_shl300_cast = zext i12 %tmp_579 to i15
  %tmp_580 = add i15 %p_shl299_cast, %p_shl300_cast
  br label %.preheader942

.preheader942:                                    ; preds = %22, %.preheader942.preheader
  %w21 = phi i5 [ %w_28, %22 ], [ 0, %.preheader942.preheader ]
  %exitcond28 = icmp eq i5 %w21, -16
  %empty_365 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %w_28 = add i5 %w21, 1
  br i1 %exitcond28, label %.preheader943.loopexit, label %22

; <label>:22                                      ; preds = %.preheader942
  %tmp_269_cast1 = zext i5 %w_28 to i15
  %tmp_269_cast = zext i5 %w_28 to i14
  %tmp_583 = add i14 %tmp_571, %tmp_269_cast
  %tmp_1062_cast = zext i14 %tmp_583 to i64
  %buffer0_1_24_16x16_p = getelementptr [7776 x i8]* @buffer0_1_24_16x16_p, i64 0, i64 %tmp_1062_cast
  %tmp_584 = add i15 %tmp_580, %tmp_269_cast1
  %tmp_1063_cast = zext i15 %tmp_584 to i64
  %downsampleunit0_outp = getelementptr [15552 x i8]* @downsampleunit0_outp, i64 0, i64 %tmp_1063_cast
  %downsampleunit0_outp_1 = load i8* %downsampleunit0_outp, align 1
  store i8 %downsampleunit0_outp_1, i8* %buffer0_1_24_16x16_p, align 1
  br label %.preheader942

.preheader941.loopexit:                           ; preds = %.preheader940
  br label %.preheader941

.preheader941:                                    ; preds = %.preheader941.preheader, %.preheader941.loopexit
  %co22 = phi i5 [ %co_32, %.preheader941.loopexit ], [ 0, %.preheader941.preheader ]
  %co22_cast = zext i5 %co22 to i7
  %exitcond24 = icmp eq i5 %co22, -8
  %empty_366 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_32 = add i5 %co22, 1
  br i1 %exitcond24, label %.preheader939.preheader, label %.preheader940.preheader

.preheader939.preheader:                          ; preds = %.preheader941
  %tmp_540 = add i33 %tmp_482_cast, 144
  %tmp_541 = sext i33 %tmp_540 to i64
  %DATA_BIAS_addr_8 = getelementptr i8* %DATA_BIAS, i64 %tmp_541
  %p_rd_req928 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_8, i32 24)
  br label %.preheader939

.preheader940.preheader:                          ; preds = %.preheader941
  %tmp_543 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co22, i5 0)
  %p_shl305_cast = zext i10 %tmp_543 to i11
  %tmp_544 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co22, i3 0)
  %p_shl306_cast = zext i8 %tmp_544 to i11
  %tmp_546 = sub i11 %p_shl305_cast, %p_shl306_cast
  %tmp_263 = add i7 %co22_cast, -56
  %tmp_549 = call i12 @_ssdm_op_BitConcatenate.i12.i7.i5(i7 %tmp_263, i5 0)
  %p_shl303_cast = zext i12 %tmp_549 to i13
  %tmp_555 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_263, i3 0)
  %p_shl304_cast = zext i10 %tmp_555 to i13
  %tmp_558 = sub i13 %p_shl303_cast, %p_shl304_cast
  %tmp_559 = sext i13 %tmp_558 to i33
  %tmp_562 = add i33 %tmp_559, %tmp_490_cast
  %tmp_563 = sext i33 %tmp_562 to i64
  %p3X3_1X1_WEIGHTS_addr_5 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %tmp_563
  %p_rd_req927 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_5, i32 24)
  br label %.preheader940

.preheader940:                                    ; preds = %23, %.preheader940.preheader
  %ci15 = phi i5 [ %ci_16, %23 ], [ 0, %.preheader940.preheader ]
  %exitcond27 = icmp eq i5 %ci15, -8
  %empty_367 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_16 = add i5 %ci15, 1
  br i1 %exitcond27, label %.preheader941.loopexit, label %23

; <label>:23                                      ; preds = %.preheader940
  %tmp_268_cast = zext i5 %ci15 to i11
  %tmp_582 = add i11 %tmp_546, %tmp_268_cast
  %tmp_1059_cast = sext i11 %tmp_582 to i64
  %weights_24_24_1x1_V_3 = getelementptr [576 x i8]* @weights_24_24_1x1_V, i64 0, i64 %tmp_1059_cast
  %p3X3_1X1_WEIGHTS_addr_62 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_5)
  store i8 %p3X3_1X1_WEIGHTS_addr_62, i8* %weights_24_24_1x1_V_3, align 1
  br label %.preheader940

.preheader939:                                    ; preds = %.preheader939.preheader, %24
  %i10 = phi i5 [ %i_9, %24 ], [ 0, %.preheader939.preheader ]
  %exitcond26 = icmp eq i5 %i10, -8
  %empty_368 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_9 = add i5 %i10, 1
  br i1 %exitcond26, label %25, label %24

; <label>:24                                      ; preds = %.preheader939
  %tmp_265 = zext i5 %i10 to i64
  %DATA_BIAS_addr_8_rea = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_8)
  %bias_24_V_addr_5 = getelementptr [24 x i8]* @bias_24_V, i64 0, i64 %tmp_265
  store i8 %DATA_BIAS_addr_8_rea, i8* %bias_24_V_addr_5, align 1
  br label %.preheader939

; <label>:25                                      ; preds = %.preheader939
  call fastcc void @subconv_1x1_16_p([7776 x i8]* @buffer0_1_24_16x16_p, [576 x i8]* @weights_24_24_1x1_V, [24 x i8]* @bias_24_V, [7776 x i8]* @buffer1_1_24_16x16_p)
  br label %.loopexit1015

.loopexit1015.loopexit:                           ; preds = %.preheader938
  br label %.loopexit1015

.loopexit1015:                                    ; preds = %.loopexit1015.loopexit, %25
  %co25 = phi i5 [ 0, %25 ], [ %co_33, %.loopexit1015.loopexit ]
  %co25_cast = zext i5 %co25 to i7
  %exitcond29 = icmp eq i5 %co25, -8
  %empty_369 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_33 = add i5 %co25, 1
  br i1 %exitcond29, label %.preheader936.preheader, label %.preheader938.preheader

.preheader936.preheader:                          ; preds = %.loopexit1015
  %tmp_585 = add i33 %tmp_482_cast, 168
  %tmp_590 = sext i33 %tmp_585 to i64
  %DATA_BIAS_addr_9 = getelementptr i8* %DATA_BIAS, i64 %tmp_590
  %p_rd_req930 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_9, i32 24)
  br label %.preheader936

.preheader938.preheader:                          ; preds = %.loopexit1015
  %tmp_270_cast = zext i5 %co25 to i8
  %tmp_591 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co25, i2 0)
  %p_shl308_cast = zext i7 %tmp_591 to i8
  %tmp_593 = sub i8 %p_shl308_cast, %tmp_270_cast
  %tmp_1071_cast = sext i8 %tmp_593 to i9
  %tmp_271 = add i7 %co25_cast, 48
  %tmp_272_cast = zext i7 %tmp_271 to i10
  %tmp_594 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_271, i2 0)
  %p_shl307_cast = zext i9 %tmp_594 to i10
  %tmp_596 = sub i10 %p_shl307_cast, %tmp_272_cast
  br label %.preheader938

.preheader938.loopexit:                           ; preds = %.preheader937
  br label %.preheader938

.preheader938:                                    ; preds = %.preheader938.loopexit, %.preheader938.preheader
  %w26 = phi i2 [ 0, %.preheader938.preheader ], [ %w_29, %.preheader938.loopexit ]
  %exitcond31 = icmp eq i2 %w26, -1
  %empty_370 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %w_29 = add i2 %w26, 1
  br i1 %exitcond31, label %.loopexit1015.loopexit, label %.preheader937.preheader

.preheader937.preheader:                          ; preds = %.preheader938
  %tmp_276_cast1 = zext i2 %w26 to i9
  %tmp_276_cast = zext i2 %w26 to i10
  %tmp_599 = add i10 %tmp_276_cast, %tmp_596
  %tmp_1074_cast = sext i10 %tmp_599 to i64
  %tmp_605 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_599, i2 0)
  %p_shl202 = sext i12 %tmp_605 to i64
  %tmp_608 = sub i64 %p_shl202, %tmp_1074_cast
  %tmp_609 = add i9 %tmp_276_cast1, %tmp_1071_cast
  %tmp_612 = shl i9 %tmp_609, 2
  %tmp_613 = sub i9 %tmp_612, %tmp_609
  %tmp_615 = add i64 %tmp_373, %tmp_608
  %p3X3_1X1_WEIGHTS_addr_6 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %tmp_615
  %p_rd_req929 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_6, i32 3)
  br label %.preheader937

.preheader937:                                    ; preds = %26, %.preheader937.preheader
  %h27 = phi i2 [ %h_29, %26 ], [ 0, %.preheader937.preheader ]
  %exitcond33 = icmp eq i2 %h27, -1
  %empty_371 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %h_29 = add i2 %h27, 1
  br i1 %exitcond33, label %.preheader938.loopexit, label %26

; <label>:26                                      ; preds = %.preheader937
  %tmp_277_cast = zext i2 %h27 to i9
  %tmp_643 = add i9 %tmp_613, %tmp_277_cast
  %tmp_1089_cast = zext i9 %tmp_643 to i64
  %weights_24_1_3x3_V_a_2 = getelementptr [216 x i8]* @weights_24_1_3x3_V, i64 0, i64 %tmp_1089_cast
  %p3X3_1X1_WEIGHTS_addr_63 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_6)
  store i8 %p3X3_1X1_WEIGHTS_addr_63, i8* %weights_24_1_3x3_V_a_2, align 1
  br label %.preheader937

.preheader936:                                    ; preds = %.preheader936.preheader, %27
  %i11 = phi i5 [ %i_12, %27 ], [ 0, %.preheader936.preheader ]
  %exitcond30 = icmp eq i5 %i11, -8
  %empty_372 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_12 = add i5 %i11, 1
  br i1 %exitcond30, label %28, label %27

; <label>:27                                      ; preds = %.preheader936
  %tmp_273 = zext i5 %i11 to i64
  %DATA_BIAS_addr_9_rea = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_9)
  %bias_24_V_addr_6 = getelementptr [24 x i8]* @bias_24_V, i64 0, i64 %tmp_273
  store i8 %DATA_BIAS_addr_9_rea, i8* %bias_24_V_addr_6, align 1
  br label %.preheader936

; <label>:28                                      ; preds = %.preheader936
  call fastcc void @subconv_3x3_16_no_re([7776 x i8]* @buffer1_1_24_16x16_p, [216 x i8]* @weights_24_1_3x3_V, [24 x i8]* @bias_24_V, [7776 x i8]* @buffer0_1_24_16x16_p)
  br label %.loopexit1014

.loopexit1014.loopexit:                           ; preds = %.preheader935
  br label %.loopexit1014

.loopexit1014:                                    ; preds = %.loopexit1014.loopexit, %28
  %co29 = phi i5 [ 0, %28 ], [ %co_34, %.loopexit1014.loopexit ]
  %exitcond32 = icmp eq i5 %co29, -8
  %empty_373 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_34 = add i5 %co29, 1
  br i1 %exitcond32, label %.preheader934.preheader, label %.preheader935.preheader

.preheader934.preheader:                          ; preds = %.loopexit1014
  br label %.preheader934

.preheader935.preheader:                          ; preds = %.loopexit1014
  %tmp_616 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co29, i5 0)
  %p_shl313_cast = zext i10 %tmp_616 to i11
  %tmp_621 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co29, i3 0)
  %p_shl314_cast = zext i8 %tmp_621 to i11
  %tmp_627 = sub i11 %p_shl313_cast, %p_shl314_cast
  %tmp_629 = call i11 @_ssdm_op_BitConcatenate.i11.i1.i5.i5(i1 true, i5 %co29, i5 0)
  %tmp_630 = sext i11 %tmp_629 to i12
  %p_shl311_cast = zext i12 %tmp_630 to i13
  %tmp_632 = call i9 @_ssdm_op_BitConcatenate.i9.i1.i5.i3(i1 true, i5 %co29, i3 0)
  %tmp_633 = sext i9 %tmp_632 to i10
  %p_shl312_cast = zext i10 %tmp_633 to i13
  %tmp_634 = sub i13 %p_shl311_cast, %p_shl312_cast
  %tmp_635 = sext i13 %tmp_634 to i33
  %tmp_640 = add i33 %tmp_635, %tmp_490_cast
  %tmp_641 = sext i33 %tmp_640 to i64
  %p3X3_1X1_WEIGHTS_addr_7 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %tmp_641
  %p_rd_req931 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_7, i32 24)
  br label %.preheader935

.preheader935:                                    ; preds = %29, %.preheader935.preheader
  %ci17 = phi i5 [ %ci_18, %29 ], [ 0, %.preheader935.preheader ]
  %exitcond35 = icmp eq i5 %ci17, -8
  %empty_374 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_18 = add i5 %ci17, 1
  br i1 %exitcond35, label %.loopexit1014.loopexit, label %29

; <label>:29                                      ; preds = %.preheader935
  %tmp_281_cast = zext i5 %ci17 to i11
  %tmp_662 = add i11 %tmp_627, %tmp_281_cast
  %tmp_1091_cast = sext i11 %tmp_662 to i64
  %weights_24_24_1x1_V_4 = getelementptr [576 x i8]* @weights_24_24_1x1_V, i64 0, i64 %tmp_1091_cast
  %p3X3_1X1_WEIGHTS_addr_64 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_7)
  store i8 %p3X3_1X1_WEIGHTS_addr_64, i8* %weights_24_24_1x1_V_4, align 1
  br label %.preheader935

.preheader934:                                    ; preds = %.preheader934.preheader, %30
  %tmp_644 = phi i5 [ %i_13, %30 ], [ 0, %.preheader934.preheader ]
  %exitcond34 = icmp eq i5 %tmp_644, -8
  %empty_375 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_13 = add i5 %tmp_644, 1
  br i1 %exitcond34, label %31, label %30

; <label>:30                                      ; preds = %.preheader934
  %tmp_278 = zext i5 %tmp_644 to i64
  %tmp_646 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 -2, i5 %tmp_644)
  %tmp_649 = sext i7 %tmp_646 to i8
  %tmp_655 = zext i8 %tmp_649 to i33
  %tmp_658 = add i33 %tmp_655, %tmp_482_cast
  %tmp_659 = sext i33 %tmp_658 to i64
  %DATA_BIAS_addr_10 = getelementptr i8* %DATA_BIAS, i64 %tmp_659
  %DATA_BIAS_load_10_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_10, i32 1)
  %DATA_BIAS_addr_10_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_10)
  %bias_24_V_addr_7 = getelementptr [24 x i8]* @bias_24_V, i64 0, i64 %tmp_278
  store i8 %DATA_BIAS_addr_10_re, i8* %bias_24_V_addr_7, align 1
  br label %.preheader934

; <label>:31                                      ; preds = %.preheader934
  call fastcc void @subconv_1x1_16_p([7776 x i8]* @buffer0_1_24_16x16_p, [576 x i8]* @weights_24_24_1x1_V, [24 x i8]* @bias_24_V, [7776 x i8]* @buffer1_1_24_16x16_p)
  br label %.loopexit1013

.loopexit1013.loopexit:                           ; preds = %.preheader933
  br label %.loopexit1013

.loopexit1013:                                    ; preds = %.loopexit1013.loopexit, %31
  %co32 = phi i5 [ 0, %31 ], [ %co_35, %.loopexit1013.loopexit ]
  %exitcond36 = icmp eq i5 %co32, -8
  %empty_376 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_35 = add i5 %co32, 1
  br i1 %exitcond36, label %33, label %.preheader933.preheader

.preheader933.preheader:                          ; preds = %.loopexit1013
  %tmp_663 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co32, i4 0)
  %p_shl315_cast = zext i9 %tmp_663 to i10
  %tmp_665 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co32, i1 false)
  %p_shl316_cast = zext i6 %tmp_665 to i10
  %tmp_666 = add i10 %p_shl316_cast, %p_shl315_cast
  br label %.preheader933

.preheader933.loopexit:                           ; preds = %.preheader932
  br label %.preheader933

.preheader933:                                    ; preds = %.preheader933.loopexit, %.preheader933.preheader
  %h30 = phi i5 [ 0, %.preheader933.preheader ], [ %h_31, %.preheader933.loopexit ]
  %exitcond38 = icmp eq i5 %h30, -16
  %empty_377 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %h_31 = add i5 %h30, 1
  br i1 %exitcond38, label %.loopexit1013.loopexit, label %.preheader932.preheader

.preheader932.preheader:                          ; preds = %.preheader933
  %tmp_283_cast = zext i5 %h_31 to i10
  %tmp_684 = add i10 %tmp_283_cast, %tmp_666
  %tmp_685 = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_684, i4 0)
  %p_shl317_cast = zext i14 %tmp_685 to i15
  %tmp_690 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_684, i1 false)
  %p_shl318_cast = zext i11 %tmp_690 to i15
  %tmp_691 = add i15 %p_shl317_cast, %p_shl318_cast
  br label %.preheader932

.preheader932:                                    ; preds = %32, %.preheader932.preheader
  %w30 = phi i5 [ %w_31, %32 ], [ 0, %.preheader932.preheader ]
  %exitcond41 = icmp eq i5 %w30, -16
  %empty_378 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %w_31 = add i5 %w30, 1
  br i1 %exitcond41, label %.preheader933.loopexit, label %32

; <label>:32                                      ; preds = %.preheader932
  %tmp_286_cast = zext i5 %w_31 to i15
  %tmp_734 = add i15 %tmp_691, %tmp_286_cast
  %tmp_1119_cast = zext i15 %tmp_734 to i64
  %buffer0_1_24_16x16_p_1 = getelementptr [7776 x i8]* @buffer0_1_24_16x16_p, i64 0, i64 %tmp_1119_cast
  %downsampleunit0_outp_2 = getelementptr [15552 x i8]* @downsampleunit0_outp, i64 0, i64 %tmp_1119_cast
  %downsampleunit0_outp_3 = load i8* %downsampleunit0_outp_2, align 1
  store i8 %downsampleunit0_outp_3, i8* %buffer0_1_24_16x16_p_1, align 1
  br label %.preheader932

; <label>:33                                      ; preds = %.loopexit1013
  call fastcc void @shuffle_24_p([7776 x i8]* @buffer0_1_24_16x16_p, [15552 x i8]* @shuffleunit0_0_outpu)
  br label %.loopexit1012

.loopexit1012.loopexit:                           ; preds = %.preheader931
  br label %.loopexit1012

.loopexit1012:                                    ; preds = %.loopexit1012.loopexit, %33
  %co35 = phi i5 [ 0, %33 ], [ %co_36, %.loopexit1012.loopexit ]
  %co35_cast = zext i5 %co35 to i6
  %exitcond37 = icmp eq i5 %co35, -8
  %empty_379 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_36 = add i5 %co35, 1
  br i1 %exitcond37, label %.preheader929.preheader, label %.preheader931.preheader

.preheader929.preheader:                          ; preds = %.loopexit1012
  br label %.preheader929

.preheader931.preheader:                          ; preds = %.loopexit1012
  %tmp_671 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co35, i4 0)
  %p_shl321_cast = zext i9 %tmp_671 to i10
  %tmp_677 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co35, i1 false)
  %p_shl322_cast = zext i6 %tmp_677 to i10
  %tmp_679 = add i10 %p_shl322_cast, %p_shl321_cast
  %tmp_282 = add i6 %co35_cast, 24
  %tmp_680 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %tmp_282, i4 0)
  %p_shl319_cast = zext i10 %tmp_680 to i11
  %tmp_682 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %tmp_282, i1 false)
  %p_shl320_cast = zext i7 %tmp_682 to i11
  %tmp_683 = add i11 %p_shl320_cast, %p_shl319_cast
  br label %.preheader931

.preheader931.loopexit:                           ; preds = %.preheader930
  br label %.preheader931

.preheader931:                                    ; preds = %.preheader931.loopexit, %.preheader931.preheader
  %h32 = phi i5 [ 0, %.preheader931.preheader ], [ %h_33, %.preheader931.loopexit ]
  %exitcond40 = icmp eq i5 %h32, -16
  %empty_380 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %h_33 = add i5 %h32, 1
  br i1 %exitcond40, label %.loopexit1012.loopexit, label %.preheader930.preheader

.preheader930.preheader:                          ; preds = %.preheader931
  %tmp_285_cast1 = zext i5 %h_33 to i11
  %tmp_285_cast = zext i5 %h_33 to i10
  %tmp_721 = add i10 %tmp_285_cast, %tmp_679
  %p_shl325_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_721, i4 0)
  %tmp_727 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_721, i1 false)
  %p_shl326_cast = zext i11 %tmp_727 to i14
  %tmp_729 = add i14 %p_shl325_cast, %p_shl326_cast
  %tmp_730 = add i11 %tmp_285_cast1, %tmp_683
  %p_shl323_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_730, i4 0)
  %tmp_732 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_730, i1 false)
  %p_shl324_cast = zext i12 %tmp_732 to i15
  %tmp_733 = add i15 %p_shl323_cast, %p_shl324_cast
  br label %.preheader930

.preheader930:                                    ; preds = %34, %.preheader930.preheader
  %w32 = phi i5 [ %w_33, %34 ], [ 0, %.preheader930.preheader ]
  %exitcond44 = icmp eq i5 %w32, -16
  %empty_381 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %w_33 = add i5 %w32, 1
  br i1 %exitcond44, label %.preheader931.loopexit, label %34

; <label>:34                                      ; preds = %.preheader930
  %tmp_291_cast1 = zext i5 %w_33 to i15
  %tmp_291_cast = zext i5 %w_33 to i14
  %tmp_740 = add i14 %tmp_729, %tmp_291_cast
  %tmp_1122_cast1 = zext i14 %tmp_740 to i64
  %buffer0_1_24_16x16_p_2 = getelementptr [7776 x i8]* @buffer0_1_24_16x16_p, i64 0, i64 %tmp_1122_cast1
  %tmp_741 = add i15 %tmp_733, %tmp_291_cast1
  %tmp_1123_cast = zext i15 %tmp_741 to i64
  %shuffleunit0_0_outpu = getelementptr [15552 x i8]* @shuffleunit0_0_outpu, i64 0, i64 %tmp_1123_cast
  %shuffleunit0_0_outpu_1 = load i8* %shuffleunit0_0_outpu, align 1
  store i8 %shuffleunit0_0_outpu_1, i8* %buffer0_1_24_16x16_p_2, align 1
  br label %.preheader930

.preheader929.loopexit:                           ; preds = %.preheader928
  br label %.preheader929

.preheader929:                                    ; preds = %.preheader929.preheader, %.preheader929.loopexit
  %co36 = phi i5 [ %co_37, %.preheader929.loopexit ], [ 0, %.preheader929.preheader ]
  %co36_cast = zext i5 %co36 to i8
  %exitcond39 = icmp eq i5 %co36, -8
  %empty_382 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_37 = add i5 %co36, 1
  br i1 %exitcond39, label %.preheader927.preheader, label %.preheader928.preheader

.preheader927.preheader:                          ; preds = %.preheader929
  %tmp_693 = add i33 %tmp_482_cast, 216
  %tmp_694 = sext i33 %tmp_693 to i64
  %DATA_BIAS_addr_11 = getelementptr i8* %DATA_BIAS, i64 %tmp_694
  %p_rd_req933 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_11, i32 24)
  br label %.preheader927

.preheader928.preheader:                          ; preds = %.preheader929
  %tmp_696 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co36, i5 0)
  %p_shl329_cast = zext i10 %tmp_696 to i11
  %tmp_699 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co36, i3 0)
  %p_shl330_cast = zext i8 %tmp_699 to i11
  %tmp_705 = sub i11 %p_shl329_cast, %p_shl330_cast
  %tmp_284 = add i8 %co36_cast, 120
  %tmp_708 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_284, i5 0)
  %p_shl327_cast = zext i13 %tmp_708 to i14
  %tmp_709 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %tmp_284, i3 0)
  %p_shl328_cast = zext i11 %tmp_709 to i14
  %tmp_712 = sub i14 %p_shl327_cast, %p_shl328_cast
  %tmp_713 = sext i14 %tmp_712 to i33
  %tmp_715 = add i33 %tmp_713, %tmp_490_cast
  %tmp_716 = sext i33 %tmp_715 to i64
  %p3X3_1X1_WEIGHTS_addr_8 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %tmp_716
  %p_rd_req932 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_8, i32 24)
  br label %.preheader928

.preheader928:                                    ; preds = %35, %.preheader928.preheader
  %ci19 = phi i5 [ %ci_20, %35 ], [ 0, %.preheader928.preheader ]
  %exitcond43 = icmp eq i5 %ci19, -8
  %empty_383 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_20 = add i5 %ci19, 1
  br i1 %exitcond43, label %.preheader929.loopexit, label %35

; <label>:35                                      ; preds = %.preheader928
  %tmp_290_cast = zext i5 %ci19 to i11
  %tmp_735 = add i11 %tmp_705, %tmp_290_cast
  %tmp_1121_cast1 = sext i11 %tmp_735 to i64
  %weights_24_24_1x1_V_5 = getelementptr [576 x i8]* @weights_24_24_1x1_V, i64 0, i64 %tmp_1121_cast1
  %p3X3_1X1_WEIGHTS_addr_65 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_8)
  store i8 %p3X3_1X1_WEIGHTS_addr_65, i8* %weights_24_24_1x1_V_5, align 1
  br label %.preheader928

.preheader927:                                    ; preds = %.preheader927.preheader, %36
  %i14 = phi i5 [ %i_15, %36 ], [ 0, %.preheader927.preheader ]
  %exitcond42 = icmp eq i5 %i14, -8
  %empty_384 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_15 = add i5 %i14, 1
  br i1 %exitcond42, label %37, label %36

; <label>:36                                      ; preds = %.preheader927
  %tmp_287 = zext i5 %i14 to i64
  %DATA_BIAS_addr_11_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_11)
  %bias_24_V_addr_8 = getelementptr [24 x i8]* @bias_24_V, i64 0, i64 %tmp_287
  store i8 %DATA_BIAS_addr_11_re, i8* %bias_24_V_addr_8, align 1
  br label %.preheader927

; <label>:37                                      ; preds = %.preheader927
  call fastcc void @subconv_1x1_16_p([7776 x i8]* @buffer0_1_24_16x16_p, [576 x i8]* @weights_24_24_1x1_V, [24 x i8]* @bias_24_V, [7776 x i8]* @buffer1_1_24_16x16_p)
  br label %.loopexit1011

.loopexit1011.loopexit:                           ; preds = %.preheader926
  br label %.loopexit1011

.loopexit1011:                                    ; preds = %.loopexit1011.loopexit, %37
  %co38 = phi i5 [ 0, %37 ], [ %co_39, %.loopexit1011.loopexit ]
  %co39_cast = zext i5 %co38 to i7
  %exitcond45 = icmp eq i5 %co38, -8
  %empty_385 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_39 = add i5 %co38, 1
  br i1 %exitcond45, label %.preheader924.preheader, label %.preheader926.preheader

.preheader924.preheader:                          ; preds = %.loopexit1011
  %tmp_743 = add i33 %tmp_482_cast, 240
  %tmp_744 = sext i33 %tmp_743 to i64
  %DATA_BIAS_addr_12 = getelementptr i8* %DATA_BIAS, i64 %tmp_744
  %p_rd_req935 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_12, i32 24)
  br label %.preheader924

.preheader926.preheader:                          ; preds = %.loopexit1011
  %tmp_292_cast = zext i5 %co38 to i8
  %tmp_746 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co38, i2 0)
  %p_shl332_cast = zext i7 %tmp_746 to i8
  %tmp_749 = sub i8 %p_shl332_cast, %tmp_292_cast
  %tmp_1125_cast = sext i8 %tmp_749 to i9
  %tmp_293 = add i7 %co39_cast, -56
  %tmp_294_cast = zext i7 %tmp_293 to i10
  %tmp_755 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_293, i2 0)
  %p_shl331_cast = zext i9 %tmp_755 to i10
  %tmp_758 = sub i10 %p_shl331_cast, %tmp_294_cast
  br label %.preheader926

.preheader926.loopexit:                           ; preds = %.preheader925
  br label %.preheader926

.preheader926:                                    ; preds = %.preheader926.loopexit, %.preheader926.preheader
  %w34 = phi i2 [ 0, %.preheader926.preheader ], [ %w_35, %.preheader926.loopexit ]
  %exitcond47 = icmp eq i2 %w34, -1
  %empty_386 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %w_35 = add i2 %w34, 1
  br i1 %exitcond47, label %.loopexit1011.loopexit, label %.preheader925.preheader

.preheader925.preheader:                          ; preds = %.preheader926
  %tmp_298_cast1 = zext i2 %w34 to i9
  %tmp_298_cast = zext i2 %w34 to i10
  %tmp_759 = add i10 %tmp_298_cast, %tmp_758
  %tmp_1128_cast = sext i10 %tmp_759 to i64
  %tmp_762 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_759, i2 0)
  %p_shl208 = sext i12 %tmp_762 to i64
  %tmp_763 = sub i64 %p_shl208, %tmp_1128_cast
  %tmp_765 = add i9 %tmp_298_cast1, %tmp_1125_cast
  %tmp_766 = shl i9 %tmp_765, 2
  %tmp_771 = sub i9 %tmp_766, %tmp_765
  %tmp_777 = add i64 %tmp_373, %tmp_763
  %p3X3_1X1_WEIGHTS_addr_9 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %tmp_777
  %p_rd_req934 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_9, i32 3)
  br label %.preheader925

.preheader925:                                    ; preds = %38, %.preheader925.preheader
  %h34 = phi i2 [ %h_35, %38 ], [ 0, %.preheader925.preheader ]
  %exitcond49 = icmp eq i2 %h34, -1
  %empty_387 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %h_35 = add i2 %h34, 1
  br i1 %exitcond49, label %.preheader926.loopexit, label %38

; <label>:38                                      ; preds = %.preheader925
  %tmp_300_cast = zext i2 %h34 to i9
  %tmp_805 = add i9 %tmp_771, %tmp_300_cast
  %tmp_1141_cast = zext i9 %tmp_805 to i64
  %weights_24_1_3x3_V_a_3 = getelementptr [216 x i8]* @weights_24_1_3x3_V, i64 0, i64 %tmp_1141_cast
  %p3X3_1X1_WEIGHTS_addr_66 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_9)
  store i8 %p3X3_1X1_WEIGHTS_addr_66, i8* %weights_24_1_3x3_V_a_3, align 1
  br label %.preheader925

.preheader924:                                    ; preds = %.preheader924.preheader, %39
  %i16 = phi i5 [ %i_17, %39 ], [ 0, %.preheader924.preheader ]
  %exitcond46 = icmp eq i5 %i16, -8
  %empty_388 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_17 = add i5 %i16, 1
  br i1 %exitcond46, label %40, label %39

; <label>:39                                      ; preds = %.preheader924
  %tmp_295 = zext i5 %i16 to i64
  %DATA_BIAS_addr_12_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_12)
  %bias_24_V_addr_9 = getelementptr [24 x i8]* @bias_24_V, i64 0, i64 %tmp_295
  store i8 %DATA_BIAS_addr_12_re, i8* %bias_24_V_addr_9, align 1
  br label %.preheader924

; <label>:40                                      ; preds = %.preheader924
  call fastcc void @subconv_3x3_16_no_re([7776 x i8]* @buffer1_1_24_16x16_p, [216 x i8]* @weights_24_1_3x3_V, [24 x i8]* @bias_24_V, [7776 x i8]* @buffer0_1_24_16x16_p)
  br label %.loopexit1010

.loopexit1010.loopexit:                           ; preds = %.preheader923
  br label %.loopexit1010

.loopexit1010:                                    ; preds = %.loopexit1010.loopexit, %40
  %co40 = phi i5 [ 0, %40 ], [ %co_41, %.loopexit1010.loopexit ]
  %co41_cast = zext i5 %co40 to i8
  %exitcond48 = icmp eq i5 %co40, -8
  %empty_389 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_41 = add i5 %co40, 1
  br i1 %exitcond48, label %.preheader922.preheader, label %.preheader923.preheader

.preheader922.preheader:                          ; preds = %.loopexit1010
  %tmp_779 = add i33 %tmp_482_cast, 264
  %tmp_780 = sext i33 %tmp_779 to i64
  %DATA_BIAS_addr_13 = getelementptr i8* %DATA_BIAS, i64 %tmp_780
  %p_rd_req937 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_13, i32 24)
  br label %.preheader922

.preheader923.preheader:                          ; preds = %.loopexit1010
  %tmp_781 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co40, i5 0)
  %p_shl337_cast = zext i10 %tmp_781 to i11
  %tmp_782 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co40, i3 0)
  %p_shl338_cast = zext i8 %tmp_782 to i11
  %tmp_787 = sub i11 %p_shl337_cast, %p_shl338_cast
  %tmp_299 = add i8 %co41_cast, -112
  %tmp_790 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_299, i5 0)
  %p_shl335_cast = zext i13 %tmp_790 to i14
  %tmp_793 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %tmp_299, i3 0)
  %p_shl336_cast = zext i11 %tmp_793 to i14
  %tmp_794 = sub i14 %p_shl335_cast, %p_shl336_cast
  %tmp_795 = sext i14 %tmp_794 to i33
  %tmp_796 = add i33 %tmp_795, %tmp_490_cast
  %tmp_802 = sext i33 %tmp_796 to i64
  %p3X3_1X1_WEIGHTS_addr_10 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %tmp_802
  %p_rd_req936 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_10, i32 24)
  br label %.preheader923

.preheader923:                                    ; preds = %41, %.preheader923.preheader
  %ci21 = phi i5 [ %ci_22, %41 ], [ 0, %.preheader923.preheader ]
  %exitcond51 = icmp eq i5 %ci21, -8
  %empty_390 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_22 = add i5 %ci21, 1
  br i1 %exitcond51, label %.loopexit1010.loopexit, label %41

; <label>:41                                      ; preds = %.preheader923
  %tmp_304_cast = zext i5 %ci21 to i11
  %tmp_806 = add i11 %tmp_787, %tmp_304_cast
  %tmp_1143_cast = sext i11 %tmp_806 to i64
  %weights_24_24_1x1_V_6 = getelementptr [576 x i8]* @weights_24_24_1x1_V, i64 0, i64 %tmp_1143_cast
  %p3X3_1X1_WEIGHTS_addr_67 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_10)
  store i8 %p3X3_1X1_WEIGHTS_addr_67, i8* %weights_24_24_1x1_V_6, align 1
  br label %.preheader923

.preheader922:                                    ; preds = %.preheader922.preheader, %42
  %i18 = phi i5 [ %i_19, %42 ], [ 0, %.preheader922.preheader ]
  %exitcond50 = icmp eq i5 %i18, -8
  %empty_391 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_19 = add i5 %i18, 1
  br i1 %exitcond50, label %43, label %42

; <label>:42                                      ; preds = %.preheader922
  %tmp_301 = zext i5 %i18 to i64
  %DATA_BIAS_addr_13_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_13)
  %bias_24_V_addr_10 = getelementptr [24 x i8]* @bias_24_V, i64 0, i64 %tmp_301
  store i8 %DATA_BIAS_addr_13_re, i8* %bias_24_V_addr_10, align 1
  br label %.preheader922

; <label>:43                                      ; preds = %.preheader922
  call fastcc void @subconv_1x1_16_p([7776 x i8]* @buffer0_1_24_16x16_p, [576 x i8]* @weights_24_24_1x1_V, [24 x i8]* @bias_24_V, [7776 x i8]* @buffer1_1_24_16x16_p)
  br label %.loopexit1009

.loopexit1009.loopexit:                           ; preds = %.preheader921
  br label %.loopexit1009

.loopexit1009:                                    ; preds = %.loopexit1009.loopexit, %43
  %co42 = phi i5 [ 0, %43 ], [ %co_43, %.loopexit1009.loopexit ]
  %exitcond52 = icmp eq i5 %co42, -8
  %empty_392 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_43 = add i5 %co42, 1
  br i1 %exitcond52, label %45, label %.preheader921.preheader

.preheader921.preheader:                          ; preds = %.loopexit1009
  %tmp_809 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co42, i4 0)
  %p_shl339_cast = zext i9 %tmp_809 to i10
  %tmp_811 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co42, i1 false)
  %p_shl340_cast = zext i6 %tmp_811 to i10
  %tmp_812 = add i10 %p_shl340_cast, %p_shl339_cast
  br label %.preheader921

.preheader921.loopexit:                           ; preds = %.preheader920
  br label %.preheader921

.preheader921:                                    ; preds = %.preheader921.loopexit, %.preheader921.preheader
  %h36 = phi i5 [ 0, %.preheader921.preheader ], [ %h_37, %.preheader921.loopexit ]
  %exitcond54 = icmp eq i5 %h36, -16
  %empty_393 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %h_37 = add i5 %h36, 1
  br i1 %exitcond54, label %.loopexit1009.loopexit, label %.preheader920.preheader

.preheader920.preheader:                          ; preds = %.preheader921
  %tmp_306_cast = zext i5 %h_37 to i10
  %tmp_834 = add i10 %tmp_306_cast, %tmp_812
  %tmp_837 = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_834, i4 0)
  %p_shl341_cast = zext i14 %tmp_837 to i15
  %tmp_839 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_834, i1 false)
  %p_shl342_cast = zext i11 %tmp_839 to i15
  %tmp_840 = add i15 %p_shl341_cast, %p_shl342_cast
  br label %.preheader920

.preheader920:                                    ; preds = %44, %.preheader920.preheader
  %w36 = phi i5 [ %w_37, %44 ], [ 0, %.preheader920.preheader ]
  %exitcond57 = icmp eq i5 %w36, -16
  %empty_394 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %w_37 = add i5 %w36, 1
  br i1 %exitcond57, label %.preheader921.loopexit, label %44

; <label>:44                                      ; preds = %.preheader920
  %tmp_309_cast = zext i5 %w_37 to i15
  %tmp_885 = add i15 %tmp_840, %tmp_309_cast
  %tmp_1171_cast = zext i15 %tmp_885 to i64
  %buffer0_1_24_16x16_p_3 = getelementptr [7776 x i8]* @buffer0_1_24_16x16_p, i64 0, i64 %tmp_1171_cast
  %shuffleunit0_0_outpu_2 = getelementptr [15552 x i8]* @shuffleunit0_0_outpu, i64 0, i64 %tmp_1171_cast
  %shuffleunit0_0_outpu_3 = load i8* %shuffleunit0_0_outpu_2, align 1
  store i8 %shuffleunit0_0_outpu_3, i8* %buffer0_1_24_16x16_p_3, align 1
  br label %.preheader920

; <label>:45                                      ; preds = %.loopexit1009
  call fastcc void @shuffle_24_p([7776 x i8]* @buffer0_1_24_16x16_p, [15552 x i8]* @shuffleunit0_1_outpu)
  br label %.loopexit1008

.loopexit1008.loopexit:                           ; preds = %.preheader919
  br label %.loopexit1008

.loopexit1008:                                    ; preds = %.loopexit1008.loopexit, %45
  %co44 = phi i5 [ 0, %45 ], [ %co_45, %.loopexit1008.loopexit ]
  %co44_cast = zext i5 %co44 to i6
  %exitcond53 = icmp eq i5 %co44, -8
  %empty_395 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_45 = add i5 %co44, 1
  br i1 %exitcond53, label %.preheader917.preheader, label %.preheader919.preheader

.preheader917.preheader:                          ; preds = %.loopexit1008
  br label %.preheader917

.preheader919.preheader:                          ; preds = %.loopexit1008
  %tmp_815 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co44, i4 0)
  %p_shl345_cast = zext i9 %tmp_815 to i10
  %tmp_818 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co44, i1 false)
  %p_shl346_cast = zext i6 %tmp_818 to i10
  %tmp_823 = add i10 %p_shl346_cast, %p_shl345_cast
  %tmp_305 = add i6 %co44_cast, 24
  %tmp_829 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %tmp_305, i4 0)
  %p_shl343_cast = zext i10 %tmp_829 to i11
  %tmp_832 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %tmp_305, i1 false)
  %p_shl344_cast = zext i7 %tmp_832 to i11
  %tmp_833 = add i11 %p_shl344_cast, %p_shl343_cast
  br label %.preheader919

.preheader919.loopexit:                           ; preds = %.preheader918
  br label %.preheader919

.preheader919:                                    ; preds = %.preheader919.loopexit, %.preheader919.preheader
  %h38 = phi i5 [ 0, %.preheader919.preheader ], [ %h_39, %.preheader919.loopexit ]
  %exitcond56 = icmp eq i5 %h38, -16
  %empty_396 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %h_39 = add i5 %h38, 1
  br i1 %exitcond56, label %.loopexit1008.loopexit, label %.preheader918.preheader

.preheader918.preheader:                          ; preds = %.preheader919
  %tmp_308_cast1 = zext i5 %h_39 to i11
  %tmp_308_cast = zext i5 %h_39 to i10
  %tmp_869 = add i10 %tmp_308_cast, %tmp_823
  %p_shl349_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_869, i4 0)
  %tmp_875 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_869, i1 false)
  %p_shl350_cast = zext i11 %tmp_875 to i14
  %tmp_878 = add i14 %p_shl349_cast, %p_shl350_cast
  %tmp_879 = add i11 %tmp_308_cast1, %tmp_833
  %p_shl347_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_879, i4 0)
  %tmp_882 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_879, i1 false)
  %p_shl348_cast = zext i12 %tmp_882 to i15
  %tmp_884 = add i15 %p_shl347_cast, %p_shl348_cast
  br label %.preheader918

.preheader918:                                    ; preds = %46, %.preheader918.preheader
  %w38 = phi i5 [ %w_39, %46 ], [ 0, %.preheader918.preheader ]
  %exitcond60 = icmp eq i5 %w38, -16
  %empty_397 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %w_39 = add i5 %w38, 1
  br i1 %exitcond60, label %.preheader919.loopexit, label %46

; <label>:46                                      ; preds = %.preheader918
  %tmp_314_cast1 = zext i5 %w_39 to i15
  %tmp_314_cast = zext i5 %w_39 to i14
  %tmp_903 = add i14 %tmp_878, %tmp_314_cast
  %tmp_1174_cast = zext i14 %tmp_903 to i64
  %buffer0_1_24_16x16_p_4 = getelementptr [7776 x i8]* @buffer0_1_24_16x16_p, i64 0, i64 %tmp_1174_cast
  %tmp_904 = add i15 %tmp_884, %tmp_314_cast1
  %tmp_1175_cast = zext i15 %tmp_904 to i64
  %shuffleunit0_1_outpu = getelementptr [15552 x i8]* @shuffleunit0_1_outpu, i64 0, i64 %tmp_1175_cast
  %shuffleunit0_1_outpu_1 = load i8* %shuffleunit0_1_outpu, align 1
  store i8 %shuffleunit0_1_outpu_1, i8* %buffer0_1_24_16x16_p_4, align 1
  br label %.preheader918

.preheader917.loopexit:                           ; preds = %.preheader916
  br label %.preheader917

.preheader917:                                    ; preds = %.preheader917.preheader, %.preheader917.loopexit
  %co46 = phi i5 [ %co_47, %.preheader917.loopexit ], [ 0, %.preheader917.preheader ]
  %co46_cast = zext i5 %co46 to i8
  %exitcond55 = icmp eq i5 %co46, -8
  %empty_398 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_47 = add i5 %co46, 1
  br i1 %exitcond55, label %.preheader915.preheader, label %.preheader916.preheader

.preheader915.preheader:                          ; preds = %.preheader917
  br label %.preheader915

.preheader916.preheader:                          ; preds = %.preheader917
  %tmp_843 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co46, i5 0)
  %p_shl353_cast = zext i10 %tmp_843 to i11
  %tmp_847 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co46, i3 0)
  %p_shl354_cast = zext i8 %tmp_847 to i11
  %tmp_853 = sub i11 %p_shl353_cast, %p_shl354_cast
  %tmp_307 = add i8 %co46_cast, -88
  %tmp_855 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_307, i5 0)
  %p_shl351_cast = zext i13 %tmp_855 to i14
  %tmp_856 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %tmp_307, i3 0)
  %p_shl352_cast = zext i11 %tmp_856 to i14
  %tmp_857 = sub i14 %p_shl351_cast, %p_shl352_cast
  %tmp_858 = sext i14 %tmp_857 to i33
  %tmp_860 = add i33 %tmp_858, %tmp_490_cast
  %tmp_864 = sext i33 %tmp_860 to i64
  %p3X3_1X1_WEIGHTS_addr_11 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %tmp_864
  %p_rd_req938 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_11, i32 24)
  br label %.preheader916

.preheader916:                                    ; preds = %47, %.preheader916.preheader
  %ci23 = phi i5 [ %ci_24, %47 ], [ 0, %.preheader916.preheader ]
  %exitcond59 = icmp eq i5 %ci23, -8
  %empty_399 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_24 = add i5 %ci23, 1
  br i1 %exitcond59, label %.preheader917.loopexit, label %47

; <label>:47                                      ; preds = %.preheader916
  %tmp_313_cast = zext i5 %ci23 to i11
  %tmp_902 = add i11 %tmp_853, %tmp_313_cast
  %tmp_1173_cast = sext i11 %tmp_902 to i64
  %weights_24_24_1x1_V_7 = getelementptr [576 x i8]* @weights_24_24_1x1_V, i64 0, i64 %tmp_1173_cast
  %p3X3_1X1_WEIGHTS_addr_68 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_11)
  store i8 %p3X3_1X1_WEIGHTS_addr_68, i8* %weights_24_24_1x1_V_7, align 1
  br label %.preheader916

.preheader915:                                    ; preds = %.preheader915.preheader, %48
  %tmp_887 = phi i5 [ %i_20, %48 ], [ 0, %.preheader915.preheader ]
  %exitcond58 = icmp eq i5 %tmp_887, -8
  %empty_400 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_20 = add i5 %tmp_887, 1
  br i1 %exitcond58, label %49, label %48

; <label>:48                                      ; preds = %.preheader915
  %tmp_310 = zext i5 %tmp_887 to i64
  %tmp_891 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 -7, i5 %tmp_887)
  %tmp_897 = zext i9 %tmp_891 to i33
  %tmp_899 = add i33 %tmp_897, %tmp_482_cast
  %tmp_900 = sext i33 %tmp_899 to i64
  %DATA_BIAS_addr_14 = getelementptr i8* %DATA_BIAS, i64 %tmp_900
  %DATA_BIAS_load_14_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_14, i32 1)
  %DATA_BIAS_addr_14_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_14)
  %bias_24_V_addr_11 = getelementptr [24 x i8]* @bias_24_V, i64 0, i64 %tmp_310
  store i8 %DATA_BIAS_addr_14_re, i8* %bias_24_V_addr_11, align 1
  br label %.preheader915

; <label>:49                                      ; preds = %.preheader915
  call fastcc void @subconv_1x1_16_p([7776 x i8]* @buffer0_1_24_16x16_p, [576 x i8]* @weights_24_24_1x1_V, [24 x i8]* @bias_24_V, [7776 x i8]* @buffer1_1_24_16x16_p)
  br label %.loopexit1007

.loopexit1007.loopexit:                           ; preds = %.preheader914
  br label %.loopexit1007

.loopexit1007:                                    ; preds = %.loopexit1007.loopexit, %49
  %co48 = phi i5 [ 0, %49 ], [ %co_49, %.loopexit1007.loopexit ]
  %exitcond61 = icmp eq i5 %co48, -8
  %empty_401 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_49 = add i5 %co48, 1
  br i1 %exitcond61, label %.preheader912.preheader, label %.preheader914.preheader

.preheader912.preheader:                          ; preds = %.loopexit1007
  %tmp_905 = add i33 %tmp_482_cast, 312
  %tmp_906 = sext i33 %tmp_905 to i64
  %DATA_BIAS_addr_15 = getelementptr i8* %DATA_BIAS, i64 %tmp_906
  %p_rd_req940 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_15, i32 24)
  br label %.preheader912

.preheader914.preheader:                          ; preds = %.loopexit1007
  %tmp_315_cast = zext i5 %co48 to i8
  %tmp_911 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co48, i2 0)
  %p_shl356_cast = zext i7 %tmp_911 to i8
  %tmp_914 = sub i8 %p_shl356_cast, %tmp_315_cast
  %tmp_1177_cast = sext i8 %tmp_914 to i9
  %tmp_316 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 true, i5 %co48)
  %tmp_446_cast = sext i6 %tmp_316 to i7
  %tmp_317_cast = zext i7 %tmp_446_cast to i10
  %tmp_917 = call i8 @_ssdm_op_BitConcatenate.i8.i1.i5.i2(i1 true, i5 %co48, i2 0)
  %tmp_918 = sext i8 %tmp_917 to i9
  %p_shl355_cast = zext i9 %tmp_918 to i10
  %tmp_924 = sub i10 %p_shl355_cast, %tmp_317_cast
  %tmp_1180_cast = sext i10 %tmp_924 to i11
  br label %.preheader914

.preheader914.loopexit:                           ; preds = %.preheader913
  br label %.preheader914

.preheader914:                                    ; preds = %.preheader914.loopexit, %.preheader914.preheader
  %w40 = phi i2 [ 0, %.preheader914.preheader ], [ %w_41, %.preheader914.loopexit ]
  %exitcond63 = icmp eq i2 %w40, -1
  %empty_402 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %w_41 = add i2 %w40, 1
  br i1 %exitcond63, label %.loopexit1007.loopexit, label %.preheader913.preheader

.preheader913.preheader:                          ; preds = %.preheader914
  %tmp_321_cast1 = zext i2 %w40 to i9
  %tmp_321_cast = zext i2 %w40 to i11
  %tmp_927 = add i11 %tmp_321_cast, %tmp_1180_cast
  %tmp_1181_cast1 = sext i11 %tmp_927 to i64
  %tmp_928 = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_927, i2 0)
  %p_shl213 = sext i13 %tmp_928 to i64
  %tmp_931 = sub i64 %p_shl213, %tmp_1181_cast1
  %tmp_932 = add i9 %tmp_321_cast1, %tmp_1177_cast
  %tmp_934 = shl i9 %tmp_932, 2
  %tmp_935 = sub i9 %tmp_934, %tmp_932
  %tmp_940 = add i64 %tmp_373, %tmp_931
  %p3X3_1X1_WEIGHTS_addr_12 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %tmp_940
  %p_rd_req939 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_12, i32 3)
  br label %.preheader913

.preheader913:                                    ; preds = %50, %.preheader913.preheader
  %h40 = phi i2 [ %h_41, %50 ], [ 0, %.preheader913.preheader ]
  %exitcond65 = icmp eq i2 %h40, -1
  %empty_403 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %h_41 = add i2 %h40, 1
  br i1 %exitcond65, label %.preheader914.loopexit, label %50

; <label>:50                                      ; preds = %.preheader913
  %tmp_322_cast = zext i2 %h40 to i9
  %tmp_974 = add i9 %tmp_935, %tmp_322_cast
  %tmp_1196_cast = zext i9 %tmp_974 to i64
  %weights_24_1_3x3_V_a_4 = getelementptr [216 x i8]* @weights_24_1_3x3_V, i64 0, i64 %tmp_1196_cast
  %p3X3_1X1_WEIGHTS_addr_69 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_12)
  store i8 %p3X3_1X1_WEIGHTS_addr_69, i8* %weights_24_1_3x3_V_a_4, align 1
  br label %.preheader913

.preheader912:                                    ; preds = %.preheader912.preheader, %51
  %i21 = phi i5 [ %i_22, %51 ], [ 0, %.preheader912.preheader ]
  %exitcond62 = icmp eq i5 %i21, -8
  %empty_404 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_22 = add i5 %i21, 1
  br i1 %exitcond62, label %52, label %51

; <label>:51                                      ; preds = %.preheader912
  %tmp_318 = zext i5 %i21 to i64
  %DATA_BIAS_addr_15_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_15)
  %bias_24_V_addr_12 = getelementptr [24 x i8]* @bias_24_V, i64 0, i64 %tmp_318
  store i8 %DATA_BIAS_addr_15_re, i8* %bias_24_V_addr_12, align 1
  br label %.preheader912

; <label>:52                                      ; preds = %.preheader912
  call fastcc void @subconv_3x3_16_no_re([7776 x i8]* @buffer1_1_24_16x16_p, [216 x i8]* @weights_24_1_3x3_V, [24 x i8]* @bias_24_V, [7776 x i8]* @buffer0_1_24_16x16_p)
  br label %.loopexit1006

.loopexit1006.loopexit:                           ; preds = %.preheader911
  br label %.loopexit1006

.loopexit1006:                                    ; preds = %.loopexit1006.loopexit, %52
  %co50 = phi i5 [ 0, %52 ], [ %co_51, %.loopexit1006.loopexit ]
  %exitcond64 = icmp eq i5 %co50, -8
  %empty_405 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_51 = add i5 %co50, 1
  br i1 %exitcond64, label %.preheader910.preheader, label %.preheader911.preheader

.preheader910.preheader:                          ; preds = %.loopexit1006
  %tmp_946 = add i33 %tmp_482_cast, 336
  %tmp_948 = sext i33 %tmp_946 to i64
  %DATA_BIAS_addr_16 = getelementptr i8* %DATA_BIAS, i64 %tmp_948
  %p_rd_req942 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_16, i32 24)
  br label %.preheader910

.preheader911.preheader:                          ; preds = %.loopexit1006
  %tmp_949 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co50, i5 0)
  %p_shl361_cast = zext i10 %tmp_949 to i11
  %tmp_951 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co50, i3 0)
  %p_shl362_cast = zext i8 %tmp_951 to i11
  %tmp_952 = sub i11 %p_shl361_cast, %p_shl362_cast
  %tmp_953 = call i12 @_ssdm_op_BitConcatenate.i12.i2.i5.i5(i2 -2, i5 %co50, i5 0)
  %tmp_954 = sext i12 %tmp_953 to i13
  %p_shl359_cast = zext i13 %tmp_954 to i14
  %tmp_959 = call i10 @_ssdm_op_BitConcatenate.i10.i2.i5.i3(i2 -2, i5 %co50, i3 0)
  %tmp_960 = sext i10 %tmp_959 to i11
  %p_shl360_cast = zext i11 %tmp_960 to i14
  %tmp_962 = sub i14 %p_shl359_cast, %p_shl360_cast
  %tmp_963 = sext i14 %tmp_962 to i33
  %tmp_965 = add i33 %tmp_963, %tmp_490_cast
  %tmp_968 = sext i33 %tmp_965 to i64
  %p3X3_1X1_WEIGHTS_addr_13 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %tmp_968
  %p_rd_req941 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_13, i32 24)
  br label %.preheader911

.preheader911:                                    ; preds = %53, %.preheader911.preheader
  %ci25 = phi i5 [ %ci_26, %53 ], [ 0, %.preheader911.preheader ]
  %exitcond67 = icmp eq i5 %ci25, -8
  %empty_406 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_26 = add i5 %ci25, 1
  br i1 %exitcond67, label %.loopexit1006.loopexit, label %53

; <label>:53                                      ; preds = %.preheader911
  %tmp_326_cast = zext i5 %ci25 to i11
  %tmp_977 = add i11 %tmp_952, %tmp_326_cast
  %tmp_1198_cast = sext i11 %tmp_977 to i64
  %weights_24_24_1x1_V_8 = getelementptr [576 x i8]* @weights_24_24_1x1_V, i64 0, i64 %tmp_1198_cast
  %p3X3_1X1_WEIGHTS_addr_70 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_13)
  store i8 %p3X3_1X1_WEIGHTS_addr_70, i8* %weights_24_24_1x1_V_8, align 1
  br label %.preheader911

.preheader910:                                    ; preds = %.preheader910.preheader, %54
  %i23 = phi i5 [ %i_24, %54 ], [ 0, %.preheader910.preheader ]
  %exitcond66 = icmp eq i5 %i23, -8
  %empty_407 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_24 = add i5 %i23, 1
  br i1 %exitcond66, label %55, label %54

; <label>:54                                      ; preds = %.preheader910
  %tmp_323 = zext i5 %i23 to i64
  %DATA_BIAS_addr_16_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_16)
  %bias_24_V_addr_13 = getelementptr [24 x i8]* @bias_24_V, i64 0, i64 %tmp_323
  store i8 %DATA_BIAS_addr_16_re, i8* %bias_24_V_addr_13, align 1
  br label %.preheader910

; <label>:55                                      ; preds = %.preheader910
  call fastcc void @subconv_1x1_16_p([7776 x i8]* @buffer0_1_24_16x16_p, [576 x i8]* @weights_24_24_1x1_V, [24 x i8]* @bias_24_V, [7776 x i8]* @buffer1_1_24_16x16_p)
  br label %.loopexit1005

.loopexit1005.loopexit:                           ; preds = %.preheader909
  br label %.loopexit1005

.loopexit1005:                                    ; preds = %.loopexit1005.loopexit, %55
  %co52 = phi i5 [ 0, %55 ], [ %co_53, %.loopexit1005.loopexit ]
  %exitcond68 = icmp eq i5 %co52, -8
  %empty_408 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_53 = add i5 %co52, 1
  br i1 %exitcond68, label %57, label %.preheader909.preheader

.preheader909.preheader:                          ; preds = %.loopexit1005
  %tmp_978 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co52, i4 0)
  %p_shl363_cast = zext i9 %tmp_978 to i10
  %tmp_981 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co52, i1 false)
  %p_shl364_cast = zext i6 %tmp_981 to i10
  %tmp_982 = add i10 %p_shl364_cast, %p_shl363_cast
  br label %.preheader909

.preheader909.loopexit:                           ; preds = %.preheader908
  br label %.preheader909

.preheader909:                                    ; preds = %.preheader909.loopexit, %.preheader909.preheader
  %h42 = phi i5 [ 0, %.preheader909.preheader ], [ %h_43, %.preheader909.loopexit ]
  %exitcond70 = icmp eq i5 %h42, -16
  %empty_409 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %h_43 = add i5 %h42, 1
  br i1 %exitcond70, label %.loopexit1005.loopexit, label %.preheader908.preheader

.preheader908.preheader:                          ; preds = %.preheader909
  %tmp_328_cast = zext i5 %h_43 to i10
  %tmp_985 = add i10 %tmp_328_cast, %tmp_982
  %tmp_990 = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_985, i4 0)
  %p_shl365_cast = zext i14 %tmp_990 to i15
  %tmp_995 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_985, i1 false)
  %p_shl366_cast = zext i11 %tmp_995 to i15
  %tmp_996 = add i15 %p_shl365_cast, %p_shl366_cast
  br label %.preheader908

.preheader908:                                    ; preds = %56, %.preheader908.preheader
  %w42 = phi i5 [ %w_43, %56 ], [ 0, %.preheader908.preheader ]
  %exitcond73 = icmp eq i5 %w42, -16
  %empty_410 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %w_43 = add i5 %w42, 1
  br i1 %exitcond73, label %.preheader909.loopexit, label %56

; <label>:56                                      ; preds = %.preheader908
  %tmp_332_cast = zext i5 %w_43 to i15
  %tmp_997 = add i15 %tmp_996, %tmp_332_cast
  %tmp_1208_cast = zext i15 %tmp_997 to i64
  %buffer0_1_24_16x16_p_5 = getelementptr [7776 x i8]* @buffer0_1_24_16x16_p, i64 0, i64 %tmp_1208_cast
  %shuffleunit0_1_outpu_2 = getelementptr [15552 x i8]* @shuffleunit0_1_outpu, i64 0, i64 %tmp_1208_cast
  %shuffleunit0_1_outpu_3 = load i8* %shuffleunit0_1_outpu_2, align 1
  store i8 %shuffleunit0_1_outpu_3, i8* %buffer0_1_24_16x16_p_5, align 1
  br label %.preheader908

; <label>:57                                      ; preds = %.loopexit1005
  call fastcc void @shuffle_24_p([7776 x i8]* @buffer0_1_24_16x16_p, [15552 x i8]* @shuffleunit0_2_outpu)
  br label %.loopexit1004

.loopexit1004.loopexit:                           ; preds = %.preheader907
  br label %.loopexit1004

.loopexit1004:                                    ; preds = %.loopexit1004.loopexit, %57
  %co54 = phi i5 [ 0, %57 ], [ %co_55, %.loopexit1004.loopexit ]
  %co54_cast = zext i5 %co54 to i9
  %exitcond69 = icmp eq i5 %co54, -8
  %empty_411 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_55 = add i5 %co54, 1
  br i1 %exitcond69, label %.preheader905.preheader, label %.preheader907.preheader

.preheader905.preheader:                          ; preds = %.loopexit1004
  br label %.preheader905

.preheader907.preheader:                          ; preds = %.loopexit1004
  %tmp_984 = trunc i5 %co54 to i1
  %p_shl = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_984, i5 0)
  %p_shl_cast = zext i6 %p_shl to i7
  %p_shl1 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_984, i3 0)
  %p_shl1_cast = zext i4 %p_shl1 to i7
  %tmp_327 = sub i7 %p_shl_cast, %p_shl1_cast
  %p_lshr_f_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co54, i32 1, i32 4)
  %tmp_464_cast = zext i4 %p_lshr_f_cast to i7
  br label %.preheader907

.preheader907.loopexit:                           ; preds = %.preheader906
  br label %.preheader907

.preheader907:                                    ; preds = %.preheader907.loopexit, %.preheader907.preheader
  %ci27 = phi i5 [ 0, %.preheader907.preheader ], [ %ci_28, %.preheader907.loopexit ]
  %ci27_cast = zext i5 %ci27 to i7
  %exitcond72 = icmp eq i5 %ci27, -8
  %empty_412 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_28 = add i5 %ci27, 1
  br i1 %exitcond72, label %.loopexit1004.loopexit, label %.preheader906.preheader

.preheader906.preheader:                          ; preds = %.preheader907
  %tmp_329 = add i7 %tmp_327, %ci27_cast
  %tmp_330_cast = sext i7 %tmp_329 to i13
  %tmp_331_cast = zext i5 %ci27 to i16
  br label %.preheader906

.preheader906:                                    ; preds = %58, %.preheader906.preheader
  %i27 = phi i3 [ %i_28, %58 ], [ 0, %.preheader906.preheader ]
  %exitcond76 = icmp eq i3 %i27, -4
  %empty_413 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %i_28 = add i3 %i27, 1
  br i1 %exitcond76, label %.preheader907.loopexit, label %58

; <label>:58                                      ; preds = %.preheader906
  %tmp_999 = trunc i3 %i27 to i2
  %p_shl4 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_999, i4 0)
  %p_shl4_cast = zext i6 %p_shl4 to i7
  %p_shl5 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_999, i2 0)
  %p_shl5_cast = zext i4 %p_shl5 to i7
  %tmp_338 = sub i7 %p_shl4_cast, %p_shl5_cast
  %tmp_339 = add i7 %tmp_338, %tmp_464_cast
  %tmp_1000 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_339, i6 0)
  %tmp_1001 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_339, i4 0)
  %p_shl370_cast = sext i11 %tmp_1001 to i13
  %tmp_1002 = sub i13 %tmp_1000, %p_shl370_cast
  %tmp_1003 = add i13 %tmp_330_cast, %tmp_1002
  %tmp_1218_cast = sext i13 %tmp_1003 to i64
  %weights_48_48_1x1_V_s = getelementptr [2304 x i8]* @weights_48_48_1x1_V, i64 0, i64 %tmp_1218_cast
  %p_shl6 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_999, i5 0)
  %p_shl6_cast = zext i7 %p_shl6 to i8
  %p_shl7 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_999, i3 0)
  %p_shl7_cast = zext i5 %p_shl7 to i8
  %tmp_340 = sub i8 %p_shl6_cast, %p_shl7_cast
  %tmp_480_cast = sext i8 %tmp_340 to i9
  %tmp1 = add i9 216, %tmp_480_cast
  %tmp_341 = add i9 %tmp1, %co54_cast
  %tmp_1004 = call i14 @_ssdm_op_BitConcatenate.i14.i9.i5(i9 %tmp_341, i5 0)
  %p_shl367_cast = zext i14 %tmp_1004 to i15
  %tmp_1005 = call i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9 %tmp_341, i3 0)
  %p_shl368_cast = zext i12 %tmp_1005 to i15
  %tmp_1006 = sub i15 %p_shl367_cast, %p_shl368_cast
  %tmp_1223_cast = sext i15 %tmp_1006 to i16
  %tmp_1007 = add i16 %tmp_331_cast, %tmp_1223_cast
  %tmp_1224_cast = sext i16 %tmp_1007 to i33
  %shuffle_conv_1x1_V8_9 = add i33 %tmp_1224_cast, %tmp_490_cast
  %shuffle_conv_1x1_V8_s = sext i33 %shuffle_conv_1x1_V8_9 to i64
  %p3X3_1X1_WEIGHTS_addr_14 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_1x1_V8_s
  %p3X3_1X1_WEIGHTS_load = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_14, i32 1)
  %p3X3_1X1_WEIGHTS_addr_71 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_14)
  store i8 %p3X3_1X1_WEIGHTS_addr_71, i8* %weights_48_48_1x1_V_s, align 1
  br label %.preheader906

.preheader905.loopexit:                           ; preds = %.preheader904
  br label %.preheader905

.preheader905:                                    ; preds = %.preheader905.preheader, %.preheader905.loopexit
  %i25 = phi i5 [ %i_26, %.preheader905.loopexit ], [ 0, %.preheader905.preheader ]
  %i27_cast = zext i5 %i25 to i9
  %i27_cast1 = zext i5 %i25 to i7
  %exitcond71 = icmp eq i5 %i25, -8
  %empty_414 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_26 = add i5 %i25, 1
  br i1 %exitcond71, label %60, label %.preheader904.preheader

.preheader904.preheader:                          ; preds = %.preheader905
  br label %.preheader904

.preheader904:                                    ; preds = %.preheader904.preheader, %59
  %k = phi i2 [ %k_1, %59 ], [ 0, %.preheader904.preheader ]
  %exitcond75 = icmp eq i2 %k, -2
  %empty_415 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_1 = add i2 %k, 1
  br i1 %exitcond75, label %.preheader905.loopexit, label %59

; <label>:59                                      ; preds = %.preheader904
  %tmp_998 = trunc i2 %k to i1
  %p_shl2 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_998, i5 0)
  %p_shl2_cast = zext i6 %p_shl2 to i7
  %p_shl3 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_998, i3 0)
  %p_shl3_cast = zext i4 %p_shl3 to i7
  %tmp_333 = sub i7 %p_shl2_cast, %p_shl3_cast
  %tmp_466_cast = sext i7 %tmp_333 to i9
  %tmp_334 = add i7 %i27_cast1, %tmp_333
  %tmp_467_cast = sext i7 %tmp_334 to i32
  %tmp_335 = zext i32 %tmp_467_cast to i64
  %tmp2 = add i9 -152, %tmp_466_cast
  %tmp_336 = add i9 %tmp2, %i27_cast
  %tmp_337_cast = zext i9 %tmp_336 to i33
  %bias_V14_sum = add i33 %tmp_482_cast, %tmp_337_cast
  %bias_V14_sum17_cast = sext i33 %bias_V14_sum to i64
  %DATA_BIAS_addr_17 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum17_cast
  %DATA_BIAS_load_17_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_17, i32 1)
  %DATA_BIAS_addr_17_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_17)
  %bias_48_V_addr = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_335
  store i8 %DATA_BIAS_addr_17_re, i8* %bias_48_V_addr, align 1
  br label %.preheader904

; <label>:60                                      ; preds = %.preheader905
  call fastcc void @subconv_1x1_16p_p([2304 x i8]* @weights_48_48_1x1_V, [48 x i8]* @bias_48_V)
  br label %.loopexit1003

.loopexit1003.loopexit:                           ; preds = %.preheader903
  br label %.loopexit1003

.loopexit1003:                                    ; preds = %.loopexit1003.loopexit, %60
  %co56 = phi i5 [ 0, %60 ], [ %co_57, %.loopexit1003.loopexit ]
  %co57_cast = zext i5 %co56 to i8
  %co57_cast1 = zext i5 %co56 to i7
  %exitcond74 = icmp eq i5 %co56, -8
  %empty_416 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_57 = add i5 %co56, 1
  br i1 %exitcond74, label %.preheader900.preheader, label %.preheader903.preheader

.preheader903.preheader:                          ; preds = %.loopexit1003
  br label %.preheader903

.preheader900.preheader:                          ; preds = %.loopexit1003
  br label %.preheader900

.preheader903.loopexit:                           ; preds = %.preheader902
  br label %.preheader903

.preheader903:                                    ; preds = %.preheader903.preheader, %.preheader903.loopexit
  %w44 = phi i2 [ %w_45, %.preheader903.loopexit ], [ 0, %.preheader903.preheader ]
  %exitcond78 = icmp eq i2 %w44, -1
  %empty_417 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %w_45 = add i2 %w44, 1
  br i1 %exitcond78, label %.loopexit1003.loopexit, label %.preheader902.preheader

.preheader902.preheader:                          ; preds = %.preheader903
  %tmp_342_cast1 = zext i2 %w44 to i12
  %tmp_342_cast = zext i2 %w44 to i36
  br label %.preheader902

.preheader902.loopexit:                           ; preds = %.preheader901
  br label %.preheader902

.preheader902:                                    ; preds = %.preheader902.loopexit, %.preheader902.preheader
  %h44 = phi i2 [ 0, %.preheader902.preheader ], [ %h_45, %.preheader902.loopexit ]
  %exitcond81 = icmp eq i2 %h44, -1
  %empty_418 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %h_45 = add i2 %h44, 1
  br i1 %exitcond81, label %.preheader903.loopexit, label %.preheader901.preheader

.preheader901.preheader:                          ; preds = %.preheader902
  %tmp_349 = zext i2 %h44 to i64
  %tmp_349_cast = zext i2 %h44 to i10
  br label %.preheader901

.preheader901:                                    ; preds = %61, %.preheader901.preheader
  %i33 = phi i2 [ %i_34, %61 ], [ 0, %.preheader901.preheader ]
  %exitcond84 = icmp eq i2 %i33, -2
  %empty_419 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %i_34 = add i2 %i33, 1
  br i1 %exitcond84, label %.preheader902.loopexit, label %61

; <label>:61                                      ; preds = %.preheader901
  %tmp_1010 = trunc i2 %i33 to i1
  %p_shl14 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1010, i5 0)
  %p_shl14_cast = zext i6 %p_shl14 to i7
  %p_shl15 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1010, i3 0)
  %p_shl15_cast = zext i4 %p_shl15 to i7
  %tmp_353 = sub i7 %p_shl14_cast, %p_shl15_cast
  %tmp_503_cast = sext i7 %tmp_353 to i8
  %tmp_354 = add i7 %tmp_353, %co57_cast1
  %tmp_504_cast = sext i7 %tmp_354 to i32
  %tmp_355_cast = zext i32 %tmp_504_cast to i35
  %tmp_1011 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_354, i2 0)
  %tmp_1012 = sext i9 %tmp_1011 to i34
  %p_shl374_cast = zext i34 %tmp_1012 to i35
  %tmp_1013 = sub i35 %p_shl374_cast, %tmp_355_cast
  %tmp_1233_cast = sext i35 %tmp_1013 to i36
  %tmp_1014 = add i36 %tmp_1233_cast, %tmp_342_cast
  %tmp_1015 = trunc i36 %tmp_1014 to i10
  %tmp_1016 = trunc i36 %tmp_1014 to i8
  %p_shl373_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1016, i2 0)
  %tmp_1017 = sub i10 %p_shl373_cast, %tmp_1015
  %tmp_1018 = add i10 %tmp_1017, %tmp_349_cast
  %tmp_1237_cast = zext i10 %tmp_1018 to i64
  %weights_48_1_3x3_V_a = getelementptr [432 x i8]* @weights_48_1_3x3_V, i64 0, i64 %tmp_1237_cast
  %tmp3 = add i8 120, %tmp_503_cast
  %tmp_356 = add i8 %co57_cast, %tmp3
  %tmp_357_cast = zext i8 %tmp_356 to i11
  %tmp_1019 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_356, i2 0)
  %p_shl372_cast = zext i10 %tmp_1019 to i11
  %tmp_1020 = sub i11 %p_shl372_cast, %tmp_357_cast
  %tmp_1239_cast = sext i11 %tmp_1020 to i12
  %tmp_1021 = add i12 %tmp_1239_cast, %tmp_342_cast1
  %tmp_1240_cast = sext i12 %tmp_1021 to i64
  %tmp_1022 = call i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12 %tmp_1021, i2 0)
  %p_shl219 = sext i14 %tmp_1022 to i64
  %tmp_1023 = sub i64 %p_shl219, %tmp_1240_cast
  %tmp_1024 = add i64 %tmp_1023, %tmp_349
  %shuffle_conv_3x3_V6_5 = add i64 %tmp_373, %tmp_1024
  %p3X3_1X1_WEIGHTS_addr_15 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_3x3_V6_5
  %p3X3_1X1_WEIGHTS_load_1 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_15, i32 1)
  %p3X3_1X1_WEIGHTS_addr_72 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_15)
  store i8 %p3X3_1X1_WEIGHTS_addr_72, i8* %weights_48_1_3x3_V_a, align 1
  br label %.preheader901

.preheader900.loopexit:                           ; preds = %.preheader899
  br label %.preheader900

.preheader900:                                    ; preds = %.preheader900.preheader, %.preheader900.loopexit
  %i29 = phi i5 [ %i_30, %.preheader900.loopexit ], [ 0, %.preheader900.preheader ]
  %i29_cast606_cast = zext i5 %i29 to i8
  %i29_cast = zext i5 %i29 to i7
  %exitcond77 = icmp eq i5 %i29, -8
  %empty_420 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_30 = add i5 %i29, 1
  br i1 %exitcond77, label %63, label %.preheader899.preheader

.preheader899.preheader:                          ; preds = %.preheader900
  br label %.preheader899

.preheader899:                                    ; preds = %.preheader899.preheader, %62
  %k2 = phi i2 [ %k_2, %62 ], [ 0, %.preheader899.preheader ]
  %exitcond80 = icmp eq i2 %k2, -2
  %empty_421 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_2 = add i2 %k2, 1
  br i1 %exitcond80, label %.preheader900.loopexit, label %62

; <label>:62                                      ; preds = %.preheader899
  %tmp_1009 = trunc i2 %k2 to i1
  %p_shl8 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1009, i5 0)
  %p_shl8_cast = zext i6 %p_shl8 to i7
  %p_shl9 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1009, i3 0)
  %p_shl9_cast = zext i4 %p_shl9 to i7
  %tmp_344 = sub i7 %p_shl8_cast, %p_shl9_cast
  %tmp_484_cast_cast = sext i7 %tmp_344 to i8
  %tmp_345 = add i7 %i29_cast, %tmp_344
  %tmp_485_cast = sext i7 %tmp_345 to i32
  %tmp_346 = zext i32 %tmp_485_cast to i64
  %tmp4 = add i8 -104, %tmp_484_cast_cast
  %tmp_347 = add i8 %tmp4, %i29_cast606_cast
  %tmp_488_cast = sext i8 %tmp_347 to i9
  %tmp_348_cast = zext i9 %tmp_488_cast to i33
  %bias_V14_sum1 = add i33 %tmp_482_cast, %tmp_348_cast
  %bias_V14_sum18_cast = sext i33 %bias_V14_sum1 to i64
  %DATA_BIAS_addr_18 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum18_cast
  %DATA_BIAS_load_18_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_18, i32 1)
  %DATA_BIAS_addr_18_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_18)
  %bias_48_V_addr_1 = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_346
  store i8 %DATA_BIAS_addr_18_re, i8* %bias_48_V_addr_1, align 1
  br label %.preheader899

; <label>:63                                      ; preds = %.preheader900
  call fastcc void @subconv_3x3_16_strid([15552 x i8]* @ShuffleConvs_1_Downs, [432 x i8]* @weights_48_1_3x3_V, [48 x i8]* @bias_48_V, [4800 x i8]* @buffer0_1_48_8x8_p_V)
  br label %.loopexit1002

.loopexit1002.loopexit:                           ; preds = %.preheader898
  br label %.loopexit1002

.loopexit1002:                                    ; preds = %.loopexit1002.loopexit, %63
  %co58 = phi i5 [ 0, %63 ], [ %co_59, %.loopexit1002.loopexit ]
  %co59_cast = zext i5 %co58 to i9
  %exitcond79 = icmp eq i5 %co58, -8
  %empty_422 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_59 = add i5 %co58, 1
  br i1 %exitcond79, label %.preheader896.preheader, label %.preheader898.preheader

.preheader896.preheader:                          ; preds = %.loopexit1002
  br label %.preheader896

.preheader898.preheader:                          ; preds = %.loopexit1002
  %tmp_1008 = trunc i5 %co58 to i1
  %p_shl10 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1008, i5 0)
  %p_shl10_cast = zext i6 %p_shl10 to i7
  %p_shl11 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1008, i3 0)
  %p_shl11_cast = zext i4 %p_shl11 to i7
  %tmp_343 = sub i7 %p_shl10_cast, %p_shl11_cast
  %p_lshr_f1_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co58, i32 1, i32 4)
  %tmp_492_cast = zext i4 %p_lshr_f1_cast to i7
  br label %.preheader898

.preheader898.loopexit:                           ; preds = %.preheader897
  br label %.preheader898

.preheader898:                                    ; preds = %.preheader898.loopexit, %.preheader898.preheader
  %ci29 = phi i5 [ 0, %.preheader898.preheader ], [ %ci_30, %.preheader898.loopexit ]
  %ci29_cast = zext i5 %ci29 to i7
  %exitcond83 = icmp eq i5 %ci29, -8
  %empty_423 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_30 = add i5 %ci29, 1
  br i1 %exitcond83, label %.loopexit1002.loopexit, label %.preheader897.preheader

.preheader897.preheader:                          ; preds = %.preheader898
  %tmp_350 = add i7 %tmp_343, %ci29_cast
  %tmp_351_cast = sext i7 %tmp_350 to i13
  %tmp_352_cast = zext i5 %ci29 to i16
  br label %.preheader897

.preheader897:                                    ; preds = %64, %.preheader897.preheader
  %i35 = phi i3 [ %i_36, %64 ], [ 0, %.preheader897.preheader ]
  %exitcond87 = icmp eq i3 %i35, -4
  %empty_424 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %i_36 = add i3 %i35, 1
  br i1 %exitcond87, label %.preheader898.loopexit, label %64

; <label>:64                                      ; preds = %.preheader897
  %tmp_1026 = trunc i3 %i35 to i2
  %p_shl16 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1026, i4 0)
  %p_shl16_cast = zext i6 %p_shl16 to i7
  %p_shl17 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1026, i2 0)
  %p_shl17_cast = zext i4 %p_shl17 to i7
  %tmp_363 = sub i7 %p_shl16_cast, %p_shl17_cast
  %tmp_364 = add i7 %tmp_363, %tmp_492_cast
  %tmp_1027 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_364, i6 0)
  %tmp_1028 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_364, i4 0)
  %p_shl378_cast = sext i11 %tmp_1028 to i13
  %tmp_1029 = sub i13 %tmp_1027, %p_shl378_cast
  %tmp_1030 = add i13 %tmp_351_cast, %tmp_1029
  %tmp_1253_cast = sext i13 %tmp_1030 to i64
  %weights_48_48_1x1_V_1 = getelementptr [2304 x i8]* @weights_48_48_1x1_V, i64 0, i64 %tmp_1253_cast
  %p_shl18 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1026, i5 0)
  %p_shl18_cast = zext i7 %p_shl18 to i8
  %p_shl19 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1026, i3 0)
  %p_shl19_cast = zext i5 %p_shl19 to i8
  %tmp_365 = sub i8 %p_shl18_cast, %p_shl19_cast
  %tmp_513_cast = sext i8 %tmp_365 to i9
  %tmp5 = add i9 -200, %tmp_513_cast
  %tmp_366 = add i9 %tmp5, %co59_cast
  %tmp_1031 = call i14 @_ssdm_op_BitConcatenate.i14.i9.i5(i9 %tmp_366, i5 0)
  %p_shl375_cast = zext i14 %tmp_1031 to i15
  %tmp_1032 = call i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9 %tmp_366, i3 0)
  %p_shl376_cast = zext i12 %tmp_1032 to i15
  %tmp_1033 = sub i15 %p_shl375_cast, %p_shl376_cast
  %tmp_1258_cast = sext i15 %tmp_1033 to i16
  %tmp_1034 = add i16 %tmp_352_cast, %tmp_1258_cast
  %tmp_1259_cast1 = sext i16 %tmp_1034 to i33
  %shuffle_conv_1x1_V8_28 = add i33 %tmp_1259_cast1, %tmp_490_cast
  %shuffle_conv_1x1_V8_29 = sext i33 %shuffle_conv_1x1_V8_28 to i64
  %p3X3_1X1_WEIGHTS_addr_16 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_1x1_V8_29
  %p3X3_1X1_WEIGHTS_load_2 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_16, i32 1)
  %p3X3_1X1_WEIGHTS_addr_73 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_16)
  store i8 %p3X3_1X1_WEIGHTS_addr_73, i8* %weights_48_48_1x1_V_1, align 1
  br label %.preheader897

.preheader896.loopexit:                           ; preds = %.preheader895
  br label %.preheader896

.preheader896:                                    ; preds = %.preheader896.preheader, %.preheader896.loopexit
  %i31 = phi i5 [ %i_32, %.preheader896.loopexit ], [ 0, %.preheader896.preheader ]
  %i32_cast593_cast = zext i5 %i31 to i8
  %i32_cast = zext i5 %i31 to i7
  %exitcond82 = icmp eq i5 %i31, -8
  %empty_425 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_32 = add i5 %i31, 1
  br i1 %exitcond82, label %66, label %.preheader895.preheader

.preheader895.preheader:                          ; preds = %.preheader896
  br label %.preheader895

.preheader895:                                    ; preds = %.preheader895.preheader, %65
  %k3 = phi i2 [ %k_3, %65 ], [ 0, %.preheader895.preheader ]
  %exitcond86 = icmp eq i2 %k3, -2
  %empty_426 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_3 = add i2 %k3, 1
  br i1 %exitcond86, label %.preheader896.loopexit, label %65

; <label>:65                                      ; preds = %.preheader895
  %tmp_1025 = trunc i2 %k3 to i1
  %p_shl12 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1025, i5 0)
  %p_shl12_cast = zext i6 %p_shl12 to i7
  %p_shl13 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1025, i3 0)
  %p_shl13_cast = zext i4 %p_shl13 to i7
  %tmp_358 = sub i7 %p_shl12_cast, %p_shl13_cast
  %tmp_494_cast_cast = sext i7 %tmp_358 to i8
  %tmp_359 = add i7 %i32_cast, %tmp_358
  %tmp_495_cast = sext i7 %tmp_359 to i32
  %tmp_360 = zext i32 %tmp_495_cast to i64
  %tmp6 = add i8 -56, %tmp_494_cast_cast
  %tmp_361 = add i8 %tmp6, %i32_cast593_cast
  %tmp_498_cast = sext i8 %tmp_361 to i9
  %tmp_362_cast = zext i9 %tmp_498_cast to i33
  %bias_V14_sum2 = add i33 %tmp_482_cast, %tmp_362_cast
  %bias_V14_sum19_cast = sext i33 %bias_V14_sum2 to i64
  %DATA_BIAS_addr_19 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum19_cast
  %DATA_BIAS_load_19_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_19, i32 1)
  %DATA_BIAS_addr_19_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_19)
  %bias_48_V_addr_2 = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_360
  store i8 %DATA_BIAS_addr_19_re, i8* %bias_48_V_addr_2, align 1
  br label %.preheader895

; <label>:66                                      ; preds = %.preheader896
  call fastcc void @subconv_1x1_8_p([4800 x i8]* @buffer0_1_48_8x8_p_V, [2304 x i8]* @weights_48_48_1x1_V, [48 x i8]* @bias_48_V, [4800 x i8]* @buffer1_1_48_8x8_p_V)
  call fastcc void @shuffle_48_l_p([4800 x i8]* @buffer1_1_48_8x8_p_V, [9600 x i8]* @downsampleunit1_outp)
  br label %.loopexit1001

.loopexit1001.loopexit:                           ; preds = %.preheader894
  br label %.loopexit1001

.loopexit1001:                                    ; preds = %.loopexit1001.loopexit, %66
  %co60 = phi i5 [ 0, %66 ], [ %co_61, %.loopexit1001.loopexit ]
  %co61_cast = zext i5 %co60 to i8
  %co61_cast1 = zext i5 %co60 to i7
  %exitcond85 = icmp eq i5 %co60, -8
  %empty_427 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_61 = add i5 %co60, 1
  br i1 %exitcond85, label %.preheader891.preheader, label %.preheader894.preheader

.preheader894.preheader:                          ; preds = %.loopexit1001
  br label %.preheader894

.preheader891.preheader:                          ; preds = %.loopexit1001
  br label %.preheader891

.preheader894.loopexit:                           ; preds = %.preheader893
  br label %.preheader894

.preheader894:                                    ; preds = %.preheader894.preheader, %.preheader894.loopexit
  %w46 = phi i2 [ %w_47, %.preheader894.loopexit ], [ 0, %.preheader894.preheader ]
  %exitcond89 = icmp eq i2 %w46, -1
  %empty_428 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %w_47 = add i2 %w46, 1
  br i1 %exitcond89, label %.loopexit1001.loopexit, label %.preheader893.preheader

.preheader893.preheader:                          ; preds = %.preheader894
  %tmp_367_cast1 = zext i2 %w46 to i11
  %tmp_367_cast = zext i2 %w46 to i36
  br label %.preheader893

.preheader893.loopexit:                           ; preds = %.preheader892
  br label %.preheader893

.preheader893:                                    ; preds = %.preheader893.loopexit, %.preheader893.preheader
  %h46 = phi i2 [ 0, %.preheader893.preheader ], [ %h_47, %.preheader893.loopexit ]
  %exitcond92 = icmp eq i2 %h46, -1
  %empty_429 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %h_47 = add i2 %h46, 1
  br i1 %exitcond92, label %.preheader894.loopexit, label %.preheader892.preheader

.preheader892.preheader:                          ; preds = %.preheader893
  %tmp_374 = zext i2 %h46 to i64
  %tmp_374_cast = zext i2 %h46 to i10
  br label %.preheader892

.preheader892:                                    ; preds = %67, %.preheader892.preheader
  %i40 = phi i2 [ %i_41, %67 ], [ 0, %.preheader892.preheader ]
  %exitcond95 = icmp eq i2 %i40, -2
  %empty_430 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %i_41 = add i2 %i40, 1
  br i1 %exitcond95, label %.preheader893.loopexit, label %67

; <label>:67                                      ; preds = %.preheader892
  %tmp_1037 = trunc i2 %i40 to i1
  %p_shl26 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1037, i5 0)
  %p_shl26_cast = zext i6 %p_shl26 to i7
  %p_shl27 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1037, i3 0)
  %p_shl27_cast = zext i4 %p_shl27 to i7
  %tmp_378 = sub i7 %p_shl26_cast, %p_shl27_cast
  %tmp_536_cast = sext i7 %tmp_378 to i8
  %tmp_379 = add i7 %tmp_378, %co61_cast1
  %tmp_537_cast = sext i7 %tmp_379 to i32
  %tmp_380_cast = zext i32 %tmp_537_cast to i35
  %tmp_1038 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_379, i2 0)
  %tmp_1039 = sext i9 %tmp_1038 to i34
  %p_shl382_cast = zext i34 %tmp_1039 to i35
  %tmp_1040 = sub i35 %p_shl382_cast, %tmp_380_cast
  %tmp_1268_cast = sext i35 %tmp_1040 to i36
  %tmp_1041 = add i36 %tmp_1268_cast, %tmp_367_cast
  %tmp_1042 = trunc i36 %tmp_1041 to i10
  %tmp_1043 = trunc i36 %tmp_1041 to i8
  %p_shl381_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1043, i2 0)
  %tmp_1044 = sub i10 %p_shl381_cast, %tmp_1042
  %tmp_1045 = add i10 %tmp_1044, %tmp_374_cast
  %tmp_1272_cast = zext i10 %tmp_1045 to i64
  %weights_48_1_3x3_V_a_1 = getelementptr [432 x i8]* @weights_48_1_3x3_V, i64 0, i64 %tmp_1272_cast
  %tmp7 = add i8 -88, %tmp_536_cast
  %tmp_381 = add i8 %co61_cast, %tmp7
  %tmp_382_cast = zext i8 %tmp_381 to i11
  %tmp_1046 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_381, i2 0)
  %p_shl380_cast = zext i10 %tmp_1046 to i11
  %tmp_1047 = sub i11 %p_shl380_cast, %tmp_382_cast
  %tmp_1048 = add i11 %tmp_1047, %tmp_367_cast1
  %tmp_1275_cast = sext i11 %tmp_1048 to i64
  %tmp_1049 = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_1048, i2 0)
  %p_shl221 = sext i13 %tmp_1049 to i64
  %tmp_1050 = sub i64 %p_shl221, %tmp_1275_cast
  %tmp_1051 = add i64 %tmp_1050, %tmp_374
  %shuffle_conv_3x3_V6_6 = add i64 %tmp_373, %tmp_1051
  %p3X3_1X1_WEIGHTS_addr_17 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_3x3_V6_6
  %p3X3_1X1_WEIGHTS_load_3 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_17, i32 1)
  %p3X3_1X1_WEIGHTS_addr_74 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_17)
  store i8 %p3X3_1X1_WEIGHTS_addr_74, i8* %weights_48_1_3x3_V_a_1, align 1
  br label %.preheader892

.preheader891.loopexit:                           ; preds = %.preheader890
  br label %.preheader891

.preheader891:                                    ; preds = %.preheader891.preheader, %.preheader891.loopexit
  %i37 = phi i5 [ %i_38, %.preheader891.loopexit ], [ 0, %.preheader891.preheader ]
  %i37_cast = zext i5 %i37 to i10
  %i37_cast1 = zext i5 %i37 to i7
  %exitcond88 = icmp eq i5 %i37, -8
  %empty_431 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_38 = add i5 %i37, 1
  br i1 %exitcond88, label %69, label %.preheader890.preheader

.preheader890.preheader:                          ; preds = %.preheader891
  br label %.preheader890

.preheader890:                                    ; preds = %.preheader890.preheader, %68
  %k4 = phi i2 [ %k_4, %68 ], [ 0, %.preheader890.preheader ]
  %exitcond91 = icmp eq i2 %k4, -2
  %empty_432 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_4 = add i2 %k4, 1
  br i1 %exitcond91, label %.preheader891.loopexit, label %68

; <label>:68                                      ; preds = %.preheader890
  %tmp_1036 = trunc i2 %k4 to i1
  %p_shl20 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1036, i5 0)
  %p_shl20_cast = zext i6 %p_shl20 to i7
  %p_shl21 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1036, i3 0)
  %p_shl21_cast = zext i4 %p_shl21 to i7
  %tmp_369 = sub i7 %p_shl20_cast, %p_shl21_cast
  %tmp_517_cast = sext i7 %tmp_369 to i10
  %tmp_370 = add i7 %i37_cast1, %tmp_369
  %tmp_518_cast = sext i7 %tmp_370 to i32
  %tmp_371 = zext i32 %tmp_518_cast to i64
  %tmp8 = add i10 504, %tmp_517_cast
  %tmp_372 = add i10 %tmp8, %i37_cast
  %tmp_373_cast = zext i10 %tmp_372 to i33
  %bias_V14_sum3 = add i33 %tmp_482_cast, %tmp_373_cast
  %bias_V14_sum20_cast = sext i33 %bias_V14_sum3 to i64
  %DATA_BIAS_addr_20 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum20_cast
  %DATA_BIAS_load_20_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_20, i32 1)
  %DATA_BIAS_addr_20_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_20)
  %bias_48_V_addr_3 = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_371
  store i8 %DATA_BIAS_addr_20_re, i8* %bias_48_V_addr_3, align 1
  br label %.preheader890

; <label>:69                                      ; preds = %.preheader891
  call fastcc void @subconv_3x3_16_strid([15552 x i8]* @shuffleunit0_2_outpu, [432 x i8]* @weights_48_1_3x3_V, [48 x i8]* @bias_48_V, [4800 x i8]* @buffer0_1_48_8x8_p_V)
  br label %.loopexit1000

.loopexit1000.loopexit:                           ; preds = %.preheader889
  br label %.loopexit1000

.loopexit1000:                                    ; preds = %.loopexit1000.loopexit, %69
  %co62 = phi i5 [ 0, %69 ], [ %co_63, %.loopexit1000.loopexit ]
  %co63_cast = zext i5 %co62 to i10
  %exitcond90 = icmp eq i5 %co62, -8
  %empty_433 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_63 = add i5 %co62, 1
  br i1 %exitcond90, label %.preheader887.preheader, label %.preheader889.preheader

.preheader887.preheader:                          ; preds = %.loopexit1000
  br label %.preheader887

.preheader889.preheader:                          ; preds = %.loopexit1000
  %tmp_1035 = trunc i5 %co62 to i1
  %p_shl22 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1035, i5 0)
  %p_shl22_cast = zext i6 %p_shl22 to i7
  %p_shl23 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1035, i3 0)
  %p_shl23_cast = zext i4 %p_shl23 to i7
  %tmp_368 = sub i7 %p_shl22_cast, %p_shl23_cast
  %p_lshr_f2_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co62, i32 1, i32 4)
  %tmp_525_cast = zext i4 %p_lshr_f2_cast to i7
  br label %.preheader889

.preheader889.loopexit:                           ; preds = %.preheader888
  br label %.preheader889

.preheader889:                                    ; preds = %.preheader889.loopexit, %.preheader889.preheader
  %ci31 = phi i5 [ 0, %.preheader889.preheader ], [ %ci_32, %.preheader889.loopexit ]
  %ci31_cast = zext i5 %ci31 to i7
  %exitcond94 = icmp eq i5 %ci31, -8
  %empty_434 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_32 = add i5 %ci31, 1
  br i1 %exitcond94, label %.loopexit1000.loopexit, label %.preheader888.preheader

.preheader888.preheader:                          ; preds = %.preheader889
  %tmp_375 = add i7 %tmp_368, %ci31_cast
  %tmp_376_cast = sext i7 %tmp_375 to i13
  %tmp_377_cast = zext i5 %ci31 to i17
  br label %.preheader888

.preheader888:                                    ; preds = %70, %.preheader888.preheader
  %i42 = phi i3 [ %i_43, %70 ], [ 0, %.preheader888.preheader ]
  %exitcond98 = icmp eq i3 %i42, -4
  %empty_435 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %i_43 = add i3 %i42, 1
  br i1 %exitcond98, label %.preheader889.loopexit, label %70

; <label>:70                                      ; preds = %.preheader888
  %tmp_1059 = trunc i3 %i42 to i2
  %p_shl30 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1059, i4 0)
  %p_shl30_cast = zext i6 %p_shl30 to i7
  %p_shl31 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1059, i2 0)
  %p_shl31_cast = zext i4 %p_shl31 to i7
  %tmp_389 = sub i7 %p_shl30_cast, %p_shl31_cast
  %tmp_390 = add i7 %tmp_389, %tmp_525_cast
  %tmp_1060 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_390, i6 0)
  %tmp_1061 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_390, i4 0)
  %p_shl386_cast = sext i11 %tmp_1061 to i13
  %tmp_1062 = sub i13 %tmp_1060, %p_shl386_cast
  %tmp_1063 = add i13 %tmp_376_cast, %tmp_1062
  %tmp_1294_cast = sext i13 %tmp_1063 to i64
  %weights_48_48_1x1_V_2 = getelementptr [2304 x i8]* @weights_48_48_1x1_V, i64 0, i64 %tmp_1294_cast
  %p_shl32 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1059, i5 0)
  %p_shl32_cast = zext i7 %p_shl32 to i8
  %p_shl33 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1059, i3 0)
  %p_shl33_cast = zext i5 %p_shl33 to i8
  %tmp_391 = sub i8 %p_shl32_cast, %p_shl33_cast
  %tmp_551_cast = sext i8 %tmp_391 to i9
  %tmp9 = add i9 -104, %tmp_551_cast
  %tmp9_cast = zext i9 %tmp9 to i10
  %tmp_392 = add i10 %tmp9_cast, %co63_cast
  %tmp_1064 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_392, i5 0)
  %p_shl383_cast = zext i15 %tmp_1064 to i16
  %tmp_1065 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_392, i3 0)
  %p_shl384_cast = zext i13 %tmp_1065 to i16
  %tmp_1066 = sub i16 %p_shl383_cast, %p_shl384_cast
  %tmp_1299_cast = sext i16 %tmp_1066 to i17
  %tmp_1067 = add i17 %tmp_377_cast, %tmp_1299_cast
  %tmp_1300_cast = sext i17 %tmp_1067 to i33
  %shuffle_conv_1x1_V8_1 = add i33 %tmp_1300_cast, %tmp_490_cast
  %shuffle_conv_1x1_V8_30 = sext i33 %shuffle_conv_1x1_V8_1 to i64
  %p3X3_1X1_WEIGHTS_addr_18 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_1x1_V8_30
  %p3X3_1X1_WEIGHTS_load_4 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_18, i32 1)
  %p3X3_1X1_WEIGHTS_addr_75 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_18)
  store i8 %p3X3_1X1_WEIGHTS_addr_75, i8* %weights_48_48_1x1_V_2, align 1
  br label %.preheader888

.preheader887.loopexit:                           ; preds = %.preheader886
  br label %.preheader887

.preheader887:                                    ; preds = %.preheader887.preheader, %.preheader887.loopexit
  %i39 = phi i5 [ %i_40, %.preheader887.loopexit ], [ 0, %.preheader887.preheader ]
  %i39_cast = zext i5 %i39 to i10
  %i39_cast1 = zext i5 %i39 to i7
  %exitcond93 = icmp eq i5 %i39, -8
  %empty_436 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_40 = add i5 %i39, 1
  br i1 %exitcond93, label %72, label %.preheader886.preheader

.preheader886.preheader:                          ; preds = %.preheader887
  br label %.preheader886

.preheader886:                                    ; preds = %.preheader886.preheader, %71
  %k5 = phi i2 [ %k_5, %71 ], [ 0, %.preheader886.preheader ]
  %exitcond97 = icmp eq i2 %k5, -2
  %empty_437 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_5 = add i2 %k5, 1
  br i1 %exitcond97, label %.preheader887.loopexit, label %71

; <label>:71                                      ; preds = %.preheader886
  %tmp_1058 = trunc i2 %k5 to i1
  %p_shl24 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1058, i5 0)
  %p_shl24_cast = zext i6 %p_shl24 to i7
  %p_shl25 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1058, i3 0)
  %p_shl25_cast = zext i4 %p_shl25 to i7
  %tmp_384 = sub i7 %p_shl24_cast, %p_shl25_cast
  %tmp_527_cast = sext i7 %tmp_384 to i10
  %tmp_385 = add i7 %i39_cast1, %tmp_384
  %tmp_528_cast = sext i7 %tmp_385 to i32
  %tmp_386 = zext i32 %tmp_528_cast to i64
  %tmp10 = add i10 -472, %tmp_527_cast
  %tmp_387 = add i10 %tmp10, %i39_cast
  %tmp_388_cast = zext i10 %tmp_387 to i33
  %bias_V14_sum4 = add i33 %tmp_482_cast, %tmp_388_cast
  %bias_V14_sum21_cast = sext i33 %bias_V14_sum4 to i64
  %DATA_BIAS_addr_21 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum21_cast
  %DATA_BIAS_load_21_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_21, i32 1)
  %DATA_BIAS_addr_21_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_21)
  %bias_48_V_addr_4 = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_386
  store i8 %DATA_BIAS_addr_21_re, i8* %bias_48_V_addr_4, align 1
  br label %.preheader886

; <label>:72                                      ; preds = %.preheader887
  call fastcc void @subconv_1x1_8_p([4800 x i8]* @buffer0_1_48_8x8_p_V, [2304 x i8]* @weights_48_48_1x1_V, [48 x i8]* @bias_48_V, [4800 x i8]* @buffer1_1_48_8x8_p_V)
  call fastcc void @shuffle_48_r_p([4800 x i8]* @buffer1_1_48_8x8_p_V, [9600 x i8]* @downsampleunit1_outp)
  br label %.loopexit999

.loopexit999.loopexit:                            ; preds = %.preheader885
  br label %.loopexit999

.loopexit999:                                     ; preds = %.loopexit999.loopexit, %72
  %co64 = phi i6 [ 0, %72 ], [ %co_65, %.loopexit999.loopexit ]
  %co65_cast = zext i6 %co64 to i7
  %exitcond96 = icmp eq i6 %co64, -16
  %empty_438 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_65 = add i6 %co64, 1
  br i1 %exitcond96, label %.preheader883.preheader, label %.preheader885.preheader

.preheader883.preheader:                          ; preds = %.loopexit999
  br label %.preheader883

.preheader885.preheader:                          ; preds = %.loopexit999
  %tmp_1052 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co64, i3 0)
  %p_shl389_cast = zext i9 %tmp_1052 to i10
  %tmp_1053 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co64, i1 false)
  %p_shl390_cast = zext i7 %tmp_1053 to i10
  %tmp_1054 = add i10 %p_shl390_cast, %p_shl389_cast
  %tmp_383 = add i7 %co65_cast, 48
  %tmp_1055 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_383, i3 0)
  %p_shl387_cast = zext i10 %tmp_1055 to i11
  %tmp_1056 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp_383, i1 false)
  %p_shl388_cast = zext i8 %tmp_1056 to i11
  %tmp_1057 = add i11 %p_shl388_cast, %p_shl387_cast
  br label %.preheader885

.preheader885.loopexit:                           ; preds = %.preheader884
  br label %.preheader885

.preheader885:                                    ; preds = %.preheader885.loopexit, %.preheader885.preheader
  %h48 = phi i4 [ 0, %.preheader885.preheader ], [ %h_49, %.preheader885.loopexit ]
  %exitcond100 = icmp eq i4 %h48, -8
  %empty_439 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %h_49 = add i4 %h48, 1
  br i1 %exitcond100, label %.loopexit999.loopexit, label %.preheader884.preheader

.preheader884.preheader:                          ; preds = %.preheader885
  %tmp_394_cast1 = zext i4 %h_49 to i10
  %tmp_394_cast = zext i4 %h_49 to i11
  %tmp_1069 = add i11 %tmp_394_cast, %tmp_1057
  %tmp_1070 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1069, i3 0)
  %p_shl393_cast = zext i14 %tmp_1070 to i15
  %tmp_1071 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_1069, i1 false)
  %p_shl394_cast = zext i12 %tmp_1071 to i15
  %tmp_1072 = add i15 %p_shl393_cast, %p_shl394_cast
  %tmp_1073 = add i10 %tmp_394_cast1, %tmp_1054
  %tmp_1074 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1073, i3 0)
  %p_shl391_cast = zext i13 %tmp_1074 to i14
  %tmp_1075 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1073, i1 false)
  %p_shl392_cast = zext i11 %tmp_1075 to i14
  %tmp_1076 = add i14 %p_shl391_cast, %p_shl392_cast
  br label %.preheader884

.preheader884:                                    ; preds = %73, %.preheader884.preheader
  %w48 = phi i4 [ %w_49, %73 ], [ 0, %.preheader884.preheader ]
  %exitcond103 = icmp eq i4 %w48, -8
  %empty_440 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %w_49 = add i4 %w48, 1
  br i1 %exitcond103, label %.preheader885.loopexit, label %73

; <label>:73                                      ; preds = %.preheader884
  %tmp_398_cast1 = zext i4 %w_49 to i14
  %tmp_398_cast = zext i4 %w_49 to i15
  %tmp_1077 = add i15 %tmp_1072, %tmp_398_cast
  %tmp_1311_cast = zext i15 %tmp_1077 to i64
  %downsampleunit1_outp = getelementptr [9600 x i8]* @downsampleunit1_outp, i64 0, i64 %tmp_1311_cast
  %tmp_1078 = add i14 %tmp_1076, %tmp_398_cast1
  %tmp_1312_cast = zext i14 %tmp_1078 to i64
  %buffer0_1_48_8x8_p_V = getelementptr [4800 x i8]* @buffer0_1_48_8x8_p_V, i64 0, i64 %tmp_1312_cast
  %downsampleunit1_outp_1 = load i8* %downsampleunit1_outp, align 1
  store i8 %downsampleunit1_outp_1, i8* %buffer0_1_48_8x8_p_V, align 1
  br label %.preheader884

.preheader883.loopexit:                           ; preds = %.preheader882
  br label %.preheader883

.preheader883:                                    ; preds = %.preheader883.preheader, %.preheader883.loopexit
  %co66 = phi i5 [ %co_67, %.preheader883.loopexit ], [ 0, %.preheader883.preheader ]
  %co66_cast = zext i5 %co66 to i10
  %exitcond99 = icmp eq i5 %co66, -8
  %empty_441 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_67 = add i5 %co66, 1
  br i1 %exitcond99, label %.preheader880.preheader, label %.preheader882.preheader

.preheader880.preheader:                          ; preds = %.preheader883
  br label %.preheader880

.preheader882.preheader:                          ; preds = %.preheader883
  %tmp_1068 = trunc i5 %co66 to i1
  %p_shl28 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1068, i5 0)
  %p_shl28_cast = zext i6 %p_shl28 to i7
  %p_shl29 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1068, i3 0)
  %p_shl29_cast = zext i4 %p_shl29 to i7
  %tmp_393 = sub i7 %p_shl28_cast, %p_shl29_cast
  %p_lshr_f3_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co66, i32 1, i32 4)
  %tmp_547_cast = zext i4 %p_lshr_f3_cast to i7
  br label %.preheader882

.preheader882.loopexit:                           ; preds = %.preheader881
  br label %.preheader882

.preheader882:                                    ; preds = %.preheader882.loopexit, %.preheader882.preheader
  %ci33 = phi i5 [ 0, %.preheader882.preheader ], [ %ci_34, %.preheader882.loopexit ]
  %ci33_cast = zext i5 %ci33 to i7
  %exitcond102 = icmp eq i5 %ci33, -8
  %empty_442 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_34 = add i5 %ci33, 1
  br i1 %exitcond102, label %.preheader883.loopexit, label %.preheader881.preheader

.preheader881.preheader:                          ; preds = %.preheader882
  %tmp_395 = add i7 %tmp_393, %ci33_cast
  %tmp_396_cast = sext i7 %tmp_395 to i13
  %tmp_397_cast = zext i5 %ci33 to i17
  br label %.preheader881

.preheader881:                                    ; preds = %74, %.preheader881.preheader
  %i46 = phi i3 [ %i_47, %74 ], [ 0, %.preheader881.preheader ]
  %exitcond106 = icmp eq i3 %i46, -4
  %empty_443 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %i_47 = add i3 %i46, 1
  br i1 %exitcond106, label %.preheader882.loopexit, label %74

; <label>:74                                      ; preds = %.preheader881
  %tmp_1080 = trunc i3 %i46 to i2
  %p_shl36 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1080, i4 0)
  %p_shl36_cast = zext i6 %p_shl36 to i7
  %p_shl37 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1080, i2 0)
  %p_shl37_cast = zext i4 %p_shl37 to i7
  %tmp_404 = sub i7 %p_shl36_cast, %p_shl37_cast
  %tmp_405 = add i7 %tmp_404, %tmp_547_cast
  %tmp_1081 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_405, i6 0)
  %tmp_1082 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_405, i4 0)
  %p_shl398_cast = sext i11 %tmp_1082 to i13
  %tmp_1083 = sub i13 %tmp_1081, %p_shl398_cast
  %tmp_1084 = add i13 %tmp_396_cast, %tmp_1083
  %tmp_1322_cast = sext i13 %tmp_1084 to i64
  %weights_48_48_1x1_V_3 = getelementptr [2304 x i8]* @weights_48_48_1x1_V, i64 0, i64 %tmp_1322_cast
  %p_shl38 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1080, i5 0)
  %p_shl38_cast = zext i7 %p_shl38 to i8
  %p_shl39 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1080, i3 0)
  %p_shl39_cast = zext i5 %p_shl39 to i8
  %tmp_406 = sub i8 %p_shl38_cast, %p_shl39_cast
  %tmp_570_cast = sext i8 %tmp_406 to i10
  %tmp11 = add i10 504, %tmp_570_cast
  %tmp_407 = add i10 %tmp11, %co66_cast
  %tmp_1085 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_407, i5 0)
  %p_shl395_cast = zext i15 %tmp_1085 to i16
  %tmp_1086 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_407, i3 0)
  %p_shl396_cast = zext i13 %tmp_1086 to i16
  %tmp_1087 = sub i16 %p_shl395_cast, %p_shl396_cast
  %tmp_1327_cast = sext i16 %tmp_1087 to i17
  %tmp_1088 = add i17 %tmp_397_cast, %tmp_1327_cast
  %tmp_1328_cast = sext i17 %tmp_1088 to i33
  %shuffle_conv_1x1_V8_2 = add i33 %tmp_1328_cast, %tmp_490_cast
  %shuffle_conv_1x1_V8_31 = sext i33 %shuffle_conv_1x1_V8_2 to i64
  %p3X3_1X1_WEIGHTS_addr_19 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_1x1_V8_31
  %p3X3_1X1_WEIGHTS_load_5 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_19, i32 1)
  %p3X3_1X1_WEIGHTS_addr_76 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_19)
  store i8 %p3X3_1X1_WEIGHTS_addr_76, i8* %weights_48_48_1x1_V_3, align 1
  br label %.preheader881

.preheader880.loopexit:                           ; preds = %.preheader879
  br label %.preheader880

.preheader880:                                    ; preds = %.preheader880.preheader, %.preheader880.loopexit
  %i44 = phi i5 [ %i_45, %.preheader880.loopexit ], [ 0, %.preheader880.preheader ]
  %i45_cast = zext i5 %i44 to i10
  %i45_cast1 = zext i5 %i44 to i7
  %exitcond101 = icmp eq i5 %i44, -8
  %empty_444 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_45 = add i5 %i44, 1
  br i1 %exitcond101, label %76, label %.preheader879.preheader

.preheader879.preheader:                          ; preds = %.preheader880
  br label %.preheader879

.preheader879:                                    ; preds = %.preheader879.preheader, %75
  %k6 = phi i2 [ %k_6, %75 ], [ 0, %.preheader879.preheader ]
  %exitcond105 = icmp eq i2 %k6, -2
  %empty_445 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_6 = add i2 %k6, 1
  br i1 %exitcond105, label %.preheader880.loopexit, label %75

; <label>:75                                      ; preds = %.preheader879
  %tmp_1079 = trunc i2 %k6 to i1
  %p_shl34 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1079, i5 0)
  %p_shl34_cast = zext i6 %p_shl34 to i7
  %p_shl35 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1079, i3 0)
  %p_shl35_cast = zext i4 %p_shl35 to i7
  %tmp_399 = sub i7 %p_shl34_cast, %p_shl35_cast
  %tmp_556_cast = sext i7 %tmp_399 to i10
  %tmp_400 = add i7 %i45_cast1, %tmp_399
  %tmp_557_cast = sext i7 %tmp_400 to i32
  %tmp_401 = zext i32 %tmp_557_cast to i64
  %tmp12 = add i10 -424, %tmp_556_cast
  %tmp_402 = add i10 %tmp12, %i45_cast
  %tmp_403_cast = zext i10 %tmp_402 to i33
  %bias_V14_sum5 = add i33 %tmp_482_cast, %tmp_403_cast
  %bias_V14_sum22_cast = sext i33 %bias_V14_sum5 to i64
  %DATA_BIAS_addr_22 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum22_cast
  %DATA_BIAS_load_22_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_22, i32 1)
  %DATA_BIAS_addr_22_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_22)
  %bias_48_V_addr_5 = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_401
  store i8 %DATA_BIAS_addr_22_re, i8* %bias_48_V_addr_5, align 1
  br label %.preheader879

; <label>:76                                      ; preds = %.preheader880
  call fastcc void @subconv_1x1_8_p([4800 x i8]* @buffer0_1_48_8x8_p_V, [2304 x i8]* @weights_48_48_1x1_V, [48 x i8]* @bias_48_V, [4800 x i8]* @buffer1_1_48_8x8_p_V)
  br label %.loopexit998

.loopexit998.loopexit:                            ; preds = %.preheader878
  br label %.loopexit998

.loopexit998:                                     ; preds = %.loopexit998.loopexit, %76
  %co68 = phi i5 [ 0, %76 ], [ %co_69, %.loopexit998.loopexit ]
  %co69_cast = zext i5 %co68 to i9
  %co69_cast1 = zext i5 %co68 to i7
  %exitcond104 = icmp eq i5 %co68, -8
  %empty_446 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_69 = add i5 %co68, 1
  br i1 %exitcond104, label %.preheader875.preheader, label %.preheader878.preheader

.preheader878.preheader:                          ; preds = %.loopexit998
  br label %.preheader878

.preheader875.preheader:                          ; preds = %.loopexit998
  br label %.preheader875

.preheader878.loopexit:                           ; preds = %.preheader877
  br label %.preheader878

.preheader878:                                    ; preds = %.preheader878.preheader, %.preheader878.loopexit
  %w49 = phi i2 [ %w_50, %.preheader878.loopexit ], [ 0, %.preheader878.preheader ]
  %exitcond108 = icmp eq i2 %w49, -1
  %empty_447 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %w_50 = add i2 %w49, 1
  br i1 %exitcond108, label %.loopexit998.loopexit, label %.preheader877.preheader

.preheader877.preheader:                          ; preds = %.preheader878
  %tmp_408_cast1 = zext i2 %w49 to i13
  %tmp_408_cast = zext i2 %w49 to i36
  br label %.preheader877

.preheader877.loopexit:                           ; preds = %.preheader876
  br label %.preheader877

.preheader877:                                    ; preds = %.preheader877.loopexit, %.preheader877.preheader
  %h50 = phi i2 [ 0, %.preheader877.preheader ], [ %h_51, %.preheader877.loopexit ]
  %exitcond111 = icmp eq i2 %h50, -1
  %empty_448 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %h_51 = add i2 %h50, 1
  br i1 %exitcond111, label %.preheader878.loopexit, label %.preheader876.preheader

.preheader876.preheader:                          ; preds = %.preheader877
  %tmp_415 = zext i2 %h50 to i64
  %tmp_415_cast = zext i2 %h50 to i10
  br label %.preheader876

.preheader876:                                    ; preds = %77, %.preheader876.preheader
  %i52 = phi i2 [ %i_53, %77 ], [ 0, %.preheader876.preheader ]
  %exitcond114 = icmp eq i2 %i52, -2
  %empty_449 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %i_53 = add i2 %i52, 1
  br i1 %exitcond114, label %.preheader877.loopexit, label %77

; <label>:77                                      ; preds = %.preheader876
  %tmp_1091 = trunc i2 %i52 to i1
  %p_shl46 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1091, i5 0)
  %p_shl46_cast = zext i6 %p_shl46 to i7
  %p_shl47 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1091, i3 0)
  %p_shl47_cast = zext i4 %p_shl47 to i7
  %tmp_419 = sub i7 %p_shl46_cast, %p_shl47_cast
  %tmp_420 = add i7 %tmp_419, %co69_cast1
  %tmp_594_cast = sext i7 %tmp_420 to i32
  %tmp_421_cast = zext i32 %tmp_594_cast to i35
  %tmp_1092 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_420, i2 0)
  %tmp_1093 = sext i9 %tmp_1092 to i34
  %p_shl402_cast = zext i34 %tmp_1093 to i35
  %tmp_1094 = sub i35 %p_shl402_cast, %tmp_421_cast
  %tmp_1337_cast = sext i35 %tmp_1094 to i36
  %tmp_1095 = add i36 %tmp_1337_cast, %tmp_408_cast
  %tmp_1096 = trunc i36 %tmp_1095 to i10
  %tmp_1097 = trunc i36 %tmp_1095 to i8
  %p_shl401_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1097, i2 0)
  %tmp_1098 = sub i10 %p_shl401_cast, %tmp_1096
  %tmp_1099 = add i10 %tmp_1098, %tmp_415_cast
  %tmp_1341_cast = zext i10 %tmp_1099 to i64
  %weights_48_1_3x3_V_a_2 = getelementptr [432 x i8]* @weights_48_1_3x3_V, i64 0, i64 %tmp_1341_cast
  %tmp13 = add i7 -40, %tmp_419
  %tmp13_cast1 = sext i7 %tmp13 to i8
  %tmp13_cast = zext i8 %tmp13_cast1 to i9
  %tmp_422 = add i9 %co69_cast, %tmp13_cast
  %tmp_423_cast = zext i9 %tmp_422 to i12
  %tmp_1100 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_422, i2 0)
  %p_shl400_cast = zext i11 %tmp_1100 to i12
  %tmp_1101 = sub i12 %p_shl400_cast, %tmp_423_cast
  %tmp_1343_cast = sext i12 %tmp_1101 to i13
  %tmp_1102 = add i13 %tmp_1343_cast, %tmp_408_cast1
  %tmp_1344_cast = sext i13 %tmp_1102 to i64
  %tmp_1103 = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1102, i2 0)
  %p_shl226 = sext i15 %tmp_1103 to i64
  %tmp_1104 = sub i64 %p_shl226, %tmp_1344_cast
  %tmp_1105 = add i64 %tmp_1104, %tmp_415
  %shuffle_conv_3x3_V6_7 = add i64 %tmp_373, %tmp_1105
  %p3X3_1X1_WEIGHTS_addr_20 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_3x3_V6_7
  %p3X3_1X1_WEIGHTS_load_6 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_20, i32 1)
  %p3X3_1X1_WEIGHTS_addr_77 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_20)
  store i8 %p3X3_1X1_WEIGHTS_addr_77, i8* %weights_48_1_3x3_V_a_2, align 1
  br label %.preheader876

.preheader875.loopexit:                           ; preds = %.preheader874
  br label %.preheader875

.preheader875:                                    ; preds = %.preheader875.preheader, %.preheader875.loopexit
  %i48 = phi i5 [ %i_49, %.preheader875.loopexit ], [ 0, %.preheader875.preheader ]
  %i49_cast = zext i5 %i48 to i10
  %i49_cast1 = zext i5 %i48 to i7
  %exitcond107 = icmp eq i5 %i48, -8
  %empty_450 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_49 = add i5 %i48, 1
  br i1 %exitcond107, label %79, label %.preheader874.preheader

.preheader874.preheader:                          ; preds = %.preheader875
  br label %.preheader874

.preheader874:                                    ; preds = %.preheader874.preheader, %78
  %k7 = phi i2 [ %k_7, %78 ], [ 0, %.preheader874.preheader ]
  %exitcond110 = icmp eq i2 %k7, -2
  %empty_451 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_7 = add i2 %k7, 1
  br i1 %exitcond110, label %.preheader875.loopexit, label %78

; <label>:78                                      ; preds = %.preheader874
  %tmp_1090 = trunc i2 %k7 to i1
  %p_shl40 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1090, i5 0)
  %p_shl40_cast = zext i6 %p_shl40 to i7
  %p_shl41 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1090, i3 0)
  %p_shl41_cast = zext i4 %p_shl41 to i7
  %tmp_410 = sub i7 %p_shl40_cast, %p_shl41_cast
  %tmp_574_cast = sext i7 %tmp_410 to i10
  %tmp_411 = add i7 %i49_cast1, %tmp_410
  %tmp_575_cast = sext i7 %tmp_411 to i32
  %tmp_412 = zext i32 %tmp_575_cast to i64
  %tmp14 = add i10 -376, %tmp_574_cast
  %tmp_413 = add i10 %tmp14, %i49_cast
  %tmp_414_cast = zext i10 %tmp_413 to i33
  %bias_V14_sum6 = add i33 %tmp_482_cast, %tmp_414_cast
  %bias_V14_sum23_cast = sext i33 %bias_V14_sum6 to i64
  %DATA_BIAS_addr_23 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum23_cast
  %DATA_BIAS_load_23_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_23, i32 1)
  %DATA_BIAS_addr_23_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_23)
  %bias_48_V_addr_6 = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_412
  store i8 %DATA_BIAS_addr_23_re, i8* %bias_48_V_addr_6, align 1
  br label %.preheader874

; <label>:79                                      ; preds = %.preheader875
  call fastcc void @subconv_3x3_8_no_rel([4800 x i8]* @buffer1_1_48_8x8_p_V, [432 x i8]* @weights_48_1_3x3_V, [48 x i8]* @bias_48_V, [4800 x i8]* @buffer0_1_48_8x8_p_V)
  br label %.loopexit997

.loopexit997.loopexit:                            ; preds = %.preheader873
  br label %.loopexit997

.loopexit997:                                     ; preds = %.loopexit997.loopexit, %79
  %co70 = phi i5 [ 0, %79 ], [ %co_71, %.loopexit997.loopexit ]
  %co71_cast = zext i5 %co70 to i10
  %exitcond109 = icmp eq i5 %co70, -8
  %empty_452 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_71 = add i5 %co70, 1
  br i1 %exitcond109, label %.preheader871.preheader, label %.preheader873.preheader

.preheader871.preheader:                          ; preds = %.loopexit997
  br label %.preheader871

.preheader873.preheader:                          ; preds = %.loopexit997
  %tmp_1089 = trunc i5 %co70 to i1
  %p_shl42 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1089, i5 0)
  %p_shl42_cast = zext i6 %p_shl42 to i7
  %p_shl43 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1089, i3 0)
  %p_shl43_cast = zext i4 %p_shl43 to i7
  %tmp_409 = sub i7 %p_shl42_cast, %p_shl43_cast
  %p_lshr_f4_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co70, i32 1, i32 4)
  %tmp_582_cast = zext i4 %p_lshr_f4_cast to i7
  br label %.preheader873

.preheader873.loopexit:                           ; preds = %.preheader872
  br label %.preheader873

.preheader873:                                    ; preds = %.preheader873.loopexit, %.preheader873.preheader
  %ci35 = phi i5 [ 0, %.preheader873.preheader ], [ %ci_36, %.preheader873.loopexit ]
  %ci35_cast = zext i5 %ci35 to i7
  %exitcond113 = icmp eq i5 %ci35, -8
  %empty_453 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_36 = add i5 %ci35, 1
  br i1 %exitcond113, label %.loopexit997.loopexit, label %.preheader872.preheader

.preheader872.preheader:                          ; preds = %.preheader873
  %tmp_416 = add i7 %tmp_409, %ci35_cast
  %tmp_417_cast = sext i7 %tmp_416 to i13
  %tmp_418_cast = zext i5 %ci35 to i17
  br label %.preheader872

.preheader872:                                    ; preds = %80, %.preheader872.preheader
  %i54 = phi i3 [ %i_55, %80 ], [ 0, %.preheader872.preheader ]
  %exitcond117 = icmp eq i3 %i54, -4
  %empty_454 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %i_55 = add i3 %i54, 1
  br i1 %exitcond117, label %.preheader873.loopexit, label %80

; <label>:80                                      ; preds = %.preheader872
  %tmp_1110 = trunc i3 %i54 to i2
  %p_shl48 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1110, i4 0)
  %p_shl48_cast = zext i6 %p_shl48 to i7
  %p_shl49 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1110, i2 0)
  %p_shl49_cast = zext i4 %p_shl49 to i7
  %tmp_429 = sub i7 %p_shl48_cast, %p_shl49_cast
  %tmp_430 = add i7 %tmp_429, %tmp_582_cast
  %tmp_1111 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_430, i6 0)
  %tmp_1112 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_430, i4 0)
  %p_shl406_cast = sext i11 %tmp_1112 to i13
  %tmp_1113 = sub i13 %tmp_1111, %p_shl406_cast
  %tmp_1114 = add i13 %tmp_417_cast, %tmp_1113
  %tmp_1360_cast = sext i13 %tmp_1114 to i64
  %weights_48_48_1x1_V_4 = getelementptr [2304 x i8]* @weights_48_48_1x1_V, i64 0, i64 %tmp_1360_cast
  %p_shl50 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1110, i5 0)
  %p_shl50_cast = zext i7 %p_shl50 to i8
  %p_shl51 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1110, i3 0)
  %p_shl51_cast = zext i5 %p_shl51 to i8
  %tmp_431 = sub i8 %p_shl50_cast, %p_shl51_cast
  %tmp_603_cast = sext i8 %tmp_431 to i10
  %tmp15 = add i10 -424, %tmp_603_cast
  %tmp_432 = add i10 %tmp15, %co71_cast
  %tmp_1115 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_432, i5 0)
  %p_shl403_cast = zext i15 %tmp_1115 to i16
  %tmp_1116 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_432, i3 0)
  %p_shl404_cast = zext i13 %tmp_1116 to i16
  %tmp_1117 = sub i16 %p_shl403_cast, %p_shl404_cast
  %tmp_1365_cast = sext i16 %tmp_1117 to i17
  %tmp_1118 = add i17 %tmp_418_cast, %tmp_1365_cast
  %tmp_1366_cast = sext i17 %tmp_1118 to i33
  %shuffle_conv_1x1_V8_3 = add i33 %tmp_1366_cast, %tmp_490_cast
  %shuffle_conv_1x1_V8_32 = sext i33 %shuffle_conv_1x1_V8_3 to i64
  %p3X3_1X1_WEIGHTS_addr_21 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_1x1_V8_32
  %p3X3_1X1_WEIGHTS_load_7 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_21, i32 1)
  %p3X3_1X1_WEIGHTS_addr_78 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_21)
  store i8 %p3X3_1X1_WEIGHTS_addr_78, i8* %weights_48_48_1x1_V_4, align 1
  br label %.preheader872

.preheader871.loopexit:                           ; preds = %.preheader870
  br label %.preheader871

.preheader871:                                    ; preds = %.preheader871.preheader, %.preheader871.loopexit
  %i50 = phi i5 [ %i_51, %.preheader871.loopexit ], [ 0, %.preheader871.preheader ]
  %i51_cast = zext i5 %i50 to i10
  %i51_cast1 = zext i5 %i50 to i7
  %exitcond112 = icmp eq i5 %i50, -8
  %empty_455 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_51 = add i5 %i50, 1
  br i1 %exitcond112, label %82, label %.preheader870.preheader

.preheader870.preheader:                          ; preds = %.preheader871
  br label %.preheader870

.preheader870:                                    ; preds = %.preheader870.preheader, %81
  %k8 = phi i2 [ %k_8, %81 ], [ 0, %.preheader870.preheader ]
  %exitcond116 = icmp eq i2 %k8, -2
  %empty_456 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_8 = add i2 %k8, 1
  br i1 %exitcond116, label %.preheader871.loopexit, label %81

; <label>:81                                      ; preds = %.preheader870
  %tmp_1109 = trunc i2 %k8 to i1
  %p_shl44 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1109, i5 0)
  %p_shl44_cast = zext i6 %p_shl44 to i7
  %p_shl45 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1109, i3 0)
  %p_shl45_cast = zext i4 %p_shl45 to i7
  %tmp_424 = sub i7 %p_shl44_cast, %p_shl45_cast
  %tmp_584_cast = sext i7 %tmp_424 to i10
  %tmp_425 = add i7 %i51_cast1, %tmp_424
  %tmp_585_cast = sext i7 %tmp_425 to i32
  %tmp_426 = zext i32 %tmp_585_cast to i64
  %tmp16 = add i10 -328, %tmp_584_cast
  %tmp_427 = add i10 %tmp16, %i51_cast
  %tmp_428_cast = zext i10 %tmp_427 to i33
  %bias_V14_sum7 = add i33 %tmp_482_cast, %tmp_428_cast
  %bias_V14_sum24_cast = sext i33 %bias_V14_sum7 to i64
  %DATA_BIAS_addr_24 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum24_cast
  %DATA_BIAS_load_24_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_24, i32 1)
  %DATA_BIAS_addr_24_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_24)
  %bias_48_V_addr_7 = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_426
  store i8 %DATA_BIAS_addr_24_re, i8* %bias_48_V_addr_7, align 1
  br label %.preheader870

; <label>:82                                      ; preds = %.preheader871
  call fastcc void @subconv_1x1_8_p([4800 x i8]* @buffer0_1_48_8x8_p_V, [2304 x i8]* @weights_48_48_1x1_V, [48 x i8]* @bias_48_V, [4800 x i8]* @buffer1_1_48_8x8_p_V)
  br label %.loopexit996

.loopexit996.loopexit:                            ; preds = %.preheader869
  br label %.loopexit996

.loopexit996:                                     ; preds = %.loopexit996.loopexit, %82
  %co72 = phi i6 [ 0, %82 ], [ %co_73, %.loopexit996.loopexit ]
  %exitcond115 = icmp eq i6 %co72, -16
  %empty_457 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_73 = add i6 %co72, 1
  br i1 %exitcond115, label %84, label %.preheader869.preheader

.preheader869.preheader:                          ; preds = %.loopexit996
  %tmp_1106 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co72, i3 0)
  %p_shl407_cast = zext i9 %tmp_1106 to i10
  %tmp_1107 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co72, i1 false)
  %p_shl408_cast = zext i7 %tmp_1107 to i10
  %tmp_1108 = add i10 %p_shl408_cast, %p_shl407_cast
  br label %.preheader869

.preheader869.loopexit:                           ; preds = %.preheader868
  br label %.preheader869

.preheader869:                                    ; preds = %.preheader869.loopexit, %.preheader869.preheader
  %h52 = phi i4 [ 0, %.preheader869.preheader ], [ %h_53, %.preheader869.loopexit ]
  %exitcond119 = icmp eq i4 %h52, -8
  %empty_458 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %h_53 = add i4 %h52, 1
  br i1 %exitcond119, label %.loopexit996.loopexit, label %.preheader868.preheader

.preheader868.preheader:                          ; preds = %.preheader869
  %tmp_434_cast = zext i4 %h_53 to i10
  %tmp_1125 = add i10 %tmp_434_cast, %tmp_1108
  %tmp_1126 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1125, i3 0)
  %p_shl409_cast = zext i13 %tmp_1126 to i15
  %tmp_1127 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1125, i1 false)
  %p_shl410_cast = zext i11 %tmp_1127 to i15
  %tmp_1128 = add i15 %p_shl409_cast, %p_shl410_cast
  br label %.preheader868

.preheader868:                                    ; preds = %83, %.preheader868.preheader
  %w51 = phi i4 [ %w_52, %83 ], [ 0, %.preheader868.preheader ]
  %exitcond122 = icmp eq i4 %w51, -8
  %empty_459 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %w_52 = add i4 %w51, 1
  br i1 %exitcond122, label %.preheader869.loopexit, label %83

; <label>:83                                      ; preds = %.preheader868
  %tmp_437_cast = zext i4 %w_52 to i15
  %tmp_1138 = add i15 %tmp_1128, %tmp_437_cast
  %tmp_1387_cast = zext i15 %tmp_1138 to i64
  %downsampleunit1_outp_2 = getelementptr [9600 x i8]* @downsampleunit1_outp, i64 0, i64 %tmp_1387_cast
  %buffer0_1_48_8x8_p_V_1 = getelementptr [4800 x i8]* @buffer0_1_48_8x8_p_V, i64 0, i64 %tmp_1387_cast
  %downsampleunit1_outp_3 = load i8* %downsampleunit1_outp_2, align 1
  store i8 %downsampleunit1_outp_3, i8* %buffer0_1_48_8x8_p_V_1, align 1
  br label %.preheader868

; <label>:84                                      ; preds = %.loopexit996
  call fastcc void @shuffle_48_p([4800 x i8]* @buffer0_1_48_8x8_p_V, [9600 x i8]* @shuffleunit1_0_outpu)
  br label %.loopexit995

.loopexit995.loopexit:                            ; preds = %.preheader867
  br label %.loopexit995

.loopexit995:                                     ; preds = %.loopexit995.loopexit, %84
  %co74 = phi i6 [ 0, %84 ], [ %co_75, %.loopexit995.loopexit ]
  %co74_cast = zext i6 %co74 to i7
  %exitcond118 = icmp eq i6 %co74, -16
  %empty_460 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_75 = add i6 %co74, 1
  br i1 %exitcond118, label %.preheader865.preheader, label %.preheader867.preheader

.preheader865.preheader:                          ; preds = %.loopexit995
  br label %.preheader865

.preheader867.preheader:                          ; preds = %.loopexit995
  %tmp_1119 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co74, i3 0)
  %p_shl413_cast = zext i9 %tmp_1119 to i10
  %tmp_1120 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co74, i1 false)
  %p_shl414_cast = zext i7 %tmp_1120 to i10
  %tmp_1121 = add i10 %p_shl414_cast, %p_shl413_cast
  %tmp_433 = add i7 %co74_cast, 48
  %tmp_1122 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_433, i3 0)
  %p_shl411_cast = zext i10 %tmp_1122 to i11
  %tmp_1123 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp_433, i1 false)
  %p_shl412_cast = zext i8 %tmp_1123 to i11
  %tmp_1124 = add i11 %p_shl412_cast, %p_shl411_cast
  br label %.preheader867

.preheader867.loopexit:                           ; preds = %.preheader866
  br label %.preheader867

.preheader867:                                    ; preds = %.preheader867.loopexit, %.preheader867.preheader
  %h54 = phi i4 [ 0, %.preheader867.preheader ], [ %h_55, %.preheader867.loopexit ]
  %exitcond121 = icmp eq i4 %h54, -8
  %empty_461 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %h_55 = add i4 %h54, 1
  br i1 %exitcond121, label %.loopexit995.loopexit, label %.preheader866.preheader

.preheader866.preheader:                          ; preds = %.preheader867
  %tmp_436_cast1 = zext i4 %h_55 to i10
  %tmp_436_cast = zext i4 %h_55 to i11
  %tmp_1130 = add i11 %tmp_436_cast, %tmp_1124
  %tmp_1131 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1130, i3 0)
  %p_shl417_cast = zext i14 %tmp_1131 to i15
  %tmp_1132 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_1130, i1 false)
  %p_shl418_cast = zext i12 %tmp_1132 to i15
  %tmp_1133 = add i15 %p_shl417_cast, %p_shl418_cast
  %tmp_1134 = add i10 %tmp_436_cast1, %tmp_1121
  %tmp_1135 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1134, i3 0)
  %p_shl415_cast = zext i13 %tmp_1135 to i14
  %tmp_1136 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1134, i1 false)
  %p_shl416_cast = zext i11 %tmp_1136 to i14
  %tmp_1137 = add i14 %p_shl415_cast, %p_shl416_cast
  br label %.preheader866

.preheader866:                                    ; preds = %85, %.preheader866.preheader
  %w53 = phi i4 [ %w_54, %85 ], [ 0, %.preheader866.preheader ]
  %exitcond125 = icmp eq i4 %w53, -8
  %empty_462 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %w_54 = add i4 %w53, 1
  br i1 %exitcond125, label %.preheader867.loopexit, label %85

; <label>:85                                      ; preds = %.preheader866
  %tmp_441_cast1 = zext i4 %w_54 to i14
  %tmp_441_cast = zext i4 %w_54 to i15
  %tmp_1139 = add i15 %tmp_1133, %tmp_441_cast
  %tmp_1388_cast = zext i15 %tmp_1139 to i64
  %shuffleunit1_0_outpu = getelementptr [9600 x i8]* @shuffleunit1_0_outpu, i64 0, i64 %tmp_1388_cast
  %tmp_1140 = add i14 %tmp_1137, %tmp_441_cast1
  %tmp_1389_cast = zext i14 %tmp_1140 to i64
  %buffer0_1_48_8x8_p_V_2 = getelementptr [4800 x i8]* @buffer0_1_48_8x8_p_V, i64 0, i64 %tmp_1389_cast
  %shuffleunit1_0_outpu_1 = load i8* %shuffleunit1_0_outpu, align 1
  store i8 %shuffleunit1_0_outpu_1, i8* %buffer0_1_48_8x8_p_V_2, align 1
  br label %.preheader866

.preheader865.loopexit:                           ; preds = %.preheader864
  br label %.preheader865

.preheader865:                                    ; preds = %.preheader865.preheader, %.preheader865.loopexit
  %co76 = phi i5 [ %co_77, %.preheader865.loopexit ], [ 0, %.preheader865.preheader ]
  %co76_cast = zext i5 %co76 to i10
  %exitcond120 = icmp eq i5 %co76, -8
  %empty_463 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_77 = add i5 %co76, 1
  br i1 %exitcond120, label %.preheader862.preheader, label %.preheader864.preheader

.preheader862.preheader:                          ; preds = %.preheader865
  br label %.preheader862

.preheader864.preheader:                          ; preds = %.preheader865
  %tmp_1129 = trunc i5 %co76 to i1
  %p_shl52 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1129, i5 0)
  %p_shl52_cast = zext i6 %p_shl52 to i7
  %p_shl53 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1129, i3 0)
  %p_shl53_cast = zext i4 %p_shl53 to i7
  %tmp_435 = sub i7 %p_shl52_cast, %p_shl53_cast
  %p_lshr_f5_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co76, i32 1, i32 4)
  %tmp_613_cast = zext i4 %p_lshr_f5_cast to i7
  br label %.preheader864

.preheader864.loopexit:                           ; preds = %.preheader863
  br label %.preheader864

.preheader864:                                    ; preds = %.preheader864.loopexit, %.preheader864.preheader
  %ci37 = phi i5 [ 0, %.preheader864.preheader ], [ %ci_38, %.preheader864.loopexit ]
  %ci37_cast = zext i5 %ci37 to i7
  %exitcond124 = icmp eq i5 %ci37, -8
  %empty_464 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_38 = add i5 %ci37, 1
  br i1 %exitcond124, label %.preheader865.loopexit, label %.preheader863.preheader

.preheader863.preheader:                          ; preds = %.preheader864
  %tmp_438 = add i7 %tmp_435, %ci37_cast
  %tmp_439_cast = sext i7 %tmp_438 to i13
  %tmp_440_cast = zext i5 %ci37 to i17
  br label %.preheader863

.preheader863:                                    ; preds = %86, %.preheader863.preheader
  %i58 = phi i3 [ %i_59, %86 ], [ 0, %.preheader863.preheader ]
  %exitcond128 = icmp eq i3 %i58, -4
  %empty_465 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %i_59 = add i3 %i58, 1
  br i1 %exitcond128, label %.preheader864.loopexit, label %86

; <label>:86                                      ; preds = %.preheader863
  %tmp_1142 = trunc i3 %i58 to i2
  %p_shl56 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1142, i4 0)
  %p_shl56_cast = zext i6 %p_shl56 to i7
  %p_shl57 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1142, i2 0)
  %p_shl57_cast = zext i4 %p_shl57 to i7
  %tmp_447 = sub i7 %p_shl56_cast, %p_shl57_cast
  %tmp_448 = add i7 %tmp_447, %tmp_613_cast
  %tmp_1143 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_448, i6 0)
  %tmp_1144 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_448, i4 0)
  %p_shl422_cast = sext i11 %tmp_1144 to i13
  %tmp_1145 = sub i13 %tmp_1143, %p_shl422_cast
  %tmp_1146 = add i13 %tmp_439_cast, %tmp_1145
  %tmp_1399_cast = sext i13 %tmp_1146 to i64
  %weights_48_48_1x1_V_5 = getelementptr [2304 x i8]* @weights_48_48_1x1_V, i64 0, i64 %tmp_1399_cast
  %p_shl58 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1142, i5 0)
  %p_shl58_cast = zext i7 %p_shl58 to i8
  %p_shl59 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1142, i3 0)
  %p_shl59_cast = zext i5 %p_shl59 to i8
  %tmp_449 = sub i8 %p_shl58_cast, %p_shl59_cast
  %tmp_630_cast = sext i8 %tmp_449 to i10
  %tmp17 = add i10 -328, %tmp_630_cast
  %tmp_450 = add i10 %tmp17, %co76_cast
  %tmp_1147 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_450, i5 0)
  %p_shl419_cast = zext i15 %tmp_1147 to i16
  %tmp_1148 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_450, i3 0)
  %p_shl420_cast = zext i13 %tmp_1148 to i16
  %tmp_1149 = sub i16 %p_shl419_cast, %p_shl420_cast
  %tmp_1404_cast = sext i16 %tmp_1149 to i17
  %tmp_1150 = add i17 %tmp_440_cast, %tmp_1404_cast
  %tmp_1405_cast = sext i17 %tmp_1150 to i33
  %shuffle_conv_1x1_V8_4 = add i33 %tmp_1405_cast, %tmp_490_cast
  %shuffle_conv_1x1_V8_33 = sext i33 %shuffle_conv_1x1_V8_4 to i64
  %p3X3_1X1_WEIGHTS_addr_22 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_1x1_V8_33
  %p3X3_1X1_WEIGHTS_load_8 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_22, i32 1)
  %p3X3_1X1_WEIGHTS_addr_79 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_22)
  store i8 %p3X3_1X1_WEIGHTS_addr_79, i8* %weights_48_48_1x1_V_5, align 1
  br label %.preheader863

.preheader862.loopexit:                           ; preds = %.preheader861
  br label %.preheader862

.preheader862:                                    ; preds = %.preheader862.preheader, %.preheader862.loopexit
  %i56 = phi i5 [ %i_57, %.preheader862.loopexit ], [ 0, %.preheader862.preheader ]
  %i57_cast = zext i5 %i56 to i10
  %i57_cast1 = zext i5 %i56 to i7
  %exitcond123 = icmp eq i5 %i56, -8
  %empty_466 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_57 = add i5 %i56, 1
  br i1 %exitcond123, label %88, label %.preheader861.preheader

.preheader861.preheader:                          ; preds = %.preheader862
  br label %.preheader861

.preheader861:                                    ; preds = %.preheader861.preheader, %87
  %k9 = phi i2 [ %k_9, %87 ], [ 0, %.preheader861.preheader ]
  %exitcond127 = icmp eq i2 %k9, -2
  %empty_467 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_9 = add i2 %k9, 1
  br i1 %exitcond127, label %.preheader862.loopexit, label %87

; <label>:87                                      ; preds = %.preheader861
  %tmp_1141 = trunc i2 %k9 to i1
  %p_shl54 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1141, i5 0)
  %p_shl54_cast = zext i6 %p_shl54 to i7
  %p_shl55 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1141, i3 0)
  %p_shl55_cast = zext i4 %p_shl55 to i7
  %tmp_442 = sub i7 %p_shl54_cast, %p_shl55_cast
  %tmp_616_cast = sext i7 %tmp_442 to i10
  %tmp_443 = add i7 %i57_cast1, %tmp_442
  %tmp_617_cast = sext i7 %tmp_443 to i32
  %tmp_444 = zext i32 %tmp_617_cast to i64
  %tmp18 = add i10 -280, %tmp_616_cast
  %tmp_445 = add i10 %tmp18, %i57_cast
  %tmp_446_cast1 = zext i10 %tmp_445 to i33
  %bias_V14_sum8 = add i33 %tmp_482_cast, %tmp_446_cast1
  %bias_V14_sum25_cast = sext i33 %bias_V14_sum8 to i64
  %DATA_BIAS_addr_25 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum25_cast
  %DATA_BIAS_load_25_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_25, i32 1)
  %DATA_BIAS_addr_25_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_25)
  %bias_48_V_addr_8 = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_444
  store i8 %DATA_BIAS_addr_25_re, i8* %bias_48_V_addr_8, align 1
  br label %.preheader861

; <label>:88                                      ; preds = %.preheader862
  call fastcc void @subconv_1x1_8_p([4800 x i8]* @buffer0_1_48_8x8_p_V, [2304 x i8]* @weights_48_48_1x1_V, [48 x i8]* @bias_48_V, [4800 x i8]* @buffer1_1_48_8x8_p_V)
  br label %.loopexit994

.loopexit994.loopexit:                            ; preds = %.preheader860
  br label %.loopexit994

.loopexit994:                                     ; preds = %.loopexit994.loopexit, %88
  %co78 = phi i5 [ 0, %88 ], [ %co_79, %.loopexit994.loopexit ]
  %co79_cast = zext i5 %co78 to i9
  %co79_cast1 = zext i5 %co78 to i7
  %exitcond126 = icmp eq i5 %co78, -8
  %empty_468 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_79 = add i5 %co78, 1
  br i1 %exitcond126, label %.preheader857.preheader, label %.preheader860.preheader

.preheader860.preheader:                          ; preds = %.loopexit994
  br label %.preheader860

.preheader857.preheader:                          ; preds = %.loopexit994
  br label %.preheader857

.preheader860.loopexit:                           ; preds = %.preheader859
  br label %.preheader860

.preheader860:                                    ; preds = %.preheader860.preheader, %.preheader860.loopexit
  %w55 = phi i2 [ %w_56, %.preheader860.loopexit ], [ 0, %.preheader860.preheader ]
  %exitcond130 = icmp eq i2 %w55, -1
  %empty_469 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %w_56 = add i2 %w55, 1
  br i1 %exitcond130, label %.loopexit994.loopexit, label %.preheader859.preheader

.preheader859.preheader:                          ; preds = %.preheader860
  %tmp_451_cast1 = zext i2 %w55 to i13
  %tmp_451_cast = zext i2 %w55 to i36
  br label %.preheader859

.preheader859.loopexit:                           ; preds = %.preheader858
  br label %.preheader859

.preheader859:                                    ; preds = %.preheader859.loopexit, %.preheader859.preheader
  %h56 = phi i2 [ 0, %.preheader859.preheader ], [ %h_57, %.preheader859.loopexit ]
  %exitcond133 = icmp eq i2 %h56, -1
  %empty_470 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %h_57 = add i2 %h56, 1
  br i1 %exitcond133, label %.preheader860.loopexit, label %.preheader858.preheader

.preheader858.preheader:                          ; preds = %.preheader859
  %tmp_458 = zext i2 %h56 to i64
  %tmp_458_cast = zext i2 %h56 to i10
  br label %.preheader858

.preheader858:                                    ; preds = %89, %.preheader858.preheader
  %i64 = phi i2 [ %i_65, %89 ], [ 0, %.preheader858.preheader ]
  %exitcond136 = icmp eq i2 %i64, -2
  %empty_471 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %i_65 = add i2 %i64, 1
  br i1 %exitcond136, label %.preheader859.loopexit, label %89

; <label>:89                                      ; preds = %.preheader858
  %tmp_1153 = trunc i2 %i64 to i1
  %p_shl66 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1153, i5 0)
  %p_shl66_cast = zext i6 %p_shl66 to i7
  %p_shl67 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1153, i3 0)
  %p_shl67_cast = zext i4 %p_shl67 to i7
  %tmp_462 = sub i7 %p_shl66_cast, %p_shl67_cast
  %tmp_653_cast = sext i7 %tmp_462 to i9
  %tmp_463 = add i7 %tmp_462, %co79_cast1
  %tmp_654_cast = sext i7 %tmp_463 to i32
  %tmp_464_cast1 = zext i32 %tmp_654_cast to i35
  %tmp_1154 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_463, i2 0)
  %tmp_1155 = sext i9 %tmp_1154 to i34
  %p_shl426_cast = zext i34 %tmp_1155 to i35
  %tmp_1156 = sub i35 %p_shl426_cast, %tmp_464_cast1
  %tmp_1414_cast = sext i35 %tmp_1156 to i36
  %tmp_1157 = add i36 %tmp_1414_cast, %tmp_451_cast
  %tmp_1158 = trunc i36 %tmp_1157 to i10
  %tmp_1159 = trunc i36 %tmp_1157 to i8
  %p_shl425_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1159, i2 0)
  %tmp_1160 = sub i10 %p_shl425_cast, %tmp_1158
  %tmp_1161 = add i10 %tmp_1160, %tmp_458_cast
  %tmp_1418_cast = zext i10 %tmp_1161 to i64
  %weights_48_1_3x3_V_a_3 = getelementptr [432 x i8]* @weights_48_1_3x3_V, i64 0, i64 %tmp_1418_cast
  %tmp19 = add i9 -248, %tmp_653_cast
  %tmp_465 = add i9 %co79_cast, %tmp19
  %tmp_466_cast1 = zext i9 %tmp_465 to i12
  %tmp_1162 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_465, i2 0)
  %p_shl424_cast = zext i11 %tmp_1162 to i12
  %tmp_1163 = sub i12 %p_shl424_cast, %tmp_466_cast1
  %tmp_1420_cast = sext i12 %tmp_1163 to i13
  %tmp_1164 = add i13 %tmp_1420_cast, %tmp_451_cast1
  %tmp_1421_cast = sext i13 %tmp_1164 to i64
  %tmp_1165 = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1164, i2 0)
  %p_shl231 = sext i15 %tmp_1165 to i64
  %tmp_1166 = sub i64 %p_shl231, %tmp_1421_cast
  %tmp_1167 = add i64 %tmp_1166, %tmp_458
  %shuffle_conv_3x3_V6_8 = add i64 %tmp_373, %tmp_1167
  %p3X3_1X1_WEIGHTS_addr_23 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_3x3_V6_8
  %p3X3_1X1_WEIGHTS_load_9 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_23, i32 1)
  %p3X3_1X1_WEIGHTS_addr_80 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_23)
  store i8 %p3X3_1X1_WEIGHTS_addr_80, i8* %weights_48_1_3x3_V_a_3, align 1
  br label %.preheader858

.preheader857.loopexit:                           ; preds = %.preheader856
  br label %.preheader857

.preheader857:                                    ; preds = %.preheader857.preheader, %.preheader857.loopexit
  %i60 = phi i5 [ %i_61, %.preheader857.loopexit ], [ 0, %.preheader857.preheader ]
  %i61_cast508_cast = zext i5 %i60 to i9
  %i61_cast = zext i5 %i60 to i7
  %exitcond129 = icmp eq i5 %i60, -8
  %empty_472 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_61 = add i5 %i60, 1
  br i1 %exitcond129, label %91, label %.preheader856.preheader

.preheader856.preheader:                          ; preds = %.preheader857
  br label %.preheader856

.preheader856:                                    ; preds = %.preheader856.preheader, %90
  %k10 = phi i2 [ %k_11, %90 ], [ 0, %.preheader856.preheader ]
  %exitcond132 = icmp eq i2 %k10, -2
  %empty_473 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_11 = add i2 %k10, 1
  br i1 %exitcond132, label %.preheader857.loopexit, label %90

; <label>:90                                      ; preds = %.preheader856
  %tmp_1152 = trunc i2 %k10 to i1
  %p_shl60 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1152, i5 0)
  %p_shl60_cast = zext i6 %p_shl60 to i7
  %p_shl61 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1152, i3 0)
  %p_shl61_cast = zext i4 %p_shl61 to i7
  %tmp_453 = sub i7 %p_shl60_cast, %p_shl61_cast
  %tmp_634_cast_cast = sext i7 %tmp_453 to i9
  %tmp_454 = add i7 %i61_cast, %tmp_453
  %tmp_635_cast = sext i7 %tmp_454 to i32
  %tmp_455 = zext i32 %tmp_635_cast to i64
  %tmp20 = add i9 -232, %tmp_634_cast_cast
  %tmp_456 = add i9 %tmp20, %i61_cast508_cast
  %tmp_638_cast = sext i9 %tmp_456 to i10
  %tmp_457_cast = zext i10 %tmp_638_cast to i33
  %bias_V14_sum9 = add i33 %tmp_482_cast, %tmp_457_cast
  %bias_V14_sum26_cast = sext i33 %bias_V14_sum9 to i64
  %DATA_BIAS_addr_26 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum26_cast
  %DATA_BIAS_load_26_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_26, i32 1)
  %DATA_BIAS_addr_26_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_26)
  %bias_48_V_addr_9 = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_455
  store i8 %DATA_BIAS_addr_26_re, i8* %bias_48_V_addr_9, align 1
  br label %.preheader856

; <label>:91                                      ; preds = %.preheader857
  call fastcc void @subconv_3x3_8_no_rel([4800 x i8]* @buffer1_1_48_8x8_p_V, [432 x i8]* @weights_48_1_3x3_V, [48 x i8]* @bias_48_V, [4800 x i8]* @buffer0_1_48_8x8_p_V)
  br label %.loopexit993

.loopexit993.loopexit:                            ; preds = %.preheader855
  br label %.loopexit993

.loopexit993:                                     ; preds = %.loopexit993.loopexit, %91
  %co80 = phi i5 [ 0, %91 ], [ %co_81, %.loopexit993.loopexit ]
  %co81_cast = zext i5 %co80 to i10
  %exitcond131 = icmp eq i5 %co80, -8
  %empty_474 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_81 = add i5 %co80, 1
  br i1 %exitcond131, label %.preheader853.preheader, label %.preheader855.preheader

.preheader853.preheader:                          ; preds = %.loopexit993
  br label %.preheader853

.preheader855.preheader:                          ; preds = %.loopexit993
  %tmp_1151 = trunc i5 %co80 to i1
  %p_shl62 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1151, i5 0)
  %p_shl62_cast = zext i6 %p_shl62 to i7
  %p_shl63 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1151, i3 0)
  %p_shl63_cast = zext i4 %p_shl63 to i7
  %tmp_452 = sub i7 %p_shl62_cast, %p_shl63_cast
  %p_lshr_f6_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co80, i32 1, i32 4)
  %tmp_642_cast = zext i4 %p_lshr_f6_cast to i7
  br label %.preheader855

.preheader855.loopexit:                           ; preds = %.preheader854
  br label %.preheader855

.preheader855:                                    ; preds = %.preheader855.loopexit, %.preheader855.preheader
  %ci39 = phi i5 [ 0, %.preheader855.preheader ], [ %ci_40, %.preheader855.loopexit ]
  %ci39_cast = zext i5 %ci39 to i7
  %exitcond135 = icmp eq i5 %ci39, -8
  %empty_475 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_40 = add i5 %ci39, 1
  br i1 %exitcond135, label %.loopexit993.loopexit, label %.preheader854.preheader

.preheader854.preheader:                          ; preds = %.preheader855
  %tmp_459 = add i7 %tmp_452, %ci39_cast
  %tmp_460_cast = sext i7 %tmp_459 to i13
  %tmp_461_cast = zext i5 %ci39 to i17
  br label %.preheader854

.preheader854:                                    ; preds = %92, %.preheader854.preheader
  %i66 = phi i3 [ %i_67, %92 ], [ 0, %.preheader854.preheader ]
  %exitcond139 = icmp eq i3 %i66, -4
  %empty_476 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %i_67 = add i3 %i66, 1
  br i1 %exitcond139, label %.preheader855.loopexit, label %92

; <label>:92                                      ; preds = %.preheader854
  %tmp_1172 = trunc i3 %i66 to i2
  %p_shl68 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1172, i4 0)
  %p_shl68_cast = zext i6 %p_shl68 to i7
  %p_shl69 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1172, i2 0)
  %p_shl69_cast = zext i4 %p_shl69 to i7
  %tmp_472 = sub i7 %p_shl68_cast, %p_shl69_cast
  %tmp_473 = add i7 %tmp_472, %tmp_642_cast
  %tmp_1173 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_473, i6 0)
  %tmp_1174 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_473, i4 0)
  %p_shl430_cast = sext i11 %tmp_1174 to i13
  %tmp_1175 = sub i13 %tmp_1173, %p_shl430_cast
  %tmp_1176 = add i13 %tmp_460_cast, %tmp_1175
  %tmp_1437_cast = sext i13 %tmp_1176 to i64
  %weights_48_48_1x1_V_6 = getelementptr [2304 x i8]* @weights_48_48_1x1_V, i64 0, i64 %tmp_1437_cast
  %p_shl70 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1172, i5 0)
  %p_shl70_cast = zext i7 %p_shl70 to i8
  %p_shl71 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1172, i3 0)
  %p_shl71_cast = zext i5 %p_shl71 to i8
  %tmp_474 = sub i8 %p_shl70_cast, %p_shl71_cast
  %tmp_663_cast = sext i8 %tmp_474 to i10
  %tmp21 = add i10 -232, %tmp_663_cast
  %tmp_475 = add i10 %tmp21, %co81_cast
  %tmp_1177 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_475, i5 0)
  %p_shl427_cast = zext i15 %tmp_1177 to i16
  %tmp_1178 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_475, i3 0)
  %p_shl428_cast = zext i13 %tmp_1178 to i16
  %tmp_1179 = sub i16 %p_shl427_cast, %p_shl428_cast
  %tmp_1442_cast = sext i16 %tmp_1179 to i17
  %tmp_1180 = add i17 %tmp_461_cast, %tmp_1442_cast
  %tmp_1443_cast = sext i17 %tmp_1180 to i33
  %shuffle_conv_1x1_V8_5 = add i33 %tmp_1443_cast, %tmp_490_cast
  %shuffle_conv_1x1_V8_34 = sext i33 %shuffle_conv_1x1_V8_5 to i64
  %p3X3_1X1_WEIGHTS_addr_24 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_1x1_V8_34
  %p3X3_1X1_WEIGHTS_load_10 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_24, i32 1)
  %p3X3_1X1_WEIGHTS_addr_81 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_24)
  store i8 %p3X3_1X1_WEIGHTS_addr_81, i8* %weights_48_48_1x1_V_6, align 1
  br label %.preheader854

.preheader853.loopexit:                           ; preds = %.preheader852
  br label %.preheader853

.preheader853:                                    ; preds = %.preheader853.preheader, %.preheader853.loopexit
  %i62 = phi i5 [ %i_63, %.preheader853.loopexit ], [ 0, %.preheader853.preheader ]
  %i63_cast495_cast = zext i5 %i62 to i9
  %i63_cast = zext i5 %i62 to i7
  %exitcond134 = icmp eq i5 %i62, -8
  %empty_477 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_63 = add i5 %i62, 1
  br i1 %exitcond134, label %94, label %.preheader852.preheader

.preheader852.preheader:                          ; preds = %.preheader853
  br label %.preheader852

.preheader852:                                    ; preds = %.preheader852.preheader, %93
  %k12 = phi i2 [ %k_13, %93 ], [ 0, %.preheader852.preheader ]
  %exitcond138 = icmp eq i2 %k12, -2
  %empty_478 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_13 = add i2 %k12, 1
  br i1 %exitcond138, label %.preheader853.loopexit, label %93

; <label>:93                                      ; preds = %.preheader852
  %tmp_1171 = trunc i2 %k12 to i1
  %p_shl64 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1171, i5 0)
  %p_shl64_cast = zext i6 %p_shl64 to i7
  %p_shl65 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1171, i3 0)
  %p_shl65_cast = zext i4 %p_shl65 to i7
  %tmp_467 = sub i7 %p_shl64_cast, %p_shl65_cast
  %tmp_644_cast_cast = sext i7 %tmp_467 to i9
  %tmp_468 = add i7 %i63_cast, %tmp_467
  %tmp_645_cast = sext i7 %tmp_468 to i32
  %tmp_469 = zext i32 %tmp_645_cast to i64
  %tmp22 = add i9 -184, %tmp_644_cast_cast
  %tmp_470 = add i9 %tmp22, %i63_cast495_cast
  %tmp_648_cast = sext i9 %tmp_470 to i10
  %tmp_471_cast = zext i10 %tmp_648_cast to i33
  %bias_V14_sum10 = add i33 %tmp_482_cast, %tmp_471_cast
  %bias_V14_sum27_cast = sext i33 %bias_V14_sum10 to i64
  %DATA_BIAS_addr_27 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum27_cast
  %DATA_BIAS_load_27_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_27, i32 1)
  %DATA_BIAS_addr_27_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_27)
  %bias_48_V_addr_10 = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_469
  store i8 %DATA_BIAS_addr_27_re, i8* %bias_48_V_addr_10, align 1
  br label %.preheader852

; <label>:94                                      ; preds = %.preheader853
  call fastcc void @subconv_1x1_8_p([4800 x i8]* @buffer0_1_48_8x8_p_V, [2304 x i8]* @weights_48_48_1x1_V, [48 x i8]* @bias_48_V, [4800 x i8]* @buffer1_1_48_8x8_p_V)
  br label %.loopexit992

.loopexit992.loopexit:                            ; preds = %.preheader851
  br label %.loopexit992

.loopexit992:                                     ; preds = %.loopexit992.loopexit, %94
  %co82 = phi i6 [ 0, %94 ], [ %co_83, %.loopexit992.loopexit ]
  %exitcond137 = icmp eq i6 %co82, -16
  %empty_479 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_83 = add i6 %co82, 1
  br i1 %exitcond137, label %96, label %.preheader851.preheader

.preheader851.preheader:                          ; preds = %.loopexit992
  %tmp_1168 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co82, i3 0)
  %p_shl431_cast = zext i9 %tmp_1168 to i10
  %tmp_1169 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co82, i1 false)
  %p_shl432_cast = zext i7 %tmp_1169 to i10
  %tmp_1170 = add i10 %p_shl432_cast, %p_shl431_cast
  br label %.preheader851

.preheader851.loopexit:                           ; preds = %.preheader850
  br label %.preheader851

.preheader851:                                    ; preds = %.preheader851.loopexit, %.preheader851.preheader
  %h58 = phi i4 [ 0, %.preheader851.preheader ], [ %h_59, %.preheader851.loopexit ]
  %exitcond141 = icmp eq i4 %h58, -8
  %empty_480 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %h_59 = add i4 %h58, 1
  br i1 %exitcond141, label %.loopexit992.loopexit, label %.preheader850.preheader

.preheader850.preheader:                          ; preds = %.preheader851
  %tmp_477_cast = zext i4 %h_59 to i10
  %tmp_1187 = add i10 %tmp_477_cast, %tmp_1170
  %tmp_1188 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1187, i3 0)
  %p_shl433_cast = zext i13 %tmp_1188 to i15
  %tmp_1189 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1187, i1 false)
  %p_shl434_cast = zext i11 %tmp_1189 to i15
  %tmp_1190 = add i15 %p_shl433_cast, %p_shl434_cast
  br label %.preheader850

.preheader850:                                    ; preds = %95, %.preheader850.preheader
  %w57 = phi i4 [ %w_58, %95 ], [ 0, %.preheader850.preheader ]
  %exitcond144 = icmp eq i4 %w57, -8
  %empty_481 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %w_58 = add i4 %w57, 1
  br i1 %exitcond144, label %.preheader851.loopexit, label %95

; <label>:95                                      ; preds = %.preheader850
  %tmp_480_cast1 = zext i4 %w_58 to i15
  %tmp_1200 = add i15 %tmp_1190, %tmp_480_cast1
  %tmp_1464_cast = zext i15 %tmp_1200 to i64
  %shuffleunit1_0_outpu_2 = getelementptr [9600 x i8]* @shuffleunit1_0_outpu, i64 0, i64 %tmp_1464_cast
  %buffer0_1_48_8x8_p_V_3 = getelementptr [4800 x i8]* @buffer0_1_48_8x8_p_V, i64 0, i64 %tmp_1464_cast
  %shuffleunit1_0_outpu_3 = load i8* %shuffleunit1_0_outpu_2, align 1
  store i8 %shuffleunit1_0_outpu_3, i8* %buffer0_1_48_8x8_p_V_3, align 1
  br label %.preheader850

; <label>:96                                      ; preds = %.loopexit992
  call fastcc void @shuffle_48_p([4800 x i8]* @buffer0_1_48_8x8_p_V, [9600 x i8]* @shuffleunit1_1_outpu)
  br label %.loopexit991

.loopexit991.loopexit:                            ; preds = %.preheader849
  br label %.loopexit991

.loopexit991:                                     ; preds = %.loopexit991.loopexit, %96
  %co84 = phi i6 [ 0, %96 ], [ %co_85, %.loopexit991.loopexit ]
  %co84_cast = zext i6 %co84 to i7
  %exitcond140 = icmp eq i6 %co84, -16
  %empty_482 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_85 = add i6 %co84, 1
  br i1 %exitcond140, label %.preheader847.preheader, label %.preheader849.preheader

.preheader847.preheader:                          ; preds = %.loopexit991
  br label %.preheader847

.preheader849.preheader:                          ; preds = %.loopexit991
  %tmp_1181 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co84, i3 0)
  %p_shl437_cast = zext i9 %tmp_1181 to i10
  %tmp_1182 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co84, i1 false)
  %p_shl438_cast = zext i7 %tmp_1182 to i10
  %tmp_1183 = add i10 %p_shl438_cast, %p_shl437_cast
  %tmp_476 = add i7 %co84_cast, 48
  %tmp_1184 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_476, i3 0)
  %p_shl435_cast = zext i10 %tmp_1184 to i11
  %tmp_1185 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp_476, i1 false)
  %p_shl436_cast = zext i8 %tmp_1185 to i11
  %tmp_1186 = add i11 %p_shl436_cast, %p_shl435_cast
  br label %.preheader849

.preheader849.loopexit:                           ; preds = %.preheader848
  br label %.preheader849

.preheader849:                                    ; preds = %.preheader849.loopexit, %.preheader849.preheader
  %h60 = phi i4 [ 0, %.preheader849.preheader ], [ %h_61, %.preheader849.loopexit ]
  %exitcond143 = icmp eq i4 %h60, -8
  %empty_483 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %h_61 = add i4 %h60, 1
  br i1 %exitcond143, label %.loopexit991.loopexit, label %.preheader848.preheader

.preheader848.preheader:                          ; preds = %.preheader849
  %tmp_479_cast1 = zext i4 %h_61 to i11
  %tmp_479_cast = zext i4 %h_61 to i10
  %tmp_1192 = add i10 %tmp_479_cast, %tmp_1183
  %tmp_1193 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1192, i3 0)
  %p_shl441_cast = zext i13 %tmp_1193 to i14
  %tmp_1194 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1192, i1 false)
  %p_shl442_cast = zext i11 %tmp_1194 to i14
  %tmp_1195 = add i14 %p_shl441_cast, %p_shl442_cast
  %tmp_1196 = add i11 %tmp_479_cast1, %tmp_1186
  %tmp_1197 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1196, i3 0)
  %p_shl439_cast = zext i14 %tmp_1197 to i15
  %tmp_1198 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_1196, i1 false)
  %p_shl440_cast = zext i12 %tmp_1198 to i15
  %tmp_1199 = add i15 %p_shl439_cast, %p_shl440_cast
  br label %.preheader848

.preheader848:                                    ; preds = %97, %.preheader848.preheader
  %w59 = phi i4 [ %w_60, %97 ], [ 0, %.preheader848.preheader ]
  %exitcond147 = icmp eq i4 %w59, -8
  %empty_484 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %w_60 = add i4 %w59, 1
  br i1 %exitcond147, label %.preheader849.loopexit, label %97

; <label>:97                                      ; preds = %.preheader848
  %tmp_485_cast1 = zext i4 %w_60 to i15
  %tmp_485_cast2 = zext i4 %w_60 to i14
  %tmp_1201 = add i14 %tmp_1195, %tmp_485_cast2
  %tmp_1465_cast = zext i14 %tmp_1201 to i64
  %buffer0_1_48_8x8_p_V_4 = getelementptr [4800 x i8]* @buffer0_1_48_8x8_p_V, i64 0, i64 %tmp_1465_cast
  %tmp_1202 = add i15 %tmp_1199, %tmp_485_cast1
  %tmp_1466_cast = zext i15 %tmp_1202 to i64
  %shuffleunit1_1_outpu = getelementptr [9600 x i8]* @shuffleunit1_1_outpu, i64 0, i64 %tmp_1466_cast
  %shuffleunit1_1_outpu_1 = load i8* %shuffleunit1_1_outpu, align 1
  store i8 %shuffleunit1_1_outpu_1, i8* %buffer0_1_48_8x8_p_V_4, align 1
  br label %.preheader848

.preheader847.loopexit:                           ; preds = %.preheader846
  br label %.preheader847

.preheader847:                                    ; preds = %.preheader847.preheader, %.preheader847.loopexit
  %co86 = phi i5 [ %co_87, %.preheader847.loopexit ], [ 0, %.preheader847.preheader ]
  %co86_cast489_cast = zext i5 %co86 to i9
  %exitcond142 = icmp eq i5 %co86, -8
  %empty_485 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_87 = add i5 %co86, 1
  br i1 %exitcond142, label %.preheader844.preheader, label %.preheader846.preheader

.preheader844.preheader:                          ; preds = %.preheader847
  br label %.preheader844

.preheader846.preheader:                          ; preds = %.preheader847
  %tmp_1191 = trunc i5 %co86 to i1
  %p_shl72 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1191, i5 0)
  %p_shl72_cast = zext i6 %p_shl72 to i7
  %p_shl73 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1191, i3 0)
  %p_shl73_cast = zext i4 %p_shl73 to i7
  %tmp_478 = sub i7 %p_shl72_cast, %p_shl73_cast
  %p_lshr_f7_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co86, i32 1, i32 4)
  %tmp_673_cast = zext i4 %p_lshr_f7_cast to i7
  br label %.preheader846

.preheader846.loopexit:                           ; preds = %.preheader845
  br label %.preheader846

.preheader846:                                    ; preds = %.preheader846.loopexit, %.preheader846.preheader
  %ci41 = phi i5 [ 0, %.preheader846.preheader ], [ %ci_42, %.preheader846.loopexit ]
  %ci41_cast = zext i5 %ci41 to i7
  %exitcond146 = icmp eq i5 %ci41, -8
  %empty_486 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_42 = add i5 %ci41, 1
  br i1 %exitcond146, label %.preheader847.loopexit, label %.preheader845.preheader

.preheader845.preheader:                          ; preds = %.preheader846
  %tmp_481 = add i7 %tmp_478, %ci41_cast
  %tmp_483_cast = sext i7 %tmp_481 to i13
  %tmp_484_cast = zext i5 %ci41 to i17
  br label %.preheader845

.preheader845:                                    ; preds = %98, %.preheader845.preheader
  %i70 = phi i3 [ %i_71, %98 ], [ 0, %.preheader845.preheader ]
  %exitcond150 = icmp eq i3 %i70, -4
  %empty_487 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %i_71 = add i3 %i70, 1
  br i1 %exitcond150, label %.preheader846.loopexit, label %98

; <label>:98                                      ; preds = %.preheader845
  %tmp_1204 = trunc i3 %i70 to i2
  %p_shl76 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1204, i4 0)
  %p_shl76_cast = zext i6 %p_shl76 to i7
  %p_shl77 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1204, i2 0)
  %p_shl77_cast = zext i4 %p_shl77 to i7
  %tmp_492 = sub i7 %p_shl76_cast, %p_shl77_cast
  %tmp_495 = add i7 %tmp_492, %tmp_673_cast
  %tmp_1205 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_495, i6 0)
  %tmp_1206 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_495, i4 0)
  %p_shl446_cast = sext i11 %tmp_1206 to i13
  %tmp_1207 = sub i13 %tmp_1205, %p_shl446_cast
  %tmp_1208 = add i13 %tmp_483_cast, %tmp_1207
  %tmp_1476_cast = sext i13 %tmp_1208 to i64
  %weights_48_48_1x1_V_7 = getelementptr [2304 x i8]* @weights_48_48_1x1_V, i64 0, i64 %tmp_1476_cast
  %p_shl78 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1204, i5 0)
  %p_shl78_cast = zext i7 %p_shl78 to i8
  %p_shl79 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1204, i3 0)
  %p_shl79_cast = zext i5 %p_shl79 to i8
  %tmp_497 = sub i8 %p_shl78_cast, %p_shl79_cast
  %tmp_690_cast_cast = sext i8 %tmp_497 to i9
  %tmp23 = add i9 -136, %tmp_690_cast_cast
  %tmp_498 = add i9 %tmp23, %co86_cast489_cast
  %tmp_1209 = call i14 @_ssdm_op_BitConcatenate.i14.i9.i5(i9 %tmp_498, i5 0)
  %tmp_1210 = sext i14 %tmp_1209 to i15
  %p_shl443_cast = zext i15 %tmp_1210 to i16
  %tmp_1211 = call i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9 %tmp_498, i3 0)
  %tmp_1212 = sext i12 %tmp_1211 to i13
  %p_shl444_cast = zext i13 %tmp_1212 to i16
  %tmp_1213 = sub i16 %p_shl443_cast, %p_shl444_cast
  %tmp_1483_cast = sext i16 %tmp_1213 to i17
  %tmp_1214 = add i17 %tmp_484_cast, %tmp_1483_cast
  %tmp_1484_cast = sext i17 %tmp_1214 to i33
  %shuffle_conv_1x1_V8_6 = add i33 %tmp_1484_cast, %tmp_490_cast
  %shuffle_conv_1x1_V8_35 = sext i33 %shuffle_conv_1x1_V8_6 to i64
  %p3X3_1X1_WEIGHTS_addr_25 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_1x1_V8_35
  %p3X3_1X1_WEIGHTS_load_11 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_25, i32 1)
  %p3X3_1X1_WEIGHTS_addr_82 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_25)
  store i8 %p3X3_1X1_WEIGHTS_addr_82, i8* %weights_48_48_1x1_V_7, align 1
  br label %.preheader845

.preheader844.loopexit:                           ; preds = %.preheader843
  br label %.preheader844

.preheader844:                                    ; preds = %.preheader844.preheader, %.preheader844.loopexit
  %i68 = phi i5 [ %i_69, %.preheader844.loopexit ], [ 0, %.preheader844.preheader ]
  %i69_cast480_cast = zext i5 %i68 to i9
  %i69_cast = zext i5 %i68 to i7
  %exitcond145 = icmp eq i5 %i68, -8
  %empty_488 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_69 = add i5 %i68, 1
  br i1 %exitcond145, label %100, label %.preheader843.preheader

.preheader843.preheader:                          ; preds = %.preheader844
  br label %.preheader843

.preheader843:                                    ; preds = %.preheader843.preheader, %99
  %k14 = phi i2 [ %k_15, %99 ], [ 0, %.preheader843.preheader ]
  %exitcond149 = icmp eq i2 %k14, -2
  %empty_489 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_15 = add i2 %k14, 1
  br i1 %exitcond149, label %.preheader844.loopexit, label %99

; <label>:99                                      ; preds = %.preheader843
  %tmp_1203 = trunc i2 %k14 to i1
  %p_shl74 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1203, i5 0)
  %p_shl74_cast = zext i6 %p_shl74 to i7
  %p_shl75 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1203, i3 0)
  %p_shl75_cast = zext i4 %p_shl75 to i7
  %tmp_486 = sub i7 %p_shl74_cast, %p_shl75_cast
  %tmp_676_cast_cast = sext i7 %tmp_486 to i9
  %tmp_487 = add i7 %i69_cast, %tmp_486
  %tmp_677_cast = sext i7 %tmp_487 to i32
  %tmp_488 = zext i32 %tmp_677_cast to i64
  %tmp24 = add i9 -136, %tmp_676_cast_cast
  %tmp_489 = add i9 %tmp24, %i69_cast480_cast
  %tmp_680_cast = sext i9 %tmp_489 to i10
  %tmp_491_cast = zext i10 %tmp_680_cast to i33
  %bias_V14_sum11 = add i33 %tmp_482_cast, %tmp_491_cast
  %bias_V14_sum28_cast = sext i33 %bias_V14_sum11 to i64
  %DATA_BIAS_addr_28 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum28_cast
  %DATA_BIAS_load_28_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_28, i32 1)
  %DATA_BIAS_addr_28_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_28)
  %bias_48_V_addr_11 = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_488
  store i8 %DATA_BIAS_addr_28_re, i8* %bias_48_V_addr_11, align 1
  br label %.preheader843

; <label>:100                                     ; preds = %.preheader844
  call fastcc void @subconv_1x1_8_p([4800 x i8]* @buffer0_1_48_8x8_p_V, [2304 x i8]* @weights_48_48_1x1_V, [48 x i8]* @bias_48_V, [4800 x i8]* @buffer1_1_48_8x8_p_V)
  br label %.loopexit990

.loopexit990.loopexit:                            ; preds = %.preheader842
  br label %.loopexit990

.loopexit990:                                     ; preds = %.loopexit990.loopexit, %100
  %co88 = phi i5 [ 0, %100 ], [ %co_89, %.loopexit990.loopexit ]
  %co89_cast = zext i5 %co88 to i9
  %co89_cast1 = zext i5 %co88 to i7
  %exitcond148 = icmp eq i5 %co88, -8
  %empty_490 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_89 = add i5 %co88, 1
  br i1 %exitcond148, label %.preheader839.preheader, label %.preheader842.preheader

.preheader842.preheader:                          ; preds = %.loopexit990
  br label %.preheader842

.preheader839.preheader:                          ; preds = %.loopexit990
  br label %.preheader839

.preheader842.loopexit:                           ; preds = %.preheader841
  br label %.preheader842

.preheader842:                                    ; preds = %.preheader842.preheader, %.preheader842.loopexit
  %w61 = phi i2 [ %w_62, %.preheader842.loopexit ], [ 0, %.preheader842.preheader ]
  %exitcond152 = icmp eq i2 %w61, -1
  %empty_491 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %w_62 = add i2 %w61, 1
  br i1 %exitcond152, label %.loopexit990.loopexit, label %.preheader841.preheader

.preheader841.preheader:                          ; preds = %.preheader842
  %tmp_499_cast1 = zext i2 %w61 to i12
  %tmp_499_cast = zext i2 %w61 to i36
  br label %.preheader841

.preheader841.loopexit:                           ; preds = %.preheader840
  br label %.preheader841

.preheader841:                                    ; preds = %.preheader841.loopexit, %.preheader841.preheader
  %h62 = phi i2 [ 0, %.preheader841.preheader ], [ %h_63, %.preheader841.loopexit ]
  %exitcond155 = icmp eq i2 %h62, -1
  %empty_492 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %h_63 = add i2 %h62, 1
  br i1 %exitcond155, label %.preheader842.loopexit, label %.preheader840.preheader

.preheader840.preheader:                          ; preds = %.preheader841
  %tmp_506 = zext i2 %h62 to i64
  %tmp_506_cast = zext i2 %h62 to i10
  br label %.preheader840

.preheader840:                                    ; preds = %101, %.preheader840.preheader
  %i76 = phi i2 [ %i_77, %101 ], [ 0, %.preheader840.preheader ]
  %exitcond158 = icmp eq i2 %i76, -2
  %empty_493 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %i_77 = add i2 %i76, 1
  br i1 %exitcond158, label %.preheader841.loopexit, label %101

; <label>:101                                     ; preds = %.preheader840
  %tmp_1217 = trunc i2 %i76 to i1
  %p_shl86 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1217, i5 0)
  %p_shl86_cast = zext i6 %p_shl86 to i7
  %p_shl87 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1217, i3 0)
  %p_shl87_cast = zext i4 %p_shl87 to i7
  %tmp_510 = sub i7 %p_shl86_cast, %p_shl87_cast
  %tmp_713_cast = sext i7 %tmp_510 to i9
  %tmp_511 = add i7 %tmp_510, %co89_cast1
  %tmp_714_cast = sext i7 %tmp_511 to i32
  %tmp_513_cast1 = zext i32 %tmp_714_cast to i35
  %tmp_1218 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_511, i2 0)
  %tmp_1219 = sext i9 %tmp_1218 to i34
  %p_shl450_cast = zext i34 %tmp_1219 to i35
  %tmp_1220 = sub i35 %p_shl450_cast, %tmp_513_cast1
  %tmp_1493_cast = sext i35 %tmp_1220 to i36
  %tmp_1221 = add i36 %tmp_1493_cast, %tmp_499_cast
  %tmp_1222 = trunc i36 %tmp_1221 to i10
  %tmp_1223 = trunc i36 %tmp_1221 to i8
  %p_shl449_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1223, i2 0)
  %tmp_1224 = sub i10 %p_shl449_cast, %tmp_1222
  %tmp_1225 = add i10 %tmp_1224, %tmp_506_cast
  %tmp_1497_cast = zext i10 %tmp_1225 to i64
  %weights_48_1_3x3_V_a_4 = getelementptr [432 x i8]* @weights_48_1_3x3_V, i64 0, i64 %tmp_1497_cast
  %tmp25 = add i9 -200, %tmp_713_cast
  %tmp_514 = add i9 %co89_cast, %tmp25
  %tmp_516_cast = zext i9 %tmp_514 to i12
  %tmp_1226 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_514, i2 0)
  %p_shl448_cast = zext i11 %tmp_1226 to i12
  %tmp_1227 = sub i12 %p_shl448_cast, %tmp_516_cast
  %tmp_1228 = add i12 %tmp_1227, %tmp_499_cast1
  %tmp_1500_cast = sext i12 %tmp_1228 to i64
  %tmp_1229 = call i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12 %tmp_1228, i2 0)
  %p_shl237 = sext i14 %tmp_1229 to i64
  %tmp_1230 = sub i64 %p_shl237, %tmp_1500_cast
  %tmp_1231 = add i64 %tmp_1230, %tmp_506
  %shuffle_conv_3x3_V6_9 = add i64 %tmp_373, %tmp_1231
  %p3X3_1X1_WEIGHTS_addr_26 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_3x3_V6_9
  %p3X3_1X1_WEIGHTS_load_12 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_26, i32 1)
  %p3X3_1X1_WEIGHTS_addr_83 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_26)
  store i8 %p3X3_1X1_WEIGHTS_addr_83, i8* %weights_48_1_3x3_V_a_4, align 1
  br label %.preheader840

.preheader839.loopexit:                           ; preds = %.preheader838
  br label %.preheader839

.preheader839:                                    ; preds = %.preheader839.preheader, %.preheader839.loopexit
  %i72 = phi i5 [ %i_73, %.preheader839.loopexit ], [ 0, %.preheader839.preheader ]
  %i73_cast470_cast = zext i5 %i72 to i8
  %i73_cast = zext i5 %i72 to i7
  %exitcond151 = icmp eq i5 %i72, -8
  %empty_494 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_73 = add i5 %i72, 1
  br i1 %exitcond151, label %103, label %.preheader838.preheader

.preheader838.preheader:                          ; preds = %.preheader839
  br label %.preheader838

.preheader838:                                    ; preds = %.preheader838.preheader, %102
  %k16 = phi i2 [ %k_17, %102 ], [ 0, %.preheader838.preheader ]
  %exitcond154 = icmp eq i2 %k16, -2
  %empty_495 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_17 = add i2 %k16, 1
  br i1 %exitcond154, label %.preheader839.loopexit, label %102

; <label>:102                                     ; preds = %.preheader838
  %tmp_1216 = trunc i2 %k16 to i1
  %p_shl80 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1216, i5 0)
  %p_shl80_cast = zext i6 %p_shl80 to i7
  %p_shl81 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1216, i3 0)
  %p_shl81_cast = zext i4 %p_shl81 to i7
  %tmp_501 = sub i7 %p_shl80_cast, %p_shl81_cast
  %tmp_694_cast_cast = sext i7 %tmp_501 to i8
  %tmp_502 = add i7 %i73_cast, %tmp_501
  %tmp_695_cast = sext i7 %tmp_502 to i32
  %tmp_503 = zext i32 %tmp_695_cast to i64
  %tmp26 = add i8 -88, %tmp_694_cast_cast
  %tmp_504 = add i8 %tmp26, %i73_cast470_cast
  %tmp_698_cast = sext i8 %tmp_504 to i10
  %tmp_505_cast = zext i10 %tmp_698_cast to i33
  %bias_V14_sum12 = add i33 %tmp_482_cast, %tmp_505_cast
  %bias_V14_sum29_cast = sext i33 %bias_V14_sum12 to i64
  %DATA_BIAS_addr_29 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum29_cast
  %DATA_BIAS_load_29_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_29, i32 1)
  %DATA_BIAS_addr_29_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_29)
  %bias_48_V_addr_12 = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_503
  store i8 %DATA_BIAS_addr_29_re, i8* %bias_48_V_addr_12, align 1
  br label %.preheader838

; <label>:103                                     ; preds = %.preheader839
  call fastcc void @subconv_3x3_8_no_rel([4800 x i8]* @buffer1_1_48_8x8_p_V, [432 x i8]* @weights_48_1_3x3_V, [48 x i8]* @bias_48_V, [4800 x i8]* @buffer0_1_48_8x8_p_V)
  br label %.loopexit989

.loopexit989.loopexit:                            ; preds = %.preheader837
  br label %.loopexit989

.loopexit989:                                     ; preds = %.loopexit989.loopexit, %103
  %co90 = phi i5 [ 0, %103 ], [ %co_91, %.loopexit989.loopexit ]
  %co91_cast = zext i5 %co90 to i11
  %exitcond153 = icmp eq i5 %co90, -8
  %empty_496 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_91 = add i5 %co90, 1
  br i1 %exitcond153, label %.preheader835.preheader, label %.preheader837.preheader

.preheader835.preheader:                          ; preds = %.loopexit989
  br label %.preheader835

.preheader837.preheader:                          ; preds = %.loopexit989
  %tmp_1215 = trunc i5 %co90 to i1
  %p_shl82 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1215, i5 0)
  %p_shl82_cast = zext i6 %p_shl82 to i7
  %p_shl83 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1215, i3 0)
  %p_shl83_cast = zext i4 %p_shl83 to i7
  %tmp_500 = sub i7 %p_shl82_cast, %p_shl83_cast
  %p_lshr_f8_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co90, i32 1, i32 4)
  %tmp_702_cast = zext i4 %p_lshr_f8_cast to i7
  br label %.preheader837

.preheader837.loopexit:                           ; preds = %.preheader836
  br label %.preheader837

.preheader837:                                    ; preds = %.preheader837.loopexit, %.preheader837.preheader
  %ci43 = phi i5 [ 0, %.preheader837.preheader ], [ %ci_44, %.preheader837.loopexit ]
  %ci43_cast = zext i5 %ci43 to i7
  %exitcond157 = icmp eq i5 %ci43, -8
  %empty_497 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_44 = add i5 %ci43, 1
  br i1 %exitcond157, label %.loopexit989.loopexit, label %.preheader836.preheader

.preheader836.preheader:                          ; preds = %.preheader837
  %tmp_507 = add i7 %tmp_500, %ci43_cast
  %tmp_508_cast = sext i7 %tmp_507 to i13
  %tmp_509_cast = zext i5 %ci43 to i18
  br label %.preheader836

.preheader836:                                    ; preds = %104, %.preheader836.preheader
  %i78 = phi i3 [ %i_79, %104 ], [ 0, %.preheader836.preheader ]
  %exitcond161 = icmp eq i3 %i78, -4
  %empty_498 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %i_79 = add i3 %i78, 1
  br i1 %exitcond161, label %.preheader837.loopexit, label %104

; <label>:104                                     ; preds = %.preheader836
  %tmp_1236 = trunc i3 %i78 to i2
  %p_shl88 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1236, i4 0)
  %p_shl88_cast = zext i6 %p_shl88 to i7
  %p_shl89 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1236, i2 0)
  %p_shl89_cast = zext i4 %p_shl89 to i7
  %tmp_522 = sub i7 %p_shl88_cast, %p_shl89_cast
  %tmp_523 = add i7 %tmp_522, %tmp_702_cast
  %tmp_1237 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_523, i6 0)
  %tmp_1238 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_523, i4 0)
  %p_shl454_cast = sext i11 %tmp_1238 to i13
  %tmp_1239 = sub i13 %tmp_1237, %p_shl454_cast
  %tmp_1240 = add i13 %tmp_508_cast, %tmp_1239
  %tmp_1516_cast = sext i13 %tmp_1240 to i64
  %weights_48_48_1x1_V_8 = getelementptr [2304 x i8]* @weights_48_48_1x1_V, i64 0, i64 %tmp_1516_cast
  %p_shl90 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1236, i5 0)
  %p_shl90_cast = zext i7 %p_shl90 to i8
  %p_shl91 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1236, i3 0)
  %p_shl91_cast = zext i5 %p_shl91 to i8
  %tmp_524 = sub i8 %p_shl90_cast, %p_shl91_cast
  %tmp_723_cast = sext i8 %tmp_524 to i11
  %tmp27 = add i11 984, %tmp_723_cast
  %tmp_525 = add i11 %tmp27, %co91_cast
  %tmp_1241 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_525, i5 0)
  %p_shl451_cast = zext i16 %tmp_1241 to i17
  %tmp_1242 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_525, i3 0)
  %p_shl452_cast = zext i14 %tmp_1242 to i17
  %tmp_1243 = sub i17 %p_shl451_cast, %p_shl452_cast
  %tmp_1521_cast = sext i17 %tmp_1243 to i18
  %tmp_1244 = add i18 %tmp_509_cast, %tmp_1521_cast
  %tmp_1522_cast = sext i18 %tmp_1244 to i33
  %shuffle_conv_1x1_V8_7 = add i33 %tmp_1522_cast, %tmp_490_cast
  %shuffle_conv_1x1_V8_36 = sext i33 %shuffle_conv_1x1_V8_7 to i64
  %p3X3_1X1_WEIGHTS_addr_27 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_1x1_V8_36
  %p3X3_1X1_WEIGHTS_load_13 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_27, i32 1)
  %p3X3_1X1_WEIGHTS_addr_84 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_27)
  store i8 %p3X3_1X1_WEIGHTS_addr_84, i8* %weights_48_48_1x1_V_8, align 1
  br label %.preheader836

.preheader835.loopexit:                           ; preds = %.preheader834
  br label %.preheader835

.preheader835:                                    ; preds = %.preheader835.preheader, %.preheader835.loopexit
  %i74 = phi i5 [ %i_75, %.preheader835.loopexit ], [ 0, %.preheader835.preheader ]
  %i75_cast = zext i5 %i74 to i11
  %i75_cast1 = zext i5 %i74 to i7
  %exitcond156 = icmp eq i5 %i74, -8
  %empty_499 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_75 = add i5 %i74, 1
  br i1 %exitcond156, label %106, label %.preheader834.preheader

.preheader834.preheader:                          ; preds = %.preheader835
  br label %.preheader834

.preheader834:                                    ; preds = %.preheader834.preheader, %105
  %k18 = phi i2 [ %k_19, %105 ], [ 0, %.preheader834.preheader ]
  %exitcond160 = icmp eq i2 %k18, -2
  %empty_500 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_19 = add i2 %k18, 1
  br i1 %exitcond160, label %.preheader835.loopexit, label %105

; <label>:105                                     ; preds = %.preheader834
  %tmp_1235 = trunc i2 %k18 to i1
  %p_shl84 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1235, i5 0)
  %p_shl84_cast = zext i6 %p_shl84 to i7
  %p_shl85 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1235, i3 0)
  %p_shl85_cast = zext i4 %p_shl85 to i7
  %tmp_517 = sub i7 %p_shl84_cast, %p_shl85_cast
  %tmp_518 = add i7 %i75_cast1, %tmp_517
  %tmp_705_cast = sext i7 %tmp_518 to i32
  %tmp_519 = zext i32 %tmp_705_cast to i64
  %tmp28 = add i7 -40, %tmp_517
  %tmp28_cast1 = sext i7 %tmp28 to i10
  %tmp28_cast = zext i10 %tmp28_cast1 to i11
  %tmp_520 = add i11 %tmp28_cast, %i75_cast
  %tmp_521_cast = zext i11 %tmp_520 to i33
  %bias_V14_sum13 = add i33 %tmp_482_cast, %tmp_521_cast
  %bias_V14_sum30_cast = sext i33 %bias_V14_sum13 to i64
  %DATA_BIAS_addr_30 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum30_cast
  %DATA_BIAS_load_30_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_30, i32 1)
  %DATA_BIAS_addr_30_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_30)
  %bias_48_V_addr_13 = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_519
  store i8 %DATA_BIAS_addr_30_re, i8* %bias_48_V_addr_13, align 1
  br label %.preheader834

; <label>:106                                     ; preds = %.preheader835
  call fastcc void @subconv_1x1_8_p([4800 x i8]* @buffer0_1_48_8x8_p_V, [2304 x i8]* @weights_48_48_1x1_V, [48 x i8]* @bias_48_V, [4800 x i8]* @buffer1_1_48_8x8_p_V)
  br label %.loopexit988

.loopexit988.loopexit:                            ; preds = %.preheader833
  br label %.loopexit988

.loopexit988:                                     ; preds = %.loopexit988.loopexit, %106
  %co92 = phi i6 [ 0, %106 ], [ %co_93, %.loopexit988.loopexit ]
  %exitcond159 = icmp eq i6 %co92, -16
  %empty_501 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_93 = add i6 %co92, 1
  br i1 %exitcond159, label %108, label %.preheader833.preheader

.preheader833.preheader:                          ; preds = %.loopexit988
  %tmp_1232 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co92, i3 0)
  %p_shl455_cast = zext i9 %tmp_1232 to i10
  %tmp_1233 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co92, i1 false)
  %p_shl456_cast = zext i7 %tmp_1233 to i10
  %tmp_1234 = add i10 %p_shl456_cast, %p_shl455_cast
  br label %.preheader833

.preheader833.loopexit:                           ; preds = %.preheader832
  br label %.preheader833

.preheader833:                                    ; preds = %.preheader833.loopexit, %.preheader833.preheader
  %h64 = phi i4 [ 0, %.preheader833.preheader ], [ %h_65, %.preheader833.loopexit ]
  %exitcond163 = icmp eq i4 %h64, -8
  %empty_502 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %h_65 = add i4 %h64, 1
  br i1 %exitcond163, label %.loopexit988.loopexit, label %.preheader832.preheader

.preheader832.preheader:                          ; preds = %.preheader833
  %tmp_527_cast1 = zext i4 %h_65 to i10
  %tmp_1251 = add i10 %tmp_527_cast1, %tmp_1234
  %tmp_1252 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1251, i3 0)
  %p_shl457_cast = zext i13 %tmp_1252 to i15
  %tmp_1253 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1251, i1 false)
  %p_shl458_cast = zext i11 %tmp_1253 to i15
  %tmp_1254 = add i15 %p_shl457_cast, %p_shl458_cast
  br label %.preheader832

.preheader832:                                    ; preds = %107, %.preheader832.preheader
  %w63 = phi i4 [ %w_64, %107 ], [ 0, %.preheader832.preheader ]
  %exitcond166 = icmp eq i4 %w63, -8
  %empty_503 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %w_64 = add i4 %w63, 1
  br i1 %exitcond166, label %.preheader833.loopexit, label %107

; <label>:107                                     ; preds = %.preheader832
  %tmp_530_cast = zext i4 %w_64 to i15
  %tmp_1264 = add i15 %tmp_1254, %tmp_530_cast
  %tmp_1543_cast = zext i15 %tmp_1264 to i64
  %buffer0_1_48_8x8_p_V_5 = getelementptr [4800 x i8]* @buffer0_1_48_8x8_p_V, i64 0, i64 %tmp_1543_cast
  %shuffleunit1_1_outpu_2 = getelementptr [9600 x i8]* @shuffleunit1_1_outpu, i64 0, i64 %tmp_1543_cast
  %shuffleunit1_1_outpu_3 = load i8* %shuffleunit1_1_outpu_2, align 1
  store i8 %shuffleunit1_1_outpu_3, i8* %buffer0_1_48_8x8_p_V_5, align 1
  br label %.preheader832

; <label>:108                                     ; preds = %.loopexit988
  call fastcc void @shuffle_48_p([4800 x i8]* @buffer0_1_48_8x8_p_V, [9600 x i8]* @shuffleunit1_2_outpu)
  br label %.loopexit987

.loopexit987.loopexit:                            ; preds = %.preheader831
  br label %.loopexit987

.loopexit987:                                     ; preds = %.loopexit987.loopexit, %108
  %co94 = phi i6 [ 0, %108 ], [ %co_95, %.loopexit987.loopexit ]
  %co94_cast = zext i6 %co94 to i7
  %exitcond162 = icmp eq i6 %co94, -16
  %empty_504 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_95 = add i6 %co94, 1
  br i1 %exitcond162, label %.preheader829.preheader, label %.preheader831.preheader

.preheader829.preheader:                          ; preds = %.loopexit987
  br label %.preheader829

.preheader831.preheader:                          ; preds = %.loopexit987
  %tmp_1245 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co94, i3 0)
  %p_shl461_cast = zext i9 %tmp_1245 to i10
  %tmp_1246 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co94, i1 false)
  %p_shl462_cast = zext i7 %tmp_1246 to i10
  %tmp_1247 = add i10 %p_shl462_cast, %p_shl461_cast
  %tmp_526 = add i7 %co94_cast, 48
  %tmp_1248 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_526, i3 0)
  %p_shl459_cast = zext i10 %tmp_1248 to i11
  %tmp_1249 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp_526, i1 false)
  %p_shl460_cast = zext i8 %tmp_1249 to i11
  %tmp_1250 = add i11 %p_shl460_cast, %p_shl459_cast
  br label %.preheader831

.preheader831.loopexit:                           ; preds = %.preheader830
  br label %.preheader831

.preheader831:                                    ; preds = %.preheader831.loopexit, %.preheader831.preheader
  %h66 = phi i4 [ 0, %.preheader831.preheader ], [ %h_67, %.preheader831.loopexit ]
  %exitcond165 = icmp eq i4 %h66, -8
  %empty_505 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %h_67 = add i4 %h66, 1
  br i1 %exitcond165, label %.loopexit987.loopexit, label %.preheader830.preheader

.preheader830.preheader:                          ; preds = %.preheader831
  %tmp_529_cast1 = zext i4 %h_67 to i10
  %tmp_529_cast = zext i4 %h_67 to i11
  %tmp_1256 = add i11 %tmp_529_cast, %tmp_1250
  %tmp_1257 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1256, i3 0)
  %p_shl465_cast = zext i14 %tmp_1257 to i15
  %tmp_1258 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_1256, i1 false)
  %p_shl466_cast = zext i12 %tmp_1258 to i15
  %tmp_1259 = add i15 %p_shl465_cast, %p_shl466_cast
  %tmp_1260 = add i10 %tmp_529_cast1, %tmp_1247
  %tmp_1261 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1260, i3 0)
  %p_shl463_cast = zext i13 %tmp_1261 to i14
  %tmp_1262 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1260, i1 false)
  %p_shl464_cast = zext i11 %tmp_1262 to i14
  %tmp_1263 = add i14 %p_shl463_cast, %p_shl464_cast
  br label %.preheader830

.preheader830:                                    ; preds = %109, %.preheader830.preheader
  %w65 = phi i4 [ %w_66, %109 ], [ 0, %.preheader830.preheader ]
  %exitcond169 = icmp eq i4 %w65, -8
  %empty_506 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %w_66 = add i4 %w65, 1
  br i1 %exitcond169, label %.preheader831.loopexit, label %109

; <label>:109                                     ; preds = %.preheader830
  %tmp_535_cast1 = zext i4 %w_66 to i14
  %tmp_535_cast = zext i4 %w_66 to i15
  %tmp_1265 = add i15 %tmp_1259, %tmp_535_cast
  %tmp_1544_cast = zext i15 %tmp_1265 to i64
  %shuffleunit1_2_outpu = getelementptr [9600 x i8]* @shuffleunit1_2_outpu, i64 0, i64 %tmp_1544_cast
  %tmp_1266 = add i14 %tmp_1263, %tmp_535_cast1
  %tmp_1545_cast = zext i14 %tmp_1266 to i64
  %buffer0_1_48_8x8_p_V_6 = getelementptr [4800 x i8]* @buffer0_1_48_8x8_p_V, i64 0, i64 %tmp_1545_cast
  %shuffleunit1_2_outpu_1 = load i8* %shuffleunit1_2_outpu, align 1
  store i8 %shuffleunit1_2_outpu_1, i8* %buffer0_1_48_8x8_p_V_6, align 1
  br label %.preheader830

.preheader829.loopexit:                           ; preds = %.preheader828
  br label %.preheader829

.preheader829:                                    ; preds = %.preheader829.preheader, %.preheader829.loopexit
  %co96 = phi i5 [ %co_97, %.preheader829.loopexit ], [ 0, %.preheader829.preheader ]
  %co96_cast = zext i5 %co96 to i11
  %exitcond164 = icmp eq i5 %co96, -8
  %empty_507 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_97 = add i5 %co96, 1
  br i1 %exitcond164, label %.preheader826.preheader, label %.preheader828.preheader

.preheader826.preheader:                          ; preds = %.preheader829
  br label %.preheader826

.preheader828.preheader:                          ; preds = %.preheader829
  %tmp_1255 = trunc i5 %co96 to i1
  %p_shl92 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1255, i5 0)
  %p_shl92_cast = zext i6 %p_shl92 to i7
  %p_shl93 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1255, i3 0)
  %p_shl93_cast = zext i4 %p_shl93 to i7
  %tmp_528 = sub i7 %p_shl92_cast, %p_shl93_cast
  %p_lshr_f9_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co96, i32 1, i32 4)
  %tmp_733_cast = zext i4 %p_lshr_f9_cast to i7
  br label %.preheader828

.preheader828.loopexit:                           ; preds = %.preheader827
  br label %.preheader828

.preheader828:                                    ; preds = %.preheader828.loopexit, %.preheader828.preheader
  %ci45 = phi i5 [ 0, %.preheader828.preheader ], [ %ci_46, %.preheader828.loopexit ]
  %ci45_cast = zext i5 %ci45 to i7
  %exitcond168 = icmp eq i5 %ci45, -8
  %empty_508 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_46 = add i5 %ci45, 1
  br i1 %exitcond168, label %.preheader829.loopexit, label %.preheader827.preheader

.preheader827.preheader:                          ; preds = %.preheader828
  %tmp_531 = add i7 %tmp_528, %ci45_cast
  %tmp_533_cast = sext i7 %tmp_531 to i13
  %tmp_534_cast = zext i5 %ci45 to i18
  br label %.preheader827

.preheader827:                                    ; preds = %110, %.preheader827.preheader
  %i82 = phi i3 [ %i_83, %110 ], [ 0, %.preheader827.preheader ]
  %exitcond172 = icmp eq i3 %i82, -4
  %empty_509 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %i_83 = add i3 %i82, 1
  br i1 %exitcond172, label %.preheader828.loopexit, label %110

; <label>:110                                     ; preds = %.preheader827
  %tmp_1268 = trunc i3 %i82 to i2
  %p_shl96 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1268, i4 0)
  %p_shl96_cast = zext i6 %p_shl96 to i7
  %p_shl97 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1268, i2 0)
  %p_shl97_cast = zext i4 %p_shl97 to i7
  %tmp_542 = sub i7 %p_shl96_cast, %p_shl97_cast
  %tmp_545 = add i7 %tmp_542, %tmp_733_cast
  %tmp_1269 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_545, i6 0)
  %tmp_1270 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_545, i4 0)
  %p_shl470_cast = sext i11 %tmp_1270 to i13
  %tmp_1271 = sub i13 %tmp_1269, %p_shl470_cast
  %tmp_1272 = add i13 %tmp_533_cast, %tmp_1271
  %tmp_1555_cast = sext i13 %tmp_1272 to i64
  %weights_48_48_1x1_V_9 = getelementptr [2304 x i8]* @weights_48_48_1x1_V, i64 0, i64 %tmp_1555_cast
  %p_shl98 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1268, i5 0)
  %p_shl98_cast = zext i7 %p_shl98 to i8
  %p_shl99 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1268, i3 0)
  %p_shl99_cast = zext i5 %p_shl99 to i8
  %tmp_547 = sub i8 %p_shl98_cast, %p_shl99_cast
  %tmp_750_cast = sext i8 %tmp_547 to i11
  %tmp29 = add i11 -968, %tmp_750_cast
  %tmp_548 = add i11 %tmp29, %co96_cast
  %tmp_1273 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_548, i5 0)
  %p_shl467_cast = zext i16 %tmp_1273 to i17
  %tmp_1274 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_548, i3 0)
  %p_shl468_cast = zext i14 %tmp_1274 to i17
  %tmp_1275 = sub i17 %p_shl467_cast, %p_shl468_cast
  %tmp_1560_cast = sext i17 %tmp_1275 to i18
  %tmp_1276 = add i18 %tmp_534_cast, %tmp_1560_cast
  %tmp_1561_cast = sext i18 %tmp_1276 to i33
  %shuffle_conv_1x1_V8_8 = add i33 %tmp_1561_cast, %tmp_490_cast
  %shuffle_conv_1x1_V8_37 = sext i33 %shuffle_conv_1x1_V8_8 to i64
  %p3X3_1X1_WEIGHTS_addr_28 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_1x1_V8_37
  %p3X3_1X1_WEIGHTS_load_14 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_28, i32 1)
  %p3X3_1X1_WEIGHTS_addr_85 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_28)
  store i8 %p3X3_1X1_WEIGHTS_addr_85, i8* %weights_48_48_1x1_V_9, align 1
  br label %.preheader827

.preheader826.loopexit:                           ; preds = %.preheader825
  br label %.preheader826

.preheader826:                                    ; preds = %.preheader826.preheader, %.preheader826.loopexit
  %i80 = phi i5 [ %i_81, %.preheader826.loopexit ], [ 0, %.preheader826.preheader ]
  %i81_cast = zext i5 %i80 to i11
  %i81_cast1 = zext i5 %i80 to i7
  %exitcond167 = icmp eq i5 %i80, -8
  %empty_510 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_81 = add i5 %i80, 1
  br i1 %exitcond167, label %112, label %.preheader825.preheader

.preheader825.preheader:                          ; preds = %.preheader826
  br label %.preheader825

.preheader825:                                    ; preds = %.preheader825.preheader, %111
  %k20 = phi i2 [ %k_21, %111 ], [ 0, %.preheader825.preheader ]
  %exitcond171 = icmp eq i2 %k20, -2
  %empty_511 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_21 = add i2 %k20, 1
  br i1 %exitcond171, label %.preheader826.loopexit, label %111

; <label>:111                                     ; preds = %.preheader825
  %tmp_1267 = trunc i2 %k20 to i1
  %p_shl94 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1267, i5 0)
  %p_shl94_cast = zext i6 %p_shl94 to i7
  %p_shl95 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1267, i3 0)
  %p_shl95_cast = zext i4 %p_shl95 to i7
  %tmp_536 = sub i7 %p_shl94_cast, %p_shl95_cast
  %tmp_736_cast = sext i7 %tmp_536 to i11
  %tmp_537 = add i7 %i81_cast1, %tmp_536
  %tmp_737_cast = sext i7 %tmp_537 to i32
  %tmp_538 = zext i32 %tmp_737_cast to i64
  %tmp30 = add i11 -1016, %tmp_736_cast
  %tmp_539 = add i11 %tmp30, %i81_cast
  %tmp_541_cast = zext i11 %tmp_539 to i33
  %bias_V14_sum14 = add i33 %tmp_482_cast, %tmp_541_cast
  %bias_V14_sum31_cast = sext i33 %bias_V14_sum14 to i64
  %DATA_BIAS_addr_31 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum31_cast
  %DATA_BIAS_load_31_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_31, i32 1)
  %DATA_BIAS_addr_31_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_31)
  %bias_48_V_addr_14 = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_538
  store i8 %DATA_BIAS_addr_31_re, i8* %bias_48_V_addr_14, align 1
  br label %.preheader825

; <label>:112                                     ; preds = %.preheader826
  call fastcc void @subconv_1x1_8_p([4800 x i8]* @buffer0_1_48_8x8_p_V, [2304 x i8]* @weights_48_48_1x1_V, [48 x i8]* @bias_48_V, [4800 x i8]* @buffer1_1_48_8x8_p_V)
  br label %.loopexit986

.loopexit986.loopexit:                            ; preds = %.preheader824
  br label %.loopexit986

.loopexit986:                                     ; preds = %.loopexit986.loopexit, %112
  %co98 = phi i5 [ 0, %112 ], [ %co_99, %.loopexit986.loopexit ]
  %co99_cast = zext i5 %co98 to i9
  %co99_cast1 = zext i5 %co98 to i7
  %exitcond170 = icmp eq i5 %co98, -8
  %empty_512 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_99 = add i5 %co98, 1
  br i1 %exitcond170, label %.preheader821.preheader, label %.preheader824.preheader

.preheader824.preheader:                          ; preds = %.loopexit986
  br label %.preheader824

.preheader821.preheader:                          ; preds = %.loopexit986
  br label %.preheader821

.preheader824.loopexit:                           ; preds = %.preheader823
  br label %.preheader824

.preheader824:                                    ; preds = %.preheader824.preheader, %.preheader824.loopexit
  %w67 = phi i2 [ %w_68, %.preheader824.loopexit ], [ 0, %.preheader824.preheader ]
  %exitcond174 = icmp eq i2 %w67, -1
  %empty_513 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %w_68 = add i2 %w67, 1
  br i1 %exitcond174, label %.loopexit986.loopexit, label %.preheader823.preheader

.preheader823.preheader:                          ; preds = %.preheader824
  %tmp_549_cast1 = zext i2 %w67 to i12
  %tmp_549_cast = zext i2 %w67 to i36
  br label %.preheader823

.preheader823.loopexit:                           ; preds = %.preheader822
  br label %.preheader823

.preheader823:                                    ; preds = %.preheader823.loopexit, %.preheader823.preheader
  %h68 = phi i2 [ 0, %.preheader823.preheader ], [ %h_69, %.preheader823.loopexit ]
  %exitcond177 = icmp eq i2 %h68, -1
  %empty_514 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %h_69 = add i2 %h68, 1
  br i1 %exitcond177, label %.preheader824.loopexit, label %.preheader822.preheader

.preheader822.preheader:                          ; preds = %.preheader823
  %tmp_556 = zext i2 %h68 to i64
  %tmp_556_cast1 = zext i2 %h68 to i10
  br label %.preheader822

.preheader822:                                    ; preds = %113, %.preheader822.preheader
  %i88 = phi i2 [ %i_89, %113 ], [ 0, %.preheader822.preheader ]
  %exitcond180 = icmp eq i2 %i88, -2
  %empty_515 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %i_89 = add i2 %i88, 1
  br i1 %exitcond180, label %.preheader823.loopexit, label %113

; <label>:113                                     ; preds = %.preheader822
  %tmp_1279 = trunc i2 %i88 to i1
  %p_shl106 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1279, i5 0)
  %p_shl106_cast = zext i6 %p_shl106 to i7
  %p_shl107 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1279, i3 0)
  %p_shl107_cast = zext i4 %p_shl107 to i7
  %tmp_560 = sub i7 %p_shl106_cast, %p_shl107_cast
  %tmp_773_cast = sext i7 %tmp_560 to i9
  %tmp_561 = add i7 %tmp_560, %co99_cast1
  %tmp_774_cast = sext i7 %tmp_561 to i32
  %tmp_563_cast = zext i32 %tmp_774_cast to i35
  %tmp_1280 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_561, i2 0)
  %tmp_1281 = sext i9 %tmp_1280 to i34
  %p_shl474_cast = zext i34 %tmp_1281 to i35
  %tmp_1282 = sub i35 %p_shl474_cast, %tmp_563_cast
  %tmp_1570_cast = sext i35 %tmp_1282 to i36
  %tmp_1283 = add i36 %tmp_1570_cast, %tmp_549_cast
  %tmp_1284 = trunc i36 %tmp_1283 to i10
  %tmp_1285 = trunc i36 %tmp_1283 to i8
  %p_shl473_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1285, i2 0)
  %tmp_1286 = sub i10 %p_shl473_cast, %tmp_1284
  %tmp_1287 = add i10 %tmp_1286, %tmp_556_cast1
  %tmp_1574_cast = zext i10 %tmp_1287 to i64
  %weights_48_1_3x3_V_a_5 = getelementptr [432 x i8]* @weights_48_1_3x3_V, i64 0, i64 %tmp_1574_cast
  %tmp31 = add i9 -152, %tmp_773_cast
  %tmp_564 = add i9 %co99_cast, %tmp31
  %tmp_566_cast = zext i9 %tmp_564 to i12
  %tmp_1288 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_564, i2 0)
  %p_shl472_cast = zext i11 %tmp_1288 to i12
  %tmp_1289 = sub i12 %p_shl472_cast, %tmp_566_cast
  %tmp_1290 = add i12 %tmp_1289, %tmp_549_cast1
  %tmp_1577_cast = sext i12 %tmp_1290 to i64
  %tmp_1291 = call i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12 %tmp_1290, i2 0)
  %p_shl240 = sext i14 %tmp_1291 to i64
  %tmp_1292 = sub i64 %p_shl240, %tmp_1577_cast
  %tmp_1293 = add i64 %tmp_1292, %tmp_556
  %shuffle_conv_3x3_V6_s = add i64 %tmp_373, %tmp_1293
  %p3X3_1X1_WEIGHTS_addr_29 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_3x3_V6_s
  %p3X3_1X1_WEIGHTS_load_15 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_29, i32 1)
  %p3X3_1X1_WEIGHTS_addr_86 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_29)
  store i8 %p3X3_1X1_WEIGHTS_addr_86, i8* %weights_48_1_3x3_V_a_5, align 1
  br label %.preheader822

.preheader821.loopexit:                           ; preds = %.preheader820
  br label %.preheader821

.preheader821:                                    ; preds = %.preheader821.preheader, %.preheader821.loopexit
  %i84 = phi i5 [ %i_85, %.preheader821.loopexit ], [ 0, %.preheader821.preheader ]
  %i85_cast = zext i5 %i84 to i11
  %i85_cast1 = zext i5 %i84 to i7
  %exitcond173 = icmp eq i5 %i84, -8
  %empty_516 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_85 = add i5 %i84, 1
  br i1 %exitcond173, label %115, label %.preheader820.preheader

.preheader820.preheader:                          ; preds = %.preheader821
  br label %.preheader820

.preheader820:                                    ; preds = %.preheader820.preheader, %114
  %k22 = phi i2 [ %k_23, %114 ], [ 0, %.preheader820.preheader ]
  %exitcond176 = icmp eq i2 %k22, -2
  %empty_517 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_23 = add i2 %k22, 1
  br i1 %exitcond176, label %.preheader821.loopexit, label %114

; <label>:114                                     ; preds = %.preheader820
  %tmp_1278 = trunc i2 %k22 to i1
  %p_shl100 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1278, i5 0)
  %p_shl100_cast = zext i6 %p_shl100 to i7
  %p_shl101 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1278, i3 0)
  %p_shl101_cast = zext i4 %p_shl101 to i7
  %tmp_551 = sub i7 %p_shl100_cast, %p_shl101_cast
  %tmp_754_cast = sext i7 %tmp_551 to i11
  %tmp_552 = add i7 %i85_cast1, %tmp_551
  %tmp_755_cast = sext i7 %tmp_552 to i32
  %tmp_553 = zext i32 %tmp_755_cast to i64
  %tmp32 = add i11 -968, %tmp_754_cast
  %tmp_554 = add i11 %tmp32, %i85_cast
  %tmp_555_cast = zext i11 %tmp_554 to i33
  %bias_V14_sum15 = add i33 %tmp_482_cast, %tmp_555_cast
  %bias_V14_sum32_cast = sext i33 %bias_V14_sum15 to i64
  %DATA_BIAS_addr_32 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum32_cast
  %DATA_BIAS_load_32_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_32, i32 1)
  %DATA_BIAS_addr_32_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_32)
  %bias_48_V_addr_15 = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_553
  store i8 %DATA_BIAS_addr_32_re, i8* %bias_48_V_addr_15, align 1
  br label %.preheader820

; <label>:115                                     ; preds = %.preheader821
  call fastcc void @subconv_3x3_8_no_rel([4800 x i8]* @buffer1_1_48_8x8_p_V, [432 x i8]* @weights_48_1_3x3_V, [48 x i8]* @bias_48_V, [4800 x i8]* @buffer0_1_48_8x8_p_V)
  br label %.loopexit985

.loopexit985.loopexit:                            ; preds = %.preheader819
  br label %.loopexit985

.loopexit985:                                     ; preds = %.loopexit985.loopexit, %115
  %co100 = phi i5 [ 0, %115 ], [ %co_101, %.loopexit985.loopexit ]
  %co101_cast = zext i5 %co100 to i11
  %exitcond175 = icmp eq i5 %co100, -8
  %empty_518 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_101 = add i5 %co100, 1
  br i1 %exitcond175, label %.preheader817.preheader, label %.preheader819.preheader

.preheader817.preheader:                          ; preds = %.loopexit985
  br label %.preheader817

.preheader819.preheader:                          ; preds = %.loopexit985
  %tmp_1277 = trunc i5 %co100 to i1
  %p_shl102 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1277, i5 0)
  %p_shl102_cast = zext i6 %p_shl102 to i7
  %p_shl103 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1277, i3 0)
  %p_shl103_cast = zext i4 %p_shl103 to i7
  %tmp_550 = sub i7 %p_shl102_cast, %p_shl103_cast
  %p_lshr_f10_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co100, i32 1, i32 4)
  %tmp_762_cast = zext i4 %p_lshr_f10_cast to i7
  br label %.preheader819

.preheader819.loopexit:                           ; preds = %.preheader818
  br label %.preheader819

.preheader819:                                    ; preds = %.preheader819.loopexit, %.preheader819.preheader
  %ci47 = phi i5 [ 0, %.preheader819.preheader ], [ %ci_48, %.preheader819.loopexit ]
  %ci47_cast = zext i5 %ci47 to i7
  %exitcond179 = icmp eq i5 %ci47, -8
  %empty_519 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_48 = add i5 %ci47, 1
  br i1 %exitcond179, label %.loopexit985.loopexit, label %.preheader818.preheader

.preheader818.preheader:                          ; preds = %.preheader819
  %tmp_557 = add i7 %tmp_550, %ci47_cast
  %tmp_558_cast = sext i7 %tmp_557 to i13
  %tmp_559_cast = zext i5 %ci47 to i18
  br label %.preheader818

.preheader818:                                    ; preds = %116, %.preheader818.preheader
  %i90 = phi i3 [ %i_91, %116 ], [ 0, %.preheader818.preheader ]
  %exitcond183 = icmp eq i3 %i90, -4
  %empty_520 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %i_91 = add i3 %i90, 1
  br i1 %exitcond183, label %.preheader819.loopexit, label %116

; <label>:116                                     ; preds = %.preheader818
  %tmp_1298 = trunc i3 %i90 to i2
  %p_shl108 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1298, i4 0)
  %p_shl108_cast = zext i6 %p_shl108 to i7
  %p_shl109 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1298, i2 0)
  %p_shl109_cast = zext i4 %p_shl109 to i7
  %tmp_572 = sub i7 %p_shl108_cast, %p_shl109_cast
  %tmp_573 = add i7 %tmp_572, %tmp_762_cast
  %tmp_1299 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_573, i6 0)
  %tmp_1300 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_573, i4 0)
  %p_shl478_cast = sext i11 %tmp_1300 to i13
  %tmp_1301 = sub i13 %tmp_1299, %p_shl478_cast
  %tmp_1302 = add i13 %tmp_558_cast, %tmp_1301
  %tmp_1593_cast = sext i13 %tmp_1302 to i64
  %weights_48_48_1x1_V_10 = getelementptr [2304 x i8]* @weights_48_48_1x1_V, i64 0, i64 %tmp_1593_cast
  %p_shl110 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1298, i5 0)
  %p_shl110_cast = zext i7 %p_shl110 to i8
  %p_shl111 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1298, i3 0)
  %p_shl111_cast = zext i5 %p_shl111 to i8
  %tmp_574 = sub i8 %p_shl110_cast, %p_shl111_cast
  %tmp_783_cast = sext i8 %tmp_574 to i11
  %tmp33 = add i11 -872, %tmp_783_cast
  %tmp_575 = add i11 %tmp33, %co101_cast
  %tmp_1303 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_575, i5 0)
  %p_shl475_cast = zext i16 %tmp_1303 to i17
  %tmp_1304 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_575, i3 0)
  %p_shl476_cast = zext i14 %tmp_1304 to i17
  %tmp_1305 = sub i17 %p_shl475_cast, %p_shl476_cast
  %tmp_1598_cast = sext i17 %tmp_1305 to i18
  %tmp_1306 = add i18 %tmp_559_cast, %tmp_1598_cast
  %tmp_1599_cast = sext i18 %tmp_1306 to i33
  %shuffle_conv_1x1_V8_10 = add i33 %tmp_1599_cast, %tmp_490_cast
  %shuffle_conv_1x1_V8_38 = sext i33 %shuffle_conv_1x1_V8_10 to i64
  %p3X3_1X1_WEIGHTS_addr_30 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_1x1_V8_38
  %p3X3_1X1_WEIGHTS_load_16 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_30, i32 1)
  %p3X3_1X1_WEIGHTS_addr_87 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_30)
  store i8 %p3X3_1X1_WEIGHTS_addr_87, i8* %weights_48_48_1x1_V_10, align 1
  br label %.preheader818

.preheader817.loopexit:                           ; preds = %.preheader816
  br label %.preheader817

.preheader817:                                    ; preds = %.preheader817.preheader, %.preheader817.loopexit
  %i86 = phi i5 [ %i_87, %.preheader817.loopexit ], [ 0, %.preheader817.preheader ]
  %i87_cast = zext i5 %i86 to i11
  %i87_cast1 = zext i5 %i86 to i7
  %exitcond178 = icmp eq i5 %i86, -8
  %empty_521 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_87 = add i5 %i86, 1
  br i1 %exitcond178, label %118, label %.preheader816.preheader

.preheader816.preheader:                          ; preds = %.preheader817
  br label %.preheader816

.preheader816:                                    ; preds = %.preheader816.preheader, %117
  %k24 = phi i2 [ %k_25, %117 ], [ 0, %.preheader816.preheader ]
  %exitcond182 = icmp eq i2 %k24, -2
  %empty_522 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_25 = add i2 %k24, 1
  br i1 %exitcond182, label %.preheader817.loopexit, label %117

; <label>:117                                     ; preds = %.preheader816
  %tmp_1297 = trunc i2 %k24 to i1
  %p_shl104 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1297, i5 0)
  %p_shl104_cast = zext i6 %p_shl104 to i7
  %p_shl105 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1297, i3 0)
  %p_shl105_cast = zext i4 %p_shl105 to i7
  %tmp_567 = sub i7 %p_shl104_cast, %p_shl105_cast
  %tmp_764_cast = sext i7 %tmp_567 to i11
  %tmp_568 = add i7 %i87_cast1, %tmp_567
  %tmp_765_cast = sext i7 %tmp_568 to i32
  %tmp_569 = zext i32 %tmp_765_cast to i64
  %tmp34 = add i11 -920, %tmp_764_cast
  %tmp_570 = add i11 %tmp34, %i87_cast
  %tmp_571_cast = zext i11 %tmp_570 to i33
  %bias_V14_sum16 = add i33 %tmp_482_cast, %tmp_571_cast
  %bias_V14_sum33_cast = sext i33 %bias_V14_sum16 to i64
  %DATA_BIAS_addr_33 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum33_cast
  %DATA_BIAS_load_33_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_33, i32 1)
  %DATA_BIAS_addr_33_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_33)
  %bias_48_V_addr_16 = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_569
  store i8 %DATA_BIAS_addr_33_re, i8* %bias_48_V_addr_16, align 1
  br label %.preheader816

; <label>:118                                     ; preds = %.preheader817
  call fastcc void @subconv_1x1_8_p([4800 x i8]* @buffer0_1_48_8x8_p_V, [2304 x i8]* @weights_48_48_1x1_V, [48 x i8]* @bias_48_V, [4800 x i8]* @buffer1_1_48_8x8_p_V)
  br label %.loopexit984

.loopexit984.loopexit:                            ; preds = %.preheader815
  br label %.loopexit984

.loopexit984:                                     ; preds = %.loopexit984.loopexit, %118
  %co102 = phi i6 [ 0, %118 ], [ %co_103, %.loopexit984.loopexit ]
  %exitcond181 = icmp eq i6 %co102, -16
  %empty_523 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_103 = add i6 %co102, 1
  br i1 %exitcond181, label %120, label %.preheader815.preheader

.preheader815.preheader:                          ; preds = %.loopexit984
  %tmp_1294 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co102, i3 0)
  %p_shl479_cast = zext i9 %tmp_1294 to i10
  %tmp_1295 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co102, i1 false)
  %p_shl480_cast = zext i7 %tmp_1295 to i10
  %tmp_1296 = add i10 %p_shl480_cast, %p_shl479_cast
  br label %.preheader815

.preheader815.loopexit:                           ; preds = %.preheader814
  br label %.preheader815

.preheader815:                                    ; preds = %.preheader815.loopexit, %.preheader815.preheader
  %h70 = phi i4 [ 0, %.preheader815.preheader ], [ %h_71, %.preheader815.loopexit ]
  %exitcond185 = icmp eq i4 %h70, -8
  %empty_524 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %h_71 = add i4 %h70, 1
  br i1 %exitcond185, label %.loopexit984.loopexit, label %.preheader814.preheader

.preheader814.preheader:                          ; preds = %.preheader815
  %tmp_577_cast = zext i4 %h_71 to i10
  %tmp_1313 = add i10 %tmp_577_cast, %tmp_1296
  %tmp_1314 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1313, i3 0)
  %p_shl481_cast = zext i13 %tmp_1314 to i15
  %tmp_1315 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1313, i1 false)
  %p_shl482_cast = zext i11 %tmp_1315 to i15
  %tmp_1316 = add i15 %p_shl481_cast, %p_shl482_cast
  br label %.preheader814

.preheader814:                                    ; preds = %119, %.preheader814.preheader
  %w69 = phi i4 [ %w_70, %119 ], [ 0, %.preheader814.preheader ]
  %exitcond188 = icmp eq i4 %w69, -8
  %empty_525 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %w_70 = add i4 %w69, 1
  br i1 %exitcond188, label %.preheader815.loopexit, label %119

; <label>:119                                     ; preds = %.preheader814
  %tmp_580_cast = zext i4 %w_70 to i15
  %tmp_1326 = add i15 %tmp_1316, %tmp_580_cast
  %tmp_1620_cast = zext i15 %tmp_1326 to i64
  %shuffleunit1_2_outpu_2 = getelementptr [9600 x i8]* @shuffleunit1_2_outpu, i64 0, i64 %tmp_1620_cast
  %buffer0_1_48_8x8_p_V_7 = getelementptr [4800 x i8]* @buffer0_1_48_8x8_p_V, i64 0, i64 %tmp_1620_cast
  %shuffleunit1_2_outpu_3 = load i8* %shuffleunit1_2_outpu_2, align 1
  store i8 %shuffleunit1_2_outpu_3, i8* %buffer0_1_48_8x8_p_V_7, align 1
  br label %.preheader814

; <label>:120                                     ; preds = %.loopexit984
  call fastcc void @shuffle_48_p([4800 x i8]* @buffer0_1_48_8x8_p_V, [9600 x i8]* @shuffleunit1_3_outpu)
  br label %.loopexit983

.loopexit983.loopexit:                            ; preds = %.preheader813
  br label %.loopexit983

.loopexit983:                                     ; preds = %.loopexit983.loopexit, %120
  %co104 = phi i6 [ 0, %120 ], [ %co_105, %.loopexit983.loopexit ]
  %co104_cast = zext i6 %co104 to i7
  %exitcond184 = icmp eq i6 %co104, -16
  %empty_526 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_105 = add i6 %co104, 1
  br i1 %exitcond184, label %.preheader811.preheader, label %.preheader813.preheader

.preheader811.preheader:                          ; preds = %.loopexit983
  br label %.preheader811

.preheader813.preheader:                          ; preds = %.loopexit983
  %tmp_1307 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co104, i3 0)
  %p_shl485_cast = zext i9 %tmp_1307 to i10
  %tmp_1308 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co104, i1 false)
  %p_shl486_cast = zext i7 %tmp_1308 to i10
  %tmp_1309 = add i10 %p_shl486_cast, %p_shl485_cast
  %tmp_576 = add i7 %co104_cast, 48
  %tmp_1310 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_576, i3 0)
  %p_shl483_cast = zext i10 %tmp_1310 to i11
  %tmp_1311 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp_576, i1 false)
  %p_shl484_cast = zext i8 %tmp_1311 to i11
  %tmp_1312 = add i11 %p_shl484_cast, %p_shl483_cast
  br label %.preheader813

.preheader813.loopexit:                           ; preds = %.preheader812
  br label %.preheader813

.preheader813:                                    ; preds = %.preheader813.loopexit, %.preheader813.preheader
  %h72 = phi i4 [ 0, %.preheader813.preheader ], [ %h_73, %.preheader813.loopexit ]
  %exitcond187 = icmp eq i4 %h72, -8
  %empty_527 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %h_73 = add i4 %h72, 1
  br i1 %exitcond187, label %.loopexit983.loopexit, label %.preheader812.preheader

.preheader812.preheader:                          ; preds = %.preheader813
  %tmp_579_cast1 = zext i4 %h_73 to i11
  %tmp_579_cast = zext i4 %h_73 to i10
  %tmp_1318 = add i10 %tmp_579_cast, %tmp_1309
  %tmp_1319 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1318, i3 0)
  %p_shl489_cast = zext i13 %tmp_1319 to i14
  %tmp_1320 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1318, i1 false)
  %p_shl490_cast = zext i11 %tmp_1320 to i14
  %tmp_1321 = add i14 %p_shl489_cast, %p_shl490_cast
  %tmp_1322 = add i11 %tmp_579_cast1, %tmp_1312
  %tmp_1323 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1322, i3 0)
  %p_shl487_cast = zext i14 %tmp_1323 to i15
  %tmp_1324 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_1322, i1 false)
  %p_shl488_cast = zext i12 %tmp_1324 to i15
  %tmp_1325 = add i15 %p_shl487_cast, %p_shl488_cast
  br label %.preheader812

.preheader812:                                    ; preds = %121, %.preheader812.preheader
  %w71 = phi i4 [ %w_72, %121 ], [ 0, %.preheader812.preheader ]
  %exitcond191 = icmp eq i4 %w71, -8
  %empty_528 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %w_72 = add i4 %w71, 1
  br i1 %exitcond191, label %.preheader813.loopexit, label %121

; <label>:121                                     ; preds = %.preheader812
  %tmp_585_cast1 = zext i4 %w_72 to i15
  %tmp_585_cast2 = zext i4 %w_72 to i14
  %tmp_1327 = add i14 %tmp_1321, %tmp_585_cast2
  %tmp_1621_cast = zext i14 %tmp_1327 to i64
  %buffer0_1_48_8x8_p_V_8 = getelementptr [4800 x i8]* @buffer0_1_48_8x8_p_V, i64 0, i64 %tmp_1621_cast
  %tmp_1328 = add i15 %tmp_1325, %tmp_585_cast1
  %tmp_1622_cast = zext i15 %tmp_1328 to i64
  %shuffleunit1_3_outpu = getelementptr [9600 x i8]* @shuffleunit1_3_outpu, i64 0, i64 %tmp_1622_cast
  %shuffleunit1_3_outpu_1 = load i8* %shuffleunit1_3_outpu, align 1
  store i8 %shuffleunit1_3_outpu_1, i8* %buffer0_1_48_8x8_p_V_8, align 1
  br label %.preheader812

.preheader811.loopexit:                           ; preds = %.preheader810
  br label %.preheader811

.preheader811:                                    ; preds = %.preheader811.preheader, %.preheader811.loopexit
  %co106 = phi i5 [ %co_107, %.preheader811.loopexit ], [ 0, %.preheader811.preheader ]
  %co106_cast = zext i5 %co106 to i11
  %exitcond186 = icmp eq i5 %co106, -8
  %empty_529 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_107 = add i5 %co106, 1
  br i1 %exitcond186, label %.preheader808.preheader, label %.preheader810.preheader

.preheader808.preheader:                          ; preds = %.preheader811
  br label %.preheader808

.preheader810.preheader:                          ; preds = %.preheader811
  %tmp_1317 = trunc i5 %co106 to i1
  %p_shl112 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1317, i5 0)
  %p_shl112_cast = zext i6 %p_shl112 to i7
  %p_shl113 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1317, i3 0)
  %p_shl113_cast = zext i4 %p_shl113 to i7
  %tmp_578 = sub i7 %p_shl112_cast, %p_shl113_cast
  %p_lshr_f11_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co106, i32 1, i32 4)
  %tmp_793_cast = zext i4 %p_lshr_f11_cast to i7
  br label %.preheader810

.preheader810.loopexit:                           ; preds = %.preheader809
  br label %.preheader810

.preheader810:                                    ; preds = %.preheader810.loopexit, %.preheader810.preheader
  %ci49 = phi i5 [ 0, %.preheader810.preheader ], [ %ci_50, %.preheader810.loopexit ]
  %ci49_cast = zext i5 %ci49 to i7
  %exitcond190 = icmp eq i5 %ci49, -8
  %empty_530 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_50 = add i5 %ci49, 1
  br i1 %exitcond190, label %.preheader811.loopexit, label %.preheader809.preheader

.preheader809.preheader:                          ; preds = %.preheader810
  %tmp_581 = add i7 %tmp_578, %ci49_cast
  %tmp_583_cast = sext i7 %tmp_581 to i13
  %tmp_584_cast1 = zext i5 %ci49 to i18
  br label %.preheader809

.preheader809:                                    ; preds = %122, %.preheader809.preheader
  %i94 = phi i3 [ %i_95, %122 ], [ 0, %.preheader809.preheader ]
  %exitcond194 = icmp eq i3 %i94, -4
  %empty_531 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %i_95 = add i3 %i94, 1
  br i1 %exitcond194, label %.preheader810.loopexit, label %122

; <label>:122                                     ; preds = %.preheader809
  %tmp_1330 = trunc i3 %i94 to i2
  %p_shl116 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1330, i4 0)
  %p_shl116_cast = zext i6 %p_shl116 to i7
  %p_shl117 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1330, i2 0)
  %p_shl117_cast = zext i4 %p_shl117 to i7
  %tmp_592 = sub i7 %p_shl116_cast, %p_shl117_cast
  %tmp_595 = add i7 %tmp_592, %tmp_793_cast
  %tmp_1331 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_595, i6 0)
  %tmp_1332 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_595, i4 0)
  %p_shl494_cast = sext i11 %tmp_1332 to i13
  %tmp_1333 = sub i13 %tmp_1331, %p_shl494_cast
  %tmp_1334 = add i13 %tmp_583_cast, %tmp_1333
  %tmp_1632_cast = sext i13 %tmp_1334 to i64
  %weights_48_48_1x1_V_11 = getelementptr [2304 x i8]* @weights_48_48_1x1_V, i64 0, i64 %tmp_1632_cast
  %p_shl118 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1330, i5 0)
  %p_shl118_cast = zext i7 %p_shl118 to i8
  %p_shl119 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1330, i3 0)
  %p_shl119_cast = zext i5 %p_shl119 to i8
  %tmp_597 = sub i8 %p_shl118_cast, %p_shl119_cast
  %tmp_810_cast = sext i8 %tmp_597 to i11
  %tmp35 = add i11 -776, %tmp_810_cast
  %tmp_598 = add i11 %tmp35, %co106_cast
  %tmp_1335 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_598, i5 0)
  %p_shl491_cast = zext i16 %tmp_1335 to i17
  %tmp_1336 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_598, i3 0)
  %p_shl492_cast = zext i14 %tmp_1336 to i17
  %tmp_1337 = sub i17 %p_shl491_cast, %p_shl492_cast
  %tmp_1637_cast = sext i17 %tmp_1337 to i18
  %tmp_1338 = add i18 %tmp_584_cast1, %tmp_1637_cast
  %tmp_1638_cast = sext i18 %tmp_1338 to i33
  %shuffle_conv_1x1_V8_11 = add i33 %tmp_1638_cast, %tmp_490_cast
  %shuffle_conv_1x1_V8_39 = sext i33 %shuffle_conv_1x1_V8_11 to i64
  %p3X3_1X1_WEIGHTS_addr_31 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_1x1_V8_39
  %p3X3_1X1_WEIGHTS_load_17 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_31, i32 1)
  %p3X3_1X1_WEIGHTS_addr_88 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_31)
  store i8 %p3X3_1X1_WEIGHTS_addr_88, i8* %weights_48_48_1x1_V_11, align 1
  br label %.preheader809

.preheader808.loopexit:                           ; preds = %.preheader807
  br label %.preheader808

.preheader808:                                    ; preds = %.preheader808.preheader, %.preheader808.loopexit
  %i92 = phi i5 [ %i_93, %.preheader808.loopexit ], [ 0, %.preheader808.preheader ]
  %i93_cast = zext i5 %i92 to i11
  %i93_cast1 = zext i5 %i92 to i7
  %exitcond189 = icmp eq i5 %i92, -8
  %empty_532 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_93 = add i5 %i92, 1
  br i1 %exitcond189, label %124, label %.preheader807.preheader

.preheader807.preheader:                          ; preds = %.preheader808
  br label %.preheader807

.preheader807:                                    ; preds = %.preheader807.preheader, %123
  %k26 = phi i2 [ %k_27, %123 ], [ 0, %.preheader807.preheader ]
  %exitcond193 = icmp eq i2 %k26, -2
  %empty_533 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_27 = add i2 %k26, 1
  br i1 %exitcond193, label %.preheader808.loopexit, label %123

; <label>:123                                     ; preds = %.preheader807
  %tmp_1329 = trunc i2 %k26 to i1
  %p_shl114 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1329, i5 0)
  %p_shl114_cast = zext i6 %p_shl114 to i7
  %p_shl115 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1329, i3 0)
  %p_shl115_cast = zext i4 %p_shl115 to i7
  %tmp_586 = sub i7 %p_shl114_cast, %p_shl115_cast
  %tmp_796_cast = sext i7 %tmp_586 to i11
  %tmp_587 = add i7 %i93_cast1, %tmp_586
  %tmp_797_cast = sext i7 %tmp_587 to i32
  %tmp_588 = zext i32 %tmp_797_cast to i64
  %tmp36 = add i11 -872, %tmp_796_cast
  %tmp_589 = add i11 %tmp36, %i93_cast
  %tmp_591_cast = zext i11 %tmp_589 to i33
  %bias_V14_sum17 = add i33 %tmp_482_cast, %tmp_591_cast
  %bias_V14_sum34_cast = sext i33 %bias_V14_sum17 to i64
  %DATA_BIAS_addr_34 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum34_cast
  %DATA_BIAS_load_34_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_34, i32 1)
  %DATA_BIAS_addr_34_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_34)
  %bias_48_V_addr_17 = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_588
  store i8 %DATA_BIAS_addr_34_re, i8* %bias_48_V_addr_17, align 1
  br label %.preheader807

; <label>:124                                     ; preds = %.preheader808
  call fastcc void @subconv_1x1_8_p([4800 x i8]* @buffer0_1_48_8x8_p_V, [2304 x i8]* @weights_48_48_1x1_V, [48 x i8]* @bias_48_V, [4800 x i8]* @buffer1_1_48_8x8_p_V)
  br label %.loopexit982

.loopexit982.loopexit:                            ; preds = %.preheader806
  br label %.loopexit982

.loopexit982:                                     ; preds = %.loopexit982.loopexit, %124
  %co108 = phi i5 [ 0, %124 ], [ %co_109, %.loopexit982.loopexit ]
  %co109_cast400_cast = zext i5 %co108 to i8
  %co109_cast = zext i5 %co108 to i7
  %exitcond192 = icmp eq i5 %co108, -8
  %empty_534 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_109 = add i5 %co108, 1
  br i1 %exitcond192, label %.preheader803.preheader, label %.preheader806.preheader

.preheader806.preheader:                          ; preds = %.loopexit982
  br label %.preheader806

.preheader803.preheader:                          ; preds = %.loopexit982
  br label %.preheader803

.preheader806.loopexit:                           ; preds = %.preheader805
  br label %.preheader806

.preheader806:                                    ; preds = %.preheader806.preheader, %.preheader806.loopexit
  %w73 = phi i2 [ %w_74, %.preheader806.loopexit ], [ 0, %.preheader806.preheader ]
  %exitcond196 = icmp eq i2 %w73, -1
  %empty_535 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %w_74 = add i2 %w73, 1
  br i1 %exitcond196, label %.loopexit982.loopexit, label %.preheader805.preheader

.preheader805.preheader:                          ; preds = %.preheader806
  %tmp_599_cast1 = zext i2 %w73 to i12
  %tmp_599_cast = zext i2 %w73 to i36
  br label %.preheader805

.preheader805.loopexit:                           ; preds = %.preheader804
  br label %.preheader805

.preheader805:                                    ; preds = %.preheader805.loopexit, %.preheader805.preheader
  %h74 = phi i2 [ 0, %.preheader805.preheader ], [ %h_75, %.preheader805.loopexit ]
  %exitcond199 = icmp eq i2 %h74, -1
  %empty_536 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %h_75 = add i2 %h74, 1
  br i1 %exitcond199, label %.preheader806.loopexit, label %.preheader804.preheader

.preheader804.preheader:                          ; preds = %.preheader805
  %tmp_606 = zext i2 %h74 to i64
  %tmp_606_cast = zext i2 %h74 to i10
  br label %.preheader804

.preheader804:                                    ; preds = %125, %.preheader804.preheader
  %i100 = phi i2 [ %i_101, %125 ], [ 0, %.preheader804.preheader ]
  %exitcond202 = icmp eq i2 %i100, -2
  %empty_537 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %i_101 = add i2 %i100, 1
  br i1 %exitcond202, label %.preheader805.loopexit, label %125

; <label>:125                                     ; preds = %.preheader804
  %tmp_1341 = trunc i2 %i100 to i1
  %p_shl126 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1341, i5 0)
  %p_shl126_cast = zext i6 %p_shl126 to i7
  %p_shl127 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1341, i3 0)
  %p_shl127_cast = zext i4 %p_shl127 to i7
  %tmp_610 = sub i7 %p_shl126_cast, %p_shl127_cast
  %tmp_833_cast_cast = sext i7 %tmp_610 to i8
  %tmp_611 = add i7 %tmp_610, %co109_cast
  %tmp_834_cast = sext i7 %tmp_611 to i32
  %tmp_613_cast1 = zext i32 %tmp_834_cast to i35
  %tmp_1342 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_611, i2 0)
  %tmp_1343 = sext i9 %tmp_1342 to i34
  %p_shl498_cast = zext i34 %tmp_1343 to i35
  %tmp_1344 = sub i35 %p_shl498_cast, %tmp_613_cast1
  %tmp_1647_cast = sext i35 %tmp_1344 to i36
  %tmp_1345 = add i36 %tmp_1647_cast, %tmp_599_cast
  %tmp_1346 = trunc i36 %tmp_1345 to i10
  %tmp_1347 = trunc i36 %tmp_1345 to i8
  %p_shl497_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1347, i2 0)
  %tmp_1348 = sub i10 %p_shl497_cast, %tmp_1346
  %tmp_1349 = add i10 %tmp_1348, %tmp_606_cast
  %tmp_1651_cast = zext i10 %tmp_1349 to i64
  %weights_48_1_3x3_V_a_6 = getelementptr [432 x i8]* @weights_48_1_3x3_V, i64 0, i64 %tmp_1651_cast
  %tmp37 = add i8 -104, %tmp_833_cast_cast
  %tmp_614 = add i8 %co109_cast400_cast, %tmp37
  %tmp_837_cast = sext i8 %tmp_614 to i9
  %tmp_616_cast1 = zext i9 %tmp_837_cast to i12
  %tmp_1350 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_614, i2 0)
  %tmp_1351 = sext i10 %tmp_1350 to i11
  %p_shl496_cast = zext i11 %tmp_1351 to i12
  %tmp_1352 = sub i12 %p_shl496_cast, %tmp_616_cast1
  %tmp_1353 = add i12 %tmp_1352, %tmp_599_cast1
  %tmp_1655_cast = sext i12 %tmp_1353 to i64
  %tmp_1354 = call i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12 %tmp_1353, i2 0)
  %p_shl244 = sext i14 %tmp_1354 to i64
  %tmp_1355 = sub i64 %p_shl244, %tmp_1655_cast
  %tmp_1356 = add i64 %tmp_1355, %tmp_606
  %shuffle_conv_3x3_V6_1 = add i64 %tmp_373, %tmp_1356
  %p3X3_1X1_WEIGHTS_addr_32 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_3x3_V6_1
  %p3X3_1X1_WEIGHTS_load_18 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_32, i32 1)
  %p3X3_1X1_WEIGHTS_addr_89 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_32)
  store i8 %p3X3_1X1_WEIGHTS_addr_89, i8* %weights_48_1_3x3_V_a_6, align 1
  br label %.preheader804

.preheader803.loopexit:                           ; preds = %.preheader802
  br label %.preheader803

.preheader803:                                    ; preds = %.preheader803.preheader, %.preheader803.loopexit
  %i96 = phi i5 [ %i_97, %.preheader803.loopexit ], [ 0, %.preheader803.preheader ]
  %i97_cast = zext i5 %i96 to i11
  %i97_cast1 = zext i5 %i96 to i7
  %exitcond195 = icmp eq i5 %i96, -8
  %empty_538 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_97 = add i5 %i96, 1
  br i1 %exitcond195, label %127, label %.preheader802.preheader

.preheader802.preheader:                          ; preds = %.preheader803
  br label %.preheader802

.preheader802:                                    ; preds = %.preheader802.preheader, %126
  %k28 = phi i2 [ %k_29, %126 ], [ 0, %.preheader802.preheader ]
  %exitcond198 = icmp eq i2 %k28, -2
  %empty_539 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_29 = add i2 %k28, 1
  br i1 %exitcond198, label %.preheader803.loopexit, label %126

; <label>:126                                     ; preds = %.preheader802
  %tmp_1340 = trunc i2 %k28 to i1
  %p_shl120 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1340, i5 0)
  %p_shl120_cast = zext i6 %p_shl120 to i7
  %p_shl121 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1340, i3 0)
  %p_shl121_cast = zext i4 %p_shl121 to i7
  %tmp_601 = sub i7 %p_shl120_cast, %p_shl121_cast
  %tmp_814_cast = sext i7 %tmp_601 to i11
  %tmp_602 = add i7 %i97_cast1, %tmp_601
  %tmp_815_cast = sext i7 %tmp_602 to i32
  %tmp_603 = zext i32 %tmp_815_cast to i64
  %tmp38 = add i11 -824, %tmp_814_cast
  %tmp_604 = add i11 %tmp38, %i97_cast
  %tmp_605_cast = zext i11 %tmp_604 to i33
  %bias_V14_sum18 = add i33 %tmp_482_cast, %tmp_605_cast
  %bias_V14_sum35_cast = sext i33 %bias_V14_sum18 to i64
  %DATA_BIAS_addr_35 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum35_cast
  %DATA_BIAS_load_35_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_35, i32 1)
  %DATA_BIAS_addr_35_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_35)
  %bias_48_V_addr_18 = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_603
  store i8 %DATA_BIAS_addr_35_re, i8* %bias_48_V_addr_18, align 1
  br label %.preheader802

; <label>:127                                     ; preds = %.preheader803
  call fastcc void @subconv_3x3_8_no_rel([4800 x i8]* @buffer1_1_48_8x8_p_V, [432 x i8]* @weights_48_1_3x3_V, [48 x i8]* @bias_48_V, [4800 x i8]* @buffer0_1_48_8x8_p_V)
  br label %.loopexit981

.loopexit981.loopexit:                            ; preds = %.preheader801
  br label %.loopexit981

.loopexit981:                                     ; preds = %.loopexit981.loopexit, %127
  %co110 = phi i5 [ 0, %127 ], [ %co_111, %.loopexit981.loopexit ]
  %co111_cast = zext i5 %co110 to i11
  %exitcond197 = icmp eq i5 %co110, -8
  %empty_540 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_111 = add i5 %co110, 1
  br i1 %exitcond197, label %.preheader799.preheader, label %.preheader801.preheader

.preheader799.preheader:                          ; preds = %.loopexit981
  br label %.preheader799

.preheader801.preheader:                          ; preds = %.loopexit981
  %tmp_1339 = trunc i5 %co110 to i1
  %p_shl122 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1339, i5 0)
  %p_shl122_cast = zext i6 %p_shl122 to i7
  %p_shl123 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1339, i3 0)
  %p_shl123_cast = zext i4 %p_shl123 to i7
  %tmp_600 = sub i7 %p_shl122_cast, %p_shl123_cast
  %p_lshr_f12_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co110, i32 1, i32 4)
  %tmp_822_cast = zext i4 %p_lshr_f12_cast to i7
  br label %.preheader801

.preheader801.loopexit:                           ; preds = %.preheader800
  br label %.preheader801

.preheader801:                                    ; preds = %.preheader801.loopexit, %.preheader801.preheader
  %ci51 = phi i5 [ 0, %.preheader801.preheader ], [ %ci_52, %.preheader801.loopexit ]
  %ci51_cast = zext i5 %ci51 to i7
  %exitcond201 = icmp eq i5 %ci51, -8
  %empty_541 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_52 = add i5 %ci51, 1
  br i1 %exitcond201, label %.loopexit981.loopexit, label %.preheader800.preheader

.preheader800.preheader:                          ; preds = %.preheader801
  %tmp_607 = add i7 %tmp_600, %ci51_cast
  %tmp_608_cast = sext i7 %tmp_607 to i13
  %tmp_609_cast = zext i5 %ci51 to i18
  br label %.preheader800

.preheader800:                                    ; preds = %128, %.preheader800.preheader
  %i102 = phi i3 [ %i_103, %128 ], [ 0, %.preheader800.preheader ]
  %exitcond205 = icmp eq i3 %i102, -4
  %empty_542 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %i_103 = add i3 %i102, 1
  br i1 %exitcond205, label %.preheader801.loopexit, label %128

; <label>:128                                     ; preds = %.preheader800
  %tmp_1361 = trunc i3 %i102 to i2
  %p_shl128 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1361, i4 0)
  %p_shl128_cast = zext i6 %p_shl128 to i7
  %p_shl129 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1361, i2 0)
  %p_shl129_cast = zext i4 %p_shl129 to i7
  %tmp_622 = sub i7 %p_shl128_cast, %p_shl129_cast
  %tmp_623 = add i7 %tmp_622, %tmp_822_cast
  %tmp_1362 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_623, i6 0)
  %tmp_1363 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_623, i4 0)
  %p_shl502_cast = sext i11 %tmp_1363 to i13
  %tmp_1364 = sub i13 %tmp_1362, %p_shl502_cast
  %tmp_1365 = add i13 %tmp_608_cast, %tmp_1364
  %tmp_1671_cast = sext i13 %tmp_1365 to i64
  %weights_48_48_1x1_V_12 = getelementptr [2304 x i8]* @weights_48_48_1x1_V, i64 0, i64 %tmp_1671_cast
  %p_shl130 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1361, i5 0)
  %p_shl130_cast = zext i7 %p_shl130 to i8
  %p_shl131 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1361, i3 0)
  %p_shl131_cast = zext i5 %p_shl131 to i8
  %tmp_624 = sub i8 %p_shl130_cast, %p_shl131_cast
  %tmp_843_cast = sext i8 %tmp_624 to i11
  %tmp39 = add i11 -680, %tmp_843_cast
  %tmp_625 = add i11 %tmp39, %co111_cast
  %tmp_1366 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_625, i5 0)
  %p_shl499_cast = zext i16 %tmp_1366 to i17
  %tmp_1367 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_625, i3 0)
  %p_shl500_cast = zext i14 %tmp_1367 to i17
  %tmp_1368 = sub i17 %p_shl499_cast, %p_shl500_cast
  %tmp_1676_cast = sext i17 %tmp_1368 to i18
  %tmp_1369 = add i18 %tmp_609_cast, %tmp_1676_cast
  %tmp_1677_cast = sext i18 %tmp_1369 to i33
  %shuffle_conv_1x1_V8_12 = add i33 %tmp_1677_cast, %tmp_490_cast
  %shuffle_conv_1x1_V8_40 = sext i33 %shuffle_conv_1x1_V8_12 to i64
  %p3X3_1X1_WEIGHTS_addr_33 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_1x1_V8_40
  %p3X3_1X1_WEIGHTS_load_19 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_33, i32 1)
  %p3X3_1X1_WEIGHTS_addr_90 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_33)
  store i8 %p3X3_1X1_WEIGHTS_addr_90, i8* %weights_48_48_1x1_V_12, align 1
  br label %.preheader800

.preheader799.loopexit:                           ; preds = %.preheader798
  br label %.preheader799

.preheader799:                                    ; preds = %.preheader799.preheader, %.preheader799.loopexit
  %i98 = phi i5 [ %i_99, %.preheader799.loopexit ], [ 0, %.preheader799.preheader ]
  %i99_cast = zext i5 %i98 to i11
  %i99_cast1 = zext i5 %i98 to i7
  %exitcond200 = icmp eq i5 %i98, -8
  %empty_543 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_99 = add i5 %i98, 1
  br i1 %exitcond200, label %130, label %.preheader798.preheader

.preheader798.preheader:                          ; preds = %.preheader799
  br label %.preheader798

.preheader798:                                    ; preds = %.preheader798.preheader, %129
  %k30 = phi i2 [ %k_31, %129 ], [ 0, %.preheader798.preheader ]
  %exitcond204 = icmp eq i2 %k30, -2
  %empty_544 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_31 = add i2 %k30, 1
  br i1 %exitcond204, label %.preheader799.loopexit, label %129

; <label>:129                                     ; preds = %.preheader798
  %tmp_1360 = trunc i2 %k30 to i1
  %p_shl124 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1360, i5 0)
  %p_shl124_cast = zext i6 %p_shl124 to i7
  %p_shl125 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1360, i3 0)
  %p_shl125_cast = zext i4 %p_shl125 to i7
  %tmp_617 = sub i7 %p_shl124_cast, %p_shl125_cast
  %tmp_824_cast = sext i7 %tmp_617 to i11
  %tmp_618 = add i7 %i99_cast1, %tmp_617
  %tmp_825_cast = sext i7 %tmp_618 to i32
  %tmp_619 = zext i32 %tmp_825_cast to i64
  %tmp40 = add i11 -776, %tmp_824_cast
  %tmp_620 = add i11 %tmp40, %i99_cast
  %tmp_621_cast = zext i11 %tmp_620 to i33
  %bias_V14_sum19 = add i33 %tmp_482_cast, %tmp_621_cast
  %bias_V14_sum36_cast = sext i33 %bias_V14_sum19 to i64
  %DATA_BIAS_addr_36 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum36_cast
  %DATA_BIAS_load_36_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_36, i32 1)
  %DATA_BIAS_addr_36_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_36)
  %bias_48_V_addr_19 = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_619
  store i8 %DATA_BIAS_addr_36_re, i8* %bias_48_V_addr_19, align 1
  br label %.preheader798

; <label>:130                                     ; preds = %.preheader799
  call fastcc void @subconv_1x1_8_p([4800 x i8]* @buffer0_1_48_8x8_p_V, [2304 x i8]* @weights_48_48_1x1_V, [48 x i8]* @bias_48_V, [4800 x i8]* @buffer1_1_48_8x8_p_V)
  br label %.loopexit980

.loopexit980.loopexit:                            ; preds = %.preheader797
  br label %.loopexit980

.loopexit980:                                     ; preds = %.loopexit980.loopexit, %130
  %co112 = phi i6 [ 0, %130 ], [ %co_113, %.loopexit980.loopexit ]
  %exitcond203 = icmp eq i6 %co112, -16
  %empty_545 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_113 = add i6 %co112, 1
  br i1 %exitcond203, label %132, label %.preheader797.preheader

.preheader797.preheader:                          ; preds = %.loopexit980
  %tmp_1357 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co112, i3 0)
  %p_shl503_cast = zext i9 %tmp_1357 to i10
  %tmp_1358 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co112, i1 false)
  %p_shl504_cast = zext i7 %tmp_1358 to i10
  %tmp_1359 = add i10 %p_shl504_cast, %p_shl503_cast
  br label %.preheader797

.preheader797.loopexit:                           ; preds = %.preheader796
  br label %.preheader797

.preheader797:                                    ; preds = %.preheader797.loopexit, %.preheader797.preheader
  %h76 = phi i4 [ 0, %.preheader797.preheader ], [ %h_77, %.preheader797.loopexit ]
  %exitcond207 = icmp eq i4 %h76, -8
  %empty_546 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %h_77 = add i4 %h76, 1
  br i1 %exitcond207, label %.loopexit980.loopexit, label %.preheader796.preheader

.preheader796.preheader:                          ; preds = %.preheader797
  %tmp_627_cast = zext i4 %h_77 to i10
  %tmp_1376 = add i10 %tmp_627_cast, %tmp_1359
  %tmp_1377 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1376, i3 0)
  %p_shl505_cast = zext i13 %tmp_1377 to i15
  %tmp_1378 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1376, i1 false)
  %p_shl506_cast = zext i11 %tmp_1378 to i15
  %tmp_1379 = add i15 %p_shl505_cast, %p_shl506_cast
  br label %.preheader796

.preheader796:                                    ; preds = %131, %.preheader796.preheader
  %w75 = phi i4 [ %w_76, %131 ], [ 0, %.preheader796.preheader ]
  %exitcond210 = icmp eq i4 %w75, -8
  %empty_547 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %w_76 = add i4 %w75, 1
  br i1 %exitcond210, label %.preheader797.loopexit, label %131

; <label>:131                                     ; preds = %.preheader796
  %tmp_630_cast1 = zext i4 %w_76 to i15
  %tmp_1389 = add i15 %tmp_1379, %tmp_630_cast1
  %tmp_1698_cast = zext i15 %tmp_1389 to i64
  %buffer0_1_48_8x8_p_V_9 = getelementptr [4800 x i8]* @buffer0_1_48_8x8_p_V, i64 0, i64 %tmp_1698_cast
  %shuffleunit1_3_outpu_2 = getelementptr [9600 x i8]* @shuffleunit1_3_outpu, i64 0, i64 %tmp_1698_cast
  %shuffleunit1_3_outpu_3 = load i8* %shuffleunit1_3_outpu_2, align 1
  store i8 %shuffleunit1_3_outpu_3, i8* %buffer0_1_48_8x8_p_V_9, align 1
  br label %.preheader796

; <label>:132                                     ; preds = %.loopexit980
  call fastcc void @shuffle_48_p([4800 x i8]* @buffer0_1_48_8x8_p_V, [9600 x i8]* @shuffleunit1_4_outpu)
  br label %.loopexit979

.loopexit979.loopexit:                            ; preds = %.preheader795
  br label %.loopexit979

.loopexit979:                                     ; preds = %.loopexit979.loopexit, %132
  %co114 = phi i6 [ 0, %132 ], [ %co_115, %.loopexit979.loopexit ]
  %co114_cast = zext i6 %co114 to i7
  %exitcond206 = icmp eq i6 %co114, -16
  %empty_548 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_115 = add i6 %co114, 1
  br i1 %exitcond206, label %.preheader793.preheader, label %.preheader795.preheader

.preheader793.preheader:                          ; preds = %.loopexit979
  br label %.preheader793

.preheader795.preheader:                          ; preds = %.loopexit979
  %tmp_1370 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co114, i3 0)
  %p_shl509_cast = zext i9 %tmp_1370 to i10
  %tmp_1371 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co114, i1 false)
  %p_shl510_cast = zext i7 %tmp_1371 to i10
  %tmp_1372 = add i10 %p_shl510_cast, %p_shl509_cast
  %tmp_626 = add i7 %co114_cast, 48
  %tmp_1373 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_626, i3 0)
  %p_shl507_cast = zext i10 %tmp_1373 to i11
  %tmp_1374 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp_626, i1 false)
  %p_shl508_cast = zext i8 %tmp_1374 to i11
  %tmp_1375 = add i11 %p_shl508_cast, %p_shl507_cast
  br label %.preheader795

.preheader795.loopexit:                           ; preds = %.preheader794
  br label %.preheader795

.preheader795:                                    ; preds = %.preheader795.loopexit, %.preheader795.preheader
  %h78 = phi i4 [ 0, %.preheader795.preheader ], [ %h_79, %.preheader795.loopexit ]
  %exitcond209 = icmp eq i4 %h78, -8
  %empty_549 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %h_79 = add i4 %h78, 1
  br i1 %exitcond209, label %.loopexit979.loopexit, label %.preheader794.preheader

.preheader794.preheader:                          ; preds = %.preheader795
  %tmp_629_cast1 = zext i4 %h_79 to i10
  %tmp_629_cast = zext i4 %h_79 to i11
  %tmp_1381 = add i11 %tmp_629_cast, %tmp_1375
  %tmp_1382 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1381, i3 0)
  %p_shl513_cast = zext i14 %tmp_1382 to i15
  %tmp_1383 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_1381, i1 false)
  %p_shl514_cast = zext i12 %tmp_1383 to i15
  %tmp_1384 = add i15 %p_shl513_cast, %p_shl514_cast
  %tmp_1385 = add i10 %tmp_629_cast1, %tmp_1372
  %tmp_1386 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1385, i3 0)
  %p_shl511_cast = zext i13 %tmp_1386 to i14
  %tmp_1387 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1385, i1 false)
  %p_shl512_cast = zext i11 %tmp_1387 to i14
  %tmp_1388 = add i14 %p_shl511_cast, %p_shl512_cast
  br label %.preheader794

.preheader794:                                    ; preds = %133, %.preheader794.preheader
  %w77 = phi i4 [ %w_78, %133 ], [ 0, %.preheader794.preheader ]
  %exitcond213 = icmp eq i4 %w77, -8
  %empty_550 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %w_78 = add i4 %w77, 1
  br i1 %exitcond213, label %.preheader795.loopexit, label %133

; <label>:133                                     ; preds = %.preheader794
  %tmp_635_cast1 = zext i4 %w_78 to i14
  %tmp_635_cast2 = zext i4 %w_78 to i15
  %tmp_1390 = add i15 %tmp_1384, %tmp_635_cast2
  %tmp_1699_cast = zext i15 %tmp_1390 to i64
  %shuffleunit1_4_outpu = getelementptr [9600 x i8]* @shuffleunit1_4_outpu, i64 0, i64 %tmp_1699_cast
  %tmp_1391 = add i14 %tmp_1388, %tmp_635_cast1
  %tmp_1700_cast = zext i14 %tmp_1391 to i64
  %buffer0_1_48_8x8_p_V_10 = getelementptr [4800 x i8]* @buffer0_1_48_8x8_p_V, i64 0, i64 %tmp_1700_cast
  %shuffleunit1_4_outpu_1 = load i8* %shuffleunit1_4_outpu, align 1
  store i8 %shuffleunit1_4_outpu_1, i8* %buffer0_1_48_8x8_p_V_10, align 1
  br label %.preheader794

.preheader793.loopexit:                           ; preds = %.preheader792
  br label %.preheader793

.preheader793:                                    ; preds = %.preheader793.preheader, %.preheader793.loopexit
  %co116 = phi i5 [ %co_117, %.preheader793.loopexit ], [ 0, %.preheader793.preheader ]
  %co116_cast = zext i5 %co116 to i11
  %exitcond208 = icmp eq i5 %co116, -8
  %empty_551 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_117 = add i5 %co116, 1
  br i1 %exitcond208, label %.preheader790.preheader, label %.preheader792.preheader

.preheader790.preheader:                          ; preds = %.preheader793
  br label %.preheader790

.preheader792.preheader:                          ; preds = %.preheader793
  %tmp_1380 = trunc i5 %co116 to i1
  %p_shl132 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1380, i5 0)
  %p_shl132_cast = zext i6 %p_shl132 to i7
  %p_shl133 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1380, i3 0)
  %p_shl133_cast = zext i4 %p_shl133 to i7
  %tmp_628 = sub i7 %p_shl132_cast, %p_shl133_cast
  %p_lshr_f13_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co116, i32 1, i32 4)
  %tmp_853_cast = zext i4 %p_lshr_f13_cast to i7
  br label %.preheader792

.preheader792.loopexit:                           ; preds = %.preheader791
  br label %.preheader792

.preheader792:                                    ; preds = %.preheader792.loopexit, %.preheader792.preheader
  %ci53 = phi i5 [ 0, %.preheader792.preheader ], [ %ci_54, %.preheader792.loopexit ]
  %ci53_cast = zext i5 %ci53 to i7
  %exitcond212 = icmp eq i5 %ci53, -8
  %empty_552 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_54 = add i5 %ci53, 1
  br i1 %exitcond212, label %.preheader793.loopexit, label %.preheader791.preheader

.preheader791.preheader:                          ; preds = %.preheader792
  %tmp_631 = add i7 %tmp_628, %ci53_cast
  %tmp_633_cast = sext i7 %tmp_631 to i13
  %tmp_634_cast = zext i5 %ci53 to i18
  br label %.preheader791

.preheader791:                                    ; preds = %134, %.preheader791.preheader
  %i106 = phi i3 [ %i_107, %134 ], [ 0, %.preheader791.preheader ]
  %exitcond216 = icmp eq i3 %i106, -4
  %empty_553 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %i_107 = add i3 %i106, 1
  br i1 %exitcond216, label %.preheader792.loopexit, label %134

; <label>:134                                     ; preds = %.preheader791
  %tmp_1393 = trunc i3 %i106 to i2
  %p_shl136 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1393, i4 0)
  %p_shl136_cast = zext i6 %p_shl136 to i7
  %p_shl137 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1393, i2 0)
  %p_shl137_cast = zext i4 %p_shl137 to i7
  %tmp_642 = sub i7 %p_shl136_cast, %p_shl137_cast
  %tmp_645 = add i7 %tmp_642, %tmp_853_cast
  %tmp_1394 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_645, i6 0)
  %tmp_1395 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_645, i4 0)
  %p_shl518_cast = sext i11 %tmp_1395 to i13
  %tmp_1396 = sub i13 %tmp_1394, %p_shl518_cast
  %tmp_1397 = add i13 %tmp_633_cast, %tmp_1396
  %tmp_1710_cast = sext i13 %tmp_1397 to i64
  %weights_48_48_1x1_V_13 = getelementptr [2304 x i8]* @weights_48_48_1x1_V, i64 0, i64 %tmp_1710_cast
  %p_shl138 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1393, i5 0)
  %p_shl138_cast = zext i7 %p_shl138 to i8
  %p_shl139 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1393, i3 0)
  %p_shl139_cast = zext i5 %p_shl139 to i8
  %tmp_647 = sub i8 %p_shl138_cast, %p_shl139_cast
  %tmp_870_cast = sext i8 %tmp_647 to i11
  %tmp41 = add i11 -584, %tmp_870_cast
  %tmp_648 = add i11 %tmp41, %co116_cast
  %tmp_1398 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_648, i5 0)
  %p_shl515_cast = zext i16 %tmp_1398 to i17
  %tmp_1399 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_648, i3 0)
  %p_shl516_cast = zext i14 %tmp_1399 to i17
  %tmp_1400 = sub i17 %p_shl515_cast, %p_shl516_cast
  %tmp_1715_cast = sext i17 %tmp_1400 to i18
  %tmp_1401 = add i18 %tmp_634_cast, %tmp_1715_cast
  %tmp_1716_cast = sext i18 %tmp_1401 to i33
  %shuffle_conv_1x1_V8_13 = add i33 %tmp_1716_cast, %tmp_490_cast
  %shuffle_conv_1x1_V8_41 = sext i33 %shuffle_conv_1x1_V8_13 to i64
  %p3X3_1X1_WEIGHTS_addr_34 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_1x1_V8_41
  %p3X3_1X1_WEIGHTS_load_20 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_34, i32 1)
  %p3X3_1X1_WEIGHTS_addr_91 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_34)
  store i8 %p3X3_1X1_WEIGHTS_addr_91, i8* %weights_48_48_1x1_V_13, align 1
  br label %.preheader791

.preheader790.loopexit:                           ; preds = %.preheader789
  br label %.preheader790

.preheader790:                                    ; preds = %.preheader790.preheader, %.preheader790.loopexit
  %i104 = phi i5 [ %i_105, %.preheader790.loopexit ], [ 0, %.preheader790.preheader ]
  %i105_cast = zext i5 %i104 to i11
  %i105_cast1 = zext i5 %i104 to i7
  %exitcond211 = icmp eq i5 %i104, -8
  %empty_554 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_105 = add i5 %i104, 1
  br i1 %exitcond211, label %136, label %.preheader789.preheader

.preheader789.preheader:                          ; preds = %.preheader790
  br label %.preheader789

.preheader789:                                    ; preds = %.preheader789.preheader, %135
  %k32 = phi i2 [ %k_33, %135 ], [ 0, %.preheader789.preheader ]
  %exitcond215 = icmp eq i2 %k32, -2
  %empty_555 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_33 = add i2 %k32, 1
  br i1 %exitcond215, label %.preheader790.loopexit, label %135

; <label>:135                                     ; preds = %.preheader789
  %tmp_1392 = trunc i2 %k32 to i1
  %p_shl134 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1392, i5 0)
  %p_shl134_cast = zext i6 %p_shl134 to i7
  %p_shl135 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1392, i3 0)
  %p_shl135_cast = zext i4 %p_shl135 to i7
  %tmp_636 = sub i7 %p_shl134_cast, %p_shl135_cast
  %tmp_856_cast = sext i7 %tmp_636 to i11
  %tmp_637 = add i7 %i105_cast1, %tmp_636
  %tmp_857_cast = sext i7 %tmp_637 to i32
  %tmp_638 = zext i32 %tmp_857_cast to i64
  %tmp42 = add i11 -728, %tmp_856_cast
  %tmp_639 = add i11 %tmp42, %i105_cast
  %tmp_641_cast = zext i11 %tmp_639 to i33
  %bias_V14_sum20 = add i33 %tmp_482_cast, %tmp_641_cast
  %bias_V14_sum37_cast = sext i33 %bias_V14_sum20 to i64
  %DATA_BIAS_addr_37 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum37_cast
  %DATA_BIAS_load_37_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_37, i32 1)
  %DATA_BIAS_addr_37_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_37)
  %bias_48_V_addr_20 = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_638
  store i8 %DATA_BIAS_addr_37_re, i8* %bias_48_V_addr_20, align 1
  br label %.preheader789

; <label>:136                                     ; preds = %.preheader790
  call fastcc void @subconv_1x1_8_p([4800 x i8]* @buffer0_1_48_8x8_p_V, [2304 x i8]* @weights_48_48_1x1_V, [48 x i8]* @bias_48_V, [4800 x i8]* @buffer1_1_48_8x8_p_V)
  br label %.loopexit978

.loopexit978.loopexit:                            ; preds = %.preheader788
  br label %.loopexit978

.loopexit978:                                     ; preds = %.loopexit978.loopexit, %136
  %co118 = phi i5 [ 0, %136 ], [ %co_119, %.loopexit978.loopexit ]
  %co119_cast362_cast = zext i5 %co118 to i8
  %co119_cast = zext i5 %co118 to i7
  %exitcond214 = icmp eq i5 %co118, -8
  %empty_556 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_119 = add i5 %co118, 1
  br i1 %exitcond214, label %.preheader785.preheader, label %.preheader788.preheader

.preheader788.preheader:                          ; preds = %.loopexit978
  br label %.preheader788

.preheader785.preheader:                          ; preds = %.loopexit978
  br label %.preheader785

.preheader788.loopexit:                           ; preds = %.preheader787
  br label %.preheader788

.preheader788:                                    ; preds = %.preheader788.preheader, %.preheader788.loopexit
  %w79 = phi i2 [ %w_80, %.preheader788.loopexit ], [ 0, %.preheader788.preheader ]
  %exitcond218 = icmp eq i2 %w79, -1
  %empty_557 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %w_80 = add i2 %w79, 1
  br i1 %exitcond218, label %.loopexit978.loopexit, label %.preheader787.preheader

.preheader787.preheader:                          ; preds = %.preheader788
  %tmp_649_cast1 = zext i2 %w79 to i13
  %tmp_649_cast = zext i2 %w79 to i36
  br label %.preheader787

.preheader787.loopexit:                           ; preds = %.preheader786
  br label %.preheader787

.preheader787:                                    ; preds = %.preheader787.loopexit, %.preheader787.preheader
  %h80 = phi i2 [ 0, %.preheader787.preheader ], [ %h_81, %.preheader787.loopexit ]
  %exitcond221 = icmp eq i2 %h80, -1
  %empty_558 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %h_81 = add i2 %h80, 1
  br i1 %exitcond221, label %.preheader788.loopexit, label %.preheader786.preheader

.preheader786.preheader:                          ; preds = %.preheader787
  %tmp_656 = zext i2 %h80 to i64
  %tmp_656_cast = zext i2 %h80 to i10
  br label %.preheader786

.preheader786:                                    ; preds = %137, %.preheader786.preheader
  %i112 = phi i2 [ %i_113, %137 ], [ 0, %.preheader786.preheader ]
  %exitcond224 = icmp eq i2 %i112, -2
  %empty_559 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %i_113 = add i2 %i112, 1
  br i1 %exitcond224, label %.preheader787.loopexit, label %137

; <label>:137                                     ; preds = %.preheader786
  %tmp_1404 = trunc i2 %i112 to i1
  %p_shl146 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1404, i5 0)
  %p_shl146_cast = zext i6 %p_shl146 to i7
  %p_shl147 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1404, i3 0)
  %p_shl147_cast = zext i4 %p_shl147 to i7
  %tmp_660 = sub i7 %p_shl146_cast, %p_shl147_cast
  %tmp_893_cast_cast = sext i7 %tmp_660 to i8
  %tmp_661 = add i7 %tmp_660, %co119_cast
  %tmp_894_cast = sext i7 %tmp_661 to i32
  %tmp_663_cast1 = zext i32 %tmp_894_cast to i35
  %tmp_1405 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_661, i2 0)
  %tmp_1406 = sext i9 %tmp_1405 to i34
  %p_shl522_cast = zext i34 %tmp_1406 to i35
  %tmp_1407 = sub i35 %p_shl522_cast, %tmp_663_cast1
  %tmp_1725_cast = sext i35 %tmp_1407 to i36
  %tmp_1408 = add i36 %tmp_1725_cast, %tmp_649_cast
  %tmp_1409 = trunc i36 %tmp_1408 to i10
  %tmp_1410 = trunc i36 %tmp_1408 to i8
  %p_shl521_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1410, i2 0)
  %tmp_1411 = sub i10 %p_shl521_cast, %tmp_1409
  %tmp_1412 = add i10 %tmp_1411, %tmp_656_cast
  %tmp_1729_cast = zext i10 %tmp_1412 to i64
  %weights_48_1_3x3_V_a_7 = getelementptr [432 x i8]* @weights_48_1_3x3_V, i64 0, i64 %tmp_1729_cast
  %tmp43 = add i8 -56, %tmp_893_cast_cast
  %tmp_664 = add i8 %co119_cast362_cast, %tmp43
  %tmp_897_cast = sext i8 %tmp_664 to i9
  %tmp_666_cast = zext i9 %tmp_897_cast to i12
  %tmp_1413 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_664, i2 0)
  %tmp_1414 = sext i10 %tmp_1413 to i11
  %p_shl520_cast = zext i11 %tmp_1414 to i12
  %tmp_1415 = sub i12 %p_shl520_cast, %tmp_666_cast
  %tmp_1732_cast = sext i12 %tmp_1415 to i13
  %tmp_1416 = add i13 %tmp_1732_cast, %tmp_649_cast1
  %tmp_1733_cast = sext i13 %tmp_1416 to i64
  %tmp_1417 = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1416, i2 0)
  %p_shl249 = sext i15 %tmp_1417 to i64
  %tmp_1418 = sub i64 %p_shl249, %tmp_1733_cast
  %tmp_1419 = add i64 %tmp_1418, %tmp_656
  %shuffle_conv_3x3_V6_2 = add i64 %tmp_373, %tmp_1419
  %p3X3_1X1_WEIGHTS_addr_35 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_3x3_V6_2
  %p3X3_1X1_WEIGHTS_load_21 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_35, i32 1)
  %p3X3_1X1_WEIGHTS_addr_92 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_35)
  store i8 %p3X3_1X1_WEIGHTS_addr_92, i8* %weights_48_1_3x3_V_a_7, align 1
  br label %.preheader786

.preheader785.loopexit:                           ; preds = %.preheader784
  br label %.preheader785

.preheader785:                                    ; preds = %.preheader785.preheader, %.preheader785.loopexit
  %i108 = phi i5 [ %i_109, %.preheader785.loopexit ], [ 0, %.preheader785.preheader ]
  %i109_cast = zext i5 %i108 to i11
  %i109_cast1 = zext i5 %i108 to i7
  %exitcond217 = icmp eq i5 %i108, -8
  %empty_560 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_109 = add i5 %i108, 1
  br i1 %exitcond217, label %139, label %.preheader784.preheader

.preheader784.preheader:                          ; preds = %.preheader785
  br label %.preheader784

.preheader784:                                    ; preds = %.preheader784.preheader, %138
  %k34 = phi i2 [ %k_35, %138 ], [ 0, %.preheader784.preheader ]
  %exitcond220 = icmp eq i2 %k34, -2
  %empty_561 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_35 = add i2 %k34, 1
  br i1 %exitcond220, label %.preheader785.loopexit, label %138

; <label>:138                                     ; preds = %.preheader784
  %tmp_1403 = trunc i2 %k34 to i1
  %p_shl140 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1403, i5 0)
  %p_shl140_cast = zext i6 %p_shl140 to i7
  %p_shl141 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1403, i3 0)
  %p_shl141_cast = zext i4 %p_shl141 to i7
  %tmp_651 = sub i7 %p_shl140_cast, %p_shl141_cast
  %tmp_874_cast = sext i7 %tmp_651 to i11
  %tmp_652 = add i7 %i109_cast1, %tmp_651
  %tmp_875_cast = sext i7 %tmp_652 to i32
  %tmp_653 = zext i32 %tmp_875_cast to i64
  %tmp44 = add i11 -680, %tmp_874_cast
  %tmp_654 = add i11 %tmp44, %i109_cast
  %tmp_655_cast = zext i11 %tmp_654 to i33
  %bias_V14_sum21 = add i33 %tmp_482_cast, %tmp_655_cast
  %bias_V14_sum38_cast = sext i33 %bias_V14_sum21 to i64
  %DATA_BIAS_addr_38 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum38_cast
  %DATA_BIAS_load_38_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_38, i32 1)
  %DATA_BIAS_addr_38_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_38)
  %bias_48_V_addr_21 = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_653
  store i8 %DATA_BIAS_addr_38_re, i8* %bias_48_V_addr_21, align 1
  br label %.preheader784

; <label>:139                                     ; preds = %.preheader785
  call fastcc void @subconv_3x3_8_no_rel([4800 x i8]* @buffer1_1_48_8x8_p_V, [432 x i8]* @weights_48_1_3x3_V, [48 x i8]* @bias_48_V, [4800 x i8]* @buffer0_1_48_8x8_p_V)
  br label %.loopexit977

.loopexit977.loopexit:                            ; preds = %.preheader783
  br label %.loopexit977

.loopexit977:                                     ; preds = %.loopexit977.loopexit, %139
  %co120 = phi i5 [ 0, %139 ], [ %co_121, %.loopexit977.loopexit ]
  %co121_cast = zext i5 %co120 to i11
  %exitcond219 = icmp eq i5 %co120, -8
  %empty_562 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_121 = add i5 %co120, 1
  br i1 %exitcond219, label %.preheader781.preheader, label %.preheader783.preheader

.preheader781.preheader:                          ; preds = %.loopexit977
  br label %.preheader781

.preheader783.preheader:                          ; preds = %.loopexit977
  %tmp_1402 = trunc i5 %co120 to i1
  %p_shl142 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1402, i5 0)
  %p_shl142_cast = zext i6 %p_shl142 to i7
  %p_shl143 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1402, i3 0)
  %p_shl143_cast = zext i4 %p_shl143 to i7
  %tmp_650 = sub i7 %p_shl142_cast, %p_shl143_cast
  %p_lshr_f14_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co120, i32 1, i32 4)
  %tmp_882_cast = zext i4 %p_lshr_f14_cast to i7
  br label %.preheader783

.preheader783.loopexit:                           ; preds = %.preheader782
  br label %.preheader783

.preheader783:                                    ; preds = %.preheader783.loopexit, %.preheader783.preheader
  %ci55 = phi i5 [ 0, %.preheader783.preheader ], [ %ci_56, %.preheader783.loopexit ]
  %ci55_cast = zext i5 %ci55 to i7
  %exitcond223 = icmp eq i5 %ci55, -8
  %empty_563 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_56 = add i5 %ci55, 1
  br i1 %exitcond223, label %.loopexit977.loopexit, label %.preheader782.preheader

.preheader782.preheader:                          ; preds = %.preheader783
  %tmp_657 = add i7 %tmp_650, %ci55_cast
  %tmp_658_cast = sext i7 %tmp_657 to i13
  %tmp_659_cast = zext i5 %ci55 to i18
  br label %.preheader782

.preheader782:                                    ; preds = %140, %.preheader782.preheader
  %i114 = phi i3 [ %i_115, %140 ], [ 0, %.preheader782.preheader ]
  %exitcond227 = icmp eq i3 %i114, -4
  %empty_564 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %i_115 = add i3 %i114, 1
  br i1 %exitcond227, label %.preheader783.loopexit, label %140

; <label>:140                                     ; preds = %.preheader782
  %tmp_1424 = trunc i3 %i114 to i2
  %p_shl148 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1424, i4 0)
  %p_shl148_cast = zext i6 %p_shl148 to i7
  %p_shl149 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1424, i2 0)
  %p_shl149_cast = zext i4 %p_shl149 to i7
  %tmp_672 = sub i7 %p_shl148_cast, %p_shl149_cast
  %tmp_673 = add i7 %tmp_672, %tmp_882_cast
  %tmp_1425 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_673, i6 0)
  %tmp_1426 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_673, i4 0)
  %p_shl526_cast = sext i11 %tmp_1426 to i13
  %tmp_1427 = sub i13 %tmp_1425, %p_shl526_cast
  %tmp_1428 = add i13 %tmp_658_cast, %tmp_1427
  %tmp_1749_cast = sext i13 %tmp_1428 to i64
  %weights_48_48_1x1_V_14 = getelementptr [2304 x i8]* @weights_48_48_1x1_V, i64 0, i64 %tmp_1749_cast
  %p_shl150 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1424, i5 0)
  %p_shl150_cast = zext i7 %p_shl150 to i8
  %p_shl151 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1424, i3 0)
  %p_shl151_cast = zext i5 %p_shl151 to i8
  %tmp_674 = sub i8 %p_shl150_cast, %p_shl151_cast
  %tmp_903_cast = sext i8 %tmp_674 to i11
  %tmp45 = add i11 -488, %tmp_903_cast
  %tmp_675 = add i11 %tmp45, %co121_cast
  %tmp_1429 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_675, i5 0)
  %p_shl523_cast = zext i16 %tmp_1429 to i17
  %tmp_1430 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_675, i3 0)
  %p_shl524_cast = zext i14 %tmp_1430 to i17
  %tmp_1431 = sub i17 %p_shl523_cast, %p_shl524_cast
  %tmp_1754_cast = sext i17 %tmp_1431 to i18
  %tmp_1432 = add i18 %tmp_659_cast, %tmp_1754_cast
  %tmp_1755_cast = sext i18 %tmp_1432 to i33
  %shuffle_conv_1x1_V8_14 = add i33 %tmp_1755_cast, %tmp_490_cast
  %shuffle_conv_1x1_V8_42 = sext i33 %shuffle_conv_1x1_V8_14 to i64
  %p3X3_1X1_WEIGHTS_addr_36 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_1x1_V8_42
  %p3X3_1X1_WEIGHTS_load_22 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_36, i32 1)
  %p3X3_1X1_WEIGHTS_addr_93 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_36)
  store i8 %p3X3_1X1_WEIGHTS_addr_93, i8* %weights_48_48_1x1_V_14, align 1
  br label %.preheader782

.preheader781.loopexit:                           ; preds = %.preheader780
  br label %.preheader781

.preheader781:                                    ; preds = %.preheader781.preheader, %.preheader781.loopexit
  %i110 = phi i5 [ %i_111, %.preheader781.loopexit ], [ 0, %.preheader781.preheader ]
  %i111_cast = zext i5 %i110 to i11
  %i111_cast1 = zext i5 %i110 to i7
  %exitcond222 = icmp eq i5 %i110, -8
  %empty_565 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_111 = add i5 %i110, 1
  br i1 %exitcond222, label %142, label %.preheader780.preheader

.preheader780.preheader:                          ; preds = %.preheader781
  br label %.preheader780

.preheader780:                                    ; preds = %.preheader780.preheader, %141
  %k36 = phi i2 [ %k_37, %141 ], [ 0, %.preheader780.preheader ]
  %exitcond226 = icmp eq i2 %k36, -2
  %empty_566 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_37 = add i2 %k36, 1
  br i1 %exitcond226, label %.preheader781.loopexit, label %141

; <label>:141                                     ; preds = %.preheader780
  %tmp_1423 = trunc i2 %k36 to i1
  %p_shl144 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1423, i5 0)
  %p_shl144_cast = zext i6 %p_shl144 to i7
  %p_shl145 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1423, i3 0)
  %p_shl145_cast = zext i4 %p_shl145 to i7
  %tmp_667 = sub i7 %p_shl144_cast, %p_shl145_cast
  %tmp_884_cast = sext i7 %tmp_667 to i11
  %tmp_668 = add i7 %i111_cast1, %tmp_667
  %tmp_885_cast = sext i7 %tmp_668 to i32
  %tmp_669 = zext i32 %tmp_885_cast to i64
  %tmp46 = add i11 -632, %tmp_884_cast
  %tmp_670 = add i11 %tmp46, %i111_cast
  %tmp_671_cast = zext i11 %tmp_670 to i33
  %bias_V14_sum22 = add i33 %tmp_482_cast, %tmp_671_cast
  %bias_V14_sum39_cast = sext i33 %bias_V14_sum22 to i64
  %DATA_BIAS_addr_39 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum39_cast
  %DATA_BIAS_load_39_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_39, i32 1)
  %DATA_BIAS_addr_39_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_39)
  %bias_48_V_addr_22 = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_669
  store i8 %DATA_BIAS_addr_39_re, i8* %bias_48_V_addr_22, align 1
  br label %.preheader780

; <label>:142                                     ; preds = %.preheader781
  call fastcc void @subconv_1x1_8_p([4800 x i8]* @buffer0_1_48_8x8_p_V, [2304 x i8]* @weights_48_48_1x1_V, [48 x i8]* @bias_48_V, [4800 x i8]* @buffer1_1_48_8x8_p_V)
  br label %.loopexit976

.loopexit976.loopexit:                            ; preds = %.preheader779
  br label %.loopexit976

.loopexit976:                                     ; preds = %.loopexit976.loopexit, %142
  %co122 = phi i6 [ 0, %142 ], [ %co_123, %.loopexit976.loopexit ]
  %exitcond225 = icmp eq i6 %co122, -16
  %empty_567 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_123 = add i6 %co122, 1
  br i1 %exitcond225, label %144, label %.preheader779.preheader

.preheader779.preheader:                          ; preds = %.loopexit976
  %tmp_1420 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co122, i3 0)
  %p_shl527_cast = zext i9 %tmp_1420 to i10
  %tmp_1421 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co122, i1 false)
  %p_shl528_cast = zext i7 %tmp_1421 to i10
  %tmp_1422 = add i10 %p_shl528_cast, %p_shl527_cast
  br label %.preheader779

.preheader779.loopexit:                           ; preds = %.preheader778
  br label %.preheader779

.preheader779:                                    ; preds = %.preheader779.loopexit, %.preheader779.preheader
  %h82 = phi i4 [ 0, %.preheader779.preheader ], [ %h_83, %.preheader779.loopexit ]
  %exitcond229 = icmp eq i4 %h82, -8
  %empty_568 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %h_83 = add i4 %h82, 1
  br i1 %exitcond229, label %.loopexit976.loopexit, label %.preheader778.preheader

.preheader778.preheader:                          ; preds = %.preheader779
  %tmp_677_cast1 = zext i4 %h_83 to i10
  %tmp_1439 = add i10 %tmp_677_cast1, %tmp_1422
  %tmp_1440 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1439, i3 0)
  %p_shl529_cast = zext i13 %tmp_1440 to i15
  %tmp_1441 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1439, i1 false)
  %p_shl530_cast = zext i11 %tmp_1441 to i15
  %tmp_1442 = add i15 %p_shl529_cast, %p_shl530_cast
  br label %.preheader778

.preheader778:                                    ; preds = %143, %.preheader778.preheader
  %w81 = phi i4 [ %w_82, %143 ], [ 0, %.preheader778.preheader ]
  %exitcond232 = icmp eq i4 %w81, -8
  %empty_569 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %w_82 = add i4 %w81, 1
  br i1 %exitcond232, label %.preheader779.loopexit, label %143

; <label>:143                                     ; preds = %.preheader778
  %tmp_680_cast1 = zext i4 %w_82 to i15
  %tmp_1452 = add i15 %tmp_1442, %tmp_680_cast1
  %tmp_1776_cast = zext i15 %tmp_1452 to i64
  %shuffleunit1_4_outpu_2 = getelementptr [9600 x i8]* @shuffleunit1_4_outpu, i64 0, i64 %tmp_1776_cast
  %buffer0_1_48_8x8_p_V_11 = getelementptr [4800 x i8]* @buffer0_1_48_8x8_p_V, i64 0, i64 %tmp_1776_cast
  %shuffleunit1_4_outpu_3 = load i8* %shuffleunit1_4_outpu_2, align 1
  store i8 %shuffleunit1_4_outpu_3, i8* %buffer0_1_48_8x8_p_V_11, align 1
  br label %.preheader778

; <label>:144                                     ; preds = %.loopexit976
  call fastcc void @shuffle_48_p([4800 x i8]* @buffer0_1_48_8x8_p_V, [9600 x i8]* @shuffleunit1_5_outpu)
  br label %.loopexit975

.loopexit975.loopexit:                            ; preds = %.preheader777
  br label %.loopexit975

.loopexit975:                                     ; preds = %.loopexit975.loopexit, %144
  %co124 = phi i6 [ 0, %144 ], [ %co_125, %.loopexit975.loopexit ]
  %co124_cast = zext i6 %co124 to i7
  %exitcond228 = icmp eq i6 %co124, -16
  %empty_570 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_125 = add i6 %co124, 1
  br i1 %exitcond228, label %.preheader775.preheader, label %.preheader777.preheader

.preheader775.preheader:                          ; preds = %.loopexit975
  br label %.preheader775

.preheader777.preheader:                          ; preds = %.loopexit975
  %tmp_1433 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co124, i3 0)
  %p_shl533_cast = zext i9 %tmp_1433 to i10
  %tmp_1434 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co124, i1 false)
  %p_shl534_cast = zext i7 %tmp_1434 to i10
  %tmp_1435 = add i10 %p_shl534_cast, %p_shl533_cast
  %tmp_676 = add i7 %co124_cast, 48
  %tmp_1436 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_676, i3 0)
  %p_shl531_cast = zext i10 %tmp_1436 to i11
  %tmp_1437 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp_676, i1 false)
  %p_shl532_cast = zext i8 %tmp_1437 to i11
  %tmp_1438 = add i11 %p_shl532_cast, %p_shl531_cast
  br label %.preheader777

.preheader777.loopexit:                           ; preds = %.preheader776
  br label %.preheader777

.preheader777:                                    ; preds = %.preheader777.loopexit, %.preheader777.preheader
  %h84 = phi i4 [ 0, %.preheader777.preheader ], [ %h_85, %.preheader777.loopexit ]
  %exitcond231 = icmp eq i4 %h84, -8
  %empty_571 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %h_85 = add i4 %h84, 1
  br i1 %exitcond231, label %.loopexit975.loopexit, label %.preheader776.preheader

.preheader776.preheader:                          ; preds = %.preheader777
  %tmp_679_cast1 = zext i4 %h_85 to i11
  %tmp_679_cast = zext i4 %h_85 to i10
  %tmp_1444 = add i10 %tmp_679_cast, %tmp_1435
  %tmp_1445 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1444, i3 0)
  %p_shl537_cast = zext i13 %tmp_1445 to i14
  %tmp_1446 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1444, i1 false)
  %p_shl538_cast = zext i11 %tmp_1446 to i14
  %tmp_1447 = add i14 %p_shl537_cast, %p_shl538_cast
  %tmp_1448 = add i11 %tmp_679_cast1, %tmp_1438
  %tmp_1449 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1448, i3 0)
  %p_shl535_cast = zext i14 %tmp_1449 to i15
  %tmp_1450 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_1448, i1 false)
  %p_shl536_cast = zext i12 %tmp_1450 to i15
  %tmp_1451 = add i15 %p_shl535_cast, %p_shl536_cast
  br label %.preheader776

.preheader776:                                    ; preds = %145, %.preheader776.preheader
  %w83 = phi i4 [ %w_84, %145 ], [ 0, %.preheader776.preheader ]
  %exitcond235 = icmp eq i4 %w83, -8
  %empty_572 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %w_84 = add i4 %w83, 1
  br i1 %exitcond235, label %.preheader777.loopexit, label %145

; <label>:145                                     ; preds = %.preheader776
  %tmp_685_cast1 = zext i4 %w_84 to i15
  %tmp_685_cast = zext i4 %w_84 to i14
  %tmp_1453 = add i14 %tmp_1447, %tmp_685_cast
  %tmp_1777_cast = zext i14 %tmp_1453 to i64
  %buffer0_1_48_8x8_p_V_12 = getelementptr [4800 x i8]* @buffer0_1_48_8x8_p_V, i64 0, i64 %tmp_1777_cast
  %tmp_1454 = add i15 %tmp_1451, %tmp_685_cast1
  %tmp_1778_cast = zext i15 %tmp_1454 to i64
  %shuffleunit1_5_outpu = getelementptr [9600 x i8]* @shuffleunit1_5_outpu, i64 0, i64 %tmp_1778_cast
  %shuffleunit1_5_outpu_1 = load i8* %shuffleunit1_5_outpu, align 1
  store i8 %shuffleunit1_5_outpu_1, i8* %buffer0_1_48_8x8_p_V_12, align 1
  br label %.preheader776

.preheader775.loopexit:                           ; preds = %.preheader774
  br label %.preheader775

.preheader775:                                    ; preds = %.preheader775.preheader, %.preheader775.loopexit
  %co126 = phi i5 [ %co_127, %.preheader775.loopexit ], [ 0, %.preheader775.preheader ]
  %co126_cast337_cast = zext i5 %co126 to i10
  %exitcond230 = icmp eq i5 %co126, -8
  %empty_573 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_127 = add i5 %co126, 1
  br i1 %exitcond230, label %.preheader772.preheader, label %.preheader774.preheader

.preheader772.preheader:                          ; preds = %.preheader775
  br label %.preheader772

.preheader774.preheader:                          ; preds = %.preheader775
  %tmp_1443 = trunc i5 %co126 to i1
  %p_shl152 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1443, i5 0)
  %p_shl152_cast = zext i6 %p_shl152 to i7
  %p_shl153 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1443, i3 0)
  %p_shl153_cast = zext i4 %p_shl153 to i7
  %tmp_678 = sub i7 %p_shl152_cast, %p_shl153_cast
  %p_lshr_f15_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co126, i32 1, i32 4)
  %tmp_913_cast = zext i4 %p_lshr_f15_cast to i7
  br label %.preheader774

.preheader774.loopexit:                           ; preds = %.preheader773
  br label %.preheader774

.preheader774:                                    ; preds = %.preheader774.loopexit, %.preheader774.preheader
  %ci57 = phi i5 [ 0, %.preheader774.preheader ], [ %ci_58, %.preheader774.loopexit ]
  %ci57_cast = zext i5 %ci57 to i7
  %exitcond234 = icmp eq i5 %ci57, -8
  %empty_574 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_58 = add i5 %ci57, 1
  br i1 %exitcond234, label %.preheader775.loopexit, label %.preheader773.preheader

.preheader773.preheader:                          ; preds = %.preheader774
  %tmp_681 = add i7 %tmp_678, %ci57_cast
  %tmp_683_cast = sext i7 %tmp_681 to i13
  %tmp_684_cast = zext i5 %ci57 to i18
  br label %.preheader773

.preheader773:                                    ; preds = %146, %.preheader773.preheader
  %i118 = phi i3 [ %i_119, %146 ], [ 0, %.preheader773.preheader ]
  %exitcond238 = icmp eq i3 %i118, -4
  %empty_575 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %i_119 = add i3 %i118, 1
  br i1 %exitcond238, label %.preheader774.loopexit, label %146

; <label>:146                                     ; preds = %.preheader773
  %tmp_1456 = trunc i3 %i118 to i2
  %p_shl156 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1456, i4 0)
  %p_shl156_cast = zext i6 %p_shl156 to i7
  %p_shl157 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1456, i2 0)
  %p_shl157_cast = zext i4 %p_shl157 to i7
  %tmp_692 = sub i7 %p_shl156_cast, %p_shl157_cast
  %tmp_695 = add i7 %tmp_692, %tmp_913_cast
  %tmp_1457 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_695, i6 0)
  %tmp_1458 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_695, i4 0)
  %p_shl542_cast = sext i11 %tmp_1458 to i13
  %tmp_1459 = sub i13 %tmp_1457, %p_shl542_cast
  %tmp_1460 = add i13 %tmp_683_cast, %tmp_1459
  %tmp_1788_cast = sext i13 %tmp_1460 to i64
  %weights_48_48_1x1_V_15 = getelementptr [2304 x i8]* @weights_48_48_1x1_V, i64 0, i64 %tmp_1788_cast
  %p_shl158 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1456, i5 0)
  %p_shl158_cast = zext i7 %p_shl158 to i8
  %p_shl159 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1456, i3 0)
  %p_shl159_cast = zext i5 %p_shl159 to i8
  %tmp_697 = sub i8 %p_shl158_cast, %p_shl159_cast
  %tmp_930_cast_cast = sext i8 %tmp_697 to i10
  %tmp47 = add i10 -392, %tmp_930_cast_cast
  %tmp_698 = add i10 %tmp47, %co126_cast337_cast
  %tmp_1461 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_698, i5 0)
  %tmp_1462 = sext i15 %tmp_1461 to i16
  %p_shl539_cast = zext i16 %tmp_1462 to i17
  %tmp_1463 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_698, i3 0)
  %tmp_1464 = sext i13 %tmp_1463 to i14
  %p_shl540_cast = zext i14 %tmp_1464 to i17
  %tmp_1465 = sub i17 %p_shl539_cast, %p_shl540_cast
  %tmp_1795_cast = sext i17 %tmp_1465 to i18
  %tmp_1466 = add i18 %tmp_684_cast, %tmp_1795_cast
  %tmp_1796_cast = sext i18 %tmp_1466 to i33
  %shuffle_conv_1x1_V8_15 = add i33 %tmp_1796_cast, %tmp_490_cast
  %shuffle_conv_1x1_V8_43 = sext i33 %shuffle_conv_1x1_V8_15 to i64
  %p3X3_1X1_WEIGHTS_addr_37 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_1x1_V8_43
  %p3X3_1X1_WEIGHTS_load_23 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_37, i32 1)
  %p3X3_1X1_WEIGHTS_addr_94 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_37)
  store i8 %p3X3_1X1_WEIGHTS_addr_94, i8* %weights_48_48_1x1_V_15, align 1
  br label %.preheader773

.preheader772.loopexit:                           ; preds = %.preheader771
  br label %.preheader772

.preheader772:                                    ; preds = %.preheader772.preheader, %.preheader772.loopexit
  %i116 = phi i5 [ %i_117, %.preheader772.loopexit ], [ 0, %.preheader772.preheader ]
  %i117_cast = zext i5 %i116 to i11
  %i117_cast1 = zext i5 %i116 to i7
  %exitcond233 = icmp eq i5 %i116, -8
  %empty_576 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_117 = add i5 %i116, 1
  br i1 %exitcond233, label %148, label %.preheader771.preheader

.preheader771.preheader:                          ; preds = %.preheader772
  br label %.preheader771

.preheader771:                                    ; preds = %.preheader771.preheader, %147
  %k38 = phi i2 [ %k_39, %147 ], [ 0, %.preheader771.preheader ]
  %exitcond237 = icmp eq i2 %k38, -2
  %empty_577 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_39 = add i2 %k38, 1
  br i1 %exitcond237, label %.preheader772.loopexit, label %147

; <label>:147                                     ; preds = %.preheader771
  %tmp_1455 = trunc i2 %k38 to i1
  %p_shl154 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1455, i5 0)
  %p_shl154_cast = zext i6 %p_shl154 to i7
  %p_shl155 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1455, i3 0)
  %p_shl155_cast = zext i4 %p_shl155 to i7
  %tmp_686 = sub i7 %p_shl154_cast, %p_shl155_cast
  %tmp_916_cast = sext i7 %tmp_686 to i11
  %tmp_687 = add i7 %i117_cast1, %tmp_686
  %tmp_917_cast = sext i7 %tmp_687 to i32
  %tmp_688 = zext i32 %tmp_917_cast to i64
  %tmp48 = add i11 -584, %tmp_916_cast
  %tmp_689 = add i11 %tmp48, %i117_cast
  %tmp_691_cast = zext i11 %tmp_689 to i33
  %bias_V14_sum23 = add i33 %tmp_482_cast, %tmp_691_cast
  %bias_V14_sum40_cast = sext i33 %bias_V14_sum23 to i64
  %DATA_BIAS_addr_40 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum40_cast
  %DATA_BIAS_load_40_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_40, i32 1)
  %DATA_BIAS_addr_40_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_40)
  %bias_48_V_addr_23 = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_688
  store i8 %DATA_BIAS_addr_40_re, i8* %bias_48_V_addr_23, align 1
  br label %.preheader771

; <label>:148                                     ; preds = %.preheader772
  call fastcc void @subconv_1x1_8_p([4800 x i8]* @buffer0_1_48_8x8_p_V, [2304 x i8]* @weights_48_48_1x1_V, [48 x i8]* @bias_48_V, [4800 x i8]* @buffer1_1_48_8x8_p_V)
  br label %.loopexit974

.loopexit974.loopexit:                            ; preds = %.preheader770
  br label %.loopexit974

.loopexit974:                                     ; preds = %.loopexit974.loopexit, %148
  %co128 = phi i5 [ 0, %148 ], [ %co_129, %.loopexit974.loopexit ]
  %co129_cast = zext i5 %co128 to i10
  %co129_cast1 = zext i5 %co128 to i7
  %exitcond236 = icmp eq i5 %co128, -8
  %empty_578 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_129 = add i5 %co128, 1
  br i1 %exitcond236, label %.preheader767.preheader, label %.preheader770.preheader

.preheader770.preheader:                          ; preds = %.loopexit974
  br label %.preheader770

.preheader767.preheader:                          ; preds = %.loopexit974
  br label %.preheader767

.preheader770.loopexit:                           ; preds = %.preheader769
  br label %.preheader770

.preheader770:                                    ; preds = %.preheader770.preheader, %.preheader770.loopexit
  %w85 = phi i2 [ %w_86, %.preheader770.loopexit ], [ 0, %.preheader770.preheader ]
  %exitcond240 = icmp eq i2 %w85, -1
  %empty_579 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %w_86 = add i2 %w85, 1
  br i1 %exitcond240, label %.loopexit974.loopexit, label %.preheader769.preheader

.preheader769.preheader:                          ; preds = %.preheader770
  %tmp_699_cast1 = zext i2 %w85 to i14
  %tmp_699_cast = zext i2 %w85 to i36
  br label %.preheader769

.preheader769.loopexit:                           ; preds = %.preheader768
  br label %.preheader769

.preheader769:                                    ; preds = %.preheader769.loopexit, %.preheader769.preheader
  %h86 = phi i2 [ 0, %.preheader769.preheader ], [ %h_87, %.preheader769.loopexit ]
  %exitcond243 = icmp eq i2 %h86, -1
  %empty_580 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %h_87 = add i2 %h86, 1
  br i1 %exitcond243, label %.preheader770.loopexit, label %.preheader768.preheader

.preheader768.preheader:                          ; preds = %.preheader769
  %tmp_706 = zext i2 %h86 to i64
  %tmp_706_cast = zext i2 %h86 to i10
  br label %.preheader768

.preheader768:                                    ; preds = %149, %.preheader768.preheader
  %i124 = phi i2 [ %i_125, %149 ], [ 0, %.preheader768.preheader ]
  %exitcond246 = icmp eq i2 %i124, -2
  %empty_581 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %i_125 = add i2 %i124, 1
  br i1 %exitcond246, label %.preheader769.loopexit, label %149

; <label>:149                                     ; preds = %.preheader768
  %tmp_1469 = trunc i2 %i124 to i1
  %p_shl166 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1469, i5 0)
  %p_shl166_cast = zext i6 %p_shl166 to i7
  %p_shl167 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1469, i3 0)
  %p_shl167_cast = zext i4 %p_shl167 to i7
  %tmp_710 = sub i7 %p_shl166_cast, %p_shl167_cast
  %tmp_953_cast = sext i7 %tmp_710 to i10
  %tmp_711 = add i7 %tmp_710, %co129_cast1
  %tmp_954_cast = sext i7 %tmp_711 to i32
  %tmp_713_cast1 = zext i32 %tmp_954_cast to i35
  %tmp_1470 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_711, i2 0)
  %tmp_1471 = sext i9 %tmp_1470 to i34
  %p_shl546_cast = zext i34 %tmp_1471 to i35
  %tmp_1472 = sub i35 %p_shl546_cast, %tmp_713_cast1
  %tmp_1805_cast = sext i35 %tmp_1472 to i36
  %tmp_1473 = add i36 %tmp_1805_cast, %tmp_699_cast
  %tmp_1474 = trunc i36 %tmp_1473 to i10
  %tmp_1475 = trunc i36 %tmp_1473 to i8
  %p_shl545_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1475, i2 0)
  %tmp_1476 = sub i10 %p_shl545_cast, %tmp_1474
  %tmp_1477 = add i10 %tmp_1476, %tmp_706_cast
  %tmp_1809_cast = zext i10 %tmp_1477 to i64
  %weights_48_1_3x3_V_a_8 = getelementptr [432 x i8]* @weights_48_1_3x3_V, i64 0, i64 %tmp_1809_cast
  %tmp49 = add i10 504, %tmp_953_cast
  %tmp_714 = add i10 %co129_cast, %tmp49
  %tmp_716_cast = zext i10 %tmp_714 to i13
  %tmp_1478 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_714, i2 0)
  %p_shl544_cast = zext i12 %tmp_1478 to i13
  %tmp_1479 = sub i13 %p_shl544_cast, %tmp_716_cast
  %tmp_1811_cast = sext i13 %tmp_1479 to i14
  %tmp_1480 = add i14 %tmp_1811_cast, %tmp_699_cast1
  %tmp_1812_cast = sext i14 %tmp_1480 to i64
  %tmp_1481 = call i16 @_ssdm_op_BitConcatenate.i16.i14.i2(i14 %tmp_1480, i2 0)
  %p_shl255 = sext i16 %tmp_1481 to i64
  %tmp_1482 = sub i64 %p_shl255, %tmp_1812_cast
  %tmp_1483 = add i64 %tmp_1482, %tmp_706
  %shuffle_conv_3x3_V6_3 = add i64 %tmp_373, %tmp_1483
  %p3X3_1X1_WEIGHTS_addr_38 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_3x3_V6_3
  %p3X3_1X1_WEIGHTS_load_24 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_38, i32 1)
  %p3X3_1X1_WEIGHTS_addr_95 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_38)
  store i8 %p3X3_1X1_WEIGHTS_addr_95, i8* %weights_48_1_3x3_V_a_8, align 1
  br label %.preheader768

.preheader767.loopexit:                           ; preds = %.preheader766
  br label %.preheader767

.preheader767:                                    ; preds = %.preheader767.preheader, %.preheader767.loopexit
  %i120 = phi i5 [ %i_121, %.preheader767.loopexit ], [ 0, %.preheader767.preheader ]
  %i121_cast = zext i5 %i120 to i11
  %i121_cast1 = zext i5 %i120 to i7
  %exitcond239 = icmp eq i5 %i120, -8
  %empty_582 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_121 = add i5 %i120, 1
  br i1 %exitcond239, label %151, label %.preheader766.preheader

.preheader766.preheader:                          ; preds = %.preheader767
  br label %.preheader766

.preheader766:                                    ; preds = %.preheader766.preheader, %150
  %k40 = phi i2 [ %k_41, %150 ], [ 0, %.preheader766.preheader ]
  %exitcond242 = icmp eq i2 %k40, -2
  %empty_583 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_41 = add i2 %k40, 1
  br i1 %exitcond242, label %.preheader767.loopexit, label %150

; <label>:150                                     ; preds = %.preheader766
  %tmp_1468 = trunc i2 %k40 to i1
  %p_shl160 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1468, i5 0)
  %p_shl160_cast = zext i6 %p_shl160 to i7
  %p_shl161 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1468, i3 0)
  %p_shl161_cast = zext i4 %p_shl161 to i7
  %tmp_701 = sub i7 %p_shl160_cast, %p_shl161_cast
  %tmp_934_cast = sext i7 %tmp_701 to i11
  %tmp_702 = add i7 %i121_cast1, %tmp_701
  %tmp_935_cast = sext i7 %tmp_702 to i32
  %tmp_703 = zext i32 %tmp_935_cast to i64
  %tmp50 = add i11 -536, %tmp_934_cast
  %tmp_704 = add i11 %tmp50, %i121_cast
  %tmp_705_cast1 = zext i11 %tmp_704 to i33
  %bias_V14_sum24 = add i33 %tmp_482_cast, %tmp_705_cast1
  %bias_V14_sum41_cast = sext i33 %bias_V14_sum24 to i64
  %DATA_BIAS_addr_41 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum41_cast
  %DATA_BIAS_load_41_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_41, i32 1)
  %DATA_BIAS_addr_41_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_41)
  %bias_48_V_addr_24 = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_703
  store i8 %DATA_BIAS_addr_41_re, i8* %bias_48_V_addr_24, align 1
  br label %.preheader766

; <label>:151                                     ; preds = %.preheader767
  call fastcc void @subconv_3x3_8_no_rel([4800 x i8]* @buffer1_1_48_8x8_p_V, [432 x i8]* @weights_48_1_3x3_V, [48 x i8]* @bias_48_V, [4800 x i8]* @buffer0_1_48_8x8_p_V)
  br label %.loopexit973

.loopexit973.loopexit:                            ; preds = %.preheader765
  br label %.loopexit973

.loopexit973:                                     ; preds = %.loopexit973.loopexit, %151
  %co130 = phi i5 [ 0, %151 ], [ %co_131, %.loopexit973.loopexit ]
  %co131_cast314_cast = zext i5 %co130 to i10
  %exitcond241 = icmp eq i5 %co130, -8
  %empty_584 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_131 = add i5 %co130, 1
  br i1 %exitcond241, label %.preheader763.preheader, label %.preheader765.preheader

.preheader763.preheader:                          ; preds = %.loopexit973
  br label %.preheader763

.preheader765.preheader:                          ; preds = %.loopexit973
  %tmp_1467 = trunc i5 %co130 to i1
  %p_shl162 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1467, i5 0)
  %p_shl162_cast = zext i6 %p_shl162 to i7
  %p_shl163 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1467, i3 0)
  %p_shl163_cast = zext i4 %p_shl163 to i7
  %tmp_700 = sub i7 %p_shl162_cast, %p_shl163_cast
  %p_lshr_f16_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co130, i32 1, i32 4)
  %tmp_942_cast = zext i4 %p_lshr_f16_cast to i7
  br label %.preheader765

.preheader765.loopexit:                           ; preds = %.preheader764
  br label %.preheader765

.preheader765:                                    ; preds = %.preheader765.loopexit, %.preheader765.preheader
  %ci59 = phi i5 [ 0, %.preheader765.preheader ], [ %ci_60, %.preheader765.loopexit ]
  %ci59_cast = zext i5 %ci59 to i7
  %exitcond245 = icmp eq i5 %ci59, -8
  %empty_585 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_60 = add i5 %ci59, 1
  br i1 %exitcond245, label %.loopexit973.loopexit, label %.preheader764.preheader

.preheader764.preheader:                          ; preds = %.preheader765
  %tmp_707 = add i7 %tmp_700, %ci59_cast
  %tmp_708_cast = sext i7 %tmp_707 to i13
  %tmp_709_cast = zext i5 %ci59 to i18
  br label %.preheader764

.preheader764:                                    ; preds = %152, %.preheader764.preheader
  %i126 = phi i3 [ %i_127, %152 ], [ 0, %.preheader764.preheader ]
  %exitcond249 = icmp eq i3 %i126, -4
  %empty_586 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %i_127 = add i3 %i126, 1
  br i1 %exitcond249, label %.preheader765.loopexit, label %152

; <label>:152                                     ; preds = %.preheader764
  %tmp_1488 = trunc i3 %i126 to i2
  %p_shl168 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1488, i4 0)
  %p_shl168_cast = zext i6 %p_shl168 to i7
  %p_shl169 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1488, i2 0)
  %p_shl169_cast = zext i4 %p_shl169 to i7
  %tmp_722 = sub i7 %p_shl168_cast, %p_shl169_cast
  %tmp_723 = add i7 %tmp_722, %tmp_942_cast
  %tmp_1489 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_723, i6 0)
  %tmp_1490 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_723, i4 0)
  %p_shl550_cast = sext i11 %tmp_1490 to i13
  %tmp_1491 = sub i13 %tmp_1489, %p_shl550_cast
  %tmp_1492 = add i13 %tmp_708_cast, %tmp_1491
  %tmp_1828_cast = sext i13 %tmp_1492 to i64
  %weights_48_48_1x1_V_16 = getelementptr [2304 x i8]* @weights_48_48_1x1_V, i64 0, i64 %tmp_1828_cast
  %p_shl170 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1488, i5 0)
  %p_shl170_cast = zext i7 %p_shl170 to i8
  %p_shl171 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1488, i3 0)
  %p_shl171_cast = zext i5 %p_shl171 to i8
  %tmp_724 = sub i8 %p_shl170_cast, %p_shl171_cast
  %tmp_963_cast_cast = sext i8 %tmp_724 to i10
  %tmp51 = add i10 -296, %tmp_963_cast_cast
  %tmp_725 = add i10 %tmp51, %co131_cast314_cast
  %tmp_1493 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_725, i5 0)
  %tmp_1494 = sext i15 %tmp_1493 to i16
  %p_shl547_cast = zext i16 %tmp_1494 to i17
  %tmp_1495 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_725, i3 0)
  %tmp_1496 = sext i13 %tmp_1495 to i14
  %p_shl548_cast = zext i14 %tmp_1496 to i17
  %tmp_1497 = sub i17 %p_shl547_cast, %p_shl548_cast
  %tmp_1835_cast = sext i17 %tmp_1497 to i18
  %tmp_1498 = add i18 %tmp_709_cast, %tmp_1835_cast
  %tmp_1836_cast = sext i18 %tmp_1498 to i33
  %shuffle_conv_1x1_V8_16 = add i33 %tmp_1836_cast, %tmp_490_cast
  %shuffle_conv_1x1_V8_44 = sext i33 %shuffle_conv_1x1_V8_16 to i64
  %p3X3_1X1_WEIGHTS_addr_39 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_1x1_V8_44
  %p3X3_1X1_WEIGHTS_load_25 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_39, i32 1)
  %p3X3_1X1_WEIGHTS_addr_96 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_39)
  store i8 %p3X3_1X1_WEIGHTS_addr_96, i8* %weights_48_48_1x1_V_16, align 1
  br label %.preheader764

.preheader763.loopexit:                           ; preds = %.preheader762
  br label %.preheader763

.preheader763:                                    ; preds = %.preheader763.preheader, %.preheader763.loopexit
  %i122 = phi i5 [ %i_123, %.preheader763.loopexit ], [ 0, %.preheader763.preheader ]
  %i123_cast305_cast = zext i5 %i122 to i10
  %i123_cast = zext i5 %i122 to i7
  %exitcond244 = icmp eq i5 %i122, -8
  %empty_587 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_123 = add i5 %i122, 1
  br i1 %exitcond244, label %154, label %.preheader762.preheader

.preheader762.preheader:                          ; preds = %.preheader763
  br label %.preheader762

.preheader762:                                    ; preds = %.preheader762.preheader, %153
  %k42 = phi i2 [ %k_43, %153 ], [ 0, %.preheader762.preheader ]
  %exitcond248 = icmp eq i2 %k42, -2
  %empty_588 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_43 = add i2 %k42, 1
  br i1 %exitcond248, label %.preheader763.loopexit, label %153

; <label>:153                                     ; preds = %.preheader762
  %tmp_1487 = trunc i2 %k42 to i1
  %p_shl164 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1487, i5 0)
  %p_shl164_cast = zext i6 %p_shl164 to i7
  %p_shl165 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1487, i3 0)
  %p_shl165_cast = zext i4 %p_shl165 to i7
  %tmp_717 = sub i7 %p_shl164_cast, %p_shl165_cast
  %tmp_944_cast_cast = sext i7 %tmp_717 to i10
  %tmp_718 = add i7 %i123_cast, %tmp_717
  %tmp_945_cast = sext i7 %tmp_718 to i32
  %tmp_719 = zext i32 %tmp_945_cast to i64
  %tmp52 = add i10 -488, %tmp_944_cast_cast
  %tmp_720 = add i10 %tmp52, %i123_cast305_cast
  %tmp_948_cast = sext i10 %tmp_720 to i11
  %tmp_721_cast = zext i11 %tmp_948_cast to i33
  %bias_V14_sum25 = add i33 %tmp_482_cast, %tmp_721_cast
  %bias_V14_sum42_cast = sext i33 %bias_V14_sum25 to i64
  %DATA_BIAS_addr_42 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum42_cast
  %DATA_BIAS_load_42_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_42, i32 1)
  %DATA_BIAS_addr_42_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_42)
  %bias_48_V_addr_25 = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_719
  store i8 %DATA_BIAS_addr_42_re, i8* %bias_48_V_addr_25, align 1
  br label %.preheader762

; <label>:154                                     ; preds = %.preheader763
  call fastcc void @subconv_1x1_8_p([4800 x i8]* @buffer0_1_48_8x8_p_V, [2304 x i8]* @weights_48_48_1x1_V, [48 x i8]* @bias_48_V, [4800 x i8]* @buffer1_1_48_8x8_p_V)
  br label %.loopexit972

.loopexit972.loopexit:                            ; preds = %.preheader761
  br label %.loopexit972

.loopexit972:                                     ; preds = %.loopexit972.loopexit, %154
  %co132 = phi i6 [ 0, %154 ], [ %co_133, %.loopexit972.loopexit ]
  %exitcond247 = icmp eq i6 %co132, -16
  %empty_589 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_133 = add i6 %co132, 1
  br i1 %exitcond247, label %156, label %.preheader761.preheader

.preheader761.preheader:                          ; preds = %.loopexit972
  %tmp_1484 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co132, i3 0)
  %p_shl551_cast = zext i9 %tmp_1484 to i10
  %tmp_1485 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co132, i1 false)
  %p_shl552_cast = zext i7 %tmp_1485 to i10
  %tmp_1486 = add i10 %p_shl552_cast, %p_shl551_cast
  br label %.preheader761

.preheader761.loopexit:                           ; preds = %.preheader760
  br label %.preheader761

.preheader761:                                    ; preds = %.preheader761.loopexit, %.preheader761.preheader
  %h88 = phi i4 [ 0, %.preheader761.preheader ], [ %h_89, %.preheader761.loopexit ]
  %exitcond251 = icmp eq i4 %h88, -8
  %empty_590 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %h_89 = add i4 %h88, 1
  br i1 %exitcond251, label %.loopexit972.loopexit, label %.preheader760.preheader

.preheader760.preheader:                          ; preds = %.preheader761
  %tmp_727_cast = zext i4 %h_89 to i10
  %tmp_1505 = add i10 %tmp_727_cast, %tmp_1486
  %tmp_1506 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1505, i3 0)
  %p_shl553_cast = zext i13 %tmp_1506 to i15
  %tmp_1507 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1505, i1 false)
  %p_shl554_cast = zext i11 %tmp_1507 to i15
  %tmp_1508 = add i15 %p_shl553_cast, %p_shl554_cast
  br label %.preheader760

.preheader760:                                    ; preds = %155, %.preheader760.preheader
  %w87 = phi i4 [ %w_88, %155 ], [ 0, %.preheader760.preheader ]
  %exitcond254 = icmp eq i4 %w87, -8
  %empty_591 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %w_88 = add i4 %w87, 1
  br i1 %exitcond254, label %.preheader761.loopexit, label %155

; <label>:155                                     ; preds = %.preheader760
  %tmp_730_cast = zext i4 %w_88 to i15
  %tmp_1518 = add i15 %tmp_1508, %tmp_730_cast
  %tmp_1857_cast = zext i15 %tmp_1518 to i64
  %buffer0_1_48_8x8_p_V_13 = getelementptr [4800 x i8]* @buffer0_1_48_8x8_p_V, i64 0, i64 %tmp_1857_cast
  %shuffleunit1_5_outpu_2 = getelementptr [9600 x i8]* @shuffleunit1_5_outpu, i64 0, i64 %tmp_1857_cast
  %shuffleunit1_5_outpu_3 = load i8* %shuffleunit1_5_outpu_2, align 1
  store i8 %shuffleunit1_5_outpu_3, i8* %buffer0_1_48_8x8_p_V_13, align 1
  br label %.preheader760

; <label>:156                                     ; preds = %.loopexit972
  call fastcc void @shuffle_48_p([4800 x i8]* @buffer0_1_48_8x8_p_V, [9600 x i8]* @shuffleunit1_6_outpu)
  br label %.loopexit971

.loopexit971.loopexit:                            ; preds = %.preheader759
  br label %.loopexit971

.loopexit971:                                     ; preds = %.loopexit971.loopexit, %156
  %co134 = phi i6 [ 0, %156 ], [ %co_135, %.loopexit971.loopexit ]
  %co134_cast = zext i6 %co134 to i7
  %exitcond250 = icmp eq i6 %co134, -16
  %empty_592 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_135 = add i6 %co134, 1
  br i1 %exitcond250, label %.preheader757.preheader, label %.preheader759.preheader

.preheader757.preheader:                          ; preds = %.loopexit971
  br label %.preheader757

.preheader759.preheader:                          ; preds = %.loopexit971
  %tmp_1499 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co134, i3 0)
  %p_shl557_cast = zext i9 %tmp_1499 to i10
  %tmp_1500 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co134, i1 false)
  %p_shl558_cast = zext i7 %tmp_1500 to i10
  %tmp_1501 = add i10 %p_shl558_cast, %p_shl557_cast
  %tmp_726 = add i7 %co134_cast, 48
  %tmp_1502 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_726, i3 0)
  %p_shl555_cast = zext i10 %tmp_1502 to i11
  %tmp_1503 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp_726, i1 false)
  %p_shl556_cast = zext i8 %tmp_1503 to i11
  %tmp_1504 = add i11 %p_shl556_cast, %p_shl555_cast
  br label %.preheader759

.preheader759.loopexit:                           ; preds = %.preheader758
  br label %.preheader759

.preheader759:                                    ; preds = %.preheader759.loopexit, %.preheader759.preheader
  %h90 = phi i4 [ 0, %.preheader759.preheader ], [ %h_91, %.preheader759.loopexit ]
  %exitcond253 = icmp eq i4 %h90, -8
  %empty_593 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %h_91 = add i4 %h90, 1
  br i1 %exitcond253, label %.loopexit971.loopexit, label %.preheader758.preheader

.preheader758.preheader:                          ; preds = %.preheader759
  %tmp_729_cast1 = zext i4 %h_91 to i11
  %tmp_729_cast = zext i4 %h_91 to i10
  %tmp_1510 = add i10 %tmp_729_cast, %tmp_1501
  %tmp_1511 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1510, i3 0)
  %p_shl561_cast = zext i13 %tmp_1511 to i14
  %tmp_1512 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1510, i1 false)
  %p_shl562_cast = zext i11 %tmp_1512 to i14
  %tmp_1513 = add i14 %p_shl561_cast, %p_shl562_cast
  %tmp_1514 = add i11 %tmp_729_cast1, %tmp_1504
  %tmp_1515 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1514, i3 0)
  %p_shl559_cast = zext i14 %tmp_1515 to i15
  %tmp_1516 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_1514, i1 false)
  %p_shl560_cast = zext i12 %tmp_1516 to i15
  %tmp_1517 = add i15 %p_shl559_cast, %p_shl560_cast
  br label %.preheader758

.preheader758:                                    ; preds = %157, %.preheader758.preheader
  %w89 = phi i4 [ %w_90, %157 ], [ 0, %.preheader758.preheader ]
  %exitcond257 = icmp eq i4 %w89, -8
  %empty_594 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %w_90 = add i4 %w89, 1
  br i1 %exitcond257, label %.preheader759.loopexit, label %157

; <label>:157                                     ; preds = %.preheader758
  %tmp_735_cast1 = zext i4 %w_90 to i15
  %tmp_735_cast = zext i4 %w_90 to i14
  %tmp_1519 = add i14 %tmp_1513, %tmp_735_cast
  %tmp_1858_cast = zext i14 %tmp_1519 to i64
  %buffer0_1_48_8x8_p_V_14 = getelementptr [4800 x i8]* @buffer0_1_48_8x8_p_V, i64 0, i64 %tmp_1858_cast
  %tmp_1520 = add i15 %tmp_1517, %tmp_735_cast1
  %tmp_1859_cast = zext i15 %tmp_1520 to i64
  %shuffleunit1_6_outpu = getelementptr [9600 x i8]* @shuffleunit1_6_outpu, i64 0, i64 %tmp_1859_cast
  %shuffleunit1_6_outpu_1 = load i8* %shuffleunit1_6_outpu, align 1
  store i8 %shuffleunit1_6_outpu_1, i8* %buffer0_1_48_8x8_p_V_14, align 1
  br label %.preheader758

.preheader757.loopexit:                           ; preds = %.preheader756
  br label %.preheader757

.preheader757:                                    ; preds = %.preheader757.preheader, %.preheader757.loopexit
  %co136 = phi i5 [ %co_137, %.preheader757.loopexit ], [ 0, %.preheader757.preheader ]
  %co136_cast299_cast = zext i5 %co136 to i9
  %exitcond252 = icmp eq i5 %co136, -8
  %empty_595 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_137 = add i5 %co136, 1
  br i1 %exitcond252, label %.preheader754.preheader, label %.preheader756.preheader

.preheader754.preheader:                          ; preds = %.preheader757
  br label %.preheader754

.preheader756.preheader:                          ; preds = %.preheader757
  %tmp_1509 = trunc i5 %co136 to i1
  %p_shl172 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1509, i5 0)
  %p_shl172_cast = zext i6 %p_shl172 to i7
  %p_shl173 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1509, i3 0)
  %p_shl173_cast = zext i4 %p_shl173 to i7
  %tmp_728 = sub i7 %p_shl172_cast, %p_shl173_cast
  %p_lshr_f17_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co136, i32 1, i32 4)
  %tmp_973_cast = zext i4 %p_lshr_f17_cast to i7
  br label %.preheader756

.preheader756.loopexit:                           ; preds = %.preheader755
  br label %.preheader756

.preheader756:                                    ; preds = %.preheader756.loopexit, %.preheader756.preheader
  %ci61 = phi i5 [ 0, %.preheader756.preheader ], [ %ci_62, %.preheader756.loopexit ]
  %ci61_cast = zext i5 %ci61 to i7
  %exitcond256 = icmp eq i5 %ci61, -8
  %empty_596 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_62 = add i5 %ci61, 1
  br i1 %exitcond256, label %.preheader757.loopexit, label %.preheader755.preheader

.preheader755.preheader:                          ; preds = %.preheader756
  %tmp_731 = add i7 %tmp_728, %ci61_cast
  %tmp_733_cast1 = sext i7 %tmp_731 to i13
  %tmp_734_cast = zext i5 %ci61 to i18
  br label %.preheader755

.preheader755:                                    ; preds = %158, %.preheader755.preheader
  %i130 = phi i3 [ %i_131, %158 ], [ 0, %.preheader755.preheader ]
  %exitcond260 = icmp eq i3 %i130, -4
  %empty_597 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %i_131 = add i3 %i130, 1
  br i1 %exitcond260, label %.preheader756.loopexit, label %158

; <label>:158                                     ; preds = %.preheader755
  %tmp_1522 = trunc i3 %i130 to i2
  %p_shl176 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1522, i4 0)
  %p_shl176_cast = zext i6 %p_shl176 to i7
  %p_shl177 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1522, i2 0)
  %p_shl177_cast = zext i4 %p_shl177 to i7
  %tmp_742 = sub i7 %p_shl176_cast, %p_shl177_cast
  %tmp_745 = add i7 %tmp_742, %tmp_973_cast
  %tmp_1523 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_745, i6 0)
  %tmp_1524 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_745, i4 0)
  %p_shl566_cast = sext i11 %tmp_1524 to i13
  %tmp_1525 = sub i13 %tmp_1523, %p_shl566_cast
  %tmp_1526 = add i13 %tmp_733_cast1, %tmp_1525
  %tmp_1869_cast = sext i13 %tmp_1526 to i64
  %weights_48_48_1x1_V_17 = getelementptr [2304 x i8]* @weights_48_48_1x1_V, i64 0, i64 %tmp_1869_cast
  %p_shl178 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1522, i5 0)
  %p_shl178_cast = zext i7 %p_shl178 to i8
  %p_shl179 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1522, i3 0)
  %p_shl179_cast = zext i5 %p_shl179 to i8
  %tmp_747 = sub i8 %p_shl178_cast, %p_shl179_cast
  %tmp_990_cast_cast = sext i8 %tmp_747 to i9
  %tmp53 = add i9 -200, %tmp_990_cast_cast
  %tmp_748 = add i9 %tmp53, %co136_cast299_cast
  %tmp_1527 = call i14 @_ssdm_op_BitConcatenate.i14.i9.i5(i9 %tmp_748, i5 0)
  %tmp_1528 = sext i14 %tmp_1527 to i16
  %p_shl563_cast = zext i16 %tmp_1528 to i17
  %tmp_1529 = call i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9 %tmp_748, i3 0)
  %tmp_1530 = sext i12 %tmp_1529 to i14
  %p_shl564_cast = zext i14 %tmp_1530 to i17
  %tmp_1531 = sub i17 %p_shl563_cast, %p_shl564_cast
  %tmp_1876_cast = sext i17 %tmp_1531 to i18
  %tmp_1532 = add i18 %tmp_734_cast, %tmp_1876_cast
  %tmp_1877_cast = sext i18 %tmp_1532 to i33
  %shuffle_conv_1x1_V8_17 = add i33 %tmp_1877_cast, %tmp_490_cast
  %shuffle_conv_1x1_V8_45 = sext i33 %shuffle_conv_1x1_V8_17 to i64
  %p3X3_1X1_WEIGHTS_addr_40 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_1x1_V8_45
  %p3X3_1X1_WEIGHTS_load_26 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_40, i32 1)
  %p3X3_1X1_WEIGHTS_addr_97 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_40)
  store i8 %p3X3_1X1_WEIGHTS_addr_97, i8* %weights_48_48_1x1_V_17, align 1
  br label %.preheader755

.preheader754.loopexit:                           ; preds = %.preheader753
  br label %.preheader754

.preheader754:                                    ; preds = %.preheader754.preheader, %.preheader754.loopexit
  %i128 = phi i5 [ %i_129, %.preheader754.loopexit ], [ 0, %.preheader754.preheader ]
  %i129_cast290_cast = zext i5 %i128 to i10
  %i129_cast = zext i5 %i128 to i7
  %exitcond255 = icmp eq i5 %i128, -8
  %empty_598 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_129 = add i5 %i128, 1
  br i1 %exitcond255, label %160, label %.preheader753.preheader

.preheader753.preheader:                          ; preds = %.preheader754
  br label %.preheader753

.preheader753:                                    ; preds = %.preheader753.preheader, %159
  %k44 = phi i2 [ %k_45, %159 ], [ 0, %.preheader753.preheader ]
  %exitcond259 = icmp eq i2 %k44, -2
  %empty_599 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_45 = add i2 %k44, 1
  br i1 %exitcond259, label %.preheader754.loopexit, label %159

; <label>:159                                     ; preds = %.preheader753
  %tmp_1521 = trunc i2 %k44 to i1
  %p_shl174 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1521, i5 0)
  %p_shl174_cast = zext i6 %p_shl174 to i7
  %p_shl175 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1521, i3 0)
  %p_shl175_cast = zext i4 %p_shl175 to i7
  %tmp_736 = sub i7 %p_shl174_cast, %p_shl175_cast
  %tmp_976_cast_cast = sext i7 %tmp_736 to i10
  %tmp_737 = add i7 %i129_cast, %tmp_736
  %tmp_977_cast = sext i7 %tmp_737 to i32
  %tmp_738 = zext i32 %tmp_977_cast to i64
  %tmp54 = add i10 -440, %tmp_976_cast_cast
  %tmp_739 = add i10 %tmp54, %i129_cast290_cast
  %tmp_980_cast = sext i10 %tmp_739 to i11
  %tmp_741_cast = zext i11 %tmp_980_cast to i33
  %bias_V14_sum26 = add i33 %tmp_482_cast, %tmp_741_cast
  %bias_V14_sum43_cast = sext i33 %bias_V14_sum26 to i64
  %DATA_BIAS_addr_43 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum43_cast
  %DATA_BIAS_load_43_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_43, i32 1)
  %DATA_BIAS_addr_43_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_43)
  %bias_48_V_addr_26 = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_738
  store i8 %DATA_BIAS_addr_43_re, i8* %bias_48_V_addr_26, align 1
  br label %.preheader753

; <label>:160                                     ; preds = %.preheader754
  call fastcc void @subconv_1x1_8_p([4800 x i8]* @buffer0_1_48_8x8_p_V, [2304 x i8]* @weights_48_48_1x1_V, [48 x i8]* @bias_48_V, [4800 x i8]* @buffer1_1_48_8x8_p_V)
  br label %.loopexit970

.loopexit970.loopexit:                            ; preds = %.preheader752
  br label %.loopexit970

.loopexit970:                                     ; preds = %.loopexit970.loopexit, %160
  %co138 = phi i5 [ 0, %160 ], [ %co_139, %.loopexit970.loopexit ]
  %co139_cast = zext i5 %co138 to i10
  %co139_cast1 = zext i5 %co138 to i7
  %exitcond258 = icmp eq i5 %co138, -8
  %empty_600 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_139 = add i5 %co138, 1
  br i1 %exitcond258, label %.preheader749.preheader, label %.preheader752.preheader

.preheader752.preheader:                          ; preds = %.loopexit970
  br label %.preheader752

.preheader749.preheader:                          ; preds = %.loopexit970
  br label %.preheader749

.preheader752.loopexit:                           ; preds = %.preheader751
  br label %.preheader752

.preheader752:                                    ; preds = %.preheader752.preheader, %.preheader752.loopexit
  %w91 = phi i2 [ %w_92, %.preheader752.loopexit ], [ 0, %.preheader752.preheader ]
  %exitcond262 = icmp eq i2 %w91, -1
  %empty_601 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %w_92 = add i2 %w91, 1
  br i1 %exitcond262, label %.loopexit970.loopexit, label %.preheader751.preheader

.preheader751.preheader:                          ; preds = %.preheader752
  %tmp_749_cast1 = zext i2 %w91 to i13
  %tmp_749_cast = zext i2 %w91 to i36
  br label %.preheader751

.preheader751.loopexit:                           ; preds = %.preheader750
  br label %.preheader751

.preheader751:                                    ; preds = %.preheader751.loopexit, %.preheader751.preheader
  %h92 = phi i2 [ 0, %.preheader751.preheader ], [ %h_93, %.preheader751.loopexit ]
  %exitcond265 = icmp eq i2 %h92, -1
  %empty_602 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %h_93 = add i2 %h92, 1
  br i1 %exitcond265, label %.preheader752.loopexit, label %.preheader750.preheader

.preheader750.preheader:                          ; preds = %.preheader751
  %tmp_756 = zext i2 %h92 to i64
  %tmp_756_cast = zext i2 %h92 to i10
  br label %.preheader750

.preheader750:                                    ; preds = %161, %.preheader750.preheader
  %i136 = phi i2 [ %i_137, %161 ], [ 0, %.preheader750.preheader ]
  %exitcond268 = icmp eq i2 %i136, -2
  %empty_603 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %i_137 = add i2 %i136, 1
  br i1 %exitcond268, label %.preheader751.loopexit, label %161

; <label>:161                                     ; preds = %.preheader750
  %tmp_1535 = trunc i2 %i136 to i1
  %p_shl186 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1535, i5 0)
  %p_shl186_cast = zext i6 %p_shl186 to i7
  %p_shl187 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1535, i3 0)
  %p_shl187_cast = zext i4 %p_shl187 to i7
  %tmp_760 = sub i7 %p_shl186_cast, %p_shl187_cast
  %tmp_1013_cast = sext i7 %tmp_760 to i10
  %tmp_761 = add i7 %tmp_760, %co139_cast1
  %tmp_1014_cast = sext i7 %tmp_761 to i32
  %tmp_763_cast = zext i32 %tmp_1014_cast to i35
  %tmp_1536 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_761, i2 0)
  %tmp_1537 = sext i9 %tmp_1536 to i34
  %p_shl570_cast = zext i34 %tmp_1537 to i35
  %tmp_1538 = sub i35 %p_shl570_cast, %tmp_763_cast
  %tmp_1886_cast = sext i35 %tmp_1538 to i36
  %tmp_1539 = add i36 %tmp_1886_cast, %tmp_749_cast
  %tmp_1540 = trunc i36 %tmp_1539 to i10
  %tmp_1541 = trunc i36 %tmp_1539 to i8
  %p_shl569_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1541, i2 0)
  %tmp_1542 = sub i10 %p_shl569_cast, %tmp_1540
  %tmp_1543 = add i10 %tmp_1542, %tmp_756_cast
  %tmp_1890_cast = zext i10 %tmp_1543 to i64
  %weights_48_1_3x3_V_a_9 = getelementptr [432 x i8]* @weights_48_1_3x3_V, i64 0, i64 %tmp_1890_cast
  %tmp55 = add i10 -472, %tmp_1013_cast
  %tmp_764 = add i10 %co139_cast, %tmp55
  %tmp_766_cast = zext i10 %tmp_764 to i13
  %tmp_1544 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_764, i2 0)
  %p_shl568_cast = zext i12 %tmp_1544 to i13
  %tmp_1545 = sub i13 %p_shl568_cast, %tmp_766_cast
  %tmp_1546 = add i13 %tmp_1545, %tmp_749_cast1
  %tmp_1893_cast = sext i13 %tmp_1546 to i64
  %tmp_1547 = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1546, i2 0)
  %p_shl258 = sext i15 %tmp_1547 to i64
  %tmp_1548 = sub i64 %p_shl258, %tmp_1893_cast
  %tmp_1549 = add i64 %tmp_1548, %tmp_756
  %shuffle_conv_3x3_V6_4 = add i64 %tmp_373, %tmp_1549
  %p3X3_1X1_WEIGHTS_addr_41 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_3x3_V6_4
  %p3X3_1X1_WEIGHTS_load_27 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_41, i32 1)
  %p3X3_1X1_WEIGHTS_addr_98 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_41)
  store i8 %p3X3_1X1_WEIGHTS_addr_98, i8* %weights_48_1_3x3_V_a_9, align 1
  br label %.preheader750

.preheader749.loopexit:                           ; preds = %.preheader748
  br label %.preheader749

.preheader749:                                    ; preds = %.preheader749.preheader, %.preheader749.loopexit
  %i132 = phi i5 [ %i_133, %.preheader749.loopexit ], [ 0, %.preheader749.preheader ]
  %i133_cast280_cast = zext i5 %i132 to i10
  %i133_cast = zext i5 %i132 to i7
  %exitcond261 = icmp eq i5 %i132, -8
  %empty_604 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_133 = add i5 %i132, 1
  br i1 %exitcond261, label %163, label %.preheader748.preheader

.preheader748.preheader:                          ; preds = %.preheader749
  br label %.preheader748

.preheader748:                                    ; preds = %.preheader748.preheader, %162
  %k46 = phi i2 [ %k_47, %162 ], [ 0, %.preheader748.preheader ]
  %exitcond264 = icmp eq i2 %k46, -2
  %empty_605 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_47 = add i2 %k46, 1
  br i1 %exitcond264, label %.preheader749.loopexit, label %162

; <label>:162                                     ; preds = %.preheader748
  %tmp_1534 = trunc i2 %k46 to i1
  %p_shl180 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1534, i5 0)
  %p_shl180_cast = zext i6 %p_shl180 to i7
  %p_shl181 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1534, i3 0)
  %p_shl181_cast = zext i4 %p_shl181 to i7
  %tmp_751 = sub i7 %p_shl180_cast, %p_shl181_cast
  %tmp_994_cast_cast = sext i7 %tmp_751 to i10
  %tmp_752 = add i7 %i133_cast, %tmp_751
  %tmp_995_cast = sext i7 %tmp_752 to i32
  %tmp_753 = zext i32 %tmp_995_cast to i64
  %tmp56 = add i10 -392, %tmp_994_cast_cast
  %tmp_754 = add i10 %tmp56, %i133_cast280_cast
  %tmp_998_cast = sext i10 %tmp_754 to i11
  %tmp_755_cast1 = zext i11 %tmp_998_cast to i33
  %bias_V14_sum27 = add i33 %tmp_482_cast, %tmp_755_cast1
  %bias_V14_sum44_cast = sext i33 %bias_V14_sum27 to i64
  %DATA_BIAS_addr_44 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum44_cast
  %DATA_BIAS_load_44_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_44, i32 1)
  %DATA_BIAS_addr_44_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_44)
  %bias_48_V_addr_27 = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_753
  store i8 %DATA_BIAS_addr_44_re, i8* %bias_48_V_addr_27, align 1
  br label %.preheader748

; <label>:163                                     ; preds = %.preheader749
  call fastcc void @subconv_3x3_8_no_rel([4800 x i8]* @buffer1_1_48_8x8_p_V, [432 x i8]* @weights_48_1_3x3_V, [48 x i8]* @bias_48_V, [4800 x i8]* @buffer0_1_48_8x8_p_V)
  br label %.loopexit969

.loopexit969.loopexit:                            ; preds = %.preheader747
  br label %.loopexit969

.loopexit969:                                     ; preds = %.loopexit969.loopexit, %163
  %co140 = phi i5 [ 0, %163 ], [ %co_141, %.loopexit969.loopexit ]
  %co141_cast = zext i5 %co140 to i12
  %exitcond263 = icmp eq i5 %co140, -8
  %empty_606 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_141 = add i5 %co140, 1
  br i1 %exitcond263, label %.preheader745.preheader, label %.preheader747.preheader

.preheader745.preheader:                          ; preds = %.loopexit969
  br label %.preheader745

.preheader747.preheader:                          ; preds = %.loopexit969
  %tmp_1533 = trunc i5 %co140 to i1
  %p_shl182 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1533, i5 0)
  %p_shl182_cast = zext i6 %p_shl182 to i7
  %p_shl183 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1533, i3 0)
  %p_shl183_cast = zext i4 %p_shl183 to i7
  %tmp_750 = sub i7 %p_shl182_cast, %p_shl183_cast
  %p_lshr_f18_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co140, i32 1, i32 4)
  %tmp_1002_cast = zext i4 %p_lshr_f18_cast to i7
  br label %.preheader747

.preheader747.loopexit:                           ; preds = %.preheader746
  br label %.preheader747

.preheader747:                                    ; preds = %.preheader747.loopexit, %.preheader747.preheader
  %ci63 = phi i5 [ 0, %.preheader747.preheader ], [ %ci_64, %.preheader747.loopexit ]
  %ci63_cast = zext i5 %ci63 to i7
  %exitcond267 = icmp eq i5 %ci63, -8
  %empty_607 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_64 = add i5 %ci63, 1
  br i1 %exitcond267, label %.loopexit969.loopexit, label %.preheader746.preheader

.preheader746.preheader:                          ; preds = %.preheader747
  %tmp_757 = add i7 %tmp_750, %ci63_cast
  %tmp_758_cast = sext i7 %tmp_757 to i13
  %tmp_759_cast = zext i5 %ci63 to i19
  br label %.preheader746

.preheader746:                                    ; preds = %164, %.preheader746.preheader
  %i138 = phi i3 [ %i_139, %164 ], [ 0, %.preheader746.preheader ]
  %exitcond271 = icmp eq i3 %i138, -4
  %empty_608 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %i_139 = add i3 %i138, 1
  br i1 %exitcond271, label %.preheader747.loopexit, label %164

; <label>:164                                     ; preds = %.preheader746
  %tmp_1554 = trunc i3 %i138 to i2
  %p_shl188 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1554, i4 0)
  %p_shl188_cast = zext i6 %p_shl188 to i7
  %p_shl189 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1554, i2 0)
  %p_shl189_cast = zext i4 %p_shl189 to i7
  %tmp_772 = sub i7 %p_shl188_cast, %p_shl189_cast
  %tmp_773 = add i7 %tmp_772, %tmp_1002_cast
  %tmp_1555 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_773, i6 0)
  %tmp_1556 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_773, i4 0)
  %p_shl574_cast = sext i11 %tmp_1556 to i13
  %tmp_1557 = sub i13 %tmp_1555, %p_shl574_cast
  %tmp_1558 = add i13 %tmp_758_cast, %tmp_1557
  %tmp_1909_cast = sext i13 %tmp_1558 to i64
  %weights_48_48_1x1_V_18 = getelementptr [2304 x i8]* @weights_48_48_1x1_V, i64 0, i64 %tmp_1909_cast
  %p_shl190 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1554, i5 0)
  %p_shl190_cast = zext i7 %p_shl190 to i8
  %p_shl191 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1554, i3 0)
  %p_shl191_cast = zext i5 %p_shl191 to i8
  %tmp_774 = sub i8 %p_shl190_cast, %p_shl191_cast
  %tmp_1023_cast_cast = sext i8 %tmp_774 to i9
  %tmp57 = add i9 -104, %tmp_1023_cast_cast
  %tmp57_cast1 = sext i9 %tmp57 to i11
  %tmp57_cast = zext i11 %tmp57_cast1 to i12
  %tmp_775 = add i12 %tmp57_cast, %co141_cast
  %tmp_1559 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_775, i5 0)
  %p_shl571_cast = zext i17 %tmp_1559 to i18
  %tmp_1560 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_775, i3 0)
  %p_shl572_cast = zext i15 %tmp_1560 to i18
  %tmp_1561 = sub i18 %p_shl571_cast, %p_shl572_cast
  %tmp_1914_cast = sext i18 %tmp_1561 to i19
  %tmp_1562 = add i19 %tmp_759_cast, %tmp_1914_cast
  %tmp_1915_cast = sext i19 %tmp_1562 to i33
  %shuffle_conv_1x1_V8_18 = add i33 %tmp_1915_cast, %tmp_490_cast
  %shuffle_conv_1x1_V8_46 = sext i33 %shuffle_conv_1x1_V8_18 to i64
  %p3X3_1X1_WEIGHTS_addr_42 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_1x1_V8_46
  %p3X3_1X1_WEIGHTS_load_28 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_42, i32 1)
  %p3X3_1X1_WEIGHTS_addr_99 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_42)
  store i8 %p3X3_1X1_WEIGHTS_addr_99, i8* %weights_48_48_1x1_V_18, align 1
  br label %.preheader746

.preheader745.loopexit:                           ; preds = %.preheader744
  br label %.preheader745

.preheader745:                                    ; preds = %.preheader745.preheader, %.preheader745.loopexit
  %i134 = phi i5 [ %i_135, %.preheader745.loopexit ], [ 0, %.preheader745.preheader ]
  %i135_cast267_cast = zext i5 %i134 to i10
  %i135_cast = zext i5 %i134 to i7
  %exitcond266 = icmp eq i5 %i134, -8
  %empty_609 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_135 = add i5 %i134, 1
  br i1 %exitcond266, label %166, label %.preheader744.preheader

.preheader744.preheader:                          ; preds = %.preheader745
  br label %.preheader744

.preheader744:                                    ; preds = %.preheader744.preheader, %165
  %k48 = phi i2 [ %k_49, %165 ], [ 0, %.preheader744.preheader ]
  %exitcond270 = icmp eq i2 %k48, -2
  %empty_610 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %k_49 = add i2 %k48, 1
  br i1 %exitcond270, label %.preheader745.loopexit, label %165

; <label>:165                                     ; preds = %.preheader744
  %tmp_1553 = trunc i2 %k48 to i1
  %p_shl184 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1553, i5 0)
  %p_shl184_cast = zext i6 %p_shl184 to i7
  %p_shl185 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1553, i3 0)
  %p_shl185_cast = zext i4 %p_shl185 to i7
  %tmp_767 = sub i7 %p_shl184_cast, %p_shl185_cast
  %tmp_1004_cast_cast = sext i7 %tmp_767 to i10
  %tmp_768 = add i7 %i135_cast, %tmp_767
  %tmp_1005_cast = sext i7 %tmp_768 to i32
  %tmp_769 = zext i32 %tmp_1005_cast to i64
  %tmp58 = add i10 -344, %tmp_1004_cast_cast
  %tmp_770 = add i10 %tmp58, %i135_cast267_cast
  %tmp_1008_cast = sext i10 %tmp_770 to i11
  %tmp_771_cast = zext i11 %tmp_1008_cast to i33
  %bias_V14_sum28 = add i33 %tmp_482_cast, %tmp_771_cast
  %bias_V14_sum45_cast = sext i33 %bias_V14_sum28 to i64
  %DATA_BIAS_addr_45 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum45_cast
  %DATA_BIAS_load_45_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_45, i32 1)
  %DATA_BIAS_addr_45_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_45)
  %bias_48_V_addr_28 = getelementptr [48 x i8]* @bias_48_V, i64 0, i64 %tmp_769
  store i8 %DATA_BIAS_addr_45_re, i8* %bias_48_V_addr_28, align 1
  br label %.preheader744

; <label>:166                                     ; preds = %.preheader745
  call fastcc void @subconv_1x1_8_p([4800 x i8]* @buffer0_1_48_8x8_p_V, [2304 x i8]* @weights_48_48_1x1_V, [48 x i8]* @bias_48_V, [4800 x i8]* @buffer1_1_48_8x8_p_V)
  br label %.loopexit968

.loopexit968.loopexit:                            ; preds = %.preheader743
  br label %.loopexit968

.loopexit968:                                     ; preds = %.loopexit968.loopexit, %166
  %co142 = phi i6 [ 0, %166 ], [ %co_143, %.loopexit968.loopexit ]
  %exitcond269 = icmp eq i6 %co142, -16
  %empty_611 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_143 = add i6 %co142, 1
  br i1 %exitcond269, label %168, label %.preheader743.preheader

.preheader743.preheader:                          ; preds = %.loopexit968
  %tmp_1550 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co142, i3 0)
  %p_shl575_cast = zext i9 %tmp_1550 to i10
  %tmp_1551 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co142, i1 false)
  %p_shl576_cast = zext i7 %tmp_1551 to i10
  %tmp_1552 = add i10 %p_shl576_cast, %p_shl575_cast
  br label %.preheader743

.preheader743.loopexit:                           ; preds = %.preheader742
  br label %.preheader743

.preheader743:                                    ; preds = %.preheader743.loopexit, %.preheader743.preheader
  %h94 = phi i4 [ 0, %.preheader743.preheader ], [ %h_95, %.preheader743.loopexit ]
  %exitcond273 = icmp eq i4 %h94, -8
  %empty_612 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %h_95 = add i4 %h94, 1
  br i1 %exitcond273, label %.loopexit968.loopexit, label %.preheader742.preheader

.preheader742.preheader:                          ; preds = %.preheader743
  %tmp_777_cast = zext i4 %h_95 to i10
  %tmp_1565 = add i10 %tmp_777_cast, %tmp_1552
  %tmp_1566 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1565, i3 0)
  %p_shl577_cast = zext i13 %tmp_1566 to i15
  %tmp_1567 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1565, i1 false)
  %p_shl578_cast = zext i11 %tmp_1567 to i15
  %tmp_1568 = add i15 %p_shl577_cast, %p_shl578_cast
  br label %.preheader742

.preheader742:                                    ; preds = %167, %.preheader742.preheader
  %w93 = phi i4 [ %w_94, %167 ], [ 0, %.preheader742.preheader ]
  %exitcond276 = icmp eq i4 %w93, -8
  %empty_613 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %w_94 = add i4 %w93, 1
  br i1 %exitcond276, label %.preheader743.loopexit, label %167

; <label>:167                                     ; preds = %.preheader742
  %tmp_781_cast = zext i4 %w_94 to i15
  %tmp_1569 = add i15 %tmp_1568, %tmp_781_cast
  %tmp_1922_cast = zext i15 %tmp_1569 to i64
  %buffer0_1_48_8x8_p_V_15 = getelementptr [4800 x i8]* @buffer0_1_48_8x8_p_V, i64 0, i64 %tmp_1922_cast
  %shuffleunit1_6_outpu_2 = getelementptr [9600 x i8]* @shuffleunit1_6_outpu, i64 0, i64 %tmp_1922_cast
  %shuffleunit1_6_outpu_3 = load i8* %shuffleunit1_6_outpu_2, align 1
  store i8 %shuffleunit1_6_outpu_3, i8* %buffer0_1_48_8x8_p_V_15, align 1
  br label %.preheader742

; <label>:168                                     ; preds = %.loopexit968
  call fastcc void @shuffle_48_p([4800 x i8]* @buffer0_1_48_8x8_p_V, [9600 x i8]* @shuffleunit1_7_outpu)
  br label %.loopexit967

.loopexit967.loopexit:                            ; preds = %.preheader741
  br label %.loopexit967

.loopexit967:                                     ; preds = %.loopexit967.loopexit, %168
  %co144 = phi i5 [ 0, %168 ], [ %co_145, %.loopexit967.loopexit ]
  %co144_cast = zext i5 %co144 to i12
  %exitcond272 = icmp eq i5 %co144, -8
  %empty_614 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_145 = add i5 %co144, 1
  br i1 %exitcond272, label %.preheader739.preheader, label %.preheader741.preheader

.preheader739.preheader:                          ; preds = %.loopexit967
  br label %.preheader739

.preheader741.preheader:                          ; preds = %.loopexit967
  %tmp_1563 = trunc i5 %co144 to i2
  %p_shl192 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1563, i5 0)
  %p_shl192_cast = zext i7 %p_shl192 to i8
  %tmp_1564 = shl i5 %co144, 3
  %p_shl193_cast = zext i5 %tmp_1564 to i8
  %tmp_776 = sub i8 %p_shl192_cast, %p_shl193_cast
  %p_lshr_f19_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co144, i32 2, i32 4)
  %tmp_1029_cast = zext i3 %p_lshr_f19_cast to i8
  br label %.preheader741

.preheader741.loopexit:                           ; preds = %.preheader740
  br label %.preheader741

.preheader741:                                    ; preds = %.preheader741.loopexit, %.preheader741.preheader
  %ci65 = phi i5 [ 0, %.preheader741.preheader ], [ %ci_66, %.preheader741.loopexit ]
  %ci65_cast = zext i5 %ci65 to i8
  %exitcond275 = icmp eq i5 %ci65, -8
  %empty_615 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_66 = add i5 %ci65, 1
  br i1 %exitcond275, label %.loopexit967.loopexit, label %.preheader740.preheader

.preheader740.preheader:                          ; preds = %.preheader741
  %tmp_778 = add i8 %tmp_776, %ci65_cast
  %tmp_779_cast = sext i8 %tmp_778 to i15
  %tmp_780_cast = zext i5 %ci65 to i19
  br label %.preheader740

.preheader740:                                    ; preds = %169, %.preheader740.preheader
  %i142 = phi i5 [ %i_143, %169 ], [ 0, %.preheader740.preheader ]
  %exitcond279 = icmp eq i5 %i142, -16
  %empty_616 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %i_143 = add i5 %i142, 1
  br i1 %exitcond279, label %.preheader741.loopexit, label %169

; <label>:169                                     ; preds = %.preheader740
  %tmp_1571 = trunc i5 %i142 to i4
  %p_shl196 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1571, i3 0)
  %p_shl196_cast1 = zext i7 %p_shl196 to i10
  %p_shl196_cast = zext i7 %p_shl196 to i8
  %tmp_1572 = shl i5 %i142, 1
  %p_shl197_cast = zext i5 %tmp_1572 to i8
  %tmp_788 = sub i8 %p_shl196_cast, %p_shl197_cast
  %tmp_789 = add i8 %tmp_788, %tmp_1029_cast
  %tmp_1573 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_789, i7 0)
  %tmp_1574 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_789, i5 0)
  %p_shl582_cast = sext i13 %tmp_1574 to i15
  %tmp_1575 = sub i15 %tmp_1573, %p_shl582_cast
  %tmp_1576 = add i15 %tmp_779_cast, %tmp_1575
  %tmp_1932_cast = sext i15 %tmp_1576 to i64
  %weights_96_96_1x1_V_s = getelementptr [9216 x i8]* @weights_96_96_1x1_V, i64 0, i64 %tmp_1932_cast
  %p_shl198 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1571, i5 0)
  %p_shl198_cast = zext i9 %p_shl198 to i10
  %tmp_791 = sub i10 %p_shl198_cast, %p_shl196_cast1
  %tmp_1045_cast = sext i10 %tmp_791 to i12
  %tmp59 = add i12 2040, %tmp_1045_cast
  %tmp_792 = add i12 %tmp59, %co144_cast
  %tmp_1577 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_792, i5 0)
  %p_shl579_cast = zext i17 %tmp_1577 to i18
  %tmp_1578 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_792, i3 0)
  %p_shl580_cast = zext i15 %tmp_1578 to i18
  %tmp_1579 = sub i18 %p_shl579_cast, %p_shl580_cast
  %tmp_1936_cast = sext i18 %tmp_1579 to i19
  %tmp_1580 = add i19 %tmp_780_cast, %tmp_1936_cast
  %tmp_1937_cast = sext i19 %tmp_1580 to i33
  %shuffle_conv_1x1_V8_19 = add i33 %tmp_1937_cast, %tmp_490_cast
  %shuffle_conv_1x1_V8_47 = sext i33 %shuffle_conv_1x1_V8_19 to i64
  %p3X3_1X1_WEIGHTS_addr_43 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_1x1_V8_47
  %p3X3_1X1_WEIGHTS_load_29 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_43, i32 1)
  %p3X3_1X1_WEIGHTS_addr_100 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_43)
  store i8 %p3X3_1X1_WEIGHTS_addr_100, i8* %weights_96_96_1x1_V_s, align 1
  br label %.preheader740

.preheader739.loopexit:                           ; preds = %.preheader738
  br label %.preheader739

.preheader739:                                    ; preds = %.preheader739.preheader, %.preheader739.loopexit
  %i140 = phi i5 [ %i_141, %.preheader739.loopexit ], [ 0, %.preheader739.preheader ]
  %i141_cast253_cast = zext i5 %i140 to i10
  %i141_cast = zext i5 %i140 to i8
  %exitcond274 = icmp eq i5 %i140, -8
  %empty_617 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_141 = add i5 %i140, 1
  br i1 %exitcond274, label %171, label %.preheader738.preheader

.preheader738.preheader:                          ; preds = %.preheader739
  br label %.preheader738

.preheader738:                                    ; preds = %.preheader738.preheader, %170
  %k50 = phi i3 [ %k_51, %170 ], [ 0, %.preheader738.preheader ]
  %exitcond278 = icmp eq i3 %k50, -4
  %empty_618 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %k_51 = add i3 %k50, 1
  br i1 %exitcond278, label %.preheader739.loopexit, label %170

; <label>:170                                     ; preds = %.preheader738
  %tmp_1570 = trunc i3 %k50 to i2
  %p_shl194 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1570, i5 0)
  %p_shl194_cast = zext i7 %p_shl194 to i8
  %p_shl195 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1570, i3 0)
  %p_shl195_cast = zext i5 %p_shl195 to i8
  %tmp_783 = sub i8 %p_shl194_cast, %p_shl195_cast
  %tmp_1031_cast_cast = sext i8 %tmp_783 to i10
  %tmp_784 = add i8 %i141_cast, %tmp_783
  %tmp_1032_cast = sext i8 %tmp_784 to i32
  %tmp_785 = zext i32 %tmp_1032_cast to i64
  %tmp60 = add i10 -296, %tmp_1031_cast_cast
  %tmp_786 = add i10 %tmp60, %i141_cast253_cast
  %tmp_1035_cast = sext i10 %tmp_786 to i11
  %tmp_787_cast = zext i11 %tmp_1035_cast to i33
  %bias_V14_sum29 = add i33 %tmp_482_cast, %tmp_787_cast
  %bias_V14_sum46_cast = sext i33 %bias_V14_sum29 to i64
  %DATA_BIAS_addr_46 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum46_cast
  %DATA_BIAS_load_46_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_46, i32 1)
  %DATA_BIAS_addr_46_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_46)
  %bias_96_V_addr = getelementptr [96 x i8]* @bias_96_V, i64 0, i64 %tmp_785
  store i8 %DATA_BIAS_addr_46_re, i8* %bias_96_V_addr, align 1
  br label %.preheader738

; <label>:171                                     ; preds = %.preheader739
  call fastcc void @subconv_1x1_8p_p([9216 x i8]* @weights_96_96_1x1_V, [96 x i8]* @bias_96_V)
  br label %.loopexit966

.loopexit966.loopexit:                            ; preds = %.preheader737
  br label %.loopexit966

.loopexit966:                                     ; preds = %.loopexit966.loopexit, %171
  %co146 = phi i5 [ 0, %171 ], [ %co_147, %.loopexit966.loopexit ]
  %co147_cast = zext i5 %co146 to i10
  %co147_cast1 = zext i5 %co146 to i8
  %exitcond277 = icmp eq i5 %co146, -8
  %empty_619 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_147 = add i5 %co146, 1
  br i1 %exitcond277, label %.preheader734.preheader, label %.preheader737.preheader

.preheader737.preheader:                          ; preds = %.loopexit966
  br label %.preheader737

.preheader734.preheader:                          ; preds = %.loopexit966
  br label %.preheader734

.preheader737.loopexit:                           ; preds = %.preheader736
  br label %.preheader737

.preheader737:                                    ; preds = %.preheader737.preheader, %.preheader737.loopexit
  %w95 = phi i2 [ %w_96, %.preheader737.loopexit ], [ 0, %.preheader737.preheader ]
  %exitcond281 = icmp eq i2 %w95, -1
  %empty_620 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %w_96 = add i2 %w95, 1
  br i1 %exitcond281, label %.loopexit966.loopexit, label %.preheader736.preheader

.preheader736.preheader:                          ; preds = %.preheader737
  %tmp_795_cast1 = zext i2 %w95 to i13
  %tmp_795_cast = zext i2 %w95 to i36
  br label %.preheader736

.preheader736.loopexit:                           ; preds = %.preheader735
  br label %.preheader736

.preheader736:                                    ; preds = %.preheader736.loopexit, %.preheader736.preheader
  %h96 = phi i2 [ 0, %.preheader736.preheader ], [ %h_97, %.preheader736.loopexit ]
  %exitcond284 = icmp eq i2 %h96, -1
  %empty_621 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %h_97 = add i2 %h96, 1
  br i1 %exitcond284, label %.preheader737.loopexit, label %.preheader735.preheader

.preheader735.preheader:                          ; preds = %.preheader736
  %tmp_803 = zext i2 %h96 to i64
  %tmp_803_cast = zext i2 %h96 to i11
  br label %.preheader735

.preheader735:                                    ; preds = %172, %.preheader735.preheader
  %i148 = phi i3 [ %i_149, %172 ], [ 0, %.preheader735.preheader ]
  %exitcond287 = icmp eq i3 %i148, -4
  %empty_622 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %i_149 = add i3 %i148, 1
  br i1 %exitcond287, label %.preheader736.loopexit, label %172

; <label>:172                                     ; preds = %.preheader735
  %tmp_1584 = trunc i3 %i148 to i2
  %p_shl205 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1584, i5 0)
  %p_shl205_cast = zext i7 %p_shl205 to i8
  %p_shl206 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1584, i3 0)
  %p_shl206_cast = zext i5 %p_shl206 to i8
  %tmp_807 = sub i8 %p_shl205_cast, %p_shl206_cast
  %tmp_1068_cast = sext i8 %tmp_807 to i10
  %tmp_808 = add i8 %tmp_807, %co147_cast1
  %tmp_1069_cast = sext i8 %tmp_808 to i32
  %tmp_809_cast = zext i32 %tmp_1069_cast to i35
  %tmp_1585 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_808, i2 0)
  %tmp_1586 = sext i10 %tmp_1585 to i34
  %p_shl586_cast = zext i34 %tmp_1586 to i35
  %tmp_1587 = sub i35 %p_shl586_cast, %tmp_809_cast
  %tmp_1946_cast = sext i35 %tmp_1587 to i36
  %tmp_1588 = add i36 %tmp_1946_cast, %tmp_795_cast
  %tmp_1589 = trunc i36 %tmp_1588 to i11
  %tmp_1590 = trunc i36 %tmp_1588 to i9
  %p_shl585_cast = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_1590, i2 0)
  %tmp_1591 = sub i11 %p_shl585_cast, %tmp_1589
  %tmp_1592 = add i11 %tmp_1591, %tmp_803_cast
  %tmp_1950_cast = zext i11 %tmp_1592 to i64
  %weights_96_1_3x3_V_a = getelementptr [864 x i8]* @weights_96_1_3x3_V, i64 0, i64 %tmp_1950_cast
  %tmp61 = add i10 -424, %tmp_1068_cast
  %tmp_810 = add i10 %co147_cast, %tmp61
  %tmp_811_cast = zext i10 %tmp_810 to i13
  %tmp_1593 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_810, i2 0)
  %p_shl584_cast = zext i12 %tmp_1593 to i13
  %tmp_1594 = sub i13 %p_shl584_cast, %tmp_811_cast
  %tmp_1595 = add i13 %tmp_1594, %tmp_795_cast1
  %tmp_1953_cast = sext i13 %tmp_1595 to i64
  %tmp_1596 = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1595, i2 0)
  %p_shl262 = sext i15 %tmp_1596 to i64
  %tmp_1597 = sub i64 %p_shl262, %tmp_1953_cast
  %tmp_1598 = add i64 %tmp_1597, %tmp_803
  %shuffle_conv_3x3_V6_10 = add i64 %tmp_373, %tmp_1598
  %p3X3_1X1_WEIGHTS_addr_44 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_3x3_V6_10
  %p3X3_1X1_WEIGHTS_load_30 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_44, i32 1)
  %p3X3_1X1_WEIGHTS_addr_101 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_44)
  store i8 %p3X3_1X1_WEIGHTS_addr_101, i8* %weights_96_1_3x3_V_a, align 1
  br label %.preheader735

.preheader734.loopexit:                           ; preds = %.preheader733
  br label %.preheader734

.preheader734:                                    ; preds = %.preheader734.preheader, %.preheader734.loopexit
  %i144 = phi i5 [ %i_145, %.preheader734.loopexit ], [ 0, %.preheader734.preheader ]
  %i145_cast243_cast = zext i5 %i144 to i9
  %i145_cast = zext i5 %i144 to i8
  %exitcond280 = icmp eq i5 %i144, -8
  %empty_623 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_145 = add i5 %i144, 1
  br i1 %exitcond280, label %174, label %.preheader733.preheader

.preheader733.preheader:                          ; preds = %.preheader734
  br label %.preheader733

.preheader733:                                    ; preds = %.preheader733.preheader, %173
  %k52 = phi i3 [ %k_53, %173 ], [ 0, %.preheader733.preheader ]
  %exitcond283 = icmp eq i3 %k52, -4
  %empty_624 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %k_53 = add i3 %k52, 1
  br i1 %exitcond283, label %.preheader734.loopexit, label %173

; <label>:173                                     ; preds = %.preheader733
  %tmp_1583 = trunc i3 %k52 to i2
  %p_shl199 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1583, i5 0)
  %p_shl199_cast = zext i7 %p_shl199 to i8
  %p_shl200 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1583, i3 0)
  %p_shl200_cast = zext i5 %p_shl200 to i8
  %tmp_798 = sub i8 %p_shl199_cast, %p_shl200_cast
  %tmp_1049_cast_cast = sext i8 %tmp_798 to i9
  %tmp_799 = add i8 %i145_cast, %tmp_798
  %tmp_1050_cast = sext i8 %tmp_799 to i32
  %tmp_800 = zext i32 %tmp_1050_cast to i64
  %tmp62 = add i9 -200, %tmp_1049_cast_cast
  %tmp_801 = add i9 %tmp62, %i145_cast243_cast
  %tmp_1053_cast = sext i9 %tmp_801 to i11
  %tmp_802_cast = zext i11 %tmp_1053_cast to i33
  %bias_V14_sum30 = add i33 %tmp_482_cast, %tmp_802_cast
  %bias_V14_sum47_cast = sext i33 %bias_V14_sum30 to i64
  %DATA_BIAS_addr_47 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum47_cast
  %DATA_BIAS_load_47_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_47, i32 1)
  %DATA_BIAS_addr_47_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_47)
  %bias_96_V_addr_1 = getelementptr [96 x i8]* @bias_96_V, i64 0, i64 %tmp_800
  store i8 %DATA_BIAS_addr_47_re, i8* %bias_96_V_addr_1, align 1
  br label %.preheader733

; <label>:174                                     ; preds = %.preheader734
  call fastcc void @subconv_3x3_8_stride([9600 x i8]* @ShuffleConvs_2_Downs, [864 x i8]* @weights_96_1_3x3_V, [96 x i8]* @bias_96_V, [3456 x i8]* @buffer0_1_96_4x4_p_V)
  br label %.loopexit965

.loopexit965.loopexit:                            ; preds = %.preheader732
  br label %.loopexit965

.loopexit965:                                     ; preds = %.loopexit965.loopexit, %174
  %co148 = phi i5 [ 0, %174 ], [ %co_149, %.loopexit965.loopexit ]
  %co149_cast = zext i5 %co148 to i12
  %exitcond282 = icmp eq i5 %co148, -8
  %empty_625 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_149 = add i5 %co148, 1
  br i1 %exitcond282, label %.preheader730.preheader, label %.preheader732.preheader

.preheader730.preheader:                          ; preds = %.loopexit965
  br label %.preheader730

.preheader732.preheader:                          ; preds = %.loopexit965
  %tmp_1581 = trunc i5 %co148 to i2
  %p_shl201 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1581, i5 0)
  %p_shl201_cast = zext i7 %p_shl201 to i8
  %tmp_1582 = shl i5 %co148, 3
  %p_shl202_cast = zext i5 %tmp_1582 to i8
  %tmp_797 = sub i8 %p_shl201_cast, %p_shl202_cast
  %p_lshr_f20_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co148, i32 2, i32 4)
  %tmp_1057_cast = zext i3 %p_lshr_f20_cast to i8
  br label %.preheader732

.preheader732.loopexit:                           ; preds = %.preheader731
  br label %.preheader732

.preheader732:                                    ; preds = %.preheader732.loopexit, %.preheader732.preheader
  %ci67 = phi i5 [ 0, %.preheader732.preheader ], [ %ci_68, %.preheader732.loopexit ]
  %ci67_cast = zext i5 %ci67 to i8
  %exitcond286 = icmp eq i5 %ci67, -8
  %empty_626 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_68 = add i5 %ci67, 1
  br i1 %exitcond286, label %.loopexit965.loopexit, label %.preheader731.preheader

.preheader731.preheader:                          ; preds = %.preheader732
  %tmp_804 = add i8 %tmp_797, %ci67_cast
  %tmp_805_cast = sext i8 %tmp_804 to i15
  %tmp_806_cast = zext i5 %ci67 to i19
  br label %.preheader731

.preheader731:                                    ; preds = %175, %.preheader731.preheader
  %i150 = phi i5 [ %i_151, %175 ], [ 0, %.preheader731.preheader ]
  %exitcond290 = icmp eq i5 %i150, -16
  %empty_627 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %i_151 = add i5 %i150, 1
  br i1 %exitcond290, label %.preheader732.loopexit, label %175

; <label>:175                                     ; preds = %.preheader731
  %tmp_1600 = trunc i5 %i150 to i4
  %p_shl207 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1600, i3 0)
  %p_shl207_cast1 = zext i7 %p_shl207 to i10
  %p_shl207_cast = zext i7 %p_shl207 to i8
  %tmp_1601 = shl i5 %i150, 1
  %p_shl208_cast = zext i5 %tmp_1601 to i8
  %tmp_819 = sub i8 %p_shl207_cast, %p_shl208_cast
  %tmp_820 = add i8 %tmp_819, %tmp_1057_cast
  %tmp_1602 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_820, i7 0)
  %tmp_1603 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_820, i5 0)
  %p_shl590_cast = sext i13 %tmp_1603 to i15
  %tmp_1604 = sub i15 %tmp_1602, %p_shl590_cast
  %tmp_1605 = add i15 %tmp_805_cast, %tmp_1604
  %tmp_1966_cast = sext i15 %tmp_1605 to i64
  %weights_96_96_1x1_V_1 = getelementptr [9216 x i8]* @weights_96_96_1x1_V, i64 0, i64 %tmp_1966_cast
  %p_shl209 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1600, i5 0)
  %p_shl209_cast = zext i9 %p_shl209 to i10
  %tmp_821 = sub i10 %p_shl209_cast, %p_shl207_cast1
  %tmp_1078_cast = sext i10 %tmp_821 to i12
  %tmp63 = add i12 -1672, %tmp_1078_cast
  %tmp_822 = add i12 %tmp63, %co149_cast
  %tmp_1606 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_822, i5 0)
  %p_shl587_cast = zext i17 %tmp_1606 to i18
  %tmp_1607 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_822, i3 0)
  %p_shl588_cast = zext i15 %tmp_1607 to i18
  %tmp_1608 = sub i18 %p_shl587_cast, %p_shl588_cast
  %tmp_1970_cast = sext i18 %tmp_1608 to i19
  %tmp_1609 = add i19 %tmp_806_cast, %tmp_1970_cast
  %tmp_1971_cast = sext i19 %tmp_1609 to i33
  %shuffle_conv_1x1_V8_20 = add i33 %tmp_1971_cast, %tmp_490_cast
  %shuffle_conv_1x1_V8_48 = sext i33 %shuffle_conv_1x1_V8_20 to i64
  %p3X3_1X1_WEIGHTS_addr_45 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_1x1_V8_48
  %p3X3_1X1_WEIGHTS_load_31 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_45, i32 1)
  %p3X3_1X1_WEIGHTS_addr_102 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_45)
  store i8 %p3X3_1X1_WEIGHTS_addr_102, i8* %weights_96_96_1x1_V_1, align 1
  br label %.preheader731

.preheader730.loopexit:                           ; preds = %.preheader729
  br label %.preheader730

.preheader730:                                    ; preds = %.preheader730.preheader, %.preheader730.loopexit
  %i146 = phi i5 [ %i_147, %.preheader730.loopexit ], [ 0, %.preheader730.preheader ]
  %i147_cast = zext i5 %i146 to i12
  %i147_cast1 = zext i5 %i146 to i8
  %exitcond285 = icmp eq i5 %i146, -8
  %empty_628 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_147 = add i5 %i146, 1
  br i1 %exitcond285, label %177, label %.preheader729.preheader

.preheader729.preheader:                          ; preds = %.preheader730
  br label %.preheader729

.preheader729:                                    ; preds = %.preheader729.preheader, %176
  %k54 = phi i3 [ %k_55, %176 ], [ 0, %.preheader729.preheader ]
  %exitcond289 = icmp eq i3 %k54, -4
  %empty_629 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %k_55 = add i3 %k54, 1
  br i1 %exitcond289, label %.preheader730.loopexit, label %176

; <label>:176                                     ; preds = %.preheader729
  %tmp_1599 = trunc i3 %k54 to i2
  %p_shl203 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1599, i5 0)
  %p_shl203_cast = zext i7 %p_shl203 to i8
  %p_shl204 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1599, i3 0)
  %p_shl204_cast = zext i5 %p_shl204 to i8
  %tmp_813 = sub i8 %p_shl203_cast, %p_shl204_cast
  %tmp_1059_cast_cast = sext i8 %tmp_813 to i9
  %tmp_814 = add i8 %i147_cast1, %tmp_813
  %tmp_1060_cast = sext i8 %tmp_814 to i32
  %tmp_816 = zext i32 %tmp_1060_cast to i64
  %tmp64 = add i9 -104, %tmp_1059_cast_cast
  %tmp64_cast1 = sext i9 %tmp64 to i11
  %tmp64_cast = zext i11 %tmp64_cast1 to i12
  %tmp_817 = add i12 %tmp64_cast, %i147_cast
  %tmp_818_cast = zext i12 %tmp_817 to i33
  %bias_V14_sum31 = add i33 %tmp_482_cast, %tmp_818_cast
  %bias_V14_sum48_cast = sext i33 %bias_V14_sum31 to i64
  %DATA_BIAS_addr_48 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum48_cast
  %DATA_BIAS_load_48_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_48, i32 1)
  %DATA_BIAS_addr_48_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_48)
  %bias_96_V_addr_2 = getelementptr [96 x i8]* @bias_96_V, i64 0, i64 %tmp_816
  store i8 %DATA_BIAS_addr_48_re, i8* %bias_96_V_addr_2, align 1
  br label %.preheader729

; <label>:177                                     ; preds = %.preheader730
  call fastcc void @subconv_1x1_4_p([3456 x i8]* @buffer0_1_96_4x4_p_V, [9216 x i8]* @weights_96_96_1x1_V, [96 x i8]* @bias_96_V, [3456 x i8]* @buffer1_1_96_4x4_p_V)
  call fastcc void @shuffle_96_l_p([3456 x i8]* @buffer1_1_96_4x4_p_V, [6912 x i8]* @downsampleunit2_outp)
  br label %.loopexit964

.loopexit964.loopexit:                            ; preds = %.preheader728
  br label %.loopexit964

.loopexit964:                                     ; preds = %.loopexit964.loopexit, %177
  %co150 = phi i5 [ 0, %177 ], [ %co_151, %.loopexit964.loopexit ]
  %co151_cast = zext i5 %co150 to i10
  %co151_cast1 = zext i5 %co150 to i8
  %exitcond288 = icmp eq i5 %co150, -8
  %empty_630 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_151 = add i5 %co150, 1
  br i1 %exitcond288, label %.preheader725.preheader, label %.preheader728.preheader

.preheader728.preheader:                          ; preds = %.loopexit964
  br label %.preheader728

.preheader725.preheader:                          ; preds = %.loopexit964
  br label %.preheader725

.preheader728.loopexit:                           ; preds = %.preheader727
  br label %.preheader728

.preheader728:                                    ; preds = %.preheader728.preheader, %.preheader728.loopexit
  %w97 = phi i2 [ %w_98, %.preheader728.loopexit ], [ 0, %.preheader728.preheader ]
  %exitcond292 = icmp eq i2 %w97, -1
  %empty_631 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %w_98 = add i2 %w97, 1
  br i1 %exitcond292, label %.loopexit964.loopexit, label %.preheader727.preheader

.preheader727.preheader:                          ; preds = %.preheader728
  %tmp_823_cast1 = zext i2 %w97 to i13
  %tmp_823_cast = zext i2 %w97 to i36
  br label %.preheader727

.preheader727.loopexit:                           ; preds = %.preheader726
  br label %.preheader727

.preheader727:                                    ; preds = %.preheader727.loopexit, %.preheader727.preheader
  %h98 = phi i2 [ 0, %.preheader727.preheader ], [ %h_99, %.preheader727.loopexit ]
  %exitcond368 = icmp eq i2 %h98, -1
  %empty_632 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %h_99 = add i2 %h98, 1
  br i1 %exitcond368, label %.preheader728.loopexit, label %.preheader726.preheader

.preheader726.preheader:                          ; preds = %.preheader727
  %tmp_830 = zext i2 %h98 to i64
  %tmp_830_cast = zext i2 %h98 to i11
  br label %.preheader726

.preheader726:                                    ; preds = %178, %.preheader726.preheader
  %i156 = phi i3 [ %i_157, %178 ], [ 0, %.preheader726.preheader ]
  %exitcond369 = icmp eq i3 %i156, -4
  %empty_633 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %i_157 = add i3 %i156, 1
  br i1 %exitcond369, label %.preheader727.loopexit, label %178

; <label>:178                                     ; preds = %.preheader726
  %tmp_1613 = trunc i3 %i156 to i2
  %p_shl216 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1613, i5 0)
  %p_shl216_cast = zext i7 %p_shl216 to i8
  %p_shl217 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1613, i3 0)
  %p_shl217_cast = zext i5 %p_shl217 to i8
  %tmp_835 = sub i8 %p_shl216_cast, %p_shl217_cast
  %tmp_1101_cast = sext i8 %tmp_835 to i10
  %tmp_836 = add i8 %tmp_835, %co151_cast1
  %tmp_1102_cast = sext i8 %tmp_836 to i32
  %tmp_837_cast1 = zext i32 %tmp_1102_cast to i35
  %tmp_1614 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_836, i2 0)
  %tmp_1615 = sext i10 %tmp_1614 to i34
  %p_shl594_cast = zext i34 %tmp_1615 to i35
  %tmp_1616 = sub i35 %p_shl594_cast, %tmp_837_cast1
  %tmp_1980_cast = sext i35 %tmp_1616 to i36
  %tmp_1617 = add i36 %tmp_1980_cast, %tmp_823_cast
  %tmp_1618 = trunc i36 %tmp_1617 to i11
  %tmp_1619 = trunc i36 %tmp_1617 to i9
  %p_shl593_cast = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_1619, i2 0)
  %tmp_1620 = sub i11 %p_shl593_cast, %tmp_1618
  %tmp_1621 = add i11 %tmp_1620, %tmp_830_cast
  %tmp_1984_cast = zext i11 %tmp_1621 to i64
  %weights_96_1_3x3_V_a_1 = getelementptr [864 x i8]* @weights_96_1_3x3_V, i64 0, i64 %tmp_1984_cast
  %tmp65 = add i10 -328, %tmp_1101_cast
  %tmp_838 = add i10 %co151_cast, %tmp65
  %tmp_839_cast = zext i10 %tmp_838 to i13
  %tmp_1622 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_838, i2 0)
  %p_shl592_cast = zext i12 %tmp_1622 to i13
  %tmp_1623 = sub i13 %p_shl592_cast, %tmp_839_cast
  %tmp_1624 = add i13 %tmp_1623, %tmp_823_cast1
  %tmp_1987_cast = sext i13 %tmp_1624 to i64
  %tmp_1625 = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1624, i2 0)
  %p_shl267 = sext i15 %tmp_1625 to i64
  %tmp_1626 = sub i64 %p_shl267, %tmp_1987_cast
  %tmp_1627 = add i64 %tmp_1626, %tmp_830
  %shuffle_conv_3x3_V6_11 = add i64 %tmp_373, %tmp_1627
  %p3X3_1X1_WEIGHTS_addr_46 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_3x3_V6_11
  %p3X3_1X1_WEIGHTS_load_32 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_46, i32 1)
  %p3X3_1X1_WEIGHTS_addr_103 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_46)
  store i8 %p3X3_1X1_WEIGHTS_addr_103, i8* %weights_96_1_3x3_V_a_1, align 1
  br label %.preheader726

.preheader725.loopexit:                           ; preds = %.preheader724
  br label %.preheader725

.preheader725:                                    ; preds = %.preheader725.preheader, %.preheader725.loopexit
  %i152 = phi i5 [ %i_153, %.preheader725.loopexit ], [ 0, %.preheader725.preheader ]
  %i153_cast = zext i5 %i152 to i12
  %i153_cast1 = zext i5 %i152 to i8
  %exitcond291 = icmp eq i5 %i152, -8
  %empty_634 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_153 = add i5 %i152, 1
  br i1 %exitcond291, label %180, label %.preheader724.preheader

.preheader724.preheader:                          ; preds = %.preheader725
  br label %.preheader724

.preheader724:                                    ; preds = %.preheader724.preheader, %179
  %k56 = phi i3 [ %k_57, %179 ], [ 0, %.preheader724.preheader ]
  %exitcond294 = icmp eq i3 %k56, -4
  %empty_635 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %k_57 = add i3 %k56, 1
  br i1 %exitcond294, label %.preheader725.loopexit, label %179

; <label>:179                                     ; preds = %.preheader724
  %tmp_1612 = trunc i3 %k56 to i2
  %p_shl210 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1612, i5 0)
  %p_shl210_cast = zext i7 %p_shl210 to i8
  %p_shl211 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1612, i3 0)
  %p_shl211_cast = zext i5 %p_shl211 to i8
  %tmp_825 = sub i8 %p_shl210_cast, %p_shl211_cast
  %tmp_1082_cast = sext i8 %tmp_825 to i12
  %tmp_826 = add i8 %i153_cast1, %tmp_825
  %tmp_1083_cast = sext i8 %tmp_826 to i32
  %tmp_827 = zext i32 %tmp_1083_cast to i64
  %tmp66 = add i12 2040, %tmp_1082_cast
  %tmp_828 = add i12 %tmp66, %i153_cast
  %tmp_829_cast = zext i12 %tmp_828 to i33
  %bias_V14_sum32 = add i33 %tmp_482_cast, %tmp_829_cast
  %bias_V14_sum49_cast = sext i33 %bias_V14_sum32 to i64
  %DATA_BIAS_addr_49 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum49_cast
  %DATA_BIAS_load_49_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_49, i32 1)
  %DATA_BIAS_addr_49_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_49)
  %bias_96_V_addr_3 = getelementptr [96 x i8]* @bias_96_V, i64 0, i64 %tmp_827
  store i8 %DATA_BIAS_addr_49_re, i8* %bias_96_V_addr_3, align 1
  br label %.preheader724

; <label>:180                                     ; preds = %.preheader725
  call fastcc void @subconv_3x3_8_stride([9600 x i8]* @shuffleunit1_7_outpu, [864 x i8]* @weights_96_1_3x3_V, [96 x i8]* @bias_96_V, [3456 x i8]* @buffer0_1_96_4x4_p_V)
  br label %.loopexit963

.loopexit963.loopexit:                            ; preds = %.preheader723
  br label %.loopexit963

.loopexit963:                                     ; preds = %.loopexit963.loopexit, %180
  %co152 = phi i5 [ 0, %180 ], [ %co_153, %.loopexit963.loopexit ]
  %co153_cast = zext i5 %co152 to i12
  %exitcond293 = icmp eq i5 %co152, -8
  %empty_636 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_153 = add i5 %co152, 1
  br i1 %exitcond293, label %.preheader721.preheader, label %.preheader723.preheader

.preheader721.preheader:                          ; preds = %.loopexit963
  br label %.preheader721

.preheader723.preheader:                          ; preds = %.loopexit963
  %tmp_1610 = trunc i5 %co152 to i2
  %p_shl212 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1610, i5 0)
  %p_shl212_cast = zext i7 %p_shl212 to i8
  %tmp_1611 = shl i5 %co152, 3
  %p_shl213_cast = zext i5 %tmp_1611 to i8
  %tmp_824 = sub i8 %p_shl212_cast, %p_shl213_cast
  %p_lshr_f21_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co152, i32 2, i32 4)
  %tmp_1090_cast = zext i3 %p_lshr_f21_cast to i8
  br label %.preheader723

.preheader723.loopexit:                           ; preds = %.preheader722
  br label %.preheader723

.preheader723:                                    ; preds = %.preheader723.loopexit, %.preheader723.preheader
  %ci69 = phi i5 [ 0, %.preheader723.preheader ], [ %ci_70, %.preheader723.loopexit ]
  %ci69_cast = zext i5 %ci69 to i8
  %exitcond367 = icmp eq i5 %ci69, -8
  %empty_637 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_70 = add i5 %ci69, 1
  br i1 %exitcond367, label %.loopexit963.loopexit, label %.preheader722.preheader

.preheader722.preheader:                          ; preds = %.preheader723
  %tmp_831 = add i8 %tmp_824, %ci69_cast
  %tmp_833_cast = sext i8 %tmp_831 to i15
  %tmp_834_cast1 = zext i5 %ci69 to i19
  br label %.preheader722

.preheader722:                                    ; preds = %181, %.preheader722.preheader
  %i158 = phi i5 [ %i_159, %181 ], [ 0, %.preheader722.preheader ]
  %exitcond366 = icmp eq i5 %i158, -16
  %empty_638 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %i_159 = add i5 %i158, 1
  br i1 %exitcond366, label %.preheader723.loopexit, label %181

; <label>:181                                     ; preds = %.preheader722
  %tmp_1635 = trunc i5 %i158 to i4
  %p_shl220 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1635, i3 0)
  %p_shl220_cast1 = zext i7 %p_shl220 to i10
  %p_shl220_cast = zext i7 %p_shl220 to i8
  %tmp_1636 = shl i5 %i158, 1
  %p_shl221_cast = zext i5 %tmp_1636 to i8
  %tmp_848 = sub i8 %p_shl220_cast, %p_shl221_cast
  %tmp_849 = add i8 %tmp_848, %tmp_1090_cast
  %tmp_1637 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_849, i7 0)
  %tmp_1638 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_849, i5 0)
  %p_shl598_cast = sext i13 %tmp_1638 to i15
  %tmp_1639 = sub i15 %tmp_1637, %p_shl598_cast
  %tmp_1640 = add i15 %tmp_833_cast, %tmp_1639
  %tmp_2006_cast = sext i15 %tmp_1640 to i64
  %weights_96_96_1x1_V_2 = getelementptr [9216 x i8]* @weights_96_96_1x1_V, i64 0, i64 %tmp_2006_cast
  %p_shl222 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1635, i5 0)
  %p_shl222_cast = zext i9 %p_shl222 to i10
  %tmp_850 = sub i10 %p_shl222_cast, %p_shl220_cast1
  %tmp_1116_cast = sext i10 %tmp_850 to i12
  %tmp67 = add i12 -1288, %tmp_1116_cast
  %tmp_851 = add i12 %tmp67, %co153_cast
  %tmp_1641 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_851, i5 0)
  %p_shl595_cast = zext i17 %tmp_1641 to i18
  %tmp_1642 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_851, i3 0)
  %p_shl596_cast = zext i15 %tmp_1642 to i18
  %tmp_1643 = sub i18 %p_shl595_cast, %p_shl596_cast
  %tmp_2010_cast = sext i18 %tmp_1643 to i19
  %tmp_1644 = add i19 %tmp_834_cast1, %tmp_2010_cast
  %tmp_2011_cast = sext i19 %tmp_1644 to i33
  %shuffle_conv_1x1_V8_21 = add i33 %tmp_2011_cast, %tmp_490_cast
  %shuffle_conv_1x1_V8_49 = sext i33 %shuffle_conv_1x1_V8_21 to i64
  %p3X3_1X1_WEIGHTS_addr_47 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_1x1_V8_49
  %p3X3_1X1_WEIGHTS_load_33 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_47, i32 1)
  %p3X3_1X1_WEIGHTS_addr_104 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_47)
  store i8 %p3X3_1X1_WEIGHTS_addr_104, i8* %weights_96_96_1x1_V_2, align 1
  br label %.preheader722

.preheader721.loopexit:                           ; preds = %.preheader720
  br label %.preheader721

.preheader721:                                    ; preds = %.preheader721.preheader, %.preheader721.loopexit
  %i154 = phi i5 [ %i_155, %.preheader721.loopexit ], [ 0, %.preheader721.preheader ]
  %i155_cast = zext i5 %i154 to i12
  %i155_cast1 = zext i5 %i154 to i8
  %exitcond365 = icmp eq i5 %i154, -8
  %empty_639 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_155 = add i5 %i154, 1
  br i1 %exitcond365, label %183, label %.preheader720.preheader

.preheader720.preheader:                          ; preds = %.preheader721
  br label %.preheader720

.preheader720:                                    ; preds = %.preheader720.preheader, %182
  %k58 = phi i3 [ %k_59, %182 ], [ 0, %.preheader720.preheader ]
  %exitcond364 = icmp eq i3 %k58, -4
  %empty_640 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %k_59 = add i3 %k58, 1
  br i1 %exitcond364, label %.preheader721.loopexit, label %182

; <label>:182                                     ; preds = %.preheader720
  %tmp_1634 = trunc i3 %k58 to i2
  %p_shl214 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1634, i5 0)
  %p_shl214_cast = zext i7 %p_shl214 to i8
  %p_shl215 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1634, i3 0)
  %p_shl215_cast = zext i5 %p_shl215 to i8
  %tmp_842 = sub i8 %p_shl214_cast, %p_shl215_cast
  %tmp_1092_cast = sext i8 %tmp_842 to i12
  %tmp_844 = add i8 %i155_cast1, %tmp_842
  %tmp_1093_cast = sext i8 %tmp_844 to i32
  %tmp_845 = zext i32 %tmp_1093_cast to i64
  %tmp68 = add i12 -1960, %tmp_1092_cast
  %tmp_846 = add i12 %tmp68, %i155_cast
  %tmp_847_cast = zext i12 %tmp_846 to i33
  %bias_V14_sum33 = add i33 %tmp_482_cast, %tmp_847_cast
  %bias_V14_sum50_cast = sext i33 %bias_V14_sum33 to i64
  %DATA_BIAS_addr_50 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum50_cast
  %DATA_BIAS_load_50_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_50, i32 1)
  %DATA_BIAS_addr_50_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_50)
  %bias_96_V_addr_4 = getelementptr [96 x i8]* @bias_96_V, i64 0, i64 %tmp_845
  store i8 %DATA_BIAS_addr_50_re, i8* %bias_96_V_addr_4, align 1
  br label %.preheader720

; <label>:183                                     ; preds = %.preheader721
  call fastcc void @subconv_1x1_4_p([3456 x i8]* @buffer0_1_96_4x4_p_V, [9216 x i8]* @weights_96_96_1x1_V, [96 x i8]* @bias_96_V, [3456 x i8]* @buffer1_1_96_4x4_p_V)
  call fastcc void @shuffle_96_r_p([3456 x i8]* @buffer1_1_96_4x4_p_V, [6912 x i8]* @downsampleunit2_outp)
  br label %.loopexit962

.loopexit962.loopexit:                            ; preds = %.preheader719
  br label %.loopexit962

.loopexit962:                                     ; preds = %.loopexit962.loopexit, %183
  %co154 = phi i7 [ 0, %183 ], [ %co_155, %.loopexit962.loopexit ]
  %co155_cast = zext i7 %co154 to i8
  %exitcond363 = icmp eq i7 %co154, -32
  %empty_641 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_155 = add i7 %co154, 1
  br i1 %exitcond363, label %.preheader717.preheader, label %.preheader719.preheader

.preheader717.preheader:                          ; preds = %.loopexit962
  br label %.preheader717

.preheader719.preheader:                          ; preds = %.loopexit962
  %tmp_1628 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co154, i3 0)
  %p_shl601_cast = zext i10 %tmp_1628 to i11
  %tmp_1629 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co154, i1 false)
  %p_shl602_cast = zext i8 %tmp_1629 to i11
  %tmp_1630 = sub i11 %p_shl601_cast, %p_shl602_cast
  %tmp_1993_cast = sext i11 %tmp_1630 to i12
  %tmp_841 = add i8 %co155_cast, 96
  %tmp_1631 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %tmp_841, i3 0)
  %p_shl599_cast = zext i11 %tmp_1631 to i12
  %tmp_1632 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_841, i1 false)
  %p_shl600_cast = zext i9 %tmp_1632 to i12
  %tmp_1633 = sub i12 %p_shl599_cast, %p_shl600_cast
  %tmp_1996_cast = sext i12 %tmp_1633 to i13
  br label %.preheader719

.preheader719.loopexit:                           ; preds = %.preheader718
  br label %.preheader719

.preheader719:                                    ; preds = %.preheader719.loopexit, %.preheader719.preheader
  %h100 = phi i3 [ 0, %.preheader719.preheader ], [ %h_101, %.preheader719.loopexit ]
  %exitcond362 = icmp eq i3 %h100, -4
  %empty_642 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %h_101 = add i3 %h100, 1
  br i1 %exitcond362, label %.loopexit962.loopexit, label %.preheader718.preheader

.preheader718.preheader:                          ; preds = %.preheader719
  %tmp_853_cast1 = zext i3 %h_101 to i13
  %tmp_853_cast2 = zext i3 %h_101 to i12
  %tmp_1647 = add i12 %tmp_853_cast2, %tmp_1993_cast
  %tmp_1648 = trunc i12 %tmp_1647 to i10
  %p_shl605_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1648, i3 0)
  %p_shl606_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_1647, i1 false)
  %tmp_1649 = sub i13 %p_shl605_cast, %p_shl606_cast
  %tmp_1650 = add i13 %tmp_853_cast1, %tmp_1996_cast
  %tmp_1651 = trunc i13 %tmp_1650 to i11
  %p_shl603_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1651, i3 0)
  %p_shl604_cast = call i14 @_ssdm_op_BitConcatenate.i14.i13.i1(i13 %tmp_1650, i1 false)
  %tmp_1652 = sub i14 %p_shl603_cast, %p_shl604_cast
  br label %.preheader718

.preheader718:                                    ; preds = %184, %.preheader718.preheader
  %w99 = phi i3 [ %w_100, %184 ], [ 0, %.preheader718.preheader ]
  %exitcond361 = icmp eq i3 %w99, -4
  %empty_643 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %w_100 = add i3 %w99, 1
  br i1 %exitcond361, label %.preheader719.loopexit, label %184

; <label>:184                                     ; preds = %.preheader718
  %tmp_858_cast1 = zext i3 %w_100 to i14
  %tmp_858_cast = zext i3 %w_100 to i13
  %tmp_1653 = add i13 %tmp_1649, %tmp_858_cast
  %tmp_2022_cast = zext i13 %tmp_1653 to i64
  %buffer0_1_96_4x4_p_V = getelementptr [3456 x i8]* @buffer0_1_96_4x4_p_V, i64 0, i64 %tmp_2022_cast
  %tmp_1654 = add i14 %tmp_1652, %tmp_858_cast1
  %tmp_2023_cast = zext i14 %tmp_1654 to i64
  %downsampleunit2_outp = getelementptr [6912 x i8]* @downsampleunit2_outp, i64 0, i64 %tmp_2023_cast
  %downsampleunit2_outp_1 = load i8* %downsampleunit2_outp, align 1
  store i8 %downsampleunit2_outp_1, i8* %buffer0_1_96_4x4_p_V, align 1
  br label %.preheader718

.preheader717.loopexit:                           ; preds = %.preheader716
  br label %.preheader717

.preheader717:                                    ; preds = %.preheader717.preheader, %.preheader717.loopexit
  %co156 = phi i5 [ %co_157, %.preheader717.loopexit ], [ 0, %.preheader717.preheader ]
  %co156_cast = zext i5 %co156 to i12
  %exitcond360 = icmp eq i5 %co156, -8
  %empty_644 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_157 = add i5 %co156, 1
  br i1 %exitcond360, label %.preheader714.preheader, label %.preheader716.preheader

.preheader714.preheader:                          ; preds = %.preheader717
  br label %.preheader714

.preheader716.preheader:                          ; preds = %.preheader717
  %tmp_1645 = trunc i5 %co156 to i2
  %p_shl218 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1645, i5 0)
  %p_shl218_cast = zext i7 %p_shl218 to i8
  %tmp_1646 = shl i5 %co156, 3
  %p_shl219_cast = zext i5 %tmp_1646 to i8
  %tmp_852 = sub i8 %p_shl218_cast, %p_shl219_cast
  %p_lshr_f22_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co156, i32 2, i32 4)
  %tmp_1112_cast = zext i3 %p_lshr_f22_cast to i8
  br label %.preheader716

.preheader716.loopexit:                           ; preds = %.preheader715
  br label %.preheader716

.preheader716:                                    ; preds = %.preheader716.loopexit, %.preheader716.preheader
  %ci71 = phi i5 [ 0, %.preheader716.preheader ], [ %ci_72, %.preheader716.loopexit ]
  %ci71_cast = zext i5 %ci71 to i8
  %exitcond359 = icmp eq i5 %ci71, -8
  %empty_645 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_72 = add i5 %ci71, 1
  br i1 %exitcond359, label %.preheader717.loopexit, label %.preheader715.preheader

.preheader715.preheader:                          ; preds = %.preheader716
  %tmp_854 = add i8 %tmp_852, %ci71_cast
  %tmp_855_cast = sext i8 %tmp_854 to i15
  %tmp_856_cast1 = zext i5 %ci71 to i19
  br label %.preheader715

.preheader715:                                    ; preds = %185, %.preheader715.preheader
  %i162 = phi i5 [ %i_163, %185 ], [ 0, %.preheader715.preheader ]
  %exitcond358 = icmp eq i5 %i162, -16
  %empty_646 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %i_163 = add i5 %i162, 1
  br i1 %exitcond358, label %.preheader716.loopexit, label %185

; <label>:185                                     ; preds = %.preheader715
  %tmp_1656 = trunc i5 %i162 to i4
  %p_shl225 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1656, i3 0)
  %p_shl225_cast1 = zext i7 %p_shl225 to i10
  %p_shl225_cast = zext i7 %p_shl225 to i8
  %tmp_1657 = shl i5 %i162, 1
  %p_shl226_cast = zext i5 %tmp_1657 to i8
  %tmp_865 = sub i8 %p_shl225_cast, %p_shl226_cast
  %tmp_866 = add i8 %tmp_865, %tmp_1112_cast
  %tmp_1658 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_866, i7 0)
  %tmp_1659 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_866, i5 0)
  %p_shl610_cast = sext i13 %tmp_1659 to i15
  %tmp_1660 = sub i15 %tmp_1658, %p_shl610_cast
  %tmp_1661 = add i15 %tmp_855_cast, %tmp_1660
  %tmp_2033_cast = sext i15 %tmp_1661 to i64
  %weights_96_96_1x1_V_3 = getelementptr [9216 x i8]* @weights_96_96_1x1_V, i64 0, i64 %tmp_2033_cast
  %p_shl227 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1656, i5 0)
  %p_shl227_cast = zext i9 %p_shl227 to i10
  %tmp_867 = sub i10 %p_shl227_cast, %p_shl225_cast1
  %tmp_1135_cast = sext i10 %tmp_867 to i12
  %tmp69 = add i12 -904, %tmp_1135_cast
  %tmp_868 = add i12 %tmp69, %co156_cast
  %tmp_1662 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_868, i5 0)
  %p_shl607_cast = zext i17 %tmp_1662 to i18
  %tmp_1663 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_868, i3 0)
  %p_shl608_cast = zext i15 %tmp_1663 to i18
  %tmp_1664 = sub i18 %p_shl607_cast, %p_shl608_cast
  %tmp_2037_cast = sext i18 %tmp_1664 to i19
  %tmp_1665 = add i19 %tmp_856_cast1, %tmp_2037_cast
  %tmp_2038_cast = sext i19 %tmp_1665 to i33
  %shuffle_conv_1x1_V8_22 = add i33 %tmp_2038_cast, %tmp_490_cast
  %shuffle_conv_1x1_V8_50 = sext i33 %shuffle_conv_1x1_V8_22 to i64
  %p3X3_1X1_WEIGHTS_addr_48 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_1x1_V8_50
  %p3X3_1X1_WEIGHTS_load_34 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_48, i32 1)
  %p3X3_1X1_WEIGHTS_addr_105 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_48)
  store i8 %p3X3_1X1_WEIGHTS_addr_105, i8* %weights_96_96_1x1_V_3, align 1
  br label %.preheader715

.preheader714.loopexit:                           ; preds = %.preheader713
  br label %.preheader714

.preheader714:                                    ; preds = %.preheader714.preheader, %.preheader714.loopexit
  %i160 = phi i5 [ %i_161, %.preheader714.loopexit ], [ 0, %.preheader714.preheader ]
  %i161_cast = zext i5 %i160 to i12
  %i161_cast1 = zext i5 %i160 to i8
  %exitcond357 = icmp eq i5 %i160, -8
  %empty_647 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_161 = add i5 %i160, 1
  br i1 %exitcond357, label %187, label %.preheader713.preheader

.preheader713.preheader:                          ; preds = %.preheader714
  br label %.preheader713

.preheader713:                                    ; preds = %.preheader713.preheader, %186
  %k60 = phi i3 [ %k_61, %186 ], [ 0, %.preheader713.preheader ]
  %exitcond356 = icmp eq i3 %k60, -4
  %empty_648 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %k_61 = add i3 %k60, 1
  br i1 %exitcond356, label %.preheader714.loopexit, label %186

; <label>:186                                     ; preds = %.preheader713
  %tmp_1655 = trunc i3 %k60 to i2
  %p_shl223 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1655, i5 0)
  %p_shl223_cast = zext i7 %p_shl223 to i8
  %p_shl224 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1655, i3 0)
  %p_shl224_cast = zext i5 %p_shl224 to i8
  %tmp_859 = sub i8 %p_shl223_cast, %p_shl224_cast
  %tmp_1121_cast = sext i8 %tmp_859 to i12
  %tmp_861 = add i8 %i161_cast1, %tmp_859
  %tmp_1122_cast = sext i8 %tmp_861 to i32
  %tmp_862 = zext i32 %tmp_1122_cast to i64
  %tmp70 = add i12 -1864, %tmp_1121_cast
  %tmp_863 = add i12 %tmp70, %i161_cast
  %tmp_864_cast = zext i12 %tmp_863 to i33
  %bias_V14_sum34 = add i33 %tmp_482_cast, %tmp_864_cast
  %bias_V14_sum51_cast = sext i33 %bias_V14_sum34 to i64
  %DATA_BIAS_addr_51 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum51_cast
  %DATA_BIAS_load_51_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_51, i32 1)
  %DATA_BIAS_addr_51_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_51)
  %bias_96_V_addr_5 = getelementptr [96 x i8]* @bias_96_V, i64 0, i64 %tmp_862
  store i8 %DATA_BIAS_addr_51_re, i8* %bias_96_V_addr_5, align 1
  br label %.preheader713

; <label>:187                                     ; preds = %.preheader714
  call fastcc void @subconv_1x1_4_p([3456 x i8]* @buffer0_1_96_4x4_p_V, [9216 x i8]* @weights_96_96_1x1_V, [96 x i8]* @bias_96_V, [3456 x i8]* @buffer1_1_96_4x4_p_V)
  br label %.loopexit961

.loopexit961.loopexit:                            ; preds = %.preheader712
  br label %.loopexit961

.loopexit961:                                     ; preds = %.loopexit961.loopexit, %187
  %co158 = phi i5 [ 0, %187 ], [ %co_159, %.loopexit961.loopexit ]
  %co159_cast = zext i5 %co158 to i10
  %co159_cast1 = zext i5 %co158 to i8
  %exitcond355 = icmp eq i5 %co158, -8
  %empty_649 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_159 = add i5 %co158, 1
  br i1 %exitcond355, label %.preheader709.preheader, label %.preheader712.preheader

.preheader712.preheader:                          ; preds = %.loopexit961
  br label %.preheader712

.preheader709.preheader:                          ; preds = %.loopexit961
  br label %.preheader709

.preheader712.loopexit:                           ; preds = %.preheader711
  br label %.preheader712

.preheader712:                                    ; preds = %.preheader712.preheader, %.preheader712.loopexit
  %w101 = phi i2 [ %w_102, %.preheader712.loopexit ], [ 0, %.preheader712.preheader ]
  %exitcond354 = icmp eq i2 %w101, -1
  %empty_650 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %w_102 = add i2 %w101, 1
  br i1 %exitcond354, label %.loopexit961.loopexit, label %.preheader711.preheader

.preheader711.preheader:                          ; preds = %.preheader712
  %tmp_869_cast1 = zext i2 %w101 to i13
  %tmp_869_cast = zext i2 %w101 to i36
  br label %.preheader711

.preheader711.loopexit:                           ; preds = %.preheader710
  br label %.preheader711

.preheader711:                                    ; preds = %.preheader711.loopexit, %.preheader711.preheader
  %h102 = phi i2 [ 0, %.preheader711.preheader ], [ %h_103, %.preheader711.loopexit ]
  %exitcond353 = icmp eq i2 %h102, -1
  %empty_651 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %h_103 = add i2 %h102, 1
  br i1 %exitcond353, label %.preheader712.loopexit, label %.preheader710.preheader

.preheader710.preheader:                          ; preds = %.preheader711
  %tmp_876 = zext i2 %h102 to i64
  %tmp_876_cast = zext i2 %h102 to i11
  br label %.preheader710

.preheader710:                                    ; preds = %188, %.preheader710.preheader
  %i168 = phi i3 [ %i_169, %188 ], [ 0, %.preheader710.preheader ]
  %exitcond352 = icmp eq i3 %i168, -4
  %empty_652 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %i_169 = add i3 %i168, 1
  br i1 %exitcond352, label %.preheader711.loopexit, label %188

; <label>:188                                     ; preds = %.preheader710
  %tmp_1669 = trunc i3 %i168 to i2
  %p_shl234 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1669, i5 0)
  %p_shl234_cast = zext i7 %p_shl234 to i8
  %p_shl235 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1669, i3 0)
  %p_shl235_cast = zext i5 %p_shl235 to i8
  %tmp_880 = sub i8 %p_shl234_cast, %p_shl235_cast
  %tmp_1158_cast = sext i8 %tmp_880 to i10
  %tmp_881 = add i8 %tmp_880, %co159_cast1
  %tmp_1159_cast = sext i8 %tmp_881 to i32
  %tmp_882_cast1 = zext i32 %tmp_1159_cast to i35
  %tmp_1670 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_881, i2 0)
  %tmp_1671 = sext i10 %tmp_1670 to i34
  %p_shl614_cast = zext i34 %tmp_1671 to i35
  %tmp_1672 = sub i35 %p_shl614_cast, %tmp_882_cast1
  %tmp_2047_cast = sext i35 %tmp_1672 to i36
  %tmp_1673 = add i36 %tmp_2047_cast, %tmp_869_cast
  %tmp_1674 = trunc i36 %tmp_1673 to i11
  %tmp_1675 = trunc i36 %tmp_1673 to i9
  %p_shl613_cast = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_1675, i2 0)
  %tmp_1676 = sub i11 %p_shl613_cast, %tmp_1674
  %tmp_1677 = add i11 %tmp_1676, %tmp_876_cast
  %tmp_2051_cast = zext i11 %tmp_1677 to i64
  %weights_96_1_3x3_V_a_2 = getelementptr [864 x i8]* @weights_96_1_3x3_V, i64 0, i64 %tmp_2051_cast
  %tmp71 = add i10 -232, %tmp_1158_cast
  %tmp_883 = add i10 %co159_cast, %tmp71
  %tmp_885_cast1 = zext i10 %tmp_883 to i13
  %tmp_1678 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_883, i2 0)
  %p_shl612_cast = zext i12 %tmp_1678 to i13
  %tmp_1679 = sub i13 %p_shl612_cast, %tmp_885_cast1
  %tmp_1680 = add i13 %tmp_1679, %tmp_869_cast1
  %tmp_2054_cast = sext i13 %tmp_1680 to i64
  %tmp_1681 = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1680, i2 0)
  %p_shl273 = sext i15 %tmp_1681 to i64
  %tmp_1682 = sub i64 %p_shl273, %tmp_2054_cast
  %tmp_1683 = add i64 %tmp_1682, %tmp_876
  %shuffle_conv_3x3_V6_12 = add i64 %tmp_373, %tmp_1683
  %p3X3_1X1_WEIGHTS_addr_49 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_3x3_V6_12
  %p3X3_1X1_WEIGHTS_load_35 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_49, i32 1)
  %p3X3_1X1_WEIGHTS_addr_106 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_49)
  store i8 %p3X3_1X1_WEIGHTS_addr_106, i8* %weights_96_1_3x3_V_a_2, align 1
  br label %.preheader710

.preheader709.loopexit:                           ; preds = %.preheader708
  br label %.preheader709

.preheader709:                                    ; preds = %.preheader709.preheader, %.preheader709.loopexit
  %i164 = phi i5 [ %i_165, %.preheader709.loopexit ], [ 0, %.preheader709.preheader ]
  %i165_cast = zext i5 %i164 to i12
  %i165_cast1 = zext i5 %i164 to i8
  %exitcond351 = icmp eq i5 %i164, -8
  %empty_653 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_165 = add i5 %i164, 1
  br i1 %exitcond351, label %190, label %.preheader708.preheader

.preheader708.preheader:                          ; preds = %.preheader709
  br label %.preheader708

.preheader708:                                    ; preds = %.preheader708.preheader, %189
  %k62 = phi i3 [ %k_63, %189 ], [ 0, %.preheader708.preheader ]
  %exitcond350 = icmp eq i3 %k62, -4
  %empty_654 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %k_63 = add i3 %k62, 1
  br i1 %exitcond350, label %.preheader709.loopexit, label %189

; <label>:189                                     ; preds = %.preheader708
  %tmp_1668 = trunc i3 %k62 to i2
  %p_shl228 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1668, i5 0)
  %p_shl228_cast = zext i7 %p_shl228 to i8
  %p_shl229 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1668, i3 0)
  %p_shl229_cast = zext i5 %p_shl229 to i8
  %tmp_871 = sub i8 %p_shl228_cast, %p_shl229_cast
  %tmp_1139_cast = sext i8 %tmp_871 to i12
  %tmp_872 = add i8 %i165_cast1, %tmp_871
  %tmp_1140_cast = sext i8 %tmp_872 to i32
  %tmp_873 = zext i32 %tmp_1140_cast to i64
  %tmp72 = add i12 -1768, %tmp_1139_cast
  %tmp_874 = add i12 %tmp72, %i165_cast
  %tmp_875_cast1 = zext i12 %tmp_874 to i33
  %bias_V14_sum35 = add i33 %tmp_482_cast, %tmp_875_cast1
  %bias_V14_sum52_cast = sext i33 %bias_V14_sum35 to i64
  %DATA_BIAS_addr_52 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum52_cast
  %DATA_BIAS_load_52_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_52, i32 1)
  %DATA_BIAS_addr_52_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_52)
  %bias_96_V_addr_6 = getelementptr [96 x i8]* @bias_96_V, i64 0, i64 %tmp_873
  store i8 %DATA_BIAS_addr_52_re, i8* %bias_96_V_addr_6, align 1
  br label %.preheader708

; <label>:190                                     ; preds = %.preheader709
  call fastcc void @subconv_3x3_4_no_rel([3456 x i8]* @buffer1_1_96_4x4_p_V, [864 x i8]* @weights_96_1_3x3_V, [96 x i8]* @bias_96_V, [3456 x i8]* @buffer0_1_96_4x4_p_V)
  br label %.loopexit960

.loopexit960.loopexit:                            ; preds = %.preheader707
  br label %.loopexit960

.loopexit960:                                     ; preds = %.loopexit960.loopexit, %190
  %co160 = phi i5 [ 0, %190 ], [ %co_161, %.loopexit960.loopexit ]
  %co161_cast179_cast = zext i5 %co160 to i11
  %exitcond349 = icmp eq i5 %co160, -8
  %empty_655 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_161 = add i5 %co160, 1
  br i1 %exitcond349, label %.preheader705.preheader, label %.preheader707.preheader

.preheader705.preheader:                          ; preds = %.loopexit960
  br label %.preheader705

.preheader707.preheader:                          ; preds = %.loopexit960
  %tmp_1666 = trunc i5 %co160 to i2
  %p_shl230 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1666, i5 0)
  %p_shl230_cast = zext i7 %p_shl230 to i8
  %tmp_1667 = shl i5 %co160, 3
  %p_shl231_cast = zext i5 %tmp_1667 to i8
  %tmp_870 = sub i8 %p_shl230_cast, %p_shl231_cast
  %p_lshr_f23_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co160, i32 2, i32 4)
  %tmp_1147_cast = zext i3 %p_lshr_f23_cast to i8
  br label %.preheader707

.preheader707.loopexit:                           ; preds = %.preheader706
  br label %.preheader707

.preheader707:                                    ; preds = %.preheader707.loopexit, %.preheader707.preheader
  %ci73 = phi i5 [ 0, %.preheader707.preheader ], [ %ci_74, %.preheader707.loopexit ]
  %ci73_cast = zext i5 %ci73 to i8
  %exitcond348 = icmp eq i5 %ci73, -8
  %empty_656 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_74 = add i5 %ci73, 1
  br i1 %exitcond348, label %.loopexit960.loopexit, label %.preheader706.preheader

.preheader706.preheader:                          ; preds = %.preheader707
  %tmp_877 = add i8 %tmp_870, %ci73_cast
  %tmp_878_cast = sext i8 %tmp_877 to i15
  %tmp_879_cast = zext i5 %ci73 to i19
  br label %.preheader706

.preheader706:                                    ; preds = %191, %.preheader706.preheader
  %i170 = phi i5 [ %i_171, %191 ], [ 0, %.preheader706.preheader ]
  %exitcond347 = icmp eq i5 %i170, -16
  %empty_657 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %i_171 = add i5 %i170, 1
  br i1 %exitcond347, label %.preheader707.loopexit, label %191

; <label>:191                                     ; preds = %.preheader706
  %tmp_1688 = trunc i5 %i170 to i4
  %p_shl236 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1688, i3 0)
  %p_shl236_cast1 = zext i7 %p_shl236 to i10
  %p_shl236_cast = zext i7 %p_shl236 to i8
  %tmp_1689 = shl i5 %i170, 1
  %p_shl237_cast = zext i5 %tmp_1689 to i8
  %tmp_892 = sub i8 %p_shl236_cast, %p_shl237_cast
  %tmp_893 = add i8 %tmp_892, %tmp_1147_cast
  %tmp_1690 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_893, i7 0)
  %tmp_1691 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_893, i5 0)
  %p_shl618_cast = sext i13 %tmp_1691 to i15
  %tmp_1692 = sub i15 %tmp_1690, %p_shl618_cast
  %tmp_1693 = add i15 %tmp_878_cast, %tmp_1692
  %tmp_2070_cast = sext i15 %tmp_1693 to i64
  %weights_96_96_1x1_V_4 = getelementptr [9216 x i8]* @weights_96_96_1x1_V, i64 0, i64 %tmp_2070_cast
  %p_shl238 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1688, i5 0)
  %p_shl238_cast = zext i9 %p_shl238 to i10
  %tmp_894 = sub i10 %p_shl238_cast, %p_shl236_cast1
  %tmp_1168_cast_cast = sext i10 %tmp_894 to i11
  %tmp73 = add i11 -520, %tmp_1168_cast_cast
  %tmp_895 = add i11 %tmp73, %co161_cast179_cast
  %tmp_1694 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_895, i5 0)
  %tmp_1695 = sext i16 %tmp_1694 to i17
  %p_shl615_cast = zext i17 %tmp_1695 to i18
  %tmp_1696 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_895, i3 0)
  %tmp_1697 = sext i14 %tmp_1696 to i15
  %p_shl616_cast = zext i15 %tmp_1697 to i18
  %tmp_1698 = sub i18 %p_shl615_cast, %p_shl616_cast
  %tmp_2076_cast = sext i18 %tmp_1698 to i19
  %tmp_1699 = add i19 %tmp_879_cast, %tmp_2076_cast
  %tmp_2077_cast = sext i19 %tmp_1699 to i33
  %shuffle_conv_1x1_V8_23 = add i33 %tmp_2077_cast, %tmp_490_cast
  %shuffle_conv_1x1_V8_51 = sext i33 %shuffle_conv_1x1_V8_23 to i64
  %p3X3_1X1_WEIGHTS_addr_50 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_1x1_V8_51
  %p3X3_1X1_WEIGHTS_load_36 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_50, i32 1)
  %p3X3_1X1_WEIGHTS_addr_107 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_50)
  store i8 %p3X3_1X1_WEIGHTS_addr_107, i8* %weights_96_96_1x1_V_4, align 1
  br label %.preheader706

.preheader705.loopexit:                           ; preds = %.preheader704
  br label %.preheader705

.preheader705:                                    ; preds = %.preheader705.preheader, %.preheader705.loopexit
  %i166 = phi i5 [ %i_167, %.preheader705.loopexit ], [ 0, %.preheader705.preheader ]
  %i167_cast = zext i5 %i166 to i12
  %i167_cast1 = zext i5 %i166 to i8
  %exitcond346 = icmp eq i5 %i166, -8
  %empty_658 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_167 = add i5 %i166, 1
  br i1 %exitcond346, label %193, label %.preheader704.preheader

.preheader704.preheader:                          ; preds = %.preheader705
  br label %.preheader704

.preheader704:                                    ; preds = %.preheader704.preheader, %192
  %k64 = phi i3 [ %k_65, %192 ], [ 0, %.preheader704.preheader ]
  %exitcond345 = icmp eq i3 %k64, -4
  %empty_659 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %k_65 = add i3 %k64, 1
  br i1 %exitcond345, label %.preheader705.loopexit, label %192

; <label>:192                                     ; preds = %.preheader704
  %tmp_1687 = trunc i3 %k64 to i2
  %p_shl232 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1687, i5 0)
  %p_shl232_cast = zext i7 %p_shl232 to i8
  %p_shl233 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1687, i3 0)
  %p_shl233_cast = zext i5 %p_shl233 to i8
  %tmp_886 = sub i8 %p_shl232_cast, %p_shl233_cast
  %tmp_1149_cast = sext i8 %tmp_886 to i12
  %tmp_888 = add i8 %i167_cast1, %tmp_886
  %tmp_1150_cast = sext i8 %tmp_888 to i32
  %tmp_889 = zext i32 %tmp_1150_cast to i64
  %tmp74 = add i12 -1672, %tmp_1149_cast
  %tmp_890 = add i12 %tmp74, %i167_cast
  %tmp_891_cast = zext i12 %tmp_890 to i33
  %bias_V14_sum36 = add i33 %tmp_482_cast, %tmp_891_cast
  %bias_V14_sum53_cast = sext i33 %bias_V14_sum36 to i64
  %DATA_BIAS_addr_53 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum53_cast
  %DATA_BIAS_load_53_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_53, i32 1)
  %DATA_BIAS_addr_53_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_53)
  %bias_96_V_addr_7 = getelementptr [96 x i8]* @bias_96_V, i64 0, i64 %tmp_889
  store i8 %DATA_BIAS_addr_53_re, i8* %bias_96_V_addr_7, align 1
  br label %.preheader704

; <label>:193                                     ; preds = %.preheader705
  call fastcc void @subconv_1x1_4_p([3456 x i8]* @buffer0_1_96_4x4_p_V, [9216 x i8]* @weights_96_96_1x1_V, [96 x i8]* @bias_96_V, [3456 x i8]* @buffer1_1_96_4x4_p_V)
  br label %.loopexit959

.loopexit959.loopexit:                            ; preds = %.preheader703
  br label %.loopexit959

.loopexit959:                                     ; preds = %.loopexit959.loopexit, %193
  %co162 = phi i7 [ 0, %193 ], [ %co_163, %.loopexit959.loopexit ]
  %exitcond344 = icmp eq i7 %co162, -32
  %empty_660 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_163 = add i7 %co162, 1
  br i1 %exitcond344, label %195, label %.preheader703.preheader

.preheader703.preheader:                          ; preds = %.loopexit959
  %tmp_1684 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co162, i3 0)
  %p_shl619_cast = zext i10 %tmp_1684 to i11
  %tmp_1685 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co162, i1 false)
  %p_shl620_cast = zext i8 %tmp_1685 to i11
  %tmp_1686 = sub i11 %p_shl619_cast, %p_shl620_cast
  %tmp_2060_cast = sext i11 %tmp_1686 to i12
  br label %.preheader703

.preheader703.loopexit:                           ; preds = %.preheader702
  br label %.preheader703

.preheader703:                                    ; preds = %.preheader703.loopexit, %.preheader703.preheader
  %h104 = phi i3 [ 0, %.preheader703.preheader ], [ %h_105, %.preheader703.loopexit ]
  %exitcond343 = icmp eq i3 %h104, -4
  %empty_661 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %h_105 = add i3 %h104, 1
  br i1 %exitcond343, label %.loopexit959.loopexit, label %.preheader702.preheader

.preheader702.preheader:                          ; preds = %.preheader703
  %tmp_897_cast1 = zext i3 %h_105 to i12
  %tmp_1706 = add i12 %tmp_2060_cast, %tmp_897_cast1
  %tmp_1707 = trunc i12 %tmp_1706 to i11
  %p_shl621_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1707, i3 0)
  %tmp_1708 = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_1706, i1 false)
  %p_shl622_cast = sext i13 %tmp_1708 to i14
  %tmp_1709 = sub i14 %p_shl621_cast, %p_shl622_cast
  br label %.preheader702

.preheader702:                                    ; preds = %194, %.preheader702.preheader
  %w103 = phi i3 [ %w_104, %194 ], [ 0, %.preheader702.preheader ]
  %exitcond342 = icmp eq i3 %w103, -4
  %empty_662 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %w_104 = add i3 %w103, 1
  br i1 %exitcond342, label %.preheader703.loopexit, label %194

; <label>:194                                     ; preds = %.preheader702
  %tmp_900_cast = zext i3 %w_104 to i14
  %tmp_1718 = add i14 %tmp_1709, %tmp_900_cast
  %tmp_2098_cast = zext i14 %tmp_1718 to i64
  %buffer0_1_96_4x4_p_V_1 = getelementptr [3456 x i8]* @buffer0_1_96_4x4_p_V, i64 0, i64 %tmp_2098_cast
  %downsampleunit2_outp_2 = getelementptr [6912 x i8]* @downsampleunit2_outp, i64 0, i64 %tmp_2098_cast
  %downsampleunit2_outp_3 = load i8* %downsampleunit2_outp_2, align 1
  store i8 %downsampleunit2_outp_3, i8* %buffer0_1_96_4x4_p_V_1, align 1
  br label %.preheader702

; <label>:195                                     ; preds = %.loopexit959
  call fastcc void @shuffle_96_p([3456 x i8]* @buffer0_1_96_4x4_p_V, [6912 x i8]* @shuffleunit2_0_outpu)
  br label %.loopexit958

.loopexit958.loopexit:                            ; preds = %.preheader701
  br label %.loopexit958

.loopexit958:                                     ; preds = %.loopexit958.loopexit, %195
  %co164 = phi i7 [ 0, %195 ], [ %co_165, %.loopexit958.loopexit ]
  %co164_cast = zext i7 %co164 to i8
  %exitcond341 = icmp eq i7 %co164, -32
  %empty_663 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_165 = add i7 %co164, 1
  br i1 %exitcond341, label %.preheader699.preheader, label %.preheader701.preheader

.preheader699.preheader:                          ; preds = %.loopexit958
  br label %.preheader699

.preheader701.preheader:                          ; preds = %.loopexit958
  %tmp_1700 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co164, i3 0)
  %p_shl625_cast = zext i10 %tmp_1700 to i11
  %tmp_1701 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co164, i1 false)
  %p_shl626_cast = zext i8 %tmp_1701 to i11
  %tmp_1702 = sub i11 %p_shl625_cast, %p_shl626_cast
  %tmp_2080_cast = sext i11 %tmp_1702 to i12
  %tmp_896 = add i8 %co164_cast, 96
  %tmp_1703 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %tmp_896, i3 0)
  %p_shl623_cast = zext i11 %tmp_1703 to i12
  %tmp_1704 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_896, i1 false)
  %p_shl624_cast = zext i9 %tmp_1704 to i12
  %tmp_1705 = sub i12 %p_shl623_cast, %p_shl624_cast
  %tmp_2083_cast = sext i12 %tmp_1705 to i13
  br label %.preheader701

.preheader701.loopexit:                           ; preds = %.preheader700
  br label %.preheader701

.preheader701:                                    ; preds = %.preheader701.loopexit, %.preheader701.preheader
  %h106 = phi i3 [ 0, %.preheader701.preheader ], [ %h_107, %.preheader701.loopexit ]
  %exitcond340 = icmp eq i3 %h106, -4
  %empty_664 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %h_107 = add i3 %h106, 1
  br i1 %exitcond340, label %.loopexit958.loopexit, label %.preheader700.preheader

.preheader700.preheader:                          ; preds = %.preheader701
  %tmp_899_cast1 = zext i3 %h_107 to i12
  %tmp_899_cast = zext i3 %h_107 to i13
  %tmp_1712 = add i13 %tmp_899_cast, %tmp_2083_cast
  %tmp_1713 = trunc i13 %tmp_1712 to i11
  %p_shl629_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1713, i3 0)
  %p_shl630_cast = call i14 @_ssdm_op_BitConcatenate.i14.i13.i1(i13 %tmp_1712, i1 false)
  %tmp_1714 = sub i14 %p_shl629_cast, %p_shl630_cast
  %tmp_1715 = add i12 %tmp_899_cast1, %tmp_2080_cast
  %tmp_1716 = trunc i12 %tmp_1715 to i10
  %p_shl627_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1716, i3 0)
  %p_shl628_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_1715, i1 false)
  %tmp_1717 = sub i13 %p_shl627_cast, %p_shl628_cast
  br label %.preheader700

.preheader700:                                    ; preds = %196, %.preheader700.preheader
  %w105 = phi i3 [ %w_106, %196 ], [ 0, %.preheader700.preheader ]
  %exitcond339 = icmp eq i3 %w105, -4
  %empty_665 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %w_106 = add i3 %w105, 1
  br i1 %exitcond339, label %.preheader701.loopexit, label %196

; <label>:196                                     ; preds = %.preheader700
  %tmp_905_cast1 = zext i3 %w_106 to i13
  %tmp_905_cast = zext i3 %w_106 to i14
  %tmp_1719 = add i14 %tmp_1714, %tmp_905_cast
  %tmp_2099_cast = zext i14 %tmp_1719 to i64
  %shuffleunit2_0_outpu = getelementptr [6912 x i8]* @shuffleunit2_0_outpu, i64 0, i64 %tmp_2099_cast
  %tmp_1720 = add i13 %tmp_1717, %tmp_905_cast1
  %tmp_2100_cast = zext i13 %tmp_1720 to i64
  %buffer0_1_96_4x4_p_V_2 = getelementptr [3456 x i8]* @buffer0_1_96_4x4_p_V, i64 0, i64 %tmp_2100_cast
  %shuffleunit2_0_outpu_1 = load i8* %shuffleunit2_0_outpu, align 1
  store i8 %shuffleunit2_0_outpu_1, i8* %buffer0_1_96_4x4_p_V_2, align 1
  br label %.preheader700

.preheader699.loopexit:                           ; preds = %.preheader698
  br label %.preheader699

.preheader699:                                    ; preds = %.preheader699.preheader, %.preheader699.loopexit
  %co166 = phi i5 [ %co_167, %.preheader699.loopexit ], [ 0, %.preheader699.preheader ]
  %co166_cast = zext i5 %co166 to i13
  %exitcond338 = icmp eq i5 %co166, -8
  %empty_666 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_167 = add i5 %co166, 1
  br i1 %exitcond338, label %.preheader696.preheader, label %.preheader698.preheader

.preheader696.preheader:                          ; preds = %.preheader699
  br label %.preheader696

.preheader698.preheader:                          ; preds = %.preheader699
  %tmp_1710 = trunc i5 %co166 to i2
  %p_shl239 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1710, i5 0)
  %p_shl239_cast = zext i7 %p_shl239 to i8
  %tmp_1711 = shl i5 %co166, 3
  %p_shl240_cast = zext i5 %tmp_1711 to i8
  %tmp_898 = sub i8 %p_shl239_cast, %p_shl240_cast
  %p_lshr_f24_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co166, i32 2, i32 4)
  %tmp_1178_cast = zext i3 %p_lshr_f24_cast to i8
  br label %.preheader698

.preheader698.loopexit:                           ; preds = %.preheader697
  br label %.preheader698

.preheader698:                                    ; preds = %.preheader698.loopexit, %.preheader698.preheader
  %ci75 = phi i5 [ 0, %.preheader698.preheader ], [ %ci_76, %.preheader698.loopexit ]
  %ci75_cast = zext i5 %ci75 to i8
  %exitcond337 = icmp eq i5 %ci75, -8
  %empty_667 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_76 = add i5 %ci75, 1
  br i1 %exitcond337, label %.preheader699.loopexit, label %.preheader697.preheader

.preheader697.preheader:                          ; preds = %.preheader698
  %tmp_901 = add i8 %tmp_898, %ci75_cast
  %tmp_902_cast = sext i8 %tmp_901 to i15
  %tmp_903_cast1 = zext i5 %ci75 to i20
  br label %.preheader697

.preheader697:                                    ; preds = %197, %.preheader697.preheader
  %i174 = phi i5 [ %i_175, %197 ], [ 0, %.preheader697.preheader ]
  %exitcond336 = icmp eq i5 %i174, -16
  %empty_668 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %i_175 = add i5 %i174, 1
  br i1 %exitcond336, label %.preheader698.loopexit, label %197

; <label>:197                                     ; preds = %.preheader697
  %tmp_1722 = trunc i5 %i174 to i4
  %p_shl243 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1722, i3 0)
  %p_shl243_cast1 = zext i7 %p_shl243 to i10
  %p_shl243_cast = zext i7 %p_shl243 to i8
  %tmp_1723 = shl i5 %i174, 1
  %p_shl244_cast = zext i5 %tmp_1723 to i8
  %tmp_912 = sub i8 %p_shl243_cast, %p_shl244_cast
  %tmp_913 = add i8 %tmp_912, %tmp_1178_cast
  %tmp_1724 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_913, i7 0)
  %tmp_1725 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_913, i5 0)
  %p_shl634_cast = sext i13 %tmp_1725 to i15
  %tmp_1726 = sub i15 %tmp_1724, %p_shl634_cast
  %tmp_1727 = add i15 %tmp_902_cast, %tmp_1726
  %tmp_2110_cast = sext i15 %tmp_1727 to i64
  %weights_96_96_1x1_V_5 = getelementptr [9216 x i8]* @weights_96_96_1x1_V, i64 0, i64 %tmp_2110_cast
  %p_shl245 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1722, i5 0)
  %p_shl245_cast = zext i9 %p_shl245 to i10
  %tmp_915 = sub i10 %p_shl245_cast, %p_shl243_cast1
  %tmp_1195_cast = sext i10 %tmp_915 to i13
  %tmp75 = add i13 3960, %tmp_1195_cast
  %tmp_916 = add i13 %tmp75, %co166_cast
  %tmp_1728 = call i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13 %tmp_916, i5 0)
  %p_shl631_cast = zext i18 %tmp_1728 to i19
  %tmp_1729 = call i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13 %tmp_916, i3 0)
  %p_shl632_cast = zext i16 %tmp_1729 to i19
  %tmp_1730 = sub i19 %p_shl631_cast, %p_shl632_cast
  %tmp_2114_cast = sext i19 %tmp_1730 to i20
  %tmp_1731 = add i20 %tmp_903_cast1, %tmp_2114_cast
  %tmp_2115_cast = sext i20 %tmp_1731 to i33
  %shuffle_conv_1x1_V8_24 = add i33 %tmp_2115_cast, %tmp_490_cast
  %shuffle_conv_1x1_V8_52 = sext i33 %shuffle_conv_1x1_V8_24 to i64
  %p3X3_1X1_WEIGHTS_addr_51 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_1x1_V8_52
  %p3X3_1X1_WEIGHTS_load_37 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_51, i32 1)
  %p3X3_1X1_WEIGHTS_addr_108 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_51)
  store i8 %p3X3_1X1_WEIGHTS_addr_108, i8* %weights_96_96_1x1_V_5, align 1
  br label %.preheader697

.preheader696.loopexit:                           ; preds = %.preheader695
  br label %.preheader696

.preheader696:                                    ; preds = %.preheader696.preheader, %.preheader696.loopexit
  %i172 = phi i5 [ %i_173, %.preheader696.loopexit ], [ 0, %.preheader696.preheader ]
  %i173_cast = zext i5 %i172 to i12
  %i173_cast1 = zext i5 %i172 to i8
  %exitcond335 = icmp eq i5 %i172, -8
  %empty_669 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_173 = add i5 %i172, 1
  br i1 %exitcond335, label %199, label %.preheader695.preheader

.preheader695.preheader:                          ; preds = %.preheader696
  br label %.preheader695

.preheader695:                                    ; preds = %.preheader695.preheader, %198
  %k66 = phi i3 [ %k_67, %198 ], [ 0, %.preheader695.preheader ]
  %exitcond334 = icmp eq i3 %k66, -4
  %empty_670 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %k_67 = add i3 %k66, 1
  br i1 %exitcond334, label %.preheader696.loopexit, label %198

; <label>:198                                     ; preds = %.preheader695
  %tmp_1721 = trunc i3 %k66 to i2
  %p_shl241 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1721, i5 0)
  %p_shl241_cast = zext i7 %p_shl241 to i8
  %p_shl242 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1721, i3 0)
  %p_shl242_cast = zext i5 %p_shl242 to i8
  %tmp_907 = sub i8 %p_shl241_cast, %p_shl242_cast
  %tmp_1181_cast = sext i8 %tmp_907 to i12
  %tmp_908 = add i8 %i173_cast1, %tmp_907
  %tmp_1182_cast = sext i8 %tmp_908 to i32
  %tmp_909 = zext i32 %tmp_1182_cast to i64
  %tmp76 = add i12 -1576, %tmp_1181_cast
  %tmp_910 = add i12 %tmp76, %i173_cast
  %tmp_911_cast = zext i12 %tmp_910 to i33
  %bias_V14_sum37 = add i33 %tmp_482_cast, %tmp_911_cast
  %bias_V14_sum54_cast = sext i33 %bias_V14_sum37 to i64
  %DATA_BIAS_addr_54 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum54_cast
  %DATA_BIAS_load_54_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_54, i32 1)
  %DATA_BIAS_addr_54_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_54)
  %bias_96_V_addr_8 = getelementptr [96 x i8]* @bias_96_V, i64 0, i64 %tmp_909
  store i8 %DATA_BIAS_addr_54_re, i8* %bias_96_V_addr_8, align 1
  br label %.preheader695

; <label>:199                                     ; preds = %.preheader696
  call fastcc void @subconv_1x1_4_p([3456 x i8]* @buffer0_1_96_4x4_p_V, [9216 x i8]* @weights_96_96_1x1_V, [96 x i8]* @bias_96_V, [3456 x i8]* @buffer1_1_96_4x4_p_V)
  br label %.loopexit957

.loopexit957.loopexit:                            ; preds = %.preheader694
  br label %.loopexit957

.loopexit957:                                     ; preds = %.loopexit957.loopexit, %199
  %co168 = phi i5 [ 0, %199 ], [ %co_169, %.loopexit957.loopexit ]
  %co169_cast151_cast = zext i5 %co168 to i9
  %co169_cast = zext i5 %co168 to i8
  %exitcond333 = icmp eq i5 %co168, -8
  %empty_671 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_169 = add i5 %co168, 1
  br i1 %exitcond333, label %.preheader691.preheader, label %.preheader694.preheader

.preheader694.preheader:                          ; preds = %.loopexit957
  br label %.preheader694

.preheader691.preheader:                          ; preds = %.loopexit957
  br label %.preheader691

.preheader694.loopexit:                           ; preds = %.preheader693
  br label %.preheader694

.preheader694:                                    ; preds = %.preheader694.preheader, %.preheader694.loopexit
  %w107 = phi i2 [ %w_108, %.preheader694.loopexit ], [ 0, %.preheader694.preheader ]
  %exitcond332 = icmp eq i2 %w107, -1
  %empty_672 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %w_108 = add i2 %w107, 1
  br i1 %exitcond332, label %.loopexit957.loopexit, label %.preheader693.preheader

.preheader693.preheader:                          ; preds = %.preheader694
  %tmp_918_cast1 = zext i2 %w107 to i14
  %tmp_918_cast = zext i2 %w107 to i36
  br label %.preheader693

.preheader693.loopexit:                           ; preds = %.preheader692
  br label %.preheader693

.preheader693:                                    ; preds = %.preheader693.loopexit, %.preheader693.preheader
  %h108 = phi i2 [ 0, %.preheader693.preheader ], [ %h_109, %.preheader693.loopexit ]
  %exitcond331 = icmp eq i2 %h108, -1
  %empty_673 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %h_109 = add i2 %h108, 1
  br i1 %exitcond331, label %.preheader694.loopexit, label %.preheader692.preheader

.preheader692.preheader:                          ; preds = %.preheader693
  %tmp_925 = zext i2 %h108 to i64
  %tmp_925_cast = zext i2 %h108 to i11
  br label %.preheader692

.preheader692:                                    ; preds = %200, %.preheader692.preheader
  %i180 = phi i3 [ %i_181, %200 ], [ 0, %.preheader692.preheader ]
  %exitcond330 = icmp eq i3 %i180, -4
  %empty_674 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %i_181 = add i3 %i180, 1
  br i1 %exitcond330, label %.preheader693.loopexit, label %200

; <label>:200                                     ; preds = %.preheader692
  %tmp_1735 = trunc i3 %i180 to i2
  %p_shl252 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1735, i5 0)
  %p_shl252_cast = zext i7 %p_shl252 to i8
  %p_shl253 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1735, i3 0)
  %p_shl253_cast = zext i5 %p_shl253 to i8
  %tmp_929 = sub i8 %p_shl252_cast, %p_shl253_cast
  %tmp_1218_cast_cast = sext i8 %tmp_929 to i9
  %tmp_930 = add i8 %tmp_929, %co169_cast
  %tmp_1219_cast = sext i8 %tmp_930 to i32
  %tmp_932_cast = zext i32 %tmp_1219_cast to i35
  %tmp_1736 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_930, i2 0)
  %tmp_1737 = sext i10 %tmp_1736 to i34
  %p_shl638_cast = zext i34 %tmp_1737 to i35
  %tmp_1738 = sub i35 %p_shl638_cast, %tmp_932_cast
  %tmp_2124_cast = sext i35 %tmp_1738 to i36
  %tmp_1739 = add i36 %tmp_2124_cast, %tmp_918_cast
  %tmp_1740 = trunc i36 %tmp_1739 to i11
  %tmp_1741 = trunc i36 %tmp_1739 to i9
  %p_shl637_cast = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_1741, i2 0)
  %tmp_1742 = sub i11 %p_shl637_cast, %tmp_1740
  %tmp_1743 = add i11 %tmp_1742, %tmp_925_cast
  %tmp_2128_cast = zext i11 %tmp_1743 to i64
  %weights_96_1_3x3_V_a_3 = getelementptr [864 x i8]* @weights_96_1_3x3_V, i64 0, i64 %tmp_2128_cast
  %tmp77 = add i9 -136, %tmp_1218_cast_cast
  %tmp_933 = add i9 %co169_cast151_cast, %tmp77
  %tmp_1222_cast = sext i9 %tmp_933 to i10
  %tmp_935_cast1 = zext i10 %tmp_1222_cast to i13
  %tmp_1744 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_933, i2 0)
  %tmp_1745 = sext i11 %tmp_1744 to i12
  %p_shl636_cast = zext i12 %tmp_1745 to i13
  %tmp_1746 = sub i13 %p_shl636_cast, %tmp_935_cast1
  %tmp_2131_cast = sext i13 %tmp_1746 to i14
  %tmp_1747 = add i14 %tmp_2131_cast, %tmp_918_cast1
  %tmp_2132_cast = sext i14 %tmp_1747 to i64
  %tmp_1748 = call i16 @_ssdm_op_BitConcatenate.i16.i14.i2(i14 %tmp_1747, i2 0)
  %p_shl275 = sext i16 %tmp_1748 to i64
  %tmp_1749 = sub i64 %p_shl275, %tmp_2132_cast
  %tmp_1750 = add i64 %tmp_1749, %tmp_925
  %shuffle_conv_3x3_V6_13 = add i64 %tmp_373, %tmp_1750
  %p3X3_1X1_WEIGHTS_addr_52 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_3x3_V6_13
  %p3X3_1X1_WEIGHTS_load_38 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_52, i32 1)
  %p3X3_1X1_WEIGHTS_addr_109 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_52)
  store i8 %p3X3_1X1_WEIGHTS_addr_109, i8* %weights_96_1_3x3_V_a_3, align 1
  br label %.preheader692

.preheader691.loopexit:                           ; preds = %.preheader690
  br label %.preheader691

.preheader691:                                    ; preds = %.preheader691.preheader, %.preheader691.loopexit
  %i176 = phi i5 [ %i_177, %.preheader691.loopexit ], [ 0, %.preheader691.preheader ]
  %i177_cast = zext i5 %i176 to i12
  %i177_cast1 = zext i5 %i176 to i8
  %exitcond329 = icmp eq i5 %i176, -8
  %empty_675 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_177 = add i5 %i176, 1
  br i1 %exitcond329, label %202, label %.preheader690.preheader

.preheader690.preheader:                          ; preds = %.preheader691
  br label %.preheader690

.preheader690:                                    ; preds = %.preheader690.preheader, %201
  %k68 = phi i3 [ %k_69, %201 ], [ 0, %.preheader690.preheader ]
  %exitcond328 = icmp eq i3 %k68, -4
  %empty_676 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %k_69 = add i3 %k68, 1
  br i1 %exitcond328, label %.preheader691.loopexit, label %201

; <label>:201                                     ; preds = %.preheader690
  %tmp_1734 = trunc i3 %k68 to i2
  %p_shl246 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1734, i5 0)
  %p_shl246_cast = zext i7 %p_shl246 to i8
  %p_shl247 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1734, i3 0)
  %p_shl247_cast = zext i5 %p_shl247 to i8
  %tmp_920 = sub i8 %p_shl246_cast, %p_shl247_cast
  %tmp_1199_cast = sext i8 %tmp_920 to i12
  %tmp_921 = add i8 %i177_cast1, %tmp_920
  %tmp_1200_cast = sext i8 %tmp_921 to i32
  %tmp_922 = zext i32 %tmp_1200_cast to i64
  %tmp78 = add i12 -1480, %tmp_1199_cast
  %tmp_923 = add i12 %tmp78, %i177_cast
  %tmp_924_cast = zext i12 %tmp_923 to i33
  %bias_V14_sum38 = add i33 %tmp_482_cast, %tmp_924_cast
  %bias_V14_sum55_cast = sext i33 %bias_V14_sum38 to i64
  %DATA_BIAS_addr_55 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum55_cast
  %DATA_BIAS_load_55_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_55, i32 1)
  %DATA_BIAS_addr_55_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_55)
  %bias_96_V_addr_9 = getelementptr [96 x i8]* @bias_96_V, i64 0, i64 %tmp_922
  store i8 %DATA_BIAS_addr_55_re, i8* %bias_96_V_addr_9, align 1
  br label %.preheader690

; <label>:202                                     ; preds = %.preheader691
  call fastcc void @subconv_3x3_4_no_rel([3456 x i8]* @buffer1_1_96_4x4_p_V, [864 x i8]* @weights_96_1_3x3_V, [96 x i8]* @bias_96_V, [3456 x i8]* @buffer0_1_96_4x4_p_V)
  br label %.loopexit956

.loopexit956.loopexit:                            ; preds = %.preheader689
  br label %.loopexit956

.loopexit956:                                     ; preds = %.loopexit956.loopexit, %202
  %co170 = phi i5 [ 0, %202 ], [ %co_171, %.loopexit956.loopexit ]
  %co171_cast = zext i5 %co170 to i13
  %exitcond327 = icmp eq i5 %co170, -8
  %empty_677 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_171 = add i5 %co170, 1
  br i1 %exitcond327, label %.preheader687.preheader, label %.preheader689.preheader

.preheader687.preheader:                          ; preds = %.loopexit956
  br label %.preheader687

.preheader689.preheader:                          ; preds = %.loopexit956
  %tmp_1732 = trunc i5 %co170 to i2
  %p_shl248 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1732, i5 0)
  %p_shl248_cast = zext i7 %p_shl248 to i8
  %tmp_1733 = shl i5 %co170, 3
  %p_shl249_cast = zext i5 %tmp_1733 to i8
  %tmp_919 = sub i8 %p_shl248_cast, %p_shl249_cast
  %p_lshr_f25_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co170, i32 2, i32 4)
  %tmp_1207_cast = zext i3 %p_lshr_f25_cast to i8
  br label %.preheader689

.preheader689.loopexit:                           ; preds = %.preheader688
  br label %.preheader689

.preheader689:                                    ; preds = %.preheader689.loopexit, %.preheader689.preheader
  %ci77 = phi i5 [ 0, %.preheader689.preheader ], [ %ci_78, %.preheader689.loopexit ]
  %ci77_cast = zext i5 %ci77 to i8
  %exitcond326 = icmp eq i5 %ci77, -8
  %empty_678 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_78 = add i5 %ci77, 1
  br i1 %exitcond326, label %.loopexit956.loopexit, label %.preheader688.preheader

.preheader688.preheader:                          ; preds = %.preheader689
  %tmp_926 = add i8 %tmp_919, %ci77_cast
  %tmp_927_cast = sext i8 %tmp_926 to i15
  %tmp_928_cast = zext i5 %ci77 to i20
  br label %.preheader688

.preheader688:                                    ; preds = %203, %.preheader688.preheader
  %i182 = phi i5 [ %i_183, %203 ], [ 0, %.preheader688.preheader ]
  %exitcond325 = icmp eq i5 %i182, -16
  %empty_679 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %i_183 = add i5 %i182, 1
  br i1 %exitcond325, label %.preheader689.loopexit, label %203

; <label>:203                                     ; preds = %.preheader688
  %tmp_1755 = trunc i5 %i182 to i4
  %p_shl254 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1755, i3 0)
  %p_shl254_cast1 = zext i7 %p_shl254 to i10
  %p_shl254_cast = zext i7 %p_shl254 to i8
  %tmp_1756 = shl i5 %i182, 1
  %p_shl255_cast = zext i5 %tmp_1756 to i8
  %tmp_941 = sub i8 %p_shl254_cast, %p_shl255_cast
  %tmp_942 = add i8 %tmp_941, %tmp_1207_cast
  %tmp_1757 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_942, i7 0)
  %tmp_1758 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_942, i5 0)
  %p_shl642_cast = sext i13 %tmp_1758 to i15
  %tmp_1759 = sub i15 %tmp_1757, %p_shl642_cast
  %tmp_1760 = add i15 %tmp_927_cast, %tmp_1759
  %tmp_2148_cast = sext i15 %tmp_1760 to i64
  %weights_96_96_1x1_V_6 = getelementptr [9216 x i8]* @weights_96_96_1x1_V, i64 0, i64 %tmp_2148_cast
  %p_shl256 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1755, i5 0)
  %p_shl256_cast = zext i9 %p_shl256 to i10
  %tmp_943 = sub i10 %p_shl256_cast, %p_shl254_cast1
  %tmp_1228_cast = sext i10 %tmp_943 to i13
  %tmp79 = add i13 -3848, %tmp_1228_cast
  %tmp_944 = add i13 %tmp79, %co171_cast
  %tmp_1761 = call i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13 %tmp_944, i5 0)
  %p_shl639_cast = zext i18 %tmp_1761 to i19
  %tmp_1762 = call i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13 %tmp_944, i3 0)
  %p_shl640_cast = zext i16 %tmp_1762 to i19
  %tmp_1763 = sub i19 %p_shl639_cast, %p_shl640_cast
  %tmp_2152_cast = sext i19 %tmp_1763 to i20
  %tmp_1764 = add i20 %tmp_928_cast, %tmp_2152_cast
  %tmp_2153_cast = sext i20 %tmp_1764 to i33
  %shuffle_conv_1x1_V8_25 = add i33 %tmp_2153_cast, %tmp_490_cast
  %shuffle_conv_1x1_V8_53 = sext i33 %shuffle_conv_1x1_V8_25 to i64
  %p3X3_1X1_WEIGHTS_addr_53 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_1x1_V8_53
  %p3X3_1X1_WEIGHTS_load_39 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_53, i32 1)
  %p3X3_1X1_WEIGHTS_addr_110 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_53)
  store i8 %p3X3_1X1_WEIGHTS_addr_110, i8* %weights_96_96_1x1_V_6, align 1
  br label %.preheader688

.preheader687.loopexit:                           ; preds = %.preheader686
  br label %.preheader687

.preheader687:                                    ; preds = %.preheader687.preheader, %.preheader687.loopexit
  %i178 = phi i5 [ %i_179, %.preheader687.loopexit ], [ 0, %.preheader687.preheader ]
  %i179_cast = zext i5 %i178 to i12
  %i179_cast1 = zext i5 %i178 to i8
  %exitcond324 = icmp eq i5 %i178, -8
  %empty_680 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_179 = add i5 %i178, 1
  br i1 %exitcond324, label %205, label %.preheader686.preheader

.preheader686.preheader:                          ; preds = %.preheader687
  br label %.preheader686

.preheader686:                                    ; preds = %.preheader686.preheader, %204
  %k70 = phi i3 [ %k_71, %204 ], [ 0, %.preheader686.preheader ]
  %exitcond323 = icmp eq i3 %k70, -4
  %empty_681 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %k_71 = add i3 %k70, 1
  br i1 %exitcond323, label %.preheader687.loopexit, label %204

; <label>:204                                     ; preds = %.preheader686
  %tmp_1754 = trunc i3 %k70 to i2
  %p_shl250 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1754, i5 0)
  %p_shl250_cast = zext i7 %p_shl250 to i8
  %p_shl251 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1754, i3 0)
  %p_shl251_cast = zext i5 %p_shl251 to i8
  %tmp_936 = sub i8 %p_shl250_cast, %p_shl251_cast
  %tmp_1209_cast = sext i8 %tmp_936 to i12
  %tmp_937 = add i8 %i179_cast1, %tmp_936
  %tmp_1210_cast = sext i8 %tmp_937 to i32
  %tmp_938 = zext i32 %tmp_1210_cast to i64
  %tmp80 = add i12 -1384, %tmp_1209_cast
  %tmp_939 = add i12 %tmp80, %i179_cast
  %tmp_940_cast = zext i12 %tmp_939 to i33
  %bias_V14_sum39 = add i33 %tmp_482_cast, %tmp_940_cast
  %bias_V14_sum56_cast = sext i33 %bias_V14_sum39 to i64
  %DATA_BIAS_addr_56 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum56_cast
  %DATA_BIAS_load_56_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_56, i32 1)
  %DATA_BIAS_addr_56_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_56)
  %bias_96_V_addr_10 = getelementptr [96 x i8]* @bias_96_V, i64 0, i64 %tmp_938
  store i8 %DATA_BIAS_addr_56_re, i8* %bias_96_V_addr_10, align 1
  br label %.preheader686

; <label>:205                                     ; preds = %.preheader687
  call fastcc void @subconv_1x1_4_p([3456 x i8]* @buffer0_1_96_4x4_p_V, [9216 x i8]* @weights_96_96_1x1_V, [96 x i8]* @bias_96_V, [3456 x i8]* @buffer1_1_96_4x4_p_V)
  br label %.loopexit955

.loopexit955.loopexit:                            ; preds = %.preheader685
  br label %.loopexit955

.loopexit955:                                     ; preds = %.loopexit955.loopexit, %205
  %co172 = phi i7 [ 0, %205 ], [ %co_173, %.loopexit955.loopexit ]
  %exitcond322 = icmp eq i7 %co172, -32
  %empty_682 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_173 = add i7 %co172, 1
  br i1 %exitcond322, label %207, label %.preheader685.preheader

.preheader685.preheader:                          ; preds = %.loopexit955
  %tmp_1751 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co172, i3 0)
  %p_shl643_cast = zext i10 %tmp_1751 to i11
  %tmp_1752 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co172, i1 false)
  %p_shl644_cast = zext i8 %tmp_1752 to i11
  %tmp_1753 = sub i11 %p_shl643_cast, %p_shl644_cast
  %tmp_2138_cast = sext i11 %tmp_1753 to i12
  br label %.preheader685

.preheader685.loopexit:                           ; preds = %.preheader684
  br label %.preheader685

.preheader685:                                    ; preds = %.preheader685.loopexit, %.preheader685.preheader
  %h110 = phi i3 [ 0, %.preheader685.preheader ], [ %h_111, %.preheader685.loopexit ]
  %exitcond321 = icmp eq i3 %h110, -4
  %empty_683 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %h_111 = add i3 %h110, 1
  br i1 %exitcond321, label %.loopexit955.loopexit, label %.preheader684.preheader

.preheader684.preheader:                          ; preds = %.preheader685
  %tmp_946_cast = zext i3 %h_111 to i12
  %tmp_1771 = add i12 %tmp_2138_cast, %tmp_946_cast
  %tmp_1772 = trunc i12 %tmp_1771 to i11
  %p_shl645_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1772, i3 0)
  %tmp_1773 = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_1771, i1 false)
  %p_shl646_cast = sext i13 %tmp_1773 to i14
  %tmp_1774 = sub i14 %p_shl645_cast, %p_shl646_cast
  br label %.preheader684

.preheader684:                                    ; preds = %206, %.preheader684.preheader
  %w109 = phi i3 [ %w_110, %206 ], [ 0, %.preheader684.preheader ]
  %exitcond320 = icmp eq i3 %w109, -4
  %empty_684 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %w_110 = add i3 %w109, 1
  br i1 %exitcond320, label %.preheader685.loopexit, label %206

; <label>:206                                     ; preds = %.preheader684
  %tmp_949_cast = zext i3 %w_110 to i14
  %tmp_1783 = add i14 %tmp_1774, %tmp_949_cast
  %tmp_2174_cast = zext i14 %tmp_1783 to i64
  %shuffleunit2_0_outpu_2 = getelementptr [6912 x i8]* @shuffleunit2_0_outpu, i64 0, i64 %tmp_2174_cast
  %buffer0_1_96_4x4_p_V_3 = getelementptr [3456 x i8]* @buffer0_1_96_4x4_p_V, i64 0, i64 %tmp_2174_cast
  %shuffleunit2_0_outpu_3 = load i8* %shuffleunit2_0_outpu_2, align 1
  store i8 %shuffleunit2_0_outpu_3, i8* %buffer0_1_96_4x4_p_V_3, align 1
  br label %.preheader684

; <label>:207                                     ; preds = %.loopexit955
  call fastcc void @shuffle_96_p([3456 x i8]* @buffer0_1_96_4x4_p_V, [6912 x i8]* @shuffleunit2_1_outpu)
  br label %.loopexit954

.loopexit954.loopexit:                            ; preds = %.preheader683
  br label %.loopexit954

.loopexit954:                                     ; preds = %.loopexit954.loopexit, %207
  %co174 = phi i7 [ 0, %207 ], [ %co_175, %.loopexit954.loopexit ]
  %co174_cast = zext i7 %co174 to i8
  %exitcond319 = icmp eq i7 %co174, -32
  %empty_685 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_175 = add i7 %co174, 1
  br i1 %exitcond319, label %.preheader681.preheader, label %.preheader683.preheader

.preheader681.preheader:                          ; preds = %.loopexit954
  br label %.preheader681

.preheader683.preheader:                          ; preds = %.loopexit954
  %tmp_1765 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co174, i3 0)
  %p_shl649_cast = zext i10 %tmp_1765 to i11
  %tmp_1766 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co174, i1 false)
  %p_shl650_cast = zext i8 %tmp_1766 to i11
  %tmp_1767 = sub i11 %p_shl649_cast, %p_shl650_cast
  %tmp_2156_cast = sext i11 %tmp_1767 to i12
  %tmp_945 = add i8 %co174_cast, 96
  %tmp_1768 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %tmp_945, i3 0)
  %p_shl647_cast = zext i11 %tmp_1768 to i12
  %tmp_1769 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_945, i1 false)
  %p_shl648_cast = zext i9 %tmp_1769 to i12
  %tmp_1770 = sub i12 %p_shl647_cast, %p_shl648_cast
  %tmp_2159_cast = sext i12 %tmp_1770 to i13
  br label %.preheader683

.preheader683.loopexit:                           ; preds = %.preheader682
  br label %.preheader683

.preheader683:                                    ; preds = %.preheader683.loopexit, %.preheader683.preheader
  %h112 = phi i3 [ 0, %.preheader683.preheader ], [ %h_113, %.preheader683.loopexit ]
  %exitcond318 = icmp eq i3 %h112, -4
  %empty_686 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %h_113 = add i3 %h112, 1
  br i1 %exitcond318, label %.loopexit954.loopexit, label %.preheader682.preheader

.preheader682.preheader:                          ; preds = %.preheader683
  %tmp_948_cast1 = zext i3 %h_113 to i12
  %tmp_948_cast2 = zext i3 %h_113 to i13
  %tmp_1777 = add i13 %tmp_948_cast2, %tmp_2159_cast
  %tmp_1778 = trunc i13 %tmp_1777 to i11
  %p_shl653_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1778, i3 0)
  %p_shl654_cast = call i14 @_ssdm_op_BitConcatenate.i14.i13.i1(i13 %tmp_1777, i1 false)
  %tmp_1779 = sub i14 %p_shl653_cast, %p_shl654_cast
  %tmp_1780 = add i12 %tmp_948_cast1, %tmp_2156_cast
  %tmp_1781 = trunc i12 %tmp_1780 to i10
  %p_shl651_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1781, i3 0)
  %p_shl652_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_1780, i1 false)
  %tmp_1782 = sub i13 %p_shl651_cast, %p_shl652_cast
  br label %.preheader682

.preheader682:                                    ; preds = %208, %.preheader682.preheader
  %w111 = phi i3 [ %w_112, %208 ], [ 0, %.preheader682.preheader ]
  %exitcond317 = icmp eq i3 %w111, -4
  %empty_687 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %w_112 = add i3 %w111, 1
  br i1 %exitcond317, label %.preheader683.loopexit, label %208

; <label>:208                                     ; preds = %.preheader682
  %tmp_954_cast1 = zext i3 %w_112 to i13
  %tmp_954_cast2 = zext i3 %w_112 to i14
  %tmp_1784 = add i14 %tmp_1779, %tmp_954_cast2
  %tmp_2175_cast = zext i14 %tmp_1784 to i64
  %shuffleunit2_1_outpu = getelementptr [6912 x i8]* @shuffleunit2_1_outpu, i64 0, i64 %tmp_2175_cast
  %tmp_1785 = add i13 %tmp_1782, %tmp_954_cast1
  %tmp_2176_cast = zext i13 %tmp_1785 to i64
  %buffer0_1_96_4x4_p_V_4 = getelementptr [3456 x i8]* @buffer0_1_96_4x4_p_V, i64 0, i64 %tmp_2176_cast
  %shuffleunit2_1_outpu_1 = load i8* %shuffleunit2_1_outpu, align 1
  store i8 %shuffleunit2_1_outpu_1, i8* %buffer0_1_96_4x4_p_V_4, align 1
  br label %.preheader682

.preheader681.loopexit:                           ; preds = %.preheader680
  br label %.preheader681

.preheader681:                                    ; preds = %.preheader681.preheader, %.preheader681.loopexit
  %co176 = phi i5 [ %co_177, %.preheader681.loopexit ], [ 0, %.preheader681.preheader ]
  %co176_cast = zext i5 %co176 to i13
  %exitcond316 = icmp eq i5 %co176, -8
  %empty_688 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_177 = add i5 %co176, 1
  br i1 %exitcond316, label %.preheader678.preheader, label %.preheader680.preheader

.preheader678.preheader:                          ; preds = %.preheader681
  br label %.preheader678

.preheader680.preheader:                          ; preds = %.preheader681
  %tmp_1775 = trunc i5 %co176 to i2
  %p_shl257 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1775, i5 0)
  %p_shl257_cast = zext i7 %p_shl257 to i8
  %tmp_1776 = shl i5 %co176, 3
  %p_shl258_cast = zext i5 %tmp_1776 to i8
  %tmp_947 = sub i8 %p_shl257_cast, %p_shl258_cast
  %p_lshr_f26_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co176, i32 2, i32 4)
  %tmp_1238_cast = zext i3 %p_lshr_f26_cast to i8
  br label %.preheader680

.preheader680.loopexit:                           ; preds = %.preheader679
  br label %.preheader680

.preheader680:                                    ; preds = %.preheader680.loopexit, %.preheader680.preheader
  %ci79 = phi i5 [ 0, %.preheader680.preheader ], [ %ci_80, %.preheader680.loopexit ]
  %ci79_cast = zext i5 %ci79 to i8
  %exitcond315 = icmp eq i5 %ci79, -8
  %empty_689 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_80 = add i5 %ci79, 1
  br i1 %exitcond315, label %.preheader681.loopexit, label %.preheader679.preheader

.preheader679.preheader:                          ; preds = %.preheader680
  %tmp_950 = add i8 %tmp_947, %ci79_cast
  %tmp_952_cast = sext i8 %tmp_950 to i15
  %tmp_953_cast1 = zext i5 %ci79 to i20
  br label %.preheader679

.preheader679:                                    ; preds = %209, %.preheader679.preheader
  %i186 = phi i5 [ %i_187, %209 ], [ 0, %.preheader679.preheader ]
  %exitcond314 = icmp eq i5 %i186, -16
  %empty_690 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %i_187 = add i5 %i186, 1
  br i1 %exitcond314, label %.preheader680.loopexit, label %209

; <label>:209                                     ; preds = %.preheader679
  %tmp_1787 = trunc i5 %i186 to i4
  %p_shl261 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1787, i3 0)
  %p_shl261_cast1 = zext i7 %p_shl261 to i10
  %p_shl261_cast = zext i7 %p_shl261 to i8
  %tmp_1788 = shl i5 %i186, 1
  %p_shl262_cast = zext i5 %tmp_1788 to i8
  %tmp_961 = sub i8 %p_shl261_cast, %p_shl262_cast
  %tmp_964 = add i8 %tmp_961, %tmp_1238_cast
  %tmp_1789 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_964, i7 0)
  %tmp_1790 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_964, i5 0)
  %p_shl658_cast = sext i13 %tmp_1790 to i15
  %tmp_1791 = sub i15 %tmp_1789, %p_shl658_cast
  %tmp_1792 = add i15 %tmp_952_cast, %tmp_1791
  %tmp_2186_cast = sext i15 %tmp_1792 to i64
  %weights_96_96_1x1_V_7 = getelementptr [9216 x i8]* @weights_96_96_1x1_V, i64 0, i64 %tmp_2186_cast
  %p_shl263 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1787, i5 0)
  %p_shl263_cast = zext i9 %p_shl263 to i10
  %tmp_966 = sub i10 %p_shl263_cast, %p_shl261_cast1
  %tmp_1255_cast = sext i10 %tmp_966 to i13
  %tmp81 = add i13 -3464, %tmp_1255_cast
  %tmp_967 = add i13 %tmp81, %co176_cast
  %tmp_1793 = call i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13 %tmp_967, i5 0)
  %p_shl655_cast = zext i18 %tmp_1793 to i19
  %tmp_1794 = call i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13 %tmp_967, i3 0)
  %p_shl656_cast = zext i16 %tmp_1794 to i19
  %tmp_1795 = sub i19 %p_shl655_cast, %p_shl656_cast
  %tmp_2190_cast = sext i19 %tmp_1795 to i20
  %tmp_1796 = add i20 %tmp_953_cast1, %tmp_2190_cast
  %tmp_2191_cast = sext i20 %tmp_1796 to i33
  %shuffle_conv_1x1_V8_26 = add i33 %tmp_2191_cast, %tmp_490_cast
  %shuffle_conv_1x1_V8_54 = sext i33 %shuffle_conv_1x1_V8_26 to i64
  %p3X3_1X1_WEIGHTS_addr_54 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_1x1_V8_54
  %p3X3_1X1_WEIGHTS_load_40 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_54, i32 1)
  %p3X3_1X1_WEIGHTS_addr_111 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_54)
  store i8 %p3X3_1X1_WEIGHTS_addr_111, i8* %weights_96_96_1x1_V_7, align 1
  br label %.preheader679

.preheader678.loopexit:                           ; preds = %.preheader677
  br label %.preheader678

.preheader678:                                    ; preds = %.preheader678.preheader, %.preheader678.loopexit
  %i184 = phi i5 [ %i_185, %.preheader678.loopexit ], [ 0, %.preheader678.preheader ]
  %i185_cast = zext i5 %i184 to i12
  %i185_cast1 = zext i5 %i184 to i8
  %exitcond313 = icmp eq i5 %i184, -8
  %empty_691 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_185 = add i5 %i184, 1
  br i1 %exitcond313, label %211, label %.preheader677.preheader

.preheader677.preheader:                          ; preds = %.preheader678
  br label %.preheader677

.preheader677:                                    ; preds = %.preheader677.preheader, %210
  %k72 = phi i3 [ %k_73, %210 ], [ 0, %.preheader677.preheader ]
  %exitcond312 = icmp eq i3 %k72, -4
  %empty_692 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %k_73 = add i3 %k72, 1
  br i1 %exitcond312, label %.preheader678.loopexit, label %210

; <label>:210                                     ; preds = %.preheader677
  %tmp_1786 = trunc i3 %k72 to i2
  %p_shl259 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1786, i5 0)
  %p_shl259_cast = zext i7 %p_shl259 to i8
  %p_shl260 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1786, i3 0)
  %p_shl260_cast = zext i5 %p_shl260 to i8
  %tmp_955 = sub i8 %p_shl259_cast, %p_shl260_cast
  %tmp_1241_cast = sext i8 %tmp_955 to i12
  %tmp_956 = add i8 %i185_cast1, %tmp_955
  %tmp_1242_cast = sext i8 %tmp_956 to i32
  %tmp_957 = zext i32 %tmp_1242_cast to i64
  %tmp82 = add i12 -1288, %tmp_1241_cast
  %tmp_958 = add i12 %tmp82, %i185_cast
  %tmp_960_cast = zext i12 %tmp_958 to i33
  %bias_V14_sum40 = add i33 %tmp_482_cast, %tmp_960_cast
  %bias_V14_sum57_cast = sext i33 %bias_V14_sum40 to i64
  %DATA_BIAS_addr_57 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum57_cast
  %DATA_BIAS_load_57_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_57, i32 1)
  %DATA_BIAS_addr_57_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_57)
  %bias_96_V_addr_11 = getelementptr [96 x i8]* @bias_96_V, i64 0, i64 %tmp_957
  store i8 %DATA_BIAS_addr_57_re, i8* %bias_96_V_addr_11, align 1
  br label %.preheader677

; <label>:211                                     ; preds = %.preheader678
  call fastcc void @subconv_1x1_4_p([3456 x i8]* @buffer0_1_96_4x4_p_V, [9216 x i8]* @weights_96_96_1x1_V, [96 x i8]* @bias_96_V, [3456 x i8]* @buffer1_1_96_4x4_p_V)
  br label %.loopexit953

.loopexit953.loopexit:                            ; preds = %.preheader676
  br label %.loopexit953

.loopexit953:                                     ; preds = %.loopexit953.loopexit, %211
  %co178 = phi i5 [ 0, %211 ], [ %co_179, %.loopexit953.loopexit ]
  %co179_cast = zext i5 %co178 to i11
  %co179_cast1 = zext i5 %co178 to i8
  %exitcond311 = icmp eq i5 %co178, -8
  %empty_693 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_179 = add i5 %co178, 1
  br i1 %exitcond311, label %.preheader673.preheader, label %.preheader676.preheader

.preheader676.preheader:                          ; preds = %.loopexit953
  br label %.preheader676

.preheader673.preheader:                          ; preds = %.loopexit953
  br label %.preheader673

.preheader676.loopexit:                           ; preds = %.preheader675
  br label %.preheader676

.preheader676:                                    ; preds = %.preheader676.preheader, %.preheader676.loopexit
  %w113 = phi i2 [ %w_114, %.preheader676.loopexit ], [ 0, %.preheader676.preheader ]
  %exitcond310 = icmp eq i2 %w113, -1
  %empty_694 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %w_114 = add i2 %w113, 1
  br i1 %exitcond310, label %.loopexit953.loopexit, label %.preheader675.preheader

.preheader675.preheader:                          ; preds = %.preheader676
  %tmp_968_cast1 = zext i2 %w113 to i15
  %tmp_968_cast = zext i2 %w113 to i36
  br label %.preheader675

.preheader675.loopexit:                           ; preds = %.preheader674
  br label %.preheader675

.preheader675:                                    ; preds = %.preheader675.loopexit, %.preheader675.preheader
  %h114 = phi i2 [ 0, %.preheader675.preheader ], [ %h_115, %.preheader675.loopexit ]
  %exitcond309 = icmp eq i2 %h114, -1
  %empty_695 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %h_115 = add i2 %h114, 1
  br i1 %exitcond309, label %.preheader676.loopexit, label %.preheader674.preheader

.preheader674.preheader:                          ; preds = %.preheader675
  %tmp_975 = zext i2 %h114 to i64
  %tmp_975_cast = zext i2 %h114 to i11
  br label %.preheader674

.preheader674:                                    ; preds = %212, %.preheader674.preheader
  %i192 = phi i3 [ %i_193, %212 ], [ 0, %.preheader674.preheader ]
  %exitcond308 = icmp eq i3 %i192, -4
  %empty_696 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %i_193 = add i3 %i192, 1
  br i1 %exitcond308, label %.preheader675.loopexit, label %212

; <label>:212                                     ; preds = %.preheader674
  %tmp_1800 = trunc i3 %i192 to i2
  %p_shl270 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1800, i5 0)
  %p_shl270_cast = zext i7 %p_shl270 to i8
  %p_shl271 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1800, i3 0)
  %p_shl271_cast = zext i5 %p_shl271 to i8
  %tmp_979 = sub i8 %p_shl270_cast, %p_shl271_cast
  %tmp_1278_cast = sext i8 %tmp_979 to i11
  %tmp_980 = add i8 %tmp_979, %co179_cast1
  %tmp_1279_cast = sext i8 %tmp_980 to i32
  %tmp_982_cast = zext i32 %tmp_1279_cast to i35
  %tmp_1801 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_980, i2 0)
  %tmp_1802 = sext i10 %tmp_1801 to i34
  %p_shl662_cast = zext i34 %tmp_1802 to i35
  %tmp_1803 = sub i35 %p_shl662_cast, %tmp_982_cast
  %tmp_2200_cast = sext i35 %tmp_1803 to i36
  %tmp_1804 = add i36 %tmp_2200_cast, %tmp_968_cast
  %tmp_1805 = trunc i36 %tmp_1804 to i11
  %tmp_1806 = trunc i36 %tmp_1804 to i9
  %p_shl661_cast = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_1806, i2 0)
  %tmp_1807 = sub i11 %p_shl661_cast, %tmp_1805
  %tmp_1808 = add i11 %tmp_1807, %tmp_975_cast
  %tmp_2204_cast = zext i11 %tmp_1808 to i64
  %weights_96_1_3x3_V_a_4 = getelementptr [864 x i8]* @weights_96_1_3x3_V, i64 0, i64 %tmp_2204_cast
  %tmp83 = add i11 984, %tmp_1278_cast
  %tmp_983 = add i11 %co179_cast, %tmp83
  %tmp_985_cast = zext i11 %tmp_983 to i14
  %tmp_1809 = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_983, i2 0)
  %p_shl660_cast = zext i13 %tmp_1809 to i14
  %tmp_1810 = sub i14 %p_shl660_cast, %tmp_985_cast
  %tmp_2206_cast = sext i14 %tmp_1810 to i15
  %tmp_1811 = add i15 %tmp_2206_cast, %tmp_968_cast1
  %tmp_2207_cast = sext i15 %tmp_1811 to i64
  %tmp_1812 = call i17 @_ssdm_op_BitConcatenate.i17.i15.i2(i15 %tmp_1811, i2 0)
  %p_shl276 = sext i17 %tmp_1812 to i64
  %tmp_1813 = sub i64 %p_shl276, %tmp_2207_cast
  %tmp_1814 = add i64 %tmp_1813, %tmp_975
  %shuffle_conv_3x3_V6_14 = add i64 %tmp_373, %tmp_1814
  %p3X3_1X1_WEIGHTS_addr_55 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_3x3_V6_14
  %p3X3_1X1_WEIGHTS_load_41 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_55, i32 1)
  %p3X3_1X1_WEIGHTS_addr_112 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_55)
  store i8 %p3X3_1X1_WEIGHTS_addr_112, i8* %weights_96_1_3x3_V_a_4, align 1
  br label %.preheader674

.preheader673.loopexit:                           ; preds = %.preheader672
  br label %.preheader673

.preheader673:                                    ; preds = %.preheader673.preheader, %.preheader673.loopexit
  %i188 = phi i5 [ %i_189, %.preheader673.loopexit ], [ 0, %.preheader673.preheader ]
  %i189_cast = zext i5 %i188 to i12
  %i189_cast1 = zext i5 %i188 to i8
  %exitcond307 = icmp eq i5 %i188, -8
  %empty_697 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_189 = add i5 %i188, 1
  br i1 %exitcond307, label %214, label %.preheader672.preheader

.preheader672.preheader:                          ; preds = %.preheader673
  br label %.preheader672

.preheader672:                                    ; preds = %.preheader672.preheader, %213
  %k74 = phi i3 [ %k_75, %213 ], [ 0, %.preheader672.preheader ]
  %exitcond306 = icmp eq i3 %k74, -4
  %empty_698 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %k_75 = add i3 %k74, 1
  br i1 %exitcond306, label %.preheader673.loopexit, label %213

; <label>:213                                     ; preds = %.preheader672
  %tmp_1799 = trunc i3 %k74 to i2
  %p_shl264 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1799, i5 0)
  %p_shl264_cast = zext i7 %p_shl264 to i8
  %p_shl265 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1799, i3 0)
  %p_shl265_cast = zext i5 %p_shl265 to i8
  %tmp_970 = sub i8 %p_shl264_cast, %p_shl265_cast
  %tmp_1259_cast = sext i8 %tmp_970 to i12
  %tmp_971 = add i8 %i189_cast1, %tmp_970
  %tmp_1260_cast = sext i8 %tmp_971 to i32
  %tmp_972 = zext i32 %tmp_1260_cast to i64
  %tmp84 = add i12 -1192, %tmp_1259_cast
  %tmp_973 = add i12 %tmp84, %i189_cast
  %tmp_974_cast = zext i12 %tmp_973 to i33
  %bias_V14_sum41 = add i33 %tmp_482_cast, %tmp_974_cast
  %bias_V14_sum58_cast = sext i33 %bias_V14_sum41 to i64
  %DATA_BIAS_addr_58 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum58_cast
  %DATA_BIAS_load_58_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_58, i32 1)
  %DATA_BIAS_addr_58_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_58)
  %bias_96_V_addr_12 = getelementptr [96 x i8]* @bias_96_V, i64 0, i64 %tmp_972
  store i8 %DATA_BIAS_addr_58_re, i8* %bias_96_V_addr_12, align 1
  br label %.preheader672

; <label>:214                                     ; preds = %.preheader673
  call fastcc void @subconv_3x3_4_no_rel([3456 x i8]* @buffer1_1_96_4x4_p_V, [864 x i8]* @weights_96_1_3x3_V, [96 x i8]* @bias_96_V, [3456 x i8]* @buffer0_1_96_4x4_p_V)
  br label %.loopexit952

.loopexit952.loopexit:                            ; preds = %.preheader671
  br label %.loopexit952

.loopexit952:                                     ; preds = %.loopexit952.loopexit, %214
  %co180 = phi i5 [ 0, %214 ], [ %co_181, %.loopexit952.loopexit ]
  %co181_cast = zext i5 %co180 to i13
  %exitcond305 = icmp eq i5 %co180, -8
  %empty_699 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_181 = add i5 %co180, 1
  br i1 %exitcond305, label %.preheader669.preheader, label %.preheader671.preheader

.preheader669.preheader:                          ; preds = %.loopexit952
  br label %.preheader669

.preheader671.preheader:                          ; preds = %.loopexit952
  %tmp_1797 = trunc i5 %co180 to i2
  %p_shl266 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1797, i5 0)
  %p_shl266_cast = zext i7 %p_shl266 to i8
  %tmp_1798 = shl i5 %co180, 3
  %p_shl267_cast = zext i5 %tmp_1798 to i8
  %tmp_969 = sub i8 %p_shl266_cast, %p_shl267_cast
  %p_lshr_f27_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co180, i32 2, i32 4)
  %tmp_1267_cast = zext i3 %p_lshr_f27_cast to i8
  br label %.preheader671

.preheader671.loopexit:                           ; preds = %.preheader670
  br label %.preheader671

.preheader671:                                    ; preds = %.preheader671.loopexit, %.preheader671.preheader
  %ci81 = phi i5 [ 0, %.preheader671.preheader ], [ %ci_82, %.preheader671.loopexit ]
  %ci81_cast = zext i5 %ci81 to i8
  %exitcond304 = icmp eq i5 %ci81, -8
  %empty_700 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_82 = add i5 %ci81, 1
  br i1 %exitcond304, label %.loopexit952.loopexit, label %.preheader670.preheader

.preheader670.preheader:                          ; preds = %.preheader671
  %tmp_976 = add i8 %tmp_969, %ci81_cast
  %tmp_977_cast1 = sext i8 %tmp_976 to i15
  %tmp_978_cast = zext i5 %ci81 to i20
  br label %.preheader670

.preheader670:                                    ; preds = %215, %.preheader670.preheader
  %i194 = phi i5 [ %i_195, %215 ], [ 0, %.preheader670.preheader ]
  %exitcond303 = icmp eq i5 %i194, -16
  %empty_701 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %i_195 = add i5 %i194, 1
  br i1 %exitcond303, label %.preheader671.loopexit, label %215

; <label>:215                                     ; preds = %.preheader670
  %tmp_1819 = trunc i5 %i194 to i4
  %p_shl272 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1819, i3 0)
  %p_shl272_cast1 = zext i7 %p_shl272 to i10
  %p_shl272_cast = zext i7 %p_shl272 to i8
  %tmp_1820 = shl i5 %i194, 1
  %p_shl273_cast = zext i5 %tmp_1820 to i8
  %tmp_991 = sub i8 %p_shl272_cast, %p_shl273_cast
  %tmp_992 = add i8 %tmp_991, %tmp_1267_cast
  %tmp_1821 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_992, i7 0)
  %tmp_1822 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_992, i5 0)
  %p_shl666_cast = sext i13 %tmp_1822 to i15
  %tmp_1823 = sub i15 %tmp_1821, %p_shl666_cast
  %tmp_1824 = add i15 %tmp_977_cast1, %tmp_1823
  %tmp_2223_cast = sext i15 %tmp_1824 to i64
  %weights_96_96_1x1_V_8 = getelementptr [9216 x i8]* @weights_96_96_1x1_V, i64 0, i64 %tmp_2223_cast
  %p_shl274 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1819, i5 0)
  %p_shl274_cast = zext i9 %p_shl274 to i10
  %tmp_993 = sub i10 %p_shl274_cast, %p_shl272_cast1
  %tmp_1288_cast = sext i10 %tmp_993 to i13
  %tmp85 = add i13 -3080, %tmp_1288_cast
  %tmp_994 = add i13 %tmp85, %co181_cast
  %tmp_1825 = call i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13 %tmp_994, i5 0)
  %p_shl663_cast = zext i18 %tmp_1825 to i19
  %tmp_1826 = call i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13 %tmp_994, i3 0)
  %p_shl664_cast = zext i16 %tmp_1826 to i19
  %tmp_1827 = sub i19 %p_shl663_cast, %p_shl664_cast
  %tmp_2227_cast = sext i19 %tmp_1827 to i20
  %tmp_1828 = add i20 %tmp_978_cast, %tmp_2227_cast
  %tmp_2228_cast = sext i20 %tmp_1828 to i33
  %shuffle_conv_1x1_V8_27 = add i33 %tmp_2228_cast, %tmp_490_cast
  %shuffle_conv_1x1_V8_55 = sext i33 %shuffle_conv_1x1_V8_27 to i64
  %p3X3_1X1_WEIGHTS_addr_56 = getelementptr i8* %p3X3_1X1_WEIGHTS, i64 %shuffle_conv_1x1_V8_55
  %p3X3_1X1_WEIGHTS_load_42 = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_56, i32 1)
  %p3X3_1X1_WEIGHTS_addr_113 = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %p3X3_1X1_WEIGHTS_addr_56)
  store i8 %p3X3_1X1_WEIGHTS_addr_113, i8* %weights_96_96_1x1_V_8, align 1
  br label %.preheader670

.preheader669.loopexit:                           ; preds = %.preheader668
  br label %.preheader669

.preheader669:                                    ; preds = %.preheader669.preheader, %.preheader669.loopexit
  %i190 = phi i5 [ %i_191, %.preheader669.loopexit ], [ 0, %.preheader669.preheader ]
  %i191_cast = zext i5 %i190 to i12
  %i191_cast1 = zext i5 %i190 to i8
  %exitcond302 = icmp eq i5 %i190, -8
  %empty_702 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %i_191 = add i5 %i190, 1
  br i1 %exitcond302, label %217, label %.preheader668.preheader

.preheader668.preheader:                          ; preds = %.preheader669
  br label %.preheader668

.preheader668:                                    ; preds = %.preheader668.preheader, %216
  %k76 = phi i3 [ %k_77, %216 ], [ 0, %.preheader668.preheader ]
  %exitcond301 = icmp eq i3 %k76, -4
  %empty_703 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %k_77 = add i3 %k76, 1
  br i1 %exitcond301, label %.preheader669.loopexit, label %216

; <label>:216                                     ; preds = %.preheader668
  %tmp_1818 = trunc i3 %k76 to i2
  %p_shl268 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1818, i5 0)
  %p_shl268_cast = zext i7 %p_shl268 to i8
  %p_shl269 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1818, i3 0)
  %p_shl269_cast = zext i5 %p_shl269 to i8
  %tmp_986 = sub i8 %p_shl268_cast, %p_shl269_cast
  %tmp_1269_cast = sext i8 %tmp_986 to i12
  %tmp_987 = add i8 %i191_cast1, %tmp_986
  %tmp_1270_cast = sext i8 %tmp_987 to i32
  %tmp_988 = zext i32 %tmp_1270_cast to i64
  %tmp86 = add i12 -1096, %tmp_1269_cast
  %tmp_989 = add i12 %tmp86, %i191_cast
  %tmp_990_cast = zext i12 %tmp_989 to i33
  %bias_V14_sum42 = add i33 %tmp_482_cast, %tmp_990_cast
  %bias_V14_sum59_cast = sext i33 %bias_V14_sum42 to i64
  %DATA_BIAS_addr_59 = getelementptr i8* %DATA_BIAS, i64 %bias_V14_sum59_cast
  %DATA_BIAS_load_59_re = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %DATA_BIAS_addr_59, i32 1)
  %DATA_BIAS_addr_59_re = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %DATA_BIAS_addr_59)
  %bias_96_V_addr_13 = getelementptr [96 x i8]* @bias_96_V, i64 0, i64 %tmp_988
  store i8 %DATA_BIAS_addr_59_re, i8* %bias_96_V_addr_13, align 1
  br label %.preheader668

; <label>:217                                     ; preds = %.preheader669
  call fastcc void @subconv_1x1_4_p([3456 x i8]* @buffer0_1_96_4x4_p_V, [9216 x i8]* @weights_96_96_1x1_V, [96 x i8]* @bias_96_V, [3456 x i8]* @buffer1_1_96_4x4_p_V)
  br label %.loopexit951

.loopexit951.loopexit:                            ; preds = %.preheader667
  br label %.loopexit951

.loopexit951:                                     ; preds = %.loopexit951.loopexit, %217
  %co182 = phi i7 [ 0, %217 ], [ %co_183, %.loopexit951.loopexit ]
  %exitcond300 = icmp eq i7 %co182, -32
  %empty_704 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_183 = add i7 %co182, 1
  br i1 %exitcond300, label %219, label %.preheader667.preheader

.preheader667.preheader:                          ; preds = %.loopexit951
  %tmp_1815 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co182, i3 0)
  %p_shl667_cast = zext i10 %tmp_1815 to i11
  %tmp_1816 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co182, i1 false)
  %p_shl668_cast = zext i8 %tmp_1816 to i11
  %tmp_1817 = sub i11 %p_shl667_cast, %p_shl668_cast
  %tmp_2213_cast = sext i11 %tmp_1817 to i12
  br label %.preheader667

.preheader667.loopexit:                           ; preds = %.preheader666
  br label %.preheader667

.preheader667:                                    ; preds = %.preheader667.loopexit, %.preheader667.preheader
  %h116 = phi i3 [ 0, %.preheader667.preheader ], [ %h_117, %.preheader667.loopexit ]
  %exitcond299 = icmp eq i3 %h116, -4
  %empty_705 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %h_117 = add i3 %h116, 1
  br i1 %exitcond299, label %.loopexit951.loopexit, label %.preheader666.preheader

.preheader666.preheader:                          ; preds = %.preheader667
  %tmp_995_cast1 = zext i3 %h_117 to i12
  %tmp_1833 = add i12 %tmp_2213_cast, %tmp_995_cast1
  %tmp_1834 = trunc i12 %tmp_1833 to i11
  %p_shl669_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1834, i3 0)
  %tmp_1835 = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_1833, i1 false)
  %p_shl670_cast = sext i13 %tmp_1835 to i14
  %tmp_1836 = sub i14 %p_shl669_cast, %p_shl670_cast
  br label %.preheader666

.preheader666:                                    ; preds = %218, %.preheader666.preheader
  %w116 = phi i3 [ %w_1, %218 ], [ 0, %.preheader666.preheader ]
  %exitcond298 = icmp eq i3 %w116, -4
  %empty_706 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %w_1 = add i3 %w116, 1
  br i1 %exitcond298, label %.preheader667.loopexit, label %218

; <label>:218                                     ; preds = %.preheader666
  %tmp_998_cast1 = zext i3 %w_1 to i14
  %tmp_1841 = add i14 %tmp_1836, %tmp_998_cast1
  %tmp_2245_cast = zext i14 %tmp_1841 to i64
  %shuffleunit2_1_outpu_2 = getelementptr [6912 x i8]* @shuffleunit2_1_outpu, i64 0, i64 %tmp_2245_cast
  %buffer0_1_96_4x4_p_V_5 = getelementptr [3456 x i8]* @buffer0_1_96_4x4_p_V, i64 0, i64 %tmp_2245_cast
  %shuffleunit2_1_outpu_3 = load i8* %shuffleunit2_1_outpu_2, align 1
  store i8 %shuffleunit2_1_outpu_3, i8* %buffer0_1_96_4x4_p_V_5, align 1
  br label %.preheader666

; <label>:219                                     ; preds = %.loopexit951
  call fastcc void @shuffle_96_p([3456 x i8]* @buffer0_1_96_4x4_p_V, [6912 x i8]* @shuffleunit2_2_outpu)
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader665
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %219
  %ci82 = phi i8 [ 0, %219 ], [ %ci_83, %.loopexit.loopexit ]
  %exitcond297 = icmp eq i8 %ci82, -64
  %empty_707 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 192, i64 192, i64 192)
  %ci_83 = add i8 %ci82, 1
  br i1 %exitcond297, label %221, label %.preheader665.preheader

.preheader665.preheader:                          ; preds = %.loopexit
  %tmp_1829 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %ci82, i2 0)
  %tmp_2230_cast = zext i10 %tmp_1829 to i11
  %tmp_1830 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %ci82, i3 0)
  %p_shl671_cast = zext i11 %tmp_1830 to i12
  %tmp_1831 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %ci82, i1 false)
  %p_shl672_cast = zext i9 %tmp_1831 to i12
  %tmp_1832 = sub i12 %p_shl671_cast, %p_shl672_cast
  %tmp_2233_cast = sext i12 %tmp_1832 to i13
  br label %.preheader665

.preheader665.loopexit:                           ; preds = %.preheader
  br label %.preheader665

.preheader665:                                    ; preds = %.preheader665.loopexit, %.preheader665.preheader
  %w115 = phi i3 [ 0, %.preheader665.preheader ], [ %w_117, %.preheader665.loopexit ]
  %exitcond296 = icmp eq i3 %w115, -4
  %empty_708 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %w_117 = add i3 %w115, 1
  br i1 %exitcond296, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader665
  %tmp_996_cast = zext i3 %w115 to i11
  %tmp_1837 = add i11 %tmp_996_cast, %tmp_2230_cast
  %tmp_2240_cast = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_1837, i2 0)
  %tmp_997_cast = zext i3 %w_117 to i13
  %tmp_1838 = add i13 %tmp_997_cast, %tmp_2233_cast
  %tmp_1839 = trunc i13 %tmp_1838 to i11
  %p_shl673_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1839, i3 0)
  %p_shl674_cast = call i14 @_ssdm_op_BitConcatenate.i14.i13.i1(i13 %tmp_1838, i1 false)
  %tmp_1840 = sub i14 %p_shl673_cast, %p_shl674_cast
  br label %.preheader

.preheader:                                       ; preds = %220, %.preheader.preheader
  %h118 = phi i3 [ %h_119, %220 ], [ 0, %.preheader.preheader ]
  %exitcond295 = icmp eq i3 %h118, -4
  %empty_709 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %h_119 = add i3 %h118, 1
  br i1 %exitcond295, label %.preheader665.loopexit, label %220

; <label>:220                                     ; preds = %.preheader
  %tmp_999_cast = zext i3 %h118 to i13
  %tmp_1842 = add i13 %tmp_2240_cast, %tmp_999_cast
  %tmp_2246_cast = zext i13 %tmp_1842 to i64
  %shuffleunit2_2_outpu = getelementptr [3072 x i8]* @shuffleunit2_2_outpu_1, i64 0, i64 %tmp_2246_cast
  %tmp_1000_cast = zext i3 %h_119 to i14
  %tmp_1843 = add i14 %tmp_1840, %tmp_1000_cast
  %tmp_2247_cast = zext i14 %tmp_1843 to i64
  %shuffleunit2_2_outpu_2 = getelementptr [6912 x i8]* @shuffleunit2_2_outpu, i64 0, i64 %tmp_2247_cast
  %shuffleunit2_2_outpu_3 = load i8* %shuffleunit2_2_outpu_2, align 1
  store i8 %shuffleunit2_2_outpu_3, i8* %shuffleunit2_2_outpu, align 1
  br label %.preheader

; <label>:221                                     ; preds = %.loopexit
  call fastcc void @conv_last([3072 x i8]* nocapture @shuffleunit2_2_outpu_1, i8* %DATA_OTHER_WEIGHTS, i32 %conv_last_weight_V_r, [512 x i8]* nocapture @conv_last_bias_V, [8192 x i8]* nocapture @conv_last_output_V)
  call fastcc void @avgpool([512 x i8]* @avgpool_output_V)
  call fastcc void @fc(i8* %DATA_OTHER_WEIGHTS, i32 %fc_weight_V_read, [10 x i8]* nocapture @fc_bias_V, i8* %DATA_INPUT_OUTPUT, i32 %fc_output_V_read)
  ret i32 0
}

!opencl.kernels = !{!0, !7, !13, !19, !19, !19, !19, !25, !25, !28, !30, !30, !19, !32, !32, !34, !40, !19, !19, !19, !43, !46, !46, !47, !49, !53, !55, !57, !59, !61, !67, !71, !73, !75, !77, !79, !81, !83, !85, !86, !88, !90, !92, !94, !96, !98, !99, !101, !104, !106, !30, !30, !19, !109, !47, !47, !19, !19, !19, !19, !110, !111, !111, !34, !113, !19, !19, !19, !115, !46, !46, !47, !13, !106, !109, !32, !32, !19, !111, !111, !110, !47, !47, !117, !117, !119, !119, !19, !47, !47, !19, !19, !120, !120, !122, !19, !19, !19, !124, !46, !46, !126, !110, !19, !19, !19, !19, !19, !25, !25, !28, !32, !32, !40, !19, !19, !19, !43, !46, !46}
!hls.encrypted.func = !{}
!llvm.map.gv = !{!130, !138, !145, !152, !158, !165, !171, !179, !186, !191, !196, !203, !208, !213, !218, !223, !228, !233, !238, !245, !250, !255, !262, !269, !275, !280, !285, !290, !297, !303, !309, !315, !321, !327, !333, !338, !343, !348, !354, !360, !365, !370, !375, !380, !385, !386, !387, !388, !389, !390, !391, !392, !393, !394, !395, !396, !397, !398, !399, !400, !401, !402, !403, !404, !405, !406, !407, !408, !409, !410, !411, !412, !413, !414, !415, !416, !417, !418, !419, !420}
!axi4.master.portmap = !{!421, !422, !423, !424}
!axi4.slave.bundlemap = !{!425, !426, !427, !428, !429, !430, !431, !432}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1, i32 1, i32 1, i32 1, i32 1, i32 1}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"FIX_8 [3][32][32]*", metadata !"FIX_8 [3][3][3]*", metadata !"FIX_8 [1][3][3]*", metadata !"FIX_8 [24][1][1]*", metadata !"FIX_8 [192][1][1]*", metadata !"FIX_8 [512]*", metadata !"FIX_8*", metadata !"FIX_8*"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !"", metadata !"", metadata !"", metadata !"", metadata !"", metadata !""}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"image", metadata !"conv1_weight", metadata !"shuffle_conv_3x3", metadata !"shuffle_conv_1x1", metadata !"conv_last_weight", metadata !"fc_weight", metadata !"bias", metadata !"fc_output"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{null, metadata !8, metadata !9, metadata !10, metadata !11, metadata !12, metadata !6}
!8 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0}
!9 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!10 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_fixed_base<8, 2, true, (enum ap_q_mode)0, (enum ap_o_mode)0, 0> &"}
!11 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!12 = metadata !{metadata !"kernel_arg_name", metadata !"os", metadata !"x"}
!13 = metadata !{null, metadata !14, metadata !15, metadata !16, metadata !17, metadata !18, metadata !6}
!14 = metadata !{metadata !"kernel_arg_addr_space", i32 0}
!15 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!16 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed<8, 2, (enum ap_q_mode)0, (enum ap_o_mode)0, 0> &"}
!17 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!18 = metadata !{metadata !"kernel_arg_name", metadata !"op"}
!19 = metadata !{null, metadata !20, metadata !21, metadata !22, metadata !23, metadata !24, metadata !6}
!20 = metadata !{metadata !"kernel_arg_addr_space"}
!21 = metadata !{metadata !"kernel_arg_access_qual"}
!22 = metadata !{metadata !"kernel_arg_type"}
!23 = metadata !{metadata !"kernel_arg_type_qual"}
!24 = metadata !{metadata !"kernel_arg_name"}
!25 = metadata !{null, metadata !14, metadata !15, metadata !26, metadata !17, metadata !27, metadata !6}
!26 = metadata !{metadata !"kernel_arg_type", metadata !"int"}
!27 = metadata !{metadata !"kernel_arg_name", metadata !"v"}
!28 = metadata !{null, metadata !14, metadata !15, metadata !26, metadata !17, metadata !29, metadata !6}
!29 = metadata !{metadata !"kernel_arg_name", metadata !"b"}
!30 = metadata !{null, metadata !14, metadata !15, metadata !26, metadata !17, metadata !31, metadata !6}
!31 = metadata !{metadata !"kernel_arg_name", metadata !"i_op"}
!32 = metadata !{null, metadata !14, metadata !15, metadata !33, metadata !17, metadata !18, metadata !6}
!33 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<32, 32, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!34 = metadata !{null, metadata !35, metadata !36, metadata !37, metadata !38, metadata !39, metadata !6}
!35 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0, i32 0, i32 0}
!36 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none", metadata !"none"}
!37 = metadata !{metadata !"kernel_arg_type", metadata !"_Bool", metadata !"_Bool", metadata !"_Bool", metadata !"_Bool"}
!38 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !"", metadata !""}
!39 = metadata !{metadata !"kernel_arg_name", metadata !"underflow", metadata !"overflow", metadata !"lD", metadata !"sign"}
!40 = metadata !{null, metadata !8, metadata !9, metadata !41, metadata !11, metadata !42, metadata !6}
!41 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<32, false> &", metadata !"int"}
!42 = metadata !{metadata !"kernel_arg_name", metadata !"op", metadata !"op2"}
!43 = metadata !{null, metadata !14, metadata !15, metadata !44, metadata !17, metadata !45, metadata !6}
!44 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<32, false> &"}
!45 = metadata !{metadata !"kernel_arg_name", metadata !"op2"}
!46 = metadata !{null, metadata !14, metadata !15, metadata !26, metadata !17, metadata !18, metadata !6}
!47 = metadata !{null, metadata !14, metadata !15, metadata !48, metadata !17, metadata !18, metadata !6}
!48 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<8, 2, true, (enum ap_q_mode)0, (enum ap_o_mode)0, 0> &"}
!49 = metadata !{null, metadata !50, metadata !36, metadata !51, metadata !38, metadata !52, metadata !6}
!50 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1, i32 1}
!51 = metadata !{metadata !"kernel_arg_type", metadata !"FIX_8 [3][34][34]*", metadata !"FIX_8 [3][3][3]*", metadata !"FIX_8*", metadata !"FIX_8 [24][34][34]*"}
!52 = metadata !{metadata !"kernel_arg_name", metadata !"input", metadata !"weight", metadata !"bias", metadata !"output"}
!53 = metadata !{null, metadata !50, metadata !36, metadata !54, metadata !38, metadata !52, metadata !6}
!54 = metadata !{metadata !"kernel_arg_type", metadata !"FIX_8 [24][34][34]*", metadata !"FIX_8 [24][1][1]*", metadata !"FIX_8*", metadata !"FIX_8 [24][34][34]*"}
!55 = metadata !{null, metadata !50, metadata !36, metadata !56, metadata !38, metadata !52, metadata !6}
!56 = metadata !{metadata !"kernel_arg_type", metadata !"FIX_8 [24][18][18]*", metadata !"FIX_8 [24][1][1]*", metadata !"FIX_8*", metadata !"FIX_8 [24][18][18]*"}
!57 = metadata !{null, metadata !50, metadata !36, metadata !58, metadata !38, metadata !52, metadata !6}
!58 = metadata !{metadata !"kernel_arg_type", metadata !"FIX_8 [24][34][34]*", metadata !"FIX_8 [1][3][3]*", metadata !"FIX_8*", metadata !"FIX_8 [24][18][18]*"}
!59 = metadata !{null, metadata !50, metadata !36, metadata !60, metadata !38, metadata !52, metadata !6}
!60 = metadata !{metadata !"kernel_arg_type", metadata !"FIX_8 [24][18][18]*", metadata !"FIX_8 [1][3][3]*", metadata !"FIX_8*", metadata !"FIX_8 [24][18][18]*"}
!61 = metadata !{null, metadata !62, metadata !63, metadata !64, metadata !65, metadata !66, metadata !6}
!62 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1}
!63 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none"}
!64 = metadata !{metadata !"kernel_arg_type", metadata !"FIX_8 [24][18][18]*", metadata !"FIX_8 [24][18][18]*", metadata !"FIX_8 [48][18][18]*"}
!65 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !""}
!66 = metadata !{metadata !"kernel_arg_name", metadata !"left", metadata !"right", metadata !"output"}
!67 = metadata !{null, metadata !68, metadata !9, metadata !69, metadata !11, metadata !70, metadata !6}
!68 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!69 = metadata !{metadata !"kernel_arg_type", metadata !"FIX_8 [24][18][18]*", metadata !"FIX_8 [48][18][18]*"}
!70 = metadata !{metadata !"kernel_arg_name", metadata !"left", metadata !"output"}
!71 = metadata !{null, metadata !68, metadata !9, metadata !69, metadata !11, metadata !72, metadata !6}
!72 = metadata !{metadata !"kernel_arg_name", metadata !"right", metadata !"output"}
!73 = metadata !{null, metadata !50, metadata !36, metadata !74, metadata !38, metadata !52, metadata !6}
!74 = metadata !{metadata !"kernel_arg_type", metadata !"FIX_8 [48][18][18]*", metadata !"FIX_8 [48][1][1]*", metadata !"FIX_8*", metadata !"FIX_8 [48][18][18]*"}
!75 = metadata !{null, metadata !50, metadata !36, metadata !76, metadata !38, metadata !52, metadata !6}
!76 = metadata !{metadata !"kernel_arg_type", metadata !"FIX_8 [48][10][10]*", metadata !"FIX_8 [48][1][1]*", metadata !"FIX_8*", metadata !"FIX_8 [48][10][10]*"}
!77 = metadata !{null, metadata !50, metadata !36, metadata !78, metadata !38, metadata !52, metadata !6}
!78 = metadata !{metadata !"kernel_arg_type", metadata !"FIX_8 [48][18][18]*", metadata !"FIX_8 [1][3][3]*", metadata !"FIX_8*", metadata !"FIX_8 [48][10][10]*"}
!79 = metadata !{null, metadata !50, metadata !36, metadata !80, metadata !38, metadata !52, metadata !6}
!80 = metadata !{metadata !"kernel_arg_type", metadata !"FIX_8 [48][10][10]*", metadata !"FIX_8 [1][3][3]*", metadata !"FIX_8*", metadata !"FIX_8 [48][10][10]*"}
!81 = metadata !{null, metadata !62, metadata !63, metadata !82, metadata !65, metadata !66, metadata !6}
!82 = metadata !{metadata !"kernel_arg_type", metadata !"FIX_8 [48][10][10]*", metadata !"FIX_8 [48][10][10]*", metadata !"FIX_8 [96][10][10]*"}
!83 = metadata !{null, metadata !68, metadata !9, metadata !84, metadata !11, metadata !70, metadata !6}
!84 = metadata !{metadata !"kernel_arg_type", metadata !"FIX_8 [48][10][10]*", metadata !"FIX_8 [96][10][10]*"}
!85 = metadata !{null, metadata !68, metadata !9, metadata !84, metadata !11, metadata !72, metadata !6}
!86 = metadata !{null, metadata !50, metadata !36, metadata !87, metadata !38, metadata !52, metadata !6}
!87 = metadata !{metadata !"kernel_arg_type", metadata !"FIX_8 [96][10][10]*", metadata !"FIX_8 [96][1][1]*", metadata !"FIX_8*", metadata !"FIX_8 [96][10][10]*"}
!88 = metadata !{null, metadata !50, metadata !36, metadata !89, metadata !38, metadata !52, metadata !6}
!89 = metadata !{metadata !"kernel_arg_type", metadata !"FIX_8 [96][6][6]*", metadata !"FIX_8 [96][1][1]*", metadata !"FIX_8*", metadata !"FIX_8 [96][6][6]*"}
!90 = metadata !{null, metadata !50, metadata !36, metadata !91, metadata !38, metadata !52, metadata !6}
!91 = metadata !{metadata !"kernel_arg_type", metadata !"FIX_8 [96][10][10]*", metadata !"FIX_8 [1][3][3]*", metadata !"FIX_8*", metadata !"FIX_8 [96][6][6]*"}
!92 = metadata !{null, metadata !50, metadata !36, metadata !93, metadata !38, metadata !52, metadata !6}
!93 = metadata !{metadata !"kernel_arg_type", metadata !"FIX_8 [96][6][6]*", metadata !"FIX_8 [1][3][3]*", metadata !"FIX_8*", metadata !"FIX_8 [96][6][6]*"}
!94 = metadata !{null, metadata !62, metadata !63, metadata !95, metadata !65, metadata !66, metadata !6}
!95 = metadata !{metadata !"kernel_arg_type", metadata !"FIX_8 [96][6][6]*", metadata !"FIX_8 [96][6][6]*", metadata !"FIX_8 [192][6][6]*"}
!96 = metadata !{null, metadata !68, metadata !9, metadata !97, metadata !11, metadata !70, metadata !6}
!97 = metadata !{metadata !"kernel_arg_type", metadata !"FIX_8 [96][6][6]*", metadata !"FIX_8 [192][6][6]*"}
!98 = metadata !{null, metadata !68, metadata !9, metadata !97, metadata !11, metadata !72, metadata !6}
!99 = metadata !{null, metadata !50, metadata !36, metadata !100, metadata !38, metadata !52, metadata !6}
!100 = metadata !{metadata !"kernel_arg_type", metadata !"FIX_8 [192][4][4]*", metadata !"FIX_8 [192][1][1]*", metadata !"FIX_8*", metadata !"FIX_8 [512][4][4]*"}
!101 = metadata !{null, metadata !68, metadata !9, metadata !102, metadata !11, metadata !103, metadata !6}
!102 = metadata !{metadata !"kernel_arg_type", metadata !"FIX_8 [512][4][4]*", metadata !"FIX_8*"}
!103 = metadata !{metadata !"kernel_arg_name", metadata !"input", metadata !"output"}
!104 = metadata !{null, metadata !50, metadata !36, metadata !105, metadata !38, metadata !52, metadata !6}
!105 = metadata !{metadata !"kernel_arg_type", metadata !"FIX_8*", metadata !"FIX_8 [512]*", metadata !"FIX_8*", metadata !"FIX_8*"}
!106 = metadata !{null, metadata !8, metadata !9, metadata !107, metadata !11, metadata !108, metadata !6}
!107 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<8, 2, true, (enum ap_q_mode)0, (enum ap_o_mode)0, 0> &", metadata !"int"}
!108 = metadata !{metadata !"kernel_arg_name", metadata !"op", metadata !"i_op"}
!109 = metadata !{null, metadata !14, metadata !15, metadata !33, metadata !17, metadata !45, metadata !6}
!110 = metadata !{null, metadata !14, metadata !15, metadata !48, metadata !17, metadata !45, metadata !6}
!111 = metadata !{null, metadata !14, metadata !15, metadata !112, metadata !17, metadata !18, metadata !6}
!112 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<9, 3, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!113 = metadata !{null, metadata !8, metadata !9, metadata !114, metadata !11, metadata !42, metadata !6}
!114 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<9, false> &", metadata !"int"}
!115 = metadata !{null, metadata !14, metadata !15, metadata !116, metadata !17, metadata !45, metadata !6}
!116 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<9, false> &"}
!117 = metadata !{null, metadata !14, metadata !15, metadata !118, metadata !17, metadata !45, metadata !6}
!118 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<16, 4, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!119 = metadata !{null, metadata !14, metadata !15, metadata !118, metadata !17, metadata !18, metadata !6}
!120 = metadata !{null, metadata !14, metadata !15, metadata !121, metadata !17, metadata !18, metadata !6}
!121 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<17, 5, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!122 = metadata !{null, metadata !8, metadata !9, metadata !123, metadata !11, metadata !42, metadata !6}
!123 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<17, false> &", metadata !"int"}
!124 = metadata !{null, metadata !14, metadata !15, metadata !125, metadata !17, metadata !45, metadata !6}
!125 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<17, false> &"}
!126 = metadata !{null, metadata !127, metadata !63, metadata !128, metadata !65, metadata !129, metadata !6}
!127 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0, i32 0}
!128 = metadata !{metadata !"kernel_arg_type", metadata !"_Bool", metadata !"_Bool", metadata !"_Bool"}
!129 = metadata !{metadata !"kernel_arg_name", metadata !"qb", metadata !"r", metadata !"s"}
!130 = metadata !{metadata !131, null}
!131 = metadata !{metadata !132}
!132 = metadata !{i32 0, i32 7, metadata !133}
!133 = metadata !{metadata !134}
!134 = metadata !{metadata !"weights_96_96_1x1.V", metadata !135, metadata !"int8", i32 0, i32 7}
!135 = metadata !{metadata !136, metadata !136, metadata !137, metadata !137}
!136 = metadata !{i32 0, i32 95, i32 1}
!137 = metadata !{i32 0, i32 0, i32 1}
!138 = metadata !{metadata !139, null}
!139 = metadata !{metadata !140}
!140 = metadata !{i32 0, i32 7, metadata !141}
!141 = metadata !{metadata !142}
!142 = metadata !{metadata !"weights_96_1_3x3.V", metadata !143, metadata !"int8", i32 0, i32 7}
!143 = metadata !{metadata !136, metadata !137, metadata !144, metadata !144}
!144 = metadata !{i32 0, i32 2, i32 1}
!145 = metadata !{metadata !146, null}
!146 = metadata !{metadata !147}
!147 = metadata !{i32 0, i32 7, metadata !148}
!148 = metadata !{metadata !149}
!149 = metadata !{metadata !"weights_48_48_1x1.V", metadata !150, metadata !"int8", i32 0, i32 7}
!150 = metadata !{metadata !151, metadata !151, metadata !137, metadata !137}
!151 = metadata !{i32 0, i32 47, i32 1}
!152 = metadata !{metadata !153, null}
!153 = metadata !{metadata !154}
!154 = metadata !{i32 0, i32 7, metadata !155}
!155 = metadata !{metadata !156}
!156 = metadata !{metadata !"weights_48_1_3x3.V", metadata !157, metadata !"int8", i32 0, i32 7}
!157 = metadata !{metadata !151, metadata !137, metadata !144, metadata !144}
!158 = metadata !{metadata !159, null}
!159 = metadata !{metadata !160}
!160 = metadata !{i32 0, i32 7, metadata !161}
!161 = metadata !{metadata !162}
!162 = metadata !{metadata !"weights_24_24_1x1.V", metadata !163, metadata !"int8", i32 0, i32 7}
!163 = metadata !{metadata !164, metadata !164, metadata !137, metadata !137}
!164 = metadata !{i32 0, i32 23, i32 1}
!165 = metadata !{metadata !166, null}
!166 = metadata !{metadata !167}
!167 = metadata !{i32 0, i32 7, metadata !168}
!168 = metadata !{metadata !169}
!169 = metadata !{metadata !"weights_24_1_3x3.V", metadata !170, metadata !"int8", i32 0, i32 7}
!170 = metadata !{metadata !164, metadata !137, metadata !144, metadata !144}
!171 = metadata !{metadata !172, null}
!172 = metadata !{metadata !173}
!173 = metadata !{i32 0, i32 7, metadata !174}
!174 = metadata !{metadata !175}
!175 = metadata !{metadata !"shuffleunit2_2_output_p.V", metadata !176, metadata !"int8", i32 0, i32 7}
!176 = metadata !{metadata !137, metadata !177, metadata !178, metadata !178}
!177 = metadata !{i32 0, i32 191, i32 1}
!178 = metadata !{i32 0, i32 5, i32 1}
!179 = metadata !{metadata !180, null}
!180 = metadata !{metadata !181}
!181 = metadata !{i32 0, i32 7, metadata !182}
!182 = metadata !{metadata !183}
!183 = metadata !{metadata !"shuffleunit2_2_output.V", metadata !184, metadata !"int8", i32 0, i32 7}
!184 = metadata !{metadata !137, metadata !177, metadata !185, metadata !185}
!185 = metadata !{i32 0, i32 3, i32 1}
!186 = metadata !{metadata !187, null}
!187 = metadata !{metadata !188}
!188 = metadata !{i32 0, i32 7, metadata !189}
!189 = metadata !{metadata !190}
!190 = metadata !{metadata !"shuffleunit2_1_output_p.V", metadata !176, metadata !"int8", i32 0, i32 7}
!191 = metadata !{metadata !192, null}
!192 = metadata !{metadata !193}
!193 = metadata !{i32 0, i32 7, metadata !194}
!194 = metadata !{metadata !195}
!195 = metadata !{metadata !"shuffleunit2_0_output_p.V", metadata !176, metadata !"int8", i32 0, i32 7}
!196 = metadata !{metadata !197, null}
!197 = metadata !{metadata !198}
!198 = metadata !{i32 0, i32 7, metadata !199}
!199 = metadata !{metadata !200}
!200 = metadata !{metadata !"shuffleunit1_7_output_p.V", metadata !201, metadata !"int8", i32 0, i32 7}
!201 = metadata !{metadata !137, metadata !136, metadata !202, metadata !202}
!202 = metadata !{i32 0, i32 9, i32 1}
!203 = metadata !{metadata !204, null}
!204 = metadata !{metadata !205}
!205 = metadata !{i32 0, i32 7, metadata !206}
!206 = metadata !{metadata !207}
!207 = metadata !{metadata !"shuffleunit1_6_output_p.V", metadata !201, metadata !"int8", i32 0, i32 7}
!208 = metadata !{metadata !209, null}
!209 = metadata !{metadata !210}
!210 = metadata !{i32 0, i32 7, metadata !211}
!211 = metadata !{metadata !212}
!212 = metadata !{metadata !"shuffleunit1_5_output_p.V", metadata !201, metadata !"int8", i32 0, i32 7}
!213 = metadata !{metadata !214, null}
!214 = metadata !{metadata !215}
!215 = metadata !{i32 0, i32 7, metadata !216}
!216 = metadata !{metadata !217}
!217 = metadata !{metadata !"shuffleunit1_4_output_p.V", metadata !201, metadata !"int8", i32 0, i32 7}
!218 = metadata !{metadata !219, null}
!219 = metadata !{metadata !220}
!220 = metadata !{i32 0, i32 7, metadata !221}
!221 = metadata !{metadata !222}
!222 = metadata !{metadata !"shuffleunit1_3_output_p.V", metadata !201, metadata !"int8", i32 0, i32 7}
!223 = metadata !{metadata !224, null}
!224 = metadata !{metadata !225}
!225 = metadata !{i32 0, i32 7, metadata !226}
!226 = metadata !{metadata !227}
!227 = metadata !{metadata !"shuffleunit1_2_output_p.V", metadata !201, metadata !"int8", i32 0, i32 7}
!228 = metadata !{metadata !229, null}
!229 = metadata !{metadata !230}
!230 = metadata !{i32 0, i32 7, metadata !231}
!231 = metadata !{metadata !232}
!232 = metadata !{metadata !"shuffleunit1_1_output_p.V", metadata !201, metadata !"int8", i32 0, i32 7}
!233 = metadata !{metadata !234, null}
!234 = metadata !{metadata !235}
!235 = metadata !{i32 0, i32 7, metadata !236}
!236 = metadata !{metadata !237}
!237 = metadata !{metadata !"shuffleunit1_0_output_p.V", metadata !201, metadata !"int8", i32 0, i32 7}
!238 = metadata !{metadata !239, null}
!239 = metadata !{metadata !240}
!240 = metadata !{i32 0, i32 7, metadata !241}
!241 = metadata !{metadata !242}
!242 = metadata !{metadata !"shuffleunit0_2_output_p.V", metadata !243, metadata !"int8", i32 0, i32 7}
!243 = metadata !{metadata !137, metadata !151, metadata !244, metadata !244}
!244 = metadata !{i32 0, i32 17, i32 1}
!245 = metadata !{metadata !246, null}
!246 = metadata !{metadata !247}
!247 = metadata !{i32 0, i32 7, metadata !248}
!248 = metadata !{metadata !249}
!249 = metadata !{metadata !"shuffleunit0_1_output_p.V", metadata !243, metadata !"int8", i32 0, i32 7}
!250 = metadata !{metadata !251, null}
!251 = metadata !{metadata !252}
!252 = metadata !{i32 0, i32 7, metadata !253}
!253 = metadata !{metadata !254}
!254 = metadata !{metadata !"shuffleunit0_0_output_p.V", metadata !243, metadata !"int8", i32 0, i32 7}
!255 = metadata !{metadata !256, [2 x i32]* @llvm_global_ctors_0}
!256 = metadata !{metadata !257}
!257 = metadata !{i32 0, i32 31, metadata !258}
!258 = metadata !{metadata !259}
!259 = metadata !{metadata !"llvm.global_ctors.0", metadata !260, metadata !"", i32 0, i32 31}
!260 = metadata !{metadata !261}
!261 = metadata !{i32 0, i32 1, i32 1}
!262 = metadata !{metadata !263, null}
!263 = metadata !{metadata !264}
!264 = metadata !{i32 0, i32 7, metadata !265}
!265 = metadata !{metadata !266}
!266 = metadata !{metadata !"image_p.V", metadata !267, metadata !"int8", i32 0, i32 7}
!267 = metadata !{metadata !137, metadata !144, metadata !268, metadata !268}
!268 = metadata !{i32 0, i32 33, i32 1}
!269 = metadata !{metadata !270, [10 x i8]* @fc_bias_V}
!270 = metadata !{metadata !271}
!271 = metadata !{i32 0, i32 7, metadata !272}
!272 = metadata !{metadata !273}
!273 = metadata !{metadata !"fc_bias.V", metadata !274, metadata !"int8", i32 0, i32 7}
!274 = metadata !{metadata !202}
!275 = metadata !{metadata !276, null}
!276 = metadata !{metadata !277}
!277 = metadata !{i32 0, i32 7, metadata !278}
!278 = metadata !{metadata !279}
!279 = metadata !{metadata !"downsampleunit2_output_p.V", metadata !176, metadata !"int8", i32 0, i32 7}
!280 = metadata !{metadata !281, null}
!281 = metadata !{metadata !282}
!282 = metadata !{i32 0, i32 7, metadata !283}
!283 = metadata !{metadata !284}
!284 = metadata !{metadata !"downsampleunit1_output_p.V", metadata !201, metadata !"int8", i32 0, i32 7}
!285 = metadata !{metadata !286, null}
!286 = metadata !{metadata !287}
!287 = metadata !{i32 0, i32 7, metadata !288}
!288 = metadata !{metadata !289}
!289 = metadata !{metadata !"downsampleunit0_output_p.V", metadata !243, metadata !"int8", i32 0, i32 7}
!290 = metadata !{metadata !291, null}
!291 = metadata !{metadata !292}
!292 = metadata !{i32 0, i32 7, metadata !293}
!293 = metadata !{metadata !294}
!294 = metadata !{metadata !"conv_last_output.V", metadata !295, metadata !"int8", i32 0, i32 7}
!295 = metadata !{metadata !137, metadata !296, metadata !185, metadata !185}
!296 = metadata !{i32 0, i32 511, i32 1}
!297 = metadata !{metadata !298, [512 x i8]* @conv_last_bias_V}
!298 = metadata !{metadata !299}
!299 = metadata !{i32 0, i32 7, metadata !300}
!300 = metadata !{metadata !301}
!301 = metadata !{metadata !"conv_last_bias.V", metadata !302, metadata !"int8", i32 0, i32 7}
!302 = metadata !{metadata !296}
!303 = metadata !{metadata !304, null}
!304 = metadata !{metadata !305}
!305 = metadata !{i32 0, i32 7, metadata !306}
!306 = metadata !{metadata !307}
!307 = metadata !{metadata !"conv1_output_p.V", metadata !308, metadata !"int8", i32 0, i32 7}
!308 = metadata !{metadata !137, metadata !164, metadata !268, metadata !268}
!309 = metadata !{metadata !310, [24 x i8]* @conv1_bias_V}
!310 = metadata !{metadata !311}
!311 = metadata !{i32 0, i32 7, metadata !312}
!312 = metadata !{metadata !313}
!313 = metadata !{metadata !"conv1_bias.V", metadata !314, metadata !"int8", i32 0, i32 7}
!314 = metadata !{metadata !164}
!315 = metadata !{metadata !316, null}
!316 = metadata !{metadata !317}
!317 = metadata !{i32 0, i32 7, metadata !318}
!318 = metadata !{metadata !319}
!319 = metadata !{metadata !"buffer1_1_96_4x4_p.V", metadata !320, metadata !"int8", i32 0, i32 7}
!320 = metadata !{metadata !137, metadata !136, metadata !178, metadata !178}
!321 = metadata !{metadata !322, null}
!322 = metadata !{metadata !323}
!323 = metadata !{i32 0, i32 7, metadata !324}
!324 = metadata !{metadata !325}
!325 = metadata !{metadata !"buffer1_1_48_8x8_p.V", metadata !326, metadata !"int8", i32 0, i32 7}
!326 = metadata !{metadata !137, metadata !151, metadata !202, metadata !202}
!327 = metadata !{metadata !328, null}
!328 = metadata !{metadata !329}
!329 = metadata !{i32 0, i32 7, metadata !330}
!330 = metadata !{metadata !331}
!331 = metadata !{metadata !"buffer1_1_24_16x16_p.V", metadata !332, metadata !"int8", i32 0, i32 7}
!332 = metadata !{metadata !137, metadata !164, metadata !244, metadata !244}
!333 = metadata !{metadata !334, null}
!334 = metadata !{metadata !335}
!335 = metadata !{i32 0, i32 7, metadata !336}
!336 = metadata !{metadata !337}
!337 = metadata !{metadata !"buffer0_1_96_4x4_p.V", metadata !320, metadata !"int8", i32 0, i32 7}
!338 = metadata !{metadata !339, null}
!339 = metadata !{metadata !340}
!340 = metadata !{i32 0, i32 7, metadata !341}
!341 = metadata !{metadata !342}
!342 = metadata !{metadata !"buffer0_1_48_8x8_p.V", metadata !326, metadata !"int8", i32 0, i32 7}
!343 = metadata !{metadata !344, null}
!344 = metadata !{metadata !345}
!345 = metadata !{i32 0, i32 7, metadata !346}
!346 = metadata !{metadata !347}
!347 = metadata !{metadata !"buffer0_1_24_16x16_p.V", metadata !332, metadata !"int8", i32 0, i32 7}
!348 = metadata !{metadata !349, [96 x i8]* @bias_96_V}
!349 = metadata !{metadata !350}
!350 = metadata !{i32 0, i32 7, metadata !351}
!351 = metadata !{metadata !352}
!352 = metadata !{metadata !"bias_96.V", metadata !353, metadata !"int8", i32 0, i32 7}
!353 = metadata !{metadata !136}
!354 = metadata !{metadata !355, [48 x i8]* @bias_48_V}
!355 = metadata !{metadata !356}
!356 = metadata !{i32 0, i32 7, metadata !357}
!357 = metadata !{metadata !358}
!358 = metadata !{metadata !"bias_48.V", metadata !359, metadata !"int8", i32 0, i32 7}
!359 = metadata !{metadata !151}
!360 = metadata !{metadata !361, [24 x i8]* @bias_24_V}
!361 = metadata !{metadata !362}
!362 = metadata !{i32 0, i32 7, metadata !363}
!363 = metadata !{metadata !364}
!364 = metadata !{metadata !"bias_24.V", metadata !314, metadata !"int8", i32 0, i32 7}
!365 = metadata !{metadata !366, [512 x i8]* @avgpool_output_V}
!366 = metadata !{metadata !367}
!367 = metadata !{i32 0, i32 7, metadata !368}
!368 = metadata !{metadata !369}
!369 = metadata !{metadata !"avgpool_output.V", metadata !302, metadata !"int8", i32 0, i32 7}
!370 = metadata !{metadata !371, null}
!371 = metadata !{metadata !372}
!372 = metadata !{i32 0, i32 7, metadata !373}
!373 = metadata !{metadata !374}
!374 = metadata !{metadata !"ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V", metadata !201, metadata !"int8", i32 0, i32 7}
!375 = metadata !{metadata !376, null}
!376 = metadata !{metadata !377}
!377 = metadata !{i32 0, i32 7, metadata !378}
!378 = metadata !{metadata !379}
!379 = metadata !{metadata !"ShuffleConvs_1_DownsampleUnit__conv1r_output_p.V", metadata !243, metadata !"int8", i32 0, i32 7}
!380 = metadata !{metadata !381, null}
!381 = metadata !{metadata !382}
!382 = metadata !{i32 0, i32 7, metadata !383}
!383 = metadata !{metadata !384}
!384 = metadata !{metadata !"ShuffleConvs_0_DownsampleUnit__conv1r_output_p.V", metadata !308, metadata !"int8", i32 0, i32 7}
!385 = metadata !{metadata !131, [9216 x i8]* @weights_96_96_1x1_V}
!386 = metadata !{metadata !139, [864 x i8]* @weights_96_1_3x3_V}
!387 = metadata !{metadata !146, [2304 x i8]* @weights_48_48_1x1_V}
!388 = metadata !{metadata !153, [432 x i8]* @weights_48_1_3x3_V}
!389 = metadata !{metadata !159, [576 x i8]* @weights_24_24_1x1_V}
!390 = metadata !{metadata !166, [216 x i8]* @weights_24_1_3x3_V}
!391 = metadata !{metadata !172, [6912 x i8]* @shuffleunit2_2_outpu}
!392 = metadata !{metadata !180, [3072 x i8]* @shuffleunit2_2_outpu_1}
!393 = metadata !{metadata !187, [6912 x i8]* @shuffleunit2_1_outpu}
!394 = metadata !{metadata !192, [6912 x i8]* @shuffleunit2_0_outpu}
!395 = metadata !{metadata !197, [9600 x i8]* @shuffleunit1_7_outpu}
!396 = metadata !{metadata !204, [9600 x i8]* @shuffleunit1_6_outpu}
!397 = metadata !{metadata !209, [9600 x i8]* @shuffleunit1_5_outpu}
!398 = metadata !{metadata !214, [9600 x i8]* @shuffleunit1_4_outpu}
!399 = metadata !{metadata !219, [9600 x i8]* @shuffleunit1_3_outpu}
!400 = metadata !{metadata !224, [9600 x i8]* @shuffleunit1_2_outpu}
!401 = metadata !{metadata !229, [9600 x i8]* @shuffleunit1_1_outpu}
!402 = metadata !{metadata !234, [9600 x i8]* @shuffleunit1_0_outpu}
!403 = metadata !{metadata !239, [15552 x i8]* @shuffleunit0_2_outpu}
!404 = metadata !{metadata !246, [15552 x i8]* @shuffleunit0_1_outpu}
!405 = metadata !{metadata !251, [15552 x i8]* @shuffleunit0_0_outpu}
!406 = metadata !{metadata !263, [3468 x i8]* @image_p_V}
!407 = metadata !{metadata !276, [6912 x i8]* @downsampleunit2_outp}
!408 = metadata !{metadata !281, [9600 x i8]* @downsampleunit1_outp}
!409 = metadata !{metadata !286, [15552 x i8]* @downsampleunit0_outp}
!410 = metadata !{metadata !291, [8192 x i8]* @conv_last_output_V}
!411 = metadata !{metadata !304, [27744 x i8]* @conv1_output_p_V}
!412 = metadata !{metadata !316, [3456 x i8]* @buffer1_1_96_4x4_p_V}
!413 = metadata !{metadata !322, [4800 x i8]* @buffer1_1_48_8x8_p_V}
!414 = metadata !{metadata !328, [7776 x i8]* @buffer1_1_24_16x16_p}
!415 = metadata !{metadata !334, [3456 x i8]* @buffer0_1_96_4x4_p_V}
!416 = metadata !{metadata !339, [4800 x i8]* @buffer0_1_48_8x8_p_V}
!417 = metadata !{metadata !344, [7776 x i8]* @buffer0_1_24_16x16_p}
!418 = metadata !{metadata !371, [9600 x i8]* @ShuffleConvs_2_Downs}
!419 = metadata !{metadata !376, [15552 x i8]* @ShuffleConvs_1_Downs}
!420 = metadata !{metadata !381, [27744 x i8]* @ShuffleConvs_0_Downs}
!421 = metadata !{metadata !"DATA_INPUT_OUTPUT", metadata !"image.V", metadata !"READONLY", metadata !"fc_output.V", metadata !"WRITEONLY"}
!422 = metadata !{metadata !"DATA_OTHER_WEIGHTS", metadata !"conv1_weight.V", metadata !"READONLY", metadata !"conv_last_weight.V", metadata !"READONLY", metadata !"fc_weight.V", metadata !"READONLY"}
!423 = metadata !{metadata !"3X3_1X1_WEIGHTS", metadata !"shuffle_conv_3x3.V", metadata !"READONLY", metadata !"shuffle_conv_1x1.V", metadata !"READONLY"}
!424 = metadata !{metadata !"DATA_BIAS", metadata !"bias.V", metadata !"READONLY"}
!425 = metadata !{metadata !"image.V", metadata !""}
!426 = metadata !{metadata !"conv1_weight.V", metadata !""}
!427 = metadata !{metadata !"shuffle_conv_3x3.V", metadata !""}
!428 = metadata !{metadata !"shuffle_conv_1x1.V", metadata !""}
!429 = metadata !{metadata !"conv_last_weight.V", metadata !""}
!430 = metadata !{metadata !"fc_weight.V", metadata !""}
!431 = metadata !{metadata !"bias.V", metadata !""}
!432 = metadata !{metadata !"fc_output.V", metadata !""}
!433 = metadata !{metadata !434}
!434 = metadata !{i32 0, i32 7, metadata !435}
!435 = metadata !{metadata !436}
!436 = metadata !{metadata !"bias.V", metadata !437, metadata !"int8", i32 0, i32 7}
!437 = metadata !{metadata !438}
!438 = metadata !{i32 0, i32 3617, i32 1}
!439 = metadata !{metadata !440}
!440 = metadata !{i32 0, i32 7, metadata !441}
!441 = metadata !{metadata !442, metadata !445}
!442 = metadata !{metadata !"shuffle_conv_3x3.V", metadata !443, metadata !"int8", i32 0, i32 7}
!443 = metadata !{metadata !444, metadata !137, metadata !144, metadata !144}
!444 = metadata !{i32 0, i32 1079, i32 1}
!445 = metadata !{metadata !"shuffle_conv_1x1.V", metadata !446, metadata !"int8", i32 0, i32 7}
!446 = metadata !{metadata !447, metadata !164, metadata !137, metadata !137}
!447 = metadata !{i32 0, i32 5495, i32 1}
!448 = metadata !{metadata !449}
!449 = metadata !{i32 0, i32 7, metadata !450}
!450 = metadata !{metadata !451, metadata !453, metadata !455}
!451 = metadata !{metadata !"conv1_weight.V", metadata !452, metadata !"int8", i32 0, i32 7}
!452 = metadata !{metadata !164, metadata !144, metadata !144, metadata !144}
!453 = metadata !{metadata !"conv_last_weight.V", metadata !454, metadata !"int8", i32 0, i32 7}
!454 = metadata !{metadata !296, metadata !177, metadata !137, metadata !137}
!455 = metadata !{metadata !"fc_weight.V", metadata !456, metadata !"int8", i32 0, i32 7}
!456 = metadata !{metadata !202, metadata !296}
!457 = metadata !{metadata !458}
!458 = metadata !{i32 0, i32 7, metadata !459}
!459 = metadata !{metadata !460, metadata !463}
!460 = metadata !{metadata !"image.V", metadata !461, metadata !"int8", i32 0, i32 7}
!461 = metadata !{metadata !137, metadata !144, metadata !462, metadata !462}
!462 = metadata !{i32 0, i32 31, i32 1}
!463 = metadata !{metadata !"fc_output.V", metadata !464, metadata !"int8", i32 0, i32 7}
!464 = metadata !{metadata !465}
!465 = metadata !{i32 0, i32 999, i32 1}
!466 = metadata !{metadata !467}
!467 = metadata !{i32 0, i32 31, metadata !468}
!468 = metadata !{metadata !469}
!469 = metadata !{metadata !"return", metadata !470, metadata !"int", i32 0, i32 31}
!470 = metadata !{metadata !471}
!471 = metadata !{i32 0, i32 1, i32 0}

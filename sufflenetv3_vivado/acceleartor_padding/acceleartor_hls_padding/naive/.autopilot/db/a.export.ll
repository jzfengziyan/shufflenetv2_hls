; ModuleID = '/home/ziyan/ziyan/ece527/shufflenetv2_master/sufflenetv3_vivado/acceleartor_padding/acceleartor_hls_padding/naive/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@weights_96_96_1x1 = global [9216 x float] zeroinitializer
@weights_96_1_3x3 = global [864 x float] zeroinitializer
@weights_48_48_1x1 = global [2304 x float] zeroinitializer
@weights_48_1_3x3 = global [432 x float] zeroinitializer
@weights_24_24_1x1 = global [576 x float] zeroinitializer
@weights_24_1_3x3 = global [216 x float] zeroinitializer
@shuffleunit2_2_outpu_1 = global [3072 x float] zeroinitializer
@shuffleunit2_2_outpu = global [6912 x float] zeroinitializer
@shuffleunit2_1_outpu = global [6912 x float] zeroinitializer
@shuffleunit2_0_outpu = global [6912 x float] zeroinitializer
@shuffleunit1_7_outpu = global [9600 x float] zeroinitializer
@shuffleunit1_6_outpu = global [9600 x float] zeroinitializer
@shuffleunit1_5_outpu = global [9600 x float] zeroinitializer
@shuffleunit1_4_outpu = global [9600 x float] zeroinitializer
@shuffleunit1_3_outpu = global [9600 x float] zeroinitializer
@shuffleunit1_2_outpu = global [9600 x float] zeroinitializer
@shuffleunit1_1_outpu = global [9600 x float] zeroinitializer
@shuffleunit1_0_outpu = global [9600 x float] zeroinitializer
@shuffleunit0_2_outpu = global [15552 x float] zeroinitializer
@shuffleunit0_1_outpu = global [15552 x float] zeroinitializer
@shuffleunit0_0_outpu = global [15552 x float] zeroinitializer
@llvm_global_ctors_1 = appending global [2 x void ()*] [void ()* @_GLOBAL__I_a, void ()* @_GLOBAL__I_a55]
@llvm_global_ctors_0 = appending global [2 x i32] [i32 65535, i32 65535]
@image_p = global [3468 x float] zeroinitializer
@fc_bias = global [10 x float] zeroinitializer, align 16
@downsampleunit2_outp = global [6912 x float] zeroinitializer
@downsampleunit1_outp = global [9600 x float] zeroinitializer
@downsampleunit0_outp = global [15552 x float] zeroinitializer
@conv_last_output = global [8192 x float] zeroinitializer
@conv_last_bias = global [512 x float] zeroinitializer, align 16
@conv1_output_p = global [27744 x float] zeroinitializer
@conv1_output = global [24576 x float] zeroinitializer
@conv1_bias = global [24 x float] zeroinitializer, align 16
@buffer1_1_96_4x4_p = global [3456 x float] zeroinitializer
@buffer1_1_48_8x8_p = global [4800 x float] zeroinitializer
@buffer1_1_24_16x16_p = global [7776 x float] zeroinitializer
@buffer0_1_96_4x4_p = global [3456 x float] zeroinitializer
@buffer0_1_48_8x8_p = global [4800 x float] zeroinitializer
@buffer0_1_24_16x16_p = global [7776 x float] zeroinitializer
@bias_96 = global [96 x float] zeroinitializer, align 16
@bias_48 = global [48 x float] zeroinitializer, align 16
@bias_24 = global [24 x float] zeroinitializer, align 16
@avgpool_output = global [512 x float] zeroinitializer, align 16
@ShuffleNetV2_str = internal unnamed_addr constant [13 x i8] c"ShuffleNetV2\00"
@ShuffleConvs_2_Downs = global [9600 x float] zeroinitializer
@ShuffleConvs_1_Downs = global [15552 x float] zeroinitializer
@ShuffleConvs_0_Downs = global [27744 x float] zeroinitializer

define internal fastcc void @subconv_3x3_8_stride([9600 x float]* nocapture %input_r, [864 x float]* nocapture %weight, [96 x float]* nocapture %bias, [3456 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader7
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_1, %.loopexit.loopexit ]
  %exitcond4 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_1 = add i7 %co, 1
  br i1 %exitcond4, label %4, label %.preheader7.preheader

.preheader7.preheader:                            ; preds = %.loopexit
  %tmp = zext i7 %co to i64
  %tmp_cast = zext i7 %co to i10
  %tmp_1 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0)
  %p_shl3_cast = zext i10 %tmp_1 to i11
  %tmp_3 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co, i1 false)
  %p_shl4_cast = zext i8 %tmp_3 to i11
  %tmp_4 = add i11 %p_shl4_cast, %p_shl3_cast
  %tmp_6 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %co, i2 0)
  %p_shl2_cast = zext i9 %tmp_6 to i10
  %tmp_8 = sub i10 %p_shl2_cast, %tmp_cast
  %tmp_15_cast = sext i10 %tmp_8 to i11
  %tmp_9 = sub i11 %p_shl3_cast, %p_shl4_cast
  %tmp_18_cast = sext i11 %tmp_9 to i12
  %bias_addr = getelementptr [96 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader7

.preheader7:                                      ; preds = %3, %.preheader7.preheader
  %h = phi i3 [ %h_1, %3 ], [ 1, %.preheader7.preheader ]
  %exitcond3 = icmp eq i3 %h, -3
  %empty_12 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %exitcond3, label %.loopexit.loopexit, label %.preheader6.preheader

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_2 = call i4 @_ssdm_op_BitConcatenate.i4.i3.i1(i3 %h, i1 false)
  %tmp_3_cast = zext i3 %h to i12
  %tmp_11 = add i12 %tmp_18_cast, %tmp_3_cast
  %tmp_12 = trunc i12 %tmp_11 to i10
  %p_shl5_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_12, i3 0)
  %p_shl6_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_11, i1 false)
  %tmp_13 = sub i13 %p_shl5_cast, %p_shl6_cast
  br label %.preheader6

.preheader6:                                      ; preds = %2, %.preheader6.preheader
  %w = phi i3 [ %w_1, %2 ], [ 1, %.preheader6.preheader ]
  %exitcond2 = icmp eq i3 %w, -3
  %empty_13 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %exitcond2, label %3, label %.preheader5.preheader

.preheader5.preheader:                            ; preds = %.preheader6
  %tmp_5 = call i4 @_ssdm_op_BitConcatenate.i4.i3.i1(i3 %w, i1 false)
  br label %.preheader5

.preheader5.loopexit:                             ; preds = %.preheader
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %sum = phi float [ 0.000000e+00, %.preheader5.preheader ], [ %sum_1, %.preheader5.loopexit ]
  %m = phi i2 [ 0, %.preheader5.preheader ], [ %m_1, %.preheader5.loopexit ]
  %exitcond1 = icmp eq i2 %m, -1
  %empty_14 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_1 = add i2 %m, 1
  br i1 %exitcond1, label %2, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader5
  %tmp_8_cast = zext i2 %m to i11
  %tmp_15 = add i11 %tmp_15_cast, %tmp_8_cast
  %tmp_16 = shl i11 %tmp_15, 2
  %tmp_17 = sub i11 %tmp_16, %tmp_15
  %tmp1 = xor i2 %m, -2
  %tmp1_cast = sext i2 %tmp1 to i4
  %tmp_s = add i4 %tmp_2, %tmp1_cast
  %tmp_1_cast = zext i4 %tmp_s to i11
  %tmp_18 = add i11 %tmp_4, %tmp_1_cast
  %tmp_19 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_18, i3 0)
  %p_shl7_cast = zext i14 %tmp_19 to i15
  %tmp_20 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_18, i1 false)
  %p_shl8_cast = zext i12 %tmp_20 to i15
  %tmp_21 = add i15 %p_shl8_cast, %p_shl7_cast
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum_1 = phi float [ %sum_2, %1 ], [ %sum, %.preheader.preheader ]
  %n = phi i2 [ %n_1, %1 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i2 %n, -1
  %empty_15 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_1 = add i2 %n, 1
  br i1 %exitcond, label %.preheader5.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_4_cast = zext i2 %n to i11
  %tmp_22 = add i11 %tmp_17, %tmp_4_cast
  %tmp_31_cast = zext i11 %tmp_22 to i64
  %weight_addr = getelementptr [864 x float]* %weight, i64 0, i64 %tmp_31_cast
  %weight_load = load float* %weight_addr, align 4
  %tmp2 = xor i2 %n, -2
  %tmp2_cast = sext i2 %tmp2 to i4
  %tmp_7 = add i4 %tmp_5, %tmp2_cast
  %tmp_9_cast = zext i4 %tmp_7 to i15
  %tmp_23 = add i15 %tmp_21, %tmp_9_cast
  %tmp_32_cast = zext i15 %tmp_23 to i64
  %input_addr = getelementptr [9600 x float]* %input_r, i64 0, i64 %tmp_32_cast
  %input_load = load float* %input_addr, align 4
  %tmp_10 = fmul float %weight_load, %input_load
  %sum_2 = fadd float %sum_1, %tmp_10
  br label %.preheader

; <label>:2                                       ; preds = %.preheader5
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %tmp_6_cast = zext i3 %w to i13
  %tmp_14 = add i13 %tmp_13, %tmp_6_cast
  %tmp_23_cast = zext i13 %tmp_14 to i64
  %output_addr = getelementptr [3456 x float]* %output_r, i64 0, i64 %tmp_23_cast
  store float %result, float* %output_addr, align 4
  %w_1 = add i3 %w, 1
  br label %.preheader6

; <label>:3                                       ; preds = %.preheader6
  %h_1 = add i3 %h, 1
  br label %.preheader7

; <label>:4                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_3x3_8_no_rel([4800 x float]* nocapture %input_r, [432 x float]* nocapture %weight, [48 x float]* nocapture %bias, [4800 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader7
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_2, %.loopexit.loopexit ]
  %exitcond4 = icmp eq i6 %co, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_2 = add i6 %co, 1
  br i1 %exitcond4, label %4, label %.preheader7.preheader

.preheader7.preheader:                            ; preds = %.loopexit
  %tmp = zext i6 %co to i64
  %tmp_cast = zext i6 %co to i9
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co, i3 0)
  %p_shl1_cast = zext i9 %tmp_s to i10
  %tmp_24 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co, i1 false)
  %p_shl2_cast = zext i7 %tmp_24 to i10
  %tmp_25 = add i10 %p_shl2_cast, %p_shl1_cast
  %tmp_26 = call i8 @_ssdm_op_BitConcatenate.i8.i6.i2(i6 %co, i2 0)
  %p_shl_cast = zext i8 %tmp_26 to i9
  %tmp_27 = sub i9 %p_shl_cast, %tmp_cast
  %tmp_37_cast = sext i9 %tmp_27 to i10
  %bias_addr = getelementptr [48 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader7

.preheader7:                                      ; preds = %3, %.preheader7.preheader
  %h = phi i4 [ %h_2, %3 ], [ 1, %.preheader7.preheader ]
  %exitcond3 = icmp eq i4 %h, -7
  %empty_16 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond3, label %.loopexit.loopexit, label %.preheader6.preheader

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_cast_17 = zext i4 %h to i10
  %tmp_28 = add i10 %tmp_cast_17, %tmp_25
  %tmp_21 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_28, i3 0)
  %p_shl3_cast = zext i13 %tmp_21 to i14
  %tmp_22 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_28, i1 false)
  %p_shl4_cast = zext i11 %tmp_22 to i14
  %tmp_29 = add i14 %p_shl3_cast, %p_shl4_cast
  br label %.preheader6

.preheader6:                                      ; preds = %2, %.preheader6.preheader
  %w = phi i4 [ %w_2, %2 ], [ 1, %.preheader6.preheader ]
  %exitcond2 = icmp eq i4 %w, -7
  %empty_18 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond2, label %3, label %.preheader5.preheader

.preheader5.preheader:                            ; preds = %.preheader6
  br label %.preheader5

.preheader5.loopexit:                             ; preds = %.preheader
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.preheader, %.preheader5.loopexit
  %sum = phi float [ %sum_1, %.preheader5.loopexit ], [ 0.000000e+00, %.preheader5.preheader ]
  %m = phi i2 [ %m_2, %.preheader5.loopexit ], [ 0, %.preheader5.preheader ]
  %exitcond1 = icmp eq i2 %m, -1
  %empty_19 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_2 = add i2 %m, 1
  br i1 %exitcond1, label %2, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader5
  %tmp_12_cast = zext i2 %m to i10
  %tmp_31 = add i10 %tmp_37_cast, %tmp_12_cast
  %tmp_23 = shl i10 %tmp_31, 2
  %tmp_32 = sub i10 %tmp_23, %tmp_31
  %tmp1 = add i2 -1, %m
  %tmp1_cast = sext i2 %tmp1 to i4
  %tmp_13 = add i4 %h, %tmp1_cast
  %tmp_14_cast = zext i4 %tmp_13 to i10
  %tmp_33 = add i10 %tmp_25, %tmp_14_cast
  %tmp_34 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_33, i3 0)
  %p_shl5_cast = zext i13 %tmp_34 to i14
  %tmp_35 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_33, i1 false)
  %p_shl6_cast = zext i11 %tmp_35 to i14
  %tmp_36 = add i14 %p_shl6_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum_1 = phi float [ %sum_3, %1 ], [ %sum, %.preheader.preheader ]
  %n = phi i2 [ %n_2, %1 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i2 %n, -1
  %empty_20 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_2 = add i2 %n, 1
  br i1 %exitcond, label %.preheader5.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_15_cast = zext i2 %n to i10
  %tmp_37 = add i10 %tmp_32, %tmp_15_cast
  %tmp_50_cast = zext i10 %tmp_37 to i64
  %weight_addr = getelementptr [432 x float]* %weight, i64 0, i64 %tmp_50_cast
  %weight_load = load float* %weight_addr, align 4
  %tmp2 = add i2 %n, -1
  %tmp2_cast = sext i2 %tmp2 to i4
  %tmp_16 = add i4 %w, %tmp2_cast
  %tmp_17_cast = zext i4 %tmp_16 to i14
  %tmp_38 = add i14 %tmp_36, %tmp_17_cast
  %tmp_51_cast = zext i14 %tmp_38 to i64
  %input_addr = getelementptr [4800 x float]* %input_r, i64 0, i64 %tmp_51_cast
  %input_load = load float* %input_addr, align 4
  %tmp_18 = fmul float %weight_load, %input_load
  %sum_3 = fadd float %sum_1, %tmp_18
  br label %.preheader

; <label>:2                                       ; preds = %.preheader5
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %tmp_11_cast = zext i4 %w to i14
  %tmp_30 = add i14 %tmp_29, %tmp_11_cast
  %tmp_42_cast = zext i14 %tmp_30 to i64
  %output_addr = getelementptr [4800 x float]* %output_r, i64 0, i64 %tmp_42_cast
  store float %result, float* %output_addr, align 4
  %w_2 = add i4 %w, 1
  br label %.preheader6

; <label>:3                                       ; preds = %.preheader6
  %h_2 = add i4 %h, 1
  br label %.preheader7

; <label>:4                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_3x3_4_no_rel([3456 x float]* nocapture %input_r, [864 x float]* nocapture %weight, [96 x float]* nocapture %bias, [3456 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader7
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_3, %.loopexit.loopexit ]
  %exitcond4 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_3 = add i7 %co, 1
  br i1 %exitcond4, label %4, label %.preheader7.preheader

.preheader7.preheader:                            ; preds = %.loopexit
  %tmp = zext i7 %co to i64
  %tmp_cast = zext i7 %co to i10
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0)
  %p_shl1_cast = zext i10 %tmp_s to i11
  %tmp_39 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co, i1 false)
  %p_shl2_cast = zext i8 %tmp_39 to i11
  %tmp_40 = sub i11 %p_shl1_cast, %p_shl2_cast
  %tmp_54_cast = sext i11 %tmp_40 to i12
  %tmp_41 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %co, i2 0)
  %p_shl_cast = zext i9 %tmp_41 to i10
  %tmp_42 = sub i10 %p_shl_cast, %tmp_cast
  %tmp_56_cast = sext i10 %tmp_42 to i11
  %bias_addr = getelementptr [96 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader7

.preheader7:                                      ; preds = %3, %.preheader7.preheader
  %h = phi i3 [ %h_3, %3 ], [ 1, %.preheader7.preheader ]
  %exitcond3 = icmp eq i3 %h, -3
  %empty_21 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %exitcond3, label %.loopexit.loopexit, label %.preheader6.preheader

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_cast_22 = zext i3 %h to i12
  %tmp_43 = add i12 %tmp_cast_22, %tmp_54_cast
  %tmp_36 = trunc i12 %tmp_43 to i10
  %p_shl3_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_36, i3 0)
  %p_shl4_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_43, i1 false)
  %tmp_44 = sub i13 %p_shl3_cast, %p_shl4_cast
  br label %.preheader6

.preheader6:                                      ; preds = %2, %.preheader6.preheader
  %w = phi i3 [ %w_3, %2 ], [ 1, %.preheader6.preheader ]
  %exitcond2 = icmp eq i3 %w, -3
  %empty_23 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %exitcond2, label %3, label %.preheader5.preheader

.preheader5.preheader:                            ; preds = %.preheader6
  br label %.preheader5

.preheader5.loopexit:                             ; preds = %.preheader
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.preheader, %.preheader5.loopexit
  %sum = phi float [ %sum_1, %.preheader5.loopexit ], [ 0.000000e+00, %.preheader5.preheader ]
  %m = phi i2 [ %m_3, %.preheader5.loopexit ], [ 0, %.preheader5.preheader ]
  %exitcond1 = icmp eq i2 %m, -1
  %empty_24 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_3 = add i2 %m, 1
  br i1 %exitcond1, label %2, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader5
  %tmp_20_cast = zext i2 %m to i11
  %tmp_46 = add i11 %tmp_20_cast, %tmp_56_cast
  %tmp_37 = shl i11 %tmp_46, 2
  %tmp_47 = sub i11 %tmp_37, %tmp_46
  %tmp1 = add i2 -1, %m
  %tmp1_cast = sext i2 %tmp1 to i3
  %tmp_21 = add i3 %tmp1_cast, %h
  %tmp_22_cast = zext i3 %tmp_21 to i12
  %tmp_48 = add i12 %tmp_22_cast, %tmp_54_cast
  %tmp_38 = trunc i12 %tmp_48 to i10
  %p_shl5_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_38, i3 0)
  %p_shl6_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_48, i1 false)
  %tmp_49 = sub i13 %p_shl5_cast, %p_shl6_cast
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum_1 = phi float [ %sum_4, %1 ], [ %sum, %.preheader.preheader ]
  %n = phi i2 [ %n_3, %1 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i2 %n, -1
  %empty_25 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_3 = add i2 %n, 1
  br i1 %exitcond, label %.preheader5.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_23_cast = zext i2 %n to i11
  %tmp_50 = add i11 %tmp_47, %tmp_23_cast
  %tmp_69_cast = zext i11 %tmp_50 to i64
  %weight_addr = getelementptr [864 x float]* %weight, i64 0, i64 %tmp_69_cast
  %weight_load = load float* %weight_addr, align 4
  %tmp2 = add i2 %n, -1
  %tmp2_cast = sext i2 %tmp2 to i3
  %tmp_24 = add i3 %w, %tmp2_cast
  %tmp_25_cast = zext i3 %tmp_24 to i13
  %tmp_51 = add i13 %tmp_49, %tmp_25_cast
  %tmp_70_cast = zext i13 %tmp_51 to i64
  %input_addr = getelementptr [3456 x float]* %input_r, i64 0, i64 %tmp_70_cast
  %input_load = load float* %input_addr, align 4
  %tmp_26 = fmul float %weight_load, %input_load
  %sum_4 = fadd float %sum_1, %tmp_26
  br label %.preheader

; <label>:2                                       ; preds = %.preheader5
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %tmp_19_cast = zext i3 %w to i13
  %tmp_45 = add i13 %tmp_44, %tmp_19_cast
  %tmp_61_cast = zext i13 %tmp_45 to i64
  %output_addr = getelementptr [3456 x float]* %output_r, i64 0, i64 %tmp_61_cast
  store float %result, float* %output_addr, align 4
  %w_3 = add i3 %w, 1
  br label %.preheader6

; <label>:3                                       ; preds = %.preheader6
  %h_3 = add i3 %h, 1
  br label %.preheader7

; <label>:4                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_3x3_32_strid([27744 x float]* nocapture %input_r, [216 x float]* nocapture %weight, [24 x float]* nocapture %bias, [7776 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader7
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i5 [ 0, %0 ], [ %co_4, %.loopexit.loopexit ]
  %exitcond4 = icmp eq i5 %co, -8
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_4 = add i5 %co, 1
  br i1 %exitcond4, label %4, label %.preheader7.preheader

.preheader7.preheader:                            ; preds = %.loopexit
  %tmp = zext i5 %co to i64
  %tmp_cast = zext i5 %co to i8
  %tmp_52 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co, i5 0)
  %p_shl3_cast = zext i10 %tmp_52 to i11
  %tmp_53 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co, i1 false)
  %p_shl4_cast1 = zext i6 %tmp_53 to i10
  %p_shl4_cast = zext i6 %tmp_53 to i11
  %tmp_54 = add i11 %p_shl4_cast, %p_shl3_cast
  %tmp_55 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co, i2 0)
  %p_shl2_cast = zext i7 %tmp_55 to i8
  %tmp_56 = sub i8 %p_shl2_cast, %tmp_cast
  %tmp_75_cast = sext i8 %tmp_56 to i9
  %tmp_57 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co, i4 0)
  %p_shl_cast = zext i9 %tmp_57 to i10
  %tmp_58 = add i10 %p_shl4_cast1, %p_shl_cast
  %bias_addr = getelementptr [24 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader7

.preheader7:                                      ; preds = %3, %.preheader7.preheader
  %h = phi i5 [ %h_4, %3 ], [ 1, %.preheader7.preheader ]
  %exitcond3 = icmp eq i5 %h, -15
  %empty_26 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond3, label %.loopexit.loopexit, label %.preheader6.preheader

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_s = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %h, i1 false)
  %tmp_27_cast = zext i5 %h to i10
  %tmp_59 = add i10 %tmp_58, %tmp_27_cast
  %p_shl5_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_59, i4 0)
  %tmp_39 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_59, i1 false)
  %p_shl6_cast = zext i11 %tmp_39 to i14
  %tmp_60 = add i14 %p_shl6_cast, %p_shl5_cast
  br label %.preheader6

.preheader6:                                      ; preds = %2, %.preheader6.preheader
  %w = phi i5 [ %w_4, %2 ], [ 1, %.preheader6.preheader ]
  %exitcond2 = icmp eq i5 %w, -15
  %empty_27 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond2, label %3, label %.preheader5.preheader

.preheader5.preheader:                            ; preds = %.preheader6
  %tmp_28 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %w, i1 false)
  br label %.preheader5

.preheader5.loopexit:                             ; preds = %.preheader
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %sum = phi float [ 0.000000e+00, %.preheader5.preheader ], [ %sum_1, %.preheader5.loopexit ]
  %m = phi i2 [ 0, %.preheader5.preheader ], [ %m_4, %.preheader5.loopexit ]
  %exitcond1 = icmp eq i2 %m, -1
  %empty_28 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_4 = add i2 %m, 1
  br i1 %exitcond1, label %2, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader5
  %tmp_30_cast = zext i2 %m to i9
  %tmp_62 = add i9 %tmp_75_cast, %tmp_30_cast
  %tmp_40 = shl i9 %tmp_62, 2
  %tmp_63 = sub i9 %tmp_40, %tmp_62
  %tmp1 = xor i2 %m, -2
  %tmp1_cast = sext i2 %tmp1 to i6
  %tmp_31 = add i6 %tmp_s, %tmp1_cast
  %tmp_32_cast = zext i6 %tmp_31 to i11
  %tmp_64 = add i11 %tmp_54, %tmp_32_cast
  %p_shl7_cast = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_64, i5 0)
  %tmp_41 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_64, i1 false)
  %p_shl8_cast = zext i12 %tmp_41 to i16
  %tmp_65 = add i16 %p_shl8_cast, %p_shl7_cast
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum_1 = phi float [ %sum_5, %1 ], [ %sum, %.preheader.preheader ]
  %n = phi i2 [ %n_4, %1 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i2 %n, -1
  %empty_29 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_4 = add i2 %n, 1
  br i1 %exitcond, label %.preheader5.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_33_cast = zext i2 %n to i9
  %tmp_66 = add i9 %tmp_63, %tmp_33_cast
  %tmp_91_cast = zext i9 %tmp_66 to i64
  %weight_addr = getelementptr [216 x float]* %weight, i64 0, i64 %tmp_91_cast
  %weight_load = load float* %weight_addr, align 4
  %tmp2 = xor i2 %n, -2
  %tmp2_cast = sext i2 %tmp2 to i6
  %tmp_34 = add i6 %tmp_28, %tmp2_cast
  %tmp_35_cast = zext i6 %tmp_34 to i16
  %tmp_67 = add i16 %tmp_65, %tmp_35_cast
  %tmp_92_cast = zext i16 %tmp_67 to i64
  %input_addr = getelementptr [27744 x float]* %input_r, i64 0, i64 %tmp_92_cast
  %input_load = load float* %input_addr, align 4
  %tmp_36 = fmul float %weight_load, %input_load
  %sum_5 = fadd float %sum_1, %tmp_36
  br label %.preheader

; <label>:2                                       ; preds = %.preheader5
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %tmp_29_cast = zext i5 %w to i14
  %tmp_61 = add i14 %tmp_60, %tmp_29_cast
  %tmp_83_cast = zext i14 %tmp_61 to i64
  %output_addr = getelementptr [7776 x float]* %output_r, i64 0, i64 %tmp_83_cast
  store float %result, float* %output_addr, align 4
  %w_4 = add i5 %w, 1
  br label %.preheader6

; <label>:3                                       ; preds = %.preheader6
  %h_4 = add i5 %h, 1
  br label %.preheader7

; <label>:4                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_3x3_16_strid([15552 x float]* nocapture %input_r, [432 x float]* nocapture %weight, [48 x float]* nocapture %bias, [4800 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader7
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_5, %.loopexit.loopexit ]
  %exitcond4 = icmp eq i6 %co, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_5 = add i6 %co, 1
  br i1 %exitcond4, label %4, label %.preheader7.preheader

.preheader7.preheader:                            ; preds = %.loopexit
  %tmp = zext i6 %co to i64
  %tmp_cast = zext i6 %co to i9
  %tmp_68 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co, i4 0)
  %p_shl3_cast = zext i10 %tmp_68 to i11
  %tmp_69 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co, i1 false)
  %p_shl4_cast2 = zext i7 %tmp_69 to i10
  %p_shl4_cast = zext i7 %tmp_69 to i11
  %tmp_70 = add i11 %p_shl4_cast, %p_shl3_cast
  %tmp_71 = call i8 @_ssdm_op_BitConcatenate.i8.i6.i2(i6 %co, i2 0)
  %p_shl2_cast = zext i8 %tmp_71 to i9
  %tmp_72 = sub i9 %p_shl2_cast, %tmp_cast
  %tmp_97_cast = sext i9 %tmp_72 to i10
  %tmp_73 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co, i3 0)
  %p_shl_cast = zext i9 %tmp_73 to i10
  %tmp_74 = add i10 %p_shl4_cast2, %p_shl_cast
  %bias_addr = getelementptr [48 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader7

.preheader7:                                      ; preds = %3, %.preheader7.preheader
  %h = phi i4 [ %h_5, %3 ], [ 1, %.preheader7.preheader ]
  %exitcond3 = icmp eq i4 %h, -7
  %empty_30 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond3, label %.loopexit.loopexit, label %.preheader6.preheader

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_s = call i5 @_ssdm_op_BitConcatenate.i5.i4.i1(i4 %h, i1 false)
  %tmp_37_cast = zext i4 %h to i10
  %tmp_75 = add i10 %tmp_74, %tmp_37_cast
  %tmp_42 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_75, i3 0)
  %p_shl5_cast = zext i13 %tmp_42 to i14
  %tmp_43 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_75, i1 false)
  %p_shl6_cast = zext i11 %tmp_43 to i14
  %tmp_76 = add i14 %p_shl6_cast, %p_shl5_cast
  br label %.preheader6

.preheader6:                                      ; preds = %2, %.preheader6.preheader
  %w = phi i4 [ %w_5, %2 ], [ 1, %.preheader6.preheader ]
  %exitcond2 = icmp eq i4 %w, -7
  %empty_31 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond2, label %3, label %.preheader5.preheader

.preheader5.preheader:                            ; preds = %.preheader6
  %tmp_38 = call i5 @_ssdm_op_BitConcatenate.i5.i4.i1(i4 %w, i1 false)
  br label %.preheader5

.preheader5.loopexit:                             ; preds = %.preheader
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %sum = phi float [ 0.000000e+00, %.preheader5.preheader ], [ %sum_1, %.preheader5.loopexit ]
  %m = phi i2 [ 0, %.preheader5.preheader ], [ %m_5, %.preheader5.loopexit ]
  %exitcond1 = icmp eq i2 %m, -1
  %empty_32 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_5 = add i2 %m, 1
  br i1 %exitcond1, label %2, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader5
  %tmp_40_cast = zext i2 %m to i10
  %tmp_78 = add i10 %tmp_97_cast, %tmp_40_cast
  %tmp_45 = shl i10 %tmp_78, 2
  %tmp_79 = sub i10 %tmp_45, %tmp_78
  %tmp1 = xor i2 %m, -2
  %tmp1_cast = sext i2 %tmp1 to i5
  %tmp_41 = add i5 %tmp_s, %tmp1_cast
  %tmp_42_cast = zext i5 %tmp_41 to i11
  %tmp_80 = add i11 %tmp_70, %tmp_42_cast
  %p_shl7_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_80, i4 0)
  %tmp_47 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_80, i1 false)
  %p_shl8_cast = zext i12 %tmp_47 to i15
  %tmp_81 = add i15 %p_shl8_cast, %p_shl7_cast
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum_1 = phi float [ %sum_6, %1 ], [ %sum, %.preheader.preheader ]
  %n = phi i2 [ %n_5, %1 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i2 %n, -1
  %empty_33 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_5 = add i2 %n, 1
  br i1 %exitcond, label %.preheader5.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_43_cast = zext i2 %n to i10
  %tmp_82 = add i10 %tmp_79, %tmp_43_cast
  %tmp_113_cast = zext i10 %tmp_82 to i64
  %weight_addr = getelementptr [432 x float]* %weight, i64 0, i64 %tmp_113_cast
  %weight_load = load float* %weight_addr, align 4
  %tmp2 = xor i2 %n, -2
  %tmp2_cast = sext i2 %tmp2 to i5
  %tmp_44 = add i5 %tmp_38, %tmp2_cast
  %tmp_45_cast = zext i5 %tmp_44 to i15
  %tmp_83 = add i15 %tmp_81, %tmp_45_cast
  %tmp_114_cast = zext i15 %tmp_83 to i64
  %input_addr = getelementptr [15552 x float]* %input_r, i64 0, i64 %tmp_114_cast
  %input_load = load float* %input_addr, align 4
  %tmp_46 = fmul float %weight_load, %input_load
  %sum_6 = fadd float %sum_1, %tmp_46
  br label %.preheader

; <label>:2                                       ; preds = %.preheader5
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %tmp_39_cast = zext i4 %w to i14
  %tmp_77 = add i14 %tmp_76, %tmp_39_cast
  %tmp_105_cast = zext i14 %tmp_77 to i64
  %output_addr = getelementptr [4800 x float]* %output_r, i64 0, i64 %tmp_105_cast
  store float %result, float* %output_addr, align 4
  %w_5 = add i4 %w, 1
  br label %.preheader6

; <label>:3                                       ; preds = %.preheader6
  %h_5 = add i4 %h, 1
  br label %.preheader7

; <label>:4                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_3x3_16_no_re([7776 x float]* nocapture %input_r, [216 x float]* nocapture %weight, [24 x float]* nocapture %bias, [7776 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader7
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i5 [ 0, %0 ], [ %co_6, %.loopexit.loopexit ]
  %exitcond4 = icmp eq i5 %co, -8
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_6 = add i5 %co, 1
  br i1 %exitcond4, label %4, label %.preheader7.preheader

.preheader7.preheader:                            ; preds = %.loopexit
  %tmp = zext i5 %co to i64
  %tmp_cast = zext i5 %co to i8
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co, i4 0)
  %p_shl1_cast = zext i9 %tmp_s to i10
  %tmp_84 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co, i1 false)
  %p_shl2_cast = zext i6 %tmp_84 to i10
  %tmp_85 = add i10 %p_shl2_cast, %p_shl1_cast
  %tmp_86 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co, i2 0)
  %p_shl_cast = zext i7 %tmp_86 to i8
  %tmp_87 = sub i8 %p_shl_cast, %tmp_cast
  %tmp_119_cast = sext i8 %tmp_87 to i9
  %bias_addr = getelementptr [24 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader7

.preheader7:                                      ; preds = %3, %.preheader7.preheader
  %h = phi i5 [ %h_6, %3 ], [ 1, %.preheader7.preheader ]
  %exitcond3 = icmp eq i5 %h, -15
  %empty_34 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond3, label %.loopexit.loopexit, label %.preheader6.preheader

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_cast_35 = zext i5 %h to i10
  %tmp_88 = add i10 %tmp_cast_35, %tmp_85
  %p_shl3_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_88, i4 0)
  %tmp_48 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_88, i1 false)
  %p_shl4_cast = zext i11 %tmp_48 to i14
  %tmp_89 = add i14 %p_shl3_cast, %p_shl4_cast
  br label %.preheader6

.preheader6:                                      ; preds = %2, %.preheader6.preheader
  %w = phi i5 [ %w_6, %2 ], [ 1, %.preheader6.preheader ]
  %exitcond2 = icmp eq i5 %w, -15
  %empty_36 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond2, label %3, label %.preheader5.preheader

.preheader5.preheader:                            ; preds = %.preheader6
  br label %.preheader5

.preheader5.loopexit:                             ; preds = %.preheader
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.preheader, %.preheader5.loopexit
  %sum = phi float [ %sum_1, %.preheader5.loopexit ], [ 0.000000e+00, %.preheader5.preheader ]
  %m = phi i2 [ %m_6, %.preheader5.loopexit ], [ 0, %.preheader5.preheader ]
  %exitcond1 = icmp eq i2 %m, -1
  %empty_37 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_6 = add i2 %m, 1
  br i1 %exitcond1, label %2, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader5
  %tmp_48_cast = zext i2 %m to i9
  %tmp_91 = add i9 %tmp_119_cast, %tmp_48_cast
  %tmp_50 = shl i9 %tmp_91, 2
  %tmp_92 = sub i9 %tmp_50, %tmp_91
  %tmp1 = add i2 -1, %m
  %tmp1_cast = sext i2 %tmp1 to i5
  %tmp_49 = add i5 %h, %tmp1_cast
  %tmp_50_cast = zext i5 %tmp_49 to i10
  %tmp_93 = add i10 %tmp_85, %tmp_50_cast
  %p_shl5_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_93, i4 0)
  %tmp_51 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_93, i1 false)
  %p_shl6_cast = zext i11 %tmp_51 to i14
  %tmp_94 = add i14 %p_shl6_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum_1 = phi float [ %sum_7, %1 ], [ %sum, %.preheader.preheader ]
  %n = phi i2 [ %n_6, %1 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i2 %n, -1
  %empty_38 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_6 = add i2 %n, 1
  br i1 %exitcond, label %.preheader5.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_51_cast = zext i2 %n to i9
  %tmp_95 = add i9 %tmp_92, %tmp_51_cast
  %tmp_132_cast = zext i9 %tmp_95 to i64
  %weight_addr = getelementptr [216 x float]* %weight, i64 0, i64 %tmp_132_cast
  %weight_load = load float* %weight_addr, align 4
  %tmp2 = add i2 %n, -1
  %tmp2_cast = sext i2 %tmp2 to i5
  %tmp_52 = add i5 %w, %tmp2_cast
  %tmp_53_cast = zext i5 %tmp_52 to i14
  %tmp_96 = add i14 %tmp_94, %tmp_53_cast
  %tmp_133_cast = zext i14 %tmp_96 to i64
  %input_addr = getelementptr [7776 x float]* %input_r, i64 0, i64 %tmp_133_cast
  %input_load = load float* %input_addr, align 4
  %tmp_54 = fmul float %weight_load, %input_load
  %sum_7 = fadd float %sum_1, %tmp_54
  br label %.preheader

; <label>:2                                       ; preds = %.preheader5
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %tmp_47_cast = zext i5 %w to i14
  %tmp_90 = add i14 %tmp_89, %tmp_47_cast
  %tmp_124_cast = zext i14 %tmp_90 to i64
  %output_addr = getelementptr [7776 x float]* %output_r, i64 0, i64 %tmp_124_cast
  store float %result, float* %output_addr, align 4
  %w_6 = add i5 %w, 1
  br label %.preheader6

; <label>:3                                       ; preds = %.preheader6
  %h_6 = add i5 %h, 1
  br label %.preheader7

; <label>:4                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_1x1_8p_p([9216 x float]* nocapture %weight, [96 x float]* nocapture %bias) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader5
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_7, %.loopexit.loopexit ]
  %exitcond3 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_7 = add i7 %co, 1
  br i1 %exitcond3, label %4, label %.preheader5.preheader

.preheader5.preheader:                            ; preds = %.loopexit
  %tmp = zext i7 %co to i64
  %tmp_s = call i14 @_ssdm_op_BitConcatenate.i14.i7.i7(i7 %co, i7 0)
  %p_shl2_cast = zext i14 %tmp_s to i15
  %tmp_97 = call i12 @_ssdm_op_BitConcatenate.i12.i7.i5(i7 %co, i5 0)
  %p_shl3_cast = zext i12 %tmp_97 to i15
  %tmp_98 = sub i15 %p_shl2_cast, %p_shl3_cast
  %tmp_99 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0)
  %p_shl_cast = zext i10 %tmp_99 to i11
  %tmp_100 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co, i1 false)
  %p_shl1_cast = zext i8 %tmp_100 to i11
  %tmp_101 = add i11 %p_shl1_cast, %p_shl_cast
  %bias_addr = getelementptr [96 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader5

.preheader5:                                      ; preds = %3, %.preheader5.preheader
  %h = phi i4 [ %h_7, %3 ], [ 1, %.preheader5.preheader ]
  %exitcond2 = icmp eq i4 %h, -7
  %empty_39 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader4.preheader

.preheader4.preheader:                            ; preds = %.preheader5
  %tmp_cast = zext i4 %h to i11
  %tmp_102 = add i11 %tmp_cast, %tmp_101
  %tmp_52 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_102, i3 0)
  %p_shl4_cast = zext i14 %tmp_52 to i15
  %tmp_53 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_102, i1 false)
  %p_shl5_cast = zext i12 %tmp_53 to i15
  %tmp_103 = add i15 %p_shl4_cast, %p_shl5_cast
  br label %.preheader4

.preheader4:                                      ; preds = %2, %.preheader4.preheader
  %w = phi i4 [ %w_7, %2 ], [ 1, %.preheader4.preheader ]
  %exitcond1 = icmp eq i4 %w, -7
  %empty_40 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond1, label %3, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_55_cast = zext i4 %w to i15
  %tmp_104 = add i15 %tmp_103, %tmp_55_cast
  %tmp_144_cast = zext i15 %tmp_104 to i64
  %ShuffleConvs_2_Downs = getelementptr [9600 x float]* @ShuffleConvs_2_Downs, i64 0, i64 %tmp_144_cast
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum = phi float [ %sum_8, %1 ], [ 0.000000e+00, %.preheader.preheader ]
  %ci = phi i7 [ %ci_1, %1 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i7 %ci, -32
  %empty_41 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %ci_1 = add i7 %ci, 1
  br i1 %exitcond, label %2, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_56_cast = zext i7 %ci to i15
  %tmp_105 = add i15 %tmp_56_cast, %tmp_98
  %tmp_145_cast = sext i15 %tmp_105 to i64
  %weight_addr = getelementptr [9216 x float]* %weight, i64 0, i64 %tmp_145_cast
  %tmp_106 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %ci, i3 0)
  %p_shl8_cast = zext i10 %tmp_106 to i11
  %tmp_107 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %ci, i1 false)
  %p_shl9_cast = zext i8 %tmp_107 to i11
  %tmp_108 = add i11 %p_shl8_cast, %p_shl9_cast
  %tmp_109 = add i11 %tmp_cast, %tmp_108
  %tmp_55 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_109, i3 0)
  %p_shl6_cast = zext i14 %tmp_55 to i15
  %tmp_56 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_109, i1 false)
  %p_shl7_cast = zext i12 %tmp_56 to i15
  %tmp_110 = add i15 %p_shl6_cast, %p_shl7_cast
  %tmp_111 = add i15 %tmp_55_cast, %tmp_110
  %tmp_153_cast = zext i15 %tmp_111 to i64
  %shuffleunit1_7_outpu = getelementptr [9600 x float]* @shuffleunit1_7_outpu, i64 0, i64 %tmp_153_cast
  %weight_load = load float* %weight_addr, align 4
  %shuffleunit1_7_outpu_1 = load float* %shuffleunit1_7_outpu, align 4
  %tmp_57 = fmul float %weight_load, %shuffleunit1_7_outpu_1
  %sum_8 = fadd float %sum, %tmp_57
  br label %.preheader

; <label>:2                                       ; preds = %.preheader
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %result_to_int = bitcast float %result to i32
  %tmp_1 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %result_to_int, i32 23, i32 30)
  %tmp_54 = trunc i32 %result_to_int to i23
  %notlhs = icmp ne i8 %tmp_1, -1
  %notrhs = icmp eq i23 %tmp_54, 0
  %tmp_3 = or i1 %notrhs, %notlhs
  %tmp_4 = fcmp ogt float %result, 0.000000e+00
  %tmp_5 = and i1 %tmp_3, %tmp_4
  %result_1 = select i1 %tmp_5, float %result, float 0.000000e+00
  store float %result_1, float* %ShuffleConvs_2_Downs, align 4
  %w_7 = add i4 1, %w
  br label %.preheader4

; <label>:3                                       ; preds = %.preheader4
  %h_7 = add i4 %h, 1
  br label %.preheader5

; <label>:4                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_1x1_8_p([4800 x float]* nocapture %input_r, [2304 x float]* nocapture %weight, [48 x float]* nocapture %bias, [4800 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader5
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_8, %.loopexit.loopexit ]
  %exitcond3 = icmp eq i6 %co, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_8 = add i6 %co, 1
  br i1 %exitcond3, label %4, label %.preheader5.preheader

.preheader5.preheader:                            ; preds = %.loopexit
  %tmp = zext i6 %co to i64
  %tmp_s = call i12 @_ssdm_op_BitConcatenate.i12.i6.i6(i6 %co, i6 0)
  %p_shl2_cast = zext i12 %tmp_s to i13
  %tmp_112 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co, i4 0)
  %p_shl3_cast = zext i10 %tmp_112 to i13
  %tmp_113 = sub i13 %p_shl2_cast, %p_shl3_cast
  %tmp_114 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co, i3 0)
  %p_shl_cast = zext i9 %tmp_114 to i10
  %tmp_115 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co, i1 false)
  %p_shl1_cast = zext i7 %tmp_115 to i10
  %tmp_116 = add i10 %p_shl1_cast, %p_shl_cast
  %bias_addr = getelementptr [48 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader5

.preheader5:                                      ; preds = %3, %.preheader5.preheader
  %h = phi i4 [ %h_8, %3 ], [ 1, %.preheader5.preheader ]
  %exitcond2 = icmp eq i4 %h, -7
  %empty_42 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader4.preheader

.preheader4.preheader:                            ; preds = %.preheader5
  %tmp_cast = zext i4 %h to i10
  %tmp_117 = add i10 %tmp_cast, %tmp_116
  %tmp_57 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_117, i3 0)
  %p_shl4_cast = zext i13 %tmp_57 to i14
  %tmp_58 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_117, i1 false)
  %p_shl5_cast = zext i11 %tmp_58 to i14
  %tmp_118 = add i14 %p_shl4_cast, %p_shl5_cast
  br label %.preheader4

.preheader4:                                      ; preds = %2, %.preheader4.preheader
  %w = phi i4 [ %w_8, %2 ], [ 1, %.preheader4.preheader ]
  %exitcond1 = icmp eq i4 %w, -7
  %empty_43 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond1, label %3, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_58_cast = zext i4 %w to i14
  %tmp_119 = add i14 %tmp_118, %tmp_58_cast
  %tmp_164_cast = zext i14 %tmp_119 to i64
  %output_addr = getelementptr [4800 x float]* %output_r, i64 0, i64 %tmp_164_cast
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum = phi float [ %sum_9, %1 ], [ 0.000000e+00, %.preheader.preheader ]
  %ci = phi i6 [ %ci_2, %1 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i6 %ci, -16
  %empty_44 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %ci_2 = add i6 %ci, 1
  br i1 %exitcond, label %2, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_59_cast = zext i6 %ci to i13
  %tmp_120 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %ci, i3 0)
  %p_shl8_cast = zext i9 %tmp_120 to i10
  %tmp_121 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %ci, i1 false)
  %p_shl9_cast = zext i7 %tmp_121 to i10
  %tmp_122 = add i10 %p_shl8_cast, %p_shl9_cast
  %tmp_123 = add i10 %tmp_cast, %tmp_122
  %tmp_61 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_123, i3 0)
  %p_shl6_cast = zext i13 %tmp_61 to i14
  %tmp_62 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_123, i1 false)
  %p_shl7_cast = zext i11 %tmp_62 to i14
  %tmp_124 = add i14 %p_shl6_cast, %p_shl7_cast
  %tmp_125 = add i14 %tmp_58_cast, %tmp_124
  %tmp_172_cast = zext i14 %tmp_125 to i64
  %input_addr = getelementptr [4800 x float]* %input_r, i64 0, i64 %tmp_172_cast
  %tmp_126 = add i13 %tmp_59_cast, %tmp_113
  %tmp_173_cast = sext i13 %tmp_126 to i64
  %weight_addr = getelementptr [2304 x float]* %weight, i64 0, i64 %tmp_173_cast
  %weight_load = load float* %weight_addr, align 4
  %input_load = load float* %input_addr, align 4
  %tmp_60 = fmul float %weight_load, %input_load
  %sum_9 = fadd float %sum, %tmp_60
  br label %.preheader

; <label>:2                                       ; preds = %.preheader
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %result_to_int = bitcast float %result to i32
  %tmp_6 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %result_to_int, i32 23, i32 30)
  %tmp_59 = trunc i32 %result_to_int to i23
  %notlhs = icmp ne i8 %tmp_6, -1
  %notrhs = icmp eq i23 %tmp_59, 0
  %tmp_8 = or i1 %notrhs, %notlhs
  %tmp_9 = fcmp ogt float %result, 0.000000e+00
  %tmp_10 = and i1 %tmp_8, %tmp_9
  %result_2 = select i1 %tmp_10, float %result, float 0.000000e+00
  store float %result_2, float* %output_addr, align 4
  %w_8 = add i4 1, %w
  br label %.preheader4

; <label>:3                                       ; preds = %.preheader4
  %h_8 = add i4 %h, 1
  br label %.preheader5

; <label>:4                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_1x1_4_p([3456 x float]* nocapture %input_r, [9216 x float]* nocapture %weight, [96 x float]* nocapture %bias, [3456 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader5
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_9, %.loopexit.loopexit ]
  %exitcond3 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_9 = add i7 %co, 1
  br i1 %exitcond3, label %4, label %.preheader5.preheader

.preheader5.preheader:                            ; preds = %.loopexit
  %tmp = zext i7 %co to i64
  %tmp_s = call i14 @_ssdm_op_BitConcatenate.i14.i7.i7(i7 %co, i7 0)
  %p_shl2_cast = zext i14 %tmp_s to i15
  %tmp_127 = call i12 @_ssdm_op_BitConcatenate.i12.i7.i5(i7 %co, i5 0)
  %p_shl3_cast = zext i12 %tmp_127 to i15
  %tmp_128 = sub i15 %p_shl2_cast, %p_shl3_cast
  %tmp_129 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0)
  %p_shl_cast = zext i10 %tmp_129 to i11
  %tmp_130 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co, i1 false)
  %p_shl1_cast = zext i8 %tmp_130 to i11
  %tmp_131 = sub i11 %p_shl_cast, %p_shl1_cast
  %tmp_179_cast = sext i11 %tmp_131 to i12
  %bias_addr = getelementptr [96 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader5

.preheader5:                                      ; preds = %3, %.preheader5.preheader
  %h = phi i3 [ %h_9, %3 ], [ 1, %.preheader5.preheader ]
  %exitcond2 = icmp eq i3 %h, -3
  %empty_45 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader4.preheader

.preheader4.preheader:                            ; preds = %.preheader5
  %tmp_cast = zext i3 %h to i12
  %tmp_132 = add i12 %tmp_cast, %tmp_179_cast
  %tmp_64 = trunc i12 %tmp_132 to i10
  %p_shl4_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_64, i3 0)
  %p_shl5_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_132, i1 false)
  %tmp_133 = sub i13 %p_shl4_cast, %p_shl5_cast
  br label %.preheader4

.preheader4:                                      ; preds = %2, %.preheader4.preheader
  %w = phi i3 [ %w_9, %2 ], [ 1, %.preheader4.preheader ]
  %exitcond1 = icmp eq i3 %w, -3
  %empty_46 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %exitcond1, label %3, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_61_cast = zext i3 %w to i13
  %tmp_134 = add i13 %tmp_133, %tmp_61_cast
  %tmp_184_cast = zext i13 %tmp_134 to i64
  %output_addr = getelementptr [3456 x float]* %output_r, i64 0, i64 %tmp_184_cast
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum = phi float [ %sum_10, %1 ], [ 0.000000e+00, %.preheader.preheader ]
  %ci = phi i7 [ %ci_3, %1 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i7 %ci, -32
  %empty_47 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %ci_3 = add i7 %ci, 1
  br i1 %exitcond, label %2, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_62_cast = zext i7 %ci to i15
  %tmp_135 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %ci, i3 0)
  %p_shl8_cast = zext i10 %tmp_135 to i11
  %tmp_136 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %ci, i1 false)
  %p_shl9_cast = zext i8 %tmp_136 to i11
  %tmp_137 = sub i11 %p_shl8_cast, %p_shl9_cast
  %tmp_187_cast = sext i11 %tmp_137 to i12
  %tmp_138 = add i12 %tmp_cast, %tmp_187_cast
  %tmp_66 = trunc i12 %tmp_138 to i10
  %p_shl6_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_66, i3 0)
  %p_shl7_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_138, i1 false)
  %tmp_139 = sub i13 %p_shl6_cast, %p_shl7_cast
  %tmp_140 = add i13 %tmp_61_cast, %tmp_139
  %tmp_192_cast = zext i13 %tmp_140 to i64
  %input_addr = getelementptr [3456 x float]* %input_r, i64 0, i64 %tmp_192_cast
  %tmp_141 = add i15 %tmp_62_cast, %tmp_128
  %tmp_193_cast = sext i15 %tmp_141 to i64
  %weight_addr = getelementptr [9216 x float]* %weight, i64 0, i64 %tmp_193_cast
  %weight_load = load float* %weight_addr, align 4
  %input_load = load float* %input_addr, align 4
  %tmp_63 = fmul float %weight_load, %input_load
  %sum_10 = fadd float %sum, %tmp_63
  br label %.preheader

; <label>:2                                       ; preds = %.preheader
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %result_to_int = bitcast float %result to i32
  %tmp_11 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %result_to_int, i32 23, i32 30)
  %tmp_65 = trunc i32 %result_to_int to i23
  %notlhs = icmp ne i8 %tmp_11, -1
  %notrhs = icmp eq i23 %tmp_65, 0
  %tmp_13 = or i1 %notrhs, %notlhs
  %tmp_14 = fcmp ogt float %result, 0.000000e+00
  %tmp_15 = and i1 %tmp_13, %tmp_14
  %result_3 = select i1 %tmp_15, float %result, float 0.000000e+00
  store float %result_3, float* %output_addr, align 4
  %w_9 = add i3 1, %w
  br label %.preheader4

; <label>:3                                       ; preds = %.preheader4
  %h_9 = add i3 %h, 1
  br label %.preheader5

; <label>:4                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_1x1_32_p([576 x float]* nocapture %weight, [24 x float]* nocapture %bias) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader5
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i5 [ 0, %0 ], [ %co_10, %.loopexit.loopexit ]
  %exitcond3 = icmp eq i5 %co, -8
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_10 = add i5 %co, 1
  br i1 %exitcond3, label %4, label %.preheader5.preheader

.preheader5.preheader:                            ; preds = %.loopexit
  %tmp = zext i5 %co to i64
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co, i5 0)
  %p_shl2_cast = zext i10 %tmp_s to i11
  %tmp_142 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co, i3 0)
  %p_shl3_cast = zext i8 %tmp_142 to i11
  %tmp_143 = sub i11 %p_shl2_cast, %p_shl3_cast
  %tmp_144 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co, i1 false)
  %p_shl1_cast = zext i6 %tmp_144 to i11
  %tmp_145 = add i11 %p_shl1_cast, %p_shl2_cast
  %bias_addr = getelementptr [24 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader5

.preheader5:                                      ; preds = %3, %.preheader5.preheader
  %h = phi i6 [ %h_10, %3 ], [ 1, %.preheader5.preheader ]
  %exitcond2 = icmp eq i6 %h, -31
  %empty_48 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader4.preheader

.preheader4.preheader:                            ; preds = %.preheader5
  %tmp_cast = zext i6 %h to i11
  %tmp_146 = add i11 %tmp_cast, %tmp_145
  %p_shl4_cast = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_146, i5 0)
  %tmp_67 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_146, i1 false)
  %p_shl5_cast = zext i12 %tmp_67 to i16
  %tmp_147 = add i16 %p_shl4_cast, %p_shl5_cast
  br label %.preheader4

.preheader4:                                      ; preds = %2, %.preheader4.preheader
  %w = phi i6 [ %w_10, %2 ], [ 1, %.preheader4.preheader ]
  %exitcond1 = icmp eq i6 %w, -31
  %empty_49 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  br i1 %exitcond1, label %3, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_64_cast = zext i6 %w to i16
  %tmp_148 = add i16 %tmp_147, %tmp_64_cast
  %tmp_204_cast = zext i16 %tmp_148 to i64
  %ShuffleConvs_0_Downs = getelementptr [27744 x float]* @ShuffleConvs_0_Downs, i64 0, i64 %tmp_204_cast
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum = phi float [ %sum_11, %1 ], [ 0.000000e+00, %.preheader.preheader ]
  %ci = phi i5 [ %ci_4, %1 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i5 %ci, -8
  %empty_50 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_4 = add i5 %ci, 1
  br i1 %exitcond, label %2, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_65_cast = zext i5 %ci to i11
  %tmp_149 = add i11 %tmp_65_cast, %tmp_143
  %tmp_205_cast = sext i11 %tmp_149 to i64
  %weight_addr = getelementptr [576 x float]* %weight, i64 0, i64 %tmp_205_cast
  %tmp_150 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %ci, i5 0)
  %p_shl8_cast = zext i10 %tmp_150 to i11
  %tmp_151 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %ci, i1 false)
  %p_shl9_cast = zext i6 %tmp_151 to i11
  %tmp_152 = add i11 %p_shl8_cast, %p_shl9_cast
  %tmp_153 = add i11 %tmp_cast, %tmp_152
  %p_shl6_cast = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_153, i5 0)
  %tmp_69 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_153, i1 false)
  %p_shl7_cast = zext i12 %tmp_69 to i16
  %tmp_154 = add i16 %p_shl6_cast, %p_shl7_cast
  %tmp_155 = add i16 %tmp_64_cast, %tmp_154
  %tmp_213_cast = zext i16 %tmp_155 to i64
  %conv1_output_p_addr = getelementptr [27744 x float]* @conv1_output_p, i64 0, i64 %tmp_213_cast
  %weight_load = load float* %weight_addr, align 4
  %conv1_output_p_load = load float* %conv1_output_p_addr, align 4
  %tmp_66 = fmul float %weight_load, %conv1_output_p_load
  %sum_11 = fadd float %sum, %tmp_66
  br label %.preheader

; <label>:2                                       ; preds = %.preheader
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %result_to_int = bitcast float %result to i32
  %tmp_16 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %result_to_int, i32 23, i32 30)
  %tmp_68 = trunc i32 %result_to_int to i23
  %notlhs = icmp ne i8 %tmp_16, -1
  %notrhs = icmp eq i23 %tmp_68, 0
  %tmp_18 = or i1 %notrhs, %notlhs
  %tmp_19 = fcmp ogt float %result, 0.000000e+00
  %tmp_20 = and i1 %tmp_18, %tmp_19
  %result_4 = select i1 %tmp_20, float %result, float 0.000000e+00
  store float %result_4, float* %ShuffleConvs_0_Downs, align 4
  %w_10 = add i6 1, %w
  br label %.preheader4

; <label>:3                                       ; preds = %.preheader4
  %h_10 = add i6 %h, 1
  br label %.preheader5

; <label>:4                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_1x1_16p_p([2304 x float]* nocapture %weight, [48 x float]* nocapture %bias) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader5
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_11, %.loopexit.loopexit ]
  %exitcond3 = icmp eq i6 %co, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_11 = add i6 %co, 1
  br i1 %exitcond3, label %4, label %.preheader5.preheader

.preheader5.preheader:                            ; preds = %.loopexit
  %tmp = zext i6 %co to i64
  %tmp_s = call i12 @_ssdm_op_BitConcatenate.i12.i6.i6(i6 %co, i6 0)
  %p_shl2_cast = zext i12 %tmp_s to i13
  %tmp_156 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co, i4 0)
  %p_shl3_cast1 = zext i10 %tmp_156 to i11
  %p_shl3_cast = zext i10 %tmp_156 to i13
  %tmp_157 = sub i13 %p_shl2_cast, %p_shl3_cast
  %tmp_158 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co, i1 false)
  %p_shl1_cast = zext i7 %tmp_158 to i11
  %tmp_159 = add i11 %p_shl1_cast, %p_shl3_cast1
  %bias_addr = getelementptr [48 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader5

.preheader5:                                      ; preds = %3, %.preheader5.preheader
  %h = phi i5 [ %h_11, %3 ], [ 1, %.preheader5.preheader ]
  %exitcond2 = icmp eq i5 %h, -15
  %empty_51 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader4.preheader

.preheader4.preheader:                            ; preds = %.preheader5
  %tmp_cast = zext i5 %h to i11
  %tmp_160 = add i11 %tmp_cast, %tmp_159
  %p_shl4_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_160, i4 0)
  %tmp_70 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_160, i1 false)
  %p_shl5_cast = zext i12 %tmp_70 to i15
  %tmp_161 = add i15 %p_shl4_cast, %p_shl5_cast
  br label %.preheader4

.preheader4:                                      ; preds = %2, %.preheader4.preheader
  %w = phi i5 [ %w_11, %2 ], [ 1, %.preheader4.preheader ]
  %exitcond1 = icmp eq i5 %w, -15
  %empty_52 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond1, label %3, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_67_cast = zext i5 %w to i15
  %tmp_162 = add i15 %tmp_161, %tmp_67_cast
  %tmp_224_cast = zext i15 %tmp_162 to i64
  %ShuffleConvs_1_Downs = getelementptr [15552 x float]* @ShuffleConvs_1_Downs, i64 0, i64 %tmp_224_cast
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum = phi float [ %sum_12, %1 ], [ 0.000000e+00, %.preheader.preheader ]
  %ci = phi i6 [ %ci_5, %1 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i6 %ci, -16
  %empty_53 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %ci_5 = add i6 %ci, 1
  br i1 %exitcond, label %2, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_68_cast = zext i6 %ci to i13
  %tmp_163 = add i13 %tmp_68_cast, %tmp_157
  %tmp_225_cast = sext i13 %tmp_163 to i64
  %weight_addr = getelementptr [2304 x float]* %weight, i64 0, i64 %tmp_225_cast
  %tmp_164 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %ci, i4 0)
  %p_shl8_cast = zext i10 %tmp_164 to i11
  %tmp_165 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %ci, i1 false)
  %p_shl9_cast = zext i7 %tmp_165 to i11
  %tmp_166 = add i11 %p_shl8_cast, %p_shl9_cast
  %tmp_167 = add i11 %tmp_cast, %tmp_166
  %p_shl6_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_167, i4 0)
  %tmp_72 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_167, i1 false)
  %p_shl7_cast = zext i12 %tmp_72 to i15
  %tmp_168 = add i15 %p_shl6_cast, %p_shl7_cast
  %tmp_169 = add i15 %tmp_67_cast, %tmp_168
  %tmp_233_cast = zext i15 %tmp_169 to i64
  %shuffleunit0_2_outpu = getelementptr [15552 x float]* @shuffleunit0_2_outpu, i64 0, i64 %tmp_233_cast
  %weight_load = load float* %weight_addr, align 4
  %shuffleunit0_2_outpu_1 = load float* %shuffleunit0_2_outpu, align 4
  %tmp_69 = fmul float %weight_load, %shuffleunit0_2_outpu_1
  %sum_12 = fadd float %sum, %tmp_69
  br label %.preheader

; <label>:2                                       ; preds = %.preheader
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %result_to_int = bitcast float %result to i32
  %tmp_21 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %result_to_int, i32 23, i32 30)
  %tmp_71 = trunc i32 %result_to_int to i23
  %notlhs = icmp ne i8 %tmp_21, -1
  %notrhs = icmp eq i23 %tmp_71, 0
  %tmp_23 = or i1 %notrhs, %notlhs
  %tmp_24 = fcmp ogt float %result, 0.000000e+00
  %tmp_25 = and i1 %tmp_23, %tmp_24
  %result_5 = select i1 %tmp_25, float %result, float 0.000000e+00
  store float %result_5, float* %ShuffleConvs_1_Downs, align 4
  %w_11 = add i5 1, %w
  br label %.preheader4

; <label>:3                                       ; preds = %.preheader4
  %h_11 = add i5 %h, 1
  br label %.preheader5

; <label>:4                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_1x1_16_p([7776 x float]* nocapture %input_r, [576 x float]* nocapture %weight, [24 x float]* nocapture %bias, [7776 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader5
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i5 [ 0, %0 ], [ %co_12, %.loopexit.loopexit ]
  %exitcond3 = icmp eq i5 %co, -8
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_12 = add i5 %co, 1
  br i1 %exitcond3, label %4, label %.preheader5.preheader

.preheader5.preheader:                            ; preds = %.loopexit
  %tmp = zext i5 %co to i64
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co, i5 0)
  %p_shl2_cast = zext i10 %tmp_s to i11
  %tmp_170 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co, i3 0)
  %p_shl3_cast = zext i8 %tmp_170 to i11
  %tmp_171 = sub i11 %p_shl2_cast, %p_shl3_cast
  %tmp_172 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co, i4 0)
  %p_shl_cast = zext i9 %tmp_172 to i10
  %tmp_173 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co, i1 false)
  %p_shl1_cast = zext i6 %tmp_173 to i10
  %tmp_174 = add i10 %p_shl1_cast, %p_shl_cast
  %bias_addr = getelementptr [24 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader5

.preheader5:                                      ; preds = %3, %.preheader5.preheader
  %h = phi i5 [ %h_12, %3 ], [ 1, %.preheader5.preheader ]
  %exitcond2 = icmp eq i5 %h, -15
  %empty_54 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader4.preheader

.preheader4.preheader:                            ; preds = %.preheader5
  %tmp_cast = zext i5 %h to i10
  %tmp_175 = add i10 %tmp_cast, %tmp_174
  %p_shl4_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_175, i4 0)
  %tmp_73 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_175, i1 false)
  %p_shl5_cast = zext i11 %tmp_73 to i14
  %tmp_176 = add i14 %p_shl4_cast, %p_shl5_cast
  br label %.preheader4

.preheader4:                                      ; preds = %2, %.preheader4.preheader
  %w = phi i5 [ %w_12, %2 ], [ 1, %.preheader4.preheader ]
  %exitcond1 = icmp eq i5 %w, -15
  %empty_55 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond1, label %3, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_70_cast = zext i5 %w to i14
  %tmp_177 = add i14 %tmp_176, %tmp_70_cast
  %tmp_244_cast = zext i14 %tmp_177 to i64
  %output_addr = getelementptr [7776 x float]* %output_r, i64 0, i64 %tmp_244_cast
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum = phi float [ %sum_13, %1 ], [ 0.000000e+00, %.preheader.preheader ]
  %ci = phi i5 [ %ci_6, %1 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i5 %ci, -8
  %empty_56 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_6 = add i5 %ci, 1
  br i1 %exitcond, label %2, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_71_cast = zext i5 %ci to i11
  %tmp_178 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %ci, i4 0)
  %p_shl8_cast = zext i9 %tmp_178 to i10
  %tmp_179 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %ci, i1 false)
  %p_shl9_cast = zext i6 %tmp_179 to i10
  %tmp_180 = add i10 %p_shl8_cast, %p_shl9_cast
  %tmp_181 = add i10 %tmp_cast, %tmp_180
  %p_shl6_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_181, i4 0)
  %tmp_75 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_181, i1 false)
  %p_shl7_cast = zext i11 %tmp_75 to i14
  %tmp_182 = add i14 %p_shl6_cast, %p_shl7_cast
  %tmp_183 = add i14 %tmp_70_cast, %tmp_182
  %tmp_252_cast = zext i14 %tmp_183 to i64
  %input_addr = getelementptr [7776 x float]* %input_r, i64 0, i64 %tmp_252_cast
  %tmp_184 = add i11 %tmp_71_cast, %tmp_171
  %tmp_253_cast = sext i11 %tmp_184 to i64
  %weight_addr = getelementptr [576 x float]* %weight, i64 0, i64 %tmp_253_cast
  %weight_load = load float* %weight_addr, align 4
  %input_load = load float* %input_addr, align 4
  %tmp_72 = fmul float %weight_load, %input_load
  %sum_13 = fadd float %sum, %tmp_72
  br label %.preheader

; <label>:2                                       ; preds = %.preheader
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %result_to_int = bitcast float %result to i32
  %tmp_26 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %result_to_int, i32 23, i32 30)
  %tmp_74 = trunc i32 %result_to_int to i23
  %notlhs = icmp ne i8 %tmp_26, -1
  %notrhs = icmp eq i23 %tmp_74, 0
  %tmp_28 = or i1 %notrhs, %notlhs
  %tmp_29 = fcmp ogt float %result, 0.000000e+00
  %tmp_30 = and i1 %tmp_28, %tmp_29
  %result_6 = select i1 %tmp_30, float %result, float 0.000000e+00
  store float %result_6, float* %output_addr, align 4
  %w_12 = add i5 1, %w
  br label %.preheader4

; <label>:3                                       ; preds = %.preheader4
  %h_12 = add i5 %h, 1
  br label %.preheader5

; <label>:4                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_96_r_p([3456 x float]* nocapture %right_r, [6912 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i8 [ 0, %0 ], [ %co_13, %.loopexit.loopexit ]
  %tmp_76 = trunc i8 %co to i1
  %exitcond2 = icmp eq i8 %co, -64
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 192, i64 192, i64 192)
  %co_13 = add i8 1, %co
  br i1 %exitcond2, label %3, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i7 @_ssdm_op_PartSelect.i7.i8.i32.i32(i8 %co, i32 1, i32 7)
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp, i3 0)
  %p_shl2_cast = zext i10 %tmp_s to i11
  %tmp_185 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp, i1 false)
  %p_shl3_cast = zext i8 %tmp_185 to i11
  %tmp_186 = sub i11 %p_shl2_cast, %p_shl3_cast
  %tmp_257_cast = sext i11 %tmp_186 to i12
  %tmp_187 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %co, i3 0)
  %p_shl_cast = zext i11 %tmp_187 to i12
  %tmp_188 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %co, i1 false)
  %p_shl1_cast = zext i9 %tmp_188 to i12
  %tmp_189 = sub i12 %p_shl_cast, %p_shl1_cast
  %tmp_260_cast = sext i12 %tmp_189 to i13
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i3 [ 0, %.preheader3.preheader ], [ %h_13, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i3 %h, -2
  %empty_57 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 6, i64 6, i64 6)
  %h_13 = add i3 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast9 = zext i3 %h to i13
  %tmp_cast = zext i3 %h to i12
  %tmp_190 = add i12 %tmp_cast, %tmp_257_cast
  %tmp_77 = trunc i12 %tmp_190 to i10
  %p_shl6_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_77, i3 0)
  %p_shl7_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_190, i1 false)
  %tmp_191 = sub i13 %p_shl6_cast, %p_shl7_cast
  %tmp_192 = add i13 %tmp_cast9, %tmp_260_cast
  %tmp_78 = trunc i13 %tmp_192 to i11
  %p_shl4_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_78, i3 0)
  %p_shl5_cast = call i14 @_ssdm_op_BitConcatenate.i14.i13.i1(i13 %tmp_192, i1 false)
  %tmp_193 = sub i14 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w = phi i3 [ %w_13, %._crit_edge ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i3 %w, -2
  %empty_58 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 6, i64 6, i64 6)
  %w_13 = add i3 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  br i1 %tmp_76, label %2, label %._crit_edge

; <label>:2                                       ; preds = %1
  %tmp_73_cast8 = zext i3 %w to i14
  %tmp_73_cast = zext i3 %w to i13
  %tmp_194 = add i13 %tmp_191, %tmp_73_cast
  %tmp_269_cast = zext i13 %tmp_194 to i64
  %right_addr = getelementptr [3456 x float]* %right_r, i64 0, i64 %tmp_269_cast
  %tmp_195 = add i14 %tmp_193, %tmp_73_cast8
  %tmp_270_cast = zext i14 %tmp_195 to i64
  %output_addr = getelementptr [6912 x float]* %output_r, i64 0, i64 %tmp_270_cast
  %right_load = load float* %right_addr, align 4
  store float %right_load, float* %output_addr, align 4
  br label %._crit_edge

._crit_edge:                                      ; preds = %2, %1
  br label %.preheader

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_96_p([3456 x float]* nocapture %left_r, [6912 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i8 [ 0, %0 ], [ %co_14, %.loopexit.loopexit ]
  %tmp_79 = trunc i8 %co to i1
  %exitcond2 = icmp eq i8 %co, -64
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 192, i64 192, i64 192)
  %co_14 = add i8 1, %co
  br i1 %exitcond2, label %5, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i7 @_ssdm_op_PartSelect.i7.i8.i32.i32(i8 %co, i32 1, i32 7)
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp, i3 0)
  %p_shl2_cast = zext i10 %tmp_s to i11
  %tmp_196 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp, i1 false)
  %p_shl3_cast = zext i8 %tmp_196 to i11
  %tmp_197 = sub i11 %p_shl2_cast, %p_shl3_cast
  %tmp_274_cast = sext i11 %tmp_197 to i12
  %tmp_198 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %co, i3 0)
  %p_shl_cast = zext i11 %tmp_198 to i12
  %tmp_199 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %co, i1 false)
  %p_shl1_cast = zext i9 %tmp_199 to i12
  %tmp_200 = sub i12 %p_shl_cast, %p_shl1_cast
  %tmp_277_cast = sext i12 %tmp_200 to i13
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i3 [ 0, %.preheader3.preheader ], [ %h_14, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i3 %h, -2
  %empty_59 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 6, i64 6, i64 6)
  %h_14 = add i3 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast9 = zext i3 %h to i13
  %tmp_cast = zext i3 %h to i12
  %tmp_201 = add i12 %tmp_cast, %tmp_274_cast
  %tmp_80 = trunc i12 %tmp_201 to i10
  %p_shl6_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_80, i3 0)
  %p_shl7_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_201, i1 false)
  %tmp_202 = sub i13 %p_shl6_cast, %p_shl7_cast
  %tmp_203 = add i13 %tmp_cast9, %tmp_277_cast
  %tmp_81 = trunc i13 %tmp_203 to i11
  %p_shl4_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_81, i3 0)
  %p_shl5_cast = call i14 @_ssdm_op_BitConcatenate.i14.i13.i1(i13 %tmp_203, i1 false)
  %tmp_204 = sub i14 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %4, %.preheader.preheader
  %w = phi i3 [ %w_14, %4 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i3 %w, -2
  %empty_60 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 6, i64 6, i64 6)
  %w_14 = add i3 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_74_cast8 = zext i3 %w to i14
  %tmp_74_cast = zext i3 %w to i13
  %tmp_205 = add i13 %tmp_202, %tmp_74_cast
  %tmp_286_cast = zext i13 %tmp_205 to i64
  %left_addr = getelementptr [3456 x float]* %left_r, i64 0, i64 %tmp_286_cast
  %tmp_206 = add i14 %tmp_204, %tmp_74_cast8
  %tmp_287_cast = zext i14 %tmp_206 to i64
  %output_addr = getelementptr [6912 x float]* %output_r, i64 0, i64 %tmp_287_cast
  %buffer1_1_96_4x4_p_a = getelementptr [3456 x float]* @buffer1_1_96_4x4_p, i64 0, i64 %tmp_286_cast
  br i1 %tmp_79, label %3, label %2

; <label>:2                                       ; preds = %1
  %left_load = load float* %left_addr, align 4
  br label %4

; <label>:3                                       ; preds = %1
  %buffer1_1_96_4x4_p_l = load float* %buffer1_1_96_4x4_p_a, align 4
  br label %4

; <label>:4                                       ; preds = %3, %2
  %storemerge = phi float [ %left_load, %2 ], [ %buffer1_1_96_4x4_p_l, %3 ]
  store float %storemerge, float* %output_addr, align 4
  br label %.preheader

; <label>:5                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_96_l_p([3456 x float]* nocapture %left_r, [6912 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i8 [ 0, %0 ], [ %co_15, %.loopexit.loopexit ]
  %tmp_82 = trunc i8 %co to i1
  %exitcond2 = icmp eq i8 %co, -64
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 192, i64 192, i64 192)
  %co_15 = add i8 1, %co
  br i1 %exitcond2, label %3, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i7 @_ssdm_op_PartSelect.i7.i8.i32.i32(i8 %co, i32 1, i32 7)
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp, i3 0)
  %p_shl2_cast = zext i10 %tmp_s to i11
  %tmp_207 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp, i1 false)
  %p_shl3_cast = zext i8 %tmp_207 to i11
  %tmp_208 = sub i11 %p_shl2_cast, %p_shl3_cast
  %tmp_291_cast = sext i11 %tmp_208 to i12
  %tmp_209 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %co, i3 0)
  %p_shl_cast = zext i11 %tmp_209 to i12
  %tmp_210 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %co, i1 false)
  %p_shl1_cast = zext i9 %tmp_210 to i12
  %tmp_211 = sub i12 %p_shl_cast, %p_shl1_cast
  %tmp_294_cast = sext i12 %tmp_211 to i13
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i3 [ 0, %.preheader3.preheader ], [ %h_15, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i3 %h, -2
  %empty_61 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 6, i64 6, i64 6)
  %h_15 = add i3 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast9 = zext i3 %h to i13
  %tmp_cast = zext i3 %h to i12
  %tmp_212 = add i12 %tmp_cast, %tmp_291_cast
  %tmp_83 = trunc i12 %tmp_212 to i10
  %p_shl6_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_83, i3 0)
  %p_shl7_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_212, i1 false)
  %tmp_213 = sub i13 %p_shl6_cast, %p_shl7_cast
  %tmp_214 = add i13 %tmp_cast9, %tmp_294_cast
  %tmp_84 = trunc i13 %tmp_214 to i11
  %p_shl4_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_84, i3 0)
  %p_shl5_cast = call i14 @_ssdm_op_BitConcatenate.i14.i13.i1(i13 %tmp_214, i1 false)
  %tmp_215 = sub i14 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w = phi i3 [ %w_15, %._crit_edge ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i3 %w, -2
  %empty_62 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 6, i64 6, i64 6)
  %w_15 = add i3 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  br i1 %tmp_82, label %._crit_edge, label %2

; <label>:2                                       ; preds = %1
  %tmp_75_cast8 = zext i3 %w to i14
  %tmp_75_cast = zext i3 %w to i13
  %tmp_216 = add i13 %tmp_213, %tmp_75_cast
  %tmp_303_cast = zext i13 %tmp_216 to i64
  %left_addr = getelementptr [3456 x float]* %left_r, i64 0, i64 %tmp_303_cast
  %tmp_217 = add i14 %tmp_215, %tmp_75_cast8
  %tmp_304_cast = zext i14 %tmp_217 to i64
  %output_addr = getelementptr [6912 x float]* %output_r, i64 0, i64 %tmp_304_cast
  %left_load = load float* %left_addr, align 4
  store float %left_load, float* %output_addr, align 4
  br label %._crit_edge

._crit_edge:                                      ; preds = %2, %1
  br label %.preheader

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_48_r_p([4800 x float]* nocapture %right_r, [9600 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_16, %.loopexit.loopexit ]
  %tmp_85 = trunc i7 %co to i1
  %exitcond2 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_16 = add i7 1, %co
  br i1 %exitcond2, label %3, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i6 @_ssdm_op_PartSelect.i6.i7.i32.i32(i7 %co, i32 1, i32 6)
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %tmp, i3 0)
  %p_shl2_cast = zext i9 %tmp_s to i10
  %tmp_218 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %tmp, i1 false)
  %p_shl3_cast = zext i7 %tmp_218 to i10
  %tmp_219 = add i10 %p_shl3_cast, %p_shl2_cast
  %tmp_220 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0)
  %p_shl_cast = zext i10 %tmp_220 to i11
  %tmp_221 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co, i1 false)
  %p_shl1_cast = zext i8 %tmp_221 to i11
  %tmp_222 = add i11 %p_shl1_cast, %p_shl_cast
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i4 [ 0, %.preheader3.preheader ], [ %h_16, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i4 %h, -6
  %empty_63 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10)
  %h_16 = add i4 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast9 = zext i4 %h to i11
  %tmp_cast = zext i4 %h to i10
  %tmp_223 = add i10 %tmp_cast, %tmp_219
  %tmp_86 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_223, i3 0)
  %p_shl6_cast = zext i13 %tmp_86 to i14
  %tmp_87 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_223, i1 false)
  %p_shl7_cast = zext i11 %tmp_87 to i14
  %tmp_224 = add i14 %p_shl6_cast, %p_shl7_cast
  %tmp_225 = add i11 %tmp_cast9, %tmp_222
  %tmp_88 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_225, i3 0)
  %p_shl4_cast = zext i14 %tmp_88 to i15
  %tmp_89 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_225, i1 false)
  %p_shl5_cast = zext i12 %tmp_89 to i15
  %tmp_226 = add i15 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w = phi i4 [ %w_16, %._crit_edge ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i4 %w, -6
  %empty_64 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10)
  %w_16 = add i4 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  br i1 %tmp_85, label %2, label %._crit_edge

; <label>:2                                       ; preds = %1
  %tmp_76_cast8 = zext i4 %w to i15
  %tmp_76_cast = zext i4 %w to i14
  %tmp_227 = add i14 %tmp_224, %tmp_76_cast
  %tmp_320_cast = zext i14 %tmp_227 to i64
  %right_addr = getelementptr [4800 x float]* %right_r, i64 0, i64 %tmp_320_cast
  %tmp_228 = add i15 %tmp_226, %tmp_76_cast8
  %tmp_321_cast = zext i15 %tmp_228 to i64
  %output_addr = getelementptr [9600 x float]* %output_r, i64 0, i64 %tmp_321_cast
  %right_load = load float* %right_addr, align 4
  store float %right_load, float* %output_addr, align 4
  br label %._crit_edge

._crit_edge:                                      ; preds = %2, %1
  br label %.preheader

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_48_p([4800 x float]* nocapture %left_r, [9600 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_17, %.loopexit.loopexit ]
  %tmp_90 = trunc i7 %co to i1
  %exitcond2 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_17 = add i7 1, %co
  br i1 %exitcond2, label %5, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i6 @_ssdm_op_PartSelect.i6.i7.i32.i32(i7 %co, i32 1, i32 6)
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %tmp, i3 0)
  %p_shl2_cast = zext i9 %tmp_s to i10
  %tmp_229 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %tmp, i1 false)
  %p_shl3_cast = zext i7 %tmp_229 to i10
  %tmp_230 = add i10 %p_shl3_cast, %p_shl2_cast
  %tmp_231 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0)
  %p_shl_cast = zext i10 %tmp_231 to i11
  %tmp_232 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co, i1 false)
  %p_shl1_cast = zext i8 %tmp_232 to i11
  %tmp_233 = add i11 %p_shl1_cast, %p_shl_cast
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i4 [ 0, %.preheader3.preheader ], [ %h_17, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i4 %h, -6
  %empty_65 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10)
  %h_17 = add i4 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast9 = zext i4 %h to i11
  %tmp_cast = zext i4 %h to i10
  %tmp_234 = add i10 %tmp_cast, %tmp_230
  %tmp_91 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_234, i3 0)
  %p_shl6_cast = zext i13 %tmp_91 to i14
  %tmp_92 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_234, i1 false)
  %p_shl7_cast = zext i11 %tmp_92 to i14
  %tmp_235 = add i14 %p_shl6_cast, %p_shl7_cast
  %tmp_236 = add i11 %tmp_cast9, %tmp_233
  %tmp_93 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_236, i3 0)
  %p_shl4_cast = zext i14 %tmp_93 to i15
  %tmp_94 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_236, i1 false)
  %p_shl5_cast = zext i12 %tmp_94 to i15
  %tmp_237 = add i15 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %4, %.preheader.preheader
  %w = phi i4 [ %w_17, %4 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i4 %w, -6
  %empty_66 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10)
  %w_17 = add i4 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_77_cast8 = zext i4 %w to i15
  %tmp_77_cast = zext i4 %w to i14
  %tmp_238 = add i14 %tmp_235, %tmp_77_cast
  %tmp_337_cast = zext i14 %tmp_238 to i64
  %left_addr = getelementptr [4800 x float]* %left_r, i64 0, i64 %tmp_337_cast
  %tmp_239 = add i15 %tmp_237, %tmp_77_cast8
  %tmp_338_cast = zext i15 %tmp_239 to i64
  %output_addr = getelementptr [9600 x float]* %output_r, i64 0, i64 %tmp_338_cast
  %buffer1_1_48_8x8_p_a = getelementptr [4800 x float]* @buffer1_1_48_8x8_p, i64 0, i64 %tmp_337_cast
  br i1 %tmp_90, label %3, label %2

; <label>:2                                       ; preds = %1
  %left_load = load float* %left_addr, align 4
  br label %4

; <label>:3                                       ; preds = %1
  %buffer1_1_48_8x8_p_l = load float* %buffer1_1_48_8x8_p_a, align 4
  br label %4

; <label>:4                                       ; preds = %3, %2
  %storemerge = phi float [ %left_load, %2 ], [ %buffer1_1_48_8x8_p_l, %3 ]
  store float %storemerge, float* %output_addr, align 4
  br label %.preheader

; <label>:5                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_48_l_p([4800 x float]* nocapture %left_r, [9600 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_18, %.loopexit.loopexit ]
  %tmp_95 = trunc i7 %co to i1
  %exitcond2 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_18 = add i7 1, %co
  br i1 %exitcond2, label %3, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i6 @_ssdm_op_PartSelect.i6.i7.i32.i32(i7 %co, i32 1, i32 6)
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %tmp, i3 0)
  %p_shl2_cast = zext i9 %tmp_s to i10
  %tmp_240 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %tmp, i1 false)
  %p_shl3_cast = zext i7 %tmp_240 to i10
  %tmp_241 = add i10 %p_shl3_cast, %p_shl2_cast
  %tmp_242 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0)
  %p_shl_cast = zext i10 %tmp_242 to i11
  %tmp_243 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co, i1 false)
  %p_shl1_cast = zext i8 %tmp_243 to i11
  %tmp_244 = add i11 %p_shl1_cast, %p_shl_cast
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i4 [ 0, %.preheader3.preheader ], [ %h_18, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i4 %h, -6
  %empty_67 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10)
  %h_18 = add i4 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast9 = zext i4 %h to i11
  %tmp_cast = zext i4 %h to i10
  %tmp_245 = add i10 %tmp_cast, %tmp_241
  %tmp_96 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_245, i3 0)
  %p_shl6_cast = zext i13 %tmp_96 to i14
  %tmp_97 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_245, i1 false)
  %p_shl7_cast = zext i11 %tmp_97 to i14
  %tmp_246 = add i14 %p_shl6_cast, %p_shl7_cast
  %tmp_247 = add i11 %tmp_cast9, %tmp_244
  %tmp_98 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_247, i3 0)
  %p_shl4_cast = zext i14 %tmp_98 to i15
  %tmp_99 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_247, i1 false)
  %p_shl5_cast = zext i12 %tmp_99 to i15
  %tmp_248 = add i15 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w = phi i4 [ %w_18, %._crit_edge ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i4 %w, -6
  %empty_68 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10)
  %w_18 = add i4 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  br i1 %tmp_95, label %._crit_edge, label %2

; <label>:2                                       ; preds = %1
  %tmp_78_cast8 = zext i4 %w to i15
  %tmp_78_cast = zext i4 %w to i14
  %tmp_249 = add i14 %tmp_246, %tmp_78_cast
  %tmp_354_cast = zext i14 %tmp_249 to i64
  %left_addr = getelementptr [4800 x float]* %left_r, i64 0, i64 %tmp_354_cast
  %tmp_250 = add i15 %tmp_248, %tmp_78_cast8
  %tmp_355_cast = zext i15 %tmp_250 to i64
  %output_addr = getelementptr [9600 x float]* %output_r, i64 0, i64 %tmp_355_cast
  %left_load = load float* %left_addr, align 4
  store float %left_load, float* %output_addr, align 4
  br label %._crit_edge

._crit_edge:                                      ; preds = %2, %1
  br label %.preheader

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_24_r_p([7776 x float]* nocapture %right_r, [15552 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_19, %.loopexit.loopexit ]
  %tmp_100 = trunc i6 %co to i1
  %exitcond2 = icmp eq i6 %co, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_19 = add i6 1, %co
  br i1 %exitcond2, label %3, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i5 @_ssdm_op_PartSelect.i5.i6.i32.i32(i6 %co, i32 1, i32 5)
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %tmp, i4 0)
  %p_shl2_cast = zext i9 %tmp_s to i10
  %tmp_251 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %tmp, i1 false)
  %p_shl3_cast = zext i6 %tmp_251 to i10
  %tmp_252 = add i10 %p_shl3_cast, %p_shl2_cast
  %tmp_253 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co, i4 0)
  %p_shl_cast = zext i10 %tmp_253 to i11
  %tmp_254 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co, i1 false)
  %p_shl1_cast = zext i7 %tmp_254 to i11
  %tmp_255 = add i11 %p_shl1_cast, %p_shl_cast
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i5 [ 0, %.preheader3.preheader ], [ %h_19, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i5 %h, -14
  %empty_69 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 18, i64 18, i64 18)
  %h_19 = add i5 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast9 = zext i5 %h to i11
  %tmp_cast = zext i5 %h to i10
  %tmp_256 = add i10 %tmp_cast, %tmp_252
  %p_shl6_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_256, i4 0)
  %tmp_101 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_256, i1 false)
  %p_shl7_cast = zext i11 %tmp_101 to i14
  %tmp_257 = add i14 %p_shl6_cast, %p_shl7_cast
  %tmp_258 = add i11 %tmp_cast9, %tmp_255
  %p_shl4_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_258, i4 0)
  %tmp_102 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_258, i1 false)
  %p_shl5_cast = zext i12 %tmp_102 to i15
  %tmp_259 = add i15 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w = phi i5 [ %w_19, %._crit_edge ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i5 %w, -14
  %empty_70 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 18, i64 18, i64 18)
  %w_19 = add i5 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  br i1 %tmp_100, label %2, label %._crit_edge

; <label>:2                                       ; preds = %1
  %tmp_79_cast8 = zext i5 %w to i15
  %tmp_79_cast = zext i5 %w to i14
  %tmp_260 = add i14 %tmp_257, %tmp_79_cast
  %tmp_371_cast = zext i14 %tmp_260 to i64
  %right_addr = getelementptr [7776 x float]* %right_r, i64 0, i64 %tmp_371_cast
  %tmp_261 = add i15 %tmp_259, %tmp_79_cast8
  %tmp_372_cast = zext i15 %tmp_261 to i64
  %output_addr = getelementptr [15552 x float]* %output_r, i64 0, i64 %tmp_372_cast
  %right_load = load float* %right_addr, align 4
  store float %right_load, float* %output_addr, align 4
  br label %._crit_edge

._crit_edge:                                      ; preds = %2, %1
  br label %.preheader

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_24_p([7776 x float]* nocapture %left_r, [15552 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_20, %.loopexit.loopexit ]
  %tmp_103 = trunc i6 %co to i1
  %exitcond2 = icmp eq i6 %co, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_20 = add i6 1, %co
  br i1 %exitcond2, label %5, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i5 @_ssdm_op_PartSelect.i5.i6.i32.i32(i6 %co, i32 1, i32 5)
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %tmp, i4 0)
  %p_shl2_cast = zext i9 %tmp_s to i10
  %tmp_262 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %tmp, i1 false)
  %p_shl3_cast = zext i6 %tmp_262 to i10
  %tmp_263 = add i10 %p_shl3_cast, %p_shl2_cast
  %tmp_264 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co, i4 0)
  %p_shl_cast = zext i10 %tmp_264 to i11
  %tmp_265 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co, i1 false)
  %p_shl1_cast = zext i7 %tmp_265 to i11
  %tmp_266 = add i11 %p_shl1_cast, %p_shl_cast
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i5 [ 0, %.preheader3.preheader ], [ %h_20, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i5 %h, -14
  %empty_71 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 18, i64 18, i64 18)
  %h_20 = add i5 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast9 = zext i5 %h to i11
  %tmp_cast = zext i5 %h to i10
  %tmp_267 = add i10 %tmp_cast, %tmp_263
  %p_shl6_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_267, i4 0)
  %tmp_104 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_267, i1 false)
  %p_shl7_cast = zext i11 %tmp_104 to i14
  %tmp_268 = add i14 %p_shl6_cast, %p_shl7_cast
  %tmp_269 = add i11 %tmp_cast9, %tmp_266
  %p_shl4_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_269, i4 0)
  %tmp_105 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_269, i1 false)
  %p_shl5_cast = zext i12 %tmp_105 to i15
  %tmp_270 = add i15 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %4, %.preheader.preheader
  %w = phi i5 [ %w_20, %4 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i5 %w, -14
  %empty_72 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 18, i64 18, i64 18)
  %w_20 = add i5 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_80_cast8 = zext i5 %w to i15
  %tmp_80_cast = zext i5 %w to i14
  %tmp_271 = add i14 %tmp_268, %tmp_80_cast
  %tmp_388_cast = zext i14 %tmp_271 to i64
  %left_addr = getelementptr [7776 x float]* %left_r, i64 0, i64 %tmp_388_cast
  %tmp_272 = add i15 %tmp_270, %tmp_80_cast8
  %tmp_389_cast = zext i15 %tmp_272 to i64
  %output_addr = getelementptr [15552 x float]* %output_r, i64 0, i64 %tmp_389_cast
  %buffer1_1_24_16x16_p = getelementptr [7776 x float]* @buffer1_1_24_16x16_p, i64 0, i64 %tmp_388_cast
  br i1 %tmp_103, label %3, label %2

; <label>:2                                       ; preds = %1
  %left_load = load float* %left_addr, align 4
  br label %4

; <label>:3                                       ; preds = %1
  %buffer1_1_24_16x16_p_1 = load float* %buffer1_1_24_16x16_p, align 4
  br label %4

; <label>:4                                       ; preds = %3, %2
  %storemerge = phi float [ %left_load, %2 ], [ %buffer1_1_24_16x16_p_1, %3 ]
  store float %storemerge, float* %output_addr, align 4
  br label %.preheader

; <label>:5                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_24_l_p([7776 x float]* nocapture %left_r, [15552 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_21, %.loopexit.loopexit ]
  %tmp_106 = trunc i6 %co to i1
  %exitcond2 = icmp eq i6 %co, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_21 = add i6 1, %co
  br i1 %exitcond2, label %3, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i5 @_ssdm_op_PartSelect.i5.i6.i32.i32(i6 %co, i32 1, i32 5)
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %tmp, i4 0)
  %p_shl2_cast = zext i9 %tmp_s to i10
  %tmp_273 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %tmp, i1 false)
  %p_shl3_cast = zext i6 %tmp_273 to i10
  %tmp_274 = add i10 %p_shl3_cast, %p_shl2_cast
  %tmp_275 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co, i4 0)
  %p_shl_cast = zext i10 %tmp_275 to i11
  %tmp_276 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co, i1 false)
  %p_shl1_cast = zext i7 %tmp_276 to i11
  %tmp_277 = add i11 %p_shl1_cast, %p_shl_cast
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i5 [ 0, %.preheader3.preheader ], [ %h_21, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i5 %h, -14
  %empty_73 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 18, i64 18, i64 18)
  %h_21 = add i5 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast9 = zext i5 %h to i11
  %tmp_cast = zext i5 %h to i10
  %tmp_278 = add i10 %tmp_cast, %tmp_274
  %p_shl6_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_278, i4 0)
  %tmp_107 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_278, i1 false)
  %p_shl7_cast = zext i11 %tmp_107 to i14
  %tmp_279 = add i14 %p_shl6_cast, %p_shl7_cast
  %tmp_280 = add i11 %tmp_cast9, %tmp_277
  %p_shl4_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_280, i4 0)
  %tmp_108 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_280, i1 false)
  %p_shl5_cast = zext i12 %tmp_108 to i15
  %tmp_281 = add i15 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w = phi i5 [ %w_21, %._crit_edge ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i5 %w, -14
  %empty_74 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 18, i64 18, i64 18)
  %w_21 = add i5 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  br i1 %tmp_106, label %._crit_edge, label %2

; <label>:2                                       ; preds = %1
  %tmp_81_cast8 = zext i5 %w to i15
  %tmp_81_cast = zext i5 %w to i14
  %tmp_282 = add i14 %tmp_279, %tmp_81_cast
  %tmp_405_cast = zext i14 %tmp_282 to i64
  %left_addr = getelementptr [7776 x float]* %left_r, i64 0, i64 %tmp_405_cast
  %tmp_283 = add i15 %tmp_281, %tmp_81_cast8
  %tmp_406_cast = zext i15 %tmp_283 to i64
  %output_addr = getelementptr [15552 x float]* %output_r, i64 0, i64 %tmp_406_cast
  %left_load = load float* %left_addr, align 4
  store float %left_load, float* %output_addr, align 4
  br label %._crit_edge

._crit_edge:                                      ; preds = %2, %1
  br label %.preheader

; <label>:3                                       ; preds = %.loopexit
  ret void
}

declare i8 @llvm.part.select.i8(i8, i32, i32) nounwind readnone

declare i7 @llvm.part.select.i7(i7, i32, i32) nounwind readnone

declare i6 @llvm.part.select.i6(i6, i32, i32) nounwind readnone

declare i5 @llvm.part.select.i5(i5, i32, i32) nounwind readnone

declare i32 @llvm.part.select.i32(i32, i32, i32) nounwind readnone

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

define internal fastcc void @conv_last([3072 x float]* nocapture %input_r, [98304 x float]* nocapture %weight, [512 x float]* nocapture %bias, [8192 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader5
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i10 [ 0, %0 ], [ %co_22, %.loopexit.loopexit ]
  %exitcond3 = icmp eq i10 %co, -512
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512)
  %co_22 = add i10 %co, 1
  br i1 %exitcond3, label %3, label %.preheader5.preheader

.preheader5.preheader:                            ; preds = %.loopexit
  %tmp = zext i10 %co to i64
  %tmp_s = call i18 @_ssdm_op_BitConcatenate.i18.i10.i8(i10 %co, i8 0)
  %tmp_284 = call i16 @_ssdm_op_BitConcatenate.i16.i10.i6(i10 %co, i6 0)
  %p_shl1_cast = zext i16 %tmp_284 to i18
  %tmp_285 = sub i18 %tmp_s, %p_shl1_cast
  %tmp_286 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %co, i2 0)
  %tmp_411_cast = zext i12 %tmp_286 to i13
  %bias_addr = getelementptr [512 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader5

.preheader5.loopexit:                             ; preds = %.preheader4
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %h = phi i3 [ 0, %.preheader5.preheader ], [ %h_22, %.preheader5.loopexit ]
  %exitcond2 = icmp eq i3 %h, -4
  %empty_75 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %h_22 = add i3 %h, 1
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader4.preheader

.preheader4.preheader:                            ; preds = %.preheader5
  %tmp_cast3 = zext i3 %h to i11
  %tmp_cast = zext i3 %h to i13
  %tmp_287 = add i13 %tmp_cast, %tmp_411_cast
  %tmp_414_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_287, i2 0)
  br label %.preheader4

.preheader4:                                      ; preds = %2, %.preheader4.preheader
  %w = phi i3 [ %w_22, %2 ], [ 0, %.preheader4.preheader ]
  %exitcond1 = icmp eq i3 %w, -4
  %empty_76 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %w_22 = add i3 %w, 1
  br i1 %exitcond1, label %.preheader5.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_82_cast2 = zext i3 %w to i13
  %tmp_82_cast = zext i3 %w to i15
  %tmp_288 = add i15 %tmp_414_cast, %tmp_82_cast
  %tmp_415_cast = zext i15 %tmp_288 to i64
  %output_addr = getelementptr [8192 x float]* %output_r, i64 0, i64 %tmp_415_cast
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum = phi float [ %sum_14, %1 ], [ 0.000000e+00, %.preheader.preheader ]
  %ci = phi i8 [ %ci_7, %1 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i8 %ci, -64
  %empty_77 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 192, i64 192, i64 192)
  %ci_7 = add i8 %ci, 1
  br i1 %exitcond, label %2, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_83_cast = zext i8 %ci to i18
  %tmp_289 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %ci, i2 0)
  %tmp_417_cast = zext i10 %tmp_289 to i11
  %tmp_290 = add i11 %tmp_cast3, %tmp_417_cast
  %tmp_420_cast = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_290, i2 0)
  %tmp_291 = add i13 %tmp_82_cast2, %tmp_420_cast
  %tmp_421_cast = zext i13 %tmp_291 to i64
  %input_addr = getelementptr [3072 x float]* %input_r, i64 0, i64 %tmp_421_cast
  %tmp_292 = add i18 %tmp_83_cast, %tmp_285
  %tmp_422_cast = sext i18 %tmp_292 to i64
  %weight_addr = getelementptr [98304 x float]* %weight, i64 0, i64 %tmp_422_cast
  %weight_load = load float* %weight_addr, align 4
  %input_load = load float* %input_addr, align 4
  %tmp_84 = fmul float %weight_load, %input_load
  %sum_14 = fadd float %sum, %tmp_84
  br label %.preheader

; <label>:2                                       ; preds = %.preheader
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %result_to_int = bitcast float %result to i32
  %tmp_31 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %result_to_int, i32 23, i32 30)
  %tmp_109 = trunc i32 %result_to_int to i23
  %notlhs = icmp ne i8 %tmp_31, -1
  %notrhs = icmp eq i23 %tmp_109, 0
  %tmp_33 = or i1 %notrhs, %notlhs
  %tmp_34 = fcmp ogt float %result, 0.000000e+00
  %tmp_35 = and i1 %tmp_33, %tmp_34
  %result_7 = select i1 %tmp_35, float %result, float 0.000000e+00
  store float %result_7, float* %output_addr, align 4
  br label %.preheader4

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @conv1_p([3468 x float]* nocapture %input_r, [648 x float]* nocapture %weight, [24 x float]* nocapture %bias, [27744 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader9
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i5 [ 0, %0 ], [ %co_23, %.loopexit.loopexit ]
  %exitcond5 = icmp eq i5 %co, -8
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_23 = add i5 %co, 1
  br i1 %exitcond5, label %4, label %.preheader9.preheader

.preheader9.preheader:                            ; preds = %.loopexit
  %tmp = zext i5 %co to i64
  %tmp_cast = zext i5 %co to i8
  %tmp_s = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co, i2 0)
  %p_shl2_cast = zext i7 %tmp_s to i8
  %tmp_293 = sub i8 %p_shl2_cast, %tmp_cast
  %tmp_424_cast = sext i8 %tmp_293 to i9
  %tmp_294 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co, i5 0)
  %p_shl_cast = zext i10 %tmp_294 to i11
  %tmp_295 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co, i1 false)
  %p_shl1_cast = zext i6 %tmp_295 to i11
  %tmp_296 = add i11 %p_shl1_cast, %p_shl_cast
  %bias_addr = getelementptr [24 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader9

.preheader9:                                      ; preds = %3, %.preheader9.preheader
  %h = phi i6 [ %h_23, %3 ], [ 1, %.preheader9.preheader ]
  %exitcond4 = icmp eq i6 %h, -31
  %empty_78 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  br i1 %exitcond4, label %.loopexit.loopexit, label %.preheader8.preheader

.preheader8.preheader:                            ; preds = %.preheader9
  %tmp_cast_79 = zext i6 %h to i11
  %tmp_297 = add i11 %tmp_cast_79, %tmp_296
  %p_shl3_cast = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_297, i5 0)
  %tmp_110 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_297, i1 false)
  %p_shl4_cast = zext i12 %tmp_110 to i16
  %tmp_298 = add i16 %p_shl3_cast, %p_shl4_cast
  br label %.preheader8

.preheader8:                                      ; preds = %2, %.preheader8.preheader
  %w = phi i6 [ %w_23, %2 ], [ 1, %.preheader8.preheader ]
  %exitcond3 = icmp eq i6 %w, -31
  %empty_80 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  br i1 %exitcond3, label %3, label %.preheader7.preheader

.preheader7.preheader:                            ; preds = %.preheader8
  br label %.preheader7

.preheader7.loopexit:                             ; preds = %.preheader6
  br label %.preheader7

.preheader7:                                      ; preds = %.preheader7.preheader, %.preheader7.loopexit
  %sum = phi float [ %sum_1, %.preheader7.loopexit ], [ 0.000000e+00, %.preheader7.preheader ]
  %ci = phi i2 [ %ci_8, %.preheader7.loopexit ], [ 0, %.preheader7.preheader ]
  %exitcond2 = icmp eq i2 %ci, -1
  %empty_81 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %ci_8 = add i2 %ci, 1
  br i1 %exitcond2, label %2, label %.preheader6.preheader

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_86_cast = zext i2 %ci to i9
  %tmp_300 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %ci, i5 0)
  %p_shl6_cast = zext i7 %tmp_300 to i8
  %tmp_301 = call i3 @_ssdm_op_BitConcatenate.i3.i2.i1(i2 %ci, i1 false)
  %p_shl7_cast = zext i3 %tmp_301 to i8
  %tmp_302 = add i8 %p_shl7_cast, %p_shl6_cast
  %tmp_303 = add i9 %tmp_424_cast, %tmp_86_cast
  %tmp_436_cast = sext i9 %tmp_303 to i64
  %tmp_112 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_303, i2 0)
  %p_shl5 = sext i11 %tmp_112 to i64
  %tmp_304 = sub i64 %p_shl5, %tmp_436_cast
  br label %.preheader6

.preheader6.loopexit:                             ; preds = %.preheader
  br label %.preheader6

.preheader6:                                      ; preds = %.preheader6.loopexit, %.preheader6.preheader
  %sum_1 = phi float [ %sum, %.preheader6.preheader ], [ %sum_2, %.preheader6.loopexit ]
  %m = phi i2 [ 0, %.preheader6.preheader ], [ %m_7, %.preheader6.loopexit ]
  %exitcond1 = icmp eq i2 %m, -1
  %empty_82 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_7 = add i2 %m, 1
  br i1 %exitcond1, label %.preheader7.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader6
  %tmp_87 = zext i2 %m to i64
  %tmp_305 = add i64 %tmp_304, %tmp_87
  %tmp_113 = trunc i64 %tmp_305 to i11
  %tmp_114 = trunc i64 %tmp_305 to i9
  %p_shl10_cast = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_114, i2 0)
  %tmp_306 = sub i11 %p_shl10_cast, %tmp_113
  %tmp1 = add i2 -1, %m
  %tmp1_cast = sext i2 %tmp1 to i6
  %tmp_88 = add i6 %h, %tmp1_cast
  %tmp_89_cast = zext i6 %tmp_88 to i8
  %tmp_307 = add i8 %tmp_302, %tmp_89_cast
  %p_shl8_cast = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_307, i5 0)
  %tmp_115 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_307, i1 false)
  %p_shl9_cast = zext i9 %tmp_115 to i13
  %tmp_308 = add i13 %p_shl9_cast, %p_shl8_cast
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum_2 = phi float [ %sum_15, %1 ], [ %sum_1, %.preheader.preheader ]
  %n = phi i2 [ %n_7, %1 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i2 %n, -1
  %empty_83 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_7 = add i2 %n, 1
  br i1 %exitcond, label %.preheader6.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_90_cast = zext i2 %n to i11
  %tmp_309 = add i11 %tmp_306, %tmp_90_cast
  %tmp_446_cast = zext i11 %tmp_309 to i64
  %weight_addr = getelementptr [648 x float]* %weight, i64 0, i64 %tmp_446_cast
  %weight_load = load float* %weight_addr, align 4
  %tmp2 = add i2 %n, -1
  %tmp2_cast = sext i2 %tmp2 to i6
  %tmp_91 = add i6 %w, %tmp2_cast
  %tmp_92_cast = zext i6 %tmp_91 to i13
  %tmp_310 = add i13 %tmp_308, %tmp_92_cast
  %tmp_447_cast = zext i13 %tmp_310 to i64
  %input_addr = getelementptr [3468 x float]* %input_r, i64 0, i64 %tmp_447_cast
  %input_load = load float* %input_addr, align 4
  %tmp_93 = fmul float %weight_load, %input_load
  %sum_15 = fadd float %sum_2, %tmp_93
  br label %.preheader

; <label>:2                                       ; preds = %.preheader7
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %result_to_int = bitcast float %result to i32
  %tmp_36 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %result_to_int, i32 23, i32 30)
  %tmp_111 = trunc i32 %result_to_int to i23
  %notlhs = icmp ne i8 %tmp_36, -1
  %notrhs = icmp eq i23 %tmp_111, 0
  %tmp_38 = or i1 %notrhs, %notlhs
  %tmp_39 = fcmp ogt float %result, 0.000000e+00
  %tmp_40 = and i1 %tmp_38, %tmp_39
  %result_8 = select i1 %tmp_40, float %result, float 0.000000e+00
  %tmp_85_cast = zext i6 %w to i16
  %tmp_299 = add i16 %tmp_298, %tmp_85_cast
  %tmp_432_cast = zext i16 %tmp_299 to i64
  %output_addr = getelementptr [27744 x float]* %output_r, i64 0, i64 %tmp_432_cast
  store float %result_8, float* %output_addr, align 4
  %w_23 = add i6 1, %w
  br label %.preheader8

; <label>:3                                       ; preds = %.preheader8
  %h_23 = add i6 %h, 1
  br label %.preheader9

; <label>:4                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @avgpool([512 x float]* nocapture %output_r) {
  br label %1

; <label>:1                                       ; preds = %3, %0
  %co = phi i10 [ 0, %0 ], [ %co_24, %3 ]
  %exitcond2 = icmp eq i10 %co, -512
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512)
  %co_24 = add i10 %co, 1
  br i1 %exitcond2, label %4, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %1
  %tmp = zext i10 %co to i64
  %tmp_311 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %co, i2 0)
  %tmp_449_cast = zext i12 %tmp_311 to i13
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %sum = phi float [ 0.000000e+00, %.preheader3.preheader ], [ %sum_1, %.preheader3.loopexit ]
  %h = phi i3 [ 0, %.preheader3.preheader ], [ %h_24, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i3 %h, -4
  %empty_84 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %h_24 = add i3 %h, 1
  br i1 %exitcond1, label %3, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_94_cast = zext i3 %h to i13
  %tmp_312 = add i13 %tmp_94_cast, %tmp_449_cast
  %tmp_452_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_312, i2 0)
  br label %.preheader

.preheader:                                       ; preds = %2, %.preheader.preheader
  %sum_1 = phi float [ %sum_16, %2 ], [ %sum, %.preheader.preheader ]
  %w = phi i3 [ %w_24, %2 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i3 %w, -4
  %empty_85 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %w_24 = add i3 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %2

; <label>:2                                       ; preds = %.preheader
  %tmp_95_cast = zext i3 %w to i15
  %tmp_313 = add i15 %tmp_452_cast, %tmp_95_cast
  %tmp_453_cast = zext i15 %tmp_313 to i64
  %conv_last_output_add = getelementptr [8192 x float]* @conv_last_output, i64 0, i64 %tmp_453_cast
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
  %empty_86 = trunc i32 %empty to i8
  ret i8 %empty_86
}

declare i8 @_ssdm_op_PartSelect.i8.i10.i32.i32(i10, i32, i32) nounwind readnone

declare i7 @_ssdm_op_PartSelect.i7.i9.i32.i32(i9, i32, i32) nounwind readnone

define weak i7 @_ssdm_op_PartSelect.i7.i8.i32.i32(i8, i32, i32) nounwind readnone {
entry:
  %empty = call i8 @llvm.part.select.i8(i8 %0, i32 %1, i32 %2)
  %empty_87 = trunc i8 %empty to i7
  ret i7 %empty_87
}

define weak i6 @_ssdm_op_PartSelect.i6.i7.i32.i32(i7, i32, i32) nounwind readnone {
entry:
  %empty = call i7 @llvm.part.select.i7(i7 %0, i32 %1, i32 %2)
  %empty_88 = trunc i7 %empty to i6
  ret i6 %empty_88
}

define weak i5 @_ssdm_op_PartSelect.i5.i6.i32.i32(i6, i32, i32) nounwind readnone {
entry:
  %empty = call i6 @llvm.part.select.i6(i6 %0, i32 %1, i32 %2)
  %empty_89 = trunc i6 %empty to i5
  ret i5 %empty_89
}

define weak i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5, i32, i32) nounwind readnone {
entry:
  %empty = call i5 @llvm.part.select.i5(i5 %0, i32 %1, i32 %2)
  %empty_90 = trunc i5 %empty to i4
  ret i4 %empty_90
}

define weak i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5, i32, i32) nounwind readnone {
entry:
  %empty = call i5 @llvm.part.select.i5(i5 %0, i32 %1, i32 %2)
  %empty_91 = trunc i5 %empty to i3
  ret i3 %empty_91
}

declare i23 @_ssdm_op_PartSelect.i23.i32.i32.i32(i32, i32, i32) nounwind readnone

declare i2 @_ssdm_op_PartSelect.i2.i5.i32.i32(i5, i32, i32) nounwind readnone

declare i2 @_ssdm_op_PartSelect.i2.i3.i32.i32(i3, i32, i32) nounwind readnone

declare i13 @_ssdm_op_PartSelect.i13.i15.i32.i32(i15, i32, i32) nounwind readnone

declare i13 @_ssdm_op_PartSelect.i13.i14.i32.i32(i14, i32, i32) nounwind readnone

declare i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64, i32, i32) nounwind readnone

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

define weak i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8, i1) nounwind readnone {
entry:
  %empty = zext i8 %0 to i9
  %empty_92 = zext i1 %1 to i9
  %empty_93 = shl i9 %empty, 1
  %empty_94 = or i9 %empty_93, %empty_92
  ret i9 %empty_94
}

define weak i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7, i2) nounwind readnone {
entry:
  %empty = zext i7 %0 to i9
  %empty_95 = zext i2 %1 to i9
  %empty_96 = shl i9 %empty, 2
  %empty_97 = or i9 %empty_96, %empty_95
  ret i9 %empty_97
}

define weak i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6, i3) nounwind readnone {
entry:
  %empty = zext i6 %0 to i9
  %empty_98 = zext i3 %1 to i9
  %empty_99 = shl i9 %empty, 3
  %empty_100 = or i9 %empty_99, %empty_98
  ret i9 %empty_100
}

define weak i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5, i4) nounwind readnone {
entry:
  %empty = zext i5 %0 to i9
  %empty_101 = zext i4 %1 to i9
  %empty_102 = shl i9 %empty, 4
  %empty_103 = or i9 %empty_102, %empty_101
  ret i9 %empty_103
}

define weak i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4, i5) nounwind readnone {
entry:
  %empty = zext i4 %0 to i9
  %empty_104 = zext i5 %1 to i9
  %empty_105 = shl i9 %empty, 5
  %empty_106 = or i9 %empty_105, %empty_104
  ret i9 %empty_106
}

define weak i9 @_ssdm_op_BitConcatenate.i9.i1.i5.i3(i1, i5, i3) nounwind readnone {
entry:
  %empty = zext i5 %1 to i8
  %empty_107 = zext i3 %2 to i8
  %empty_108 = shl i8 %empty, 3
  %empty_109 = or i8 %empty_108, %empty_107
  %empty_110 = zext i1 %0 to i9
  %empty_111 = zext i8 %empty_109 to i9
  %empty_112 = shl i9 %empty_110, 8
  %empty_113 = or i9 %empty_112, %empty_111
  ret i9 %empty_113
}

define weak i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7, i1) nounwind readnone {
entry:
  %empty = zext i7 %0 to i8
  %empty_114 = zext i1 %1 to i8
  %empty_115 = shl i8 %empty, 1
  %empty_116 = or i8 %empty_115, %empty_114
  ret i8 %empty_116
}

define weak i8 @_ssdm_op_BitConcatenate.i8.i6.i2(i6, i2) nounwind readnone {
entry:
  %empty = zext i6 %0 to i8
  %empty_117 = zext i2 %1 to i8
  %empty_118 = shl i8 %empty, 2
  %empty_119 = or i8 %empty_118, %empty_117
  ret i8 %empty_119
}

define weak i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5, i3) nounwind readnone {
entry:
  %empty = zext i5 %0 to i8
  %empty_120 = zext i3 %1 to i8
  %empty_121 = shl i8 %empty, 3
  %empty_122 = or i8 %empty_121, %empty_120
  ret i8 %empty_122
}

define weak i8 @_ssdm_op_BitConcatenate.i8.i1.i5.i2(i1, i5, i2) nounwind readnone {
entry:
  %empty = zext i5 %1 to i7
  %empty_123 = zext i2 %2 to i7
  %empty_124 = shl i7 %empty, 2
  %empty_125 = or i7 %empty_124, %empty_123
  %empty_126 = zext i1 %0 to i8
  %empty_127 = zext i7 %empty_125 to i8
  %empty_128 = shl i8 %empty_126, 7
  %empty_129 = or i8 %empty_128, %empty_127
  ret i8 %empty_129
}

define weak i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6, i1) nounwind readnone {
entry:
  %empty = zext i6 %0 to i7
  %empty_130 = zext i1 %1 to i7
  %empty_131 = shl i7 %empty, 1
  %empty_132 = or i7 %empty_131, %empty_130
  ret i7 %empty_132
}

define weak i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5, i2) nounwind readnone {
entry:
  %empty = zext i5 %0 to i7
  %empty_133 = zext i2 %1 to i7
  %empty_134 = shl i7 %empty, 2
  %empty_135 = or i7 %empty_134, %empty_133
  ret i7 %empty_135
}

define weak i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4, i3) nounwind readnone {
entry:
  %empty = zext i4 %0 to i7
  %empty_136 = zext i3 %1 to i7
  %empty_137 = shl i7 %empty, 3
  %empty_138 = or i7 %empty_137, %empty_136
  ret i7 %empty_138
}

define weak i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2, i5) nounwind readnone {
entry:
  %empty = zext i2 %0 to i7
  %empty_139 = zext i5 %1 to i7
  %empty_140 = shl i7 %empty, 5
  %empty_141 = or i7 %empty_140, %empty_139
  ret i7 %empty_141
}

define weak i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5, i1) nounwind readnone {
entry:
  %empty = zext i5 %0 to i6
  %empty_142 = zext i1 %1 to i6
  %empty_143 = shl i6 %empty, 1
  %empty_144 = or i6 %empty_143, %empty_142
  ret i6 %empty_144
}

define weak i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2, i4) nounwind readnone {
entry:
  %empty = zext i2 %0 to i6
  %empty_145 = zext i4 %1 to i6
  %empty_146 = shl i6 %empty, 4
  %empty_147 = or i6 %empty_146, %empty_145
  ret i6 %empty_147
}

define weak i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1, i5) nounwind readnone {
entry:
  %empty = zext i1 %0 to i6
  %empty_148 = zext i5 %1 to i6
  %empty_149 = shl i6 %empty, 5
  %empty_150 = or i6 %empty_149, %empty_148
  ret i6 %empty_150
}

define weak i5 @_ssdm_op_BitConcatenate.i5.i4.i1(i4, i1) nounwind readnone {
entry:
  %empty = zext i4 %0 to i5
  %empty_151 = zext i1 %1 to i5
  %empty_152 = shl i5 %empty, 1
  %empty_153 = or i5 %empty_152, %empty_151
  ret i5 %empty_153
}

define weak i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2, i3) nounwind readnone {
entry:
  %empty = zext i2 %0 to i5
  %empty_154 = zext i3 %1 to i5
  %empty_155 = shl i5 %empty, 3
  %empty_156 = or i5 %empty_155, %empty_154
  ret i5 %empty_156
}

define weak i4 @_ssdm_op_BitConcatenate.i4.i3.i1(i3, i1) nounwind readnone {
entry:
  %empty = zext i3 %0 to i4
  %empty_157 = zext i1 %1 to i4
  %empty_158 = shl i4 %empty, 1
  %empty_159 = or i4 %empty_158, %empty_157
  ret i4 %empty_159
}

define weak i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2, i2) nounwind readnone {
entry:
  %empty = zext i2 %0 to i4
  %empty_160 = zext i2 %1 to i4
  %empty_161 = shl i4 %empty, 2
  %empty_162 = or i4 %empty_161, %empty_160
  ret i4 %empty_162
}

define weak i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1, i3) nounwind readnone {
entry:
  %empty = zext i1 %0 to i4
  %empty_163 = zext i3 %1 to i4
  %empty_164 = shl i4 %empty, 3
  %empty_165 = or i4 %empty_164, %empty_163
  ret i4 %empty_165
}

define weak i3 @_ssdm_op_BitConcatenate.i3.i2.i1(i2, i1) nounwind readnone {
entry:
  %empty = zext i2 %0 to i3
  %empty_166 = zext i1 %1 to i3
  %empty_167 = shl i3 %empty, 1
  %empty_168 = or i3 %empty_167, %empty_166
  ret i3 %empty_168
}

define weak i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13, i5) nounwind readnone {
entry:
  %empty = zext i13 %0 to i18
  %empty_169 = zext i5 %1 to i18
  %empty_170 = shl i18 %empty, 5
  %empty_171 = or i18 %empty_170, %empty_169
  ret i18 %empty_171
}

define weak i18 @_ssdm_op_BitConcatenate.i18.i10.i8(i10, i8) nounwind readnone {
entry:
  %empty = zext i10 %0 to i18
  %empty_172 = zext i8 %1 to i18
  %empty_173 = shl i18 %empty, 8
  %empty_174 = or i18 %empty_173, %empty_172
  ret i18 %empty_174
}

define weak i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12, i5) nounwind readnone {
entry:
  %empty = zext i12 %0 to i17
  %empty_175 = zext i5 %1 to i17
  %empty_176 = shl i17 %empty, 5
  %empty_177 = or i17 %empty_176, %empty_175
  ret i17 %empty_177
}

define weak i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13, i3) nounwind readnone {
entry:
  %empty = zext i13 %0 to i16
  %empty_178 = zext i3 %1 to i16
  %empty_179 = shl i16 %empty, 3
  %empty_180 = or i16 %empty_179, %empty_178
  ret i16 %empty_180
}

define weak i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11, i5) nounwind readnone {
entry:
  %empty = zext i11 %0 to i16
  %empty_181 = zext i5 %1 to i16
  %empty_182 = shl i16 %empty, 5
  %empty_183 = or i16 %empty_182, %empty_181
  ret i16 %empty_183
}

define weak i16 @_ssdm_op_BitConcatenate.i16.i10.i6(i10, i6) nounwind readnone {
entry:
  %empty = zext i10 %0 to i16
  %empty_184 = zext i6 %1 to i16
  %empty_185 = shl i16 %empty, 6
  %empty_186 = or i16 %empty_185, %empty_184
  ret i16 %empty_186
}

define weak i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8, i7) nounwind readnone {
entry:
  %empty = zext i8 %0 to i15
  %empty_187 = zext i7 %1 to i15
  %empty_188 = shl i15 %empty, 7
  %empty_189 = or i15 %empty_188, %empty_187
  ret i15 %empty_189
}

define weak i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13, i2) nounwind readnone {
entry:
  %empty = zext i13 %0 to i15
  %empty_190 = zext i2 %1 to i15
  %empty_191 = shl i15 %empty, 2
  %empty_192 = or i15 %empty_191, %empty_190
  ret i15 %empty_192
}

define weak i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12, i3) nounwind readnone {
entry:
  %empty = zext i12 %0 to i15
  %empty_193 = zext i3 %1 to i15
  %empty_194 = shl i15 %empty, 3
  %empty_195 = or i15 %empty_194, %empty_193
  ret i15 %empty_195
}

define weak i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11, i4) nounwind readnone {
entry:
  %empty = zext i11 %0 to i15
  %empty_196 = zext i4 %1 to i15
  %empty_197 = shl i15 %empty, 4
  %empty_198 = or i15 %empty_197, %empty_196
  ret i15 %empty_198
}

define weak i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10, i5) nounwind readnone {
entry:
  %empty = zext i10 %0 to i15
  %empty_199 = zext i5 %1 to i15
  %empty_200 = shl i15 %empty, 5
  %empty_201 = or i15 %empty_200, %empty_199
  ret i15 %empty_201
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i9.i5(i9, i5) nounwind readnone {
entry:
  %empty = zext i9 %0 to i14
  %empty_202 = zext i5 %1 to i14
  %empty_203 = shl i14 %empty, 5
  %empty_204 = or i14 %empty_203, %empty_202
  ret i14 %empty_204
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i7.i7(i7, i7) nounwind readnone {
entry:
  %empty = zext i7 %0 to i14
  %empty_205 = zext i7 %1 to i14
  %empty_206 = shl i14 %empty, 7
  %empty_207 = or i14 %empty_206, %empty_205
  ret i14 %empty_207
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i13.i1(i13, i1) nounwind readnone {
entry:
  %empty = zext i13 %0 to i14
  %empty_208 = zext i1 %1 to i14
  %empty_209 = shl i14 %empty, 1
  %empty_210 = or i14 %empty_209, %empty_208
  ret i14 %empty_210
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12, i2) nounwind readnone {
entry:
  %empty = zext i12 %0 to i14
  %empty_211 = zext i2 %1 to i14
  %empty_212 = shl i14 %empty, 2
  %empty_213 = or i14 %empty_212, %empty_211
  ret i14 %empty_213
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11, i3) nounwind readnone {
entry:
  %empty = zext i11 %0 to i14
  %empty_214 = zext i3 %1 to i14
  %empty_215 = shl i14 %empty, 3
  %empty_216 = or i14 %empty_215, %empty_214
  ret i14 %empty_216
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10, i4) nounwind readnone {
entry:
  %empty = zext i10 %0 to i14
  %empty_217 = zext i4 %1 to i14
  %empty_218 = shl i14 %empty, 4
  %empty_219 = or i14 %empty_218, %empty_217
  ret i14 %empty_219
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8, i5) nounwind readnone {
entry:
  %empty = zext i8 %0 to i13
  %empty_220 = zext i5 %1 to i13
  %empty_221 = shl i13 %empty, 5
  %empty_222 = or i13 %empty_221, %empty_220
  ret i13 %empty_222
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7, i6) nounwind readnone {
entry:
  %empty = zext i7 %0 to i13
  %empty_223 = zext i6 %1 to i13
  %empty_224 = shl i13 %empty, 6
  %empty_225 = or i13 %empty_224, %empty_223
  ret i13 %empty_225
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i4.i9(i4, i9) nounwind readnone {
entry:
  %empty = zext i4 %0 to i13
  %empty_226 = zext i9 %1 to i13
  %empty_227 = shl i13 %empty, 9
  %empty_228 = or i13 %empty_227, %empty_226
  ret i13 %empty_228
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12, i1) nounwind readnone {
entry:
  %empty = zext i12 %0 to i13
  %empty_229 = zext i1 %1 to i13
  %empty_230 = shl i13 %empty, 1
  %empty_231 = or i13 %empty_230, %empty_229
  ret i13 %empty_231
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11, i2) nounwind readnone {
entry:
  %empty = zext i11 %0 to i13
  %empty_232 = zext i2 %1 to i13
  %empty_233 = shl i13 %empty, 2
  %empty_234 = or i13 %empty_233, %empty_232
  ret i13 %empty_234
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10, i3) nounwind readnone {
entry:
  %empty = zext i10 %0 to i13
  %empty_235 = zext i3 %1 to i13
  %empty_236 = shl i13 %empty, 3
  %empty_237 = or i13 %empty_236, %empty_235
  ret i13 %empty_237
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9, i3) nounwind readnone {
entry:
  %empty = zext i9 %0 to i12
  %empty_238 = zext i3 %1 to i12
  %empty_239 = shl i12 %empty, 3
  %empty_240 = or i12 %empty_239, %empty_238
  ret i12 %empty_240
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i7.i5(i7, i5) nounwind readnone {
entry:
  %empty = zext i7 %0 to i12
  %empty_241 = zext i5 %1 to i12
  %empty_242 = shl i12 %empty, 5
  %empty_243 = or i12 %empty_242, %empty_241
  ret i12 %empty_243
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i6.i6(i6, i6) nounwind readnone {
entry:
  %empty = zext i6 %0 to i12
  %empty_244 = zext i6 %1 to i12
  %empty_245 = shl i12 %empty, 6
  %empty_246 = or i12 %empty_245, %empty_244
  ret i12 %empty_246
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i2.i5.i5(i2, i5, i5) nounwind readnone {
entry:
  %empty = zext i5 %1 to i10
  %empty_247 = zext i5 %2 to i10
  %empty_248 = shl i10 %empty, 5
  %empty_249 = or i10 %empty_248, %empty_247
  %empty_250 = zext i2 %0 to i12
  %empty_251 = zext i10 %empty_249 to i12
  %empty_252 = shl i12 %empty_250, 10
  %empty_253 = or i12 %empty_252, %empty_251
  ret i12 %empty_253
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11, i1) nounwind readnone {
entry:
  %empty = zext i11 %0 to i12
  %empty_254 = zext i1 %1 to i12
  %empty_255 = shl i12 %empty, 1
  %empty_256 = or i12 %empty_255, %empty_254
  ret i12 %empty_256
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10, i2) nounwind readnone {
entry:
  %empty = zext i10 %0 to i12
  %empty_257 = zext i2 %1 to i12
  %empty_258 = shl i12 %empty, 2
  %empty_259 = or i12 %empty_258, %empty_257
  ret i12 %empty_259
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9, i2) nounwind readnone {
entry:
  %empty = zext i9 %0 to i11
  %empty_260 = zext i2 %1 to i11
  %empty_261 = shl i11 %empty, 2
  %empty_262 = or i11 %empty_261, %empty_260
  ret i11 %empty_262
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8, i3) nounwind readnone {
entry:
  %empty = zext i8 %0 to i11
  %empty_263 = zext i3 %1 to i11
  %empty_264 = shl i11 %empty, 3
  %empty_265 = or i11 %empty_264, %empty_263
  ret i11 %empty_265
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7, i4) nounwind readnone {
entry:
  %empty = zext i7 %0 to i11
  %empty_266 = zext i4 %1 to i11
  %empty_267 = shl i11 %empty, 4
  %empty_268 = or i11 %empty_267, %empty_266
  ret i11 %empty_268
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i6.i5(i6, i5) nounwind readnone {
entry:
  %empty = zext i6 %0 to i11
  %empty_269 = zext i5 %1 to i11
  %empty_270 = shl i11 %empty, 5
  %empty_271 = or i11 %empty_270, %empty_269
  ret i11 %empty_271
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10, i1) nounwind readnone {
entry:
  %empty = zext i10 %0 to i11
  %empty_272 = zext i1 %1 to i11
  %empty_273 = shl i11 %empty, 1
  %empty_274 = or i11 %empty_273, %empty_272
  ret i11 %empty_274
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i1.i5.i5(i1, i5, i5) nounwind readnone {
entry:
  %empty = zext i5 %1 to i10
  %empty_275 = zext i5 %2 to i10
  %empty_276 = shl i10 %empty, 5
  %empty_277 = or i10 %empty_276, %empty_275
  %empty_278 = zext i1 %0 to i11
  %empty_279 = zext i10 %empty_277 to i11
  %empty_280 = shl i11 %empty_278, 10
  %empty_281 = or i11 %empty_280, %empty_279
  ret i11 %empty_281
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8, i2) nounwind readnone {
entry:
  %empty = zext i8 %0 to i10
  %empty_282 = zext i2 %1 to i10
  %empty_283 = shl i10 %empty, 2
  %empty_284 = or i10 %empty_283, %empty_282
  ret i10 %empty_284
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7, i3) nounwind readnone {
entry:
  %empty = zext i7 %0 to i10
  %empty_285 = zext i3 %1 to i10
  %empty_286 = shl i10 %empty, 3
  %empty_287 = or i10 %empty_286, %empty_285
  ret i10 %empty_287
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6, i4) nounwind readnone {
entry:
  %empty = zext i6 %0 to i10
  %empty_288 = zext i4 %1 to i10
  %empty_289 = shl i10 %empty, 4
  %empty_290 = or i10 %empty_289, %empty_288
  ret i10 %empty_290
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5, i5) nounwind readnone {
entry:
  %empty = zext i5 %0 to i10
  %empty_291 = zext i5 %1 to i10
  %empty_292 = shl i10 %empty, 5
  %empty_293 = or i10 %empty_292, %empty_291
  ret i10 %empty_293
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i2.i5.i3(i2, i5, i3) nounwind readnone {
entry:
  %empty = zext i5 %1 to i8
  %empty_294 = zext i3 %2 to i8
  %empty_295 = shl i8 %empty, 3
  %empty_296 = or i8 %empty_295, %empty_294
  %empty_297 = zext i2 %0 to i10
  %empty_298 = zext i8 %empty_296 to i10
  %empty_299 = shl i10 %empty_297, 8
  %empty_300 = or i10 %empty_299, %empty_298
  ret i10 %empty_300
}

declare void @_GLOBAL__I_a55() nounwind section ".text.startup"

declare void @_GLOBAL__I_a() nounwind section ".text.startup"

define void @ShuffleNetV2([3072 x float]* %image_r, [648 x float]* %conv1_weight, [9720 x float]* %shuffle_conv_3x3, [131904 x float]* %shuffle_conv_1x1, [98304 x float]* %conv_last_weight, [5120 x float]* %fc_weight, [3618 x float]* %bias, [1000 x float]* %fc_output) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap([3072 x float]* %image_r) nounwind, !map !367
  call void (...)* @_ssdm_op_SpecBitsMap([648 x float]* %conv1_weight) nounwind, !map !372
  call void (...)* @_ssdm_op_SpecBitsMap([9720 x float]* %shuffle_conv_3x3) nounwind, !map !377
  call void (...)* @_ssdm_op_SpecBitsMap([131904 x float]* %shuffle_conv_1x1) nounwind, !map !383
  call void (...)* @_ssdm_op_SpecBitsMap([98304 x float]* %conv_last_weight) nounwind, !map !389
  call void (...)* @_ssdm_op_SpecBitsMap([5120 x float]* %fc_weight) nounwind, !map !394
  call void (...)* @_ssdm_op_SpecBitsMap([3618 x float]* %bias) nounwind, !map !399
  call void (...)* @_ssdm_op_SpecBitsMap([1000 x float]* %fc_output) nounwind, !map !405
  call void (...)* @_ssdm_op_SpecTopModule([13 x i8]* @ShuffleNetV2_str) nounwind
  br label %1

; <label>:1                                       ; preds = %2, %0
  %i = phi i5 [ 0, %0 ], [ %i_1, %2 ]
  %exitcond = icmp eq i5 %i, -8
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_1 = add i5 %i, 1
  br i1 %exitcond, label %.preheader666.preheader, label %2

.preheader666.preheader:                          ; preds = %1
  br label %.preheader666

; <label>:2                                       ; preds = %1
  %tmp = zext i5 %i to i64
  %bias_addr = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp
  %bias_load = load float* %bias_addr, align 4
  %conv1_bias_addr = getelementptr inbounds [24 x float]* @conv1_bias, i64 0, i64 %tmp
  store float %bias_load, float* %conv1_bias_addr, align 4
  br label %1

.preheader666:                                    ; preds = %.preheader666.preheader, %3
  %i1 = phi i10 [ %i_2, %3 ], [ 0, %.preheader666.preheader ]
  %i1_cast710_cast = zext i10 %i1 to i11
  %exitcond369 = icmp eq i10 %i1, -512
  %empty_301 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512) nounwind
  %i_2 = add i10 %i1, 1
  br i1 %exitcond369, label %.preheader665.preheader, label %3

.preheader665.preheader:                          ; preds = %.preheader666
  br label %.preheader665

; <label>:3                                       ; preds = %.preheader666
  %tmp_s = add i11 %i1_cast710_cast, -1000
  %tmp_cast = sext i11 %tmp_s to i12
  %tmp_96 = zext i12 %tmp_cast to i64
  %bias_addr_1 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_96
  %bias_load_1 = load float* %bias_addr_1, align 4
  %tmp_97 = zext i10 %i1 to i64
  %conv_last_bias_addr = getelementptr inbounds [512 x float]* @conv_last_bias, i64 0, i64 %tmp_97
  store float %bias_load_1, float* %conv_last_bias_addr, align 4
  br label %.preheader666

.preheader665:                                    ; preds = %.preheader665.preheader, %4
  %i2 = phi i4 [ %i_3, %4 ], [ 0, %.preheader665.preheader ]
  %i2_cast708_cast = zext i4 %i2 to i10
  %exitcond368 = icmp eq i4 %i2, -6
  %empty_302 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10) nounwind
  %i_3 = add i4 %i2, 1
  br i1 %exitcond368, label %.preheader664.preheader, label %4

.preheader664.preheader:                          ; preds = %.preheader665
  br label %.preheader664

; <label>:4                                       ; preds = %.preheader665
  %tmp_98 = add i10 %i2_cast708_cast, -488
  %tmp_147_cast = sext i10 %tmp_98 to i12
  %tmp_99 = zext i12 %tmp_147_cast to i64
  %bias_addr_2 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_99
  %bias_load_2 = load float* %bias_addr_2, align 4
  %tmp_100 = zext i4 %i2 to i64
  %fc_bias_addr = getelementptr inbounds [10 x float]* @fc_bias, i64 0, i64 %tmp_100
  store float %bias_load_2, float* %fc_bias_addr, align 4
  br label %.preheader665

.preheader664.loopexit:                           ; preds = %.preheader663
  br label %.preheader664

.preheader664:                                    ; preds = %.preheader664.preheader, %.preheader664.loopexit
  %ci = phi i2 [ %ci_9, %.preheader664.loopexit ], [ 0, %.preheader664.preheader ]
  %exitcond367 = icmp eq i2 %ci, -1
  %empty_303 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %ci_9 = add i2 %ci, 1
  br i1 %exitcond367, label %6, label %.preheader663.preheader

.preheader663.preheader:                          ; preds = %.preheader664
  %tmp_322 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %ci, i5 0)
  %tmp_463_cast1 = zext i7 %tmp_322 to i8
  %tmp_329 = call i3 @_ssdm_op_BitConcatenate.i3.i2.i1(i2 %ci, i1 false)
  %p_shl276_cast = zext i3 %tmp_329 to i8
  %tmp_330 = add i8 %p_shl276_cast, %tmp_463_cast1
  br label %.preheader663

.preheader663.loopexit:                           ; preds = %.preheader662
  br label %.preheader663

.preheader663:                                    ; preds = %.preheader663.loopexit, %.preheader663.preheader
  %w = phi i6 [ 0, %.preheader663.preheader ], [ %w_25, %.preheader663.loopexit ]
  %exitcond366 = icmp eq i6 %w, -32
  %empty_304 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32) nounwind
  %w_25 = add i6 %w, 1
  br i1 %exitcond366, label %.preheader664.loopexit, label %.preheader662.preheader

.preheader662.preheader:                          ; preds = %.preheader663
  %tmp_101_cast = zext i6 %w to i8
  %tmp_348 = add i8 %tmp_101_cast, %tmp_463_cast1
  %tmp_516_cast = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_348, i5 0)
  %tmp_102_cast = zext i6 %w_25 to i8
  %tmp_350 = add i8 %tmp_102_cast, %tmp_330
  %p_shl277_cast = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_350, i5 0)
  %tmp_119 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_350, i1 false)
  %p_shl278_cast = zext i9 %tmp_119 to i13
  %tmp_351 = add i13 %p_shl277_cast, %p_shl278_cast
  br label %.preheader662

.preheader662:                                    ; preds = %5, %.preheader662.preheader
  %h = phi i6 [ %h_25, %5 ], [ 0, %.preheader662.preheader ]
  %exitcond365 = icmp eq i6 %h, -32
  %empty_305 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32) nounwind
  %h_25 = add i6 %h, 1
  br i1 %exitcond365, label %.preheader663.loopexit, label %5

; <label>:5                                       ; preds = %.preheader662
  %tmp_107_cast = zext i6 %h to i13
  %tmp_354 = add i13 %tmp_516_cast, %tmp_107_cast
  %tmp_565_cast = zext i13 %tmp_354 to i64
  %image_addr = getelementptr [3072 x float]* %image_r, i64 0, i64 %tmp_565_cast
  %image_load = load float* %image_addr, align 4
  %tmp_108_cast = zext i6 %h_25 to i13
  %tmp_355 = add i13 %tmp_351, %tmp_108_cast
  %tmp_566_cast = zext i13 %tmp_355 to i64
  %image_p_addr = getelementptr [3468 x float]* @image_p, i64 0, i64 %tmp_566_cast
  store float %image_load, float* %image_p_addr, align 4
  br label %.preheader662

; <label>:6                                       ; preds = %.preheader664
  call fastcc void @conv1_p([3468 x float]* @image_p, [648 x float]* %conv1_weight, [24 x float]* @conv1_bias, [27744 x float]* @conv1_output_p) nounwind
  br label %.loopexit907

.loopexit907.loopexit:                            ; preds = %.preheader661
  br label %.loopexit907

.loopexit907:                                     ; preds = %.loopexit907.loopexit, %6
  %co = phi i5 [ 0, %6 ], [ %co_25, %.loopexit907.loopexit ]
  %exitcond364 = icmp eq i5 %co, -8
  %empty_306 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_25 = add i5 %co, 1
  br i1 %exitcond364, label %.preheader660.preheader, label %.preheader661.preheader

.preheader660.preheader:                          ; preds = %.loopexit907
  br label %.preheader660

.preheader661.preheader:                          ; preds = %.loopexit907
  %tmp_332 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co, i5 0)
  %p_shl279_cast = zext i10 %tmp_332 to i11
  %tmp_335 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co, i3 0)
  %p_shl280_cast = zext i8 %tmp_335 to i11
  %tmp_337 = sub i11 %p_shl279_cast, %p_shl280_cast
  %tmp_510_cast = sext i11 %tmp_337 to i12
  br label %.preheader661

.preheader661:                                    ; preds = %7, %.preheader661.preheader
  %ci3 = phi i5 [ %ci_10, %7 ], [ 0, %.preheader661.preheader ]
  %exitcond363 = icmp eq i5 %ci3, -8
  %empty_307 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_10 = add i5 %ci3, 1
  br i1 %exitcond363, label %.loopexit907.loopexit, label %7

; <label>:7                                       ; preds = %.preheader661
  %tmp_106_cast = zext i5 %ci3 to i12
  %tmp_352 = add i12 %tmp_510_cast, %tmp_106_cast
  %tmp_563_cast = sext i12 %tmp_352 to i64
  %shuffle_conv_1x1_add = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_563_cast
  %weights_24_24_1x1_ad = getelementptr [576 x float]* @weights_24_24_1x1, i64 0, i64 %tmp_563_cast
  %shuffle_conv_1x1_loa = load float* %shuffle_conv_1x1_add, align 4
  store float %shuffle_conv_1x1_loa, float* %weights_24_24_1x1_ad, align 4
  br label %.preheader661

.preheader660:                                    ; preds = %.preheader660.preheader, %8
  %i4 = phi i5 [ %i_4, %8 ], [ 0, %.preheader660.preheader ]
  %i4_cast = zext i5 %i4 to i6
  %exitcond362 = icmp eq i5 %i4, -8
  %empty_308 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_4 = add i5 %i4, 1
  br i1 %exitcond362, label %9, label %8

; <label>:8                                       ; preds = %.preheader660
  %tmp_103 = add i6 %i4_cast, 24
  %tmp_104 = zext i6 %tmp_103 to i64
  %bias_addr_3 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_104
  %bias_load_3 = load float* %bias_addr_3, align 4
  %tmp_105 = zext i5 %i4 to i64
  %bias_24_addr = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_105
  store float %bias_load_3, float* %bias_24_addr, align 4
  br label %.preheader660

; <label>:9                                       ; preds = %.preheader660
  call fastcc void @subconv_1x1_32_p([576 x float]* @weights_24_24_1x1, [24 x float]* @bias_24) nounwind
  br label %.loopexit906

.loopexit906.loopexit:                            ; preds = %.preheader659
  br label %.loopexit906

.loopexit906:                                     ; preds = %.loopexit906.loopexit, %9
  %co5 = phi i5 [ 0, %9 ], [ %co_26, %.loopexit906.loopexit ]
  %exitcond361 = icmp eq i5 %co5, -8
  %empty_309 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_26 = add i5 %co5, 1
  br i1 %exitcond361, label %.preheader657.preheader, label %.preheader659.preheader

.preheader657.preheader:                          ; preds = %.loopexit906
  br label %.preheader657

.preheader659.preheader:                          ; preds = %.loopexit906
  %tmp_109_cast = zext i5 %co5 to i8
  %tmp_365 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co5, i2 0)
  %p_shl281_cast = zext i7 %tmp_365 to i8
  %tmp_372 = sub i8 %p_shl281_cast, %tmp_109_cast
  %tmp_585_cast = sext i8 %tmp_372 to i9
  br label %.preheader659

.preheader659.loopexit:                           ; preds = %.preheader658
  br label %.preheader659

.preheader659:                                    ; preds = %.preheader659.loopexit, %.preheader659.preheader
  %w6 = phi i2 [ 0, %.preheader659.preheader ], [ %w_26, %.preheader659.loopexit ]
  %exitcond360 = icmp eq i2 %w6, -1
  %empty_310 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_26 = add i2 %w6, 1
  br i1 %exitcond360, label %.loopexit906.loopexit, label %.preheader658.preheader

.preheader658.preheader:                          ; preds = %.preheader659
  %tmp_113_cast = zext i2 %w6 to i9
  %tmp_373 = add i9 %tmp_113_cast, %tmp_585_cast
  %tmp_602_cast = sext i9 %tmp_373 to i15
  %tmp_121 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_373, i2 0)
  %p_shl282_cast = sext i11 %tmp_121 to i15
  %tmp_375 = sub i15 %p_shl282_cast, %tmp_602_cast
  br label %.preheader658

.preheader658:                                    ; preds = %10, %.preheader658.preheader
  %h7 = phi i2 [ %h_26, %10 ], [ 0, %.preheader658.preheader ]
  %exitcond359 = icmp eq i2 %h7, -1
  %empty_311 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_26 = add i2 %h7, 1
  br i1 %exitcond359, label %.preheader659.loopexit, label %10

; <label>:10                                      ; preds = %.preheader658
  %tmp_115_cast = zext i2 %h7 to i15
  %tmp_397 = add i15 %tmp_375, %tmp_115_cast
  %tmp_663_cast = zext i15 %tmp_397 to i64
  %shuffle_conv_3x3_add = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_663_cast
  %weights_24_1_3x3_add = getelementptr [216 x float]* @weights_24_1_3x3, i64 0, i64 %tmp_663_cast
  %shuffle_conv_3x3_loa = load float* %shuffle_conv_3x3_add, align 4
  store float %shuffle_conv_3x3_loa, float* %weights_24_1_3x3_add, align 4
  br label %.preheader658

.preheader657:                                    ; preds = %.preheader657.preheader, %11
  %i8 = phi i5 [ %i_5, %11 ], [ 0, %.preheader657.preheader ]
  %i8_cast = zext i5 %i8 to i7
  %exitcond358 = icmp eq i5 %i8, -8
  %empty_312 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_5 = add i5 %i8, 1
  br i1 %exitcond358, label %12, label %11

; <label>:11                                      ; preds = %.preheader657
  %tmp_110 = add i7 %i8_cast, 48
  %tmp_111 = zext i7 %tmp_110 to i64
  %bias_addr_4 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_111
  %bias_load_4 = load float* %bias_addr_4, align 4
  %tmp_112 = zext i5 %i8 to i64
  %bias_24_addr_1 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_112
  store float %bias_load_4, float* %bias_24_addr_1, align 4
  br label %.preheader657

; <label>:12                                      ; preds = %.preheader657
  call fastcc void @subconv_3x3_32_strid([27744 x float]* @ShuffleConvs_0_Downs, [216 x float]* @weights_24_1_3x3, [24 x float]* @bias_24, [7776 x float]* @buffer0_1_24_16x16_p) nounwind
  br label %.loopexit905

.loopexit905.loopexit:                            ; preds = %.preheader656
  br label %.loopexit905

.loopexit905:                                     ; preds = %.loopexit905.loopexit, %12
  %co9 = phi i5 [ 0, %12 ], [ %co_27, %.loopexit905.loopexit ]
  %co9_cast = zext i5 %co9 to i6
  %exitcond357 = icmp eq i5 %co9, -8
  %empty_313 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_27 = add i5 %co9, 1
  br i1 %exitcond357, label %.preheader655.preheader, label %.preheader656.preheader

.preheader655.preheader:                          ; preds = %.loopexit905
  br label %.preheader655

.preheader656.preheader:                          ; preds = %.loopexit905
  %tmp_114 = add i6 %co9_cast, 24
  %tmp_378 = call i11 @_ssdm_op_BitConcatenate.i11.i6.i5(i6 %tmp_114, i5 0)
  %p_shl285_cast = zext i11 %tmp_378 to i12
  %tmp_380 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %tmp_114, i3 0)
  %p_shl286_cast = zext i9 %tmp_380 to i12
  %tmp_391 = sub i12 %p_shl285_cast, %p_shl286_cast
  %tmp_632_cast = sext i12 %tmp_391 to i13
  %tmp_393 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co9, i5 0)
  %p_shl283_cast = zext i10 %tmp_393 to i11
  %tmp_394 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co9, i3 0)
  %p_shl284_cast = zext i8 %tmp_394 to i11
  %tmp_395 = sub i11 %p_shl283_cast, %p_shl284_cast
  br label %.preheader656

.preheader656:                                    ; preds = %13, %.preheader656.preheader
  %ci10 = phi i5 [ %ci_11, %13 ], [ 0, %.preheader656.preheader ]
  %exitcond356 = icmp eq i5 %ci10, -8
  %empty_314 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_11 = add i5 %ci10, 1
  br i1 %exitcond356, label %.loopexit905.loopexit, label %13

; <label>:13                                      ; preds = %.preheader656
  %tmp_119_cast1 = zext i5 %ci10 to i11
  %tmp_119_cast = zext i5 %ci10 to i13
  %tmp_398 = add i13 %tmp_632_cast, %tmp_119_cast
  %tmp_665_cast = sext i13 %tmp_398 to i64
  %shuffle_conv_1x1_add_1 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_665_cast
  %tmp_408 = add i11 %tmp_395, %tmp_119_cast1
  %tmp_666_cast = sext i11 %tmp_408 to i64
  %weights_24_24_1x1_ad_1 = getelementptr [576 x float]* @weights_24_24_1x1, i64 0, i64 %tmp_666_cast
  %shuffle_conv_1x1_loa_1 = load float* %shuffle_conv_1x1_add_1, align 4
  store float %shuffle_conv_1x1_loa_1, float* %weights_24_24_1x1_ad_1, align 4
  br label %.preheader656

.preheader655:                                    ; preds = %.preheader655.preheader, %14
  %i6 = phi i5 [ %i_6, %14 ], [ 0, %.preheader655.preheader ]
  %i6_cast = zext i5 %i6 to i7
  %exitcond355 = icmp eq i5 %i6, -8
  %empty_315 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_6 = add i5 %i6, 1
  br i1 %exitcond355, label %15, label %14

; <label>:14                                      ; preds = %.preheader655
  %tmp_116 = add i7 %i6_cast, -56
  %tmp_117 = zext i7 %tmp_116 to i64
  %bias_addr_5 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_117
  %bias_load_5 = load float* %bias_addr_5, align 4
  %tmp_118 = zext i5 %i6 to i64
  %bias_24_addr_2 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_118
  store float %bias_load_5, float* %bias_24_addr_2, align 4
  br label %.preheader655

; <label>:15                                      ; preds = %.preheader655
  call fastcc void @subconv_1x1_16_p([7776 x float]* @buffer0_1_24_16x16_p, [576 x float]* @weights_24_24_1x1, [24 x float]* @bias_24, [7776 x float]* @buffer1_1_24_16x16_p) nounwind
  call fastcc void @shuffle_24_l_p([7776 x float]* @buffer1_1_24_16x16_p, [15552 x float]* @downsampleunit0_outp) nounwind
  br label %.loopexit904

.loopexit904.loopexit:                            ; preds = %.preheader654
  br label %.loopexit904

.loopexit904:                                     ; preds = %.loopexit904.loopexit, %15
  %co12 = phi i5 [ 0, %15 ], [ %co_28, %.loopexit904.loopexit ]
  %co12_cast = zext i5 %co12 to i6
  %exitcond354 = icmp eq i5 %co12, -8
  %empty_316 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_28 = add i5 %co12, 1
  br i1 %exitcond354, label %.preheader652.preheader, label %.preheader654.preheader

.preheader652.preheader:                          ; preds = %.loopexit904
  br label %.preheader652

.preheader654.preheader:                          ; preds = %.loopexit904
  %tmp_120 = add i6 %co12_cast, 24
  %tmp_121_cast = zext i6 %tmp_120 to i9
  %tmp_415 = call i8 @_ssdm_op_BitConcatenate.i8.i6.i2(i6 %tmp_120, i2 0)
  %p_shl288_cast = zext i8 %tmp_415 to i9
  %tmp_416 = sub i9 %p_shl288_cast, %tmp_121_cast
  %tmp_122_cast = zext i5 %co12 to i8
  %tmp_418 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co12, i2 0)
  %p_shl287_cast = zext i7 %tmp_418 to i8
  %tmp_421 = sub i8 %p_shl287_cast, %tmp_122_cast
  %tmp_710_cast1 = sext i8 %tmp_421 to i9
  br label %.preheader654

.preheader654.loopexit:                           ; preds = %.preheader653
  br label %.preheader654

.preheader654:                                    ; preds = %.preheader654.loopexit, %.preheader654.preheader
  %w13 = phi i2 [ 0, %.preheader654.preheader ], [ %w_27, %.preheader654.loopexit ]
  %exitcond353 = icmp eq i2 %w13, -1
  %empty_317 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_27 = add i2 %w13, 1
  br i1 %exitcond353, label %.loopexit904.loopexit, label %.preheader653.preheader

.preheader653.preheader:                          ; preds = %.preheader654
  %tmp_126_cast = zext i2 %w13 to i9
  %tmp_423 = add i9 %tmp_416, %tmp_126_cast
  %tmp_713_cast = sext i9 %tmp_423 to i15
  %tmp_122 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_423, i2 0)
  %p_shl290_cast = sext i11 %tmp_122 to i15
  %tmp_434 = sub i15 %p_shl290_cast, %tmp_713_cast
  %tmp_436 = add i9 %tmp_710_cast1, %tmp_126_cast
  %tmp_126 = shl i9 %tmp_436, 2
  %tmp_437 = sub i9 %tmp_126, %tmp_436
  br label %.preheader653

.preheader653:                                    ; preds = %16, %.preheader653.preheader
  %h14 = phi i2 [ %h_27, %16 ], [ 0, %.preheader653.preheader ]
  %exitcond352 = icmp eq i2 %h14, -1
  %empty_318 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_27 = add i2 %h14, 1
  br i1 %exitcond352, label %.preheader654.loopexit, label %16

; <label>:16                                      ; preds = %.preheader653
  %tmp_128_cast1 = zext i2 %h14 to i9
  %tmp_128_cast = zext i2 %h14 to i15
  %tmp_460 = add i15 %tmp_434, %tmp_128_cast
  %tmp_829_cast = zext i15 %tmp_460 to i64
  %shuffle_conv_3x3_add_1 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_829_cast
  %tmp_462 = add i9 %tmp_437, %tmp_128_cast1
  %tmp_832_cast1 = zext i9 %tmp_462 to i64
  %weights_24_1_3x3_add_1 = getelementptr [216 x float]* @weights_24_1_3x3, i64 0, i64 %tmp_832_cast1
  %shuffle_conv_3x3_loa_1 = load float* %shuffle_conv_3x3_add_1, align 4
  store float %shuffle_conv_3x3_loa_1, float* %weights_24_1_3x3_add_1, align 4
  br label %.preheader653

.preheader652:                                    ; preds = %.preheader652.preheader, %17
  %i7 = phi i5 [ %i_7, %17 ], [ 0, %.preheader652.preheader ]
  %exitcond351 = icmp eq i5 %i7, -8
  %empty_319 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_7 = add i5 %i7, 1
  br i1 %exitcond351, label %18, label %17

; <label>:17                                      ; preds = %.preheader652
  %tmp_123 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 true, i5 %i7)
  %tmp_176_cast = sext i6 %tmp_123 to i7
  %tmp_124 = zext i7 %tmp_176_cast to i64
  %bias_addr_6 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_124
  %bias_load_6 = load float* %bias_addr_6, align 4
  %tmp_125 = zext i5 %i7 to i64
  %bias_24_addr_3 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_125
  store float %bias_load_6, float* %bias_24_addr_3, align 4
  br label %.preheader652

; <label>:18                                      ; preds = %.preheader652
  call fastcc void @subconv_3x3_32_strid([27744 x float]* @conv1_output_p, [216 x float]* @weights_24_1_3x3, [24 x float]* @bias_24, [7776 x float]* @buffer0_1_24_16x16_p) nounwind
  br label %.loopexit903

.loopexit903.loopexit:                            ; preds = %.preheader651
  br label %.loopexit903

.loopexit903:                                     ; preds = %.loopexit903.loopexit, %18
  %co16 = phi i5 [ 0, %18 ], [ %co_29, %.loopexit903.loopexit ]
  %co16_cast = zext i5 %co16 to i7
  %exitcond350 = icmp eq i5 %co16, -8
  %empty_320 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_29 = add i5 %co16, 1
  br i1 %exitcond350, label %.preheader650.preheader, label %.preheader651.preheader

.preheader650.preheader:                          ; preds = %.loopexit903
  br label %.preheader650

.preheader651.preheader:                          ; preds = %.loopexit903
  %tmp_127 = add i7 %co16_cast, 48
  %tmp_438 = call i12 @_ssdm_op_BitConcatenate.i12.i7.i5(i7 %tmp_127, i5 0)
  %p_shl293_cast = zext i12 %tmp_438 to i13
  %tmp_440 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_127, i3 0)
  %p_shl294_cast = zext i10 %tmp_440 to i13
  %tmp_441 = sub i13 %p_shl293_cast, %p_shl294_cast
  %tmp_787_cast1 = sext i13 %tmp_441 to i14
  %tmp_451 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co16, i5 0)
  %p_shl291_cast = zext i10 %tmp_451 to i11
  %tmp_458 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co16, i3 0)
  %p_shl292_cast = zext i8 %tmp_458 to i11
  %tmp_459 = sub i11 %p_shl291_cast, %p_shl292_cast
  br label %.preheader651

.preheader651:                                    ; preds = %19, %.preheader651.preheader
  %ci12 = phi i5 [ %ci_13, %19 ], [ 0, %.preheader651.preheader ]
  %exitcond349 = icmp eq i5 %ci12, -8
  %empty_321 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_13 = add i5 %ci12, 1
  br i1 %exitcond349, label %.loopexit903.loopexit, label %19

; <label>:19                                      ; preds = %.preheader651
  %tmp_132_cast1 = zext i5 %ci12 to i11
  %tmp_132_cast = zext i5 %ci12 to i14
  %tmp_463 = add i14 %tmp_787_cast1, %tmp_132_cast
  %tmp_834_cast = sext i14 %tmp_463 to i64
  %shuffle_conv_1x1_add_2 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_834_cast
  %tmp_465 = add i11 %tmp_459, %tmp_132_cast1
  %tmp_835_cast = sext i11 %tmp_465 to i64
  %weights_24_24_1x1_ad_2 = getelementptr [576 x float]* @weights_24_24_1x1, i64 0, i64 %tmp_835_cast
  %shuffle_conv_1x1_loa_2 = load float* %shuffle_conv_1x1_add_2, align 4
  store float %shuffle_conv_1x1_loa_2, float* %weights_24_24_1x1_ad_2, align 4
  br label %.preheader651

.preheader650:                                    ; preds = %.preheader650.preheader, %20
  %i9 = phi i5 [ %i_8, %20 ], [ 0, %.preheader650.preheader ]
  %i9_cast = zext i5 %i9 to i8
  %exitcond348 = icmp eq i5 %i9, -8
  %empty_322 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_8 = add i5 %i9, 1
  br i1 %exitcond348, label %21, label %20

; <label>:20                                      ; preds = %.preheader650
  %tmp_129 = add i8 %i9_cast, 120
  %tmp_130 = zext i8 %tmp_129 to i64
  %bias_addr_7 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_130
  %bias_load_7 = load float* %bias_addr_7, align 4
  %tmp_131 = zext i5 %i9 to i64
  %bias_24_addr_4 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_131
  store float %bias_load_7, float* %bias_24_addr_4, align 4
  br label %.preheader650

; <label>:21                                      ; preds = %.preheader650
  call fastcc void @subconv_1x1_16_p([7776 x float]* @buffer0_1_24_16x16_p, [576 x float]* @weights_24_24_1x1, [24 x float]* @bias_24, [7776 x float]* @buffer1_1_24_16x16_p) nounwind
  call fastcc void @shuffle_24_r_p([7776 x float]* @buffer1_1_24_16x16_p, [15552 x float]* @downsampleunit0_outp) nounwind
  br label %.loopexit902

.loopexit902.loopexit:                            ; preds = %.preheader649
  br label %.loopexit902

.loopexit902:                                     ; preds = %.loopexit902.loopexit, %21
  %co19 = phi i5 [ 0, %21 ], [ %co_30, %.loopexit902.loopexit ]
  %co19_cast = zext i5 %co19 to i6
  %exitcond347 = icmp eq i5 %co19, -8
  %empty_323 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_30 = add i5 %co19, 1
  br i1 %exitcond347, label %.preheader647.preheader, label %.preheader649.preheader

.preheader647.preheader:                          ; preds = %.loopexit902
  br label %.preheader647

.preheader649.preheader:                          ; preds = %.loopexit902
  %tmp_133 = add i6 %co19_cast, 24
  %tmp_466 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %tmp_133, i4 0)
  %p_shl297_cast = zext i10 %tmp_466 to i11
  %tmp_468 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %tmp_133, i1 false)
  %p_shl298_cast = zext i7 %tmp_468 to i11
  %tmp_470 = add i11 %p_shl298_cast, %p_shl297_cast
  %tmp_481 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co19, i4 0)
  %p_shl295_cast = zext i9 %tmp_481 to i10
  %tmp_482 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co19, i1 false)
  %p_shl296_cast = zext i6 %tmp_482 to i10
  %tmp_484 = add i10 %p_shl296_cast, %p_shl295_cast
  br label %.preheader649

.preheader649.loopexit:                           ; preds = %.preheader648
  br label %.preheader649

.preheader649:                                    ; preds = %.preheader649.loopexit, %.preheader649.preheader
  %h20 = phi i5 [ 0, %.preheader649.preheader ], [ %h_28, %.preheader649.loopexit ]
  %exitcond346 = icmp eq i5 %h20, -16
  %empty_324 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %h_28 = add i5 %h20, 1
  br i1 %exitcond346, label %.loopexit902.loopexit, label %.preheader648.preheader

.preheader648.preheader:                          ; preds = %.preheader649
  %tmp_135_cast1 = zext i5 %h_28 to i11
  %tmp_135_cast = zext i5 %h_28 to i10
  %tmp_502 = add i10 %tmp_135_cast, %tmp_484
  %p_shl301_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_502, i4 0)
  %tmp_128 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_502, i1 false)
  %p_shl302_cast = zext i11 %tmp_128 to i14
  %tmp_508 = add i14 %p_shl301_cast, %p_shl302_cast
  %tmp_509 = add i11 %tmp_135_cast1, %tmp_470
  %p_shl299_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_509, i4 0)
  %tmp_132 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_509, i1 false)
  %p_shl300_cast = zext i12 %tmp_132 to i15
  %tmp_510 = add i15 %p_shl299_cast, %p_shl300_cast
  br label %.preheader648

.preheader648:                                    ; preds = %22, %.preheader648.preheader
  %w21 = phi i5 [ %w_28, %22 ], [ 0, %.preheader648.preheader ]
  %exitcond345 = icmp eq i5 %w21, -16
  %empty_325 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %w_28 = add i5 %w21, 1
  br i1 %exitcond345, label %.preheader649.loopexit, label %22

; <label>:22                                      ; preds = %.preheader648
  %tmp_140_cast1 = zext i5 %w_28 to i15
  %tmp_140_cast = zext i5 %w_28 to i14
  %tmp_515 = add i14 %tmp_508, %tmp_140_cast
  %tmp_949_cast = zext i14 %tmp_515 to i64
  %buffer0_1_24_16x16_p = getelementptr [7776 x float]* @buffer0_1_24_16x16_p, i64 0, i64 %tmp_949_cast
  %tmp_516 = add i15 %tmp_510, %tmp_140_cast1
  %tmp_950_cast = zext i15 %tmp_516 to i64
  %downsampleunit0_outp = getelementptr [15552 x float]* @downsampleunit0_outp, i64 0, i64 %tmp_950_cast
  %downsampleunit0_outp_1 = load float* %downsampleunit0_outp, align 4
  store float %downsampleunit0_outp_1, float* %buffer0_1_24_16x16_p, align 4
  br label %.preheader648

.preheader647.loopexit:                           ; preds = %.preheader646
  br label %.preheader647

.preheader647:                                    ; preds = %.preheader647.preheader, %.preheader647.loopexit
  %co22 = phi i5 [ %co_31, %.preheader647.loopexit ], [ 0, %.preheader647.preheader ]
  %co22_cast = zext i5 %co22 to i7
  %exitcond344 = icmp eq i5 %co22, -8
  %empty_326 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_31 = add i5 %co22, 1
  br i1 %exitcond344, label %.preheader645.preheader, label %.preheader646.preheader

.preheader645.preheader:                          ; preds = %.preheader647
  br label %.preheader645

.preheader646.preheader:                          ; preds = %.preheader647
  %tmp_134 = add i7 %co22_cast, -56
  %tmp_485 = call i12 @_ssdm_op_BitConcatenate.i12.i7.i5(i7 %tmp_134, i5 0)
  %p_shl305_cast = zext i12 %tmp_485 to i13
  %tmp_486 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_134, i3 0)
  %p_shl306_cast = zext i10 %tmp_486 to i13
  %tmp_487 = sub i13 %p_shl305_cast, %p_shl306_cast
  %tmp_904_cast = sext i13 %tmp_487 to i14
  %tmp_489 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co22, i5 0)
  %p_shl303_cast = zext i10 %tmp_489 to i11
  %tmp_490 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co22, i3 0)
  %p_shl304_cast = zext i8 %tmp_490 to i11
  %tmp_500 = sub i11 %p_shl303_cast, %p_shl304_cast
  br label %.preheader646

.preheader646:                                    ; preds = %23, %.preheader646.preheader
  %ci14 = phi i5 [ %ci_15, %23 ], [ 0, %.preheader646.preheader ]
  %exitcond343 = icmp eq i5 %ci14, -8
  %empty_327 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_15 = add i5 %ci14, 1
  br i1 %exitcond343, label %.preheader647.loopexit, label %23

; <label>:23                                      ; preds = %.preheader646
  %tmp_139_cast1 = zext i5 %ci14 to i11
  %tmp_139_cast = zext i5 %ci14 to i14
  %tmp_512 = add i14 %tmp_904_cast, %tmp_139_cast
  %tmp_947_cast1 = sext i14 %tmp_512 to i64
  %shuffle_conv_1x1_add_3 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_947_cast1
  %tmp_513 = add i11 %tmp_500, %tmp_139_cast1
  %tmp_948_cast = sext i11 %tmp_513 to i64
  %weights_24_24_1x1_ad_3 = getelementptr [576 x float]* @weights_24_24_1x1, i64 0, i64 %tmp_948_cast
  %shuffle_conv_1x1_loa_3 = load float* %shuffle_conv_1x1_add_3, align 4
  store float %shuffle_conv_1x1_loa_3, float* %weights_24_24_1x1_ad_3, align 4
  br label %.preheader646

.preheader645:                                    ; preds = %.preheader645.preheader, %24
  %i10 = phi i5 [ %i_9, %24 ], [ 0, %.preheader645.preheader ]
  %i10_cast = zext i5 %i10 to i8
  %exitcond342 = icmp eq i5 %i10, -8
  %empty_328 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_9 = add i5 %i10, 1
  br i1 %exitcond342, label %25, label %24

; <label>:24                                      ; preds = %.preheader645
  %tmp_136 = add i8 %i10_cast, -112
  %tmp_137 = zext i8 %tmp_136 to i64
  %bias_addr_8 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_137
  %bias_load_8 = load float* %bias_addr_8, align 4
  %tmp_138 = zext i5 %i10 to i64
  %bias_24_addr_5 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_138
  store float %bias_load_8, float* %bias_24_addr_5, align 4
  br label %.preheader645

; <label>:25                                      ; preds = %.preheader645
  call fastcc void @subconv_1x1_16_p([7776 x float]* @buffer0_1_24_16x16_p, [576 x float]* @weights_24_24_1x1, [24 x float]* @bias_24, [7776 x float]* @buffer1_1_24_16x16_p) nounwind
  br label %.loopexit901

.loopexit901.loopexit:                            ; preds = %.preheader644
  br label %.loopexit901

.loopexit901:                                     ; preds = %.loopexit901.loopexit, %25
  %co25 = phi i5 [ 0, %25 ], [ %co_32, %.loopexit901.loopexit ]
  %co25_cast = zext i5 %co25 to i7
  %exitcond341 = icmp eq i5 %co25, -8
  %empty_329 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_32 = add i5 %co25, 1
  br i1 %exitcond341, label %.preheader642.preheader, label %.preheader644.preheader

.preheader642.preheader:                          ; preds = %.loopexit901
  br label %.preheader642

.preheader644.preheader:                          ; preds = %.loopexit901
  %tmp_141 = add i7 %co25_cast, 48
  %tmp_142_cast = zext i7 %tmp_141 to i10
  %tmp_518 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_141, i2 0)
  %p_shl308_cast = zext i9 %tmp_518 to i10
  %tmp_520 = sub i10 %p_shl308_cast, %tmp_142_cast
  %tmp_143_cast = zext i5 %co25 to i8
  %tmp_531 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co25, i2 0)
  %p_shl307_cast = zext i7 %tmp_531 to i8
  %tmp_532 = sub i8 %p_shl307_cast, %tmp_143_cast
  %tmp_954_cast1 = sext i8 %tmp_532 to i9
  br label %.preheader644

.preheader644.loopexit:                           ; preds = %.preheader643
  br label %.preheader644

.preheader644:                                    ; preds = %.preheader644.loopexit, %.preheader644.preheader
  %w26 = phi i2 [ 0, %.preheader644.preheader ], [ %w_29, %.preheader644.loopexit ]
  %exitcond340 = icmp eq i2 %w26, -1
  %empty_330 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_29 = add i2 %w26, 1
  br i1 %exitcond340, label %.loopexit901.loopexit, label %.preheader643.preheader

.preheader643.preheader:                          ; preds = %.preheader644
  %tmp_147_cast1 = zext i2 %w26 to i9
  %tmp_147_cast2 = zext i2 %w26 to i10
  %tmp_534 = add i10 %tmp_520, %tmp_147_cast2
  %tmp_955_cast = sext i10 %tmp_534 to i15
  %tmp_135 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_534, i2 0)
  %p_shl310_cast = sext i12 %tmp_135 to i15
  %tmp_535 = sub i15 %p_shl310_cast, %tmp_955_cast
  %tmp_536 = add i9 %tmp_954_cast1, %tmp_147_cast1
  %tmp_139 = shl i9 %tmp_536, 2
  %tmp_537 = sub i9 %tmp_139, %tmp_536
  br label %.preheader643

.preheader643:                                    ; preds = %26, %.preheader643.preheader
  %h27 = phi i2 [ %h_29, %26 ], [ 0, %.preheader643.preheader ]
  %exitcond339 = icmp eq i2 %h27, -1
  %empty_331 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_29 = add i2 %h27, 1
  br i1 %exitcond339, label %.preheader644.loopexit, label %26

; <label>:26                                      ; preds = %.preheader643
  %tmp_148_cast1 = zext i2 %h27 to i9
  %tmp_148_cast = zext i2 %h27 to i15
  %tmp_563 = add i15 %tmp_535, %tmp_148_cast
  %tmp_969_cast = zext i15 %tmp_563 to i64
  %shuffle_conv_3x3_add_2 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_969_cast
  %tmp_565 = add i9 %tmp_537, %tmp_148_cast1
  %tmp_970_cast = zext i9 %tmp_565 to i64
  %weights_24_1_3x3_add_2 = getelementptr [216 x float]* @weights_24_1_3x3, i64 0, i64 %tmp_970_cast
  %shuffle_conv_3x3_loa_2 = load float* %shuffle_conv_3x3_add_2, align 4
  store float %shuffle_conv_3x3_loa_2, float* %weights_24_1_3x3_add_2, align 4
  br label %.preheader643

.preheader642:                                    ; preds = %.preheader642.preheader, %27
  %i11 = phi i5 [ %i_12, %27 ], [ 0, %.preheader642.preheader ]
  %i11_cast = zext i5 %i11 to i8
  %exitcond338 = icmp eq i5 %i11, -8
  %empty_332 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_12 = add i5 %i11, 1
  br i1 %exitcond338, label %28, label %27

; <label>:27                                      ; preds = %.preheader642
  %tmp_144 = add i8 %i11_cast, -88
  %tmp_145 = zext i8 %tmp_144 to i64
  %bias_addr_9 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_145
  %bias_load_9 = load float* %bias_addr_9, align 4
  %tmp_146 = zext i5 %i11 to i64
  %bias_24_addr_6 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_146
  store float %bias_load_9, float* %bias_24_addr_6, align 4
  br label %.preheader642

; <label>:28                                      ; preds = %.preheader642
  call fastcc void @subconv_3x3_16_no_re([7776 x float]* @buffer1_1_24_16x16_p, [216 x float]* @weights_24_1_3x3, [24 x float]* @bias_24, [7776 x float]* @buffer0_1_24_16x16_p) nounwind
  br label %.loopexit900

.loopexit900.loopexit:                            ; preds = %.preheader641
  br label %.loopexit900

.loopexit900:                                     ; preds = %.loopexit900.loopexit, %28
  %co29 = phi i5 [ 0, %28 ], [ %co_33, %.loopexit900.loopexit ]
  %exitcond337 = icmp eq i5 %co29, -8
  %empty_333 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_33 = add i5 %co29, 1
  br i1 %exitcond337, label %.preheader640.preheader, label %.preheader641.preheader

.preheader640.preheader:                          ; preds = %.loopexit900
  br label %.preheader640

.preheader641.preheader:                          ; preds = %.loopexit900
  %tmp_539 = call i11 @_ssdm_op_BitConcatenate.i11.i1.i5.i5(i1 true, i5 %co29, i5 0)
  %tmp_540 = sext i11 %tmp_539 to i12
  %p_shl313_cast = zext i12 %tmp_540 to i13
  %tmp_550 = call i9 @_ssdm_op_BitConcatenate.i9.i1.i5.i3(i1 true, i5 %co29, i3 0)
  %tmp_552 = sext i9 %tmp_550 to i10
  %p_shl314_cast = zext i10 %tmp_552 to i13
  %tmp_558 = sub i13 %p_shl313_cast, %p_shl314_cast
  %tmp_965_cast = sext i13 %tmp_558 to i14
  %tmp_559 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co29, i5 0)
  %p_shl311_cast = zext i10 %tmp_559 to i11
  %tmp_560 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co29, i3 0)
  %p_shl312_cast = zext i8 %tmp_560 to i11
  %tmp_562 = sub i11 %p_shl311_cast, %p_shl312_cast
  br label %.preheader641

.preheader641:                                    ; preds = %29, %.preheader641.preheader
  %ci16 = phi i5 [ %ci_17, %29 ], [ 0, %.preheader641.preheader ]
  %exitcond336 = icmp eq i5 %ci16, -8
  %empty_334 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_17 = add i5 %ci16, 1
  br i1 %exitcond336, label %.loopexit900.loopexit, label %29

; <label>:29                                      ; preds = %.preheader641
  %tmp_152_cast1 = zext i5 %ci16 to i11
  %tmp_152_cast = zext i5 %ci16 to i14
  %tmp_566 = add i14 %tmp_965_cast, %tmp_152_cast
  %tmp_971_cast = sext i14 %tmp_566 to i64
  %shuffle_conv_1x1_add_4 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_971_cast
  %tmp_568 = add i11 %tmp_562, %tmp_152_cast1
  %tmp_972_cast = sext i11 %tmp_568 to i64
  %weights_24_24_1x1_ad_4 = getelementptr [576 x float]* @weights_24_24_1x1, i64 0, i64 %tmp_972_cast
  %shuffle_conv_1x1_loa_4 = load float* %shuffle_conv_1x1_add_4, align 4
  store float %shuffle_conv_1x1_loa_4, float* %weights_24_24_1x1_ad_4, align 4
  br label %.preheader641

.preheader640:                                    ; preds = %.preheader640.preheader, %30
  %i13 = phi i5 [ %i_14, %30 ], [ 0, %.preheader640.preheader ]
  %exitcond335 = icmp eq i5 %i13, -8
  %empty_335 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_14 = add i5 %i13, 1
  br i1 %exitcond335, label %31, label %30

; <label>:30                                      ; preds = %.preheader640
  %tmp_149 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 -2, i5 %i13)
  %tmp_211_cast = sext i7 %tmp_149 to i8
  %tmp_150 = zext i8 %tmp_211_cast to i64
  %bias_addr_10 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_150
  %bias_load_10 = load float* %bias_addr_10, align 4
  %tmp_151 = zext i5 %i13 to i64
  %bias_24_addr_7 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_151
  store float %bias_load_10, float* %bias_24_addr_7, align 4
  br label %.preheader640

; <label>:31                                      ; preds = %.preheader640
  call fastcc void @subconv_1x1_16_p([7776 x float]* @buffer0_1_24_16x16_p, [576 x float]* @weights_24_24_1x1, [24 x float]* @bias_24, [7776 x float]* @buffer1_1_24_16x16_p) nounwind
  br label %.loopexit899

.loopexit899.loopexit:                            ; preds = %.preheader639
  br label %.loopexit899

.loopexit899:                                     ; preds = %.loopexit899.loopexit, %31
  %co32 = phi i5 [ 0, %31 ], [ %co_34, %.loopexit899.loopexit ]
  %exitcond334 = icmp eq i5 %co32, -8
  %empty_336 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_34 = add i5 %co32, 1
  br i1 %exitcond334, label %33, label %.preheader639.preheader

.preheader639.preheader:                          ; preds = %.loopexit899
  %tmp_570 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co32, i4 0)
  %p_shl315_cast = zext i9 %tmp_570 to i10
  %tmp_581 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co32, i1 false)
  %p_shl316_cast = zext i6 %tmp_581 to i10
  %tmp_582 = add i10 %p_shl316_cast, %p_shl315_cast
  br label %.preheader639

.preheader639.loopexit:                           ; preds = %.preheader638
  br label %.preheader639

.preheader639:                                    ; preds = %.preheader639.loopexit, %.preheader639.preheader
  %h30 = phi i5 [ 0, %.preheader639.preheader ], [ %h_31, %.preheader639.loopexit ]
  %exitcond333 = icmp eq i5 %h30, -16
  %empty_337 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %h_31 = add i5 %h30, 1
  br i1 %exitcond333, label %.loopexit899.loopexit, label %.preheader638.preheader

.preheader638.preheader:                          ; preds = %.preheader639
  %tmp_154_cast = zext i5 %h_31 to i10
  %tmp_600 = add i10 %tmp_154_cast, %tmp_582
  %tmp_140 = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_600, i4 0)
  %p_shl317_cast = zext i14 %tmp_140 to i15
  %tmp_142 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_600, i1 false)
  %p_shl318_cast = zext i11 %tmp_142 to i15
  %tmp_602 = add i15 %p_shl317_cast, %p_shl318_cast
  br label %.preheader638

.preheader638:                                    ; preds = %32, %.preheader638.preheader
  %w30 = phi i5 [ %w_31, %32 ], [ 0, %.preheader638.preheader ]
  %exitcond332 = icmp eq i5 %w30, -16
  %empty_338 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %w_31 = add i5 %w30, 1
  br i1 %exitcond332, label %.preheader639.loopexit, label %32

; <label>:32                                      ; preds = %.preheader638
  %tmp_157_cast = zext i5 %w_31 to i15
  %tmp_632 = add i15 %tmp_602, %tmp_157_cast
  %tmp_1000_cast1 = zext i15 %tmp_632 to i64
  %buffer0_1_24_16x16_p_1 = getelementptr [7776 x float]* @buffer0_1_24_16x16_p, i64 0, i64 %tmp_1000_cast1
  %downsampleunit0_outp_2 = getelementptr [15552 x float]* @downsampleunit0_outp, i64 0, i64 %tmp_1000_cast1
  %downsampleunit0_outp_3 = load float* %downsampleunit0_outp_2, align 4
  store float %downsampleunit0_outp_3, float* %buffer0_1_24_16x16_p_1, align 4
  br label %.preheader638

; <label>:33                                      ; preds = %.loopexit899
  call fastcc void @shuffle_24_p([7776 x float]* @buffer0_1_24_16x16_p, [15552 x float]* @shuffleunit0_0_outpu) nounwind
  br label %.loopexit898

.loopexit898.loopexit:                            ; preds = %.preheader637
  br label %.loopexit898

.loopexit898:                                     ; preds = %.loopexit898.loopexit, %33
  %co34 = phi i5 [ 0, %33 ], [ %co_35, %.loopexit898.loopexit ]
  %co34_cast = zext i5 %co34 to i6
  %exitcond331 = icmp eq i5 %co34, -8
  %empty_339 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_35 = add i5 %co34, 1
  br i1 %exitcond331, label %.preheader635.preheader, label %.preheader637.preheader

.preheader635.preheader:                          ; preds = %.loopexit898
  br label %.preheader635

.preheader637.preheader:                          ; preds = %.loopexit898
  %tmp_153 = add i6 %co34_cast, 24
  %tmp_584 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %tmp_153, i4 0)
  %p_shl321_cast = zext i10 %tmp_584 to i11
  %tmp_585 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %tmp_153, i1 false)
  %p_shl322_cast = zext i7 %tmp_585 to i11
  %tmp_586 = add i11 %p_shl322_cast, %p_shl321_cast
  %tmp_587 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co34, i4 0)
  %p_shl319_cast = zext i9 %tmp_587 to i10
  %tmp_589 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co34, i1 false)
  %p_shl320_cast = zext i6 %tmp_589 to i10
  %tmp_590 = add i10 %p_shl320_cast, %p_shl319_cast
  br label %.preheader637

.preheader637.loopexit:                           ; preds = %.preheader636
  br label %.preheader637

.preheader637:                                    ; preds = %.preheader637.loopexit, %.preheader637.preheader
  %h32 = phi i5 [ 0, %.preheader637.preheader ], [ %h_33, %.preheader637.loopexit ]
  %exitcond330 = icmp eq i5 %h32, -16
  %empty_340 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %h_33 = add i5 %h32, 1
  br i1 %exitcond330, label %.loopexit898.loopexit, label %.preheader636.preheader

.preheader636.preheader:                          ; preds = %.preheader637
  %tmp_156_cast1 = zext i5 %h_33 to i11
  %tmp_156_cast = zext i5 %h_33 to i10
  %tmp_616 = add i10 %tmp_156_cast, %tmp_590
  %p_shl325_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_616, i4 0)
  %tmp_143 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_616, i1 false)
  %p_shl326_cast = zext i11 %tmp_143 to i14
  %tmp_618 = add i14 %p_shl325_cast, %p_shl326_cast
  %tmp_620 = add i11 %tmp_156_cast1, %tmp_586
  %p_shl323_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_620, i4 0)
  %tmp_147 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_620, i1 false)
  %p_shl324_cast = zext i12 %tmp_147 to i15
  %tmp_631 = add i15 %p_shl323_cast, %p_shl324_cast
  br label %.preheader636

.preheader636:                                    ; preds = %34, %.preheader636.preheader
  %w32 = phi i5 [ %w_33, %34 ], [ 0, %.preheader636.preheader ]
  %exitcond329 = icmp eq i5 %w32, -16
  %empty_341 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %w_33 = add i5 %w32, 1
  br i1 %exitcond329, label %.preheader637.loopexit, label %34

; <label>:34                                      ; preds = %.preheader636
  %tmp_162_cast1 = zext i5 %w_33 to i15
  %tmp_162_cast = zext i5 %w_33 to i14
  %tmp_636 = add i14 %tmp_618, %tmp_162_cast
  %tmp_1003_cast = zext i14 %tmp_636 to i64
  %buffer0_1_24_16x16_p_2 = getelementptr [7776 x float]* @buffer0_1_24_16x16_p, i64 0, i64 %tmp_1003_cast
  %tmp_637 = add i15 %tmp_631, %tmp_162_cast1
  %tmp_1004_cast = zext i15 %tmp_637 to i64
  %shuffleunit0_0_outpu = getelementptr [15552 x float]* @shuffleunit0_0_outpu, i64 0, i64 %tmp_1004_cast
  %shuffleunit0_0_outpu_1 = load float* %shuffleunit0_0_outpu, align 4
  store float %shuffleunit0_0_outpu_1, float* %buffer0_1_24_16x16_p_2, align 4
  br label %.preheader636

.preheader635.loopexit:                           ; preds = %.preheader634
  br label %.preheader635

.preheader635:                                    ; preds = %.preheader635.preheader, %.preheader635.loopexit
  %co36 = phi i5 [ %co_37, %.preheader635.loopexit ], [ 0, %.preheader635.preheader ]
  %co36_cast = zext i5 %co36 to i8
  %exitcond328 = icmp eq i5 %co36, -8
  %empty_342 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_37 = add i5 %co36, 1
  br i1 %exitcond328, label %.preheader633.preheader, label %.preheader634.preheader

.preheader633.preheader:                          ; preds = %.preheader635
  br label %.preheader633

.preheader634.preheader:                          ; preds = %.preheader635
  %tmp_155 = add i8 %co36_cast, 120
  %tmp_608 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_155, i5 0)
  %p_shl329_cast = zext i13 %tmp_608 to i14
  %tmp_609 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %tmp_155, i3 0)
  %p_shl330_cast = zext i11 %tmp_609 to i14
  %tmp_610 = sub i14 %p_shl329_cast, %p_shl330_cast
  %tmp_988_cast = sext i14 %tmp_610 to i15
  %tmp_612 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co36, i5 0)
  %p_shl327_cast = zext i10 %tmp_612 to i11
  %tmp_613 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co36, i3 0)
  %p_shl328_cast = zext i8 %tmp_613 to i11
  %tmp_615 = sub i11 %p_shl327_cast, %p_shl328_cast
  br label %.preheader634

.preheader634:                                    ; preds = %35, %.preheader634.preheader
  %ci18 = phi i5 [ %ci_19, %35 ], [ 0, %.preheader634.preheader ]
  %exitcond327 = icmp eq i5 %ci18, -8
  %empty_343 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_19 = add i5 %ci18, 1
  br i1 %exitcond327, label %.preheader635.loopexit, label %35

; <label>:35                                      ; preds = %.preheader634
  %tmp_161_cast1 = zext i5 %ci18 to i11
  %tmp_161_cast = zext i5 %ci18 to i15
  %tmp_633 = add i15 %tmp_988_cast, %tmp_161_cast
  %tmp_1001_cast = sext i15 %tmp_633 to i64
  %shuffle_conv_1x1_add_5 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1001_cast
  %tmp_635 = add i11 %tmp_615, %tmp_161_cast1
  %tmp_1002_cast = sext i11 %tmp_635 to i64
  %weights_24_24_1x1_ad_5 = getelementptr [576 x float]* @weights_24_24_1x1, i64 0, i64 %tmp_1002_cast
  %shuffle_conv_1x1_loa_5 = load float* %shuffle_conv_1x1_add_5, align 4
  store float %shuffle_conv_1x1_loa_5, float* %weights_24_24_1x1_ad_5, align 4
  br label %.preheader634

.preheader633:                                    ; preds = %.preheader633.preheader, %36
  %i15 = phi i5 [ %i_16, %36 ], [ 0, %.preheader633.preheader ]
  %i15_cast659_cast = zext i5 %i15 to i7
  %exitcond326 = icmp eq i5 %i15, -8
  %empty_344 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_16 = add i5 %i15, 1
  br i1 %exitcond326, label %37, label %36

; <label>:36                                      ; preds = %.preheader633
  %tmp_158 = add i7 %i15_cast659_cast, -40
  %tmp_224_cast = sext i7 %tmp_158 to i8
  %tmp_159 = zext i8 %tmp_224_cast to i64
  %bias_addr_11 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_159
  %bias_load_11 = load float* %bias_addr_11, align 4
  %tmp_160 = zext i5 %i15 to i64
  %bias_24_addr_8 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_160
  store float %bias_load_11, float* %bias_24_addr_8, align 4
  br label %.preheader633

; <label>:37                                      ; preds = %.preheader633
  call fastcc void @subconv_1x1_16_p([7776 x float]* @buffer0_1_24_16x16_p, [576 x float]* @weights_24_24_1x1, [24 x float]* @bias_24, [7776 x float]* @buffer1_1_24_16x16_p) nounwind
  br label %.loopexit897

.loopexit897.loopexit:                            ; preds = %.preheader632
  br label %.loopexit897

.loopexit897:                                     ; preds = %.loopexit897.loopexit, %37
  %co38 = phi i5 [ 0, %37 ], [ %co_39, %.loopexit897.loopexit ]
  %co39_cast = zext i5 %co38 to i7
  %exitcond325 = icmp eq i5 %co38, -8
  %empty_345 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_39 = add i5 %co38, 1
  br i1 %exitcond325, label %.preheader630.preheader, label %.preheader632.preheader

.preheader630.preheader:                          ; preds = %.loopexit897
  br label %.preheader630

.preheader632.preheader:                          ; preds = %.loopexit897
  %tmp_163 = add i7 %co39_cast, -56
  %tmp_164_cast = zext i7 %tmp_163 to i10
  %tmp_647 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_163, i2 0)
  %p_shl332_cast = zext i9 %tmp_647 to i10
  %tmp_652 = sub i10 %p_shl332_cast, %tmp_164_cast
  %tmp_165_cast = zext i5 %co38 to i8
  %tmp_655 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co38, i2 0)
  %p_shl331_cast = zext i7 %tmp_655 to i8
  %tmp_656 = sub i8 %p_shl331_cast, %tmp_165_cast
  %tmp_1008_cast = sext i8 %tmp_656 to i9
  br label %.preheader632

.preheader632.loopexit:                           ; preds = %.preheader631
  br label %.preheader632

.preheader632:                                    ; preds = %.preheader632.loopexit, %.preheader632.preheader
  %w34 = phi i2 [ 0, %.preheader632.preheader ], [ %w_35, %.preheader632.loopexit ]
  %exitcond324 = icmp eq i2 %w34, -1
  %empty_346 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_35 = add i2 %w34, 1
  br i1 %exitcond324, label %.loopexit897.loopexit, label %.preheader631.preheader

.preheader631.preheader:                          ; preds = %.preheader632
  %tmp_169_cast1 = zext i2 %w34 to i9
  %tmp_169_cast = zext i2 %w34 to i10
  %tmp_658 = add i10 %tmp_652, %tmp_169_cast
  %tmp_1009_cast = sext i10 %tmp_658 to i15
  %tmp_148 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_658, i2 0)
  %p_shl334_cast = sext i12 %tmp_148 to i15
  %tmp_660 = sub i15 %p_shl334_cast, %tmp_1009_cast
  %tmp_662 = add i9 %tmp_1008_cast, %tmp_169_cast1
  %tmp_152 = shl i9 %tmp_662, 2
  %tmp_663 = sub i9 %tmp_152, %tmp_662
  br label %.preheader631

.preheader631:                                    ; preds = %38, %.preheader631.preheader
  %h34 = phi i2 [ %h_35, %38 ], [ 0, %.preheader631.preheader ]
  %exitcond323 = icmp eq i2 %h34, -1
  %empty_347 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_35 = add i2 %h34, 1
  br i1 %exitcond323, label %.preheader632.loopexit, label %38

; <label>:38                                      ; preds = %.preheader631
  %tmp_171_cast1 = zext i2 %h34 to i9
  %tmp_171_cast = zext i2 %h34 to i15
  %tmp_686 = add i15 %tmp_660, %tmp_171_cast
  %tmp_1021_cast = zext i15 %tmp_686 to i64
  %shuffle_conv_3x3_add_3 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1021_cast
  %tmp_687 = add i9 %tmp_663, %tmp_171_cast1
  %tmp_1022_cast1 = zext i9 %tmp_687 to i64
  %weights_24_1_3x3_add_3 = getelementptr [216 x float]* @weights_24_1_3x3, i64 0, i64 %tmp_1022_cast1
  %shuffle_conv_3x3_loa_3 = load float* %shuffle_conv_3x3_add_3, align 4
  store float %shuffle_conv_3x3_loa_3, float* %weights_24_1_3x3_add_3, align 4
  br label %.preheader631

.preheader630:                                    ; preds = %.preheader630.preheader, %39
  %i17 = phi i5 [ %i_18, %39 ], [ 0, %.preheader630.preheader ]
  %i17_cast = zext i5 %i17 to i9
  %exitcond322 = icmp eq i5 %i17, -8
  %empty_348 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_18 = add i5 %i17, 1
  br i1 %exitcond322, label %40, label %39

; <label>:39                                      ; preds = %.preheader630
  %tmp_166 = add i9 %i17_cast, 240
  %tmp_167 = zext i9 %tmp_166 to i64
  %bias_addr_12 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_167
  %bias_load_12 = load float* %bias_addr_12, align 4
  %tmp_168 = zext i5 %i17 to i64
  %bias_24_addr_9 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_168
  store float %bias_load_12, float* %bias_24_addr_9, align 4
  br label %.preheader630

; <label>:40                                      ; preds = %.preheader630
  call fastcc void @subconv_3x3_16_no_re([7776 x float]* @buffer1_1_24_16x16_p, [216 x float]* @weights_24_1_3x3, [24 x float]* @bias_24, [7776 x float]* @buffer0_1_24_16x16_p) nounwind
  br label %.loopexit896

.loopexit896.loopexit:                            ; preds = %.preheader629
  br label %.loopexit896

.loopexit896:                                     ; preds = %.loopexit896.loopexit, %40
  %co40 = phi i5 [ 0, %40 ], [ %co_41, %.loopexit896.loopexit ]
  %co41_cast = zext i5 %co40 to i8
  %exitcond321 = icmp eq i5 %co40, -8
  %empty_349 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_41 = add i5 %co40, 1
  br i1 %exitcond321, label %.preheader628.preheader, label %.preheader629.preheader

.preheader628.preheader:                          ; preds = %.loopexit896
  br label %.preheader628

.preheader629.preheader:                          ; preds = %.loopexit896
  %tmp_170 = add i8 %co41_cast, -112
  %tmp_665 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_170, i5 0)
  %p_shl337_cast = zext i13 %tmp_665 to i14
  %tmp_666 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %tmp_170, i3 0)
  %p_shl338_cast = zext i11 %tmp_666 to i14
  %tmp_667 = sub i14 %p_shl337_cast, %p_shl338_cast
  %tmp_1017_cast = sext i14 %tmp_667 to i15
  %tmp_677 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co40, i5 0)
  %p_shl335_cast = zext i10 %tmp_677 to i11
  %tmp_682 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co40, i3 0)
  %p_shl336_cast = zext i8 %tmp_682 to i11
  %tmp_685 = sub i11 %p_shl335_cast, %p_shl336_cast
  br label %.preheader629

.preheader629:                                    ; preds = %41, %.preheader629.preheader
  %ci20 = phi i5 [ %ci_21, %41 ], [ 0, %.preheader629.preheader ]
  %exitcond320 = icmp eq i5 %ci20, -8
  %empty_350 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_21 = add i5 %ci20, 1
  br i1 %exitcond320, label %.loopexit896.loopexit, label %41

; <label>:41                                      ; preds = %.preheader629
  %tmp_175_cast1 = zext i5 %ci20 to i11
  %tmp_175_cast = zext i5 %ci20 to i15
  %tmp_689 = add i15 %tmp_1017_cast, %tmp_175_cast
  %tmp_1023_cast = sext i15 %tmp_689 to i64
  %shuffle_conv_1x1_add_6 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1023_cast
  %tmp_692 = add i11 %tmp_685, %tmp_175_cast1
  %tmp_1024_cast1 = sext i11 %tmp_692 to i64
  %weights_24_24_1x1_ad_6 = getelementptr [576 x float]* @weights_24_24_1x1, i64 0, i64 %tmp_1024_cast1
  %shuffle_conv_1x1_loa_6 = load float* %shuffle_conv_1x1_add_6, align 4
  store float %shuffle_conv_1x1_loa_6, float* %weights_24_24_1x1_ad_6, align 4
  br label %.preheader629

.preheader628:                                    ; preds = %.preheader628.preheader, %42
  %i19 = phi i5 [ %i_20, %42 ], [ 0, %.preheader628.preheader ]
  %i19_cast = zext i5 %i19 to i9
  %exitcond319 = icmp eq i5 %i19, -8
  %empty_351 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_20 = add i5 %i19, 1
  br i1 %exitcond319, label %43, label %42

; <label>:42                                      ; preds = %.preheader628
  %tmp_172 = add i9 %i19_cast, -248
  %tmp_173 = zext i9 %tmp_172 to i64
  %bias_addr_13 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_173
  %bias_load_13 = load float* %bias_addr_13, align 4
  %tmp_174 = zext i5 %i19 to i64
  %bias_24_addr_10 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_174
  store float %bias_load_13, float* %bias_24_addr_10, align 4
  br label %.preheader628

; <label>:43                                      ; preds = %.preheader628
  call fastcc void @subconv_1x1_16_p([7776 x float]* @buffer0_1_24_16x16_p, [576 x float]* @weights_24_24_1x1, [24 x float]* @bias_24, [7776 x float]* @buffer1_1_24_16x16_p) nounwind
  br label %.loopexit895

.loopexit895.loopexit:                            ; preds = %.preheader627
  br label %.loopexit895

.loopexit895:                                     ; preds = %.loopexit895.loopexit, %43
  %co42 = phi i5 [ 0, %43 ], [ %co_43, %.loopexit895.loopexit ]
  %exitcond318 = icmp eq i5 %co42, -8
  %empty_352 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_43 = add i5 %co42, 1
  br i1 %exitcond318, label %45, label %.preheader627.preheader

.preheader627.preheader:                          ; preds = %.loopexit895
  %tmp_694 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co42, i4 0)
  %p_shl339_cast = zext i9 %tmp_694 to i10
  %tmp_702 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co42, i1 false)
  %p_shl340_cast = zext i6 %tmp_702 to i10
  %tmp_707 = add i10 %p_shl340_cast, %p_shl339_cast
  br label %.preheader627

.preheader627.loopexit:                           ; preds = %.preheader626
  br label %.preheader627

.preheader627:                                    ; preds = %.preheader627.loopexit, %.preheader627.preheader
  %h36 = phi i5 [ 0, %.preheader627.preheader ], [ %h_37, %.preheader627.loopexit ]
  %exitcond317 = icmp eq i5 %h36, -16
  %empty_353 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %h_37 = add i5 %h36, 1
  br i1 %exitcond317, label %.loopexit895.loopexit, label %.preheader626.preheader

.preheader626.preheader:                          ; preds = %.preheader627
  %tmp_177_cast = zext i5 %h_37 to i10
  %tmp_727 = add i10 %tmp_177_cast, %tmp_707
  %tmp_154 = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_727, i4 0)
  %p_shl341_cast = zext i14 %tmp_154 to i15
  %tmp_156 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_727, i1 false)
  %p_shl342_cast = zext i11 %tmp_156 to i15
  %tmp_730 = add i15 %p_shl341_cast, %p_shl342_cast
  br label %.preheader626

.preheader626:                                    ; preds = %44, %.preheader626.preheader
  %w36 = phi i5 [ %w_37, %44 ], [ 0, %.preheader626.preheader ]
  %exitcond316 = icmp eq i5 %w36, -16
  %empty_354 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %w_37 = add i5 %w36, 1
  br i1 %exitcond316, label %.preheader627.loopexit, label %44

; <label>:44                                      ; preds = %.preheader626
  %tmp_180_cast = zext i5 %w_37 to i15
  %tmp_757 = add i15 %tmp_730, %tmp_180_cast
  %tmp_1052_cast1 = zext i15 %tmp_757 to i64
  %buffer0_1_24_16x16_p_3 = getelementptr [7776 x float]* @buffer0_1_24_16x16_p, i64 0, i64 %tmp_1052_cast1
  %shuffleunit0_0_outpu_2 = getelementptr [15552 x float]* @shuffleunit0_0_outpu, i64 0, i64 %tmp_1052_cast1
  %shuffleunit0_0_outpu_3 = load float* %shuffleunit0_0_outpu_2, align 4
  store float %shuffleunit0_0_outpu_3, float* %buffer0_1_24_16x16_p_3, align 4
  br label %.preheader626

; <label>:45                                      ; preds = %.loopexit895
  call fastcc void @shuffle_24_p([7776 x float]* @buffer0_1_24_16x16_p, [15552 x float]* @shuffleunit0_1_outpu) nounwind
  br label %.loopexit894

.loopexit894.loopexit:                            ; preds = %.preheader625
  br label %.loopexit894

.loopexit894:                                     ; preds = %.loopexit894.loopexit, %45
  %co44 = phi i5 [ 0, %45 ], [ %co_45, %.loopexit894.loopexit ]
  %co44_cast = zext i5 %co44 to i6
  %exitcond315 = icmp eq i5 %co44, -8
  %empty_355 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_45 = add i5 %co44, 1
  br i1 %exitcond315, label %.preheader623.preheader, label %.preheader625.preheader

.preheader623.preheader:                          ; preds = %.loopexit894
  br label %.preheader623

.preheader625.preheader:                          ; preds = %.loopexit894
  %tmp_176 = add i6 %co44_cast, 24
  %tmp_708 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %tmp_176, i4 0)
  %p_shl345_cast = zext i10 %tmp_708 to i11
  %tmp_710 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %tmp_176, i1 false)
  %p_shl346_cast = zext i7 %tmp_710 to i11
  %tmp_711 = add i11 %p_shl346_cast, %p_shl345_cast
  %tmp_712 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co44, i4 0)
  %p_shl343_cast = zext i9 %tmp_712 to i10
  %tmp_713 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co44, i1 false)
  %p_shl344_cast = zext i6 %tmp_713 to i10
  %tmp_723 = add i10 %p_shl344_cast, %p_shl343_cast
  br label %.preheader625

.preheader625.loopexit:                           ; preds = %.preheader624
  br label %.preheader625

.preheader625:                                    ; preds = %.preheader625.loopexit, %.preheader625.preheader
  %h38 = phi i5 [ 0, %.preheader625.preheader ], [ %h_39, %.preheader625.loopexit ]
  %exitcond314 = icmp eq i5 %h38, -16
  %empty_356 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %h_39 = add i5 %h38, 1
  br i1 %exitcond314, label %.loopexit894.loopexit, label %.preheader624.preheader

.preheader624.preheader:                          ; preds = %.preheader625
  %tmp_179_cast1 = zext i5 %h_39 to i11
  %tmp_179_cast = zext i5 %h_39 to i10
  %tmp_753 = add i10 %tmp_179_cast, %tmp_723
  %p_shl349_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_753, i4 0)
  %tmp_157 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_753, i1 false)
  %p_shl350_cast = zext i11 %tmp_157 to i14
  %tmp_754 = add i14 %p_shl349_cast, %p_shl350_cast
  %tmp_755 = add i11 %tmp_179_cast1, %tmp_711
  %p_shl347_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_755, i4 0)
  %tmp_161 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_755, i1 false)
  %p_shl348_cast = zext i12 %tmp_161 to i15
  %tmp_756 = add i15 %p_shl347_cast, %p_shl348_cast
  br label %.preheader624

.preheader624:                                    ; preds = %46, %.preheader624.preheader
  %w38 = phi i5 [ %w_39, %46 ], [ 0, %.preheader624.preheader ]
  %exitcond313 = icmp eq i5 %w38, -16
  %empty_357 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %w_39 = add i5 %w38, 1
  br i1 %exitcond313, label %.preheader625.loopexit, label %46

; <label>:46                                      ; preds = %.preheader624
  %tmp_185_cast1 = zext i5 %w_39 to i15
  %tmp_185_cast = zext i5 %w_39 to i14
  %tmp_770 = add i14 %tmp_754, %tmp_185_cast
  %tmp_1055_cast = zext i14 %tmp_770 to i64
  %buffer0_1_24_16x16_p_4 = getelementptr [7776 x float]* @buffer0_1_24_16x16_p, i64 0, i64 %tmp_1055_cast
  %tmp_775 = add i15 %tmp_756, %tmp_185_cast1
  %tmp_1056_cast1 = zext i15 %tmp_775 to i64
  %shuffleunit0_1_outpu = getelementptr [15552 x float]* @shuffleunit0_1_outpu, i64 0, i64 %tmp_1056_cast1
  %shuffleunit0_1_outpu_1 = load float* %shuffleunit0_1_outpu, align 4
  store float %shuffleunit0_1_outpu_1, float* %buffer0_1_24_16x16_p_4, align 4
  br label %.preheader624

.preheader623.loopexit:                           ; preds = %.preheader622
  br label %.preheader623

.preheader623:                                    ; preds = %.preheader623.preheader, %.preheader623.loopexit
  %co46 = phi i5 [ %co_47, %.preheader623.loopexit ], [ 0, %.preheader623.preheader ]
  %co46_cast = zext i5 %co46 to i8
  %exitcond312 = icmp eq i5 %co46, -8
  %empty_358 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_47 = add i5 %co46, 1
  br i1 %exitcond312, label %.preheader621.preheader, label %.preheader622.preheader

.preheader621.preheader:                          ; preds = %.preheader623
  br label %.preheader621

.preheader622.preheader:                          ; preds = %.preheader623
  %tmp_178 = add i8 %co46_cast, -88
  %tmp_732 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_178, i5 0)
  %p_shl353_cast = zext i13 %tmp_732 to i14
  %tmp_733 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %tmp_178, i3 0)
  %p_shl354_cast = zext i11 %tmp_733 to i14
  %tmp_735 = sub i14 %p_shl353_cast, %p_shl354_cast
  %tmp_1040_cast1 = sext i14 %tmp_735 to i15
  %tmp_738 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co46, i5 0)
  %p_shl351_cast = zext i10 %tmp_738 to i11
  %tmp_740 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co46, i3 0)
  %p_shl352_cast = zext i8 %tmp_740 to i11
  %tmp_751 = sub i11 %p_shl351_cast, %p_shl352_cast
  br label %.preheader622

.preheader622:                                    ; preds = %47, %.preheader622.preheader
  %ci22 = phi i5 [ %ci_23, %47 ], [ 0, %.preheader622.preheader ]
  %exitcond311 = icmp eq i5 %ci22, -8
  %empty_359 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_23 = add i5 %ci22, 1
  br i1 %exitcond311, label %.preheader623.loopexit, label %47

; <label>:47                                      ; preds = %.preheader622
  %tmp_184_cast1 = zext i5 %ci22 to i11
  %tmp_184_cast = zext i5 %ci22 to i15
  %tmp_759 = add i15 %tmp_1040_cast1, %tmp_184_cast
  %tmp_1053_cast = sext i15 %tmp_759 to i64
  %shuffle_conv_1x1_add_7 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1053_cast
  %tmp_760 = add i11 %tmp_751, %tmp_184_cast1
  %tmp_1054_cast = sext i11 %tmp_760 to i64
  %weights_24_24_1x1_ad_7 = getelementptr [576 x float]* @weights_24_24_1x1, i64 0, i64 %tmp_1054_cast
  %shuffle_conv_1x1_loa_7 = load float* %shuffle_conv_1x1_add_7, align 4
  store float %shuffle_conv_1x1_loa_7, float* %weights_24_24_1x1_ad_7, align 4
  br label %.preheader622

.preheader621:                                    ; preds = %.preheader621.preheader, %48
  %i21 = phi i5 [ %i_22, %48 ], [ 0, %.preheader621.preheader ]
  %exitcond310 = icmp eq i5 %i21, -8
  %empty_360 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_22 = add i5 %i21, 1
  br i1 %exitcond310, label %49, label %48

; <label>:48                                      ; preds = %.preheader621
  %tmp_181 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 -7, i5 %i21)
  %tmp_182 = zext i9 %tmp_181 to i64
  %bias_addr_14 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_182
  %bias_load_14 = load float* %bias_addr_14, align 4
  %tmp_183 = zext i5 %i21 to i64
  %bias_24_addr_11 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_183
  store float %bias_load_14, float* %bias_24_addr_11, align 4
  br label %.preheader621

; <label>:49                                      ; preds = %.preheader621
  call fastcc void @subconv_1x1_16_p([7776 x float]* @buffer0_1_24_16x16_p, [576 x float]* @weights_24_24_1x1, [24 x float]* @bias_24, [7776 x float]* @buffer1_1_24_16x16_p) nounwind
  br label %.loopexit893

.loopexit893.loopexit:                            ; preds = %.preheader620
  br label %.loopexit893

.loopexit893:                                     ; preds = %.loopexit893.loopexit, %49
  %co48 = phi i5 [ 0, %49 ], [ %co_49, %.loopexit893.loopexit ]
  %exitcond309 = icmp eq i5 %co48, -8
  %empty_361 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_49 = add i5 %co48, 1
  br i1 %exitcond309, label %.preheader618.preheader, label %.preheader620.preheader

.preheader618.preheader:                          ; preds = %.loopexit893
  br label %.preheader618

.preheader620.preheader:                          ; preds = %.loopexit893
  %tmp_186 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 true, i5 %co48)
  %tmp_260_cast = sext i6 %tmp_186 to i7
  %tmp_187_cast = zext i7 %tmp_260_cast to i10
  %tmp_776 = call i8 @_ssdm_op_BitConcatenate.i8.i1.i5.i2(i1 true, i5 %co48, i2 0)
  %tmp_779 = sext i8 %tmp_776 to i9
  %p_shl356_cast = zext i9 %tmp_779 to i10
  %tmp_780 = sub i10 %p_shl356_cast, %tmp_187_cast
  %tmp_1059_cast = sext i10 %tmp_780 to i11
  %tmp_188_cast = zext i5 %co48 to i8
  %tmp_782 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co48, i2 0)
  %p_shl355_cast = zext i7 %tmp_782 to i8
  %tmp_784 = sub i8 %p_shl355_cast, %tmp_188_cast
  %tmp_1061_cast = sext i8 %tmp_784 to i9
  br label %.preheader620

.preheader620.loopexit:                           ; preds = %.preheader619
  br label %.preheader620

.preheader620:                                    ; preds = %.preheader620.loopexit, %.preheader620.preheader
  %w40 = phi i2 [ 0, %.preheader620.preheader ], [ %w_41, %.preheader620.loopexit ]
  %exitcond308 = icmp eq i2 %w40, -1
  %empty_362 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_41 = add i2 %w40, 1
  br i1 %exitcond308, label %.loopexit893.loopexit, label %.preheader619.preheader

.preheader619.preheader:                          ; preds = %.preheader620
  %tmp_192_cast1 = zext i2 %w40 to i9
  %tmp_192_cast = zext i2 %w40 to i11
  %tmp_786 = add i11 %tmp_1059_cast, %tmp_192_cast
  %tmp_1062_cast = sext i11 %tmp_786 to i15
  %tmp_162 = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_786, i2 0)
  %p_shl358_cast = sext i13 %tmp_162 to i15
  %tmp_787 = sub i15 %p_shl358_cast, %tmp_1062_cast
  %tmp_789 = add i9 %tmp_1061_cast, %tmp_192_cast1
  %tmp_164 = shl i9 %tmp_789, 2
  %tmp_800 = sub i9 %tmp_164, %tmp_789
  br label %.preheader619

.preheader619:                                    ; preds = %50, %.preheader619.preheader
  %h40 = phi i2 [ %h_41, %50 ], [ 0, %.preheader619.preheader ]
  %exitcond307 = icmp eq i2 %h40, -1
  %empty_363 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_41 = add i2 %h40, 1
  br i1 %exitcond307, label %.preheader620.loopexit, label %50

; <label>:50                                      ; preds = %.preheader619
  %tmp_193_cast1 = zext i2 %h40 to i9
  %tmp_193_cast = zext i2 %h40 to i15
  %tmp_821 = add i15 %tmp_787, %tmp_193_cast
  %tmp_1076_cast = zext i15 %tmp_821 to i64
  %shuffle_conv_3x3_add_4 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1076_cast
  %tmp_827 = add i9 %tmp_800, %tmp_193_cast1
  %tmp_1077_cast = zext i9 %tmp_827 to i64
  %weights_24_1_3x3_add_4 = getelementptr [216 x float]* @weights_24_1_3x3, i64 0, i64 %tmp_1077_cast
  %shuffle_conv_3x3_loa_4 = load float* %shuffle_conv_3x3_add_4, align 4
  store float %shuffle_conv_3x3_loa_4, float* %weights_24_1_3x3_add_4, align 4
  br label %.preheader619

.preheader618:                                    ; preds = %.preheader618.preheader, %51
  %i23 = phi i5 [ %i_24, %51 ], [ 0, %.preheader618.preheader ]
  %i23_cast = zext i5 %i23 to i9
  %exitcond306 = icmp eq i5 %i23, -8
  %empty_364 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_24 = add i5 %i23, 1
  br i1 %exitcond306, label %52, label %51

; <label>:51                                      ; preds = %.preheader618
  %tmp_189 = add i9 %i23_cast, -200
  %tmp_190 = zext i9 %tmp_189 to i64
  %bias_addr_15 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_190
  %bias_load_15 = load float* %bias_addr_15, align 4
  %tmp_191 = zext i5 %i23 to i64
  %bias_24_addr_12 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_191
  store float %bias_load_15, float* %bias_24_addr_12, align 4
  br label %.preheader618

; <label>:52                                      ; preds = %.preheader618
  call fastcc void @subconv_3x3_16_no_re([7776 x float]* @buffer1_1_24_16x16_p, [216 x float]* @weights_24_1_3x3, [24 x float]* @bias_24, [7776 x float]* @buffer0_1_24_16x16_p) nounwind
  br label %.loopexit892

.loopexit892.loopexit:                            ; preds = %.preheader617
  br label %.loopexit892

.loopexit892:                                     ; preds = %.loopexit892.loopexit, %52
  %co50 = phi i5 [ 0, %52 ], [ %co_51, %.loopexit892.loopexit ]
  %exitcond305 = icmp eq i5 %co50, -8
  %empty_365 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_51 = add i5 %co50, 1
  br i1 %exitcond305, label %.preheader616.preheader, label %.preheader617.preheader

.preheader616.preheader:                          ; preds = %.loopexit892
  br label %.preheader616

.preheader617.preheader:                          ; preds = %.loopexit892
  %tmp_801 = call i12 @_ssdm_op_BitConcatenate.i12.i2.i5.i5(i2 -2, i5 %co50, i5 0)
  %tmp_803 = sext i12 %tmp_801 to i13
  %p_shl361_cast = zext i13 %tmp_803 to i14
  %tmp_804 = call i10 @_ssdm_op_BitConcatenate.i10.i2.i5.i3(i2 -2, i5 %co50, i3 0)
  %tmp_805 = sext i10 %tmp_804 to i11
  %p_shl362_cast = zext i11 %tmp_805 to i14
  %tmp_806 = sub i14 %p_shl361_cast, %p_shl362_cast
  %tmp_1072_cast = sext i14 %tmp_806 to i15
  %tmp_808 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co50, i5 0)
  %p_shl359_cast = zext i10 %tmp_808 to i11
  %tmp_809 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co50, i3 0)
  %p_shl360_cast = zext i8 %tmp_809 to i11
  %tmp_819 = sub i11 %p_shl359_cast, %p_shl360_cast
  br label %.preheader617

.preheader617:                                    ; preds = %53, %.preheader617.preheader
  %ci24 = phi i5 [ %ci_25, %53 ], [ 0, %.preheader617.preheader ]
  %exitcond304 = icmp eq i5 %ci24, -8
  %empty_366 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_25 = add i5 %ci24, 1
  br i1 %exitcond304, label %.loopexit892.loopexit, label %53

; <label>:53                                      ; preds = %.preheader617
  %tmp_197_cast1 = zext i5 %ci24 to i11
  %tmp_197_cast = zext i5 %ci24 to i15
  %tmp_828 = add i15 %tmp_1072_cast, %tmp_197_cast
  %tmp_1078_cast1 = sext i15 %tmp_828 to i64
  %shuffle_conv_1x1_add_8 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1078_cast1
  %tmp_829 = add i11 %tmp_819, %tmp_197_cast1
  %tmp_1079_cast = sext i11 %tmp_829 to i64
  %weights_24_24_1x1_ad_8 = getelementptr [576 x float]* @weights_24_24_1x1, i64 0, i64 %tmp_1079_cast
  %shuffle_conv_1x1_loa_8 = load float* %shuffle_conv_1x1_add_8, align 4
  store float %shuffle_conv_1x1_loa_8, float* %weights_24_24_1x1_ad_8, align 4
  br label %.preheader617

.preheader616:                                    ; preds = %.preheader616.preheader, %54
  %i25 = phi i5 [ %i_26, %54 ], [ 0, %.preheader616.preheader ]
  %i25_cast = zext i5 %i25 to i9
  %exitcond303 = icmp eq i5 %i25, -8
  %empty_367 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_26 = add i5 %i25, 1
  br i1 %exitcond303, label %55, label %54

; <label>:54                                      ; preds = %.preheader616
  %tmp_194 = add i9 %i25_cast, -176
  %tmp_195 = zext i9 %tmp_194 to i64
  %bias_addr_16 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_195
  %bias_load_16 = load float* %bias_addr_16, align 4
  %tmp_196 = zext i5 %i25 to i64
  %bias_24_addr_13 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_196
  store float %bias_load_16, float* %bias_24_addr_13, align 4
  br label %.preheader616

; <label>:55                                      ; preds = %.preheader616
  call fastcc void @subconv_1x1_16_p([7776 x float]* @buffer0_1_24_16x16_p, [576 x float]* @weights_24_24_1x1, [24 x float]* @bias_24, [7776 x float]* @buffer1_1_24_16x16_p) nounwind
  br label %.loopexit891

.loopexit891.loopexit:                            ; preds = %.preheader615
  br label %.loopexit891

.loopexit891:                                     ; preds = %.loopexit891.loopexit, %55
  %co52 = phi i5 [ 0, %55 ], [ %co_53, %.loopexit891.loopexit ]
  %exitcond302 = icmp eq i5 %co52, -8
  %empty_368 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_53 = add i5 %co52, 1
  br i1 %exitcond302, label %57, label %.preheader615.preheader

.preheader615.preheader:                          ; preds = %.loopexit891
  %tmp_831 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co52, i4 0)
  %p_shl363_cast = zext i9 %tmp_831 to i10
  %tmp_832 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co52, i1 false)
  %p_shl364_cast = zext i6 %tmp_832 to i10
  %tmp_834 = add i10 %p_shl364_cast, %p_shl363_cast
  br label %.preheader615

.preheader615.loopexit:                           ; preds = %.preheader614
  br label %.preheader615

.preheader615:                                    ; preds = %.preheader615.loopexit, %.preheader615.preheader
  %h42 = phi i5 [ 0, %.preheader615.preheader ], [ %h_43, %.preheader615.loopexit ]
  %exitcond301 = icmp eq i5 %h42, -16
  %empty_369 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %h_43 = add i5 %h42, 1
  br i1 %exitcond301, label %.loopexit891.loopexit, label %.preheader614.preheader

.preheader614.preheader:                          ; preds = %.preheader615
  %tmp_199_cast = zext i5 %h_43 to i10
  %tmp_835 = add i10 %tmp_199_cast, %tmp_834
  %tmp_169 = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_835, i4 0)
  %p_shl365_cast = zext i14 %tmp_169 to i15
  %tmp_171 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_835, i1 false)
  %p_shl366_cast = zext i11 %tmp_171 to i15
  %tmp_837 = add i15 %p_shl365_cast, %p_shl366_cast
  br label %.preheader614

.preheader614:                                    ; preds = %56, %.preheader614.preheader
  %w42 = phi i5 [ %w_43, %56 ], [ 0, %.preheader614.preheader ]
  %exitcond300 = icmp eq i5 %w42, -16
  %empty_370 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %w_43 = add i5 %w42, 1
  br i1 %exitcond300, label %.preheader615.loopexit, label %56

; <label>:56                                      ; preds = %.preheader614
  %tmp_203_cast = zext i5 %w_43 to i15
  %tmp_839 = add i15 %tmp_837, %tmp_203_cast
  %tmp_1089_cast = zext i15 %tmp_839 to i64
  %buffer0_1_24_16x16_p_5 = getelementptr [7776 x float]* @buffer0_1_24_16x16_p, i64 0, i64 %tmp_1089_cast
  %shuffleunit0_1_outpu_2 = getelementptr [15552 x float]* @shuffleunit0_1_outpu, i64 0, i64 %tmp_1089_cast
  %shuffleunit0_1_outpu_3 = load float* %shuffleunit0_1_outpu_2, align 4
  store float %shuffleunit0_1_outpu_3, float* %buffer0_1_24_16x16_p_5, align 4
  br label %.preheader614

; <label>:57                                      ; preds = %.loopexit891
  call fastcc void @shuffle_24_p([7776 x float]* @buffer0_1_24_16x16_p, [15552 x float]* @shuffleunit0_2_outpu) nounwind
  br label %.loopexit890

.loopexit890.loopexit:                            ; preds = %.preheader613
  br label %.loopexit890

.loopexit890:                                     ; preds = %.loopexit890.loopexit, %57
  %co54 = phi i5 [ 0, %57 ], [ %co_55, %.loopexit890.loopexit ]
  %co54_cast = zext i5 %co54 to i9
  %exitcond299 = icmp eq i5 %co54, -8
  %empty_371 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_55 = add i5 %co54, 1
  br i1 %exitcond299, label %.preheader611.preheader, label %.preheader613.preheader

.preheader611.preheader:                          ; preds = %.loopexit890
  br label %.preheader611

.preheader613.preheader:                          ; preds = %.loopexit890
  %tmp_165 = trunc i5 %co54 to i1
  %p_shl = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_165, i5 0)
  %p_shl_cast = zext i6 %p_shl to i7
  %p_shl1 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_165, i3 0)
  %p_shl1_cast = zext i4 %p_shl1 to i7
  %tmp_198 = sub i7 %p_shl_cast, %p_shl1_cast
  %p_lshr_f_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co54, i32 1, i32 4)
  %tmp_278_cast = zext i4 %p_lshr_f_cast to i7
  br label %.preheader613

.preheader613.loopexit:                           ; preds = %.preheader612
  br label %.preheader613

.preheader613:                                    ; preds = %.preheader613.loopexit, %.preheader613.preheader
  %ci26 = phi i5 [ 0, %.preheader613.preheader ], [ %ci_27, %.preheader613.loopexit ]
  %ci26_cast = zext i5 %ci26 to i7
  %exitcond298 = icmp eq i5 %ci26, -8
  %empty_372 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_27 = add i5 %ci26, 1
  br i1 %exitcond298, label %.loopexit890.loopexit, label %.preheader612.preheader

.preheader612.preheader:                          ; preds = %.preheader613
  %tmp_200_cast = zext i5 %ci26 to i16
  %tmp_201 = add i7 %tmp_198, %ci26_cast
  %tmp_202_cast = sext i7 %tmp_201 to i13
  br label %.preheader612

.preheader612:                                    ; preds = %58, %.preheader612.preheader
  %i28 = phi i3 [ %i_29, %58 ], [ 0, %.preheader612.preheader ]
  %exitcond297 = icmp eq i3 %i28, -4
  %empty_373 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_29 = add i3 %i28, 1
  br i1 %exitcond297, label %.preheader613.loopexit, label %58

; <label>:58                                      ; preds = %.preheader612
  %tmp_177 = trunc i3 %i28 to i2
  %p_shl4 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_177, i5 0)
  %p_shl4_cast = zext i7 %p_shl4 to i8
  %p_shl5 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_177, i3 0)
  %p_shl5_cast = zext i5 %p_shl5 to i8
  %tmp_209 = sub i8 %p_shl4_cast, %p_shl5_cast
  %tmp_292_cast = sext i8 %tmp_209 to i9
  %tmp1 = add i9 216, %tmp_292_cast
  %tmp_210 = add i9 %tmp1, %co54_cast
  %tmp_849 = call i14 @_ssdm_op_BitConcatenate.i14.i9.i5(i9 %tmp_210, i5 0)
  %p_shl369_cast = zext i14 %tmp_849 to i15
  %tmp_850 = call i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9 %tmp_210, i3 0)
  %p_shl370_cast = zext i12 %tmp_850 to i15
  %tmp_851 = sub i15 %p_shl369_cast, %p_shl370_cast
  %tmp_1096_cast = sext i15 %tmp_851 to i16
  %tmp_852 = add i16 %tmp_200_cast, %tmp_1096_cast
  %tmp_1097_cast1 = sext i16 %tmp_852 to i64
  %shuffle_conv_1x1_add_9 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1097_cast1
  %shuffle_conv_1x1_loa_9 = load float* %shuffle_conv_1x1_add_9, align 4
  %p_shl6 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_177, i4 0)
  %p_shl6_cast = zext i6 %p_shl6 to i7
  %p_shl7 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_177, i2 0)
  %p_shl7_cast = zext i4 %p_shl7 to i7
  %tmp_211 = sub i7 %p_shl6_cast, %p_shl7_cast
  %tmp_212 = add i7 %tmp_211, %tmp_278_cast
  %tmp_853 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_212, i6 0)
  %tmp_854 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_212, i4 0)
  %p_shl368_cast = sext i11 %tmp_854 to i13
  %tmp_855 = sub i13 %tmp_853, %p_shl368_cast
  %tmp_856 = add i13 %tmp_202_cast, %tmp_855
  %tmp_1105_cast = sext i13 %tmp_856 to i64
  %weights_48_48_1x1_ad = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1105_cast
  store float %shuffle_conv_1x1_loa_9, float* %weights_48_48_1x1_ad, align 4
  br label %.preheader612

.preheader611.loopexit:                           ; preds = %.preheader610
  br label %.preheader611

.preheader611:                                    ; preds = %.preheader611.preheader, %.preheader611.loopexit
  %i27 = phi i5 [ %i_28, %.preheader611.loopexit ], [ 0, %.preheader611.preheader ]
  %i27_cast = zext i5 %i27 to i7
  %i27_cast1 = zext i5 %i27 to i9
  %exitcond296 = icmp eq i5 %i27, -8
  %empty_374 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_28 = add i5 %i27, 1
  br i1 %exitcond296, label %60, label %.preheader610.preheader

.preheader610.preheader:                          ; preds = %.preheader611
  br label %.preheader610

.preheader610:                                    ; preds = %.preheader610.preheader, %59
  %k = phi i2 [ %k_1, %59 ], [ 0, %.preheader610.preheader ]
  %exitcond295 = icmp eq i2 %k, -2
  %empty_375 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_1 = add i2 %k, 1
  br i1 %exitcond295, label %.preheader611.loopexit, label %59

; <label>:59                                      ; preds = %.preheader610
  %tmp_175 = trunc i2 %k to i1
  %p_shl2 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_175, i5 0)
  %p_shl2_cast = zext i6 %p_shl2 to i7
  %p_shl3 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_175, i3 0)
  %p_shl3_cast = zext i4 %p_shl3 to i7
  %tmp_204 = sub i7 %p_shl2_cast, %p_shl3_cast
  %tmp_281_cast = sext i7 %tmp_204 to i9
  %tmp2 = add i9 -152, %tmp_281_cast
  %tmp_205 = add i9 %i27_cast1, %tmp2
  %tmp_206 = zext i9 %tmp_205 to i64
  %bias_addr_17 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_206
  %bias_load_17 = load float* %bias_addr_17, align 4
  %tmp_207 = add i7 %tmp_204, %i27_cast
  %tmp_285_cast = sext i7 %tmp_207 to i32
  %tmp_208 = zext i32 %tmp_285_cast to i64
  %bias_48_addr = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_208
  store float %bias_load_17, float* %bias_48_addr, align 4
  br label %.preheader610

; <label>:60                                      ; preds = %.preheader611
  call fastcc void @subconv_1x1_16p_p([2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48) nounwind
  br label %.loopexit889

.loopexit889.loopexit:                            ; preds = %.preheader609
  br label %.loopexit889

.loopexit889:                                     ; preds = %.loopexit889.loopexit, %60
  %co56 = phi i5 [ 0, %60 ], [ %co_57, %.loopexit889.loopexit ]
  %co57_cast = zext i5 %co56 to i7
  %co57_cast1 = zext i5 %co56 to i8
  %exitcond294 = icmp eq i5 %co56, -8
  %empty_376 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_57 = add i5 %co56, 1
  br i1 %exitcond294, label %.preheader606.preheader, label %.preheader609.preheader

.preheader609.preheader:                          ; preds = %.loopexit889
  br label %.preheader609

.preheader606.preheader:                          ; preds = %.loopexit889
  br label %.preheader606

.preheader609.loopexit:                           ; preds = %.preheader608
  br label %.preheader609

.preheader609:                                    ; preds = %.preheader609.preheader, %.preheader609.loopexit
  %w44 = phi i2 [ %w_45, %.preheader609.loopexit ], [ 0, %.preheader609.preheader ]
  %exitcond293 = icmp eq i2 %w44, -1
  %empty_377 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_45 = add i2 %w44, 1
  br i1 %exitcond293, label %.loopexit889.loopexit, label %.preheader608.preheader

.preheader608.preheader:                          ; preds = %.preheader609
  %tmp_213_cast1 = zext i2 %w44 to i36
  %tmp_213_cast = zext i2 %w44 to i12
  br label %.preheader608

.preheader608.loopexit:                           ; preds = %.preheader607
  br label %.preheader608

.preheader608:                                    ; preds = %.preheader608.loopexit, %.preheader608.preheader
  %h44 = phi i2 [ 0, %.preheader608.preheader ], [ %h_45, %.preheader608.loopexit ]
  %exitcond292 = icmp eq i2 %h44, -1
  %empty_378 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_45 = add i2 %h44, 1
  br i1 %exitcond292, label %.preheader609.loopexit, label %.preheader607.preheader

.preheader607.preheader:                          ; preds = %.preheader608
  %tmp_220_cast1 = zext i2 %h44 to i10
  %tmp_220_cast = zext i2 %h44 to i15
  br label %.preheader607

.preheader607:                                    ; preds = %61, %.preheader607.preheader
  %i33 = phi i2 [ %i_34, %61 ], [ 0, %.preheader607.preheader ]
  %exitcond291 = icmp eq i2 %i33, -2
  %empty_379 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_34 = add i2 %i33, 1
  br i1 %exitcond291, label %.preheader608.loopexit, label %61

; <label>:61                                      ; preds = %.preheader607
  %tmp_184 = trunc i2 %i33 to i1
  %p_shl14 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_184, i5 0)
  %p_shl14_cast = zext i6 %p_shl14 to i7
  %p_shl15 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_184, i3 0)
  %p_shl15_cast = zext i4 %p_shl15 to i7
  %tmp_224 = sub i7 %p_shl14_cast, %p_shl15_cast
  %tmp_318_cast = sext i7 %tmp_224 to i8
  %tmp3 = add i8 120, %tmp_318_cast
  %tmp_225 = add i8 %tmp3, %co57_cast1
  %tmp_226_cast = zext i8 %tmp_225 to i11
  %tmp_857 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_225, i2 0)
  %p_shl374_cast = zext i10 %tmp_857 to i11
  %tmp_858 = sub i11 %p_shl374_cast, %tmp_226_cast
  %tmp_1113_cast = sext i11 %tmp_858 to i12
  %tmp_859 = add i12 %tmp_213_cast, %tmp_1113_cast
  %tmp_1114_cast = sext i12 %tmp_859 to i15
  %tmp_185 = call i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12 %tmp_859, i2 0)
  %p_shl373_cast = sext i14 %tmp_185 to i15
  %tmp_860 = sub i15 %p_shl373_cast, %tmp_1114_cast
  %tmp_861 = add i15 %tmp_220_cast, %tmp_860
  %tmp_1117_cast = zext i15 %tmp_861 to i64
  %shuffle_conv_3x3_add_5 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1117_cast
  %shuffle_conv_3x3_loa_5 = load float* %shuffle_conv_3x3_add_5, align 4
  %tmp_227 = add i7 %co57_cast, %tmp_224
  %tmp_322_cast = sext i7 %tmp_227 to i32
  %tmp_228_cast = zext i32 %tmp_322_cast to i35
  %tmp_862 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_227, i2 0)
  %tmp_863 = sext i9 %tmp_862 to i34
  %p_shl372_cast = zext i34 %tmp_863 to i35
  %tmp_864 = sub i35 %p_shl372_cast, %tmp_228_cast
  %tmp_1120_cast = sext i35 %tmp_864 to i36
  %tmp_865 = add i36 %tmp_213_cast1, %tmp_1120_cast
  %tmp_187 = trunc i36 %tmp_865 to i10
  %tmp_188 = trunc i36 %tmp_865 to i8
  %p_shl371_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_188, i2 0)
  %tmp_866 = sub i10 %p_shl371_cast, %tmp_187
  %tmp_867 = add i10 %tmp_220_cast1, %tmp_866
  %tmp_1124_cast = zext i10 %tmp_867 to i64
  %weights_48_1_3x3_add = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1124_cast
  store float %shuffle_conv_3x3_loa_5, float* %weights_48_1_3x3_add, align 4
  br label %.preheader607

.preheader606.loopexit:                           ; preds = %.preheader605
  br label %.preheader606

.preheader606:                                    ; preds = %.preheader606.preheader, %.preheader606.loopexit
  %i29 = phi i5 [ %i_30, %.preheader606.loopexit ], [ 0, %.preheader606.preheader ]
  %i29_cast = zext i5 %i29 to i7
  %i29_cast607_cast = zext i5 %i29 to i8
  %exitcond290 = icmp eq i5 %i29, -8
  %empty_380 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_30 = add i5 %i29, 1
  br i1 %exitcond290, label %63, label %.preheader605.preheader

.preheader605.preheader:                          ; preds = %.preheader606
  br label %.preheader605

.preheader605:                                    ; preds = %.preheader605.preheader, %62
  %k2 = phi i2 [ %k_2, %62 ], [ 0, %.preheader605.preheader ]
  %exitcond289 = icmp eq i2 %k2, -2
  %empty_381 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_2 = add i2 %k2, 1
  br i1 %exitcond289, label %.preheader606.loopexit, label %62

; <label>:62                                      ; preds = %.preheader605
  %tmp_180 = trunc i2 %k2 to i1
  %p_shl8 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_180, i5 0)
  %p_shl8_cast = zext i6 %p_shl8 to i7
  %p_shl9 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_180, i3 0)
  %p_shl9_cast = zext i4 %p_shl9 to i7
  %tmp_215 = sub i7 %p_shl8_cast, %p_shl9_cast
  %tmp_299_cast_cast = sext i7 %tmp_215 to i8
  %tmp4 = add i8 -104, %tmp_299_cast_cast
  %tmp_216 = add i8 %i29_cast607_cast, %tmp4
  %tmp_301_cast = sext i8 %tmp_216 to i9
  %tmp_217 = zext i9 %tmp_301_cast to i64
  %bias_addr_18 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_217
  %bias_load_18 = load float* %bias_addr_18, align 4
  %tmp_218 = add i7 %tmp_215, %i29_cast
  %tmp_303_cast = sext i7 %tmp_218 to i32
  %tmp_219 = zext i32 %tmp_303_cast to i64
  %bias_48_addr_1 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_219
  store float %bias_load_18, float* %bias_48_addr_1, align 4
  br label %.preheader605

; <label>:63                                      ; preds = %.preheader606
  call fastcc void @subconv_3x3_16_strid([15552 x float]* @ShuffleConvs_1_Downs, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [4800 x float]* @buffer0_1_48_8x8_p) nounwind
  br label %.loopexit888

.loopexit888.loopexit:                            ; preds = %.preheader604
  br label %.loopexit888

.loopexit888:                                     ; preds = %.loopexit888.loopexit, %63
  %co58 = phi i5 [ 0, %63 ], [ %co_59, %.loopexit888.loopexit ]
  %co59_cast = zext i5 %co58 to i9
  %exitcond288 = icmp eq i5 %co58, -8
  %empty_382 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_59 = add i5 %co58, 1
  br i1 %exitcond288, label %.preheader602.preheader, label %.preheader604.preheader

.preheader602.preheader:                          ; preds = %.loopexit888
  br label %.preheader602

.preheader604.preheader:                          ; preds = %.loopexit888
  %tmp_179 = trunc i5 %co58 to i1
  %p_shl10 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_179, i5 0)
  %p_shl10_cast = zext i6 %p_shl10 to i7
  %p_shl11 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_179, i3 0)
  %p_shl11_cast = zext i4 %p_shl11 to i7
  %tmp_214 = sub i7 %p_shl10_cast, %p_shl11_cast
  %p_lshr_f1_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co58, i32 1, i32 4)
  %tmp_307_cast = zext i4 %p_lshr_f1_cast to i7
  br label %.preheader604

.preheader604.loopexit:                           ; preds = %.preheader603
  br label %.preheader604

.preheader604:                                    ; preds = %.preheader604.loopexit, %.preheader604.preheader
  %ci28 = phi i5 [ 0, %.preheader604.preheader ], [ %ci_29, %.preheader604.loopexit ]
  %ci28_cast = zext i5 %ci28 to i7
  %exitcond287 = icmp eq i5 %ci28, -8
  %empty_383 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_29 = add i5 %ci28, 1
  br i1 %exitcond287, label %.loopexit888.loopexit, label %.preheader603.preheader

.preheader603.preheader:                          ; preds = %.preheader604
  %tmp_221_cast = zext i5 %ci28 to i16
  %tmp_222 = add i7 %tmp_214, %ci28_cast
  %tmp_223_cast = sext i7 %tmp_222 to i13
  br label %.preheader603

.preheader603:                                    ; preds = %64, %.preheader603.preheader
  %i35 = phi i3 [ %i_36, %64 ], [ 0, %.preheader603.preheader ]
  %exitcond286 = icmp eq i3 %i35, -4
  %empty_384 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_36 = add i3 %i35, 1
  br i1 %exitcond286, label %.preheader604.loopexit, label %64

; <label>:64                                      ; preds = %.preheader603
  %tmp_193 = trunc i3 %i35 to i2
  %p_shl16 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_193, i5 0)
  %p_shl16_cast = zext i7 %p_shl16 to i8
  %p_shl17 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_193, i3 0)
  %p_shl17_cast = zext i5 %p_shl17 to i8
  %tmp_234 = sub i8 %p_shl16_cast, %p_shl17_cast
  %tmp_325_cast = sext i8 %tmp_234 to i9
  %tmp5 = add i9 -200, %tmp_325_cast
  %tmp_235 = add i9 %tmp5, %co59_cast
  %tmp_868 = call i14 @_ssdm_op_BitConcatenate.i14.i9.i5(i9 %tmp_235, i5 0)
  %p_shl377_cast = zext i14 %tmp_868 to i15
  %tmp_869 = call i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9 %tmp_235, i3 0)
  %p_shl378_cast = zext i12 %tmp_869 to i15
  %tmp_870 = sub i15 %p_shl377_cast, %p_shl378_cast
  %tmp_1131_cast = sext i15 %tmp_870 to i16
  %tmp_871 = add i16 %tmp_221_cast, %tmp_1131_cast
  %tmp_1132_cast = sext i16 %tmp_871 to i64
  %shuffle_conv_1x1_add_10 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1132_cast
  %shuffle_conv_1x1_loa_10 = load float* %shuffle_conv_1x1_add_10, align 4
  %p_shl18 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_193, i4 0)
  %p_shl18_cast = zext i6 %p_shl18 to i7
  %p_shl19 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_193, i2 0)
  %p_shl19_cast = zext i4 %p_shl19 to i7
  %tmp_236 = sub i7 %p_shl18_cast, %p_shl19_cast
  %tmp_237 = add i7 %tmp_236, %tmp_307_cast
  %tmp_872 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_237, i6 0)
  %tmp_873 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_237, i4 0)
  %p_shl376_cast = sext i11 %tmp_873 to i13
  %tmp_874 = sub i13 %tmp_872, %p_shl376_cast
  %tmp_875 = add i13 %tmp_223_cast, %tmp_874
  %tmp_1140_cast = sext i13 %tmp_875 to i64
  %weights_48_48_1x1_ad_1 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1140_cast
  store float %shuffle_conv_1x1_loa_10, float* %weights_48_48_1x1_ad_1, align 4
  br label %.preheader603

.preheader602.loopexit:                           ; preds = %.preheader601
  br label %.preheader602

.preheader602:                                    ; preds = %.preheader602.preheader, %.preheader602.loopexit
  %i31 = phi i5 [ %i_32, %.preheader602.loopexit ], [ 0, %.preheader602.preheader ]
  %i32_cast = zext i5 %i31 to i7
  %i32_cast594_cast = zext i5 %i31 to i8
  %exitcond285 = icmp eq i5 %i31, -8
  %empty_385 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_32 = add i5 %i31, 1
  br i1 %exitcond285, label %66, label %.preheader601.preheader

.preheader601.preheader:                          ; preds = %.preheader602
  br label %.preheader601

.preheader601:                                    ; preds = %.preheader601.preheader, %65
  %k3 = phi i2 [ %k_3, %65 ], [ 0, %.preheader601.preheader ]
  %exitcond284 = icmp eq i2 %k3, -2
  %empty_386 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_3 = add i2 %k3, 1
  br i1 %exitcond284, label %.preheader602.loopexit, label %65

; <label>:65                                      ; preds = %.preheader601
  %tmp_192 = trunc i2 %k3 to i1
  %p_shl12 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_192, i5 0)
  %p_shl12_cast = zext i6 %p_shl12 to i7
  %p_shl13 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_192, i3 0)
  %p_shl13_cast = zext i4 %p_shl13 to i7
  %tmp_229 = sub i7 %p_shl12_cast, %p_shl13_cast
  %tmp_309_cast_cast = sext i7 %tmp_229 to i8
  %tmp6 = add i8 -56, %tmp_309_cast_cast
  %tmp_230 = add i8 %i32_cast594_cast, %tmp6
  %tmp_311_cast = sext i8 %tmp_230 to i9
  %tmp_231 = zext i9 %tmp_311_cast to i64
  %bias_addr_19 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_231
  %bias_load_19 = load float* %bias_addr_19, align 4
  %tmp_232 = add i7 %tmp_229, %i32_cast
  %tmp_313_cast = sext i7 %tmp_232 to i32
  %tmp_233 = zext i32 %tmp_313_cast to i64
  %bias_48_addr_2 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_233
  store float %bias_load_19, float* %bias_48_addr_2, align 4
  br label %.preheader601

; <label>:66                                      ; preds = %.preheader602
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  call fastcc void @shuffle_48_l_p([4800 x float]* @buffer1_1_48_8x8_p, [9600 x float]* @downsampleunit1_outp) nounwind
  br label %.loopexit887

.loopexit887.loopexit:                            ; preds = %.preheader600
  br label %.loopexit887

.loopexit887:                                     ; preds = %.loopexit887.loopexit, %66
  %co60 = phi i5 [ 0, %66 ], [ %co_61, %.loopexit887.loopexit ]
  %co61_cast = zext i5 %co60 to i7
  %co61_cast1 = zext i5 %co60 to i8
  %exitcond283 = icmp eq i5 %co60, -8
  %empty_387 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_61 = add i5 %co60, 1
  br i1 %exitcond283, label %.preheader597.preheader, label %.preheader600.preheader

.preheader600.preheader:                          ; preds = %.loopexit887
  br label %.preheader600

.preheader597.preheader:                          ; preds = %.loopexit887
  br label %.preheader597

.preheader600.loopexit:                           ; preds = %.preheader599
  br label %.preheader600

.preheader600:                                    ; preds = %.preheader600.preheader, %.preheader600.loopexit
  %w46 = phi i2 [ %w_47, %.preheader600.loopexit ], [ 0, %.preheader600.preheader ]
  %exitcond282 = icmp eq i2 %w46, -1
  %empty_388 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_47 = add i2 %w46, 1
  br i1 %exitcond282, label %.loopexit887.loopexit, label %.preheader599.preheader

.preheader599.preheader:                          ; preds = %.preheader600
  %tmp_238_cast1 = zext i2 %w46 to i36
  %tmp_238_cast = zext i2 %w46 to i11
  br label %.preheader599

.preheader599.loopexit:                           ; preds = %.preheader598
  br label %.preheader599

.preheader599:                                    ; preds = %.preheader599.loopexit, %.preheader599.preheader
  %h46 = phi i2 [ 0, %.preheader599.preheader ], [ %h_47, %.preheader599.loopexit ]
  %exitcond281 = icmp eq i2 %h46, -1
  %empty_389 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_47 = add i2 %h46, 1
  br i1 %exitcond281, label %.preheader600.loopexit, label %.preheader598.preheader

.preheader598.preheader:                          ; preds = %.preheader599
  %tmp_245_cast1 = zext i2 %h46 to i10
  %tmp_245_cast = zext i2 %h46 to i15
  br label %.preheader598

.preheader598:                                    ; preds = %67, %.preheader598.preheader
  %i40 = phi i2 [ %i_41, %67 ], [ 0, %.preheader598.preheader ]
  %exitcond280 = icmp eq i2 %i40, -2
  %empty_390 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_41 = add i2 %i40, 1
  br i1 %exitcond280, label %.preheader599.loopexit, label %67

; <label>:67                                      ; preds = %.preheader598
  %tmp_200 = trunc i2 %i40 to i1
  %p_shl26 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_200, i5 0)
  %p_shl26_cast = zext i6 %p_shl26 to i7
  %p_shl27 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_200, i3 0)
  %p_shl27_cast = zext i4 %p_shl27 to i7
  %tmp_249 = sub i7 %p_shl26_cast, %p_shl27_cast
  %tmp_351_cast = sext i7 %tmp_249 to i8
  %tmp7 = add i8 -88, %tmp_351_cast
  %tmp_250 = add i8 %tmp7, %co61_cast1
  %tmp_251_cast = zext i8 %tmp_250 to i11
  %tmp_876 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_250, i2 0)
  %p_shl382_cast = zext i10 %tmp_876 to i11
  %tmp_877 = sub i11 %p_shl382_cast, %tmp_251_cast
  %tmp_878 = add i11 %tmp_238_cast, %tmp_877
  %tmp_1149_cast = sext i11 %tmp_878 to i15
  %tmp_202 = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_878, i2 0)
  %p_shl381_cast = sext i13 %tmp_202 to i15
  %tmp_879 = sub i15 %p_shl381_cast, %tmp_1149_cast
  %tmp_880 = add i15 %tmp_245_cast, %tmp_879
  %tmp_1152_cast = zext i15 %tmp_880 to i64
  %shuffle_conv_3x3_add_6 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1152_cast
  %shuffle_conv_3x3_loa_6 = load float* %shuffle_conv_3x3_add_6, align 4
  %tmp_252 = add i7 %co61_cast, %tmp_249
  %tmp_355_cast = sext i7 %tmp_252 to i32
  %tmp_253_cast = zext i32 %tmp_355_cast to i35
  %tmp_881 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_252, i2 0)
  %tmp_882 = sext i9 %tmp_881 to i34
  %p_shl380_cast = zext i34 %tmp_882 to i35
  %tmp_883 = sub i35 %p_shl380_cast, %tmp_253_cast
  %tmp_1155_cast = sext i35 %tmp_883 to i36
  %tmp_884 = add i36 %tmp_238_cast1, %tmp_1155_cast
  %tmp_203 = trunc i36 %tmp_884 to i10
  %tmp_213 = trunc i36 %tmp_884 to i8
  %p_shl379_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_213, i2 0)
  %tmp_885 = sub i10 %p_shl379_cast, %tmp_203
  %tmp_886 = add i10 %tmp_245_cast1, %tmp_885
  %tmp_1159_cast = zext i10 %tmp_886 to i64
  %weights_48_1_3x3_add_1 = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1159_cast
  store float %shuffle_conv_3x3_loa_6, float* %weights_48_1_3x3_add_1, align 4
  br label %.preheader598

.preheader597.loopexit:                           ; preds = %.preheader596
  br label %.preheader597

.preheader597:                                    ; preds = %.preheader597.preheader, %.preheader597.loopexit
  %i37 = phi i5 [ %i_38, %.preheader597.loopexit ], [ 0, %.preheader597.preheader ]
  %i37_cast = zext i5 %i37 to i7
  %i37_cast1 = zext i5 %i37 to i10
  %exitcond279 = icmp eq i5 %i37, -8
  %empty_391 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_38 = add i5 %i37, 1
  br i1 %exitcond279, label %69, label %.preheader596.preheader

.preheader596.preheader:                          ; preds = %.preheader597
  br label %.preheader596

.preheader596:                                    ; preds = %.preheader596.preheader, %68
  %k4 = phi i2 [ %k_4, %68 ], [ 0, %.preheader596.preheader ]
  %exitcond278 = icmp eq i2 %k4, -2
  %empty_392 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_4 = add i2 %k4, 1
  br i1 %exitcond278, label %.preheader597.loopexit, label %68

; <label>:68                                      ; preds = %.preheader596
  %tmp_199 = trunc i2 %k4 to i1
  %p_shl20 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_199, i5 0)
  %p_shl20_cast = zext i6 %p_shl20 to i7
  %p_shl21 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_199, i3 0)
  %p_shl21_cast = zext i4 %p_shl21 to i7
  %tmp_240 = sub i7 %p_shl20_cast, %p_shl21_cast
  %tmp_332_cast = sext i7 %tmp_240 to i10
  %tmp8 = add i10 504, %tmp_332_cast
  %tmp_241 = add i10 %i37_cast1, %tmp8
  %tmp_242 = zext i10 %tmp_241 to i64
  %bias_addr_20 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_242
  %bias_load_20 = load float* %bias_addr_20, align 4
  %tmp_243 = add i7 %tmp_240, %i37_cast
  %tmp_336_cast = sext i7 %tmp_243 to i32
  %tmp_244 = zext i32 %tmp_336_cast to i64
  %bias_48_addr_3 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_244
  store float %bias_load_20, float* %bias_48_addr_3, align 4
  br label %.preheader596

; <label>:69                                      ; preds = %.preheader597
  call fastcc void @subconv_3x3_16_strid([15552 x float]* @shuffleunit0_2_outpu, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [4800 x float]* @buffer0_1_48_8x8_p) nounwind
  br label %.loopexit886

.loopexit886.loopexit:                            ; preds = %.preheader595
  br label %.loopexit886

.loopexit886:                                     ; preds = %.loopexit886.loopexit, %69
  %co62 = phi i5 [ 0, %69 ], [ %co_63, %.loopexit886.loopexit ]
  %co63_cast = zext i5 %co62 to i10
  %exitcond277 = icmp eq i5 %co62, -8
  %empty_393 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_63 = add i5 %co62, 1
  br i1 %exitcond277, label %.preheader593.preheader, label %.preheader595.preheader

.preheader593.preheader:                          ; preds = %.loopexit886
  br label %.preheader593

.preheader595.preheader:                          ; preds = %.loopexit886
  %tmp_197 = trunc i5 %co62 to i1
  %p_shl22 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_197, i5 0)
  %p_shl22_cast = zext i6 %p_shl22 to i7
  %p_shl23 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_197, i3 0)
  %p_shl23_cast = zext i4 %p_shl23 to i7
  %tmp_239 = sub i7 %p_shl22_cast, %p_shl23_cast
  %p_lshr_f2_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co62, i32 1, i32 4)
  %tmp_340_cast = zext i4 %p_lshr_f2_cast to i7
  br label %.preheader595

.preheader595.loopexit:                           ; preds = %.preheader594
  br label %.preheader595

.preheader595:                                    ; preds = %.preheader595.loopexit, %.preheader595.preheader
  %ci30 = phi i5 [ 0, %.preheader595.preheader ], [ %ci_31, %.preheader595.loopexit ]
  %ci30_cast = zext i5 %ci30 to i7
  %exitcond276 = icmp eq i5 %ci30, -8
  %empty_394 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_31 = add i5 %ci30, 1
  br i1 %exitcond276, label %.loopexit886.loopexit, label %.preheader594.preheader

.preheader594.preheader:                          ; preds = %.preheader595
  %tmp_246_cast = zext i5 %ci30 to i17
  %tmp_247 = add i7 %tmp_239, %ci30_cast
  %tmp_248_cast = sext i7 %tmp_247 to i13
  br label %.preheader594

.preheader594:                                    ; preds = %70, %.preheader594.preheader
  %i42 = phi i3 [ %i_43, %70 ], [ 0, %.preheader594.preheader ]
  %exitcond275 = icmp eq i3 %i42, -4
  %empty_395 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_43 = add i3 %i42, 1
  br i1 %exitcond275, label %.preheader595.loopexit, label %70

; <label>:70                                      ; preds = %.preheader594
  %tmp_221 = trunc i3 %i42 to i2
  %p_shl30 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_221, i5 0)
  %p_shl30_cast = zext i7 %p_shl30 to i8
  %p_shl31 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_221, i3 0)
  %p_shl31_cast = zext i5 %p_shl31 to i8
  %tmp_260 = sub i8 %p_shl30_cast, %p_shl31_cast
  %tmp_363_cast = sext i8 %tmp_260 to i9
  %tmp9 = add i9 -104, %tmp_363_cast
  %tmp9_cast = zext i9 %tmp9 to i10
  %tmp_261 = add i10 %tmp9_cast, %co63_cast
  %tmp_893 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_261, i5 0)
  %p_shl385_cast = zext i15 %tmp_893 to i16
  %tmp_894 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_261, i3 0)
  %p_shl386_cast = zext i13 %tmp_894 to i16
  %tmp_895 = sub i16 %p_shl385_cast, %p_shl386_cast
  %tmp_1172_cast = sext i16 %tmp_895 to i17
  %tmp_896 = add i17 %tmp_246_cast, %tmp_1172_cast
  %tmp_1173_cast = sext i17 %tmp_896 to i64
  %shuffle_conv_1x1_add_11 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1173_cast
  %shuffle_conv_1x1_loa_11 = load float* %shuffle_conv_1x1_add_11, align 4
  %p_shl32 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_221, i4 0)
  %p_shl32_cast = zext i6 %p_shl32 to i7
  %p_shl33 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_221, i2 0)
  %p_shl33_cast = zext i4 %p_shl33 to i7
  %tmp_262 = sub i7 %p_shl32_cast, %p_shl33_cast
  %tmp_263 = add i7 %tmp_262, %tmp_340_cast
  %tmp_897 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_263, i6 0)
  %tmp_898 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_263, i4 0)
  %p_shl384_cast = sext i11 %tmp_898 to i13
  %tmp_899 = sub i13 %tmp_897, %p_shl384_cast
  %tmp_900 = add i13 %tmp_248_cast, %tmp_899
  %tmp_1181_cast = sext i13 %tmp_900 to i64
  %weights_48_48_1x1_ad_2 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1181_cast
  store float %shuffle_conv_1x1_loa_11, float* %weights_48_48_1x1_ad_2, align 4
  br label %.preheader594

.preheader593.loopexit:                           ; preds = %.preheader592
  br label %.preheader593

.preheader593:                                    ; preds = %.preheader593.preheader, %.preheader593.loopexit
  %i39 = phi i5 [ %i_40, %.preheader593.loopexit ], [ 0, %.preheader593.preheader ]
  %i39_cast = zext i5 %i39 to i7
  %i39_cast1 = zext i5 %i39 to i10
  %exitcond274 = icmp eq i5 %i39, -8
  %empty_396 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_40 = add i5 %i39, 1
  br i1 %exitcond274, label %72, label %.preheader592.preheader

.preheader592.preheader:                          ; preds = %.preheader593
  br label %.preheader592

.preheader592:                                    ; preds = %.preheader592.preheader, %71
  %k5 = phi i2 [ %k_5, %71 ], [ 0, %.preheader592.preheader ]
  %exitcond273 = icmp eq i2 %k5, -2
  %empty_397 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_5 = add i2 %k5, 1
  br i1 %exitcond273, label %.preheader593.loopexit, label %71

; <label>:71                                      ; preds = %.preheader592
  %tmp_220 = trunc i2 %k5 to i1
  %p_shl24 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_220, i5 0)
  %p_shl24_cast = zext i6 %p_shl24 to i7
  %p_shl25 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_220, i3 0)
  %p_shl25_cast = zext i4 %p_shl25 to i7
  %tmp_255 = sub i7 %p_shl24_cast, %p_shl25_cast
  %tmp_342_cast = sext i7 %tmp_255 to i10
  %tmp10 = add i10 -472, %tmp_342_cast
  %tmp_256 = add i10 %i39_cast1, %tmp10
  %tmp_257 = zext i10 %tmp_256 to i64
  %bias_addr_21 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_257
  %bias_load_21 = load float* %bias_addr_21, align 4
  %tmp_258 = add i7 %tmp_255, %i39_cast
  %tmp_346_cast = sext i7 %tmp_258 to i32
  %tmp_259 = zext i32 %tmp_346_cast to i64
  %bias_48_addr_4 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_259
  store float %bias_load_21, float* %bias_48_addr_4, align 4
  br label %.preheader592

; <label>:72                                      ; preds = %.preheader593
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  call fastcc void @shuffle_48_r_p([4800 x float]* @buffer1_1_48_8x8_p, [9600 x float]* @downsampleunit1_outp) nounwind
  br label %.loopexit885

.loopexit885.loopexit:                            ; preds = %.preheader591
  br label %.loopexit885

.loopexit885:                                     ; preds = %.loopexit885.loopexit, %72
  %co64 = phi i6 [ 0, %72 ], [ %co_65, %.loopexit885.loopexit ]
  %co65_cast = zext i6 %co64 to i7
  %exitcond272 = icmp eq i6 %co64, -16
  %empty_398 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_65 = add i6 %co64, 1
  br i1 %exitcond272, label %.preheader589.preheader, label %.preheader591.preheader

.preheader589.preheader:                          ; preds = %.loopexit885
  br label %.preheader589

.preheader591.preheader:                          ; preds = %.loopexit885
  %tmp_254 = add i7 %co65_cast, 48
  %tmp_887 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_254, i3 0)
  %p_shl389_cast = zext i10 %tmp_887 to i11
  %tmp_888 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp_254, i1 false)
  %p_shl390_cast = zext i8 %tmp_888 to i11
  %tmp_889 = add i11 %p_shl390_cast, %p_shl389_cast
  %tmp_890 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co64, i3 0)
  %p_shl387_cast = zext i9 %tmp_890 to i10
  %tmp_891 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co64, i1 false)
  %p_shl388_cast = zext i7 %tmp_891 to i10
  %tmp_892 = add i10 %p_shl388_cast, %p_shl387_cast
  br label %.preheader591

.preheader591.loopexit:                           ; preds = %.preheader590
  br label %.preheader591

.preheader591:                                    ; preds = %.preheader591.loopexit, %.preheader591.preheader
  %h48 = phi i4 [ 0, %.preheader591.preheader ], [ %h_49, %.preheader591.loopexit ]
  %exitcond271 = icmp eq i4 %h48, -8
  %empty_399 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_49 = add i4 %h48, 1
  br i1 %exitcond271, label %.loopexit885.loopexit, label %.preheader590.preheader

.preheader590.preheader:                          ; preds = %.preheader591
  %tmp_265_cast1 = zext i4 %h_49 to i10
  %tmp_265_cast = zext i4 %h_49 to i11
  %tmp_901 = add i11 %tmp_265_cast, %tmp_889
  %tmp_226 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_901, i3 0)
  %p_shl393_cast = zext i14 %tmp_226 to i15
  %tmp_228 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_901, i1 false)
  %p_shl394_cast = zext i12 %tmp_228 to i15
  %tmp_902 = add i15 %p_shl393_cast, %p_shl394_cast
  %tmp_903 = add i10 %tmp_265_cast1, %tmp_892
  %tmp_238 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_903, i3 0)
  %p_shl391_cast = zext i13 %tmp_238 to i14
  %tmp_245 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_903, i1 false)
  %p_shl392_cast = zext i11 %tmp_245 to i14
  %tmp_904 = add i14 %p_shl391_cast, %p_shl392_cast
  br label %.preheader590

.preheader590:                                    ; preds = %73, %.preheader590.preheader
  %w48 = phi i4 [ %w_49, %73 ], [ 0, %.preheader590.preheader ]
  %exitcond270 = icmp eq i4 %w48, -8
  %empty_400 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_49 = add i4 %w48, 1
  br i1 %exitcond270, label %.preheader591.loopexit, label %73

; <label>:73                                      ; preds = %.preheader590
  %tmp_269_cast1 = zext i4 %w_49 to i14
  %tmp_269_cast = zext i4 %w_49 to i15
  %tmp_905 = add i15 %tmp_902, %tmp_269_cast
  %tmp_1192_cast = zext i15 %tmp_905 to i64
  %downsampleunit1_outp = getelementptr [9600 x float]* @downsampleunit1_outp, i64 0, i64 %tmp_1192_cast
  %tmp_906 = add i14 %tmp_904, %tmp_269_cast1
  %tmp_1193_cast = zext i14 %tmp_906 to i64
  %buffer0_1_48_8x8_p_a = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1193_cast
  %downsampleunit1_outp_1 = load float* %downsampleunit1_outp, align 4
  store float %downsampleunit1_outp_1, float* %buffer0_1_48_8x8_p_a, align 4
  br label %.preheader590

.preheader589.loopexit:                           ; preds = %.preheader588
  br label %.preheader589

.preheader589:                                    ; preds = %.preheader589.preheader, %.preheader589.loopexit
  %co66 = phi i5 [ %co_67, %.preheader589.loopexit ], [ 0, %.preheader589.preheader ]
  %co66_cast = zext i5 %co66 to i10
  %exitcond269 = icmp eq i5 %co66, -8
  %empty_401 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_67 = add i5 %co66, 1
  br i1 %exitcond269, label %.preheader586.preheader, label %.preheader588.preheader

.preheader586.preheader:                          ; preds = %.preheader589
  br label %.preheader586

.preheader588.preheader:                          ; preds = %.preheader589
  %tmp_223 = trunc i5 %co66 to i1
  %p_shl28 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_223, i5 0)
  %p_shl28_cast = zext i6 %p_shl28 to i7
  %p_shl29 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_223, i3 0)
  %p_shl29_cast = zext i4 %p_shl29 to i7
  %tmp_264 = sub i7 %p_shl28_cast, %p_shl29_cast
  %p_lshr_f3_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co66, i32 1, i32 4)
  %tmp_362_cast = zext i4 %p_lshr_f3_cast to i7
  br label %.preheader588

.preheader588.loopexit:                           ; preds = %.preheader587
  br label %.preheader588

.preheader588:                                    ; preds = %.preheader588.loopexit, %.preheader588.preheader
  %ci32 = phi i5 [ 0, %.preheader588.preheader ], [ %ci_33, %.preheader588.loopexit ]
  %ci32_cast = zext i5 %ci32 to i7
  %exitcond268 = icmp eq i5 %ci32, -8
  %empty_402 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_33 = add i5 %ci32, 1
  br i1 %exitcond268, label %.preheader589.loopexit, label %.preheader587.preheader

.preheader587.preheader:                          ; preds = %.preheader588
  %tmp_266_cast = zext i5 %ci32 to i17
  %tmp_267 = add i7 %tmp_264, %ci32_cast
  %tmp_268_cast = sext i7 %tmp_267 to i13
  br label %.preheader587

.preheader587:                                    ; preds = %74, %.preheader587.preheader
  %i46 = phi i3 [ %i_47, %74 ], [ 0, %.preheader587.preheader ]
  %exitcond267 = icmp eq i3 %i46, -4
  %empty_403 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_47 = add i3 %i46, 1
  br i1 %exitcond267, label %.preheader588.loopexit, label %74

; <label>:74                                      ; preds = %.preheader587
  %tmp_248 = trunc i3 %i46 to i2
  %p_shl36 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_248, i5 0)
  %p_shl36_cast = zext i7 %p_shl36 to i8
  %p_shl37 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_248, i3 0)
  %p_shl37_cast = zext i5 %p_shl37 to i8
  %tmp_275 = sub i8 %p_shl36_cast, %p_shl37_cast
  %tmp_382_cast = sext i8 %tmp_275 to i10
  %tmp11 = add i10 504, %tmp_382_cast
  %tmp_276 = add i10 %tmp11, %co66_cast
  %tmp_907 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_276, i5 0)
  %p_shl397_cast = zext i15 %tmp_907 to i16
  %tmp_908 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_276, i3 0)
  %p_shl398_cast = zext i13 %tmp_908 to i16
  %tmp_909 = sub i16 %p_shl397_cast, %p_shl398_cast
  %tmp_1200_cast = sext i16 %tmp_909 to i17
  %tmp_910 = add i17 %tmp_266_cast, %tmp_1200_cast
  %tmp_1201_cast = sext i17 %tmp_910 to i64
  %shuffle_conv_1x1_add_12 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1201_cast
  %shuffle_conv_1x1_loa_12 = load float* %shuffle_conv_1x1_add_12, align 4
  %p_shl38 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_248, i4 0)
  %p_shl38_cast = zext i6 %p_shl38 to i7
  %p_shl39 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_248, i2 0)
  %p_shl39_cast = zext i4 %p_shl39 to i7
  %tmp_277 = sub i7 %p_shl38_cast, %p_shl39_cast
  %tmp_278 = add i7 %tmp_277, %tmp_362_cast
  %tmp_911 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_278, i6 0)
  %tmp_912 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_278, i4 0)
  %p_shl396_cast = sext i11 %tmp_912 to i13
  %tmp_913 = sub i13 %tmp_911, %p_shl396_cast
  %tmp_914 = add i13 %tmp_268_cast, %tmp_913
  %tmp_1209_cast = sext i13 %tmp_914 to i64
  %weights_48_48_1x1_ad_3 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1209_cast
  store float %shuffle_conv_1x1_loa_12, float* %weights_48_48_1x1_ad_3, align 4
  br label %.preheader587

.preheader586.loopexit:                           ; preds = %.preheader585
  br label %.preheader586

.preheader586:                                    ; preds = %.preheader586.preheader, %.preheader586.loopexit
  %i44 = phi i5 [ %i_45, %.preheader586.loopexit ], [ 0, %.preheader586.preheader ]
  %i45_cast = zext i5 %i44 to i7
  %i45_cast1 = zext i5 %i44 to i10
  %exitcond266 = icmp eq i5 %i44, -8
  %empty_404 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_45 = add i5 %i44, 1
  br i1 %exitcond266, label %76, label %.preheader585.preheader

.preheader585.preheader:                          ; preds = %.preheader586
  br label %.preheader585

.preheader585:                                    ; preds = %.preheader585.preheader, %75
  %k6 = phi i2 [ %k_6, %75 ], [ 0, %.preheader585.preheader ]
  %exitcond265 = icmp eq i2 %k6, -2
  %empty_405 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_6 = add i2 %k6, 1
  br i1 %exitcond265, label %.preheader586.loopexit, label %75

; <label>:75                                      ; preds = %.preheader585
  %tmp_246 = trunc i2 %k6 to i1
  %p_shl34 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_246, i5 0)
  %p_shl34_cast = zext i6 %p_shl34 to i7
  %p_shl35 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_246, i3 0)
  %p_shl35_cast = zext i4 %p_shl35 to i7
  %tmp_270 = sub i7 %p_shl34_cast, %p_shl35_cast
  %tmp_371_cast = sext i7 %tmp_270 to i10
  %tmp12 = add i10 -424, %tmp_371_cast
  %tmp_271 = add i10 %i45_cast1, %tmp12
  %tmp_272 = zext i10 %tmp_271 to i64
  %bias_addr_22 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_272
  %bias_load_22 = load float* %bias_addr_22, align 4
  %tmp_273 = add i7 %tmp_270, %i45_cast
  %tmp_375_cast = sext i7 %tmp_273 to i32
  %tmp_274 = zext i32 %tmp_375_cast to i64
  %bias_48_addr_5 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_274
  store float %bias_load_22, float* %bias_48_addr_5, align 4
  br label %.preheader585

; <label>:76                                      ; preds = %.preheader586
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit884

.loopexit884.loopexit:                            ; preds = %.preheader584
  br label %.loopexit884

.loopexit884:                                     ; preds = %.loopexit884.loopexit, %76
  %co68 = phi i5 [ 0, %76 ], [ %co_69, %.loopexit884.loopexit ]
  %co69_cast = zext i5 %co68 to i7
  %co69_cast1 = zext i5 %co68 to i9
  %exitcond264 = icmp eq i5 %co68, -8
  %empty_406 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_69 = add i5 %co68, 1
  br i1 %exitcond264, label %.preheader581.preheader, label %.preheader584.preheader

.preheader584.preheader:                          ; preds = %.loopexit884
  br label %.preheader584

.preheader581.preheader:                          ; preds = %.loopexit884
  br label %.preheader581

.preheader584.loopexit:                           ; preds = %.preheader583
  br label %.preheader584

.preheader584:                                    ; preds = %.preheader584.preheader, %.preheader584.loopexit
  %w49 = phi i2 [ %w_50, %.preheader584.loopexit ], [ 0, %.preheader584.preheader ]
  %exitcond263 = icmp eq i2 %w49, -1
  %empty_407 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_50 = add i2 %w49, 1
  br i1 %exitcond263, label %.loopexit884.loopexit, label %.preheader583.preheader

.preheader583.preheader:                          ; preds = %.preheader584
  %tmp_279_cast1 = zext i2 %w49 to i36
  %tmp_279_cast = zext i2 %w49 to i13
  br label %.preheader583

.preheader583.loopexit:                           ; preds = %.preheader582
  br label %.preheader583

.preheader583:                                    ; preds = %.preheader583.loopexit, %.preheader583.preheader
  %h50 = phi i2 [ 0, %.preheader583.preheader ], [ %h_51, %.preheader583.loopexit ]
  %exitcond262 = icmp eq i2 %h50, -1
  %empty_408 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_51 = add i2 %h50, 1
  br i1 %exitcond262, label %.preheader584.loopexit, label %.preheader582.preheader

.preheader582.preheader:                          ; preds = %.preheader583
  %tmp_286_cast1 = zext i2 %h50 to i10
  %tmp_286_cast = zext i2 %h50 to i15
  br label %.preheader582

.preheader582:                                    ; preds = %77, %.preheader582.preheader
  %i52 = phi i2 [ %i_53, %77 ], [ 0, %.preheader582.preheader ]
  %exitcond261 = icmp eq i2 %i52, -2
  %empty_409 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_53 = add i2 %i52, 1
  br i1 %exitcond261, label %.preheader583.loopexit, label %77

; <label>:77                                      ; preds = %.preheader582
  %tmp_265 = trunc i2 %i52 to i1
  %p_shl46 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_265, i5 0)
  %p_shl46_cast = zext i6 %p_shl46 to i7
  %p_shl47 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_265, i3 0)
  %p_shl47_cast = zext i4 %p_shl47 to i7
  %tmp_290 = sub i7 %p_shl46_cast, %p_shl47_cast
  %tmp13 = add i7 -40, %tmp_290
  %tmp13_cast1 = sext i7 %tmp13 to i8
  %tmp13_cast = zext i8 %tmp13_cast1 to i9
  %tmp_291 = add i9 %co69_cast1, %tmp13_cast
  %tmp_292_cast1 = zext i9 %tmp_291 to i12
  %tmp_915 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_291, i2 0)
  %p_shl402_cast = zext i11 %tmp_915 to i12
  %tmp_916 = sub i12 %p_shl402_cast, %tmp_292_cast1
  %tmp_1217_cast = sext i12 %tmp_916 to i13
  %tmp_917 = add i13 %tmp_1217_cast, %tmp_279_cast
  %tmp_1218_cast = sext i13 %tmp_917 to i15
  %p_shl401_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_917, i2 0)
  %tmp_918 = sub i15 %p_shl401_cast, %tmp_1218_cast
  %tmp_919 = add i15 %tmp_918, %tmp_286_cast
  %tmp_1221_cast = zext i15 %tmp_919 to i64
  %shuffle_conv_3x3_add_7 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1221_cast
  %shuffle_conv_3x3_loa_7 = load float* %shuffle_conv_3x3_add_7, align 4
  %tmp_293 = add i7 %tmp_290, %co69_cast
  %tmp_412_cast = sext i7 %tmp_293 to i32
  %tmp_294_cast = zext i32 %tmp_412_cast to i35
  %tmp_920 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_293, i2 0)
  %tmp_921 = sext i9 %tmp_920 to i34
  %p_shl400_cast = zext i34 %tmp_921 to i35
  %tmp_922 = sub i35 %p_shl400_cast, %tmp_294_cast
  %tmp_1224_cast = sext i35 %tmp_922 to i36
  %tmp_923 = add i36 %tmp_1224_cast, %tmp_279_cast1
  %tmp_266 = trunc i36 %tmp_923 to i10
  %tmp_268 = trunc i36 %tmp_923 to i8
  %p_shl399_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_268, i2 0)
  %tmp_924 = sub i10 %p_shl399_cast, %tmp_266
  %tmp_925 = add i10 %tmp_924, %tmp_286_cast1
  %tmp_1228_cast = zext i10 %tmp_925 to i64
  %weights_48_1_3x3_add_2 = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1228_cast
  store float %shuffle_conv_3x3_loa_7, float* %weights_48_1_3x3_add_2, align 4
  br label %.preheader582

.preheader581.loopexit:                           ; preds = %.preheader580
  br label %.preheader581

.preheader581:                                    ; preds = %.preheader581.preheader, %.preheader581.loopexit
  %i48 = phi i5 [ %i_49, %.preheader581.loopexit ], [ 0, %.preheader581.preheader ]
  %i49_cast = zext i5 %i48 to i7
  %i49_cast1 = zext i5 %i48 to i10
  %exitcond260 = icmp eq i5 %i48, -8
  %empty_410 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_49 = add i5 %i48, 1
  br i1 %exitcond260, label %79, label %.preheader580.preheader

.preheader580.preheader:                          ; preds = %.preheader581
  br label %.preheader580

.preheader580:                                    ; preds = %.preheader580.preheader, %78
  %k7 = phi i2 [ %k_7, %78 ], [ 0, %.preheader580.preheader ]
  %exitcond259 = icmp eq i2 %k7, -2
  %empty_411 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_7 = add i2 %k7, 1
  br i1 %exitcond259, label %.preheader581.loopexit, label %78

; <label>:78                                      ; preds = %.preheader580
  %tmp_253 = trunc i2 %k7 to i1
  %p_shl40 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_253, i5 0)
  %p_shl40_cast = zext i6 %p_shl40 to i7
  %p_shl41 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_253, i3 0)
  %p_shl41_cast = zext i4 %p_shl41 to i7
  %tmp_281 = sub i7 %p_shl40_cast, %p_shl41_cast
  %tmp_389_cast = sext i7 %tmp_281 to i10
  %tmp14 = add i10 -376, %tmp_389_cast
  %tmp_282 = add i10 %i49_cast1, %tmp14
  %tmp_283 = zext i10 %tmp_282 to i64
  %bias_addr_23 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_283
  %bias_load_23 = load float* %bias_addr_23, align 4
  %tmp_284 = add i7 %tmp_281, %i49_cast
  %tmp_393_cast = sext i7 %tmp_284 to i32
  %tmp_285 = zext i32 %tmp_393_cast to i64
  %bias_48_addr_6 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_285
  store float %bias_load_23, float* %bias_48_addr_6, align 4
  br label %.preheader580

; <label>:79                                      ; preds = %.preheader581
  call fastcc void @subconv_3x3_8_no_rel([4800 x float]* @buffer1_1_48_8x8_p, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [4800 x float]* @buffer0_1_48_8x8_p) nounwind
  br label %.loopexit883

.loopexit883.loopexit:                            ; preds = %.preheader579
  br label %.loopexit883

.loopexit883:                                     ; preds = %.loopexit883.loopexit, %79
  %co70 = phi i5 [ 0, %79 ], [ %co_71, %.loopexit883.loopexit ]
  %co71_cast = zext i5 %co70 to i10
  %exitcond258 = icmp eq i5 %co70, -8
  %empty_412 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_71 = add i5 %co70, 1
  br i1 %exitcond258, label %.preheader577.preheader, label %.preheader579.preheader

.preheader577.preheader:                          ; preds = %.loopexit883
  br label %.preheader577

.preheader579.preheader:                          ; preds = %.loopexit883
  %tmp_251 = trunc i5 %co70 to i1
  %p_shl42 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_251, i5 0)
  %p_shl42_cast = zext i6 %p_shl42 to i7
  %p_shl43 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_251, i3 0)
  %p_shl43_cast = zext i4 %p_shl43 to i7
  %tmp_280 = sub i7 %p_shl42_cast, %p_shl43_cast
  %p_lshr_f4_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co70, i32 1, i32 4)
  %tmp_397_cast = zext i4 %p_lshr_f4_cast to i7
  br label %.preheader579

.preheader579.loopexit:                           ; preds = %.preheader578
  br label %.preheader579

.preheader579:                                    ; preds = %.preheader579.loopexit, %.preheader579.preheader
  %ci34 = phi i5 [ 0, %.preheader579.preheader ], [ %ci_35, %.preheader579.loopexit ]
  %ci34_cast = zext i5 %ci34 to i7
  %exitcond257 = icmp eq i5 %ci34, -8
  %empty_413 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_35 = add i5 %ci34, 1
  br i1 %exitcond257, label %.loopexit883.loopexit, label %.preheader578.preheader

.preheader578.preheader:                          ; preds = %.preheader579
  %tmp_287_cast = zext i5 %ci34 to i17
  %tmp_288 = add i7 %tmp_280, %ci34_cast
  %tmp_289_cast = sext i7 %tmp_288 to i13
  br label %.preheader578

.preheader578:                                    ; preds = %80, %.preheader578.preheader
  %i54 = phi i3 [ %i_55, %80 ], [ 0, %.preheader578.preheader ]
  %exitcond256 = icmp eq i3 %i54, -4
  %empty_414 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_55 = add i3 %i54, 1
  br i1 %exitcond256, label %.preheader579.loopexit, label %80

; <label>:80                                      ; preds = %.preheader578
  %tmp_279 = trunc i3 %i54 to i2
  %p_shl48 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_279, i5 0)
  %p_shl48_cast = zext i7 %p_shl48 to i8
  %p_shl49 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_279, i3 0)
  %p_shl49_cast = zext i5 %p_shl49 to i8
  %tmp_300 = sub i8 %p_shl48_cast, %p_shl49_cast
  %tmp_415_cast = sext i8 %tmp_300 to i10
  %tmp15 = add i10 -424, %tmp_415_cast
  %tmp_301 = add i10 %tmp15, %co71_cast
  %tmp_929 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_301, i5 0)
  %p_shl405_cast = zext i15 %tmp_929 to i16
  %tmp_930 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_301, i3 0)
  %p_shl406_cast = zext i13 %tmp_930 to i16
  %tmp_931 = sub i16 %p_shl405_cast, %p_shl406_cast
  %tmp_1238_cast = sext i16 %tmp_931 to i17
  %tmp_932 = add i17 %tmp_287_cast, %tmp_1238_cast
  %tmp_1239_cast = sext i17 %tmp_932 to i64
  %shuffle_conv_1x1_add_13 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1239_cast
  %shuffle_conv_1x1_loa_13 = load float* %shuffle_conv_1x1_add_13, align 4
  %p_shl50 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_279, i4 0)
  %p_shl50_cast = zext i6 %p_shl50 to i7
  %p_shl51 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_279, i2 0)
  %p_shl51_cast = zext i4 %p_shl51 to i7
  %tmp_302 = sub i7 %p_shl50_cast, %p_shl51_cast
  %tmp_303 = add i7 %tmp_302, %tmp_397_cast
  %tmp_933 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_303, i6 0)
  %tmp_934 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_303, i4 0)
  %p_shl404_cast = sext i11 %tmp_934 to i13
  %tmp_935 = sub i13 %tmp_933, %p_shl404_cast
  %tmp_936 = add i13 %tmp_289_cast, %tmp_935
  %tmp_1247_cast = sext i13 %tmp_936 to i64
  %weights_48_48_1x1_ad_4 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1247_cast
  store float %shuffle_conv_1x1_loa_13, float* %weights_48_48_1x1_ad_4, align 4
  br label %.preheader578

.preheader577.loopexit:                           ; preds = %.preheader576
  br label %.preheader577

.preheader577:                                    ; preds = %.preheader577.preheader, %.preheader577.loopexit
  %i50 = phi i5 [ %i_51, %.preheader577.loopexit ], [ 0, %.preheader577.preheader ]
  %i51_cast = zext i5 %i50 to i7
  %i51_cast1 = zext i5 %i50 to i10
  %exitcond255 = icmp eq i5 %i50, -8
  %empty_415 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_51 = add i5 %i50, 1
  br i1 %exitcond255, label %82, label %.preheader576.preheader

.preheader576.preheader:                          ; preds = %.preheader577
  br label %.preheader576

.preheader576:                                    ; preds = %.preheader576.preheader, %81
  %k8 = phi i2 [ %k_8, %81 ], [ 0, %.preheader576.preheader ]
  %exitcond254 = icmp eq i2 %k8, -2
  %empty_416 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_8 = add i2 %k8, 1
  br i1 %exitcond254, label %.preheader577.loopexit, label %81

; <label>:81                                      ; preds = %.preheader576
  %tmp_269 = trunc i2 %k8 to i1
  %p_shl44 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_269, i5 0)
  %p_shl44_cast = zext i6 %p_shl44 to i7
  %p_shl45 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_269, i3 0)
  %p_shl45_cast = zext i4 %p_shl45 to i7
  %tmp_295 = sub i7 %p_shl44_cast, %p_shl45_cast
  %tmp_399_cast = sext i7 %tmp_295 to i10
  %tmp16 = add i10 -328, %tmp_399_cast
  %tmp_296 = add i10 %i51_cast1, %tmp16
  %tmp_297 = zext i10 %tmp_296 to i64
  %bias_addr_24 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_297
  %bias_load_24 = load float* %bias_addr_24, align 4
  %tmp_298 = add i7 %tmp_295, %i51_cast
  %tmp_403_cast = sext i7 %tmp_298 to i32
  %tmp_299 = zext i32 %tmp_403_cast to i64
  %bias_48_addr_7 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_299
  store float %bias_load_24, float* %bias_48_addr_7, align 4
  br label %.preheader576

; <label>:82                                      ; preds = %.preheader577
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit882

.loopexit882.loopexit:                            ; preds = %.preheader575
  br label %.loopexit882

.loopexit882:                                     ; preds = %.loopexit882.loopexit, %82
  %co72 = phi i6 [ 0, %82 ], [ %co_73, %.loopexit882.loopexit ]
  %exitcond253 = icmp eq i6 %co72, -16
  %empty_417 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_73 = add i6 %co72, 1
  br i1 %exitcond253, label %84, label %.preheader575.preheader

.preheader575.preheader:                          ; preds = %.loopexit882
  %tmp_926 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co72, i3 0)
  %p_shl407_cast = zext i9 %tmp_926 to i10
  %tmp_927 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co72, i1 false)
  %p_shl408_cast = zext i7 %tmp_927 to i10
  %tmp_928 = add i10 %p_shl408_cast, %p_shl407_cast
  br label %.preheader575

.preheader575.loopexit:                           ; preds = %.preheader574
  br label %.preheader575

.preheader575:                                    ; preds = %.preheader575.loopexit, %.preheader575.preheader
  %h52 = phi i4 [ 0, %.preheader575.preheader ], [ %h_53, %.preheader575.loopexit ]
  %exitcond252 = icmp eq i4 %h52, -8
  %empty_418 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_53 = add i4 %h52, 1
  br i1 %exitcond252, label %.loopexit882.loopexit, label %.preheader574.preheader

.preheader574.preheader:                          ; preds = %.preheader575
  %tmp_305_cast = zext i4 %h_53 to i10
  %tmp_943 = add i10 %tmp_305_cast, %tmp_928
  %tmp_286 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_943, i3 0)
  %p_shl409_cast = zext i13 %tmp_286 to i15
  %tmp_287 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_943, i1 false)
  %p_shl410_cast = zext i11 %tmp_287 to i15
  %tmp_944 = add i15 %p_shl409_cast, %p_shl410_cast
  br label %.preheader574

.preheader574:                                    ; preds = %83, %.preheader574.preheader
  %w51 = phi i4 [ %w_52, %83 ], [ 0, %.preheader574.preheader ]
  %exitcond251 = icmp eq i4 %w51, -8
  %empty_419 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_52 = add i4 %w51, 1
  br i1 %exitcond251, label %.preheader575.loopexit, label %83

; <label>:83                                      ; preds = %.preheader574
  %tmp_308_cast = zext i4 %w_52 to i15
  %tmp_949 = add i15 %tmp_944, %tmp_308_cast
  %tmp_1268_cast = zext i15 %tmp_949 to i64
  %downsampleunit1_outp_2 = getelementptr [9600 x float]* @downsampleunit1_outp, i64 0, i64 %tmp_1268_cast
  %buffer0_1_48_8x8_p_a_1 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1268_cast
  %downsampleunit1_outp_3 = load float* %downsampleunit1_outp_2, align 4
  store float %downsampleunit1_outp_3, float* %buffer0_1_48_8x8_p_a_1, align 4
  br label %.preheader574

; <label>:84                                      ; preds = %.loopexit882
  call fastcc void @shuffle_48_p([4800 x float]* @buffer0_1_48_8x8_p, [9600 x float]* @shuffleunit1_0_outpu) nounwind
  br label %.loopexit881

.loopexit881.loopexit:                            ; preds = %.preheader573
  br label %.loopexit881

.loopexit881:                                     ; preds = %.loopexit881.loopexit, %84
  %co74 = phi i6 [ 0, %84 ], [ %co_75, %.loopexit881.loopexit ]
  %co74_cast = zext i6 %co74 to i7
  %exitcond250 = icmp eq i6 %co74, -16
  %empty_420 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_75 = add i6 %co74, 1
  br i1 %exitcond250, label %.preheader571.preheader, label %.preheader573.preheader

.preheader571.preheader:                          ; preds = %.loopexit881
  br label %.preheader571

.preheader573.preheader:                          ; preds = %.loopexit881
  %tmp_304 = add i7 %co74_cast, 48
  %tmp_937 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_304, i3 0)
  %p_shl413_cast = zext i10 %tmp_937 to i11
  %tmp_938 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp_304, i1 false)
  %p_shl414_cast = zext i8 %tmp_938 to i11
  %tmp_939 = add i11 %p_shl414_cast, %p_shl413_cast
  %tmp_940 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co74, i3 0)
  %p_shl411_cast = zext i9 %tmp_940 to i10
  %tmp_941 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co74, i1 false)
  %p_shl412_cast = zext i7 %tmp_941 to i10
  %tmp_942 = add i10 %p_shl412_cast, %p_shl411_cast
  br label %.preheader573

.preheader573.loopexit:                           ; preds = %.preheader572
  br label %.preheader573

.preheader573:                                    ; preds = %.preheader573.loopexit, %.preheader573.preheader
  %h54 = phi i4 [ 0, %.preheader573.preheader ], [ %h_55, %.preheader573.loopexit ]
  %exitcond249 = icmp eq i4 %h54, -8
  %empty_421 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_55 = add i4 %h54, 1
  br i1 %exitcond249, label %.loopexit881.loopexit, label %.preheader572.preheader

.preheader572.preheader:                          ; preds = %.preheader573
  %tmp_307_cast1 = zext i4 %h_55 to i11
  %tmp_307_cast2 = zext i4 %h_55 to i10
  %tmp_945 = add i10 %tmp_307_cast2, %tmp_942
  %tmp_292 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_945, i3 0)
  %p_shl417_cast = zext i13 %tmp_292 to i14
  %tmp_294 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_945, i1 false)
  %p_shl418_cast = zext i11 %tmp_294 to i14
  %tmp_946 = add i14 %p_shl417_cast, %p_shl418_cast
  %tmp_947 = add i11 %tmp_307_cast1, %tmp_939
  %tmp_305 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_947, i3 0)
  %p_shl415_cast = zext i14 %tmp_305 to i15
  %tmp_307 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_947, i1 false)
  %p_shl416_cast = zext i12 %tmp_307 to i15
  %tmp_948 = add i15 %p_shl415_cast, %p_shl416_cast
  br label %.preheader572

.preheader572:                                    ; preds = %85, %.preheader572.preheader
  %w53 = phi i4 [ %w_54, %85 ], [ 0, %.preheader572.preheader ]
  %exitcond248 = icmp eq i4 %w53, -8
  %empty_422 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_54 = add i4 %w53, 1
  br i1 %exitcond248, label %.preheader573.loopexit, label %85

; <label>:85                                      ; preds = %.preheader572
  %tmp_312_cast1 = zext i4 %w_54 to i15
  %tmp_312_cast = zext i4 %w_54 to i14
  %tmp_950 = add i14 %tmp_946, %tmp_312_cast
  %tmp_1269_cast = zext i14 %tmp_950 to i64
  %buffer0_1_48_8x8_p_a_2 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1269_cast
  %tmp_951 = add i15 %tmp_948, %tmp_312_cast1
  %tmp_1270_cast = zext i15 %tmp_951 to i64
  %shuffleunit1_0_outpu = getelementptr [9600 x float]* @shuffleunit1_0_outpu, i64 0, i64 %tmp_1270_cast
  %shuffleunit1_0_outpu_1 = load float* %shuffleunit1_0_outpu, align 4
  store float %shuffleunit1_0_outpu_1, float* %buffer0_1_48_8x8_p_a_2, align 4
  br label %.preheader572

.preheader571.loopexit:                           ; preds = %.preheader570
  br label %.preheader571

.preheader571:                                    ; preds = %.preheader571.preheader, %.preheader571.loopexit
  %co76 = phi i5 [ %co_77, %.preheader571.loopexit ], [ 0, %.preheader571.preheader ]
  %co76_cast = zext i5 %co76 to i10
  %exitcond247 = icmp eq i5 %co76, -8
  %empty_423 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_77 = add i5 %co76, 1
  br i1 %exitcond247, label %.preheader568.preheader, label %.preheader570.preheader

.preheader568.preheader:                          ; preds = %.preheader571
  br label %.preheader568

.preheader570.preheader:                          ; preds = %.preheader571
  %tmp_289 = trunc i5 %co76 to i1
  %p_shl52 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_289, i5 0)
  %p_shl52_cast = zext i6 %p_shl52 to i7
  %p_shl53 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_289, i3 0)
  %p_shl53_cast = zext i4 %p_shl53 to i7
  %tmp_306 = sub i7 %p_shl52_cast, %p_shl53_cast
  %p_lshr_f5_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co76, i32 1, i32 4)
  %tmp_427_cast = zext i4 %p_lshr_f5_cast to i7
  br label %.preheader570

.preheader570.loopexit:                           ; preds = %.preheader569
  br label %.preheader570

.preheader570:                                    ; preds = %.preheader570.loopexit, %.preheader570.preheader
  %ci36 = phi i5 [ 0, %.preheader570.preheader ], [ %ci_37, %.preheader570.loopexit ]
  %ci36_cast = zext i5 %ci36 to i7
  %exitcond246 = icmp eq i5 %ci36, -8
  %empty_424 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_37 = add i5 %ci36, 1
  br i1 %exitcond246, label %.preheader571.loopexit, label %.preheader569.preheader

.preheader569.preheader:                          ; preds = %.preheader570
  %tmp_309_cast = zext i5 %ci36 to i17
  %tmp_310 = add i7 %tmp_306, %ci36_cast
  %tmp_311_cast1 = sext i7 %tmp_310 to i13
  br label %.preheader569

.preheader569:                                    ; preds = %86, %.preheader569.preheader
  %i58 = phi i3 [ %i_59, %86 ], [ 0, %.preheader569.preheader ]
  %exitcond245 = icmp eq i3 %i58, -4
  %empty_425 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_59 = add i3 %i58, 1
  br i1 %exitcond245, label %.preheader570.loopexit, label %86

; <label>:86                                      ; preds = %.preheader569
  %tmp_309 = trunc i3 %i58 to i2
  %p_shl56 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_309, i5 0)
  %p_shl56_cast = zext i7 %p_shl56 to i8
  %p_shl57 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_309, i3 0)
  %p_shl57_cast = zext i5 %p_shl57 to i8
  %tmp_318 = sub i8 %p_shl56_cast, %p_shl57_cast
  %tmp_442_cast = sext i8 %tmp_318 to i10
  %tmp17 = add i10 -328, %tmp_442_cast
  %tmp_319 = add i10 %tmp17, %co76_cast
  %tmp_952 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_319, i5 0)
  %p_shl421_cast = zext i15 %tmp_952 to i16
  %tmp_953 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_319, i3 0)
  %p_shl422_cast = zext i13 %tmp_953 to i16
  %tmp_954 = sub i16 %p_shl421_cast, %p_shl422_cast
  %tmp_1277_cast = sext i16 %tmp_954 to i17
  %tmp_955 = add i17 %tmp_309_cast, %tmp_1277_cast
  %tmp_1278_cast = sext i17 %tmp_955 to i64
  %shuffle_conv_1x1_add_14 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1278_cast
  %shuffle_conv_1x1_loa_14 = load float* %shuffle_conv_1x1_add_14, align 4
  %p_shl58 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_309, i4 0)
  %p_shl58_cast = zext i6 %p_shl58 to i7
  %p_shl59 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_309, i2 0)
  %p_shl59_cast = zext i4 %p_shl59 to i7
  %tmp_320 = sub i7 %p_shl58_cast, %p_shl59_cast
  %tmp_321 = add i7 %tmp_320, %tmp_427_cast
  %tmp_956 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_321, i6 0)
  %tmp_957 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_321, i4 0)
  %p_shl420_cast = sext i11 %tmp_957 to i13
  %tmp_958 = sub i13 %tmp_956, %p_shl420_cast
  %tmp_959 = add i13 %tmp_311_cast1, %tmp_958
  %tmp_1286_cast = sext i13 %tmp_959 to i64
  %weights_48_48_1x1_ad_5 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1286_cast
  store float %shuffle_conv_1x1_loa_14, float* %weights_48_48_1x1_ad_5, align 4
  br label %.preheader569

.preheader568.loopexit:                           ; preds = %.preheader567
  br label %.preheader568

.preheader568:                                    ; preds = %.preheader568.preheader, %.preheader568.loopexit
  %i56 = phi i5 [ %i_57, %.preheader568.loopexit ], [ 0, %.preheader568.preheader ]
  %i57_cast = zext i5 %i56 to i7
  %i57_cast1 = zext i5 %i56 to i10
  %exitcond244 = icmp eq i5 %i56, -8
  %empty_426 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_57 = add i5 %i56, 1
  br i1 %exitcond244, label %88, label %.preheader567.preheader

.preheader567.preheader:                          ; preds = %.preheader568
  br label %.preheader567

.preheader567:                                    ; preds = %.preheader567.preheader, %87
  %k9 = phi i2 [ %k_9, %87 ], [ 0, %.preheader567.preheader ]
  %exitcond243 = icmp eq i2 %k9, -2
  %empty_427 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_9 = add i2 %k9, 1
  br i1 %exitcond243, label %.preheader568.loopexit, label %87

; <label>:87                                      ; preds = %.preheader567
  %tmp_308 = trunc i2 %k9 to i1
  %p_shl54 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_308, i5 0)
  %p_shl54_cast = zext i6 %p_shl54 to i7
  %p_shl55 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_308, i3 0)
  %p_shl55_cast = zext i4 %p_shl55 to i7
  %tmp_313 = sub i7 %p_shl54_cast, %p_shl55_cast
  %tmp_431_cast = sext i7 %tmp_313 to i10
  %tmp18 = add i10 -280, %tmp_431_cast
  %tmp_314 = add i10 %i57_cast1, %tmp18
  %tmp_315 = zext i10 %tmp_314 to i64
  %bias_addr_25 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_315
  %bias_load_25 = load float* %bias_addr_25, align 4
  %tmp_316 = add i7 %tmp_313, %i57_cast
  %tmp_435_cast = sext i7 %tmp_316 to i32
  %tmp_317 = zext i32 %tmp_435_cast to i64
  %bias_48_addr_8 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_317
  store float %bias_load_25, float* %bias_48_addr_8, align 4
  br label %.preheader567

; <label>:88                                      ; preds = %.preheader568
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit880

.loopexit880.loopexit:                            ; preds = %.preheader566
  br label %.loopexit880

.loopexit880:                                     ; preds = %.loopexit880.loopexit, %88
  %co78 = phi i5 [ 0, %88 ], [ %co_79, %.loopexit880.loopexit ]
  %co79_cast = zext i5 %co78 to i7
  %co79_cast1 = zext i5 %co78 to i9
  %exitcond242 = icmp eq i5 %co78, -8
  %empty_428 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_79 = add i5 %co78, 1
  br i1 %exitcond242, label %.preheader563.preheader, label %.preheader566.preheader

.preheader566.preheader:                          ; preds = %.loopexit880
  br label %.preheader566

.preheader563.preheader:                          ; preds = %.loopexit880
  br label %.preheader563

.preheader566.loopexit:                           ; preds = %.preheader565
  br label %.preheader566

.preheader566:                                    ; preds = %.preheader566.preheader, %.preheader566.loopexit
  %w55 = phi i2 [ %w_56, %.preheader566.loopexit ], [ 0, %.preheader566.preheader ]
  %exitcond241 = icmp eq i2 %w55, -1
  %empty_429 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_56 = add i2 %w55, 1
  br i1 %exitcond241, label %.loopexit880.loopexit, label %.preheader565.preheader

.preheader565.preheader:                          ; preds = %.preheader566
  %tmp_322_cast1 = zext i2 %w55 to i36
  %tmp_322_cast2 = zext i2 %w55 to i13
  br label %.preheader565

.preheader565.loopexit:                           ; preds = %.preheader564
  br label %.preheader565

.preheader565:                                    ; preds = %.preheader565.loopexit, %.preheader565.preheader
  %h56 = phi i2 [ 0, %.preheader565.preheader ], [ %h_57, %.preheader565.loopexit ]
  %exitcond240 = icmp eq i2 %h56, -1
  %empty_430 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_57 = add i2 %h56, 1
  br i1 %exitcond240, label %.preheader566.loopexit, label %.preheader564.preheader

.preheader564.preheader:                          ; preds = %.preheader565
  %tmp_329_cast1 = zext i2 %h56 to i10
  %tmp_329_cast = zext i2 %h56 to i15
  br label %.preheader564

.preheader564:                                    ; preds = %89, %.preheader564.preheader
  %i64 = phi i2 [ %i_65, %89 ], [ 0, %.preheader564.preheader ]
  %exitcond239 = icmp eq i2 %i64, -2
  %empty_431 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_65 = add i2 %i64, 1
  br i1 %exitcond239, label %.preheader565.loopexit, label %89

; <label>:89                                      ; preds = %.preheader564
  %tmp_960 = trunc i2 %i64 to i1
  %p_shl66 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_960, i5 0)
  %p_shl66_cast = zext i6 %p_shl66 to i7
  %p_shl67 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_960, i3 0)
  %p_shl67_cast = zext i4 %p_shl67 to i7
  %tmp_333 = sub i7 %p_shl66_cast, %p_shl67_cast
  %tmp_468_cast = sext i7 %tmp_333 to i9
  %tmp19 = add i9 -248, %tmp_468_cast
  %tmp_334 = add i9 %co79_cast1, %tmp19
  %tmp_335_cast = zext i9 %tmp_334 to i12
  %tmp_961 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_334, i2 0)
  %p_shl426_cast = zext i11 %tmp_961 to i12
  %tmp_962 = sub i12 %p_shl426_cast, %tmp_335_cast
  %tmp_1294_cast = sext i12 %tmp_962 to i13
  %tmp_963 = add i13 %tmp_1294_cast, %tmp_322_cast2
  %tmp_1295_cast = sext i13 %tmp_963 to i15
  %p_shl425_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_963, i2 0)
  %tmp_964 = sub i15 %p_shl425_cast, %tmp_1295_cast
  %tmp_965 = add i15 %tmp_964, %tmp_329_cast
  %tmp_1298_cast = zext i15 %tmp_965 to i64
  %shuffle_conv_3x3_add_8 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1298_cast
  %shuffle_conv_3x3_loa_8 = load float* %shuffle_conv_3x3_add_8, align 4
  %tmp_336 = add i7 %tmp_333, %co79_cast
  %tmp_472_cast = sext i7 %tmp_336 to i32
  %tmp_337_cast = zext i32 %tmp_472_cast to i35
  %tmp_966 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_336, i2 0)
  %tmp_967 = sext i9 %tmp_966 to i34
  %p_shl424_cast = zext i34 %tmp_967 to i35
  %tmp_968 = sub i35 %p_shl424_cast, %tmp_337_cast
  %tmp_1301_cast = sext i35 %tmp_968 to i36
  %tmp_969 = add i36 %tmp_1301_cast, %tmp_322_cast1
  %tmp_970 = trunc i36 %tmp_969 to i10
  %tmp_971 = trunc i36 %tmp_969 to i8
  %p_shl423_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_971, i2 0)
  %tmp_972 = sub i10 %p_shl423_cast, %tmp_970
  %tmp_973 = add i10 %tmp_972, %tmp_329_cast1
  %tmp_1305_cast = zext i10 %tmp_973 to i64
  %weights_48_1_3x3_add_3 = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1305_cast
  store float %shuffle_conv_3x3_loa_8, float* %weights_48_1_3x3_add_3, align 4
  br label %.preheader564

.preheader563.loopexit:                           ; preds = %.preheader562
  br label %.preheader563

.preheader563:                                    ; preds = %.preheader563.preheader, %.preheader563.loopexit
  %i60 = phi i5 [ %i_61, %.preheader563.loopexit ], [ 0, %.preheader563.preheader ]
  %i61_cast = zext i5 %i60 to i7
  %i61_cast509_cast = zext i5 %i60 to i9
  %exitcond238 = icmp eq i5 %i60, -8
  %empty_432 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_61 = add i5 %i60, 1
  br i1 %exitcond238, label %91, label %.preheader562.preheader

.preheader562.preheader:                          ; preds = %.preheader563
  br label %.preheader562

.preheader562:                                    ; preds = %.preheader562.preheader, %90
  %k10 = phi i2 [ %k_11, %90 ], [ 0, %.preheader562.preheader ]
  %exitcond237 = icmp eq i2 %k10, -2
  %empty_433 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_11 = add i2 %k10, 1
  br i1 %exitcond237, label %.preheader563.loopexit, label %90

; <label>:90                                      ; preds = %.preheader562
  %tmp_312 = trunc i2 %k10 to i1
  %p_shl60 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_312, i5 0)
  %p_shl60_cast = zext i6 %p_shl60 to i7
  %p_shl61 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_312, i3 0)
  %p_shl61_cast = zext i4 %p_shl61 to i7
  %tmp_324 = sub i7 %p_shl60_cast, %p_shl61_cast
  %tmp_449_cast_cast = sext i7 %tmp_324 to i9
  %tmp20 = add i9 -232, %tmp_449_cast_cast
  %tmp_325 = add i9 %i61_cast509_cast, %tmp20
  %tmp_451_cast = sext i9 %tmp_325 to i10
  %tmp_326 = zext i10 %tmp_451_cast to i64
  %bias_addr_26 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_326
  %bias_load_26 = load float* %bias_addr_26, align 4
  %tmp_327 = add i7 %tmp_324, %i61_cast
  %tmp_453_cast = sext i7 %tmp_327 to i32
  %tmp_328 = zext i32 %tmp_453_cast to i64
  %bias_48_addr_9 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_328
  store float %bias_load_26, float* %bias_48_addr_9, align 4
  br label %.preheader562

; <label>:91                                      ; preds = %.preheader563
  call fastcc void @subconv_3x3_8_no_rel([4800 x float]* @buffer1_1_48_8x8_p, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [4800 x float]* @buffer0_1_48_8x8_p) nounwind
  br label %.loopexit879

.loopexit879.loopexit:                            ; preds = %.preheader561
  br label %.loopexit879

.loopexit879:                                     ; preds = %.loopexit879.loopexit, %91
  %co80 = phi i5 [ 0, %91 ], [ %co_81, %.loopexit879.loopexit ]
  %co81_cast = zext i5 %co80 to i10
  %exitcond236 = icmp eq i5 %co80, -8
  %empty_434 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_81 = add i5 %co80, 1
  br i1 %exitcond236, label %.preheader559.preheader, label %.preheader561.preheader

.preheader559.preheader:                          ; preds = %.loopexit879
  br label %.preheader559

.preheader561.preheader:                          ; preds = %.loopexit879
  %tmp_311 = trunc i5 %co80 to i1
  %p_shl62 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_311, i5 0)
  %p_shl62_cast = zext i6 %p_shl62 to i7
  %p_shl63 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_311, i3 0)
  %p_shl63_cast = zext i4 %p_shl63 to i7
  %tmp_323 = sub i7 %p_shl62_cast, %p_shl63_cast
  %p_lshr_f6_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co80, i32 1, i32 4)
  %tmp_457_cast = zext i4 %p_lshr_f6_cast to i7
  br label %.preheader561

.preheader561.loopexit:                           ; preds = %.preheader560
  br label %.preheader561

.preheader561:                                    ; preds = %.preheader561.loopexit, %.preheader561.preheader
  %ci38 = phi i5 [ 0, %.preheader561.preheader ], [ %ci_39, %.preheader561.loopexit ]
  %ci38_cast = zext i5 %ci38 to i7
  %exitcond235 = icmp eq i5 %ci38, -8
  %empty_435 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_39 = add i5 %ci38, 1
  br i1 %exitcond235, label %.loopexit879.loopexit, label %.preheader560.preheader

.preheader560.preheader:                          ; preds = %.preheader561
  %tmp_330_cast = zext i5 %ci38 to i17
  %tmp_331 = add i7 %tmp_323, %ci38_cast
  %tmp_332_cast1 = sext i7 %tmp_331 to i13
  br label %.preheader560

.preheader560:                                    ; preds = %92, %.preheader560.preheader
  %i66 = phi i3 [ %i_67, %92 ], [ 0, %.preheader560.preheader ]
  %exitcond234 = icmp eq i3 %i66, -4
  %empty_436 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_67 = add i3 %i66, 1
  br i1 %exitcond234, label %.preheader561.loopexit, label %92

; <label>:92                                      ; preds = %.preheader560
  %tmp_978 = trunc i3 %i66 to i2
  %p_shl68 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_978, i5 0)
  %p_shl68_cast = zext i7 %p_shl68 to i8
  %p_shl69 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_978, i3 0)
  %p_shl69_cast = zext i5 %p_shl69 to i8
  %tmp_343 = sub i8 %p_shl68_cast, %p_shl69_cast
  %tmp_475_cast = sext i8 %tmp_343 to i10
  %tmp21 = add i10 -232, %tmp_475_cast
  %tmp_344 = add i10 %tmp21, %co81_cast
  %tmp_979 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_344, i5 0)
  %p_shl429_cast = zext i15 %tmp_979 to i16
  %tmp_980 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_344, i3 0)
  %p_shl430_cast = zext i13 %tmp_980 to i16
  %tmp_981 = sub i16 %p_shl429_cast, %p_shl430_cast
  %tmp_1315_cast = sext i16 %tmp_981 to i17
  %tmp_982 = add i17 %tmp_330_cast, %tmp_1315_cast
  %tmp_1316_cast = sext i17 %tmp_982 to i64
  %shuffle_conv_1x1_add_15 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1316_cast
  %shuffle_conv_1x1_loa_15 = load float* %shuffle_conv_1x1_add_15, align 4
  %p_shl70 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_978, i4 0)
  %p_shl70_cast = zext i6 %p_shl70 to i7
  %p_shl71 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_978, i2 0)
  %p_shl71_cast = zext i4 %p_shl71 to i7
  %tmp_345 = sub i7 %p_shl70_cast, %p_shl71_cast
  %tmp_346 = add i7 %tmp_345, %tmp_457_cast
  %tmp_983 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_346, i6 0)
  %tmp_984 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_346, i4 0)
  %p_shl428_cast = sext i11 %tmp_984 to i13
  %tmp_985 = sub i13 %tmp_983, %p_shl428_cast
  %tmp_986 = add i13 %tmp_332_cast1, %tmp_985
  %tmp_1324_cast = sext i13 %tmp_986 to i64
  %weights_48_48_1x1_ad_6 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1324_cast
  store float %shuffle_conv_1x1_loa_15, float* %weights_48_48_1x1_ad_6, align 4
  br label %.preheader560

.preheader559.loopexit:                           ; preds = %.preheader558
  br label %.preheader559

.preheader559:                                    ; preds = %.preheader559.preheader, %.preheader559.loopexit
  %i62 = phi i5 [ %i_63, %.preheader559.loopexit ], [ 0, %.preheader559.preheader ]
  %i63_cast = zext i5 %i62 to i7
  %i63_cast496_cast = zext i5 %i62 to i9
  %exitcond233 = icmp eq i5 %i62, -8
  %empty_437 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_63 = add i5 %i62, 1
  br i1 %exitcond233, label %94, label %.preheader558.preheader

.preheader558.preheader:                          ; preds = %.preheader559
  br label %.preheader558

.preheader558:                                    ; preds = %.preheader558.preheader, %93
  %k12 = phi i2 [ %k_13, %93 ], [ 0, %.preheader558.preheader ]
  %exitcond232 = icmp eq i2 %k12, -2
  %empty_438 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_13 = add i2 %k12, 1
  br i1 %exitcond232, label %.preheader559.loopexit, label %93

; <label>:93                                      ; preds = %.preheader558
  %tmp_977 = trunc i2 %k12 to i1
  %p_shl64 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_977, i5 0)
  %p_shl64_cast = zext i6 %p_shl64 to i7
  %p_shl65 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_977, i3 0)
  %p_shl65_cast = zext i4 %p_shl65 to i7
  %tmp_338 = sub i7 %p_shl64_cast, %p_shl65_cast
  %tmp_459_cast_cast = sext i7 %tmp_338 to i9
  %tmp22 = add i9 -184, %tmp_459_cast_cast
  %tmp_339 = add i9 %i63_cast496_cast, %tmp22
  %tmp_461_cast = sext i9 %tmp_339 to i10
  %tmp_340 = zext i10 %tmp_461_cast to i64
  %bias_addr_27 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_340
  %bias_load_27 = load float* %bias_addr_27, align 4
  %tmp_341 = add i7 %tmp_338, %i63_cast
  %tmp_463_cast = sext i7 %tmp_341 to i32
  %tmp_342 = zext i32 %tmp_463_cast to i64
  %bias_48_addr_10 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_342
  store float %bias_load_27, float* %bias_48_addr_10, align 4
  br label %.preheader558

; <label>:94                                      ; preds = %.preheader559
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit878

.loopexit878.loopexit:                            ; preds = %.preheader557
  br label %.loopexit878

.loopexit878:                                     ; preds = %.loopexit878.loopexit, %94
  %co82 = phi i6 [ 0, %94 ], [ %co_83, %.loopexit878.loopexit ]
  %exitcond231 = icmp eq i6 %co82, -16
  %empty_439 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_83 = add i6 %co82, 1
  br i1 %exitcond231, label %96, label %.preheader557.preheader

.preheader557.preheader:                          ; preds = %.loopexit878
  %tmp_974 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co82, i3 0)
  %p_shl431_cast = zext i9 %tmp_974 to i10
  %tmp_975 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co82, i1 false)
  %p_shl432_cast = zext i7 %tmp_975 to i10
  %tmp_976 = add i10 %p_shl432_cast, %p_shl431_cast
  br label %.preheader557

.preheader557.loopexit:                           ; preds = %.preheader556
  br label %.preheader557

.preheader557:                                    ; preds = %.preheader557.loopexit, %.preheader557.preheader
  %h58 = phi i4 [ 0, %.preheader557.preheader ], [ %h_59, %.preheader557.loopexit ]
  %exitcond230 = icmp eq i4 %h58, -8
  %empty_440 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_59 = add i4 %h58, 1
  br i1 %exitcond230, label %.loopexit878.loopexit, label %.preheader556.preheader

.preheader556.preheader:                          ; preds = %.preheader557
  %tmp_348_cast = zext i4 %h_59 to i10
  %tmp_993 = add i10 %tmp_348_cast, %tmp_976
  %tmp_994 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_993, i3 0)
  %p_shl433_cast = zext i13 %tmp_994 to i15
  %tmp_995 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_993, i1 false)
  %p_shl434_cast = zext i11 %tmp_995 to i15
  %tmp_996 = add i15 %p_shl433_cast, %p_shl434_cast
  br label %.preheader556

.preheader556:                                    ; preds = %95, %.preheader556.preheader
  %w57 = phi i4 [ %w_58, %95 ], [ 0, %.preheader556.preheader ]
  %exitcond229 = icmp eq i4 %w57, -8
  %empty_441 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_58 = add i4 %w57, 1
  br i1 %exitcond229, label %.preheader557.loopexit, label %95

; <label>:95                                      ; preds = %.preheader556
  %tmp_351_cast1 = zext i4 %w_58 to i15
  %tmp_1006 = add i15 %tmp_996, %tmp_351_cast1
  %tmp_1345_cast = zext i15 %tmp_1006 to i64
  %buffer0_1_48_8x8_p_a_3 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1345_cast
  %shuffleunit1_0_outpu_2 = getelementptr [9600 x float]* @shuffleunit1_0_outpu, i64 0, i64 %tmp_1345_cast
  %shuffleunit1_0_outpu_3 = load float* %shuffleunit1_0_outpu_2, align 4
  store float %shuffleunit1_0_outpu_3, float* %buffer0_1_48_8x8_p_a_3, align 4
  br label %.preheader556

; <label>:96                                      ; preds = %.loopexit878
  call fastcc void @shuffle_48_p([4800 x float]* @buffer0_1_48_8x8_p, [9600 x float]* @shuffleunit1_1_outpu) nounwind
  br label %.loopexit877

.loopexit877.loopexit:                            ; preds = %.preheader555
  br label %.loopexit877

.loopexit877:                                     ; preds = %.loopexit877.loopexit, %96
  %co84 = phi i6 [ 0, %96 ], [ %co_85, %.loopexit877.loopexit ]
  %co84_cast = zext i6 %co84 to i7
  %exitcond228 = icmp eq i6 %co84, -16
  %empty_442 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_85 = add i6 %co84, 1
  br i1 %exitcond228, label %.preheader553.preheader, label %.preheader555.preheader

.preheader553.preheader:                          ; preds = %.loopexit877
  br label %.preheader553

.preheader555.preheader:                          ; preds = %.loopexit877
  %tmp_347 = add i7 %co84_cast, 48
  %tmp_987 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_347, i3 0)
  %p_shl437_cast = zext i10 %tmp_987 to i11
  %tmp_988 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp_347, i1 false)
  %p_shl438_cast = zext i8 %tmp_988 to i11
  %tmp_989 = add i11 %p_shl438_cast, %p_shl437_cast
  %tmp_990 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co84, i3 0)
  %p_shl435_cast = zext i9 %tmp_990 to i10
  %tmp_991 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co84, i1 false)
  %p_shl436_cast = zext i7 %tmp_991 to i10
  %tmp_992 = add i10 %p_shl436_cast, %p_shl435_cast
  br label %.preheader555

.preheader555.loopexit:                           ; preds = %.preheader554
  br label %.preheader555

.preheader555:                                    ; preds = %.preheader555.loopexit, %.preheader555.preheader
  %h60 = phi i4 [ 0, %.preheader555.preheader ], [ %h_61, %.preheader555.loopexit ]
  %exitcond227 = icmp eq i4 %h60, -8
  %empty_443 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_61 = add i4 %h60, 1
  br i1 %exitcond227, label %.loopexit877.loopexit, label %.preheader554.preheader

.preheader554.preheader:                          ; preds = %.preheader555
  %tmp_350_cast1 = zext i4 %h_61 to i11
  %tmp_350_cast = zext i4 %h_61 to i10
  %tmp_998 = add i10 %tmp_350_cast, %tmp_992
  %tmp_999 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_998, i3 0)
  %p_shl441_cast = zext i13 %tmp_999 to i14
  %tmp_1000 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_998, i1 false)
  %p_shl442_cast = zext i11 %tmp_1000 to i14
  %tmp_1001 = add i14 %p_shl441_cast, %p_shl442_cast
  %tmp_1002 = add i11 %tmp_350_cast1, %tmp_989
  %tmp_1003 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1002, i3 0)
  %p_shl439_cast = zext i14 %tmp_1003 to i15
  %tmp_1004 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_1002, i1 false)
  %p_shl440_cast = zext i12 %tmp_1004 to i15
  %tmp_1005 = add i15 %p_shl439_cast, %p_shl440_cast
  br label %.preheader554

.preheader554:                                    ; preds = %97, %.preheader554.preheader
  %w59 = phi i4 [ %w_60, %97 ], [ 0, %.preheader554.preheader ]
  %exitcond226 = icmp eq i4 %w59, -8
  %empty_444 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_60 = add i4 %w59, 1
  br i1 %exitcond226, label %.preheader555.loopexit, label %97

; <label>:97                                      ; preds = %.preheader554
  %tmp_355_cast1 = zext i4 %w_60 to i15
  %tmp_355_cast2 = zext i4 %w_60 to i14
  %tmp_1007 = add i14 %tmp_1001, %tmp_355_cast2
  %tmp_1346_cast = zext i14 %tmp_1007 to i64
  %buffer0_1_48_8x8_p_a_4 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1346_cast
  %tmp_1008 = add i15 %tmp_1005, %tmp_355_cast1
  %tmp_1347_cast = zext i15 %tmp_1008 to i64
  %shuffleunit1_1_outpu = getelementptr [9600 x float]* @shuffleunit1_1_outpu, i64 0, i64 %tmp_1347_cast
  %shuffleunit1_1_outpu_1 = load float* %shuffleunit1_1_outpu, align 4
  store float %shuffleunit1_1_outpu_1, float* %buffer0_1_48_8x8_p_a_4, align 4
  br label %.preheader554

.preheader553.loopexit:                           ; preds = %.preheader552
  br label %.preheader553

.preheader553:                                    ; preds = %.preheader553.preheader, %.preheader553.loopexit
  %co86 = phi i5 [ %co_87, %.preheader553.loopexit ], [ 0, %.preheader553.preheader ]
  %co86_cast491_cast = zext i5 %co86 to i9
  %exitcond225 = icmp eq i5 %co86, -8
  %empty_445 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_87 = add i5 %co86, 1
  br i1 %exitcond225, label %.preheader550.preheader, label %.preheader552.preheader

.preheader550.preheader:                          ; preds = %.preheader553
  br label %.preheader550

.preheader552.preheader:                          ; preds = %.preheader553
  %tmp_997 = trunc i5 %co86 to i1
  %p_shl72 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_997, i5 0)
  %p_shl72_cast = zext i6 %p_shl72 to i7
  %p_shl73 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_997, i3 0)
  %p_shl73_cast = zext i4 %p_shl73 to i7
  %tmp_349 = sub i7 %p_shl72_cast, %p_shl73_cast
  %p_lshr_f7_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co86, i32 1, i32 4)
  %tmp_487_cast = zext i4 %p_lshr_f7_cast to i7
  br label %.preheader552

.preheader552.loopexit:                           ; preds = %.preheader551
  br label %.preheader552

.preheader552:                                    ; preds = %.preheader552.loopexit, %.preheader552.preheader
  %ci40 = phi i5 [ 0, %.preheader552.preheader ], [ %ci_41, %.preheader552.loopexit ]
  %ci40_cast = zext i5 %ci40 to i7
  %exitcond224 = icmp eq i5 %ci40, -8
  %empty_446 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_41 = add i5 %ci40, 1
  br i1 %exitcond224, label %.preheader553.loopexit, label %.preheader551.preheader

.preheader551.preheader:                          ; preds = %.preheader552
  %tmp_352_cast = zext i5 %ci40 to i17
  %tmp_353 = add i7 %tmp_349, %ci40_cast
  %tmp_354_cast = sext i7 %tmp_353 to i13
  br label %.preheader551

.preheader551:                                    ; preds = %98, %.preheader551.preheader
  %i70 = phi i3 [ %i_71, %98 ], [ 0, %.preheader551.preheader ]
  %exitcond223 = icmp eq i3 %i70, -4
  %empty_447 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_71 = add i3 %i70, 1
  br i1 %exitcond223, label %.preheader552.loopexit, label %98

; <label>:98                                      ; preds = %.preheader551
  %tmp_1010 = trunc i3 %i70 to i2
  %p_shl76 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1010, i5 0)
  %p_shl76_cast = zext i7 %p_shl76 to i8
  %p_shl77 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1010, i3 0)
  %p_shl77_cast = zext i5 %p_shl77 to i8
  %tmp_361 = sub i8 %p_shl76_cast, %p_shl77_cast
  %tmp_502_cast_cast = sext i8 %tmp_361 to i9
  %tmp23 = add i9 -136, %tmp_502_cast_cast
  %tmp_362 = add i9 %tmp23, %co86_cast491_cast
  %tmp_1011 = call i14 @_ssdm_op_BitConcatenate.i14.i9.i5(i9 %tmp_362, i5 0)
  %tmp_1012 = sext i14 %tmp_1011 to i15
  %p_shl445_cast = zext i15 %tmp_1012 to i16
  %tmp_1013 = call i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9 %tmp_362, i3 0)
  %tmp_1014 = sext i12 %tmp_1013 to i13
  %p_shl446_cast = zext i13 %tmp_1014 to i16
  %tmp_1015 = sub i16 %p_shl445_cast, %p_shl446_cast
  %tmp_1356_cast = sext i16 %tmp_1015 to i17
  %tmp_1016 = add i17 %tmp_352_cast, %tmp_1356_cast
  %tmp_1357_cast = sext i17 %tmp_1016 to i64
  %shuffle_conv_1x1_add_16 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1357_cast
  %shuffle_conv_1x1_loa_16 = load float* %shuffle_conv_1x1_add_16, align 4
  %p_shl78 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1010, i4 0)
  %p_shl78_cast = zext i6 %p_shl78 to i7
  %p_shl79 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1010, i2 0)
  %p_shl79_cast = zext i4 %p_shl79 to i7
  %tmp_363 = sub i7 %p_shl78_cast, %p_shl79_cast
  %tmp_364 = add i7 %tmp_363, %tmp_487_cast
  %tmp_1017 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_364, i6 0)
  %tmp_1018 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_364, i4 0)
  %p_shl444_cast = sext i11 %tmp_1018 to i13
  %tmp_1019 = sub i13 %tmp_1017, %p_shl444_cast
  %tmp_1020 = add i13 %tmp_354_cast, %tmp_1019
  %tmp_1365_cast = sext i13 %tmp_1020 to i64
  %weights_48_48_1x1_ad_7 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1365_cast
  store float %shuffle_conv_1x1_loa_16, float* %weights_48_48_1x1_ad_7, align 4
  br label %.preheader551

.preheader550.loopexit:                           ; preds = %.preheader549
  br label %.preheader550

.preheader550:                                    ; preds = %.preheader550.preheader, %.preheader550.loopexit
  %i68 = phi i5 [ %i_69, %.preheader550.loopexit ], [ 0, %.preheader550.preheader ]
  %i69_cast = zext i5 %i68 to i7
  %i69_cast481_cast = zext i5 %i68 to i9
  %exitcond222 = icmp eq i5 %i68, -8
  %empty_448 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_69 = add i5 %i68, 1
  br i1 %exitcond222, label %100, label %.preheader549.preheader

.preheader549.preheader:                          ; preds = %.preheader550
  br label %.preheader549

.preheader549:                                    ; preds = %.preheader549.preheader, %99
  %k14 = phi i2 [ %k_15, %99 ], [ 0, %.preheader549.preheader ]
  %exitcond221 = icmp eq i2 %k14, -2
  %empty_449 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_15 = add i2 %k14, 1
  br i1 %exitcond221, label %.preheader550.loopexit, label %99

; <label>:99                                      ; preds = %.preheader549
  %tmp_1009 = trunc i2 %k14 to i1
  %p_shl74 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1009, i5 0)
  %p_shl74_cast = zext i6 %p_shl74 to i7
  %p_shl75 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1009, i3 0)
  %p_shl75_cast = zext i4 %p_shl75 to i7
  %tmp_356 = sub i7 %p_shl74_cast, %p_shl75_cast
  %tmp_491_cast_cast = sext i7 %tmp_356 to i9
  %tmp24 = add i9 -136, %tmp_491_cast_cast
  %tmp_357 = add i9 %i69_cast481_cast, %tmp24
  %tmp_493_cast = sext i9 %tmp_357 to i10
  %tmp_358 = zext i10 %tmp_493_cast to i64
  %bias_addr_28 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_358
  %bias_load_28 = load float* %bias_addr_28, align 4
  %tmp_359 = add i7 %tmp_356, %i69_cast
  %tmp_495_cast = sext i7 %tmp_359 to i32
  %tmp_360 = zext i32 %tmp_495_cast to i64
  %bias_48_addr_11 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_360
  store float %bias_load_28, float* %bias_48_addr_11, align 4
  br label %.preheader549

; <label>:100                                     ; preds = %.preheader550
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit876

.loopexit876.loopexit:                            ; preds = %.preheader548
  br label %.loopexit876

.loopexit876:                                     ; preds = %.loopexit876.loopexit, %100
  %co88 = phi i5 [ 0, %100 ], [ %co_89, %.loopexit876.loopexit ]
  %co89_cast = zext i5 %co88 to i7
  %co89_cast1 = zext i5 %co88 to i9
  %exitcond220 = icmp eq i5 %co88, -8
  %empty_450 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_89 = add i5 %co88, 1
  br i1 %exitcond220, label %.preheader545.preheader, label %.preheader548.preheader

.preheader548.preheader:                          ; preds = %.loopexit876
  br label %.preheader548

.preheader545.preheader:                          ; preds = %.loopexit876
  br label %.preheader545

.preheader548.loopexit:                           ; preds = %.preheader547
  br label %.preheader548

.preheader548:                                    ; preds = %.preheader548.preheader, %.preheader548.loopexit
  %w61 = phi i2 [ %w_62, %.preheader548.loopexit ], [ 0, %.preheader548.preheader ]
  %exitcond219 = icmp eq i2 %w61, -1
  %empty_451 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_62 = add i2 %w61, 1
  br i1 %exitcond219, label %.loopexit876.loopexit, label %.preheader547.preheader

.preheader547.preheader:                          ; preds = %.preheader548
  %tmp_365_cast1 = zext i2 %w61 to i36
  %tmp_365_cast = zext i2 %w61 to i12
  br label %.preheader547

.preheader547.loopexit:                           ; preds = %.preheader546
  br label %.preheader547

.preheader547:                                    ; preds = %.preheader547.loopexit, %.preheader547.preheader
  %h62 = phi i2 [ 0, %.preheader547.preheader ], [ %h_63, %.preheader547.loopexit ]
  %exitcond218 = icmp eq i2 %h62, -1
  %empty_452 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_63 = add i2 %h62, 1
  br i1 %exitcond218, label %.preheader548.loopexit, label %.preheader546.preheader

.preheader546.preheader:                          ; preds = %.preheader547
  %tmp_372_cast1 = zext i2 %h62 to i10
  %tmp_372_cast = zext i2 %h62 to i15
  br label %.preheader546

.preheader546:                                    ; preds = %101, %.preheader546.preheader
  %i76 = phi i2 [ %i_77, %101 ], [ 0, %.preheader546.preheader ]
  %exitcond217 = icmp eq i2 %i76, -2
  %empty_453 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_77 = add i2 %i76, 1
  br i1 %exitcond217, label %.preheader547.loopexit, label %101

; <label>:101                                     ; preds = %.preheader546
  %tmp_1023 = trunc i2 %i76 to i1
  %p_shl86 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1023, i5 0)
  %p_shl86_cast = zext i6 %p_shl86 to i7
  %p_shl87 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1023, i3 0)
  %p_shl87_cast = zext i4 %p_shl87 to i7
  %tmp_376 = sub i7 %p_shl86_cast, %p_shl87_cast
  %tmp_528_cast = sext i7 %tmp_376 to i9
  %tmp25 = add i9 -200, %tmp_528_cast
  %tmp_377 = add i9 %tmp25, %co89_cast1
  %tmp_378_cast = zext i9 %tmp_377 to i12
  %tmp_1024 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_377, i2 0)
  %p_shl450_cast = zext i11 %tmp_1024 to i12
  %tmp_1025 = sub i12 %p_shl450_cast, %tmp_378_cast
  %tmp_1026 = add i12 %tmp_365_cast, %tmp_1025
  %tmp_1374_cast = sext i12 %tmp_1026 to i15
  %tmp_1027 = call i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12 %tmp_1026, i2 0)
  %p_shl449_cast = sext i14 %tmp_1027 to i15
  %tmp_1028 = sub i15 %p_shl449_cast, %tmp_1374_cast
  %tmp_1029 = add i15 %tmp_372_cast, %tmp_1028
  %tmp_1377_cast = zext i15 %tmp_1029 to i64
  %shuffle_conv_3x3_add_9 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1377_cast
  %shuffle_conv_3x3_loa_9 = load float* %shuffle_conv_3x3_add_9, align 4
  %tmp_379 = add i7 %co89_cast, %tmp_376
  %tmp_532_cast = sext i7 %tmp_379 to i32
  %tmp_380_cast = zext i32 %tmp_532_cast to i35
  %tmp_1030 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_379, i2 0)
  %tmp_1031 = sext i9 %tmp_1030 to i34
  %p_shl448_cast = zext i34 %tmp_1031 to i35
  %tmp_1032 = sub i35 %p_shl448_cast, %tmp_380_cast
  %tmp_1380_cast = sext i35 %tmp_1032 to i36
  %tmp_1033 = add i36 %tmp_365_cast1, %tmp_1380_cast
  %tmp_1034 = trunc i36 %tmp_1033 to i10
  %tmp_1035 = trunc i36 %tmp_1033 to i8
  %p_shl447_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1035, i2 0)
  %tmp_1036 = sub i10 %p_shl447_cast, %tmp_1034
  %tmp_1037 = add i10 %tmp_372_cast1, %tmp_1036
  %tmp_1384_cast = zext i10 %tmp_1037 to i64
  %weights_48_1_3x3_add_4 = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1384_cast
  store float %shuffle_conv_3x3_loa_9, float* %weights_48_1_3x3_add_4, align 4
  br label %.preheader546

.preheader545.loopexit:                           ; preds = %.preheader544
  br label %.preheader545

.preheader545:                                    ; preds = %.preheader545.preheader, %.preheader545.loopexit
  %i72 = phi i5 [ %i_73, %.preheader545.loopexit ], [ 0, %.preheader545.preheader ]
  %i73_cast = zext i5 %i72 to i7
  %i73_cast471_cast = zext i5 %i72 to i8
  %exitcond216 = icmp eq i5 %i72, -8
  %empty_454 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_73 = add i5 %i72, 1
  br i1 %exitcond216, label %103, label %.preheader544.preheader

.preheader544.preheader:                          ; preds = %.preheader545
  br label %.preheader544

.preheader544:                                    ; preds = %.preheader544.preheader, %102
  %k16 = phi i2 [ %k_17, %102 ], [ 0, %.preheader544.preheader ]
  %exitcond215 = icmp eq i2 %k16, -2
  %empty_455 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_17 = add i2 %k16, 1
  br i1 %exitcond215, label %.preheader545.loopexit, label %102

; <label>:102                                     ; preds = %.preheader544
  %tmp_1022 = trunc i2 %k16 to i1
  %p_shl80 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1022, i5 0)
  %p_shl80_cast = zext i6 %p_shl80 to i7
  %p_shl81 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1022, i3 0)
  %p_shl81_cast = zext i4 %p_shl81 to i7
  %tmp_367 = sub i7 %p_shl80_cast, %p_shl81_cast
  %tmp_509_cast_cast = sext i7 %tmp_367 to i8
  %tmp26 = add i8 -88, %tmp_509_cast_cast
  %tmp_368 = add i8 %i73_cast471_cast, %tmp26
  %tmp_511_cast = sext i8 %tmp_368 to i10
  %tmp_369 = zext i10 %tmp_511_cast to i64
  %bias_addr_29 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_369
  %bias_load_29 = load float* %bias_addr_29, align 4
  %tmp_370 = add i7 %tmp_367, %i73_cast
  %tmp_513_cast = sext i7 %tmp_370 to i32
  %tmp_371 = zext i32 %tmp_513_cast to i64
  %bias_48_addr_12 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_371
  store float %bias_load_29, float* %bias_48_addr_12, align 4
  br label %.preheader544

; <label>:103                                     ; preds = %.preheader545
  call fastcc void @subconv_3x3_8_no_rel([4800 x float]* @buffer1_1_48_8x8_p, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [4800 x float]* @buffer0_1_48_8x8_p) nounwind
  br label %.loopexit875

.loopexit875.loopexit:                            ; preds = %.preheader543
  br label %.loopexit875

.loopexit875:                                     ; preds = %.loopexit875.loopexit, %103
  %co90 = phi i5 [ 0, %103 ], [ %co_91, %.loopexit875.loopexit ]
  %co91_cast = zext i5 %co90 to i11
  %exitcond214 = icmp eq i5 %co90, -8
  %empty_456 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_91 = add i5 %co90, 1
  br i1 %exitcond214, label %.preheader541.preheader, label %.preheader543.preheader

.preheader541.preheader:                          ; preds = %.loopexit875
  br label %.preheader541

.preheader543.preheader:                          ; preds = %.loopexit875
  %tmp_1021 = trunc i5 %co90 to i1
  %p_shl82 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1021, i5 0)
  %p_shl82_cast = zext i6 %p_shl82 to i7
  %p_shl83 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1021, i3 0)
  %p_shl83_cast = zext i4 %p_shl83 to i7
  %tmp_366 = sub i7 %p_shl82_cast, %p_shl83_cast
  %p_lshr_f8_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co90, i32 1, i32 4)
  %tmp_517_cast = zext i4 %p_lshr_f8_cast to i7
  br label %.preheader543

.preheader543.loopexit:                           ; preds = %.preheader542
  br label %.preheader543

.preheader543:                                    ; preds = %.preheader543.loopexit, %.preheader543.preheader
  %ci42 = phi i5 [ 0, %.preheader543.preheader ], [ %ci_43, %.preheader543.loopexit ]
  %ci42_cast = zext i5 %ci42 to i7
  %exitcond213 = icmp eq i5 %ci42, -8
  %empty_457 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_43 = add i5 %ci42, 1
  br i1 %exitcond213, label %.loopexit875.loopexit, label %.preheader542.preheader

.preheader542.preheader:                          ; preds = %.preheader543
  %tmp_373_cast = zext i5 %ci42 to i18
  %tmp_374 = add i7 %tmp_366, %ci42_cast
  %tmp_375_cast1 = sext i7 %tmp_374 to i13
  br label %.preheader542

.preheader542:                                    ; preds = %104, %.preheader542.preheader
  %i78 = phi i3 [ %i_79, %104 ], [ 0, %.preheader542.preheader ]
  %exitcond212 = icmp eq i3 %i78, -4
  %empty_458 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_79 = add i3 %i78, 1
  br i1 %exitcond212, label %.preheader543.loopexit, label %104

; <label>:104                                     ; preds = %.preheader542
  %tmp_1042 = trunc i3 %i78 to i2
  %p_shl88 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1042, i5 0)
  %p_shl88_cast = zext i7 %p_shl88 to i8
  %p_shl89 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1042, i3 0)
  %p_shl89_cast = zext i5 %p_shl89 to i8
  %tmp_386 = sub i8 %p_shl88_cast, %p_shl89_cast
  %tmp_535_cast = sext i8 %tmp_386 to i11
  %tmp27 = add i11 984, %tmp_535_cast
  %tmp_387 = add i11 %tmp27, %co91_cast
  %tmp_1043 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_387, i5 0)
  %p_shl453_cast = zext i16 %tmp_1043 to i17
  %tmp_1044 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_387, i3 0)
  %p_shl454_cast = zext i14 %tmp_1044 to i17
  %tmp_1045 = sub i17 %p_shl453_cast, %p_shl454_cast
  %tmp_1394_cast = sext i17 %tmp_1045 to i18
  %tmp_1046 = add i18 %tmp_373_cast, %tmp_1394_cast
  %tmp_1395_cast = sext i18 %tmp_1046 to i64
  %shuffle_conv_1x1_add_17 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1395_cast
  %shuffle_conv_1x1_loa_17 = load float* %shuffle_conv_1x1_add_17, align 4
  %p_shl90 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1042, i4 0)
  %p_shl90_cast = zext i6 %p_shl90 to i7
  %p_shl91 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1042, i2 0)
  %p_shl91_cast = zext i4 %p_shl91 to i7
  %tmp_388 = sub i7 %p_shl90_cast, %p_shl91_cast
  %tmp_389 = add i7 %tmp_388, %tmp_517_cast
  %tmp_1047 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_389, i6 0)
  %tmp_1048 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_389, i4 0)
  %p_shl452_cast = sext i11 %tmp_1048 to i13
  %tmp_1049 = sub i13 %tmp_1047, %p_shl452_cast
  %tmp_1050 = add i13 %tmp_375_cast1, %tmp_1049
  %tmp_1403_cast = sext i13 %tmp_1050 to i64
  %weights_48_48_1x1_ad_8 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1403_cast
  store float %shuffle_conv_1x1_loa_17, float* %weights_48_48_1x1_ad_8, align 4
  br label %.preheader542

.preheader541.loopexit:                           ; preds = %.preheader540
  br label %.preheader541

.preheader541:                                    ; preds = %.preheader541.preheader, %.preheader541.loopexit
  %i74 = phi i5 [ %i_75, %.preheader541.loopexit ], [ 0, %.preheader541.preheader ]
  %i75_cast = zext i5 %i74 to i7
  %i75_cast1 = zext i5 %i74 to i11
  %exitcond211 = icmp eq i5 %i74, -8
  %empty_459 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_75 = add i5 %i74, 1
  br i1 %exitcond211, label %106, label %.preheader540.preheader

.preheader540.preheader:                          ; preds = %.preheader541
  br label %.preheader540

.preheader540:                                    ; preds = %.preheader540.preheader, %105
  %k18 = phi i2 [ %k_19, %105 ], [ 0, %.preheader540.preheader ]
  %exitcond210 = icmp eq i2 %k18, -2
  %empty_460 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_19 = add i2 %k18, 1
  br i1 %exitcond210, label %.preheader541.loopexit, label %105

; <label>:105                                     ; preds = %.preheader540
  %tmp_1041 = trunc i2 %k18 to i1
  %p_shl84 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1041, i5 0)
  %p_shl84_cast = zext i6 %p_shl84 to i7
  %p_shl85 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1041, i3 0)
  %p_shl85_cast = zext i4 %p_shl85 to i7
  %tmp_381 = sub i7 %p_shl84_cast, %p_shl85_cast
  %tmp28 = add i7 -40, %tmp_381
  %tmp28_cast1 = sext i7 %tmp28 to i10
  %tmp28_cast = zext i10 %tmp28_cast1 to i11
  %tmp_382 = add i11 %i75_cast1, %tmp28_cast
  %tmp_383 = zext i11 %tmp_382 to i64
  %bias_addr_30 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_383
  %bias_load_30 = load float* %bias_addr_30, align 4
  %tmp_384 = add i7 %tmp_381, %i75_cast
  %tmp_523_cast = sext i7 %tmp_384 to i32
  %tmp_385 = zext i32 %tmp_523_cast to i64
  %bias_48_addr_13 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_385
  store float %bias_load_30, float* %bias_48_addr_13, align 4
  br label %.preheader540

; <label>:106                                     ; preds = %.preheader541
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit874

.loopexit874.loopexit:                            ; preds = %.preheader539
  br label %.loopexit874

.loopexit874:                                     ; preds = %.loopexit874.loopexit, %106
  %co92 = phi i6 [ 0, %106 ], [ %co_93, %.loopexit874.loopexit ]
  %exitcond209 = icmp eq i6 %co92, -16
  %empty_461 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_93 = add i6 %co92, 1
  br i1 %exitcond209, label %108, label %.preheader539.preheader

.preheader539.preheader:                          ; preds = %.loopexit874
  %tmp_1038 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co92, i3 0)
  %p_shl455_cast = zext i9 %tmp_1038 to i10
  %tmp_1039 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co92, i1 false)
  %p_shl456_cast = zext i7 %tmp_1039 to i10
  %tmp_1040 = add i10 %p_shl456_cast, %p_shl455_cast
  br label %.preheader539

.preheader539.loopexit:                           ; preds = %.preheader538
  br label %.preheader539

.preheader539:                                    ; preds = %.preheader539.loopexit, %.preheader539.preheader
  %h64 = phi i4 [ 0, %.preheader539.preheader ], [ %h_65, %.preheader539.loopexit ]
  %exitcond208 = icmp eq i4 %h64, -8
  %empty_462 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_65 = add i4 %h64, 1
  br i1 %exitcond208, label %.loopexit874.loopexit, label %.preheader538.preheader

.preheader538.preheader:                          ; preds = %.preheader539
  %tmp_391_cast = zext i4 %h_65 to i10
  %tmp_1057 = add i10 %tmp_391_cast, %tmp_1040
  %tmp_1058 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1057, i3 0)
  %p_shl457_cast = zext i13 %tmp_1058 to i15
  %tmp_1059 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1057, i1 false)
  %p_shl458_cast = zext i11 %tmp_1059 to i15
  %tmp_1060 = add i15 %p_shl457_cast, %p_shl458_cast
  br label %.preheader538

.preheader538:                                    ; preds = %107, %.preheader538.preheader
  %w63 = phi i4 [ %w_64, %107 ], [ 0, %.preheader538.preheader ]
  %exitcond207 = icmp eq i4 %w63, -8
  %empty_463 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_64 = add i4 %w63, 1
  br i1 %exitcond207, label %.preheader539.loopexit, label %107

; <label>:107                                     ; preds = %.preheader538
  %tmp_394_cast = zext i4 %w_64 to i15
  %tmp_1070 = add i15 %tmp_1060, %tmp_394_cast
  %tmp_1424_cast = zext i15 %tmp_1070 to i64
  %buffer0_1_48_8x8_p_a_5 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1424_cast
  %shuffleunit1_1_outpu_2 = getelementptr [9600 x float]* @shuffleunit1_1_outpu, i64 0, i64 %tmp_1424_cast
  %shuffleunit1_1_outpu_3 = load float* %shuffleunit1_1_outpu_2, align 4
  store float %shuffleunit1_1_outpu_3, float* %buffer0_1_48_8x8_p_a_5, align 4
  br label %.preheader538

; <label>:108                                     ; preds = %.loopexit874
  call fastcc void @shuffle_48_p([4800 x float]* @buffer0_1_48_8x8_p, [9600 x float]* @shuffleunit1_2_outpu) nounwind
  br label %.loopexit873

.loopexit873.loopexit:                            ; preds = %.preheader537
  br label %.loopexit873

.loopexit873:                                     ; preds = %.loopexit873.loopexit, %108
  %co94 = phi i6 [ 0, %108 ], [ %co_95, %.loopexit873.loopexit ]
  %co94_cast = zext i6 %co94 to i7
  %exitcond206 = icmp eq i6 %co94, -16
  %empty_464 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_95 = add i6 %co94, 1
  br i1 %exitcond206, label %.preheader535.preheader, label %.preheader537.preheader

.preheader535.preheader:                          ; preds = %.loopexit873
  br label %.preheader535

.preheader537.preheader:                          ; preds = %.loopexit873
  %tmp_390 = add i7 %co94_cast, 48
  %tmp_1051 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_390, i3 0)
  %p_shl461_cast = zext i10 %tmp_1051 to i11
  %tmp_1052 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp_390, i1 false)
  %p_shl462_cast = zext i8 %tmp_1052 to i11
  %tmp_1053 = add i11 %p_shl462_cast, %p_shl461_cast
  %tmp_1054 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co94, i3 0)
  %p_shl459_cast = zext i9 %tmp_1054 to i10
  %tmp_1055 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co94, i1 false)
  %p_shl460_cast = zext i7 %tmp_1055 to i10
  %tmp_1056 = add i10 %p_shl460_cast, %p_shl459_cast
  br label %.preheader537

.preheader537.loopexit:                           ; preds = %.preheader536
  br label %.preheader537

.preheader537:                                    ; preds = %.preheader537.loopexit, %.preheader537.preheader
  %h66 = phi i4 [ 0, %.preheader537.preheader ], [ %h_67, %.preheader537.loopexit ]
  %exitcond205 = icmp eq i4 %h66, -8
  %empty_465 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_67 = add i4 %h66, 1
  br i1 %exitcond205, label %.loopexit873.loopexit, label %.preheader536.preheader

.preheader536.preheader:                          ; preds = %.preheader537
  %tmp_393_cast1 = zext i4 %h_67 to i10
  %tmp_393_cast2 = zext i4 %h_67 to i11
  %tmp_1062 = add i11 %tmp_393_cast2, %tmp_1053
  %tmp_1063 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1062, i3 0)
  %p_shl465_cast = zext i14 %tmp_1063 to i15
  %tmp_1064 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_1062, i1 false)
  %p_shl466_cast = zext i12 %tmp_1064 to i15
  %tmp_1065 = add i15 %p_shl465_cast, %p_shl466_cast
  %tmp_1066 = add i10 %tmp_393_cast1, %tmp_1056
  %tmp_1067 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1066, i3 0)
  %p_shl463_cast = zext i13 %tmp_1067 to i14
  %tmp_1068 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1066, i1 false)
  %p_shl464_cast = zext i11 %tmp_1068 to i14
  %tmp_1069 = add i14 %p_shl463_cast, %p_shl464_cast
  br label %.preheader536

.preheader536:                                    ; preds = %109, %.preheader536.preheader
  %w65 = phi i4 [ %w_66, %109 ], [ 0, %.preheader536.preheader ]
  %exitcond204 = icmp eq i4 %w65, -8
  %empty_466 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_66 = add i4 %w65, 1
  br i1 %exitcond204, label %.preheader537.loopexit, label %109

; <label>:109                                     ; preds = %.preheader536
  %tmp_398_cast1 = zext i4 %w_66 to i14
  %tmp_398_cast = zext i4 %w_66 to i15
  %tmp_1071 = add i15 %tmp_1065, %tmp_398_cast
  %tmp_1425_cast = zext i15 %tmp_1071 to i64
  %shuffleunit1_2_outpu = getelementptr [9600 x float]* @shuffleunit1_2_outpu, i64 0, i64 %tmp_1425_cast
  %tmp_1072 = add i14 %tmp_1069, %tmp_398_cast1
  %tmp_1426_cast = zext i14 %tmp_1072 to i64
  %buffer0_1_48_8x8_p_a_6 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1426_cast
  %shuffleunit1_2_outpu_1 = load float* %shuffleunit1_2_outpu, align 4
  store float %shuffleunit1_2_outpu_1, float* %buffer0_1_48_8x8_p_a_6, align 4
  br label %.preheader536

.preheader535.loopexit:                           ; preds = %.preheader534
  br label %.preheader535

.preheader535:                                    ; preds = %.preheader535.preheader, %.preheader535.loopexit
  %co96 = phi i5 [ %co_97, %.preheader535.loopexit ], [ 0, %.preheader535.preheader ]
  %co96_cast = zext i5 %co96 to i11
  %exitcond203 = icmp eq i5 %co96, -8
  %empty_467 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_97 = add i5 %co96, 1
  br i1 %exitcond203, label %.preheader532.preheader, label %.preheader534.preheader

.preheader532.preheader:                          ; preds = %.preheader535
  br label %.preheader532

.preheader534.preheader:                          ; preds = %.preheader535
  %tmp_1061 = trunc i5 %co96 to i1
  %p_shl92 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1061, i5 0)
  %p_shl92_cast = zext i6 %p_shl92 to i7
  %p_shl93 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1061, i3 0)
  %p_shl93_cast = zext i4 %p_shl93 to i7
  %tmp_392 = sub i7 %p_shl92_cast, %p_shl93_cast
  %p_lshr_f9_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co96, i32 1, i32 4)
  %tmp_547_cast = zext i4 %p_lshr_f9_cast to i7
  br label %.preheader534

.preheader534.loopexit:                           ; preds = %.preheader533
  br label %.preheader534

.preheader534:                                    ; preds = %.preheader534.loopexit, %.preheader534.preheader
  %ci44 = phi i5 [ 0, %.preheader534.preheader ], [ %ci_45, %.preheader534.loopexit ]
  %ci44_cast = zext i5 %ci44 to i7
  %exitcond202 = icmp eq i5 %ci44, -8
  %empty_468 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_45 = add i5 %ci44, 1
  br i1 %exitcond202, label %.preheader535.loopexit, label %.preheader533.preheader

.preheader533.preheader:                          ; preds = %.preheader534
  %tmp_395_cast = zext i5 %ci44 to i18
  %tmp_396 = add i7 %tmp_392, %ci44_cast
  %tmp_397_cast1 = sext i7 %tmp_396 to i13
  br label %.preheader533

.preheader533:                                    ; preds = %110, %.preheader533.preheader
  %i82 = phi i3 [ %i_83, %110 ], [ 0, %.preheader533.preheader ]
  %exitcond201 = icmp eq i3 %i82, -4
  %empty_469 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_83 = add i3 %i82, 1
  br i1 %exitcond201, label %.preheader534.loopexit, label %110

; <label>:110                                     ; preds = %.preheader533
  %tmp_1074 = trunc i3 %i82 to i2
  %p_shl96 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1074, i5 0)
  %p_shl96_cast = zext i7 %p_shl96 to i8
  %p_shl97 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1074, i3 0)
  %p_shl97_cast = zext i5 %p_shl97 to i8
  %tmp_404 = sub i8 %p_shl96_cast, %p_shl97_cast
  %tmp_562_cast = sext i8 %tmp_404 to i11
  %tmp29 = add i11 -968, %tmp_562_cast
  %tmp_405 = add i11 %tmp29, %co96_cast
  %tmp_1075 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_405, i5 0)
  %p_shl469_cast = zext i16 %tmp_1075 to i17
  %tmp_1076 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_405, i3 0)
  %p_shl470_cast = zext i14 %tmp_1076 to i17
  %tmp_1077 = sub i17 %p_shl469_cast, %p_shl470_cast
  %tmp_1433_cast = sext i17 %tmp_1077 to i18
  %tmp_1078 = add i18 %tmp_395_cast, %tmp_1433_cast
  %tmp_1434_cast = sext i18 %tmp_1078 to i64
  %shuffle_conv_1x1_add_18 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1434_cast
  %shuffle_conv_1x1_loa_18 = load float* %shuffle_conv_1x1_add_18, align 4
  %p_shl98 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1074, i4 0)
  %p_shl98_cast = zext i6 %p_shl98 to i7
  %p_shl99 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1074, i2 0)
  %p_shl99_cast = zext i4 %p_shl99 to i7
  %tmp_406 = sub i7 %p_shl98_cast, %p_shl99_cast
  %tmp_407 = add i7 %tmp_406, %tmp_547_cast
  %tmp_1079 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_407, i6 0)
  %tmp_1080 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_407, i4 0)
  %p_shl468_cast = sext i11 %tmp_1080 to i13
  %tmp_1081 = sub i13 %tmp_1079, %p_shl468_cast
  %tmp_1082 = add i13 %tmp_397_cast1, %tmp_1081
  %tmp_1442_cast = sext i13 %tmp_1082 to i64
  %weights_48_48_1x1_ad_9 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1442_cast
  store float %shuffle_conv_1x1_loa_18, float* %weights_48_48_1x1_ad_9, align 4
  br label %.preheader533

.preheader532.loopexit:                           ; preds = %.preheader531
  br label %.preheader532

.preheader532:                                    ; preds = %.preheader532.preheader, %.preheader532.loopexit
  %i80 = phi i5 [ %i_81, %.preheader532.loopexit ], [ 0, %.preheader532.preheader ]
  %i81_cast = zext i5 %i80 to i7
  %i81_cast1 = zext i5 %i80 to i11
  %exitcond200 = icmp eq i5 %i80, -8
  %empty_470 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_81 = add i5 %i80, 1
  br i1 %exitcond200, label %112, label %.preheader531.preheader

.preheader531.preheader:                          ; preds = %.preheader532
  br label %.preheader531

.preheader531:                                    ; preds = %.preheader531.preheader, %111
  %k20 = phi i2 [ %k_21, %111 ], [ 0, %.preheader531.preheader ]
  %exitcond199 = icmp eq i2 %k20, -2
  %empty_471 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_21 = add i2 %k20, 1
  br i1 %exitcond199, label %.preheader532.loopexit, label %111

; <label>:111                                     ; preds = %.preheader531
  %tmp_1073 = trunc i2 %k20 to i1
  %p_shl94 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1073, i5 0)
  %p_shl94_cast = zext i6 %p_shl94 to i7
  %p_shl95 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1073, i3 0)
  %p_shl95_cast = zext i4 %p_shl95 to i7
  %tmp_399 = sub i7 %p_shl94_cast, %p_shl95_cast
  %tmp_551_cast = sext i7 %tmp_399 to i11
  %tmp30 = add i11 -1016, %tmp_551_cast
  %tmp_400 = add i11 %i81_cast1, %tmp30
  %tmp_401 = zext i11 %tmp_400 to i64
  %bias_addr_31 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_401
  %bias_load_31 = load float* %bias_addr_31, align 4
  %tmp_402 = add i7 %tmp_399, %i81_cast
  %tmp_555_cast = sext i7 %tmp_402 to i32
  %tmp_403 = zext i32 %tmp_555_cast to i64
  %bias_48_addr_14 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_403
  store float %bias_load_31, float* %bias_48_addr_14, align 4
  br label %.preheader531

; <label>:112                                     ; preds = %.preheader532
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit872

.loopexit872.loopexit:                            ; preds = %.preheader530
  br label %.loopexit872

.loopexit872:                                     ; preds = %.loopexit872.loopexit, %112
  %co98 = phi i5 [ 0, %112 ], [ %co_99, %.loopexit872.loopexit ]
  %co99_cast = zext i5 %co98 to i7
  %co99_cast1 = zext i5 %co98 to i9
  %exitcond198 = icmp eq i5 %co98, -8
  %empty_472 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_99 = add i5 %co98, 1
  br i1 %exitcond198, label %.preheader527.preheader, label %.preheader530.preheader

.preheader530.preheader:                          ; preds = %.loopexit872
  br label %.preheader530

.preheader527.preheader:                          ; preds = %.loopexit872
  br label %.preheader527

.preheader530.loopexit:                           ; preds = %.preheader529
  br label %.preheader530

.preheader530:                                    ; preds = %.preheader530.preheader, %.preheader530.loopexit
  %w67 = phi i2 [ %w_68, %.preheader530.loopexit ], [ 0, %.preheader530.preheader ]
  %exitcond197 = icmp eq i2 %w67, -1
  %empty_473 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_68 = add i2 %w67, 1
  br i1 %exitcond197, label %.loopexit872.loopexit, label %.preheader529.preheader

.preheader529.preheader:                          ; preds = %.preheader530
  %tmp_408_cast1 = zext i2 %w67 to i36
  %tmp_408_cast = zext i2 %w67 to i12
  br label %.preheader529

.preheader529.loopexit:                           ; preds = %.preheader528
  br label %.preheader529

.preheader529:                                    ; preds = %.preheader529.loopexit, %.preheader529.preheader
  %h68 = phi i2 [ 0, %.preheader529.preheader ], [ %h_69, %.preheader529.loopexit ]
  %exitcond196 = icmp eq i2 %h68, -1
  %empty_474 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_69 = add i2 %h68, 1
  br i1 %exitcond196, label %.preheader530.loopexit, label %.preheader528.preheader

.preheader528.preheader:                          ; preds = %.preheader529
  %tmp_415_cast1 = zext i2 %h68 to i10
  %tmp_415_cast2 = zext i2 %h68 to i15
  br label %.preheader528

.preheader528:                                    ; preds = %113, %.preheader528.preheader
  %i88 = phi i2 [ %i_89, %113 ], [ 0, %.preheader528.preheader ]
  %exitcond195 = icmp eq i2 %i88, -2
  %empty_475 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_89 = add i2 %i88, 1
  br i1 %exitcond195, label %.preheader529.loopexit, label %113

; <label>:113                                     ; preds = %.preheader528
  %tmp_1085 = trunc i2 %i88 to i1
  %p_shl106 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1085, i5 0)
  %p_shl106_cast = zext i6 %p_shl106 to i7
  %p_shl107 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1085, i3 0)
  %p_shl107_cast = zext i4 %p_shl107 to i7
  %tmp_419 = sub i7 %p_shl106_cast, %p_shl107_cast
  %tmp_588_cast = sext i7 %tmp_419 to i9
  %tmp31 = add i9 -152, %tmp_588_cast
  %tmp_420 = add i9 %tmp31, %co99_cast1
  %tmp_421_cast = zext i9 %tmp_420 to i12
  %tmp_1086 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_420, i2 0)
  %p_shl474_cast = zext i11 %tmp_1086 to i12
  %tmp_1087 = sub i12 %p_shl474_cast, %tmp_421_cast
  %tmp_1088 = add i12 %tmp_408_cast, %tmp_1087
  %tmp_1451_cast = sext i12 %tmp_1088 to i15
  %tmp_1089 = call i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12 %tmp_1088, i2 0)
  %p_shl473_cast = sext i14 %tmp_1089 to i15
  %tmp_1090 = sub i15 %p_shl473_cast, %tmp_1451_cast
  %tmp_1091 = add i15 %tmp_415_cast2, %tmp_1090
  %tmp_1454_cast = zext i15 %tmp_1091 to i64
  %shuffle_conv_3x3_add_10 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1454_cast
  %shuffle_conv_3x3_loa_10 = load float* %shuffle_conv_3x3_add_10, align 4
  %tmp_422 = add i7 %co99_cast, %tmp_419
  %tmp_592_cast = sext i7 %tmp_422 to i32
  %tmp_423_cast = zext i32 %tmp_592_cast to i35
  %tmp_1092 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_422, i2 0)
  %tmp_1093 = sext i9 %tmp_1092 to i34
  %p_shl472_cast = zext i34 %tmp_1093 to i35
  %tmp_1094 = sub i35 %p_shl472_cast, %tmp_423_cast
  %tmp_1457_cast = sext i35 %tmp_1094 to i36
  %tmp_1095 = add i36 %tmp_408_cast1, %tmp_1457_cast
  %tmp_1096 = trunc i36 %tmp_1095 to i10
  %tmp_1097 = trunc i36 %tmp_1095 to i8
  %p_shl471_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1097, i2 0)
  %tmp_1098 = sub i10 %p_shl471_cast, %tmp_1096
  %tmp_1099 = add i10 %tmp_415_cast1, %tmp_1098
  %tmp_1461_cast = zext i10 %tmp_1099 to i64
  %weights_48_1_3x3_add_5 = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1461_cast
  store float %shuffle_conv_3x3_loa_10, float* %weights_48_1_3x3_add_5, align 4
  br label %.preheader528

.preheader527.loopexit:                           ; preds = %.preheader526
  br label %.preheader527

.preheader527:                                    ; preds = %.preheader527.preheader, %.preheader527.loopexit
  %i84 = phi i5 [ %i_85, %.preheader527.loopexit ], [ 0, %.preheader527.preheader ]
  %i85_cast = zext i5 %i84 to i7
  %i85_cast1 = zext i5 %i84 to i11
  %exitcond194 = icmp eq i5 %i84, -8
  %empty_476 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_85 = add i5 %i84, 1
  br i1 %exitcond194, label %115, label %.preheader526.preheader

.preheader526.preheader:                          ; preds = %.preheader527
  br label %.preheader526

.preheader526:                                    ; preds = %.preheader526.preheader, %114
  %k22 = phi i2 [ %k_23, %114 ], [ 0, %.preheader526.preheader ]
  %exitcond193 = icmp eq i2 %k22, -2
  %empty_477 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_23 = add i2 %k22, 1
  br i1 %exitcond193, label %.preheader527.loopexit, label %114

; <label>:114                                     ; preds = %.preheader526
  %tmp_1084 = trunc i2 %k22 to i1
  %p_shl100 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1084, i5 0)
  %p_shl100_cast = zext i6 %p_shl100 to i7
  %p_shl101 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1084, i3 0)
  %p_shl101_cast = zext i4 %p_shl101 to i7
  %tmp_410 = sub i7 %p_shl100_cast, %p_shl101_cast
  %tmp_569_cast = sext i7 %tmp_410 to i11
  %tmp32 = add i11 -968, %tmp_569_cast
  %tmp_411 = add i11 %i85_cast1, %tmp32
  %tmp_412 = zext i11 %tmp_411 to i64
  %bias_addr_32 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_412
  %bias_load_32 = load float* %bias_addr_32, align 4
  %tmp_413 = add i7 %tmp_410, %i85_cast
  %tmp_573_cast = sext i7 %tmp_413 to i32
  %tmp_414 = zext i32 %tmp_573_cast to i64
  %bias_48_addr_15 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_414
  store float %bias_load_32, float* %bias_48_addr_15, align 4
  br label %.preheader526

; <label>:115                                     ; preds = %.preheader527
  call fastcc void @subconv_3x3_8_no_rel([4800 x float]* @buffer1_1_48_8x8_p, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [4800 x float]* @buffer0_1_48_8x8_p) nounwind
  br label %.loopexit871

.loopexit871.loopexit:                            ; preds = %.preheader525
  br label %.loopexit871

.loopexit871:                                     ; preds = %.loopexit871.loopexit, %115
  %co100 = phi i5 [ 0, %115 ], [ %co_101, %.loopexit871.loopexit ]
  %co101_cast = zext i5 %co100 to i11
  %exitcond192 = icmp eq i5 %co100, -8
  %empty_478 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_101 = add i5 %co100, 1
  br i1 %exitcond192, label %.preheader523.preheader, label %.preheader525.preheader

.preheader523.preheader:                          ; preds = %.loopexit871
  br label %.preheader523

.preheader525.preheader:                          ; preds = %.loopexit871
  %tmp_1083 = trunc i5 %co100 to i1
  %p_shl102 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1083, i5 0)
  %p_shl102_cast = zext i6 %p_shl102 to i7
  %p_shl103 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1083, i3 0)
  %p_shl103_cast = zext i4 %p_shl103 to i7
  %tmp_409 = sub i7 %p_shl102_cast, %p_shl103_cast
  %p_lshr_f10_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co100, i32 1, i32 4)
  %tmp_577_cast = zext i4 %p_lshr_f10_cast to i7
  br label %.preheader525

.preheader525.loopexit:                           ; preds = %.preheader524
  br label %.preheader525

.preheader525:                                    ; preds = %.preheader525.loopexit, %.preheader525.preheader
  %ci46 = phi i5 [ 0, %.preheader525.preheader ], [ %ci_47, %.preheader525.loopexit ]
  %ci46_cast = zext i5 %ci46 to i7
  %exitcond191 = icmp eq i5 %ci46, -8
  %empty_479 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_47 = add i5 %ci46, 1
  br i1 %exitcond191, label %.loopexit871.loopexit, label %.preheader524.preheader

.preheader524.preheader:                          ; preds = %.preheader525
  %tmp_416_cast = zext i5 %ci46 to i18
  %tmp_417 = add i7 %tmp_409, %ci46_cast
  %tmp_418_cast = sext i7 %tmp_417 to i13
  br label %.preheader524

.preheader524:                                    ; preds = %116, %.preheader524.preheader
  %i90 = phi i3 [ %i_91, %116 ], [ 0, %.preheader524.preheader ]
  %exitcond190 = icmp eq i3 %i90, -4
  %empty_480 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_91 = add i3 %i90, 1
  br i1 %exitcond190, label %.preheader525.loopexit, label %116

; <label>:116                                     ; preds = %.preheader524
  %tmp_1104 = trunc i3 %i90 to i2
  %p_shl108 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1104, i5 0)
  %p_shl108_cast = zext i7 %p_shl108 to i8
  %p_shl109 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1104, i3 0)
  %p_shl109_cast = zext i5 %p_shl109 to i8
  %tmp_429 = sub i8 %p_shl108_cast, %p_shl109_cast
  %tmp_595_cast = sext i8 %tmp_429 to i11
  %tmp33 = add i11 -872, %tmp_595_cast
  %tmp_430 = add i11 %tmp33, %co101_cast
  %tmp_1105 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_430, i5 0)
  %p_shl477_cast = zext i16 %tmp_1105 to i17
  %tmp_1106 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_430, i3 0)
  %p_shl478_cast = zext i14 %tmp_1106 to i17
  %tmp_1107 = sub i17 %p_shl477_cast, %p_shl478_cast
  %tmp_1471_cast = sext i17 %tmp_1107 to i18
  %tmp_1108 = add i18 %tmp_416_cast, %tmp_1471_cast
  %tmp_1472_cast = sext i18 %tmp_1108 to i64
  %shuffle_conv_1x1_add_19 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1472_cast
  %shuffle_conv_1x1_loa_19 = load float* %shuffle_conv_1x1_add_19, align 4
  %p_shl110 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1104, i4 0)
  %p_shl110_cast = zext i6 %p_shl110 to i7
  %p_shl111 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1104, i2 0)
  %p_shl111_cast = zext i4 %p_shl111 to i7
  %tmp_431 = sub i7 %p_shl110_cast, %p_shl111_cast
  %tmp_432 = add i7 %tmp_431, %tmp_577_cast
  %tmp_1109 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_432, i6 0)
  %tmp_1110 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_432, i4 0)
  %p_shl476_cast = sext i11 %tmp_1110 to i13
  %tmp_1111 = sub i13 %tmp_1109, %p_shl476_cast
  %tmp_1112 = add i13 %tmp_418_cast, %tmp_1111
  %tmp_1480_cast = sext i13 %tmp_1112 to i64
  %weights_48_48_1x1_ad_10 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1480_cast
  store float %shuffle_conv_1x1_loa_19, float* %weights_48_48_1x1_ad_10, align 4
  br label %.preheader524

.preheader523.loopexit:                           ; preds = %.preheader522
  br label %.preheader523

.preheader523:                                    ; preds = %.preheader523.preheader, %.preheader523.loopexit
  %i86 = phi i5 [ %i_87, %.preheader523.loopexit ], [ 0, %.preheader523.preheader ]
  %i87_cast = zext i5 %i86 to i7
  %i87_cast1 = zext i5 %i86 to i11
  %exitcond189 = icmp eq i5 %i86, -8
  %empty_481 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_87 = add i5 %i86, 1
  br i1 %exitcond189, label %118, label %.preheader522.preheader

.preheader522.preheader:                          ; preds = %.preheader523
  br label %.preheader522

.preheader522:                                    ; preds = %.preheader522.preheader, %117
  %k24 = phi i2 [ %k_25, %117 ], [ 0, %.preheader522.preheader ]
  %exitcond188 = icmp eq i2 %k24, -2
  %empty_482 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_25 = add i2 %k24, 1
  br i1 %exitcond188, label %.preheader523.loopexit, label %117

; <label>:117                                     ; preds = %.preheader522
  %tmp_1103 = trunc i2 %k24 to i1
  %p_shl104 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1103, i5 0)
  %p_shl104_cast = zext i6 %p_shl104 to i7
  %p_shl105 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1103, i3 0)
  %p_shl105_cast = zext i4 %p_shl105 to i7
  %tmp_424 = sub i7 %p_shl104_cast, %p_shl105_cast
  %tmp_579_cast = sext i7 %tmp_424 to i11
  %tmp34 = add i11 -920, %tmp_579_cast
  %tmp_425 = add i11 %i87_cast1, %tmp34
  %tmp_426 = zext i11 %tmp_425 to i64
  %bias_addr_33 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_426
  %bias_load_33 = load float* %bias_addr_33, align 4
  %tmp_427 = add i7 %tmp_424, %i87_cast
  %tmp_583_cast = sext i7 %tmp_427 to i32
  %tmp_428 = zext i32 %tmp_583_cast to i64
  %bias_48_addr_16 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_428
  store float %bias_load_33, float* %bias_48_addr_16, align 4
  br label %.preheader522

; <label>:118                                     ; preds = %.preheader523
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit870

.loopexit870.loopexit:                            ; preds = %.preheader521
  br label %.loopexit870

.loopexit870:                                     ; preds = %.loopexit870.loopexit, %118
  %co102 = phi i6 [ 0, %118 ], [ %co_103, %.loopexit870.loopexit ]
  %exitcond187 = icmp eq i6 %co102, -16
  %empty_483 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_103 = add i6 %co102, 1
  br i1 %exitcond187, label %120, label %.preheader521.preheader

.preheader521.preheader:                          ; preds = %.loopexit870
  %tmp_1100 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co102, i3 0)
  %p_shl479_cast = zext i9 %tmp_1100 to i10
  %tmp_1101 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co102, i1 false)
  %p_shl480_cast = zext i7 %tmp_1101 to i10
  %tmp_1102 = add i10 %p_shl480_cast, %p_shl479_cast
  br label %.preheader521

.preheader521.loopexit:                           ; preds = %.preheader520
  br label %.preheader521

.preheader521:                                    ; preds = %.preheader521.loopexit, %.preheader521.preheader
  %h70 = phi i4 [ 0, %.preheader521.preheader ], [ %h_71, %.preheader521.loopexit ]
  %exitcond186 = icmp eq i4 %h70, -8
  %empty_484 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_71 = add i4 %h70, 1
  br i1 %exitcond186, label %.loopexit870.loopexit, label %.preheader520.preheader

.preheader520.preheader:                          ; preds = %.preheader521
  %tmp_434_cast = zext i4 %h_71 to i10
  %tmp_1119 = add i10 %tmp_434_cast, %tmp_1102
  %tmp_1120 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1119, i3 0)
  %p_shl481_cast = zext i13 %tmp_1120 to i15
  %tmp_1121 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1119, i1 false)
  %p_shl482_cast = zext i11 %tmp_1121 to i15
  %tmp_1122 = add i15 %p_shl481_cast, %p_shl482_cast
  br label %.preheader520

.preheader520:                                    ; preds = %119, %.preheader520.preheader
  %w69 = phi i4 [ %w_70, %119 ], [ 0, %.preheader520.preheader ]
  %exitcond185 = icmp eq i4 %w69, -8
  %empty_485 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_70 = add i4 %w69, 1
  br i1 %exitcond185, label %.preheader521.loopexit, label %119

; <label>:119                                     ; preds = %.preheader520
  %tmp_437_cast = zext i4 %w_70 to i15
  %tmp_1132 = add i15 %tmp_1122, %tmp_437_cast
  %tmp_1501_cast = zext i15 %tmp_1132 to i64
  %shuffleunit1_2_outpu_2 = getelementptr [9600 x float]* @shuffleunit1_2_outpu, i64 0, i64 %tmp_1501_cast
  %buffer0_1_48_8x8_p_a_7 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1501_cast
  %shuffleunit1_2_outpu_3 = load float* %shuffleunit1_2_outpu_2, align 4
  store float %shuffleunit1_2_outpu_3, float* %buffer0_1_48_8x8_p_a_7, align 4
  br label %.preheader520

; <label>:120                                     ; preds = %.loopexit870
  call fastcc void @shuffle_48_p([4800 x float]* @buffer0_1_48_8x8_p, [9600 x float]* @shuffleunit1_3_outpu) nounwind
  br label %.loopexit869

.loopexit869.loopexit:                            ; preds = %.preheader519
  br label %.loopexit869

.loopexit869:                                     ; preds = %.loopexit869.loopexit, %120
  %co104 = phi i6 [ 0, %120 ], [ %co_105, %.loopexit869.loopexit ]
  %co104_cast = zext i6 %co104 to i7
  %exitcond184 = icmp eq i6 %co104, -16
  %empty_486 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_105 = add i6 %co104, 1
  br i1 %exitcond184, label %.preheader517.preheader, label %.preheader519.preheader

.preheader517.preheader:                          ; preds = %.loopexit869
  br label %.preheader517

.preheader519.preheader:                          ; preds = %.loopexit869
  %tmp_433 = add i7 %co104_cast, 48
  %tmp_1113 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_433, i3 0)
  %p_shl485_cast = zext i10 %tmp_1113 to i11
  %tmp_1114 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp_433, i1 false)
  %p_shl486_cast = zext i8 %tmp_1114 to i11
  %tmp_1115 = add i11 %p_shl486_cast, %p_shl485_cast
  %tmp_1116 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co104, i3 0)
  %p_shl483_cast = zext i9 %tmp_1116 to i10
  %tmp_1117 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co104, i1 false)
  %p_shl484_cast = zext i7 %tmp_1117 to i10
  %tmp_1118 = add i10 %p_shl484_cast, %p_shl483_cast
  br label %.preheader519

.preheader519.loopexit:                           ; preds = %.preheader518
  br label %.preheader519

.preheader519:                                    ; preds = %.preheader519.loopexit, %.preheader519.preheader
  %h72 = phi i4 [ 0, %.preheader519.preheader ], [ %h_73, %.preheader519.loopexit ]
  %exitcond183 = icmp eq i4 %h72, -8
  %empty_487 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_73 = add i4 %h72, 1
  br i1 %exitcond183, label %.loopexit869.loopexit, label %.preheader518.preheader

.preheader518.preheader:                          ; preds = %.preheader519
  %tmp_436_cast1 = zext i4 %h_73 to i11
  %tmp_436_cast = zext i4 %h_73 to i10
  %tmp_1124 = add i10 %tmp_436_cast, %tmp_1118
  %tmp_1125 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1124, i3 0)
  %p_shl489_cast = zext i13 %tmp_1125 to i14
  %tmp_1126 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1124, i1 false)
  %p_shl490_cast = zext i11 %tmp_1126 to i14
  %tmp_1127 = add i14 %p_shl489_cast, %p_shl490_cast
  %tmp_1128 = add i11 %tmp_436_cast1, %tmp_1115
  %tmp_1129 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1128, i3 0)
  %p_shl487_cast = zext i14 %tmp_1129 to i15
  %tmp_1130 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_1128, i1 false)
  %p_shl488_cast = zext i12 %tmp_1130 to i15
  %tmp_1131 = add i15 %p_shl487_cast, %p_shl488_cast
  br label %.preheader518

.preheader518:                                    ; preds = %121, %.preheader518.preheader
  %w71 = phi i4 [ %w_72, %121 ], [ 0, %.preheader518.preheader ]
  %exitcond182 = icmp eq i4 %w71, -8
  %empty_488 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_72 = add i4 %w71, 1
  br i1 %exitcond182, label %.preheader519.loopexit, label %121

; <label>:121                                     ; preds = %.preheader518
  %tmp_441_cast1 = zext i4 %w_72 to i15
  %tmp_441_cast = zext i4 %w_72 to i14
  %tmp_1133 = add i14 %tmp_1127, %tmp_441_cast
  %tmp_1502_cast = zext i14 %tmp_1133 to i64
  %buffer0_1_48_8x8_p_a_8 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1502_cast
  %tmp_1134 = add i15 %tmp_1131, %tmp_441_cast1
  %tmp_1503_cast = zext i15 %tmp_1134 to i64
  %shuffleunit1_3_outpu = getelementptr [9600 x float]* @shuffleunit1_3_outpu, i64 0, i64 %tmp_1503_cast
  %shuffleunit1_3_outpu_1 = load float* %shuffleunit1_3_outpu, align 4
  store float %shuffleunit1_3_outpu_1, float* %buffer0_1_48_8x8_p_a_8, align 4
  br label %.preheader518

.preheader517.loopexit:                           ; preds = %.preheader516
  br label %.preheader517

.preheader517:                                    ; preds = %.preheader517.preheader, %.preheader517.loopexit
  %co106 = phi i5 [ %co_107, %.preheader517.loopexit ], [ 0, %.preheader517.preheader ]
  %co106_cast = zext i5 %co106 to i11
  %exitcond181 = icmp eq i5 %co106, -8
  %empty_489 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_107 = add i5 %co106, 1
  br i1 %exitcond181, label %.preheader514.preheader, label %.preheader516.preheader

.preheader514.preheader:                          ; preds = %.preheader517
  br label %.preheader514

.preheader516.preheader:                          ; preds = %.preheader517
  %tmp_1123 = trunc i5 %co106 to i1
  %p_shl112 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1123, i5 0)
  %p_shl112_cast = zext i6 %p_shl112 to i7
  %p_shl113 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1123, i3 0)
  %p_shl113_cast = zext i4 %p_shl113 to i7
  %tmp_435 = sub i7 %p_shl112_cast, %p_shl113_cast
  %p_lshr_f11_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co106, i32 1, i32 4)
  %tmp_607_cast = zext i4 %p_lshr_f11_cast to i7
  br label %.preheader516

.preheader516.loopexit:                           ; preds = %.preheader515
  br label %.preheader516

.preheader516:                                    ; preds = %.preheader516.loopexit, %.preheader516.preheader
  %ci48 = phi i5 [ 0, %.preheader516.preheader ], [ %ci_49, %.preheader516.loopexit ]
  %ci48_cast = zext i5 %ci48 to i7
  %exitcond180 = icmp eq i5 %ci48, -8
  %empty_490 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_49 = add i5 %ci48, 1
  br i1 %exitcond180, label %.preheader517.loopexit, label %.preheader515.preheader

.preheader515.preheader:                          ; preds = %.preheader516
  %tmp_438_cast = zext i5 %ci48 to i18
  %tmp_439 = add i7 %tmp_435, %ci48_cast
  %tmp_440_cast = sext i7 %tmp_439 to i13
  br label %.preheader515

.preheader515:                                    ; preds = %122, %.preheader515.preheader
  %i94 = phi i3 [ %i_95, %122 ], [ 0, %.preheader515.preheader ]
  %exitcond179 = icmp eq i3 %i94, -4
  %empty_491 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_95 = add i3 %i94, 1
  br i1 %exitcond179, label %.preheader516.loopexit, label %122

; <label>:122                                     ; preds = %.preheader515
  %tmp_1136 = trunc i3 %i94 to i2
  %p_shl116 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1136, i5 0)
  %p_shl116_cast = zext i7 %p_shl116 to i8
  %p_shl117 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1136, i3 0)
  %p_shl117_cast = zext i5 %p_shl117 to i8
  %tmp_447 = sub i8 %p_shl116_cast, %p_shl117_cast
  %tmp_622_cast = sext i8 %tmp_447 to i11
  %tmp35 = add i11 -776, %tmp_622_cast
  %tmp_448 = add i11 %tmp35, %co106_cast
  %tmp_1137 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_448, i5 0)
  %p_shl493_cast = zext i16 %tmp_1137 to i17
  %tmp_1138 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_448, i3 0)
  %p_shl494_cast = zext i14 %tmp_1138 to i17
  %tmp_1139 = sub i17 %p_shl493_cast, %p_shl494_cast
  %tmp_1510_cast = sext i17 %tmp_1139 to i18
  %tmp_1140 = add i18 %tmp_438_cast, %tmp_1510_cast
  %tmp_1511_cast = sext i18 %tmp_1140 to i64
  %shuffle_conv_1x1_add_20 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1511_cast
  %shuffle_conv_1x1_loa_20 = load float* %shuffle_conv_1x1_add_20, align 4
  %p_shl118 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1136, i4 0)
  %p_shl118_cast = zext i6 %p_shl118 to i7
  %p_shl119 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1136, i2 0)
  %p_shl119_cast = zext i4 %p_shl119 to i7
  %tmp_449 = sub i7 %p_shl118_cast, %p_shl119_cast
  %tmp_450 = add i7 %tmp_449, %tmp_607_cast
  %tmp_1141 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_450, i6 0)
  %tmp_1142 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_450, i4 0)
  %p_shl492_cast = sext i11 %tmp_1142 to i13
  %tmp_1143 = sub i13 %tmp_1141, %p_shl492_cast
  %tmp_1144 = add i13 %tmp_440_cast, %tmp_1143
  %tmp_1519_cast = sext i13 %tmp_1144 to i64
  %weights_48_48_1x1_ad_11 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1519_cast
  store float %shuffle_conv_1x1_loa_20, float* %weights_48_48_1x1_ad_11, align 4
  br label %.preheader515

.preheader514.loopexit:                           ; preds = %.preheader513
  br label %.preheader514

.preheader514:                                    ; preds = %.preheader514.preheader, %.preheader514.loopexit
  %i92 = phi i5 [ %i_93, %.preheader514.loopexit ], [ 0, %.preheader514.preheader ]
  %i93_cast = zext i5 %i92 to i7
  %i93_cast1 = zext i5 %i92 to i11
  %exitcond178 = icmp eq i5 %i92, -8
  %empty_492 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_93 = add i5 %i92, 1
  br i1 %exitcond178, label %124, label %.preheader513.preheader

.preheader513.preheader:                          ; preds = %.preheader514
  br label %.preheader513

.preheader513:                                    ; preds = %.preheader513.preheader, %123
  %k26 = phi i2 [ %k_27, %123 ], [ 0, %.preheader513.preheader ]
  %exitcond177 = icmp eq i2 %k26, -2
  %empty_493 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_27 = add i2 %k26, 1
  br i1 %exitcond177, label %.preheader514.loopexit, label %123

; <label>:123                                     ; preds = %.preheader513
  %tmp_1135 = trunc i2 %k26 to i1
  %p_shl114 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1135, i5 0)
  %p_shl114_cast = zext i6 %p_shl114 to i7
  %p_shl115 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1135, i3 0)
  %p_shl115_cast = zext i4 %p_shl115 to i7
  %tmp_442 = sub i7 %p_shl114_cast, %p_shl115_cast
  %tmp_611_cast = sext i7 %tmp_442 to i11
  %tmp36 = add i11 -872, %tmp_611_cast
  %tmp_443 = add i11 %i93_cast1, %tmp36
  %tmp_444 = zext i11 %tmp_443 to i64
  %bias_addr_34 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_444
  %bias_load_34 = load float* %bias_addr_34, align 4
  %tmp_445 = add i7 %tmp_442, %i93_cast
  %tmp_615_cast = sext i7 %tmp_445 to i32
  %tmp_446 = zext i32 %tmp_615_cast to i64
  %bias_48_addr_17 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_446
  store float %bias_load_34, float* %bias_48_addr_17, align 4
  br label %.preheader513

; <label>:124                                     ; preds = %.preheader514
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit868

.loopexit868.loopexit:                            ; preds = %.preheader512
  br label %.loopexit868

.loopexit868:                                     ; preds = %.loopexit868.loopexit, %124
  %co108 = phi i5 [ 0, %124 ], [ %co_109, %.loopexit868.loopexit ]
  %co109_cast = zext i5 %co108 to i7
  %co109_cast401_cast = zext i5 %co108 to i8
  %exitcond176 = icmp eq i5 %co108, -8
  %empty_494 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_109 = add i5 %co108, 1
  br i1 %exitcond176, label %.preheader509.preheader, label %.preheader512.preheader

.preheader512.preheader:                          ; preds = %.loopexit868
  br label %.preheader512

.preheader509.preheader:                          ; preds = %.loopexit868
  br label %.preheader509

.preheader512.loopexit:                           ; preds = %.preheader511
  br label %.preheader512

.preheader512:                                    ; preds = %.preheader512.preheader, %.preheader512.loopexit
  %w73 = phi i2 [ %w_74, %.preheader512.loopexit ], [ 0, %.preheader512.preheader ]
  %exitcond175 = icmp eq i2 %w73, -1
  %empty_495 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_74 = add i2 %w73, 1
  br i1 %exitcond175, label %.loopexit868.loopexit, label %.preheader511.preheader

.preheader511.preheader:                          ; preds = %.preheader512
  %tmp_451_cast1 = zext i2 %w73 to i36
  %tmp_451_cast2 = zext i2 %w73 to i12
  br label %.preheader511

.preheader511.loopexit:                           ; preds = %.preheader510
  br label %.preheader511

.preheader511:                                    ; preds = %.preheader511.loopexit, %.preheader511.preheader
  %h74 = phi i2 [ 0, %.preheader511.preheader ], [ %h_75, %.preheader511.loopexit ]
  %exitcond174 = icmp eq i2 %h74, -1
  %empty_496 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_75 = add i2 %h74, 1
  br i1 %exitcond174, label %.preheader512.loopexit, label %.preheader510.preheader

.preheader510.preheader:                          ; preds = %.preheader511
  %tmp_458_cast1 = zext i2 %h74 to i10
  %tmp_458_cast = zext i2 %h74 to i15
  br label %.preheader510

.preheader510:                                    ; preds = %125, %.preheader510.preheader
  %i100 = phi i2 [ %i_101, %125 ], [ 0, %.preheader510.preheader ]
  %exitcond173 = icmp eq i2 %i100, -2
  %empty_497 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_101 = add i2 %i100, 1
  br i1 %exitcond173, label %.preheader511.loopexit, label %125

; <label>:125                                     ; preds = %.preheader510
  %tmp_1147 = trunc i2 %i100 to i1
  %p_shl126 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1147, i5 0)
  %p_shl126_cast = zext i6 %p_shl126 to i7
  %p_shl127 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1147, i3 0)
  %p_shl127_cast = zext i4 %p_shl127 to i7
  %tmp_464 = sub i7 %p_shl126_cast, %p_shl127_cast
  %tmp_648_cast_cast = sext i7 %tmp_464 to i8
  %tmp37 = add i8 -104, %tmp_648_cast_cast
  %tmp_467 = add i8 %tmp37, %co109_cast401_cast
  %tmp_650_cast = sext i8 %tmp_467 to i9
  %tmp_468_cast1 = zext i9 %tmp_650_cast to i12
  %tmp_1148 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_467, i2 0)
  %tmp_1149 = sext i10 %tmp_1148 to i11
  %p_shl498_cast = zext i11 %tmp_1149 to i12
  %tmp_1150 = sub i12 %p_shl498_cast, %tmp_468_cast1
  %tmp_1151 = add i12 %tmp_451_cast2, %tmp_1150
  %tmp_1529_cast = sext i12 %tmp_1151 to i15
  %tmp_1152 = call i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12 %tmp_1151, i2 0)
  %p_shl497_cast = sext i14 %tmp_1152 to i15
  %tmp_1153 = sub i15 %p_shl497_cast, %tmp_1529_cast
  %tmp_1154 = add i15 %tmp_458_cast, %tmp_1153
  %tmp_1532_cast = zext i15 %tmp_1154 to i64
  %shuffle_conv_3x3_add_11 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1532_cast
  %shuffle_conv_3x3_loa_11 = load float* %shuffle_conv_3x3_add_11, align 4
  %tmp_469 = add i7 %co109_cast, %tmp_464
  %tmp_652_cast = sext i7 %tmp_469 to i32
  %tmp_470_cast = zext i32 %tmp_652_cast to i35
  %tmp_1155 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_469, i2 0)
  %tmp_1156 = sext i9 %tmp_1155 to i34
  %p_shl496_cast = zext i34 %tmp_1156 to i35
  %tmp_1157 = sub i35 %p_shl496_cast, %tmp_470_cast
  %tmp_1535_cast = sext i35 %tmp_1157 to i36
  %tmp_1158 = add i36 %tmp_451_cast1, %tmp_1535_cast
  %tmp_1159 = trunc i36 %tmp_1158 to i10
  %tmp_1160 = trunc i36 %tmp_1158 to i8
  %p_shl495_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1160, i2 0)
  %tmp_1161 = sub i10 %p_shl495_cast, %tmp_1159
  %tmp_1162 = add i10 %tmp_458_cast1, %tmp_1161
  %tmp_1539_cast = zext i10 %tmp_1162 to i64
  %weights_48_1_3x3_add_6 = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1539_cast
  store float %shuffle_conv_3x3_loa_11, float* %weights_48_1_3x3_add_6, align 4
  br label %.preheader510

.preheader509.loopexit:                           ; preds = %.preheader508
  br label %.preheader509

.preheader509:                                    ; preds = %.preheader509.preheader, %.preheader509.loopexit
  %i96 = phi i5 [ %i_97, %.preheader509.loopexit ], [ 0, %.preheader509.preheader ]
  %i97_cast = zext i5 %i96 to i7
  %i97_cast1 = zext i5 %i96 to i11
  %exitcond172 = icmp eq i5 %i96, -8
  %empty_498 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_97 = add i5 %i96, 1
  br i1 %exitcond172, label %127, label %.preheader508.preheader

.preheader508.preheader:                          ; preds = %.preheader509
  br label %.preheader508

.preheader508:                                    ; preds = %.preheader508.preheader, %126
  %k28 = phi i2 [ %k_29, %126 ], [ 0, %.preheader508.preheader ]
  %exitcond171 = icmp eq i2 %k28, -2
  %empty_499 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_29 = add i2 %k28, 1
  br i1 %exitcond171, label %.preheader509.loopexit, label %126

; <label>:126                                     ; preds = %.preheader508
  %tmp_1146 = trunc i2 %k28 to i1
  %p_shl120 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1146, i5 0)
  %p_shl120_cast = zext i6 %p_shl120 to i7
  %p_shl121 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1146, i3 0)
  %p_shl121_cast = zext i4 %p_shl121 to i7
  %tmp_453 = sub i7 %p_shl120_cast, %p_shl121_cast
  %tmp_629_cast = sext i7 %tmp_453 to i11
  %tmp38 = add i11 -824, %tmp_629_cast
  %tmp_454 = add i11 %i97_cast1, %tmp38
  %tmp_455 = zext i11 %tmp_454 to i64
  %bias_addr_35 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_455
  %bias_load_35 = load float* %bias_addr_35, align 4
  %tmp_456 = add i7 %tmp_453, %i97_cast
  %tmp_633_cast = sext i7 %tmp_456 to i32
  %tmp_457 = zext i32 %tmp_633_cast to i64
  %bias_48_addr_18 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_457
  store float %bias_load_35, float* %bias_48_addr_18, align 4
  br label %.preheader508

; <label>:127                                     ; preds = %.preheader509
  call fastcc void @subconv_3x3_8_no_rel([4800 x float]* @buffer1_1_48_8x8_p, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [4800 x float]* @buffer0_1_48_8x8_p) nounwind
  br label %.loopexit867

.loopexit867.loopexit:                            ; preds = %.preheader507
  br label %.loopexit867

.loopexit867:                                     ; preds = %.loopexit867.loopexit, %127
  %co110 = phi i5 [ 0, %127 ], [ %co_111, %.loopexit867.loopexit ]
  %co111_cast = zext i5 %co110 to i11
  %exitcond170 = icmp eq i5 %co110, -8
  %empty_500 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_111 = add i5 %co110, 1
  br i1 %exitcond170, label %.preheader505.preheader, label %.preheader507.preheader

.preheader505.preheader:                          ; preds = %.loopexit867
  br label %.preheader505

.preheader507.preheader:                          ; preds = %.loopexit867
  %tmp_1145 = trunc i5 %co110 to i1
  %p_shl122 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1145, i5 0)
  %p_shl122_cast = zext i6 %p_shl122 to i7
  %p_shl123 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1145, i3 0)
  %p_shl123_cast = zext i4 %p_shl123 to i7
  %tmp_452 = sub i7 %p_shl122_cast, %p_shl123_cast
  %p_lshr_f12_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co110, i32 1, i32 4)
  %tmp_637_cast = zext i4 %p_lshr_f12_cast to i7
  br label %.preheader507

.preheader507.loopexit:                           ; preds = %.preheader506
  br label %.preheader507

.preheader507:                                    ; preds = %.preheader507.loopexit, %.preheader507.preheader
  %ci50 = phi i5 [ 0, %.preheader507.preheader ], [ %ci_51, %.preheader507.loopexit ]
  %ci50_cast = zext i5 %ci50 to i7
  %exitcond169 = icmp eq i5 %ci50, -8
  %empty_501 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_51 = add i5 %ci50, 1
  br i1 %exitcond169, label %.loopexit867.loopexit, label %.preheader506.preheader

.preheader506.preheader:                          ; preds = %.preheader507
  %tmp_459_cast = zext i5 %ci50 to i18
  %tmp_461 = add i7 %tmp_452, %ci50_cast
  %tmp_462_cast = sext i7 %tmp_461 to i13
  br label %.preheader506

.preheader506:                                    ; preds = %128, %.preheader506.preheader
  %i102 = phi i3 [ %i_103, %128 ], [ 0, %.preheader506.preheader ]
  %exitcond168 = icmp eq i3 %i102, -4
  %empty_502 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_103 = add i3 %i102, 1
  br i1 %exitcond168, label %.preheader507.loopexit, label %128

; <label>:128                                     ; preds = %.preheader506
  %tmp_1167 = trunc i3 %i102 to i2
  %p_shl128 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1167, i5 0)
  %p_shl128_cast = zext i7 %p_shl128 to i8
  %p_shl129 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1167, i3 0)
  %p_shl129_cast = zext i5 %p_shl129 to i8
  %tmp_476 = sub i8 %p_shl128_cast, %p_shl129_cast
  %tmp_655_cast = sext i8 %tmp_476 to i11
  %tmp39 = add i11 -680, %tmp_655_cast
  %tmp_477 = add i11 %tmp39, %co111_cast
  %tmp_1168 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_477, i5 0)
  %p_shl501_cast = zext i16 %tmp_1168 to i17
  %tmp_1169 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_477, i3 0)
  %p_shl502_cast = zext i14 %tmp_1169 to i17
  %tmp_1170 = sub i17 %p_shl501_cast, %p_shl502_cast
  %tmp_1549_cast = sext i17 %tmp_1170 to i18
  %tmp_1171 = add i18 %tmp_459_cast, %tmp_1549_cast
  %tmp_1550_cast = sext i18 %tmp_1171 to i64
  %shuffle_conv_1x1_add_21 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1550_cast
  %shuffle_conv_1x1_loa_21 = load float* %shuffle_conv_1x1_add_21, align 4
  %p_shl130 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1167, i4 0)
  %p_shl130_cast = zext i6 %p_shl130 to i7
  %p_shl131 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1167, i2 0)
  %p_shl131_cast = zext i4 %p_shl131 to i7
  %tmp_478 = sub i7 %p_shl130_cast, %p_shl131_cast
  %tmp_479 = add i7 %tmp_478, %tmp_637_cast
  %tmp_1172 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_479, i6 0)
  %tmp_1173 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_479, i4 0)
  %p_shl500_cast = sext i11 %tmp_1173 to i13
  %tmp_1174 = sub i13 %tmp_1172, %p_shl500_cast
  %tmp_1175 = add i13 %tmp_462_cast, %tmp_1174
  %tmp_1558_cast = sext i13 %tmp_1175 to i64
  %weights_48_48_1x1_ad_12 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1558_cast
  store float %shuffle_conv_1x1_loa_21, float* %weights_48_48_1x1_ad_12, align 4
  br label %.preheader506

.preheader505.loopexit:                           ; preds = %.preheader504
  br label %.preheader505

.preheader505:                                    ; preds = %.preheader505.preheader, %.preheader505.loopexit
  %i98 = phi i5 [ %i_99, %.preheader505.loopexit ], [ 0, %.preheader505.preheader ]
  %i99_cast = zext i5 %i98 to i7
  %i99_cast1 = zext i5 %i98 to i11
  %exitcond167 = icmp eq i5 %i98, -8
  %empty_503 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_99 = add i5 %i98, 1
  br i1 %exitcond167, label %130, label %.preheader504.preheader

.preheader504.preheader:                          ; preds = %.preheader505
  br label %.preheader504

.preheader504:                                    ; preds = %.preheader504.preheader, %129
  %k30 = phi i2 [ %k_31, %129 ], [ 0, %.preheader504.preheader ]
  %exitcond166 = icmp eq i2 %k30, -2
  %empty_504 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_31 = add i2 %k30, 1
  br i1 %exitcond166, label %.preheader505.loopexit, label %129

; <label>:129                                     ; preds = %.preheader504
  %tmp_1166 = trunc i2 %k30 to i1
  %p_shl124 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1166, i5 0)
  %p_shl124_cast = zext i6 %p_shl124 to i7
  %p_shl125 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1166, i3 0)
  %p_shl125_cast = zext i4 %p_shl125 to i7
  %tmp_471 = sub i7 %p_shl124_cast, %p_shl125_cast
  %tmp_639_cast = sext i7 %tmp_471 to i11
  %tmp40 = add i11 -776, %tmp_639_cast
  %tmp_472 = add i11 %i99_cast1, %tmp40
  %tmp_473 = zext i11 %tmp_472 to i64
  %bias_addr_36 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_473
  %bias_load_36 = load float* %bias_addr_36, align 4
  %tmp_474 = add i7 %tmp_471, %i99_cast
  %tmp_643_cast = sext i7 %tmp_474 to i32
  %tmp_475 = zext i32 %tmp_643_cast to i64
  %bias_48_addr_19 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_475
  store float %bias_load_36, float* %bias_48_addr_19, align 4
  br label %.preheader504

; <label>:130                                     ; preds = %.preheader505
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit866

.loopexit866.loopexit:                            ; preds = %.preheader503
  br label %.loopexit866

.loopexit866:                                     ; preds = %.loopexit866.loopexit, %130
  %co112 = phi i6 [ 0, %130 ], [ %co_113, %.loopexit866.loopexit ]
  %exitcond165 = icmp eq i6 %co112, -16
  %empty_505 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_113 = add i6 %co112, 1
  br i1 %exitcond165, label %132, label %.preheader503.preheader

.preheader503.preheader:                          ; preds = %.loopexit866
  %tmp_1163 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co112, i3 0)
  %p_shl503_cast = zext i9 %tmp_1163 to i10
  %tmp_1164 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co112, i1 false)
  %p_shl504_cast = zext i7 %tmp_1164 to i10
  %tmp_1165 = add i10 %p_shl504_cast, %p_shl503_cast
  br label %.preheader503

.preheader503.loopexit:                           ; preds = %.preheader502
  br label %.preheader503

.preheader503:                                    ; preds = %.preheader503.loopexit, %.preheader503.preheader
  %h76 = phi i4 [ 0, %.preheader503.preheader ], [ %h_77, %.preheader503.loopexit ]
  %exitcond164 = icmp eq i4 %h76, -8
  %empty_506 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_77 = add i4 %h76, 1
  br i1 %exitcond164, label %.loopexit866.loopexit, label %.preheader502.preheader

.preheader502.preheader:                          ; preds = %.preheader503
  %tmp_481_cast = zext i4 %h_77 to i10
  %tmp_1182 = add i10 %tmp_481_cast, %tmp_1165
  %tmp_1183 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1182, i3 0)
  %p_shl505_cast = zext i13 %tmp_1183 to i15
  %tmp_1184 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1182, i1 false)
  %p_shl506_cast = zext i11 %tmp_1184 to i15
  %tmp_1185 = add i15 %p_shl505_cast, %p_shl506_cast
  br label %.preheader502

.preheader502:                                    ; preds = %131, %.preheader502.preheader
  %w75 = phi i4 [ %w_76, %131 ], [ 0, %.preheader502.preheader ]
  %exitcond163 = icmp eq i4 %w75, -8
  %empty_507 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_76 = add i4 %w75, 1
  br i1 %exitcond163, label %.preheader503.loopexit, label %131

; <label>:131                                     ; preds = %.preheader502
  %tmp_486_cast = zext i4 %w_76 to i15
  %tmp_1195 = add i15 %tmp_1185, %tmp_486_cast
  %tmp_1579_cast = zext i15 %tmp_1195 to i64
  %buffer0_1_48_8x8_p_a_9 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1579_cast
  %shuffleunit1_3_outpu_2 = getelementptr [9600 x float]* @shuffleunit1_3_outpu, i64 0, i64 %tmp_1579_cast
  %shuffleunit1_3_outpu_3 = load float* %shuffleunit1_3_outpu_2, align 4
  store float %shuffleunit1_3_outpu_3, float* %buffer0_1_48_8x8_p_a_9, align 4
  br label %.preheader502

; <label>:132                                     ; preds = %.loopexit866
  call fastcc void @shuffle_48_p([4800 x float]* @buffer0_1_48_8x8_p, [9600 x float]* @shuffleunit1_4_outpu) nounwind
  br label %.loopexit865

.loopexit865.loopexit:                            ; preds = %.preheader501
  br label %.loopexit865

.loopexit865:                                     ; preds = %.loopexit865.loopexit, %132
  %co114 = phi i6 [ 0, %132 ], [ %co_115, %.loopexit865.loopexit ]
  %co114_cast = zext i6 %co114 to i7
  %exitcond162 = icmp eq i6 %co114, -16
  %empty_508 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_115 = add i6 %co114, 1
  br i1 %exitcond162, label %.preheader499.preheader, label %.preheader501.preheader

.preheader499.preheader:                          ; preds = %.loopexit865
  br label %.preheader499

.preheader501.preheader:                          ; preds = %.loopexit865
  %tmp_480 = add i7 %co114_cast, 48
  %tmp_1176 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_480, i3 0)
  %p_shl509_cast = zext i10 %tmp_1176 to i11
  %tmp_1177 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp_480, i1 false)
  %p_shl510_cast = zext i8 %tmp_1177 to i11
  %tmp_1178 = add i11 %p_shl510_cast, %p_shl509_cast
  %tmp_1179 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co114, i3 0)
  %p_shl507_cast = zext i9 %tmp_1179 to i10
  %tmp_1180 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co114, i1 false)
  %p_shl508_cast = zext i7 %tmp_1180 to i10
  %tmp_1181 = add i10 %p_shl508_cast, %p_shl507_cast
  br label %.preheader501

.preheader501.loopexit:                           ; preds = %.preheader500
  br label %.preheader501

.preheader501:                                    ; preds = %.preheader501.loopexit, %.preheader501.preheader
  %h78 = phi i4 [ 0, %.preheader501.preheader ], [ %h_79, %.preheader501.loopexit ]
  %exitcond161 = icmp eq i4 %h78, -8
  %empty_509 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_79 = add i4 %h78, 1
  br i1 %exitcond161, label %.loopexit865.loopexit, label %.preheader500.preheader

.preheader500.preheader:                          ; preds = %.preheader501
  %tmp_484_cast1 = zext i4 %h_79 to i10
  %tmp_484_cast = zext i4 %h_79 to i11
  %tmp_1187 = add i11 %tmp_484_cast, %tmp_1178
  %tmp_1188 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1187, i3 0)
  %p_shl513_cast = zext i14 %tmp_1188 to i15
  %tmp_1189 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_1187, i1 false)
  %p_shl514_cast = zext i12 %tmp_1189 to i15
  %tmp_1190 = add i15 %p_shl513_cast, %p_shl514_cast
  %tmp_1191 = add i10 %tmp_484_cast1, %tmp_1181
  %tmp_1192 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1191, i3 0)
  %p_shl511_cast = zext i13 %tmp_1192 to i14
  %tmp_1193 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1191, i1 false)
  %p_shl512_cast = zext i11 %tmp_1193 to i14
  %tmp_1194 = add i14 %p_shl511_cast, %p_shl512_cast
  br label %.preheader500

.preheader500:                                    ; preds = %133, %.preheader500.preheader
  %w77 = phi i4 [ %w_78, %133 ], [ 0, %.preheader500.preheader ]
  %exitcond160 = icmp eq i4 %w77, -8
  %empty_510 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_78 = add i4 %w77, 1
  br i1 %exitcond160, label %.preheader501.loopexit, label %133

; <label>:133                                     ; preds = %.preheader500
  %tmp_490_cast1 = zext i4 %w_78 to i14
  %tmp_490_cast = zext i4 %w_78 to i15
  %tmp_1196 = add i15 %tmp_1190, %tmp_490_cast
  %tmp_1580_cast = zext i15 %tmp_1196 to i64
  %shuffleunit1_4_outpu = getelementptr [9600 x float]* @shuffleunit1_4_outpu, i64 0, i64 %tmp_1580_cast
  %tmp_1197 = add i14 %tmp_1194, %tmp_490_cast1
  %tmp_1581_cast = zext i14 %tmp_1197 to i64
  %buffer0_1_48_8x8_p_a_10 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1581_cast
  %shuffleunit1_4_outpu_1 = load float* %shuffleunit1_4_outpu, align 4
  store float %shuffleunit1_4_outpu_1, float* %buffer0_1_48_8x8_p_a_10, align 4
  br label %.preheader500

.preheader499.loopexit:                           ; preds = %.preheader498
  br label %.preheader499

.preheader499:                                    ; preds = %.preheader499.preheader, %.preheader499.loopexit
  %co116 = phi i5 [ %co_117, %.preheader499.loopexit ], [ 0, %.preheader499.preheader ]
  %co116_cast = zext i5 %co116 to i11
  %exitcond159 = icmp eq i5 %co116, -8
  %empty_511 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_117 = add i5 %co116, 1
  br i1 %exitcond159, label %.preheader496.preheader, label %.preheader498.preheader

.preheader496.preheader:                          ; preds = %.preheader499
  br label %.preheader496

.preheader498.preheader:                          ; preds = %.preheader499
  %tmp_1186 = trunc i5 %co116 to i1
  %p_shl132 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1186, i5 0)
  %p_shl132_cast = zext i6 %p_shl132 to i7
  %p_shl133 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1186, i3 0)
  %p_shl133_cast = zext i4 %p_shl133 to i7
  %tmp_483 = sub i7 %p_shl132_cast, %p_shl133_cast
  %p_lshr_f13_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co116, i32 1, i32 4)
  %tmp_667_cast = zext i4 %p_lshr_f13_cast to i7
  br label %.preheader498

.preheader498.loopexit:                           ; preds = %.preheader497
  br label %.preheader498

.preheader498:                                    ; preds = %.preheader498.loopexit, %.preheader498.preheader
  %ci52 = phi i5 [ 0, %.preheader498.preheader ], [ %ci_53, %.preheader498.loopexit ]
  %ci52_cast = zext i5 %ci52 to i7
  %exitcond158 = icmp eq i5 %ci52, -8
  %empty_512 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_53 = add i5 %ci52, 1
  br i1 %exitcond158, label %.preheader499.loopexit, label %.preheader497.preheader

.preheader497.preheader:                          ; preds = %.preheader498
  %tmp_487_cast1 = zext i5 %ci52 to i18
  %tmp_488 = add i7 %tmp_483, %ci52_cast
  %tmp_489_cast = sext i7 %tmp_488 to i13
  br label %.preheader497

.preheader497:                                    ; preds = %134, %.preheader497.preheader
  %i106 = phi i3 [ %i_107, %134 ], [ 0, %.preheader497.preheader ]
  %exitcond157 = icmp eq i3 %i106, -4
  %empty_513 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_107 = add i3 %i106, 1
  br i1 %exitcond157, label %.preheader498.loopexit, label %134

; <label>:134                                     ; preds = %.preheader497
  %tmp_1199 = trunc i3 %i106 to i2
  %p_shl136 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1199, i5 0)
  %p_shl136_cast = zext i7 %p_shl136 to i8
  %p_shl137 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1199, i3 0)
  %p_shl137_cast = zext i5 %p_shl137 to i8
  %tmp_496 = sub i8 %p_shl136_cast, %p_shl137_cast
  %tmp_682_cast = sext i8 %tmp_496 to i11
  %tmp41 = add i11 -584, %tmp_682_cast
  %tmp_497 = add i11 %tmp41, %co116_cast
  %tmp_1200 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_497, i5 0)
  %p_shl517_cast = zext i16 %tmp_1200 to i17
  %tmp_1201 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_497, i3 0)
  %p_shl518_cast = zext i14 %tmp_1201 to i17
  %tmp_1202 = sub i17 %p_shl517_cast, %p_shl518_cast
  %tmp_1588_cast = sext i17 %tmp_1202 to i18
  %tmp_1203 = add i18 %tmp_487_cast1, %tmp_1588_cast
  %tmp_1589_cast = sext i18 %tmp_1203 to i64
  %shuffle_conv_1x1_add_22 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1589_cast
  %shuffle_conv_1x1_loa_22 = load float* %shuffle_conv_1x1_add_22, align 4
  %p_shl138 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1199, i4 0)
  %p_shl138_cast = zext i6 %p_shl138 to i7
  %p_shl139 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1199, i2 0)
  %p_shl139_cast = zext i4 %p_shl139 to i7
  %tmp_498 = sub i7 %p_shl138_cast, %p_shl139_cast
  %tmp_499 = add i7 %tmp_498, %tmp_667_cast
  %tmp_1204 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_499, i6 0)
  %tmp_1205 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_499, i4 0)
  %p_shl516_cast = sext i11 %tmp_1205 to i13
  %tmp_1206 = sub i13 %tmp_1204, %p_shl516_cast
  %tmp_1207 = add i13 %tmp_489_cast, %tmp_1206
  %tmp_1597_cast = sext i13 %tmp_1207 to i64
  %weights_48_48_1x1_ad_13 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1597_cast
  store float %shuffle_conv_1x1_loa_22, float* %weights_48_48_1x1_ad_13, align 4
  br label %.preheader497

.preheader496.loopexit:                           ; preds = %.preheader495
  br label %.preheader496

.preheader496:                                    ; preds = %.preheader496.preheader, %.preheader496.loopexit
  %i104 = phi i5 [ %i_105, %.preheader496.loopexit ], [ 0, %.preheader496.preheader ]
  %i105_cast = zext i5 %i104 to i7
  %i105_cast1 = zext i5 %i104 to i11
  %exitcond156 = icmp eq i5 %i104, -8
  %empty_514 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_105 = add i5 %i104, 1
  br i1 %exitcond156, label %136, label %.preheader495.preheader

.preheader495.preheader:                          ; preds = %.preheader496
  br label %.preheader495

.preheader495:                                    ; preds = %.preheader495.preheader, %135
  %k32 = phi i2 [ %k_33, %135 ], [ 0, %.preheader495.preheader ]
  %exitcond155 = icmp eq i2 %k32, -2
  %empty_515 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_33 = add i2 %k32, 1
  br i1 %exitcond155, label %.preheader496.loopexit, label %135

; <label>:135                                     ; preds = %.preheader495
  %tmp_1198 = trunc i2 %k32 to i1
  %p_shl134 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1198, i5 0)
  %p_shl134_cast = zext i6 %p_shl134 to i7
  %p_shl135 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1198, i3 0)
  %p_shl135_cast = zext i4 %p_shl135 to i7
  %tmp_491 = sub i7 %p_shl134_cast, %p_shl135_cast
  %tmp_671_cast = sext i7 %tmp_491 to i11
  %tmp42 = add i11 -728, %tmp_671_cast
  %tmp_492 = add i11 %i105_cast1, %tmp42
  %tmp_493 = zext i11 %tmp_492 to i64
  %bias_addr_37 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_493
  %bias_load_37 = load float* %bias_addr_37, align 4
  %tmp_494 = add i7 %tmp_491, %i105_cast
  %tmp_675_cast = sext i7 %tmp_494 to i32
  %tmp_495 = zext i32 %tmp_675_cast to i64
  %bias_48_addr_20 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_495
  store float %bias_load_37, float* %bias_48_addr_20, align 4
  br label %.preheader495

; <label>:136                                     ; preds = %.preheader496
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit864

.loopexit864.loopexit:                            ; preds = %.preheader494
  br label %.loopexit864

.loopexit864:                                     ; preds = %.loopexit864.loopexit, %136
  %co118 = phi i5 [ 0, %136 ], [ %co_119, %.loopexit864.loopexit ]
  %co119_cast = zext i5 %co118 to i7
  %co119_cast363_cast = zext i5 %co118 to i8
  %exitcond154 = icmp eq i5 %co118, -8
  %empty_516 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_119 = add i5 %co118, 1
  br i1 %exitcond154, label %.preheader491.preheader, label %.preheader494.preheader

.preheader494.preheader:                          ; preds = %.loopexit864
  br label %.preheader494

.preheader491.preheader:                          ; preds = %.loopexit864
  br label %.preheader491

.preheader494.loopexit:                           ; preds = %.preheader493
  br label %.preheader494

.preheader494:                                    ; preds = %.preheader494.preheader, %.preheader494.loopexit
  %w79 = phi i2 [ %w_80, %.preheader494.loopexit ], [ 0, %.preheader494.preheader ]
  %exitcond153 = icmp eq i2 %w79, -1
  %empty_517 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_80 = add i2 %w79, 1
  br i1 %exitcond153, label %.loopexit864.loopexit, label %.preheader493.preheader

.preheader493.preheader:                          ; preds = %.preheader494
  %tmp_500_cast1 = zext i2 %w79 to i36
  %tmp_500_cast = zext i2 %w79 to i13
  br label %.preheader493

.preheader493.loopexit:                           ; preds = %.preheader492
  br label %.preheader493

.preheader493:                                    ; preds = %.preheader493.loopexit, %.preheader493.preheader
  %h80 = phi i2 [ 0, %.preheader493.preheader ], [ %h_81, %.preheader493.loopexit ]
  %exitcond152 = icmp eq i2 %h80, -1
  %empty_518 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_81 = add i2 %h80, 1
  br i1 %exitcond152, label %.preheader494.loopexit, label %.preheader492.preheader

.preheader492.preheader:                          ; preds = %.preheader493
  %tmp_508_cast1 = zext i2 %h80 to i10
  %tmp_508_cast = zext i2 %h80 to i15
  br label %.preheader492

.preheader492:                                    ; preds = %137, %.preheader492.preheader
  %i112 = phi i2 [ %i_113, %137 ], [ 0, %.preheader492.preheader ]
  %exitcond151 = icmp eq i2 %i112, -2
  %empty_519 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_113 = add i2 %i112, 1
  br i1 %exitcond151, label %.preheader493.loopexit, label %137

; <label>:137                                     ; preds = %.preheader492
  %tmp_1210 = trunc i2 %i112 to i1
  %p_shl146 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1210, i5 0)
  %p_shl146_cast = zext i6 %p_shl146 to i7
  %p_shl147 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1210, i3 0)
  %p_shl147_cast = zext i4 %p_shl147 to i7
  %tmp_514 = sub i7 %p_shl146_cast, %p_shl147_cast
  %tmp_708_cast_cast = sext i7 %tmp_514 to i8
  %tmp43 = add i8 -56, %tmp_708_cast_cast
  %tmp_517 = add i8 %co119_cast363_cast, %tmp43
  %tmp_710_cast = sext i8 %tmp_517 to i9
  %tmp_518_cast = zext i9 %tmp_710_cast to i12
  %tmp_1211 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_517, i2 0)
  %tmp_1212 = sext i10 %tmp_1211 to i11
  %p_shl522_cast = zext i11 %tmp_1212 to i12
  %tmp_1213 = sub i12 %p_shl522_cast, %tmp_518_cast
  %tmp_1606_cast = sext i12 %tmp_1213 to i13
  %tmp_1214 = add i13 %tmp_1606_cast, %tmp_500_cast
  %tmp_1607_cast = sext i13 %tmp_1214 to i15
  %p_shl521_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1214, i2 0)
  %tmp_1215 = sub i15 %p_shl521_cast, %tmp_1607_cast
  %tmp_1216 = add i15 %tmp_1215, %tmp_508_cast
  %tmp_1610_cast = zext i15 %tmp_1216 to i64
  %shuffle_conv_3x3_add_12 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1610_cast
  %shuffle_conv_3x3_loa_12 = load float* %shuffle_conv_3x3_add_12, align 4
  %tmp_519 = add i7 %tmp_514, %co119_cast
  %tmp_712_cast = sext i7 %tmp_519 to i32
  %tmp_520_cast = zext i32 %tmp_712_cast to i35
  %tmp_1217 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_519, i2 0)
  %tmp_1218 = sext i9 %tmp_1217 to i34
  %p_shl520_cast = zext i34 %tmp_1218 to i35
  %tmp_1219 = sub i35 %p_shl520_cast, %tmp_520_cast
  %tmp_1613_cast = sext i35 %tmp_1219 to i36
  %tmp_1220 = add i36 %tmp_1613_cast, %tmp_500_cast1
  %tmp_1221 = trunc i36 %tmp_1220 to i10
  %tmp_1222 = trunc i36 %tmp_1220 to i8
  %p_shl519_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1222, i2 0)
  %tmp_1223 = sub i10 %p_shl519_cast, %tmp_1221
  %tmp_1224 = add i10 %tmp_1223, %tmp_508_cast1
  %tmp_1617_cast = zext i10 %tmp_1224 to i64
  %weights_48_1_3x3_add_7 = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1617_cast
  store float %shuffle_conv_3x3_loa_12, float* %weights_48_1_3x3_add_7, align 4
  br label %.preheader492

.preheader491.loopexit:                           ; preds = %.preheader490
  br label %.preheader491

.preheader491:                                    ; preds = %.preheader491.preheader, %.preheader491.loopexit
  %i108 = phi i5 [ %i_109, %.preheader491.loopexit ], [ 0, %.preheader491.preheader ]
  %i109_cast = zext i5 %i108 to i7
  %i109_cast1 = zext i5 %i108 to i11
  %exitcond150 = icmp eq i5 %i108, -8
  %empty_520 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_109 = add i5 %i108, 1
  br i1 %exitcond150, label %139, label %.preheader490.preheader

.preheader490.preheader:                          ; preds = %.preheader491
  br label %.preheader490

.preheader490:                                    ; preds = %.preheader490.preheader, %138
  %k34 = phi i2 [ %k_35, %138 ], [ 0, %.preheader490.preheader ]
  %exitcond149 = icmp eq i2 %k34, -2
  %empty_521 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_35 = add i2 %k34, 1
  br i1 %exitcond149, label %.preheader491.loopexit, label %138

; <label>:138                                     ; preds = %.preheader490
  %tmp_1209 = trunc i2 %k34 to i1
  %p_shl140 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1209, i5 0)
  %p_shl140_cast = zext i6 %p_shl140 to i7
  %p_shl141 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1209, i3 0)
  %p_shl141_cast = zext i4 %p_shl141 to i7
  %tmp_503 = sub i7 %p_shl140_cast, %p_shl141_cast
  %tmp_689_cast = sext i7 %tmp_503 to i11
  %tmp44 = add i11 -680, %tmp_689_cast
  %tmp_504 = add i11 %i109_cast1, %tmp44
  %tmp_505 = zext i11 %tmp_504 to i64
  %bias_addr_38 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_505
  %bias_load_38 = load float* %bias_addr_38, align 4
  %tmp_506 = add i7 %tmp_503, %i109_cast
  %tmp_693_cast = sext i7 %tmp_506 to i32
  %tmp_507 = zext i32 %tmp_693_cast to i64
  %bias_48_addr_21 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_507
  store float %bias_load_38, float* %bias_48_addr_21, align 4
  br label %.preheader490

; <label>:139                                     ; preds = %.preheader491
  call fastcc void @subconv_3x3_8_no_rel([4800 x float]* @buffer1_1_48_8x8_p, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [4800 x float]* @buffer0_1_48_8x8_p) nounwind
  br label %.loopexit863

.loopexit863.loopexit:                            ; preds = %.preheader489
  br label %.loopexit863

.loopexit863:                                     ; preds = %.loopexit863.loopexit, %139
  %co120 = phi i5 [ 0, %139 ], [ %co_121, %.loopexit863.loopexit ]
  %co121_cast = zext i5 %co120 to i11
  %exitcond148 = icmp eq i5 %co120, -8
  %empty_522 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_121 = add i5 %co120, 1
  br i1 %exitcond148, label %.preheader487.preheader, label %.preheader489.preheader

.preheader487.preheader:                          ; preds = %.loopexit863
  br label %.preheader487

.preheader489.preheader:                          ; preds = %.loopexit863
  %tmp_1208 = trunc i5 %co120 to i1
  %p_shl142 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1208, i5 0)
  %p_shl142_cast = zext i6 %p_shl142 to i7
  %p_shl143 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1208, i3 0)
  %p_shl143_cast = zext i4 %p_shl143 to i7
  %tmp_501 = sub i7 %p_shl142_cast, %p_shl143_cast
  %p_lshr_f14_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co120, i32 1, i32 4)
  %tmp_697_cast = zext i4 %p_lshr_f14_cast to i7
  br label %.preheader489

.preheader489.loopexit:                           ; preds = %.preheader488
  br label %.preheader489

.preheader489:                                    ; preds = %.preheader489.loopexit, %.preheader489.preheader
  %ci54 = phi i5 [ 0, %.preheader489.preheader ], [ %ci_55, %.preheader489.loopexit ]
  %ci54_cast = zext i5 %ci54 to i7
  %exitcond147 = icmp eq i5 %ci54, -8
  %empty_523 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_55 = add i5 %ci54, 1
  br i1 %exitcond147, label %.loopexit863.loopexit, label %.preheader488.preheader

.preheader488.preheader:                          ; preds = %.preheader489
  %tmp_509_cast = zext i5 %ci54 to i18
  %tmp_511 = add i7 %tmp_501, %ci54_cast
  %tmp_512_cast = sext i7 %tmp_511 to i13
  br label %.preheader488

.preheader488:                                    ; preds = %140, %.preheader488.preheader
  %i114 = phi i3 [ %i_115, %140 ], [ 0, %.preheader488.preheader ]
  %exitcond146 = icmp eq i3 %i114, -4
  %empty_524 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_115 = add i3 %i114, 1
  br i1 %exitcond146, label %.preheader489.loopexit, label %140

; <label>:140                                     ; preds = %.preheader488
  %tmp_1229 = trunc i3 %i114 to i2
  %p_shl148 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1229, i5 0)
  %p_shl148_cast = zext i7 %p_shl148 to i8
  %p_shl149 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1229, i3 0)
  %p_shl149_cast = zext i5 %p_shl149 to i8
  %tmp_526 = sub i8 %p_shl148_cast, %p_shl149_cast
  %tmp_715_cast = sext i8 %tmp_526 to i11
  %tmp45 = add i11 -488, %tmp_715_cast
  %tmp_527 = add i11 %tmp45, %co121_cast
  %tmp_1230 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_527, i5 0)
  %p_shl525_cast = zext i16 %tmp_1230 to i17
  %tmp_1231 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_527, i3 0)
  %p_shl526_cast = zext i14 %tmp_1231 to i17
  %tmp_1232 = sub i17 %p_shl525_cast, %p_shl526_cast
  %tmp_1627_cast = sext i17 %tmp_1232 to i18
  %tmp_1233 = add i18 %tmp_509_cast, %tmp_1627_cast
  %tmp_1628_cast = sext i18 %tmp_1233 to i64
  %shuffle_conv_1x1_add_23 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1628_cast
  %shuffle_conv_1x1_loa_23 = load float* %shuffle_conv_1x1_add_23, align 4
  %p_shl150 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1229, i4 0)
  %p_shl150_cast = zext i6 %p_shl150 to i7
  %p_shl151 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1229, i2 0)
  %p_shl151_cast = zext i4 %p_shl151 to i7
  %tmp_528 = sub i7 %p_shl150_cast, %p_shl151_cast
  %tmp_529 = add i7 %tmp_528, %tmp_697_cast
  %tmp_1234 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_529, i6 0)
  %tmp_1235 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_529, i4 0)
  %p_shl524_cast = sext i11 %tmp_1235 to i13
  %tmp_1236 = sub i13 %tmp_1234, %p_shl524_cast
  %tmp_1237 = add i13 %tmp_512_cast, %tmp_1236
  %tmp_1636_cast = sext i13 %tmp_1237 to i64
  %weights_48_48_1x1_ad_14 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1636_cast
  store float %shuffle_conv_1x1_loa_23, float* %weights_48_48_1x1_ad_14, align 4
  br label %.preheader488

.preheader487.loopexit:                           ; preds = %.preheader486
  br label %.preheader487

.preheader487:                                    ; preds = %.preheader487.preheader, %.preheader487.loopexit
  %i110 = phi i5 [ %i_111, %.preheader487.loopexit ], [ 0, %.preheader487.preheader ]
  %i111_cast = zext i5 %i110 to i7
  %i111_cast1 = zext i5 %i110 to i11
  %exitcond145 = icmp eq i5 %i110, -8
  %empty_525 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_111 = add i5 %i110, 1
  br i1 %exitcond145, label %142, label %.preheader486.preheader

.preheader486.preheader:                          ; preds = %.preheader487
  br label %.preheader486

.preheader486:                                    ; preds = %.preheader486.preheader, %141
  %k36 = phi i2 [ %k_37, %141 ], [ 0, %.preheader486.preheader ]
  %exitcond144 = icmp eq i2 %k36, -2
  %empty_526 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_37 = add i2 %k36, 1
  br i1 %exitcond144, label %.preheader487.loopexit, label %141

; <label>:141                                     ; preds = %.preheader486
  %tmp_1228 = trunc i2 %k36 to i1
  %p_shl144 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1228, i5 0)
  %p_shl144_cast = zext i6 %p_shl144 to i7
  %p_shl145 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1228, i3 0)
  %p_shl145_cast = zext i4 %p_shl145 to i7
  %tmp_521 = sub i7 %p_shl144_cast, %p_shl145_cast
  %tmp_699_cast = sext i7 %tmp_521 to i11
  %tmp46 = add i11 -632, %tmp_699_cast
  %tmp_522 = add i11 %i111_cast1, %tmp46
  %tmp_523 = zext i11 %tmp_522 to i64
  %bias_addr_39 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_523
  %bias_load_39 = load float* %bias_addr_39, align 4
  %tmp_524 = add i7 %tmp_521, %i111_cast
  %tmp_703_cast = sext i7 %tmp_524 to i32
  %tmp_525 = zext i32 %tmp_703_cast to i64
  %bias_48_addr_22 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_525
  store float %bias_load_39, float* %bias_48_addr_22, align 4
  br label %.preheader486

; <label>:142                                     ; preds = %.preheader487
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit862

.loopexit862.loopexit:                            ; preds = %.preheader485
  br label %.loopexit862

.loopexit862:                                     ; preds = %.loopexit862.loopexit, %142
  %co122 = phi i6 [ 0, %142 ], [ %co_123, %.loopexit862.loopexit ]
  %exitcond143 = icmp eq i6 %co122, -16
  %empty_527 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_123 = add i6 %co122, 1
  br i1 %exitcond143, label %144, label %.preheader485.preheader

.preheader485.preheader:                          ; preds = %.loopexit862
  %tmp_1225 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co122, i3 0)
  %p_shl527_cast = zext i9 %tmp_1225 to i10
  %tmp_1226 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co122, i1 false)
  %p_shl528_cast = zext i7 %tmp_1226 to i10
  %tmp_1227 = add i10 %p_shl528_cast, %p_shl527_cast
  br label %.preheader485

.preheader485.loopexit:                           ; preds = %.preheader484
  br label %.preheader485

.preheader485:                                    ; preds = %.preheader485.loopexit, %.preheader485.preheader
  %h82 = phi i4 [ 0, %.preheader485.preheader ], [ %h_83, %.preheader485.loopexit ]
  %exitcond142 = icmp eq i4 %h82, -8
  %empty_528 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_83 = add i4 %h82, 1
  br i1 %exitcond142, label %.loopexit862.loopexit, label %.preheader484.preheader

.preheader484.preheader:                          ; preds = %.preheader485
  %tmp_531_cast = zext i4 %h_83 to i10
  %tmp_1244 = add i10 %tmp_531_cast, %tmp_1227
  %tmp_1245 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1244, i3 0)
  %p_shl529_cast = zext i13 %tmp_1245 to i15
  %tmp_1246 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1244, i1 false)
  %p_shl530_cast = zext i11 %tmp_1246 to i15
  %tmp_1247 = add i15 %p_shl529_cast, %p_shl530_cast
  br label %.preheader484

.preheader484:                                    ; preds = %143, %.preheader484.preheader
  %w81 = phi i4 [ %w_82, %143 ], [ 0, %.preheader484.preheader ]
  %exitcond141 = icmp eq i4 %w81, -8
  %empty_529 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_82 = add i4 %w81, 1
  br i1 %exitcond141, label %.preheader485.loopexit, label %143

; <label>:143                                     ; preds = %.preheader484
  %tmp_536_cast = zext i4 %w_82 to i15
  %tmp_1257 = add i15 %tmp_1247, %tmp_536_cast
  %tmp_1657_cast = zext i15 %tmp_1257 to i64
  %shuffleunit1_4_outpu_2 = getelementptr [9600 x float]* @shuffleunit1_4_outpu, i64 0, i64 %tmp_1657_cast
  %buffer0_1_48_8x8_p_a_11 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1657_cast
  %shuffleunit1_4_outpu_3 = load float* %shuffleunit1_4_outpu_2, align 4
  store float %shuffleunit1_4_outpu_3, float* %buffer0_1_48_8x8_p_a_11, align 4
  br label %.preheader484

; <label>:144                                     ; preds = %.loopexit862
  call fastcc void @shuffle_48_p([4800 x float]* @buffer0_1_48_8x8_p, [9600 x float]* @shuffleunit1_5_outpu) nounwind
  br label %.loopexit861

.loopexit861.loopexit:                            ; preds = %.preheader483
  br label %.loopexit861

.loopexit861:                                     ; preds = %.loopexit861.loopexit, %144
  %co124 = phi i6 [ 0, %144 ], [ %co_125, %.loopexit861.loopexit ]
  %co124_cast = zext i6 %co124 to i7
  %exitcond140 = icmp eq i6 %co124, -16
  %empty_530 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_125 = add i6 %co124, 1
  br i1 %exitcond140, label %.preheader481.preheader, label %.preheader483.preheader

.preheader481.preheader:                          ; preds = %.loopexit861
  br label %.preheader481

.preheader483.preheader:                          ; preds = %.loopexit861
  %tmp_530 = add i7 %co124_cast, 48
  %tmp_1238 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_530, i3 0)
  %p_shl533_cast = zext i10 %tmp_1238 to i11
  %tmp_1239 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp_530, i1 false)
  %p_shl534_cast = zext i8 %tmp_1239 to i11
  %tmp_1240 = add i11 %p_shl534_cast, %p_shl533_cast
  %tmp_1241 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co124, i3 0)
  %p_shl531_cast = zext i9 %tmp_1241 to i10
  %tmp_1242 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co124, i1 false)
  %p_shl532_cast = zext i7 %tmp_1242 to i10
  %tmp_1243 = add i10 %p_shl532_cast, %p_shl531_cast
  br label %.preheader483

.preheader483.loopexit:                           ; preds = %.preheader482
  br label %.preheader483

.preheader483:                                    ; preds = %.preheader483.loopexit, %.preheader483.preheader
  %h84 = phi i4 [ 0, %.preheader483.preheader ], [ %h_85, %.preheader483.loopexit ]
  %exitcond139 = icmp eq i4 %h84, -8
  %empty_531 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_85 = add i4 %h84, 1
  br i1 %exitcond139, label %.loopexit861.loopexit, label %.preheader482.preheader

.preheader482.preheader:                          ; preds = %.preheader483
  %tmp_534_cast1 = zext i4 %h_85 to i11
  %tmp_534_cast = zext i4 %h_85 to i10
  %tmp_1249 = add i10 %tmp_534_cast, %tmp_1243
  %tmp_1250 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1249, i3 0)
  %p_shl537_cast = zext i13 %tmp_1250 to i14
  %tmp_1251 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1249, i1 false)
  %p_shl538_cast = zext i11 %tmp_1251 to i14
  %tmp_1252 = add i14 %p_shl537_cast, %p_shl538_cast
  %tmp_1253 = add i11 %tmp_534_cast1, %tmp_1240
  %tmp_1254 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1253, i3 0)
  %p_shl535_cast = zext i14 %tmp_1254 to i15
  %tmp_1255 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_1253, i1 false)
  %p_shl536_cast = zext i12 %tmp_1255 to i15
  %tmp_1256 = add i15 %p_shl535_cast, %p_shl536_cast
  br label %.preheader482

.preheader482:                                    ; preds = %145, %.preheader482.preheader
  %w83 = phi i4 [ %w_84, %145 ], [ 0, %.preheader482.preheader ]
  %exitcond138 = icmp eq i4 %w83, -8
  %empty_532 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_84 = add i4 %w83, 1
  br i1 %exitcond138, label %.preheader483.loopexit, label %145

; <label>:145                                     ; preds = %.preheader482
  %tmp_540_cast1 = zext i4 %w_84 to i15
  %tmp_540_cast = zext i4 %w_84 to i14
  %tmp_1258 = add i14 %tmp_1252, %tmp_540_cast
  %tmp_1658_cast = zext i14 %tmp_1258 to i64
  %buffer0_1_48_8x8_p_a_12 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1658_cast
  %tmp_1259 = add i15 %tmp_1256, %tmp_540_cast1
  %tmp_1659_cast = zext i15 %tmp_1259 to i64
  %shuffleunit1_5_outpu = getelementptr [9600 x float]* @shuffleunit1_5_outpu, i64 0, i64 %tmp_1659_cast
  %shuffleunit1_5_outpu_1 = load float* %shuffleunit1_5_outpu, align 4
  store float %shuffleunit1_5_outpu_1, float* %buffer0_1_48_8x8_p_a_12, align 4
  br label %.preheader482

.preheader481.loopexit:                           ; preds = %.preheader480
  br label %.preheader481

.preheader481:                                    ; preds = %.preheader481.preheader, %.preheader481.loopexit
  %co126 = phi i5 [ %co_127, %.preheader481.loopexit ], [ 0, %.preheader481.preheader ]
  %co126_cast339_cast = zext i5 %co126 to i10
  %exitcond137 = icmp eq i5 %co126, -8
  %empty_533 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_127 = add i5 %co126, 1
  br i1 %exitcond137, label %.preheader478.preheader, label %.preheader480.preheader

.preheader478.preheader:                          ; preds = %.preheader481
  br label %.preheader478

.preheader480.preheader:                          ; preds = %.preheader481
  %tmp_1248 = trunc i5 %co126 to i1
  %p_shl152 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1248, i5 0)
  %p_shl152_cast = zext i6 %p_shl152 to i7
  %p_shl153 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1248, i3 0)
  %p_shl153_cast = zext i4 %p_shl153 to i7
  %tmp_533 = sub i7 %p_shl152_cast, %p_shl153_cast
  %p_lshr_f15_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co126, i32 1, i32 4)
  %tmp_727_cast = zext i4 %p_lshr_f15_cast to i7
  br label %.preheader480

.preheader480.loopexit:                           ; preds = %.preheader479
  br label %.preheader480

.preheader480:                                    ; preds = %.preheader480.loopexit, %.preheader480.preheader
  %ci56 = phi i5 [ 0, %.preheader480.preheader ], [ %ci_57, %.preheader480.loopexit ]
  %ci56_cast = zext i5 %ci56 to i7
  %exitcond136 = icmp eq i5 %ci56, -8
  %empty_534 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_57 = add i5 %ci56, 1
  br i1 %exitcond136, label %.preheader481.loopexit, label %.preheader479.preheader

.preheader479.preheader:                          ; preds = %.preheader480
  %tmp_537_cast = zext i5 %ci56 to i18
  %tmp_538 = add i7 %tmp_533, %ci56_cast
  %tmp_539_cast = sext i7 %tmp_538 to i13
  br label %.preheader479

.preheader479:                                    ; preds = %146, %.preheader479.preheader
  %i118 = phi i3 [ %i_119, %146 ], [ 0, %.preheader479.preheader ]
  %exitcond135 = icmp eq i3 %i118, -4
  %empty_535 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_119 = add i3 %i118, 1
  br i1 %exitcond135, label %.preheader480.loopexit, label %146

; <label>:146                                     ; preds = %.preheader479
  %tmp_1261 = trunc i3 %i118 to i2
  %p_shl156 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1261, i5 0)
  %p_shl156_cast = zext i7 %p_shl156 to i8
  %p_shl157 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1261, i3 0)
  %p_shl157_cast = zext i5 %p_shl157 to i8
  %tmp_546 = sub i8 %p_shl156_cast, %p_shl157_cast
  %tmp_742_cast_cast = sext i8 %tmp_546 to i10
  %tmp47 = add i10 -392, %tmp_742_cast_cast
  %tmp_547 = add i10 %tmp47, %co126_cast339_cast
  %tmp_1262 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_547, i5 0)
  %tmp_1263 = sext i15 %tmp_1262 to i16
  %p_shl541_cast = zext i16 %tmp_1263 to i17
  %tmp_1264 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_547, i3 0)
  %tmp_1265 = sext i13 %tmp_1264 to i14
  %p_shl542_cast = zext i14 %tmp_1265 to i17
  %tmp_1266 = sub i17 %p_shl541_cast, %p_shl542_cast
  %tmp_1668_cast = sext i17 %tmp_1266 to i18
  %tmp_1267 = add i18 %tmp_537_cast, %tmp_1668_cast
  %tmp_1669_cast = sext i18 %tmp_1267 to i64
  %shuffle_conv_1x1_add_24 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1669_cast
  %shuffle_conv_1x1_loa_24 = load float* %shuffle_conv_1x1_add_24, align 4
  %p_shl158 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1261, i4 0)
  %p_shl158_cast = zext i6 %p_shl158 to i7
  %p_shl159 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1261, i2 0)
  %p_shl159_cast = zext i4 %p_shl159 to i7
  %tmp_548 = sub i7 %p_shl158_cast, %p_shl159_cast
  %tmp_549 = add i7 %tmp_548, %tmp_727_cast
  %tmp_1268 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_549, i6 0)
  %tmp_1269 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_549, i4 0)
  %p_shl540_cast = sext i11 %tmp_1269 to i13
  %tmp_1270 = sub i13 %tmp_1268, %p_shl540_cast
  %tmp_1271 = add i13 %tmp_539_cast, %tmp_1270
  %tmp_1677_cast = sext i13 %tmp_1271 to i64
  %weights_48_48_1x1_ad_15 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1677_cast
  store float %shuffle_conv_1x1_loa_24, float* %weights_48_48_1x1_ad_15, align 4
  br label %.preheader479

.preheader478.loopexit:                           ; preds = %.preheader477
  br label %.preheader478

.preheader478:                                    ; preds = %.preheader478.preheader, %.preheader478.loopexit
  %i116 = phi i5 [ %i_117, %.preheader478.loopexit ], [ 0, %.preheader478.preheader ]
  %i117_cast = zext i5 %i116 to i7
  %i117_cast1 = zext i5 %i116 to i11
  %exitcond134 = icmp eq i5 %i116, -8
  %empty_536 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_117 = add i5 %i116, 1
  br i1 %exitcond134, label %148, label %.preheader477.preheader

.preheader477.preheader:                          ; preds = %.preheader478
  br label %.preheader477

.preheader477:                                    ; preds = %.preheader477.preheader, %147
  %k38 = phi i2 [ %k_39, %147 ], [ 0, %.preheader477.preheader ]
  %exitcond133 = icmp eq i2 %k38, -2
  %empty_537 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_39 = add i2 %k38, 1
  br i1 %exitcond133, label %.preheader478.loopexit, label %147

; <label>:147                                     ; preds = %.preheader477
  %tmp_1260 = trunc i2 %k38 to i1
  %p_shl154 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1260, i5 0)
  %p_shl154_cast = zext i6 %p_shl154 to i7
  %p_shl155 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1260, i3 0)
  %p_shl155_cast = zext i4 %p_shl155 to i7
  %tmp_541 = sub i7 %p_shl154_cast, %p_shl155_cast
  %tmp_731_cast = sext i7 %tmp_541 to i11
  %tmp48 = add i11 -584, %tmp_731_cast
  %tmp_542 = add i11 %i117_cast1, %tmp48
  %tmp_543 = zext i11 %tmp_542 to i64
  %bias_addr_40 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_543
  %bias_load_40 = load float* %bias_addr_40, align 4
  %tmp_544 = add i7 %tmp_541, %i117_cast
  %tmp_735_cast = sext i7 %tmp_544 to i32
  %tmp_545 = zext i32 %tmp_735_cast to i64
  %bias_48_addr_23 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_545
  store float %bias_load_40, float* %bias_48_addr_23, align 4
  br label %.preheader477

; <label>:148                                     ; preds = %.preheader478
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit860

.loopexit860.loopexit:                            ; preds = %.preheader476
  br label %.loopexit860

.loopexit860:                                     ; preds = %.loopexit860.loopexit, %148
  %co128 = phi i5 [ 0, %148 ], [ %co_129, %.loopexit860.loopexit ]
  %co129_cast = zext i5 %co128 to i7
  %co129_cast1 = zext i5 %co128 to i10
  %exitcond132 = icmp eq i5 %co128, -8
  %empty_538 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_129 = add i5 %co128, 1
  br i1 %exitcond132, label %.preheader473.preheader, label %.preheader476.preheader

.preheader476.preheader:                          ; preds = %.loopexit860
  br label %.preheader476

.preheader473.preheader:                          ; preds = %.loopexit860
  br label %.preheader473

.preheader476.loopexit:                           ; preds = %.preheader475
  br label %.preheader476

.preheader476:                                    ; preds = %.preheader476.preheader, %.preheader476.loopexit
  %w85 = phi i2 [ %w_86, %.preheader476.loopexit ], [ 0, %.preheader476.preheader ]
  %exitcond131 = icmp eq i2 %w85, -1
  %empty_539 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_86 = add i2 %w85, 1
  br i1 %exitcond131, label %.loopexit860.loopexit, label %.preheader475.preheader

.preheader475.preheader:                          ; preds = %.preheader476
  %tmp_550_cast1 = zext i2 %w85 to i36
  %tmp_550_cast = zext i2 %w85 to i14
  br label %.preheader475

.preheader475.loopexit:                           ; preds = %.preheader474
  br label %.preheader475

.preheader475:                                    ; preds = %.preheader475.loopexit, %.preheader475.preheader
  %h86 = phi i2 [ 0, %.preheader475.preheader ], [ %h_87, %.preheader475.loopexit ]
  %exitcond130 = icmp eq i2 %h86, -1
  %empty_540 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_87 = add i2 %h86, 1
  br i1 %exitcond130, label %.preheader476.loopexit, label %.preheader474.preheader

.preheader474.preheader:                          ; preds = %.preheader475
  %tmp_558_cast = zext i2 %h86 to i10
  %tmp_558_cast1 = zext i2 %h86 to i15
  br label %.preheader474

.preheader474:                                    ; preds = %149, %.preheader474.preheader
  %i124 = phi i2 [ %i_125, %149 ], [ 0, %.preheader474.preheader ]
  %exitcond129 = icmp eq i2 %i124, -2
  %empty_541 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_125 = add i2 %i124, 1
  br i1 %exitcond129, label %.preheader475.loopexit, label %149

; <label>:149                                     ; preds = %.preheader474
  %tmp_1274 = trunc i2 %i124 to i1
  %p_shl166 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1274, i5 0)
  %p_shl166_cast = zext i6 %p_shl166 to i7
  %p_shl167 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1274, i3 0)
  %p_shl167_cast = zext i4 %p_shl167 to i7
  %tmp_564 = sub i7 %p_shl166_cast, %p_shl167_cast
  %tmp_768_cast = sext i7 %tmp_564 to i10
  %tmp49 = add i10 504, %tmp_768_cast
  %tmp_567 = add i10 %co129_cast1, %tmp49
  %tmp_568_cast = zext i10 %tmp_567 to i13
  %tmp_1275 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_567, i2 0)
  %p_shl546_cast = zext i12 %tmp_1275 to i13
  %tmp_1276 = sub i13 %p_shl546_cast, %tmp_568_cast
  %tmp_1685_cast = sext i13 %tmp_1276 to i14
  %tmp_1277 = add i14 %tmp_1685_cast, %tmp_550_cast
  %tmp_1686_cast = sext i14 %tmp_1277 to i15
  %tmp_1278 = trunc i14 %tmp_1277 to i13
  %p_shl545_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1278, i2 0)
  %tmp_1279 = sub i15 %p_shl545_cast, %tmp_1686_cast
  %tmp_1280 = add i15 %tmp_1279, %tmp_558_cast1
  %tmp_1689_cast = zext i15 %tmp_1280 to i64
  %shuffle_conv_3x3_add_13 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1689_cast
  %shuffle_conv_3x3_loa_13 = load float* %shuffle_conv_3x3_add_13, align 4
  %tmp_569 = add i7 %tmp_564, %co129_cast
  %tmp_772_cast = sext i7 %tmp_569 to i32
  %tmp_570_cast = zext i32 %tmp_772_cast to i35
  %tmp_1281 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_569, i2 0)
  %tmp_1282 = sext i9 %tmp_1281 to i34
  %p_shl544_cast = zext i34 %tmp_1282 to i35
  %tmp_1283 = sub i35 %p_shl544_cast, %tmp_570_cast
  %tmp_1692_cast = sext i35 %tmp_1283 to i36
  %tmp_1284 = add i36 %tmp_1692_cast, %tmp_550_cast1
  %tmp_1285 = trunc i36 %tmp_1284 to i10
  %tmp_1286 = trunc i36 %tmp_1284 to i8
  %p_shl543_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1286, i2 0)
  %tmp_1287 = sub i10 %p_shl543_cast, %tmp_1285
  %tmp_1288 = add i10 %tmp_1287, %tmp_558_cast
  %tmp_1696_cast = zext i10 %tmp_1288 to i64
  %weights_48_1_3x3_add_8 = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1696_cast
  store float %shuffle_conv_3x3_loa_13, float* %weights_48_1_3x3_add_8, align 4
  br label %.preheader474

.preheader473.loopexit:                           ; preds = %.preheader472
  br label %.preheader473

.preheader473:                                    ; preds = %.preheader473.preheader, %.preheader473.loopexit
  %i120 = phi i5 [ %i_121, %.preheader473.loopexit ], [ 0, %.preheader473.preheader ]
  %i121_cast = zext i5 %i120 to i7
  %i121_cast1 = zext i5 %i120 to i11
  %exitcond128 = icmp eq i5 %i120, -8
  %empty_542 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_121 = add i5 %i120, 1
  br i1 %exitcond128, label %151, label %.preheader472.preheader

.preheader472.preheader:                          ; preds = %.preheader473
  br label %.preheader472

.preheader472:                                    ; preds = %.preheader472.preheader, %150
  %k40 = phi i2 [ %k_41, %150 ], [ 0, %.preheader472.preheader ]
  %exitcond127 = icmp eq i2 %k40, -2
  %empty_543 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_41 = add i2 %k40, 1
  br i1 %exitcond127, label %.preheader473.loopexit, label %150

; <label>:150                                     ; preds = %.preheader472
  %tmp_1273 = trunc i2 %k40 to i1
  %p_shl160 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1273, i5 0)
  %p_shl160_cast = zext i6 %p_shl160 to i7
  %p_shl161 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1273, i3 0)
  %p_shl161_cast = zext i4 %p_shl161 to i7
  %tmp_553 = sub i7 %p_shl160_cast, %p_shl161_cast
  %tmp_749_cast = sext i7 %tmp_553 to i11
  %tmp50 = add i11 -536, %tmp_749_cast
  %tmp_554 = add i11 %i121_cast1, %tmp50
  %tmp_555 = zext i11 %tmp_554 to i64
  %bias_addr_41 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_555
  %bias_load_41 = load float* %bias_addr_41, align 4
  %tmp_556 = add i7 %tmp_553, %i121_cast
  %tmp_753_cast = sext i7 %tmp_556 to i32
  %tmp_557 = zext i32 %tmp_753_cast to i64
  %bias_48_addr_24 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_557
  store float %bias_load_41, float* %bias_48_addr_24, align 4
  br label %.preheader472

; <label>:151                                     ; preds = %.preheader473
  call fastcc void @subconv_3x3_8_no_rel([4800 x float]* @buffer1_1_48_8x8_p, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [4800 x float]* @buffer0_1_48_8x8_p) nounwind
  br label %.loopexit859

.loopexit859.loopexit:                            ; preds = %.preheader471
  br label %.loopexit859

.loopexit859:                                     ; preds = %.loopexit859.loopexit, %151
  %co130 = phi i5 [ 0, %151 ], [ %co_131, %.loopexit859.loopexit ]
  %co131_cast316_cast = zext i5 %co130 to i10
  %exitcond126 = icmp eq i5 %co130, -8
  %empty_544 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_131 = add i5 %co130, 1
  br i1 %exitcond126, label %.preheader469.preheader, label %.preheader471.preheader

.preheader469.preheader:                          ; preds = %.loopexit859
  br label %.preheader469

.preheader471.preheader:                          ; preds = %.loopexit859
  %tmp_1272 = trunc i5 %co130 to i1
  %p_shl162 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1272, i5 0)
  %p_shl162_cast = zext i6 %p_shl162 to i7
  %p_shl163 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1272, i3 0)
  %p_shl163_cast = zext i4 %p_shl163 to i7
  %tmp_551 = sub i7 %p_shl162_cast, %p_shl163_cast
  %p_lshr_f16_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co130, i32 1, i32 4)
  %tmp_757_cast = zext i4 %p_lshr_f16_cast to i7
  br label %.preheader471

.preheader471.loopexit:                           ; preds = %.preheader470
  br label %.preheader471

.preheader471:                                    ; preds = %.preheader471.loopexit, %.preheader471.preheader
  %ci58 = phi i5 [ 0, %.preheader471.preheader ], [ %ci_59, %.preheader471.loopexit ]
  %ci58_cast = zext i5 %ci58 to i7
  %exitcond125 = icmp eq i5 %ci58, -8
  %empty_545 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_59 = add i5 %ci58, 1
  br i1 %exitcond125, label %.loopexit859.loopexit, label %.preheader470.preheader

.preheader470.preheader:                          ; preds = %.preheader471
  %tmp_559_cast = zext i5 %ci58 to i18
  %tmp_561 = add i7 %tmp_551, %ci58_cast
  %tmp_562_cast1 = sext i7 %tmp_561 to i13
  br label %.preheader470

.preheader470:                                    ; preds = %152, %.preheader470.preheader
  %i126 = phi i3 [ %i_127, %152 ], [ 0, %.preheader470.preheader ]
  %exitcond124 = icmp eq i3 %i126, -4
  %empty_546 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_127 = add i3 %i126, 1
  br i1 %exitcond124, label %.preheader471.loopexit, label %152

; <label>:152                                     ; preds = %.preheader470
  %tmp_1293 = trunc i3 %i126 to i2
  %p_shl168 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1293, i5 0)
  %p_shl168_cast = zext i7 %p_shl168 to i8
  %p_shl169 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1293, i3 0)
  %p_shl169_cast = zext i5 %p_shl169 to i8
  %tmp_576 = sub i8 %p_shl168_cast, %p_shl169_cast
  %tmp_775_cast_cast = sext i8 %tmp_576 to i10
  %tmp51 = add i10 -296, %tmp_775_cast_cast
  %tmp_577 = add i10 %tmp51, %co131_cast316_cast
  %tmp_1294 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_577, i5 0)
  %tmp_1295 = sext i15 %tmp_1294 to i16
  %p_shl549_cast = zext i16 %tmp_1295 to i17
  %tmp_1296 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_577, i3 0)
  %tmp_1297 = sext i13 %tmp_1296 to i14
  %p_shl550_cast = zext i14 %tmp_1297 to i17
  %tmp_1298 = sub i17 %p_shl549_cast, %p_shl550_cast
  %tmp_1708_cast = sext i17 %tmp_1298 to i18
  %tmp_1299 = add i18 %tmp_559_cast, %tmp_1708_cast
  %tmp_1709_cast = sext i18 %tmp_1299 to i64
  %shuffle_conv_1x1_add_25 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1709_cast
  %shuffle_conv_1x1_loa_25 = load float* %shuffle_conv_1x1_add_25, align 4
  %p_shl170 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1293, i4 0)
  %p_shl170_cast = zext i6 %p_shl170 to i7
  %p_shl171 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1293, i2 0)
  %p_shl171_cast = zext i4 %p_shl171 to i7
  %tmp_578 = sub i7 %p_shl170_cast, %p_shl171_cast
  %tmp_579 = add i7 %tmp_578, %tmp_757_cast
  %tmp_1300 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_579, i6 0)
  %tmp_1301 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_579, i4 0)
  %p_shl548_cast = sext i11 %tmp_1301 to i13
  %tmp_1302 = sub i13 %tmp_1300, %p_shl548_cast
  %tmp_1303 = add i13 %tmp_562_cast1, %tmp_1302
  %tmp_1717_cast = sext i13 %tmp_1303 to i64
  %weights_48_48_1x1_ad_16 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1717_cast
  store float %shuffle_conv_1x1_loa_25, float* %weights_48_48_1x1_ad_16, align 4
  br label %.preheader470

.preheader469.loopexit:                           ; preds = %.preheader468
  br label %.preheader469

.preheader469:                                    ; preds = %.preheader469.preheader, %.preheader469.loopexit
  %i122 = phi i5 [ %i_123, %.preheader469.loopexit ], [ 0, %.preheader469.preheader ]
  %i123_cast = zext i5 %i122 to i7
  %i123_cast306_cast = zext i5 %i122 to i10
  %exitcond123 = icmp eq i5 %i122, -8
  %empty_547 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_123 = add i5 %i122, 1
  br i1 %exitcond123, label %154, label %.preheader468.preheader

.preheader468.preheader:                          ; preds = %.preheader469
  br label %.preheader468

.preheader468:                                    ; preds = %.preheader468.preheader, %153
  %k42 = phi i2 [ %k_43, %153 ], [ 0, %.preheader468.preheader ]
  %exitcond122 = icmp eq i2 %k42, -2
  %empty_548 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_43 = add i2 %k42, 1
  br i1 %exitcond122, label %.preheader469.loopexit, label %153

; <label>:153                                     ; preds = %.preheader468
  %tmp_1292 = trunc i2 %k42 to i1
  %p_shl164 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1292, i5 0)
  %p_shl164_cast = zext i6 %p_shl164 to i7
  %p_shl165 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1292, i3 0)
  %p_shl165_cast = zext i4 %p_shl165 to i7
  %tmp_571 = sub i7 %p_shl164_cast, %p_shl165_cast
  %tmp_759_cast_cast = sext i7 %tmp_571 to i10
  %tmp52 = add i10 -488, %tmp_759_cast_cast
  %tmp_572 = add i10 %i123_cast306_cast, %tmp52
  %tmp_761_cast = sext i10 %tmp_572 to i11
  %tmp_573 = zext i11 %tmp_761_cast to i64
  %bias_addr_42 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_573
  %bias_load_42 = load float* %bias_addr_42, align 4
  %tmp_574 = add i7 %tmp_571, %i123_cast
  %tmp_763_cast = sext i7 %tmp_574 to i32
  %tmp_575 = zext i32 %tmp_763_cast to i64
  %bias_48_addr_25 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_575
  store float %bias_load_42, float* %bias_48_addr_25, align 4
  br label %.preheader468

; <label>:154                                     ; preds = %.preheader469
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit858

.loopexit858.loopexit:                            ; preds = %.preheader467
  br label %.loopexit858

.loopexit858:                                     ; preds = %.loopexit858.loopexit, %154
  %co132 = phi i6 [ 0, %154 ], [ %co_133, %.loopexit858.loopexit ]
  %exitcond121 = icmp eq i6 %co132, -16
  %empty_549 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_133 = add i6 %co132, 1
  br i1 %exitcond121, label %156, label %.preheader467.preheader

.preheader467.preheader:                          ; preds = %.loopexit858
  %tmp_1289 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co132, i3 0)
  %p_shl551_cast = zext i9 %tmp_1289 to i10
  %tmp_1290 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co132, i1 false)
  %p_shl552_cast = zext i7 %tmp_1290 to i10
  %tmp_1291 = add i10 %p_shl552_cast, %p_shl551_cast
  br label %.preheader467

.preheader467.loopexit:                           ; preds = %.preheader466
  br label %.preheader467

.preheader467:                                    ; preds = %.preheader467.loopexit, %.preheader467.preheader
  %h88 = phi i4 [ 0, %.preheader467.preheader ], [ %h_89, %.preheader467.loopexit ]
  %exitcond120 = icmp eq i4 %h88, -8
  %empty_550 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_89 = add i4 %h88, 1
  br i1 %exitcond120, label %.loopexit858.loopexit, label %.preheader466.preheader

.preheader466.preheader:                          ; preds = %.preheader467
  %tmp_581_cast = zext i4 %h_89 to i10
  %tmp_1310 = add i10 %tmp_581_cast, %tmp_1291
  %tmp_1311 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1310, i3 0)
  %p_shl553_cast = zext i13 %tmp_1311 to i15
  %tmp_1312 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1310, i1 false)
  %p_shl554_cast = zext i11 %tmp_1312 to i15
  %tmp_1313 = add i15 %p_shl553_cast, %p_shl554_cast
  br label %.preheader466

.preheader466:                                    ; preds = %155, %.preheader466.preheader
  %w87 = phi i4 [ %w_88, %155 ], [ 0, %.preheader466.preheader ]
  %exitcond119 = icmp eq i4 %w87, -8
  %empty_551 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_88 = add i4 %w87, 1
  br i1 %exitcond119, label %.preheader467.loopexit, label %155

; <label>:155                                     ; preds = %.preheader466
  %tmp_586_cast = zext i4 %w_88 to i15
  %tmp_1323 = add i15 %tmp_1313, %tmp_586_cast
  %tmp_1738_cast = zext i15 %tmp_1323 to i64
  %buffer0_1_48_8x8_p_a_13 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1738_cast
  %shuffleunit1_5_outpu_2 = getelementptr [9600 x float]* @shuffleunit1_5_outpu, i64 0, i64 %tmp_1738_cast
  %shuffleunit1_5_outpu_3 = load float* %shuffleunit1_5_outpu_2, align 4
  store float %shuffleunit1_5_outpu_3, float* %buffer0_1_48_8x8_p_a_13, align 4
  br label %.preheader466

; <label>:156                                     ; preds = %.loopexit858
  call fastcc void @shuffle_48_p([4800 x float]* @buffer0_1_48_8x8_p, [9600 x float]* @shuffleunit1_6_outpu) nounwind
  br label %.loopexit857

.loopexit857.loopexit:                            ; preds = %.preheader465
  br label %.loopexit857

.loopexit857:                                     ; preds = %.loopexit857.loopexit, %156
  %co134 = phi i6 [ 0, %156 ], [ %co_135, %.loopexit857.loopexit ]
  %co134_cast = zext i6 %co134 to i7
  %exitcond118 = icmp eq i6 %co134, -16
  %empty_552 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_135 = add i6 %co134, 1
  br i1 %exitcond118, label %.preheader463.preheader, label %.preheader465.preheader

.preheader463.preheader:                          ; preds = %.loopexit857
  br label %.preheader463

.preheader465.preheader:                          ; preds = %.loopexit857
  %tmp_580 = add i7 %co134_cast, 48
  %tmp_1304 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_580, i3 0)
  %p_shl557_cast = zext i10 %tmp_1304 to i11
  %tmp_1305 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp_580, i1 false)
  %p_shl558_cast = zext i8 %tmp_1305 to i11
  %tmp_1306 = add i11 %p_shl558_cast, %p_shl557_cast
  %tmp_1307 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co134, i3 0)
  %p_shl555_cast = zext i9 %tmp_1307 to i10
  %tmp_1308 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co134, i1 false)
  %p_shl556_cast = zext i7 %tmp_1308 to i10
  %tmp_1309 = add i10 %p_shl556_cast, %p_shl555_cast
  br label %.preheader465

.preheader465.loopexit:                           ; preds = %.preheader464
  br label %.preheader465

.preheader465:                                    ; preds = %.preheader465.loopexit, %.preheader465.preheader
  %h90 = phi i4 [ 0, %.preheader465.preheader ], [ %h_91, %.preheader465.loopexit ]
  %exitcond117 = icmp eq i4 %h90, -8
  %empty_553 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_91 = add i4 %h90, 1
  br i1 %exitcond117, label %.loopexit857.loopexit, label %.preheader464.preheader

.preheader464.preheader:                          ; preds = %.preheader465
  %tmp_584_cast1 = zext i4 %h_91 to i10
  %tmp_584_cast = zext i4 %h_91 to i11
  %tmp_1315 = add i11 %tmp_584_cast, %tmp_1306
  %tmp_1316 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1315, i3 0)
  %p_shl561_cast = zext i14 %tmp_1316 to i15
  %tmp_1317 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_1315, i1 false)
  %p_shl562_cast = zext i12 %tmp_1317 to i15
  %tmp_1318 = add i15 %p_shl561_cast, %p_shl562_cast
  %tmp_1319 = add i10 %tmp_584_cast1, %tmp_1309
  %tmp_1320 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1319, i3 0)
  %p_shl559_cast = zext i13 %tmp_1320 to i14
  %tmp_1321 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1319, i1 false)
  %p_shl560_cast = zext i11 %tmp_1321 to i14
  %tmp_1322 = add i14 %p_shl559_cast, %p_shl560_cast
  br label %.preheader464

.preheader464:                                    ; preds = %157, %.preheader464.preheader
  %w89 = phi i4 [ %w_90, %157 ], [ 0, %.preheader464.preheader ]
  %exitcond116 = icmp eq i4 %w89, -8
  %empty_554 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_90 = add i4 %w89, 1
  br i1 %exitcond116, label %.preheader465.loopexit, label %157

; <label>:157                                     ; preds = %.preheader464
  %tmp_590_cast1 = zext i4 %w_90 to i14
  %tmp_590_cast = zext i4 %w_90 to i15
  %tmp_1324 = add i15 %tmp_1318, %tmp_590_cast
  %tmp_1739_cast = zext i15 %tmp_1324 to i64
  %shuffleunit1_6_outpu = getelementptr [9600 x float]* @shuffleunit1_6_outpu, i64 0, i64 %tmp_1739_cast
  %tmp_1325 = add i14 %tmp_1322, %tmp_590_cast1
  %tmp_1740_cast = zext i14 %tmp_1325 to i64
  %buffer0_1_48_8x8_p_a_14 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1740_cast
  %shuffleunit1_6_outpu_1 = load float* %shuffleunit1_6_outpu, align 4
  store float %shuffleunit1_6_outpu_1, float* %buffer0_1_48_8x8_p_a_14, align 4
  br label %.preheader464

.preheader463.loopexit:                           ; preds = %.preheader462
  br label %.preheader463

.preheader463:                                    ; preds = %.preheader463.preheader, %.preheader463.loopexit
  %co136 = phi i5 [ %co_137, %.preheader463.loopexit ], [ 0, %.preheader463.preheader ]
  %co136_cast301_cast = zext i5 %co136 to i9
  %exitcond115 = icmp eq i5 %co136, -8
  %empty_555 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_137 = add i5 %co136, 1
  br i1 %exitcond115, label %.preheader460.preheader, label %.preheader462.preheader

.preheader460.preheader:                          ; preds = %.preheader463
  br label %.preheader460

.preheader462.preheader:                          ; preds = %.preheader463
  %tmp_1314 = trunc i5 %co136 to i1
  %p_shl172 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1314, i5 0)
  %p_shl172_cast = zext i6 %p_shl172 to i7
  %p_shl173 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1314, i3 0)
  %p_shl173_cast = zext i4 %p_shl173 to i7
  %tmp_583 = sub i7 %p_shl172_cast, %p_shl173_cast
  %p_lshr_f17_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co136, i32 1, i32 4)
  %tmp_787_cast = zext i4 %p_lshr_f17_cast to i7
  br label %.preheader462

.preheader462.loopexit:                           ; preds = %.preheader461
  br label %.preheader462

.preheader462:                                    ; preds = %.preheader462.loopexit, %.preheader462.preheader
  %ci60 = phi i5 [ 0, %.preheader462.preheader ], [ %ci_61, %.preheader462.loopexit ]
  %ci60_cast = zext i5 %ci60 to i7
  %exitcond114 = icmp eq i5 %ci60, -8
  %empty_556 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_61 = add i5 %ci60, 1
  br i1 %exitcond114, label %.preheader463.loopexit, label %.preheader461.preheader

.preheader461.preheader:                          ; preds = %.preheader462
  %tmp_587_cast = zext i5 %ci60 to i18
  %tmp_588 = add i7 %tmp_583, %ci60_cast
  %tmp_589_cast = sext i7 %tmp_588 to i13
  br label %.preheader461

.preheader461:                                    ; preds = %158, %.preheader461.preheader
  %i130 = phi i3 [ %i_131, %158 ], [ 0, %.preheader461.preheader ]
  %exitcond113 = icmp eq i3 %i130, -4
  %empty_557 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_131 = add i3 %i130, 1
  br i1 %exitcond113, label %.preheader462.loopexit, label %158

; <label>:158                                     ; preds = %.preheader461
  %tmp_1327 = trunc i3 %i130 to i2
  %p_shl176 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1327, i5 0)
  %p_shl176_cast = zext i7 %p_shl176 to i8
  %p_shl177 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1327, i3 0)
  %p_shl177_cast = zext i5 %p_shl177 to i8
  %tmp_596 = sub i8 %p_shl176_cast, %p_shl177_cast
  %tmp_802_cast_cast = sext i8 %tmp_596 to i9
  %tmp53 = add i9 -200, %tmp_802_cast_cast
  %tmp_597 = add i9 %tmp53, %co136_cast301_cast
  %tmp_1328 = call i14 @_ssdm_op_BitConcatenate.i14.i9.i5(i9 %tmp_597, i5 0)
  %tmp_1329 = sext i14 %tmp_1328 to i16
  %p_shl565_cast = zext i16 %tmp_1329 to i17
  %tmp_1330 = call i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9 %tmp_597, i3 0)
  %tmp_1331 = sext i12 %tmp_1330 to i14
  %p_shl566_cast = zext i14 %tmp_1331 to i17
  %tmp_1332 = sub i17 %p_shl565_cast, %p_shl566_cast
  %tmp_1749_cast = sext i17 %tmp_1332 to i18
  %tmp_1333 = add i18 %tmp_587_cast, %tmp_1749_cast
  %tmp_1750_cast = sext i18 %tmp_1333 to i64
  %shuffle_conv_1x1_add_26 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1750_cast
  %shuffle_conv_1x1_loa_26 = load float* %shuffle_conv_1x1_add_26, align 4
  %p_shl178 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1327, i4 0)
  %p_shl178_cast = zext i6 %p_shl178 to i7
  %p_shl179 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1327, i2 0)
  %p_shl179_cast = zext i4 %p_shl179 to i7
  %tmp_598 = sub i7 %p_shl178_cast, %p_shl179_cast
  %tmp_599 = add i7 %tmp_598, %tmp_787_cast
  %tmp_1334 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_599, i6 0)
  %tmp_1335 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_599, i4 0)
  %p_shl564_cast = sext i11 %tmp_1335 to i13
  %tmp_1336 = sub i13 %tmp_1334, %p_shl564_cast
  %tmp_1337 = add i13 %tmp_589_cast, %tmp_1336
  %tmp_1758_cast = sext i13 %tmp_1337 to i64
  %weights_48_48_1x1_ad_17 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1758_cast
  store float %shuffle_conv_1x1_loa_26, float* %weights_48_48_1x1_ad_17, align 4
  br label %.preheader461

.preheader460.loopexit:                           ; preds = %.preheader459
  br label %.preheader460

.preheader460:                                    ; preds = %.preheader460.preheader, %.preheader460.loopexit
  %i128 = phi i5 [ %i_129, %.preheader460.loopexit ], [ 0, %.preheader460.preheader ]
  %i129_cast = zext i5 %i128 to i7
  %i129_cast291_cast = zext i5 %i128 to i10
  %exitcond112 = icmp eq i5 %i128, -8
  %empty_558 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_129 = add i5 %i128, 1
  br i1 %exitcond112, label %160, label %.preheader459.preheader

.preheader459.preheader:                          ; preds = %.preheader460
  br label %.preheader459

.preheader459:                                    ; preds = %.preheader459.preheader, %159
  %k44 = phi i2 [ %k_45, %159 ], [ 0, %.preheader459.preheader ]
  %exitcond111 = icmp eq i2 %k44, -2
  %empty_559 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_45 = add i2 %k44, 1
  br i1 %exitcond111, label %.preheader460.loopexit, label %159

; <label>:159                                     ; preds = %.preheader459
  %tmp_1326 = trunc i2 %k44 to i1
  %p_shl174 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1326, i5 0)
  %p_shl174_cast = zext i6 %p_shl174 to i7
  %p_shl175 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1326, i3 0)
  %p_shl175_cast = zext i4 %p_shl175 to i7
  %tmp_591 = sub i7 %p_shl174_cast, %p_shl175_cast
  %tmp_791_cast_cast = sext i7 %tmp_591 to i10
  %tmp54 = add i10 -440, %tmp_791_cast_cast
  %tmp_592 = add i10 %i129_cast291_cast, %tmp54
  %tmp_793_cast = sext i10 %tmp_592 to i11
  %tmp_593 = zext i11 %tmp_793_cast to i64
  %bias_addr_43 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_593
  %bias_load_43 = load float* %bias_addr_43, align 4
  %tmp_594 = add i7 %tmp_591, %i129_cast
  %tmp_795_cast = sext i7 %tmp_594 to i32
  %tmp_595 = zext i32 %tmp_795_cast to i64
  %bias_48_addr_26 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_595
  store float %bias_load_43, float* %bias_48_addr_26, align 4
  br label %.preheader459

; <label>:160                                     ; preds = %.preheader460
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit856

.loopexit856.loopexit:                            ; preds = %.preheader458
  br label %.loopexit856

.loopexit856:                                     ; preds = %.loopexit856.loopexit, %160
  %co138 = phi i5 [ 0, %160 ], [ %co_139, %.loopexit856.loopexit ]
  %co139_cast = zext i5 %co138 to i7
  %co139_cast1 = zext i5 %co138 to i10
  %exitcond110 = icmp eq i5 %co138, -8
  %empty_560 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_139 = add i5 %co138, 1
  br i1 %exitcond110, label %.preheader455.preheader, label %.preheader458.preheader

.preheader458.preheader:                          ; preds = %.loopexit856
  br label %.preheader458

.preheader455.preheader:                          ; preds = %.loopexit856
  br label %.preheader455

.preheader458.loopexit:                           ; preds = %.preheader457
  br label %.preheader458

.preheader458:                                    ; preds = %.preheader458.preheader, %.preheader458.loopexit
  %w91 = phi i2 [ %w_92, %.preheader458.loopexit ], [ 0, %.preheader458.preheader ]
  %exitcond109 = icmp eq i2 %w91, -1
  %empty_561 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_92 = add i2 %w91, 1
  br i1 %exitcond109, label %.loopexit856.loopexit, label %.preheader457.preheader

.preheader457.preheader:                          ; preds = %.preheader458
  %tmp_600_cast1 = zext i2 %w91 to i36
  %tmp_600_cast = zext i2 %w91 to i13
  br label %.preheader457

.preheader457.loopexit:                           ; preds = %.preheader456
  br label %.preheader457

.preheader457:                                    ; preds = %.preheader457.loopexit, %.preheader457.preheader
  %h92 = phi i2 [ 0, %.preheader457.preheader ], [ %h_93, %.preheader457.loopexit ]
  %exitcond108 = icmp eq i2 %h92, -1
  %empty_562 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_93 = add i2 %h92, 1
  br i1 %exitcond108, label %.preheader458.loopexit, label %.preheader456.preheader

.preheader456.preheader:                          ; preds = %.preheader457
  %tmp_608_cast1 = zext i2 %h92 to i10
  %tmp_608_cast = zext i2 %h92 to i15
  br label %.preheader456

.preheader456:                                    ; preds = %161, %.preheader456.preheader
  %i136 = phi i2 [ %i_137, %161 ], [ 0, %.preheader456.preheader ]
  %exitcond107 = icmp eq i2 %i136, -2
  %empty_563 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_137 = add i2 %i136, 1
  br i1 %exitcond107, label %.preheader457.loopexit, label %161

; <label>:161                                     ; preds = %.preheader456
  %tmp_1340 = trunc i2 %i136 to i1
  %p_shl186 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1340, i5 0)
  %p_shl186_cast = zext i6 %p_shl186 to i7
  %p_shl187 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1340, i3 0)
  %p_shl187_cast = zext i4 %p_shl187 to i7
  %tmp_614 = sub i7 %p_shl186_cast, %p_shl187_cast
  %tmp_828_cast = sext i7 %tmp_614 to i10
  %tmp55 = add i10 -472, %tmp_828_cast
  %tmp_617 = add i10 %co139_cast1, %tmp55
  %tmp_618_cast = zext i10 %tmp_617 to i13
  %tmp_1341 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_617, i2 0)
  %p_shl570_cast = zext i12 %tmp_1341 to i13
  %tmp_1342 = sub i13 %p_shl570_cast, %tmp_618_cast
  %tmp_1343 = add i13 %tmp_1342, %tmp_600_cast
  %tmp_1767_cast = sext i13 %tmp_1343 to i15
  %p_shl569_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1343, i2 0)
  %tmp_1344 = sub i15 %p_shl569_cast, %tmp_1767_cast
  %tmp_1345 = add i15 %tmp_1344, %tmp_608_cast
  %tmp_1770_cast = zext i15 %tmp_1345 to i64
  %shuffle_conv_3x3_add_14 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1770_cast
  %shuffle_conv_3x3_loa_14 = load float* %shuffle_conv_3x3_add_14, align 4
  %tmp_619 = add i7 %tmp_614, %co139_cast
  %tmp_832_cast = sext i7 %tmp_619 to i32
  %tmp_620_cast = zext i32 %tmp_832_cast to i35
  %tmp_1346 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_619, i2 0)
  %tmp_1347 = sext i9 %tmp_1346 to i34
  %p_shl568_cast = zext i34 %tmp_1347 to i35
  %tmp_1348 = sub i35 %p_shl568_cast, %tmp_620_cast
  %tmp_1773_cast = sext i35 %tmp_1348 to i36
  %tmp_1349 = add i36 %tmp_1773_cast, %tmp_600_cast1
  %tmp_1350 = trunc i36 %tmp_1349 to i10
  %tmp_1351 = trunc i36 %tmp_1349 to i8
  %p_shl567_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1351, i2 0)
  %tmp_1352 = sub i10 %p_shl567_cast, %tmp_1350
  %tmp_1353 = add i10 %tmp_1352, %tmp_608_cast1
  %tmp_1777_cast = zext i10 %tmp_1353 to i64
  %weights_48_1_3x3_add_9 = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1777_cast
  store float %shuffle_conv_3x3_loa_14, float* %weights_48_1_3x3_add_9, align 4
  br label %.preheader456

.preheader455.loopexit:                           ; preds = %.preheader454
  br label %.preheader455

.preheader455:                                    ; preds = %.preheader455.preheader, %.preheader455.loopexit
  %i132 = phi i5 [ %i_133, %.preheader455.loopexit ], [ 0, %.preheader455.preheader ]
  %i133_cast = zext i5 %i132 to i7
  %i133_cast281_cast = zext i5 %i132 to i10
  %exitcond106 = icmp eq i5 %i132, -8
  %empty_564 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_133 = add i5 %i132, 1
  br i1 %exitcond106, label %163, label %.preheader454.preheader

.preheader454.preheader:                          ; preds = %.preheader455
  br label %.preheader454

.preheader454:                                    ; preds = %.preheader454.preheader, %162
  %k46 = phi i2 [ %k_47, %162 ], [ 0, %.preheader454.preheader ]
  %exitcond105 = icmp eq i2 %k46, -2
  %empty_565 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_47 = add i2 %k46, 1
  br i1 %exitcond105, label %.preheader455.loopexit, label %162

; <label>:162                                     ; preds = %.preheader454
  %tmp_1339 = trunc i2 %k46 to i1
  %p_shl180 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1339, i5 0)
  %p_shl180_cast = zext i6 %p_shl180 to i7
  %p_shl181 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1339, i3 0)
  %p_shl181_cast = zext i4 %p_shl181 to i7
  %tmp_603 = sub i7 %p_shl180_cast, %p_shl181_cast
  %tmp_809_cast_cast = sext i7 %tmp_603 to i10
  %tmp56 = add i10 -392, %tmp_809_cast_cast
  %tmp_604 = add i10 %i133_cast281_cast, %tmp56
  %tmp_811_cast = sext i10 %tmp_604 to i11
  %tmp_605 = zext i11 %tmp_811_cast to i64
  %bias_addr_44 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_605
  %bias_load_44 = load float* %bias_addr_44, align 4
  %tmp_606 = add i7 %tmp_603, %i133_cast
  %tmp_813_cast = sext i7 %tmp_606 to i32
  %tmp_607 = zext i32 %tmp_813_cast to i64
  %bias_48_addr_27 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_607
  store float %bias_load_44, float* %bias_48_addr_27, align 4
  br label %.preheader454

; <label>:163                                     ; preds = %.preheader455
  call fastcc void @subconv_3x3_8_no_rel([4800 x float]* @buffer1_1_48_8x8_p, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [4800 x float]* @buffer0_1_48_8x8_p) nounwind
  br label %.loopexit855

.loopexit855.loopexit:                            ; preds = %.preheader453
  br label %.loopexit855

.loopexit855:                                     ; preds = %.loopexit855.loopexit, %163
  %co140 = phi i5 [ 0, %163 ], [ %co_141, %.loopexit855.loopexit ]
  %co141_cast = zext i5 %co140 to i12
  %exitcond104 = icmp eq i5 %co140, -8
  %empty_566 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_141 = add i5 %co140, 1
  br i1 %exitcond104, label %.preheader451.preheader, label %.preheader453.preheader

.preheader451.preheader:                          ; preds = %.loopexit855
  br label %.preheader451

.preheader453.preheader:                          ; preds = %.loopexit855
  %tmp_1338 = trunc i5 %co140 to i1
  %p_shl182 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1338, i5 0)
  %p_shl182_cast = zext i6 %p_shl182 to i7
  %p_shl183 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1338, i3 0)
  %p_shl183_cast = zext i4 %p_shl183 to i7
  %tmp_601 = sub i7 %p_shl182_cast, %p_shl183_cast
  %p_lshr_f18_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co140, i32 1, i32 4)
  %tmp_817_cast = zext i4 %p_lshr_f18_cast to i7
  br label %.preheader453

.preheader453.loopexit:                           ; preds = %.preheader452
  br label %.preheader453

.preheader453:                                    ; preds = %.preheader453.loopexit, %.preheader453.preheader
  %ci62 = phi i5 [ 0, %.preheader453.preheader ], [ %ci_63, %.preheader453.loopexit ]
  %ci62_cast = zext i5 %ci62 to i7
  %exitcond103 = icmp eq i5 %ci62, -8
  %empty_567 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_63 = add i5 %ci62, 1
  br i1 %exitcond103, label %.loopexit855.loopexit, label %.preheader452.preheader

.preheader452.preheader:                          ; preds = %.preheader453
  %tmp_609_cast = zext i5 %ci62 to i19
  %tmp_611 = add i7 %tmp_601, %ci62_cast
  %tmp_612_cast = sext i7 %tmp_611 to i13
  br label %.preheader452

.preheader452:                                    ; preds = %164, %.preheader452.preheader
  %i138 = phi i3 [ %i_139, %164 ], [ 0, %.preheader452.preheader ]
  %exitcond102 = icmp eq i3 %i138, -4
  %empty_568 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_139 = add i3 %i138, 1
  br i1 %exitcond102, label %.preheader453.loopexit, label %164

; <label>:164                                     ; preds = %.preheader452
  %tmp_1358 = trunc i3 %i138 to i2
  %p_shl188 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1358, i5 0)
  %p_shl188_cast = zext i7 %p_shl188 to i8
  %p_shl189 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1358, i3 0)
  %p_shl189_cast = zext i5 %p_shl189 to i8
  %tmp_626 = sub i8 %p_shl188_cast, %p_shl189_cast
  %tmp_835_cast_cast = sext i8 %tmp_626 to i9
  %tmp57 = add i9 -104, %tmp_835_cast_cast
  %tmp57_cast1 = sext i9 %tmp57 to i11
  %tmp57_cast = zext i11 %tmp57_cast1 to i12
  %tmp_627 = add i12 %tmp57_cast, %co141_cast
  %tmp_1359 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_627, i5 0)
  %p_shl573_cast = zext i17 %tmp_1359 to i18
  %tmp_1360 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_627, i3 0)
  %p_shl574_cast = zext i15 %tmp_1360 to i18
  %tmp_1361 = sub i18 %p_shl573_cast, %p_shl574_cast
  %tmp_1787_cast = sext i18 %tmp_1361 to i19
  %tmp_1362 = add i19 %tmp_609_cast, %tmp_1787_cast
  %tmp_1788_cast = sext i19 %tmp_1362 to i64
  %shuffle_conv_1x1_add_27 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1788_cast
  %shuffle_conv_1x1_loa_27 = load float* %shuffle_conv_1x1_add_27, align 4
  %p_shl190 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1358, i4 0)
  %p_shl190_cast = zext i6 %p_shl190 to i7
  %p_shl191 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1358, i2 0)
  %p_shl191_cast = zext i4 %p_shl191 to i7
  %tmp_628 = sub i7 %p_shl190_cast, %p_shl191_cast
  %tmp_629 = add i7 %tmp_628, %tmp_817_cast
  %tmp_1363 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_629, i6 0)
  %tmp_1364 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_629, i4 0)
  %p_shl572_cast = sext i11 %tmp_1364 to i13
  %tmp_1365 = sub i13 %tmp_1363, %p_shl572_cast
  %tmp_1366 = add i13 %tmp_612_cast, %tmp_1365
  %tmp_1796_cast = sext i13 %tmp_1366 to i64
  %weights_48_48_1x1_ad_18 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1796_cast
  store float %shuffle_conv_1x1_loa_27, float* %weights_48_48_1x1_ad_18, align 4
  br label %.preheader452

.preheader451.loopexit:                           ; preds = %.preheader450
  br label %.preheader451

.preheader451:                                    ; preds = %.preheader451.preheader, %.preheader451.loopexit
  %i134 = phi i5 [ %i_135, %.preheader451.loopexit ], [ 0, %.preheader451.preheader ]
  %i135_cast = zext i5 %i134 to i7
  %i135_cast268_cast = zext i5 %i134 to i10
  %exitcond101 = icmp eq i5 %i134, -8
  %empty_569 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_135 = add i5 %i134, 1
  br i1 %exitcond101, label %166, label %.preheader450.preheader

.preheader450.preheader:                          ; preds = %.preheader451
  br label %.preheader450

.preheader450:                                    ; preds = %.preheader450.preheader, %165
  %k48 = phi i2 [ %k_49, %165 ], [ 0, %.preheader450.preheader ]
  %exitcond100 = icmp eq i2 %k48, -2
  %empty_570 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_49 = add i2 %k48, 1
  br i1 %exitcond100, label %.preheader451.loopexit, label %165

; <label>:165                                     ; preds = %.preheader450
  %tmp_1357 = trunc i2 %k48 to i1
  %p_shl184 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1357, i5 0)
  %p_shl184_cast = zext i6 %p_shl184 to i7
  %p_shl185 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1357, i3 0)
  %p_shl185_cast = zext i4 %p_shl185 to i7
  %tmp_621 = sub i7 %p_shl184_cast, %p_shl185_cast
  %tmp_819_cast_cast = sext i7 %tmp_621 to i10
  %tmp58 = add i10 -344, %tmp_819_cast_cast
  %tmp_622 = add i10 %i135_cast268_cast, %tmp58
  %tmp_821_cast = sext i10 %tmp_622 to i11
  %tmp_623 = zext i11 %tmp_821_cast to i64
  %bias_addr_45 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_623
  %bias_load_45 = load float* %bias_addr_45, align 4
  %tmp_624 = add i7 %tmp_621, %i135_cast
  %tmp_823_cast = sext i7 %tmp_624 to i32
  %tmp_625 = zext i32 %tmp_823_cast to i64
  %bias_48_addr_28 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_625
  store float %bias_load_45, float* %bias_48_addr_28, align 4
  br label %.preheader450

; <label>:166                                     ; preds = %.preheader451
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit854

.loopexit854.loopexit:                            ; preds = %.preheader449
  br label %.loopexit854

.loopexit854:                                     ; preds = %.loopexit854.loopexit, %166
  %co142 = phi i6 [ 0, %166 ], [ %co_143, %.loopexit854.loopexit ]
  %exitcond99 = icmp eq i6 %co142, -16
  %empty_571 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_143 = add i6 %co142, 1
  br i1 %exitcond99, label %168, label %.preheader449.preheader

.preheader449.preheader:                          ; preds = %.loopexit854
  %tmp_1354 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co142, i3 0)
  %p_shl575_cast = zext i9 %tmp_1354 to i10
  %tmp_1355 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co142, i1 false)
  %p_shl576_cast = zext i7 %tmp_1355 to i10
  %tmp_1356 = add i10 %p_shl576_cast, %p_shl575_cast
  br label %.preheader449

.preheader449.loopexit:                           ; preds = %.preheader448
  br label %.preheader449

.preheader449:                                    ; preds = %.preheader449.loopexit, %.preheader449.preheader
  %h94 = phi i4 [ 0, %.preheader449.preheader ], [ %h_95, %.preheader449.loopexit ]
  %exitcond98 = icmp eq i4 %h94, -8
  %empty_572 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_95 = add i4 %h94, 1
  br i1 %exitcond98, label %.loopexit854.loopexit, label %.preheader448.preheader

.preheader448.preheader:                          ; preds = %.preheader449
  %tmp_631_cast = zext i4 %h_95 to i10
  %tmp_1369 = add i10 %tmp_631_cast, %tmp_1356
  %tmp_1370 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1369, i3 0)
  %p_shl577_cast = zext i13 %tmp_1370 to i15
  %tmp_1371 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1369, i1 false)
  %p_shl578_cast = zext i11 %tmp_1371 to i15
  %tmp_1372 = add i15 %p_shl577_cast, %p_shl578_cast
  br label %.preheader448

.preheader448:                                    ; preds = %167, %.preheader448.preheader
  %w93 = phi i4 [ %w_94, %167 ], [ 0, %.preheader448.preheader ]
  %exitcond97 = icmp eq i4 %w93, -8
  %empty_573 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_94 = add i4 %w93, 1
  br i1 %exitcond97, label %.preheader449.loopexit, label %167

; <label>:167                                     ; preds = %.preheader448
  %tmp_637_cast1 = zext i4 %w_94 to i15
  %tmp_1373 = add i15 %tmp_1372, %tmp_637_cast1
  %tmp_1803_cast = zext i15 %tmp_1373 to i64
  %shuffleunit1_6_outpu_2 = getelementptr [9600 x float]* @shuffleunit1_6_outpu, i64 0, i64 %tmp_1803_cast
  %buffer0_1_48_8x8_p_a_15 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1803_cast
  %shuffleunit1_6_outpu_3 = load float* %shuffleunit1_6_outpu_2, align 4
  store float %shuffleunit1_6_outpu_3, float* %buffer0_1_48_8x8_p_a_15, align 4
  br label %.preheader448

; <label>:168                                     ; preds = %.loopexit854
  call fastcc void @shuffle_48_p([4800 x float]* @buffer0_1_48_8x8_p, [9600 x float]* @shuffleunit1_7_outpu) nounwind
  br label %.loopexit853

.loopexit853.loopexit:                            ; preds = %.preheader447
  br label %.loopexit853

.loopexit853:                                     ; preds = %.loopexit853.loopexit, %168
  %co144 = phi i5 [ 0, %168 ], [ %co_145, %.loopexit853.loopexit ]
  %co144_cast = zext i5 %co144 to i12
  %exitcond96 = icmp eq i5 %co144, -8
  %empty_574 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_145 = add i5 %co144, 1
  br i1 %exitcond96, label %.preheader445.preheader, label %.preheader447.preheader

.preheader445.preheader:                          ; preds = %.loopexit853
  br label %.preheader445

.preheader447.preheader:                          ; preds = %.loopexit853
  %tmp_1367 = trunc i5 %co144 to i2
  %p_shl192 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1367, i5 0)
  %p_shl192_cast = zext i7 %p_shl192 to i8
  %tmp_1368 = shl i5 %co144, 3
  %p_shl193_cast = zext i5 %tmp_1368 to i8
  %tmp_630 = sub i8 %p_shl192_cast, %p_shl193_cast
  %p_lshr_f19_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co144, i32 2, i32 4)
  %tmp_843_cast = zext i3 %p_lshr_f19_cast to i8
  br label %.preheader447

.preheader447.loopexit:                           ; preds = %.preheader446
  br label %.preheader447

.preheader447:                                    ; preds = %.preheader447.loopexit, %.preheader447.preheader
  %ci64 = phi i5 [ 0, %.preheader447.preheader ], [ %ci_65, %.preheader447.loopexit ]
  %ci64_cast = zext i5 %ci64 to i8
  %exitcond95 = icmp eq i5 %ci64, -8
  %empty_575 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_65 = add i5 %ci64, 1
  br i1 %exitcond95, label %.loopexit853.loopexit, label %.preheader446.preheader

.preheader446.preheader:                          ; preds = %.preheader447
  %tmp_633_cast1 = zext i5 %ci64 to i19
  %tmp_634 = add i8 %tmp_630, %ci64_cast
  %tmp_636_cast = sext i8 %tmp_634 to i15
  br label %.preheader446

.preheader446:                                    ; preds = %169, %.preheader446.preheader
  %i142 = phi i5 [ %i_143, %169 ], [ 0, %.preheader446.preheader ]
  %exitcond94 = icmp eq i5 %i142, -16
  %empty_576 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %i_143 = add i5 %i142, 1
  br i1 %exitcond94, label %.preheader447.loopexit, label %169

; <label>:169                                     ; preds = %.preheader446
  %tmp_1375 = trunc i5 %i142 to i4
  %p_shl195 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1375, i5 0)
  %p_shl196_cast = zext i9 %p_shl195 to i10
  %p_shl196 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1375, i3 0)
  %p_shl197_cast1 = zext i7 %p_shl196 to i8
  %p_shl197_cast = zext i7 %p_shl196 to i10
  %tmp_643 = sub i10 %p_shl196_cast, %p_shl197_cast
  %tmp_857_cast = sext i10 %tmp_643 to i12
  %tmp59 = add i12 2040, %tmp_857_cast
  %tmp_644 = add i12 %tmp59, %co144_cast
  %tmp_1376 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_644, i5 0)
  %p_shl581_cast = zext i17 %tmp_1376 to i18
  %tmp_1377 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_644, i3 0)
  %p_shl582_cast = zext i15 %tmp_1377 to i18
  %tmp_1378 = sub i18 %p_shl581_cast, %p_shl582_cast
  %tmp_1810_cast = sext i18 %tmp_1378 to i19
  %tmp_1379 = add i19 %tmp_633_cast1, %tmp_1810_cast
  %tmp_1811_cast = sext i19 %tmp_1379 to i64
  %shuffle_conv_1x1_add_28 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1811_cast
  %shuffle_conv_1x1_loa_28 = load float* %shuffle_conv_1x1_add_28, align 4
  %tmp_1380 = shl i5 %i142, 1
  %p_shl198_cast = zext i5 %tmp_1380 to i8
  %tmp_645 = sub i8 %p_shl197_cast1, %p_shl198_cast
  %tmp_646 = add i8 %tmp_645, %tmp_843_cast
  %tmp_1381 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_646, i7 0)
  %tmp_1382 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_646, i5 0)
  %p_shl580_cast = sext i13 %tmp_1382 to i15
  %tmp_1383 = sub i15 %tmp_1381, %p_shl580_cast
  %tmp_1384 = add i15 %tmp_636_cast, %tmp_1383
  %tmp_1818_cast = sext i15 %tmp_1384 to i64
  %weights_96_96_1x1_ad = getelementptr [9216 x float]* @weights_96_96_1x1, i64 0, i64 %tmp_1818_cast
  store float %shuffle_conv_1x1_loa_28, float* %weights_96_96_1x1_ad, align 4
  br label %.preheader446

.preheader445.loopexit:                           ; preds = %.preheader444
  br label %.preheader445

.preheader445:                                    ; preds = %.preheader445.preheader, %.preheader445.loopexit
  %i140 = phi i5 [ %i_141, %.preheader445.loopexit ], [ 0, %.preheader445.preheader ]
  %i141_cast = zext i5 %i140 to i8
  %i141_cast254_cast = zext i5 %i140 to i10
  %exitcond93 = icmp eq i5 %i140, -8
  %empty_577 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_141 = add i5 %i140, 1
  br i1 %exitcond93, label %171, label %.preheader444.preheader

.preheader444.preheader:                          ; preds = %.preheader445
  br label %.preheader444

.preheader444:                                    ; preds = %.preheader444.preheader, %170
  %k50 = phi i3 [ %k_51, %170 ], [ 0, %.preheader444.preheader ]
  %exitcond92 = icmp eq i3 %k50, -4
  %empty_578 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_51 = add i3 %k50, 1
  br i1 %exitcond92, label %.preheader445.loopexit, label %170

; <label>:170                                     ; preds = %.preheader444
  %tmp_1374 = trunc i3 %k50 to i2
  %p_shl193 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1374, i5 0)
  %p_shl194_cast = zext i7 %p_shl193 to i8
  %p_shl194 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1374, i3 0)
  %p_shl195_cast = zext i5 %p_shl194 to i8
  %tmp_638 = sub i8 %p_shl194_cast, %p_shl195_cast
  %tmp_846_cast_cast = sext i8 %tmp_638 to i10
  %tmp60 = add i10 -296, %tmp_846_cast_cast
  %tmp_639 = add i10 %i141_cast254_cast, %tmp60
  %tmp_848_cast = sext i10 %tmp_639 to i11
  %tmp_640 = zext i11 %tmp_848_cast to i64
  %bias_addr_46 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_640
  %bias_load_46 = load float* %bias_addr_46, align 4
  %tmp_641 = add i8 %tmp_638, %i141_cast
  %tmp_850_cast = sext i8 %tmp_641 to i32
  %tmp_642 = zext i32 %tmp_850_cast to i64
  %bias_96_addr = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_642
  store float %bias_load_46, float* %bias_96_addr, align 4
  br label %.preheader444

; <label>:171                                     ; preds = %.preheader445
  call fastcc void @subconv_1x1_8p_p([9216 x float]* @weights_96_96_1x1, [96 x float]* @bias_96) nounwind
  br label %.loopexit852

.loopexit852.loopexit:                            ; preds = %.preheader443
  br label %.loopexit852

.loopexit852:                                     ; preds = %.loopexit852.loopexit, %171
  %co146 = phi i5 [ 0, %171 ], [ %co_147, %.loopexit852.loopexit ]
  %co147_cast = zext i5 %co146 to i8
  %co147_cast1 = zext i5 %co146 to i10
  %exitcond91 = icmp eq i5 %co146, -8
  %empty_579 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_147 = add i5 %co146, 1
  br i1 %exitcond91, label %.preheader440.preheader, label %.preheader443.preheader

.preheader443.preheader:                          ; preds = %.loopexit852
  br label %.preheader443

.preheader440.preheader:                          ; preds = %.loopexit852
  br label %.preheader440

.preheader443.loopexit:                           ; preds = %.preheader442
  br label %.preheader443

.preheader443:                                    ; preds = %.preheader443.preheader, %.preheader443.loopexit
  %w95 = phi i2 [ %w_96, %.preheader443.loopexit ], [ 0, %.preheader443.preheader ]
  %exitcond90 = icmp eq i2 %w95, -1
  %empty_580 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_96 = add i2 %w95, 1
  br i1 %exitcond90, label %.loopexit852.loopexit, label %.preheader442.preheader

.preheader442.preheader:                          ; preds = %.preheader443
  %tmp_647_cast1 = zext i2 %w95 to i36
  %tmp_647_cast = zext i2 %w95 to i13
  br label %.preheader442

.preheader442.loopexit:                           ; preds = %.preheader441
  br label %.preheader442

.preheader442:                                    ; preds = %.preheader442.loopexit, %.preheader442.preheader
  %h96 = phi i2 [ 0, %.preheader442.preheader ], [ %h_97, %.preheader442.loopexit ]
  %exitcond89 = icmp eq i2 %h96, -1
  %empty_581 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_97 = add i2 %h96, 1
  br i1 %exitcond89, label %.preheader443.loopexit, label %.preheader441.preheader

.preheader441.preheader:                          ; preds = %.preheader442
  %tmp_655_cast1 = zext i2 %h96 to i11
  %tmp_655_cast2 = zext i2 %h96 to i15
  br label %.preheader441

.preheader441:                                    ; preds = %172, %.preheader441.preheader
  %i148 = phi i3 [ %i_149, %172 ], [ 0, %.preheader441.preheader ]
  %exitcond88 = icmp eq i3 %i148, -4
  %empty_582 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_149 = add i3 %i148, 1
  br i1 %exitcond88, label %.preheader442.loopexit, label %172

; <label>:172                                     ; preds = %.preheader441
  %tmp_1388 = trunc i3 %i148 to i2
  %p_shl200 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1388, i5 0)
  %p_shl205_cast = zext i7 %p_shl200 to i8
  %p_shl201 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1388, i3 0)
  %p_shl206_cast = zext i5 %p_shl201 to i8
  %tmp_659 = sub i8 %p_shl205_cast, %p_shl206_cast
  %tmp_883_cast = sext i8 %tmp_659 to i10
  %tmp61 = add i10 -424, %tmp_883_cast
  %tmp_661 = add i10 %co147_cast1, %tmp61
  %tmp_662_cast = zext i10 %tmp_661 to i13
  %tmp_1389 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_661, i2 0)
  %p_shl586_cast = zext i12 %tmp_1389 to i13
  %tmp_1390 = sub i13 %p_shl586_cast, %tmp_662_cast
  %tmp_1391 = add i13 %tmp_1390, %tmp_647_cast
  %tmp_1827_cast = sext i13 %tmp_1391 to i15
  %p_shl585_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1391, i2 0)
  %tmp_1392 = sub i15 %p_shl585_cast, %tmp_1827_cast
  %tmp_1393 = add i15 %tmp_1392, %tmp_655_cast2
  %tmp_1830_cast = zext i15 %tmp_1393 to i64
  %shuffle_conv_3x3_add_15 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1830_cast
  %shuffle_conv_3x3_loa_15 = load float* %shuffle_conv_3x3_add_15, align 4
  %tmp_664 = add i8 %tmp_659, %co147_cast
  %tmp_887_cast = sext i8 %tmp_664 to i32
  %tmp_667_cast1 = zext i32 %tmp_887_cast to i35
  %tmp_1394 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_664, i2 0)
  %tmp_1395 = sext i10 %tmp_1394 to i34
  %p_shl584_cast = zext i34 %tmp_1395 to i35
  %tmp_1396 = sub i35 %p_shl584_cast, %tmp_667_cast1
  %tmp_1833_cast = sext i35 %tmp_1396 to i36
  %tmp_1397 = add i36 %tmp_1833_cast, %tmp_647_cast1
  %tmp_1398 = trunc i36 %tmp_1397 to i11
  %tmp_1399 = trunc i36 %tmp_1397 to i9
  %p_shl583_cast = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_1399, i2 0)
  %tmp_1400 = sub i11 %p_shl583_cast, %tmp_1398
  %tmp_1401 = add i11 %tmp_1400, %tmp_655_cast1
  %tmp_1837_cast = zext i11 %tmp_1401 to i64
  %weights_96_1_3x3_add = getelementptr [864 x float]* @weights_96_1_3x3, i64 0, i64 %tmp_1837_cast
  store float %shuffle_conv_3x3_loa_15, float* %weights_96_1_3x3_add, align 4
  br label %.preheader441

.preheader440.loopexit:                           ; preds = %.preheader439
  br label %.preheader440

.preheader440:                                    ; preds = %.preheader440.preheader, %.preheader440.loopexit
  %i144 = phi i5 [ %i_145, %.preheader440.loopexit ], [ 0, %.preheader440.preheader ]
  %i145_cast = zext i5 %i144 to i8
  %i145_cast244_cast = zext i5 %i144 to i9
  %exitcond87 = icmp eq i5 %i144, -8
  %empty_583 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_145 = add i5 %i144, 1
  br i1 %exitcond87, label %174, label %.preheader439.preheader

.preheader439.preheader:                          ; preds = %.preheader440
  br label %.preheader439

.preheader439:                                    ; preds = %.preheader439.preheader, %173
  %k52 = phi i3 [ %k_53, %173 ], [ 0, %.preheader439.preheader ]
  %exitcond86 = icmp eq i3 %k52, -4
  %empty_584 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_53 = add i3 %k52, 1
  br i1 %exitcond86, label %.preheader440.loopexit, label %173

; <label>:173                                     ; preds = %.preheader439
  %tmp_1387 = trunc i3 %k52 to i2
  %p_shl198 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1387, i5 0)
  %p_shl199_cast = zext i7 %p_shl198 to i8
  %p_shl199 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1387, i3 0)
  %p_shl200_cast = zext i5 %p_shl199 to i8
  %tmp_649 = sub i8 %p_shl199_cast, %p_shl200_cast
  %tmp_864_cast_cast = sext i8 %tmp_649 to i9
  %tmp62 = add i9 -200, %tmp_864_cast_cast
  %tmp_650 = add i9 %i145_cast244_cast, %tmp62
  %tmp_866_cast = sext i9 %tmp_650 to i11
  %tmp_651 = zext i11 %tmp_866_cast to i64
  %bias_addr_47 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_651
  %bias_load_47 = load float* %bias_addr_47, align 4
  %tmp_653 = add i8 %tmp_649, %i145_cast
  %tmp_868_cast = sext i8 %tmp_653 to i32
  %tmp_654 = zext i32 %tmp_868_cast to i64
  %bias_96_addr_1 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_654
  store float %bias_load_47, float* %bias_96_addr_1, align 4
  br label %.preheader439

; <label>:174                                     ; preds = %.preheader440
  call fastcc void @subconv_3x3_8_stride([9600 x float]* @ShuffleConvs_2_Downs, [864 x float]* @weights_96_1_3x3, [96 x float]* @bias_96, [3456 x float]* @buffer0_1_96_4x4_p) nounwind
  br label %.loopexit851

.loopexit851.loopexit:                            ; preds = %.preheader438
  br label %.loopexit851

.loopexit851:                                     ; preds = %.loopexit851.loopexit, %174
  %co148 = phi i5 [ 0, %174 ], [ %co_149, %.loopexit851.loopexit ]
  %co149_cast = zext i5 %co148 to i12
  %exitcond85 = icmp eq i5 %co148, -8
  %empty_585 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_149 = add i5 %co148, 1
  br i1 %exitcond85, label %.preheader436.preheader, label %.preheader438.preheader

.preheader436.preheader:                          ; preds = %.loopexit851
  br label %.preheader436

.preheader438.preheader:                          ; preds = %.loopexit851
  %tmp_1385 = trunc i5 %co148 to i2
  %p_shl197 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1385, i5 0)
  %p_shl201_cast = zext i7 %p_shl197 to i8
  %tmp_1386 = shl i5 %co148, 3
  %p_shl202_cast = zext i5 %tmp_1386 to i8
  %tmp_648 = sub i8 %p_shl201_cast, %p_shl202_cast
  %p_lshr_f20_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co148, i32 2, i32 4)
  %tmp_872_cast = zext i3 %p_lshr_f20_cast to i8
  br label %.preheader438

.preheader438.loopexit:                           ; preds = %.preheader437
  br label %.preheader438

.preheader438:                                    ; preds = %.preheader438.loopexit, %.preheader438.preheader
  %ci66 = phi i5 [ 0, %.preheader438.preheader ], [ %ci_67, %.preheader438.loopexit ]
  %ci66_cast = zext i5 %ci66 to i8
  %exitcond84 = icmp eq i5 %ci66, -8
  %empty_586 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_67 = add i5 %ci66, 1
  br i1 %exitcond84, label %.loopexit851.loopexit, label %.preheader437.preheader

.preheader437.preheader:                          ; preds = %.preheader438
  %tmp_656_cast = zext i5 %ci66 to i19
  %tmp_657 = add i8 %tmp_648, %ci66_cast
  %tmp_658_cast = sext i8 %tmp_657 to i15
  br label %.preheader437

.preheader437:                                    ; preds = %175, %.preheader437.preheader
  %i150 = phi i5 [ %i_151, %175 ], [ 0, %.preheader437.preheader ]
  %exitcond83 = icmp eq i5 %i150, -16
  %empty_587 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %i_151 = add i5 %i150, 1
  br i1 %exitcond83, label %.preheader438.loopexit, label %175

; <label>:175                                     ; preds = %.preheader437
  %tmp_1403 = trunc i5 %i150 to i4
  %p_shl204 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1403, i5 0)
  %p_shl207_cast = zext i9 %p_shl204 to i10
  %p_shl205 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1403, i3 0)
  %p_shl208_cast1 = zext i7 %p_shl205 to i8
  %p_shl208_cast = zext i7 %p_shl205 to i10
  %tmp_673 = sub i10 %p_shl207_cast, %p_shl208_cast
  %tmp_890_cast = sext i10 %tmp_673 to i12
  %tmp63 = add i12 -1672, %tmp_890_cast
  %tmp_674 = add i12 %tmp63, %co149_cast
  %tmp_1404 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_674, i5 0)
  %p_shl589_cast = zext i17 %tmp_1404 to i18
  %tmp_1405 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_674, i3 0)
  %p_shl590_cast = zext i15 %tmp_1405 to i18
  %tmp_1406 = sub i18 %p_shl589_cast, %p_shl590_cast
  %tmp_1844_cast = sext i18 %tmp_1406 to i19
  %tmp_1407 = add i19 %tmp_656_cast, %tmp_1844_cast
  %tmp_1845_cast = sext i19 %tmp_1407 to i64
  %shuffle_conv_1x1_add_29 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1845_cast
  %shuffle_conv_1x1_loa_29 = load float* %shuffle_conv_1x1_add_29, align 4
  %tmp_1408 = shl i5 %i150, 1
  %p_shl209_cast = zext i5 %tmp_1408 to i8
  %tmp_675 = sub i8 %p_shl208_cast1, %p_shl209_cast
  %tmp_676 = add i8 %tmp_675, %tmp_872_cast
  %tmp_1409 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_676, i7 0)
  %tmp_1410 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_676, i5 0)
  %p_shl588_cast = sext i13 %tmp_1410 to i15
  %tmp_1411 = sub i15 %tmp_1409, %p_shl588_cast
  %tmp_1412 = add i15 %tmp_658_cast, %tmp_1411
  %tmp_1852_cast = sext i15 %tmp_1412 to i64
  %weights_96_96_1x1_ad_1 = getelementptr [9216 x float]* @weights_96_96_1x1, i64 0, i64 %tmp_1852_cast
  store float %shuffle_conv_1x1_loa_29, float* %weights_96_96_1x1_ad_1, align 4
  br label %.preheader437

.preheader436.loopexit:                           ; preds = %.preheader435
  br label %.preheader436

.preheader436:                                    ; preds = %.preheader436.preheader, %.preheader436.loopexit
  %i146 = phi i5 [ %i_147, %.preheader436.loopexit ], [ 0, %.preheader436.preheader ]
  %i147_cast = zext i5 %i146 to i8
  %i147_cast1 = zext i5 %i146 to i12
  %exitcond82 = icmp eq i5 %i146, -8
  %empty_588 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_147 = add i5 %i146, 1
  br i1 %exitcond82, label %177, label %.preheader435.preheader

.preheader435.preheader:                          ; preds = %.preheader436
  br label %.preheader435

.preheader435:                                    ; preds = %.preheader435.preheader, %176
  %k54 = phi i3 [ %k_55, %176 ], [ 0, %.preheader435.preheader ]
  %exitcond81 = icmp eq i3 %k54, -4
  %empty_589 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_55 = add i3 %k54, 1
  br i1 %exitcond81, label %.preheader436.loopexit, label %176

; <label>:176                                     ; preds = %.preheader435
  %tmp_1402 = trunc i3 %k54 to i2
  %p_shl202 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1402, i5 0)
  %p_shl203_cast = zext i7 %p_shl202 to i8
  %p_shl203 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1402, i3 0)
  %p_shl204_cast = zext i5 %p_shl203 to i8
  %tmp_668 = sub i8 %p_shl203_cast, %p_shl204_cast
  %tmp_874_cast_cast = sext i8 %tmp_668 to i9
  %tmp64 = add i9 -104, %tmp_874_cast_cast
  %tmp64_cast1 = sext i9 %tmp64 to i11
  %tmp64_cast = zext i11 %tmp64_cast1 to i12
  %tmp_669 = add i12 %i147_cast1, %tmp64_cast
  %tmp_670 = zext i12 %tmp_669 to i64
  %bias_addr_48 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_670
  %bias_load_48 = load float* %bias_addr_48, align 4
  %tmp_671 = add i8 %tmp_668, %i147_cast
  %tmp_878_cast = sext i8 %tmp_671 to i32
  %tmp_672 = zext i32 %tmp_878_cast to i64
  %bias_96_addr_2 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_672
  store float %bias_load_48, float* %bias_96_addr_2, align 4
  br label %.preheader435

; <label>:177                                     ; preds = %.preheader436
  call fastcc void @subconv_1x1_4_p([3456 x float]* @buffer0_1_96_4x4_p, [9216 x float]* @weights_96_96_1x1, [96 x float]* @bias_96, [3456 x float]* @buffer1_1_96_4x4_p) nounwind
  call fastcc void @shuffle_96_l_p([3456 x float]* @buffer1_1_96_4x4_p, [6912 x float]* @downsampleunit2_outp) nounwind
  br label %.loopexit850

.loopexit850.loopexit:                            ; preds = %.preheader434
  br label %.loopexit850

.loopexit850:                                     ; preds = %.loopexit850.loopexit, %177
  %co150 = phi i5 [ 0, %177 ], [ %co_151, %.loopexit850.loopexit ]
  %co151_cast = zext i5 %co150 to i8
  %co151_cast1 = zext i5 %co150 to i10
  %exitcond80 = icmp eq i5 %co150, -8
  %empty_590 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_151 = add i5 %co150, 1
  br i1 %exitcond80, label %.preheader431.preheader, label %.preheader434.preheader

.preheader434.preheader:                          ; preds = %.loopexit850
  br label %.preheader434

.preheader431.preheader:                          ; preds = %.loopexit850
  br label %.preheader431

.preheader434.loopexit:                           ; preds = %.preheader433
  br label %.preheader434

.preheader434:                                    ; preds = %.preheader434.preheader, %.preheader434.loopexit
  %w97 = phi i2 [ %w_98, %.preheader434.loopexit ], [ 0, %.preheader434.preheader ]
  %exitcond79 = icmp eq i2 %w97, -1
  %empty_591 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_98 = add i2 %w97, 1
  br i1 %exitcond79, label %.loopexit850.loopexit, label %.preheader433.preheader

.preheader433.preheader:                          ; preds = %.preheader434
  %tmp_677_cast1 = zext i2 %w97 to i36
  %tmp_677_cast = zext i2 %w97 to i13
  br label %.preheader433

.preheader433.loopexit:                           ; preds = %.preheader432
  br label %.preheader433

.preheader433:                                    ; preds = %.preheader433.loopexit, %.preheader433.preheader
  %h98 = phi i2 [ 0, %.preheader433.preheader ], [ %h_99, %.preheader433.loopexit ]
  %exitcond78 = icmp eq i2 %h98, -1
  %empty_592 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_99 = add i2 %h98, 1
  br i1 %exitcond78, label %.preheader434.loopexit, label %.preheader432.preheader

.preheader432.preheader:                          ; preds = %.preheader433
  %tmp_686_cast1 = zext i2 %h98 to i11
  %tmp_686_cast = zext i2 %h98 to i15
  br label %.preheader432

.preheader432:                                    ; preds = %178, %.preheader432.preheader
  %i156 = phi i3 [ %i_157, %178 ], [ 0, %.preheader432.preheader ]
  %exitcond77 = icmp eq i3 %i156, -4
  %empty_593 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_157 = add i3 %i156, 1
  br i1 %exitcond77, label %.preheader433.loopexit, label %178

; <label>:178                                     ; preds = %.preheader432
  %tmp_1416 = trunc i3 %i156 to i2
  %p_shl209 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1416, i5 0)
  %p_shl216_cast = zext i7 %p_shl209 to i8
  %p_shl210 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1416, i3 0)
  %p_shl217_cast = zext i5 %p_shl210 to i8
  %tmp_690 = sub i8 %p_shl216_cast, %p_shl217_cast
  %tmp_916_cast = sext i8 %tmp_690 to i10
  %tmp65 = add i10 -328, %tmp_916_cast
  %tmp_691 = add i10 %co151_cast1, %tmp65
  %tmp_692_cast = zext i10 %tmp_691 to i13
  %tmp_1417 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_691, i2 0)
  %p_shl594_cast = zext i12 %tmp_1417 to i13
  %tmp_1418 = sub i13 %p_shl594_cast, %tmp_692_cast
  %tmp_1419 = add i13 %tmp_1418, %tmp_677_cast
  %tmp_1861_cast = sext i13 %tmp_1419 to i15
  %p_shl593_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1419, i2 0)
  %tmp_1420 = sub i15 %p_shl593_cast, %tmp_1861_cast
  %tmp_1421 = add i15 %tmp_1420, %tmp_686_cast
  %tmp_1864_cast = zext i15 %tmp_1421 to i64
  %shuffle_conv_3x3_add_16 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1864_cast
  %shuffle_conv_3x3_loa_16 = load float* %shuffle_conv_3x3_add_16, align 4
  %tmp_693 = add i8 %tmp_690, %co151_cast
  %tmp_920_cast = sext i8 %tmp_693 to i32
  %tmp_694_cast = zext i32 %tmp_920_cast to i35
  %tmp_1422 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_693, i2 0)
  %tmp_1423 = sext i10 %tmp_1422 to i34
  %p_shl592_cast = zext i34 %tmp_1423 to i35
  %tmp_1424 = sub i35 %p_shl592_cast, %tmp_694_cast
  %tmp_1867_cast = sext i35 %tmp_1424 to i36
  %tmp_1425 = add i36 %tmp_1867_cast, %tmp_677_cast1
  %tmp_1426 = trunc i36 %tmp_1425 to i11
  %tmp_1427 = trunc i36 %tmp_1425 to i9
  %p_shl591_cast = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_1427, i2 0)
  %tmp_1428 = sub i11 %p_shl591_cast, %tmp_1426
  %tmp_1429 = add i11 %tmp_1428, %tmp_686_cast1
  %tmp_1871_cast = zext i11 %tmp_1429 to i64
  %weights_96_1_3x3_add_1 = getelementptr [864 x float]* @weights_96_1_3x3, i64 0, i64 %tmp_1871_cast
  store float %shuffle_conv_3x3_loa_16, float* %weights_96_1_3x3_add_1, align 4
  br label %.preheader432

.preheader431.loopexit:                           ; preds = %.preheader430
  br label %.preheader431

.preheader431:                                    ; preds = %.preheader431.preheader, %.preheader431.loopexit
  %i152 = phi i5 [ %i_153, %.preheader431.loopexit ], [ 0, %.preheader431.preheader ]
  %i153_cast = zext i5 %i152 to i8
  %i153_cast1 = zext i5 %i152 to i12
  %exitcond76 = icmp eq i5 %i152, -8
  %empty_594 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_153 = add i5 %i152, 1
  br i1 %exitcond76, label %180, label %.preheader430.preheader

.preheader430.preheader:                          ; preds = %.preheader431
  br label %.preheader430

.preheader430:                                    ; preds = %.preheader430.preheader, %179
  %k56 = phi i3 [ %k_57, %179 ], [ 0, %.preheader430.preheader ]
  %exitcond75 = icmp eq i3 %k56, -4
  %empty_595 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_57 = add i3 %k56, 1
  br i1 %exitcond75, label %.preheader431.loopexit, label %179

; <label>:179                                     ; preds = %.preheader430
  %tmp_1415 = trunc i3 %k56 to i2
  %p_shl207 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1415, i5 0)
  %p_shl210_cast = zext i7 %p_shl207 to i8
  %p_shl208 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1415, i3 0)
  %p_shl211_cast = zext i5 %p_shl208 to i8
  %tmp_679 = sub i8 %p_shl210_cast, %p_shl211_cast
  %tmp_897_cast = sext i8 %tmp_679 to i12
  %tmp66 = add i12 2040, %tmp_897_cast
  %tmp_680 = add i12 %i153_cast1, %tmp66
  %tmp_681 = zext i12 %tmp_680 to i64
  %bias_addr_49 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_681
  %bias_load_49 = load float* %bias_addr_49, align 4
  %tmp_683 = add i8 %tmp_679, %i153_cast
  %tmp_901_cast = sext i8 %tmp_683 to i32
  %tmp_684 = zext i32 %tmp_901_cast to i64
  %bias_96_addr_3 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_684
  store float %bias_load_49, float* %bias_96_addr_3, align 4
  br label %.preheader430

; <label>:180                                     ; preds = %.preheader431
  call fastcc void @subconv_3x3_8_stride([9600 x float]* @shuffleunit1_7_outpu, [864 x float]* @weights_96_1_3x3, [96 x float]* @bias_96, [3456 x float]* @buffer0_1_96_4x4_p) nounwind
  br label %.loopexit849

.loopexit849.loopexit:                            ; preds = %.preheader429
  br label %.loopexit849

.loopexit849:                                     ; preds = %.loopexit849.loopexit, %180
  %co152 = phi i5 [ 0, %180 ], [ %co_153, %.loopexit849.loopexit ]
  %co153_cast = zext i5 %co152 to i12
  %exitcond74 = icmp eq i5 %co152, -8
  %empty_596 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_153 = add i5 %co152, 1
  br i1 %exitcond74, label %.preheader427.preheader, label %.preheader429.preheader

.preheader427.preheader:                          ; preds = %.loopexit849
  br label %.preheader427

.preheader429.preheader:                          ; preds = %.loopexit849
  %tmp_1413 = trunc i5 %co152 to i2
  %p_shl206 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1413, i5 0)
  %p_shl212_cast = zext i7 %p_shl206 to i8
  %tmp_1414 = shl i5 %co152, 3
  %p_shl213_cast = zext i5 %tmp_1414 to i8
  %tmp_678 = sub i8 %p_shl212_cast, %p_shl213_cast
  %p_lshr_f21_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co152, i32 2, i32 4)
  %tmp_905_cast = zext i3 %p_lshr_f21_cast to i8
  br label %.preheader429

.preheader429.loopexit:                           ; preds = %.preheader428
  br label %.preheader429

.preheader429:                                    ; preds = %.preheader429.loopexit, %.preheader429.preheader
  %ci68 = phi i5 [ 0, %.preheader429.preheader ], [ %ci_69, %.preheader429.loopexit ]
  %ci68_cast = zext i5 %ci68 to i8
  %exitcond73 = icmp eq i5 %ci68, -8
  %empty_597 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_69 = add i5 %ci68, 1
  br i1 %exitcond73, label %.loopexit849.loopexit, label %.preheader428.preheader

.preheader428.preheader:                          ; preds = %.preheader429
  %tmp_687_cast = zext i5 %ci68 to i19
  %tmp_688 = add i8 %tmp_678, %ci68_cast
  %tmp_689_cast1 = sext i8 %tmp_688 to i15
  br label %.preheader428

.preheader428:                                    ; preds = %181, %.preheader428.preheader
  %i158 = phi i5 [ %i_159, %181 ], [ 0, %.preheader428.preheader ]
  %exitcond72 = icmp eq i5 %i158, -16
  %empty_598 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %i_159 = add i5 %i158, 1
  br i1 %exitcond72, label %.preheader429.loopexit, label %181

; <label>:181                                     ; preds = %.preheader428
  %tmp_1437 = trunc i5 %i158 to i4
  %p_shl213 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1437, i5 0)
  %p_shl220_cast = zext i9 %p_shl213 to i10
  %p_shl214 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1437, i3 0)
  %p_shl221_cast1 = zext i7 %p_shl214 to i8
  %p_shl221_cast = zext i7 %p_shl214 to i10
  %tmp_701 = sub i10 %p_shl220_cast, %p_shl221_cast
  %tmp_928_cast = sext i10 %tmp_701 to i12
  %tmp67 = add i12 -1288, %tmp_928_cast
  %tmp_703 = add i12 %tmp67, %co153_cast
  %tmp_1438 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_703, i5 0)
  %p_shl597_cast = zext i17 %tmp_1438 to i18
  %tmp_1439 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_703, i3 0)
  %p_shl598_cast = zext i15 %tmp_1439 to i18
  %tmp_1440 = sub i18 %p_shl597_cast, %p_shl598_cast
  %tmp_1884_cast = sext i18 %tmp_1440 to i19
  %tmp_1441 = add i19 %tmp_687_cast, %tmp_1884_cast
  %tmp_1885_cast = sext i19 %tmp_1441 to i64
  %shuffle_conv_1x1_add_30 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1885_cast
  %shuffle_conv_1x1_loa_30 = load float* %shuffle_conv_1x1_add_30, align 4
  %tmp_1442 = shl i5 %i158, 1
  %p_shl222_cast = zext i5 %tmp_1442 to i8
  %tmp_704 = sub i8 %p_shl221_cast1, %p_shl222_cast
  %tmp_705 = add i8 %tmp_704, %tmp_905_cast
  %tmp_1443 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_705, i7 0)
  %tmp_1444 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_705, i5 0)
  %p_shl596_cast = sext i13 %tmp_1444 to i15
  %tmp_1445 = sub i15 %tmp_1443, %p_shl596_cast
  %tmp_1446 = add i15 %tmp_689_cast1, %tmp_1445
  %tmp_1892_cast = sext i15 %tmp_1446 to i64
  %weights_96_96_1x1_ad_2 = getelementptr [9216 x float]* @weights_96_96_1x1, i64 0, i64 %tmp_1892_cast
  store float %shuffle_conv_1x1_loa_30, float* %weights_96_96_1x1_ad_2, align 4
  br label %.preheader428

.preheader427.loopexit:                           ; preds = %.preheader426
  br label %.preheader427

.preheader427:                                    ; preds = %.preheader427.preheader, %.preheader427.loopexit
  %i154 = phi i5 [ %i_155, %.preheader427.loopexit ], [ 0, %.preheader427.preheader ]
  %i155_cast = zext i5 %i154 to i8
  %i155_cast1 = zext i5 %i154 to i12
  %exitcond71 = icmp eq i5 %i154, -8
  %empty_599 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_155 = add i5 %i154, 1
  br i1 %exitcond71, label %183, label %.preheader426.preheader

.preheader426.preheader:                          ; preds = %.preheader427
  br label %.preheader426

.preheader426:                                    ; preds = %.preheader426.preheader, %182
  %k58 = phi i3 [ %k_59, %182 ], [ 0, %.preheader426.preheader ]
  %exitcond70 = icmp eq i3 %k58, -4
  %empty_600 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_59 = add i3 %k58, 1
  br i1 %exitcond70, label %.preheader427.loopexit, label %182

; <label>:182                                     ; preds = %.preheader426
  %tmp_1436 = trunc i3 %k58 to i2
  %p_shl211 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1436, i5 0)
  %p_shl214_cast = zext i7 %p_shl211 to i8
  %p_shl212 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1436, i3 0)
  %p_shl215_cast = zext i5 %p_shl212 to i8
  %tmp_696 = sub i8 %p_shl214_cast, %p_shl215_cast
  %tmp_907_cast = sext i8 %tmp_696 to i12
  %tmp68 = add i12 -1960, %tmp_907_cast
  %tmp_697 = add i12 %i155_cast1, %tmp68
  %tmp_698 = zext i12 %tmp_697 to i64
  %bias_addr_50 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_698
  %bias_load_50 = load float* %bias_addr_50, align 4
  %tmp_699 = add i8 %tmp_696, %i155_cast
  %tmp_911_cast = sext i8 %tmp_699 to i32
  %tmp_700 = zext i32 %tmp_911_cast to i64
  %bias_96_addr_4 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_700
  store float %bias_load_50, float* %bias_96_addr_4, align 4
  br label %.preheader426

; <label>:183                                     ; preds = %.preheader427
  call fastcc void @subconv_1x1_4_p([3456 x float]* @buffer0_1_96_4x4_p, [9216 x float]* @weights_96_96_1x1, [96 x float]* @bias_96, [3456 x float]* @buffer1_1_96_4x4_p) nounwind
  call fastcc void @shuffle_96_r_p([3456 x float]* @buffer1_1_96_4x4_p, [6912 x float]* @downsampleunit2_outp) nounwind
  br label %.loopexit848

.loopexit848.loopexit:                            ; preds = %.preheader425
  br label %.loopexit848

.loopexit848:                                     ; preds = %.loopexit848.loopexit, %183
  %co154 = phi i7 [ 0, %183 ], [ %co_155, %.loopexit848.loopexit ]
  %co155_cast = zext i7 %co154 to i8
  %exitcond69 = icmp eq i7 %co154, -32
  %empty_601 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) nounwind
  %co_155 = add i7 %co154, 1
  br i1 %exitcond69, label %.preheader423.preheader, label %.preheader425.preheader

.preheader423.preheader:                          ; preds = %.loopexit848
  br label %.preheader423

.preheader425.preheader:                          ; preds = %.loopexit848
  %tmp_695 = add i8 %co155_cast, 96
  %tmp_1430 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %tmp_695, i3 0)
  %p_shl601_cast = zext i11 %tmp_1430 to i12
  %tmp_1431 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_695, i1 false)
  %p_shl602_cast = zext i9 %tmp_1431 to i12
  %tmp_1432 = sub i12 %p_shl601_cast, %p_shl602_cast
  %tmp_1874_cast = sext i12 %tmp_1432 to i13
  %tmp_1433 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co154, i3 0)
  %p_shl599_cast = zext i10 %tmp_1433 to i11
  %tmp_1434 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co154, i1 false)
  %p_shl600_cast = zext i8 %tmp_1434 to i11
  %tmp_1435 = sub i11 %p_shl599_cast, %p_shl600_cast
  %tmp_1877_cast = sext i11 %tmp_1435 to i12
  br label %.preheader425

.preheader425.loopexit:                           ; preds = %.preheader424
  br label %.preheader425

.preheader425:                                    ; preds = %.preheader425.loopexit, %.preheader425.preheader
  %h100 = phi i3 [ 0, %.preheader425.preheader ], [ %h_101, %.preheader425.loopexit ]
  %exitcond68 = icmp eq i3 %h100, -4
  %empty_602 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %h_101 = add i3 %h100, 1
  br i1 %exitcond68, label %.loopexit848.loopexit, label %.preheader424.preheader

.preheader424.preheader:                          ; preds = %.preheader425
  %tmp_707_cast1 = zext i3 %h_101 to i13
  %tmp_707_cast = zext i3 %h_101 to i12
  %tmp_1449 = add i12 %tmp_707_cast, %tmp_1877_cast
  %tmp_1450 = trunc i12 %tmp_1449 to i10
  %p_shl605_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1450, i3 0)
  %p_shl606_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_1449, i1 false)
  %tmp_1451 = sub i13 %p_shl605_cast, %p_shl606_cast
  %tmp_1452 = add i13 %tmp_707_cast1, %tmp_1874_cast
  %tmp_1453 = trunc i13 %tmp_1452 to i11
  %p_shl603_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1453, i3 0)
  %p_shl604_cast = call i14 @_ssdm_op_BitConcatenate.i14.i13.i1(i13 %tmp_1452, i1 false)
  %tmp_1454 = sub i14 %p_shl603_cast, %p_shl604_cast
  br label %.preheader424

.preheader424:                                    ; preds = %184, %.preheader424.preheader
  %w99 = phi i3 [ %w_100, %184 ], [ 0, %.preheader424.preheader ]
  %exitcond67 = icmp eq i3 %w99, -4
  %empty_603 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %w_100 = add i3 %w99, 1
  br i1 %exitcond67, label %.preheader425.loopexit, label %184

; <label>:184                                     ; preds = %.preheader424
  %tmp_712_cast1 = zext i3 %w_100 to i14
  %tmp_712_cast2 = zext i3 %w_100 to i13
  %tmp_1455 = add i13 %tmp_1451, %tmp_712_cast2
  %tmp_1903_cast = zext i13 %tmp_1455 to i64
  %buffer0_1_96_4x4_p_a = getelementptr [3456 x float]* @buffer0_1_96_4x4_p, i64 0, i64 %tmp_1903_cast
  %tmp_1456 = add i14 %tmp_1454, %tmp_712_cast1
  %tmp_1904_cast = zext i14 %tmp_1456 to i64
  %downsampleunit2_outp = getelementptr [6912 x float]* @downsampleunit2_outp, i64 0, i64 %tmp_1904_cast
  %downsampleunit2_outp_1 = load float* %downsampleunit2_outp, align 4
  store float %downsampleunit2_outp_1, float* %buffer0_1_96_4x4_p_a, align 4
  br label %.preheader424

.preheader423.loopexit:                           ; preds = %.preheader422
  br label %.preheader423

.preheader423:                                    ; preds = %.preheader423.preheader, %.preheader423.loopexit
  %co156 = phi i5 [ %co_157, %.preheader423.loopexit ], [ 0, %.preheader423.preheader ]
  %co156_cast = zext i5 %co156 to i12
  %exitcond66 = icmp eq i5 %co156, -8
  %empty_604 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_157 = add i5 %co156, 1
  br i1 %exitcond66, label %.preheader420.preheader, label %.preheader422.preheader

.preheader420.preheader:                          ; preds = %.preheader423
  br label %.preheader420

.preheader422.preheader:                          ; preds = %.preheader423
  %tmp_1447 = trunc i5 %co156 to i2
  %p_shl215 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1447, i5 0)
  %p_shl218_cast = zext i7 %p_shl215 to i8
  %tmp_1448 = shl i5 %co156, 3
  %p_shl219_cast = zext i5 %tmp_1448 to i8
  %tmp_706 = sub i8 %p_shl218_cast, %p_shl219_cast
  %p_lshr_f22_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co156, i32 2, i32 4)
  %tmp_927_cast = zext i3 %p_lshr_f22_cast to i8
  br label %.preheader422

.preheader422.loopexit:                           ; preds = %.preheader421
  br label %.preheader422

.preheader422:                                    ; preds = %.preheader422.loopexit, %.preheader422.preheader
  %ci70 = phi i5 [ 0, %.preheader422.preheader ], [ %ci_71, %.preheader422.loopexit ]
  %ci70_cast = zext i5 %ci70 to i8
  %exitcond65 = icmp eq i5 %ci70, -8
  %empty_605 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_71 = add i5 %ci70, 1
  br i1 %exitcond65, label %.preheader423.loopexit, label %.preheader421.preheader

.preheader421.preheader:                          ; preds = %.preheader422
  %tmp_708_cast = zext i5 %ci70 to i19
  %tmp_709 = add i8 %tmp_706, %ci70_cast
  %tmp_711_cast = sext i8 %tmp_709 to i15
  br label %.preheader421

.preheader421:                                    ; preds = %185, %.preheader421.preheader
  %i162 = phi i5 [ %i_163, %185 ], [ 0, %.preheader421.preheader ]
  %exitcond64 = icmp eq i5 %i162, -16
  %empty_606 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %i_163 = add i5 %i162, 1
  br i1 %exitcond64, label %.preheader422.loopexit, label %185

; <label>:185                                     ; preds = %.preheader421
  %tmp_1458 = trunc i5 %i162 to i4
  %p_shl218 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1458, i5 0)
  %p_shl225_cast = zext i9 %p_shl218 to i10
  %p_shl219 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1458, i3 0)
  %p_shl226_cast1 = zext i7 %p_shl219 to i8
  %p_shl226_cast = zext i7 %p_shl219 to i10
  %tmp_719 = sub i10 %p_shl225_cast, %p_shl226_cast
  %tmp_947_cast = sext i10 %tmp_719 to i12
  %tmp69 = add i12 -904, %tmp_947_cast
  %tmp_720 = add i12 %tmp69, %co156_cast
  %tmp_1459 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_720, i5 0)
  %p_shl609_cast = zext i17 %tmp_1459 to i18
  %tmp_1460 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_720, i3 0)
  %p_shl610_cast = zext i15 %tmp_1460 to i18
  %tmp_1461 = sub i18 %p_shl609_cast, %p_shl610_cast
  %tmp_1911_cast = sext i18 %tmp_1461 to i19
  %tmp_1462 = add i19 %tmp_708_cast, %tmp_1911_cast
  %tmp_1912_cast = sext i19 %tmp_1462 to i64
  %shuffle_conv_1x1_add_31 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1912_cast
  %shuffle_conv_1x1_loa_31 = load float* %shuffle_conv_1x1_add_31, align 4
  %tmp_1463 = shl i5 %i162, 1
  %p_shl227_cast = zext i5 %tmp_1463 to i8
  %tmp_721 = sub i8 %p_shl226_cast1, %p_shl227_cast
  %tmp_722 = add i8 %tmp_721, %tmp_927_cast
  %tmp_1464 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_722, i7 0)
  %tmp_1465 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_722, i5 0)
  %p_shl608_cast = sext i13 %tmp_1465 to i15
  %tmp_1466 = sub i15 %tmp_1464, %p_shl608_cast
  %tmp_1467 = add i15 %tmp_711_cast, %tmp_1466
  %tmp_1919_cast = sext i15 %tmp_1467 to i64
  %weights_96_96_1x1_ad_3 = getelementptr [9216 x float]* @weights_96_96_1x1, i64 0, i64 %tmp_1919_cast
  store float %shuffle_conv_1x1_loa_31, float* %weights_96_96_1x1_ad_3, align 4
  br label %.preheader421

.preheader420.loopexit:                           ; preds = %.preheader419
  br label %.preheader420

.preheader420:                                    ; preds = %.preheader420.preheader, %.preheader420.loopexit
  %i160 = phi i5 [ %i_161, %.preheader420.loopexit ], [ 0, %.preheader420.preheader ]
  %i161_cast = zext i5 %i160 to i8
  %i161_cast1 = zext i5 %i160 to i12
  %exitcond63 = icmp eq i5 %i160, -8
  %empty_607 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_161 = add i5 %i160, 1
  br i1 %exitcond63, label %187, label %.preheader419.preheader

.preheader419.preheader:                          ; preds = %.preheader420
  br label %.preheader419

.preheader419:                                    ; preds = %.preheader419.preheader, %186
  %k60 = phi i3 [ %k_61, %186 ], [ 0, %.preheader419.preheader ]
  %exitcond62 = icmp eq i3 %k60, -4
  %empty_608 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_61 = add i3 %k60, 1
  br i1 %exitcond62, label %.preheader420.loopexit, label %186

; <label>:186                                     ; preds = %.preheader419
  %tmp_1457 = trunc i3 %k60 to i2
  %p_shl216 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1457, i5 0)
  %p_shl223_cast = zext i7 %p_shl216 to i8
  %p_shl217 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1457, i3 0)
  %p_shl224_cast = zext i5 %p_shl217 to i8
  %tmp_714 = sub i8 %p_shl223_cast, %p_shl224_cast
  %tmp_936_cast = sext i8 %tmp_714 to i12
  %tmp70 = add i12 -1864, %tmp_936_cast
  %tmp_715 = add i12 %i161_cast1, %tmp70
  %tmp_716 = zext i12 %tmp_715 to i64
  %bias_addr_51 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_716
  %bias_load_51 = load float* %bias_addr_51, align 4
  %tmp_717 = add i8 %tmp_714, %i161_cast
  %tmp_940_cast = sext i8 %tmp_717 to i32
  %tmp_718 = zext i32 %tmp_940_cast to i64
  %bias_96_addr_5 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_718
  store float %bias_load_51, float* %bias_96_addr_5, align 4
  br label %.preheader419

; <label>:187                                     ; preds = %.preheader420
  call fastcc void @subconv_1x1_4_p([3456 x float]* @buffer0_1_96_4x4_p, [9216 x float]* @weights_96_96_1x1, [96 x float]* @bias_96, [3456 x float]* @buffer1_1_96_4x4_p) nounwind
  br label %.loopexit847

.loopexit847.loopexit:                            ; preds = %.preheader418
  br label %.loopexit847

.loopexit847:                                     ; preds = %.loopexit847.loopexit, %187
  %co158 = phi i5 [ 0, %187 ], [ %co_159, %.loopexit847.loopexit ]
  %co159_cast = zext i5 %co158 to i8
  %co159_cast1 = zext i5 %co158 to i10
  %exitcond61 = icmp eq i5 %co158, -8
  %empty_609 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_159 = add i5 %co158, 1
  br i1 %exitcond61, label %.preheader415.preheader, label %.preheader418.preheader

.preheader418.preheader:                          ; preds = %.loopexit847
  br label %.preheader418

.preheader415.preheader:                          ; preds = %.loopexit847
  br label %.preheader415

.preheader418.loopexit:                           ; preds = %.preheader417
  br label %.preheader418

.preheader418:                                    ; preds = %.preheader418.preheader, %.preheader418.loopexit
  %w101 = phi i2 [ %w_102, %.preheader418.loopexit ], [ 0, %.preheader418.preheader ]
  %exitcond60 = icmp eq i2 %w101, -1
  %empty_610 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_102 = add i2 %w101, 1
  br i1 %exitcond60, label %.loopexit847.loopexit, label %.preheader417.preheader

.preheader417.preheader:                          ; preds = %.preheader418
  %tmp_723_cast1 = zext i2 %w101 to i36
  %tmp_723_cast = zext i2 %w101 to i13
  br label %.preheader417

.preheader417.loopexit:                           ; preds = %.preheader416
  br label %.preheader417

.preheader417:                                    ; preds = %.preheader417.loopexit, %.preheader417.preheader
  %h102 = phi i2 [ 0, %.preheader417.preheader ], [ %h_103, %.preheader417.loopexit ]
  %exitcond59 = icmp eq i2 %h102, -1
  %empty_611 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_103 = add i2 %h102, 1
  br i1 %exitcond59, label %.preheader418.loopexit, label %.preheader416.preheader

.preheader416.preheader:                          ; preds = %.preheader417
  %tmp_732_cast1 = zext i2 %h102 to i11
  %tmp_732_cast = zext i2 %h102 to i15
  br label %.preheader416

.preheader416:                                    ; preds = %188, %.preheader416.preheader
  %i168 = phi i3 [ %i_169, %188 ], [ 0, %.preheader416.preheader ]
  %exitcond58 = icmp eq i3 %i168, -4
  %empty_612 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_169 = add i3 %i168, 1
  br i1 %exitcond58, label %.preheader417.loopexit, label %188

; <label>:188                                     ; preds = %.preheader416
  %tmp_1471 = trunc i3 %i168 to i2
  %p_shl223 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1471, i5 0)
  %p_shl234_cast = zext i7 %p_shl223 to i8
  %p_shl224 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1471, i3 0)
  %p_shl235_cast = zext i5 %p_shl224 to i8
  %tmp_736 = sub i8 %p_shl234_cast, %p_shl235_cast
  %tmp_973_cast = sext i8 %tmp_736 to i10
  %tmp71 = add i10 -232, %tmp_973_cast
  %tmp_737 = add i10 %co159_cast1, %tmp71
  %tmp_738_cast = zext i10 %tmp_737 to i13
  %tmp_1472 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_737, i2 0)
  %p_shl614_cast = zext i12 %tmp_1472 to i13
  %tmp_1473 = sub i13 %p_shl614_cast, %tmp_738_cast
  %tmp_1474 = add i13 %tmp_1473, %tmp_723_cast
  %tmp_1928_cast = sext i13 %tmp_1474 to i15
  %p_shl613_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1474, i2 0)
  %tmp_1475 = sub i15 %p_shl613_cast, %tmp_1928_cast
  %tmp_1476 = add i15 %tmp_1475, %tmp_732_cast
  %tmp_1931_cast = zext i15 %tmp_1476 to i64
  %shuffle_conv_3x3_add_17 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1931_cast
  %shuffle_conv_3x3_loa_17 = load float* %shuffle_conv_3x3_add_17, align 4
  %tmp_739 = add i8 %tmp_736, %co159_cast
  %tmp_977_cast = sext i8 %tmp_739 to i32
  %tmp_740_cast = zext i32 %tmp_977_cast to i35
  %tmp_1477 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_739, i2 0)
  %tmp_1478 = sext i10 %tmp_1477 to i34
  %p_shl612_cast = zext i34 %tmp_1478 to i35
  %tmp_1479 = sub i35 %p_shl612_cast, %tmp_740_cast
  %tmp_1934_cast = sext i35 %tmp_1479 to i36
  %tmp_1480 = add i36 %tmp_1934_cast, %tmp_723_cast1
  %tmp_1481 = trunc i36 %tmp_1480 to i11
  %tmp_1482 = trunc i36 %tmp_1480 to i9
  %p_shl611_cast = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_1482, i2 0)
  %tmp_1483 = sub i11 %p_shl611_cast, %tmp_1481
  %tmp_1484 = add i11 %tmp_1483, %tmp_732_cast1
  %tmp_1938_cast = zext i11 %tmp_1484 to i64
  %weights_96_1_3x3_add_2 = getelementptr [864 x float]* @weights_96_1_3x3, i64 0, i64 %tmp_1938_cast
  store float %shuffle_conv_3x3_loa_17, float* %weights_96_1_3x3_add_2, align 4
  br label %.preheader416

.preheader415.loopexit:                           ; preds = %.preheader414
  br label %.preheader415

.preheader415:                                    ; preds = %.preheader415.preheader, %.preheader415.loopexit
  %i164 = phi i5 [ %i_165, %.preheader415.loopexit ], [ 0, %.preheader415.preheader ]
  %i165_cast = zext i5 %i164 to i8
  %i165_cast1 = zext i5 %i164 to i12
  %exitcond57 = icmp eq i5 %i164, -8
  %empty_613 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_165 = add i5 %i164, 1
  br i1 %exitcond57, label %190, label %.preheader414.preheader

.preheader414.preheader:                          ; preds = %.preheader415
  br label %.preheader414

.preheader414:                                    ; preds = %.preheader414.preheader, %189
  %k62 = phi i3 [ %k_63, %189 ], [ 0, %.preheader414.preheader ]
  %exitcond56 = icmp eq i3 %k62, -4
  %empty_614 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_63 = add i3 %k62, 1
  br i1 %exitcond56, label %.preheader415.loopexit, label %189

; <label>:189                                     ; preds = %.preheader414
  %tmp_1470 = trunc i3 %k62 to i2
  %p_shl221 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1470, i5 0)
  %p_shl228_cast = zext i7 %p_shl221 to i8
  %p_shl222 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1470, i3 0)
  %p_shl229_cast = zext i5 %p_shl222 to i8
  %tmp_725 = sub i8 %p_shl228_cast, %p_shl229_cast
  %tmp_954_cast = sext i8 %tmp_725 to i12
  %tmp72 = add i12 -1768, %tmp_954_cast
  %tmp_726 = add i12 %i165_cast1, %tmp72
  %tmp_728 = zext i12 %tmp_726 to i64
  %bias_addr_52 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_728
  %bias_load_52 = load float* %bias_addr_52, align 4
  %tmp_729 = add i8 %tmp_725, %i165_cast
  %tmp_958_cast = sext i8 %tmp_729 to i32
  %tmp_731 = zext i32 %tmp_958_cast to i64
  %bias_96_addr_6 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_731
  store float %bias_load_52, float* %bias_96_addr_6, align 4
  br label %.preheader414

; <label>:190                                     ; preds = %.preheader415
  call fastcc void @subconv_3x3_4_no_rel([3456 x float]* @buffer1_1_96_4x4_p, [864 x float]* @weights_96_1_3x3, [96 x float]* @bias_96, [3456 x float]* @buffer0_1_96_4x4_p) nounwind
  br label %.loopexit846

.loopexit846.loopexit:                            ; preds = %.preheader413
  br label %.loopexit846

.loopexit846:                                     ; preds = %.loopexit846.loopexit, %190
  %co160 = phi i5 [ 0, %190 ], [ %co_161, %.loopexit846.loopexit ]
  %co161_cast181_cast = zext i5 %co160 to i11
  %exitcond55 = icmp eq i5 %co160, -8
  %empty_615 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_161 = add i5 %co160, 1
  br i1 %exitcond55, label %.preheader411.preheader, label %.preheader413.preheader

.preheader411.preheader:                          ; preds = %.loopexit846
  br label %.preheader411

.preheader413.preheader:                          ; preds = %.loopexit846
  %tmp_1468 = trunc i5 %co160 to i2
  %p_shl220 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1468, i5 0)
  %p_shl230_cast = zext i7 %p_shl220 to i8
  %tmp_1469 = shl i5 %co160, 3
  %p_shl231_cast = zext i5 %tmp_1469 to i8
  %tmp_724 = sub i8 %p_shl230_cast, %p_shl231_cast
  %p_lshr_f23_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co160, i32 2, i32 4)
  %tmp_962_cast = zext i3 %p_lshr_f23_cast to i8
  br label %.preheader413

.preheader413.loopexit:                           ; preds = %.preheader412
  br label %.preheader413

.preheader413:                                    ; preds = %.preheader413.loopexit, %.preheader413.preheader
  %ci72 = phi i5 [ 0, %.preheader413.preheader ], [ %ci_73, %.preheader413.loopexit ]
  %ci72_cast = zext i5 %ci72 to i8
  %exitcond54 = icmp eq i5 %ci72, -8
  %empty_616 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_73 = add i5 %ci72, 1
  br i1 %exitcond54, label %.loopexit846.loopexit, label %.preheader412.preheader

.preheader412.preheader:                          ; preds = %.preheader413
  %tmp_733_cast = zext i5 %ci72 to i19
  %tmp_734 = add i8 %tmp_724, %ci72_cast
  %tmp_735_cast1 = sext i8 %tmp_734 to i15
  br label %.preheader412

.preheader412:                                    ; preds = %191, %.preheader412.preheader
  %i170 = phi i5 [ %i_171, %191 ], [ 0, %.preheader412.preheader ]
  %exitcond53 = icmp eq i5 %i170, -16
  %empty_617 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %i_171 = add i5 %i170, 1
  br i1 %exitcond53, label %.preheader413.loopexit, label %191

; <label>:191                                     ; preds = %.preheader412
  %tmp_1489 = trunc i5 %i170 to i4
  %p_shl227 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1489, i5 0)
  %p_shl236_cast = zext i9 %p_shl227 to i10
  %p_shl228 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1489, i3 0)
  %p_shl237_cast1 = zext i7 %p_shl228 to i8
  %p_shl237_cast = zext i7 %p_shl228 to i10
  %tmp_746 = sub i10 %p_shl236_cast, %p_shl237_cast
  %tmp_980_cast_cast = sext i10 %tmp_746 to i11
  %tmp73 = add i11 -520, %tmp_980_cast_cast
  %tmp_747 = add i11 %tmp73, %co161_cast181_cast
  %tmp_1490 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_747, i5 0)
  %tmp_1491 = sext i16 %tmp_1490 to i17
  %p_shl617_cast = zext i17 %tmp_1491 to i18
  %tmp_1492 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_747, i3 0)
  %tmp_1493 = sext i14 %tmp_1492 to i15
  %p_shl618_cast = zext i15 %tmp_1493 to i18
  %tmp_1494 = sub i18 %p_shl617_cast, %p_shl618_cast
  %tmp_1950_cast = sext i18 %tmp_1494 to i19
  %tmp_1495 = add i19 %tmp_733_cast, %tmp_1950_cast
  %tmp_1951_cast = sext i19 %tmp_1495 to i64
  %shuffle_conv_1x1_add_32 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1951_cast
  %shuffle_conv_1x1_loa_32 = load float* %shuffle_conv_1x1_add_32, align 4
  %tmp_1496 = shl i5 %i170, 1
  %p_shl238_cast = zext i5 %tmp_1496 to i8
  %tmp_748 = sub i8 %p_shl237_cast1, %p_shl238_cast
  %tmp_749 = add i8 %tmp_748, %tmp_962_cast
  %tmp_1497 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_749, i7 0)
  %tmp_1498 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_749, i5 0)
  %p_shl616_cast = sext i13 %tmp_1498 to i15
  %tmp_1499 = sub i15 %tmp_1497, %p_shl616_cast
  %tmp_1500 = add i15 %tmp_735_cast1, %tmp_1499
  %tmp_1958_cast = sext i15 %tmp_1500 to i64
  %weights_96_96_1x1_ad_4 = getelementptr [9216 x float]* @weights_96_96_1x1, i64 0, i64 %tmp_1958_cast
  store float %shuffle_conv_1x1_loa_32, float* %weights_96_96_1x1_ad_4, align 4
  br label %.preheader412

.preheader411.loopexit:                           ; preds = %.preheader410
  br label %.preheader411

.preheader411:                                    ; preds = %.preheader411.preheader, %.preheader411.loopexit
  %i166 = phi i5 [ %i_167, %.preheader411.loopexit ], [ 0, %.preheader411.preheader ]
  %i167_cast = zext i5 %i166 to i8
  %i167_cast1 = zext i5 %i166 to i12
  %exitcond52 = icmp eq i5 %i166, -8
  %empty_618 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_167 = add i5 %i166, 1
  br i1 %exitcond52, label %193, label %.preheader410.preheader

.preheader410.preheader:                          ; preds = %.preheader411
  br label %.preheader410

.preheader410:                                    ; preds = %.preheader410.preheader, %192
  %k64 = phi i3 [ %k_65, %192 ], [ 0, %.preheader410.preheader ]
  %exitcond51 = icmp eq i3 %k64, -4
  %empty_619 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_65 = add i3 %k64, 1
  br i1 %exitcond51, label %.preheader411.loopexit, label %192

; <label>:192                                     ; preds = %.preheader410
  %tmp_1488 = trunc i3 %k64 to i2
  %p_shl225 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1488, i5 0)
  %p_shl232_cast = zext i7 %p_shl225 to i8
  %p_shl226 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1488, i3 0)
  %p_shl233_cast = zext i5 %p_shl226 to i8
  %tmp_741 = sub i8 %p_shl232_cast, %p_shl233_cast
  %tmp_964_cast = sext i8 %tmp_741 to i12
  %tmp74 = add i12 -1672, %tmp_964_cast
  %tmp_742 = add i12 %i167_cast1, %tmp74
  %tmp_743 = zext i12 %tmp_742 to i64
  %bias_addr_53 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_743
  %bias_load_53 = load float* %bias_addr_53, align 4
  %tmp_744 = add i8 %tmp_741, %i167_cast
  %tmp_968_cast = sext i8 %tmp_744 to i32
  %tmp_745 = zext i32 %tmp_968_cast to i64
  %bias_96_addr_7 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_745
  store float %bias_load_53, float* %bias_96_addr_7, align 4
  br label %.preheader410

; <label>:193                                     ; preds = %.preheader411
  call fastcc void @subconv_1x1_4_p([3456 x float]* @buffer0_1_96_4x4_p, [9216 x float]* @weights_96_96_1x1, [96 x float]* @bias_96, [3456 x float]* @buffer1_1_96_4x4_p) nounwind
  br label %.loopexit845

.loopexit845.loopexit:                            ; preds = %.preheader409
  br label %.loopexit845

.loopexit845:                                     ; preds = %.loopexit845.loopexit, %193
  %co162 = phi i7 [ 0, %193 ], [ %co_163, %.loopexit845.loopexit ]
  %exitcond50 = icmp eq i7 %co162, -32
  %empty_620 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) nounwind
  %co_163 = add i7 %co162, 1
  br i1 %exitcond50, label %195, label %.preheader409.preheader

.preheader409.preheader:                          ; preds = %.loopexit845
  %tmp_1485 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co162, i3 0)
  %p_shl619_cast = zext i10 %tmp_1485 to i11
  %tmp_1486 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co162, i1 false)
  %p_shl620_cast = zext i8 %tmp_1486 to i11
  %tmp_1487 = sub i11 %p_shl619_cast, %p_shl620_cast
  %tmp_1941_cast = sext i11 %tmp_1487 to i12
  br label %.preheader409

.preheader409.loopexit:                           ; preds = %.preheader408
  br label %.preheader409

.preheader409:                                    ; preds = %.preheader409.loopexit, %.preheader409.preheader
  %h104 = phi i3 [ 0, %.preheader409.preheader ], [ %h_105, %.preheader409.loopexit ]
  %exitcond49 = icmp eq i3 %h104, -4
  %empty_621 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %h_105 = add i3 %h104, 1
  br i1 %exitcond49, label %.loopexit845.loopexit, label %.preheader408.preheader

.preheader408.preheader:                          ; preds = %.preheader409
  %tmp_751_cast = zext i3 %h_105 to i12
  %tmp_1507 = add i12 %tmp_1941_cast, %tmp_751_cast
  %tmp_1508 = trunc i12 %tmp_1507 to i11
  %p_shl621_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1508, i3 0)
  %tmp_1509 = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_1507, i1 false)
  %p_shl622_cast = sext i13 %tmp_1509 to i14
  %tmp_1510 = sub i14 %p_shl621_cast, %p_shl622_cast
  br label %.preheader408

.preheader408:                                    ; preds = %194, %.preheader408.preheader
  %w103 = phi i3 [ %w_104, %194 ], [ 0, %.preheader408.preheader ]
  %exitcond48 = icmp eq i3 %w103, -4
  %empty_622 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %w_104 = add i3 %w103, 1
  br i1 %exitcond48, label %.preheader409.loopexit, label %194

; <label>:194                                     ; preds = %.preheader408
  %tmp_755_cast = zext i3 %w_104 to i14
  %tmp_1519 = add i14 %tmp_1510, %tmp_755_cast
  %tmp_1979_cast = zext i14 %tmp_1519 to i64
  %buffer0_1_96_4x4_p_a_1 = getelementptr [3456 x float]* @buffer0_1_96_4x4_p, i64 0, i64 %tmp_1979_cast
  %downsampleunit2_outp_2 = getelementptr [6912 x float]* @downsampleunit2_outp, i64 0, i64 %tmp_1979_cast
  %downsampleunit2_outp_3 = load float* %downsampleunit2_outp_2, align 4
  store float %downsampleunit2_outp_3, float* %buffer0_1_96_4x4_p_a_1, align 4
  br label %.preheader408

; <label>:195                                     ; preds = %.loopexit845
  call fastcc void @shuffle_96_p([3456 x float]* @buffer0_1_96_4x4_p, [6912 x float]* @shuffleunit2_0_outpu) nounwind
  br label %.loopexit844

.loopexit844.loopexit:                            ; preds = %.preheader407
  br label %.loopexit844

.loopexit844:                                     ; preds = %.loopexit844.loopexit, %195
  %co164 = phi i7 [ 0, %195 ], [ %co_165, %.loopexit844.loopexit ]
  %co164_cast = zext i7 %co164 to i8
  %exitcond47 = icmp eq i7 %co164, -32
  %empty_623 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) nounwind
  %co_165 = add i7 %co164, 1
  br i1 %exitcond47, label %.preheader405.preheader, label %.preheader407.preheader

.preheader405.preheader:                          ; preds = %.loopexit844
  br label %.preheader405

.preheader407.preheader:                          ; preds = %.loopexit844
  %tmp_750 = add i8 %co164_cast, 96
  %tmp_1501 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %tmp_750, i3 0)
  %p_shl625_cast = zext i11 %tmp_1501 to i12
  %tmp_1502 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_750, i1 false)
  %p_shl626_cast = zext i9 %tmp_1502 to i12
  %tmp_1503 = sub i12 %p_shl625_cast, %p_shl626_cast
  %tmp_1961_cast = sext i12 %tmp_1503 to i13
  %tmp_1504 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co164, i3 0)
  %p_shl623_cast = zext i10 %tmp_1504 to i11
  %tmp_1505 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co164, i1 false)
  %p_shl624_cast = zext i8 %tmp_1505 to i11
  %tmp_1506 = sub i11 %p_shl623_cast, %p_shl624_cast
  %tmp_1964_cast = sext i11 %tmp_1506 to i12
  br label %.preheader407

.preheader407.loopexit:                           ; preds = %.preheader406
  br label %.preheader407

.preheader407:                                    ; preds = %.preheader407.loopexit, %.preheader407.preheader
  %h106 = phi i3 [ 0, %.preheader407.preheader ], [ %h_107, %.preheader407.loopexit ]
  %exitcond46 = icmp eq i3 %h106, -4
  %empty_624 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %h_107 = add i3 %h106, 1
  br i1 %exitcond46, label %.loopexit844.loopexit, label %.preheader406.preheader

.preheader406.preheader:                          ; preds = %.preheader407
  %tmp_753_cast1 = zext i3 %h_107 to i12
  %tmp_753_cast2 = zext i3 %h_107 to i13
  %tmp_1513 = add i13 %tmp_753_cast2, %tmp_1961_cast
  %tmp_1514 = trunc i13 %tmp_1513 to i11
  %p_shl629_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1514, i3 0)
  %p_shl630_cast = call i14 @_ssdm_op_BitConcatenate.i14.i13.i1(i13 %tmp_1513, i1 false)
  %tmp_1515 = sub i14 %p_shl629_cast, %p_shl630_cast
  %tmp_1516 = add i12 %tmp_753_cast1, %tmp_1964_cast
  %tmp_1517 = trunc i12 %tmp_1516 to i10
  %p_shl627_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1517, i3 0)
  %p_shl628_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_1516, i1 false)
  %tmp_1518 = sub i13 %p_shl627_cast, %p_shl628_cast
  br label %.preheader406

.preheader406:                                    ; preds = %196, %.preheader406.preheader
  %w105 = phi i3 [ %w_106, %196 ], [ 0, %.preheader406.preheader ]
  %exitcond45 = icmp eq i3 %w105, -4
  %empty_625 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %w_106 = add i3 %w105, 1
  br i1 %exitcond45, label %.preheader407.loopexit, label %196

; <label>:196                                     ; preds = %.preheader406
  %tmp_760_cast1 = zext i3 %w_106 to i13
  %tmp_760_cast = zext i3 %w_106 to i14
  %tmp_1520 = add i14 %tmp_1515, %tmp_760_cast
  %tmp_1980_cast = zext i14 %tmp_1520 to i64
  %shuffleunit2_0_outpu = getelementptr [6912 x float]* @shuffleunit2_0_outpu, i64 0, i64 %tmp_1980_cast
  %tmp_1521 = add i13 %tmp_1518, %tmp_760_cast1
  %tmp_1981_cast = zext i13 %tmp_1521 to i64
  %buffer0_1_96_4x4_p_a_2 = getelementptr [3456 x float]* @buffer0_1_96_4x4_p, i64 0, i64 %tmp_1981_cast
  %shuffleunit2_0_outpu_1 = load float* %shuffleunit2_0_outpu, align 4
  store float %shuffleunit2_0_outpu_1, float* %buffer0_1_96_4x4_p_a_2, align 4
  br label %.preheader406

.preheader405.loopexit:                           ; preds = %.preheader404
  br label %.preheader405

.preheader405:                                    ; preds = %.preheader405.preheader, %.preheader405.loopexit
  %co166 = phi i5 [ %co_167, %.preheader405.loopexit ], [ 0, %.preheader405.preheader ]
  %co166_cast = zext i5 %co166 to i13
  %exitcond44 = icmp eq i5 %co166, -8
  %empty_626 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_167 = add i5 %co166, 1
  br i1 %exitcond44, label %.preheader402.preheader, label %.preheader404.preheader

.preheader402.preheader:                          ; preds = %.preheader405
  br label %.preheader402

.preheader404.preheader:                          ; preds = %.preheader405
  %tmp_1511 = trunc i5 %co166 to i2
  %p_shl229 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1511, i5 0)
  %p_shl239_cast = zext i7 %p_shl229 to i8
  %tmp_1512 = shl i5 %co166, 3
  %p_shl240_cast = zext i5 %tmp_1512 to i8
  %tmp_752 = sub i8 %p_shl239_cast, %p_shl240_cast
  %p_lshr_f24_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co166, i32 2, i32 4)
  %tmp_992_cast = zext i3 %p_lshr_f24_cast to i8
  br label %.preheader404

.preheader404.loopexit:                           ; preds = %.preheader403
  br label %.preheader404

.preheader404:                                    ; preds = %.preheader404.loopexit, %.preheader404.preheader
  %ci74 = phi i5 [ 0, %.preheader404.preheader ], [ %ci_75, %.preheader404.loopexit ]
  %ci74_cast = zext i5 %ci74 to i8
  %exitcond43 = icmp eq i5 %ci74, -8
  %empty_627 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_75 = add i5 %ci74, 1
  br i1 %exitcond43, label %.preheader405.loopexit, label %.preheader403.preheader

.preheader403.preheader:                          ; preds = %.preheader404
  %tmp_756_cast = zext i5 %ci74 to i19
  %tmp_758 = add i8 %tmp_752, %ci74_cast
  %tmp_759_cast = sext i8 %tmp_758 to i15
  br label %.preheader403

.preheader403:                                    ; preds = %197, %.preheader403.preheader
  %i174 = phi i5 [ %i_175, %197 ], [ 0, %.preheader403.preheader ]
  %exitcond42 = icmp eq i5 %i174, -16
  %empty_628 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %i_175 = add i5 %i174, 1
  br i1 %exitcond42, label %.preheader404.loopexit, label %197

; <label>:197                                     ; preds = %.preheader403
  %tmp_1523 = trunc i5 %i174 to i4
  %p_shl232 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1523, i5 0)
  %p_shl243_cast = zext i9 %p_shl232 to i10
  %p_shl233 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1523, i3 0)
  %p_shl244_cast1 = zext i7 %p_shl233 to i8
  %p_shl244_cast = zext i7 %p_shl233 to i10
  %tmp_766 = sub i10 %p_shl243_cast, %p_shl244_cast
  %tmp_1007_cast = sext i10 %tmp_766 to i13
  %tmp75 = add i13 3960, %tmp_1007_cast
  %tmp_767 = add i13 %tmp75, %co166_cast
  %tmp_1524 = call i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13 %tmp_767, i5 0)
  %p_shl633_cast = zext i18 %tmp_1524 to i19
  %tmp_1525 = call i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13 %tmp_767, i3 0)
  %p_shl634_cast = zext i16 %tmp_1525 to i19
  %tmp_1526 = sub i19 %p_shl633_cast, %p_shl634_cast
  %tmp_1527 = add i19 %tmp_756_cast, %tmp_1526
  %tmp_1989_cast = sext i19 %tmp_1527 to i64
  %shuffle_conv_1x1_add_33 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1989_cast
  %shuffle_conv_1x1_loa_33 = load float* %shuffle_conv_1x1_add_33, align 4
  %tmp_1528 = shl i5 %i174, 1
  %p_shl245_cast = zext i5 %tmp_1528 to i8
  %tmp_768 = sub i8 %p_shl244_cast1, %p_shl245_cast
  %tmp_769 = add i8 %tmp_768, %tmp_992_cast
  %tmp_1529 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_769, i7 0)
  %tmp_1530 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_769, i5 0)
  %p_shl632_cast = sext i13 %tmp_1530 to i15
  %tmp_1531 = sub i15 %tmp_1529, %p_shl632_cast
  %tmp_1532 = add i15 %tmp_759_cast, %tmp_1531
  %tmp_1996_cast = sext i15 %tmp_1532 to i64
  %weights_96_96_1x1_ad_5 = getelementptr [9216 x float]* @weights_96_96_1x1, i64 0, i64 %tmp_1996_cast
  store float %shuffle_conv_1x1_loa_33, float* %weights_96_96_1x1_ad_5, align 4
  br label %.preheader403

.preheader402.loopexit:                           ; preds = %.preheader401
  br label %.preheader402

.preheader402:                                    ; preds = %.preheader402.preheader, %.preheader402.loopexit
  %i172 = phi i5 [ %i_173, %.preheader402.loopexit ], [ 0, %.preheader402.preheader ]
  %i173_cast = zext i5 %i172 to i8
  %i173_cast1 = zext i5 %i172 to i12
  %exitcond41 = icmp eq i5 %i172, -8
  %empty_629 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_173 = add i5 %i172, 1
  br i1 %exitcond41, label %199, label %.preheader401.preheader

.preheader401.preheader:                          ; preds = %.preheader402
  br label %.preheader401

.preheader401:                                    ; preds = %.preheader401.preheader, %198
  %k66 = phi i3 [ %k_67, %198 ], [ 0, %.preheader401.preheader ]
  %exitcond40 = icmp eq i3 %k66, -4
  %empty_630 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_67 = add i3 %k66, 1
  br i1 %exitcond40, label %.preheader402.loopexit, label %198

; <label>:198                                     ; preds = %.preheader401
  %tmp_1522 = trunc i3 %k66 to i2
  %p_shl230 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1522, i5 0)
  %p_shl241_cast = zext i7 %p_shl230 to i8
  %p_shl231 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1522, i3 0)
  %p_shl242_cast = zext i5 %p_shl231 to i8
  %tmp_761 = sub i8 %p_shl241_cast, %p_shl242_cast
  %tmp_996_cast = sext i8 %tmp_761 to i12
  %tmp76 = add i12 -1576, %tmp_996_cast
  %tmp_762 = add i12 %i173_cast1, %tmp76
  %tmp_763 = zext i12 %tmp_762 to i64
  %bias_addr_54 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_763
  %bias_load_54 = load float* %bias_addr_54, align 4
  %tmp_764 = add i8 %tmp_761, %i173_cast
  %tmp_1000_cast = sext i8 %tmp_764 to i32
  %tmp_765 = zext i32 %tmp_1000_cast to i64
  %bias_96_addr_8 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_765
  store float %bias_load_54, float* %bias_96_addr_8, align 4
  br label %.preheader401

; <label>:199                                     ; preds = %.preheader402
  call fastcc void @subconv_1x1_4_p([3456 x float]* @buffer0_1_96_4x4_p, [9216 x float]* @weights_96_96_1x1, [96 x float]* @bias_96, [3456 x float]* @buffer1_1_96_4x4_p) nounwind
  br label %.loopexit843

.loopexit843.loopexit:                            ; preds = %.preheader400
  br label %.loopexit843

.loopexit843:                                     ; preds = %.loopexit843.loopexit, %199
  %co168 = phi i5 [ 0, %199 ], [ %co_169, %.loopexit843.loopexit ]
  %co169_cast = zext i5 %co168 to i8
  %co169_cast152_cast = zext i5 %co168 to i9
  %exitcond39 = icmp eq i5 %co168, -8
  %empty_631 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_169 = add i5 %co168, 1
  br i1 %exitcond39, label %.preheader397.preheader, label %.preheader400.preheader

.preheader400.preheader:                          ; preds = %.loopexit843
  br label %.preheader400

.preheader397.preheader:                          ; preds = %.loopexit843
  br label %.preheader397

.preheader400.loopexit:                           ; preds = %.preheader399
  br label %.preheader400

.preheader400:                                    ; preds = %.preheader400.preheader, %.preheader400.loopexit
  %w107 = phi i2 [ %w_108, %.preheader400.loopexit ], [ 0, %.preheader400.preheader ]
  %exitcond38 = icmp eq i2 %w107, -1
  %empty_632 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_108 = add i2 %w107, 1
  br i1 %exitcond38, label %.loopexit843.loopexit, label %.preheader399.preheader

.preheader399.preheader:                          ; preds = %.preheader400
  %tmp_770_cast1 = zext i2 %w107 to i36
  %tmp_770_cast = zext i2 %w107 to i14
  br label %.preheader399

.preheader399.loopexit:                           ; preds = %.preheader398
  br label %.preheader399

.preheader399:                                    ; preds = %.preheader399.loopexit, %.preheader399.preheader
  %h108 = phi i2 [ 0, %.preheader399.preheader ], [ %h_109, %.preheader399.loopexit ]
  %exitcond37 = icmp eq i2 %h108, -1
  %empty_633 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_109 = add i2 %h108, 1
  br i1 %exitcond37, label %.preheader400.loopexit, label %.preheader398.preheader

.preheader398.preheader:                          ; preds = %.preheader399
  %tmp_779_cast1 = zext i2 %h108 to i11
  %tmp_779_cast = zext i2 %h108 to i15
  br label %.preheader398

.preheader398:                                    ; preds = %200, %.preheader398.preheader
  %i180 = phi i3 [ %i_181, %200 ], [ 0, %.preheader398.preheader ]
  %exitcond36 = icmp eq i3 %i180, -4
  %empty_634 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_181 = add i3 %i180, 1
  br i1 %exitcond36, label %.preheader399.loopexit, label %200

; <label>:200                                     ; preds = %.preheader398
  %tmp_1536 = trunc i3 %i180 to i2
  %p_shl237 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1536, i5 0)
  %p_shl252_cast = zext i7 %p_shl237 to i8
  %p_shl238 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1536, i3 0)
  %p_shl253_cast = zext i5 %p_shl238 to i8
  %tmp_783 = sub i8 %p_shl252_cast, %p_shl253_cast
  %tmp_1033_cast_cast = sext i8 %tmp_783 to i9
  %tmp77 = add i9 -136, %tmp_1033_cast_cast
  %tmp_785 = add i9 %co169_cast152_cast, %tmp77
  %tmp_1035_cast = sext i9 %tmp_785 to i10
  %tmp_786_cast = zext i10 %tmp_1035_cast to i13
  %tmp_1537 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_785, i2 0)
  %tmp_1538 = sext i11 %tmp_1537 to i12
  %p_shl638_cast = zext i12 %tmp_1538 to i13
  %tmp_1539 = sub i13 %p_shl638_cast, %tmp_786_cast
  %tmp_2005_cast = sext i13 %tmp_1539 to i14
  %tmp_1540 = add i14 %tmp_2005_cast, %tmp_770_cast
  %tmp_2006_cast = sext i14 %tmp_1540 to i15
  %tmp_1541 = trunc i14 %tmp_1540 to i13
  %p_shl637_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1541, i2 0)
  %tmp_1542 = sub i15 %p_shl637_cast, %tmp_2006_cast
  %tmp_1543 = add i15 %tmp_1542, %tmp_779_cast
  %tmp_2009_cast = zext i15 %tmp_1543 to i64
  %shuffle_conv_3x3_add_18 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_2009_cast
  %shuffle_conv_3x3_loa_18 = load float* %shuffle_conv_3x3_add_18, align 4
  %tmp_788 = add i8 %tmp_783, %co169_cast
  %tmp_1037_cast = sext i8 %tmp_788 to i32
  %tmp_789_cast = zext i32 %tmp_1037_cast to i35
  %tmp_1544 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_788, i2 0)
  %tmp_1545 = sext i10 %tmp_1544 to i34
  %p_shl636_cast = zext i34 %tmp_1545 to i35
  %tmp_1546 = sub i35 %p_shl636_cast, %tmp_789_cast
  %tmp_2012_cast = sext i35 %tmp_1546 to i36
  %tmp_1547 = add i36 %tmp_2012_cast, %tmp_770_cast1
  %tmp_1548 = trunc i36 %tmp_1547 to i11
  %tmp_1549 = trunc i36 %tmp_1547 to i9
  %p_shl635_cast = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_1549, i2 0)
  %tmp_1550 = sub i11 %p_shl635_cast, %tmp_1548
  %tmp_1551 = add i11 %tmp_1550, %tmp_779_cast1
  %tmp_2016_cast = zext i11 %tmp_1551 to i64
  %weights_96_1_3x3_add_3 = getelementptr [864 x float]* @weights_96_1_3x3, i64 0, i64 %tmp_2016_cast
  store float %shuffle_conv_3x3_loa_18, float* %weights_96_1_3x3_add_3, align 4
  br label %.preheader398

.preheader397.loopexit:                           ; preds = %.preheader396
  br label %.preheader397

.preheader397:                                    ; preds = %.preheader397.preheader, %.preheader397.loopexit
  %i176 = phi i5 [ %i_177, %.preheader397.loopexit ], [ 0, %.preheader397.preheader ]
  %i177_cast = zext i5 %i176 to i8
  %i177_cast1 = zext i5 %i176 to i12
  %exitcond35 = icmp eq i5 %i176, -8
  %empty_635 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_177 = add i5 %i176, 1
  br i1 %exitcond35, label %202, label %.preheader396.preheader

.preheader396.preheader:                          ; preds = %.preheader397
  br label %.preheader396

.preheader396:                                    ; preds = %.preheader396.preheader, %201
  %k68 = phi i3 [ %k_69, %201 ], [ 0, %.preheader396.preheader ]
  %exitcond34 = icmp eq i3 %k68, -4
  %empty_636 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_69 = add i3 %k68, 1
  br i1 %exitcond34, label %.preheader397.loopexit, label %201

; <label>:201                                     ; preds = %.preheader396
  %tmp_1535 = trunc i3 %k68 to i2
  %p_shl235 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1535, i5 0)
  %p_shl246_cast = zext i7 %p_shl235 to i8
  %p_shl236 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1535, i3 0)
  %p_shl247_cast = zext i5 %p_shl236 to i8
  %tmp_772 = sub i8 %p_shl246_cast, %p_shl247_cast
  %tmp_1014_cast = sext i8 %tmp_772 to i12
  %tmp78 = add i12 -1480, %tmp_1014_cast
  %tmp_773 = add i12 %i177_cast1, %tmp78
  %tmp_774 = zext i12 %tmp_773 to i64
  %bias_addr_55 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_774
  %bias_load_55 = load float* %bias_addr_55, align 4
  %tmp_777 = add i8 %tmp_772, %i177_cast
  %tmp_1018_cast = sext i8 %tmp_777 to i32
  %tmp_778 = zext i32 %tmp_1018_cast to i64
  %bias_96_addr_9 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_778
  store float %bias_load_55, float* %bias_96_addr_9, align 4
  br label %.preheader396

; <label>:202                                     ; preds = %.preheader397
  call fastcc void @subconv_3x3_4_no_rel([3456 x float]* @buffer1_1_96_4x4_p, [864 x float]* @weights_96_1_3x3, [96 x float]* @bias_96, [3456 x float]* @buffer0_1_96_4x4_p) nounwind
  br label %.loopexit842

.loopexit842.loopexit:                            ; preds = %.preheader395
  br label %.loopexit842

.loopexit842:                                     ; preds = %.loopexit842.loopexit, %202
  %co170 = phi i5 [ 0, %202 ], [ %co_171, %.loopexit842.loopexit ]
  %co171_cast = zext i5 %co170 to i13
  %exitcond33 = icmp eq i5 %co170, -8
  %empty_637 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_171 = add i5 %co170, 1
  br i1 %exitcond33, label %.preheader393.preheader, label %.preheader395.preheader

.preheader393.preheader:                          ; preds = %.loopexit842
  br label %.preheader393

.preheader395.preheader:                          ; preds = %.loopexit842
  %tmp_1533 = trunc i5 %co170 to i2
  %p_shl234 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1533, i5 0)
  %p_shl248_cast = zext i7 %p_shl234 to i8
  %tmp_1534 = shl i5 %co170, 3
  %p_shl249_cast = zext i5 %tmp_1534 to i8
  %tmp_771 = sub i8 %p_shl248_cast, %p_shl249_cast
  %p_lshr_f25_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co170, i32 2, i32 4)
  %tmp_1022_cast = zext i3 %p_lshr_f25_cast to i8
  br label %.preheader395

.preheader395.loopexit:                           ; preds = %.preheader394
  br label %.preheader395

.preheader395:                                    ; preds = %.preheader395.loopexit, %.preheader395.preheader
  %ci76 = phi i5 [ 0, %.preheader395.preheader ], [ %ci_77, %.preheader395.loopexit ]
  %ci76_cast = zext i5 %ci76 to i8
  %exitcond32 = icmp eq i5 %ci76, -8
  %empty_638 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_77 = add i5 %ci76, 1
  br i1 %exitcond32, label %.loopexit842.loopexit, label %.preheader394.preheader

.preheader394.preheader:                          ; preds = %.preheader395
  %tmp_780_cast = zext i5 %ci76 to i19
  %tmp_781 = add i8 %tmp_771, %ci76_cast
  %tmp_782_cast = sext i8 %tmp_781 to i15
  br label %.preheader394

.preheader394:                                    ; preds = %203, %.preheader394.preheader
  %i182 = phi i5 [ %i_183, %203 ], [ 0, %.preheader394.preheader ]
  %exitcond31 = icmp eq i5 %i182, -16
  %empty_639 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %i_183 = add i5 %i182, 1
  br i1 %exitcond31, label %.preheader395.loopexit, label %203

; <label>:203                                     ; preds = %.preheader394
  %tmp_1556 = trunc i5 %i182 to i4
  %p_shl241 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1556, i5 0)
  %p_shl254_cast = zext i9 %p_shl241 to i10
  %p_shl242 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1556, i3 0)
  %p_shl255_cast1 = zext i7 %p_shl242 to i8
  %p_shl255_cast = zext i7 %p_shl242 to i10
  %tmp_795 = sub i10 %p_shl254_cast, %p_shl255_cast
  %tmp_1040_cast = sext i10 %tmp_795 to i13
  %tmp79 = add i13 -3848, %tmp_1040_cast
  %tmp_796 = add i13 %tmp79, %co171_cast
  %tmp_1557 = call i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13 %tmp_796, i5 0)
  %p_shl641_cast = zext i18 %tmp_1557 to i19
  %tmp_1558 = call i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13 %tmp_796, i3 0)
  %p_shl642_cast = zext i16 %tmp_1558 to i19
  %tmp_1559 = sub i19 %p_shl641_cast, %p_shl642_cast
  %tmp_1560 = add i19 %tmp_780_cast, %tmp_1559
  %tmp_2027_cast = sext i19 %tmp_1560 to i64
  %shuffle_conv_1x1_add_34 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_2027_cast
  %shuffle_conv_1x1_loa_34 = load float* %shuffle_conv_1x1_add_34, align 4
  %tmp_1561 = shl i5 %i182, 1
  %p_shl256_cast = zext i5 %tmp_1561 to i8
  %tmp_797 = sub i8 %p_shl255_cast1, %p_shl256_cast
  %tmp_798 = add i8 %tmp_797, %tmp_1022_cast
  %tmp_1562 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_798, i7 0)
  %tmp_1563 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_798, i5 0)
  %p_shl640_cast = sext i13 %tmp_1563 to i15
  %tmp_1564 = sub i15 %tmp_1562, %p_shl640_cast
  %tmp_1565 = add i15 %tmp_782_cast, %tmp_1564
  %tmp_2034_cast = sext i15 %tmp_1565 to i64
  %weights_96_96_1x1_ad_6 = getelementptr [9216 x float]* @weights_96_96_1x1, i64 0, i64 %tmp_2034_cast
  store float %shuffle_conv_1x1_loa_34, float* %weights_96_96_1x1_ad_6, align 4
  br label %.preheader394

.preheader393.loopexit:                           ; preds = %.preheader392
  br label %.preheader393

.preheader393:                                    ; preds = %.preheader393.preheader, %.preheader393.loopexit
  %i178 = phi i5 [ %i_179, %.preheader393.loopexit ], [ 0, %.preheader393.preheader ]
  %i179_cast = zext i5 %i178 to i8
  %i179_cast1 = zext i5 %i178 to i12
  %exitcond30 = icmp eq i5 %i178, -8
  %empty_640 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_179 = add i5 %i178, 1
  br i1 %exitcond30, label %205, label %.preheader392.preheader

.preheader392.preheader:                          ; preds = %.preheader393
  br label %.preheader392

.preheader392:                                    ; preds = %.preheader392.preheader, %204
  %k70 = phi i3 [ %k_71, %204 ], [ 0, %.preheader392.preheader ]
  %exitcond29 = icmp eq i3 %k70, -4
  %empty_641 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_71 = add i3 %k70, 1
  br i1 %exitcond29, label %.preheader393.loopexit, label %204

; <label>:204                                     ; preds = %.preheader392
  %tmp_1555 = trunc i3 %k70 to i2
  %p_shl239 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1555, i5 0)
  %p_shl250_cast = zext i7 %p_shl239 to i8
  %p_shl240 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1555, i3 0)
  %p_shl251_cast = zext i5 %p_shl240 to i8
  %tmp_790 = sub i8 %p_shl250_cast, %p_shl251_cast
  %tmp_1024_cast = sext i8 %tmp_790 to i12
  %tmp80 = add i12 -1384, %tmp_1024_cast
  %tmp_791 = add i12 %i179_cast1, %tmp80
  %tmp_792 = zext i12 %tmp_791 to i64
  %bias_addr_56 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_792
  %bias_load_56 = load float* %bias_addr_56, align 4
  %tmp_793 = add i8 %tmp_790, %i179_cast
  %tmp_1028_cast = sext i8 %tmp_793 to i32
  %tmp_794 = zext i32 %tmp_1028_cast to i64
  %bias_96_addr_10 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_794
  store float %bias_load_56, float* %bias_96_addr_10, align 4
  br label %.preheader392

; <label>:205                                     ; preds = %.preheader393
  call fastcc void @subconv_1x1_4_p([3456 x float]* @buffer0_1_96_4x4_p, [9216 x float]* @weights_96_96_1x1, [96 x float]* @bias_96, [3456 x float]* @buffer1_1_96_4x4_p) nounwind
  br label %.loopexit841

.loopexit841.loopexit:                            ; preds = %.preheader391
  br label %.loopexit841

.loopexit841:                                     ; preds = %.loopexit841.loopexit, %205
  %co172 = phi i7 [ 0, %205 ], [ %co_173, %.loopexit841.loopexit ]
  %exitcond28 = icmp eq i7 %co172, -32
  %empty_642 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) nounwind
  %co_173 = add i7 %co172, 1
  br i1 %exitcond28, label %207, label %.preheader391.preheader

.preheader391.preheader:                          ; preds = %.loopexit841
  %tmp_1552 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co172, i3 0)
  %p_shl643_cast = zext i10 %tmp_1552 to i11
  %tmp_1553 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co172, i1 false)
  %p_shl644_cast = zext i8 %tmp_1553 to i11
  %tmp_1554 = sub i11 %p_shl643_cast, %p_shl644_cast
  %tmp_2019_cast = sext i11 %tmp_1554 to i12
  br label %.preheader391

.preheader391.loopexit:                           ; preds = %.preheader390
  br label %.preheader391

.preheader391:                                    ; preds = %.preheader391.loopexit, %.preheader391.preheader
  %h110 = phi i3 [ 0, %.preheader391.preheader ], [ %h_111, %.preheader391.loopexit ]
  %exitcond27 = icmp eq i3 %h110, -4
  %empty_643 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %h_111 = add i3 %h110, 1
  br i1 %exitcond27, label %.loopexit841.loopexit, label %.preheader390.preheader

.preheader390.preheader:                          ; preds = %.preheader391
  %tmp_800_cast = zext i3 %h_111 to i12
  %tmp_1572 = add i12 %tmp_2019_cast, %tmp_800_cast
  %tmp_1573 = trunc i12 %tmp_1572 to i11
  %p_shl645_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1573, i3 0)
  %tmp_1574 = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_1572, i1 false)
  %p_shl646_cast = sext i13 %tmp_1574 to i14
  %tmp_1575 = sub i14 %p_shl645_cast, %p_shl646_cast
  br label %.preheader390

.preheader390:                                    ; preds = %206, %.preheader390.preheader
  %w109 = phi i3 [ %w_110, %206 ], [ 0, %.preheader390.preheader ]
  %exitcond26 = icmp eq i3 %w109, -4
  %empty_644 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %w_110 = add i3 %w109, 1
  br i1 %exitcond26, label %.preheader391.loopexit, label %206

; <label>:206                                     ; preds = %.preheader390
  %tmp_805_cast = zext i3 %w_110 to i14
  %tmp_1584 = add i14 %tmp_1575, %tmp_805_cast
  %tmp_2055_cast = zext i14 %tmp_1584 to i64
  %shuffleunit2_0_outpu_2 = getelementptr [6912 x float]* @shuffleunit2_0_outpu, i64 0, i64 %tmp_2055_cast
  %buffer0_1_96_4x4_p_a_3 = getelementptr [3456 x float]* @buffer0_1_96_4x4_p, i64 0, i64 %tmp_2055_cast
  %shuffleunit2_0_outpu_3 = load float* %shuffleunit2_0_outpu_2, align 4
  store float %shuffleunit2_0_outpu_3, float* %buffer0_1_96_4x4_p_a_3, align 4
  br label %.preheader390

; <label>:207                                     ; preds = %.loopexit841
  call fastcc void @shuffle_96_p([3456 x float]* @buffer0_1_96_4x4_p, [6912 x float]* @shuffleunit2_1_outpu) nounwind
  br label %.loopexit840

.loopexit840.loopexit:                            ; preds = %.preheader389
  br label %.loopexit840

.loopexit840:                                     ; preds = %.loopexit840.loopexit, %207
  %co174 = phi i7 [ 0, %207 ], [ %co_175, %.loopexit840.loopexit ]
  %co174_cast = zext i7 %co174 to i8
  %exitcond25 = icmp eq i7 %co174, -32
  %empty_645 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) nounwind
  %co_175 = add i7 %co174, 1
  br i1 %exitcond25, label %.preheader387.preheader, label %.preheader389.preheader

.preheader387.preheader:                          ; preds = %.loopexit840
  br label %.preheader387

.preheader389.preheader:                          ; preds = %.loopexit840
  %tmp_799 = add i8 %co174_cast, 96
  %tmp_1566 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %tmp_799, i3 0)
  %p_shl649_cast = zext i11 %tmp_1566 to i12
  %tmp_1567 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_799, i1 false)
  %p_shl650_cast = zext i9 %tmp_1567 to i12
  %tmp_1568 = sub i12 %p_shl649_cast, %p_shl650_cast
  %tmp_2037_cast = sext i12 %tmp_1568 to i13
  %tmp_1569 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co174, i3 0)
  %p_shl647_cast = zext i10 %tmp_1569 to i11
  %tmp_1570 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co174, i1 false)
  %p_shl648_cast = zext i8 %tmp_1570 to i11
  %tmp_1571 = sub i11 %p_shl647_cast, %p_shl648_cast
  %tmp_2040_cast = sext i11 %tmp_1571 to i12
  br label %.preheader389

.preheader389.loopexit:                           ; preds = %.preheader388
  br label %.preheader389

.preheader389:                                    ; preds = %.preheader389.loopexit, %.preheader389.preheader
  %h112 = phi i3 [ 0, %.preheader389.preheader ], [ %h_113, %.preheader389.loopexit ]
  %exitcond24 = icmp eq i3 %h112, -4
  %empty_646 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %h_113 = add i3 %h112, 1
  br i1 %exitcond24, label %.loopexit840.loopexit, label %.preheader388.preheader

.preheader388.preheader:                          ; preds = %.preheader389
  %tmp_803_cast1 = zext i3 %h_113 to i13
  %tmp_803_cast = zext i3 %h_113 to i12
  %tmp_1578 = add i12 %tmp_803_cast, %tmp_2040_cast
  %tmp_1579 = trunc i12 %tmp_1578 to i10
  %p_shl653_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1579, i3 0)
  %p_shl654_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_1578, i1 false)
  %tmp_1580 = sub i13 %p_shl653_cast, %p_shl654_cast
  %tmp_1581 = add i13 %tmp_803_cast1, %tmp_2037_cast
  %tmp_1582 = trunc i13 %tmp_1581 to i11
  %p_shl651_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1582, i3 0)
  %p_shl652_cast = call i14 @_ssdm_op_BitConcatenate.i14.i13.i1(i13 %tmp_1581, i1 false)
  %tmp_1583 = sub i14 %p_shl651_cast, %p_shl652_cast
  br label %.preheader388

.preheader388:                                    ; preds = %208, %.preheader388.preheader
  %w111 = phi i3 [ %w_112, %208 ], [ 0, %.preheader388.preheader ]
  %exitcond23 = icmp eq i3 %w111, -4
  %empty_647 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %w_112 = add i3 %w111, 1
  br i1 %exitcond23, label %.preheader389.loopexit, label %208

; <label>:208                                     ; preds = %.preheader388
  %tmp_809_cast1 = zext i3 %w_112 to i14
  %tmp_809_cast = zext i3 %w_112 to i13
  %tmp_1585 = add i13 %tmp_1580, %tmp_809_cast
  %tmp_2056_cast = zext i13 %tmp_1585 to i64
  %buffer0_1_96_4x4_p_a_4 = getelementptr [3456 x float]* @buffer0_1_96_4x4_p, i64 0, i64 %tmp_2056_cast
  %tmp_1586 = add i14 %tmp_1583, %tmp_809_cast1
  %tmp_2057_cast = zext i14 %tmp_1586 to i64
  %shuffleunit2_1_outpu = getelementptr [6912 x float]* @shuffleunit2_1_outpu, i64 0, i64 %tmp_2057_cast
  %shuffleunit2_1_outpu_1 = load float* %shuffleunit2_1_outpu, align 4
  store float %shuffleunit2_1_outpu_1, float* %buffer0_1_96_4x4_p_a_4, align 4
  br label %.preheader388

.preheader387.loopexit:                           ; preds = %.preheader386
  br label %.preheader387

.preheader387:                                    ; preds = %.preheader387.preheader, %.preheader387.loopexit
  %co176 = phi i5 [ %co_177, %.preheader387.loopexit ], [ 0, %.preheader387.preheader ]
  %co176_cast = zext i5 %co176 to i13
  %exitcond22 = icmp eq i5 %co176, -8
  %empty_648 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_177 = add i5 %co176, 1
  br i1 %exitcond22, label %.preheader384.preheader, label %.preheader386.preheader

.preheader384.preheader:                          ; preds = %.preheader387
  br label %.preheader384

.preheader386.preheader:                          ; preds = %.preheader387
  %tmp_1576 = trunc i5 %co176 to i2
  %p_shl243 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1576, i5 0)
  %p_shl257_cast = zext i7 %p_shl243 to i8
  %tmp_1577 = shl i5 %co176, 3
  %p_shl258_cast = zext i5 %tmp_1577 to i8
  %tmp_802 = sub i8 %p_shl257_cast, %p_shl258_cast
  %p_lshr_f26_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co176, i32 2, i32 4)
  %tmp_1052_cast = zext i3 %p_lshr_f26_cast to i8
  br label %.preheader386

.preheader386.loopexit:                           ; preds = %.preheader385
  br label %.preheader386

.preheader386:                                    ; preds = %.preheader386.loopexit, %.preheader386.preheader
  %ci78 = phi i5 [ 0, %.preheader386.preheader ], [ %ci_79, %.preheader386.loopexit ]
  %ci78_cast = zext i5 %ci78 to i8
  %exitcond21 = icmp eq i5 %ci78, -8
  %empty_649 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_79 = add i5 %ci78, 1
  br i1 %exitcond21, label %.preheader387.loopexit, label %.preheader385.preheader

.preheader385.preheader:                          ; preds = %.preheader386
  %tmp_806_cast = zext i5 %ci78 to i19
  %tmp_807 = add i8 %tmp_802, %ci78_cast
  %tmp_808_cast = sext i8 %tmp_807 to i15
  br label %.preheader385

.preheader385:                                    ; preds = %209, %.preheader385.preheader
  %i186 = phi i5 [ %i_187, %209 ], [ 0, %.preheader385.preheader ]
  %exitcond20 = icmp eq i5 %i186, -16
  %empty_650 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %i_187 = add i5 %i186, 1
  br i1 %exitcond20, label %.preheader386.loopexit, label %209

; <label>:209                                     ; preds = %.preheader385
  %tmp_1588 = trunc i5 %i186 to i4
  %p_shl246 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1588, i5 0)
  %p_shl261_cast = zext i9 %p_shl246 to i10
  %p_shl247 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1588, i3 0)
  %p_shl262_cast1 = zext i7 %p_shl247 to i8
  %p_shl262_cast = zext i7 %p_shl247 to i10
  %tmp_815 = sub i10 %p_shl261_cast, %p_shl262_cast
  %tmp_1067_cast = sext i10 %tmp_815 to i13
  %tmp81 = add i13 -3464, %tmp_1067_cast
  %tmp_816 = add i13 %tmp81, %co176_cast
  %tmp_1589 = call i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13 %tmp_816, i5 0)
  %p_shl657_cast = zext i18 %tmp_1589 to i19
  %tmp_1590 = call i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13 %tmp_816, i3 0)
  %p_shl658_cast = zext i16 %tmp_1590 to i19
  %tmp_1591 = sub i19 %p_shl657_cast, %p_shl658_cast
  %tmp_1592 = add i19 %tmp_806_cast, %tmp_1591
  %tmp_2065_cast = sext i19 %tmp_1592 to i64
  %shuffle_conv_1x1_add_35 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_2065_cast
  %shuffle_conv_1x1_loa_35 = load float* %shuffle_conv_1x1_add_35, align 4
  %tmp_1593 = shl i5 %i186, 1
  %p_shl263_cast = zext i5 %tmp_1593 to i8
  %tmp_817 = sub i8 %p_shl262_cast1, %p_shl263_cast
  %tmp_818 = add i8 %tmp_817, %tmp_1052_cast
  %tmp_1594 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_818, i7 0)
  %tmp_1595 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_818, i5 0)
  %p_shl656_cast = sext i13 %tmp_1595 to i15
  %tmp_1596 = sub i15 %tmp_1594, %p_shl656_cast
  %tmp_1597 = add i15 %tmp_808_cast, %tmp_1596
  %tmp_2072_cast = sext i15 %tmp_1597 to i64
  %weights_96_96_1x1_ad_7 = getelementptr [9216 x float]* @weights_96_96_1x1, i64 0, i64 %tmp_2072_cast
  store float %shuffle_conv_1x1_loa_35, float* %weights_96_96_1x1_ad_7, align 4
  br label %.preheader385

.preheader384.loopexit:                           ; preds = %.preheader383
  br label %.preheader384

.preheader384:                                    ; preds = %.preheader384.preheader, %.preheader384.loopexit
  %i184 = phi i5 [ %i_185, %.preheader384.loopexit ], [ 0, %.preheader384.preheader ]
  %i185_cast = zext i5 %i184 to i8
  %i185_cast1 = zext i5 %i184 to i12
  %exitcond19 = icmp eq i5 %i184, -8
  %empty_651 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_185 = add i5 %i184, 1
  br i1 %exitcond19, label %211, label %.preheader383.preheader

.preheader383.preheader:                          ; preds = %.preheader384
  br label %.preheader383

.preheader383:                                    ; preds = %.preheader383.preheader, %210
  %k72 = phi i3 [ %k_73, %210 ], [ 0, %.preheader383.preheader ]
  %exitcond18 = icmp eq i3 %k72, -4
  %empty_652 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_73 = add i3 %k72, 1
  br i1 %exitcond18, label %.preheader384.loopexit, label %210

; <label>:210                                     ; preds = %.preheader383
  %tmp_1587 = trunc i3 %k72 to i2
  %p_shl244 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1587, i5 0)
  %p_shl259_cast = zext i7 %p_shl244 to i8
  %p_shl245 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1587, i3 0)
  %p_shl260_cast = zext i5 %p_shl245 to i8
  %tmp_810 = sub i8 %p_shl259_cast, %p_shl260_cast
  %tmp_1056_cast = sext i8 %tmp_810 to i12
  %tmp82 = add i12 -1288, %tmp_1056_cast
  %tmp_811 = add i12 %i185_cast1, %tmp82
  %tmp_812 = zext i12 %tmp_811 to i64
  %bias_addr_57 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_812
  %bias_load_57 = load float* %bias_addr_57, align 4
  %tmp_813 = add i8 %tmp_810, %i185_cast
  %tmp_1060_cast = sext i8 %tmp_813 to i32
  %tmp_814 = zext i32 %tmp_1060_cast to i64
  %bias_96_addr_11 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_814
  store float %bias_load_57, float* %bias_96_addr_11, align 4
  br label %.preheader383

; <label>:211                                     ; preds = %.preheader384
  call fastcc void @subconv_1x1_4_p([3456 x float]* @buffer0_1_96_4x4_p, [9216 x float]* @weights_96_96_1x1, [96 x float]* @bias_96, [3456 x float]* @buffer1_1_96_4x4_p) nounwind
  br label %.loopexit839

.loopexit839.loopexit:                            ; preds = %.preheader382
  br label %.loopexit839

.loopexit839:                                     ; preds = %.loopexit839.loopexit, %211
  %co178 = phi i5 [ 0, %211 ], [ %co_179, %.loopexit839.loopexit ]
  %co179_cast = zext i5 %co178 to i8
  %co179_cast1 = zext i5 %co178 to i11
  %exitcond17 = icmp eq i5 %co178, -8
  %empty_653 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_179 = add i5 %co178, 1
  br i1 %exitcond17, label %.preheader379.preheader, label %.preheader382.preheader

.preheader382.preheader:                          ; preds = %.loopexit839
  br label %.preheader382

.preheader379.preheader:                          ; preds = %.loopexit839
  br label %.preheader379

.preheader382.loopexit:                           ; preds = %.preheader381
  br label %.preheader382

.preheader382:                                    ; preds = %.preheader382.preheader, %.preheader382.loopexit
  %w113 = phi i2 [ %w_114, %.preheader382.loopexit ], [ 0, %.preheader382.preheader ]
  %exitcond16 = icmp eq i2 %w113, -1
  %empty_654 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_114 = add i2 %w113, 1
  br i1 %exitcond16, label %.loopexit839.loopexit, label %.preheader381.preheader

.preheader381.preheader:                          ; preds = %.preheader382
  %tmp_819_cast1 = zext i2 %w113 to i36
  %tmp_819_cast = zext i2 %w113 to i15
  br label %.preheader381

.preheader381.loopexit:                           ; preds = %.preheader380
  br label %.preheader381

.preheader381:                                    ; preds = %.preheader381.loopexit, %.preheader381.preheader
  %h114 = phi i2 [ 0, %.preheader381.preheader ], [ %h_115, %.preheader381.loopexit ]
  %exitcond15 = icmp eq i2 %h114, -1
  %empty_655 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_115 = add i2 %h114, 1
  br i1 %exitcond15, label %.preheader382.loopexit, label %.preheader380.preheader

.preheader380.preheader:                          ; preds = %.preheader381
  %tmp_827_cast1 = zext i2 %h114 to i11
  %tmp_827_cast = zext i2 %h114 to i15
  br label %.preheader380

.preheader380:                                    ; preds = %212, %.preheader380.preheader
  %i192 = phi i3 [ %i_193, %212 ], [ 0, %.preheader380.preheader ]
  %exitcond14 = icmp eq i3 %i192, -4
  %empty_656 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_193 = add i3 %i192, 1
  br i1 %exitcond14, label %.preheader381.loopexit, label %212

; <label>:212                                     ; preds = %.preheader380
  %tmp_1601 = trunc i3 %i192 to i2
  %p_shl251 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1601, i5 0)
  %p_shl270_cast = zext i7 %p_shl251 to i8
  %p_shl252 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1601, i3 0)
  %p_shl271_cast = zext i5 %p_shl252 to i8
  %tmp_833 = sub i8 %p_shl270_cast, %p_shl271_cast
  %tmp_1093_cast = sext i8 %tmp_833 to i11
  %tmp83 = add i11 984, %tmp_1093_cast
  %tmp_836 = add i11 %co179_cast1, %tmp83
  %tmp_837_cast = zext i11 %tmp_836 to i14
  %tmp_1602 = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_836, i2 0)
  %p_shl662_cast = zext i13 %tmp_1602 to i14
  %tmp_1603 = sub i14 %p_shl662_cast, %tmp_837_cast
  %tmp_2080_cast = sext i14 %tmp_1603 to i15
  %tmp_1604 = add i15 %tmp_2080_cast, %tmp_819_cast
  %tmp_1605 = shl i15 %tmp_1604, 2
  %tmp_1606 = sub i15 %tmp_1605, %tmp_1604
  %tmp_1607 = add i15 %tmp_1606, %tmp_827_cast
  %tmp_2084_cast = zext i15 %tmp_1607 to i64
  %shuffle_conv_3x3_add_19 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_2084_cast
  %shuffle_conv_3x3_loa_19 = load float* %shuffle_conv_3x3_add_19, align 4
  %tmp_838 = add i8 %tmp_833, %co179_cast
  %tmp_1097_cast = sext i8 %tmp_838 to i32
  %tmp_839_cast = zext i32 %tmp_1097_cast to i35
  %tmp_1608 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_838, i2 0)
  %tmp_1609 = sext i10 %tmp_1608 to i34
  %p_shl660_cast = zext i34 %tmp_1609 to i35
  %tmp_1610 = sub i35 %p_shl660_cast, %tmp_839_cast
  %tmp_2087_cast = sext i35 %tmp_1610 to i36
  %tmp_1611 = add i36 %tmp_2087_cast, %tmp_819_cast1
  %tmp_1612 = trunc i36 %tmp_1611 to i11
  %tmp_1613 = trunc i36 %tmp_1611 to i9
  %p_shl659_cast = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_1613, i2 0)
  %tmp_1614 = sub i11 %p_shl659_cast, %tmp_1612
  %tmp_1615 = add i11 %tmp_1614, %tmp_827_cast1
  %tmp_2091_cast = zext i11 %tmp_1615 to i64
  %weights_96_1_3x3_add_4 = getelementptr [864 x float]* @weights_96_1_3x3, i64 0, i64 %tmp_2091_cast
  store float %shuffle_conv_3x3_loa_19, float* %weights_96_1_3x3_add_4, align 4
  br label %.preheader380

.preheader379.loopexit:                           ; preds = %.preheader378
  br label %.preheader379

.preheader379:                                    ; preds = %.preheader379.preheader, %.preheader379.loopexit
  %i188 = phi i5 [ %i_189, %.preheader379.loopexit ], [ 0, %.preheader379.preheader ]
  %i189_cast = zext i5 %i188 to i8
  %i189_cast1 = zext i5 %i188 to i12
  %exitcond13 = icmp eq i5 %i188, -8
  %empty_657 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_189 = add i5 %i188, 1
  br i1 %exitcond13, label %214, label %.preheader378.preheader

.preheader378.preheader:                          ; preds = %.preheader379
  br label %.preheader378

.preheader378:                                    ; preds = %.preheader378.preheader, %213
  %k74 = phi i3 [ %k_75, %213 ], [ 0, %.preheader378.preheader ]
  %exitcond12 = icmp eq i3 %k74, -4
  %empty_658 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_75 = add i3 %k74, 1
  br i1 %exitcond12, label %.preheader379.loopexit, label %213

; <label>:213                                     ; preds = %.preheader378
  %tmp_1600 = trunc i3 %k74 to i2
  %p_shl249 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1600, i5 0)
  %p_shl264_cast = zext i7 %p_shl249 to i8
  %p_shl250 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1600, i3 0)
  %p_shl265_cast = zext i5 %p_shl250 to i8
  %tmp_822 = sub i8 %p_shl264_cast, %p_shl265_cast
  %tmp_1074_cast = sext i8 %tmp_822 to i12
  %tmp84 = add i12 -1192, %tmp_1074_cast
  %tmp_823 = add i12 %i189_cast1, %tmp84
  %tmp_824 = zext i12 %tmp_823 to i64
  %bias_addr_58 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_824
  %bias_load_58 = load float* %bias_addr_58, align 4
  %tmp_825 = add i8 %tmp_822, %i189_cast
  %tmp_1078_cast = sext i8 %tmp_825 to i32
  %tmp_826 = zext i32 %tmp_1078_cast to i64
  %bias_96_addr_12 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_826
  store float %bias_load_58, float* %bias_96_addr_12, align 4
  br label %.preheader378

; <label>:214                                     ; preds = %.preheader379
  call fastcc void @subconv_3x3_4_no_rel([3456 x float]* @buffer1_1_96_4x4_p, [864 x float]* @weights_96_1_3x3, [96 x float]* @bias_96, [3456 x float]* @buffer0_1_96_4x4_p) nounwind
  br label %.loopexit838

.loopexit838.loopexit:                            ; preds = %.preheader377
  br label %.loopexit838

.loopexit838:                                     ; preds = %.loopexit838.loopexit, %214
  %co180 = phi i5 [ 0, %214 ], [ %co_181, %.loopexit838.loopexit ]
  %co181_cast = zext i5 %co180 to i13
  %exitcond11 = icmp eq i5 %co180, -8
  %empty_659 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_181 = add i5 %co180, 1
  br i1 %exitcond11, label %.preheader375.preheader, label %.preheader377.preheader

.preheader375.preheader:                          ; preds = %.loopexit838
  br label %.preheader375

.preheader377.preheader:                          ; preds = %.loopexit838
  %tmp_1598 = trunc i5 %co180 to i2
  %p_shl248 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1598, i5 0)
  %p_shl266_cast = zext i7 %p_shl248 to i8
  %tmp_1599 = shl i5 %co180, 3
  %p_shl267_cast = zext i5 %tmp_1599 to i8
  %tmp_820 = sub i8 %p_shl266_cast, %p_shl267_cast
  %p_lshr_f27_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co180, i32 2, i32 4)
  %tmp_1082_cast = zext i3 %p_lshr_f27_cast to i8
  br label %.preheader377

.preheader377.loopexit:                           ; preds = %.preheader376
  br label %.preheader377

.preheader377:                                    ; preds = %.preheader377.loopexit, %.preheader377.preheader
  %ci80 = phi i5 [ 0, %.preheader377.preheader ], [ %ci_81, %.preheader377.loopexit ]
  %ci80_cast = zext i5 %ci80 to i8
  %exitcond10 = icmp eq i5 %ci80, -8
  %empty_660 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_81 = add i5 %ci80, 1
  br i1 %exitcond10, label %.loopexit838.loopexit, label %.preheader376.preheader

.preheader376.preheader:                          ; preds = %.preheader377
  %tmp_828_cast1 = zext i5 %ci80 to i19
  %tmp_830 = add i8 %tmp_820, %ci80_cast
  %tmp_831_cast = sext i8 %tmp_830 to i15
  br label %.preheader376

.preheader376:                                    ; preds = %215, %.preheader376.preheader
  %i194 = phi i5 [ %i_195, %215 ], [ 0, %.preheader376.preheader ]
  %exitcond9 = icmp eq i5 %i194, -16
  %empty_661 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %i_195 = add i5 %i194, 1
  br i1 %exitcond9, label %.preheader377.loopexit, label %215

; <label>:215                                     ; preds = %.preheader376
  %tmp_1620 = trunc i5 %i194 to i4
  %p_shl255 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1620, i5 0)
  %p_shl272_cast = zext i9 %p_shl255 to i10
  %p_shl256 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1620, i3 0)
  %p_shl273_cast1 = zext i7 %p_shl256 to i8
  %p_shl273_cast = zext i7 %p_shl256 to i10
  %tmp_845 = sub i10 %p_shl272_cast, %p_shl273_cast
  %tmp_1100_cast = sext i10 %tmp_845 to i13
  %tmp85 = add i13 -3080, %tmp_1100_cast
  %tmp_846 = add i13 %tmp85, %co181_cast
  %tmp_1621 = call i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13 %tmp_846, i5 0)
  %p_shl665_cast = zext i18 %tmp_1621 to i19
  %tmp_1622 = call i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13 %tmp_846, i3 0)
  %p_shl666_cast = zext i16 %tmp_1622 to i19
  %tmp_1623 = sub i19 %p_shl665_cast, %p_shl666_cast
  %tmp_1624 = add i19 %tmp_828_cast1, %tmp_1623
  %tmp_2102_cast = sext i19 %tmp_1624 to i64
  %shuffle_conv_1x1_add_36 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_2102_cast
  %shuffle_conv_1x1_loa_36 = load float* %shuffle_conv_1x1_add_36, align 4
  %tmp_1625 = shl i5 %i194, 1
  %p_shl274_cast = zext i5 %tmp_1625 to i8
  %tmp_847 = sub i8 %p_shl273_cast1, %p_shl274_cast
  %tmp_848 = add i8 %tmp_847, %tmp_1082_cast
  %tmp_1626 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_848, i7 0)
  %tmp_1627 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_848, i5 0)
  %p_shl664_cast = sext i13 %tmp_1627 to i15
  %tmp_1628 = sub i15 %tmp_1626, %p_shl664_cast
  %tmp_1629 = add i15 %tmp_831_cast, %tmp_1628
  %tmp_2109_cast = sext i15 %tmp_1629 to i64
  %weights_96_96_1x1_ad_8 = getelementptr [9216 x float]* @weights_96_96_1x1, i64 0, i64 %tmp_2109_cast
  store float %shuffle_conv_1x1_loa_36, float* %weights_96_96_1x1_ad_8, align 4
  br label %.preheader376

.preheader375.loopexit:                           ; preds = %.preheader374
  br label %.preheader375

.preheader375:                                    ; preds = %.preheader375.preheader, %.preheader375.loopexit
  %i190 = phi i5 [ %i_191, %.preheader375.loopexit ], [ 0, %.preheader375.preheader ]
  %i191_cast = zext i5 %i190 to i8
  %i191_cast1 = zext i5 %i190 to i12
  %exitcond8 = icmp eq i5 %i190, -8
  %empty_662 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_191 = add i5 %i190, 1
  br i1 %exitcond8, label %217, label %.preheader374.preheader

.preheader374.preheader:                          ; preds = %.preheader375
  br label %.preheader374

.preheader374:                                    ; preds = %.preheader374.preheader, %216
  %k76 = phi i3 [ %k_77, %216 ], [ 0, %.preheader374.preheader ]
  %exitcond7 = icmp eq i3 %k76, -4
  %empty_663 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_77 = add i3 %k76, 1
  br i1 %exitcond7, label %.preheader375.loopexit, label %216

; <label>:216                                     ; preds = %.preheader374
  %tmp_1619 = trunc i3 %k76 to i2
  %p_shl253 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1619, i5 0)
  %p_shl268_cast = zext i7 %p_shl253 to i8
  %p_shl254 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1619, i3 0)
  %p_shl269_cast = zext i5 %p_shl254 to i8
  %tmp_840 = sub i8 %p_shl268_cast, %p_shl269_cast
  %tmp_1084_cast = sext i8 %tmp_840 to i12
  %tmp86 = add i12 -1096, %tmp_1084_cast
  %tmp_841 = add i12 %i191_cast1, %tmp86
  %tmp_842 = zext i12 %tmp_841 to i64
  %bias_addr_59 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_842
  %bias_load_59 = load float* %bias_addr_59, align 4
  %tmp_843 = add i8 %tmp_840, %i191_cast
  %tmp_1088_cast = sext i8 %tmp_843 to i32
  %tmp_844 = zext i32 %tmp_1088_cast to i64
  %bias_96_addr_13 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_844
  store float %bias_load_59, float* %bias_96_addr_13, align 4
  br label %.preheader374

; <label>:217                                     ; preds = %.preheader375
  call fastcc void @subconv_1x1_4_p([3456 x float]* @buffer0_1_96_4x4_p, [9216 x float]* @weights_96_96_1x1, [96 x float]* @bias_96, [3456 x float]* @buffer1_1_96_4x4_p) nounwind
  br label %.loopexit837

.loopexit837.loopexit:                            ; preds = %.preheader373
  br label %.loopexit837

.loopexit837:                                     ; preds = %.loopexit837.loopexit, %217
  %co182 = phi i7 [ 0, %217 ], [ %co_183, %.loopexit837.loopexit ]
  %exitcond6 = icmp eq i7 %co182, -32
  %empty_664 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) nounwind
  %co_183 = add i7 %co182, 1
  br i1 %exitcond6, label %219, label %.preheader373.preheader

.preheader373.preheader:                          ; preds = %.loopexit837
  %tmp_1616 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co182, i3 0)
  %p_shl667_cast = zext i10 %tmp_1616 to i11
  %tmp_1617 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co182, i1 false)
  %p_shl668_cast = zext i8 %tmp_1617 to i11
  %tmp_1618 = sub i11 %p_shl667_cast, %p_shl668_cast
  %tmp_2094_cast = sext i11 %tmp_1618 to i12
  br label %.preheader373

.preheader373.loopexit:                           ; preds = %.preheader372
  br label %.preheader373

.preheader373:                                    ; preds = %.preheader373.loopexit, %.preheader373.preheader
  %h116 = phi i3 [ 0, %.preheader373.preheader ], [ %h_117, %.preheader373.loopexit ]
  %exitcond5 = icmp eq i3 %h116, -4
  %empty_665 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %h_117 = add i3 %h116, 1
  br i1 %exitcond5, label %.loopexit837.loopexit, label %.preheader372.preheader

.preheader372.preheader:                          ; preds = %.preheader373
  %tmp_849_cast = zext i3 %h_117 to i12
  %tmp_1634 = add i12 %tmp_2094_cast, %tmp_849_cast
  %tmp_1635 = trunc i12 %tmp_1634 to i11
  %p_shl669_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1635, i3 0)
  %tmp_1636 = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_1634, i1 false)
  %p_shl670_cast = sext i13 %tmp_1636 to i14
  %tmp_1637 = sub i14 %p_shl669_cast, %p_shl670_cast
  br label %.preheader372

.preheader372:                                    ; preds = %218, %.preheader372.preheader
  %w116 = phi i3 [ %w_1, %218 ], [ 0, %.preheader372.preheader ]
  %exitcond4 = icmp eq i3 %w116, -4
  %empty_666 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %w_1 = add i3 %w116, 1
  br i1 %exitcond4, label %.preheader373.loopexit, label %218

; <label>:218                                     ; preds = %.preheader372
  %tmp_853_cast = zext i3 %w_1 to i14
  %tmp_1643 = add i14 %tmp_1637, %tmp_853_cast
  %tmp_2128_cast = zext i14 %tmp_1643 to i64
  %buffer0_1_96_4x4_p_a_5 = getelementptr [3456 x float]* @buffer0_1_96_4x4_p, i64 0, i64 %tmp_2128_cast
  %shuffleunit2_1_outpu_2 = getelementptr [6912 x float]* @shuffleunit2_1_outpu, i64 0, i64 %tmp_2128_cast
  %shuffleunit2_1_outpu_3 = load float* %shuffleunit2_1_outpu_2, align 4
  store float %shuffleunit2_1_outpu_3, float* %buffer0_1_96_4x4_p_a_5, align 4
  br label %.preheader372

; <label>:219                                     ; preds = %.loopexit837
  call fastcc void @shuffle_96_p([3456 x float]* @buffer0_1_96_4x4_p, [6912 x float]* @shuffleunit2_2_outpu) nounwind
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader371
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %219
  %ci82 = phi i8 [ 0, %219 ], [ %ci_83, %.loopexit.loopexit ]
  %exitcond3 = icmp eq i8 %ci82, -64
  %empty_667 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 192, i64 192, i64 192) nounwind
  %ci_83 = add i8 %ci82, 1
  br i1 %exitcond3, label %221, label %.preheader371.preheader

.preheader371.preheader:                          ; preds = %.loopexit
  %tmp_1630 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %ci82, i2 0)
  %tmp_2111_cast = zext i10 %tmp_1630 to i11
  %tmp_1631 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %ci82, i3 0)
  %p_shl671_cast = zext i11 %tmp_1631 to i12
  %tmp_1632 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %ci82, i1 false)
  %p_shl672_cast = zext i9 %tmp_1632 to i12
  %tmp_1633 = sub i12 %p_shl671_cast, %p_shl672_cast
  %tmp_2114_cast = sext i12 %tmp_1633 to i13
  br label %.preheader371

.preheader371.loopexit:                           ; preds = %.preheader
  br label %.preheader371

.preheader371:                                    ; preds = %.preheader371.loopexit, %.preheader371.preheader
  %w115 = phi i3 [ 0, %.preheader371.preheader ], [ %w_117, %.preheader371.loopexit ]
  %exitcond2 = icmp eq i3 %w115, -4
  %empty_668 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %w_117 = add i3 %w115, 1
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader371
  %tmp_850_cast1 = zext i3 %w_117 to i13
  %tmp_1639 = add i13 %tmp_850_cast1, %tmp_2114_cast
  %tmp_1640 = trunc i13 %tmp_1639 to i11
  %p_shl673_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1640, i3 0)
  %p_shl674_cast = call i14 @_ssdm_op_BitConcatenate.i14.i13.i1(i13 %tmp_1639, i1 false)
  %tmp_1641 = sub i14 %p_shl673_cast, %p_shl674_cast
  %tmp_852_cast = zext i3 %w115 to i11
  %tmp_1642 = add i11 %tmp_852_cast, %tmp_2111_cast
  %tmp_2127_cast = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_1642, i2 0)
  br label %.preheader

.preheader:                                       ; preds = %220, %.preheader.preheader
  %h118 = phi i3 [ %h_119, %220 ], [ 0, %.preheader.preheader ]
  %exitcond1 = icmp eq i3 %h118, -4
  %empty_669 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %h_119 = add i3 %h118, 1
  br i1 %exitcond1, label %.preheader371.loopexit, label %220

; <label>:220                                     ; preds = %.preheader
  %tmp_855_cast = zext i3 %h_119 to i14
  %tmp_1645 = add i14 %tmp_1641, %tmp_855_cast
  %tmp_2130_cast = zext i14 %tmp_1645 to i64
  %shuffleunit2_2_outpu = getelementptr [6912 x float]* @shuffleunit2_2_outpu, i64 0, i64 %tmp_2130_cast
  %shuffleunit2_2_outpu_2 = load float* %shuffleunit2_2_outpu, align 4
  %tmp_856_cast = zext i3 %h118 to i13
  %tmp_1646 = add i13 %tmp_2127_cast, %tmp_856_cast
  %tmp_2131_cast = zext i13 %tmp_1646 to i64
  %shuffleunit2_2_outpu_3 = getelementptr [3072 x float]* @shuffleunit2_2_outpu_1, i64 0, i64 %tmp_2131_cast
  store float %shuffleunit2_2_outpu_2, float* %shuffleunit2_2_outpu_3, align 4
  br label %.preheader

; <label>:221                                     ; preds = %.loopexit
  call fastcc void @conv_last([3072 x float]* @shuffleunit2_2_outpu_1, [98304 x float]* %conv_last_weight, [512 x float]* @conv_last_bias, [8192 x float]* @conv_last_output) nounwind
  call fastcc void @avgpool([512 x float]* @avgpool_output) nounwind
  br label %222

; <label>:222                                     ; preds = %224, %221
  %co_i = phi i4 [ 0, %221 ], [ %co_184, %224 ]
  %exitcond1_i = icmp eq i4 %co_i, -6
  %empty_670 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10) nounwind
  %co_184 = add i4 %co_i, 1
  br i1 %exitcond1_i, label %fc.exit.preheader_ifconv, label %.preheader.preheader.i

fc.exit.preheader_ifconv:                         ; preds = %222
  ret void

.preheader.preheader.i:                           ; preds = %222
  %tmp_i = zext i4 %co_i to i64
  %tmp_1638 = call i13 @_ssdm_op_BitConcatenate.i13.i4.i9(i4 %co_i, i9 0)
  %tmp_2120_cast = zext i13 %tmp_1638 to i14
  br label %.preheader.i

.preheader.i:                                     ; preds = %223, %.preheader.preheader.i
  %sum_i = phi float [ %sum, %223 ], [ 0.000000e+00, %.preheader.preheader.i ]
  %ci_i = phi i10 [ %ci_84, %223 ], [ 0, %.preheader.preheader.i ]
  %exitcond_i = icmp eq i10 %ci_i, -512
  %empty_671 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512) nounwind
  %ci_84 = add i10 %ci_i, 1
  br i1 %exitcond_i, label %224, label %223

; <label>:223                                     ; preds = %.preheader.i
  %tmp_i_672 = zext i10 %ci_i to i64
  %tmp_i_cast = zext i10 %ci_i to i14
  %tmp_1644 = add i14 %tmp_2120_cast, %tmp_i_cast
  %tmp_2129_cast = zext i14 %tmp_1644 to i64
  %fc_weight_addr = getelementptr [5120 x float]* %fc_weight, i64 0, i64 %tmp_2129_cast
  %fc_weight_load = load float* %fc_weight_addr, align 4
  %avgpool_output_addr = getelementptr [512 x float]* @avgpool_output, i64 0, i64 %tmp_i_672
  %avgpool_output_load = load float* %avgpool_output_addr, align 4
  %tmp_127_i = fmul float %fc_weight_load, %avgpool_output_load
  %sum = fadd float %sum_i, %tmp_127_i
  br label %.preheader.i

; <label>:224                                     ; preds = %.preheader.i
  %fc_bias_addr_1 = getelementptr [10 x float]* @fc_bias, i64 0, i64 %tmp_i
  %fc_bias_load = load float* %fc_bias_addr_1, align 4
  %result = fadd float %sum_i, %fc_bias_load
  %fc_output_addr = getelementptr [1000 x float]* %fc_output, i64 0, i64 %tmp_i
  store float %result, float* %fc_output_addr, align 4
  br label %222
}

!opencl.kernels = !{!0, !7, !13, !15, !17, !19, !21, !27, !33, !35, !37, !39, !41, !43, !45, !47, !48, !50, !52, !54, !56, !58, !60, !61, !63, !66}
!hls.encrypted.func = !{}
!llvm.map.gv = !{!68, !76, !83, !90, !96, !103, !109, !117, !124, !129, !134, !141, !146, !151, !156, !161, !166, !171, !176, !183, !188, !193, !200, !207, !213, !218, !223, !228, !235, !241, !247, !254, !260, !266, !272, !278, !283, !288, !293, !299, !305, !310, !315, !320, !325, !330, !331, !332, !333, !334, !335, !336, !337, !338, !339, !340, !341, !342, !343, !344, !345, !346, !347, !348, !349, !350, !351, !352, !353, !354, !355, !356, !357, !358, !359, !360, !361, !362, !363, !364, !365, !366}

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
!10 = metadata !{metadata !"kernel_arg_type", metadata !"float [3][34][34]*", metadata !"float [3][3][3]*", metadata !"float*", metadata !"float [24][34][34]*"}
!11 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !"", metadata !""}
!12 = metadata !{metadata !"kernel_arg_name", metadata !"input", metadata !"weight", metadata !"bias", metadata !"output"}
!13 = metadata !{null, metadata !8, metadata !9, metadata !14, metadata !11, metadata !12, metadata !6}
!14 = metadata !{metadata !"kernel_arg_type", metadata !"float [24][34][34]*", metadata !"float [24][1][1]*", metadata !"float*", metadata !"float [24][34][34]*"}
!15 = metadata !{null, metadata !8, metadata !9, metadata !16, metadata !11, metadata !12, metadata !6}
!16 = metadata !{metadata !"kernel_arg_type", metadata !"float [24][18][18]*", metadata !"float [24][1][1]*", metadata !"float*", metadata !"float [24][18][18]*"}
!17 = metadata !{null, metadata !8, metadata !9, metadata !18, metadata !11, metadata !12, metadata !6}
!18 = metadata !{metadata !"kernel_arg_type", metadata !"float [24][34][34]*", metadata !"float [1][3][3]*", metadata !"float*", metadata !"float [24][18][18]*"}
!19 = metadata !{null, metadata !8, metadata !9, metadata !20, metadata !11, metadata !12, metadata !6}
!20 = metadata !{metadata !"kernel_arg_type", metadata !"float [24][18][18]*", metadata !"float [1][3][3]*", metadata !"float*", metadata !"float [24][18][18]*"}
!21 = metadata !{null, metadata !22, metadata !23, metadata !24, metadata !25, metadata !26, metadata !6}
!22 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1}
!23 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none"}
!24 = metadata !{metadata !"kernel_arg_type", metadata !"float [24][18][18]*", metadata !"float [24][18][18]*", metadata !"float [48][18][18]*"}
!25 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !""}
!26 = metadata !{metadata !"kernel_arg_name", metadata !"left", metadata !"right", metadata !"output"}
!27 = metadata !{null, metadata !28, metadata !29, metadata !30, metadata !31, metadata !32, metadata !6}
!28 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!29 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!30 = metadata !{metadata !"kernel_arg_type", metadata !"float [24][18][18]*", metadata !"float [48][18][18]*"}
!31 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!32 = metadata !{metadata !"kernel_arg_name", metadata !"left", metadata !"output"}
!33 = metadata !{null, metadata !28, metadata !29, metadata !30, metadata !31, metadata !34, metadata !6}
!34 = metadata !{metadata !"kernel_arg_name", metadata !"right", metadata !"output"}
!35 = metadata !{null, metadata !8, metadata !9, metadata !36, metadata !11, metadata !12, metadata !6}
!36 = metadata !{metadata !"kernel_arg_type", metadata !"float [48][18][18]*", metadata !"float [48][1][1]*", metadata !"float*", metadata !"float [48][18][18]*"}
!37 = metadata !{null, metadata !8, metadata !9, metadata !38, metadata !11, metadata !12, metadata !6}
!38 = metadata !{metadata !"kernel_arg_type", metadata !"float [48][10][10]*", metadata !"float [48][1][1]*", metadata !"float*", metadata !"float [48][10][10]*"}
!39 = metadata !{null, metadata !8, metadata !9, metadata !40, metadata !11, metadata !12, metadata !6}
!40 = metadata !{metadata !"kernel_arg_type", metadata !"float [48][18][18]*", metadata !"float [1][3][3]*", metadata !"float*", metadata !"float [48][10][10]*"}
!41 = metadata !{null, metadata !8, metadata !9, metadata !42, metadata !11, metadata !12, metadata !6}
!42 = metadata !{metadata !"kernel_arg_type", metadata !"float [48][10][10]*", metadata !"float [1][3][3]*", metadata !"float*", metadata !"float [48][10][10]*"}
!43 = metadata !{null, metadata !22, metadata !23, metadata !44, metadata !25, metadata !26, metadata !6}
!44 = metadata !{metadata !"kernel_arg_type", metadata !"float [48][10][10]*", metadata !"float [48][10][10]*", metadata !"float [96][10][10]*"}
!45 = metadata !{null, metadata !28, metadata !29, metadata !46, metadata !31, metadata !32, metadata !6}
!46 = metadata !{metadata !"kernel_arg_type", metadata !"float [48][10][10]*", metadata !"float [96][10][10]*"}
!47 = metadata !{null, metadata !28, metadata !29, metadata !46, metadata !31, metadata !34, metadata !6}
!48 = metadata !{null, metadata !8, metadata !9, metadata !49, metadata !11, metadata !12, metadata !6}
!49 = metadata !{metadata !"kernel_arg_type", metadata !"float [96][10][10]*", metadata !"float [96][1][1]*", metadata !"float*", metadata !"float [96][10][10]*"}
!50 = metadata !{null, metadata !8, metadata !9, metadata !51, metadata !11, metadata !12, metadata !6}
!51 = metadata !{metadata !"kernel_arg_type", metadata !"float [96][6][6]*", metadata !"float [96][1][1]*", metadata !"float*", metadata !"float [96][6][6]*"}
!52 = metadata !{null, metadata !8, metadata !9, metadata !53, metadata !11, metadata !12, metadata !6}
!53 = metadata !{metadata !"kernel_arg_type", metadata !"float [96][10][10]*", metadata !"float [1][3][3]*", metadata !"float*", metadata !"float [96][6][6]*"}
!54 = metadata !{null, metadata !8, metadata !9, metadata !55, metadata !11, metadata !12, metadata !6}
!55 = metadata !{metadata !"kernel_arg_type", metadata !"float [96][6][6]*", metadata !"float [1][3][3]*", metadata !"float*", metadata !"float [96][6][6]*"}
!56 = metadata !{null, metadata !22, metadata !23, metadata !57, metadata !25, metadata !26, metadata !6}
!57 = metadata !{metadata !"kernel_arg_type", metadata !"float [96][6][6]*", metadata !"float [96][6][6]*", metadata !"float [192][6][6]*"}
!58 = metadata !{null, metadata !28, metadata !29, metadata !59, metadata !31, metadata !32, metadata !6}
!59 = metadata !{metadata !"kernel_arg_type", metadata !"float [96][6][6]*", metadata !"float [192][6][6]*"}
!60 = metadata !{null, metadata !28, metadata !29, metadata !59, metadata !31, metadata !34, metadata !6}
!61 = metadata !{null, metadata !8, metadata !9, metadata !62, metadata !11, metadata !12, metadata !6}
!62 = metadata !{metadata !"kernel_arg_type", metadata !"float [192][4][4]*", metadata !"float [192][1][1]*", metadata !"float*", metadata !"float [512][4][4]*"}
!63 = metadata !{null, metadata !28, metadata !29, metadata !64, metadata !31, metadata !65, metadata !6}
!64 = metadata !{metadata !"kernel_arg_type", metadata !"float [512][4][4]*", metadata !"float*"}
!65 = metadata !{metadata !"kernel_arg_name", metadata !"input", metadata !"output"}
!66 = metadata !{null, metadata !8, metadata !9, metadata !67, metadata !11, metadata !12, metadata !6}
!67 = metadata !{metadata !"kernel_arg_type", metadata !"float*", metadata !"float [512]*", metadata !"float*", metadata !"float*"}
!68 = metadata !{metadata !69, null}
!69 = metadata !{metadata !70}
!70 = metadata !{i32 0, i32 31, metadata !71}
!71 = metadata !{metadata !72}
!72 = metadata !{metadata !"weights_96_96_1x1", metadata !73, metadata !"float", i32 0, i32 31}
!73 = metadata !{metadata !74, metadata !74, metadata !75, metadata !75}
!74 = metadata !{i32 0, i32 95, i32 1}
!75 = metadata !{i32 0, i32 0, i32 1}
!76 = metadata !{metadata !77, null}
!77 = metadata !{metadata !78}
!78 = metadata !{i32 0, i32 31, metadata !79}
!79 = metadata !{metadata !80}
!80 = metadata !{metadata !"weights_96_1_3x3", metadata !81, metadata !"float", i32 0, i32 31}
!81 = metadata !{metadata !74, metadata !75, metadata !82, metadata !82}
!82 = metadata !{i32 0, i32 2, i32 1}
!83 = metadata !{metadata !84, null}
!84 = metadata !{metadata !85}
!85 = metadata !{i32 0, i32 31, metadata !86}
!86 = metadata !{metadata !87}
!87 = metadata !{metadata !"weights_48_48_1x1", metadata !88, metadata !"float", i32 0, i32 31}
!88 = metadata !{metadata !89, metadata !89, metadata !75, metadata !75}
!89 = metadata !{i32 0, i32 47, i32 1}
!90 = metadata !{metadata !91, null}
!91 = metadata !{metadata !92}
!92 = metadata !{i32 0, i32 31, metadata !93}
!93 = metadata !{metadata !94}
!94 = metadata !{metadata !"weights_48_1_3x3", metadata !95, metadata !"float", i32 0, i32 31}
!95 = metadata !{metadata !89, metadata !75, metadata !82, metadata !82}
!96 = metadata !{metadata !97, null}
!97 = metadata !{metadata !98}
!98 = metadata !{i32 0, i32 31, metadata !99}
!99 = metadata !{metadata !100}
!100 = metadata !{metadata !"weights_24_24_1x1", metadata !101, metadata !"float", i32 0, i32 31}
!101 = metadata !{metadata !102, metadata !102, metadata !75, metadata !75}
!102 = metadata !{i32 0, i32 23, i32 1}
!103 = metadata !{metadata !104, null}
!104 = metadata !{metadata !105}
!105 = metadata !{i32 0, i32 31, metadata !106}
!106 = metadata !{metadata !107}
!107 = metadata !{metadata !"weights_24_1_3x3", metadata !108, metadata !"float", i32 0, i32 31}
!108 = metadata !{metadata !102, metadata !75, metadata !82, metadata !82}
!109 = metadata !{metadata !110, null}
!110 = metadata !{metadata !111}
!111 = metadata !{i32 0, i32 31, metadata !112}
!112 = metadata !{metadata !113}
!113 = metadata !{metadata !"shuffleunit2_2_output_p", metadata !114, metadata !"float", i32 0, i32 31}
!114 = metadata !{metadata !75, metadata !115, metadata !116, metadata !116}
!115 = metadata !{i32 0, i32 191, i32 1}
!116 = metadata !{i32 0, i32 5, i32 1}
!117 = metadata !{metadata !118, null}
!118 = metadata !{metadata !119}
!119 = metadata !{i32 0, i32 31, metadata !120}
!120 = metadata !{metadata !121}
!121 = metadata !{metadata !"shuffleunit2_2_output", metadata !122, metadata !"float", i32 0, i32 31}
!122 = metadata !{metadata !75, metadata !115, metadata !123, metadata !123}
!123 = metadata !{i32 0, i32 3, i32 1}
!124 = metadata !{metadata !125, null}
!125 = metadata !{metadata !126}
!126 = metadata !{i32 0, i32 31, metadata !127}
!127 = metadata !{metadata !128}
!128 = metadata !{metadata !"shuffleunit2_1_output_p", metadata !114, metadata !"float", i32 0, i32 31}
!129 = metadata !{metadata !130, null}
!130 = metadata !{metadata !131}
!131 = metadata !{i32 0, i32 31, metadata !132}
!132 = metadata !{metadata !133}
!133 = metadata !{metadata !"shuffleunit2_0_output_p", metadata !114, metadata !"float", i32 0, i32 31}
!134 = metadata !{metadata !135, null}
!135 = metadata !{metadata !136}
!136 = metadata !{i32 0, i32 31, metadata !137}
!137 = metadata !{metadata !138}
!138 = metadata !{metadata !"shuffleunit1_7_output_p", metadata !139, metadata !"float", i32 0, i32 31}
!139 = metadata !{metadata !75, metadata !74, metadata !140, metadata !140}
!140 = metadata !{i32 0, i32 9, i32 1}
!141 = metadata !{metadata !142, null}
!142 = metadata !{metadata !143}
!143 = metadata !{i32 0, i32 31, metadata !144}
!144 = metadata !{metadata !145}
!145 = metadata !{metadata !"shuffleunit1_6_output_p", metadata !139, metadata !"float", i32 0, i32 31}
!146 = metadata !{metadata !147, null}
!147 = metadata !{metadata !148}
!148 = metadata !{i32 0, i32 31, metadata !149}
!149 = metadata !{metadata !150}
!150 = metadata !{metadata !"shuffleunit1_5_output_p", metadata !139, metadata !"float", i32 0, i32 31}
!151 = metadata !{metadata !152, null}
!152 = metadata !{metadata !153}
!153 = metadata !{i32 0, i32 31, metadata !154}
!154 = metadata !{metadata !155}
!155 = metadata !{metadata !"shuffleunit1_4_output_p", metadata !139, metadata !"float", i32 0, i32 31}
!156 = metadata !{metadata !157, null}
!157 = metadata !{metadata !158}
!158 = metadata !{i32 0, i32 31, metadata !159}
!159 = metadata !{metadata !160}
!160 = metadata !{metadata !"shuffleunit1_3_output_p", metadata !139, metadata !"float", i32 0, i32 31}
!161 = metadata !{metadata !162, null}
!162 = metadata !{metadata !163}
!163 = metadata !{i32 0, i32 31, metadata !164}
!164 = metadata !{metadata !165}
!165 = metadata !{metadata !"shuffleunit1_2_output_p", metadata !139, metadata !"float", i32 0, i32 31}
!166 = metadata !{metadata !167, null}
!167 = metadata !{metadata !168}
!168 = metadata !{i32 0, i32 31, metadata !169}
!169 = metadata !{metadata !170}
!170 = metadata !{metadata !"shuffleunit1_1_output_p", metadata !139, metadata !"float", i32 0, i32 31}
!171 = metadata !{metadata !172, null}
!172 = metadata !{metadata !173}
!173 = metadata !{i32 0, i32 31, metadata !174}
!174 = metadata !{metadata !175}
!175 = metadata !{metadata !"shuffleunit1_0_output_p", metadata !139, metadata !"float", i32 0, i32 31}
!176 = metadata !{metadata !177, null}
!177 = metadata !{metadata !178}
!178 = metadata !{i32 0, i32 31, metadata !179}
!179 = metadata !{metadata !180}
!180 = metadata !{metadata !"shuffleunit0_2_output_p", metadata !181, metadata !"float", i32 0, i32 31}
!181 = metadata !{metadata !75, metadata !89, metadata !182, metadata !182}
!182 = metadata !{i32 0, i32 17, i32 1}
!183 = metadata !{metadata !184, null}
!184 = metadata !{metadata !185}
!185 = metadata !{i32 0, i32 31, metadata !186}
!186 = metadata !{metadata !187}
!187 = metadata !{metadata !"shuffleunit0_1_output_p", metadata !181, metadata !"float", i32 0, i32 31}
!188 = metadata !{metadata !189, null}
!189 = metadata !{metadata !190}
!190 = metadata !{i32 0, i32 31, metadata !191}
!191 = metadata !{metadata !192}
!192 = metadata !{metadata !"shuffleunit0_0_output_p", metadata !181, metadata !"float", i32 0, i32 31}
!193 = metadata !{metadata !194, [2 x i32]* @llvm_global_ctors_0}
!194 = metadata !{metadata !195}
!195 = metadata !{i32 0, i32 31, metadata !196}
!196 = metadata !{metadata !197}
!197 = metadata !{metadata !"llvm.global_ctors.0", metadata !198, metadata !"", i32 0, i32 31}
!198 = metadata !{metadata !199}
!199 = metadata !{i32 0, i32 1, i32 1}
!200 = metadata !{metadata !201, null}
!201 = metadata !{metadata !202}
!202 = metadata !{i32 0, i32 31, metadata !203}
!203 = metadata !{metadata !204}
!204 = metadata !{metadata !"image_p", metadata !205, metadata !"float", i32 0, i32 31}
!205 = metadata !{metadata !75, metadata !82, metadata !206, metadata !206}
!206 = metadata !{i32 0, i32 33, i32 1}
!207 = metadata !{metadata !208, [10 x float]* @fc_bias}
!208 = metadata !{metadata !209}
!209 = metadata !{i32 0, i32 31, metadata !210}
!210 = metadata !{metadata !211}
!211 = metadata !{metadata !"fc_bias", metadata !212, metadata !"float", i32 0, i32 31}
!212 = metadata !{metadata !140}
!213 = metadata !{metadata !214, null}
!214 = metadata !{metadata !215}
!215 = metadata !{i32 0, i32 31, metadata !216}
!216 = metadata !{metadata !217}
!217 = metadata !{metadata !"downsampleunit2_output_p", metadata !114, metadata !"float", i32 0, i32 31}
!218 = metadata !{metadata !219, null}
!219 = metadata !{metadata !220}
!220 = metadata !{i32 0, i32 31, metadata !221}
!221 = metadata !{metadata !222}
!222 = metadata !{metadata !"downsampleunit1_output_p", metadata !139, metadata !"float", i32 0, i32 31}
!223 = metadata !{metadata !224, null}
!224 = metadata !{metadata !225}
!225 = metadata !{i32 0, i32 31, metadata !226}
!226 = metadata !{metadata !227}
!227 = metadata !{metadata !"downsampleunit0_output_p", metadata !181, metadata !"float", i32 0, i32 31}
!228 = metadata !{metadata !229, null}
!229 = metadata !{metadata !230}
!230 = metadata !{i32 0, i32 31, metadata !231}
!231 = metadata !{metadata !232}
!232 = metadata !{metadata !"conv_last_output", metadata !233, metadata !"float", i32 0, i32 31}
!233 = metadata !{metadata !75, metadata !234, metadata !123, metadata !123}
!234 = metadata !{i32 0, i32 511, i32 1}
!235 = metadata !{metadata !236, [512 x float]* @conv_last_bias}
!236 = metadata !{metadata !237}
!237 = metadata !{i32 0, i32 31, metadata !238}
!238 = metadata !{metadata !239}
!239 = metadata !{metadata !"conv_last_bias", metadata !240, metadata !"float", i32 0, i32 31}
!240 = metadata !{metadata !234}
!241 = metadata !{metadata !242, null}
!242 = metadata !{metadata !243}
!243 = metadata !{i32 0, i32 31, metadata !244}
!244 = metadata !{metadata !245}
!245 = metadata !{metadata !"conv1_output_p", metadata !246, metadata !"float", i32 0, i32 31}
!246 = metadata !{metadata !75, metadata !102, metadata !206, metadata !206}
!247 = metadata !{metadata !248, null}
!248 = metadata !{metadata !249}
!249 = metadata !{i32 0, i32 31, metadata !250}
!250 = metadata !{metadata !251}
!251 = metadata !{metadata !"conv1_output", metadata !252, metadata !"float", i32 0, i32 31}
!252 = metadata !{metadata !75, metadata !102, metadata !253, metadata !253}
!253 = metadata !{i32 0, i32 31, i32 1}
!254 = metadata !{metadata !255, [24 x float]* @conv1_bias}
!255 = metadata !{metadata !256}
!256 = metadata !{i32 0, i32 31, metadata !257}
!257 = metadata !{metadata !258}
!258 = metadata !{metadata !"conv1_bias", metadata !259, metadata !"float", i32 0, i32 31}
!259 = metadata !{metadata !102}
!260 = metadata !{metadata !261, null}
!261 = metadata !{metadata !262}
!262 = metadata !{i32 0, i32 31, metadata !263}
!263 = metadata !{metadata !264}
!264 = metadata !{metadata !"buffer1_1_96_4x4_p", metadata !265, metadata !"float", i32 0, i32 31}
!265 = metadata !{metadata !75, metadata !74, metadata !116, metadata !116}
!266 = metadata !{metadata !267, null}
!267 = metadata !{metadata !268}
!268 = metadata !{i32 0, i32 31, metadata !269}
!269 = metadata !{metadata !270}
!270 = metadata !{metadata !"buffer1_1_48_8x8_p", metadata !271, metadata !"float", i32 0, i32 31}
!271 = metadata !{metadata !75, metadata !89, metadata !140, metadata !140}
!272 = metadata !{metadata !273, null}
!273 = metadata !{metadata !274}
!274 = metadata !{i32 0, i32 31, metadata !275}
!275 = metadata !{metadata !276}
!276 = metadata !{metadata !"buffer1_1_24_16x16_p", metadata !277, metadata !"float", i32 0, i32 31}
!277 = metadata !{metadata !75, metadata !102, metadata !182, metadata !182}
!278 = metadata !{metadata !279, null}
!279 = metadata !{metadata !280}
!280 = metadata !{i32 0, i32 31, metadata !281}
!281 = metadata !{metadata !282}
!282 = metadata !{metadata !"buffer0_1_96_4x4_p", metadata !265, metadata !"float", i32 0, i32 31}
!283 = metadata !{metadata !284, null}
!284 = metadata !{metadata !285}
!285 = metadata !{i32 0, i32 31, metadata !286}
!286 = metadata !{metadata !287}
!287 = metadata !{metadata !"buffer0_1_48_8x8_p", metadata !271, metadata !"float", i32 0, i32 31}
!288 = metadata !{metadata !289, null}
!289 = metadata !{metadata !290}
!290 = metadata !{i32 0, i32 31, metadata !291}
!291 = metadata !{metadata !292}
!292 = metadata !{metadata !"buffer0_1_24_16x16_p", metadata !277, metadata !"float", i32 0, i32 31}
!293 = metadata !{metadata !294, [96 x float]* @bias_96}
!294 = metadata !{metadata !295}
!295 = metadata !{i32 0, i32 31, metadata !296}
!296 = metadata !{metadata !297}
!297 = metadata !{metadata !"bias_96", metadata !298, metadata !"float", i32 0, i32 31}
!298 = metadata !{metadata !74}
!299 = metadata !{metadata !300, [48 x float]* @bias_48}
!300 = metadata !{metadata !301}
!301 = metadata !{i32 0, i32 31, metadata !302}
!302 = metadata !{metadata !303}
!303 = metadata !{metadata !"bias_48", metadata !304, metadata !"float", i32 0, i32 31}
!304 = metadata !{metadata !89}
!305 = metadata !{metadata !306, [24 x float]* @bias_24}
!306 = metadata !{metadata !307}
!307 = metadata !{i32 0, i32 31, metadata !308}
!308 = metadata !{metadata !309}
!309 = metadata !{metadata !"bias_24", metadata !259, metadata !"float", i32 0, i32 31}
!310 = metadata !{metadata !311, [512 x float]* @avgpool_output}
!311 = metadata !{metadata !312}
!312 = metadata !{i32 0, i32 31, metadata !313}
!313 = metadata !{metadata !314}
!314 = metadata !{metadata !"avgpool_output", metadata !240, metadata !"float", i32 0, i32 31}
!315 = metadata !{metadata !316, null}
!316 = metadata !{metadata !317}
!317 = metadata !{i32 0, i32 31, metadata !318}
!318 = metadata !{metadata !319}
!319 = metadata !{metadata !"ShuffleConvs_2_DownsampleUnit__conv1r_output_p", metadata !139, metadata !"float", i32 0, i32 31}
!320 = metadata !{metadata !321, null}
!321 = metadata !{metadata !322}
!322 = metadata !{i32 0, i32 31, metadata !323}
!323 = metadata !{metadata !324}
!324 = metadata !{metadata !"ShuffleConvs_1_DownsampleUnit__conv1r_output_p", metadata !181, metadata !"float", i32 0, i32 31}
!325 = metadata !{metadata !326, null}
!326 = metadata !{metadata !327}
!327 = metadata !{i32 0, i32 31, metadata !328}
!328 = metadata !{metadata !329}
!329 = metadata !{metadata !"ShuffleConvs_0_DownsampleUnit__conv1r_output_p", metadata !246, metadata !"float", i32 0, i32 31}
!330 = metadata !{metadata !69, [9216 x float]* @weights_96_96_1x1}
!331 = metadata !{metadata !77, [864 x float]* @weights_96_1_3x3}
!332 = metadata !{metadata !84, [2304 x float]* @weights_48_48_1x1}
!333 = metadata !{metadata !91, [432 x float]* @weights_48_1_3x3}
!334 = metadata !{metadata !97, [576 x float]* @weights_24_24_1x1}
!335 = metadata !{metadata !104, [216 x float]* @weights_24_1_3x3}
!336 = metadata !{metadata !110, [6912 x float]* @shuffleunit2_2_outpu}
!337 = metadata !{metadata !118, [3072 x float]* @shuffleunit2_2_outpu_1}
!338 = metadata !{metadata !125, [6912 x float]* @shuffleunit2_1_outpu}
!339 = metadata !{metadata !130, [6912 x float]* @shuffleunit2_0_outpu}
!340 = metadata !{metadata !135, [9600 x float]* @shuffleunit1_7_outpu}
!341 = metadata !{metadata !142, [9600 x float]* @shuffleunit1_6_outpu}
!342 = metadata !{metadata !147, [9600 x float]* @shuffleunit1_5_outpu}
!343 = metadata !{metadata !152, [9600 x float]* @shuffleunit1_4_outpu}
!344 = metadata !{metadata !157, [9600 x float]* @shuffleunit1_3_outpu}
!345 = metadata !{metadata !162, [9600 x float]* @shuffleunit1_2_outpu}
!346 = metadata !{metadata !167, [9600 x float]* @shuffleunit1_1_outpu}
!347 = metadata !{metadata !172, [9600 x float]* @shuffleunit1_0_outpu}
!348 = metadata !{metadata !177, [15552 x float]* @shuffleunit0_2_outpu}
!349 = metadata !{metadata !184, [15552 x float]* @shuffleunit0_1_outpu}
!350 = metadata !{metadata !189, [15552 x float]* @shuffleunit0_0_outpu}
!351 = metadata !{metadata !201, [3468 x float]* @image_p}
!352 = metadata !{metadata !214, [6912 x float]* @downsampleunit2_outp}
!353 = metadata !{metadata !219, [9600 x float]* @downsampleunit1_outp}
!354 = metadata !{metadata !224, [15552 x float]* @downsampleunit0_outp}
!355 = metadata !{metadata !229, [8192 x float]* @conv_last_output}
!356 = metadata !{metadata !242, [27744 x float]* @conv1_output_p}
!357 = metadata !{metadata !248, [24576 x float]* @conv1_output}
!358 = metadata !{metadata !261, [3456 x float]* @buffer1_1_96_4x4_p}
!359 = metadata !{metadata !267, [4800 x float]* @buffer1_1_48_8x8_p}
!360 = metadata !{metadata !273, [7776 x float]* @buffer1_1_24_16x16_p}
!361 = metadata !{metadata !279, [3456 x float]* @buffer0_1_96_4x4_p}
!362 = metadata !{metadata !284, [4800 x float]* @buffer0_1_48_8x8_p}
!363 = metadata !{metadata !289, [7776 x float]* @buffer0_1_24_16x16_p}
!364 = metadata !{metadata !316, [9600 x float]* @ShuffleConvs_2_Downs}
!365 = metadata !{metadata !321, [15552 x float]* @ShuffleConvs_1_Downs}
!366 = metadata !{metadata !326, [27744 x float]* @ShuffleConvs_0_Downs}
!367 = metadata !{metadata !368}
!368 = metadata !{i32 0, i32 31, metadata !369}
!369 = metadata !{metadata !370}
!370 = metadata !{metadata !"image", metadata !371, metadata !"float", i32 0, i32 31}
!371 = metadata !{metadata !75, metadata !82, metadata !253, metadata !253}
!372 = metadata !{metadata !373}
!373 = metadata !{i32 0, i32 31, metadata !374}
!374 = metadata !{metadata !375}
!375 = metadata !{metadata !"conv1_weight", metadata !376, metadata !"float", i32 0, i32 31}
!376 = metadata !{metadata !102, metadata !82, metadata !82, metadata !82}
!377 = metadata !{metadata !378}
!378 = metadata !{i32 0, i32 31, metadata !379}
!379 = metadata !{metadata !380}
!380 = metadata !{metadata !"shuffle_conv_3x3", metadata !381, metadata !"float", i32 0, i32 31}
!381 = metadata !{metadata !382, metadata !75, metadata !82, metadata !82}
!382 = metadata !{i32 0, i32 1079, i32 1}
!383 = metadata !{metadata !384}
!384 = metadata !{i32 0, i32 31, metadata !385}
!385 = metadata !{metadata !386}
!386 = metadata !{metadata !"shuffle_conv_1x1", metadata !387, metadata !"float", i32 0, i32 31}
!387 = metadata !{metadata !388, metadata !102, metadata !75, metadata !75}
!388 = metadata !{i32 0, i32 5495, i32 1}
!389 = metadata !{metadata !390}
!390 = metadata !{i32 0, i32 31, metadata !391}
!391 = metadata !{metadata !392}
!392 = metadata !{metadata !"conv_last_weight", metadata !393, metadata !"float", i32 0, i32 31}
!393 = metadata !{metadata !234, metadata !115, metadata !75, metadata !75}
!394 = metadata !{metadata !395}
!395 = metadata !{i32 0, i32 31, metadata !396}
!396 = metadata !{metadata !397}
!397 = metadata !{metadata !"fc_weight", metadata !398, metadata !"float", i32 0, i32 31}
!398 = metadata !{metadata !140, metadata !234}
!399 = metadata !{metadata !400}
!400 = metadata !{i32 0, i32 31, metadata !401}
!401 = metadata !{metadata !402}
!402 = metadata !{metadata !"bias", metadata !403, metadata !"float", i32 0, i32 31}
!403 = metadata !{metadata !404}
!404 = metadata !{i32 0, i32 3617, i32 1}
!405 = metadata !{metadata !406}
!406 = metadata !{i32 0, i32 31, metadata !407}
!407 = metadata !{metadata !408}
!408 = metadata !{metadata !"fc_output", metadata !409, metadata !"float", i32 0, i32 31}
!409 = metadata !{metadata !410}
!410 = metadata !{i32 0, i32 999, i32 1}

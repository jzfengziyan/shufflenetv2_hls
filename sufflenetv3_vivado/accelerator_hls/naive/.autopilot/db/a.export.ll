; ModuleID = '/home/ziyan/ziyan/ece527/shufflenetv2_master/sufflenetv3_vivado/accelerator_hls/naive/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@weights_96_96_1x1 = global [9216 x float] zeroinitializer
@weights_96_1_3x3 = global [864 x float] zeroinitializer
@weights_48_48_1x1 = global [2304 x float] zeroinitializer
@weights_48_1_3x3 = global [432 x float] zeroinitializer
@weights_24_24_1x1 = global [576 x float] zeroinitializer
@weights_24_1_3x3 = global [216 x float] zeroinitializer
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
@llvm_global_ctors_1 = appending global [2 x void ()*] [void ()* @_GLOBAL__I_a, void ()* @_GLOBAL__I_a55]
@llvm_global_ctors_0 = appending global [2 x i32] [i32 65535, i32 65535]
@fc_bias = global [10 x float] zeroinitializer, align 16
@downsampleunit2_outp = global [3072 x float] zeroinitializer
@downsampleunit1_outp = global [6144 x float] zeroinitializer
@downsampleunit0_outp = global [12288 x float] zeroinitializer
@conv_last_output = global [8192 x float] zeroinitializer
@conv_last_bias = global [512 x float] zeroinitializer, align 16
@conv1_output = global [24576 x float] zeroinitializer
@conv1_bias = global [24 x float] zeroinitializer, align 16
@buffer1_1_96_4x4 = global [1536 x float] zeroinitializer
@buffer1_1_48_8x8 = global [3072 x float] zeroinitializer
@buffer1_1_24_16x16 = global [6144 x float] zeroinitializer
@buffer0_1_96_4x4 = global [1536 x float] zeroinitializer
@buffer0_1_48_8x8 = global [3072 x float] zeroinitializer
@buffer0_1_24_16x16 = global [6144 x float] zeroinitializer
@bias_96 = global [96 x float] zeroinitializer, align 16
@bias_48 = global [48 x float] zeroinitializer, align 16
@bias_24 = global [24 x float] zeroinitializer, align 16
@avgpool_output = global [512 x float] zeroinitializer, align 16
@ShuffleNetV2_str = internal unnamed_addr constant [13 x i8] c"ShuffleNetV2\00"
@ShuffleConvs_2_Downs = global [6144 x float] zeroinitializer
@ShuffleConvs_1_Downs = global [12288 x float] zeroinitializer
@ShuffleConvs_0_Downs = global [24576 x float] zeroinitializer

define internal fastcc void @subconv_3x3_8_stride([6144 x float]* nocapture %input_r, [864 x float]* nocapture %weight, [96 x float]* nocapture %bias, [1536 x float]* nocapture %output_r) {
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
  %empty_14 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
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
  %empty_15 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
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
  %empty_16 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
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
  %empty_17 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_1 = add i2 %n, 1
  br i1 %exitcond, label %.preheader5.loopexit, label %_ifconv

_ifconv:                                          ; preds = %.preheader
  %tmp_cast_18 = zext i2 %n to i11
  %tmp_17 = add i11 %tmp_15, %tmp_cast_18
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
  %output_addr = getelementptr [1536 x float]* %output_r, i64 0, i64 %tmp_25_cast
  store float %result, float* %output_addr, align 4
  br label %.preheader6

; <label>:2                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_3x3_8_no_rel([3072 x float]* nocapture %input_r, [432 x float]* nocapture %weight, [48 x float]* nocapture %bias, [3072 x float]* nocapture %output_r) {
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
  %empty_19 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %h_2 = add i4 %h, 1
  br i1 %exitcond3, label %.loopexit.loopexit, label %.preheader6.preheader

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_cast_20 = zext i4 %h to i10
  %tmp_22 = add i10 %tmp_cast_20, %tmp_35_cast
  %tmp_40_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_22, i3 0)
  br label %.preheader6

.preheader6:                                      ; preds = %1, %.preheader6.preheader
  %w = phi i4 [ %w_2, %1 ], [ 0, %.preheader6.preheader ]
  %w_cast = zext i4 %w to i5
  %exitcond2 = icmp eq i4 %w, -8
  %empty_21 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
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
  %empty_22 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
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
  %empty_23 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
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
  %input_addr = getelementptr [3072 x float]* %input_r, i64 0, i64 %tmp_49_cast
  %input_load = load float* %input_addr, align 4
  %notlhs = icmp ne i4 %n_cast9, %tmp_23
  %tmp6 = and i1 %icmp, %notlhs
  %tmp7 = and i1 %tmp_17, %icmp5
  %sel_tmp2 = and i1 %tmp7, %tmp6
  %tmp_25 = select i1 %sel_tmp2, float %input_load, float 0.000000e+00
  %tmp_26 = fmul float %weight_load, %tmp_25
  %sum_3 = fadd float %sum_1, %tmp_26
  br label %.preheader

; <label>:1                                       ; preds = %.preheader5
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %tmp_14_cast = zext i4 %w to i13
  %tmp_24 = add i13 %tmp_40_cast, %tmp_14_cast
  %tmp_41_cast = zext i13 %tmp_24 to i64
  %output_addr = getelementptr [3072 x float]* %output_r, i64 0, i64 %tmp_41_cast
  store float %result, float* %output_addr, align 4
  br label %.preheader6

; <label>:2                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_3x3_4_no_rel([1536 x float]* nocapture %input_r, [864 x float]* nocapture %weight, [96 x float]* nocapture %bias, [1536 x float]* nocapture %output_r) {
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
  %empty_24 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %h_3 = add i3 %h, 1
  br i1 %exitcond3, label %.loopexit.loopexit, label %.preheader6.preheader

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_cast_25 = zext i3 %h to i10
  %tmp_36 = add i10 %tmp_cast_25, %tmp_51_cast
  %tmp_56_cast = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_36, i2 0)
  br label %.preheader6

.preheader6:                                      ; preds = %1, %.preheader6.preheader
  %w = phi i3 [ %w_3, %1 ], [ 0, %.preheader6.preheader ]
  %w_cast = zext i3 %w to i4
  %exitcond2 = icmp eq i3 %w, -4
  %empty_26 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
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
  %empty_27 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
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
  %empty_28 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
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
  %input_addr = getelementptr [1536 x float]* %input_r, i64 0, i64 %tmp_65_cast
  %input_load = load float* %input_addr, align 4
  %notlhs = icmp ne i3 %n_cast, %tmp_37
  %tmp6 = and i1 %icmp, %notlhs
  %tmp7 = and i1 %tmp_30, %icmp5
  %sel_tmp2 = and i1 %tmp7, %tmp6
  %tmp_38 = select i1 %sel_tmp2, float %input_load, float 0.000000e+00
  %tmp_39 = fmul float %weight_load, %tmp_38
  %sum_4 = fadd float %sum_1, %tmp_39
  br label %.preheader

; <label>:1                                       ; preds = %.preheader5
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %tmp_27_cast = zext i3 %w to i12
  %tmp_40 = add i12 %tmp_56_cast, %tmp_27_cast
  %tmp_57_cast = zext i12 %tmp_40 to i64
  %output_addr = getelementptr [1536 x float]* %output_r, i64 0, i64 %tmp_57_cast
  store float %result, float* %output_addr, align 4
  br label %.preheader6

; <label>:2                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_3x3_32_strid([24576 x float]* nocapture %input_r, [216 x float]* nocapture %weight, [24 x float]* nocapture %bias, [6144 x float]* nocapture %output_r) {
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
  %empty_29 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %h_4 = add i5 %h, 1
  br i1 %exitcond3, label %.loopexit.loopexit, label %.preheader6.preheader

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_55 = shl i5 %h, 1
  %tmp_cast_30 = zext i5 %tmp_55 to i6
  %tmp_40_cast = zext i5 %h to i10
  %tmp_56 = add i10 %tmp_71_cast, %tmp_40_cast
  %tmp_75_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_56, i4 0)
  br label %.preheader6

.preheader6:                                      ; preds = %1, %.preheader6.preheader
  %w = phi i5 [ %w_4, %1 ], [ 0, %.preheader6.preheader ]
  %exitcond2 = icmp eq i5 %w, -16
  %empty_31 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
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
  %empty_32 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_4 = add i2 %m, 1
  br i1 %exitcond1, label %1, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader5
  %tmp_43_cast = zext i2 %m to i9
  %tmp_59 = add i9 %tmp_43_cast, %tmp_69_cast
  %tmp_60 = shl i9 %tmp_59, 2
  %tmp_61 = sub i9 %tmp_60, %tmp_59
  %tmp3 = add i2 -1, %m
  %tmp3_cast = sext i2 %tmp3 to i6
  %tmp_44 = add i6 %tmp3_cast, %tmp_cast_30
  %tmp_45_cast = sext i6 %tmp_44 to i11
  %tmp_62 = add i11 %tmp_45_cast, %tmp_67_cast
  %tmp_83_cast = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_62, i5 0)
  %tmp_50 = sub i3 0, %m_cast8_cast
  %tmp_50_cast = sext i3 %tmp_50 to i6
  %sel_tmp = icmp eq i6 %tmp_cast_30, %tmp_50_cast
  br label %.preheader

.preheader:                                       ; preds = %_ifconv, %.preheader.preheader
  %sum_1 = phi float [ %sum_5, %_ifconv ], [ %sum, %.preheader.preheader ]
  %n = phi i2 [ %n_4, %_ifconv ], [ 0, %.preheader.preheader ]
  %n_cast6 = zext i2 %n to i6
  %exitcond = icmp eq i2 %n, -1
  %empty_33 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
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
  %output_addr = getelementptr [6144 x float]* %output_r, i64 0, i64 %tmp_77_cast
  store float %result, float* %output_addr, align 4
  br label %.preheader6

; <label>:2                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_3x3_16_strid([12288 x float]* nocapture %input_r, [432 x float]* nocapture %weight, [48 x float]* nocapture %bias, [3072 x float]* nocapture %output_r) {
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
  %empty_34 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %h_5 = add i4 %h, 1
  br i1 %exitcond3, label %.loopexit.loopexit, label %.preheader6.preheader

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_62 = shl i4 %h, 1
  %tmp_cast_35 = zext i4 %tmp_62 to i5
  %tmp_53_cast = zext i4 %h to i10
  %tmp_69 = add i10 %tmp_91_cast, %tmp_53_cast
  %tmp_95_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_69, i3 0)
  br label %.preheader6

.preheader6:                                      ; preds = %1, %.preheader6.preheader
  %w = phi i4 [ %w_5, %1 ], [ 0, %.preheader6.preheader ]
  %exitcond2 = icmp eq i4 %w, -8
  %empty_36 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
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
  %empty_37 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_5 = add i2 %m, 1
  br i1 %exitcond1, label %1, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader5
  %tmp_56_cast = zext i2 %m to i10
  %tmp_72 = add i10 %tmp_56_cast, %tmp_89_cast
  %tmp_73 = shl i10 %tmp_72, 2
  %tmp_74 = sub i10 %tmp_73, %tmp_72
  %tmp3 = add i2 -1, %m
  %tmp3_cast = sext i2 %tmp3 to i5
  %tmp_57 = add i5 %tmp3_cast, %tmp_cast_35
  %tmp_58_cast = sext i5 %tmp_57 to i11
  %tmp_75 = add i11 %tmp_58_cast, %tmp_87_cast
  %tmp_103_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_75, i4 0)
  %tmp_63 = sub i3 0, %m_cast8_cast
  %tmp_63_cast = sext i3 %tmp_63 to i5
  %sel_tmp = icmp eq i5 %tmp_cast_35, %tmp_63_cast
  br label %.preheader

.preheader:                                       ; preds = %_ifconv, %.preheader.preheader
  %sum_1 = phi float [ %sum_6, %_ifconv ], [ %sum, %.preheader.preheader ]
  %n = phi i2 [ %n_5, %_ifconv ], [ 0, %.preheader.preheader ]
  %n_cast6 = zext i2 %n to i5
  %exitcond = icmp eq i2 %n, -1
  %empty_38 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
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
  %output_addr = getelementptr [3072 x float]* %output_r, i64 0, i64 %tmp_97_cast
  store float %result, float* %output_addr, align 4
  br label %.preheader6

; <label>:2                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_3x3_16_no_re([6144 x float]* nocapture %input_r, [216 x float]* nocapture %weight, [24 x float]* nocapture %bias, [6144 x float]* nocapture %output_r) {
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
  %empty_39 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %h_6 = add i5 %h, 1
  br i1 %exitcond3, label %.loopexit.loopexit, label %.preheader6.preheader

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_cast_40 = zext i5 %h to i10
  %tmp_81 = add i10 %tmp_cast_40, %tmp_107_cast
  %tmp_112_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_81, i4 0)
  br label %.preheader6

.preheader6:                                      ; preds = %1, %.preheader6.preheader
  %w = phi i5 [ %w_6, %1 ], [ 0, %.preheader6.preheader ]
  %w_cast = zext i5 %w to i6
  %exitcond2 = icmp eq i5 %w, -16
  %empty_41 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
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
  %empty_42 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
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
  %empty_43 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
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
  %input_addr = getelementptr [6144 x float]* %input_r, i64 0, i64 %tmp_121_cast
  %input_load = load float* %input_addr, align 4
  %notlhs = icmp ne i5 %n_cast9, %tmp_76
  %tmp6 = and i1 %icmp, %notlhs
  %tmp7 = and i1 %tmp_69, %icmp5
  %sel_tmp2 = and i1 %tmp7, %tmp6
  %tmp_77 = select i1 %sel_tmp2, float %input_load, float 0.000000e+00
  %tmp_78 = fmul float %weight_load, %tmp_77
  %sum_7 = fadd float %sum_1, %tmp_78
  br label %.preheader

; <label>:1                                       ; preds = %.preheader5
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %tmp_66_cast = zext i5 %w to i14
  %tmp_82 = add i14 %tmp_112_cast, %tmp_66_cast
  %tmp_113_cast = zext i14 %tmp_82 to i64
  %output_addr = getelementptr [6144 x float]* %output_r, i64 0, i64 %tmp_113_cast
  store float %result, float* %output_addr, align 4
  br label %.preheader6

; <label>:2                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_1x1_8p([9216 x float]* nocapture %weight, [96 x float]* nocapture %bias) {
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
  %empty_44 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
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
  %empty_45 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %w_7 = add i4 %w, 1
  br i1 %exitcond1, label %.preheader5.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_79_cast = zext i4 %w to i14
  %tmp_93 = add i14 %tmp_129_cast, %tmp_79_cast
  %tmp_130_cast = zext i14 %tmp_93 to i64
  %ShuffleConvs_2_Downs = getelementptr [6144 x float]* @ShuffleConvs_2_Downs, i64 0, i64 %tmp_130_cast
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum = phi float [ %sum_8, %1 ], [ 0.000000e+00, %.preheader.preheader ]
  %ci = phi i7 [ %ci_1, %1 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i7 %ci, -32
  %empty_46 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
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
  store float %result_1, float* %ShuffleConvs_2_Downs, align 4
  br label %.preheader4

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_1x1_8([3072 x float]* nocapture %input_r, [2304 x float]* nocapture %weight, [48 x float]* nocapture %bias, [3072 x float]* nocapture %output_r) {
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
  %empty_47 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
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
  %empty_48 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %w_8 = add i4 %w, 1
  br i1 %exitcond1, label %.preheader5.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_82_cast = zext i4 %w to i13
  %tmp_102 = add i13 %tmp_145_cast, %tmp_82_cast
  %tmp_146_cast = zext i13 %tmp_102 to i64
  %output_addr = getelementptr [3072 x float]* %output_r, i64 0, i64 %tmp_146_cast
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum = phi float [ %sum_9, %1 ], [ 0.000000e+00, %.preheader.preheader ]
  %ci = phi i6 [ %ci_2, %1 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i6 %ci, -16
  %empty_49 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
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
  %input_addr = getelementptr [3072 x float]* %input_r, i64 0, i64 %tmp_152_cast
  %tmp_106 = add i13 %tmp_83_cast, %tmp_99
  %tmp_153_cast = sext i13 %tmp_106 to i64
  %weight_addr = getelementptr [2304 x float]* %weight, i64 0, i64 %tmp_153_cast
  %weight_load = load float* %weight_addr, align 4
  %input_load = load float* %input_addr, align 4
  %tmp_84 = fmul float %weight_load, %input_load
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
  store float %result_2, float* %output_addr, align 4
  br label %.preheader4

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_1x1_4([1536 x float]* nocapture %input_r, [9216 x float]* nocapture %weight, [96 x float]* nocapture %bias, [1536 x float]* nocapture %output_r) {
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
  %empty_50 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
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
  %empty_51 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %w_9 = add i3 %w, 1
  br i1 %exitcond1, label %.preheader5.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_85_cast = zext i3 %w to i12
  %tmp_111 = add i12 %tmp_161_cast, %tmp_85_cast
  %tmp_162_cast = zext i12 %tmp_111 to i64
  %output_addr = getelementptr [1536 x float]* %output_r, i64 0, i64 %tmp_162_cast
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum = phi float [ %sum_10, %1 ], [ 0.000000e+00, %.preheader.preheader ]
  %ci = phi i7 [ %ci_3, %1 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i7 %ci, -32
  %empty_52 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
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
  %input_addr = getelementptr [1536 x float]* %input_r, i64 0, i64 %tmp_168_cast
  %tmp_115 = add i15 %tmp_86_cast, %tmp_108
  %tmp_169_cast = sext i15 %tmp_115 to i64
  %weight_addr = getelementptr [9216 x float]* %weight, i64 0, i64 %tmp_169_cast
  %weight_load = load float* %weight_addr, align 4
  %input_load = load float* %input_addr, align 4
  %tmp_87 = fmul float %weight_load, %input_load
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
  store float %result_3, float* %output_addr, align 4
  br label %.preheader4

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_1x1_32([576 x float]* nocapture %weight, [24 x float]* nocapture %bias) {
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
  %empty_53 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
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
  %empty_54 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  %w_10 = add i6 %w, 1
  br i1 %exitcond1, label %.preheader5.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_88_cast = zext i6 %w to i16
  %tmp_119 = add i16 %tmp_177_cast, %tmp_88_cast
  %tmp_178_cast = zext i16 %tmp_119 to i64
  %ShuffleConvs_0_Downs = getelementptr [24576 x float]* @ShuffleConvs_0_Downs, i64 0, i64 %tmp_178_cast
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum = phi float [ %sum_11, %1 ], [ 0.000000e+00, %.preheader.preheader ]
  %ci = phi i5 [ %ci_4, %1 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i5 %ci, -8
  %empty_55 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_4 = add i5 %ci, 1
  br i1 %exitcond, label %2, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_89_cast = zext i5 %ci to i11
  %tmp_120 = add i11 %tmp_89_cast, %tmp_117
  %tmp_179_cast = sext i11 %tmp_120 to i64
  %weight_addr = getelementptr [576 x float]* %weight, i64 0, i64 %tmp_179_cast
  %tmp_121 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %ci, i5 0)
  %tmp_181_cast = zext i10 %tmp_121 to i11
  %tmp_122 = add i11 %tmp_cast, %tmp_181_cast
  %tmp_184_cast = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_122, i5 0)
  %tmp_123 = add i16 %tmp_88_cast, %tmp_184_cast
  %tmp_185_cast = zext i16 %tmp_123 to i64
  %conv1_output_addr = getelementptr [24576 x float]* @conv1_output, i64 0, i64 %tmp_185_cast
  %weight_load = load float* %weight_addr, align 4
  %conv1_output_load = load float* %conv1_output_addr, align 4
  %tmp_90 = fmul float %weight_load, %conv1_output_load
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
  store float %result_4, float* %ShuffleConvs_0_Downs, align 4
  br label %.preheader4

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_1x1_16p([2304 x float]* nocapture %weight, [48 x float]* nocapture %bias) {
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
  %empty_56 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
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
  %empty_57 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %w_11 = add i5 %w, 1
  br i1 %exitcond1, label %.preheader5.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_91_cast = zext i5 %w to i15
  %tmp_127 = add i15 %tmp_193_cast, %tmp_91_cast
  %tmp_194_cast = zext i15 %tmp_127 to i64
  %ShuffleConvs_1_Downs = getelementptr [12288 x float]* @ShuffleConvs_1_Downs, i64 0, i64 %tmp_194_cast
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum = phi float [ %sum_12, %1 ], [ 0.000000e+00, %.preheader.preheader ]
  %ci = phi i6 [ %ci_5, %1 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i6 %ci, -16
  %empty_58 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
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
  store float %result_5, float* %ShuffleConvs_1_Downs, align 4
  br label %.preheader4

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @subconv_1x1_16([6144 x float]* nocapture %input_r, [576 x float]* nocapture %weight, [24 x float]* nocapture %bias, [6144 x float]* nocapture %output_r) {
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
  %empty_59 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
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
  %empty_60 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %w_12 = add i5 %w, 1
  br i1 %exitcond1, label %.preheader5.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_94_cast = zext i5 %w to i14
  %tmp_136 = add i14 %tmp_209_cast, %tmp_94_cast
  %tmp_210_cast = zext i14 %tmp_136 to i64
  %output_addr = getelementptr [6144 x float]* %output_r, i64 0, i64 %tmp_210_cast
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum = phi float [ %sum_13, %1 ], [ 0.000000e+00, %.preheader.preheader ]
  %ci = phi i5 [ %ci_6, %1 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i5 %ci, -8
  %empty_61 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
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
  %input_addr = getelementptr [6144 x float]* %input_r, i64 0, i64 %tmp_216_cast
  %tmp_140 = add i11 %tmp_95_cast, %tmp_133
  %tmp_217_cast = sext i11 %tmp_140 to i64
  %weight_addr = getelementptr [576 x float]* %weight, i64 0, i64 %tmp_217_cast
  %weight_load = load float* %weight_addr, align 4
  %input_load = load float* %input_addr, align 4
  %tmp_96 = fmul float %weight_load, %input_load
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
  store float %result_6, float* %output_addr, align 4
  br label %.preheader4

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_96_r([1536 x float]* nocapture %right_r, [3072 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i8 [ 0, %0 ], [ %co_13, %.loopexit.loopexit ]
  %tmp_94 = trunc i8 %co to i1
  %exitcond2 = icmp eq i8 %co, -64
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 192, i64 192, i64 192)
  %co_13 = add i8 1, %co
  br i1 %exitcond2, label %3, label %.preheader3.preheader

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
  %empty_62 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
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

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w = phi i3 [ %w_13, %._crit_edge ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i3 %w, -4
  %empty_63 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %w_13 = add i3 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  br i1 %tmp_94, label %2, label %._crit_edge

; <label>:2                                       ; preds = %1
  %tmp_97_cast1 = zext i3 %w to i13
  %tmp_97_cast = zext i3 %w to i12
  %tmp_144 = add i12 %tmp_224_cast, %tmp_97_cast
  %tmp_228_cast = zext i12 %tmp_144 to i64
  %right_addr = getelementptr [1536 x float]* %right_r, i64 0, i64 %tmp_228_cast
  %tmp_145 = add i13 %tmp_227_cast, %tmp_97_cast1
  %tmp_229_cast = zext i13 %tmp_145 to i64
  %output_addr = getelementptr [3072 x float]* %output_r, i64 0, i64 %tmp_229_cast
  %right_load = load float* %right_addr, align 4
  store float %right_load, float* %output_addr, align 4
  br label %._crit_edge

._crit_edge:                                      ; preds = %2, %1
  br label %.preheader

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_96_l([1536 x float]* nocapture %left_r, [3072 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i8 [ 0, %0 ], [ %co_14, %.loopexit.loopexit ]
  %tmp_95 = trunc i8 %co to i1
  %exitcond2 = icmp eq i8 %co, -64
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 192, i64 192, i64 192)
  %co_14 = add i8 1, %co
  br i1 %exitcond2, label %3, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i7 @_ssdm_op_PartSelect.i7.i8.i32.i32(i8 %co, i32 1, i32 7)
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp, i2 0)
  %tmp_231_cast = zext i9 %tmp_s to i10
  %tmp_146 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %co, i2 0)
  %tmp_233_cast = zext i10 %tmp_146 to i11
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i3 [ 0, %.preheader3.preheader ], [ %h_14, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i3 %h, -4
  %empty_64 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %h_14 = add i3 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast2 = zext i3 %h to i11
  %tmp_cast = zext i3 %h to i10
  %tmp_147 = add i10 %tmp_cast, %tmp_231_cast
  %tmp_236_cast = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_147, i2 0)
  %tmp_148 = add i11 %tmp_cast2, %tmp_233_cast
  %tmp_239_cast = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_148, i2 0)
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w = phi i3 [ %w_14, %._crit_edge ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i3 %w, -4
  %empty_65 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %w_14 = add i3 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  br i1 %tmp_95, label %._crit_edge, label %2

; <label>:2                                       ; preds = %1
  %tmp_98_cast1 = zext i3 %w to i13
  %tmp_98_cast = zext i3 %w to i12
  %tmp_149 = add i12 %tmp_236_cast, %tmp_98_cast
  %tmp_240_cast = zext i12 %tmp_149 to i64
  %left_addr = getelementptr [1536 x float]* %left_r, i64 0, i64 %tmp_240_cast
  %tmp_150 = add i13 %tmp_239_cast, %tmp_98_cast1
  %tmp_241_cast = zext i13 %tmp_150 to i64
  %output_addr = getelementptr [3072 x float]* %output_r, i64 0, i64 %tmp_241_cast
  %left_load = load float* %left_addr, align 4
  store float %left_load, float* %output_addr, align 4
  br label %._crit_edge

._crit_edge:                                      ; preds = %2, %1
  br label %.preheader

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_96([1536 x float]* nocapture %left_r, [3072 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i8 [ 0, %0 ], [ %co_15, %.loopexit.loopexit ]
  %tmp_96 = trunc i8 %co to i1
  %exitcond2 = icmp eq i8 %co, -64
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 192, i64 192, i64 192)
  %co_15 = add i8 1, %co
  br i1 %exitcond2, label %5, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i7 @_ssdm_op_PartSelect.i7.i8.i32.i32(i8 %co, i32 1, i32 7)
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp, i2 0)
  %tmp_243_cast = zext i9 %tmp_s to i10
  %tmp_151 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %co, i2 0)
  %tmp_245_cast = zext i10 %tmp_151 to i11
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i3 [ 0, %.preheader3.preheader ], [ %h_15, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i3 %h, -4
  %empty_66 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %h_15 = add i3 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast2 = zext i3 %h to i11
  %tmp_cast = zext i3 %h to i10
  %tmp_152 = add i10 %tmp_cast, %tmp_243_cast
  %tmp_248_cast = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_152, i2 0)
  %tmp_153 = add i11 %tmp_cast2, %tmp_245_cast
  %tmp_251_cast = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_153, i2 0)
  br label %.preheader

.preheader:                                       ; preds = %4, %.preheader.preheader
  %w = phi i3 [ %w_15, %4 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i3 %w, -4
  %empty_67 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %w_15 = add i3 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_99_cast1 = zext i3 %w to i13
  %tmp_99_cast = zext i3 %w to i12
  %tmp_154 = add i12 %tmp_248_cast, %tmp_99_cast
  %tmp_252_cast = zext i12 %tmp_154 to i64
  %left_addr = getelementptr [1536 x float]* %left_r, i64 0, i64 %tmp_252_cast
  %tmp_155 = add i13 %tmp_251_cast, %tmp_99_cast1
  %tmp_253_cast = zext i13 %tmp_155 to i64
  %output_addr = getelementptr [3072 x float]* %output_r, i64 0, i64 %tmp_253_cast
  %buffer1_1_96_4x4_add = getelementptr [1536 x float]* @buffer1_1_96_4x4, i64 0, i64 %tmp_252_cast
  br i1 %tmp_96, label %3, label %2

; <label>:2                                       ; preds = %1
  %left_load = load float* %left_addr, align 4
  br label %4

; <label>:3                                       ; preds = %1
  %buffer1_1_96_4x4_loa = load float* %buffer1_1_96_4x4_add, align 4
  br label %4

; <label>:4                                       ; preds = %3, %2
  %storemerge = phi float [ %left_load, %2 ], [ %buffer1_1_96_4x4_loa, %3 ]
  store float %storemerge, float* %output_addr, align 4
  br label %.preheader

; <label>:5                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_48_r([3072 x float]* nocapture %right_r, [6144 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_16, %.loopexit.loopexit ]
  %tmp_97 = trunc i7 %co to i1
  %exitcond2 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_16 = add i7 1, %co
  br i1 %exitcond2, label %3, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i6 @_ssdm_op_PartSelect.i6.i7.i32.i32(i7 %co, i32 1, i32 6)
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %tmp, i3 0)
  %tmp_255_cast = zext i9 %tmp_s to i10
  %tmp_156 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0)
  %tmp_257_cast = zext i10 %tmp_156 to i11
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i4 [ 0, %.preheader3.preheader ], [ %h_16, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i4 %h, -8
  %empty_68 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %h_16 = add i4 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast2 = zext i4 %h to i11
  %tmp_cast = zext i4 %h to i10
  %tmp_157 = add i10 %tmp_cast, %tmp_255_cast
  %tmp_260_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_157, i3 0)
  %tmp_158 = add i11 %tmp_cast2, %tmp_257_cast
  %tmp_263_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_158, i3 0)
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w = phi i4 [ %w_16, %._crit_edge ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i4 %w, -8
  %empty_69 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %w_16 = add i4 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  br i1 %tmp_97, label %2, label %._crit_edge

; <label>:2                                       ; preds = %1
  %tmp_100_cast1 = zext i4 %w to i14
  %tmp_100_cast = zext i4 %w to i13
  %tmp_159 = add i13 %tmp_260_cast, %tmp_100_cast
  %tmp_264_cast = zext i13 %tmp_159 to i64
  %right_addr = getelementptr [3072 x float]* %right_r, i64 0, i64 %tmp_264_cast
  %tmp_160 = add i14 %tmp_263_cast, %tmp_100_cast1
  %tmp_265_cast = zext i14 %tmp_160 to i64
  %output_addr = getelementptr [6144 x float]* %output_r, i64 0, i64 %tmp_265_cast
  %right_load = load float* %right_addr, align 4
  store float %right_load, float* %output_addr, align 4
  br label %._crit_edge

._crit_edge:                                      ; preds = %2, %1
  br label %.preheader

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_48_l([3072 x float]* nocapture %left_r, [6144 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_17, %.loopexit.loopexit ]
  %tmp_98 = trunc i7 %co to i1
  %exitcond2 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_17 = add i7 1, %co
  br i1 %exitcond2, label %3, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i6 @_ssdm_op_PartSelect.i6.i7.i32.i32(i7 %co, i32 1, i32 6)
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %tmp, i3 0)
  %tmp_267_cast = zext i9 %tmp_s to i10
  %tmp_161 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0)
  %tmp_269_cast = zext i10 %tmp_161 to i11
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i4 [ 0, %.preheader3.preheader ], [ %h_17, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i4 %h, -8
  %empty_70 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %h_17 = add i4 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast2 = zext i4 %h to i11
  %tmp_cast = zext i4 %h to i10
  %tmp_162 = add i10 %tmp_cast, %tmp_267_cast
  %tmp_272_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_162, i3 0)
  %tmp_163 = add i11 %tmp_cast2, %tmp_269_cast
  %tmp_275_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_163, i3 0)
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w = phi i4 [ %w_17, %._crit_edge ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i4 %w, -8
  %empty_71 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %w_17 = add i4 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  br i1 %tmp_98, label %._crit_edge, label %2

; <label>:2                                       ; preds = %1
  %tmp_101_cast1 = zext i4 %w to i14
  %tmp_101_cast = zext i4 %w to i13
  %tmp_164 = add i13 %tmp_272_cast, %tmp_101_cast
  %tmp_276_cast = zext i13 %tmp_164 to i64
  %left_addr = getelementptr [3072 x float]* %left_r, i64 0, i64 %tmp_276_cast
  %tmp_165 = add i14 %tmp_275_cast, %tmp_101_cast1
  %tmp_277_cast = zext i14 %tmp_165 to i64
  %output_addr = getelementptr [6144 x float]* %output_r, i64 0, i64 %tmp_277_cast
  %left_load = load float* %left_addr, align 4
  store float %left_load, float* %output_addr, align 4
  br label %._crit_edge

._crit_edge:                                      ; preds = %2, %1
  br label %.preheader

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_48([3072 x float]* nocapture %left_r, [6144 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_18, %.loopexit.loopexit ]
  %tmp_99 = trunc i7 %co to i1
  %exitcond2 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_18 = add i7 1, %co
  br i1 %exitcond2, label %5, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i6 @_ssdm_op_PartSelect.i6.i7.i32.i32(i7 %co, i32 1, i32 6)
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %tmp, i3 0)
  %tmp_279_cast = zext i9 %tmp_s to i10
  %tmp_166 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0)
  %tmp_281_cast = zext i10 %tmp_166 to i11
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i4 [ 0, %.preheader3.preheader ], [ %h_18, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i4 %h, -8
  %empty_72 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %h_18 = add i4 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast2 = zext i4 %h to i11
  %tmp_cast = zext i4 %h to i10
  %tmp_167 = add i10 %tmp_cast, %tmp_279_cast
  %tmp_284_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_167, i3 0)
  %tmp_168 = add i11 %tmp_cast2, %tmp_281_cast
  %tmp_287_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_168, i3 0)
  br label %.preheader

.preheader:                                       ; preds = %4, %.preheader.preheader
  %w = phi i4 [ %w_18, %4 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i4 %w, -8
  %empty_73 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %w_18 = add i4 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_102_cast1 = zext i4 %w to i14
  %tmp_102_cast = zext i4 %w to i13
  %tmp_169 = add i13 %tmp_284_cast, %tmp_102_cast
  %tmp_288_cast = zext i13 %tmp_169 to i64
  %left_addr = getelementptr [3072 x float]* %left_r, i64 0, i64 %tmp_288_cast
  %tmp_170 = add i14 %tmp_287_cast, %tmp_102_cast1
  %tmp_289_cast = zext i14 %tmp_170 to i64
  %output_addr = getelementptr [6144 x float]* %output_r, i64 0, i64 %tmp_289_cast
  %buffer1_1_48_8x8_add = getelementptr [3072 x float]* @buffer1_1_48_8x8, i64 0, i64 %tmp_288_cast
  br i1 %tmp_99, label %3, label %2

; <label>:2                                       ; preds = %1
  %left_load = load float* %left_addr, align 4
  br label %4

; <label>:3                                       ; preds = %1
  %buffer1_1_48_8x8_loa = load float* %buffer1_1_48_8x8_add, align 4
  br label %4

; <label>:4                                       ; preds = %3, %2
  %storemerge = phi float [ %left_load, %2 ], [ %buffer1_1_48_8x8_loa, %3 ]
  store float %storemerge, float* %output_addr, align 4
  br label %.preheader

; <label>:5                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_24_r([6144 x float]* nocapture %right_r, [12288 x float]* nocapture %output_r) {
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
  %tmp_291_cast = zext i9 %tmp_s to i10
  %tmp_171 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co, i4 0)
  %tmp_293_cast = zext i10 %tmp_171 to i11
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i5 [ 0, %.preheader3.preheader ], [ %h_19, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i5 %h, -16
  %empty_74 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %h_19 = add i5 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast2 = zext i5 %h to i11
  %tmp_cast = zext i5 %h to i10
  %tmp_172 = add i10 %tmp_cast, %tmp_291_cast
  %tmp_296_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_172, i4 0)
  %tmp_173 = add i11 %tmp_cast2, %tmp_293_cast
  %tmp_299_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_173, i4 0)
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w = phi i5 [ %w_19, %._crit_edge ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i5 %w, -16
  %empty_75 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %w_19 = add i5 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  br i1 %tmp_100, label %2, label %._crit_edge

; <label>:2                                       ; preds = %1
  %tmp_103_cast1 = zext i5 %w to i15
  %tmp_103_cast = zext i5 %w to i14
  %tmp_174 = add i14 %tmp_296_cast, %tmp_103_cast
  %tmp_300_cast = zext i14 %tmp_174 to i64
  %right_addr = getelementptr [6144 x float]* %right_r, i64 0, i64 %tmp_300_cast
  %tmp_175 = add i15 %tmp_299_cast, %tmp_103_cast1
  %tmp_301_cast = zext i15 %tmp_175 to i64
  %output_addr = getelementptr [12288 x float]* %output_r, i64 0, i64 %tmp_301_cast
  %right_load = load float* %right_addr, align 4
  store float %right_load, float* %output_addr, align 4
  br label %._crit_edge

._crit_edge:                                      ; preds = %2, %1
  br label %.preheader

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_24_l([6144 x float]* nocapture %left_r, [12288 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_20, %.loopexit.loopexit ]
  %tmp_101 = trunc i6 %co to i1
  %exitcond2 = icmp eq i6 %co, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_20 = add i6 1, %co
  br i1 %exitcond2, label %3, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i5 @_ssdm_op_PartSelect.i5.i6.i32.i32(i6 %co, i32 1, i32 5)
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %tmp, i4 0)
  %tmp_303_cast = zext i9 %tmp_s to i10
  %tmp_176 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co, i4 0)
  %tmp_305_cast = zext i10 %tmp_176 to i11
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i5 [ 0, %.preheader3.preheader ], [ %h_20, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i5 %h, -16
  %empty_76 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %h_20 = add i5 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast2 = zext i5 %h to i11
  %tmp_cast = zext i5 %h to i10
  %tmp_177 = add i10 %tmp_cast, %tmp_303_cast
  %tmp_308_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_177, i4 0)
  %tmp_178 = add i11 %tmp_cast2, %tmp_305_cast
  %tmp_311_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_178, i4 0)
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w = phi i5 [ %w_20, %._crit_edge ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i5 %w, -16
  %empty_77 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %w_20 = add i5 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  br i1 %tmp_101, label %._crit_edge, label %2

; <label>:2                                       ; preds = %1
  %tmp_104_cast1 = zext i5 %w to i15
  %tmp_104_cast = zext i5 %w to i14
  %tmp_179 = add i14 %tmp_308_cast, %tmp_104_cast
  %tmp_312_cast = zext i14 %tmp_179 to i64
  %left_addr = getelementptr [6144 x float]* %left_r, i64 0, i64 %tmp_312_cast
  %tmp_180 = add i15 %tmp_311_cast, %tmp_104_cast1
  %tmp_313_cast = zext i15 %tmp_180 to i64
  %output_addr = getelementptr [12288 x float]* %output_r, i64 0, i64 %tmp_313_cast
  %left_load = load float* %left_addr, align 4
  store float %left_load, float* %output_addr, align 4
  br label %._crit_edge

._crit_edge:                                      ; preds = %2, %1
  br label %.preheader

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @shuffle_24([6144 x float]* nocapture %left_r, [12288 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_21, %.loopexit.loopexit ]
  %tmp_102 = trunc i6 %co to i1
  %exitcond2 = icmp eq i6 %co, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_21 = add i6 1, %co
  br i1 %exitcond2, label %5, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i5 @_ssdm_op_PartSelect.i5.i6.i32.i32(i6 %co, i32 1, i32 5)
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %tmp, i4 0)
  %tmp_315_cast = zext i9 %tmp_s to i10
  %tmp_181 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co, i4 0)
  %tmp_317_cast = zext i10 %tmp_181 to i11
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i5 [ 0, %.preheader3.preheader ], [ %h_21, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i5 %h, -16
  %empty_78 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %h_21 = add i5 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast2 = zext i5 %h to i11
  %tmp_cast = zext i5 %h to i10
  %tmp_182 = add i10 %tmp_cast, %tmp_315_cast
  %tmp_320_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_182, i4 0)
  %tmp_183 = add i11 %tmp_cast2, %tmp_317_cast
  %tmp_323_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_183, i4 0)
  br label %.preheader

.preheader:                                       ; preds = %4, %.preheader.preheader
  %w = phi i5 [ %w_21, %4 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i5 %w, -16
  %empty_79 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %w_21 = add i5 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_105_cast1 = zext i5 %w to i15
  %tmp_105_cast = zext i5 %w to i14
  %tmp_184 = add i14 %tmp_320_cast, %tmp_105_cast
  %tmp_324_cast = zext i14 %tmp_184 to i64
  %left_addr = getelementptr [6144 x float]* %left_r, i64 0, i64 %tmp_324_cast
  %tmp_185 = add i15 %tmp_323_cast, %tmp_105_cast1
  %tmp_325_cast = zext i15 %tmp_185 to i64
  %output_addr = getelementptr [12288 x float]* %output_r, i64 0, i64 %tmp_325_cast
  %buffer1_1_24_16x16_a = getelementptr [6144 x float]* @buffer1_1_24_16x16, i64 0, i64 %tmp_324_cast
  br i1 %tmp_102, label %3, label %2

; <label>:2                                       ; preds = %1
  %left_load = load float* %left_addr, align 4
  br label %4

; <label>:3                                       ; preds = %1
  %buffer1_1_24_16x16_l = load float* %buffer1_1_24_16x16_a, align 4
  br label %4

; <label>:4                                       ; preds = %3, %2
  %storemerge = phi float [ %left_load, %2 ], [ %buffer1_1_24_16x16_l, %3 ]
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

define internal fastcc void @conv_last([98304 x float]* nocapture %weight, [512 x float]* nocapture %bias, [8192 x float]* nocapture %output_r) {
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
  %tmp_186 = call i16 @_ssdm_op_BitConcatenate.i16.i10.i6(i10 %co, i6 0)
  %p_shl1_cast = zext i16 %tmp_186 to i18
  %tmp_187 = sub i18 %tmp_s, %p_shl1_cast
  %tmp_188 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %co, i2 0)
  %tmp_330_cast = zext i12 %tmp_188 to i13
  %bias_addr = getelementptr [512 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader5

.preheader5.loopexit:                             ; preds = %.preheader4
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %h = phi i3 [ 0, %.preheader5.preheader ], [ %h_22, %.preheader5.loopexit ]
  %exitcond2 = icmp eq i3 %h, -4
  %empty_80 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %h_22 = add i3 %h, 1
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader4.preheader

.preheader4.preheader:                            ; preds = %.preheader5
  %tmp_cast3 = zext i3 %h to i11
  %tmp_cast = zext i3 %h to i13
  %tmp_189 = add i13 %tmp_cast, %tmp_330_cast
  %tmp_333_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_189, i2 0)
  br label %.preheader4

.preheader4:                                      ; preds = %2, %.preheader4.preheader
  %w = phi i3 [ %w_22, %2 ], [ 0, %.preheader4.preheader ]
  %exitcond1 = icmp eq i3 %w, -4
  %empty_81 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %w_22 = add i3 %w, 1
  br i1 %exitcond1, label %.preheader5.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_106_cast2 = zext i3 %w to i13
  %tmp_106_cast = zext i3 %w to i15
  %tmp_190 = add i15 %tmp_333_cast, %tmp_106_cast
  %tmp_334_cast = zext i15 %tmp_190 to i64
  %output_addr = getelementptr [8192 x float]* %output_r, i64 0, i64 %tmp_334_cast
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum = phi float [ %sum_14, %1 ], [ 0.000000e+00, %.preheader.preheader ]
  %ci = phi i8 [ %ci_7, %1 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i8 %ci, -64
  %empty_82 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 192, i64 192, i64 192)
  %ci_7 = add i8 %ci, 1
  br i1 %exitcond, label %2, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_107_cast = zext i8 %ci to i18
  %tmp_191 = add i18 %tmp_107_cast, %tmp_187
  %tmp_335_cast = sext i18 %tmp_191 to i64
  %weight_addr = getelementptr [98304 x float]* %weight, i64 0, i64 %tmp_335_cast
  %tmp_192 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %ci, i2 0)
  %tmp_337_cast = zext i10 %tmp_192 to i11
  %tmp_193 = add i11 %tmp_cast3, %tmp_337_cast
  %tmp_340_cast = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_193, i2 0)
  %tmp_194 = add i13 %tmp_106_cast2, %tmp_340_cast
  %tmp_341_cast = zext i13 %tmp_194 to i64
  %shuffleunit2_2_outpu = getelementptr [3072 x float]* @shuffleunit2_2_outpu, i64 0, i64 %tmp_341_cast
  %weight_load = load float* %weight_addr, align 4
  %shuffleunit2_2_outpu_1 = load float* %shuffleunit2_2_outpu, align 4
  %tmp_108 = fmul float %weight_load, %shuffleunit2_2_outpu_1
  %sum_14 = fadd float %sum, %tmp_108
  br label %.preheader

; <label>:2                                       ; preds = %.preheader
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %result_to_int = bitcast float %result to i32
  %tmp_31 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %result_to_int, i32 23, i32 30)
  %tmp_103 = trunc i32 %result_to_int to i23
  %notlhs = icmp ne i8 %tmp_31, -1
  %notrhs = icmp eq i23 %tmp_103, 0
  %tmp_33 = or i1 %notrhs, %notlhs
  %tmp_34 = fcmp ogt float %result, 0.000000e+00
  %tmp_35 = and i1 %tmp_33, %tmp_34
  %result_7 = select i1 %tmp_35, float %result, float 0.000000e+00
  store float %result_7, float* %output_addr, align 4
  br label %.preheader4

; <label>:3                                       ; preds = %.loopexit
  ret void
}

define internal fastcc void @conv1([3072 x float]* nocapture %input_r, [648 x float]* nocapture %weight, [24 x float]* nocapture %bias, [24576 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader9
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i5 [ 0, %0 ], [ %co_23, %.loopexit.loopexit ]
  %exitcond5 = icmp eq i5 %co, -8
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_23 = add i5 %co, 1
  br i1 %exitcond5, label %2, label %.preheader9.preheader

.preheader9.preheader:                            ; preds = %.loopexit
  %tmp = zext i5 %co to i64
  %tmp_cast = zext i5 %co to i8
  %tmp_s = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co, i2 0)
  %p_shl_cast = zext i7 %tmp_s to i8
  %tmp_195 = sub i8 %p_shl_cast, %tmp_cast
  %tmp_343_cast = sext i8 %tmp_195 to i9
  %tmp_196 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co, i5 0)
  %tmp_345_cast = zext i10 %tmp_196 to i11
  %bias_addr = getelementptr [24 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader9

.preheader9.loopexit:                             ; preds = %.preheader8
  br label %.preheader9

.preheader9:                                      ; preds = %.preheader9.loopexit, %.preheader9.preheader
  %h = phi i6 [ 0, %.preheader9.preheader ], [ %h_23, %.preheader9.loopexit ]
  %h_cast = zext i6 %h to i7
  %exitcond4 = icmp eq i6 %h, -32
  %empty_83 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  %h_23 = add i6 %h, 1
  br i1 %exitcond4, label %.loopexit.loopexit, label %.preheader8.preheader

.preheader8.preheader:                            ; preds = %.preheader9
  %tmp_cast_84 = zext i6 %h to i11
  %tmp_197 = add i11 %tmp_cast_84, %tmp_345_cast
  %tmp_348_cast = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_197, i5 0)
  br label %.preheader8

.preheader8:                                      ; preds = %1, %.preheader8.preheader
  %w = phi i6 [ %w_23, %1 ], [ 0, %.preheader8.preheader ]
  %w_cast = zext i6 %w to i7
  %exitcond3 = icmp eq i6 %w, -32
  %empty_85 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  %w_23 = add i6 %w, 1
  br i1 %exitcond3, label %.preheader9.loopexit, label %.preheader7.preheader

.preheader7.preheader:                            ; preds = %.preheader8
  %tmp_109 = sub i6 0, %w
  br label %.preheader7

.preheader7.loopexit:                             ; preds = %.preheader6
  br label %.preheader7

.preheader7:                                      ; preds = %.preheader7.loopexit, %.preheader7.preheader
  %sum = phi float [ 0.000000e+00, %.preheader7.preheader ], [ %sum_1, %.preheader7.loopexit ]
  %ci = phi i2 [ 0, %.preheader7.preheader ], [ %ci_8, %.preheader7.loopexit ]
  %exitcond2 = icmp eq i2 %ci, -1
  %empty_86 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %ci_8 = add i2 %ci, 1
  br i1 %exitcond2, label %1, label %.preheader6.preheader

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_111_cast = zext i2 %ci to i9
  %tmp_199 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %ci, i5 0)
  %tmp_351_cast = zext i7 %tmp_199 to i8
  %tmp_200 = add i9 %tmp_111_cast, %tmp_343_cast
  %tmp_352_cast = sext i9 %tmp_200 to i64
  %tmp_105 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_200, i2 0)
  %p_shl1 = sext i11 %tmp_105 to i64
  %tmp_201 = sub i64 %p_shl1, %tmp_352_cast
  br label %.preheader6

.preheader6.loopexit:                             ; preds = %.preheader
  br label %.preheader6

.preheader6:                                      ; preds = %.preheader6.loopexit, %.preheader6.preheader
  %sum_1 = phi float [ %sum, %.preheader6.preheader ], [ %sum_2, %.preheader6.loopexit ]
  %m = phi i2 [ 0, %.preheader6.preheader ], [ %m_7, %.preheader6.loopexit ]
  %m_cast_cast = zext i2 %m to i3
  %exitcond1 = icmp eq i2 %m, -1
  %empty_87 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_7 = add i2 %m, 1
  br i1 %exitcond1, label %.preheader7.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader6
  %tmp_112 = zext i2 %m to i64
  %tmp_202 = add i64 %tmp_112, %tmp_201
  %tmp_106 = trunc i64 %tmp_202 to i11
  %tmp_107 = trunc i64 %tmp_202 to i9
  %p_shl2_cast = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_107, i2 0)
  %tmp_203 = sub i11 %p_shl2_cast, %tmp_106
  %tmp_113 = sub i3 0, %m_cast_cast
  %tmp_113_cast = sext i3 %tmp_113 to i6
  %tmp_114 = icmp ne i6 %h, %tmp_113_cast
  %tmp4 = add i2 -1, %m
  %tmp4_cast = sext i2 %tmp4 to i7
  %tmp_115 = add i7 %tmp4_cast, %h_cast
  %tmp_116_cast = sext i7 %tmp_115 to i8
  %tmp_204 = add i8 %tmp_116_cast, %tmp_351_cast
  %tmp_360_cast = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_204, i5 0)
  %tmp_108 = call i2 @_ssdm_op_PartSelect.i2.i7.i32.i32(i7 %tmp_115, i32 5, i32 6)
  %icmp = icmp ne i2 %tmp_108, 1
  br label %.preheader

.preheader:                                       ; preds = %_ifconv, %.preheader.preheader
  %sum_2 = phi float [ %sum_15, %_ifconv ], [ %sum_1, %.preheader.preheader ]
  %n = phi i2 [ %n_7, %_ifconv ], [ 0, %.preheader.preheader ]
  %n_cast9 = zext i2 %n to i6
  %exitcond = icmp eq i2 %n, -1
  %empty_88 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_7 = add i2 %n, 1
  br i1 %exitcond, label %.preheader6.loopexit, label %_ifconv

_ifconv:                                          ; preds = %.preheader
  %tmp_117_cast = zext i2 %n to i11
  %tmp_205 = add i11 %tmp_203, %tmp_117_cast
  %tmp_361_cast = zext i11 %tmp_205 to i64
  %weight_addr = getelementptr [648 x float]* %weight, i64 0, i64 %tmp_361_cast
  %weight_load = load float* %weight_addr, align 4
  %tmp5 = add i2 %n, -1
  %tmp5_cast = sext i2 %tmp5 to i7
  %tmp_118 = add i7 %w_cast, %tmp5_cast
  %tmp_110 = call i2 @_ssdm_op_PartSelect.i2.i7.i32.i32(i7 %tmp_118, i32 5, i32 6)
  %icmp5 = icmp ne i2 %tmp_110, 1
  %tmp_120_cast = sext i7 %tmp_118 to i13
  %tmp_206 = add i13 %tmp_360_cast, %tmp_120_cast
  %tmp_362_cast = zext i13 %tmp_206 to i64
  %input_addr = getelementptr [3072 x float]* %input_r, i64 0, i64 %tmp_362_cast
  %input_load = load float* %input_addr, align 4
  %notlhs = icmp ne i6 %n_cast9, %tmp_109
  %tmp6 = and i1 %icmp, %notlhs
  %tmp7 = and i1 %tmp_114, %icmp5
  %sel_tmp2 = and i1 %tmp7, %tmp6
  %tmp_121 = select i1 %sel_tmp2, float %input_load, float 0.000000e+00
  %tmp_122 = fmul float %weight_load, %tmp_121
  %sum_15 = fadd float %sum_2, %tmp_122
  br label %.preheader

; <label>:1                                       ; preds = %.preheader7
  %bias_load = load float* %bias_addr, align 4
  %result = fadd float %sum, %bias_load
  %result_to_int = bitcast float %result to i32
  %tmp_36 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %result_to_int, i32 23, i32 30)
  %tmp_104 = trunc i32 %result_to_int to i23
  %notlhs1 = icmp ne i8 %tmp_36, -1
  %notrhs1 = icmp eq i23 %tmp_104, 0
  %tmp_38 = or i1 %notrhs1, %notlhs1
  %tmp_39 = fcmp ogt float %result, 0.000000e+00
  %tmp_40 = and i1 %tmp_38, %tmp_39
  %result_8 = select i1 %tmp_40, float %result, float 0.000000e+00
  %tmp_110_cast = zext i6 %w to i16
  %tmp_198 = add i16 %tmp_348_cast, %tmp_110_cast
  %tmp_349_cast = zext i16 %tmp_198 to i64
  %output_addr = getelementptr [24576 x float]* %output_r, i64 0, i64 %tmp_349_cast
  store float %result_8, float* %output_addr, align 4
  br label %.preheader8

; <label>:2                                       ; preds = %.loopexit
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
  %tmp_207 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %co, i2 0)
  %tmp_364_cast = zext i12 %tmp_207 to i13
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %sum = phi float [ 0.000000e+00, %.preheader3.preheader ], [ %sum_1, %.preheader3.loopexit ]
  %h = phi i3 [ 0, %.preheader3.preheader ], [ %h_24, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i3 %h, -4
  %empty_89 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %h_24 = add i3 %h, 1
  br i1 %exitcond1, label %3, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_123_cast = zext i3 %h to i13
  %tmp_208 = add i13 %tmp_123_cast, %tmp_364_cast
  %tmp_367_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_208, i2 0)
  br label %.preheader

.preheader:                                       ; preds = %2, %.preheader.preheader
  %sum_1 = phi float [ %sum_16, %2 ], [ %sum, %.preheader.preheader ]
  %w = phi i3 [ %w_24, %2 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i3 %w, -4
  %empty_90 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %w_24 = add i3 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %2

; <label>:2                                       ; preds = %.preheader
  %tmp_124_cast = zext i3 %w to i15
  %tmp_209 = add i15 %tmp_367_cast, %tmp_124_cast
  %tmp_368_cast = zext i15 %tmp_209 to i64
  %conv_last_output_add = getelementptr [8192 x float]* @conv_last_output, i64 0, i64 %tmp_368_cast
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
  %empty_91 = trunc i32 %empty to i8
  ret i8 %empty_91
}

declare i8 @_ssdm_op_PartSelect.i8.i10.i32.i32(i10, i32, i32) nounwind readnone

declare i7 @_ssdm_op_PartSelect.i7.i9.i32.i32(i9, i32, i32) nounwind readnone

define weak i7 @_ssdm_op_PartSelect.i7.i8.i32.i32(i8, i32, i32) nounwind readnone {
entry:
  %empty = call i8 @llvm.part.select.i8(i8 %0, i32 %1, i32 %2)
  %empty_92 = trunc i8 %empty to i7
  ret i7 %empty_92
}

define weak i6 @_ssdm_op_PartSelect.i6.i7.i32.i32(i7, i32, i32) nounwind readnone {
entry:
  %empty = call i7 @llvm.part.select.i7(i7 %0, i32 %1, i32 %2)
  %empty_93 = trunc i7 %empty to i6
  ret i6 %empty_93
}

define weak i5 @_ssdm_op_PartSelect.i5.i6.i32.i32(i6, i32, i32) nounwind readnone {
entry:
  %empty = call i6 @llvm.part.select.i6(i6 %0, i32 %1, i32 %2)
  %empty_94 = trunc i6 %empty to i5
  ret i5 %empty_94
}

define weak i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5, i32, i32) nounwind readnone {
entry:
  %empty = call i5 @llvm.part.select.i5(i5 %0, i32 %1, i32 %2)
  %empty_95 = trunc i5 %empty to i4
  ret i4 %empty_95
}

define weak i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5, i32, i32) nounwind readnone {
entry:
  %empty = call i5 @llvm.part.select.i5(i5 %0, i32 %1, i32 %2)
  %empty_96 = trunc i5 %empty to i3
  ret i3 %empty_96
}

declare i3 @_ssdm_op_PartSelect.i3.i4.i32.i32(i4, i32, i32) nounwind readnone

declare i23 @_ssdm_op_PartSelect.i23.i32.i32.i32(i32, i32, i32) nounwind readnone

define weak i2 @_ssdm_op_PartSelect.i2.i7.i32.i32(i7, i32, i32) nounwind readnone {
entry:
  %empty = call i7 @llvm.part.select.i7(i7 %0, i32 %1, i32 %2)
  %empty_97 = trunc i7 %empty to i2
  ret i2 %empty_97
}

define weak i2 @_ssdm_op_PartSelect.i2.i6.i32.i32(i6, i32, i32) nounwind readnone {
entry:
  %empty = call i6 @llvm.part.select.i6(i6 %0, i32 %1, i32 %2)
  %empty_98 = trunc i6 %empty to i2
  ret i2 %empty_98
}

define weak i2 @_ssdm_op_PartSelect.i2.i5.i32.i32(i5, i32, i32) nounwind readnone {
entry:
  %empty = call i5 @llvm.part.select.i5(i5 %0, i32 %1, i32 %2)
  %empty_99 = trunc i5 %empty to i2
  ret i2 %empty_99
}

define weak i2 @_ssdm_op_PartSelect.i2.i4.i32.i32(i4, i32, i32) nounwind readnone {
entry:
  %empty = call i4 @llvm.part.select.i4(i4 %0, i32 %1, i32 %2)
  %empty_100 = trunc i4 %empty to i2
  ret i2 %empty_100
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
  %empty_101 = zext i2 %1 to i9
  %empty_102 = shl i9 %empty, 2
  %empty_103 = or i9 %empty_102, %empty_101
  ret i9 %empty_103
}

define weak i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6, i3) nounwind readnone {
entry:
  %empty = zext i6 %0 to i9
  %empty_104 = zext i3 %1 to i9
  %empty_105 = shl i9 %empty, 3
  %empty_106 = or i9 %empty_105, %empty_104
  ret i9 %empty_106
}

define weak i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5, i4) nounwind readnone {
entry:
  %empty = zext i5 %0 to i9
  %empty_107 = zext i4 %1 to i9
  %empty_108 = shl i9 %empty, 4
  %empty_109 = or i9 %empty_108, %empty_107
  ret i9 %empty_109
}

define weak i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4, i5) nounwind readnone {
entry:
  %empty = zext i4 %0 to i9
  %empty_110 = zext i5 %1 to i9
  %empty_111 = shl i9 %empty, 5
  %empty_112 = or i9 %empty_111, %empty_110
  ret i9 %empty_112
}

define weak i9 @_ssdm_op_BitConcatenate.i9.i1.i5.i3(i1, i5, i3) nounwind readnone {
entry:
  %empty = zext i5 %1 to i8
  %empty_113 = zext i3 %2 to i8
  %empty_114 = shl i8 %empty, 3
  %empty_115 = or i8 %empty_114, %empty_113
  %empty_116 = zext i1 %0 to i9
  %empty_117 = zext i8 %empty_115 to i9
  %empty_118 = shl i9 %empty_116, 8
  %empty_119 = or i9 %empty_118, %empty_117
  ret i9 %empty_119
}

define weak i8 @_ssdm_op_BitConcatenate.i8.i6.i2(i6, i2) nounwind readnone {
entry:
  %empty = zext i6 %0 to i8
  %empty_120 = zext i2 %1 to i8
  %empty_121 = shl i8 %empty, 2
  %empty_122 = or i8 %empty_121, %empty_120
  ret i8 %empty_122
}

define weak i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5, i3) nounwind readnone {
entry:
  %empty = zext i5 %0 to i8
  %empty_123 = zext i3 %1 to i8
  %empty_124 = shl i8 %empty, 3
  %empty_125 = or i8 %empty_124, %empty_123
  ret i8 %empty_125
}

define weak i8 @_ssdm_op_BitConcatenate.i8.i1.i5.i2(i1, i5, i2) nounwind readnone {
entry:
  %empty = zext i5 %1 to i7
  %empty_126 = zext i2 %2 to i7
  %empty_127 = shl i7 %empty, 2
  %empty_128 = or i7 %empty_127, %empty_126
  %empty_129 = zext i1 %0 to i8
  %empty_130 = zext i7 %empty_128 to i8
  %empty_131 = shl i8 %empty_129, 7
  %empty_132 = or i8 %empty_131, %empty_130
  ret i8 %empty_132
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

define weak i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2, i4) nounwind readnone {
entry:
  %empty = zext i2 %0 to i6
  %empty_142 = zext i4 %1 to i6
  %empty_143 = shl i6 %empty, 4
  %empty_144 = or i6 %empty_143, %empty_142
  ret i6 %empty_144
}

define weak i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1, i5) nounwind readnone {
entry:
  %empty = zext i1 %0 to i6
  %empty_145 = zext i5 %1 to i6
  %empty_146 = shl i6 %empty, 5
  %empty_147 = or i6 %empty_146, %empty_145
  ret i6 %empty_147
}

declare i5 @_ssdm_op_BitConcatenate.i5.i4.i1(i4, i1) nounwind readnone

define weak i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2, i3) nounwind readnone {
entry:
  %empty = zext i2 %0 to i5
  %empty_148 = zext i3 %1 to i5
  %empty_149 = shl i5 %empty, 3
  %empty_150 = or i5 %empty_149, %empty_148
  ret i5 %empty_150
}

declare i4 @_ssdm_op_BitConcatenate.i4.i3.i1(i3, i1) nounwind readnone

define weak i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2, i2) nounwind readnone {
entry:
  %empty = zext i2 %0 to i4
  %empty_151 = zext i2 %1 to i4
  %empty_152 = shl i4 %empty, 2
  %empty_153 = or i4 %empty_152, %empty_151
  ret i4 %empty_153
}

define weak i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1, i3) nounwind readnone {
entry:
  %empty = zext i1 %0 to i4
  %empty_154 = zext i3 %1 to i4
  %empty_155 = shl i4 %empty, 3
  %empty_156 = or i4 %empty_155, %empty_154
  ret i4 %empty_156
}

declare i3 @_ssdm_op_BitConcatenate.i3.i2.i1(i2, i1) nounwind readnone

define weak i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13, i5) nounwind readnone {
entry:
  %empty = zext i13 %0 to i18
  %empty_157 = zext i5 %1 to i18
  %empty_158 = shl i18 %empty, 5
  %empty_159 = or i18 %empty_158, %empty_157
  ret i18 %empty_159
}

define weak i18 @_ssdm_op_BitConcatenate.i18.i10.i8(i10, i8) nounwind readnone {
entry:
  %empty = zext i10 %0 to i18
  %empty_160 = zext i8 %1 to i18
  %empty_161 = shl i18 %empty, 8
  %empty_162 = or i18 %empty_161, %empty_160
  ret i18 %empty_162
}

define weak i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12, i5) nounwind readnone {
entry:
  %empty = zext i12 %0 to i17
  %empty_163 = zext i5 %1 to i17
  %empty_164 = shl i17 %empty, 5
  %empty_165 = or i17 %empty_164, %empty_163
  ret i17 %empty_165
}

define weak i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13, i3) nounwind readnone {
entry:
  %empty = zext i13 %0 to i16
  %empty_166 = zext i3 %1 to i16
  %empty_167 = shl i16 %empty, 3
  %empty_168 = or i16 %empty_167, %empty_166
  ret i16 %empty_168
}

define weak i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11, i5) nounwind readnone {
entry:
  %empty = zext i11 %0 to i16
  %empty_169 = zext i5 %1 to i16
  %empty_170 = shl i16 %empty, 5
  %empty_171 = or i16 %empty_170, %empty_169
  ret i16 %empty_171
}

define weak i16 @_ssdm_op_BitConcatenate.i16.i10.i6(i10, i6) nounwind readnone {
entry:
  %empty = zext i10 %0 to i16
  %empty_172 = zext i6 %1 to i16
  %empty_173 = shl i16 %empty, 6
  %empty_174 = or i16 %empty_173, %empty_172
  ret i16 %empty_174
}

define weak i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8, i7) nounwind readnone {
entry:
  %empty = zext i8 %0 to i15
  %empty_175 = zext i7 %1 to i15
  %empty_176 = shl i15 %empty, 7
  %empty_177 = or i15 %empty_176, %empty_175
  ret i15 %empty_177
}

define weak i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13, i2) nounwind readnone {
entry:
  %empty = zext i13 %0 to i15
  %empty_178 = zext i2 %1 to i15
  %empty_179 = shl i15 %empty, 2
  %empty_180 = or i15 %empty_179, %empty_178
  ret i15 %empty_180
}

define weak i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12, i3) nounwind readnone {
entry:
  %empty = zext i12 %0 to i15
  %empty_181 = zext i3 %1 to i15
  %empty_182 = shl i15 %empty, 3
  %empty_183 = or i15 %empty_182, %empty_181
  ret i15 %empty_183
}

define weak i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11, i4) nounwind readnone {
entry:
  %empty = zext i11 %0 to i15
  %empty_184 = zext i4 %1 to i15
  %empty_185 = shl i15 %empty, 4
  %empty_186 = or i15 %empty_185, %empty_184
  ret i15 %empty_186
}

define weak i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10, i5) nounwind readnone {
entry:
  %empty = zext i10 %0 to i15
  %empty_187 = zext i5 %1 to i15
  %empty_188 = shl i15 %empty, 5
  %empty_189 = or i15 %empty_188, %empty_187
  ret i15 %empty_189
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i9.i5(i9, i5) nounwind readnone {
entry:
  %empty = zext i9 %0 to i14
  %empty_190 = zext i5 %1 to i14
  %empty_191 = shl i14 %empty, 5
  %empty_192 = or i14 %empty_191, %empty_190
  ret i14 %empty_192
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i7.i7(i7, i7) nounwind readnone {
entry:
  %empty = zext i7 %0 to i14
  %empty_193 = zext i7 %1 to i14
  %empty_194 = shl i14 %empty, 7
  %empty_195 = or i14 %empty_194, %empty_193
  ret i14 %empty_195
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12, i2) nounwind readnone {
entry:
  %empty = zext i12 %0 to i14
  %empty_196 = zext i2 %1 to i14
  %empty_197 = shl i14 %empty, 2
  %empty_198 = or i14 %empty_197, %empty_196
  ret i14 %empty_198
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11, i3) nounwind readnone {
entry:
  %empty = zext i11 %0 to i14
  %empty_199 = zext i3 %1 to i14
  %empty_200 = shl i14 %empty, 3
  %empty_201 = or i14 %empty_200, %empty_199
  ret i14 %empty_201
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10, i4) nounwind readnone {
entry:
  %empty = zext i10 %0 to i14
  %empty_202 = zext i4 %1 to i14
  %empty_203 = shl i14 %empty, 4
  %empty_204 = or i14 %empty_203, %empty_202
  ret i14 %empty_204
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8, i5) nounwind readnone {
entry:
  %empty = zext i8 %0 to i13
  %empty_205 = zext i5 %1 to i13
  %empty_206 = shl i13 %empty, 5
  %empty_207 = or i13 %empty_206, %empty_205
  ret i13 %empty_207
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7, i6) nounwind readnone {
entry:
  %empty = zext i7 %0 to i13
  %empty_208 = zext i6 %1 to i13
  %empty_209 = shl i13 %empty, 6
  %empty_210 = or i13 %empty_209, %empty_208
  ret i13 %empty_210
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i4.i9(i4, i9) nounwind readnone {
entry:
  %empty = zext i4 %0 to i13
  %empty_211 = zext i9 %1 to i13
  %empty_212 = shl i13 %empty, 9
  %empty_213 = or i13 %empty_212, %empty_211
  ret i13 %empty_213
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11, i2) nounwind readnone {
entry:
  %empty = zext i11 %0 to i13
  %empty_214 = zext i2 %1 to i13
  %empty_215 = shl i13 %empty, 2
  %empty_216 = or i13 %empty_215, %empty_214
  ret i13 %empty_216
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10, i3) nounwind readnone {
entry:
  %empty = zext i10 %0 to i13
  %empty_217 = zext i3 %1 to i13
  %empty_218 = shl i13 %empty, 3
  %empty_219 = or i13 %empty_218, %empty_217
  ret i13 %empty_219
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9, i3) nounwind readnone {
entry:
  %empty = zext i9 %0 to i12
  %empty_220 = zext i3 %1 to i12
  %empty_221 = shl i12 %empty, 3
  %empty_222 = or i12 %empty_221, %empty_220
  ret i12 %empty_222
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i7.i5(i7, i5) nounwind readnone {
entry:
  %empty = zext i7 %0 to i12
  %empty_223 = zext i5 %1 to i12
  %empty_224 = shl i12 %empty, 5
  %empty_225 = or i12 %empty_224, %empty_223
  ret i12 %empty_225
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i6.i6(i6, i6) nounwind readnone {
entry:
  %empty = zext i6 %0 to i12
  %empty_226 = zext i6 %1 to i12
  %empty_227 = shl i12 %empty, 6
  %empty_228 = or i12 %empty_227, %empty_226
  ret i12 %empty_228
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i2.i5.i5(i2, i5, i5) nounwind readnone {
entry:
  %empty = zext i5 %1 to i10
  %empty_229 = zext i5 %2 to i10
  %empty_230 = shl i10 %empty, 5
  %empty_231 = or i10 %empty_230, %empty_229
  %empty_232 = zext i2 %0 to i12
  %empty_233 = zext i10 %empty_231 to i12
  %empty_234 = shl i12 %empty_232, 10
  %empty_235 = or i12 %empty_234, %empty_233
  ret i12 %empty_235
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10, i2) nounwind readnone {
entry:
  %empty = zext i10 %0 to i12
  %empty_236 = zext i2 %1 to i12
  %empty_237 = shl i12 %empty, 2
  %empty_238 = or i12 %empty_237, %empty_236
  ret i12 %empty_238
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9, i2) nounwind readnone {
entry:
  %empty = zext i9 %0 to i11
  %empty_239 = zext i2 %1 to i11
  %empty_240 = shl i11 %empty, 2
  %empty_241 = or i11 %empty_240, %empty_239
  ret i11 %empty_241
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8, i3) nounwind readnone {
entry:
  %empty = zext i8 %0 to i11
  %empty_242 = zext i3 %1 to i11
  %empty_243 = shl i11 %empty, 3
  %empty_244 = or i11 %empty_243, %empty_242
  ret i11 %empty_244
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7, i4) nounwind readnone {
entry:
  %empty = zext i7 %0 to i11
  %empty_245 = zext i4 %1 to i11
  %empty_246 = shl i11 %empty, 4
  %empty_247 = or i11 %empty_246, %empty_245
  ret i11 %empty_247
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i6.i5(i6, i5) nounwind readnone {
entry:
  %empty = zext i6 %0 to i11
  %empty_248 = zext i5 %1 to i11
  %empty_249 = shl i11 %empty, 5
  %empty_250 = or i11 %empty_249, %empty_248
  ret i11 %empty_250
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i1.i5.i5(i1, i5, i5) nounwind readnone {
entry:
  %empty = zext i5 %1 to i10
  %empty_251 = zext i5 %2 to i10
  %empty_252 = shl i10 %empty, 5
  %empty_253 = or i10 %empty_252, %empty_251
  %empty_254 = zext i1 %0 to i11
  %empty_255 = zext i10 %empty_253 to i11
  %empty_256 = shl i11 %empty_254, 10
  %empty_257 = or i11 %empty_256, %empty_255
  ret i11 %empty_257
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8, i2) nounwind readnone {
entry:
  %empty = zext i8 %0 to i10
  %empty_258 = zext i2 %1 to i10
  %empty_259 = shl i10 %empty, 2
  %empty_260 = or i10 %empty_259, %empty_258
  ret i10 %empty_260
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7, i3) nounwind readnone {
entry:
  %empty = zext i7 %0 to i10
  %empty_261 = zext i3 %1 to i10
  %empty_262 = shl i10 %empty, 3
  %empty_263 = or i10 %empty_262, %empty_261
  ret i10 %empty_263
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6, i4) nounwind readnone {
entry:
  %empty = zext i6 %0 to i10
  %empty_264 = zext i4 %1 to i10
  %empty_265 = shl i10 %empty, 4
  %empty_266 = or i10 %empty_265, %empty_264
  ret i10 %empty_266
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5, i5) nounwind readnone {
entry:
  %empty = zext i5 %0 to i10
  %empty_267 = zext i5 %1 to i10
  %empty_268 = shl i10 %empty, 5
  %empty_269 = or i10 %empty_268, %empty_267
  ret i10 %empty_269
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i2.i5.i3(i2, i5, i3) nounwind readnone {
entry:
  %empty = zext i5 %1 to i8
  %empty_270 = zext i3 %2 to i8
  %empty_271 = shl i8 %empty, 3
  %empty_272 = or i8 %empty_271, %empty_270
  %empty_273 = zext i2 %0 to i10
  %empty_274 = zext i8 %empty_272 to i10
  %empty_275 = shl i10 %empty_273, 8
  %empty_276 = or i10 %empty_275, %empty_274
  ret i10 %empty_276
}

declare void @_GLOBAL__I_a55() nounwind section ".text.startup"

declare void @_GLOBAL__I_a() nounwind section ".text.startup"

define void @ShuffleNetV2([3072 x float]* %image_r, [648 x float]* %conv1_weight, [9720 x float]* %shuffle_conv_3x3, [131904 x float]* %shuffle_conv_1x1, [98304 x float]* %conv_last_weight, [5120 x float]* %fc_weight, [3618 x float]* %bias, [1000 x float]* %fc_output) nounwind uwtable {
.preheader673.preheader:
  call void (...)* @_ssdm_op_SpecBitsMap([3072 x float]* %image_r) nounwind, !map !349
  call void (...)* @_ssdm_op_SpecBitsMap([648 x float]* %conv1_weight) nounwind, !map !354
  call void (...)* @_ssdm_op_SpecBitsMap([9720 x float]* %shuffle_conv_3x3) nounwind, !map !359
  call void (...)* @_ssdm_op_SpecBitsMap([131904 x float]* %shuffle_conv_1x1) nounwind, !map !365
  call void (...)* @_ssdm_op_SpecBitsMap([98304 x float]* %conv_last_weight) nounwind, !map !371
  call void (...)* @_ssdm_op_SpecBitsMap([5120 x float]* %fc_weight) nounwind, !map !376
  call void (...)* @_ssdm_op_SpecBitsMap([3618 x float]* %bias) nounwind, !map !381
  call void (...)* @_ssdm_op_SpecBitsMap([1000 x float]* %fc_output) nounwind, !map !387
  call void (...)* @_ssdm_op_SpecTopModule([13 x i8]* @ShuffleNetV2_str) nounwind
  br label %.preheader668

.preheader668:                                    ; preds = %.preheader667.preheader, %.preheader673.preheader
  %i5 = phi i5 [ %i, %.preheader667.preheader ], [ 0, %.preheader673.preheader ]
  %exitcond = icmp eq i5 %i5, -8
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i = add i5 %i5, 1
  br i1 %exitcond, label %.preheader666.preheader, label %.preheader667.preheader

.preheader666.preheader:                          ; preds = %.preheader668
  br label %.preheader666

.preheader667.preheader:                          ; preds = %.preheader668
  %tmp = zext i5 %i5 to i64
  %bias_addr = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp
  %bias_load = load float* %bias_addr, align 4
  %conv1_bias_addr = getelementptr inbounds [24 x float]* @conv1_bias, i64 0, i64 %tmp
  store float %bias_load, float* %conv1_bias_addr, align 4
  br label %.preheader668

.preheader666:                                    ; preds = %.preheader666.preheader, %0
  %i7 = phi i10 [ %i_1, %0 ], [ 0, %.preheader666.preheader ]
  %i7_cast760_cast = zext i10 %i7 to i11
  %exitcond363 = icmp eq i10 %i7, -512
  %empty_277 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512) nounwind
  %i_1 = add i10 %i7, 1
  br i1 %exitcond363, label %.preheader665.preheader, label %0

.preheader665.preheader:                          ; preds = %.preheader666
  br label %.preheader665

; <label>:0                                       ; preds = %.preheader666
  %tmp_s = add i11 %i7_cast760_cast, -1000
  %tmp_cast = sext i11 %tmp_s to i12
  %tmp_125 = zext i12 %tmp_cast to i64
  %bias_addr_1 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_125
  %bias_load_1 = load float* %bias_addr_1, align 4
  %tmp_126 = zext i10 %i7 to i64
  %conv_last_bias_addr = getelementptr inbounds [512 x float]* @conv_last_bias, i64 0, i64 %tmp_126
  store float %bias_load_1, float* %conv_last_bias_addr, align 4
  br label %.preheader666

.preheader665:                                    ; preds = %.preheader665.preheader, %1
  %i8 = phi i4 [ %i_2, %1 ], [ 0, %.preheader665.preheader ]
  %i8_cast758_cast = zext i4 %i8 to i10
  %exitcond362 = icmp eq i4 %i8, -6
  %empty_278 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10) nounwind
  %i_2 = add i4 %i8, 1
  br i1 %exitcond362, label %2, label %1

; <label>:1                                       ; preds = %.preheader665
  %tmp_127 = add i10 %i8_cast758_cast, -488
  %tmp_179_cast = sext i10 %tmp_127 to i12
  %tmp_128 = zext i12 %tmp_179_cast to i64
  %bias_addr_2 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_128
  %bias_load_2 = load float* %bias_addr_2, align 4
  %tmp_129 = zext i4 %i8 to i64
  %fc_bias_addr = getelementptr inbounds [10 x float]* @fc_bias, i64 0, i64 %tmp_129
  store float %bias_load_2, float* %fc_bias_addr, align 4
  br label %.preheader665

; <label>:2                                       ; preds = %.preheader665
  call fastcc void @conv1([3072 x float]* %image_r, [648 x float]* %conv1_weight, [24 x float]* @conv1_bias, [24576 x float]* @conv1_output) nounwind
  br label %.loopexit739

.loopexit739.loopexit:                            ; preds = %.preheader664
  br label %.loopexit739

.loopexit739:                                     ; preds = %.loopexit739.loopexit, %2
  %co9 = phi i5 [ 0, %2 ], [ %co, %.loopexit739.loopexit ]
  %exitcond361 = icmp eq i5 %co9, -8
  %empty_279 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co = add i5 %co9, 1
  br i1 %exitcond361, label %.preheader663.preheader, label %.preheader664.preheader

.preheader663.preheader:                          ; preds = %.loopexit739
  br label %.preheader663

.preheader664.preheader:                          ; preds = %.loopexit739
  %tmp_210 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co9, i5 0)
  %p_shl275_cast = zext i10 %tmp_210 to i11
  %tmp_212 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co9, i3 0)
  %p_shl276_cast = zext i8 %tmp_212 to i11
  %tmp_213 = sub i11 %p_shl275_cast, %p_shl276_cast
  %tmp_387_cast = sext i11 %tmp_213 to i12
  br label %.preheader664

.preheader664:                                    ; preds = %3, %.preheader664.preheader
  %ci9 = phi i5 [ %ci, %3 ], [ 0, %.preheader664.preheader ]
  %exitcond360 = icmp eq i5 %ci9, -8
  %empty_280 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci = add i5 %ci9, 1
  br i1 %exitcond360, label %.loopexit739.loopexit, label %3

; <label>:3                                       ; preds = %.preheader664
  %tmp_133_cast = zext i5 %ci9 to i12
  %tmp_217 = add i12 %tmp_387_cast, %tmp_133_cast
  %tmp_389_cast1 = sext i12 %tmp_217 to i64
  %shuffle_conv_1x1_add = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_389_cast1
  %weights_24_24_1x1_ad = getelementptr [576 x float]* @weights_24_24_1x1, i64 0, i64 %tmp_389_cast1
  %shuffle_conv_1x1_loa = load float* %shuffle_conv_1x1_add, align 4
  store float %shuffle_conv_1x1_loa, float* %weights_24_24_1x1_ad, align 4
  br label %.preheader664

.preheader663:                                    ; preds = %.preheader663.preheader, %4
  %i3 = phi i5 [ %i_3, %4 ], [ 0, %.preheader663.preheader ]
  %i3_cast = zext i5 %i3 to i6
  %exitcond359 = icmp eq i5 %i3, -8
  %empty_281 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_3 = add i5 %i3, 1
  br i1 %exitcond359, label %5, label %4

; <label>:4                                       ; preds = %.preheader663
  %tmp_130 = add i6 %i3_cast, 24
  %tmp_131 = zext i6 %tmp_130 to i64
  %bias_addr_3 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_131
  %bias_load_3 = load float* %bias_addr_3, align 4
  %tmp_132 = zext i5 %i3 to i64
  %bias_24_addr = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_132
  store float %bias_load_3, float* %bias_24_addr, align 4
  br label %.preheader663

; <label>:5                                       ; preds = %.preheader663
  call fastcc void @subconv_1x1_32([576 x float]* @weights_24_24_1x1, [24 x float]* @bias_24) nounwind
  br label %.loopexit738

.loopexit738.loopexit:                            ; preds = %.preheader662
  br label %.loopexit738

.loopexit738:                                     ; preds = %.loopexit738.loopexit, %5
  %co12 = phi i5 [ 0, %5 ], [ %co_25, %.loopexit738.loopexit ]
  %exitcond358 = icmp eq i5 %co12, -8
  %empty_282 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_25 = add i5 %co12, 1
  br i1 %exitcond358, label %.preheader660.preheader, label %.preheader662.preheader

.preheader660.preheader:                          ; preds = %.loopexit738
  br label %.preheader660

.preheader662.preheader:                          ; preds = %.loopexit738
  %tmp_134_cast = zext i5 %co12 to i8
  %tmp_218 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co12, i2 0)
  %p_shl277_cast = zext i7 %tmp_218 to i8
  %tmp_222 = sub i8 %p_shl277_cast, %tmp_134_cast
  %tmp_406_cast = sext i8 %tmp_222 to i9
  br label %.preheader662

.preheader662.loopexit:                           ; preds = %.preheader661
  br label %.preheader662

.preheader662:                                    ; preds = %.preheader662.loopexit, %.preheader662.preheader
  %w13 = phi i2 [ 0, %.preheader662.preheader ], [ %w, %.preheader662.loopexit ]
  %exitcond357 = icmp eq i2 %w13, -1
  %empty_283 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w = add i2 %w13, 1
  br i1 %exitcond357, label %.loopexit738.loopexit, label %.preheader661.preheader

.preheader661.preheader:                          ; preds = %.preheader662
  %tmp_138_cast = zext i2 %w13 to i9
  %tmp_224 = add i9 %tmp_138_cast, %tmp_406_cast
  %tmp_409_cast1 = sext i9 %tmp_224 to i15
  %tmp_111 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_224, i2 0)
  %p_shl278_cast = sext i11 %tmp_111 to i15
  %tmp_225 = sub i15 %p_shl278_cast, %tmp_409_cast1
  br label %.preheader661

.preheader661:                                    ; preds = %6, %.preheader661.preheader
  %h14 = phi i2 [ %h, %6 ], [ 0, %.preheader661.preheader ]
  %exitcond356 = icmp eq i2 %h14, -1
  %empty_284 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h = add i2 %h14, 1
  br i1 %exitcond356, label %.preheader662.loopexit, label %6

; <label>:6                                       ; preds = %.preheader661
  %tmp_140_cast = zext i2 %h14 to i15
  %tmp_251 = add i15 %tmp_225, %tmp_140_cast
  %tmp_484_cast1 = zext i15 %tmp_251 to i64
  %shuffle_conv_3x3_add = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_484_cast1
  %weights_24_1_3x3_add = getelementptr [216 x float]* @weights_24_1_3x3, i64 0, i64 %tmp_484_cast1
  %shuffle_conv_3x3_loa = load float* %shuffle_conv_3x3_add, align 4
  store float %shuffle_conv_3x3_loa, float* %weights_24_1_3x3_add, align 4
  br label %.preheader661

.preheader660:                                    ; preds = %.preheader660.preheader, %7
  %i4 = phi i5 [ %i_4, %7 ], [ 0, %.preheader660.preheader ]
  %i4_cast = zext i5 %i4 to i7
  %exitcond355 = icmp eq i5 %i4, -8
  %empty_285 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_4 = add i5 %i4, 1
  br i1 %exitcond355, label %8, label %7

; <label>:7                                       ; preds = %.preheader660
  %tmp_135 = add i7 %i4_cast, 48
  %tmp_136 = zext i7 %tmp_135 to i64
  %bias_addr_4 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_136
  %bias_load_4 = load float* %bias_addr_4, align 4
  %tmp_137 = zext i5 %i4 to i64
  %bias_24_addr_1 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_137
  store float %bias_load_4, float* %bias_24_addr_1, align 4
  br label %.preheader660

; <label>:8                                       ; preds = %.preheader660
  call fastcc void @subconv_3x3_32_strid([24576 x float]* @ShuffleConvs_0_Downs, [216 x float]* @weights_24_1_3x3, [24 x float]* @bias_24, [6144 x float]* @buffer0_1_24_16x16) nounwind
  br label %.loopexit737

.loopexit737.loopexit:                            ; preds = %.preheader659
  br label %.loopexit737

.loopexit737:                                     ; preds = %.loopexit737.loopexit, %8
  %co16 = phi i5 [ 0, %8 ], [ %co_26, %.loopexit737.loopexit ]
  %co16_cast = zext i5 %co16 to i6
  %exitcond354 = icmp eq i5 %co16, -8
  %empty_286 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_26 = add i5 %co16, 1
  br i1 %exitcond354, label %.preheader658.preheader, label %.preheader659.preheader

.preheader658.preheader:                          ; preds = %.loopexit737
  br label %.preheader658

.preheader659.preheader:                          ; preds = %.loopexit737
  %tmp_139 = add i6 %co16_cast, 24
  %tmp_227 = call i11 @_ssdm_op_BitConcatenate.i11.i6.i5(i6 %tmp_139, i5 0)
  %p_shl281_cast = zext i11 %tmp_227 to i12
  %tmp_228 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %tmp_139, i3 0)
  %p_shl282_cast = zext i9 %tmp_228 to i12
  %tmp_238 = sub i12 %p_shl281_cast, %p_shl282_cast
  %tmp_440_cast = sext i12 %tmp_238 to i13
  %tmp_245 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co16, i5 0)
  %p_shl279_cast = zext i10 %tmp_245 to i11
  %tmp_246 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co16, i3 0)
  %p_shl280_cast = zext i8 %tmp_246 to i11
  %tmp_248 = sub i11 %p_shl279_cast, %p_shl280_cast
  br label %.preheader659

.preheader659:                                    ; preds = %9, %.preheader659.preheader
  %ci10 = phi i5 [ %ci_11, %9 ], [ 0, %.preheader659.preheader ]
  %exitcond353 = icmp eq i5 %ci10, -8
  %empty_287 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_11 = add i5 %ci10, 1
  br i1 %exitcond353, label %.loopexit737.loopexit, label %9

; <label>:9                                       ; preds = %.preheader659
  %tmp_144_cast1 = zext i5 %ci10 to i11
  %tmp_144_cast = zext i5 %ci10 to i13
  %tmp_253 = add i13 %tmp_440_cast, %tmp_144_cast
  %tmp_487_cast = sext i13 %tmp_253 to i64
  %shuffle_conv_1x1_add_1 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_487_cast
  %tmp_263 = add i11 %tmp_248, %tmp_144_cast1
  %tmp_489_cast = sext i11 %tmp_263 to i64
  %weights_24_24_1x1_ad_1 = getelementptr [576 x float]* @weights_24_24_1x1, i64 0, i64 %tmp_489_cast
  %shuffle_conv_1x1_loa_1 = load float* %shuffle_conv_1x1_add_1, align 4
  store float %shuffle_conv_1x1_loa_1, float* %weights_24_24_1x1_ad_1, align 4
  br label %.preheader659

.preheader658:                                    ; preds = %.preheader658.preheader, %10
  %i6 = phi i5 [ %i_5, %10 ], [ 0, %.preheader658.preheader ]
  %i6_cast = zext i5 %i6 to i7
  %exitcond352 = icmp eq i5 %i6, -8
  %empty_288 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_5 = add i5 %i6, 1
  br i1 %exitcond352, label %11, label %10

; <label>:10                                      ; preds = %.preheader658
  %tmp_141 = add i7 %i6_cast, -56
  %tmp_142 = zext i7 %tmp_141 to i64
  %bias_addr_5 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_142
  %bias_load_5 = load float* %bias_addr_5, align 4
  %tmp_143 = zext i5 %i6 to i64
  %bias_24_addr_2 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_143
  store float %bias_load_5, float* %bias_24_addr_2, align 4
  br label %.preheader658

; <label>:11                                      ; preds = %.preheader658
  call fastcc void @subconv_1x1_16([6144 x float]* @buffer0_1_24_16x16, [576 x float]* @weights_24_24_1x1, [24 x float]* @bias_24, [6144 x float]* @buffer1_1_24_16x16) nounwind
  call fastcc void @shuffle_24_l([6144 x float]* @buffer1_1_24_16x16, [12288 x float]* @downsampleunit0_outp) nounwind
  br label %.loopexit736

.loopexit736.loopexit:                            ; preds = %.preheader657
  br label %.loopexit736

.loopexit736:                                     ; preds = %.loopexit736.loopexit, %11
  %co19 = phi i5 [ 0, %11 ], [ %co_27, %.loopexit736.loopexit ]
  %co19_cast = zext i5 %co19 to i6
  %exitcond351 = icmp eq i5 %co19, -8
  %empty_289 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_27 = add i5 %co19, 1
  br i1 %exitcond351, label %.preheader655.preheader, label %.preheader657.preheader

.preheader655.preheader:                          ; preds = %.loopexit736
  br label %.preheader655

.preheader657.preheader:                          ; preds = %.loopexit736
  %tmp_145 = add i6 %co19_cast, 24
  %tmp_146_cast = zext i6 %tmp_145 to i9
  %tmp_270 = call i8 @_ssdm_op_BitConcatenate.i8.i6.i2(i6 %tmp_145, i2 0)
  %p_shl284_cast = zext i8 %tmp_270 to i9
  %tmp_271 = sub i9 %p_shl284_cast, %tmp_146_cast
  %tmp_147_cast = zext i5 %co19 to i8
  %tmp_273 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co19, i2 0)
  %p_shl283_cast = zext i7 %tmp_273 to i8
  %tmp_276 = sub i8 %p_shl283_cast, %tmp_147_cast
  %tmp_526_cast = sext i8 %tmp_276 to i9
  br label %.preheader657

.preheader657.loopexit:                           ; preds = %.preheader656
  br label %.preheader657

.preheader657:                                    ; preds = %.preheader657.loopexit, %.preheader657.preheader
  %w20 = phi i2 [ 0, %.preheader657.preheader ], [ %w_25, %.preheader657.loopexit ]
  %exitcond350 = icmp eq i2 %w20, -1
  %empty_290 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_25 = add i2 %w20, 1
  br i1 %exitcond350, label %.loopexit736.loopexit, label %.preheader656.preheader

.preheader656.preheader:                          ; preds = %.preheader657
  %tmp_151_cast = zext i2 %w20 to i9
  %tmp_278 = add i9 %tmp_271, %tmp_151_cast
  %tmp_534_cast = sext i9 %tmp_278 to i15
  %tmp_112 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_278, i2 0)
  %p_shl286_cast = sext i11 %tmp_112 to i15
  %tmp_290 = sub i15 %p_shl286_cast, %tmp_534_cast
  %tmp_291 = add i9 %tmp_526_cast, %tmp_151_cast
  %tmp_113 = shl i9 %tmp_291, 2
  %tmp_293 = sub i9 %tmp_113, %tmp_291
  br label %.preheader656

.preheader656:                                    ; preds = %12, %.preheader656.preheader
  %h21 = phi i2 [ %h_25, %12 ], [ 0, %.preheader656.preheader ]
  %exitcond349 = icmp eq i2 %h21, -1
  %empty_291 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_25 = add i2 %h21, 1
  br i1 %exitcond349, label %.preheader657.loopexit, label %12

; <label>:12                                      ; preds = %.preheader656
  %tmp_153_cast1 = zext i2 %h21 to i9
  %tmp_153_cast = zext i2 %h21 to i15
  %tmp_319 = add i15 %tmp_290, %tmp_153_cast
  %tmp_609_cast = zext i15 %tmp_319 to i64
  %shuffle_conv_3x3_add_1 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_609_cast
  %tmp_330 = add i9 %tmp_293, %tmp_153_cast1
  %tmp_626_cast = zext i9 %tmp_330 to i64
  %weights_24_1_3x3_add_1 = getelementptr [216 x float]* @weights_24_1_3x3, i64 0, i64 %tmp_626_cast
  %shuffle_conv_3x3_loa_1 = load float* %shuffle_conv_3x3_add_1, align 4
  store float %shuffle_conv_3x3_loa_1, float* %weights_24_1_3x3_add_1, align 4
  br label %.preheader656

.preheader655:                                    ; preds = %.preheader655.preheader, %13
  %i9 = phi i5 [ %i_6, %13 ], [ 0, %.preheader655.preheader ]
  %exitcond348 = icmp eq i5 %i9, -8
  %empty_292 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_6 = add i5 %i9, 1
  br i1 %exitcond348, label %14, label %13

; <label>:13                                      ; preds = %.preheader655
  %tmp_148 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 true, i5 %i9)
  %tmp_203_cast = sext i6 %tmp_148 to i7
  %tmp_149 = zext i7 %tmp_203_cast to i64
  %bias_addr_6 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_149
  %bias_load_6 = load float* %bias_addr_6, align 4
  %tmp_150 = zext i5 %i9 to i64
  %bias_24_addr_3 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_150
  store float %bias_load_6, float* %bias_24_addr_3, align 4
  br label %.preheader655

; <label>:14                                      ; preds = %.preheader655
  call fastcc void @subconv_3x3_32_strid([24576 x float]* @conv1_output, [216 x float]* @weights_24_1_3x3, [24 x float]* @bias_24, [6144 x float]* @buffer0_1_24_16x16) nounwind
  br label %.loopexit735

.loopexit735.loopexit:                            ; preds = %.preheader654
  br label %.loopexit735

.loopexit735:                                     ; preds = %.loopexit735.loopexit, %14
  %co23 = phi i5 [ 0, %14 ], [ %co_28, %.loopexit735.loopexit ]
  %co23_cast = zext i5 %co23 to i7
  %exitcond347 = icmp eq i5 %co23, -8
  %empty_293 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_28 = add i5 %co23, 1
  br i1 %exitcond347, label %.preheader653.preheader, label %.preheader654.preheader

.preheader653.preheader:                          ; preds = %.loopexit735
  br label %.preheader653

.preheader654.preheader:                          ; preds = %.loopexit735
  %tmp_152 = add i7 %co23_cast, 48
  %tmp_294 = call i12 @_ssdm_op_BitConcatenate.i12.i7.i5(i7 %tmp_152, i5 0)
  %p_shl289_cast = zext i12 %tmp_294 to i13
  %tmp_304 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_152, i3 0)
  %p_shl290_cast = zext i10 %tmp_304 to i13
  %tmp_311 = sub i13 %p_shl289_cast, %p_shl290_cast
  %tmp_587_cast = sext i13 %tmp_311 to i14
  %tmp_312 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co23, i5 0)
  %p_shl287_cast = zext i10 %tmp_312 to i11
  %tmp_314 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co23, i3 0)
  %p_shl288_cast = zext i8 %tmp_314 to i11
  %tmp_317 = sub i11 %p_shl287_cast, %p_shl288_cast
  br label %.preheader654

.preheader654:                                    ; preds = %15, %.preheader654.preheader
  %ci12 = phi i5 [ %ci_13, %15 ], [ 0, %.preheader654.preheader ]
  %exitcond346 = icmp eq i5 %ci12, -8
  %empty_294 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_13 = add i5 %ci12, 1
  br i1 %exitcond346, label %.loopexit735.loopexit, label %15

; <label>:15                                      ; preds = %.preheader654
  %tmp_157_cast1 = zext i5 %ci12 to i11
  %tmp_157_cast = zext i5 %ci12 to i14
  %tmp_332 = add i14 %tmp_587_cast, %tmp_157_cast
  %tmp_634_cast1 = sext i14 %tmp_332 to i64
  %shuffle_conv_1x1_add_2 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_634_cast1
  %tmp_333 = add i11 %tmp_317, %tmp_157_cast1
  %tmp_637_cast = sext i11 %tmp_333 to i64
  %weights_24_24_1x1_ad_2 = getelementptr [576 x float]* @weights_24_24_1x1, i64 0, i64 %tmp_637_cast
  %shuffle_conv_1x1_loa_2 = load float* %shuffle_conv_1x1_add_2, align 4
  store float %shuffle_conv_1x1_loa_2, float* %weights_24_24_1x1_ad_2, align 4
  br label %.preheader654

.preheader653:                                    ; preds = %.preheader653.preheader, %16
  %i10 = phi i5 [ %i_7, %16 ], [ 0, %.preheader653.preheader ]
  %i10_cast = zext i5 %i10 to i8
  %exitcond345 = icmp eq i5 %i10, -8
  %empty_295 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_7 = add i5 %i10, 1
  br i1 %exitcond345, label %17, label %16

; <label>:16                                      ; preds = %.preheader653
  %tmp_154 = add i8 %i10_cast, 120
  %tmp_155 = zext i8 %tmp_154 to i64
  %bias_addr_7 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_155
  %bias_load_7 = load float* %bias_addr_7, align 4
  %tmp_156 = zext i5 %i10 to i64
  %bias_24_addr_4 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_156
  store float %bias_load_7, float* %bias_24_addr_4, align 4
  br label %.preheader653

; <label>:17                                      ; preds = %.preheader653
  call fastcc void @subconv_1x1_16([6144 x float]* @buffer0_1_24_16x16, [576 x float]* @weights_24_24_1x1, [24 x float]* @bias_24, [6144 x float]* @buffer1_1_24_16x16) nounwind
  call fastcc void @shuffle_24_r([6144 x float]* @buffer1_1_24_16x16, [12288 x float]* @downsampleunit0_outp) nounwind
  br label %.loopexit734

.loopexit734.loopexit:                            ; preds = %.preheader652
  br label %.loopexit734

.loopexit734:                                     ; preds = %.loopexit734.loopexit, %17
  %co26 = phi i5 [ 0, %17 ], [ %co_29, %.loopexit734.loopexit ]
  %co26_cast = zext i5 %co26 to i6
  %exitcond344 = icmp eq i5 %co26, -8
  %empty_296 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_29 = add i5 %co26, 1
  br i1 %exitcond344, label %.preheader650.preheader, label %.preheader652.preheader

.preheader650.preheader:                          ; preds = %.loopexit734
  br label %.preheader650

.preheader652.preheader:                          ; preds = %.loopexit734
  %tmp_158 = add i6 %co26_cast, 24
  %tmp_334 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %tmp_158, i4 0)
  %tmp_640_cast = zext i10 %tmp_334 to i11
  %tmp_336 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co26, i4 0)
  %tmp_659_cast = zext i9 %tmp_336 to i10
  br label %.preheader652

.preheader652.loopexit:                           ; preds = %.preheader651
  br label %.preheader652

.preheader652:                                    ; preds = %.preheader652.loopexit, %.preheader652.preheader
  %h26 = phi i5 [ 0, %.preheader652.preheader ], [ %h_27, %.preheader652.loopexit ]
  %exitcond343 = icmp eq i5 %h26, -16
  %empty_297 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %h_27 = add i5 %h26, 1
  br i1 %exitcond343, label %.loopexit734.loopexit, label %.preheader651.preheader

.preheader651.preheader:                          ; preds = %.preheader652
  %tmp_160_cast1 = zext i5 %h26 to i11
  %tmp_160_cast = zext i5 %h26 to i10
  %tmp_362 = add i10 %tmp_160_cast, %tmp_659_cast
  %tmp_734_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_362, i4 0)
  %tmp_373 = add i11 %tmp_160_cast1, %tmp_640_cast
  %tmp_754_cast1 = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_373, i4 0)
  br label %.preheader651

.preheader651:                                    ; preds = %18, %.preheader651.preheader
  %w26 = phi i5 [ %w_27, %18 ], [ 0, %.preheader651.preheader ]
  %exitcond342 = icmp eq i5 %w26, -16
  %empty_298 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %w_27 = add i5 %w26, 1
  br i1 %exitcond342, label %.preheader652.loopexit, label %18

; <label>:18                                      ; preds = %.preheader651
  %tmp_165_cast1 = zext i5 %w26 to i15
  %tmp_165_cast = zext i5 %w26 to i14
  %tmp_377 = add i14 %tmp_734_cast, %tmp_165_cast
  %tmp_799_cast1 = zext i14 %tmp_377 to i64
  %buffer0_1_24_16x16_a = getelementptr [6144 x float]* @buffer0_1_24_16x16, i64 0, i64 %tmp_799_cast1
  %tmp_378 = add i15 %tmp_754_cast1, %tmp_165_cast1
  %tmp_800_cast = zext i15 %tmp_378 to i64
  %downsampleunit0_outp = getelementptr [12288 x float]* @downsampleunit0_outp, i64 0, i64 %tmp_800_cast
  %downsampleunit0_outp_1 = load float* %downsampleunit0_outp, align 4
  store float %downsampleunit0_outp_1, float* %buffer0_1_24_16x16_a, align 4
  br label %.preheader651

.preheader650.loopexit:                           ; preds = %.preheader649
  br label %.preheader650

.preheader650:                                    ; preds = %.preheader650.preheader, %.preheader650.loopexit
  %co29 = phi i5 [ %co_30, %.preheader650.loopexit ], [ 0, %.preheader650.preheader ]
  %co29_cast = zext i5 %co29 to i7
  %exitcond341 = icmp eq i5 %co29, -8
  %empty_299 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_30 = add i5 %co29, 1
  br i1 %exitcond341, label %.preheader648.preheader, label %.preheader649.preheader

.preheader648.preheader:                          ; preds = %.preheader650
  br label %.preheader648

.preheader649.preheader:                          ; preds = %.preheader650
  %tmp_159 = add i7 %co29_cast, -56
  %tmp_337 = call i12 @_ssdm_op_BitConcatenate.i12.i7.i5(i7 %tmp_159, i5 0)
  %p_shl293_cast = zext i12 %tmp_337 to i13
  %tmp_347 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_159, i3 0)
  %p_shl294_cast = zext i10 %tmp_347 to i13
  %tmp_354 = sub i13 %p_shl293_cast, %p_shl294_cast
  %tmp_687_cast = sext i13 %tmp_354 to i14
  %tmp_355 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co29, i5 0)
  %p_shl291_cast = zext i10 %tmp_355 to i11
  %tmp_357 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co29, i3 0)
  %p_shl292_cast = zext i8 %tmp_357 to i11
  %tmp_360 = sub i11 %p_shl291_cast, %p_shl292_cast
  br label %.preheader649

.preheader649:                                    ; preds = %19, %.preheader649.preheader
  %ci14 = phi i5 [ %ci_15, %19 ], [ 0, %.preheader649.preheader ]
  %exitcond340 = icmp eq i5 %ci14, -8
  %empty_300 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_15 = add i5 %ci14, 1
  br i1 %exitcond340, label %.preheader650.loopexit, label %19

; <label>:19                                      ; preds = %.preheader649
  %tmp_164_cast1 = zext i5 %ci14 to i11
  %tmp_164_cast = zext i5 %ci14 to i14
  %tmp_375 = add i14 %tmp_687_cast, %tmp_164_cast
  %tmp_778_cast = sext i14 %tmp_375 to i64
  %shuffle_conv_1x1_add_3 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_778_cast
  %tmp_376 = add i11 %tmp_360, %tmp_164_cast1
  %tmp_781_cast = sext i11 %tmp_376 to i64
  %weights_24_24_1x1_ad_3 = getelementptr [576 x float]* @weights_24_24_1x1, i64 0, i64 %tmp_781_cast
  %shuffle_conv_1x1_loa_3 = load float* %shuffle_conv_1x1_add_3, align 4
  store float %shuffle_conv_1x1_loa_3, float* %weights_24_24_1x1_ad_3, align 4
  br label %.preheader649

.preheader648:                                    ; preds = %.preheader648.preheader, %20
  %i11 = phi i5 [ %i_8, %20 ], [ 0, %.preheader648.preheader ]
  %i11_cast = zext i5 %i11 to i8
  %exitcond339 = icmp eq i5 %i11, -8
  %empty_301 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_8 = add i5 %i11, 1
  br i1 %exitcond339, label %21, label %20

; <label>:20                                      ; preds = %.preheader648
  %tmp_161 = add i8 %i11_cast, -112
  %tmp_162 = zext i8 %tmp_161 to i64
  %bias_addr_8 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_162
  %bias_load_8 = load float* %bias_addr_8, align 4
  %tmp_163 = zext i5 %i11 to i64
  %bias_24_addr_5 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_163
  store float %bias_load_8, float* %bias_24_addr_5, align 4
  br label %.preheader648

; <label>:21                                      ; preds = %.preheader648
  call fastcc void @subconv_1x1_16([6144 x float]* @buffer0_1_24_16x16, [576 x float]* @weights_24_24_1x1, [24 x float]* @bias_24, [6144 x float]* @buffer1_1_24_16x16) nounwind
  br label %.loopexit733

.loopexit733.loopexit:                            ; preds = %.preheader647
  br label %.loopexit733

.loopexit733:                                     ; preds = %.loopexit733.loopexit, %21
  %co31 = phi i5 [ 0, %21 ], [ %co_32, %.loopexit733.loopexit ]
  %co31_cast = zext i5 %co31 to i7
  %exitcond338 = icmp eq i5 %co31, -8
  %empty_302 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_32 = add i5 %co31, 1
  br i1 %exitcond338, label %.preheader645.preheader, label %.preheader647.preheader

.preheader645.preheader:                          ; preds = %.loopexit733
  br label %.preheader645

.preheader647.preheader:                          ; preds = %.loopexit733
  %tmp_166 = add i7 %co31_cast, 48
  %tmp_167_cast = zext i7 %tmp_166 to i10
  %tmp_380 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_166, i2 0)
  %p_shl296_cast = zext i9 %tmp_380 to i10
  %tmp_381 = sub i10 %p_shl296_cast, %tmp_167_cast
  %tmp_168_cast = zext i5 %co31 to i8
  %tmp_384 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co31, i2 0)
  %p_shl295_cast = zext i7 %tmp_384 to i8
  %tmp_387 = sub i8 %p_shl295_cast, %tmp_168_cast
  %tmp_828_cast = sext i8 %tmp_387 to i9
  br label %.preheader647

.preheader647.loopexit:                           ; preds = %.preheader646
  br label %.preheader647

.preheader647:                                    ; preds = %.preheader647.loopexit, %.preheader647.preheader
  %w28 = phi i2 [ 0, %.preheader647.preheader ], [ %w_29, %.preheader647.loopexit ]
  %exitcond337 = icmp eq i2 %w28, -1
  %empty_303 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_29 = add i2 %w28, 1
  br i1 %exitcond337, label %.loopexit733.loopexit, label %.preheader646.preheader

.preheader646.preheader:                          ; preds = %.preheader647
  %tmp_172_cast1 = zext i2 %w28 to i9
  %tmp_172_cast = zext i2 %w28 to i10
  %tmp_389 = add i10 %tmp_381, %tmp_172_cast
  %tmp_845_cast = sext i10 %tmp_389 to i15
  %tmp_114 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_389, i2 0)
  %p_shl298_cast = sext i12 %tmp_114 to i15
  %tmp_390 = sub i15 %p_shl298_cast, %tmp_845_cast
  %tmp_395 = add i9 %tmp_828_cast, %tmp_172_cast1
  %tmp_115 = shl i9 %tmp_395, 2
  %tmp_402 = sub i9 %tmp_115, %tmp_395
  br label %.preheader646

.preheader646:                                    ; preds = %22, %.preheader646.preheader
  %h28 = phi i2 [ %h_29, %22 ], [ 0, %.preheader646.preheader ]
  %exitcond336 = icmp eq i2 %h28, -1
  %empty_304 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_29 = add i2 %h28, 1
  br i1 %exitcond336, label %.preheader647.loopexit, label %22

; <label>:22                                      ; preds = %.preheader646
  %tmp_173_cast1 = zext i2 %h28 to i9
  %tmp_173_cast = zext i2 %h28 to i15
  %tmp_426 = add i15 %tmp_390, %tmp_173_cast
  %tmp_945_cast = zext i15 %tmp_426 to i64
  %shuffle_conv_3x3_add_2 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_945_cast
  %tmp_427 = add i9 %tmp_402, %tmp_173_cast1
  %tmp_953_cast = zext i9 %tmp_427 to i64
  %weights_24_1_3x3_add_2 = getelementptr [216 x float]* @weights_24_1_3x3, i64 0, i64 %tmp_953_cast
  %shuffle_conv_3x3_loa_2 = load float* %shuffle_conv_3x3_add_2, align 4
  store float %shuffle_conv_3x3_loa_2, float* %weights_24_1_3x3_add_2, align 4
  br label %.preheader646

.preheader645:                                    ; preds = %.preheader645.preheader, %23
  %i12 = phi i5 [ %i_9, %23 ], [ 0, %.preheader645.preheader ]
  %i12_cast = zext i5 %i12 to i8
  %exitcond335 = icmp eq i5 %i12, -8
  %empty_305 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_9 = add i5 %i12, 1
  br i1 %exitcond335, label %24, label %23

; <label>:23                                      ; preds = %.preheader645
  %tmp_169 = add i8 %i12_cast, -88
  %tmp_170 = zext i8 %tmp_169 to i64
  %bias_addr_9 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_170
  %bias_load_9 = load float* %bias_addr_9, align 4
  %tmp_171 = zext i5 %i12 to i64
  %bias_24_addr_6 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_171
  store float %bias_load_9, float* %bias_24_addr_6, align 4
  br label %.preheader645

; <label>:24                                      ; preds = %.preheader645
  call fastcc void @subconv_3x3_16_no_re([6144 x float]* @buffer1_1_24_16x16, [216 x float]* @weights_24_1_3x3, [24 x float]* @bias_24, [6144 x float]* @buffer0_1_24_16x16) nounwind
  br label %.loopexit732

.loopexit732.loopexit:                            ; preds = %.preheader644
  br label %.loopexit732

.loopexit732:                                     ; preds = %.loopexit732.loopexit, %24
  %co33 = phi i5 [ 0, %24 ], [ %co_34, %.loopexit732.loopexit ]
  %exitcond334 = icmp eq i5 %co33, -8
  %empty_306 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_34 = add i5 %co33, 1
  br i1 %exitcond334, label %.preheader643.preheader, label %.preheader644.preheader

.preheader643.preheader:                          ; preds = %.loopexit732
  br label %.preheader643

.preheader644.preheader:                          ; preds = %.loopexit732
  %tmp_403 = call i11 @_ssdm_op_BitConcatenate.i11.i1.i5.i5(i1 true, i5 %co33, i5 0)
  %tmp_405 = sext i11 %tmp_403 to i12
  %p_shl301_cast = zext i12 %tmp_405 to i13
  %tmp_406 = call i9 @_ssdm_op_BitConcatenate.i9.i1.i5.i3(i1 true, i5 %co33, i3 0)
  %tmp_409 = sext i9 %tmp_406 to i10
  %p_shl302_cast = zext i10 %tmp_409 to i13
  %tmp_410 = sub i13 %p_shl301_cast, %p_shl302_cast
  %tmp_908_cast = sext i13 %tmp_410 to i14
  %tmp_412 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co33, i5 0)
  %p_shl299_cast = zext i10 %tmp_412 to i11
  %tmp_423 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co33, i3 0)
  %p_shl300_cast = zext i8 %tmp_423 to i11
  %tmp_425 = sub i11 %p_shl299_cast, %p_shl300_cast
  br label %.preheader644

.preheader644:                                    ; preds = %25, %.preheader644.preheader
  %ci16 = phi i5 [ %ci_17, %25 ], [ 0, %.preheader644.preheader ]
  %exitcond333 = icmp eq i5 %ci16, -8
  %empty_307 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_17 = add i5 %ci16, 1
  br i1 %exitcond333, label %.loopexit732.loopexit, label %25

; <label>:25                                      ; preds = %.preheader644
  %tmp_177_cast1 = zext i5 %ci16 to i11
  %tmp_177_cast = zext i5 %ci16 to i14
  %tmp_428 = add i14 %tmp_908_cast, %tmp_177_cast
  %tmp_956_cast = sext i14 %tmp_428 to i64
  %shuffle_conv_1x1_add_4 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_956_cast
  %tmp_430 = add i11 %tmp_425, %tmp_177_cast1
  %tmp_959_cast = sext i11 %tmp_430 to i64
  %weights_24_24_1x1_ad_4 = getelementptr [576 x float]* @weights_24_24_1x1, i64 0, i64 %tmp_959_cast
  %shuffle_conv_1x1_loa_4 = load float* %shuffle_conv_1x1_add_4, align 4
  store float %shuffle_conv_1x1_loa_4, float* %weights_24_24_1x1_ad_4, align 4
  br label %.preheader644

.preheader643:                                    ; preds = %.preheader643.preheader, %26
  %i13 = phi i5 [ %i_14, %26 ], [ 0, %.preheader643.preheader ]
  %exitcond332 = icmp eq i5 %i13, -8
  %empty_308 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_14 = add i5 %i13, 1
  br i1 %exitcond332, label %27, label %26

; <label>:26                                      ; preds = %.preheader643
  %tmp_174 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 -2, i5 %i13)
  %tmp_238_cast = sext i7 %tmp_174 to i8
  %tmp_175 = zext i8 %tmp_238_cast to i64
  %bias_addr_10 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_175
  %bias_load_10 = load float* %bias_addr_10, align 4
  %tmp_176 = zext i5 %i13 to i64
  %bias_24_addr_7 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_176
  store float %bias_load_10, float* %bias_24_addr_7, align 4
  br label %.preheader643

; <label>:27                                      ; preds = %.preheader643
  call fastcc void @subconv_1x1_16([6144 x float]* @buffer0_1_24_16x16, [576 x float]* @weights_24_24_1x1, [24 x float]* @bias_24, [6144 x float]* @buffer1_1_24_16x16) nounwind
  br label %.loopexit731

.loopexit731.loopexit:                            ; preds = %.preheader642
  br label %.loopexit731

.loopexit731:                                     ; preds = %.loopexit731.loopexit, %27
  %co35 = phi i5 [ 0, %27 ], [ %co_36, %.loopexit731.loopexit ]
  %exitcond331 = icmp eq i5 %co35, -8
  %empty_309 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_36 = add i5 %co35, 1
  br i1 %exitcond331, label %29, label %.preheader642.preheader

.preheader642.preheader:                          ; preds = %.loopexit731
  %tmp_431 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co35, i4 0)
  %tmp_961_cast = zext i9 %tmp_431 to i10
  br label %.preheader642

.preheader642.loopexit:                           ; preds = %.preheader641
  br label %.preheader642

.preheader642:                                    ; preds = %.preheader642.loopexit, %.preheader642.preheader
  %h30 = phi i5 [ 0, %.preheader642.preheader ], [ %h_31, %.preheader642.loopexit ]
  %exitcond330 = icmp eq i5 %h30, -16
  %empty_310 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %h_31 = add i5 %h30, 1
  br i1 %exitcond330, label %.loopexit731.loopexit, label %.preheader641.preheader

.preheader641.preheader:                          ; preds = %.preheader642
  %tmp_179_cast1 = zext i5 %h30 to i10
  %tmp_439 = add i10 %tmp_961_cast, %tmp_179_cast1
  %tmp_116 = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_439, i4 0)
  %tmp_968_cast = zext i14 %tmp_116 to i15
  br label %.preheader641

.preheader641:                                    ; preds = %28, %.preheader641.preheader
  %w30 = phi i5 [ %w_31, %28 ], [ 0, %.preheader641.preheader ]
  %exitcond329 = icmp eq i5 %w30, -16
  %empty_311 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %w_31 = add i5 %w30, 1
  br i1 %exitcond329, label %.preheader642.loopexit, label %28

; <label>:28                                      ; preds = %.preheader641
  %tmp_182_cast = zext i5 %w30 to i15
  %tmp_462 = add i15 %tmp_968_cast, %tmp_182_cast
  %tmp_981_cast1 = zext i15 %tmp_462 to i64
  %buffer0_1_24_16x16_a_1 = getelementptr [6144 x float]* @buffer0_1_24_16x16, i64 0, i64 %tmp_981_cast1
  %downsampleunit0_outp_2 = getelementptr [12288 x float]* @downsampleunit0_outp, i64 0, i64 %tmp_981_cast1
  %downsampleunit0_outp_3 = load float* %downsampleunit0_outp_2, align 4
  store float %downsampleunit0_outp_3, float* %buffer0_1_24_16x16_a_1, align 4
  br label %.preheader641

; <label>:29                                      ; preds = %.loopexit731
  call fastcc void @shuffle_24([6144 x float]* @buffer0_1_24_16x16, [12288 x float]* @shuffleunit0_0_outpu) nounwind
  br label %.loopexit730

.loopexit730.loopexit:                            ; preds = %.preheader640
  br label %.loopexit730

.loopexit730:                                     ; preds = %.loopexit730.loopexit, %29
  %co36 = phi i5 [ 0, %29 ], [ %co_37, %.loopexit730.loopexit ]
  %co36_cast = zext i5 %co36 to i6
  %exitcond328 = icmp eq i5 %co36, -8
  %empty_312 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_37 = add i5 %co36, 1
  br i1 %exitcond328, label %.preheader638.preheader, label %.preheader640.preheader

.preheader638.preheader:                          ; preds = %.loopexit730
  br label %.preheader638

.preheader640.preheader:                          ; preds = %.loopexit730
  %tmp_178 = add i6 %co36_cast, 24
  %tmp_434 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %tmp_178, i4 0)
  %tmp_963_cast1 = zext i10 %tmp_434 to i11
  %tmp_437 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co36, i4 0)
  %tmp_965_cast = zext i9 %tmp_437 to i10
  br label %.preheader640

.preheader640.loopexit:                           ; preds = %.preheader639
  br label %.preheader640

.preheader640:                                    ; preds = %.preheader640.loopexit, %.preheader640.preheader
  %h31 = phi i5 [ 0, %.preheader640.preheader ], [ %h_32, %.preheader640.loopexit ]
  %exitcond327 = icmp eq i5 %h31, -16
  %empty_313 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %h_32 = add i5 %h31, 1
  br i1 %exitcond327, label %.loopexit730.loopexit, label %.preheader639.preheader

.preheader639.preheader:                          ; preds = %.preheader640
  %tmp_181_cast1 = zext i5 %h31 to i11
  %tmp_181_cast = zext i5 %h31 to i10
  %tmp_459 = add i10 %tmp_181_cast, %tmp_965_cast
  %tmp_977_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_459, i4 0)
  %tmp_460 = add i11 %tmp_181_cast1, %tmp_963_cast1
  %tmp_980_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_460, i4 0)
  br label %.preheader639

.preheader639:                                    ; preds = %30, %.preheader639.preheader
  %w32 = phi i5 [ %w_33, %30 ], [ 0, %.preheader639.preheader ]
  %exitcond326 = icmp eq i5 %w32, -16
  %empty_314 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %w_33 = add i5 %w32, 1
  br i1 %exitcond326, label %.preheader640.loopexit, label %30

; <label>:30                                      ; preds = %.preheader639
  %tmp_187_cast1 = zext i5 %w32 to i15
  %tmp_187_cast = zext i5 %w32 to i14
  %tmp_476 = add i14 %tmp_977_cast, %tmp_187_cast
  %tmp_984_cast = zext i14 %tmp_476 to i64
  %buffer0_1_24_16x16_a_2 = getelementptr [6144 x float]* @buffer0_1_24_16x16, i64 0, i64 %tmp_984_cast
  %tmp_477 = add i15 %tmp_980_cast, %tmp_187_cast1
  %tmp_985_cast1 = zext i15 %tmp_477 to i64
  %shuffleunit0_0_outpu = getelementptr [12288 x float]* @shuffleunit0_0_outpu, i64 0, i64 %tmp_985_cast1
  %shuffleunit0_0_outpu_1 = load float* %shuffleunit0_0_outpu, align 4
  store float %shuffleunit0_0_outpu_1, float* %buffer0_1_24_16x16_a_2, align 4
  br label %.preheader639

.preheader638.loopexit:                           ; preds = %.preheader637
  br label %.preheader638

.preheader638:                                    ; preds = %.preheader638.preheader, %.preheader638.loopexit
  %co38 = phi i5 [ %co_39, %.preheader638.loopexit ], [ 0, %.preheader638.preheader ]
  %co38_cast = zext i5 %co38 to i8
  %exitcond325 = icmp eq i5 %co38, -8
  %empty_315 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_39 = add i5 %co38, 1
  br i1 %exitcond325, label %.preheader636.preheader, label %.preheader637.preheader

.preheader636.preheader:                          ; preds = %.preheader638
  br label %.preheader636

.preheader637.preheader:                          ; preds = %.preheader638
  %tmp_180 = add i8 %co38_cast, 120
  %tmp_440 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_180, i5 0)
  %p_shl305_cast = zext i13 %tmp_440 to i14
  %tmp_445 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %tmp_180, i3 0)
  %p_shl306_cast = zext i11 %tmp_445 to i14
  %tmp_452 = sub i14 %p_shl305_cast, %p_shl306_cast
  %tmp_971_cast = sext i14 %tmp_452 to i15
  %tmp_453 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co38, i5 0)
  %p_shl303_cast = zext i10 %tmp_453 to i11
  %tmp_455 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co38, i3 0)
  %p_shl304_cast = zext i8 %tmp_455 to i11
  %tmp_456 = sub i11 %p_shl303_cast, %p_shl304_cast
  br label %.preheader637

.preheader637:                                    ; preds = %31, %.preheader637.preheader
  %ci18 = phi i5 [ %ci_19, %31 ], [ 0, %.preheader637.preheader ]
  %exitcond324 = icmp eq i5 %ci18, -8
  %empty_316 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_19 = add i5 %ci18, 1
  br i1 %exitcond324, label %.preheader638.loopexit, label %31

; <label>:31                                      ; preds = %.preheader637
  %tmp_186_cast1 = zext i5 %ci18 to i11
  %tmp_186_cast = zext i5 %ci18 to i15
  %tmp_473 = add i15 %tmp_971_cast, %tmp_186_cast
  %tmp_982_cast = sext i15 %tmp_473 to i64
  %shuffle_conv_1x1_add_5 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_982_cast
  %tmp_475 = add i11 %tmp_456, %tmp_186_cast1
  %tmp_983_cast = sext i11 %tmp_475 to i64
  %weights_24_24_1x1_ad_5 = getelementptr [576 x float]* @weights_24_24_1x1, i64 0, i64 %tmp_983_cast
  %shuffle_conv_1x1_loa_5 = load float* %shuffle_conv_1x1_add_5, align 4
  store float %shuffle_conv_1x1_loa_5, float* %weights_24_24_1x1_ad_5, align 4
  br label %.preheader637

.preheader636:                                    ; preds = %.preheader636.preheader, %32
  %i15 = phi i5 [ %i_16, %32 ], [ 0, %.preheader636.preheader ]
  %i15_cast706_cast = zext i5 %i15 to i7
  %exitcond323 = icmp eq i5 %i15, -8
  %empty_317 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_16 = add i5 %i15, 1
  br i1 %exitcond323, label %33, label %32

; <label>:32                                      ; preds = %.preheader636
  %tmp_183 = add i7 %i15_cast706_cast, -40
  %tmp_251_cast = sext i7 %tmp_183 to i8
  %tmp_184 = zext i8 %tmp_251_cast to i64
  %bias_addr_11 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_184
  %bias_load_11 = load float* %bias_addr_11, align 4
  %tmp_185 = zext i5 %i15 to i64
  %bias_24_addr_8 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_185
  store float %bias_load_11, float* %bias_24_addr_8, align 4
  br label %.preheader636

; <label>:33                                      ; preds = %.preheader636
  call fastcc void @subconv_1x1_16([6144 x float]* @buffer0_1_24_16x16, [576 x float]* @weights_24_24_1x1, [24 x float]* @bias_24, [6144 x float]* @buffer1_1_24_16x16) nounwind
  br label %.loopexit729

.loopexit729.loopexit:                            ; preds = %.preheader635
  br label %.loopexit729

.loopexit729:                                     ; preds = %.loopexit729.loopexit, %33
  %co40 = phi i5 [ 0, %33 ], [ %co_41, %.loopexit729.loopexit ]
  %co41_cast = zext i5 %co40 to i7
  %exitcond322 = icmp eq i5 %co40, -8
  %empty_318 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_41 = add i5 %co40, 1
  br i1 %exitcond322, label %.preheader633.preheader, label %.preheader635.preheader

.preheader633.preheader:                          ; preds = %.loopexit729
  br label %.preheader633

.preheader635.preheader:                          ; preds = %.loopexit729
  %tmp_188 = add i7 %co41_cast, -56
  %tmp_189_cast = zext i7 %tmp_188 to i10
  %tmp_478 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_188, i2 0)
  %p_shl308_cast = zext i9 %tmp_478 to i10
  %tmp_480 = sub i10 %p_shl308_cast, %tmp_189_cast
  %tmp_190_cast = zext i5 %co40 to i8
  %tmp_481 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co40, i2 0)
  %p_shl307_cast = zext i7 %tmp_481 to i8
  %tmp_484 = sub i8 %p_shl307_cast, %tmp_190_cast
  %tmp_989_cast1 = sext i8 %tmp_484 to i9
  br label %.preheader635

.preheader635.loopexit:                           ; preds = %.preheader634
  br label %.preheader635

.preheader635:                                    ; preds = %.preheader635.loopexit, %.preheader635.preheader
  %w34 = phi i2 [ 0, %.preheader635.preheader ], [ %w_35, %.preheader635.loopexit ]
  %exitcond321 = icmp eq i2 %w34, -1
  %empty_319 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_35 = add i2 %w34, 1
  br i1 %exitcond321, label %.loopexit729.loopexit, label %.preheader634.preheader

.preheader634.preheader:                          ; preds = %.preheader635
  %tmp_194_cast1 = zext i2 %w34 to i9
  %tmp_194_cast = zext i2 %w34 to i10
  %tmp_487 = add i10 %tmp_480, %tmp_194_cast
  %tmp_990_cast = sext i10 %tmp_487 to i15
  %tmp_117 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_487, i2 0)
  %p_shl310_cast = sext i12 %tmp_117 to i15
  %tmp_489 = sub i15 %p_shl310_cast, %tmp_990_cast
  %tmp_490 = add i9 %tmp_989_cast1, %tmp_194_cast1
  %tmp_118 = shl i9 %tmp_490, 2
  %tmp_495 = sub i9 %tmp_118, %tmp_490
  br label %.preheader634

.preheader634:                                    ; preds = %34, %.preheader634.preheader
  %h33 = phi i2 [ %h_34, %34 ], [ 0, %.preheader634.preheader ]
  %exitcond320 = icmp eq i2 %h33, -1
  %empty_320 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_34 = add i2 %h33, 1
  br i1 %exitcond320, label %.preheader635.loopexit, label %34

; <label>:34                                      ; preds = %.preheader634
  %tmp_196_cast1 = zext i2 %h33 to i9
  %tmp_196_cast = zext i2 %h33 to i15
  %tmp_512 = add i15 %tmp_489, %tmp_196_cast
  %tmp_1002_cast = zext i15 %tmp_512 to i64
  %shuffle_conv_3x3_add_3 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1002_cast
  %tmp_523 = add i9 %tmp_495, %tmp_196_cast1
  %tmp_1003_cast = zext i9 %tmp_523 to i64
  %weights_24_1_3x3_add_3 = getelementptr [216 x float]* @weights_24_1_3x3, i64 0, i64 %tmp_1003_cast
  %shuffle_conv_3x3_loa_3 = load float* %shuffle_conv_3x3_add_3, align 4
  store float %shuffle_conv_3x3_loa_3, float* %weights_24_1_3x3_add_3, align 4
  br label %.preheader634

.preheader633:                                    ; preds = %.preheader633.preheader, %35
  %i17 = phi i5 [ %i_18, %35 ], [ 0, %.preheader633.preheader ]
  %i17_cast = zext i5 %i17 to i9
  %exitcond319 = icmp eq i5 %i17, -8
  %empty_321 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_18 = add i5 %i17, 1
  br i1 %exitcond319, label %36, label %35

; <label>:35                                      ; preds = %.preheader633
  %tmp_191 = add i9 %i17_cast, 240
  %tmp_192 = zext i9 %tmp_191 to i64
  %bias_addr_12 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_192
  %bias_load_12 = load float* %bias_addr_12, align 4
  %tmp_193 = zext i5 %i17 to i64
  %bias_24_addr_9 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_193
  store float %bias_load_12, float* %bias_24_addr_9, align 4
  br label %.preheader633

; <label>:36                                      ; preds = %.preheader633
  call fastcc void @subconv_3x3_16_no_re([6144 x float]* @buffer1_1_24_16x16, [216 x float]* @weights_24_1_3x3, [24 x float]* @bias_24, [6144 x float]* @buffer0_1_24_16x16) nounwind
  br label %.loopexit728

.loopexit728.loopexit:                            ; preds = %.preheader632
  br label %.loopexit728

.loopexit728:                                     ; preds = %.loopexit728.loopexit, %36
  %co42 = phi i5 [ 0, %36 ], [ %co_43, %.loopexit728.loopexit ]
  %co43_cast = zext i5 %co42 to i8
  %exitcond318 = icmp eq i5 %co42, -8
  %empty_322 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_43 = add i5 %co42, 1
  br i1 %exitcond318, label %.preheader631.preheader, label %.preheader632.preheader

.preheader631.preheader:                          ; preds = %.loopexit728
  br label %.preheader631

.preheader632.preheader:                          ; preds = %.loopexit728
  %tmp_195 = add i8 %co43_cast, -112
  %tmp_502 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_195, i5 0)
  %p_shl313_cast = zext i13 %tmp_502 to i14
  %tmp_503 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %tmp_195, i3 0)
  %p_shl314_cast = zext i11 %tmp_503 to i14
  %tmp_505 = sub i14 %p_shl313_cast, %p_shl314_cast
  %tmp_998_cast = sext i14 %tmp_505 to i15
  %tmp_506 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co42, i5 0)
  %p_shl311_cast = zext i10 %tmp_506 to i11
  %tmp_509 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co42, i3 0)
  %p_shl312_cast = zext i8 %tmp_509 to i11
  %tmp_510 = sub i11 %p_shl311_cast, %p_shl312_cast
  br label %.preheader632

.preheader632:                                    ; preds = %37, %.preheader632.preheader
  %ci20 = phi i5 [ %ci_21, %37 ], [ 0, %.preheader632.preheader ]
  %exitcond317 = icmp eq i5 %ci20, -8
  %empty_323 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_21 = add i5 %ci20, 1
  br i1 %exitcond317, label %.loopexit728.loopexit, label %37

; <label>:37                                      ; preds = %.preheader632
  %tmp_200_cast1 = zext i5 %ci20 to i11
  %tmp_200_cast = zext i5 %ci20 to i15
  %tmp_525 = add i15 %tmp_998_cast, %tmp_200_cast
  %tmp_1004_cast1 = sext i15 %tmp_525 to i64
  %shuffle_conv_1x1_add_6 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1004_cast1
  %tmp_526 = add i11 %tmp_510, %tmp_200_cast1
  %tmp_1005_cast = sext i11 %tmp_526 to i64
  %weights_24_24_1x1_ad_6 = getelementptr [576 x float]* @weights_24_24_1x1, i64 0, i64 %tmp_1005_cast
  %shuffle_conv_1x1_loa_6 = load float* %shuffle_conv_1x1_add_6, align 4
  store float %shuffle_conv_1x1_loa_6, float* %weights_24_24_1x1_ad_6, align 4
  br label %.preheader632

.preheader631:                                    ; preds = %.preheader631.preheader, %38
  %i19 = phi i5 [ %i_20, %38 ], [ 0, %.preheader631.preheader ]
  %i19_cast = zext i5 %i19 to i9
  %exitcond316 = icmp eq i5 %i19, -8
  %empty_324 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_20 = add i5 %i19, 1
  br i1 %exitcond316, label %39, label %38

; <label>:38                                      ; preds = %.preheader631
  %tmp_197 = add i9 %i19_cast, -248
  %tmp_198 = zext i9 %tmp_197 to i64
  %bias_addr_13 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_198
  %bias_load_13 = load float* %bias_addr_13, align 4
  %tmp_199 = zext i5 %i19 to i64
  %bias_24_addr_10 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_199
  store float %bias_load_13, float* %bias_24_addr_10, align 4
  br label %.preheader631

; <label>:39                                      ; preds = %.preheader631
  call fastcc void @subconv_1x1_16([6144 x float]* @buffer0_1_24_16x16, [576 x float]* @weights_24_24_1x1, [24 x float]* @bias_24, [6144 x float]* @buffer1_1_24_16x16) nounwind
  br label %.loopexit727

.loopexit727.loopexit:                            ; preds = %.preheader630
  br label %.loopexit727

.loopexit727:                                     ; preds = %.loopexit727.loopexit, %39
  %co44 = phi i5 [ 0, %39 ], [ %co_45, %.loopexit727.loopexit ]
  %exitcond315 = icmp eq i5 %co44, -8
  %empty_325 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_45 = add i5 %co44, 1
  br i1 %exitcond315, label %41, label %.preheader630.preheader

.preheader630.preheader:                          ; preds = %.loopexit727
  %tmp_527 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co44, i4 0)
  %tmp_1007_cast = zext i9 %tmp_527 to i10
  br label %.preheader630

.preheader630.loopexit:                           ; preds = %.preheader629
  br label %.preheader630

.preheader630:                                    ; preds = %.preheader630.loopexit, %.preheader630.preheader
  %h35 = phi i5 [ 0, %.preheader630.preheader ], [ %h_36, %.preheader630.loopexit ]
  %exitcond314 = icmp eq i5 %h35, -16
  %empty_326 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %h_36 = add i5 %h35, 1
  br i1 %exitcond314, label %.loopexit727.loopexit, label %.preheader629.preheader

.preheader629.preheader:                          ; preds = %.preheader630
  %tmp_202_cast = zext i5 %h35 to i10
  %tmp_531 = add i10 %tmp_1007_cast, %tmp_202_cast
  %tmp_119 = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_531, i4 0)
  %tmp_1014_cast = zext i14 %tmp_119 to i15
  br label %.preheader629

.preheader629:                                    ; preds = %40, %.preheader629.preheader
  %w36 = phi i5 [ %w_37, %40 ], [ 0, %.preheader629.preheader ]
  %exitcond313 = icmp eq i5 %w36, -16
  %empty_327 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %w_37 = add i5 %w36, 1
  br i1 %exitcond313, label %.preheader630.loopexit, label %40

; <label>:40                                      ; preds = %.preheader629
  %tmp_205_cast = zext i5 %w36 to i15
  %tmp_556 = add i15 %tmp_1014_cast, %tmp_205_cast
  %tmp_1027_cast1 = zext i15 %tmp_556 to i64
  %buffer0_1_24_16x16_a_3 = getelementptr [6144 x float]* @buffer0_1_24_16x16, i64 0, i64 %tmp_1027_cast1
  %shuffleunit0_0_outpu_2 = getelementptr [12288 x float]* @shuffleunit0_0_outpu, i64 0, i64 %tmp_1027_cast1
  %shuffleunit0_0_outpu_3 = load float* %shuffleunit0_0_outpu_2, align 4
  store float %shuffleunit0_0_outpu_3, float* %buffer0_1_24_16x16_a_3, align 4
  br label %.preheader629

; <label>:41                                      ; preds = %.loopexit727
  call fastcc void @shuffle_24([6144 x float]* @buffer0_1_24_16x16, [12288 x float]* @shuffleunit0_1_outpu) nounwind
  br label %.loopexit726

.loopexit726.loopexit:                            ; preds = %.preheader628
  br label %.loopexit726

.loopexit726:                                     ; preds = %.loopexit726.loopexit, %41
  %co46 = phi i5 [ 0, %41 ], [ %co_47, %.loopexit726.loopexit ]
  %co46_cast = zext i5 %co46 to i6
  %exitcond312 = icmp eq i5 %co46, -8
  %empty_328 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_47 = add i5 %co46, 1
  br i1 %exitcond312, label %.preheader626.preheader, label %.preheader628.preheader

.preheader626.preheader:                          ; preds = %.loopexit726
  br label %.preheader626

.preheader628.preheader:                          ; preds = %.loopexit726
  %tmp_201 = add i6 %co46_cast, 24
  %tmp_528 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %tmp_201, i4 0)
  %tmp_1009_cast = zext i10 %tmp_528 to i11
  %tmp_530 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co46, i4 0)
  %tmp_1011_cast = zext i9 %tmp_530 to i10
  br label %.preheader628

.preheader628.loopexit:                           ; preds = %.preheader627
  br label %.preheader628

.preheader628:                                    ; preds = %.preheader628.loopexit, %.preheader628.preheader
  %h37 = phi i5 [ 0, %.preheader628.preheader ], [ %h_38, %.preheader628.loopexit ]
  %exitcond311 = icmp eq i5 %h37, -16
  %empty_329 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %h_38 = add i5 %h37, 1
  br i1 %exitcond311, label %.loopexit726.loopexit, label %.preheader627.preheader

.preheader627.preheader:                          ; preds = %.preheader628
  %tmp_204_cast1 = zext i5 %h37 to i11
  %tmp_204_cast = zext i5 %h37 to i10
  %tmp_553 = add i10 %tmp_204_cast, %tmp_1011_cast
  %tmp_1023_cast1 = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_553, i4 0)
  %tmp_555 = add i11 %tmp_204_cast1, %tmp_1009_cast
  %tmp_1026_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_555, i4 0)
  br label %.preheader627

.preheader627:                                    ; preds = %42, %.preheader627.preheader
  %w38 = phi i5 [ %w_39, %42 ], [ 0, %.preheader627.preheader ]
  %exitcond310 = icmp eq i5 %w38, -16
  %empty_330 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %w_39 = add i5 %w38, 1
  br i1 %exitcond310, label %.preheader628.loopexit, label %42

; <label>:42                                      ; preds = %.preheader627
  %tmp_210_cast1 = zext i5 %w38 to i15
  %tmp_210_cast = zext i5 %w38 to i14
  %tmp_562 = add i14 %tmp_1023_cast1, %tmp_210_cast
  %tmp_1030_cast = zext i14 %tmp_562 to i64
  %buffer0_1_24_16x16_a_4 = getelementptr [6144 x float]* @buffer0_1_24_16x16, i64 0, i64 %tmp_1030_cast
  %tmp_573 = add i15 %tmp_1026_cast, %tmp_210_cast1
  %tmp_1031_cast = zext i15 %tmp_573 to i64
  %shuffleunit0_1_outpu = getelementptr [12288 x float]* @shuffleunit0_1_outpu, i64 0, i64 %tmp_1031_cast
  %shuffleunit0_1_outpu_1 = load float* %shuffleunit0_1_outpu, align 4
  store float %shuffleunit0_1_outpu_1, float* %buffer0_1_24_16x16_a_4, align 4
  br label %.preheader627

.preheader626.loopexit:                           ; preds = %.preheader625
  br label %.preheader626

.preheader626:                                    ; preds = %.preheader626.preheader, %.preheader626.loopexit
  %co48 = phi i5 [ %co_49, %.preheader626.loopexit ], [ 0, %.preheader626.preheader ]
  %co48_cast = zext i5 %co48 to i8
  %exitcond309 = icmp eq i5 %co48, -8
  %empty_331 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_49 = add i5 %co48, 1
  br i1 %exitcond309, label %.preheader624.preheader, label %.preheader625.preheader

.preheader624.preheader:                          ; preds = %.preheader626
  br label %.preheader624

.preheader625.preheader:                          ; preds = %.preheader626
  %tmp_203 = add i8 %co48_cast, -88
  %tmp_534 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_203, i5 0)
  %p_shl317_cast = zext i13 %tmp_534 to i14
  %tmp_537 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %tmp_203, i3 0)
  %p_shl318_cast = zext i11 %tmp_537 to i14
  %tmp_539 = sub i14 %p_shl317_cast, %p_shl318_cast
  %tmp_1017_cast = sext i14 %tmp_539 to i15
  %tmp_540 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co48, i5 0)
  %p_shl315_cast = zext i10 %tmp_540 to i11
  %tmp_545 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co48, i3 0)
  %p_shl316_cast = zext i8 %tmp_545 to i11
  %tmp_552 = sub i11 %p_shl315_cast, %p_shl316_cast
  br label %.preheader625

.preheader625:                                    ; preds = %43, %.preheader625.preheader
  %ci22 = phi i5 [ %ci_23, %43 ], [ 0, %.preheader625.preheader ]
  %exitcond308 = icmp eq i5 %ci22, -8
  %empty_332 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_23 = add i5 %ci22, 1
  br i1 %exitcond308, label %.preheader626.loopexit, label %43

; <label>:43                                      ; preds = %.preheader625
  %tmp_209_cast1 = zext i5 %ci22 to i11
  %tmp_209_cast = zext i5 %ci22 to i15
  %tmp_559 = add i15 %tmp_1017_cast, %tmp_209_cast
  %tmp_1028_cast = sext i15 %tmp_559 to i64
  %shuffle_conv_1x1_add_7 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1028_cast
  %tmp_560 = add i11 %tmp_552, %tmp_209_cast1
  %tmp_1029_cast = sext i11 %tmp_560 to i64
  %weights_24_24_1x1_ad_7 = getelementptr [576 x float]* @weights_24_24_1x1, i64 0, i64 %tmp_1029_cast
  %shuffle_conv_1x1_loa_7 = load float* %shuffle_conv_1x1_add_7, align 4
  store float %shuffle_conv_1x1_loa_7, float* %weights_24_24_1x1_ad_7, align 4
  br label %.preheader625

.preheader624:                                    ; preds = %.preheader624.preheader, %44
  %i21 = phi i5 [ %i_22, %44 ], [ 0, %.preheader624.preheader ]
  %exitcond307 = icmp eq i5 %i21, -8
  %empty_333 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_22 = add i5 %i21, 1
  br i1 %exitcond307, label %45, label %44

; <label>:44                                      ; preds = %.preheader624
  %tmp_206 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 -7, i5 %i21)
  %tmp_207 = zext i9 %tmp_206 to i64
  %bias_addr_14 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_207
  %bias_load_14 = load float* %bias_addr_14, align 4
  %tmp_208 = zext i5 %i21 to i64
  %bias_24_addr_11 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_208
  store float %bias_load_14, float* %bias_24_addr_11, align 4
  br label %.preheader624

; <label>:45                                      ; preds = %.preheader624
  call fastcc void @subconv_1x1_16([6144 x float]* @buffer0_1_24_16x16, [576 x float]* @weights_24_24_1x1, [24 x float]* @bias_24, [6144 x float]* @buffer1_1_24_16x16) nounwind
  br label %.loopexit725

.loopexit725.loopexit:                            ; preds = %.preheader623
  br label %.loopexit725

.loopexit725:                                     ; preds = %.loopexit725.loopexit, %45
  %co50 = phi i5 [ 0, %45 ], [ %co_51, %.loopexit725.loopexit ]
  %exitcond306 = icmp eq i5 %co50, -8
  %empty_334 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_51 = add i5 %co50, 1
  br i1 %exitcond306, label %.preheader621.preheader, label %.preheader623.preheader

.preheader621.preheader:                          ; preds = %.loopexit725
  br label %.preheader621

.preheader623.preheader:                          ; preds = %.loopexit725
  %tmp_211 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 true, i5 %co50)
  %tmp_287_cast = sext i6 %tmp_211 to i7
  %tmp_212_cast = zext i7 %tmp_287_cast to i10
  %tmp_575 = call i8 @_ssdm_op_BitConcatenate.i8.i1.i5.i2(i1 true, i5 %co50, i2 0)
  %tmp_576 = sext i8 %tmp_575 to i9
  %p_shl320_cast = zext i9 %tmp_576 to i10
  %tmp_577 = sub i10 %p_shl320_cast, %tmp_212_cast
  %tmp_1034_cast1 = sext i10 %tmp_577 to i11
  %tmp_213_cast = zext i5 %co50 to i8
  %tmp_578 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co50, i2 0)
  %p_shl319_cast = zext i7 %tmp_578 to i8
  %tmp_580 = sub i8 %p_shl319_cast, %tmp_213_cast
  %tmp_1036_cast = sext i8 %tmp_580 to i9
  br label %.preheader623

.preheader623.loopexit:                           ; preds = %.preheader622
  br label %.preheader623

.preheader623:                                    ; preds = %.preheader623.loopexit, %.preheader623.preheader
  %w40 = phi i2 [ 0, %.preheader623.preheader ], [ %w_41, %.preheader623.loopexit ]
  %exitcond305 = icmp eq i2 %w40, -1
  %empty_335 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_41 = add i2 %w40, 1
  br i1 %exitcond305, label %.loopexit725.loopexit, label %.preheader622.preheader

.preheader622.preheader:                          ; preds = %.preheader623
  %tmp_217_cast1 = zext i2 %w40 to i9
  %tmp_217_cast = zext i2 %w40 to i11
  %tmp_581 = add i11 %tmp_1034_cast1, %tmp_217_cast
  %tmp_1037_cast = sext i11 %tmp_581 to i15
  %tmp_120 = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_581, i2 0)
  %p_shl322_cast = sext i13 %tmp_120 to i15
  %tmp_584 = sub i15 %p_shl322_cast, %tmp_1037_cast
  %tmp_587 = add i9 %tmp_1036_cast, %tmp_217_cast1
  %tmp_121 = shl i9 %tmp_587, 2
  %tmp_589 = sub i9 %tmp_121, %tmp_587
  br label %.preheader622

.preheader622:                                    ; preds = %46, %.preheader622.preheader
  %h39 = phi i2 [ %h_40, %46 ], [ 0, %.preheader622.preheader ]
  %exitcond304 = icmp eq i2 %h39, -1
  %empty_336 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_40 = add i2 %h39, 1
  br i1 %exitcond304, label %.preheader623.loopexit, label %46

; <label>:46                                      ; preds = %.preheader622
  %tmp_218_cast1 = zext i2 %h39 to i9
  %tmp_218_cast = zext i2 %h39 to i15
  %tmp_612 = add i15 %tmp_584, %tmp_218_cast
  %tmp_1051_cast1 = zext i15 %tmp_612 to i64
  %shuffle_conv_3x3_add_4 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1051_cast1
  %tmp_623 = add i9 %tmp_589, %tmp_218_cast1
  %tmp_1052_cast = zext i9 %tmp_623 to i64
  %weights_24_1_3x3_add_4 = getelementptr [216 x float]* @weights_24_1_3x3, i64 0, i64 %tmp_1052_cast
  %shuffle_conv_3x3_loa_4 = load float* %shuffle_conv_3x3_add_4, align 4
  store float %shuffle_conv_3x3_loa_4, float* %weights_24_1_3x3_add_4, align 4
  br label %.preheader622

.preheader621:                                    ; preds = %.preheader621.preheader, %47
  %i23 = phi i5 [ %i_24, %47 ], [ 0, %.preheader621.preheader ]
  %i23_cast = zext i5 %i23 to i9
  %exitcond303 = icmp eq i5 %i23, -8
  %empty_337 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_24 = add i5 %i23, 1
  br i1 %exitcond303, label %48, label %47

; <label>:47                                      ; preds = %.preheader621
  %tmp_214 = add i9 %i23_cast, -200
  %tmp_215 = zext i9 %tmp_214 to i64
  %bias_addr_15 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_215
  %bias_load_15 = load float* %bias_addr_15, align 4
  %tmp_216 = zext i5 %i23 to i64
  %bias_24_addr_12 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_216
  store float %bias_load_15, float* %bias_24_addr_12, align 4
  br label %.preheader621

; <label>:48                                      ; preds = %.preheader621
  call fastcc void @subconv_3x3_16_no_re([6144 x float]* @buffer1_1_24_16x16, [216 x float]* @weights_24_1_3x3, [24 x float]* @bias_24, [6144 x float]* @buffer0_1_24_16x16) nounwind
  br label %.loopexit724

.loopexit724.loopexit:                            ; preds = %.preheader620
  br label %.loopexit724

.loopexit724:                                     ; preds = %.loopexit724.loopexit, %48
  %co52 = phi i5 [ 0, %48 ], [ %co_53, %.loopexit724.loopexit ]
  %exitcond302 = icmp eq i5 %co52, -8
  %empty_338 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_53 = add i5 %co52, 1
  br i1 %exitcond302, label %.preheader619.preheader, label %.preheader620.preheader

.preheader619.preheader:                          ; preds = %.loopexit724
  br label %.preheader619

.preheader620.preheader:                          ; preds = %.loopexit724
  %tmp_590 = call i12 @_ssdm_op_BitConcatenate.i12.i2.i5.i5(i2 -2, i5 %co52, i5 0)
  %tmp_595 = sext i12 %tmp_590 to i13
  %p_shl325_cast = zext i13 %tmp_595 to i14
  %tmp_602 = call i10 @_ssdm_op_BitConcatenate.i10.i2.i5.i3(i2 -2, i5 %co52, i3 0)
  %tmp_603 = sext i10 %tmp_602 to i11
  %p_shl326_cast = zext i11 %tmp_603 to i14
  %tmp_605 = sub i14 %p_shl325_cast, %p_shl326_cast
  %tmp_1047_cast = sext i14 %tmp_605 to i15
  %tmp_606 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co52, i5 0)
  %p_shl323_cast = zext i10 %tmp_606 to i11
  %tmp_609 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co52, i3 0)
  %p_shl324_cast = zext i8 %tmp_609 to i11
  %tmp_610 = sub i11 %p_shl323_cast, %p_shl324_cast
  br label %.preheader620

.preheader620:                                    ; preds = %49, %.preheader620.preheader
  %ci24 = phi i5 [ %ci_25, %49 ], [ 0, %.preheader620.preheader ]
  %exitcond301 = icmp eq i5 %ci24, -8
  %empty_339 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_25 = add i5 %ci24, 1
  br i1 %exitcond301, label %.loopexit724.loopexit, label %49

; <label>:49                                      ; preds = %.preheader620
  %tmp_222_cast1 = zext i5 %ci24 to i11
  %tmp_222_cast = zext i5 %ci24 to i15
  %tmp_625 = add i15 %tmp_1047_cast, %tmp_222_cast
  %tmp_1053_cast = sext i15 %tmp_625 to i64
  %shuffle_conv_1x1_add_8 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1053_cast
  %tmp_626 = add i11 %tmp_610, %tmp_222_cast1
  %tmp_1054_cast = sext i11 %tmp_626 to i64
  %weights_24_24_1x1_ad_8 = getelementptr [576 x float]* @weights_24_24_1x1, i64 0, i64 %tmp_1054_cast
  %shuffle_conv_1x1_loa_8 = load float* %shuffle_conv_1x1_add_8, align 4
  store float %shuffle_conv_1x1_loa_8, float* %weights_24_24_1x1_ad_8, align 4
  br label %.preheader620

.preheader619:                                    ; preds = %.preheader619.preheader, %50
  %i25 = phi i5 [ %i_26, %50 ], [ 0, %.preheader619.preheader ]
  %i25_cast = zext i5 %i25 to i9
  %exitcond300 = icmp eq i5 %i25, -8
  %empty_340 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_26 = add i5 %i25, 1
  br i1 %exitcond300, label %51, label %50

; <label>:50                                      ; preds = %.preheader619
  %tmp_219 = add i9 %i25_cast, -176
  %tmp_220 = zext i9 %tmp_219 to i64
  %bias_addr_16 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_220
  %bias_load_16 = load float* %bias_addr_16, align 4
  %tmp_221 = zext i5 %i25 to i64
  %bias_24_addr_13 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_221
  store float %bias_load_16, float* %bias_24_addr_13, align 4
  br label %.preheader619

; <label>:51                                      ; preds = %.preheader619
  call fastcc void @subconv_1x1_16([6144 x float]* @buffer0_1_24_16x16, [576 x float]* @weights_24_24_1x1, [24 x float]* @bias_24, [6144 x float]* @buffer1_1_24_16x16) nounwind
  br label %.loopexit723

.loopexit723.loopexit:                            ; preds = %.preheader618
  br label %.loopexit723

.loopexit723:                                     ; preds = %.loopexit723.loopexit, %51
  %co54 = phi i5 [ 0, %51 ], [ %co_55, %.loopexit723.loopexit ]
  %exitcond299 = icmp eq i5 %co54, -8
  %empty_341 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_55 = add i5 %co54, 1
  br i1 %exitcond299, label %53, label %.preheader618.preheader

.preheader618.preheader:                          ; preds = %.loopexit723
  %tmp_627 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co54, i4 0)
  %tmp_1056_cast = zext i9 %tmp_627 to i10
  br label %.preheader618

.preheader618.loopexit:                           ; preds = %.preheader617
  br label %.preheader618

.preheader618:                                    ; preds = %.preheader618.loopexit, %.preheader618.preheader
  %h41 = phi i5 [ 0, %.preheader618.preheader ], [ %h_42, %.preheader618.loopexit ]
  %exitcond298 = icmp eq i5 %h41, -16
  %empty_342 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %h_42 = add i5 %h41, 1
  br i1 %exitcond298, label %.loopexit723.loopexit, label %.preheader617.preheader

.preheader617.preheader:                          ; preds = %.preheader618
  %tmp_224_cast = zext i5 %h41 to i10
  %tmp_628 = add i10 %tmp_1056_cast, %tmp_224_cast
  %tmp_123 = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_628, i4 0)
  %tmp_1061_cast = zext i14 %tmp_123 to i15
  br label %.preheader617

.preheader617:                                    ; preds = %52, %.preheader617.preheader
  %w42 = phi i5 [ %w_43, %52 ], [ 0, %.preheader617.preheader ]
  %exitcond297 = icmp eq i5 %w42, -16
  %empty_343 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %w_43 = add i5 %w42, 1
  br i1 %exitcond297, label %.preheader618.loopexit, label %52

; <label>:52                                      ; preds = %.preheader617
  %tmp_228_cast = zext i5 %w42 to i15
  %tmp_630 = add i15 %tmp_1061_cast, %tmp_228_cast
  %tmp_1062_cast1 = zext i15 %tmp_630 to i64
  %buffer0_1_24_16x16_a_5 = getelementptr [6144 x float]* @buffer0_1_24_16x16, i64 0, i64 %tmp_1062_cast1
  %shuffleunit0_1_outpu_2 = getelementptr [12288 x float]* @shuffleunit0_1_outpu, i64 0, i64 %tmp_1062_cast1
  %shuffleunit0_1_outpu_3 = load float* %shuffleunit0_1_outpu_2, align 4
  store float %shuffleunit0_1_outpu_3, float* %buffer0_1_24_16x16_a_5, align 4
  br label %.preheader617

; <label>:53                                      ; preds = %.loopexit723
  call fastcc void @shuffle_24([6144 x float]* @buffer0_1_24_16x16, [12288 x float]* @shuffleunit0_2_outpu) nounwind
  br label %.loopexit722

.loopexit722.loopexit:                            ; preds = %.preheader616
  br label %.loopexit722

.loopexit722:                                     ; preds = %.loopexit722.loopexit, %53
  %co56 = phi i5 [ 0, %53 ], [ %co_57, %.loopexit722.loopexit ]
  %co56_cast = zext i5 %co56 to i9
  %exitcond296 = icmp eq i5 %co56, -8
  %empty_344 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_57 = add i5 %co56, 1
  br i1 %exitcond296, label %.preheader614.preheader, label %.preheader616.preheader

.preheader614.preheader:                          ; preds = %.loopexit722
  br label %.preheader614

.preheader616.preheader:                          ; preds = %.loopexit722
  %tmp_122 = trunc i5 %co56 to i1
  %p_shl = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_122, i5 0)
  %p_shl_cast = zext i6 %p_shl to i7
  %p_shl1 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_122, i3 0)
  %p_shl1_cast = zext i4 %p_shl1 to i7
  %tmp_223 = sub i7 %p_shl_cast, %p_shl1_cast
  %p_lshr_f_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co56, i32 1, i32 4)
  %tmp_305_cast = zext i4 %p_lshr_f_cast to i7
  br label %.preheader616

.preheader616.loopexit:                           ; preds = %.preheader615
  br label %.preheader616

.preheader616:                                    ; preds = %.preheader616.loopexit, %.preheader616.preheader
  %ci26 = phi i5 [ 0, %.preheader616.preheader ], [ %ci_27, %.preheader616.loopexit ]
  %ci26_cast = zext i5 %ci26 to i7
  %exitcond295 = icmp eq i5 %ci26, -8
  %empty_345 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_27 = add i5 %ci26, 1
  br i1 %exitcond295, label %.loopexit722.loopexit, label %.preheader615.preheader

.preheader615.preheader:                          ; preds = %.preheader616
  %tmp_225_cast = zext i5 %ci26 to i16
  %tmp_226 = add i7 %tmp_223, %ci26_cast
  %tmp_227_cast = sext i7 %tmp_226 to i13
  br label %.preheader615

.preheader615:                                    ; preds = %54, %.preheader615.preheader
  %i28 = phi i3 [ %i_29, %54 ], [ 0, %.preheader615.preheader ]
  %exitcond294 = icmp eq i3 %i28, -4
  %empty_346 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_29 = add i3 %i28, 1
  br i1 %exitcond294, label %.preheader616.loopexit, label %54

; <label>:54                                      ; preds = %.preheader615
  %tmp_133 = trunc i3 %i28 to i2
  %p_shl4 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_133, i5 0)
  %p_shl4_cast = zext i7 %p_shl4 to i8
  %p_shl5 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_133, i3 0)
  %p_shl5_cast = zext i5 %p_shl5 to i8
  %tmp_234 = sub i8 %p_shl4_cast, %p_shl5_cast
  %tmp_319_cast = sext i8 %tmp_234 to i9
  %tmp1 = add i9 216, %tmp_319_cast
  %tmp_235 = add i9 %tmp1, %co56_cast
  %tmp_631 = call i14 @_ssdm_op_BitConcatenate.i14.i9.i5(i9 %tmp_235, i5 0)
  %p_shl329_cast = zext i14 %tmp_631 to i15
  %tmp_634 = call i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9 %tmp_235, i3 0)
  %p_shl330_cast = zext i12 %tmp_634 to i15
  %tmp_637 = sub i15 %p_shl329_cast, %p_shl330_cast
  %tmp_1069_cast = sext i15 %tmp_637 to i16
  %tmp_639 = add i16 %tmp_225_cast, %tmp_1069_cast
  %tmp_1070_cast = sext i16 %tmp_639 to i64
  %shuffle_conv_1x1_add_9 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1070_cast
  %shuffle_conv_1x1_loa_9 = load float* %shuffle_conv_1x1_add_9, align 4
  %p_shl6 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_133, i4 0)
  %p_shl6_cast = zext i6 %p_shl6 to i7
  %p_shl7 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_133, i2 0)
  %p_shl7_cast = zext i4 %p_shl7 to i7
  %tmp_236 = sub i7 %p_shl6_cast, %p_shl7_cast
  %tmp_237 = add i7 %tmp_236, %tmp_305_cast
  %tmp_640 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_237, i6 0)
  %tmp_645 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_237, i4 0)
  %p_shl328_cast = sext i11 %tmp_645 to i13
  %tmp_652 = sub i13 %tmp_640, %p_shl328_cast
  %tmp_653 = add i13 %tmp_227_cast, %tmp_652
  %tmp_1078_cast = sext i13 %tmp_653 to i64
  %weights_48_48_1x1_ad = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1078_cast
  store float %shuffle_conv_1x1_loa_9, float* %weights_48_48_1x1_ad, align 4
  br label %.preheader615

.preheader614.loopexit:                           ; preds = %.preheader613
  br label %.preheader614

.preheader614:                                    ; preds = %.preheader614.preheader, %.preheader614.loopexit
  %i27 = phi i5 [ %i_28, %.preheader614.loopexit ], [ 0, %.preheader614.preheader ]
  %i27_cast = zext i5 %i27 to i7
  %i27_cast1 = zext i5 %i27 to i9
  %exitcond293 = icmp eq i5 %i27, -8
  %empty_347 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_28 = add i5 %i27, 1
  br i1 %exitcond293, label %56, label %.preheader613.preheader

.preheader613.preheader:                          ; preds = %.preheader614
  br label %.preheader613

.preheader613:                                    ; preds = %.preheader613.preheader, %55
  %k1 = phi i2 [ %k, %55 ], [ 0, %.preheader613.preheader ]
  %exitcond292 = icmp eq i2 %k1, -2
  %empty_348 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k = add i2 %k1, 1
  br i1 %exitcond292, label %.preheader614.loopexit, label %55

; <label>:55                                      ; preds = %.preheader613
  %tmp_124 = trunc i2 %k1 to i1
  %p_shl2 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_124, i5 0)
  %p_shl2_cast = zext i6 %p_shl2 to i7
  %p_shl3 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_124, i3 0)
  %p_shl3_cast = zext i4 %p_shl3 to i7
  %tmp_229 = sub i7 %p_shl2_cast, %p_shl3_cast
  %tmp_308_cast = sext i7 %tmp_229 to i9
  %tmp2 = add i9 -152, %tmp_308_cast
  %tmp_230 = add i9 %i27_cast1, %tmp2
  %tmp_231 = zext i9 %tmp_230 to i64
  %bias_addr_17 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_231
  %bias_load_17 = load float* %bias_addr_17, align 4
  %tmp_232 = add i7 %tmp_229, %i27_cast
  %tmp_312_cast = sext i7 %tmp_232 to i32
  %tmp_233 = zext i32 %tmp_312_cast to i64
  %bias_48_addr = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_233
  store float %bias_load_17, float* %bias_48_addr, align 4
  br label %.preheader613

; <label>:56                                      ; preds = %.preheader614
  call fastcc void @subconv_1x1_16p([2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48) nounwind
  br label %.loopexit721

.loopexit721.loopexit:                            ; preds = %.preheader612
  br label %.loopexit721

.loopexit721:                                     ; preds = %.loopexit721.loopexit, %56
  %co58 = phi i5 [ 0, %56 ], [ %co_59, %.loopexit721.loopexit ]
  %co59_cast = zext i5 %co58 to i7
  %co59_cast1 = zext i5 %co58 to i8
  %exitcond291 = icmp eq i5 %co58, -8
  %empty_349 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_59 = add i5 %co58, 1
  br i1 %exitcond291, label %.preheader609.preheader, label %.preheader612.preheader

.preheader612.preheader:                          ; preds = %.loopexit721
  br label %.preheader612

.preheader609.preheader:                          ; preds = %.loopexit721
  br label %.preheader609

.preheader612.loopexit:                           ; preds = %.preheader611
  br label %.preheader612

.preheader612:                                    ; preds = %.preheader612.preheader, %.preheader612.loopexit
  %w44 = phi i2 [ %w_45, %.preheader612.loopexit ], [ 0, %.preheader612.preheader ]
  %exitcond290 = icmp eq i2 %w44, -1
  %empty_350 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_45 = add i2 %w44, 1
  br i1 %exitcond290, label %.loopexit721.loopexit, label %.preheader611.preheader

.preheader611.preheader:                          ; preds = %.preheader612
  %tmp_238_cast1 = zext i2 %w44 to i36
  %tmp_238_cast2 = zext i2 %w44 to i12
  br label %.preheader611

.preheader611.loopexit:                           ; preds = %.preheader610
  br label %.preheader611

.preheader611:                                    ; preds = %.preheader611.loopexit, %.preheader611.preheader
  %h43 = phi i2 [ 0, %.preheader611.preheader ], [ %h_44, %.preheader611.loopexit ]
  %exitcond289 = icmp eq i2 %h43, -1
  %empty_351 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_44 = add i2 %h43, 1
  br i1 %exitcond289, label %.preheader612.loopexit, label %.preheader610.preheader

.preheader610.preheader:                          ; preds = %.preheader611
  %tmp_245_cast1 = zext i2 %h43 to i10
  %tmp_245_cast = zext i2 %h43 to i15
  br label %.preheader610

.preheader610:                                    ; preds = %57, %.preheader610.preheader
  %i33 = phi i2 [ %i_34, %57 ], [ 0, %.preheader610.preheader ]
  %exitcond288 = icmp eq i2 %i33, -2
  %empty_352 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_34 = add i2 %i33, 1
  br i1 %exitcond288, label %.preheader611.loopexit, label %57

; <label>:57                                      ; preds = %.preheader610
  %tmp_140 = trunc i2 %i33 to i1
  %p_shl14 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_140, i5 0)
  %p_shl14_cast = zext i6 %p_shl14 to i7
  %p_shl15 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_140, i3 0)
  %p_shl15_cast = zext i4 %p_shl15 to i7
  %tmp_249 = sub i7 %p_shl14_cast, %p_shl15_cast
  %tmp_345_cast = sext i7 %tmp_249 to i8
  %tmp3 = add i8 120, %tmp_345_cast
  %tmp_250 = add i8 %tmp3, %co59_cast1
  %tmp_251_cast1 = zext i8 %tmp_250 to i11
  %tmp_655 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_250, i2 0)
  %p_shl334_cast = zext i10 %tmp_655 to i11
  %tmp_656 = sub i11 %p_shl334_cast, %tmp_251_cast1
  %tmp_1086_cast = sext i11 %tmp_656 to i12
  %tmp_659 = add i12 %tmp_238_cast2, %tmp_1086_cast
  %tmp_1087_cast1 = sext i12 %tmp_659 to i15
  %tmp_144 = call i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12 %tmp_659, i2 0)
  %p_shl333_cast = sext i14 %tmp_144 to i15
  %tmp_660 = sub i15 %p_shl333_cast, %tmp_1087_cast1
  %tmp_662 = add i15 %tmp_245_cast, %tmp_660
  %tmp_1090_cast = zext i15 %tmp_662 to i64
  %shuffle_conv_3x3_add_5 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1090_cast
  %shuffle_conv_3x3_loa_5 = load float* %shuffle_conv_3x3_add_5, align 4
  %tmp_252 = add i7 %co59_cast, %tmp_249
  %tmp_349_cast = sext i7 %tmp_252 to i32
  %tmp_253_cast = zext i32 %tmp_349_cast to i35
  %tmp_673 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_252, i2 0)
  %tmp_674 = sext i9 %tmp_673 to i34
  %p_shl332_cast = zext i34 %tmp_674 to i35
  %tmp_676 = sub i35 %p_shl332_cast, %tmp_253_cast
  %tmp_1093_cast = sext i35 %tmp_676 to i36
  %tmp_677 = add i36 %tmp_238_cast1, %tmp_1093_cast
  %tmp_146 = trunc i36 %tmp_677 to i10
  %tmp_147 = trunc i36 %tmp_677 to i8
  %p_shl331_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_147, i2 0)
  %tmp_678 = sub i10 %p_shl331_cast, %tmp_146
  %tmp_684 = add i10 %tmp_245_cast1, %tmp_678
  %tmp_1097_cast = zext i10 %tmp_684 to i64
  %weights_48_1_3x3_add = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1097_cast
  store float %shuffle_conv_3x3_loa_5, float* %weights_48_1_3x3_add, align 4
  br label %.preheader610

.preheader609.loopexit:                           ; preds = %.preheader608
  br label %.preheader609

.preheader609:                                    ; preds = %.preheader609.preheader, %.preheader609.loopexit
  %i29 = phi i5 [ %i_30, %.preheader609.loopexit ], [ 0, %.preheader609.preheader ]
  %i29_cast = zext i5 %i29 to i7
  %i29_cast648_cast = zext i5 %i29 to i8
  %exitcond287 = icmp eq i5 %i29, -8
  %empty_353 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_30 = add i5 %i29, 1
  br i1 %exitcond287, label %59, label %.preheader608.preheader

.preheader608.preheader:                          ; preds = %.preheader609
  br label %.preheader608

.preheader608:                                    ; preds = %.preheader608.preheader, %58
  %k2 = phi i2 [ %k_1, %58 ], [ 0, %.preheader608.preheader ]
  %exitcond286 = icmp eq i2 %k2, -2
  %empty_354 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_1 = add i2 %k2, 1
  br i1 %exitcond286, label %.preheader609.loopexit, label %58

; <label>:58                                      ; preds = %.preheader608
  %tmp_138 = trunc i2 %k2 to i1
  %p_shl8 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_138, i5 0)
  %p_shl8_cast = zext i6 %p_shl8 to i7
  %p_shl9 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_138, i3 0)
  %p_shl9_cast = zext i4 %p_shl9 to i7
  %tmp_240 = sub i7 %p_shl8_cast, %p_shl9_cast
  %tmp_326_cast_cast = sext i7 %tmp_240 to i8
  %tmp4 = add i8 -104, %tmp_326_cast_cast
  %tmp_241 = add i8 %i29_cast648_cast, %tmp4
  %tmp_328_cast = sext i8 %tmp_241 to i9
  %tmp_242 = zext i9 %tmp_328_cast to i64
  %bias_addr_18 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_242
  %bias_load_18 = load float* %bias_addr_18, align 4
  %tmp_243 = add i7 %tmp_240, %i29_cast
  %tmp_330_cast = sext i7 %tmp_243 to i32
  %tmp_244 = zext i32 %tmp_330_cast to i64
  %bias_48_addr_1 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_244
  store float %bias_load_18, float* %bias_48_addr_1, align 4
  br label %.preheader608

; <label>:59                                      ; preds = %.preheader609
  call fastcc void @subconv_3x3_16_strid([12288 x float]* @ShuffleConvs_1_Downs, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [3072 x float]* @buffer0_1_48_8x8) nounwind
  br label %.loopexit720

.loopexit720.loopexit:                            ; preds = %.preheader607
  br label %.loopexit720

.loopexit720:                                     ; preds = %.loopexit720.loopexit, %59
  %co60 = phi i5 [ 0, %59 ], [ %co_61, %.loopexit720.loopexit ]
  %co61_cast = zext i5 %co60 to i9
  %exitcond285 = icmp eq i5 %co60, -8
  %empty_355 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_61 = add i5 %co60, 1
  br i1 %exitcond285, label %.preheader605.preheader, label %.preheader607.preheader

.preheader605.preheader:                          ; preds = %.loopexit720
  br label %.preheader605

.preheader607.preheader:                          ; preds = %.loopexit720
  %tmp_134 = trunc i5 %co60 to i1
  %p_shl10 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_134, i5 0)
  %p_shl10_cast = zext i6 %p_shl10 to i7
  %p_shl11 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_134, i3 0)
  %p_shl11_cast = zext i4 %p_shl11 to i7
  %tmp_239 = sub i7 %p_shl10_cast, %p_shl11_cast
  %p_lshr_f1_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co60, i32 1, i32 4)
  %tmp_334_cast = zext i4 %p_lshr_f1_cast to i7
  br label %.preheader607

.preheader607.loopexit:                           ; preds = %.preheader606
  br label %.preheader607

.preheader607:                                    ; preds = %.preheader607.loopexit, %.preheader607.preheader
  %ci28 = phi i5 [ 0, %.preheader607.preheader ], [ %ci_29, %.preheader607.loopexit ]
  %ci28_cast = zext i5 %ci28 to i7
  %exitcond284 = icmp eq i5 %ci28, -8
  %empty_356 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_29 = add i5 %ci28, 1
  br i1 %exitcond284, label %.loopexit720.loopexit, label %.preheader606.preheader

.preheader606.preheader:                          ; preds = %.preheader607
  %tmp_246_cast = zext i5 %ci28 to i16
  %tmp_247 = add i7 %tmp_239, %ci28_cast
  %tmp_248_cast = sext i7 %tmp_247 to i13
  br label %.preheader606

.preheader606:                                    ; preds = %60, %.preheader606.preheader
  %i35 = phi i3 [ %i_36, %60 ], [ 0, %.preheader606.preheader ]
  %exitcond283 = icmp eq i3 %i35, -4
  %empty_357 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_36 = add i3 %i35, 1
  br i1 %exitcond283, label %.preheader607.loopexit, label %60

; <label>:60                                      ; preds = %.preheader606
  %tmp_153 = trunc i3 %i35 to i2
  %p_shl16 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_153, i5 0)
  %p_shl16_cast = zext i7 %p_shl16 to i8
  %p_shl17 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_153, i3 0)
  %p_shl17_cast = zext i5 %p_shl17 to i8
  %tmp_259 = sub i8 %p_shl16_cast, %p_shl17_cast
  %tmp_352_cast = sext i8 %tmp_259 to i9
  %tmp5 = add i9 -200, %tmp_352_cast
  %tmp_260 = add i9 %tmp5, %co61_cast
  %tmp_687 = call i14 @_ssdm_op_BitConcatenate.i14.i9.i5(i9 %tmp_260, i5 0)
  %p_shl337_cast = zext i14 %tmp_687 to i15
  %tmp_689 = call i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9 %tmp_260, i3 0)
  %p_shl338_cast = zext i12 %tmp_689 to i15
  %tmp_690 = sub i15 %p_shl337_cast, %p_shl338_cast
  %tmp_1104_cast = sext i15 %tmp_690 to i16
  %tmp_692 = add i16 %tmp_246_cast, %tmp_1104_cast
  %tmp_1105_cast1 = sext i16 %tmp_692 to i64
  %shuffle_conv_1x1_add_10 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1105_cast1
  %shuffle_conv_1x1_loa_10 = load float* %shuffle_conv_1x1_add_10, align 4
  %p_shl18 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_153, i4 0)
  %p_shl18_cast = zext i6 %p_shl18 to i7
  %p_shl19 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_153, i2 0)
  %p_shl19_cast = zext i4 %p_shl19 to i7
  %tmp_261 = sub i7 %p_shl18_cast, %p_shl19_cast
  %tmp_262 = add i7 %tmp_261, %tmp_334_cast
  %tmp_699 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_262, i6 0)
  %tmp_700 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_262, i4 0)
  %p_shl336_cast = sext i11 %tmp_700 to i13
  %tmp_702 = sub i13 %tmp_699, %p_shl336_cast
  %tmp_705 = add i13 %tmp_248_cast, %tmp_702
  %tmp_1113_cast = sext i13 %tmp_705 to i64
  %weights_48_48_1x1_ad_1 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1113_cast
  store float %shuffle_conv_1x1_loa_10, float* %weights_48_48_1x1_ad_1, align 4
  br label %.preheader606

.preheader605.loopexit:                           ; preds = %.preheader604
  br label %.preheader605

.preheader605:                                    ; preds = %.preheader605.preheader, %.preheader605.loopexit
  %i31 = phi i5 [ %i_32, %.preheader605.loopexit ], [ 0, %.preheader605.preheader ]
  %i32_cast = zext i5 %i31 to i7
  %i32_cast635_cast = zext i5 %i31 to i8
  %exitcond282 = icmp eq i5 %i31, -8
  %empty_358 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_32 = add i5 %i31, 1
  br i1 %exitcond282, label %62, label %.preheader604.preheader

.preheader604.preheader:                          ; preds = %.preheader605
  br label %.preheader604

.preheader604:                                    ; preds = %.preheader604.preheader, %61
  %k3 = phi i2 [ %k_2, %61 ], [ 0, %.preheader604.preheader ]
  %exitcond281 = icmp eq i2 %k3, -2
  %empty_359 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_2 = add i2 %k3, 1
  br i1 %exitcond281, label %.preheader605.loopexit, label %61

; <label>:61                                      ; preds = %.preheader604
  %tmp_151 = trunc i2 %k3 to i1
  %p_shl12 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_151, i5 0)
  %p_shl12_cast = zext i6 %p_shl12 to i7
  %p_shl13 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_151, i3 0)
  %p_shl13_cast = zext i4 %p_shl13 to i7
  %tmp_254 = sub i7 %p_shl12_cast, %p_shl13_cast
  %tmp_336_cast_cast = sext i7 %tmp_254 to i8
  %tmp6 = add i8 -56, %tmp_336_cast_cast
  %tmp_255 = add i8 %i32_cast635_cast, %tmp6
  %tmp_338_cast = sext i8 %tmp_255 to i9
  %tmp_256 = zext i9 %tmp_338_cast to i64
  %bias_addr_19 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_256
  %bias_load_19 = load float* %bias_addr_19, align 4
  %tmp_257 = add i7 %tmp_254, %i32_cast
  %tmp_340_cast = sext i7 %tmp_257 to i32
  %tmp_258 = zext i32 %tmp_340_cast to i64
  %bias_48_addr_2 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_258
  store float %bias_load_19, float* %bias_48_addr_2, align 4
  br label %.preheader604

; <label>:62                                      ; preds = %.preheader605
  call fastcc void @subconv_1x1_8([3072 x float]* @buffer0_1_48_8x8, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [3072 x float]* @buffer1_1_48_8x8) nounwind
  call fastcc void @shuffle_48_l([3072 x float]* @buffer1_1_48_8x8, [6144 x float]* @downsampleunit1_outp) nounwind
  br label %.loopexit719

.loopexit719.loopexit:                            ; preds = %.preheader603
  br label %.loopexit719

.loopexit719:                                     ; preds = %.loopexit719.loopexit, %62
  %co62 = phi i5 [ 0, %62 ], [ %co_63, %.loopexit719.loopexit ]
  %co63_cast = zext i5 %co62 to i7
  %co63_cast1 = zext i5 %co62 to i8
  %exitcond280 = icmp eq i5 %co62, -8
  %empty_360 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_63 = add i5 %co62, 1
  br i1 %exitcond280, label %.preheader600.preheader, label %.preheader603.preheader

.preheader603.preheader:                          ; preds = %.loopexit719
  br label %.preheader603

.preheader600.preheader:                          ; preds = %.loopexit719
  br label %.preheader600

.preheader603.loopexit:                           ; preds = %.preheader602
  br label %.preheader603

.preheader603:                                    ; preds = %.preheader603.preheader, %.preheader603.loopexit
  %w46 = phi i2 [ %w_47, %.preheader603.loopexit ], [ 0, %.preheader603.preheader ]
  %exitcond279 = icmp eq i2 %w46, -1
  %empty_361 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_47 = add i2 %w46, 1
  br i1 %exitcond279, label %.loopexit719.loopexit, label %.preheader602.preheader

.preheader602.preheader:                          ; preds = %.preheader603
  %tmp_263_cast1 = zext i2 %w46 to i36
  %tmp_263_cast = zext i2 %w46 to i11
  br label %.preheader602

.preheader602.loopexit:                           ; preds = %.preheader601
  br label %.preheader602

.preheader602:                                    ; preds = %.preheader602.loopexit, %.preheader602.preheader
  %h45 = phi i2 [ 0, %.preheader602.preheader ], [ %h_46, %.preheader602.loopexit ]
  %exitcond278 = icmp eq i2 %h45, -1
  %empty_362 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_46 = add i2 %h45, 1
  br i1 %exitcond278, label %.preheader603.loopexit, label %.preheader601.preheader

.preheader601.preheader:                          ; preds = %.preheader602
  %tmp_270_cast1 = zext i2 %h45 to i10
  %tmp_270_cast = zext i2 %h45 to i15
  br label %.preheader601

.preheader601:                                    ; preds = %63, %.preheader601.preheader
  %i40 = phi i2 [ %i_41, %63 ], [ 0, %.preheader601.preheader ]
  %exitcond277 = icmp eq i2 %i40, -2
  %empty_363 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_41 = add i2 %i40, 1
  br i1 %exitcond277, label %.preheader602.loopexit, label %63

; <label>:63                                      ; preds = %.preheader601
  %tmp_164 = trunc i2 %i40 to i1
  %p_shl26 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_164, i5 0)
  %p_shl26_cast = zext i6 %p_shl26 to i7
  %p_shl27 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_164, i3 0)
  %p_shl27_cast = zext i4 %p_shl27 to i7
  %tmp_274 = sub i7 %p_shl26_cast, %p_shl27_cast
  %tmp_378_cast = sext i7 %tmp_274 to i8
  %tmp7 = add i8 -88, %tmp_378_cast
  %tmp_275 = add i8 %tmp7, %co63_cast1
  %tmp_276_cast = zext i8 %tmp_275 to i11
  %tmp_706 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_275, i2 0)
  %p_shl342_cast = zext i10 %tmp_706 to i11
  %tmp_708 = sub i11 %p_shl342_cast, %tmp_276_cast
  %tmp_709 = add i11 %tmp_263_cast, %tmp_708
  %tmp_1122_cast = sext i11 %tmp_709 to i15
  %tmp_165 = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_709, i2 0)
  %p_shl341_cast = sext i13 %tmp_165 to i15
  %tmp_719 = sub i15 %p_shl341_cast, %tmp_1122_cast
  %tmp_726 = add i15 %tmp_270_cast, %tmp_719
  %tmp_1125_cast = zext i15 %tmp_726 to i64
  %shuffle_conv_3x3_add_6 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1125_cast
  %shuffle_conv_3x3_loa_6 = load float* %shuffle_conv_3x3_add_6, align 4
  %tmp_277 = add i7 %co63_cast, %tmp_274
  %tmp_382_cast = sext i7 %tmp_277 to i32
  %tmp_278_cast = zext i32 %tmp_382_cast to i35
  %tmp_727 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_277, i2 0)
  %tmp_728 = sext i9 %tmp_727 to i34
  %p_shl340_cast = zext i34 %tmp_728 to i35
  %tmp_730 = sub i35 %p_shl340_cast, %tmp_278_cast
  %tmp_1128_cast = sext i35 %tmp_730 to i36
  %tmp_733 = add i36 %tmp_263_cast1, %tmp_1128_cast
  %tmp_167 = trunc i36 %tmp_733 to i10
  %tmp_168 = trunc i36 %tmp_733 to i8
  %p_shl339_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_168, i2 0)
  %tmp_734 = sub i10 %p_shl339_cast, %tmp_167
  %tmp_736 = add i10 %tmp_270_cast1, %tmp_734
  %tmp_1132_cast = zext i10 %tmp_736 to i64
  %weights_48_1_3x3_add_1 = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1132_cast
  store float %shuffle_conv_3x3_loa_6, float* %weights_48_1_3x3_add_1, align 4
  br label %.preheader601

.preheader600.loopexit:                           ; preds = %.preheader599
  br label %.preheader600

.preheader600:                                    ; preds = %.preheader600.preheader, %.preheader600.loopexit
  %i37 = phi i5 [ %i_38, %.preheader600.loopexit ], [ 0, %.preheader600.preheader ]
  %i37_cast = zext i5 %i37 to i7
  %i37_cast1 = zext i5 %i37 to i10
  %exitcond276 = icmp eq i5 %i37, -8
  %empty_364 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_38 = add i5 %i37, 1
  br i1 %exitcond276, label %65, label %.preheader599.preheader

.preheader599.preheader:                          ; preds = %.preheader600
  br label %.preheader599

.preheader599:                                    ; preds = %.preheader599.preheader, %64
  %k4 = phi i2 [ %k_3, %64 ], [ 0, %.preheader599.preheader ]
  %exitcond275 = icmp eq i2 %k4, -2
  %empty_365 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_3 = add i2 %k4, 1
  br i1 %exitcond275, label %.preheader600.loopexit, label %64

; <label>:64                                      ; preds = %.preheader599
  %tmp_160 = trunc i2 %k4 to i1
  %p_shl20 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_160, i5 0)
  %p_shl20_cast = zext i6 %p_shl20 to i7
  %p_shl21 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_160, i3 0)
  %p_shl21_cast = zext i4 %p_shl21 to i7
  %tmp_265 = sub i7 %p_shl20_cast, %p_shl21_cast
  %tmp_359_cast = sext i7 %tmp_265 to i10
  %tmp8 = add i10 504, %tmp_359_cast
  %tmp_266 = add i10 %i37_cast1, %tmp8
  %tmp_267 = zext i10 %tmp_266 to i64
  %bias_addr_20 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_267
  %bias_load_20 = load float* %bias_addr_20, align 4
  %tmp_268 = add i7 %tmp_265, %i37_cast
  %tmp_363_cast = sext i7 %tmp_268 to i32
  %tmp_269 = zext i32 %tmp_363_cast to i64
  %bias_48_addr_3 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_269
  store float %bias_load_20, float* %bias_48_addr_3, align 4
  br label %.preheader599

; <label>:65                                      ; preds = %.preheader600
  call fastcc void @subconv_3x3_16_strid([12288 x float]* @shuffleunit0_2_outpu, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [3072 x float]* @buffer0_1_48_8x8) nounwind
  br label %.loopexit718

.loopexit718.loopexit:                            ; preds = %.preheader598
  br label %.loopexit718

.loopexit718:                                     ; preds = %.loopexit718.loopexit, %65
  %co64 = phi i5 [ 0, %65 ], [ %co_65, %.loopexit718.loopexit ]
  %co65_cast = zext i5 %co64 to i10
  %exitcond274 = icmp eq i5 %co64, -8
  %empty_366 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_65 = add i5 %co64, 1
  br i1 %exitcond274, label %.preheader596.preheader, label %.preheader598.preheader

.preheader596.preheader:                          ; preds = %.loopexit718
  br label %.preheader596

.preheader598.preheader:                          ; preds = %.loopexit718
  %tmp_157 = trunc i5 %co64 to i1
  %p_shl22 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_157, i5 0)
  %p_shl22_cast = zext i6 %p_shl22 to i7
  %p_shl23 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_157, i3 0)
  %p_shl23_cast = zext i4 %p_shl23 to i7
  %tmp_264 = sub i7 %p_shl22_cast, %p_shl23_cast
  %p_lshr_f2_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co64, i32 1, i32 4)
  %tmp_367_cast = zext i4 %p_lshr_f2_cast to i7
  br label %.preheader598

.preheader598.loopexit:                           ; preds = %.preheader597
  br label %.preheader598

.preheader598:                                    ; preds = %.preheader598.loopexit, %.preheader598.preheader
  %ci30 = phi i5 [ 0, %.preheader598.preheader ], [ %ci_31, %.preheader598.loopexit ]
  %ci30_cast = zext i5 %ci30 to i7
  %exitcond273 = icmp eq i5 %ci30, -8
  %empty_367 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_31 = add i5 %ci30, 1
  br i1 %exitcond273, label %.loopexit718.loopexit, label %.preheader597.preheader

.preheader597.preheader:                          ; preds = %.preheader598
  %tmp_271_cast = zext i5 %ci30 to i17
  %tmp_272 = add i7 %tmp_264, %ci30_cast
  %tmp_273_cast = sext i7 %tmp_272 to i13
  br label %.preheader597

.preheader597:                                    ; preds = %66, %.preheader597.preheader
  %i42 = phi i3 [ %i_43, %66 ], [ 0, %.preheader597.preheader ]
  %exitcond272 = icmp eq i3 %i42, -4
  %empty_368 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_43 = add i3 %i42, 1
  br i1 %exitcond272, label %.preheader598.loopexit, label %66

; <label>:66                                      ; preds = %.preheader597
  %tmp_173 = trunc i3 %i42 to i2
  %p_shl30 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_173, i5 0)
  %p_shl30_cast = zext i7 %p_shl30 to i8
  %p_shl31 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_173, i3 0)
  %p_shl31_cast = zext i5 %p_shl31 to i8
  %tmp_285 = sub i8 %p_shl30_cast, %p_shl31_cast
  %tmp_390_cast = sext i8 %tmp_285 to i9
  %tmp9 = add i9 -104, %tmp_390_cast
  %tmp9_cast = zext i9 %tmp9 to i10
  %tmp_286 = add i10 %tmp9_cast, %co65_cast
  %tmp_750 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_286, i5 0)
  %p_shl345_cast = zext i15 %tmp_750 to i16
  %tmp_751 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_286, i3 0)
  %p_shl346_cast = zext i13 %tmp_751 to i16
  %tmp_753 = sub i16 %p_shl345_cast, %p_shl346_cast
  %tmp_1143_cast = sext i16 %tmp_753 to i17
  %tmp_754 = add i17 %tmp_271_cast, %tmp_1143_cast
  %tmp_1144_cast = sext i17 %tmp_754 to i64
  %shuffle_conv_1x1_add_11 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1144_cast
  %shuffle_conv_1x1_loa_11 = load float* %shuffle_conv_1x1_add_11, align 4
  %p_shl32 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_173, i4 0)
  %p_shl32_cast = zext i6 %p_shl32 to i7
  %p_shl33 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_173, i2 0)
  %p_shl33_cast = zext i4 %p_shl33 to i7
  %tmp_287 = sub i7 %p_shl32_cast, %p_shl33_cast
  %tmp_288 = add i7 %tmp_287, %tmp_367_cast
  %tmp_755 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_288, i6 0)
  %tmp_765 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_288, i4 0)
  %p_shl344_cast = sext i11 %tmp_765 to i13
  %tmp_772 = sub i13 %tmp_755, %p_shl344_cast
  %tmp_773 = add i13 %tmp_273_cast, %tmp_772
  %tmp_1152_cast = sext i13 %tmp_773 to i64
  %weights_48_48_1x1_ad_2 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1152_cast
  store float %shuffle_conv_1x1_loa_11, float* %weights_48_48_1x1_ad_2, align 4
  br label %.preheader597

.preheader596.loopexit:                           ; preds = %.preheader595
  br label %.preheader596

.preheader596:                                    ; preds = %.preheader596.preheader, %.preheader596.loopexit
  %i39 = phi i5 [ %i_40, %.preheader596.loopexit ], [ 0, %.preheader596.preheader ]
  %i39_cast = zext i5 %i39 to i7
  %i39_cast1 = zext i5 %i39 to i10
  %exitcond271 = icmp eq i5 %i39, -8
  %empty_369 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_40 = add i5 %i39, 1
  br i1 %exitcond271, label %68, label %.preheader595.preheader

.preheader595.preheader:                          ; preds = %.preheader596
  br label %.preheader595

.preheader595:                                    ; preds = %.preheader595.preheader, %67
  %k5 = phi i2 [ %k_4, %67 ], [ 0, %.preheader595.preheader ]
  %exitcond270 = icmp eq i2 %k5, -2
  %empty_370 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_4 = add i2 %k5, 1
  br i1 %exitcond270, label %.preheader596.loopexit, label %67

; <label>:67                                      ; preds = %.preheader595
  %tmp_172 = trunc i2 %k5 to i1
  %p_shl24 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_172, i5 0)
  %p_shl24_cast = zext i6 %p_shl24 to i7
  %p_shl25 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_172, i3 0)
  %p_shl25_cast = zext i4 %p_shl25 to i7
  %tmp_280 = sub i7 %p_shl24_cast, %p_shl25_cast
  %tmp_369_cast = sext i7 %tmp_280 to i10
  %tmp10 = add i10 -472, %tmp_369_cast
  %tmp_281 = add i10 %i39_cast1, %tmp10
  %tmp_282 = zext i10 %tmp_281 to i64
  %bias_addr_21 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_282
  %bias_load_21 = load float* %bias_addr_21, align 4
  %tmp_283 = add i7 %tmp_280, %i39_cast
  %tmp_373_cast = sext i7 %tmp_283 to i32
  %tmp_284 = zext i32 %tmp_373_cast to i64
  %bias_48_addr_4 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_284
  store float %bias_load_21, float* %bias_48_addr_4, align 4
  br label %.preheader595

; <label>:68                                      ; preds = %.preheader596
  call fastcc void @subconv_1x1_8([3072 x float]* @buffer0_1_48_8x8, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [3072 x float]* @buffer1_1_48_8x8) nounwind
  call fastcc void @shuffle_48_r([3072 x float]* @buffer1_1_48_8x8, [6144 x float]* @downsampleunit1_outp) nounwind
  br label %.loopexit717

.loopexit717.loopexit:                            ; preds = %.preheader594
  br label %.loopexit717

.loopexit717:                                     ; preds = %.loopexit717.loopexit, %68
  %co66 = phi i6 [ 0, %68 ], [ %co_67, %.loopexit717.loopexit ]
  %co67_cast = zext i6 %co66 to i7
  %exitcond269 = icmp eq i6 %co66, -16
  %empty_371 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_67 = add i6 %co66, 1
  br i1 %exitcond269, label %.preheader592.preheader, label %.preheader594.preheader

.preheader592.preheader:                          ; preds = %.loopexit717
  br label %.preheader592

.preheader594.preheader:                          ; preds = %.loopexit717
  %tmp_279 = add i7 %co67_cast, 48
  %tmp_737 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_279, i3 0)
  %tmp_1134_cast = zext i10 %tmp_737 to i11
  %tmp_749 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co66, i3 0)
  %tmp_1136_cast = zext i9 %tmp_749 to i10
  br label %.preheader594

.preheader594.loopexit:                           ; preds = %.preheader593
  br label %.preheader594

.preheader594:                                    ; preds = %.preheader594.loopexit, %.preheader594.preheader
  %h47 = phi i4 [ 0, %.preheader594.preheader ], [ %h_48, %.preheader594.loopexit ]
  %exitcond268 = icmp eq i4 %h47, -8
  %empty_372 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_48 = add i4 %h47, 1
  br i1 %exitcond268, label %.loopexit717.loopexit, label %.preheader593.preheader

.preheader593.preheader:                          ; preds = %.preheader594
  %tmp_290_cast1 = zext i4 %h47 to i10
  %tmp_290_cast = zext i4 %h47 to i11
  %tmp_775 = add i11 %tmp_290_cast, %tmp_1134_cast
  %tmp_1157_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_775, i3 0)
  %tmp_778 = add i10 %tmp_290_cast1, %tmp_1136_cast
  %tmp_1160_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_778, i3 0)
  br label %.preheader593

.preheader593:                                    ; preds = %69, %.preheader593.preheader
  %w48 = phi i4 [ %w_49, %69 ], [ 0, %.preheader593.preheader ]
  %exitcond267 = icmp eq i4 %w48, -8
  %empty_373 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_49 = add i4 %w48, 1
  br i1 %exitcond267, label %.preheader594.loopexit, label %69

; <label>:69                                      ; preds = %.preheader593
  %tmp_294_cast1 = zext i4 %w48 to i13
  %tmp_294_cast = zext i4 %w48 to i14
  %tmp_779 = add i14 %tmp_1157_cast, %tmp_294_cast
  %tmp_1161_cast = zext i14 %tmp_779 to i64
  %downsampleunit1_outp = getelementptr [6144 x float]* @downsampleunit1_outp, i64 0, i64 %tmp_1161_cast
  %tmp_781 = add i13 %tmp_1160_cast, %tmp_294_cast1
  %tmp_1162_cast = zext i13 %tmp_781 to i64
  %buffer0_1_48_8x8_add = getelementptr [3072 x float]* @buffer0_1_48_8x8, i64 0, i64 %tmp_1162_cast
  %downsampleunit1_outp_1 = load float* %downsampleunit1_outp, align 4
  store float %downsampleunit1_outp_1, float* %buffer0_1_48_8x8_add, align 4
  br label %.preheader593

.preheader592.loopexit:                           ; preds = %.preheader591
  br label %.preheader592

.preheader592:                                    ; preds = %.preheader592.preheader, %.preheader592.loopexit
  %co68 = phi i5 [ %co_69, %.preheader592.loopexit ], [ 0, %.preheader592.preheader ]
  %co68_cast = zext i5 %co68 to i10
  %exitcond266 = icmp eq i5 %co68, -8
  %empty_374 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_69 = add i5 %co68, 1
  br i1 %exitcond266, label %.preheader589.preheader, label %.preheader591.preheader

.preheader589.preheader:                          ; preds = %.preheader592
  br label %.preheader589

.preheader591.preheader:                          ; preds = %.preheader592
  %tmp_177 = trunc i5 %co68 to i1
  %p_shl28 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_177, i5 0)
  %p_shl28_cast = zext i6 %p_shl28 to i7
  %p_shl29 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_177, i3 0)
  %p_shl29_cast = zext i4 %p_shl29 to i7
  %tmp_289 = sub i7 %p_shl28_cast, %p_shl29_cast
  %p_lshr_f3_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co68, i32 1, i32 4)
  %tmp_389_cast = zext i4 %p_lshr_f3_cast to i7
  br label %.preheader591

.preheader591.loopexit:                           ; preds = %.preheader590
  br label %.preheader591

.preheader591:                                    ; preds = %.preheader591.loopexit, %.preheader591.preheader
  %ci32 = phi i5 [ 0, %.preheader591.preheader ], [ %ci_33, %.preheader591.loopexit ]
  %ci32_cast = zext i5 %ci32 to i7
  %exitcond265 = icmp eq i5 %ci32, -8
  %empty_375 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_33 = add i5 %ci32, 1
  br i1 %exitcond265, label %.preheader592.loopexit, label %.preheader590.preheader

.preheader590.preheader:                          ; preds = %.preheader591
  %tmp_291_cast = zext i5 %ci32 to i17
  %tmp_292 = add i7 %tmp_289, %ci32_cast
  %tmp_293_cast = sext i7 %tmp_292 to i13
  br label %.preheader590

.preheader590:                                    ; preds = %70, %.preheader590.preheader
  %i46 = phi i3 [ %i_47, %70 ], [ 0, %.preheader590.preheader ]
  %exitcond264 = icmp eq i3 %i46, -4
  %empty_376 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_47 = add i3 %i46, 1
  br i1 %exitcond264, label %.preheader591.loopexit, label %70

; <label>:70                                      ; preds = %.preheader590
  %tmp_181 = trunc i3 %i46 to i2
  %p_shl36 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_181, i5 0)
  %p_shl36_cast = zext i7 %p_shl36 to i8
  %p_shl37 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_181, i3 0)
  %p_shl37_cast = zext i5 %p_shl37 to i8
  %tmp_300 = sub i8 %p_shl36_cast, %p_shl37_cast
  %tmp_409_cast = sext i8 %tmp_300 to i10
  %tmp11 = add i10 504, %tmp_409_cast
  %tmp_301 = add i10 %tmp11, %co68_cast
  %tmp_782 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_301, i5 0)
  %p_shl349_cast = zext i15 %tmp_782 to i16
  %tmp_793 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_301, i3 0)
  %p_shl350_cast = zext i13 %tmp_793 to i16
  %tmp_795 = sub i16 %p_shl349_cast, %p_shl350_cast
  %tmp_1169_cast = sext i16 %tmp_795 to i17
  %tmp_796 = add i17 %tmp_291_cast, %tmp_1169_cast
  %tmp_1170_cast = sext i17 %tmp_796 to i64
  %shuffle_conv_1x1_add_12 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1170_cast
  %shuffle_conv_1x1_loa_12 = load float* %shuffle_conv_1x1_add_12, align 4
  %p_shl38 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_181, i4 0)
  %p_shl38_cast = zext i6 %p_shl38 to i7
  %p_shl39 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_181, i2 0)
  %p_shl39_cast = zext i4 %p_shl39 to i7
  %tmp_302 = sub i7 %p_shl38_cast, %p_shl39_cast
  %tmp_303 = add i7 %tmp_302, %tmp_389_cast
  %tmp_797 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_303, i6 0)
  %tmp_799 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_303, i4 0)
  %p_shl348_cast = sext i11 %tmp_799 to i13
  %tmp_800 = sub i13 %tmp_797, %p_shl348_cast
  %tmp_801 = add i13 %tmp_293_cast, %tmp_800
  %tmp_1178_cast = sext i13 %tmp_801 to i64
  %weights_48_48_1x1_ad_3 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1178_cast
  store float %shuffle_conv_1x1_loa_12, float* %weights_48_48_1x1_ad_3, align 4
  br label %.preheader590

.preheader589.loopexit:                           ; preds = %.preheader588
  br label %.preheader589

.preheader589:                                    ; preds = %.preheader589.preheader, %.preheader589.loopexit
  %i44 = phi i5 [ %i_45, %.preheader589.loopexit ], [ 0, %.preheader589.preheader ]
  %i45_cast = zext i5 %i44 to i7
  %i45_cast1 = zext i5 %i44 to i10
  %exitcond263 = icmp eq i5 %i44, -8
  %empty_377 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_45 = add i5 %i44, 1
  br i1 %exitcond263, label %72, label %.preheader588.preheader

.preheader588.preheader:                          ; preds = %.preheader589
  br label %.preheader588

.preheader588:                                    ; preds = %.preheader588.preheader, %71
  %k6 = phi i2 [ %k_5, %71 ], [ 0, %.preheader588.preheader ]
  %exitcond262 = icmp eq i2 %k6, -2
  %empty_378 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_5 = add i2 %k6, 1
  br i1 %exitcond262, label %.preheader589.loopexit, label %71

; <label>:71                                      ; preds = %.preheader588
  %tmp_179 = trunc i2 %k6 to i1
  %p_shl34 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_179, i5 0)
  %p_shl34_cast = zext i6 %p_shl34 to i7
  %p_shl35 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_179, i3 0)
  %p_shl35_cast = zext i4 %p_shl35 to i7
  %tmp_295 = sub i7 %p_shl34_cast, %p_shl35_cast
  %tmp_398_cast = sext i7 %tmp_295 to i10
  %tmp12 = add i10 -424, %tmp_398_cast
  %tmp_296 = add i10 %i45_cast1, %tmp12
  %tmp_297 = zext i10 %tmp_296 to i64
  %bias_addr_22 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_297
  %bias_load_22 = load float* %bias_addr_22, align 4
  %tmp_298 = add i7 %tmp_295, %i45_cast
  %tmp_402_cast = sext i7 %tmp_298 to i32
  %tmp_299 = zext i32 %tmp_402_cast to i64
  %bias_48_addr_5 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_299
  store float %bias_load_22, float* %bias_48_addr_5, align 4
  br label %.preheader588

; <label>:72                                      ; preds = %.preheader589
  call fastcc void @subconv_1x1_8([3072 x float]* @buffer0_1_48_8x8, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [3072 x float]* @buffer1_1_48_8x8) nounwind
  br label %.loopexit716

.loopexit716.loopexit:                            ; preds = %.preheader587
  br label %.loopexit716

.loopexit716:                                     ; preds = %.loopexit716.loopexit, %72
  %co70 = phi i5 [ 0, %72 ], [ %co_71, %.loopexit716.loopexit ]
  %co71_cast = zext i5 %co70 to i7
  %co71_cast1 = zext i5 %co70 to i9
  %exitcond261 = icmp eq i5 %co70, -8
  %empty_379 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_71 = add i5 %co70, 1
  br i1 %exitcond261, label %.preheader584.preheader, label %.preheader587.preheader

.preheader587.preheader:                          ; preds = %.loopexit716
  br label %.preheader587

.preheader584.preheader:                          ; preds = %.loopexit716
  br label %.preheader584

.preheader587.loopexit:                           ; preds = %.preheader586
  br label %.preheader587

.preheader587:                                    ; preds = %.preheader587.preheader, %.preheader587.loopexit
  %w49 = phi i2 [ %w_50, %.preheader587.loopexit ], [ 0, %.preheader587.preheader ]
  %exitcond260 = icmp eq i2 %w49, -1
  %empty_380 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_50 = add i2 %w49, 1
  br i1 %exitcond260, label %.loopexit716.loopexit, label %.preheader586.preheader

.preheader586.preheader:                          ; preds = %.preheader587
  %tmp_304_cast1 = zext i2 %w49 to i36
  %tmp_304_cast = zext i2 %w49 to i13
  br label %.preheader586

.preheader586.loopexit:                           ; preds = %.preheader585
  br label %.preheader586

.preheader586:                                    ; preds = %.preheader586.loopexit, %.preheader586.preheader
  %h49 = phi i2 [ 0, %.preheader586.preheader ], [ %h_50, %.preheader586.loopexit ]
  %exitcond259 = icmp eq i2 %h49, -1
  %empty_381 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_50 = add i2 %h49, 1
  br i1 %exitcond259, label %.preheader587.loopexit, label %.preheader585.preheader

.preheader585.preheader:                          ; preds = %.preheader586
  %tmp_311_cast1 = zext i2 %h49 to i10
  %tmp_311_cast = zext i2 %h49 to i15
  br label %.preheader585

.preheader585:                                    ; preds = %73, %.preheader585.preheader
  %i52 = phi i2 [ %i_53, %73 ], [ 0, %.preheader585.preheader ]
  %exitcond258 = icmp eq i2 %i52, -2
  %empty_382 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_53 = add i2 %i52, 1
  br i1 %exitcond258, label %.preheader586.loopexit, label %73

; <label>:73                                      ; preds = %.preheader585
  %tmp_187 = trunc i2 %i52 to i1
  %p_shl46 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_187, i5 0)
  %p_shl46_cast = zext i6 %p_shl46 to i7
  %p_shl47 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_187, i3 0)
  %p_shl47_cast = zext i4 %p_shl47 to i7
  %tmp_315 = sub i7 %p_shl46_cast, %p_shl47_cast
  %tmp13 = add i7 -40, %tmp_315
  %tmp13_cast1 = sext i7 %tmp13 to i8
  %tmp13_cast = zext i8 %tmp13_cast1 to i9
  %tmp_316 = add i9 %co71_cast1, %tmp13_cast
  %tmp_317_cast = zext i9 %tmp_316 to i12
  %tmp_802 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_316, i2 0)
  %p_shl354_cast = zext i11 %tmp_802 to i12
  %tmp_808 = sub i12 %p_shl354_cast, %tmp_317_cast
  %tmp_1186_cast = sext i12 %tmp_808 to i13
  %tmp_811 = add i13 %tmp_1186_cast, %tmp_304_cast
  %tmp_1187_cast = sext i13 %tmp_811 to i15
  %p_shl353_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_811, i2 0)
  %tmp_814 = sub i15 %p_shl353_cast, %tmp_1187_cast
  %tmp_821 = add i15 %tmp_814, %tmp_311_cast
  %tmp_1190_cast = zext i15 %tmp_821 to i64
  %shuffle_conv_3x3_add_7 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1190_cast
  %shuffle_conv_3x3_loa_7 = load float* %shuffle_conv_3x3_add_7, align 4
  %tmp_318 = add i7 %tmp_315, %co71_cast
  %tmp_439_cast = sext i7 %tmp_318 to i32
  %tmp_319_cast1 = zext i32 %tmp_439_cast to i35
  %tmp_822 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_318, i2 0)
  %tmp_824 = sext i9 %tmp_822 to i34
  %p_shl352_cast = zext i34 %tmp_824 to i35
  %tmp_825 = sub i35 %p_shl352_cast, %tmp_319_cast1
  %tmp_1193_cast = sext i35 %tmp_825 to i36
  %tmp_828 = add i36 %tmp_1193_cast, %tmp_304_cast1
  %tmp_189 = trunc i36 %tmp_828 to i10
  %tmp_190 = trunc i36 %tmp_828 to i8
  %p_shl351_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_190, i2 0)
  %tmp_829 = sub i10 %p_shl351_cast, %tmp_189
  %tmp_831 = add i10 %tmp_829, %tmp_311_cast1
  %tmp_1197_cast = zext i10 %tmp_831 to i64
  %weights_48_1_3x3_add_2 = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1197_cast
  store float %shuffle_conv_3x3_loa_7, float* %weights_48_1_3x3_add_2, align 4
  br label %.preheader585

.preheader584.loopexit:                           ; preds = %.preheader583
  br label %.preheader584

.preheader584:                                    ; preds = %.preheader584.preheader, %.preheader584.loopexit
  %i48 = phi i5 [ %i_49, %.preheader584.loopexit ], [ 0, %.preheader584.preheader ]
  %i49_cast = zext i5 %i48 to i7
  %i49_cast1 = zext i5 %i48 to i10
  %exitcond257 = icmp eq i5 %i48, -8
  %empty_383 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_49 = add i5 %i48, 1
  br i1 %exitcond257, label %75, label %.preheader583.preheader

.preheader583.preheader:                          ; preds = %.preheader584
  br label %.preheader583

.preheader583:                                    ; preds = %.preheader583.preheader, %74
  %k7 = phi i2 [ %k_6, %74 ], [ 0, %.preheader583.preheader ]
  %exitcond256 = icmp eq i2 %k7, -2
  %empty_384 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_6 = add i2 %k7, 1
  br i1 %exitcond256, label %.preheader584.loopexit, label %74

; <label>:74                                      ; preds = %.preheader583
  %tmp_186 = trunc i2 %k7 to i1
  %p_shl40 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_186, i5 0)
  %p_shl40_cast = zext i6 %p_shl40 to i7
  %p_shl41 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_186, i3 0)
  %p_shl41_cast = zext i4 %p_shl41 to i7
  %tmp_306 = sub i7 %p_shl40_cast, %p_shl41_cast
  %tmp_416_cast = sext i7 %tmp_306 to i10
  %tmp14 = add i10 -376, %tmp_416_cast
  %tmp_307 = add i10 %i49_cast1, %tmp14
  %tmp_308 = zext i10 %tmp_307 to i64
  %bias_addr_23 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_308
  %bias_load_23 = load float* %bias_addr_23, align 4
  %tmp_309 = add i7 %tmp_306, %i49_cast
  %tmp_420_cast = sext i7 %tmp_309 to i32
  %tmp_310 = zext i32 %tmp_420_cast to i64
  %bias_48_addr_6 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_310
  store float %bias_load_23, float* %bias_48_addr_6, align 4
  br label %.preheader583

; <label>:75                                      ; preds = %.preheader584
  call fastcc void @subconv_3x3_8_no_rel([3072 x float]* @buffer1_1_48_8x8, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [3072 x float]* @buffer0_1_48_8x8) nounwind
  br label %.loopexit715

.loopexit715.loopexit:                            ; preds = %.preheader582
  br label %.loopexit715

.loopexit715:                                     ; preds = %.loopexit715.loopexit, %75
  %co72 = phi i5 [ 0, %75 ], [ %co_73, %.loopexit715.loopexit ]
  %co73_cast = zext i5 %co72 to i10
  %exitcond255 = icmp eq i5 %co72, -8
  %empty_385 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_73 = add i5 %co72, 1
  br i1 %exitcond255, label %.preheader580.preheader, label %.preheader582.preheader

.preheader580.preheader:                          ; preds = %.loopexit715
  br label %.preheader580

.preheader582.preheader:                          ; preds = %.loopexit715
  %tmp_182 = trunc i5 %co72 to i1
  %p_shl42 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_182, i5 0)
  %p_shl42_cast = zext i6 %p_shl42 to i7
  %p_shl43 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_182, i3 0)
  %p_shl43_cast = zext i4 %p_shl43 to i7
  %tmp_305 = sub i7 %p_shl42_cast, %p_shl43_cast
  %p_lshr_f4_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co72, i32 1, i32 4)
  %tmp_424_cast = zext i4 %p_lshr_f4_cast to i7
  br label %.preheader582

.preheader582.loopexit:                           ; preds = %.preheader581
  br label %.preheader582

.preheader582:                                    ; preds = %.preheader582.loopexit, %.preheader582.preheader
  %ci34 = phi i5 [ 0, %.preheader582.preheader ], [ %ci_35, %.preheader582.loopexit ]
  %ci34_cast = zext i5 %ci34 to i7
  %exitcond254 = icmp eq i5 %ci34, -8
  %empty_386 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_35 = add i5 %ci34, 1
  br i1 %exitcond254, label %.loopexit715.loopexit, label %.preheader581.preheader

.preheader581.preheader:                          ; preds = %.preheader582
  %tmp_312_cast1 = zext i5 %ci34 to i17
  %tmp_313 = add i7 %tmp_305, %ci34_cast
  %tmp_314_cast = sext i7 %tmp_313 to i13
  br label %.preheader581

.preheader581:                                    ; preds = %76, %.preheader581.preheader
  %i54 = phi i3 [ %i_55, %76 ], [ 0, %.preheader581.preheader ]
  %exitcond253 = icmp eq i3 %i54, -4
  %empty_387 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_55 = add i3 %i54, 1
  br i1 %exitcond253, label %.preheader582.loopexit, label %76

; <label>:76                                      ; preds = %.preheader581
  %tmp_196 = trunc i3 %i54 to i2
  %p_shl48 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_196, i5 0)
  %p_shl48_cast = zext i7 %p_shl48 to i8
  %p_shl49 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_196, i3 0)
  %p_shl49_cast = zext i5 %p_shl49 to i8
  %tmp_325 = sub i8 %p_shl48_cast, %p_shl49_cast
  %tmp_442_cast = sext i8 %tmp_325 to i10
  %tmp15 = add i10 -424, %tmp_442_cast
  %tmp_326 = add i10 %tmp15, %co73_cast
  %tmp_844 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_326, i5 0)
  %p_shl357_cast = zext i15 %tmp_844 to i16
  %tmp_845 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_326, i3 0)
  %p_shl358_cast = zext i13 %tmp_845 to i16
  %tmp_846 = sub i16 %p_shl357_cast, %p_shl358_cast
  %tmp_1206_cast = sext i16 %tmp_846 to i17
  %tmp_847 = add i17 %tmp_312_cast1, %tmp_1206_cast
  %tmp_1207_cast = sext i17 %tmp_847 to i64
  %shuffle_conv_1x1_add_13 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1207_cast
  %shuffle_conv_1x1_loa_13 = load float* %shuffle_conv_1x1_add_13, align 4
  %p_shl50 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_196, i4 0)
  %p_shl50_cast = zext i6 %p_shl50 to i7
  %p_shl51 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_196, i2 0)
  %p_shl51_cast = zext i4 %p_shl51 to i7
  %tmp_327 = sub i7 %p_shl50_cast, %p_shl51_cast
  %tmp_328 = add i7 %tmp_327, %tmp_424_cast
  %tmp_849 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_328, i6 0)
  %tmp_850 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_328, i4 0)
  %p_shl356_cast = sext i11 %tmp_850 to i13
  %tmp_853 = sub i13 %tmp_849, %p_shl356_cast
  %tmp_856 = add i13 %tmp_314_cast, %tmp_853
  %tmp_1215_cast = sext i13 %tmp_856 to i64
  %weights_48_48_1x1_ad_4 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1215_cast
  store float %shuffle_conv_1x1_loa_13, float* %weights_48_48_1x1_ad_4, align 4
  br label %.preheader581

.preheader580.loopexit:                           ; preds = %.preheader579
  br label %.preheader580

.preheader580:                                    ; preds = %.preheader580.preheader, %.preheader580.loopexit
  %i50 = phi i5 [ %i_51, %.preheader580.loopexit ], [ 0, %.preheader580.preheader ]
  %i51_cast = zext i5 %i50 to i7
  %i51_cast1 = zext i5 %i50 to i10
  %exitcond252 = icmp eq i5 %i50, -8
  %empty_388 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_51 = add i5 %i50, 1
  br i1 %exitcond252, label %78, label %.preheader579.preheader

.preheader579.preheader:                          ; preds = %.preheader580
  br label %.preheader579

.preheader579:                                    ; preds = %.preheader579.preheader, %77
  %k8 = phi i2 [ %k_7, %77 ], [ 0, %.preheader579.preheader ]
  %exitcond251 = icmp eq i2 %k8, -2
  %empty_389 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_7 = add i2 %k8, 1
  br i1 %exitcond251, label %.preheader580.loopexit, label %77

; <label>:77                                      ; preds = %.preheader579
  %tmp_194 = trunc i2 %k8 to i1
  %p_shl44 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_194, i5 0)
  %p_shl44_cast = zext i6 %p_shl44 to i7
  %p_shl45 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_194, i3 0)
  %p_shl45_cast = zext i4 %p_shl45 to i7
  %tmp_320 = sub i7 %p_shl44_cast, %p_shl45_cast
  %tmp_426_cast = sext i7 %tmp_320 to i10
  %tmp16 = add i10 -328, %tmp_426_cast
  %tmp_321 = add i10 %i51_cast1, %tmp16
  %tmp_322 = zext i10 %tmp_321 to i64
  %bias_addr_24 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_322
  %bias_load_24 = load float* %bias_addr_24, align 4
  %tmp_323 = add i7 %tmp_320, %i51_cast
  %tmp_430_cast = sext i7 %tmp_323 to i32
  %tmp_324 = zext i32 %tmp_430_cast to i64
  %bias_48_addr_7 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_324
  store float %bias_load_24, float* %bias_48_addr_7, align 4
  br label %.preheader579

; <label>:78                                      ; preds = %.preheader580
  call fastcc void @subconv_1x1_8([3072 x float]* @buffer0_1_48_8x8, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [3072 x float]* @buffer1_1_48_8x8) nounwind
  br label %.loopexit714

.loopexit714.loopexit:                            ; preds = %.preheader578
  br label %.loopexit714

.loopexit714:                                     ; preds = %.loopexit714.loopexit, %78
  %co74 = phi i6 [ 0, %78 ], [ %co_75, %.loopexit714.loopexit ]
  %exitcond250 = icmp eq i6 %co74, -16
  %empty_390 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_75 = add i6 %co74, 1
  br i1 %exitcond250, label %80, label %.preheader578.preheader

.preheader578.preheader:                          ; preds = %.loopexit714
  %tmp_842 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co74, i3 0)
  %tmp_1199_cast = zext i9 %tmp_842 to i10
  br label %.preheader578

.preheader578.loopexit:                           ; preds = %.preheader577
  br label %.preheader578

.preheader578:                                    ; preds = %.preheader578.loopexit, %.preheader578.preheader
  %h51 = phi i4 [ 0, %.preheader578.preheader ], [ %h_52, %.preheader578.loopexit ]
  %exitcond249 = icmp eq i4 %h51, -8
  %empty_391 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_52 = add i4 %h51, 1
  br i1 %exitcond249, label %.loopexit714.loopexit, label %.preheader577.preheader

.preheader577.preheader:                          ; preds = %.preheader578
  %tmp_330_cast1 = zext i4 %h51 to i10
  %tmp_864 = add i10 %tmp_1199_cast, %tmp_330_cast1
  %tmp_200 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_864, i3 0)
  %tmp_1222_cast = zext i13 %tmp_200 to i14
  br label %.preheader577

.preheader577:                                    ; preds = %79, %.preheader577.preheader
  %w51 = phi i4 [ %w_52, %79 ], [ 0, %.preheader577.preheader ]
  %exitcond248 = icmp eq i4 %w51, -8
  %empty_392 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_52 = add i4 %w51, 1
  br i1 %exitcond248, label %.preheader578.loopexit, label %79

; <label>:79                                      ; preds = %.preheader577
  %tmp_333_cast = zext i4 %w51 to i14
  %tmp_874 = add i14 %tmp_1222_cast, %tmp_333_cast
  %tmp_1231_cast = zext i14 %tmp_874 to i64
  %downsampleunit1_outp_2 = getelementptr [6144 x float]* @downsampleunit1_outp, i64 0, i64 %tmp_1231_cast
  %buffer0_1_48_8x8_add_1 = getelementptr [3072 x float]* @buffer0_1_48_8x8, i64 0, i64 %tmp_1231_cast
  %downsampleunit1_outp_3 = load float* %downsampleunit1_outp_2, align 4
  store float %downsampleunit1_outp_3, float* %buffer0_1_48_8x8_add_1, align 4
  br label %.preheader577

; <label>:80                                      ; preds = %.loopexit714
  call fastcc void @shuffle_48([3072 x float]* @buffer0_1_48_8x8, [6144 x float]* @shuffleunit1_0_outpu) nounwind
  br label %.loopexit713

.loopexit713.loopexit:                            ; preds = %.preheader576
  br label %.loopexit713

.loopexit713:                                     ; preds = %.loopexit713.loopexit, %80
  %co76 = phi i6 [ 0, %80 ], [ %co_77, %.loopexit713.loopexit ]
  %co76_cast = zext i6 %co76 to i7
  %exitcond247 = icmp eq i6 %co76, -16
  %empty_393 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_77 = add i6 %co76, 1
  br i1 %exitcond247, label %.preheader574.preheader, label %.preheader576.preheader

.preheader574.preheader:                          ; preds = %.loopexit713
  br label %.preheader574

.preheader576.preheader:                          ; preds = %.loopexit713
  %tmp_329 = add i7 %co76_cast, 48
  %tmp_858 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_329, i3 0)
  %tmp_1217_cast = zext i10 %tmp_858 to i11
  %tmp_859 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co76, i3 0)
  %tmp_1219_cast = zext i9 %tmp_859 to i10
  br label %.preheader576

.preheader576.loopexit:                           ; preds = %.preheader575
  br label %.preheader576

.preheader576:                                    ; preds = %.preheader576.loopexit, %.preheader576.preheader
  %h53 = phi i4 [ 0, %.preheader576.preheader ], [ %h_54, %.preheader576.loopexit ]
  %exitcond246 = icmp eq i4 %h53, -8
  %empty_394 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_54 = add i4 %h53, 1
  br i1 %exitcond246, label %.loopexit713.loopexit, label %.preheader575.preheader

.preheader575.preheader:                          ; preds = %.preheader576
  %tmp_332_cast1 = zext i4 %h53 to i11
  %tmp_332_cast = zext i4 %h53 to i10
  %tmp_871 = add i10 %tmp_332_cast, %tmp_1219_cast
  %tmp_1227_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_871, i3 0)
  %tmp_872 = add i11 %tmp_332_cast1, %tmp_1217_cast
  %tmp_1230_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_872, i3 0)
  br label %.preheader575

.preheader575:                                    ; preds = %81, %.preheader575.preheader
  %w53 = phi i4 [ %w_54, %81 ], [ 0, %.preheader575.preheader ]
  %exitcond245 = icmp eq i4 %w53, -8
  %empty_395 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_54 = add i4 %w53, 1
  br i1 %exitcond245, label %.preheader576.loopexit, label %81

; <label>:81                                      ; preds = %.preheader575
  %tmp_337_cast1 = zext i4 %w53 to i14
  %tmp_337_cast = zext i4 %w53 to i13
  %tmp_875 = add i13 %tmp_1227_cast, %tmp_337_cast
  %tmp_1232_cast = zext i13 %tmp_875 to i64
  %buffer0_1_48_8x8_add_2 = getelementptr [3072 x float]* @buffer0_1_48_8x8, i64 0, i64 %tmp_1232_cast
  %tmp_878 = add i14 %tmp_1230_cast, %tmp_337_cast1
  %tmp_1233_cast = zext i14 %tmp_878 to i64
  %shuffleunit1_0_outpu = getelementptr [6144 x float]* @shuffleunit1_0_outpu, i64 0, i64 %tmp_1233_cast
  %shuffleunit1_0_outpu_1 = load float* %shuffleunit1_0_outpu, align 4
  store float %shuffleunit1_0_outpu_1, float* %buffer0_1_48_8x8_add_2, align 4
  br label %.preheader575

.preheader574.loopexit:                           ; preds = %.preheader573
  br label %.preheader574

.preheader574:                                    ; preds = %.preheader574.preheader, %.preheader574.loopexit
  %co78 = phi i5 [ %co_79, %.preheader574.loopexit ], [ 0, %.preheader574.preheader ]
  %co78_cast = zext i5 %co78 to i10
  %exitcond244 = icmp eq i5 %co78, -8
  %empty_396 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_79 = add i5 %co78, 1
  br i1 %exitcond244, label %.preheader571.preheader, label %.preheader573.preheader

.preheader571.preheader:                          ; preds = %.preheader574
  br label %.preheader571

.preheader573.preheader:                          ; preds = %.preheader574
  %tmp_202 = trunc i5 %co78 to i1
  %p_shl52 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_202, i5 0)
  %p_shl52_cast = zext i6 %p_shl52 to i7
  %p_shl53 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_202, i3 0)
  %p_shl53_cast = zext i4 %p_shl53 to i7
  %tmp_331 = sub i7 %p_shl52_cast, %p_shl53_cast
  %p_lshr_f5_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co78, i32 1, i32 4)
  %tmp_454_cast = zext i4 %p_lshr_f5_cast to i7
  br label %.preheader573

.preheader573.loopexit:                           ; preds = %.preheader572
  br label %.preheader573

.preheader573:                                    ; preds = %.preheader573.loopexit, %.preheader573.preheader
  %ci36 = phi i5 [ 0, %.preheader573.preheader ], [ %ci_37, %.preheader573.loopexit ]
  %ci36_cast = zext i5 %ci36 to i7
  %exitcond243 = icmp eq i5 %ci36, -8
  %empty_397 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_37 = add i5 %ci36, 1
  br i1 %exitcond243, label %.preheader574.loopexit, label %.preheader572.preheader

.preheader572.preheader:                          ; preds = %.preheader573
  %tmp_334_cast1 = zext i5 %ci36 to i17
  %tmp_335 = add i7 %tmp_331, %ci36_cast
  %tmp_336_cast = sext i7 %tmp_335 to i13
  br label %.preheader572

.preheader572:                                    ; preds = %82, %.preheader572.preheader
  %i58 = phi i3 [ %i_59, %82 ], [ 0, %.preheader572.preheader ]
  %exitcond242 = icmp eq i3 %i58, -4
  %empty_398 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_59 = add i3 %i58, 1
  br i1 %exitcond242, label %.preheader573.loopexit, label %82

; <label>:82                                      ; preds = %.preheader572
  %tmp_205 = trunc i3 %i58 to i2
  %p_shl56 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_205, i5 0)
  %p_shl56_cast = zext i7 %p_shl56 to i8
  %p_shl57 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_205, i3 0)
  %p_shl57_cast = zext i5 %p_shl57 to i8
  %tmp_343 = sub i8 %p_shl56_cast, %p_shl57_cast
  %tmp_469_cast = sext i8 %tmp_343 to i10
  %tmp17 = add i10 -328, %tmp_469_cast
  %tmp_344 = add i10 %tmp17, %co78_cast
  %tmp_879 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_344, i5 0)
  %p_shl361_cast = zext i15 %tmp_879 to i16
  %tmp_881 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_344, i3 0)
  %p_shl362_cast = zext i13 %tmp_881 to i16
  %tmp_891 = sub i16 %p_shl361_cast, %p_shl362_cast
  %tmp_1240_cast = sext i16 %tmp_891 to i17
  %tmp_892 = add i17 %tmp_334_cast1, %tmp_1240_cast
  %tmp_1241_cast = sext i17 %tmp_892 to i64
  %shuffle_conv_1x1_add_14 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1241_cast
  %shuffle_conv_1x1_loa_14 = load float* %shuffle_conv_1x1_add_14, align 4
  %p_shl58 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_205, i4 0)
  %p_shl58_cast = zext i6 %p_shl58 to i7
  %p_shl59 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_205, i2 0)
  %p_shl59_cast = zext i4 %p_shl59 to i7
  %tmp_345 = sub i7 %p_shl58_cast, %p_shl59_cast
  %tmp_346 = add i7 %tmp_345, %tmp_454_cast
  %tmp_893 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_346, i6 0)
  %tmp_894 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_346, i4 0)
  %p_shl360_cast = sext i11 %tmp_894 to i13
  %tmp_895 = sub i13 %tmp_893, %p_shl360_cast
  %tmp_896 = add i13 %tmp_336_cast, %tmp_895
  %tmp_1249_cast = sext i13 %tmp_896 to i64
  %weights_48_48_1x1_ad_5 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1249_cast
  store float %shuffle_conv_1x1_loa_14, float* %weights_48_48_1x1_ad_5, align 4
  br label %.preheader572

.preheader571.loopexit:                           ; preds = %.preheader570
  br label %.preheader571

.preheader571:                                    ; preds = %.preheader571.preheader, %.preheader571.loopexit
  %i56 = phi i5 [ %i_57, %.preheader571.loopexit ], [ 0, %.preheader571.preheader ]
  %i57_cast = zext i5 %i56 to i7
  %i57_cast1 = zext i5 %i56 to i10
  %exitcond241 = icmp eq i5 %i56, -8
  %empty_399 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_57 = add i5 %i56, 1
  br i1 %exitcond241, label %84, label %.preheader570.preheader

.preheader570.preheader:                          ; preds = %.preheader571
  br label %.preheader570

.preheader570:                                    ; preds = %.preheader570.preheader, %83
  %k9 = phi i2 [ %k_8, %83 ], [ 0, %.preheader570.preheader ]
  %exitcond240 = icmp eq i2 %k9, -2
  %empty_400 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_8 = add i2 %k9, 1
  br i1 %exitcond240, label %.preheader571.loopexit, label %83

; <label>:83                                      ; preds = %.preheader570
  %tmp_204 = trunc i2 %k9 to i1
  %p_shl54 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_204, i5 0)
  %p_shl54_cast = zext i6 %p_shl54 to i7
  %p_shl55 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_204, i3 0)
  %p_shl55_cast = zext i4 %p_shl55 to i7
  %tmp_338 = sub i7 %p_shl54_cast, %p_shl55_cast
  %tmp_458_cast = sext i7 %tmp_338 to i10
  %tmp18 = add i10 -280, %tmp_458_cast
  %tmp_339 = add i10 %i57_cast1, %tmp18
  %tmp_340 = zext i10 %tmp_339 to i64
  %bias_addr_25 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_340
  %bias_load_25 = load float* %bias_addr_25, align 4
  %tmp_341 = add i7 %tmp_338, %i57_cast
  %tmp_462_cast = sext i7 %tmp_341 to i32
  %tmp_342 = zext i32 %tmp_462_cast to i64
  %bias_48_addr_8 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_342
  store float %bias_load_25, float* %bias_48_addr_8, align 4
  br label %.preheader570

; <label>:84                                      ; preds = %.preheader571
  call fastcc void @subconv_1x1_8([3072 x float]* @buffer0_1_48_8x8, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [3072 x float]* @buffer1_1_48_8x8) nounwind
  br label %.loopexit712

.loopexit712.loopexit:                            ; preds = %.preheader569
  br label %.loopexit712

.loopexit712:                                     ; preds = %.loopexit712.loopexit, %84
  %co80 = phi i5 [ 0, %84 ], [ %co_81, %.loopexit712.loopexit ]
  %co81_cast = zext i5 %co80 to i7
  %co81_cast1 = zext i5 %co80 to i9
  %exitcond239 = icmp eq i5 %co80, -8
  %empty_401 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_81 = add i5 %co80, 1
  br i1 %exitcond239, label %.preheader566.preheader, label %.preheader569.preheader

.preheader569.preheader:                          ; preds = %.loopexit712
  br label %.preheader569

.preheader566.preheader:                          ; preds = %.loopexit712
  br label %.preheader566

.preheader569.loopexit:                           ; preds = %.preheader568
  br label %.preheader569

.preheader569:                                    ; preds = %.preheader569.preheader, %.preheader569.loopexit
  %w55 = phi i2 [ %w_56, %.preheader569.loopexit ], [ 0, %.preheader569.preheader ]
  %exitcond238 = icmp eq i2 %w55, -1
  %empty_402 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_56 = add i2 %w55, 1
  br i1 %exitcond238, label %.loopexit712.loopexit, label %.preheader568.preheader

.preheader568.preheader:                          ; preds = %.preheader569
  %tmp_347_cast1 = zext i2 %w55 to i36
  %tmp_347_cast = zext i2 %w55 to i13
  br label %.preheader568

.preheader568.loopexit:                           ; preds = %.preheader567
  br label %.preheader568

.preheader568:                                    ; preds = %.preheader568.loopexit, %.preheader568.preheader
  %h55 = phi i2 [ 0, %.preheader568.preheader ], [ %h_56, %.preheader568.loopexit ]
  %exitcond237 = icmp eq i2 %h55, -1
  %empty_403 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_56 = add i2 %h55, 1
  br i1 %exitcond237, label %.preheader569.loopexit, label %.preheader567.preheader

.preheader567.preheader:                          ; preds = %.preheader568
  %tmp_354_cast1 = zext i2 %h55 to i10
  %tmp_354_cast = zext i2 %h55 to i15
  br label %.preheader567

.preheader567:                                    ; preds = %85, %.preheader567.preheader
  %i64 = phi i2 [ %i_65, %85 ], [ 0, %.preheader567.preheader ]
  %exitcond236 = icmp eq i2 %i64, -2
  %empty_404 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_65 = add i2 %i64, 1
  br i1 %exitcond236, label %.preheader568.loopexit, label %85

; <label>:85                                      ; preds = %.preheader567
  %tmp_898 = trunc i2 %i64 to i1
  %p_shl66 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_898, i5 0)
  %p_shl66_cast = zext i6 %p_shl66 to i7
  %p_shl67 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_898, i3 0)
  %p_shl67_cast = zext i4 %p_shl67 to i7
  %tmp_358 = sub i7 %p_shl66_cast, %p_shl67_cast
  %tmp_495_cast = sext i7 %tmp_358 to i9
  %tmp19 = add i9 -248, %tmp_495_cast
  %tmp_359 = add i9 %co81_cast1, %tmp19
  %tmp_360_cast = zext i9 %tmp_359 to i12
  %tmp_899 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_359, i2 0)
  %p_shl366_cast = zext i11 %tmp_899 to i12
  %tmp_900 = sub i12 %p_shl366_cast, %tmp_360_cast
  %tmp_1257_cast = sext i12 %tmp_900 to i13
  %tmp_901 = add i13 %tmp_1257_cast, %tmp_347_cast
  %tmp_1258_cast = sext i13 %tmp_901 to i15
  %p_shl365_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_901, i2 0)
  %tmp_902 = sub i15 %p_shl365_cast, %tmp_1258_cast
  %tmp_903 = add i15 %tmp_902, %tmp_354_cast
  %tmp_1261_cast = zext i15 %tmp_903 to i64
  %shuffle_conv_3x3_add_8 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1261_cast
  %shuffle_conv_3x3_loa_8 = load float* %shuffle_conv_3x3_add_8, align 4
  %tmp_361 = add i7 %tmp_358, %co81_cast
  %tmp_499_cast = sext i7 %tmp_361 to i32
  %tmp_362_cast = zext i32 %tmp_499_cast to i35
  %tmp_904 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_361, i2 0)
  %tmp_905 = sext i9 %tmp_904 to i34
  %p_shl364_cast = zext i34 %tmp_905 to i35
  %tmp_906 = sub i35 %p_shl364_cast, %tmp_362_cast
  %tmp_1264_cast = sext i35 %tmp_906 to i36
  %tmp_907 = add i36 %tmp_1264_cast, %tmp_347_cast1
  %tmp_908 = trunc i36 %tmp_907 to i10
  %tmp_909 = trunc i36 %tmp_907 to i8
  %p_shl363_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_909, i2 0)
  %tmp_910 = sub i10 %p_shl363_cast, %tmp_908
  %tmp_911 = add i10 %tmp_910, %tmp_354_cast1
  %tmp_1268_cast = zext i10 %tmp_911 to i64
  %weights_48_1_3x3_add_3 = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1268_cast
  store float %shuffle_conv_3x3_loa_8, float* %weights_48_1_3x3_add_3, align 4
  br label %.preheader567

.preheader566.loopexit:                           ; preds = %.preheader565
  br label %.preheader566

.preheader566:                                    ; preds = %.preheader566.preheader, %.preheader566.loopexit
  %i60 = phi i5 [ %i_61, %.preheader566.loopexit ], [ 0, %.preheader566.preheader ]
  %i61_cast = zext i5 %i60 to i7
  %i61_cast544_cast = zext i5 %i60 to i9
  %exitcond235 = icmp eq i5 %i60, -8
  %empty_405 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_61 = add i5 %i60, 1
  br i1 %exitcond235, label %87, label %.preheader565.preheader

.preheader565.preheader:                          ; preds = %.preheader566
  br label %.preheader565

.preheader565:                                    ; preds = %.preheader565.preheader, %86
  %k10 = phi i2 [ %k_9, %86 ], [ 0, %.preheader565.preheader ]
  %exitcond234 = icmp eq i2 %k10, -2
  %empty_406 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_9 = add i2 %k10, 1
  br i1 %exitcond234, label %.preheader566.loopexit, label %86

; <label>:86                                      ; preds = %.preheader565
  %tmp_897 = trunc i2 %k10 to i1
  %p_shl60 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_897, i5 0)
  %p_shl60_cast = zext i6 %p_shl60 to i7
  %p_shl61 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_897, i3 0)
  %p_shl61_cast = zext i4 %p_shl61 to i7
  %tmp_349 = sub i7 %p_shl60_cast, %p_shl61_cast
  %tmp_476_cast_cast = sext i7 %tmp_349 to i9
  %tmp20 = add i9 -232, %tmp_476_cast_cast
  %tmp_350 = add i9 %i61_cast544_cast, %tmp20
  %tmp_478_cast = sext i9 %tmp_350 to i10
  %tmp_351 = zext i10 %tmp_478_cast to i64
  %bias_addr_26 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_351
  %bias_load_26 = load float* %bias_addr_26, align 4
  %tmp_352 = add i7 %tmp_349, %i61_cast
  %tmp_480_cast = sext i7 %tmp_352 to i32
  %tmp_353 = zext i32 %tmp_480_cast to i64
  %bias_48_addr_9 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_353
  store float %bias_load_26, float* %bias_48_addr_9, align 4
  br label %.preheader565

; <label>:87                                      ; preds = %.preheader566
  call fastcc void @subconv_3x3_8_no_rel([3072 x float]* @buffer1_1_48_8x8, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [3072 x float]* @buffer0_1_48_8x8) nounwind
  br label %.loopexit711

.loopexit711.loopexit:                            ; preds = %.preheader564
  br label %.loopexit711

.loopexit711:                                     ; preds = %.loopexit711.loopexit, %87
  %co82 = phi i5 [ 0, %87 ], [ %co_83, %.loopexit711.loopexit ]
  %co83_cast = zext i5 %co82 to i10
  %exitcond233 = icmp eq i5 %co82, -8
  %empty_407 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_83 = add i5 %co82, 1
  br i1 %exitcond233, label %.preheader562.preheader, label %.preheader564.preheader

.preheader562.preheader:                          ; preds = %.loopexit711
  br label %.preheader562

.preheader564.preheader:                          ; preds = %.loopexit711
  %tmp_209 = trunc i5 %co82 to i1
  %p_shl62 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_209, i5 0)
  %p_shl62_cast = zext i6 %p_shl62 to i7
  %p_shl63 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_209, i3 0)
  %p_shl63_cast = zext i4 %p_shl63 to i7
  %tmp_348 = sub i7 %p_shl62_cast, %p_shl63_cast
  %p_lshr_f6_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co82, i32 1, i32 4)
  %tmp_484_cast = zext i4 %p_lshr_f6_cast to i7
  br label %.preheader564

.preheader564.loopexit:                           ; preds = %.preheader563
  br label %.preheader564

.preheader564:                                    ; preds = %.preheader564.loopexit, %.preheader564.preheader
  %ci38 = phi i5 [ 0, %.preheader564.preheader ], [ %ci_39, %.preheader564.loopexit ]
  %ci38_cast = zext i5 %ci38 to i7
  %exitcond232 = icmp eq i5 %ci38, -8
  %empty_408 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_39 = add i5 %ci38, 1
  br i1 %exitcond232, label %.loopexit711.loopexit, label %.preheader563.preheader

.preheader563.preheader:                          ; preds = %.preheader564
  %tmp_355_cast = zext i5 %ci38 to i17
  %tmp_356 = add i7 %tmp_348, %ci38_cast
  %tmp_357_cast = sext i7 %tmp_356 to i13
  br label %.preheader563

.preheader563:                                    ; preds = %88, %.preheader563.preheader
  %i66 = phi i3 [ %i_67, %88 ], [ 0, %.preheader563.preheader ]
  %exitcond231 = icmp eq i3 %i66, -4
  %empty_409 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_67 = add i3 %i66, 1
  br i1 %exitcond231, label %.preheader564.loopexit, label %88

; <label>:88                                      ; preds = %.preheader563
  %tmp_914 = trunc i3 %i66 to i2
  %p_shl68 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_914, i5 0)
  %p_shl68_cast = zext i7 %p_shl68 to i8
  %p_shl69 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_914, i3 0)
  %p_shl69_cast = zext i5 %p_shl69 to i8
  %tmp_368 = sub i8 %p_shl68_cast, %p_shl69_cast
  %tmp_502_cast = sext i8 %tmp_368 to i10
  %tmp21 = add i10 -232, %tmp_502_cast
  %tmp_369 = add i10 %tmp21, %co83_cast
  %tmp_915 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_369, i5 0)
  %p_shl369_cast = zext i15 %tmp_915 to i16
  %tmp_916 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_369, i3 0)
  %p_shl370_cast = zext i13 %tmp_916 to i16
  %tmp_917 = sub i16 %p_shl369_cast, %p_shl370_cast
  %tmp_1277_cast = sext i16 %tmp_917 to i17
  %tmp_918 = add i17 %tmp_355_cast, %tmp_1277_cast
  %tmp_1278_cast = sext i17 %tmp_918 to i64
  %shuffle_conv_1x1_add_15 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1278_cast
  %shuffle_conv_1x1_loa_15 = load float* %shuffle_conv_1x1_add_15, align 4
  %p_shl70 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_914, i4 0)
  %p_shl70_cast = zext i6 %p_shl70 to i7
  %p_shl71 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_914, i2 0)
  %p_shl71_cast = zext i4 %p_shl71 to i7
  %tmp_370 = sub i7 %p_shl70_cast, %p_shl71_cast
  %tmp_371 = add i7 %tmp_370, %tmp_484_cast
  %tmp_919 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_371, i6 0)
  %tmp_920 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_371, i4 0)
  %p_shl368_cast = sext i11 %tmp_920 to i13
  %tmp_921 = sub i13 %tmp_919, %p_shl368_cast
  %tmp_922 = add i13 %tmp_357_cast, %tmp_921
  %tmp_1286_cast = sext i13 %tmp_922 to i64
  %weights_48_48_1x1_ad_6 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1286_cast
  store float %shuffle_conv_1x1_loa_15, float* %weights_48_48_1x1_ad_6, align 4
  br label %.preheader563

.preheader562.loopexit:                           ; preds = %.preheader561
  br label %.preheader562

.preheader562:                                    ; preds = %.preheader562.preheader, %.preheader562.loopexit
  %i62 = phi i5 [ %i_63, %.preheader562.loopexit ], [ 0, %.preheader562.preheader ]
  %i63_cast = zext i5 %i62 to i7
  %i63_cast531_cast = zext i5 %i62 to i9
  %exitcond230 = icmp eq i5 %i62, -8
  %empty_410 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_63 = add i5 %i62, 1
  br i1 %exitcond230, label %90, label %.preheader561.preheader

.preheader561.preheader:                          ; preds = %.preheader562
  br label %.preheader561

.preheader561:                                    ; preds = %.preheader561.preheader, %89
  %k11 = phi i2 [ %k_12, %89 ], [ 0, %.preheader561.preheader ]
  %exitcond229 = icmp eq i2 %k11, -2
  %empty_411 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_12 = add i2 %k11, 1
  br i1 %exitcond229, label %.preheader562.loopexit, label %89

; <label>:89                                      ; preds = %.preheader561
  %tmp_913 = trunc i2 %k11 to i1
  %p_shl64 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_913, i5 0)
  %p_shl64_cast = zext i6 %p_shl64 to i7
  %p_shl65 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_913, i3 0)
  %p_shl65_cast = zext i4 %p_shl65 to i7
  %tmp_363 = sub i7 %p_shl64_cast, %p_shl65_cast
  %tmp_486_cast_cast = sext i7 %tmp_363 to i9
  %tmp22 = add i9 -184, %tmp_486_cast_cast
  %tmp_364 = add i9 %i63_cast531_cast, %tmp22
  %tmp_488_cast = sext i9 %tmp_364 to i10
  %tmp_365 = zext i10 %tmp_488_cast to i64
  %bias_addr_27 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_365
  %bias_load_27 = load float* %bias_addr_27, align 4
  %tmp_366 = add i7 %tmp_363, %i63_cast
  %tmp_490_cast = sext i7 %tmp_366 to i32
  %tmp_367 = zext i32 %tmp_490_cast to i64
  %bias_48_addr_10 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_367
  store float %bias_load_27, float* %bias_48_addr_10, align 4
  br label %.preheader561

; <label>:90                                      ; preds = %.preheader562
  call fastcc void @subconv_1x1_8([3072 x float]* @buffer0_1_48_8x8, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [3072 x float]* @buffer1_1_48_8x8) nounwind
  br label %.loopexit710

.loopexit710.loopexit:                            ; preds = %.preheader560
  br label %.loopexit710

.loopexit710:                                     ; preds = %.loopexit710.loopexit, %90
  %co84 = phi i6 [ 0, %90 ], [ %co_85, %.loopexit710.loopexit ]
  %exitcond228 = icmp eq i6 %co84, -16
  %empty_412 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_85 = add i6 %co84, 1
  br i1 %exitcond228, label %92, label %.preheader560.preheader

.preheader560.preheader:                          ; preds = %.loopexit710
  %tmp_912 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co84, i3 0)
  %tmp_1270_cast = zext i9 %tmp_912 to i10
  br label %.preheader560

.preheader560.loopexit:                           ; preds = %.preheader559
  br label %.preheader560

.preheader560:                                    ; preds = %.preheader560.loopexit, %.preheader560.preheader
  %h57 = phi i4 [ 0, %.preheader560.preheader ], [ %h_58, %.preheader560.loopexit ]
  %exitcond227 = icmp eq i4 %h57, -8
  %empty_413 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_58 = add i4 %h57, 1
  br i1 %exitcond227, label %.loopexit710.loopexit, label %.preheader559.preheader

.preheader559.preheader:                          ; preds = %.preheader560
  %tmp_373_cast1 = zext i4 %h57 to i10
  %tmp_925 = add i10 %tmp_1270_cast, %tmp_373_cast1
  %tmp_926 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_925, i3 0)
  %tmp_1293_cast = zext i13 %tmp_926 to i14
  br label %.preheader559

.preheader559:                                    ; preds = %91, %.preheader559.preheader
  %w57 = phi i4 [ %w_58, %91 ], [ 0, %.preheader559.preheader ]
  %exitcond226 = icmp eq i4 %w57, -8
  %empty_414 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_58 = add i4 %w57, 1
  br i1 %exitcond226, label %.preheader560.loopexit, label %91

; <label>:91                                      ; preds = %.preheader559
  %tmp_377_cast = zext i4 %w57 to i14
  %tmp_930 = add i14 %tmp_1293_cast, %tmp_377_cast
  %tmp_1302_cast = zext i14 %tmp_930 to i64
  %buffer0_1_48_8x8_add_3 = getelementptr [3072 x float]* @buffer0_1_48_8x8, i64 0, i64 %tmp_1302_cast
  %shuffleunit1_0_outpu_2 = getelementptr [6144 x float]* @shuffleunit1_0_outpu, i64 0, i64 %tmp_1302_cast
  %shuffleunit1_0_outpu_3 = load float* %shuffleunit1_0_outpu_2, align 4
  store float %shuffleunit1_0_outpu_3, float* %buffer0_1_48_8x8_add_3, align 4
  br label %.preheader559

; <label>:92                                      ; preds = %.loopexit710
  call fastcc void @shuffle_48([3072 x float]* @buffer0_1_48_8x8, [6144 x float]* @shuffleunit1_1_outpu) nounwind
  br label %.loopexit709

.loopexit709.loopexit:                            ; preds = %.preheader558
  br label %.loopexit709

.loopexit709:                                     ; preds = %.loopexit709.loopexit, %92
  %co86 = phi i6 [ 0, %92 ], [ %co_87, %.loopexit709.loopexit ]
  %co86_cast = zext i6 %co86 to i7
  %exitcond225 = icmp eq i6 %co86, -16
  %empty_415 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_87 = add i6 %co86, 1
  br i1 %exitcond225, label %.preheader556.preheader, label %.preheader558.preheader

.preheader556.preheader:                          ; preds = %.loopexit709
  br label %.preheader556

.preheader558.preheader:                          ; preds = %.loopexit709
  %tmp_372 = add i7 %co86_cast, 48
  %tmp_923 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_372, i3 0)
  %tmp_1288_cast = zext i10 %tmp_923 to i11
  %tmp_924 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co86, i3 0)
  %tmp_1290_cast = zext i9 %tmp_924 to i10
  br label %.preheader558

.preheader558.loopexit:                           ; preds = %.preheader557
  br label %.preheader558

.preheader558:                                    ; preds = %.preheader558.loopexit, %.preheader558.preheader
  %h59 = phi i4 [ 0, %.preheader558.preheader ], [ %h_60, %.preheader558.loopexit ]
  %exitcond224 = icmp eq i4 %h59, -8
  %empty_416 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_60 = add i4 %h59, 1
  br i1 %exitcond224, label %.loopexit709.loopexit, label %.preheader557.preheader

.preheader557.preheader:                          ; preds = %.preheader558
  %tmp_375_cast1 = zext i4 %h59 to i10
  %tmp_375_cast = zext i4 %h59 to i11
  %tmp_928 = add i11 %tmp_375_cast, %tmp_1288_cast
  %tmp_1298_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_928, i3 0)
  %tmp_929 = add i10 %tmp_375_cast1, %tmp_1290_cast
  %tmp_1301_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_929, i3 0)
  br label %.preheader557

.preheader557:                                    ; preds = %93, %.preheader557.preheader
  %w59 = phi i4 [ %w_60, %93 ], [ 0, %.preheader557.preheader ]
  %exitcond223 = icmp eq i4 %w59, -8
  %empty_417 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_60 = add i4 %w59, 1
  br i1 %exitcond223, label %.preheader558.loopexit, label %93

; <label>:93                                      ; preds = %.preheader557
  %tmp_381_cast1 = zext i4 %w59 to i13
  %tmp_381_cast = zext i4 %w59 to i14
  %tmp_931 = add i14 %tmp_1298_cast, %tmp_381_cast
  %tmp_1303_cast = zext i14 %tmp_931 to i64
  %shuffleunit1_1_outpu = getelementptr [6144 x float]* @shuffleunit1_1_outpu, i64 0, i64 %tmp_1303_cast
  %tmp_932 = add i13 %tmp_1301_cast, %tmp_381_cast1
  %tmp_1304_cast = zext i13 %tmp_932 to i64
  %buffer0_1_48_8x8_add_4 = getelementptr [3072 x float]* @buffer0_1_48_8x8, i64 0, i64 %tmp_1304_cast
  %shuffleunit1_1_outpu_1 = load float* %shuffleunit1_1_outpu, align 4
  store float %shuffleunit1_1_outpu_1, float* %buffer0_1_48_8x8_add_4, align 4
  br label %.preheader557

.preheader556.loopexit:                           ; preds = %.preheader555
  br label %.preheader556

.preheader556:                                    ; preds = %.preheader556.preheader, %.preheader556.loopexit
  %co88 = phi i5 [ %co_89, %.preheader556.loopexit ], [ 0, %.preheader556.preheader ]
  %co88_cast522_cast = zext i5 %co88 to i9
  %exitcond222 = icmp eq i5 %co88, -8
  %empty_418 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_89 = add i5 %co88, 1
  br i1 %exitcond222, label %.preheader553.preheader, label %.preheader555.preheader

.preheader553.preheader:                          ; preds = %.preheader556
  br label %.preheader553

.preheader555.preheader:                          ; preds = %.preheader556
  %tmp_927 = trunc i5 %co88 to i1
  %p_shl72 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_927, i5 0)
  %p_shl72_cast = zext i6 %p_shl72 to i7
  %p_shl73 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_927, i3 0)
  %p_shl73_cast = zext i4 %p_shl73 to i7
  %tmp_374 = sub i7 %p_shl72_cast, %p_shl73_cast
  %p_lshr_f7_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co88, i32 1, i32 4)
  %tmp_514_cast = zext i4 %p_lshr_f7_cast to i7
  br label %.preheader555

.preheader555.loopexit:                           ; preds = %.preheader554
  br label %.preheader555

.preheader555:                                    ; preds = %.preheader555.loopexit, %.preheader555.preheader
  %ci40 = phi i5 [ 0, %.preheader555.preheader ], [ %ci_41, %.preheader555.loopexit ]
  %ci40_cast = zext i5 %ci40 to i7
  %exitcond221 = icmp eq i5 %ci40, -8
  %empty_419 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_41 = add i5 %ci40, 1
  br i1 %exitcond221, label %.preheader556.loopexit, label %.preheader554.preheader

.preheader554.preheader:                          ; preds = %.preheader555
  %tmp_378_cast1 = zext i5 %ci40 to i17
  %tmp_379 = add i7 %tmp_374, %ci40_cast
  %tmp_380_cast = sext i7 %tmp_379 to i13
  br label %.preheader554

.preheader554:                                    ; preds = %94, %.preheader554.preheader
  %i70 = phi i3 [ %i_71, %94 ], [ 0, %.preheader554.preheader ]
  %exitcond220 = icmp eq i3 %i70, -4
  %empty_420 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_71 = add i3 %i70, 1
  br i1 %exitcond220, label %.preheader555.loopexit, label %94

; <label>:94                                      ; preds = %.preheader554
  %tmp_934 = trunc i3 %i70 to i2
  %p_shl76 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_934, i5 0)
  %p_shl76_cast = zext i7 %p_shl76 to i8
  %p_shl77 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_934, i3 0)
  %p_shl77_cast = zext i5 %p_shl77 to i8
  %tmp_391 = sub i8 %p_shl76_cast, %p_shl77_cast
  %tmp_529_cast_cast = sext i8 %tmp_391 to i9
  %tmp23 = add i9 -136, %tmp_529_cast_cast
  %tmp_392 = add i9 %tmp23, %co88_cast522_cast
  %tmp_935 = call i14 @_ssdm_op_BitConcatenate.i14.i9.i5(i9 %tmp_392, i5 0)
  %tmp_936 = sext i14 %tmp_935 to i15
  %p_shl373_cast = zext i15 %tmp_936 to i16
  %tmp_937 = call i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9 %tmp_392, i3 0)
  %tmp_938 = sext i12 %tmp_937 to i13
  %p_shl374_cast = zext i13 %tmp_938 to i16
  %tmp_939 = sub i16 %p_shl373_cast, %p_shl374_cast
  %tmp_1313_cast = sext i16 %tmp_939 to i17
  %tmp_940 = add i17 %tmp_378_cast1, %tmp_1313_cast
  %tmp_1314_cast = sext i17 %tmp_940 to i64
  %shuffle_conv_1x1_add_16 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1314_cast
  %shuffle_conv_1x1_loa_16 = load float* %shuffle_conv_1x1_add_16, align 4
  %p_shl78 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_934, i4 0)
  %p_shl78_cast = zext i6 %p_shl78 to i7
  %p_shl79 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_934, i2 0)
  %p_shl79_cast = zext i4 %p_shl79 to i7
  %tmp_393 = sub i7 %p_shl78_cast, %p_shl79_cast
  %tmp_394 = add i7 %tmp_393, %tmp_514_cast
  %tmp_941 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_394, i6 0)
  %tmp_942 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_394, i4 0)
  %p_shl372_cast = sext i11 %tmp_942 to i13
  %tmp_943 = sub i13 %tmp_941, %p_shl372_cast
  %tmp_944 = add i13 %tmp_380_cast, %tmp_943
  %tmp_1322_cast = sext i13 %tmp_944 to i64
  %weights_48_48_1x1_ad_7 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1322_cast
  store float %shuffle_conv_1x1_loa_16, float* %weights_48_48_1x1_ad_7, align 4
  br label %.preheader554

.preheader553.loopexit:                           ; preds = %.preheader552
  br label %.preheader553

.preheader553:                                    ; preds = %.preheader553.preheader, %.preheader553.loopexit
  %i68 = phi i5 [ %i_69, %.preheader553.loopexit ], [ 0, %.preheader553.preheader ]
  %i69_cast = zext i5 %i68 to i7
  %i69_cast512_cast = zext i5 %i68 to i9
  %exitcond219 = icmp eq i5 %i68, -8
  %empty_421 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_69 = add i5 %i68, 1
  br i1 %exitcond219, label %96, label %.preheader552.preheader

.preheader552.preheader:                          ; preds = %.preheader553
  br label %.preheader552

.preheader552:                                    ; preds = %.preheader552.preheader, %95
  %k13 = phi i2 [ %k_14, %95 ], [ 0, %.preheader552.preheader ]
  %exitcond218 = icmp eq i2 %k13, -2
  %empty_422 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_14 = add i2 %k13, 1
  br i1 %exitcond218, label %.preheader553.loopexit, label %95

; <label>:95                                      ; preds = %.preheader552
  %tmp_933 = trunc i2 %k13 to i1
  %p_shl74 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_933, i5 0)
  %p_shl74_cast = zext i6 %p_shl74 to i7
  %p_shl75 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_933, i3 0)
  %p_shl75_cast = zext i4 %p_shl75 to i7
  %tmp_382 = sub i7 %p_shl74_cast, %p_shl75_cast
  %tmp_518_cast_cast = sext i7 %tmp_382 to i9
  %tmp24 = add i9 -136, %tmp_518_cast_cast
  %tmp_383 = add i9 %i69_cast512_cast, %tmp24
  %tmp_520_cast = sext i9 %tmp_383 to i10
  %tmp_385 = zext i10 %tmp_520_cast to i64
  %bias_addr_28 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_385
  %bias_load_28 = load float* %bias_addr_28, align 4
  %tmp_386 = add i7 %tmp_382, %i69_cast
  %tmp_522_cast = sext i7 %tmp_386 to i32
  %tmp_388 = zext i32 %tmp_522_cast to i64
  %bias_48_addr_11 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_388
  store float %bias_load_28, float* %bias_48_addr_11, align 4
  br label %.preheader552

; <label>:96                                      ; preds = %.preheader553
  call fastcc void @subconv_1x1_8([3072 x float]* @buffer0_1_48_8x8, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [3072 x float]* @buffer1_1_48_8x8) nounwind
  br label %.loopexit708

.loopexit708.loopexit:                            ; preds = %.preheader551
  br label %.loopexit708

.loopexit708:                                     ; preds = %.loopexit708.loopexit, %96
  %co90 = phi i5 [ 0, %96 ], [ %co_91, %.loopexit708.loopexit ]
  %co91_cast = zext i5 %co90 to i7
  %co91_cast1 = zext i5 %co90 to i9
  %exitcond217 = icmp eq i5 %co90, -8
  %empty_423 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_91 = add i5 %co90, 1
  br i1 %exitcond217, label %.preheader548.preheader, label %.preheader551.preheader

.preheader551.preheader:                          ; preds = %.loopexit708
  br label %.preheader551

.preheader548.preheader:                          ; preds = %.loopexit708
  br label %.preheader548

.preheader551.loopexit:                           ; preds = %.preheader550
  br label %.preheader551

.preheader551:                                    ; preds = %.preheader551.preheader, %.preheader551.loopexit
  %w61 = phi i2 [ %w_62, %.preheader551.loopexit ], [ 0, %.preheader551.preheader ]
  %exitcond216 = icmp eq i2 %w61, -1
  %empty_424 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_62 = add i2 %w61, 1
  br i1 %exitcond216, label %.loopexit708.loopexit, label %.preheader550.preheader

.preheader550.preheader:                          ; preds = %.preheader551
  %tmp_395_cast1 = zext i2 %w61 to i36
  %tmp_395_cast = zext i2 %w61 to i12
  br label %.preheader550

.preheader550.loopexit:                           ; preds = %.preheader549
  br label %.preheader550

.preheader550:                                    ; preds = %.preheader550.loopexit, %.preheader550.preheader
  %h61 = phi i2 [ 0, %.preheader550.preheader ], [ %h_62, %.preheader550.loopexit ]
  %exitcond215 = icmp eq i2 %h61, -1
  %empty_425 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_62 = add i2 %h61, 1
  br i1 %exitcond215, label %.preheader551.loopexit, label %.preheader549.preheader

.preheader549.preheader:                          ; preds = %.preheader550
  %tmp_402_cast1 = zext i2 %h61 to i10
  %tmp_402_cast2 = zext i2 %h61 to i15
  br label %.preheader549

.preheader549:                                    ; preds = %97, %.preheader549.preheader
  %i76 = phi i2 [ %i_77, %97 ], [ 0, %.preheader549.preheader ]
  %exitcond214 = icmp eq i2 %i76, -2
  %empty_426 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_77 = add i2 %i76, 1
  br i1 %exitcond214, label %.preheader550.loopexit, label %97

; <label>:97                                      ; preds = %.preheader549
  %tmp_947 = trunc i2 %i76 to i1
  %p_shl86 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_947, i5 0)
  %p_shl86_cast = zext i6 %p_shl86 to i7
  %p_shl87 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_947, i3 0)
  %p_shl87_cast = zext i4 %p_shl87 to i7
  %tmp_407 = sub i7 %p_shl86_cast, %p_shl87_cast
  %tmp_555_cast = sext i7 %tmp_407 to i9
  %tmp25 = add i9 -200, %tmp_555_cast
  %tmp_408 = add i9 %tmp25, %co91_cast1
  %tmp_410_cast = zext i9 %tmp_408 to i12
  %tmp_948 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_408, i2 0)
  %p_shl378_cast = zext i11 %tmp_948 to i12
  %tmp_949 = sub i12 %p_shl378_cast, %tmp_410_cast
  %tmp_950 = add i12 %tmp_395_cast, %tmp_949
  %tmp_1331_cast = sext i12 %tmp_950 to i15
  %tmp_951 = call i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12 %tmp_950, i2 0)
  %p_shl377_cast = sext i14 %tmp_951 to i15
  %tmp_952 = sub i15 %p_shl377_cast, %tmp_1331_cast
  %tmp_953 = add i15 %tmp_402_cast2, %tmp_952
  %tmp_1334_cast = zext i15 %tmp_953 to i64
  %shuffle_conv_3x3_add_9 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1334_cast
  %shuffle_conv_3x3_loa_9 = load float* %shuffle_conv_3x3_add_9, align 4
  %tmp_411 = add i7 %co91_cast, %tmp_407
  %tmp_559_cast = sext i7 %tmp_411 to i32
  %tmp_412_cast = zext i32 %tmp_559_cast to i35
  %tmp_954 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_411, i2 0)
  %tmp_955 = sext i9 %tmp_954 to i34
  %p_shl376_cast = zext i34 %tmp_955 to i35
  %tmp_956 = sub i35 %p_shl376_cast, %tmp_412_cast
  %tmp_1337_cast = sext i35 %tmp_956 to i36
  %tmp_957 = add i36 %tmp_395_cast1, %tmp_1337_cast
  %tmp_958 = trunc i36 %tmp_957 to i10
  %tmp_959 = trunc i36 %tmp_957 to i8
  %p_shl375_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_959, i2 0)
  %tmp_960 = sub i10 %p_shl375_cast, %tmp_958
  %tmp_961 = add i10 %tmp_402_cast1, %tmp_960
  %tmp_1341_cast = zext i10 %tmp_961 to i64
  %weights_48_1_3x3_add_4 = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1341_cast
  store float %shuffle_conv_3x3_loa_9, float* %weights_48_1_3x3_add_4, align 4
  br label %.preheader549

.preheader548.loopexit:                           ; preds = %.preheader547
  br label %.preheader548

.preheader548:                                    ; preds = %.preheader548.preheader, %.preheader548.loopexit
  %i72 = phi i5 [ %i_73, %.preheader548.loopexit ], [ 0, %.preheader548.preheader ]
  %i73_cast = zext i5 %i72 to i7
  %i73_cast502_cast = zext i5 %i72 to i8
  %exitcond213 = icmp eq i5 %i72, -8
  %empty_427 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_73 = add i5 %i72, 1
  br i1 %exitcond213, label %99, label %.preheader547.preheader

.preheader547.preheader:                          ; preds = %.preheader548
  br label %.preheader547

.preheader547:                                    ; preds = %.preheader547.preheader, %98
  %k15 = phi i2 [ %k_16, %98 ], [ 0, %.preheader547.preheader ]
  %exitcond212 = icmp eq i2 %k15, -2
  %empty_428 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_16 = add i2 %k15, 1
  br i1 %exitcond212, label %.preheader548.loopexit, label %98

; <label>:98                                      ; preds = %.preheader547
  %tmp_946 = trunc i2 %k15 to i1
  %p_shl80 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_946, i5 0)
  %p_shl80_cast = zext i6 %p_shl80 to i7
  %p_shl81 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_946, i3 0)
  %p_shl81_cast = zext i4 %p_shl81 to i7
  %tmp_397 = sub i7 %p_shl80_cast, %p_shl81_cast
  %tmp_536_cast_cast = sext i7 %tmp_397 to i8
  %tmp26 = add i8 -88, %tmp_536_cast_cast
  %tmp_398 = add i8 %i73_cast502_cast, %tmp26
  %tmp_538_cast = sext i8 %tmp_398 to i10
  %tmp_399 = zext i10 %tmp_538_cast to i64
  %bias_addr_29 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_399
  %bias_load_29 = load float* %bias_addr_29, align 4
  %tmp_400 = add i7 %tmp_397, %i73_cast
  %tmp_540_cast = sext i7 %tmp_400 to i32
  %tmp_401 = zext i32 %tmp_540_cast to i64
  %bias_48_addr_12 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_401
  store float %bias_load_29, float* %bias_48_addr_12, align 4
  br label %.preheader547

; <label>:99                                      ; preds = %.preheader548
  call fastcc void @subconv_3x3_8_no_rel([3072 x float]* @buffer1_1_48_8x8, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [3072 x float]* @buffer0_1_48_8x8) nounwind
  br label %.loopexit707

.loopexit707.loopexit:                            ; preds = %.preheader546
  br label %.loopexit707

.loopexit707:                                     ; preds = %.loopexit707.loopexit, %99
  %co92 = phi i5 [ 0, %99 ], [ %co_93, %.loopexit707.loopexit ]
  %co93_cast = zext i5 %co92 to i11
  %exitcond211 = icmp eq i5 %co92, -8
  %empty_429 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_93 = add i5 %co92, 1
  br i1 %exitcond211, label %.preheader544.preheader, label %.preheader546.preheader

.preheader544.preheader:                          ; preds = %.loopexit707
  br label %.preheader544

.preheader546.preheader:                          ; preds = %.loopexit707
  %tmp_945 = trunc i5 %co92 to i1
  %p_shl82 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_945, i5 0)
  %p_shl82_cast = zext i6 %p_shl82 to i7
  %p_shl83 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_945, i3 0)
  %p_shl83_cast = zext i4 %p_shl83 to i7
  %tmp_396 = sub i7 %p_shl82_cast, %p_shl83_cast
  %p_lshr_f8_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co92, i32 1, i32 4)
  %tmp_544_cast = zext i4 %p_lshr_f8_cast to i7
  br label %.preheader546

.preheader546.loopexit:                           ; preds = %.preheader545
  br label %.preheader546

.preheader546:                                    ; preds = %.preheader546.loopexit, %.preheader546.preheader
  %ci42 = phi i5 [ 0, %.preheader546.preheader ], [ %ci_43, %.preheader546.loopexit ]
  %ci42_cast = zext i5 %ci42 to i7
  %exitcond210 = icmp eq i5 %ci42, -8
  %empty_430 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_43 = add i5 %ci42, 1
  br i1 %exitcond210, label %.loopexit707.loopexit, label %.preheader545.preheader

.preheader545.preheader:                          ; preds = %.preheader546
  %tmp_403_cast = zext i5 %ci42 to i18
  %tmp_404 = add i7 %tmp_396, %ci42_cast
  %tmp_405_cast = sext i7 %tmp_404 to i13
  br label %.preheader545

.preheader545:                                    ; preds = %100, %.preheader545.preheader
  %i78 = phi i3 [ %i_79, %100 ], [ 0, %.preheader545.preheader ]
  %exitcond209 = icmp eq i3 %i78, -4
  %empty_431 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_79 = add i3 %i78, 1
  br i1 %exitcond209, label %.preheader546.loopexit, label %100

; <label>:100                                     ; preds = %.preheader545
  %tmp_964 = trunc i3 %i78 to i2
  %p_shl88 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_964, i5 0)
  %p_shl88_cast = zext i7 %p_shl88 to i8
  %p_shl89 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_964, i3 0)
  %p_shl89_cast = zext i5 %p_shl89 to i8
  %tmp_418 = sub i8 %p_shl88_cast, %p_shl89_cast
  %tmp_562_cast = sext i8 %tmp_418 to i11
  %tmp27 = add i11 984, %tmp_562_cast
  %tmp_419 = add i11 %tmp27, %co93_cast
  %tmp_965 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_419, i5 0)
  %p_shl381_cast = zext i16 %tmp_965 to i17
  %tmp_966 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_419, i3 0)
  %p_shl382_cast = zext i14 %tmp_966 to i17
  %tmp_967 = sub i17 %p_shl381_cast, %p_shl382_cast
  %tmp_1350_cast = sext i17 %tmp_967 to i18
  %tmp_968 = add i18 %tmp_403_cast, %tmp_1350_cast
  %tmp_1351_cast = sext i18 %tmp_968 to i64
  %shuffle_conv_1x1_add_17 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1351_cast
  %shuffle_conv_1x1_loa_17 = load float* %shuffle_conv_1x1_add_17, align 4
  %p_shl90 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_964, i4 0)
  %p_shl90_cast = zext i6 %p_shl90 to i7
  %p_shl91 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_964, i2 0)
  %p_shl91_cast = zext i4 %p_shl91 to i7
  %tmp_420 = sub i7 %p_shl90_cast, %p_shl91_cast
  %tmp_421 = add i7 %tmp_420, %tmp_544_cast
  %tmp_969 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_421, i6 0)
  %tmp_970 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_421, i4 0)
  %p_shl380_cast = sext i11 %tmp_970 to i13
  %tmp_971 = sub i13 %tmp_969, %p_shl380_cast
  %tmp_972 = add i13 %tmp_405_cast, %tmp_971
  %tmp_1359_cast = sext i13 %tmp_972 to i64
  %weights_48_48_1x1_ad_8 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1359_cast
  store float %shuffle_conv_1x1_loa_17, float* %weights_48_48_1x1_ad_8, align 4
  br label %.preheader545

.preheader544.loopexit:                           ; preds = %.preheader543
  br label %.preheader544

.preheader544:                                    ; preds = %.preheader544.preheader, %.preheader544.loopexit
  %i74 = phi i5 [ %i_75, %.preheader544.loopexit ], [ 0, %.preheader544.preheader ]
  %i75_cast = zext i5 %i74 to i7
  %i75_cast1 = zext i5 %i74 to i11
  %exitcond208 = icmp eq i5 %i74, -8
  %empty_432 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_75 = add i5 %i74, 1
  br i1 %exitcond208, label %102, label %.preheader543.preheader

.preheader543.preheader:                          ; preds = %.preheader544
  br label %.preheader543

.preheader543:                                    ; preds = %.preheader543.preheader, %101
  %k17 = phi i2 [ %k_18, %101 ], [ 0, %.preheader543.preheader ]
  %exitcond207 = icmp eq i2 %k17, -2
  %empty_433 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_18 = add i2 %k17, 1
  br i1 %exitcond207, label %.preheader544.loopexit, label %101

; <label>:101                                     ; preds = %.preheader543
  %tmp_963 = trunc i2 %k17 to i1
  %p_shl84 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_963, i5 0)
  %p_shl84_cast = zext i6 %p_shl84 to i7
  %p_shl85 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_963, i3 0)
  %p_shl85_cast = zext i4 %p_shl85 to i7
  %tmp_413 = sub i7 %p_shl84_cast, %p_shl85_cast
  %tmp28 = add i7 -40, %tmp_413
  %tmp28_cast1 = sext i7 %tmp28 to i10
  %tmp28_cast = zext i10 %tmp28_cast1 to i11
  %tmp_414 = add i11 %i75_cast1, %tmp28_cast
  %tmp_415 = zext i11 %tmp_414 to i64
  %bias_addr_30 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_415
  %bias_load_30 = load float* %bias_addr_30, align 4
  %tmp_416 = add i7 %tmp_413, %i75_cast
  %tmp_550_cast = sext i7 %tmp_416 to i32
  %tmp_417 = zext i32 %tmp_550_cast to i64
  %bias_48_addr_13 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_417
  store float %bias_load_30, float* %bias_48_addr_13, align 4
  br label %.preheader543

; <label>:102                                     ; preds = %.preheader544
  call fastcc void @subconv_1x1_8([3072 x float]* @buffer0_1_48_8x8, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [3072 x float]* @buffer1_1_48_8x8) nounwind
  br label %.loopexit706

.loopexit706.loopexit:                            ; preds = %.preheader542
  br label %.loopexit706

.loopexit706:                                     ; preds = %.loopexit706.loopexit, %102
  %co94 = phi i6 [ 0, %102 ], [ %co_95, %.loopexit706.loopexit ]
  %exitcond206 = icmp eq i6 %co94, -16
  %empty_434 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_95 = add i6 %co94, 1
  br i1 %exitcond206, label %104, label %.preheader542.preheader

.preheader542.preheader:                          ; preds = %.loopexit706
  %tmp_962 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co94, i3 0)
  %tmp_1343_cast = zext i9 %tmp_962 to i10
  br label %.preheader542

.preheader542.loopexit:                           ; preds = %.preheader541
  br label %.preheader542

.preheader542:                                    ; preds = %.preheader542.loopexit, %.preheader542.preheader
  %h63 = phi i4 [ 0, %.preheader542.preheader ], [ %h_64, %.preheader542.loopexit ]
  %exitcond205 = icmp eq i4 %h63, -8
  %empty_435 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_64 = add i4 %h63, 1
  br i1 %exitcond205, label %.loopexit706.loopexit, label %.preheader541.preheader

.preheader541.preheader:                          ; preds = %.preheader542
  %tmp_423_cast = zext i4 %h63 to i10
  %tmp_975 = add i10 %tmp_1343_cast, %tmp_423_cast
  %tmp_976 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_975, i3 0)
  %tmp_1366_cast = zext i13 %tmp_976 to i14
  br label %.preheader541

.preheader541:                                    ; preds = %103, %.preheader541.preheader
  %w63 = phi i4 [ %w_64, %103 ], [ 0, %.preheader541.preheader ]
  %exitcond204 = icmp eq i4 %w63, -8
  %empty_436 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_64 = add i4 %w63, 1
  br i1 %exitcond204, label %.preheader542.loopexit, label %103

; <label>:103                                     ; preds = %.preheader541
  %tmp_427_cast = zext i4 %w63 to i14
  %tmp_980 = add i14 %tmp_1366_cast, %tmp_427_cast
  %tmp_1375_cast = zext i14 %tmp_980 to i64
  %shuffleunit1_1_outpu_2 = getelementptr [6144 x float]* @shuffleunit1_1_outpu, i64 0, i64 %tmp_1375_cast
  %buffer0_1_48_8x8_add_5 = getelementptr [3072 x float]* @buffer0_1_48_8x8, i64 0, i64 %tmp_1375_cast
  %shuffleunit1_1_outpu_3 = load float* %shuffleunit1_1_outpu_2, align 4
  store float %shuffleunit1_1_outpu_3, float* %buffer0_1_48_8x8_add_5, align 4
  br label %.preheader541

; <label>:104                                     ; preds = %.loopexit706
  call fastcc void @shuffle_48([3072 x float]* @buffer0_1_48_8x8, [6144 x float]* @shuffleunit1_2_outpu) nounwind
  br label %.loopexit705

.loopexit705.loopexit:                            ; preds = %.preheader540
  br label %.loopexit705

.loopexit705:                                     ; preds = %.loopexit705.loopexit, %104
  %co96 = phi i6 [ 0, %104 ], [ %co_97, %.loopexit705.loopexit ]
  %co96_cast = zext i6 %co96 to i7
  %exitcond203 = icmp eq i6 %co96, -16
  %empty_437 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_97 = add i6 %co96, 1
  br i1 %exitcond203, label %.preheader538.preheader, label %.preheader540.preheader

.preheader538.preheader:                          ; preds = %.loopexit705
  br label %.preheader538

.preheader540.preheader:                          ; preds = %.loopexit705
  %tmp_422 = add i7 %co96_cast, 48
  %tmp_973 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_422, i3 0)
  %tmp_1361_cast = zext i10 %tmp_973 to i11
  %tmp_974 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co96, i3 0)
  %tmp_1363_cast = zext i9 %tmp_974 to i10
  br label %.preheader540

.preheader540.loopexit:                           ; preds = %.preheader539
  br label %.preheader540

.preheader540:                                    ; preds = %.preheader540.loopexit, %.preheader540.preheader
  %h65 = phi i4 [ 0, %.preheader540.preheader ], [ %h_66, %.preheader540.loopexit ]
  %exitcond202 = icmp eq i4 %h65, -8
  %empty_438 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_66 = add i4 %h65, 1
  br i1 %exitcond202, label %.loopexit705.loopexit, label %.preheader539.preheader

.preheader539.preheader:                          ; preds = %.preheader540
  %tmp_425_cast1 = zext i4 %h65 to i10
  %tmp_425_cast = zext i4 %h65 to i11
  %tmp_978 = add i11 %tmp_425_cast, %tmp_1361_cast
  %tmp_1371_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_978, i3 0)
  %tmp_979 = add i10 %tmp_425_cast1, %tmp_1363_cast
  %tmp_1374_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_979, i3 0)
  br label %.preheader539

.preheader539:                                    ; preds = %105, %.preheader539.preheader
  %w65 = phi i4 [ %w_66, %105 ], [ 0, %.preheader539.preheader ]
  %exitcond201 = icmp eq i4 %w65, -8
  %empty_439 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_66 = add i4 %w65, 1
  br i1 %exitcond201, label %.preheader540.loopexit, label %105

; <label>:105                                     ; preds = %.preheader539
  %tmp_431_cast1 = zext i4 %w65 to i13
  %tmp_431_cast = zext i4 %w65 to i14
  %tmp_981 = add i14 %tmp_1371_cast, %tmp_431_cast
  %tmp_1376_cast = zext i14 %tmp_981 to i64
  %shuffleunit1_2_outpu = getelementptr [6144 x float]* @shuffleunit1_2_outpu, i64 0, i64 %tmp_1376_cast
  %tmp_982 = add i13 %tmp_1374_cast, %tmp_431_cast1
  %tmp_1377_cast = zext i13 %tmp_982 to i64
  %buffer0_1_48_8x8_add_6 = getelementptr [3072 x float]* @buffer0_1_48_8x8, i64 0, i64 %tmp_1377_cast
  %shuffleunit1_2_outpu_1 = load float* %shuffleunit1_2_outpu, align 4
  store float %shuffleunit1_2_outpu_1, float* %buffer0_1_48_8x8_add_6, align 4
  br label %.preheader539

.preheader538.loopexit:                           ; preds = %.preheader537
  br label %.preheader538

.preheader538:                                    ; preds = %.preheader538.preheader, %.preheader538.loopexit
  %co98 = phi i5 [ %co_99, %.preheader538.loopexit ], [ 0, %.preheader538.preheader ]
  %co98_cast = zext i5 %co98 to i11
  %exitcond200 = icmp eq i5 %co98, -8
  %empty_440 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_99 = add i5 %co98, 1
  br i1 %exitcond200, label %.preheader535.preheader, label %.preheader537.preheader

.preheader535.preheader:                          ; preds = %.preheader538
  br label %.preheader535

.preheader537.preheader:                          ; preds = %.preheader538
  %tmp_977 = trunc i5 %co98 to i1
  %p_shl92 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_977, i5 0)
  %p_shl92_cast = zext i6 %p_shl92 to i7
  %p_shl93 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_977, i3 0)
  %p_shl93_cast = zext i4 %p_shl93 to i7
  %tmp_424 = sub i7 %p_shl92_cast, %p_shl93_cast
  %p_lshr_f9_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co98, i32 1, i32 4)
  %tmp_574_cast = zext i4 %p_lshr_f9_cast to i7
  br label %.preheader537

.preheader537.loopexit:                           ; preds = %.preheader536
  br label %.preheader537

.preheader537:                                    ; preds = %.preheader537.loopexit, %.preheader537.preheader
  %ci44 = phi i5 [ 0, %.preheader537.preheader ], [ %ci_45, %.preheader537.loopexit ]
  %ci44_cast = zext i5 %ci44 to i7
  %exitcond199 = icmp eq i5 %ci44, -8
  %empty_441 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_45 = add i5 %ci44, 1
  br i1 %exitcond199, label %.preheader538.loopexit, label %.preheader536.preheader

.preheader536.preheader:                          ; preds = %.preheader537
  %tmp_428_cast = zext i5 %ci44 to i18
  %tmp_429 = add i7 %tmp_424, %ci44_cast
  %tmp_430_cast1 = sext i7 %tmp_429 to i13
  br label %.preheader536

.preheader536:                                    ; preds = %106, %.preheader536.preheader
  %i82 = phi i3 [ %i_83, %106 ], [ 0, %.preheader536.preheader ]
  %exitcond198 = icmp eq i3 %i82, -4
  %empty_442 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_83 = add i3 %i82, 1
  br i1 %exitcond198, label %.preheader537.loopexit, label %106

; <label>:106                                     ; preds = %.preheader536
  %tmp_984 = trunc i3 %i82 to i2
  %p_shl96 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_984, i5 0)
  %p_shl96_cast = zext i7 %p_shl96 to i8
  %p_shl97 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_984, i3 0)
  %p_shl97_cast = zext i5 %p_shl97 to i8
  %tmp_441 = sub i8 %p_shl96_cast, %p_shl97_cast
  %tmp_589_cast = sext i8 %tmp_441 to i11
  %tmp29 = add i11 -968, %tmp_589_cast
  %tmp_442 = add i11 %tmp29, %co98_cast
  %tmp_985 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_442, i5 0)
  %p_shl385_cast = zext i16 %tmp_985 to i17
  %tmp_986 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_442, i3 0)
  %p_shl386_cast = zext i14 %tmp_986 to i17
  %tmp_987 = sub i17 %p_shl385_cast, %p_shl386_cast
  %tmp_1384_cast = sext i17 %tmp_987 to i18
  %tmp_988 = add i18 %tmp_428_cast, %tmp_1384_cast
  %tmp_1385_cast = sext i18 %tmp_988 to i64
  %shuffle_conv_1x1_add_18 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1385_cast
  %shuffle_conv_1x1_loa_18 = load float* %shuffle_conv_1x1_add_18, align 4
  %p_shl98 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_984, i4 0)
  %p_shl98_cast = zext i6 %p_shl98 to i7
  %p_shl99 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_984, i2 0)
  %p_shl99_cast = zext i4 %p_shl99 to i7
  %tmp_443 = sub i7 %p_shl98_cast, %p_shl99_cast
  %tmp_444 = add i7 %tmp_443, %tmp_574_cast
  %tmp_989 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_444, i6 0)
  %tmp_990 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_444, i4 0)
  %p_shl384_cast = sext i11 %tmp_990 to i13
  %tmp_991 = sub i13 %tmp_989, %p_shl384_cast
  %tmp_992 = add i13 %tmp_430_cast1, %tmp_991
  %tmp_1393_cast = sext i13 %tmp_992 to i64
  %weights_48_48_1x1_ad_9 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1393_cast
  store float %shuffle_conv_1x1_loa_18, float* %weights_48_48_1x1_ad_9, align 4
  br label %.preheader536

.preheader535.loopexit:                           ; preds = %.preheader534
  br label %.preheader535

.preheader535:                                    ; preds = %.preheader535.preheader, %.preheader535.loopexit
  %i80 = phi i5 [ %i_81, %.preheader535.loopexit ], [ 0, %.preheader535.preheader ]
  %i81_cast = zext i5 %i80 to i7
  %i81_cast1 = zext i5 %i80 to i11
  %exitcond197 = icmp eq i5 %i80, -8
  %empty_443 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_81 = add i5 %i80, 1
  br i1 %exitcond197, label %108, label %.preheader534.preheader

.preheader534.preheader:                          ; preds = %.preheader535
  br label %.preheader534

.preheader534:                                    ; preds = %.preheader534.preheader, %107
  %k19 = phi i2 [ %k_20, %107 ], [ 0, %.preheader534.preheader ]
  %exitcond196 = icmp eq i2 %k19, -2
  %empty_444 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_20 = add i2 %k19, 1
  br i1 %exitcond196, label %.preheader535.loopexit, label %107

; <label>:107                                     ; preds = %.preheader534
  %tmp_983 = trunc i2 %k19 to i1
  %p_shl94 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_983, i5 0)
  %p_shl94_cast = zext i6 %p_shl94 to i7
  %p_shl95 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_983, i3 0)
  %p_shl95_cast = zext i4 %p_shl95 to i7
  %tmp_432 = sub i7 %p_shl94_cast, %p_shl95_cast
  %tmp_578_cast = sext i7 %tmp_432 to i11
  %tmp30 = add i11 -1016, %tmp_578_cast
  %tmp_433 = add i11 %i81_cast1, %tmp30
  %tmp_435 = zext i11 %tmp_433 to i64
  %bias_addr_31 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_435
  %bias_load_31 = load float* %bias_addr_31, align 4
  %tmp_436 = add i7 %tmp_432, %i81_cast
  %tmp_582_cast = sext i7 %tmp_436 to i32
  %tmp_438 = zext i32 %tmp_582_cast to i64
  %bias_48_addr_14 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_438
  store float %bias_load_31, float* %bias_48_addr_14, align 4
  br label %.preheader534

; <label>:108                                     ; preds = %.preheader535
  call fastcc void @subconv_1x1_8([3072 x float]* @buffer0_1_48_8x8, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [3072 x float]* @buffer1_1_48_8x8) nounwind
  br label %.loopexit704

.loopexit704.loopexit:                            ; preds = %.preheader533
  br label %.loopexit704

.loopexit704:                                     ; preds = %.loopexit704.loopexit, %108
  %co100 = phi i5 [ 0, %108 ], [ %co_101, %.loopexit704.loopexit ]
  %co101_cast = zext i5 %co100 to i7
  %co101_cast1 = zext i5 %co100 to i9
  %exitcond195 = icmp eq i5 %co100, -8
  %empty_445 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_101 = add i5 %co100, 1
  br i1 %exitcond195, label %.preheader530.preheader, label %.preheader533.preheader

.preheader533.preheader:                          ; preds = %.loopexit704
  br label %.preheader533

.preheader530.preheader:                          ; preds = %.loopexit704
  br label %.preheader530

.preheader533.loopexit:                           ; preds = %.preheader532
  br label %.preheader533

.preheader533:                                    ; preds = %.preheader533.preheader, %.preheader533.loopexit
  %w67 = phi i2 [ %w_68, %.preheader533.loopexit ], [ 0, %.preheader533.preheader ]
  %exitcond194 = icmp eq i2 %w67, -1
  %empty_446 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_68 = add i2 %w67, 1
  br i1 %exitcond194, label %.loopexit704.loopexit, label %.preheader532.preheader

.preheader532.preheader:                          ; preds = %.preheader533
  %tmp_445_cast1 = zext i2 %w67 to i36
  %tmp_445_cast = zext i2 %w67 to i12
  br label %.preheader532

.preheader532.loopexit:                           ; preds = %.preheader531
  br label %.preheader532

.preheader532:                                    ; preds = %.preheader532.loopexit, %.preheader532.preheader
  %h67 = phi i2 [ 0, %.preheader532.preheader ], [ %h_68, %.preheader532.loopexit ]
  %exitcond193 = icmp eq i2 %h67, -1
  %empty_447 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_68 = add i2 %h67, 1
  br i1 %exitcond193, label %.preheader533.loopexit, label %.preheader531.preheader

.preheader531.preheader:                          ; preds = %.preheader532
  %tmp_452_cast1 = zext i2 %h67 to i10
  %tmp_452_cast = zext i2 %h67 to i15
  br label %.preheader531

.preheader531:                                    ; preds = %109, %.preheader531.preheader
  %i88 = phi i2 [ %i_89, %109 ], [ 0, %.preheader531.preheader ]
  %exitcond192 = icmp eq i2 %i88, -2
  %empty_448 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_89 = add i2 %i88, 1
  br i1 %exitcond192, label %.preheader532.loopexit, label %109

; <label>:109                                     ; preds = %.preheader531
  %tmp_995 = trunc i2 %i88 to i1
  %p_shl106 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_995, i5 0)
  %p_shl106_cast = zext i6 %p_shl106 to i7
  %p_shl107 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_995, i3 0)
  %p_shl107_cast = zext i4 %p_shl107 to i7
  %tmp_457 = sub i7 %p_shl106_cast, %p_shl107_cast
  %tmp_615_cast = sext i7 %tmp_457 to i9
  %tmp31 = add i9 -152, %tmp_615_cast
  %tmp_458 = add i9 %tmp31, %co101_cast1
  %tmp_460_cast = zext i9 %tmp_458 to i12
  %tmp_996 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_458, i2 0)
  %p_shl390_cast = zext i11 %tmp_996 to i12
  %tmp_997 = sub i12 %p_shl390_cast, %tmp_460_cast
  %tmp_998 = add i12 %tmp_445_cast, %tmp_997
  %tmp_1402_cast = sext i12 %tmp_998 to i15
  %tmp_999 = call i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12 %tmp_998, i2 0)
  %p_shl389_cast = sext i14 %tmp_999 to i15
  %tmp_1000 = sub i15 %p_shl389_cast, %tmp_1402_cast
  %tmp_1001 = add i15 %tmp_452_cast, %tmp_1000
  %tmp_1405_cast = zext i15 %tmp_1001 to i64
  %shuffle_conv_3x3_add_10 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1405_cast
  %shuffle_conv_3x3_loa_10 = load float* %shuffle_conv_3x3_add_10, align 4
  %tmp_461 = add i7 %co101_cast, %tmp_457
  %tmp_619_cast = sext i7 %tmp_461 to i32
  %tmp_462_cast1 = zext i32 %tmp_619_cast to i35
  %tmp_1002 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_461, i2 0)
  %tmp_1003 = sext i9 %tmp_1002 to i34
  %p_shl388_cast = zext i34 %tmp_1003 to i35
  %tmp_1004 = sub i35 %p_shl388_cast, %tmp_462_cast1
  %tmp_1408_cast = sext i35 %tmp_1004 to i36
  %tmp_1005 = add i36 %tmp_445_cast1, %tmp_1408_cast
  %tmp_1006 = trunc i36 %tmp_1005 to i10
  %tmp_1007 = trunc i36 %tmp_1005 to i8
  %p_shl387_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1007, i2 0)
  %tmp_1008 = sub i10 %p_shl387_cast, %tmp_1006
  %tmp_1009 = add i10 %tmp_452_cast1, %tmp_1008
  %tmp_1412_cast = zext i10 %tmp_1009 to i64
  %weights_48_1_3x3_add_5 = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1412_cast
  store float %shuffle_conv_3x3_loa_10, float* %weights_48_1_3x3_add_5, align 4
  br label %.preheader531

.preheader530.loopexit:                           ; preds = %.preheader529
  br label %.preheader530

.preheader530:                                    ; preds = %.preheader530.preheader, %.preheader530.loopexit
  %i84 = phi i5 [ %i_85, %.preheader530.loopexit ], [ 0, %.preheader530.preheader ]
  %i85_cast = zext i5 %i84 to i7
  %i85_cast1 = zext i5 %i84 to i11
  %exitcond191 = icmp eq i5 %i84, -8
  %empty_449 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_85 = add i5 %i84, 1
  br i1 %exitcond191, label %111, label %.preheader529.preheader

.preheader529.preheader:                          ; preds = %.preheader530
  br label %.preheader529

.preheader529:                                    ; preds = %.preheader529.preheader, %110
  %k21 = phi i2 [ %k_22, %110 ], [ 0, %.preheader529.preheader ]
  %exitcond190 = icmp eq i2 %k21, -2
  %empty_450 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_22 = add i2 %k21, 1
  br i1 %exitcond190, label %.preheader530.loopexit, label %110

; <label>:110                                     ; preds = %.preheader529
  %tmp_994 = trunc i2 %k21 to i1
  %p_shl100 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_994, i5 0)
  %p_shl100_cast = zext i6 %p_shl100 to i7
  %p_shl101 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_994, i3 0)
  %p_shl101_cast = zext i4 %p_shl101 to i7
  %tmp_447 = sub i7 %p_shl100_cast, %p_shl101_cast
  %tmp_596_cast = sext i7 %tmp_447 to i11
  %tmp32 = add i11 -968, %tmp_596_cast
  %tmp_448 = add i11 %i85_cast1, %tmp32
  %tmp_449 = zext i11 %tmp_448 to i64
  %bias_addr_32 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_449
  %bias_load_32 = load float* %bias_addr_32, align 4
  %tmp_450 = add i7 %tmp_447, %i85_cast
  %tmp_600_cast = sext i7 %tmp_450 to i32
  %tmp_451 = zext i32 %tmp_600_cast to i64
  %bias_48_addr_15 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_451
  store float %bias_load_32, float* %bias_48_addr_15, align 4
  br label %.preheader529

; <label>:111                                     ; preds = %.preheader530
  call fastcc void @subconv_3x3_8_no_rel([3072 x float]* @buffer1_1_48_8x8, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [3072 x float]* @buffer0_1_48_8x8) nounwind
  br label %.loopexit703

.loopexit703.loopexit:                            ; preds = %.preheader528
  br label %.loopexit703

.loopexit703:                                     ; preds = %.loopexit703.loopexit, %111
  %co102 = phi i5 [ 0, %111 ], [ %co_103, %.loopexit703.loopexit ]
  %co103_cast = zext i5 %co102 to i11
  %exitcond189 = icmp eq i5 %co102, -8
  %empty_451 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_103 = add i5 %co102, 1
  br i1 %exitcond189, label %.preheader526.preheader, label %.preheader528.preheader

.preheader526.preheader:                          ; preds = %.loopexit703
  br label %.preheader526

.preheader528.preheader:                          ; preds = %.loopexit703
  %tmp_993 = trunc i5 %co102 to i1
  %p_shl102 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_993, i5 0)
  %p_shl102_cast = zext i6 %p_shl102 to i7
  %p_shl103 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_993, i3 0)
  %p_shl103_cast = zext i4 %p_shl103 to i7
  %tmp_446 = sub i7 %p_shl102_cast, %p_shl103_cast
  %p_lshr_f10_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co102, i32 1, i32 4)
  %tmp_604_cast = zext i4 %p_lshr_f10_cast to i7
  br label %.preheader528

.preheader528.loopexit:                           ; preds = %.preheader527
  br label %.preheader528

.preheader528:                                    ; preds = %.preheader528.loopexit, %.preheader528.preheader
  %ci46 = phi i5 [ 0, %.preheader528.preheader ], [ %ci_47, %.preheader528.loopexit ]
  %ci46_cast = zext i5 %ci46 to i7
  %exitcond188 = icmp eq i5 %ci46, -8
  %empty_452 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_47 = add i5 %ci46, 1
  br i1 %exitcond188, label %.loopexit703.loopexit, label %.preheader527.preheader

.preheader527.preheader:                          ; preds = %.preheader528
  %tmp_453_cast = zext i5 %ci46 to i18
  %tmp_454 = add i7 %tmp_446, %ci46_cast
  %tmp_455_cast = sext i7 %tmp_454 to i13
  br label %.preheader527

.preheader527:                                    ; preds = %112, %.preheader527.preheader
  %i90 = phi i3 [ %i_91, %112 ], [ 0, %.preheader527.preheader ]
  %exitcond187 = icmp eq i3 %i90, -4
  %empty_453 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_91 = add i3 %i90, 1
  br i1 %exitcond187, label %.preheader528.loopexit, label %112

; <label>:112                                     ; preds = %.preheader527
  %tmp_1012 = trunc i3 %i90 to i2
  %p_shl108 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1012, i5 0)
  %p_shl108_cast = zext i7 %p_shl108 to i8
  %p_shl109 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1012, i3 0)
  %p_shl109_cast = zext i5 %p_shl109 to i8
  %tmp_468 = sub i8 %p_shl108_cast, %p_shl109_cast
  %tmp_622_cast = sext i8 %tmp_468 to i11
  %tmp33 = add i11 -872, %tmp_622_cast
  %tmp_469 = add i11 %tmp33, %co103_cast
  %tmp_1013 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_469, i5 0)
  %p_shl393_cast = zext i16 %tmp_1013 to i17
  %tmp_1014 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_469, i3 0)
  %p_shl394_cast = zext i14 %tmp_1014 to i17
  %tmp_1015 = sub i17 %p_shl393_cast, %p_shl394_cast
  %tmp_1421_cast = sext i17 %tmp_1015 to i18
  %tmp_1016 = add i18 %tmp_453_cast, %tmp_1421_cast
  %tmp_1422_cast = sext i18 %tmp_1016 to i64
  %shuffle_conv_1x1_add_19 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1422_cast
  %shuffle_conv_1x1_loa_19 = load float* %shuffle_conv_1x1_add_19, align 4
  %p_shl110 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1012, i4 0)
  %p_shl110_cast = zext i6 %p_shl110 to i7
  %p_shl111 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1012, i2 0)
  %p_shl111_cast = zext i4 %p_shl111 to i7
  %tmp_470 = sub i7 %p_shl110_cast, %p_shl111_cast
  %tmp_471 = add i7 %tmp_470, %tmp_604_cast
  %tmp_1017 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_471, i6 0)
  %tmp_1018 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_471, i4 0)
  %p_shl392_cast = sext i11 %tmp_1018 to i13
  %tmp_1019 = sub i13 %tmp_1017, %p_shl392_cast
  %tmp_1020 = add i13 %tmp_455_cast, %tmp_1019
  %tmp_1430_cast = sext i13 %tmp_1020 to i64
  %weights_48_48_1x1_ad_10 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1430_cast
  store float %shuffle_conv_1x1_loa_19, float* %weights_48_48_1x1_ad_10, align 4
  br label %.preheader527

.preheader526.loopexit:                           ; preds = %.preheader525
  br label %.preheader526

.preheader526:                                    ; preds = %.preheader526.preheader, %.preheader526.loopexit
  %i86 = phi i5 [ %i_87, %.preheader526.loopexit ], [ 0, %.preheader526.preheader ]
  %i87_cast = zext i5 %i86 to i7
  %i87_cast1 = zext i5 %i86 to i11
  %exitcond186 = icmp eq i5 %i86, -8
  %empty_454 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_87 = add i5 %i86, 1
  br i1 %exitcond186, label %114, label %.preheader525.preheader

.preheader525.preheader:                          ; preds = %.preheader526
  br label %.preheader525

.preheader525:                                    ; preds = %.preheader525.preheader, %113
  %k23 = phi i2 [ %k_24, %113 ], [ 0, %.preheader525.preheader ]
  %exitcond185 = icmp eq i2 %k23, -2
  %empty_455 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_24 = add i2 %k23, 1
  br i1 %exitcond185, label %.preheader526.loopexit, label %113

; <label>:113                                     ; preds = %.preheader525
  %tmp_1011 = trunc i2 %k23 to i1
  %p_shl104 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1011, i5 0)
  %p_shl104_cast = zext i6 %p_shl104 to i7
  %p_shl105 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1011, i3 0)
  %p_shl105_cast = zext i4 %p_shl105 to i7
  %tmp_463 = sub i7 %p_shl104_cast, %p_shl105_cast
  %tmp_606_cast = sext i7 %tmp_463 to i11
  %tmp34 = add i11 -920, %tmp_606_cast
  %tmp_464 = add i11 %i87_cast1, %tmp34
  %tmp_465 = zext i11 %tmp_464 to i64
  %bias_addr_33 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_465
  %bias_load_33 = load float* %bias_addr_33, align 4
  %tmp_466 = add i7 %tmp_463, %i87_cast
  %tmp_610_cast = sext i7 %tmp_466 to i32
  %tmp_467 = zext i32 %tmp_610_cast to i64
  %bias_48_addr_16 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_467
  store float %bias_load_33, float* %bias_48_addr_16, align 4
  br label %.preheader525

; <label>:114                                     ; preds = %.preheader526
  call fastcc void @subconv_1x1_8([3072 x float]* @buffer0_1_48_8x8, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [3072 x float]* @buffer1_1_48_8x8) nounwind
  br label %.loopexit702

.loopexit702.loopexit:                            ; preds = %.preheader524
  br label %.loopexit702

.loopexit702:                                     ; preds = %.loopexit702.loopexit, %114
  %co104 = phi i6 [ 0, %114 ], [ %co_105, %.loopexit702.loopexit ]
  %exitcond184 = icmp eq i6 %co104, -16
  %empty_456 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_105 = add i6 %co104, 1
  br i1 %exitcond184, label %116, label %.preheader524.preheader

.preheader524.preheader:                          ; preds = %.loopexit702
  %tmp_1010 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co104, i3 0)
  %tmp_1414_cast = zext i9 %tmp_1010 to i10
  br label %.preheader524

.preheader524.loopexit:                           ; preds = %.preheader523
  br label %.preheader524

.preheader524:                                    ; preds = %.preheader524.loopexit, %.preheader524.preheader
  %h69 = phi i4 [ 0, %.preheader524.preheader ], [ %h_70, %.preheader524.loopexit ]
  %exitcond183 = icmp eq i4 %h69, -8
  %empty_457 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_70 = add i4 %h69, 1
  br i1 %exitcond183, label %.loopexit702.loopexit, label %.preheader523.preheader

.preheader523.preheader:                          ; preds = %.preheader524
  %tmp_473_cast = zext i4 %h69 to i10
  %tmp_1023 = add i10 %tmp_1414_cast, %tmp_473_cast
  %tmp_1024 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1023, i3 0)
  %tmp_1437_cast = zext i13 %tmp_1024 to i14
  br label %.preheader523

.preheader523:                                    ; preds = %115, %.preheader523.preheader
  %w69 = phi i4 [ %w_70, %115 ], [ 0, %.preheader523.preheader ]
  %exitcond182 = icmp eq i4 %w69, -8
  %empty_458 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_70 = add i4 %w69, 1
  br i1 %exitcond182, label %.preheader524.loopexit, label %115

; <label>:115                                     ; preds = %.preheader523
  %tmp_477_cast = zext i4 %w69 to i14
  %tmp_1028 = add i14 %tmp_1437_cast, %tmp_477_cast
  %tmp_1446_cast = zext i14 %tmp_1028 to i64
  %shuffleunit1_2_outpu_2 = getelementptr [6144 x float]* @shuffleunit1_2_outpu, i64 0, i64 %tmp_1446_cast
  %buffer0_1_48_8x8_add_7 = getelementptr [3072 x float]* @buffer0_1_48_8x8, i64 0, i64 %tmp_1446_cast
  %shuffleunit1_2_outpu_3 = load float* %shuffleunit1_2_outpu_2, align 4
  store float %shuffleunit1_2_outpu_3, float* %buffer0_1_48_8x8_add_7, align 4
  br label %.preheader523

; <label>:116                                     ; preds = %.loopexit702
  call fastcc void @shuffle_48([3072 x float]* @buffer0_1_48_8x8, [6144 x float]* @shuffleunit1_3_outpu) nounwind
  br label %.loopexit701

.loopexit701.loopexit:                            ; preds = %.preheader522
  br label %.loopexit701

.loopexit701:                                     ; preds = %.loopexit701.loopexit, %116
  %co106 = phi i6 [ 0, %116 ], [ %co_107, %.loopexit701.loopexit ]
  %co106_cast = zext i6 %co106 to i7
  %exitcond181 = icmp eq i6 %co106, -16
  %empty_459 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_107 = add i6 %co106, 1
  br i1 %exitcond181, label %.preheader520.preheader, label %.preheader522.preheader

.preheader520.preheader:                          ; preds = %.loopexit701
  br label %.preheader520

.preheader522.preheader:                          ; preds = %.loopexit701
  %tmp_472 = add i7 %co106_cast, 48
  %tmp_1021 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_472, i3 0)
  %tmp_1432_cast = zext i10 %tmp_1021 to i11
  %tmp_1022 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co106, i3 0)
  %tmp_1434_cast = zext i9 %tmp_1022 to i10
  br label %.preheader522

.preheader522.loopexit:                           ; preds = %.preheader521
  br label %.preheader522

.preheader522:                                    ; preds = %.preheader522.loopexit, %.preheader522.preheader
  %h71 = phi i4 [ 0, %.preheader522.preheader ], [ %h_72, %.preheader522.loopexit ]
  %exitcond180 = icmp eq i4 %h71, -8
  %empty_460 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_72 = add i4 %h71, 1
  br i1 %exitcond180, label %.loopexit701.loopexit, label %.preheader521.preheader

.preheader521.preheader:                          ; preds = %.preheader522
  %tmp_475_cast1 = zext i4 %h71 to i10
  %tmp_475_cast = zext i4 %h71 to i11
  %tmp_1026 = add i11 %tmp_475_cast, %tmp_1432_cast
  %tmp_1442_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1026, i3 0)
  %tmp_1027 = add i10 %tmp_475_cast1, %tmp_1434_cast
  %tmp_1445_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1027, i3 0)
  br label %.preheader521

.preheader521:                                    ; preds = %117, %.preheader521.preheader
  %w71 = phi i4 [ %w_72, %117 ], [ 0, %.preheader521.preheader ]
  %exitcond179 = icmp eq i4 %w71, -8
  %empty_461 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_72 = add i4 %w71, 1
  br i1 %exitcond179, label %.preheader522.loopexit, label %117

; <label>:117                                     ; preds = %.preheader521
  %tmp_481_cast1 = zext i4 %w71 to i13
  %tmp_481_cast = zext i4 %w71 to i14
  %tmp_1029 = add i14 %tmp_1442_cast, %tmp_481_cast
  %tmp_1447_cast = zext i14 %tmp_1029 to i64
  %shuffleunit1_3_outpu = getelementptr [6144 x float]* @shuffleunit1_3_outpu, i64 0, i64 %tmp_1447_cast
  %tmp_1030 = add i13 %tmp_1445_cast, %tmp_481_cast1
  %tmp_1448_cast = zext i13 %tmp_1030 to i64
  %buffer0_1_48_8x8_add_8 = getelementptr [3072 x float]* @buffer0_1_48_8x8, i64 0, i64 %tmp_1448_cast
  %shuffleunit1_3_outpu_1 = load float* %shuffleunit1_3_outpu, align 4
  store float %shuffleunit1_3_outpu_1, float* %buffer0_1_48_8x8_add_8, align 4
  br label %.preheader521

.preheader520.loopexit:                           ; preds = %.preheader519
  br label %.preheader520

.preheader520:                                    ; preds = %.preheader520.preheader, %.preheader520.loopexit
  %co108 = phi i5 [ %co_109, %.preheader520.loopexit ], [ 0, %.preheader520.preheader ]
  %co108_cast = zext i5 %co108 to i11
  %exitcond178 = icmp eq i5 %co108, -8
  %empty_462 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_109 = add i5 %co108, 1
  br i1 %exitcond178, label %.preheader517.preheader, label %.preheader519.preheader

.preheader517.preheader:                          ; preds = %.preheader520
  br label %.preheader517

.preheader519.preheader:                          ; preds = %.preheader520
  %tmp_1025 = trunc i5 %co108 to i1
  %p_shl112 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1025, i5 0)
  %p_shl112_cast = zext i6 %p_shl112 to i7
  %p_shl113 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1025, i3 0)
  %p_shl113_cast = zext i4 %p_shl113 to i7
  %tmp_474 = sub i7 %p_shl112_cast, %p_shl113_cast
  %p_lshr_f11_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co108, i32 1, i32 4)
  %tmp_634_cast = zext i4 %p_lshr_f11_cast to i7
  br label %.preheader519

.preheader519.loopexit:                           ; preds = %.preheader518
  br label %.preheader519

.preheader519:                                    ; preds = %.preheader519.loopexit, %.preheader519.preheader
  %ci48 = phi i5 [ 0, %.preheader519.preheader ], [ %ci_49, %.preheader519.loopexit ]
  %ci48_cast = zext i5 %ci48 to i7
  %exitcond177 = icmp eq i5 %ci48, -8
  %empty_463 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_49 = add i5 %ci48, 1
  br i1 %exitcond177, label %.preheader520.loopexit, label %.preheader518.preheader

.preheader518.preheader:                          ; preds = %.preheader519
  %tmp_478_cast1 = zext i5 %ci48 to i18
  %tmp_479 = add i7 %tmp_474, %ci48_cast
  %tmp_480_cast1 = sext i7 %tmp_479 to i13
  br label %.preheader518

.preheader518:                                    ; preds = %118, %.preheader518.preheader
  %i94 = phi i3 [ %i_95, %118 ], [ 0, %.preheader518.preheader ]
  %exitcond176 = icmp eq i3 %i94, -4
  %empty_464 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_95 = add i3 %i94, 1
  br i1 %exitcond176, label %.preheader519.loopexit, label %118

; <label>:118                                     ; preds = %.preheader518
  %tmp_1032 = trunc i3 %i94 to i2
  %p_shl116 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1032, i5 0)
  %p_shl116_cast = zext i7 %p_shl116 to i8
  %p_shl117 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1032, i3 0)
  %p_shl117_cast = zext i5 %p_shl117 to i8
  %tmp_491 = sub i8 %p_shl116_cast, %p_shl117_cast
  %tmp_649_cast = sext i8 %tmp_491 to i11
  %tmp35 = add i11 -776, %tmp_649_cast
  %tmp_492 = add i11 %tmp35, %co108_cast
  %tmp_1033 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_492, i5 0)
  %p_shl397_cast = zext i16 %tmp_1033 to i17
  %tmp_1034 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_492, i3 0)
  %p_shl398_cast = zext i14 %tmp_1034 to i17
  %tmp_1035 = sub i17 %p_shl397_cast, %p_shl398_cast
  %tmp_1455_cast = sext i17 %tmp_1035 to i18
  %tmp_1036 = add i18 %tmp_478_cast1, %tmp_1455_cast
  %tmp_1456_cast = sext i18 %tmp_1036 to i64
  %shuffle_conv_1x1_add_20 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1456_cast
  %shuffle_conv_1x1_loa_20 = load float* %shuffle_conv_1x1_add_20, align 4
  %p_shl118 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1032, i4 0)
  %p_shl118_cast = zext i6 %p_shl118 to i7
  %p_shl119 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1032, i2 0)
  %p_shl119_cast = zext i4 %p_shl119 to i7
  %tmp_493 = sub i7 %p_shl118_cast, %p_shl119_cast
  %tmp_494 = add i7 %tmp_493, %tmp_634_cast
  %tmp_1037 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_494, i6 0)
  %tmp_1038 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_494, i4 0)
  %p_shl396_cast = sext i11 %tmp_1038 to i13
  %tmp_1039 = sub i13 %tmp_1037, %p_shl396_cast
  %tmp_1040 = add i13 %tmp_480_cast1, %tmp_1039
  %tmp_1464_cast = sext i13 %tmp_1040 to i64
  %weights_48_48_1x1_ad_11 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1464_cast
  store float %shuffle_conv_1x1_loa_20, float* %weights_48_48_1x1_ad_11, align 4
  br label %.preheader518

.preheader517.loopexit:                           ; preds = %.preheader516
  br label %.preheader517

.preheader517:                                    ; preds = %.preheader517.preheader, %.preheader517.loopexit
  %i92 = phi i5 [ %i_93, %.preheader517.loopexit ], [ 0, %.preheader517.preheader ]
  %i93_cast = zext i5 %i92 to i7
  %i93_cast1 = zext i5 %i92 to i11
  %exitcond175 = icmp eq i5 %i92, -8
  %empty_465 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_93 = add i5 %i92, 1
  br i1 %exitcond175, label %120, label %.preheader516.preheader

.preheader516.preheader:                          ; preds = %.preheader517
  br label %.preheader516

.preheader516:                                    ; preds = %.preheader516.preheader, %119
  %k25 = phi i2 [ %k_26, %119 ], [ 0, %.preheader516.preheader ]
  %exitcond174 = icmp eq i2 %k25, -2
  %empty_466 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_26 = add i2 %k25, 1
  br i1 %exitcond174, label %.preheader517.loopexit, label %119

; <label>:119                                     ; preds = %.preheader516
  %tmp_1031 = trunc i2 %k25 to i1
  %p_shl114 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1031, i5 0)
  %p_shl114_cast = zext i6 %p_shl114 to i7
  %p_shl115 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1031, i3 0)
  %p_shl115_cast = zext i4 %p_shl115 to i7
  %tmp_482 = sub i7 %p_shl114_cast, %p_shl115_cast
  %tmp_638_cast = sext i7 %tmp_482 to i11
  %tmp36 = add i11 -872, %tmp_638_cast
  %tmp_483 = add i11 %i93_cast1, %tmp36
  %tmp_485 = zext i11 %tmp_483 to i64
  %bias_addr_34 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_485
  %bias_load_34 = load float* %bias_addr_34, align 4
  %tmp_486 = add i7 %tmp_482, %i93_cast
  %tmp_642_cast = sext i7 %tmp_486 to i32
  %tmp_488 = zext i32 %tmp_642_cast to i64
  %bias_48_addr_17 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_488
  store float %bias_load_34, float* %bias_48_addr_17, align 4
  br label %.preheader516

; <label>:120                                     ; preds = %.preheader517
  call fastcc void @subconv_1x1_8([3072 x float]* @buffer0_1_48_8x8, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [3072 x float]* @buffer1_1_48_8x8) nounwind
  br label %.loopexit700

.loopexit700.loopexit:                            ; preds = %.preheader515
  br label %.loopexit700

.loopexit700:                                     ; preds = %.loopexit700.loopexit, %120
  %co110 = phi i5 [ 0, %120 ], [ %co_111, %.loopexit700.loopexit ]
  %co111_cast = zext i5 %co110 to i7
  %co111_cast424_cast = zext i5 %co110 to i8
  %exitcond173 = icmp eq i5 %co110, -8
  %empty_467 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_111 = add i5 %co110, 1
  br i1 %exitcond173, label %.preheader512.preheader, label %.preheader515.preheader

.preheader515.preheader:                          ; preds = %.loopexit700
  br label %.preheader515

.preheader512.preheader:                          ; preds = %.loopexit700
  br label %.preheader512

.preheader515.loopexit:                           ; preds = %.preheader514
  br label %.preheader515

.preheader515:                                    ; preds = %.preheader515.preheader, %.preheader515.loopexit
  %w73 = phi i2 [ %w_74, %.preheader515.loopexit ], [ 0, %.preheader515.preheader ]
  %exitcond172 = icmp eq i2 %w73, -1
  %empty_468 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_74 = add i2 %w73, 1
  br i1 %exitcond172, label %.loopexit700.loopexit, label %.preheader514.preheader

.preheader514.preheader:                          ; preds = %.preheader515
  %tmp_495_cast1 = zext i2 %w73 to i36
  %tmp_495_cast2 = zext i2 %w73 to i12
  br label %.preheader514

.preheader514.loopexit:                           ; preds = %.preheader513
  br label %.preheader514

.preheader514:                                    ; preds = %.preheader514.loopexit, %.preheader514.preheader
  %h73 = phi i2 [ 0, %.preheader514.preheader ], [ %h_74, %.preheader514.loopexit ]
  %exitcond171 = icmp eq i2 %h73, -1
  %empty_469 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_74 = add i2 %h73, 1
  br i1 %exitcond171, label %.preheader515.loopexit, label %.preheader513.preheader

.preheader513.preheader:                          ; preds = %.preheader514
  %tmp_502_cast1 = zext i2 %h73 to i10
  %tmp_502_cast2 = zext i2 %h73 to i15
  br label %.preheader513

.preheader513:                                    ; preds = %121, %.preheader513.preheader
  %i100 = phi i2 [ %i_101, %121 ], [ 0, %.preheader513.preheader ]
  %exitcond170 = icmp eq i2 %i100, -2
  %empty_470 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_101 = add i2 %i100, 1
  br i1 %exitcond170, label %.preheader514.loopexit, label %121

; <label>:121                                     ; preds = %.preheader513
  %tmp_1043 = trunc i2 %i100 to i1
  %p_shl126 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1043, i5 0)
  %p_shl126_cast = zext i6 %p_shl126 to i7
  %p_shl127 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1043, i3 0)
  %p_shl127_cast = zext i4 %p_shl127 to i7
  %tmp_507 = sub i7 %p_shl126_cast, %p_shl127_cast
  %tmp_675_cast_cast = sext i7 %tmp_507 to i8
  %tmp37 = add i8 -104, %tmp_675_cast_cast
  %tmp_508 = add i8 %tmp37, %co111_cast424_cast
  %tmp_677_cast = sext i8 %tmp_508 to i9
  %tmp_510_cast = zext i9 %tmp_677_cast to i12
  %tmp_1044 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_508, i2 0)
  %tmp_1045 = sext i10 %tmp_1044 to i11
  %p_shl402_cast = zext i11 %tmp_1045 to i12
  %tmp_1046 = sub i12 %p_shl402_cast, %tmp_510_cast
  %tmp_1047 = add i12 %tmp_495_cast2, %tmp_1046
  %tmp_1474_cast = sext i12 %tmp_1047 to i15
  %tmp_1048 = call i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12 %tmp_1047, i2 0)
  %p_shl401_cast = sext i14 %tmp_1048 to i15
  %tmp_1049 = sub i15 %p_shl401_cast, %tmp_1474_cast
  %tmp_1050 = add i15 %tmp_502_cast2, %tmp_1049
  %tmp_1477_cast = zext i15 %tmp_1050 to i64
  %shuffle_conv_3x3_add_11 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1477_cast
  %shuffle_conv_3x3_loa_11 = load float* %shuffle_conv_3x3_add_11, align 4
  %tmp_511 = add i7 %co111_cast, %tmp_507
  %tmp_679_cast = sext i7 %tmp_511 to i32
  %tmp_512_cast = zext i32 %tmp_679_cast to i35
  %tmp_1051 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_511, i2 0)
  %tmp_1052 = sext i9 %tmp_1051 to i34
  %p_shl400_cast = zext i34 %tmp_1052 to i35
  %tmp_1053 = sub i35 %p_shl400_cast, %tmp_512_cast
  %tmp_1480_cast = sext i35 %tmp_1053 to i36
  %tmp_1054 = add i36 %tmp_495_cast1, %tmp_1480_cast
  %tmp_1055 = trunc i36 %tmp_1054 to i10
  %tmp_1056 = trunc i36 %tmp_1054 to i8
  %p_shl399_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1056, i2 0)
  %tmp_1057 = sub i10 %p_shl399_cast, %tmp_1055
  %tmp_1058 = add i10 %tmp_502_cast1, %tmp_1057
  %tmp_1484_cast = zext i10 %tmp_1058 to i64
  %weights_48_1_3x3_add_6 = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1484_cast
  store float %shuffle_conv_3x3_loa_11, float* %weights_48_1_3x3_add_6, align 4
  br label %.preheader513

.preheader512.loopexit:                           ; preds = %.preheader511
  br label %.preheader512

.preheader512:                                    ; preds = %.preheader512.preheader, %.preheader512.loopexit
  %i96 = phi i5 [ %i_97, %.preheader512.loopexit ], [ 0, %.preheader512.preheader ]
  %i97_cast = zext i5 %i96 to i7
  %i97_cast1 = zext i5 %i96 to i11
  %exitcond169 = icmp eq i5 %i96, -8
  %empty_471 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_97 = add i5 %i96, 1
  br i1 %exitcond169, label %123, label %.preheader511.preheader

.preheader511.preheader:                          ; preds = %.preheader512
  br label %.preheader511

.preheader511:                                    ; preds = %.preheader511.preheader, %122
  %k27 = phi i2 [ %k_28, %122 ], [ 0, %.preheader511.preheader ]
  %exitcond168 = icmp eq i2 %k27, -2
  %empty_472 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_28 = add i2 %k27, 1
  br i1 %exitcond168, label %.preheader512.loopexit, label %122

; <label>:122                                     ; preds = %.preheader511
  %tmp_1042 = trunc i2 %k27 to i1
  %p_shl120 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1042, i5 0)
  %p_shl120_cast = zext i6 %p_shl120 to i7
  %p_shl121 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1042, i3 0)
  %p_shl121_cast = zext i4 %p_shl121 to i7
  %tmp_497 = sub i7 %p_shl120_cast, %p_shl121_cast
  %tmp_656_cast = sext i7 %tmp_497 to i11
  %tmp38 = add i11 -824, %tmp_656_cast
  %tmp_498 = add i11 %i97_cast1, %tmp38
  %tmp_499 = zext i11 %tmp_498 to i64
  %bias_addr_35 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_499
  %bias_load_35 = load float* %bias_addr_35, align 4
  %tmp_500 = add i7 %tmp_497, %i97_cast
  %tmp_660_cast = sext i7 %tmp_500 to i32
  %tmp_501 = zext i32 %tmp_660_cast to i64
  %bias_48_addr_18 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_501
  store float %bias_load_35, float* %bias_48_addr_18, align 4
  br label %.preheader511

; <label>:123                                     ; preds = %.preheader512
  call fastcc void @subconv_3x3_8_no_rel([3072 x float]* @buffer1_1_48_8x8, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [3072 x float]* @buffer0_1_48_8x8) nounwind
  br label %.loopexit699

.loopexit699.loopexit:                            ; preds = %.preheader510
  br label %.loopexit699

.loopexit699:                                     ; preds = %.loopexit699.loopexit, %123
  %co112 = phi i5 [ 0, %123 ], [ %co_113, %.loopexit699.loopexit ]
  %co113_cast = zext i5 %co112 to i11
  %exitcond167 = icmp eq i5 %co112, -8
  %empty_473 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_113 = add i5 %co112, 1
  br i1 %exitcond167, label %.preheader508.preheader, label %.preheader510.preheader

.preheader508.preheader:                          ; preds = %.loopexit699
  br label %.preheader508

.preheader510.preheader:                          ; preds = %.loopexit699
  %tmp_1041 = trunc i5 %co112 to i1
  %p_shl122 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1041, i5 0)
  %p_shl122_cast = zext i6 %p_shl122 to i7
  %p_shl123 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1041, i3 0)
  %p_shl123_cast = zext i4 %p_shl123 to i7
  %tmp_496 = sub i7 %p_shl122_cast, %p_shl123_cast
  %p_lshr_f12_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co112, i32 1, i32 4)
  %tmp_664_cast = zext i4 %p_lshr_f12_cast to i7
  br label %.preheader510

.preheader510.loopexit:                           ; preds = %.preheader509
  br label %.preheader510

.preheader510:                                    ; preds = %.preheader510.loopexit, %.preheader510.preheader
  %ci50 = phi i5 [ 0, %.preheader510.preheader ], [ %ci_51, %.preheader510.loopexit ]
  %ci50_cast = zext i5 %ci50 to i7
  %exitcond166 = icmp eq i5 %ci50, -8
  %empty_474 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_51 = add i5 %ci50, 1
  br i1 %exitcond166, label %.loopexit699.loopexit, label %.preheader509.preheader

.preheader509.preheader:                          ; preds = %.preheader510
  %tmp_503_cast = zext i5 %ci50 to i18
  %tmp_504 = add i7 %tmp_496, %ci50_cast
  %tmp_505_cast = sext i7 %tmp_504 to i13
  br label %.preheader509

.preheader509:                                    ; preds = %124, %.preheader509.preheader
  %i102 = phi i3 [ %i_103, %124 ], [ 0, %.preheader509.preheader ]
  %exitcond165 = icmp eq i3 %i102, -4
  %empty_475 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_103 = add i3 %i102, 1
  br i1 %exitcond165, label %.preheader510.loopexit, label %124

; <label>:124                                     ; preds = %.preheader509
  %tmp_1061 = trunc i3 %i102 to i2
  %p_shl128 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1061, i5 0)
  %p_shl128_cast = zext i7 %p_shl128 to i8
  %p_shl129 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1061, i3 0)
  %p_shl129_cast = zext i5 %p_shl129 to i8
  %tmp_518 = sub i8 %p_shl128_cast, %p_shl129_cast
  %tmp_682_cast = sext i8 %tmp_518 to i11
  %tmp39 = add i11 -680, %tmp_682_cast
  %tmp_519 = add i11 %tmp39, %co113_cast
  %tmp_1062 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_519, i5 0)
  %p_shl405_cast = zext i16 %tmp_1062 to i17
  %tmp_1063 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_519, i3 0)
  %p_shl406_cast = zext i14 %tmp_1063 to i17
  %tmp_1064 = sub i17 %p_shl405_cast, %p_shl406_cast
  %tmp_1493_cast = sext i17 %tmp_1064 to i18
  %tmp_1065 = add i18 %tmp_503_cast, %tmp_1493_cast
  %tmp_1494_cast = sext i18 %tmp_1065 to i64
  %shuffle_conv_1x1_add_21 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1494_cast
  %shuffle_conv_1x1_loa_21 = load float* %shuffle_conv_1x1_add_21, align 4
  %p_shl130 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1061, i4 0)
  %p_shl130_cast = zext i6 %p_shl130 to i7
  %p_shl131 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1061, i2 0)
  %p_shl131_cast = zext i4 %p_shl131 to i7
  %tmp_520 = sub i7 %p_shl130_cast, %p_shl131_cast
  %tmp_521 = add i7 %tmp_520, %tmp_664_cast
  %tmp_1066 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_521, i6 0)
  %tmp_1067 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_521, i4 0)
  %p_shl404_cast = sext i11 %tmp_1067 to i13
  %tmp_1068 = sub i13 %tmp_1066, %p_shl404_cast
  %tmp_1069 = add i13 %tmp_505_cast, %tmp_1068
  %tmp_1502_cast = sext i13 %tmp_1069 to i64
  %weights_48_48_1x1_ad_12 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1502_cast
  store float %shuffle_conv_1x1_loa_21, float* %weights_48_48_1x1_ad_12, align 4
  br label %.preheader509

.preheader508.loopexit:                           ; preds = %.preheader507
  br label %.preheader508

.preheader508:                                    ; preds = %.preheader508.preheader, %.preheader508.loopexit
  %i98 = phi i5 [ %i_99, %.preheader508.loopexit ], [ 0, %.preheader508.preheader ]
  %i99_cast = zext i5 %i98 to i7
  %i99_cast1 = zext i5 %i98 to i11
  %exitcond164 = icmp eq i5 %i98, -8
  %empty_476 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_99 = add i5 %i98, 1
  br i1 %exitcond164, label %126, label %.preheader507.preheader

.preheader507.preheader:                          ; preds = %.preheader508
  br label %.preheader507

.preheader507:                                    ; preds = %.preheader507.preheader, %125
  %k29 = phi i2 [ %k_30, %125 ], [ 0, %.preheader507.preheader ]
  %exitcond163 = icmp eq i2 %k29, -2
  %empty_477 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_30 = add i2 %k29, 1
  br i1 %exitcond163, label %.preheader508.loopexit, label %125

; <label>:125                                     ; preds = %.preheader507
  %tmp_1060 = trunc i2 %k29 to i1
  %p_shl124 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1060, i5 0)
  %p_shl124_cast = zext i6 %p_shl124 to i7
  %p_shl125 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1060, i3 0)
  %p_shl125_cast = zext i4 %p_shl125 to i7
  %tmp_513 = sub i7 %p_shl124_cast, %p_shl125_cast
  %tmp_666_cast = sext i7 %tmp_513 to i11
  %tmp40 = add i11 -776, %tmp_666_cast
  %tmp_514 = add i11 %i99_cast1, %tmp40
  %tmp_515 = zext i11 %tmp_514 to i64
  %bias_addr_36 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_515
  %bias_load_36 = load float* %bias_addr_36, align 4
  %tmp_516 = add i7 %tmp_513, %i99_cast
  %tmp_670_cast = sext i7 %tmp_516 to i32
  %tmp_517 = zext i32 %tmp_670_cast to i64
  %bias_48_addr_19 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_517
  store float %bias_load_36, float* %bias_48_addr_19, align 4
  br label %.preheader507

; <label>:126                                     ; preds = %.preheader508
  call fastcc void @subconv_1x1_8([3072 x float]* @buffer0_1_48_8x8, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [3072 x float]* @buffer1_1_48_8x8) nounwind
  br label %.loopexit698

.loopexit698.loopexit:                            ; preds = %.preheader506
  br label %.loopexit698

.loopexit698:                                     ; preds = %.loopexit698.loopexit, %126
  %co114 = phi i6 [ 0, %126 ], [ %co_115, %.loopexit698.loopexit ]
  %exitcond162 = icmp eq i6 %co114, -16
  %empty_478 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_115 = add i6 %co114, 1
  br i1 %exitcond162, label %128, label %.preheader506.preheader

.preheader506.preheader:                          ; preds = %.loopexit698
  %tmp_1059 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co114, i3 0)
  %tmp_1486_cast = zext i9 %tmp_1059 to i10
  br label %.preheader506

.preheader506.loopexit:                           ; preds = %.preheader505
  br label %.preheader506

.preheader506:                                    ; preds = %.preheader506.loopexit, %.preheader506.preheader
  %h75 = phi i4 [ 0, %.preheader506.preheader ], [ %h_76, %.preheader506.loopexit ]
  %exitcond161 = icmp eq i4 %h75, -8
  %empty_479 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_76 = add i4 %h75, 1
  br i1 %exitcond161, label %.loopexit698.loopexit, label %.preheader505.preheader

.preheader505.preheader:                          ; preds = %.preheader506
  %tmp_523_cast = zext i4 %h75 to i10
  %tmp_1072 = add i10 %tmp_1486_cast, %tmp_523_cast
  %tmp_1073 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1072, i3 0)
  %tmp_1509_cast = zext i13 %tmp_1073 to i14
  br label %.preheader505

.preheader505:                                    ; preds = %127, %.preheader505.preheader
  %w75 = phi i4 [ %w_76, %127 ], [ 0, %.preheader505.preheader ]
  %exitcond160 = icmp eq i4 %w75, -8
  %empty_480 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_76 = add i4 %w75, 1
  br i1 %exitcond160, label %.preheader506.loopexit, label %127

; <label>:127                                     ; preds = %.preheader505
  %tmp_527_cast = zext i4 %w75 to i14
  %tmp_1077 = add i14 %tmp_1509_cast, %tmp_527_cast
  %tmp_1518_cast = zext i14 %tmp_1077 to i64
  %shuffleunit1_3_outpu_2 = getelementptr [6144 x float]* @shuffleunit1_3_outpu, i64 0, i64 %tmp_1518_cast
  %buffer0_1_48_8x8_add_9 = getelementptr [3072 x float]* @buffer0_1_48_8x8, i64 0, i64 %tmp_1518_cast
  %shuffleunit1_3_outpu_3 = load float* %shuffleunit1_3_outpu_2, align 4
  store float %shuffleunit1_3_outpu_3, float* %buffer0_1_48_8x8_add_9, align 4
  br label %.preheader505

; <label>:128                                     ; preds = %.loopexit698
  call fastcc void @shuffle_48([3072 x float]* @buffer0_1_48_8x8, [6144 x float]* @shuffleunit1_4_outpu) nounwind
  br label %.loopexit697

.loopexit697.loopexit:                            ; preds = %.preheader504
  br label %.loopexit697

.loopexit697:                                     ; preds = %.loopexit697.loopexit, %128
  %co116 = phi i6 [ 0, %128 ], [ %co_117, %.loopexit697.loopexit ]
  %co116_cast = zext i6 %co116 to i7
  %exitcond159 = icmp eq i6 %co116, -16
  %empty_481 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_117 = add i6 %co116, 1
  br i1 %exitcond159, label %.preheader502.preheader, label %.preheader504.preheader

.preheader502.preheader:                          ; preds = %.loopexit697
  br label %.preheader502

.preheader504.preheader:                          ; preds = %.loopexit697
  %tmp_522 = add i7 %co116_cast, 48
  %tmp_1070 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_522, i3 0)
  %tmp_1504_cast = zext i10 %tmp_1070 to i11
  %tmp_1071 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co116, i3 0)
  %tmp_1506_cast = zext i9 %tmp_1071 to i10
  br label %.preheader504

.preheader504.loopexit:                           ; preds = %.preheader503
  br label %.preheader504

.preheader504:                                    ; preds = %.preheader504.loopexit, %.preheader504.preheader
  %h77 = phi i4 [ 0, %.preheader504.preheader ], [ %h_78, %.preheader504.loopexit ]
  %exitcond158 = icmp eq i4 %h77, -8
  %empty_482 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_78 = add i4 %h77, 1
  br i1 %exitcond158, label %.loopexit697.loopexit, label %.preheader503.preheader

.preheader503.preheader:                          ; preds = %.preheader504
  %tmp_525_cast = zext i4 %h77 to i10
  %tmp_525_cast1 = zext i4 %h77 to i11
  %tmp_1075 = add i11 %tmp_525_cast1, %tmp_1504_cast
  %tmp_1514_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1075, i3 0)
  %tmp_1076 = add i10 %tmp_525_cast, %tmp_1506_cast
  %tmp_1517_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1076, i3 0)
  br label %.preheader503

.preheader503:                                    ; preds = %129, %.preheader503.preheader
  %w77 = phi i4 [ %w_78, %129 ], [ 0, %.preheader503.preheader ]
  %exitcond157 = icmp eq i4 %w77, -8
  %empty_483 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_78 = add i4 %w77, 1
  br i1 %exitcond157, label %.preheader504.loopexit, label %129

; <label>:129                                     ; preds = %.preheader503
  %tmp_531_cast1 = zext i4 %w77 to i13
  %tmp_531_cast = zext i4 %w77 to i14
  %tmp_1078 = add i14 %tmp_1514_cast, %tmp_531_cast
  %tmp_1519_cast = zext i14 %tmp_1078 to i64
  %shuffleunit1_4_outpu = getelementptr [6144 x float]* @shuffleunit1_4_outpu, i64 0, i64 %tmp_1519_cast
  %tmp_1079 = add i13 %tmp_1517_cast, %tmp_531_cast1
  %tmp_1520_cast = zext i13 %tmp_1079 to i64
  %buffer0_1_48_8x8_add_10 = getelementptr [3072 x float]* @buffer0_1_48_8x8, i64 0, i64 %tmp_1520_cast
  %shuffleunit1_4_outpu_1 = load float* %shuffleunit1_4_outpu, align 4
  store float %shuffleunit1_4_outpu_1, float* %buffer0_1_48_8x8_add_10, align 4
  br label %.preheader503

.preheader502.loopexit:                           ; preds = %.preheader501
  br label %.preheader502

.preheader502:                                    ; preds = %.preheader502.preheader, %.preheader502.loopexit
  %co118 = phi i5 [ %co_119, %.preheader502.loopexit ], [ 0, %.preheader502.preheader ]
  %co118_cast = zext i5 %co118 to i11
  %exitcond156 = icmp eq i5 %co118, -8
  %empty_484 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_119 = add i5 %co118, 1
  br i1 %exitcond156, label %.preheader499.preheader, label %.preheader501.preheader

.preheader499.preheader:                          ; preds = %.preheader502
  br label %.preheader499

.preheader501.preheader:                          ; preds = %.preheader502
  %tmp_1074 = trunc i5 %co118 to i1
  %p_shl132 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1074, i5 0)
  %p_shl132_cast = zext i6 %p_shl132 to i7
  %p_shl133 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1074, i3 0)
  %p_shl133_cast = zext i4 %p_shl133 to i7
  %tmp_524 = sub i7 %p_shl132_cast, %p_shl133_cast
  %p_lshr_f13_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co118, i32 1, i32 4)
  %tmp_694_cast = zext i4 %p_lshr_f13_cast to i7
  br label %.preheader501

.preheader501.loopexit:                           ; preds = %.preheader500
  br label %.preheader501

.preheader501:                                    ; preds = %.preheader501.loopexit, %.preheader501.preheader
  %ci52 = phi i5 [ 0, %.preheader501.preheader ], [ %ci_53, %.preheader501.loopexit ]
  %ci52_cast = zext i5 %ci52 to i7
  %exitcond155 = icmp eq i5 %ci52, -8
  %empty_485 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_53 = add i5 %ci52, 1
  br i1 %exitcond155, label %.preheader502.loopexit, label %.preheader500.preheader

.preheader500.preheader:                          ; preds = %.preheader501
  %tmp_528_cast = zext i5 %ci52 to i18
  %tmp_529 = add i7 %tmp_524, %ci52_cast
  %tmp_530_cast = sext i7 %tmp_529 to i13
  br label %.preheader500

.preheader500:                                    ; preds = %130, %.preheader500.preheader
  %i106 = phi i3 [ %i_107, %130 ], [ 0, %.preheader500.preheader ]
  %exitcond154 = icmp eq i3 %i106, -4
  %empty_486 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_107 = add i3 %i106, 1
  br i1 %exitcond154, label %.preheader501.loopexit, label %130

; <label>:130                                     ; preds = %.preheader500
  %tmp_1081 = trunc i3 %i106 to i2
  %p_shl136 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1081, i5 0)
  %p_shl136_cast = zext i7 %p_shl136 to i8
  %p_shl137 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1081, i3 0)
  %p_shl137_cast = zext i5 %p_shl137 to i8
  %tmp_541 = sub i8 %p_shl136_cast, %p_shl137_cast
  %tmp_709_cast = sext i8 %tmp_541 to i11
  %tmp41 = add i11 -584, %tmp_709_cast
  %tmp_542 = add i11 %tmp41, %co118_cast
  %tmp_1082 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_542, i5 0)
  %p_shl409_cast = zext i16 %tmp_1082 to i17
  %tmp_1083 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_542, i3 0)
  %p_shl410_cast = zext i14 %tmp_1083 to i17
  %tmp_1084 = sub i17 %p_shl409_cast, %p_shl410_cast
  %tmp_1527_cast = sext i17 %tmp_1084 to i18
  %tmp_1085 = add i18 %tmp_528_cast, %tmp_1527_cast
  %tmp_1528_cast = sext i18 %tmp_1085 to i64
  %shuffle_conv_1x1_add_22 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1528_cast
  %shuffle_conv_1x1_loa_22 = load float* %shuffle_conv_1x1_add_22, align 4
  %p_shl138 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1081, i4 0)
  %p_shl138_cast = zext i6 %p_shl138 to i7
  %p_shl139 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1081, i2 0)
  %p_shl139_cast = zext i4 %p_shl139 to i7
  %tmp_543 = sub i7 %p_shl138_cast, %p_shl139_cast
  %tmp_544 = add i7 %tmp_543, %tmp_694_cast
  %tmp_1086 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_544, i6 0)
  %tmp_1087 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_544, i4 0)
  %p_shl408_cast = sext i11 %tmp_1087 to i13
  %tmp_1088 = sub i13 %tmp_1086, %p_shl408_cast
  %tmp_1089 = add i13 %tmp_530_cast, %tmp_1088
  %tmp_1536_cast = sext i13 %tmp_1089 to i64
  %weights_48_48_1x1_ad_13 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1536_cast
  store float %shuffle_conv_1x1_loa_22, float* %weights_48_48_1x1_ad_13, align 4
  br label %.preheader500

.preheader499.loopexit:                           ; preds = %.preheader498
  br label %.preheader499

.preheader499:                                    ; preds = %.preheader499.preheader, %.preheader499.loopexit
  %i104 = phi i5 [ %i_105, %.preheader499.loopexit ], [ 0, %.preheader499.preheader ]
  %i105_cast = zext i5 %i104 to i7
  %i105_cast1 = zext i5 %i104 to i11
  %exitcond153 = icmp eq i5 %i104, -8
  %empty_487 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_105 = add i5 %i104, 1
  br i1 %exitcond153, label %132, label %.preheader498.preheader

.preheader498.preheader:                          ; preds = %.preheader499
  br label %.preheader498

.preheader498:                                    ; preds = %.preheader498.preheader, %131
  %k31 = phi i2 [ %k_32, %131 ], [ 0, %.preheader498.preheader ]
  %exitcond152 = icmp eq i2 %k31, -2
  %empty_488 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_32 = add i2 %k31, 1
  br i1 %exitcond152, label %.preheader499.loopexit, label %131

; <label>:131                                     ; preds = %.preheader498
  %tmp_1080 = trunc i2 %k31 to i1
  %p_shl134 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1080, i5 0)
  %p_shl134_cast = zext i6 %p_shl134 to i7
  %p_shl135 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1080, i3 0)
  %p_shl135_cast = zext i4 %p_shl135 to i7
  %tmp_532 = sub i7 %p_shl134_cast, %p_shl135_cast
  %tmp_698_cast = sext i7 %tmp_532 to i11
  %tmp42 = add i11 -728, %tmp_698_cast
  %tmp_533 = add i11 %i105_cast1, %tmp42
  %tmp_535 = zext i11 %tmp_533 to i64
  %bias_addr_37 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_535
  %bias_load_37 = load float* %bias_addr_37, align 4
  %tmp_536 = add i7 %tmp_532, %i105_cast
  %tmp_702_cast = sext i7 %tmp_536 to i32
  %tmp_538 = zext i32 %tmp_702_cast to i64
  %bias_48_addr_20 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_538
  store float %bias_load_37, float* %bias_48_addr_20, align 4
  br label %.preheader498

; <label>:132                                     ; preds = %.preheader499
  call fastcc void @subconv_1x1_8([3072 x float]* @buffer0_1_48_8x8, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [3072 x float]* @buffer1_1_48_8x8) nounwind
  br label %.loopexit696

.loopexit696.loopexit:                            ; preds = %.preheader497
  br label %.loopexit696

.loopexit696:                                     ; preds = %.loopexit696.loopexit, %132
  %co120 = phi i5 [ 0, %132 ], [ %co_121, %.loopexit696.loopexit ]
  %co121_cast = zext i5 %co120 to i7
  %co121_cast382_cast = zext i5 %co120 to i8
  %exitcond151 = icmp eq i5 %co120, -8
  %empty_489 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_121 = add i5 %co120, 1
  br i1 %exitcond151, label %.preheader494.preheader, label %.preheader497.preheader

.preheader497.preheader:                          ; preds = %.loopexit696
  br label %.preheader497

.preheader494.preheader:                          ; preds = %.loopexit696
  br label %.preheader494

.preheader497.loopexit:                           ; preds = %.preheader496
  br label %.preheader497

.preheader497:                                    ; preds = %.preheader497.preheader, %.preheader497.loopexit
  %w79 = phi i2 [ %w_80, %.preheader497.loopexit ], [ 0, %.preheader497.preheader ]
  %exitcond150 = icmp eq i2 %w79, -1
  %empty_490 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_80 = add i2 %w79, 1
  br i1 %exitcond150, label %.loopexit696.loopexit, label %.preheader496.preheader

.preheader496.preheader:                          ; preds = %.preheader497
  %tmp_545_cast1 = zext i2 %w79 to i36
  %tmp_545_cast = zext i2 %w79 to i13
  br label %.preheader496

.preheader496.loopexit:                           ; preds = %.preheader495
  br label %.preheader496

.preheader496:                                    ; preds = %.preheader496.loopexit, %.preheader496.preheader
  %h79 = phi i2 [ 0, %.preheader496.preheader ], [ %h_80, %.preheader496.loopexit ]
  %exitcond149 = icmp eq i2 %h79, -1
  %empty_491 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_80 = add i2 %h79, 1
  br i1 %exitcond149, label %.preheader497.loopexit, label %.preheader495.preheader

.preheader495.preheader:                          ; preds = %.preheader496
  %tmp_552_cast1 = zext i2 %h79 to i10
  %tmp_552_cast = zext i2 %h79 to i15
  br label %.preheader495

.preheader495:                                    ; preds = %133, %.preheader495.preheader
  %i112 = phi i2 [ %i_113, %133 ], [ 0, %.preheader495.preheader ]
  %exitcond148 = icmp eq i2 %i112, -2
  %empty_492 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_113 = add i2 %i112, 1
  br i1 %exitcond148, label %.preheader496.loopexit, label %133

; <label>:133                                     ; preds = %.preheader495
  %tmp_1092 = trunc i2 %i112 to i1
  %p_shl146 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1092, i5 0)
  %p_shl146_cast = zext i6 %p_shl146 to i7
  %p_shl147 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1092, i3 0)
  %p_shl147_cast = zext i4 %p_shl147 to i7
  %tmp_557 = sub i7 %p_shl146_cast, %p_shl147_cast
  %tmp_735_cast_cast = sext i7 %tmp_557 to i8
  %tmp43 = add i8 -56, %tmp_735_cast_cast
  %tmp_558 = add i8 %co121_cast382_cast, %tmp43
  %tmp_737_cast = sext i8 %tmp_558 to i9
  %tmp_560_cast = zext i9 %tmp_737_cast to i12
  %tmp_1093 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_558, i2 0)
  %tmp_1094 = sext i10 %tmp_1093 to i11
  %p_shl414_cast = zext i11 %tmp_1094 to i12
  %tmp_1095 = sub i12 %p_shl414_cast, %tmp_560_cast
  %tmp_1545_cast = sext i12 %tmp_1095 to i13
  %tmp_1096 = add i13 %tmp_1545_cast, %tmp_545_cast
  %tmp_1546_cast = sext i13 %tmp_1096 to i15
  %p_shl413_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1096, i2 0)
  %tmp_1097 = sub i15 %p_shl413_cast, %tmp_1546_cast
  %tmp_1098 = add i15 %tmp_1097, %tmp_552_cast
  %tmp_1549_cast = zext i15 %tmp_1098 to i64
  %shuffle_conv_3x3_add_12 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1549_cast
  %shuffle_conv_3x3_loa_12 = load float* %shuffle_conv_3x3_add_12, align 4
  %tmp_561 = add i7 %tmp_557, %co121_cast
  %tmp_739_cast = sext i7 %tmp_561 to i32
  %tmp_562_cast1 = zext i32 %tmp_739_cast to i35
  %tmp_1099 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_561, i2 0)
  %tmp_1100 = sext i9 %tmp_1099 to i34
  %p_shl412_cast = zext i34 %tmp_1100 to i35
  %tmp_1101 = sub i35 %p_shl412_cast, %tmp_562_cast1
  %tmp_1552_cast = sext i35 %tmp_1101 to i36
  %tmp_1102 = add i36 %tmp_1552_cast, %tmp_545_cast1
  %tmp_1103 = trunc i36 %tmp_1102 to i10
  %tmp_1104 = trunc i36 %tmp_1102 to i8
  %p_shl411_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1104, i2 0)
  %tmp_1105 = sub i10 %p_shl411_cast, %tmp_1103
  %tmp_1106 = add i10 %tmp_1105, %tmp_552_cast1
  %tmp_1556_cast = zext i10 %tmp_1106 to i64
  %weights_48_1_3x3_add_7 = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1556_cast
  store float %shuffle_conv_3x3_loa_12, float* %weights_48_1_3x3_add_7, align 4
  br label %.preheader495

.preheader494.loopexit:                           ; preds = %.preheader493
  br label %.preheader494

.preheader494:                                    ; preds = %.preheader494.preheader, %.preheader494.loopexit
  %i108 = phi i5 [ %i_109, %.preheader494.loopexit ], [ 0, %.preheader494.preheader ]
  %i109_cast = zext i5 %i108 to i7
  %i109_cast1 = zext i5 %i108 to i11
  %exitcond147 = icmp eq i5 %i108, -8
  %empty_493 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_109 = add i5 %i108, 1
  br i1 %exitcond147, label %135, label %.preheader493.preheader

.preheader493.preheader:                          ; preds = %.preheader494
  br label %.preheader493

.preheader493:                                    ; preds = %.preheader493.preheader, %134
  %k33 = phi i2 [ %k_34, %134 ], [ 0, %.preheader493.preheader ]
  %exitcond146 = icmp eq i2 %k33, -2
  %empty_494 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_34 = add i2 %k33, 1
  br i1 %exitcond146, label %.preheader494.loopexit, label %134

; <label>:134                                     ; preds = %.preheader493
  %tmp_1091 = trunc i2 %k33 to i1
  %p_shl140 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1091, i5 0)
  %p_shl140_cast = zext i6 %p_shl140 to i7
  %p_shl141 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1091, i3 0)
  %p_shl141_cast = zext i4 %p_shl141 to i7
  %tmp_547 = sub i7 %p_shl140_cast, %p_shl141_cast
  %tmp_716_cast = sext i7 %tmp_547 to i11
  %tmp44 = add i11 -680, %tmp_716_cast
  %tmp_548 = add i11 %i109_cast1, %tmp44
  %tmp_549 = zext i11 %tmp_548 to i64
  %bias_addr_38 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_549
  %bias_load_38 = load float* %bias_addr_38, align 4
  %tmp_550 = add i7 %tmp_547, %i109_cast
  %tmp_720_cast = sext i7 %tmp_550 to i32
  %tmp_551 = zext i32 %tmp_720_cast to i64
  %bias_48_addr_21 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_551
  store float %bias_load_38, float* %bias_48_addr_21, align 4
  br label %.preheader493

; <label>:135                                     ; preds = %.preheader494
  call fastcc void @subconv_3x3_8_no_rel([3072 x float]* @buffer1_1_48_8x8, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [3072 x float]* @buffer0_1_48_8x8) nounwind
  br label %.loopexit695

.loopexit695.loopexit:                            ; preds = %.preheader492
  br label %.loopexit695

.loopexit695:                                     ; preds = %.loopexit695.loopexit, %135
  %co122 = phi i5 [ 0, %135 ], [ %co_123, %.loopexit695.loopexit ]
  %co123_cast = zext i5 %co122 to i11
  %exitcond145 = icmp eq i5 %co122, -8
  %empty_495 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_123 = add i5 %co122, 1
  br i1 %exitcond145, label %.preheader490.preheader, label %.preheader492.preheader

.preheader490.preheader:                          ; preds = %.loopexit695
  br label %.preheader490

.preheader492.preheader:                          ; preds = %.loopexit695
  %tmp_1090 = trunc i5 %co122 to i1
  %p_shl142 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1090, i5 0)
  %p_shl142_cast = zext i6 %p_shl142 to i7
  %p_shl143 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1090, i3 0)
  %p_shl143_cast = zext i4 %p_shl143 to i7
  %tmp_546 = sub i7 %p_shl142_cast, %p_shl143_cast
  %p_lshr_f14_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co122, i32 1, i32 4)
  %tmp_724_cast = zext i4 %p_lshr_f14_cast to i7
  br label %.preheader492

.preheader492.loopexit:                           ; preds = %.preheader491
  br label %.preheader492

.preheader492:                                    ; preds = %.preheader492.loopexit, %.preheader492.preheader
  %ci54 = phi i5 [ 0, %.preheader492.preheader ], [ %ci_55, %.preheader492.loopexit ]
  %ci54_cast = zext i5 %ci54 to i7
  %exitcond144 = icmp eq i5 %ci54, -8
  %empty_496 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_55 = add i5 %ci54, 1
  br i1 %exitcond144, label %.loopexit695.loopexit, label %.preheader491.preheader

.preheader491.preheader:                          ; preds = %.preheader492
  %tmp_553_cast = zext i5 %ci54 to i18
  %tmp_554 = add i7 %tmp_546, %ci54_cast
  %tmp_555_cast1 = sext i7 %tmp_554 to i13
  br label %.preheader491

.preheader491:                                    ; preds = %136, %.preheader491.preheader
  %i114 = phi i3 [ %i_115, %136 ], [ 0, %.preheader491.preheader ]
  %exitcond143 = icmp eq i3 %i114, -4
  %empty_497 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_115 = add i3 %i114, 1
  br i1 %exitcond143, label %.preheader492.loopexit, label %136

; <label>:136                                     ; preds = %.preheader491
  %tmp_1109 = trunc i3 %i114 to i2
  %p_shl148 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1109, i5 0)
  %p_shl148_cast = zext i7 %p_shl148 to i8
  %p_shl149 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1109, i3 0)
  %p_shl149_cast = zext i5 %p_shl149 to i8
  %tmp_568 = sub i8 %p_shl148_cast, %p_shl149_cast
  %tmp_742_cast = sext i8 %tmp_568 to i11
  %tmp45 = add i11 -488, %tmp_742_cast
  %tmp_569 = add i11 %tmp45, %co123_cast
  %tmp_1110 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_569, i5 0)
  %p_shl417_cast = zext i16 %tmp_1110 to i17
  %tmp_1111 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_569, i3 0)
  %p_shl418_cast = zext i14 %tmp_1111 to i17
  %tmp_1112 = sub i17 %p_shl417_cast, %p_shl418_cast
  %tmp_1565_cast = sext i17 %tmp_1112 to i18
  %tmp_1113 = add i18 %tmp_553_cast, %tmp_1565_cast
  %tmp_1566_cast = sext i18 %tmp_1113 to i64
  %shuffle_conv_1x1_add_23 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1566_cast
  %shuffle_conv_1x1_loa_23 = load float* %shuffle_conv_1x1_add_23, align 4
  %p_shl150 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1109, i4 0)
  %p_shl150_cast = zext i6 %p_shl150 to i7
  %p_shl151 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1109, i2 0)
  %p_shl151_cast = zext i4 %p_shl151 to i7
  %tmp_570 = sub i7 %p_shl150_cast, %p_shl151_cast
  %tmp_571 = add i7 %tmp_570, %tmp_724_cast
  %tmp_1114 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_571, i6 0)
  %tmp_1115 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_571, i4 0)
  %p_shl416_cast = sext i11 %tmp_1115 to i13
  %tmp_1116 = sub i13 %tmp_1114, %p_shl416_cast
  %tmp_1117 = add i13 %tmp_555_cast1, %tmp_1116
  %tmp_1574_cast = sext i13 %tmp_1117 to i64
  %weights_48_48_1x1_ad_14 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1574_cast
  store float %shuffle_conv_1x1_loa_23, float* %weights_48_48_1x1_ad_14, align 4
  br label %.preheader491

.preheader490.loopexit:                           ; preds = %.preheader489
  br label %.preheader490

.preheader490:                                    ; preds = %.preheader490.preheader, %.preheader490.loopexit
  %i110 = phi i5 [ %i_111, %.preheader490.loopexit ], [ 0, %.preheader490.preheader ]
  %i111_cast = zext i5 %i110 to i7
  %i111_cast1 = zext i5 %i110 to i11
  %exitcond142 = icmp eq i5 %i110, -8
  %empty_498 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_111 = add i5 %i110, 1
  br i1 %exitcond142, label %138, label %.preheader489.preheader

.preheader489.preheader:                          ; preds = %.preheader490
  br label %.preheader489

.preheader489:                                    ; preds = %.preheader489.preheader, %137
  %k35 = phi i2 [ %k_36, %137 ], [ 0, %.preheader489.preheader ]
  %exitcond141 = icmp eq i2 %k35, -2
  %empty_499 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_36 = add i2 %k35, 1
  br i1 %exitcond141, label %.preheader490.loopexit, label %137

; <label>:137                                     ; preds = %.preheader489
  %tmp_1108 = trunc i2 %k35 to i1
  %p_shl144 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1108, i5 0)
  %p_shl144_cast = zext i6 %p_shl144 to i7
  %p_shl145 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1108, i3 0)
  %p_shl145_cast = zext i4 %p_shl145 to i7
  %tmp_563 = sub i7 %p_shl144_cast, %p_shl145_cast
  %tmp_726_cast = sext i7 %tmp_563 to i11
  %tmp46 = add i11 -632, %tmp_726_cast
  %tmp_564 = add i11 %i111_cast1, %tmp46
  %tmp_565 = zext i11 %tmp_564 to i64
  %bias_addr_39 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_565
  %bias_load_39 = load float* %bias_addr_39, align 4
  %tmp_566 = add i7 %tmp_563, %i111_cast
  %tmp_730_cast = sext i7 %tmp_566 to i32
  %tmp_567 = zext i32 %tmp_730_cast to i64
  %bias_48_addr_22 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_567
  store float %bias_load_39, float* %bias_48_addr_22, align 4
  br label %.preheader489

; <label>:138                                     ; preds = %.preheader490
  call fastcc void @subconv_1x1_8([3072 x float]* @buffer0_1_48_8x8, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [3072 x float]* @buffer1_1_48_8x8) nounwind
  br label %.loopexit694

.loopexit694.loopexit:                            ; preds = %.preheader488
  br label %.loopexit694

.loopexit694:                                     ; preds = %.loopexit694.loopexit, %138
  %co124 = phi i6 [ 0, %138 ], [ %co_125, %.loopexit694.loopexit ]
  %exitcond140 = icmp eq i6 %co124, -16
  %empty_500 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_125 = add i6 %co124, 1
  br i1 %exitcond140, label %140, label %.preheader488.preheader

.preheader488.preheader:                          ; preds = %.loopexit694
  %tmp_1107 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co124, i3 0)
  %tmp_1558_cast = zext i9 %tmp_1107 to i10
  br label %.preheader488

.preheader488.loopexit:                           ; preds = %.preheader487
  br label %.preheader488

.preheader488:                                    ; preds = %.preheader488.loopexit, %.preheader488.preheader
  %h81 = phi i4 [ 0, %.preheader488.preheader ], [ %h_82, %.preheader488.loopexit ]
  %exitcond139 = icmp eq i4 %h81, -8
  %empty_501 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_82 = add i4 %h81, 1
  br i1 %exitcond139, label %.loopexit694.loopexit, label %.preheader487.preheader

.preheader487.preheader:                          ; preds = %.preheader488
  %tmp_573_cast = zext i4 %h81 to i10
  %tmp_1120 = add i10 %tmp_1558_cast, %tmp_573_cast
  %tmp_1121 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1120, i3 0)
  %tmp_1581_cast = zext i13 %tmp_1121 to i14
  br label %.preheader487

.preheader487:                                    ; preds = %139, %.preheader487.preheader
  %w81 = phi i4 [ %w_82, %139 ], [ 0, %.preheader487.preheader ]
  %exitcond138 = icmp eq i4 %w81, -8
  %empty_502 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_82 = add i4 %w81, 1
  br i1 %exitcond138, label %.preheader488.loopexit, label %139

; <label>:139                                     ; preds = %.preheader487
  %tmp_577_cast = zext i4 %w81 to i14
  %tmp_1125 = add i14 %tmp_1581_cast, %tmp_577_cast
  %tmp_1590_cast = zext i14 %tmp_1125 to i64
  %shuffleunit1_4_outpu_2 = getelementptr [6144 x float]* @shuffleunit1_4_outpu, i64 0, i64 %tmp_1590_cast
  %buffer0_1_48_8x8_add_11 = getelementptr [3072 x float]* @buffer0_1_48_8x8, i64 0, i64 %tmp_1590_cast
  %shuffleunit1_4_outpu_3 = load float* %shuffleunit1_4_outpu_2, align 4
  store float %shuffleunit1_4_outpu_3, float* %buffer0_1_48_8x8_add_11, align 4
  br label %.preheader487

; <label>:140                                     ; preds = %.loopexit694
  call fastcc void @shuffle_48([3072 x float]* @buffer0_1_48_8x8, [6144 x float]* @shuffleunit1_5_outpu) nounwind
  br label %.loopexit693

.loopexit693.loopexit:                            ; preds = %.preheader486
  br label %.loopexit693

.loopexit693:                                     ; preds = %.loopexit693.loopexit, %140
  %co126 = phi i6 [ 0, %140 ], [ %co_127, %.loopexit693.loopexit ]
  %co126_cast = zext i6 %co126 to i7
  %exitcond137 = icmp eq i6 %co126, -16
  %empty_503 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_127 = add i6 %co126, 1
  br i1 %exitcond137, label %.preheader484.preheader, label %.preheader486.preheader

.preheader484.preheader:                          ; preds = %.loopexit693
  br label %.preheader484

.preheader486.preheader:                          ; preds = %.loopexit693
  %tmp_572 = add i7 %co126_cast, 48
  %tmp_1118 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_572, i3 0)
  %tmp_1576_cast = zext i10 %tmp_1118 to i11
  %tmp_1119 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co126, i3 0)
  %tmp_1578_cast = zext i9 %tmp_1119 to i10
  br label %.preheader486

.preheader486.loopexit:                           ; preds = %.preheader485
  br label %.preheader486

.preheader486:                                    ; preds = %.preheader486.loopexit, %.preheader486.preheader
  %h83 = phi i4 [ 0, %.preheader486.preheader ], [ %h_84, %.preheader486.loopexit ]
  %exitcond136 = icmp eq i4 %h83, -8
  %empty_504 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_84 = add i4 %h83, 1
  br i1 %exitcond136, label %.loopexit693.loopexit, label %.preheader485.preheader

.preheader485.preheader:                          ; preds = %.preheader486
  %tmp_575_cast1 = zext i4 %h83 to i10
  %tmp_575_cast = zext i4 %h83 to i11
  %tmp_1123 = add i11 %tmp_575_cast, %tmp_1576_cast
  %tmp_1586_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1123, i3 0)
  %tmp_1124 = add i10 %tmp_575_cast1, %tmp_1578_cast
  %tmp_1589_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1124, i3 0)
  br label %.preheader485

.preheader485:                                    ; preds = %141, %.preheader485.preheader
  %w83 = phi i4 [ %w_84, %141 ], [ 0, %.preheader485.preheader ]
  %exitcond135 = icmp eq i4 %w83, -8
  %empty_505 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_84 = add i4 %w83, 1
  br i1 %exitcond135, label %.preheader486.loopexit, label %141

; <label>:141                                     ; preds = %.preheader485
  %tmp_581_cast1 = zext i4 %w83 to i13
  %tmp_581_cast = zext i4 %w83 to i14
  %tmp_1126 = add i14 %tmp_1586_cast, %tmp_581_cast
  %tmp_1591_cast = zext i14 %tmp_1126 to i64
  %shuffleunit1_5_outpu = getelementptr [6144 x float]* @shuffleunit1_5_outpu, i64 0, i64 %tmp_1591_cast
  %tmp_1127 = add i13 %tmp_1589_cast, %tmp_581_cast1
  %tmp_1592_cast = zext i13 %tmp_1127 to i64
  %buffer0_1_48_8x8_add_12 = getelementptr [3072 x float]* @buffer0_1_48_8x8, i64 0, i64 %tmp_1592_cast
  %shuffleunit1_5_outpu_1 = load float* %shuffleunit1_5_outpu, align 4
  store float %shuffleunit1_5_outpu_1, float* %buffer0_1_48_8x8_add_12, align 4
  br label %.preheader485

.preheader484.loopexit:                           ; preds = %.preheader483
  br label %.preheader484

.preheader484:                                    ; preds = %.preheader484.preheader, %.preheader484.loopexit
  %co128 = phi i5 [ %co_129, %.preheader484.loopexit ], [ 0, %.preheader484.preheader ]
  %co128_cast354_cast = zext i5 %co128 to i10
  %exitcond134 = icmp eq i5 %co128, -8
  %empty_506 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_129 = add i5 %co128, 1
  br i1 %exitcond134, label %.preheader481.preheader, label %.preheader483.preheader

.preheader481.preheader:                          ; preds = %.preheader484
  br label %.preheader481

.preheader483.preheader:                          ; preds = %.preheader484
  %tmp_1122 = trunc i5 %co128 to i1
  %p_shl152 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1122, i5 0)
  %p_shl152_cast = zext i6 %p_shl152 to i7
  %p_shl153 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1122, i3 0)
  %p_shl153_cast = zext i4 %p_shl153 to i7
  %tmp_574 = sub i7 %p_shl152_cast, %p_shl153_cast
  %p_lshr_f15_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co128, i32 1, i32 4)
  %tmp_754_cast = zext i4 %p_lshr_f15_cast to i7
  br label %.preheader483

.preheader483.loopexit:                           ; preds = %.preheader482
  br label %.preheader483

.preheader483:                                    ; preds = %.preheader483.loopexit, %.preheader483.preheader
  %ci56 = phi i5 [ 0, %.preheader483.preheader ], [ %ci_57, %.preheader483.loopexit ]
  %ci56_cast = zext i5 %ci56 to i7
  %exitcond133 = icmp eq i5 %ci56, -8
  %empty_507 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_57 = add i5 %ci56, 1
  br i1 %exitcond133, label %.preheader484.loopexit, label %.preheader482.preheader

.preheader482.preheader:                          ; preds = %.preheader483
  %tmp_578_cast1 = zext i5 %ci56 to i18
  %tmp_579 = add i7 %tmp_574, %ci56_cast
  %tmp_580_cast = sext i7 %tmp_579 to i13
  br label %.preheader482

.preheader482:                                    ; preds = %142, %.preheader482.preheader
  %i118 = phi i3 [ %i_119, %142 ], [ 0, %.preheader482.preheader ]
  %exitcond132 = icmp eq i3 %i118, -4
  %empty_508 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_119 = add i3 %i118, 1
  br i1 %exitcond132, label %.preheader483.loopexit, label %142

; <label>:142                                     ; preds = %.preheader482
  %tmp_1129 = trunc i3 %i118 to i2
  %p_shl156 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1129, i5 0)
  %p_shl156_cast = zext i7 %p_shl156 to i8
  %p_shl157 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1129, i3 0)
  %p_shl157_cast = zext i5 %p_shl157 to i8
  %tmp_591 = sub i8 %p_shl156_cast, %p_shl157_cast
  %tmp_769_cast_cast = sext i8 %tmp_591 to i10
  %tmp47 = add i10 -392, %tmp_769_cast_cast
  %tmp_592 = add i10 %tmp47, %co128_cast354_cast
  %tmp_1130 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_592, i5 0)
  %tmp_1131 = sext i15 %tmp_1130 to i16
  %p_shl421_cast = zext i16 %tmp_1131 to i17
  %tmp_1132 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_592, i3 0)
  %tmp_1133 = sext i13 %tmp_1132 to i14
  %p_shl422_cast = zext i14 %tmp_1133 to i17
  %tmp_1134 = sub i17 %p_shl421_cast, %p_shl422_cast
  %tmp_1601_cast = sext i17 %tmp_1134 to i18
  %tmp_1135 = add i18 %tmp_578_cast1, %tmp_1601_cast
  %tmp_1602_cast = sext i18 %tmp_1135 to i64
  %shuffle_conv_1x1_add_24 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1602_cast
  %shuffle_conv_1x1_loa_24 = load float* %shuffle_conv_1x1_add_24, align 4
  %p_shl158 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1129, i4 0)
  %p_shl158_cast = zext i6 %p_shl158 to i7
  %p_shl159 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1129, i2 0)
  %p_shl159_cast = zext i4 %p_shl159 to i7
  %tmp_593 = sub i7 %p_shl158_cast, %p_shl159_cast
  %tmp_594 = add i7 %tmp_593, %tmp_754_cast
  %tmp_1136 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_594, i6 0)
  %tmp_1137 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_594, i4 0)
  %p_shl420_cast = sext i11 %tmp_1137 to i13
  %tmp_1138 = sub i13 %tmp_1136, %p_shl420_cast
  %tmp_1139 = add i13 %tmp_580_cast, %tmp_1138
  %tmp_1610_cast = sext i13 %tmp_1139 to i64
  %weights_48_48_1x1_ad_15 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1610_cast
  store float %shuffle_conv_1x1_loa_24, float* %weights_48_48_1x1_ad_15, align 4
  br label %.preheader482

.preheader481.loopexit:                           ; preds = %.preheader480
  br label %.preheader481

.preheader481:                                    ; preds = %.preheader481.preheader, %.preheader481.loopexit
  %i116 = phi i5 [ %i_117, %.preheader481.loopexit ], [ 0, %.preheader481.preheader ]
  %i117_cast = zext i5 %i116 to i7
  %i117_cast1 = zext i5 %i116 to i11
  %exitcond131 = icmp eq i5 %i116, -8
  %empty_509 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_117 = add i5 %i116, 1
  br i1 %exitcond131, label %144, label %.preheader480.preheader

.preheader480.preheader:                          ; preds = %.preheader481
  br label %.preheader480

.preheader480:                                    ; preds = %.preheader480.preheader, %143
  %k37 = phi i2 [ %k_38, %143 ], [ 0, %.preheader480.preheader ]
  %exitcond130 = icmp eq i2 %k37, -2
  %empty_510 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_38 = add i2 %k37, 1
  br i1 %exitcond130, label %.preheader481.loopexit, label %143

; <label>:143                                     ; preds = %.preheader480
  %tmp_1128 = trunc i2 %k37 to i1
  %p_shl154 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1128, i5 0)
  %p_shl154_cast = zext i6 %p_shl154 to i7
  %p_shl155 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1128, i3 0)
  %p_shl155_cast = zext i4 %p_shl155 to i7
  %tmp_582 = sub i7 %p_shl154_cast, %p_shl155_cast
  %tmp_758_cast = sext i7 %tmp_582 to i11
  %tmp48 = add i11 -584, %tmp_758_cast
  %tmp_583 = add i11 %i117_cast1, %tmp48
  %tmp_585 = zext i11 %tmp_583 to i64
  %bias_addr_40 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_585
  %bias_load_40 = load float* %bias_addr_40, align 4
  %tmp_586 = add i7 %tmp_582, %i117_cast
  %tmp_762_cast = sext i7 %tmp_586 to i32
  %tmp_588 = zext i32 %tmp_762_cast to i64
  %bias_48_addr_23 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_588
  store float %bias_load_40, float* %bias_48_addr_23, align 4
  br label %.preheader480

; <label>:144                                     ; preds = %.preheader481
  call fastcc void @subconv_1x1_8([3072 x float]* @buffer0_1_48_8x8, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [3072 x float]* @buffer1_1_48_8x8) nounwind
  br label %.loopexit692

.loopexit692.loopexit:                            ; preds = %.preheader479
  br label %.loopexit692

.loopexit692:                                     ; preds = %.loopexit692.loopexit, %144
  %co130 = phi i5 [ 0, %144 ], [ %co_131, %.loopexit692.loopexit ]
  %co131_cast = zext i5 %co130 to i7
  %co131_cast1 = zext i5 %co130 to i10
  %exitcond129 = icmp eq i5 %co130, -8
  %empty_511 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_131 = add i5 %co130, 1
  br i1 %exitcond129, label %.preheader476.preheader, label %.preheader479.preheader

.preheader479.preheader:                          ; preds = %.loopexit692
  br label %.preheader479

.preheader476.preheader:                          ; preds = %.loopexit692
  br label %.preheader476

.preheader479.loopexit:                           ; preds = %.preheader478
  br label %.preheader479

.preheader479:                                    ; preds = %.preheader479.preheader, %.preheader479.loopexit
  %w85 = phi i2 [ %w_86, %.preheader479.loopexit ], [ 0, %.preheader479.preheader ]
  %exitcond128 = icmp eq i2 %w85, -1
  %empty_512 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_86 = add i2 %w85, 1
  br i1 %exitcond128, label %.loopexit692.loopexit, label %.preheader478.preheader

.preheader478.preheader:                          ; preds = %.preheader479
  %tmp_595_cast1 = zext i2 %w85 to i36
  %tmp_595_cast = zext i2 %w85 to i14
  br label %.preheader478

.preheader478.loopexit:                           ; preds = %.preheader477
  br label %.preheader478

.preheader478:                                    ; preds = %.preheader478.loopexit, %.preheader478.preheader
  %h85 = phi i2 [ 0, %.preheader478.preheader ], [ %h_86, %.preheader478.loopexit ]
  %exitcond127 = icmp eq i2 %h85, -1
  %empty_513 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_86 = add i2 %h85, 1
  br i1 %exitcond127, label %.preheader479.loopexit, label %.preheader477.preheader

.preheader477.preheader:                          ; preds = %.preheader478
  %tmp_602_cast1 = zext i2 %h85 to i10
  %tmp_602_cast = zext i2 %h85 to i15
  br label %.preheader477

.preheader477:                                    ; preds = %145, %.preheader477.preheader
  %i124 = phi i2 [ %i_125, %145 ], [ 0, %.preheader477.preheader ]
  %exitcond126 = icmp eq i2 %i124, -2
  %empty_514 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_125 = add i2 %i124, 1
  br i1 %exitcond126, label %.preheader478.loopexit, label %145

; <label>:145                                     ; preds = %.preheader477
  %tmp_1142 = trunc i2 %i124 to i1
  %p_shl166 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1142, i5 0)
  %p_shl166_cast = zext i6 %p_shl166 to i7
  %p_shl167 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1142, i3 0)
  %p_shl167_cast = zext i4 %p_shl167 to i7
  %tmp_607 = sub i7 %p_shl166_cast, %p_shl167_cast
  %tmp_795_cast = sext i7 %tmp_607 to i10
  %tmp49 = add i10 504, %tmp_795_cast
  %tmp_608 = add i10 %co131_cast1, %tmp49
  %tmp_610_cast1 = zext i10 %tmp_608 to i13
  %tmp_1143 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_608, i2 0)
  %p_shl426_cast = zext i12 %tmp_1143 to i13
  %tmp_1144 = sub i13 %p_shl426_cast, %tmp_610_cast1
  %tmp_1618_cast = sext i13 %tmp_1144 to i14
  %tmp_1145 = add i14 %tmp_1618_cast, %tmp_595_cast
  %tmp_1619_cast = sext i14 %tmp_1145 to i15
  %tmp_1146 = trunc i14 %tmp_1145 to i13
  %p_shl425_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1146, i2 0)
  %tmp_1147 = sub i15 %p_shl425_cast, %tmp_1619_cast
  %tmp_1148 = add i15 %tmp_1147, %tmp_602_cast
  %tmp_1622_cast = zext i15 %tmp_1148 to i64
  %shuffle_conv_3x3_add_13 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1622_cast
  %shuffle_conv_3x3_loa_13 = load float* %shuffle_conv_3x3_add_13, align 4
  %tmp_611 = add i7 %tmp_607, %co131_cast
  %tmp_799_cast = sext i7 %tmp_611 to i32
  %tmp_612_cast = zext i32 %tmp_799_cast to i35
  %tmp_1149 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_611, i2 0)
  %tmp_1150 = sext i9 %tmp_1149 to i34
  %p_shl424_cast = zext i34 %tmp_1150 to i35
  %tmp_1151 = sub i35 %p_shl424_cast, %tmp_612_cast
  %tmp_1625_cast = sext i35 %tmp_1151 to i36
  %tmp_1152 = add i36 %tmp_1625_cast, %tmp_595_cast1
  %tmp_1153 = trunc i36 %tmp_1152 to i10
  %tmp_1154 = trunc i36 %tmp_1152 to i8
  %p_shl423_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1154, i2 0)
  %tmp_1155 = sub i10 %p_shl423_cast, %tmp_1153
  %tmp_1156 = add i10 %tmp_1155, %tmp_602_cast1
  %tmp_1629_cast = zext i10 %tmp_1156 to i64
  %weights_48_1_3x3_add_8 = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1629_cast
  store float %shuffle_conv_3x3_loa_13, float* %weights_48_1_3x3_add_8, align 4
  br label %.preheader477

.preheader476.loopexit:                           ; preds = %.preheader475
  br label %.preheader476

.preheader476:                                    ; preds = %.preheader476.preheader, %.preheader476.loopexit
  %i120 = phi i5 [ %i_121, %.preheader476.loopexit ], [ 0, %.preheader476.preheader ]
  %i121_cast = zext i5 %i120 to i7
  %i121_cast1 = zext i5 %i120 to i11
  %exitcond125 = icmp eq i5 %i120, -8
  %empty_515 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_121 = add i5 %i120, 1
  br i1 %exitcond125, label %147, label %.preheader475.preheader

.preheader475.preheader:                          ; preds = %.preheader476
  br label %.preheader475

.preheader475:                                    ; preds = %.preheader475.preheader, %146
  %k39 = phi i2 [ %k_40, %146 ], [ 0, %.preheader475.preheader ]
  %exitcond124 = icmp eq i2 %k39, -2
  %empty_516 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_40 = add i2 %k39, 1
  br i1 %exitcond124, label %.preheader476.loopexit, label %146

; <label>:146                                     ; preds = %.preheader475
  %tmp_1141 = trunc i2 %k39 to i1
  %p_shl160 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1141, i5 0)
  %p_shl160_cast = zext i6 %p_shl160 to i7
  %p_shl161 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1141, i3 0)
  %p_shl161_cast = zext i4 %p_shl161 to i7
  %tmp_597 = sub i7 %p_shl160_cast, %p_shl161_cast
  %tmp_776_cast = sext i7 %tmp_597 to i11
  %tmp50 = add i11 -536, %tmp_776_cast
  %tmp_598 = add i11 %i121_cast1, %tmp50
  %tmp_599 = zext i11 %tmp_598 to i64
  %bias_addr_41 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_599
  %bias_load_41 = load float* %bias_addr_41, align 4
  %tmp_600 = add i7 %tmp_597, %i121_cast
  %tmp_780_cast = sext i7 %tmp_600 to i32
  %tmp_601 = zext i32 %tmp_780_cast to i64
  %bias_48_addr_24 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_601
  store float %bias_load_41, float* %bias_48_addr_24, align 4
  br label %.preheader475

; <label>:147                                     ; preds = %.preheader476
  call fastcc void @subconv_3x3_8_no_rel([3072 x float]* @buffer1_1_48_8x8, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [3072 x float]* @buffer0_1_48_8x8) nounwind
  br label %.loopexit691

.loopexit691.loopexit:                            ; preds = %.preheader474
  br label %.loopexit691

.loopexit691:                                     ; preds = %.loopexit691.loopexit, %147
  %co132 = phi i5 [ 0, %147 ], [ %co_133, %.loopexit691.loopexit ]
  %co133_cast331_cast = zext i5 %co132 to i10
  %exitcond123 = icmp eq i5 %co132, -8
  %empty_517 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_133 = add i5 %co132, 1
  br i1 %exitcond123, label %.preheader472.preheader, label %.preheader474.preheader

.preheader472.preheader:                          ; preds = %.loopexit691
  br label %.preheader472

.preheader474.preheader:                          ; preds = %.loopexit691
  %tmp_1140 = trunc i5 %co132 to i1
  %p_shl162 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1140, i5 0)
  %p_shl162_cast = zext i6 %p_shl162 to i7
  %p_shl163 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1140, i3 0)
  %p_shl163_cast = zext i4 %p_shl163 to i7
  %tmp_596 = sub i7 %p_shl162_cast, %p_shl163_cast
  %p_lshr_f16_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co132, i32 1, i32 4)
  %tmp_784_cast = zext i4 %p_lshr_f16_cast to i7
  br label %.preheader474

.preheader474.loopexit:                           ; preds = %.preheader473
  br label %.preheader474

.preheader474:                                    ; preds = %.preheader474.loopexit, %.preheader474.preheader
  %ci58 = phi i5 [ 0, %.preheader474.preheader ], [ %ci_59, %.preheader474.loopexit ]
  %ci58_cast = zext i5 %ci58 to i7
  %exitcond122 = icmp eq i5 %ci58, -8
  %empty_518 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_59 = add i5 %ci58, 1
  br i1 %exitcond122, label %.loopexit691.loopexit, label %.preheader473.preheader

.preheader473.preheader:                          ; preds = %.preheader474
  %tmp_603_cast = zext i5 %ci58 to i18
  %tmp_604 = add i7 %tmp_596, %ci58_cast
  %tmp_605_cast = sext i7 %tmp_604 to i13
  br label %.preheader473

.preheader473:                                    ; preds = %148, %.preheader473.preheader
  %i126 = phi i3 [ %i_127, %148 ], [ 0, %.preheader473.preheader ]
  %exitcond121 = icmp eq i3 %i126, -4
  %empty_519 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_127 = add i3 %i126, 1
  br i1 %exitcond121, label %.preheader474.loopexit, label %148

; <label>:148                                     ; preds = %.preheader473
  %tmp_1159 = trunc i3 %i126 to i2
  %p_shl168 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1159, i5 0)
  %p_shl168_cast = zext i7 %p_shl168 to i8
  %p_shl169 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1159, i3 0)
  %p_shl169_cast = zext i5 %p_shl169 to i8
  %tmp_618 = sub i8 %p_shl168_cast, %p_shl169_cast
  %tmp_802_cast_cast = sext i8 %tmp_618 to i10
  %tmp51 = add i10 -296, %tmp_802_cast_cast
  %tmp_619 = add i10 %tmp51, %co133_cast331_cast
  %tmp_1160 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_619, i5 0)
  %tmp_1161 = sext i15 %tmp_1160 to i16
  %p_shl429_cast = zext i16 %tmp_1161 to i17
  %tmp_1162 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_619, i3 0)
  %tmp_1163 = sext i13 %tmp_1162 to i14
  %p_shl430_cast = zext i14 %tmp_1163 to i17
  %tmp_1164 = sub i17 %p_shl429_cast, %p_shl430_cast
  %tmp_1640_cast = sext i17 %tmp_1164 to i18
  %tmp_1165 = add i18 %tmp_603_cast, %tmp_1640_cast
  %tmp_1641_cast = sext i18 %tmp_1165 to i64
  %shuffle_conv_1x1_add_25 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1641_cast
  %shuffle_conv_1x1_loa_25 = load float* %shuffle_conv_1x1_add_25, align 4
  %p_shl170 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1159, i4 0)
  %p_shl170_cast = zext i6 %p_shl170 to i7
  %p_shl171 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1159, i2 0)
  %p_shl171_cast = zext i4 %p_shl171 to i7
  %tmp_620 = sub i7 %p_shl170_cast, %p_shl171_cast
  %tmp_621 = add i7 %tmp_620, %tmp_784_cast
  %tmp_1166 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_621, i6 0)
  %tmp_1167 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_621, i4 0)
  %p_shl428_cast = sext i11 %tmp_1167 to i13
  %tmp_1168 = sub i13 %tmp_1166, %p_shl428_cast
  %tmp_1169 = add i13 %tmp_605_cast, %tmp_1168
  %tmp_1649_cast = sext i13 %tmp_1169 to i64
  %weights_48_48_1x1_ad_16 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1649_cast
  store float %shuffle_conv_1x1_loa_25, float* %weights_48_48_1x1_ad_16, align 4
  br label %.preheader473

.preheader472.loopexit:                           ; preds = %.preheader471
  br label %.preheader472

.preheader472:                                    ; preds = %.preheader472.preheader, %.preheader472.loopexit
  %i122 = phi i5 [ %i_123, %.preheader472.loopexit ], [ 0, %.preheader472.preheader ]
  %i123_cast = zext i5 %i122 to i7
  %i123_cast321_cast = zext i5 %i122 to i10
  %exitcond120 = icmp eq i5 %i122, -8
  %empty_520 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_123 = add i5 %i122, 1
  br i1 %exitcond120, label %150, label %.preheader471.preheader

.preheader471.preheader:                          ; preds = %.preheader472
  br label %.preheader471

.preheader471:                                    ; preds = %.preheader471.preheader, %149
  %k41 = phi i2 [ %k_42, %149 ], [ 0, %.preheader471.preheader ]
  %exitcond119 = icmp eq i2 %k41, -2
  %empty_521 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_42 = add i2 %k41, 1
  br i1 %exitcond119, label %.preheader472.loopexit, label %149

; <label>:149                                     ; preds = %.preheader471
  %tmp_1158 = trunc i2 %k41 to i1
  %p_shl164 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1158, i5 0)
  %p_shl164_cast = zext i6 %p_shl164 to i7
  %p_shl165 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1158, i3 0)
  %p_shl165_cast = zext i4 %p_shl165 to i7
  %tmp_613 = sub i7 %p_shl164_cast, %p_shl165_cast
  %tmp_786_cast_cast = sext i7 %tmp_613 to i10
  %tmp52 = add i10 -488, %tmp_786_cast_cast
  %tmp_614 = add i10 %i123_cast321_cast, %tmp52
  %tmp_788_cast = sext i10 %tmp_614 to i11
  %tmp_615 = zext i11 %tmp_788_cast to i64
  %bias_addr_42 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_615
  %bias_load_42 = load float* %bias_addr_42, align 4
  %tmp_616 = add i7 %tmp_613, %i123_cast
  %tmp_790_cast = sext i7 %tmp_616 to i32
  %tmp_617 = zext i32 %tmp_790_cast to i64
  %bias_48_addr_25 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_617
  store float %bias_load_42, float* %bias_48_addr_25, align 4
  br label %.preheader471

; <label>:150                                     ; preds = %.preheader472
  call fastcc void @subconv_1x1_8([3072 x float]* @buffer0_1_48_8x8, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [3072 x float]* @buffer1_1_48_8x8) nounwind
  br label %.loopexit690

.loopexit690.loopexit:                            ; preds = %.preheader470
  br label %.loopexit690

.loopexit690:                                     ; preds = %.loopexit690.loopexit, %150
  %co134 = phi i6 [ 0, %150 ], [ %co_135, %.loopexit690.loopexit ]
  %exitcond118 = icmp eq i6 %co134, -16
  %empty_522 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_135 = add i6 %co134, 1
  br i1 %exitcond118, label %152, label %.preheader470.preheader

.preheader470.preheader:                          ; preds = %.loopexit690
  %tmp_1157 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co134, i3 0)
  %tmp_1631_cast = zext i9 %tmp_1157 to i10
  br label %.preheader470

.preheader470.loopexit:                           ; preds = %.preheader469
  br label %.preheader470

.preheader470:                                    ; preds = %.preheader470.loopexit, %.preheader470.preheader
  %h87 = phi i4 [ 0, %.preheader470.preheader ], [ %h_88, %.preheader470.loopexit ]
  %exitcond117 = icmp eq i4 %h87, -8
  %empty_523 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_88 = add i4 %h87, 1
  br i1 %exitcond117, label %.loopexit690.loopexit, label %.preheader469.preheader

.preheader469.preheader:                          ; preds = %.preheader470
  %tmp_623_cast = zext i4 %h87 to i10
  %tmp_1172 = add i10 %tmp_1631_cast, %tmp_623_cast
  %tmp_1173 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1172, i3 0)
  %tmp_1656_cast = zext i13 %tmp_1173 to i14
  br label %.preheader469

.preheader469:                                    ; preds = %151, %.preheader469.preheader
  %w87 = phi i4 [ %w_88, %151 ], [ 0, %.preheader469.preheader ]
  %exitcond116 = icmp eq i4 %w87, -8
  %empty_524 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_88 = add i4 %w87, 1
  br i1 %exitcond116, label %.preheader470.loopexit, label %151

; <label>:151                                     ; preds = %.preheader469
  %tmp_627_cast = zext i4 %w87 to i14
  %tmp_1177 = add i14 %tmp_1656_cast, %tmp_627_cast
  %tmp_1665_cast = zext i14 %tmp_1177 to i64
  %shuffleunit1_5_outpu_2 = getelementptr [6144 x float]* @shuffleunit1_5_outpu, i64 0, i64 %tmp_1665_cast
  %buffer0_1_48_8x8_add_13 = getelementptr [3072 x float]* @buffer0_1_48_8x8, i64 0, i64 %tmp_1665_cast
  %shuffleunit1_5_outpu_3 = load float* %shuffleunit1_5_outpu_2, align 4
  store float %shuffleunit1_5_outpu_3, float* %buffer0_1_48_8x8_add_13, align 4
  br label %.preheader469

; <label>:152                                     ; preds = %.loopexit690
  call fastcc void @shuffle_48([3072 x float]* @buffer0_1_48_8x8, [6144 x float]* @shuffleunit1_6_outpu) nounwind
  br label %.loopexit689

.loopexit689.loopexit:                            ; preds = %.preheader468
  br label %.loopexit689

.loopexit689:                                     ; preds = %.loopexit689.loopexit, %152
  %co136 = phi i6 [ 0, %152 ], [ %co_137, %.loopexit689.loopexit ]
  %co136_cast = zext i6 %co136 to i7
  %exitcond115 = icmp eq i6 %co136, -16
  %empty_525 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_137 = add i6 %co136, 1
  br i1 %exitcond115, label %.preheader466.preheader, label %.preheader468.preheader

.preheader466.preheader:                          ; preds = %.loopexit689
  br label %.preheader466

.preheader468.preheader:                          ; preds = %.loopexit689
  %tmp_622 = add i7 %co136_cast, 48
  %tmp_1170 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_622, i3 0)
  %tmp_1651_cast = zext i10 %tmp_1170 to i11
  %tmp_1171 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co136, i3 0)
  %tmp_1653_cast = zext i9 %tmp_1171 to i10
  br label %.preheader468

.preheader468.loopexit:                           ; preds = %.preheader467
  br label %.preheader468

.preheader468:                                    ; preds = %.preheader468.loopexit, %.preheader468.preheader
  %h89 = phi i4 [ 0, %.preheader468.preheader ], [ %h_90, %.preheader468.loopexit ]
  %exitcond114 = icmp eq i4 %h89, -8
  %empty_526 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_90 = add i4 %h89, 1
  br i1 %exitcond114, label %.loopexit689.loopexit, label %.preheader467.preheader

.preheader467.preheader:                          ; preds = %.preheader468
  %tmp_625_cast1 = zext i4 %h89 to i10
  %tmp_625_cast = zext i4 %h89 to i11
  %tmp_1175 = add i11 %tmp_625_cast, %tmp_1651_cast
  %tmp_1661_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1175, i3 0)
  %tmp_1176 = add i10 %tmp_625_cast1, %tmp_1653_cast
  %tmp_1664_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1176, i3 0)
  br label %.preheader467

.preheader467:                                    ; preds = %153, %.preheader467.preheader
  %w89 = phi i4 [ %w_90, %153 ], [ 0, %.preheader467.preheader ]
  %exitcond113 = icmp eq i4 %w89, -8
  %empty_527 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_90 = add i4 %w89, 1
  br i1 %exitcond113, label %.preheader468.loopexit, label %153

; <label>:153                                     ; preds = %.preheader467
  %tmp_631_cast1 = zext i4 %w89 to i13
  %tmp_631_cast = zext i4 %w89 to i14
  %tmp_1178 = add i14 %tmp_1661_cast, %tmp_631_cast
  %tmp_1666_cast = zext i14 %tmp_1178 to i64
  %shuffleunit1_6_outpu = getelementptr [6144 x float]* @shuffleunit1_6_outpu, i64 0, i64 %tmp_1666_cast
  %tmp_1179 = add i13 %tmp_1664_cast, %tmp_631_cast1
  %tmp_1667_cast = zext i13 %tmp_1179 to i64
  %buffer0_1_48_8x8_add_14 = getelementptr [3072 x float]* @buffer0_1_48_8x8, i64 0, i64 %tmp_1667_cast
  %shuffleunit1_6_outpu_1 = load float* %shuffleunit1_6_outpu, align 4
  store float %shuffleunit1_6_outpu_1, float* %buffer0_1_48_8x8_add_14, align 4
  br label %.preheader467

.preheader466.loopexit:                           ; preds = %.preheader465
  br label %.preheader466

.preheader466:                                    ; preds = %.preheader466.preheader, %.preheader466.loopexit
  %co138 = phi i5 [ %co_139, %.preheader466.loopexit ], [ 0, %.preheader466.preheader ]
  %co138_cast312_cast = zext i5 %co138 to i9
  %exitcond112 = icmp eq i5 %co138, -8
  %empty_528 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_139 = add i5 %co138, 1
  br i1 %exitcond112, label %.preheader463.preheader, label %.preheader465.preheader

.preheader463.preheader:                          ; preds = %.preheader466
  br label %.preheader463

.preheader465.preheader:                          ; preds = %.preheader466
  %tmp_1174 = trunc i5 %co138 to i1
  %p_shl172 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1174, i5 0)
  %p_shl172_cast = zext i6 %p_shl172 to i7
  %p_shl173 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1174, i3 0)
  %p_shl173_cast = zext i4 %p_shl173 to i7
  %tmp_624 = sub i7 %p_shl172_cast, %p_shl173_cast
  %p_lshr_f17_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co138, i32 1, i32 4)
  %tmp_814_cast = zext i4 %p_lshr_f17_cast to i7
  br label %.preheader465

.preheader465.loopexit:                           ; preds = %.preheader464
  br label %.preheader465

.preheader465:                                    ; preds = %.preheader465.loopexit, %.preheader465.preheader
  %ci60 = phi i5 [ 0, %.preheader465.preheader ], [ %ci_61, %.preheader465.loopexit ]
  %ci60_cast = zext i5 %ci60 to i7
  %exitcond111 = icmp eq i5 %ci60, -8
  %empty_529 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_61 = add i5 %ci60, 1
  br i1 %exitcond111, label %.preheader466.loopexit, label %.preheader464.preheader

.preheader464.preheader:                          ; preds = %.preheader465
  %tmp_628_cast = zext i5 %ci60 to i18
  %tmp_629 = add i7 %tmp_624, %ci60_cast
  %tmp_630_cast = sext i7 %tmp_629 to i13
  br label %.preheader464

.preheader464:                                    ; preds = %154, %.preheader464.preheader
  %i130 = phi i3 [ %i_131, %154 ], [ 0, %.preheader464.preheader ]
  %exitcond110 = icmp eq i3 %i130, -4
  %empty_530 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_131 = add i3 %i130, 1
  br i1 %exitcond110, label %.preheader465.loopexit, label %154

; <label>:154                                     ; preds = %.preheader464
  %tmp_1181 = trunc i3 %i130 to i2
  %p_shl176 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1181, i5 0)
  %p_shl176_cast = zext i7 %p_shl176 to i8
  %p_shl177 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1181, i3 0)
  %p_shl177_cast = zext i5 %p_shl177 to i8
  %tmp_641 = sub i8 %p_shl176_cast, %p_shl177_cast
  %tmp_829_cast_cast = sext i8 %tmp_641 to i9
  %tmp53 = add i9 -200, %tmp_829_cast_cast
  %tmp_642 = add i9 %tmp53, %co138_cast312_cast
  %tmp_1182 = call i14 @_ssdm_op_BitConcatenate.i14.i9.i5(i9 %tmp_642, i5 0)
  %tmp_1183 = sext i14 %tmp_1182 to i16
  %p_shl433_cast = zext i16 %tmp_1183 to i17
  %tmp_1184 = call i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9 %tmp_642, i3 0)
  %tmp_1185 = sext i12 %tmp_1184 to i14
  %p_shl434_cast = zext i14 %tmp_1185 to i17
  %tmp_1186 = sub i17 %p_shl433_cast, %p_shl434_cast
  %tmp_1676_cast = sext i17 %tmp_1186 to i18
  %tmp_1187 = add i18 %tmp_628_cast, %tmp_1676_cast
  %tmp_1677_cast = sext i18 %tmp_1187 to i64
  %shuffle_conv_1x1_add_26 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1677_cast
  %shuffle_conv_1x1_loa_26 = load float* %shuffle_conv_1x1_add_26, align 4
  %p_shl178 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1181, i4 0)
  %p_shl178_cast = zext i6 %p_shl178 to i7
  %p_shl179 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1181, i2 0)
  %p_shl179_cast = zext i4 %p_shl179 to i7
  %tmp_643 = sub i7 %p_shl178_cast, %p_shl179_cast
  %tmp_644 = add i7 %tmp_643, %tmp_814_cast
  %tmp_1188 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_644, i6 0)
  %tmp_1189 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_644, i4 0)
  %p_shl432_cast = sext i11 %tmp_1189 to i13
  %tmp_1190 = sub i13 %tmp_1188, %p_shl432_cast
  %tmp_1191 = add i13 %tmp_630_cast, %tmp_1190
  %tmp_1685_cast = sext i13 %tmp_1191 to i64
  %weights_48_48_1x1_ad_17 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1685_cast
  store float %shuffle_conv_1x1_loa_26, float* %weights_48_48_1x1_ad_17, align 4
  br label %.preheader464

.preheader463.loopexit:                           ; preds = %.preheader462
  br label %.preheader463

.preheader463:                                    ; preds = %.preheader463.preheader, %.preheader463.loopexit
  %i128 = phi i5 [ %i_129, %.preheader463.loopexit ], [ 0, %.preheader463.preheader ]
  %i129_cast = zext i5 %i128 to i7
  %i129_cast302_cast = zext i5 %i128 to i10
  %exitcond109 = icmp eq i5 %i128, -8
  %empty_531 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_129 = add i5 %i128, 1
  br i1 %exitcond109, label %156, label %.preheader462.preheader

.preheader462.preheader:                          ; preds = %.preheader463
  br label %.preheader462

.preheader462:                                    ; preds = %.preheader462.preheader, %155
  %k43 = phi i2 [ %k_44, %155 ], [ 0, %.preheader462.preheader ]
  %exitcond108 = icmp eq i2 %k43, -2
  %empty_532 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_44 = add i2 %k43, 1
  br i1 %exitcond108, label %.preheader463.loopexit, label %155

; <label>:155                                     ; preds = %.preheader462
  %tmp_1180 = trunc i2 %k43 to i1
  %p_shl174 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1180, i5 0)
  %p_shl174_cast = zext i6 %p_shl174 to i7
  %p_shl175 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1180, i3 0)
  %p_shl175_cast = zext i4 %p_shl175 to i7
  %tmp_632 = sub i7 %p_shl174_cast, %p_shl175_cast
  %tmp_818_cast_cast = sext i7 %tmp_632 to i10
  %tmp54 = add i10 -440, %tmp_818_cast_cast
  %tmp_633 = add i10 %i129_cast302_cast, %tmp54
  %tmp_820_cast = sext i10 %tmp_633 to i11
  %tmp_635 = zext i11 %tmp_820_cast to i64
  %bias_addr_43 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_635
  %bias_load_43 = load float* %bias_addr_43, align 4
  %tmp_636 = add i7 %tmp_632, %i129_cast
  %tmp_822_cast = sext i7 %tmp_636 to i32
  %tmp_638 = zext i32 %tmp_822_cast to i64
  %bias_48_addr_26 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_638
  store float %bias_load_43, float* %bias_48_addr_26, align 4
  br label %.preheader462

; <label>:156                                     ; preds = %.preheader463
  call fastcc void @subconv_1x1_8([3072 x float]* @buffer0_1_48_8x8, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [3072 x float]* @buffer1_1_48_8x8) nounwind
  br label %.loopexit688

.loopexit688.loopexit:                            ; preds = %.preheader461
  br label %.loopexit688

.loopexit688:                                     ; preds = %.loopexit688.loopexit, %156
  %co140 = phi i5 [ 0, %156 ], [ %co_141, %.loopexit688.loopexit ]
  %co141_cast = zext i5 %co140 to i7
  %co141_cast1 = zext i5 %co140 to i10
  %exitcond107 = icmp eq i5 %co140, -8
  %empty_533 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_141 = add i5 %co140, 1
  br i1 %exitcond107, label %.preheader458.preheader, label %.preheader461.preheader

.preheader461.preheader:                          ; preds = %.loopexit688
  br label %.preheader461

.preheader458.preheader:                          ; preds = %.loopexit688
  br label %.preheader458

.preheader461.loopexit:                           ; preds = %.preheader460
  br label %.preheader461

.preheader461:                                    ; preds = %.preheader461.preheader, %.preheader461.loopexit
  %w91 = phi i2 [ %w_92, %.preheader461.loopexit ], [ 0, %.preheader461.preheader ]
  %exitcond106 = icmp eq i2 %w91, -1
  %empty_534 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_92 = add i2 %w91, 1
  br i1 %exitcond106, label %.loopexit688.loopexit, label %.preheader460.preheader

.preheader460.preheader:                          ; preds = %.preheader461
  %tmp_645_cast = zext i2 %w91 to i36
  %tmp_645_cast1 = zext i2 %w91 to i13
  br label %.preheader460

.preheader460.loopexit:                           ; preds = %.preheader459
  br label %.preheader460

.preheader460:                                    ; preds = %.preheader460.loopexit, %.preheader460.preheader
  %h91 = phi i2 [ 0, %.preheader460.preheader ], [ %h_92, %.preheader460.loopexit ]
  %exitcond105 = icmp eq i2 %h91, -1
  %empty_535 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_92 = add i2 %h91, 1
  br i1 %exitcond105, label %.preheader461.loopexit, label %.preheader459.preheader

.preheader459.preheader:                          ; preds = %.preheader460
  %tmp_652_cast1 = zext i2 %h91 to i10
  %tmp_652_cast = zext i2 %h91 to i15
  br label %.preheader459

.preheader459:                                    ; preds = %157, %.preheader459.preheader
  %i136 = phi i2 [ %i_137, %157 ], [ 0, %.preheader459.preheader ]
  %exitcond104 = icmp eq i2 %i136, -2
  %empty_536 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_137 = add i2 %i136, 1
  br i1 %exitcond104, label %.preheader460.loopexit, label %157

; <label>:157                                     ; preds = %.preheader459
  %tmp_1194 = trunc i2 %i136 to i1
  %p_shl186 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1194, i5 0)
  %p_shl186_cast = zext i6 %p_shl186 to i7
  %p_shl187 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1194, i3 0)
  %p_shl187_cast = zext i4 %p_shl187 to i7
  %tmp_657 = sub i7 %p_shl186_cast, %p_shl187_cast
  %tmp_855_cast = sext i7 %tmp_657 to i10
  %tmp55 = add i10 -472, %tmp_855_cast
  %tmp_658 = add i10 %co141_cast1, %tmp55
  %tmp_660_cast1 = zext i10 %tmp_658 to i13
  %tmp_1195 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_658, i2 0)
  %p_shl438_cast = zext i12 %tmp_1195 to i13
  %tmp_1196 = sub i13 %p_shl438_cast, %tmp_660_cast1
  %tmp_1197 = add i13 %tmp_1196, %tmp_645_cast1
  %tmp_1694_cast = sext i13 %tmp_1197 to i15
  %p_shl437_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1197, i2 0)
  %tmp_1198 = sub i15 %p_shl437_cast, %tmp_1694_cast
  %tmp_1199 = add i15 %tmp_1198, %tmp_652_cast
  %tmp_1697_cast = zext i15 %tmp_1199 to i64
  %shuffle_conv_3x3_add_14 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1697_cast
  %shuffle_conv_3x3_loa_14 = load float* %shuffle_conv_3x3_add_14, align 4
  %tmp_661 = add i7 %tmp_657, %co141_cast
  %tmp_859_cast = sext i7 %tmp_661 to i32
  %tmp_662_cast = zext i32 %tmp_859_cast to i35
  %tmp_1200 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_661, i2 0)
  %tmp_1201 = sext i9 %tmp_1200 to i34
  %p_shl436_cast = zext i34 %tmp_1201 to i35
  %tmp_1202 = sub i35 %p_shl436_cast, %tmp_662_cast
  %tmp_1700_cast = sext i35 %tmp_1202 to i36
  %tmp_1203 = add i36 %tmp_1700_cast, %tmp_645_cast
  %tmp_1204 = trunc i36 %tmp_1203 to i10
  %tmp_1205 = trunc i36 %tmp_1203 to i8
  %p_shl435_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1205, i2 0)
  %tmp_1206 = sub i10 %p_shl435_cast, %tmp_1204
  %tmp_1207 = add i10 %tmp_1206, %tmp_652_cast1
  %tmp_1704_cast = zext i10 %tmp_1207 to i64
  %weights_48_1_3x3_add_9 = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1704_cast
  store float %shuffle_conv_3x3_loa_14, float* %weights_48_1_3x3_add_9, align 4
  br label %.preheader459

.preheader458.loopexit:                           ; preds = %.preheader457
  br label %.preheader458

.preheader458:                                    ; preds = %.preheader458.preheader, %.preheader458.loopexit
  %i132 = phi i5 [ %i_133, %.preheader458.loopexit ], [ 0, %.preheader458.preheader ]
  %i133_cast = zext i5 %i132 to i7
  %i133_cast292_cast = zext i5 %i132 to i10
  %exitcond103 = icmp eq i5 %i132, -8
  %empty_537 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_133 = add i5 %i132, 1
  br i1 %exitcond103, label %159, label %.preheader457.preheader

.preheader457.preheader:                          ; preds = %.preheader458
  br label %.preheader457

.preheader457:                                    ; preds = %.preheader457.preheader, %158
  %k45 = phi i2 [ %k_46, %158 ], [ 0, %.preheader457.preheader ]
  %exitcond102 = icmp eq i2 %k45, -2
  %empty_538 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_46 = add i2 %k45, 1
  br i1 %exitcond102, label %.preheader458.loopexit, label %158

; <label>:158                                     ; preds = %.preheader457
  %tmp_1193 = trunc i2 %k45 to i1
  %p_shl180 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1193, i5 0)
  %p_shl180_cast = zext i6 %p_shl180 to i7
  %p_shl181 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1193, i3 0)
  %p_shl181_cast = zext i4 %p_shl181 to i7
  %tmp_647 = sub i7 %p_shl180_cast, %p_shl181_cast
  %tmp_836_cast_cast = sext i7 %tmp_647 to i10
  %tmp56 = add i10 -392, %tmp_836_cast_cast
  %tmp_648 = add i10 %i133_cast292_cast, %tmp56
  %tmp_838_cast = sext i10 %tmp_648 to i11
  %tmp_649 = zext i11 %tmp_838_cast to i64
  %bias_addr_44 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_649
  %bias_load_44 = load float* %bias_addr_44, align 4
  %tmp_650 = add i7 %tmp_647, %i133_cast
  %tmp_840_cast = sext i7 %tmp_650 to i32
  %tmp_651 = zext i32 %tmp_840_cast to i64
  %bias_48_addr_27 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_651
  store float %bias_load_44, float* %bias_48_addr_27, align 4
  br label %.preheader457

; <label>:159                                     ; preds = %.preheader458
  call fastcc void @subconv_3x3_8_no_rel([3072 x float]* @buffer1_1_48_8x8, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [3072 x float]* @buffer0_1_48_8x8) nounwind
  br label %.loopexit687

.loopexit687.loopexit:                            ; preds = %.preheader456
  br label %.loopexit687

.loopexit687:                                     ; preds = %.loopexit687.loopexit, %159
  %co142 = phi i5 [ 0, %159 ], [ %co_143, %.loopexit687.loopexit ]
  %co143_cast = zext i5 %co142 to i12
  %exitcond101 = icmp eq i5 %co142, -8
  %empty_539 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_143 = add i5 %co142, 1
  br i1 %exitcond101, label %.preheader454.preheader, label %.preheader456.preheader

.preheader454.preheader:                          ; preds = %.loopexit687
  br label %.preheader454

.preheader456.preheader:                          ; preds = %.loopexit687
  %tmp_1192 = trunc i5 %co142 to i1
  %p_shl182 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1192, i5 0)
  %p_shl182_cast = zext i6 %p_shl182 to i7
  %p_shl183 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1192, i3 0)
  %p_shl183_cast = zext i4 %p_shl183 to i7
  %tmp_646 = sub i7 %p_shl182_cast, %p_shl183_cast
  %p_lshr_f18_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co142, i32 1, i32 4)
  %tmp_844_cast = zext i4 %p_lshr_f18_cast to i7
  br label %.preheader456

.preheader456.loopexit:                           ; preds = %.preheader455
  br label %.preheader456

.preheader456:                                    ; preds = %.preheader456.loopexit, %.preheader456.preheader
  %ci62 = phi i5 [ 0, %.preheader456.preheader ], [ %ci_63, %.preheader456.loopexit ]
  %ci62_cast = zext i5 %ci62 to i7
  %exitcond100 = icmp eq i5 %ci62, -8
  %empty_540 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_63 = add i5 %ci62, 1
  br i1 %exitcond100, label %.loopexit687.loopexit, label %.preheader455.preheader

.preheader455.preheader:                          ; preds = %.preheader456
  %tmp_653_cast = zext i5 %ci62 to i19
  %tmp_654 = add i7 %tmp_646, %ci62_cast
  %tmp_655_cast = sext i7 %tmp_654 to i13
  br label %.preheader455

.preheader455:                                    ; preds = %160, %.preheader455.preheader
  %i138 = phi i3 [ %i_139, %160 ], [ 0, %.preheader455.preheader ]
  %exitcond99 = icmp eq i3 %i138, -4
  %empty_541 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_139 = add i3 %i138, 1
  br i1 %exitcond99, label %.preheader456.loopexit, label %160

; <label>:160                                     ; preds = %.preheader455
  %tmp_1210 = trunc i3 %i138 to i2
  %p_shl188 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1210, i5 0)
  %p_shl188_cast = zext i7 %p_shl188 to i8
  %p_shl189 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1210, i3 0)
  %p_shl189_cast = zext i5 %p_shl189 to i8
  %tmp_668 = sub i8 %p_shl188_cast, %p_shl189_cast
  %tmp_862_cast_cast = sext i8 %tmp_668 to i9
  %tmp57 = add i9 -104, %tmp_862_cast_cast
  %tmp57_cast1 = sext i9 %tmp57 to i11
  %tmp57_cast = zext i11 %tmp57_cast1 to i12
  %tmp_669 = add i12 %tmp57_cast, %co143_cast
  %tmp_1211 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_669, i5 0)
  %p_shl441_cast = zext i17 %tmp_1211 to i18
  %tmp_1212 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_669, i3 0)
  %p_shl442_cast = zext i15 %tmp_1212 to i18
  %tmp_1213 = sub i18 %p_shl441_cast, %p_shl442_cast
  %tmp_1713_cast = sext i18 %tmp_1213 to i19
  %tmp_1214 = add i19 %tmp_653_cast, %tmp_1713_cast
  %tmp_1714_cast = sext i19 %tmp_1214 to i64
  %shuffle_conv_1x1_add_27 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1714_cast
  %shuffle_conv_1x1_loa_27 = load float* %shuffle_conv_1x1_add_27, align 4
  %p_shl190 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1210, i4 0)
  %p_shl190_cast = zext i6 %p_shl190 to i7
  %p_shl191 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1210, i2 0)
  %p_shl191_cast = zext i4 %p_shl191 to i7
  %tmp_670 = sub i7 %p_shl190_cast, %p_shl191_cast
  %tmp_671 = add i7 %tmp_670, %tmp_844_cast
  %tmp_1215 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_671, i6 0)
  %tmp_1216 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_671, i4 0)
  %p_shl440_cast = sext i11 %tmp_1216 to i13
  %tmp_1217 = sub i13 %tmp_1215, %p_shl440_cast
  %tmp_1218 = add i13 %tmp_655_cast, %tmp_1217
  %tmp_1722_cast = sext i13 %tmp_1218 to i64
  %weights_48_48_1x1_ad_18 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1722_cast
  store float %shuffle_conv_1x1_loa_27, float* %weights_48_48_1x1_ad_18, align 4
  br label %.preheader455

.preheader454.loopexit:                           ; preds = %.preheader453
  br label %.preheader454

.preheader454:                                    ; preds = %.preheader454.preheader, %.preheader454.loopexit
  %i134 = phi i5 [ %i_135, %.preheader454.loopexit ], [ 0, %.preheader454.preheader ]
  %i135_cast = zext i5 %i134 to i7
  %i135_cast279_cast = zext i5 %i134 to i10
  %exitcond98 = icmp eq i5 %i134, -8
  %empty_542 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_135 = add i5 %i134, 1
  br i1 %exitcond98, label %162, label %.preheader453.preheader

.preheader453.preheader:                          ; preds = %.preheader454
  br label %.preheader453

.preheader453:                                    ; preds = %.preheader453.preheader, %161
  %k47 = phi i2 [ %k_48, %161 ], [ 0, %.preheader453.preheader ]
  %exitcond97 = icmp eq i2 %k47, -2
  %empty_543 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_48 = add i2 %k47, 1
  br i1 %exitcond97, label %.preheader454.loopexit, label %161

; <label>:161                                     ; preds = %.preheader453
  %tmp_1209 = trunc i2 %k47 to i1
  %p_shl184 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1209, i5 0)
  %p_shl184_cast = zext i6 %p_shl184 to i7
  %p_shl185 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1209, i3 0)
  %p_shl185_cast = zext i4 %p_shl185 to i7
  %tmp_663 = sub i7 %p_shl184_cast, %p_shl185_cast
  %tmp_846_cast_cast = sext i7 %tmp_663 to i10
  %tmp58 = add i10 -344, %tmp_846_cast_cast
  %tmp_664 = add i10 %i135_cast279_cast, %tmp58
  %tmp_848_cast = sext i10 %tmp_664 to i11
  %tmp_665 = zext i11 %tmp_848_cast to i64
  %bias_addr_45 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_665
  %bias_load_45 = load float* %bias_addr_45, align 4
  %tmp_666 = add i7 %tmp_663, %i135_cast
  %tmp_850_cast = sext i7 %tmp_666 to i32
  %tmp_667 = zext i32 %tmp_850_cast to i64
  %bias_48_addr_28 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_667
  store float %bias_load_45, float* %bias_48_addr_28, align 4
  br label %.preheader453

; <label>:162                                     ; preds = %.preheader454
  call fastcc void @subconv_1x1_8([3072 x float]* @buffer0_1_48_8x8, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [3072 x float]* @buffer1_1_48_8x8) nounwind
  br label %.loopexit686

.loopexit686.loopexit:                            ; preds = %.preheader452
  br label %.loopexit686

.loopexit686:                                     ; preds = %.loopexit686.loopexit, %162
  %co144 = phi i6 [ 0, %162 ], [ %co_145, %.loopexit686.loopexit ]
  %exitcond96 = icmp eq i6 %co144, -16
  %empty_544 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_145 = add i6 %co144, 1
  br i1 %exitcond96, label %164, label %.preheader452.preheader

.preheader452.preheader:                          ; preds = %.loopexit686
  %tmp_1208 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co144, i3 0)
  %tmp_1706_cast = zext i9 %tmp_1208 to i10
  br label %.preheader452

.preheader452.loopexit:                           ; preds = %.preheader451
  br label %.preheader452

.preheader452:                                    ; preds = %.preheader452.loopexit, %.preheader452.preheader
  %h93 = phi i4 [ 0, %.preheader452.preheader ], [ %h_94, %.preheader452.loopexit ]
  %exitcond95 = icmp eq i4 %h93, -8
  %empty_545 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_94 = add i4 %h93, 1
  br i1 %exitcond95, label %.loopexit686.loopexit, label %.preheader451.preheader

.preheader451.preheader:                          ; preds = %.preheader452
  %tmp_673_cast = zext i4 %h93 to i10
  %tmp_1221 = add i10 %tmp_1706_cast, %tmp_673_cast
  %tmp_1222 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1221, i3 0)
  %tmp_1727_cast = zext i13 %tmp_1222 to i14
  br label %.preheader451

.preheader451:                                    ; preds = %163, %.preheader451.preheader
  %w93 = phi i4 [ %w_94, %163 ], [ 0, %.preheader451.preheader ]
  %exitcond94 = icmp eq i4 %w93, -8
  %empty_546 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_94 = add i4 %w93, 1
  br i1 %exitcond94, label %.preheader452.loopexit, label %163

; <label>:163                                     ; preds = %.preheader451
  %tmp_678_cast = zext i4 %w93 to i14
  %tmp_1223 = add i14 %tmp_1727_cast, %tmp_678_cast
  %tmp_1728_cast = zext i14 %tmp_1223 to i64
  %shuffleunit1_6_outpu_2 = getelementptr [6144 x float]* @shuffleunit1_6_outpu, i64 0, i64 %tmp_1728_cast
  %buffer0_1_48_8x8_add_15 = getelementptr [3072 x float]* @buffer0_1_48_8x8, i64 0, i64 %tmp_1728_cast
  %shuffleunit1_6_outpu_3 = load float* %shuffleunit1_6_outpu_2, align 4
  store float %shuffleunit1_6_outpu_3, float* %buffer0_1_48_8x8_add_15, align 4
  br label %.preheader451

; <label>:164                                     ; preds = %.loopexit686
  call fastcc void @shuffle_48([3072 x float]* @buffer0_1_48_8x8, [6144 x float]* @shuffleunit1_7_outpu) nounwind
  br label %.loopexit685

.loopexit685.loopexit:                            ; preds = %.preheader450
  br label %.loopexit685

.loopexit685:                                     ; preds = %.loopexit685.loopexit, %164
  %co146 = phi i5 [ 0, %164 ], [ %co_147, %.loopexit685.loopexit ]
  %co146_cast = zext i5 %co146 to i12
  %exitcond93 = icmp eq i5 %co146, -8
  %empty_547 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_147 = add i5 %co146, 1
  br i1 %exitcond93, label %.preheader448.preheader, label %.preheader450.preheader

.preheader448.preheader:                          ; preds = %.loopexit685
  br label %.preheader448

.preheader450.preheader:                          ; preds = %.loopexit685
  %tmp_1219 = trunc i5 %co146 to i2
  %p_shl192 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1219, i5 0)
  %p_shl192_cast = zext i7 %p_shl192 to i8
  %tmp_1220 = shl i5 %co146, 3
  %p_shl193_cast = zext i5 %tmp_1220 to i8
  %tmp_672 = sub i8 %p_shl192_cast, %p_shl193_cast
  %p_lshr_f19_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co146, i32 2, i32 4)
  %tmp_870_cast = zext i3 %p_lshr_f19_cast to i8
  br label %.preheader450

.preheader450.loopexit:                           ; preds = %.preheader449
  br label %.preheader450

.preheader450:                                    ; preds = %.preheader450.loopexit, %.preheader450.preheader
  %ci64 = phi i5 [ 0, %.preheader450.preheader ], [ %ci_65, %.preheader450.loopexit ]
  %ci64_cast = zext i5 %ci64 to i8
  %exitcond92 = icmp eq i5 %ci64, -8
  %empty_548 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_65 = add i5 %ci64, 1
  br i1 %exitcond92, label %.loopexit685.loopexit, label %.preheader449.preheader

.preheader449.preheader:                          ; preds = %.preheader450
  %tmp_674_cast = zext i5 %ci64 to i19
  %tmp_675 = add i8 %tmp_672, %ci64_cast
  %tmp_677_cast1 = sext i8 %tmp_675 to i15
  br label %.preheader449

.preheader449:                                    ; preds = %165, %.preheader449.preheader
  %i142 = phi i5 [ %i_143, %165 ], [ 0, %.preheader449.preheader ]
  %exitcond91 = icmp eq i5 %i142, -16
  %empty_549 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %i_143 = add i5 %i142, 1
  br i1 %exitcond91, label %.preheader450.loopexit, label %165

; <label>:165                                     ; preds = %.preheader449
  %tmp_1225 = trunc i5 %i142 to i4
  %p_shl195 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1225, i5 0)
  %p_shl196_cast = zext i9 %p_shl195 to i10
  %p_shl196 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1225, i3 0)
  %p_shl197_cast1 = zext i7 %p_shl196 to i8
  %p_shl197_cast = zext i7 %p_shl196 to i10
  %tmp_685 = sub i10 %p_shl196_cast, %p_shl197_cast
  %tmp_884_cast = sext i10 %tmp_685 to i12
  %tmp59 = add i12 2040, %tmp_884_cast
  %tmp_686 = add i12 %tmp59, %co146_cast
  %tmp_1226 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_686, i5 0)
  %p_shl445_cast = zext i17 %tmp_1226 to i18
  %tmp_1227 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_686, i3 0)
  %p_shl446_cast = zext i15 %tmp_1227 to i18
  %tmp_1228 = sub i18 %p_shl445_cast, %p_shl446_cast
  %tmp_1735_cast = sext i18 %tmp_1228 to i19
  %tmp_1229 = add i19 %tmp_674_cast, %tmp_1735_cast
  %tmp_1736_cast = sext i19 %tmp_1229 to i64
  %shuffle_conv_1x1_add_28 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1736_cast
  %shuffle_conv_1x1_loa_28 = load float* %shuffle_conv_1x1_add_28, align 4
  %tmp_1230 = shl i5 %i142, 1
  %p_shl198_cast = zext i5 %tmp_1230 to i8
  %tmp_688 = sub i8 %p_shl197_cast1, %p_shl198_cast
  %tmp_691 = add i8 %tmp_688, %tmp_870_cast
  %tmp_1231 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_691, i7 0)
  %tmp_1232 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_691, i5 0)
  %p_shl444_cast = sext i13 %tmp_1232 to i15
  %tmp_1233 = sub i15 %tmp_1231, %p_shl444_cast
  %tmp_1234 = add i15 %tmp_677_cast1, %tmp_1233
  %tmp_1743_cast = sext i15 %tmp_1234 to i64
  %weights_96_96_1x1_ad = getelementptr [9216 x float]* @weights_96_96_1x1, i64 0, i64 %tmp_1743_cast
  store float %shuffle_conv_1x1_loa_28, float* %weights_96_96_1x1_ad, align 4
  br label %.preheader449

.preheader448.loopexit:                           ; preds = %.preheader447
  br label %.preheader448

.preheader448:                                    ; preds = %.preheader448.preheader, %.preheader448.loopexit
  %i140 = phi i5 [ %i_141, %.preheader448.loopexit ], [ 0, %.preheader448.preheader ]
  %i141_cast = zext i5 %i140 to i8
  %i141_cast263_cast = zext i5 %i140 to i10
  %exitcond90 = icmp eq i5 %i140, -8
  %empty_550 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_141 = add i5 %i140, 1
  br i1 %exitcond90, label %167, label %.preheader447.preheader

.preheader447.preheader:                          ; preds = %.preheader448
  br label %.preheader447

.preheader447:                                    ; preds = %.preheader447.preheader, %166
  %k49 = phi i3 [ %k_50, %166 ], [ 0, %.preheader447.preheader ]
  %exitcond89 = icmp eq i3 %k49, -4
  %empty_551 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_50 = add i3 %k49, 1
  br i1 %exitcond89, label %.preheader448.loopexit, label %166

; <label>:166                                     ; preds = %.preheader447
  %tmp_1224 = trunc i3 %k49 to i2
  %p_shl193 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1224, i5 0)
  %p_shl194_cast = zext i7 %p_shl193 to i8
  %p_shl194 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1224, i3 0)
  %p_shl195_cast = zext i5 %p_shl194 to i8
  %tmp_679 = sub i8 %p_shl194_cast, %p_shl195_cast
  %tmp_873_cast_cast = sext i8 %tmp_679 to i10
  %tmp60 = add i10 -296, %tmp_873_cast_cast
  %tmp_680 = add i10 %i141_cast263_cast, %tmp60
  %tmp_875_cast = sext i10 %tmp_680 to i11
  %tmp_681 = zext i11 %tmp_875_cast to i64
  %bias_addr_46 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_681
  %bias_load_46 = load float* %bias_addr_46, align 4
  %tmp_682 = add i8 %tmp_679, %i141_cast
  %tmp_877_cast = sext i8 %tmp_682 to i32
  %tmp_683 = zext i32 %tmp_877_cast to i64
  %bias_96_addr = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_683
  store float %bias_load_46, float* %bias_96_addr, align 4
  br label %.preheader447

; <label>:167                                     ; preds = %.preheader448
  call fastcc void @subconv_1x1_8p([9216 x float]* @weights_96_96_1x1, [96 x float]* @bias_96) nounwind
  br label %.loopexit684

.loopexit684.loopexit:                            ; preds = %.preheader446
  br label %.loopexit684

.loopexit684:                                     ; preds = %.loopexit684.loopexit, %167
  %co148 = phi i5 [ 0, %167 ], [ %co_149, %.loopexit684.loopexit ]
  %co149_cast = zext i5 %co148 to i8
  %co149_cast1 = zext i5 %co148 to i10
  %exitcond88 = icmp eq i5 %co148, -8
  %empty_552 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_149 = add i5 %co148, 1
  br i1 %exitcond88, label %.preheader443.preheader, label %.preheader446.preheader

.preheader446.preheader:                          ; preds = %.loopexit684
  br label %.preheader446

.preheader443.preheader:                          ; preds = %.loopexit684
  br label %.preheader443

.preheader446.loopexit:                           ; preds = %.preheader445
  br label %.preheader446

.preheader446:                                    ; preds = %.preheader446.preheader, %.preheader446.loopexit
  %w95 = phi i2 [ %w_96, %.preheader446.loopexit ], [ 0, %.preheader446.preheader ]
  %exitcond87 = icmp eq i2 %w95, -1
  %empty_553 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_96 = add i2 %w95, 1
  br i1 %exitcond87, label %.loopexit684.loopexit, label %.preheader445.preheader

.preheader445.preheader:                          ; preds = %.preheader446
  %tmp_692_cast1 = zext i2 %w95 to i36
  %tmp_692_cast = zext i2 %w95 to i13
  br label %.preheader445

.preheader445.loopexit:                           ; preds = %.preheader444
  br label %.preheader445

.preheader445:                                    ; preds = %.preheader445.loopexit, %.preheader445.preheader
  %h95 = phi i2 [ 0, %.preheader445.preheader ], [ %h_96, %.preheader445.loopexit ]
  %exitcond86 = icmp eq i2 %h95, -1
  %empty_554 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_96 = add i2 %h95, 1
  br i1 %exitcond86, label %.preheader446.loopexit, label %.preheader444.preheader

.preheader444.preheader:                          ; preds = %.preheader445
  %tmp_699_cast1 = zext i2 %h95 to i11
  %tmp_699_cast = zext i2 %h95 to i15
  br label %.preheader444

.preheader444:                                    ; preds = %168, %.preheader444.preheader
  %i148 = phi i3 [ %i_149, %168 ], [ 0, %.preheader444.preheader ]
  %exitcond85 = icmp eq i3 %i148, -4
  %empty_555 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_149 = add i3 %i148, 1
  br i1 %exitcond85, label %.preheader445.loopexit, label %168

; <label>:168                                     ; preds = %.preheader444
  %tmp_1238 = trunc i3 %i148 to i2
  %p_shl200 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1238, i5 0)
  %p_shl205_cast = zext i7 %p_shl200 to i8
  %p_shl201 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1238, i3 0)
  %p_shl206_cast = zext i5 %p_shl201 to i8
  %tmp_703 = sub i8 %p_shl205_cast, %p_shl206_cast
  %tmp_910_cast = sext i8 %tmp_703 to i10
  %tmp61 = add i10 -424, %tmp_910_cast
  %tmp_704 = add i10 %co149_cast1, %tmp61
  %tmp_705_cast = zext i10 %tmp_704 to i13
  %tmp_1239 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_704, i2 0)
  %p_shl450_cast = zext i12 %tmp_1239 to i13
  %tmp_1240 = sub i13 %p_shl450_cast, %tmp_705_cast
  %tmp_1241 = add i13 %tmp_1240, %tmp_692_cast
  %tmp_1752_cast = sext i13 %tmp_1241 to i15
  %p_shl449_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1241, i2 0)
  %tmp_1242 = sub i15 %p_shl449_cast, %tmp_1752_cast
  %tmp_1243 = add i15 %tmp_1242, %tmp_699_cast
  %tmp_1755_cast = zext i15 %tmp_1243 to i64
  %shuffle_conv_3x3_add_15 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1755_cast
  %shuffle_conv_3x3_loa_15 = load float* %shuffle_conv_3x3_add_15, align 4
  %tmp_707 = add i8 %tmp_703, %co149_cast
  %tmp_914_cast = sext i8 %tmp_707 to i32
  %tmp_708_cast = zext i32 %tmp_914_cast to i35
  %tmp_1244 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_707, i2 0)
  %tmp_1245 = sext i10 %tmp_1244 to i34
  %p_shl448_cast = zext i34 %tmp_1245 to i35
  %tmp_1246 = sub i35 %p_shl448_cast, %tmp_708_cast
  %tmp_1758_cast = sext i35 %tmp_1246 to i36
  %tmp_1247 = add i36 %tmp_1758_cast, %tmp_692_cast1
  %tmp_1248 = trunc i36 %tmp_1247 to i11
  %tmp_1249 = trunc i36 %tmp_1247 to i9
  %p_shl447_cast = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_1249, i2 0)
  %tmp_1250 = sub i11 %p_shl447_cast, %tmp_1248
  %tmp_1251 = add i11 %tmp_1250, %tmp_699_cast1
  %tmp_1762_cast = zext i11 %tmp_1251 to i64
  %weights_96_1_3x3_add = getelementptr [864 x float]* @weights_96_1_3x3, i64 0, i64 %tmp_1762_cast
  store float %shuffle_conv_3x3_loa_15, float* %weights_96_1_3x3_add, align 4
  br label %.preheader444

.preheader443.loopexit:                           ; preds = %.preheader442
  br label %.preheader443

.preheader443:                                    ; preds = %.preheader443.preheader, %.preheader443.loopexit
  %i144 = phi i5 [ %i_145, %.preheader443.loopexit ], [ 0, %.preheader443.preheader ]
  %i145_cast = zext i5 %i144 to i8
  %i145_cast253_cast = zext i5 %i144 to i9
  %exitcond84 = icmp eq i5 %i144, -8
  %empty_556 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_145 = add i5 %i144, 1
  br i1 %exitcond84, label %170, label %.preheader442.preheader

.preheader442.preheader:                          ; preds = %.preheader443
  br label %.preheader442

.preheader442:                                    ; preds = %.preheader442.preheader, %169
  %k51 = phi i3 [ %k_52, %169 ], [ 0, %.preheader442.preheader ]
  %exitcond83 = icmp eq i3 %k51, -4
  %empty_557 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_52 = add i3 %k51, 1
  br i1 %exitcond83, label %.preheader443.loopexit, label %169

; <label>:169                                     ; preds = %.preheader442
  %tmp_1237 = trunc i3 %k51 to i2
  %p_shl198 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1237, i5 0)
  %p_shl199_cast = zext i7 %p_shl198 to i8
  %p_shl199 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1237, i3 0)
  %p_shl200_cast = zext i5 %p_shl199 to i8
  %tmp_694 = sub i8 %p_shl199_cast, %p_shl200_cast
  %tmp_891_cast_cast = sext i8 %tmp_694 to i9
  %tmp62 = add i9 -200, %tmp_891_cast_cast
  %tmp_695 = add i9 %i145_cast253_cast, %tmp62
  %tmp_893_cast = sext i9 %tmp_695 to i11
  %tmp_696 = zext i11 %tmp_893_cast to i64
  %bias_addr_47 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_696
  %bias_load_47 = load float* %bias_addr_47, align 4
  %tmp_697 = add i8 %tmp_694, %i145_cast
  %tmp_895_cast = sext i8 %tmp_697 to i32
  %tmp_698 = zext i32 %tmp_895_cast to i64
  %bias_96_addr_1 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_698
  store float %bias_load_47, float* %bias_96_addr_1, align 4
  br label %.preheader442

; <label>:170                                     ; preds = %.preheader443
  call fastcc void @subconv_3x3_8_stride([6144 x float]* @ShuffleConvs_2_Downs, [864 x float]* @weights_96_1_3x3, [96 x float]* @bias_96, [1536 x float]* @buffer0_1_96_4x4) nounwind
  br label %.loopexit683

.loopexit683.loopexit:                            ; preds = %.preheader441
  br label %.loopexit683

.loopexit683:                                     ; preds = %.loopexit683.loopexit, %170
  %co150 = phi i5 [ 0, %170 ], [ %co_151, %.loopexit683.loopexit ]
  %co151_cast = zext i5 %co150 to i12
  %exitcond82 = icmp eq i5 %co150, -8
  %empty_558 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_151 = add i5 %co150, 1
  br i1 %exitcond82, label %.preheader439.preheader, label %.preheader441.preheader

.preheader439.preheader:                          ; preds = %.loopexit683
  br label %.preheader439

.preheader441.preheader:                          ; preds = %.loopexit683
  %tmp_1235 = trunc i5 %co150 to i2
  %p_shl197 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1235, i5 0)
  %p_shl201_cast = zext i7 %p_shl197 to i8
  %tmp_1236 = shl i5 %co150, 3
  %p_shl202_cast = zext i5 %tmp_1236 to i8
  %tmp_693 = sub i8 %p_shl201_cast, %p_shl202_cast
  %p_lshr_f20_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co150, i32 2, i32 4)
  %tmp_899_cast = zext i3 %p_lshr_f20_cast to i8
  br label %.preheader441

.preheader441.loopexit:                           ; preds = %.preheader440
  br label %.preheader441

.preheader441:                                    ; preds = %.preheader441.loopexit, %.preheader441.preheader
  %ci66 = phi i5 [ 0, %.preheader441.preheader ], [ %ci_67, %.preheader441.loopexit ]
  %ci66_cast = zext i5 %ci66 to i8
  %exitcond81 = icmp eq i5 %ci66, -8
  %empty_559 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_67 = add i5 %ci66, 1
  br i1 %exitcond81, label %.loopexit683.loopexit, label %.preheader440.preheader

.preheader440.preheader:                          ; preds = %.preheader441
  %tmp_700_cast = zext i5 %ci66 to i19
  %tmp_701 = add i8 %tmp_693, %ci66_cast
  %tmp_702_cast1 = sext i8 %tmp_701 to i15
  br label %.preheader440

.preheader440:                                    ; preds = %171, %.preheader440.preheader
  %i150 = phi i5 [ %i_151, %171 ], [ 0, %.preheader440.preheader ]
  %exitcond80 = icmp eq i5 %i150, -16
  %empty_560 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %i_151 = add i5 %i150, 1
  br i1 %exitcond80, label %.preheader441.loopexit, label %171

; <label>:171                                     ; preds = %.preheader440
  %tmp_1253 = trunc i5 %i150 to i4
  %p_shl204 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1253, i5 0)
  %p_shl207_cast = zext i9 %p_shl204 to i10
  %p_shl205 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1253, i3 0)
  %p_shl208_cast1 = zext i7 %p_shl205 to i8
  %p_shl208_cast = zext i7 %p_shl205 to i10
  %tmp_715 = sub i10 %p_shl207_cast, %p_shl208_cast
  %tmp_917_cast = sext i10 %tmp_715 to i12
  %tmp63 = add i12 -1672, %tmp_917_cast
  %tmp_716 = add i12 %tmp63, %co151_cast
  %tmp_1254 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_716, i5 0)
  %p_shl453_cast = zext i17 %tmp_1254 to i18
  %tmp_1255 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_716, i3 0)
  %p_shl454_cast = zext i15 %tmp_1255 to i18
  %tmp_1256 = sub i18 %p_shl453_cast, %p_shl454_cast
  %tmp_1769_cast = sext i18 %tmp_1256 to i19
  %tmp_1257 = add i19 %tmp_700_cast, %tmp_1769_cast
  %tmp_1770_cast = sext i19 %tmp_1257 to i64
  %shuffle_conv_1x1_add_29 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1770_cast
  %shuffle_conv_1x1_loa_29 = load float* %shuffle_conv_1x1_add_29, align 4
  %tmp_1258 = shl i5 %i150, 1
  %p_shl209_cast = zext i5 %tmp_1258 to i8
  %tmp_717 = sub i8 %p_shl208_cast1, %p_shl209_cast
  %tmp_718 = add i8 %tmp_717, %tmp_899_cast
  %tmp_1259 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_718, i7 0)
  %tmp_1260 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_718, i5 0)
  %p_shl452_cast = sext i13 %tmp_1260 to i15
  %tmp_1261 = sub i15 %tmp_1259, %p_shl452_cast
  %tmp_1262 = add i15 %tmp_702_cast1, %tmp_1261
  %tmp_1777_cast = sext i15 %tmp_1262 to i64
  %weights_96_96_1x1_ad_1 = getelementptr [9216 x float]* @weights_96_96_1x1, i64 0, i64 %tmp_1777_cast
  store float %shuffle_conv_1x1_loa_29, float* %weights_96_96_1x1_ad_1, align 4
  br label %.preheader440

.preheader439.loopexit:                           ; preds = %.preheader438
  br label %.preheader439

.preheader439:                                    ; preds = %.preheader439.preheader, %.preheader439.loopexit
  %i146 = phi i5 [ %i_147, %.preheader439.loopexit ], [ 0, %.preheader439.preheader ]
  %i147_cast = zext i5 %i146 to i8
  %i147_cast1 = zext i5 %i146 to i12
  %exitcond79 = icmp eq i5 %i146, -8
  %empty_561 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_147 = add i5 %i146, 1
  br i1 %exitcond79, label %173, label %.preheader438.preheader

.preheader438.preheader:                          ; preds = %.preheader439
  br label %.preheader438

.preheader438:                                    ; preds = %.preheader438.preheader, %172
  %k53 = phi i3 [ %k_54, %172 ], [ 0, %.preheader438.preheader ]
  %exitcond78 = icmp eq i3 %k53, -4
  %empty_562 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_54 = add i3 %k53, 1
  br i1 %exitcond78, label %.preheader439.loopexit, label %172

; <label>:172                                     ; preds = %.preheader438
  %tmp_1252 = trunc i3 %k53 to i2
  %p_shl202 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1252, i5 0)
  %p_shl203_cast = zext i7 %p_shl202 to i8
  %p_shl203 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1252, i3 0)
  %p_shl204_cast = zext i5 %p_shl203 to i8
  %tmp_710 = sub i8 %p_shl203_cast, %p_shl204_cast
  %tmp_901_cast_cast = sext i8 %tmp_710 to i9
  %tmp64 = add i9 -104, %tmp_901_cast_cast
  %tmp64_cast1 = sext i9 %tmp64 to i11
  %tmp64_cast = zext i11 %tmp64_cast1 to i12
  %tmp_711 = add i12 %i147_cast1, %tmp64_cast
  %tmp_712 = zext i12 %tmp_711 to i64
  %bias_addr_48 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_712
  %bias_load_48 = load float* %bias_addr_48, align 4
  %tmp_713 = add i8 %tmp_710, %i147_cast
  %tmp_905_cast = sext i8 %tmp_713 to i32
  %tmp_714 = zext i32 %tmp_905_cast to i64
  %bias_96_addr_2 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_714
  store float %bias_load_48, float* %bias_96_addr_2, align 4
  br label %.preheader438

; <label>:173                                     ; preds = %.preheader439
  call fastcc void @subconv_1x1_4([1536 x float]* @buffer0_1_96_4x4, [9216 x float]* @weights_96_96_1x1, [96 x float]* @bias_96, [1536 x float]* @buffer1_1_96_4x4) nounwind
  call fastcc void @shuffle_96_l([1536 x float]* @buffer1_1_96_4x4, [3072 x float]* @downsampleunit2_outp) nounwind
  br label %.loopexit682

.loopexit682.loopexit:                            ; preds = %.preheader437
  br label %.loopexit682

.loopexit682:                                     ; preds = %.loopexit682.loopexit, %173
  %co152 = phi i5 [ 0, %173 ], [ %co_153, %.loopexit682.loopexit ]
  %co153_cast = zext i5 %co152 to i8
  %co153_cast1 = zext i5 %co152 to i10
  %exitcond77 = icmp eq i5 %co152, -8
  %empty_563 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_153 = add i5 %co152, 1
  br i1 %exitcond77, label %.preheader434.preheader, label %.preheader437.preheader

.preheader437.preheader:                          ; preds = %.loopexit682
  br label %.preheader437

.preheader434.preheader:                          ; preds = %.loopexit682
  br label %.preheader434

.preheader437.loopexit:                           ; preds = %.preheader436
  br label %.preheader437

.preheader437:                                    ; preds = %.preheader437.preheader, %.preheader437.loopexit
  %w97 = phi i2 [ %w_98, %.preheader437.loopexit ], [ 0, %.preheader437.preheader ]
  %exitcond76 = icmp eq i2 %w97, -1
  %empty_564 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_98 = add i2 %w97, 1
  br i1 %exitcond76, label %.loopexit682.loopexit, label %.preheader436.preheader

.preheader436.preheader:                          ; preds = %.preheader437
  %tmp_719_cast1 = zext i2 %w97 to i36
  %tmp_719_cast = zext i2 %w97 to i13
  br label %.preheader436

.preheader436.loopexit:                           ; preds = %.preheader435
  br label %.preheader436

.preheader436:                                    ; preds = %.preheader436.loopexit, %.preheader436.preheader
  %h97 = phi i2 [ 0, %.preheader436.preheader ], [ %h_98, %.preheader436.loopexit ]
  %exitcond75 = icmp eq i2 %h97, -1
  %empty_565 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_98 = add i2 %h97, 1
  br i1 %exitcond75, label %.preheader437.loopexit, label %.preheader435.preheader

.preheader435.preheader:                          ; preds = %.preheader436
  %tmp_727_cast1 = zext i2 %h97 to i11
  %tmp_727_cast = zext i2 %h97 to i15
  br label %.preheader435

.preheader435:                                    ; preds = %174, %.preheader435.preheader
  %i156 = phi i3 [ %i_157, %174 ], [ 0, %.preheader435.preheader ]
  %exitcond74 = icmp eq i3 %i156, -4
  %empty_566 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_157 = add i3 %i156, 1
  br i1 %exitcond74, label %.preheader436.loopexit, label %174

; <label>:174                                     ; preds = %.preheader435
  %tmp_1266 = trunc i3 %i156 to i2
  %p_shl209 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1266, i5 0)
  %p_shl216_cast = zext i7 %p_shl209 to i8
  %p_shl210 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1266, i3 0)
  %p_shl217_cast = zext i5 %p_shl210 to i8
  %tmp_731 = sub i8 %p_shl216_cast, %p_shl217_cast
  %tmp_943_cast = sext i8 %tmp_731 to i10
  %tmp65 = add i10 -328, %tmp_943_cast
  %tmp_732 = add i10 %co153_cast1, %tmp65
  %tmp_733_cast = zext i10 %tmp_732 to i13
  %tmp_1267 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_732, i2 0)
  %p_shl458_cast = zext i12 %tmp_1267 to i13
  %tmp_1268 = sub i13 %p_shl458_cast, %tmp_733_cast
  %tmp_1269 = add i13 %tmp_1268, %tmp_719_cast
  %tmp_1786_cast = sext i13 %tmp_1269 to i15
  %p_shl457_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1269, i2 0)
  %tmp_1270 = sub i15 %p_shl457_cast, %tmp_1786_cast
  %tmp_1271 = add i15 %tmp_1270, %tmp_727_cast
  %tmp_1789_cast = zext i15 %tmp_1271 to i64
  %shuffle_conv_3x3_add_16 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1789_cast
  %shuffle_conv_3x3_loa_16 = load float* %shuffle_conv_3x3_add_16, align 4
  %tmp_735 = add i8 %tmp_731, %co153_cast
  %tmp_947_cast = sext i8 %tmp_735 to i32
  %tmp_736_cast = zext i32 %tmp_947_cast to i35
  %tmp_1272 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_735, i2 0)
  %tmp_1273 = sext i10 %tmp_1272 to i34
  %p_shl456_cast = zext i34 %tmp_1273 to i35
  %tmp_1274 = sub i35 %p_shl456_cast, %tmp_736_cast
  %tmp_1792_cast = sext i35 %tmp_1274 to i36
  %tmp_1275 = add i36 %tmp_1792_cast, %tmp_719_cast1
  %tmp_1276 = trunc i36 %tmp_1275 to i11
  %tmp_1277 = trunc i36 %tmp_1275 to i9
  %p_shl455_cast = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_1277, i2 0)
  %tmp_1278 = sub i11 %p_shl455_cast, %tmp_1276
  %tmp_1279 = add i11 %tmp_1278, %tmp_727_cast1
  %tmp_1796_cast = zext i11 %tmp_1279 to i64
  %weights_96_1_3x3_add_1 = getelementptr [864 x float]* @weights_96_1_3x3, i64 0, i64 %tmp_1796_cast
  store float %shuffle_conv_3x3_loa_16, float* %weights_96_1_3x3_add_1, align 4
  br label %.preheader435

.preheader434.loopexit:                           ; preds = %.preheader433
  br label %.preheader434

.preheader434:                                    ; preds = %.preheader434.preheader, %.preheader434.loopexit
  %i152 = phi i5 [ %i_153, %.preheader434.loopexit ], [ 0, %.preheader434.preheader ]
  %i153_cast = zext i5 %i152 to i8
  %i153_cast1 = zext i5 %i152 to i12
  %exitcond73 = icmp eq i5 %i152, -8
  %empty_567 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_153 = add i5 %i152, 1
  br i1 %exitcond73, label %176, label %.preheader433.preheader

.preheader433.preheader:                          ; preds = %.preheader434
  br label %.preheader433

.preheader433:                                    ; preds = %.preheader433.preheader, %175
  %k55 = phi i3 [ %k_56, %175 ], [ 0, %.preheader433.preheader ]
  %exitcond72 = icmp eq i3 %k55, -4
  %empty_568 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_56 = add i3 %k55, 1
  br i1 %exitcond72, label %.preheader434.loopexit, label %175

; <label>:175                                     ; preds = %.preheader433
  %tmp_1265 = trunc i3 %k55 to i2
  %p_shl207 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1265, i5 0)
  %p_shl210_cast = zext i7 %p_shl207 to i8
  %p_shl208 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1265, i3 0)
  %p_shl211_cast = zext i5 %p_shl208 to i8
  %tmp_721 = sub i8 %p_shl210_cast, %p_shl211_cast
  %tmp_924_cast = sext i8 %tmp_721 to i12
  %tmp66 = add i12 2040, %tmp_924_cast
  %tmp_722 = add i12 %i153_cast1, %tmp66
  %tmp_723 = zext i12 %tmp_722 to i64
  %bias_addr_49 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_723
  %bias_load_49 = load float* %bias_addr_49, align 4
  %tmp_724 = add i8 %tmp_721, %i153_cast
  %tmp_928_cast = sext i8 %tmp_724 to i32
  %tmp_725 = zext i32 %tmp_928_cast to i64
  %bias_96_addr_3 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_725
  store float %bias_load_49, float* %bias_96_addr_3, align 4
  br label %.preheader433

; <label>:176                                     ; preds = %.preheader434
  call fastcc void @subconv_3x3_8_stride([6144 x float]* @shuffleunit1_7_outpu, [864 x float]* @weights_96_1_3x3, [96 x float]* @bias_96, [1536 x float]* @buffer0_1_96_4x4) nounwind
  br label %.loopexit681

.loopexit681.loopexit:                            ; preds = %.preheader432
  br label %.loopexit681

.loopexit681:                                     ; preds = %.loopexit681.loopexit, %176
  %co154 = phi i5 [ 0, %176 ], [ %co_155, %.loopexit681.loopexit ]
  %co155_cast = zext i5 %co154 to i12
  %exitcond71 = icmp eq i5 %co154, -8
  %empty_569 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_155 = add i5 %co154, 1
  br i1 %exitcond71, label %.preheader430.preheader, label %.preheader432.preheader

.preheader430.preheader:                          ; preds = %.loopexit681
  br label %.preheader430

.preheader432.preheader:                          ; preds = %.loopexit681
  %tmp_1263 = trunc i5 %co154 to i2
  %p_shl206 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1263, i5 0)
  %p_shl212_cast = zext i7 %p_shl206 to i8
  %tmp_1264 = shl i5 %co154, 3
  %p_shl213_cast = zext i5 %tmp_1264 to i8
  %tmp_720 = sub i8 %p_shl212_cast, %p_shl213_cast
  %p_lshr_f21_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co154, i32 2, i32 4)
  %tmp_932_cast = zext i3 %p_lshr_f21_cast to i8
  br label %.preheader432

.preheader432.loopexit:                           ; preds = %.preheader431
  br label %.preheader432

.preheader432:                                    ; preds = %.preheader432.loopexit, %.preheader432.preheader
  %ci68 = phi i5 [ 0, %.preheader432.preheader ], [ %ci_69, %.preheader432.loopexit ]
  %ci68_cast = zext i5 %ci68 to i8
  %exitcond70 = icmp eq i5 %ci68, -8
  %empty_570 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_69 = add i5 %ci68, 1
  br i1 %exitcond70, label %.loopexit681.loopexit, label %.preheader431.preheader

.preheader431.preheader:                          ; preds = %.preheader432
  %tmp_728_cast = zext i5 %ci68 to i19
  %tmp_729 = add i8 %tmp_720, %ci68_cast
  %tmp_730_cast1 = sext i8 %tmp_729 to i15
  br label %.preheader431

.preheader431:                                    ; preds = %177, %.preheader431.preheader
  %i158 = phi i5 [ %i_159, %177 ], [ 0, %.preheader431.preheader ]
  %exitcond69 = icmp eq i5 %i158, -16
  %empty_571 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %i_159 = add i5 %i158, 1
  br i1 %exitcond69, label %.preheader432.loopexit, label %177

; <label>:177                                     ; preds = %.preheader431
  %tmp_1283 = trunc i5 %i158 to i4
  %p_shl213 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1283, i5 0)
  %p_shl220_cast = zext i9 %p_shl213 to i10
  %p_shl214 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1283, i3 0)
  %p_shl221_cast1 = zext i7 %p_shl214 to i8
  %p_shl221_cast = zext i7 %p_shl214 to i10
  %tmp_744 = sub i10 %p_shl220_cast, %p_shl221_cast
  %tmp_955_cast = sext i10 %tmp_744 to i12
  %tmp67 = add i12 -1288, %tmp_955_cast
  %tmp_745 = add i12 %tmp67, %co155_cast
  %tmp_1284 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_745, i5 0)
  %p_shl461_cast = zext i17 %tmp_1284 to i18
  %tmp_1285 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_745, i3 0)
  %p_shl462_cast = zext i15 %tmp_1285 to i18
  %tmp_1286 = sub i18 %p_shl461_cast, %p_shl462_cast
  %tmp_1807_cast = sext i18 %tmp_1286 to i19
  %tmp_1287 = add i19 %tmp_728_cast, %tmp_1807_cast
  %tmp_1808_cast = sext i19 %tmp_1287 to i64
  %shuffle_conv_1x1_add_30 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1808_cast
  %shuffle_conv_1x1_loa_30 = load float* %shuffle_conv_1x1_add_30, align 4
  %tmp_1288 = shl i5 %i158, 1
  %p_shl222_cast = zext i5 %tmp_1288 to i8
  %tmp_746 = sub i8 %p_shl221_cast1, %p_shl222_cast
  %tmp_747 = add i8 %tmp_746, %tmp_932_cast
  %tmp_1289 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_747, i7 0)
  %tmp_1290 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_747, i5 0)
  %p_shl460_cast = sext i13 %tmp_1290 to i15
  %tmp_1291 = sub i15 %tmp_1289, %p_shl460_cast
  %tmp_1292 = add i15 %tmp_730_cast1, %tmp_1291
  %tmp_1815_cast = sext i15 %tmp_1292 to i64
  %weights_96_96_1x1_ad_2 = getelementptr [9216 x float]* @weights_96_96_1x1, i64 0, i64 %tmp_1815_cast
  store float %shuffle_conv_1x1_loa_30, float* %weights_96_96_1x1_ad_2, align 4
  br label %.preheader431

.preheader430.loopexit:                           ; preds = %.preheader429
  br label %.preheader430

.preheader430:                                    ; preds = %.preheader430.preheader, %.preheader430.loopexit
  %i154 = phi i5 [ %i_155, %.preheader430.loopexit ], [ 0, %.preheader430.preheader ]
  %i155_cast = zext i5 %i154 to i8
  %i155_cast1 = zext i5 %i154 to i12
  %exitcond68 = icmp eq i5 %i154, -8
  %empty_572 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_155 = add i5 %i154, 1
  br i1 %exitcond68, label %179, label %.preheader429.preheader

.preheader429.preheader:                          ; preds = %.preheader430
  br label %.preheader429

.preheader429:                                    ; preds = %.preheader429.preheader, %178
  %k57 = phi i3 [ %k_58, %178 ], [ 0, %.preheader429.preheader ]
  %exitcond67 = icmp eq i3 %k57, -4
  %empty_573 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_58 = add i3 %k57, 1
  br i1 %exitcond67, label %.preheader430.loopexit, label %178

; <label>:178                                     ; preds = %.preheader429
  %tmp_1282 = trunc i3 %k57 to i2
  %p_shl211 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1282, i5 0)
  %p_shl214_cast = zext i7 %p_shl211 to i8
  %p_shl212 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1282, i3 0)
  %p_shl215_cast = zext i5 %p_shl212 to i8
  %tmp_739 = sub i8 %p_shl214_cast, %p_shl215_cast
  %tmp_934_cast = sext i8 %tmp_739 to i12
  %tmp68 = add i12 -1960, %tmp_934_cast
  %tmp_740 = add i12 %i155_cast1, %tmp68
  %tmp_741 = zext i12 %tmp_740 to i64
  %bias_addr_50 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_741
  %bias_load_50 = load float* %bias_addr_50, align 4
  %tmp_742 = add i8 %tmp_739, %i155_cast
  %tmp_938_cast = sext i8 %tmp_742 to i32
  %tmp_743 = zext i32 %tmp_938_cast to i64
  %bias_96_addr_4 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_743
  store float %bias_load_50, float* %bias_96_addr_4, align 4
  br label %.preheader429

; <label>:179                                     ; preds = %.preheader430
  call fastcc void @subconv_1x1_4([1536 x float]* @buffer0_1_96_4x4, [9216 x float]* @weights_96_96_1x1, [96 x float]* @bias_96, [1536 x float]* @buffer1_1_96_4x4) nounwind
  call fastcc void @shuffle_96_r([1536 x float]* @buffer1_1_96_4x4, [3072 x float]* @downsampleunit2_outp) nounwind
  br label %.loopexit680

.loopexit680.loopexit:                            ; preds = %.preheader428
  br label %.loopexit680

.loopexit680:                                     ; preds = %.loopexit680.loopexit, %179
  %co156 = phi i7 [ 0, %179 ], [ %co_157, %.loopexit680.loopexit ]
  %co157_cast = zext i7 %co156 to i8
  %exitcond66 = icmp eq i7 %co156, -32
  %empty_574 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) nounwind
  %co_157 = add i7 %co156, 1
  br i1 %exitcond66, label %.preheader426.preheader, label %.preheader428.preheader

.preheader426.preheader:                          ; preds = %.loopexit680
  br label %.preheader426

.preheader428.preheader:                          ; preds = %.loopexit680
  %tmp_738 = add i8 %co157_cast, 96
  %tmp_1280 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_738, i2 0)
  %tmp_1798_cast = zext i10 %tmp_1280 to i11
  %tmp_1281 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %co156, i2 0)
  %tmp_1800_cast = zext i9 %tmp_1281 to i10
  br label %.preheader428

.preheader428.loopexit:                           ; preds = %.preheader427
  br label %.preheader428

.preheader428:                                    ; preds = %.preheader428.loopexit, %.preheader428.preheader
  %h99 = phi i3 [ 0, %.preheader428.preheader ], [ %h_100, %.preheader428.loopexit ]
  %exitcond65 = icmp eq i3 %h99, -4
  %empty_575 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %h_100 = add i3 %h99, 1
  br i1 %exitcond65, label %.loopexit680.loopexit, label %.preheader427.preheader

.preheader427.preheader:                          ; preds = %.preheader428
  %tmp_749_cast1 = zext i3 %h99 to i10
  %tmp_749_cast = zext i3 %h99 to i11
  %tmp_1295 = add i11 %tmp_749_cast, %tmp_1798_cast
  %tmp_1820_cast = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_1295, i2 0)
  %tmp_1296 = add i10 %tmp_749_cast1, %tmp_1800_cast
  %tmp_1823_cast = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_1296, i2 0)
  br label %.preheader427

.preheader427:                                    ; preds = %180, %.preheader427.preheader
  %w99 = phi i3 [ %w_100, %180 ], [ 0, %.preheader427.preheader ]
  %exitcond64 = icmp eq i3 %w99, -4
  %empty_576 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %w_100 = add i3 %w99, 1
  br i1 %exitcond64, label %.preheader428.loopexit, label %180

; <label>:180                                     ; preds = %.preheader427
  %tmp_755_cast1 = zext i3 %w99 to i12
  %tmp_755_cast = zext i3 %w99 to i13
  %tmp_1297 = add i13 %tmp_1820_cast, %tmp_755_cast
  %tmp_1824_cast = zext i13 %tmp_1297 to i64
  %downsampleunit2_outp = getelementptr [3072 x float]* @downsampleunit2_outp, i64 0, i64 %tmp_1824_cast
  %tmp_1298 = add i12 %tmp_1823_cast, %tmp_755_cast1
  %tmp_1825_cast = zext i12 %tmp_1298 to i64
  %buffer0_1_96_4x4_add = getelementptr [1536 x float]* @buffer0_1_96_4x4, i64 0, i64 %tmp_1825_cast
  %downsampleunit2_outp_1 = load float* %downsampleunit2_outp, align 4
  store float %downsampleunit2_outp_1, float* %buffer0_1_96_4x4_add, align 4
  br label %.preheader427

.preheader426.loopexit:                           ; preds = %.preheader425
  br label %.preheader426

.preheader426:                                    ; preds = %.preheader426.preheader, %.preheader426.loopexit
  %co158 = phi i5 [ %co_159, %.preheader426.loopexit ], [ 0, %.preheader426.preheader ]
  %co158_cast = zext i5 %co158 to i12
  %exitcond63 = icmp eq i5 %co158, -8
  %empty_577 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_159 = add i5 %co158, 1
  br i1 %exitcond63, label %.preheader423.preheader, label %.preheader425.preheader

.preheader423.preheader:                          ; preds = %.preheader426
  br label %.preheader423

.preheader425.preheader:                          ; preds = %.preheader426
  %tmp_1293 = trunc i5 %co158 to i2
  %p_shl215 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1293, i5 0)
  %p_shl218_cast = zext i7 %p_shl215 to i8
  %tmp_1294 = shl i5 %co158, 3
  %p_shl219_cast = zext i5 %tmp_1294 to i8
  %tmp_748 = sub i8 %p_shl218_cast, %p_shl219_cast
  %p_lshr_f22_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co158, i32 2, i32 4)
  %tmp_954_cast = zext i3 %p_lshr_f22_cast to i8
  br label %.preheader425

.preheader425.loopexit:                           ; preds = %.preheader424
  br label %.preheader425

.preheader425:                                    ; preds = %.preheader425.loopexit, %.preheader425.preheader
  %ci70 = phi i5 [ 0, %.preheader425.preheader ], [ %ci_71, %.preheader425.loopexit ]
  %ci70_cast = zext i5 %ci70 to i8
  %exitcond62 = icmp eq i5 %ci70, -8
  %empty_578 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_71 = add i5 %ci70, 1
  br i1 %exitcond62, label %.preheader426.loopexit, label %.preheader424.preheader

.preheader424.preheader:                          ; preds = %.preheader425
  %tmp_750_cast = zext i5 %ci70 to i19
  %tmp_752 = add i8 %tmp_748, %ci70_cast
  %tmp_753_cast = sext i8 %tmp_752 to i15
  br label %.preheader424

.preheader424:                                    ; preds = %181, %.preheader424.preheader
  %i162 = phi i5 [ %i_163, %181 ], [ 0, %.preheader424.preheader ]
  %exitcond61 = icmp eq i5 %i162, -16
  %empty_579 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %i_163 = add i5 %i162, 1
  br i1 %exitcond61, label %.preheader425.loopexit, label %181

; <label>:181                                     ; preds = %.preheader424
  %tmp_1300 = trunc i5 %i162 to i4
  %p_shl218 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1300, i5 0)
  %p_shl225_cast = zext i9 %p_shl218 to i10
  %p_shl219 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1300, i3 0)
  %p_shl226_cast1 = zext i7 %p_shl219 to i8
  %p_shl226_cast = zext i7 %p_shl219 to i10
  %tmp_761 = sub i10 %p_shl225_cast, %p_shl226_cast
  %tmp_974_cast = sext i10 %tmp_761 to i12
  %tmp69 = add i12 -904, %tmp_974_cast
  %tmp_762 = add i12 %tmp69, %co158_cast
  %tmp_1301 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_762, i5 0)
  %p_shl465_cast = zext i17 %tmp_1301 to i18
  %tmp_1302 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_762, i3 0)
  %p_shl466_cast = zext i15 %tmp_1302 to i18
  %tmp_1303 = sub i18 %p_shl465_cast, %p_shl466_cast
  %tmp_1832_cast = sext i18 %tmp_1303 to i19
  %tmp_1304 = add i19 %tmp_750_cast, %tmp_1832_cast
  %tmp_1833_cast = sext i19 %tmp_1304 to i64
  %shuffle_conv_1x1_add_31 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1833_cast
  %shuffle_conv_1x1_loa_31 = load float* %shuffle_conv_1x1_add_31, align 4
  %tmp_1305 = shl i5 %i162, 1
  %p_shl227_cast = zext i5 %tmp_1305 to i8
  %tmp_763 = sub i8 %p_shl226_cast1, %p_shl227_cast
  %tmp_764 = add i8 %tmp_763, %tmp_954_cast
  %tmp_1306 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_764, i7 0)
  %tmp_1307 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_764, i5 0)
  %p_shl464_cast = sext i13 %tmp_1307 to i15
  %tmp_1308 = sub i15 %tmp_1306, %p_shl464_cast
  %tmp_1309 = add i15 %tmp_753_cast, %tmp_1308
  %tmp_1840_cast = sext i15 %tmp_1309 to i64
  %weights_96_96_1x1_ad_3 = getelementptr [9216 x float]* @weights_96_96_1x1, i64 0, i64 %tmp_1840_cast
  store float %shuffle_conv_1x1_loa_31, float* %weights_96_96_1x1_ad_3, align 4
  br label %.preheader424

.preheader423.loopexit:                           ; preds = %.preheader422
  br label %.preheader423

.preheader423:                                    ; preds = %.preheader423.preheader, %.preheader423.loopexit
  %i160 = phi i5 [ %i_161, %.preheader423.loopexit ], [ 0, %.preheader423.preheader ]
  %i161_cast = zext i5 %i160 to i8
  %i161_cast1 = zext i5 %i160 to i12
  %exitcond60 = icmp eq i5 %i160, -8
  %empty_580 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_161 = add i5 %i160, 1
  br i1 %exitcond60, label %183, label %.preheader422.preheader

.preheader422.preheader:                          ; preds = %.preheader423
  br label %.preheader422

.preheader422:                                    ; preds = %.preheader422.preheader, %182
  %k59 = phi i3 [ %k_60, %182 ], [ 0, %.preheader422.preheader ]
  %exitcond59 = icmp eq i3 %k59, -4
  %empty_581 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_60 = add i3 %k59, 1
  br i1 %exitcond59, label %.preheader423.loopexit, label %182

; <label>:182                                     ; preds = %.preheader422
  %tmp_1299 = trunc i3 %k59 to i2
  %p_shl216 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1299, i5 0)
  %p_shl223_cast = zext i7 %p_shl216 to i8
  %p_shl217 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1299, i3 0)
  %p_shl224_cast = zext i5 %p_shl217 to i8
  %tmp_756 = sub i8 %p_shl223_cast, %p_shl224_cast
  %tmp_963_cast = sext i8 %tmp_756 to i12
  %tmp70 = add i12 -1864, %tmp_963_cast
  %tmp_757 = add i12 %i161_cast1, %tmp70
  %tmp_758 = zext i12 %tmp_757 to i64
  %bias_addr_51 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_758
  %bias_load_51 = load float* %bias_addr_51, align 4
  %tmp_759 = add i8 %tmp_756, %i161_cast
  %tmp_967_cast = sext i8 %tmp_759 to i32
  %tmp_760 = zext i32 %tmp_967_cast to i64
  %bias_96_addr_5 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_760
  store float %bias_load_51, float* %bias_96_addr_5, align 4
  br label %.preheader422

; <label>:183                                     ; preds = %.preheader423
  call fastcc void @subconv_1x1_4([1536 x float]* @buffer0_1_96_4x4, [9216 x float]* @weights_96_96_1x1, [96 x float]* @bias_96, [1536 x float]* @buffer1_1_96_4x4) nounwind
  br label %.loopexit679

.loopexit679.loopexit:                            ; preds = %.preheader421
  br label %.loopexit679

.loopexit679:                                     ; preds = %.loopexit679.loopexit, %183
  %co160 = phi i5 [ 0, %183 ], [ %co_161, %.loopexit679.loopexit ]
  %co161_cast = zext i5 %co160 to i8
  %co161_cast1 = zext i5 %co160 to i10
  %exitcond58 = icmp eq i5 %co160, -8
  %empty_582 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_161 = add i5 %co160, 1
  br i1 %exitcond58, label %.preheader418.preheader, label %.preheader421.preheader

.preheader421.preheader:                          ; preds = %.loopexit679
  br label %.preheader421

.preheader418.preheader:                          ; preds = %.loopexit679
  br label %.preheader418

.preheader421.loopexit:                           ; preds = %.preheader420
  br label %.preheader421

.preheader421:                                    ; preds = %.preheader421.preheader, %.preheader421.loopexit
  %w101 = phi i2 [ %w_102, %.preheader421.loopexit ], [ 0, %.preheader421.preheader ]
  %exitcond57 = icmp eq i2 %w101, -1
  %empty_583 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_102 = add i2 %w101, 1
  br i1 %exitcond57, label %.loopexit679.loopexit, label %.preheader420.preheader

.preheader420.preheader:                          ; preds = %.preheader421
  %tmp_765_cast = zext i2 %w101 to i36
  %tmp_765_cast1 = zext i2 %w101 to i13
  br label %.preheader420

.preheader420.loopexit:                           ; preds = %.preheader419
  br label %.preheader420

.preheader420:                                    ; preds = %.preheader420.loopexit, %.preheader420.preheader
  %h101 = phi i2 [ 0, %.preheader420.preheader ], [ %h_102, %.preheader420.loopexit ]
  %exitcond56 = icmp eq i2 %h101, -1
  %empty_584 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_102 = add i2 %h101, 1
  br i1 %exitcond56, label %.preheader421.loopexit, label %.preheader419.preheader

.preheader419.preheader:                          ; preds = %.preheader420
  %tmp_772_cast1 = zext i2 %h101 to i11
  %tmp_772_cast = zext i2 %h101 to i15
  br label %.preheader419

.preheader419:                                    ; preds = %184, %.preheader419.preheader
  %i168 = phi i3 [ %i_169, %184 ], [ 0, %.preheader419.preheader ]
  %exitcond55 = icmp eq i3 %i168, -4
  %empty_585 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_169 = add i3 %i168, 1
  br i1 %exitcond55, label %.preheader420.loopexit, label %184

; <label>:184                                     ; preds = %.preheader419
  %tmp_1313 = trunc i3 %i168 to i2
  %p_shl223 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1313, i5 0)
  %p_shl234_cast = zext i7 %p_shl223 to i8
  %p_shl224 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1313, i3 0)
  %p_shl235_cast = zext i5 %p_shl224 to i8
  %tmp_776 = sub i8 %p_shl234_cast, %p_shl235_cast
  %tmp_1000_cast = sext i8 %tmp_776 to i10
  %tmp71 = add i10 -232, %tmp_1000_cast
  %tmp_777 = add i10 %co161_cast1, %tmp71
  %tmp_779_cast = zext i10 %tmp_777 to i13
  %tmp_1314 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_777, i2 0)
  %p_shl470_cast = zext i12 %tmp_1314 to i13
  %tmp_1315 = sub i13 %p_shl470_cast, %tmp_779_cast
  %tmp_1316 = add i13 %tmp_1315, %tmp_765_cast1
  %tmp_1849_cast = sext i13 %tmp_1316 to i15
  %p_shl469_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1316, i2 0)
  %tmp_1317 = sub i15 %p_shl469_cast, %tmp_1849_cast
  %tmp_1318 = add i15 %tmp_1317, %tmp_772_cast
  %tmp_1852_cast = zext i15 %tmp_1318 to i64
  %shuffle_conv_3x3_add_17 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1852_cast
  %shuffle_conv_3x3_loa_17 = load float* %shuffle_conv_3x3_add_17, align 4
  %tmp_780 = add i8 %tmp_776, %co161_cast
  %tmp_1004_cast = sext i8 %tmp_780 to i32
  %tmp_782_cast = zext i32 %tmp_1004_cast to i35
  %tmp_1319 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_780, i2 0)
  %tmp_1320 = sext i10 %tmp_1319 to i34
  %p_shl468_cast = zext i34 %tmp_1320 to i35
  %tmp_1321 = sub i35 %p_shl468_cast, %tmp_782_cast
  %tmp_1855_cast = sext i35 %tmp_1321 to i36
  %tmp_1322 = add i36 %tmp_1855_cast, %tmp_765_cast
  %tmp_1323 = trunc i36 %tmp_1322 to i11
  %tmp_1324 = trunc i36 %tmp_1322 to i9
  %p_shl467_cast = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_1324, i2 0)
  %tmp_1325 = sub i11 %p_shl467_cast, %tmp_1323
  %tmp_1326 = add i11 %tmp_1325, %tmp_772_cast1
  %tmp_1859_cast = zext i11 %tmp_1326 to i64
  %weights_96_1_3x3_add_2 = getelementptr [864 x float]* @weights_96_1_3x3, i64 0, i64 %tmp_1859_cast
  store float %shuffle_conv_3x3_loa_17, float* %weights_96_1_3x3_add_2, align 4
  br label %.preheader419

.preheader418.loopexit:                           ; preds = %.preheader417
  br label %.preheader418

.preheader418:                                    ; preds = %.preheader418.preheader, %.preheader418.loopexit
  %i164 = phi i5 [ %i_165, %.preheader418.loopexit ], [ 0, %.preheader418.preheader ]
  %i165_cast = zext i5 %i164 to i8
  %i165_cast1 = zext i5 %i164 to i12
  %exitcond54 = icmp eq i5 %i164, -8
  %empty_586 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_165 = add i5 %i164, 1
  br i1 %exitcond54, label %186, label %.preheader417.preheader

.preheader417.preheader:                          ; preds = %.preheader418
  br label %.preheader417

.preheader417:                                    ; preds = %.preheader417.preheader, %185
  %k61 = phi i3 [ %k_62, %185 ], [ 0, %.preheader417.preheader ]
  %exitcond53 = icmp eq i3 %k61, -4
  %empty_587 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_62 = add i3 %k61, 1
  br i1 %exitcond53, label %.preheader418.loopexit, label %185

; <label>:185                                     ; preds = %.preheader417
  %tmp_1312 = trunc i3 %k61 to i2
  %p_shl221 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1312, i5 0)
  %p_shl228_cast = zext i7 %p_shl221 to i8
  %p_shl222 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1312, i3 0)
  %p_shl229_cast = zext i5 %p_shl222 to i8
  %tmp_767 = sub i8 %p_shl228_cast, %p_shl229_cast
  %tmp_981_cast = sext i8 %tmp_767 to i12
  %tmp72 = add i12 -1768, %tmp_981_cast
  %tmp_768 = add i12 %i165_cast1, %tmp72
  %tmp_769 = zext i12 %tmp_768 to i64
  %bias_addr_52 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_769
  %bias_load_52 = load float* %bias_addr_52, align 4
  %tmp_770 = add i8 %tmp_767, %i165_cast
  %tmp_985_cast = sext i8 %tmp_770 to i32
  %tmp_771 = zext i32 %tmp_985_cast to i64
  %bias_96_addr_6 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_771
  store float %bias_load_52, float* %bias_96_addr_6, align 4
  br label %.preheader417

; <label>:186                                     ; preds = %.preheader418
  call fastcc void @subconv_3x3_4_no_rel([1536 x float]* @buffer1_1_96_4x4, [864 x float]* @weights_96_1_3x3, [96 x float]* @bias_96, [1536 x float]* @buffer0_1_96_4x4) nounwind
  br label %.loopexit678

.loopexit678.loopexit:                            ; preds = %.preheader416
  br label %.loopexit678

.loopexit678:                                     ; preds = %.loopexit678.loopexit, %186
  %co162 = phi i5 [ 0, %186 ], [ %co_163, %.loopexit678.loopexit ]
  %co163_cast188_cast = zext i5 %co162 to i11
  %exitcond52 = icmp eq i5 %co162, -8
  %empty_588 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_163 = add i5 %co162, 1
  br i1 %exitcond52, label %.preheader414.preheader, label %.preheader416.preheader

.preheader414.preheader:                          ; preds = %.loopexit678
  br label %.preheader414

.preheader416.preheader:                          ; preds = %.loopexit678
  %tmp_1310 = trunc i5 %co162 to i2
  %p_shl220 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1310, i5 0)
  %p_shl230_cast = zext i7 %p_shl220 to i8
  %tmp_1311 = shl i5 %co162, 3
  %p_shl231_cast = zext i5 %tmp_1311 to i8
  %tmp_766 = sub i8 %p_shl230_cast, %p_shl231_cast
  %p_lshr_f23_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co162, i32 2, i32 4)
  %tmp_989_cast = zext i3 %p_lshr_f23_cast to i8
  br label %.preheader416

.preheader416.loopexit:                           ; preds = %.preheader415
  br label %.preheader416

.preheader416:                                    ; preds = %.preheader416.loopexit, %.preheader416.preheader
  %ci72 = phi i5 [ 0, %.preheader416.preheader ], [ %ci_73, %.preheader416.loopexit ]
  %ci72_cast = zext i5 %ci72 to i8
  %exitcond51 = icmp eq i5 %ci72, -8
  %empty_589 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_73 = add i5 %ci72, 1
  br i1 %exitcond51, label %.loopexit678.loopexit, label %.preheader415.preheader

.preheader415.preheader:                          ; preds = %.preheader416
  %tmp_773_cast = zext i5 %ci72 to i19
  %tmp_774 = add i8 %tmp_766, %ci72_cast
  %tmp_775_cast = sext i8 %tmp_774 to i15
  br label %.preheader415

.preheader415:                                    ; preds = %187, %.preheader415.preheader
  %i170 = phi i5 [ %i_171, %187 ], [ 0, %.preheader415.preheader ]
  %exitcond50 = icmp eq i5 %i170, -16
  %empty_590 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %i_171 = add i5 %i170, 1
  br i1 %exitcond50, label %.preheader416.loopexit, label %187

; <label>:187                                     ; preds = %.preheader415
  %tmp_1329 = trunc i5 %i170 to i4
  %p_shl227 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1329, i5 0)
  %p_shl236_cast = zext i9 %p_shl227 to i10
  %p_shl228 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1329, i3 0)
  %p_shl237_cast1 = zext i7 %p_shl228 to i8
  %p_shl237_cast = zext i7 %p_shl228 to i10
  %tmp_788 = sub i10 %p_shl236_cast, %p_shl237_cast
  %tmp_1007_cast_cast = sext i10 %tmp_788 to i11
  %tmp73 = add i11 -520, %tmp_1007_cast_cast
  %tmp_789 = add i11 %tmp73, %co163_cast188_cast
  %tmp_1330 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_789, i5 0)
  %tmp_1331 = sext i16 %tmp_1330 to i17
  %p_shl473_cast = zext i17 %tmp_1331 to i18
  %tmp_1332 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_789, i3 0)
  %tmp_1333 = sext i14 %tmp_1332 to i15
  %p_shl474_cast = zext i15 %tmp_1333 to i18
  %tmp_1334 = sub i18 %p_shl473_cast, %p_shl474_cast
  %tmp_1870_cast = sext i18 %tmp_1334 to i19
  %tmp_1335 = add i19 %tmp_773_cast, %tmp_1870_cast
  %tmp_1871_cast = sext i19 %tmp_1335 to i64
  %shuffle_conv_1x1_add_32 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1871_cast
  %shuffle_conv_1x1_loa_32 = load float* %shuffle_conv_1x1_add_32, align 4
  %tmp_1336 = shl i5 %i170, 1
  %p_shl238_cast = zext i5 %tmp_1336 to i8
  %tmp_790 = sub i8 %p_shl237_cast1, %p_shl238_cast
  %tmp_791 = add i8 %tmp_790, %tmp_989_cast
  %tmp_1337 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_791, i7 0)
  %tmp_1338 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_791, i5 0)
  %p_shl472_cast = sext i13 %tmp_1338 to i15
  %tmp_1339 = sub i15 %tmp_1337, %p_shl472_cast
  %tmp_1340 = add i15 %tmp_775_cast, %tmp_1339
  %tmp_1878_cast = sext i15 %tmp_1340 to i64
  %weights_96_96_1x1_ad_4 = getelementptr [9216 x float]* @weights_96_96_1x1, i64 0, i64 %tmp_1878_cast
  store float %shuffle_conv_1x1_loa_32, float* %weights_96_96_1x1_ad_4, align 4
  br label %.preheader415

.preheader414.loopexit:                           ; preds = %.preheader413
  br label %.preheader414

.preheader414:                                    ; preds = %.preheader414.preheader, %.preheader414.loopexit
  %i166 = phi i5 [ %i_167, %.preheader414.loopexit ], [ 0, %.preheader414.preheader ]
  %i167_cast = zext i5 %i166 to i8
  %i167_cast1 = zext i5 %i166 to i12
  %exitcond49 = icmp eq i5 %i166, -8
  %empty_591 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_167 = add i5 %i166, 1
  br i1 %exitcond49, label %189, label %.preheader413.preheader

.preheader413.preheader:                          ; preds = %.preheader414
  br label %.preheader413

.preheader413:                                    ; preds = %.preheader413.preheader, %188
  %k63 = phi i3 [ %k_64, %188 ], [ 0, %.preheader413.preheader ]
  %exitcond48 = icmp eq i3 %k63, -4
  %empty_592 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_64 = add i3 %k63, 1
  br i1 %exitcond48, label %.preheader414.loopexit, label %188

; <label>:188                                     ; preds = %.preheader413
  %tmp_1328 = trunc i3 %k63 to i2
  %p_shl225 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1328, i5 0)
  %p_shl232_cast = zext i7 %p_shl225 to i8
  %p_shl226 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1328, i3 0)
  %p_shl233_cast = zext i5 %p_shl226 to i8
  %tmp_783 = sub i8 %p_shl232_cast, %p_shl233_cast
  %tmp_991_cast = sext i8 %tmp_783 to i12
  %tmp74 = add i12 -1672, %tmp_991_cast
  %tmp_784 = add i12 %i167_cast1, %tmp74
  %tmp_785 = zext i12 %tmp_784 to i64
  %bias_addr_53 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_785
  %bias_load_53 = load float* %bias_addr_53, align 4
  %tmp_786 = add i8 %tmp_783, %i167_cast
  %tmp_995_cast = sext i8 %tmp_786 to i32
  %tmp_787 = zext i32 %tmp_995_cast to i64
  %bias_96_addr_7 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_787
  store float %bias_load_53, float* %bias_96_addr_7, align 4
  br label %.preheader413

; <label>:189                                     ; preds = %.preheader414
  call fastcc void @subconv_1x1_4([1536 x float]* @buffer0_1_96_4x4, [9216 x float]* @weights_96_96_1x1, [96 x float]* @bias_96, [1536 x float]* @buffer1_1_96_4x4) nounwind
  br label %.loopexit677

.loopexit677.loopexit:                            ; preds = %.preheader412
  br label %.loopexit677

.loopexit677:                                     ; preds = %.loopexit677.loopexit, %189
  %co164 = phi i7 [ 0, %189 ], [ %co_165, %.loopexit677.loopexit ]
  %exitcond47 = icmp eq i7 %co164, -32
  %empty_593 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) nounwind
  %co_165 = add i7 %co164, 1
  br i1 %exitcond47, label %191, label %.preheader412.preheader

.preheader412.preheader:                          ; preds = %.loopexit677
  %tmp_1327 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %co164, i2 0)
  %tmp_1861_cast = zext i9 %tmp_1327 to i10
  br label %.preheader412

.preheader412.loopexit:                           ; preds = %.preheader411
  br label %.preheader412

.preheader412:                                    ; preds = %.preheader412.loopexit, %.preheader412.preheader
  %h103 = phi i3 [ 0, %.preheader412.preheader ], [ %h_104, %.preheader412.loopexit ]
  %exitcond46 = icmp eq i3 %h103, -4
  %empty_594 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %h_104 = add i3 %h103, 1
  br i1 %exitcond46, label %.loopexit677.loopexit, label %.preheader411.preheader

.preheader411.preheader:                          ; preds = %.preheader412
  %tmp_793_cast = zext i3 %h103 to i10
  %tmp_1343 = add i10 %tmp_1861_cast, %tmp_793_cast
  %tmp_1344 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_1343, i2 0)
  %tmp_1885_cast = zext i12 %tmp_1344 to i13
  br label %.preheader411

.preheader411:                                    ; preds = %190, %.preheader411.preheader
  %w103 = phi i3 [ %w_104, %190 ], [ 0, %.preheader411.preheader ]
  %exitcond45 = icmp eq i3 %w103, -4
  %empty_595 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %w_104 = add i3 %w103, 1
  br i1 %exitcond45, label %.preheader412.loopexit, label %190

; <label>:190                                     ; preds = %.preheader411
  %tmp_796_cast = zext i3 %w103 to i13
  %tmp_1349 = add i13 %tmp_1885_cast, %tmp_796_cast
  %tmp_1894_cast = zext i13 %tmp_1349 to i64
  %downsampleunit2_outp_2 = getelementptr [3072 x float]* @downsampleunit2_outp, i64 0, i64 %tmp_1894_cast
  %buffer0_1_96_4x4_add_1 = getelementptr [1536 x float]* @buffer0_1_96_4x4, i64 0, i64 %tmp_1894_cast
  %downsampleunit2_outp_3 = load float* %downsampleunit2_outp_2, align 4
  store float %downsampleunit2_outp_3, float* %buffer0_1_96_4x4_add_1, align 4
  br label %.preheader411

; <label>:191                                     ; preds = %.loopexit677
  call fastcc void @shuffle_96([1536 x float]* @buffer0_1_96_4x4, [3072 x float]* @shuffleunit2_0_outpu) nounwind
  br label %.loopexit676

.loopexit676.loopexit:                            ; preds = %.preheader410
  br label %.loopexit676

.loopexit676:                                     ; preds = %.loopexit676.loopexit, %191
  %co166 = phi i7 [ 0, %191 ], [ %co_167, %.loopexit676.loopexit ]
  %co166_cast = zext i7 %co166 to i8
  %exitcond44 = icmp eq i7 %co166, -32
  %empty_596 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) nounwind
  %co_167 = add i7 %co166, 1
  br i1 %exitcond44, label %.preheader408.preheader, label %.preheader410.preheader

.preheader408.preheader:                          ; preds = %.loopexit676
  br label %.preheader408

.preheader410.preheader:                          ; preds = %.loopexit676
  %tmp_792 = add i8 %co166_cast, 96
  %tmp_1341 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_792, i2 0)
  %tmp_1880_cast = zext i10 %tmp_1341 to i11
  %tmp_1342 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %co166, i2 0)
  %tmp_1882_cast = zext i9 %tmp_1342 to i10
  br label %.preheader410

.preheader410.loopexit:                           ; preds = %.preheader409
  br label %.preheader410

.preheader410:                                    ; preds = %.preheader410.loopexit, %.preheader410.preheader
  %h105 = phi i3 [ 0, %.preheader410.preheader ], [ %h_106, %.preheader410.loopexit ]
  %exitcond43 = icmp eq i3 %h105, -4
  %empty_597 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %h_106 = add i3 %h105, 1
  br i1 %exitcond43, label %.loopexit676.loopexit, label %.preheader409.preheader

.preheader409.preheader:                          ; preds = %.preheader410
  %tmp_795_cast1 = zext i3 %h105 to i11
  %tmp_795_cast2 = zext i3 %h105 to i10
  %tmp_1347 = add i10 %tmp_795_cast2, %tmp_1882_cast
  %tmp_1890_cast = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_1347, i2 0)
  %tmp_1348 = add i11 %tmp_795_cast1, %tmp_1880_cast
  %tmp_1893_cast = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_1348, i2 0)
  br label %.preheader409

.preheader409:                                    ; preds = %192, %.preheader409.preheader
  %w105 = phi i3 [ %w_106, %192 ], [ 0, %.preheader409.preheader ]
  %exitcond42 = icmp eq i3 %w105, -4
  %empty_598 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %w_106 = add i3 %w105, 1
  br i1 %exitcond42, label %.preheader410.loopexit, label %192

; <label>:192                                     ; preds = %.preheader409
  %tmp_802_cast1 = zext i3 %w105 to i13
  %tmp_802_cast = zext i3 %w105 to i12
  %tmp_1350 = add i12 %tmp_1890_cast, %tmp_802_cast
  %tmp_1895_cast = zext i12 %tmp_1350 to i64
  %buffer0_1_96_4x4_add_2 = getelementptr [1536 x float]* @buffer0_1_96_4x4, i64 0, i64 %tmp_1895_cast
  %tmp_1351 = add i13 %tmp_1893_cast, %tmp_802_cast1
  %tmp_1896_cast = zext i13 %tmp_1351 to i64
  %shuffleunit2_0_outpu = getelementptr [3072 x float]* @shuffleunit2_0_outpu, i64 0, i64 %tmp_1896_cast
  %shuffleunit2_0_outpu_1 = load float* %shuffleunit2_0_outpu, align 4
  store float %shuffleunit2_0_outpu_1, float* %buffer0_1_96_4x4_add_2, align 4
  br label %.preheader409

.preheader408.loopexit:                           ; preds = %.preheader407
  br label %.preheader408

.preheader408:                                    ; preds = %.preheader408.preheader, %.preheader408.loopexit
  %co168 = phi i5 [ %co_169, %.preheader408.loopexit ], [ 0, %.preheader408.preheader ]
  %co168_cast = zext i5 %co168 to i13
  %exitcond41 = icmp eq i5 %co168, -8
  %empty_599 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_169 = add i5 %co168, 1
  br i1 %exitcond41, label %.preheader405.preheader, label %.preheader407.preheader

.preheader405.preheader:                          ; preds = %.preheader408
  br label %.preheader405

.preheader407.preheader:                          ; preds = %.preheader408
  %tmp_1345 = trunc i5 %co168 to i2
  %p_shl229 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1345, i5 0)
  %p_shl239_cast = zext i7 %p_shl229 to i8
  %tmp_1346 = shl i5 %co168, 3
  %p_shl240_cast = zext i5 %tmp_1346 to i8
  %tmp_794 = sub i8 %p_shl239_cast, %p_shl240_cast
  %p_lshr_f24_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co168, i32 2, i32 4)
  %tmp_1019_cast = zext i3 %p_lshr_f24_cast to i8
  br label %.preheader407

.preheader407.loopexit:                           ; preds = %.preheader406
  br label %.preheader407

.preheader407:                                    ; preds = %.preheader407.loopexit, %.preheader407.preheader
  %ci74 = phi i5 [ 0, %.preheader407.preheader ], [ %ci_75, %.preheader407.loopexit ]
  %ci74_cast = zext i5 %ci74 to i8
  %exitcond40 = icmp eq i5 %ci74, -8
  %empty_600 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_75 = add i5 %ci74, 1
  br i1 %exitcond40, label %.preheader408.loopexit, label %.preheader406.preheader

.preheader406.preheader:                          ; preds = %.preheader407
  %tmp_797_cast = zext i5 %ci74 to i19
  %tmp_798 = add i8 %tmp_794, %ci74_cast
  %tmp_801_cast = sext i8 %tmp_798 to i15
  br label %.preheader406

.preheader406:                                    ; preds = %193, %.preheader406.preheader
  %i174 = phi i5 [ %i_175, %193 ], [ 0, %.preheader406.preheader ]
  %exitcond39 = icmp eq i5 %i174, -16
  %empty_601 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %i_175 = add i5 %i174, 1
  br i1 %exitcond39, label %.preheader407.loopexit, label %193

; <label>:193                                     ; preds = %.preheader406
  %tmp_1353 = trunc i5 %i174 to i4
  %p_shl232 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1353, i5 0)
  %p_shl243_cast = zext i9 %p_shl232 to i10
  %p_shl233 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1353, i3 0)
  %p_shl244_cast1 = zext i7 %p_shl233 to i8
  %p_shl244_cast = zext i7 %p_shl233 to i10
  %tmp_809 = sub i10 %p_shl243_cast, %p_shl244_cast
  %tmp_1034_cast = sext i10 %tmp_809 to i13
  %tmp75 = add i13 3960, %tmp_1034_cast
  %tmp_810 = add i13 %tmp75, %co168_cast
  %tmp_1354 = call i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13 %tmp_810, i5 0)
  %p_shl477_cast = zext i18 %tmp_1354 to i19
  %tmp_1355 = call i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13 %tmp_810, i3 0)
  %p_shl478_cast = zext i16 %tmp_1355 to i19
  %tmp_1356 = sub i19 %p_shl477_cast, %p_shl478_cast
  %tmp_1357 = add i19 %tmp_797_cast, %tmp_1356
  %tmp_1904_cast = sext i19 %tmp_1357 to i64
  %shuffle_conv_1x1_add_33 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1904_cast
  %shuffle_conv_1x1_loa_33 = load float* %shuffle_conv_1x1_add_33, align 4
  %tmp_1358 = shl i5 %i174, 1
  %p_shl245_cast = zext i5 %tmp_1358 to i8
  %tmp_812 = sub i8 %p_shl244_cast1, %p_shl245_cast
  %tmp_813 = add i8 %tmp_812, %tmp_1019_cast
  %tmp_1359 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_813, i7 0)
  %tmp_1360 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_813, i5 0)
  %p_shl476_cast = sext i13 %tmp_1360 to i15
  %tmp_1361 = sub i15 %tmp_1359, %p_shl476_cast
  %tmp_1362 = add i15 %tmp_801_cast, %tmp_1361
  %tmp_1911_cast = sext i15 %tmp_1362 to i64
  %weights_96_96_1x1_ad_5 = getelementptr [9216 x float]* @weights_96_96_1x1, i64 0, i64 %tmp_1911_cast
  store float %shuffle_conv_1x1_loa_33, float* %weights_96_96_1x1_ad_5, align 4
  br label %.preheader406

.preheader405.loopexit:                           ; preds = %.preheader404
  br label %.preheader405

.preheader405:                                    ; preds = %.preheader405.preheader, %.preheader405.loopexit
  %i172 = phi i5 [ %i_173, %.preheader405.loopexit ], [ 0, %.preheader405.preheader ]
  %i173_cast = zext i5 %i172 to i8
  %i173_cast1 = zext i5 %i172 to i12
  %exitcond38 = icmp eq i5 %i172, -8
  %empty_602 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_173 = add i5 %i172, 1
  br i1 %exitcond38, label %195, label %.preheader404.preheader

.preheader404.preheader:                          ; preds = %.preheader405
  br label %.preheader404

.preheader404:                                    ; preds = %.preheader404.preheader, %194
  %k65 = phi i3 [ %k_66, %194 ], [ 0, %.preheader404.preheader ]
  %exitcond37 = icmp eq i3 %k65, -4
  %empty_603 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_66 = add i3 %k65, 1
  br i1 %exitcond37, label %.preheader405.loopexit, label %194

; <label>:194                                     ; preds = %.preheader404
  %tmp_1352 = trunc i3 %k65 to i2
  %p_shl230 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1352, i5 0)
  %p_shl241_cast = zext i7 %p_shl230 to i8
  %p_shl231 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1352, i3 0)
  %p_shl242_cast = zext i5 %p_shl231 to i8
  %tmp_803 = sub i8 %p_shl241_cast, %p_shl242_cast
  %tmp_1023_cast = sext i8 %tmp_803 to i12
  %tmp76 = add i12 -1576, %tmp_1023_cast
  %tmp_804 = add i12 %i173_cast1, %tmp76
  %tmp_805 = zext i12 %tmp_804 to i64
  %bias_addr_54 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_805
  %bias_load_54 = load float* %bias_addr_54, align 4
  %tmp_806 = add i8 %tmp_803, %i173_cast
  %tmp_1027_cast = sext i8 %tmp_806 to i32
  %tmp_807 = zext i32 %tmp_1027_cast to i64
  %bias_96_addr_8 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_807
  store float %bias_load_54, float* %bias_96_addr_8, align 4
  br label %.preheader404

; <label>:195                                     ; preds = %.preheader405
  call fastcc void @subconv_1x1_4([1536 x float]* @buffer0_1_96_4x4, [9216 x float]* @weights_96_96_1x1, [96 x float]* @bias_96, [1536 x float]* @buffer1_1_96_4x4) nounwind
  br label %.loopexit675

.loopexit675.loopexit:                            ; preds = %.preheader403
  br label %.loopexit675

.loopexit675:                                     ; preds = %.loopexit675.loopexit, %195
  %co170 = phi i5 [ 0, %195 ], [ %co_171, %.loopexit675.loopexit ]
  %co171_cast = zext i5 %co170 to i8
  %co171_cast155_cast = zext i5 %co170 to i9
  %exitcond36 = icmp eq i5 %co170, -8
  %empty_604 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_171 = add i5 %co170, 1
  br i1 %exitcond36, label %.preheader400.preheader, label %.preheader403.preheader

.preheader403.preheader:                          ; preds = %.loopexit675
  br label %.preheader403

.preheader400.preheader:                          ; preds = %.loopexit675
  br label %.preheader400

.preheader403.loopexit:                           ; preds = %.preheader402
  br label %.preheader403

.preheader403:                                    ; preds = %.preheader403.preheader, %.preheader403.loopexit
  %w107 = phi i2 [ %w_108, %.preheader403.loopexit ], [ 0, %.preheader403.preheader ]
  %exitcond35 = icmp eq i2 %w107, -1
  %empty_605 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_108 = add i2 %w107, 1
  br i1 %exitcond35, label %.loopexit675.loopexit, label %.preheader402.preheader

.preheader402.preheader:                          ; preds = %.preheader403
  %tmp_814_cast1 = zext i2 %w107 to i36
  %tmp_814_cast2 = zext i2 %w107 to i14
  br label %.preheader402

.preheader402.loopexit:                           ; preds = %.preheader401
  br label %.preheader402

.preheader402:                                    ; preds = %.preheader402.loopexit, %.preheader402.preheader
  %h107 = phi i2 [ 0, %.preheader402.preheader ], [ %h_108, %.preheader402.loopexit ]
  %exitcond34 = icmp eq i2 %h107, -1
  %empty_606 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_108 = add i2 %h107, 1
  br i1 %exitcond34, label %.preheader403.loopexit, label %.preheader401.preheader

.preheader401.preheader:                          ; preds = %.preheader402
  %tmp_821_cast1 = zext i2 %h107 to i11
  %tmp_821_cast = zext i2 %h107 to i15
  br label %.preheader401

.preheader401:                                    ; preds = %196, %.preheader401.preheader
  %i180 = phi i3 [ %i_181, %196 ], [ 0, %.preheader401.preheader ]
  %exitcond33 = icmp eq i3 %i180, -4
  %empty_607 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_181 = add i3 %i180, 1
  br i1 %exitcond33, label %.preheader402.loopexit, label %196

; <label>:196                                     ; preds = %.preheader401
  %tmp_1366 = trunc i3 %i180 to i2
  %p_shl237 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1366, i5 0)
  %p_shl252_cast = zext i7 %p_shl237 to i8
  %p_shl238 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1366, i3 0)
  %p_shl253_cast = zext i5 %p_shl238 to i8
  %tmp_826 = sub i8 %p_shl252_cast, %p_shl253_cast
  %tmp_1060_cast_cast = sext i8 %tmp_826 to i9
  %tmp77 = add i9 -136, %tmp_1060_cast_cast
  %tmp_827 = add i9 %co171_cast155_cast, %tmp77
  %tmp_1062_cast = sext i9 %tmp_827 to i10
  %tmp_829_cast = zext i10 %tmp_1062_cast to i13
  %tmp_1367 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_827, i2 0)
  %tmp_1368 = sext i11 %tmp_1367 to i12
  %p_shl482_cast = zext i12 %tmp_1368 to i13
  %tmp_1369 = sub i13 %p_shl482_cast, %tmp_829_cast
  %tmp_1920_cast = sext i13 %tmp_1369 to i14
  %tmp_1370 = add i14 %tmp_1920_cast, %tmp_814_cast2
  %tmp_1921_cast = sext i14 %tmp_1370 to i15
  %tmp_1371 = trunc i14 %tmp_1370 to i13
  %p_shl481_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1371, i2 0)
  %tmp_1372 = sub i15 %p_shl481_cast, %tmp_1921_cast
  %tmp_1373 = add i15 %tmp_1372, %tmp_821_cast
  %tmp_1924_cast = zext i15 %tmp_1373 to i64
  %shuffle_conv_3x3_add_18 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1924_cast
  %shuffle_conv_3x3_loa_18 = load float* %shuffle_conv_3x3_add_18, align 4
  %tmp_830 = add i8 %tmp_826, %co171_cast
  %tmp_1064_cast = sext i8 %tmp_830 to i32
  %tmp_831_cast = zext i32 %tmp_1064_cast to i35
  %tmp_1374 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_830, i2 0)
  %tmp_1375 = sext i10 %tmp_1374 to i34
  %p_shl480_cast = zext i34 %tmp_1375 to i35
  %tmp_1376 = sub i35 %p_shl480_cast, %tmp_831_cast
  %tmp_1927_cast = sext i35 %tmp_1376 to i36
  %tmp_1377 = add i36 %tmp_1927_cast, %tmp_814_cast1
  %tmp_1378 = trunc i36 %tmp_1377 to i11
  %tmp_1379 = trunc i36 %tmp_1377 to i9
  %p_shl479_cast = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_1379, i2 0)
  %tmp_1380 = sub i11 %p_shl479_cast, %tmp_1378
  %tmp_1381 = add i11 %tmp_1380, %tmp_821_cast1
  %tmp_1931_cast = zext i11 %tmp_1381 to i64
  %weights_96_1_3x3_add_3 = getelementptr [864 x float]* @weights_96_1_3x3, i64 0, i64 %tmp_1931_cast
  store float %shuffle_conv_3x3_loa_18, float* %weights_96_1_3x3_add_3, align 4
  br label %.preheader401

.preheader400.loopexit:                           ; preds = %.preheader399
  br label %.preheader400

.preheader400:                                    ; preds = %.preheader400.preheader, %.preheader400.loopexit
  %i176 = phi i5 [ %i_177, %.preheader400.loopexit ], [ 0, %.preheader400.preheader ]
  %i177_cast = zext i5 %i176 to i8
  %i177_cast1 = zext i5 %i176 to i12
  %exitcond32 = icmp eq i5 %i176, -8
  %empty_608 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_177 = add i5 %i176, 1
  br i1 %exitcond32, label %198, label %.preheader399.preheader

.preheader399.preheader:                          ; preds = %.preheader400
  br label %.preheader399

.preheader399:                                    ; preds = %.preheader399.preheader, %197
  %k67 = phi i3 [ %k_68, %197 ], [ 0, %.preheader399.preheader ]
  %exitcond31 = icmp eq i3 %k67, -4
  %empty_609 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_68 = add i3 %k67, 1
  br i1 %exitcond31, label %.preheader400.loopexit, label %197

; <label>:197                                     ; preds = %.preheader399
  %tmp_1365 = trunc i3 %k67 to i2
  %p_shl235 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1365, i5 0)
  %p_shl246_cast = zext i7 %p_shl235 to i8
  %p_shl236 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1365, i3 0)
  %p_shl247_cast = zext i5 %p_shl236 to i8
  %tmp_816 = sub i8 %p_shl246_cast, %p_shl247_cast
  %tmp_1041_cast = sext i8 %tmp_816 to i12
  %tmp78 = add i12 -1480, %tmp_1041_cast
  %tmp_817 = add i12 %i177_cast1, %tmp78
  %tmp_818 = zext i12 %tmp_817 to i64
  %bias_addr_55 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_818
  %bias_load_55 = load float* %bias_addr_55, align 4
  %tmp_819 = add i8 %tmp_816, %i177_cast
  %tmp_1045_cast = sext i8 %tmp_819 to i32
  %tmp_820 = zext i32 %tmp_1045_cast to i64
  %bias_96_addr_9 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_820
  store float %bias_load_55, float* %bias_96_addr_9, align 4
  br label %.preheader399

; <label>:198                                     ; preds = %.preheader400
  call fastcc void @subconv_3x3_4_no_rel([1536 x float]* @buffer1_1_96_4x4, [864 x float]* @weights_96_1_3x3, [96 x float]* @bias_96, [1536 x float]* @buffer0_1_96_4x4) nounwind
  br label %.loopexit674

.loopexit674.loopexit:                            ; preds = %.preheader398
  br label %.loopexit674

.loopexit674:                                     ; preds = %.loopexit674.loopexit, %198
  %co172 = phi i5 [ 0, %198 ], [ %co_173, %.loopexit674.loopexit ]
  %co173_cast = zext i5 %co172 to i13
  %exitcond30 = icmp eq i5 %co172, -8
  %empty_610 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_173 = add i5 %co172, 1
  br i1 %exitcond30, label %.preheader396.preheader, label %.preheader398.preheader

.preheader396.preheader:                          ; preds = %.loopexit674
  br label %.preheader396

.preheader398.preheader:                          ; preds = %.loopexit674
  %tmp_1363 = trunc i5 %co172 to i2
  %p_shl234 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1363, i5 0)
  %p_shl248_cast = zext i7 %p_shl234 to i8
  %tmp_1364 = shl i5 %co172, 3
  %p_shl249_cast = zext i5 %tmp_1364 to i8
  %tmp_815 = sub i8 %p_shl248_cast, %p_shl249_cast
  %p_lshr_f25_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co172, i32 2, i32 4)
  %tmp_1049_cast = zext i3 %p_lshr_f25_cast to i8
  br label %.preheader398

.preheader398.loopexit:                           ; preds = %.preheader397
  br label %.preheader398

.preheader398:                                    ; preds = %.preheader398.loopexit, %.preheader398.preheader
  %ci76 = phi i5 [ 0, %.preheader398.preheader ], [ %ci_77, %.preheader398.loopexit ]
  %ci76_cast = zext i5 %ci76 to i8
  %exitcond29 = icmp eq i5 %ci76, -8
  %empty_611 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_77 = add i5 %ci76, 1
  br i1 %exitcond29, label %.loopexit674.loopexit, label %.preheader397.preheader

.preheader397.preheader:                          ; preds = %.preheader398
  %tmp_822_cast1 = zext i5 %ci76 to i19
  %tmp_823 = add i8 %tmp_815, %ci76_cast
  %tmp_824_cast = sext i8 %tmp_823 to i15
  br label %.preheader397

.preheader397:                                    ; preds = %199, %.preheader397.preheader
  %i182 = phi i5 [ %i_183, %199 ], [ 0, %.preheader397.preheader ]
  %exitcond28 = icmp eq i5 %i182, -16
  %empty_612 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %i_183 = add i5 %i182, 1
  br i1 %exitcond28, label %.preheader398.loopexit, label %199

; <label>:199                                     ; preds = %.preheader397
  %tmp_1384 = trunc i5 %i182 to i4
  %p_shl241 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1384, i5 0)
  %p_shl254_cast = zext i9 %p_shl241 to i10
  %p_shl242 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1384, i3 0)
  %p_shl255_cast1 = zext i7 %p_shl242 to i8
  %p_shl255_cast = zext i7 %p_shl242 to i10
  %tmp_837 = sub i10 %p_shl254_cast, %p_shl255_cast
  %tmp_1067_cast = sext i10 %tmp_837 to i13
  %tmp79 = add i13 -3848, %tmp_1067_cast
  %tmp_838 = add i13 %tmp79, %co173_cast
  %tmp_1385 = call i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13 %tmp_838, i5 0)
  %p_shl485_cast = zext i18 %tmp_1385 to i19
  %tmp_1386 = call i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13 %tmp_838, i3 0)
  %p_shl486_cast = zext i16 %tmp_1386 to i19
  %tmp_1387 = sub i19 %p_shl485_cast, %p_shl486_cast
  %tmp_1388 = add i19 %tmp_822_cast1, %tmp_1387
  %tmp_1941_cast = sext i19 %tmp_1388 to i64
  %shuffle_conv_1x1_add_34 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1941_cast
  %shuffle_conv_1x1_loa_34 = load float* %shuffle_conv_1x1_add_34, align 4
  %tmp_1389 = shl i5 %i182, 1
  %p_shl256_cast = zext i5 %tmp_1389 to i8
  %tmp_839 = sub i8 %p_shl255_cast1, %p_shl256_cast
  %tmp_840 = add i8 %tmp_839, %tmp_1049_cast
  %tmp_1390 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_840, i7 0)
  %tmp_1391 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_840, i5 0)
  %p_shl484_cast = sext i13 %tmp_1391 to i15
  %tmp_1392 = sub i15 %tmp_1390, %p_shl484_cast
  %tmp_1393 = add i15 %tmp_824_cast, %tmp_1392
  %tmp_1948_cast = sext i15 %tmp_1393 to i64
  %weights_96_96_1x1_ad_6 = getelementptr [9216 x float]* @weights_96_96_1x1, i64 0, i64 %tmp_1948_cast
  store float %shuffle_conv_1x1_loa_34, float* %weights_96_96_1x1_ad_6, align 4
  br label %.preheader397

.preheader396.loopexit:                           ; preds = %.preheader395
  br label %.preheader396

.preheader396:                                    ; preds = %.preheader396.preheader, %.preheader396.loopexit
  %i178 = phi i5 [ %i_179, %.preheader396.loopexit ], [ 0, %.preheader396.preheader ]
  %i179_cast = zext i5 %i178 to i8
  %i179_cast1 = zext i5 %i178 to i12
  %exitcond27 = icmp eq i5 %i178, -8
  %empty_613 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_179 = add i5 %i178, 1
  br i1 %exitcond27, label %201, label %.preheader395.preheader

.preheader395.preheader:                          ; preds = %.preheader396
  br label %.preheader395

.preheader395:                                    ; preds = %.preheader395.preheader, %200
  %k69 = phi i3 [ %k_70, %200 ], [ 0, %.preheader395.preheader ]
  %exitcond26 = icmp eq i3 %k69, -4
  %empty_614 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_70 = add i3 %k69, 1
  br i1 %exitcond26, label %.preheader396.loopexit, label %200

; <label>:200                                     ; preds = %.preheader395
  %tmp_1383 = trunc i3 %k69 to i2
  %p_shl239 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1383, i5 0)
  %p_shl250_cast = zext i7 %p_shl239 to i8
  %p_shl240 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1383, i3 0)
  %p_shl251_cast = zext i5 %p_shl240 to i8
  %tmp_832 = sub i8 %p_shl250_cast, %p_shl251_cast
  %tmp_1051_cast = sext i8 %tmp_832 to i12
  %tmp80 = add i12 -1384, %tmp_1051_cast
  %tmp_833 = add i12 %i179_cast1, %tmp80
  %tmp_834 = zext i12 %tmp_833 to i64
  %bias_addr_56 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_834
  %bias_load_56 = load float* %bias_addr_56, align 4
  %tmp_835 = add i8 %tmp_832, %i179_cast
  %tmp_1055_cast = sext i8 %tmp_835 to i32
  %tmp_836 = zext i32 %tmp_1055_cast to i64
  %bias_96_addr_10 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_836
  store float %bias_load_56, float* %bias_96_addr_10, align 4
  br label %.preheader395

; <label>:201                                     ; preds = %.preheader396
  call fastcc void @subconv_1x1_4([1536 x float]* @buffer0_1_96_4x4, [9216 x float]* @weights_96_96_1x1, [96 x float]* @bias_96, [1536 x float]* @buffer1_1_96_4x4) nounwind
  br label %.loopexit673

.loopexit673.loopexit:                            ; preds = %.preheader394
  br label %.loopexit673

.loopexit673:                                     ; preds = %.loopexit673.loopexit, %201
  %co174 = phi i7 [ 0, %201 ], [ %co_175, %.loopexit673.loopexit ]
  %exitcond25 = icmp eq i7 %co174, -32
  %empty_615 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) nounwind
  %co_175 = add i7 %co174, 1
  br i1 %exitcond25, label %203, label %.preheader394.preheader

.preheader394.preheader:                          ; preds = %.loopexit673
  %tmp_1382 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %co174, i2 0)
  %tmp_1933_cast = zext i9 %tmp_1382 to i10
  br label %.preheader394

.preheader394.loopexit:                           ; preds = %.preheader393
  br label %.preheader394

.preheader394:                                    ; preds = %.preheader394.loopexit, %.preheader394.preheader
  %h109 = phi i3 [ 0, %.preheader394.preheader ], [ %h_110, %.preheader394.loopexit ]
  %exitcond24 = icmp eq i3 %h109, -4
  %empty_616 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %h_110 = add i3 %h109, 1
  br i1 %exitcond24, label %.loopexit673.loopexit, label %.preheader393.preheader

.preheader393.preheader:                          ; preds = %.preheader394
  %tmp_842_cast = zext i3 %h109 to i10
  %tmp_1396 = add i10 %tmp_1933_cast, %tmp_842_cast
  %tmp_1397 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_1396, i2 0)
  %tmp_1955_cast = zext i12 %tmp_1397 to i13
  br label %.preheader393

.preheader393:                                    ; preds = %202, %.preheader393.preheader
  %w109 = phi i3 [ %w_110, %202 ], [ 0, %.preheader393.preheader ]
  %exitcond23 = icmp eq i3 %w109, -4
  %empty_617 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %w_110 = add i3 %w109, 1
  br i1 %exitcond23, label %.preheader394.loopexit, label %202

; <label>:202                                     ; preds = %.preheader393
  %tmp_846_cast = zext i3 %w109 to i13
  %tmp_1402 = add i13 %tmp_1955_cast, %tmp_846_cast
  %tmp_1964_cast = zext i13 %tmp_1402 to i64
  %buffer0_1_96_4x4_add_3 = getelementptr [1536 x float]* @buffer0_1_96_4x4, i64 0, i64 %tmp_1964_cast
  %shuffleunit2_0_outpu_2 = getelementptr [3072 x float]* @shuffleunit2_0_outpu, i64 0, i64 %tmp_1964_cast
  %shuffleunit2_0_outpu_3 = load float* %shuffleunit2_0_outpu_2, align 4
  store float %shuffleunit2_0_outpu_3, float* %buffer0_1_96_4x4_add_3, align 4
  br label %.preheader393

; <label>:203                                     ; preds = %.loopexit673
  call fastcc void @shuffle_96([1536 x float]* @buffer0_1_96_4x4, [3072 x float]* @shuffleunit2_1_outpu) nounwind
  br label %.loopexit672

.loopexit672.loopexit:                            ; preds = %.preheader392
  br label %.loopexit672

.loopexit672:                                     ; preds = %.loopexit672.loopexit, %203
  %co176 = phi i7 [ 0, %203 ], [ %co_177, %.loopexit672.loopexit ]
  %co176_cast = zext i7 %co176 to i8
  %exitcond22 = icmp eq i7 %co176, -32
  %empty_618 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) nounwind
  %co_177 = add i7 %co176, 1
  br i1 %exitcond22, label %.preheader390.preheader, label %.preheader392.preheader

.preheader390.preheader:                          ; preds = %.loopexit672
  br label %.preheader390

.preheader392.preheader:                          ; preds = %.loopexit672
  %tmp_841 = add i8 %co176_cast, 96
  %tmp_1394 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_841, i2 0)
  %tmp_1950_cast = zext i10 %tmp_1394 to i11
  %tmp_1395 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %co176, i2 0)
  %tmp_1952_cast = zext i9 %tmp_1395 to i10
  br label %.preheader392

.preheader392.loopexit:                           ; preds = %.preheader391
  br label %.preheader392

.preheader392:                                    ; preds = %.preheader392.loopexit, %.preheader392.preheader
  %h111 = phi i3 [ 0, %.preheader392.preheader ], [ %h_112, %.preheader392.loopexit ]
  %exitcond21 = icmp eq i3 %h111, -4
  %empty_619 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %h_112 = add i3 %h111, 1
  br i1 %exitcond21, label %.loopexit672.loopexit, label %.preheader391.preheader

.preheader391.preheader:                          ; preds = %.preheader392
  %tmp_844_cast1 = zext i3 %h111 to i10
  %tmp_844_cast2 = zext i3 %h111 to i11
  %tmp_1400 = add i11 %tmp_844_cast2, %tmp_1950_cast
  %tmp_1960_cast = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_1400, i2 0)
  %tmp_1401 = add i10 %tmp_844_cast1, %tmp_1952_cast
  %tmp_1963_cast = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_1401, i2 0)
  br label %.preheader391

.preheader391:                                    ; preds = %204, %.preheader391.preheader
  %w111 = phi i3 [ %w_112, %204 ], [ 0, %.preheader391.preheader ]
  %exitcond20 = icmp eq i3 %w111, -4
  %empty_620 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %w_112 = add i3 %w111, 1
  br i1 %exitcond20, label %.preheader392.loopexit, label %204

; <label>:204                                     ; preds = %.preheader391
  %tmp_850_cast1 = zext i3 %w111 to i12
  %tmp_850_cast2 = zext i3 %w111 to i13
  %tmp_1403 = add i13 %tmp_1960_cast, %tmp_850_cast2
  %tmp_1965_cast = zext i13 %tmp_1403 to i64
  %shuffleunit2_1_outpu = getelementptr [3072 x float]* @shuffleunit2_1_outpu, i64 0, i64 %tmp_1965_cast
  %tmp_1404 = add i12 %tmp_1963_cast, %tmp_850_cast1
  %tmp_1966_cast = zext i12 %tmp_1404 to i64
  %buffer0_1_96_4x4_add_4 = getelementptr [1536 x float]* @buffer0_1_96_4x4, i64 0, i64 %tmp_1966_cast
  %shuffleunit2_1_outpu_1 = load float* %shuffleunit2_1_outpu, align 4
  store float %shuffleunit2_1_outpu_1, float* %buffer0_1_96_4x4_add_4, align 4
  br label %.preheader391

.preheader390.loopexit:                           ; preds = %.preheader389
  br label %.preheader390

.preheader390:                                    ; preds = %.preheader390.preheader, %.preheader390.loopexit
  %co178 = phi i5 [ %co_179, %.preheader390.loopexit ], [ 0, %.preheader390.preheader ]
  %co178_cast = zext i5 %co178 to i13
  %exitcond19 = icmp eq i5 %co178, -8
  %empty_621 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_179 = add i5 %co178, 1
  br i1 %exitcond19, label %.preheader387.preheader, label %.preheader389.preheader

.preheader387.preheader:                          ; preds = %.preheader390
  br label %.preheader387

.preheader389.preheader:                          ; preds = %.preheader390
  %tmp_1398 = trunc i5 %co178 to i2
  %p_shl243 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1398, i5 0)
  %p_shl257_cast = zext i7 %p_shl243 to i8
  %tmp_1399 = shl i5 %co178, 3
  %p_shl258_cast = zext i5 %tmp_1399 to i8
  %tmp_843 = sub i8 %p_shl257_cast, %p_shl258_cast
  %p_lshr_f26_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co178, i32 2, i32 4)
  %tmp_1079_cast = zext i3 %p_lshr_f26_cast to i8
  br label %.preheader389

.preheader389.loopexit:                           ; preds = %.preheader388
  br label %.preheader389

.preheader389:                                    ; preds = %.preheader389.loopexit, %.preheader389.preheader
  %ci78 = phi i5 [ 0, %.preheader389.preheader ], [ %ci_79, %.preheader389.loopexit ]
  %ci78_cast = zext i5 %ci78 to i8
  %exitcond18 = icmp eq i5 %ci78, -8
  %empty_622 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_79 = add i5 %ci78, 1
  br i1 %exitcond18, label %.preheader390.loopexit, label %.preheader388.preheader

.preheader388.preheader:                          ; preds = %.preheader389
  %tmp_847_cast = zext i5 %ci78 to i19
  %tmp_848 = add i8 %tmp_843, %ci78_cast
  %tmp_849_cast = sext i8 %tmp_848 to i15
  br label %.preheader388

.preheader388:                                    ; preds = %205, %.preheader388.preheader
  %i186 = phi i5 [ %i_187, %205 ], [ 0, %.preheader388.preheader ]
  %exitcond17 = icmp eq i5 %i186, -16
  %empty_623 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %i_187 = add i5 %i186, 1
  br i1 %exitcond17, label %.preheader389.loopexit, label %205

; <label>:205                                     ; preds = %.preheader388
  %tmp_1406 = trunc i5 %i186 to i4
  %p_shl246 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1406, i5 0)
  %p_shl261_cast = zext i9 %p_shl246 to i10
  %p_shl247 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1406, i3 0)
  %p_shl262_cast1 = zext i7 %p_shl247 to i8
  %p_shl262_cast = zext i7 %p_shl247 to i10
  %tmp_860 = sub i10 %p_shl261_cast, %p_shl262_cast
  %tmp_1094_cast = sext i10 %tmp_860 to i13
  %tmp81 = add i13 -3464, %tmp_1094_cast
  %tmp_861 = add i13 %tmp81, %co178_cast
  %tmp_1407 = call i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13 %tmp_861, i5 0)
  %p_shl489_cast = zext i18 %tmp_1407 to i19
  %tmp_1408 = call i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13 %tmp_861, i3 0)
  %p_shl490_cast = zext i16 %tmp_1408 to i19
  %tmp_1409 = sub i19 %p_shl489_cast, %p_shl490_cast
  %tmp_1410 = add i19 %tmp_847_cast, %tmp_1409
  %tmp_1974_cast = sext i19 %tmp_1410 to i64
  %shuffle_conv_1x1_add_35 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1974_cast
  %shuffle_conv_1x1_loa_35 = load float* %shuffle_conv_1x1_add_35, align 4
  %tmp_1411 = shl i5 %i186, 1
  %p_shl263_cast = zext i5 %tmp_1411 to i8
  %tmp_862 = sub i8 %p_shl262_cast1, %p_shl263_cast
  %tmp_863 = add i8 %tmp_862, %tmp_1079_cast
  %tmp_1412 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_863, i7 0)
  %tmp_1413 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_863, i5 0)
  %p_shl488_cast = sext i13 %tmp_1413 to i15
  %tmp_1414 = sub i15 %tmp_1412, %p_shl488_cast
  %tmp_1415 = add i15 %tmp_849_cast, %tmp_1414
  %tmp_1981_cast = sext i15 %tmp_1415 to i64
  %weights_96_96_1x1_ad_7 = getelementptr [9216 x float]* @weights_96_96_1x1, i64 0, i64 %tmp_1981_cast
  store float %shuffle_conv_1x1_loa_35, float* %weights_96_96_1x1_ad_7, align 4
  br label %.preheader388

.preheader387.loopexit:                           ; preds = %.preheader386
  br label %.preheader387

.preheader387:                                    ; preds = %.preheader387.preheader, %.preheader387.loopexit
  %i184 = phi i5 [ %i_185, %.preheader387.loopexit ], [ 0, %.preheader387.preheader ]
  %i185_cast = zext i5 %i184 to i8
  %i185_cast1 = zext i5 %i184 to i12
  %exitcond16 = icmp eq i5 %i184, -8
  %empty_624 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_185 = add i5 %i184, 1
  br i1 %exitcond16, label %207, label %.preheader386.preheader

.preheader386.preheader:                          ; preds = %.preheader387
  br label %.preheader386

.preheader386:                                    ; preds = %.preheader386.preheader, %206
  %k71 = phi i3 [ %k_72, %206 ], [ 0, %.preheader386.preheader ]
  %exitcond15 = icmp eq i3 %k71, -4
  %empty_625 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_72 = add i3 %k71, 1
  br i1 %exitcond15, label %.preheader387.loopexit, label %206

; <label>:206                                     ; preds = %.preheader386
  %tmp_1405 = trunc i3 %k71 to i2
  %p_shl244 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1405, i5 0)
  %p_shl259_cast = zext i7 %p_shl244 to i8
  %p_shl245 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1405, i3 0)
  %p_shl260_cast = zext i5 %p_shl245 to i8
  %tmp_851 = sub i8 %p_shl259_cast, %p_shl260_cast
  %tmp_1083_cast = sext i8 %tmp_851 to i12
  %tmp82 = add i12 -1288, %tmp_1083_cast
  %tmp_852 = add i12 %i185_cast1, %tmp82
  %tmp_854 = zext i12 %tmp_852 to i64
  %bias_addr_57 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_854
  %bias_load_57 = load float* %bias_addr_57, align 4
  %tmp_855 = add i8 %tmp_851, %i185_cast
  %tmp_1087_cast = sext i8 %tmp_855 to i32
  %tmp_857 = zext i32 %tmp_1087_cast to i64
  %bias_96_addr_11 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_857
  store float %bias_load_57, float* %bias_96_addr_11, align 4
  br label %.preheader386

; <label>:207                                     ; preds = %.preheader387
  call fastcc void @subconv_1x1_4([1536 x float]* @buffer0_1_96_4x4, [9216 x float]* @weights_96_96_1x1, [96 x float]* @bias_96, [1536 x float]* @buffer1_1_96_4x4) nounwind
  br label %.loopexit671

.loopexit671.loopexit:                            ; preds = %.preheader385
  br label %.loopexit671

.loopexit671:                                     ; preds = %.loopexit671.loopexit, %207
  %co180 = phi i5 [ 0, %207 ], [ %co_181, %.loopexit671.loopexit ]
  %co181_cast = zext i5 %co180 to i8
  %co181_cast1 = zext i5 %co180 to i11
  %exitcond14 = icmp eq i5 %co180, -8
  %empty_626 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_181 = add i5 %co180, 1
  br i1 %exitcond14, label %.preheader382.preheader, label %.preheader385.preheader

.preheader385.preheader:                          ; preds = %.loopexit671
  br label %.preheader385

.preheader382.preheader:                          ; preds = %.loopexit671
  br label %.preheader382

.preheader385.loopexit:                           ; preds = %.preheader384
  br label %.preheader385

.preheader385:                                    ; preds = %.preheader385.preheader, %.preheader385.loopexit
  %w113 = phi i2 [ %w_114, %.preheader385.loopexit ], [ 0, %.preheader385.preheader ]
  %exitcond13 = icmp eq i2 %w113, -1
  %empty_627 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_114 = add i2 %w113, 1
  br i1 %exitcond13, label %.loopexit671.loopexit, label %.preheader384.preheader

.preheader384.preheader:                          ; preds = %.preheader385
  %tmp_864_cast1 = zext i2 %w113 to i36
  %tmp_864_cast = zext i2 %w113 to i15
  br label %.preheader384

.preheader384.loopexit:                           ; preds = %.preheader383
  br label %.preheader384

.preheader384:                                    ; preds = %.preheader384.loopexit, %.preheader384.preheader
  %h113 = phi i2 [ 0, %.preheader384.preheader ], [ %h_114, %.preheader384.loopexit ]
  %exitcond12 = icmp eq i2 %h113, -1
  %empty_628 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_114 = add i2 %h113, 1
  br i1 %exitcond12, label %.preheader385.loopexit, label %.preheader383.preheader

.preheader383.preheader:                          ; preds = %.preheader384
  %tmp_871_cast1 = zext i2 %h113 to i11
  %tmp_871_cast = zext i2 %h113 to i15
  br label %.preheader383

.preheader383:                                    ; preds = %208, %.preheader383.preheader
  %i192 = phi i3 [ %i_193, %208 ], [ 0, %.preheader383.preheader ]
  %exitcond11 = icmp eq i3 %i192, -4
  %empty_629 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_193 = add i3 %i192, 1
  br i1 %exitcond11, label %.preheader384.loopexit, label %208

; <label>:208                                     ; preds = %.preheader383
  %tmp_1419 = trunc i3 %i192 to i2
  %p_shl251 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1419, i5 0)
  %p_shl270_cast = zext i7 %p_shl251 to i8
  %p_shl252 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1419, i3 0)
  %p_shl271_cast = zext i5 %p_shl252 to i8
  %tmp_876 = sub i8 %p_shl270_cast, %p_shl271_cast
  %tmp_1120_cast = sext i8 %tmp_876 to i11
  %tmp83 = add i11 984, %tmp_1120_cast
  %tmp_877 = add i11 %co181_cast1, %tmp83
  %tmp_879_cast = zext i11 %tmp_877 to i14
  %tmp_1420 = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_877, i2 0)
  %p_shl494_cast = zext i13 %tmp_1420 to i14
  %tmp_1421 = sub i14 %p_shl494_cast, %tmp_879_cast
  %tmp_1989_cast = sext i14 %tmp_1421 to i15
  %tmp_1422 = add i15 %tmp_1989_cast, %tmp_864_cast
  %tmp_1423 = shl i15 %tmp_1422, 2
  %tmp_1424 = sub i15 %tmp_1423, %tmp_1422
  %tmp_1425 = add i15 %tmp_1424, %tmp_871_cast
  %tmp_1993_cast = zext i15 %tmp_1425 to i64
  %shuffle_conv_3x3_add_19 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1993_cast
  %shuffle_conv_3x3_loa_19 = load float* %shuffle_conv_3x3_add_19, align 4
  %tmp_880 = add i8 %tmp_876, %co181_cast
  %tmp_1124_cast = sext i8 %tmp_880 to i32
  %tmp_881_cast = zext i32 %tmp_1124_cast to i35
  %tmp_1426 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_880, i2 0)
  %tmp_1427 = sext i10 %tmp_1426 to i34
  %p_shl492_cast = zext i34 %tmp_1427 to i35
  %tmp_1428 = sub i35 %p_shl492_cast, %tmp_881_cast
  %tmp_1996_cast = sext i35 %tmp_1428 to i36
  %tmp_1429 = add i36 %tmp_1996_cast, %tmp_864_cast1
  %tmp_1430 = trunc i36 %tmp_1429 to i11
  %tmp_1431 = trunc i36 %tmp_1429 to i9
  %p_shl491_cast = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_1431, i2 0)
  %tmp_1432 = sub i11 %p_shl491_cast, %tmp_1430
  %tmp_1433 = add i11 %tmp_1432, %tmp_871_cast1
  %tmp_2000_cast = zext i11 %tmp_1433 to i64
  %weights_96_1_3x3_add_4 = getelementptr [864 x float]* @weights_96_1_3x3, i64 0, i64 %tmp_2000_cast
  store float %shuffle_conv_3x3_loa_19, float* %weights_96_1_3x3_add_4, align 4
  br label %.preheader383

.preheader382.loopexit:                           ; preds = %.preheader381
  br label %.preheader382

.preheader382:                                    ; preds = %.preheader382.preheader, %.preheader382.loopexit
  %i188 = phi i5 [ %i_189, %.preheader382.loopexit ], [ 0, %.preheader382.preheader ]
  %i189_cast = zext i5 %i188 to i8
  %i189_cast1 = zext i5 %i188 to i12
  %exitcond10 = icmp eq i5 %i188, -8
  %empty_630 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_189 = add i5 %i188, 1
  br i1 %exitcond10, label %210, label %.preheader381.preheader

.preheader381.preheader:                          ; preds = %.preheader382
  br label %.preheader381

.preheader381:                                    ; preds = %.preheader381.preheader, %209
  %k73 = phi i3 [ %k_74, %209 ], [ 0, %.preheader381.preheader ]
  %exitcond9 = icmp eq i3 %k73, -4
  %empty_631 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_74 = add i3 %k73, 1
  br i1 %exitcond9, label %.preheader382.loopexit, label %209

; <label>:209                                     ; preds = %.preheader381
  %tmp_1418 = trunc i3 %k73 to i2
  %p_shl249 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1418, i5 0)
  %p_shl264_cast = zext i7 %p_shl249 to i8
  %p_shl250 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1418, i3 0)
  %p_shl265_cast = zext i5 %p_shl250 to i8
  %tmp_866 = sub i8 %p_shl264_cast, %p_shl265_cast
  %tmp_1101_cast = sext i8 %tmp_866 to i12
  %tmp84 = add i12 -1192, %tmp_1101_cast
  %tmp_867 = add i12 %i189_cast1, %tmp84
  %tmp_868 = zext i12 %tmp_867 to i64
  %bias_addr_58 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_868
  %bias_load_58 = load float* %bias_addr_58, align 4
  %tmp_869 = add i8 %tmp_866, %i189_cast
  %tmp_1105_cast = sext i8 %tmp_869 to i32
  %tmp_870 = zext i32 %tmp_1105_cast to i64
  %bias_96_addr_12 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_870
  store float %bias_load_58, float* %bias_96_addr_12, align 4
  br label %.preheader381

; <label>:210                                     ; preds = %.preheader382
  call fastcc void @subconv_3x3_4_no_rel([1536 x float]* @buffer1_1_96_4x4, [864 x float]* @weights_96_1_3x3, [96 x float]* @bias_96, [1536 x float]* @buffer0_1_96_4x4) nounwind
  br label %.loopexit670

.loopexit670.loopexit:                            ; preds = %.preheader380
  br label %.loopexit670

.loopexit670:                                     ; preds = %.loopexit670.loopexit, %210
  %co182 = phi i5 [ 0, %210 ], [ %co_183, %.loopexit670.loopexit ]
  %co183_cast = zext i5 %co182 to i13
  %exitcond8 = icmp eq i5 %co182, -8
  %empty_632 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_183 = add i5 %co182, 1
  br i1 %exitcond8, label %.preheader378.preheader, label %.preheader380.preheader

.preheader378.preheader:                          ; preds = %.loopexit670
  br label %.preheader378

.preheader380.preheader:                          ; preds = %.loopexit670
  %tmp_1416 = trunc i5 %co182 to i2
  %p_shl248 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1416, i5 0)
  %p_shl266_cast = zext i7 %p_shl248 to i8
  %tmp_1417 = shl i5 %co182, 3
  %p_shl267_cast = zext i5 %tmp_1417 to i8
  %tmp_865 = sub i8 %p_shl266_cast, %p_shl267_cast
  %p_lshr_f27_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co182, i32 2, i32 4)
  %tmp_1109_cast = zext i3 %p_lshr_f27_cast to i8
  br label %.preheader380

.preheader380.loopexit:                           ; preds = %.preheader379
  br label %.preheader380

.preheader380:                                    ; preds = %.preheader380.loopexit, %.preheader380.preheader
  %ci80 = phi i5 [ 0, %.preheader380.preheader ], [ %ci_81, %.preheader380.loopexit ]
  %ci80_cast = zext i5 %ci80 to i8
  %exitcond7 = icmp eq i5 %ci80, -8
  %empty_633 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_81 = add i5 %ci80, 1
  br i1 %exitcond7, label %.loopexit670.loopexit, label %.preheader379.preheader

.preheader379.preheader:                          ; preds = %.preheader380
  %tmp_872_cast = zext i5 %ci80 to i19
  %tmp_873 = add i8 %tmp_865, %ci80_cast
  %tmp_874_cast = sext i8 %tmp_873 to i15
  br label %.preheader379

.preheader379:                                    ; preds = %211, %.preheader379.preheader
  %i194 = phi i5 [ %i_195, %211 ], [ 0, %.preheader379.preheader ]
  %exitcond6 = icmp eq i5 %i194, -16
  %empty_634 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %i_195 = add i5 %i194, 1
  br i1 %exitcond6, label %.preheader380.loopexit, label %211

; <label>:211                                     ; preds = %.preheader379
  %tmp_1436 = trunc i5 %i194 to i4
  %p_shl255 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1436, i5 0)
  %p_shl272_cast = zext i9 %p_shl255 to i10
  %p_shl256 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1436, i3 0)
  %p_shl273_cast1 = zext i7 %p_shl256 to i8
  %p_shl273_cast = zext i7 %p_shl256 to i10
  %tmp_887 = sub i10 %p_shl272_cast, %p_shl273_cast
  %tmp_1127_cast = sext i10 %tmp_887 to i13
  %tmp85 = add i13 -3080, %tmp_1127_cast
  %tmp_888 = add i13 %tmp85, %co183_cast
  %tmp_1437 = call i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13 %tmp_888, i5 0)
  %p_shl497_cast = zext i18 %tmp_1437 to i19
  %tmp_1438 = call i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13 %tmp_888, i3 0)
  %p_shl498_cast = zext i16 %tmp_1438 to i19
  %tmp_1439 = sub i19 %p_shl497_cast, %p_shl498_cast
  %tmp_1440 = add i19 %tmp_872_cast, %tmp_1439
  %tmp_2010_cast = sext i19 %tmp_1440 to i64
  %shuffle_conv_1x1_add_36 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_2010_cast
  %shuffle_conv_1x1_loa_36 = load float* %shuffle_conv_1x1_add_36, align 4
  %tmp_1441 = shl i5 %i194, 1
  %p_shl274_cast = zext i5 %tmp_1441 to i8
  %tmp_889 = sub i8 %p_shl273_cast1, %p_shl274_cast
  %tmp_890 = add i8 %tmp_889, %tmp_1109_cast
  %tmp_1442 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_890, i7 0)
  %tmp_1443 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_890, i5 0)
  %p_shl496_cast = sext i13 %tmp_1443 to i15
  %tmp_1444 = sub i15 %tmp_1442, %p_shl496_cast
  %tmp_1445 = add i15 %tmp_874_cast, %tmp_1444
  %tmp_2017_cast = sext i15 %tmp_1445 to i64
  %weights_96_96_1x1_ad_8 = getelementptr [9216 x float]* @weights_96_96_1x1, i64 0, i64 %tmp_2017_cast
  store float %shuffle_conv_1x1_loa_36, float* %weights_96_96_1x1_ad_8, align 4
  br label %.preheader379

.preheader378.loopexit:                           ; preds = %.preheader377
  br label %.preheader378

.preheader378:                                    ; preds = %.preheader378.preheader, %.preheader378.loopexit
  %i190 = phi i5 [ %i_191, %.preheader378.loopexit ], [ 0, %.preheader378.preheader ]
  %i191_cast = zext i5 %i190 to i8
  %i191_cast1 = zext i5 %i190 to i12
  %exitcond5 = icmp eq i5 %i190, -8
  %empty_635 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_191 = add i5 %i190, 1
  br i1 %exitcond5, label %213, label %.preheader377.preheader

.preheader377.preheader:                          ; preds = %.preheader378
  br label %.preheader377

.preheader377:                                    ; preds = %.preheader377.preheader, %212
  %k75 = phi i3 [ %k_76, %212 ], [ 0, %.preheader377.preheader ]
  %exitcond4 = icmp eq i3 %k75, -4
  %empty_636 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_76 = add i3 %k75, 1
  br i1 %exitcond4, label %.preheader378.loopexit, label %212

; <label>:212                                     ; preds = %.preheader377
  %tmp_1435 = trunc i3 %k75 to i2
  %p_shl253 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1435, i5 0)
  %p_shl268_cast = zext i7 %p_shl253 to i8
  %p_shl254 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1435, i3 0)
  %p_shl269_cast = zext i5 %p_shl254 to i8
  %tmp_882 = sub i8 %p_shl268_cast, %p_shl269_cast
  %tmp_1111_cast = sext i8 %tmp_882 to i12
  %tmp86 = add i12 -1096, %tmp_1111_cast
  %tmp_883 = add i12 %i191_cast1, %tmp86
  %tmp_884 = zext i12 %tmp_883 to i64
  %bias_addr_59 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_884
  %bias_load_59 = load float* %bias_addr_59, align 4
  %tmp_885 = add i8 %tmp_882, %i191_cast
  %tmp_1115_cast = sext i8 %tmp_885 to i32
  %tmp_886 = zext i32 %tmp_1115_cast to i64
  %bias_96_addr_13 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_886
  store float %bias_load_59, float* %bias_96_addr_13, align 4
  br label %.preheader377

; <label>:213                                     ; preds = %.preheader378
  call fastcc void @subconv_1x1_4([1536 x float]* @buffer0_1_96_4x4, [9216 x float]* @weights_96_96_1x1, [96 x float]* @bias_96, [1536 x float]* @buffer1_1_96_4x4) nounwind
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader376
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %213
  %co184 = phi i7 [ 0, %213 ], [ %co_185, %.loopexit.loopexit ]
  %exitcond3 = icmp eq i7 %co184, -32
  %empty_637 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) nounwind
  %co_185 = add i7 %co184, 1
  br i1 %exitcond3, label %215, label %.preheader376.preheader

.preheader376.preheader:                          ; preds = %.loopexit
  %tmp_1434 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %co184, i2 0)
  %tmp_2002_cast = zext i9 %tmp_1434 to i10
  br label %.preheader376

.preheader376.loopexit:                           ; preds = %.preheader
  br label %.preheader376

.preheader376:                                    ; preds = %.preheader376.loopexit, %.preheader376.preheader
  %h115 = phi i3 [ 0, %.preheader376.preheader ], [ %h_116, %.preheader376.loopexit ]
  %exitcond2 = icmp eq i3 %h115, -4
  %empty_638 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %h_116 = add i3 %h115, 1
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader376
  %tmp_891_cast = zext i3 %h115 to i10
  %tmp_1447 = add i10 %tmp_2002_cast, %tmp_891_cast
  %tmp_1448 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_1447, i2 0)
  %tmp_2022_cast = zext i12 %tmp_1448 to i13
  br label %.preheader

.preheader:                                       ; preds = %214, %.preheader.preheader
  %w115 = phi i3 [ %w_116, %214 ], [ 0, %.preheader.preheader ]
  %exitcond1 = icmp eq i3 %w115, -4
  %empty_639 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %w_116 = add i3 %w115, 1
  br i1 %exitcond1, label %.preheader376.loopexit, label %214

; <label>:214                                     ; preds = %.preheader
  %tmp_892_cast = zext i3 %w115 to i13
  %tmp_1450 = add i13 %tmp_2022_cast, %tmp_892_cast
  %tmp_2024_cast = zext i13 %tmp_1450 to i64
  %shuffleunit2_1_outpu_2 = getelementptr [3072 x float]* @shuffleunit2_1_outpu, i64 0, i64 %tmp_2024_cast
  %buffer0_1_96_4x4_add_5 = getelementptr [1536 x float]* @buffer0_1_96_4x4, i64 0, i64 %tmp_2024_cast
  %shuffleunit2_1_outpu_3 = load float* %shuffleunit2_1_outpu_2, align 4
  store float %shuffleunit2_1_outpu_3, float* %buffer0_1_96_4x4_add_5, align 4
  br label %.preheader

; <label>:215                                     ; preds = %.loopexit
  call fastcc void @shuffle_96([1536 x float]* @buffer0_1_96_4x4, [3072 x float]* @shuffleunit2_2_outpu) nounwind
  call fastcc void @conv_last([98304 x float]* %conv_last_weight, [512 x float]* @conv_last_bias, [8192 x float]* @conv_last_output) nounwind
  call fastcc void @avgpool([512 x float]* @avgpool_output) nounwind
  br label %216

; <label>:216                                     ; preds = %218, %215
  %co_i = phi i4 [ 0, %215 ], [ %co_186, %218 ]
  %exitcond1_i = icmp eq i4 %co_i, -6
  %empty_640 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10) nounwind
  %co_186 = add i4 %co_i, 1
  br i1 %exitcond1_i, label %fc.exit.preheader_ifconv, label %.preheader.preheader.i

fc.exit.preheader_ifconv:                         ; preds = %216
  ret void

.preheader.preheader.i:                           ; preds = %216
  %tmp_i = zext i4 %co_i to i64
  %tmp_1446 = call i13 @_ssdm_op_BitConcatenate.i13.i4.i9(i4 %co_i, i9 0)
  %tmp_2019_cast = zext i13 %tmp_1446 to i14
  br label %.preheader.i

.preheader.i:                                     ; preds = %217, %.preheader.preheader.i
  %sum_i = phi float [ %sum, %217 ], [ 0.000000e+00, %.preheader.preheader.i ]
  %ci_i = phi i10 [ %ci_82, %217 ], [ 0, %.preheader.preheader.i ]
  %exitcond_i = icmp eq i10 %ci_i, -512
  %empty_641 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512) nounwind
  %ci_82 = add i10 %ci_i, 1
  br i1 %exitcond_i, label %218, label %217

; <label>:217                                     ; preds = %.preheader.i
  %tmp_i_642 = zext i10 %ci_i to i64
  %tmp_i_cast = zext i10 %ci_i to i14
  %tmp_1449 = add i14 %tmp_2019_cast, %tmp_i_cast
  %tmp_2023_cast = zext i14 %tmp_1449 to i64
  %fc_weight_addr = getelementptr [5120 x float]* %fc_weight, i64 0, i64 %tmp_2023_cast
  %fc_weight_load = load float* %fc_weight_addr, align 4
  %avgpool_output_addr = getelementptr [512 x float]* @avgpool_output, i64 0, i64 %tmp_i_642
  %avgpool_output_load = load float* %avgpool_output_addr, align 4
  %tmp_154_i = fmul float %fc_weight_load, %avgpool_output_load
  %sum = fadd float %sum_i, %tmp_154_i
  br label %.preheader.i

; <label>:218                                     ; preds = %.preheader.i
  %fc_bias_addr_1 = getelementptr [10 x float]* @fc_bias, i64 0, i64 %tmp_i
  %fc_bias_load = load float* %fc_bias_addr_1, align 4
  %result = fadd float %sum_i, %fc_bias_load
  %fc_output_addr = getelementptr [1000 x float]* %fc_output, i64 0, i64 %tmp_i
  store float %result, float* %fc_output_addr, align 4
  br label %216
}

!opencl.kernels = !{!0, !7, !13, !15, !17, !19, !21, !27, !33, !35, !37, !39, !41, !43, !45, !47, !48, !50, !52, !54, !56, !58, !60, !61, !63, !66, !68}
!hls.encrypted.func = !{}
!llvm.map.gv = !{!72, !80, !87, !94, !100, !107, !113, !121, !126, !131, !138, !143, !148, !153, !158, !163, !168, !173, !180, !185, !190, !197, !204, !209, !214, !219, !226, !232, !239, !245, !251, !257, !263, !268, !273, !278, !284, !290, !295, !300, !305, !310, !315, !316, !317, !318, !319, !320, !321, !322, !323, !324, !325, !326, !327, !328, !329, !330, !331, !332, !333, !334, !335, !336, !337, !338, !339, !340, !341, !342, !343, !344, !345, !346, !347, !348}

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
!28 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!29 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!30 = metadata !{metadata !"kernel_arg_type", metadata !"float [24][16][16]*", metadata !"float [48][16][16]*"}
!31 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!32 = metadata !{metadata !"kernel_arg_name", metadata !"left", metadata !"output"}
!33 = metadata !{null, metadata !28, metadata !29, metadata !30, metadata !31, metadata !34, metadata !6}
!34 = metadata !{metadata !"kernel_arg_name", metadata !"right", metadata !"output"}
!35 = metadata !{null, metadata !8, metadata !9, metadata !36, metadata !11, metadata !12, metadata !6}
!36 = metadata !{metadata !"kernel_arg_type", metadata !"float [48][16][16]*", metadata !"float [48][1][1]*", metadata !"float*", metadata !"float [48][16][16]*"}
!37 = metadata !{null, metadata !8, metadata !9, metadata !38, metadata !11, metadata !12, metadata !6}
!38 = metadata !{metadata !"kernel_arg_type", metadata !"float [48][8][8]*", metadata !"float [48][1][1]*", metadata !"float*", metadata !"float [48][8][8]*"}
!39 = metadata !{null, metadata !8, metadata !9, metadata !40, metadata !11, metadata !12, metadata !6}
!40 = metadata !{metadata !"kernel_arg_type", metadata !"float [48][16][16]*", metadata !"float [1][3][3]*", metadata !"float*", metadata !"float [48][8][8]*"}
!41 = metadata !{null, metadata !8, metadata !9, metadata !42, metadata !11, metadata !12, metadata !6}
!42 = metadata !{metadata !"kernel_arg_type", metadata !"float [48][8][8]*", metadata !"float [1][3][3]*", metadata !"float*", metadata !"float [48][8][8]*"}
!43 = metadata !{null, metadata !22, metadata !23, metadata !44, metadata !25, metadata !26, metadata !6}
!44 = metadata !{metadata !"kernel_arg_type", metadata !"float [48][8][8]*", metadata !"float [48][8][8]*", metadata !"float [96][8][8]*"}
!45 = metadata !{null, metadata !28, metadata !29, metadata !46, metadata !31, metadata !32, metadata !6}
!46 = metadata !{metadata !"kernel_arg_type", metadata !"float [48][8][8]*", metadata !"float [96][8][8]*"}
!47 = metadata !{null, metadata !28, metadata !29, metadata !46, metadata !31, metadata !34, metadata !6}
!48 = metadata !{null, metadata !8, metadata !9, metadata !49, metadata !11, metadata !12, metadata !6}
!49 = metadata !{metadata !"kernel_arg_type", metadata !"float [96][8][8]*", metadata !"float [96][1][1]*", metadata !"float*", metadata !"float [96][8][8]*"}
!50 = metadata !{null, metadata !8, metadata !9, metadata !51, metadata !11, metadata !12, metadata !6}
!51 = metadata !{metadata !"kernel_arg_type", metadata !"float [96][4][4]*", metadata !"float [96][1][1]*", metadata !"float*", metadata !"float [96][4][4]*"}
!52 = metadata !{null, metadata !8, metadata !9, metadata !53, metadata !11, metadata !12, metadata !6}
!53 = metadata !{metadata !"kernel_arg_type", metadata !"float [96][8][8]*", metadata !"float [1][3][3]*", metadata !"float*", metadata !"float [96][4][4]*"}
!54 = metadata !{null, metadata !8, metadata !9, metadata !55, metadata !11, metadata !12, metadata !6}
!55 = metadata !{metadata !"kernel_arg_type", metadata !"float [96][4][4]*", metadata !"float [1][3][3]*", metadata !"float*", metadata !"float [96][4][4]*"}
!56 = metadata !{null, metadata !22, metadata !23, metadata !57, metadata !25, metadata !26, metadata !6}
!57 = metadata !{metadata !"kernel_arg_type", metadata !"float [96][4][4]*", metadata !"float [96][4][4]*", metadata !"float [192][4][4]*"}
!58 = metadata !{null, metadata !28, metadata !29, metadata !59, metadata !31, metadata !32, metadata !6}
!59 = metadata !{metadata !"kernel_arg_type", metadata !"float [96][4][4]*", metadata !"float [192][4][4]*"}
!60 = metadata !{null, metadata !28, metadata !29, metadata !59, metadata !31, metadata !34, metadata !6}
!61 = metadata !{null, metadata !8, metadata !9, metadata !62, metadata !11, metadata !12, metadata !6}
!62 = metadata !{metadata !"kernel_arg_type", metadata !"float [192][4][4]*", metadata !"float [192][1][1]*", metadata !"float*", metadata !"float [512][4][4]*"}
!63 = metadata !{null, metadata !28, metadata !29, metadata !64, metadata !31, metadata !65, metadata !6}
!64 = metadata !{metadata !"kernel_arg_type", metadata !"float [512][4][4]*", metadata !"float*"}
!65 = metadata !{metadata !"kernel_arg_name", metadata !"input", metadata !"output"}
!66 = metadata !{null, metadata !8, metadata !9, metadata !67, metadata !11, metadata !12, metadata !6}
!67 = metadata !{metadata !"kernel_arg_type", metadata !"float*", metadata !"float [512]*", metadata !"float*", metadata !"float*"}
!68 = metadata !{null, metadata !22, metadata !23, metadata !69, metadata !70, metadata !71, metadata !6}
!69 = metadata !{metadata !"kernel_arg_type", metadata !"int*", metadata !"int*", metadata !"int*"}
!70 = metadata !{metadata !"kernel_arg_type_qual", metadata !"volatile", metadata !"volatile", metadata !"volatile"}
!71 = metadata !{metadata !"kernel_arg_name", metadata !"a", metadata !"b", metadata !"c"}
!72 = metadata !{metadata !73, null}
!73 = metadata !{metadata !74}
!74 = metadata !{i32 0, i32 31, metadata !75}
!75 = metadata !{metadata !76}
!76 = metadata !{metadata !"weights_96_96_1x1", metadata !77, metadata !"float", i32 0, i32 31}
!77 = metadata !{metadata !78, metadata !78, metadata !79, metadata !79}
!78 = metadata !{i32 0, i32 95, i32 1}
!79 = metadata !{i32 0, i32 0, i32 1}
!80 = metadata !{metadata !81, null}
!81 = metadata !{metadata !82}
!82 = metadata !{i32 0, i32 31, metadata !83}
!83 = metadata !{metadata !84}
!84 = metadata !{metadata !"weights_96_1_3x3", metadata !85, metadata !"float", i32 0, i32 31}
!85 = metadata !{metadata !78, metadata !79, metadata !86, metadata !86}
!86 = metadata !{i32 0, i32 2, i32 1}
!87 = metadata !{metadata !88, null}
!88 = metadata !{metadata !89}
!89 = metadata !{i32 0, i32 31, metadata !90}
!90 = metadata !{metadata !91}
!91 = metadata !{metadata !"weights_48_48_1x1", metadata !92, metadata !"float", i32 0, i32 31}
!92 = metadata !{metadata !93, metadata !93, metadata !79, metadata !79}
!93 = metadata !{i32 0, i32 47, i32 1}
!94 = metadata !{metadata !95, null}
!95 = metadata !{metadata !96}
!96 = metadata !{i32 0, i32 31, metadata !97}
!97 = metadata !{metadata !98}
!98 = metadata !{metadata !"weights_48_1_3x3", metadata !99, metadata !"float", i32 0, i32 31}
!99 = metadata !{metadata !93, metadata !79, metadata !86, metadata !86}
!100 = metadata !{metadata !101, null}
!101 = metadata !{metadata !102}
!102 = metadata !{i32 0, i32 31, metadata !103}
!103 = metadata !{metadata !104}
!104 = metadata !{metadata !"weights_24_24_1x1", metadata !105, metadata !"float", i32 0, i32 31}
!105 = metadata !{metadata !106, metadata !106, metadata !79, metadata !79}
!106 = metadata !{i32 0, i32 23, i32 1}
!107 = metadata !{metadata !108, null}
!108 = metadata !{metadata !109}
!109 = metadata !{i32 0, i32 31, metadata !110}
!110 = metadata !{metadata !111}
!111 = metadata !{metadata !"weights_24_1_3x3", metadata !112, metadata !"float", i32 0, i32 31}
!112 = metadata !{metadata !106, metadata !79, metadata !86, metadata !86}
!113 = metadata !{metadata !114, null}
!114 = metadata !{metadata !115}
!115 = metadata !{i32 0, i32 31, metadata !116}
!116 = metadata !{metadata !117}
!117 = metadata !{metadata !"shuffleunit2_2_output", metadata !118, metadata !"float", i32 0, i32 31}
!118 = metadata !{metadata !79, metadata !119, metadata !120, metadata !120}
!119 = metadata !{i32 0, i32 191, i32 1}
!120 = metadata !{i32 0, i32 3, i32 1}
!121 = metadata !{metadata !122, null}
!122 = metadata !{metadata !123}
!123 = metadata !{i32 0, i32 31, metadata !124}
!124 = metadata !{metadata !125}
!125 = metadata !{metadata !"shuffleunit2_1_output", metadata !118, metadata !"float", i32 0, i32 31}
!126 = metadata !{metadata !127, null}
!127 = metadata !{metadata !128}
!128 = metadata !{i32 0, i32 31, metadata !129}
!129 = metadata !{metadata !130}
!130 = metadata !{metadata !"shuffleunit2_0_output", metadata !118, metadata !"float", i32 0, i32 31}
!131 = metadata !{metadata !132, null}
!132 = metadata !{metadata !133}
!133 = metadata !{i32 0, i32 31, metadata !134}
!134 = metadata !{metadata !135}
!135 = metadata !{metadata !"shuffleunit1_7_output", metadata !136, metadata !"float", i32 0, i32 31}
!136 = metadata !{metadata !79, metadata !78, metadata !137, metadata !137}
!137 = metadata !{i32 0, i32 7, i32 1}
!138 = metadata !{metadata !139, null}
!139 = metadata !{metadata !140}
!140 = metadata !{i32 0, i32 31, metadata !141}
!141 = metadata !{metadata !142}
!142 = metadata !{metadata !"shuffleunit1_6_output", metadata !136, metadata !"float", i32 0, i32 31}
!143 = metadata !{metadata !144, null}
!144 = metadata !{metadata !145}
!145 = metadata !{i32 0, i32 31, metadata !146}
!146 = metadata !{metadata !147}
!147 = metadata !{metadata !"shuffleunit1_5_output", metadata !136, metadata !"float", i32 0, i32 31}
!148 = metadata !{metadata !149, null}
!149 = metadata !{metadata !150}
!150 = metadata !{i32 0, i32 31, metadata !151}
!151 = metadata !{metadata !152}
!152 = metadata !{metadata !"shuffleunit1_4_output", metadata !136, metadata !"float", i32 0, i32 31}
!153 = metadata !{metadata !154, null}
!154 = metadata !{metadata !155}
!155 = metadata !{i32 0, i32 31, metadata !156}
!156 = metadata !{metadata !157}
!157 = metadata !{metadata !"shuffleunit1_3_output", metadata !136, metadata !"float", i32 0, i32 31}
!158 = metadata !{metadata !159, null}
!159 = metadata !{metadata !160}
!160 = metadata !{i32 0, i32 31, metadata !161}
!161 = metadata !{metadata !162}
!162 = metadata !{metadata !"shuffleunit1_2_output", metadata !136, metadata !"float", i32 0, i32 31}
!163 = metadata !{metadata !164, null}
!164 = metadata !{metadata !165}
!165 = metadata !{i32 0, i32 31, metadata !166}
!166 = metadata !{metadata !167}
!167 = metadata !{metadata !"shuffleunit1_1_output", metadata !136, metadata !"float", i32 0, i32 31}
!168 = metadata !{metadata !169, null}
!169 = metadata !{metadata !170}
!170 = metadata !{i32 0, i32 31, metadata !171}
!171 = metadata !{metadata !172}
!172 = metadata !{metadata !"shuffleunit1_0_output", metadata !136, metadata !"float", i32 0, i32 31}
!173 = metadata !{metadata !174, null}
!174 = metadata !{metadata !175}
!175 = metadata !{i32 0, i32 31, metadata !176}
!176 = metadata !{metadata !177}
!177 = metadata !{metadata !"shuffleunit0_2_output", metadata !178, metadata !"float", i32 0, i32 31}
!178 = metadata !{metadata !79, metadata !93, metadata !179, metadata !179}
!179 = metadata !{i32 0, i32 15, i32 1}
!180 = metadata !{metadata !181, null}
!181 = metadata !{metadata !182}
!182 = metadata !{i32 0, i32 31, metadata !183}
!183 = metadata !{metadata !184}
!184 = metadata !{metadata !"shuffleunit0_1_output", metadata !178, metadata !"float", i32 0, i32 31}
!185 = metadata !{metadata !186, null}
!186 = metadata !{metadata !187}
!187 = metadata !{i32 0, i32 31, metadata !188}
!188 = metadata !{metadata !189}
!189 = metadata !{metadata !"shuffleunit0_0_output", metadata !178, metadata !"float", i32 0, i32 31}
!190 = metadata !{metadata !191, [2 x i32]* @llvm_global_ctors_0}
!191 = metadata !{metadata !192}
!192 = metadata !{i32 0, i32 31, metadata !193}
!193 = metadata !{metadata !194}
!194 = metadata !{metadata !"llvm.global_ctors.0", metadata !195, metadata !"", i32 0, i32 31}
!195 = metadata !{metadata !196}
!196 = metadata !{i32 0, i32 1, i32 1}
!197 = metadata !{metadata !198, [10 x float]* @fc_bias}
!198 = metadata !{metadata !199}
!199 = metadata !{i32 0, i32 31, metadata !200}
!200 = metadata !{metadata !201}
!201 = metadata !{metadata !"fc_bias", metadata !202, metadata !"float", i32 0, i32 31}
!202 = metadata !{metadata !203}
!203 = metadata !{i32 0, i32 9, i32 1}
!204 = metadata !{metadata !205, null}
!205 = metadata !{metadata !206}
!206 = metadata !{i32 0, i32 31, metadata !207}
!207 = metadata !{metadata !208}
!208 = metadata !{metadata !"downsampleunit2_output", metadata !118, metadata !"float", i32 0, i32 31}
!209 = metadata !{metadata !210, null}
!210 = metadata !{metadata !211}
!211 = metadata !{i32 0, i32 31, metadata !212}
!212 = metadata !{metadata !213}
!213 = metadata !{metadata !"downsampleunit1_output", metadata !136, metadata !"float", i32 0, i32 31}
!214 = metadata !{metadata !215, null}
!215 = metadata !{metadata !216}
!216 = metadata !{i32 0, i32 31, metadata !217}
!217 = metadata !{metadata !218}
!218 = metadata !{metadata !"downsampleunit0_output", metadata !178, metadata !"float", i32 0, i32 31}
!219 = metadata !{metadata !220, null}
!220 = metadata !{metadata !221}
!221 = metadata !{i32 0, i32 31, metadata !222}
!222 = metadata !{metadata !223}
!223 = metadata !{metadata !"conv_last_output", metadata !224, metadata !"float", i32 0, i32 31}
!224 = metadata !{metadata !79, metadata !225, metadata !120, metadata !120}
!225 = metadata !{i32 0, i32 511, i32 1}
!226 = metadata !{metadata !227, [512 x float]* @conv_last_bias}
!227 = metadata !{metadata !228}
!228 = metadata !{i32 0, i32 31, metadata !229}
!229 = metadata !{metadata !230}
!230 = metadata !{metadata !"conv_last_bias", metadata !231, metadata !"float", i32 0, i32 31}
!231 = metadata !{metadata !225}
!232 = metadata !{metadata !233, null}
!233 = metadata !{metadata !234}
!234 = metadata !{i32 0, i32 31, metadata !235}
!235 = metadata !{metadata !236}
!236 = metadata !{metadata !"conv1_output", metadata !237, metadata !"float", i32 0, i32 31}
!237 = metadata !{metadata !79, metadata !106, metadata !238, metadata !238}
!238 = metadata !{i32 0, i32 31, i32 1}
!239 = metadata !{metadata !240, [24 x float]* @conv1_bias}
!240 = metadata !{metadata !241}
!241 = metadata !{i32 0, i32 31, metadata !242}
!242 = metadata !{metadata !243}
!243 = metadata !{metadata !"conv1_bias", metadata !244, metadata !"float", i32 0, i32 31}
!244 = metadata !{metadata !106}
!245 = metadata !{metadata !246, null}
!246 = metadata !{metadata !247}
!247 = metadata !{i32 0, i32 31, metadata !248}
!248 = metadata !{metadata !249}
!249 = metadata !{metadata !"buffer1_1_96_4x4", metadata !250, metadata !"float", i32 0, i32 31}
!250 = metadata !{metadata !79, metadata !78, metadata !120, metadata !120}
!251 = metadata !{metadata !252, null}
!252 = metadata !{metadata !253}
!253 = metadata !{i32 0, i32 31, metadata !254}
!254 = metadata !{metadata !255}
!255 = metadata !{metadata !"buffer1_1_48_8x8", metadata !256, metadata !"float", i32 0, i32 31}
!256 = metadata !{metadata !79, metadata !93, metadata !137, metadata !137}
!257 = metadata !{metadata !258, null}
!258 = metadata !{metadata !259}
!259 = metadata !{i32 0, i32 31, metadata !260}
!260 = metadata !{metadata !261}
!261 = metadata !{metadata !"buffer1_1_24_16x16", metadata !262, metadata !"float", i32 0, i32 31}
!262 = metadata !{metadata !79, metadata !106, metadata !179, metadata !179}
!263 = metadata !{metadata !264, null}
!264 = metadata !{metadata !265}
!265 = metadata !{i32 0, i32 31, metadata !266}
!266 = metadata !{metadata !267}
!267 = metadata !{metadata !"buffer0_1_96_4x4", metadata !250, metadata !"float", i32 0, i32 31}
!268 = metadata !{metadata !269, null}
!269 = metadata !{metadata !270}
!270 = metadata !{i32 0, i32 31, metadata !271}
!271 = metadata !{metadata !272}
!272 = metadata !{metadata !"buffer0_1_48_8x8", metadata !256, metadata !"float", i32 0, i32 31}
!273 = metadata !{metadata !274, null}
!274 = metadata !{metadata !275}
!275 = metadata !{i32 0, i32 31, metadata !276}
!276 = metadata !{metadata !277}
!277 = metadata !{metadata !"buffer0_1_24_16x16", metadata !262, metadata !"float", i32 0, i32 31}
!278 = metadata !{metadata !279, [96 x float]* @bias_96}
!279 = metadata !{metadata !280}
!280 = metadata !{i32 0, i32 31, metadata !281}
!281 = metadata !{metadata !282}
!282 = metadata !{metadata !"bias_96", metadata !283, metadata !"float", i32 0, i32 31}
!283 = metadata !{metadata !78}
!284 = metadata !{metadata !285, [48 x float]* @bias_48}
!285 = metadata !{metadata !286}
!286 = metadata !{i32 0, i32 31, metadata !287}
!287 = metadata !{metadata !288}
!288 = metadata !{metadata !"bias_48", metadata !289, metadata !"float", i32 0, i32 31}
!289 = metadata !{metadata !93}
!290 = metadata !{metadata !291, [24 x float]* @bias_24}
!291 = metadata !{metadata !292}
!292 = metadata !{i32 0, i32 31, metadata !293}
!293 = metadata !{metadata !294}
!294 = metadata !{metadata !"bias_24", metadata !244, metadata !"float", i32 0, i32 31}
!295 = metadata !{metadata !296, [512 x float]* @avgpool_output}
!296 = metadata !{metadata !297}
!297 = metadata !{i32 0, i32 31, metadata !298}
!298 = metadata !{metadata !299}
!299 = metadata !{metadata !"avgpool_output", metadata !231, metadata !"float", i32 0, i32 31}
!300 = metadata !{metadata !301, null}
!301 = metadata !{metadata !302}
!302 = metadata !{i32 0, i32 31, metadata !303}
!303 = metadata !{metadata !304}
!304 = metadata !{metadata !"ShuffleConvs_2_DownsampleUnit__conv1r_output", metadata !136, metadata !"float", i32 0, i32 31}
!305 = metadata !{metadata !306, null}
!306 = metadata !{metadata !307}
!307 = metadata !{i32 0, i32 31, metadata !308}
!308 = metadata !{metadata !309}
!309 = metadata !{metadata !"ShuffleConvs_1_DownsampleUnit__conv1r_output", metadata !178, metadata !"float", i32 0, i32 31}
!310 = metadata !{metadata !311, null}
!311 = metadata !{metadata !312}
!312 = metadata !{i32 0, i32 31, metadata !313}
!313 = metadata !{metadata !314}
!314 = metadata !{metadata !"ShuffleConvs_0_DownsampleUnit__conv1r_output", metadata !237, metadata !"float", i32 0, i32 31}
!315 = metadata !{metadata !73, [9216 x float]* @weights_96_96_1x1}
!316 = metadata !{metadata !81, [864 x float]* @weights_96_1_3x3}
!317 = metadata !{metadata !88, [2304 x float]* @weights_48_48_1x1}
!318 = metadata !{metadata !95, [432 x float]* @weights_48_1_3x3}
!319 = metadata !{metadata !101, [576 x float]* @weights_24_24_1x1}
!320 = metadata !{metadata !108, [216 x float]* @weights_24_1_3x3}
!321 = metadata !{metadata !114, [3072 x float]* @shuffleunit2_2_outpu}
!322 = metadata !{metadata !122, [3072 x float]* @shuffleunit2_1_outpu}
!323 = metadata !{metadata !127, [3072 x float]* @shuffleunit2_0_outpu}
!324 = metadata !{metadata !132, [6144 x float]* @shuffleunit1_7_outpu}
!325 = metadata !{metadata !139, [6144 x float]* @shuffleunit1_6_outpu}
!326 = metadata !{metadata !144, [6144 x float]* @shuffleunit1_5_outpu}
!327 = metadata !{metadata !149, [6144 x float]* @shuffleunit1_4_outpu}
!328 = metadata !{metadata !154, [6144 x float]* @shuffleunit1_3_outpu}
!329 = metadata !{metadata !159, [6144 x float]* @shuffleunit1_2_outpu}
!330 = metadata !{metadata !164, [6144 x float]* @shuffleunit1_1_outpu}
!331 = metadata !{metadata !169, [6144 x float]* @shuffleunit1_0_outpu}
!332 = metadata !{metadata !174, [12288 x float]* @shuffleunit0_2_outpu}
!333 = metadata !{metadata !181, [12288 x float]* @shuffleunit0_1_outpu}
!334 = metadata !{metadata !186, [12288 x float]* @shuffleunit0_0_outpu}
!335 = metadata !{metadata !205, [3072 x float]* @downsampleunit2_outp}
!336 = metadata !{metadata !210, [6144 x float]* @downsampleunit1_outp}
!337 = metadata !{metadata !215, [12288 x float]* @downsampleunit0_outp}
!338 = metadata !{metadata !220, [8192 x float]* @conv_last_output}
!339 = metadata !{metadata !233, [24576 x float]* @conv1_output}
!340 = metadata !{metadata !246, [1536 x float]* @buffer1_1_96_4x4}
!341 = metadata !{metadata !252, [3072 x float]* @buffer1_1_48_8x8}
!342 = metadata !{metadata !258, [6144 x float]* @buffer1_1_24_16x16}
!343 = metadata !{metadata !264, [1536 x float]* @buffer0_1_96_4x4}
!344 = metadata !{metadata !269, [3072 x float]* @buffer0_1_48_8x8}
!345 = metadata !{metadata !274, [6144 x float]* @buffer0_1_24_16x16}
!346 = metadata !{metadata !301, [6144 x float]* @ShuffleConvs_2_Downs}
!347 = metadata !{metadata !306, [12288 x float]* @ShuffleConvs_1_Downs}
!348 = metadata !{metadata !311, [24576 x float]* @ShuffleConvs_0_Downs}
!349 = metadata !{metadata !350}
!350 = metadata !{i32 0, i32 31, metadata !351}
!351 = metadata !{metadata !352}
!352 = metadata !{metadata !"image", metadata !353, metadata !"float", i32 0, i32 31}
!353 = metadata !{metadata !79, metadata !86, metadata !238, metadata !238}
!354 = metadata !{metadata !355}
!355 = metadata !{i32 0, i32 31, metadata !356}
!356 = metadata !{metadata !357}
!357 = metadata !{metadata !"conv1_weight", metadata !358, metadata !"float", i32 0, i32 31}
!358 = metadata !{metadata !106, metadata !86, metadata !86, metadata !86}
!359 = metadata !{metadata !360}
!360 = metadata !{i32 0, i32 31, metadata !361}
!361 = metadata !{metadata !362}
!362 = metadata !{metadata !"shuffle_conv_3x3", metadata !363, metadata !"float", i32 0, i32 31}
!363 = metadata !{metadata !364, metadata !79, metadata !86, metadata !86}
!364 = metadata !{i32 0, i32 1079, i32 1}
!365 = metadata !{metadata !366}
!366 = metadata !{i32 0, i32 31, metadata !367}
!367 = metadata !{metadata !368}
!368 = metadata !{metadata !"shuffle_conv_1x1", metadata !369, metadata !"float", i32 0, i32 31}
!369 = metadata !{metadata !370, metadata !106, metadata !79, metadata !79}
!370 = metadata !{i32 0, i32 5495, i32 1}
!371 = metadata !{metadata !372}
!372 = metadata !{i32 0, i32 31, metadata !373}
!373 = metadata !{metadata !374}
!374 = metadata !{metadata !"conv_last_weight", metadata !375, metadata !"float", i32 0, i32 31}
!375 = metadata !{metadata !225, metadata !119, metadata !79, metadata !79}
!376 = metadata !{metadata !377}
!377 = metadata !{i32 0, i32 31, metadata !378}
!378 = metadata !{metadata !379}
!379 = metadata !{metadata !"fc_weight", metadata !380, metadata !"float", i32 0, i32 31}
!380 = metadata !{metadata !203, metadata !225}
!381 = metadata !{metadata !382}
!382 = metadata !{i32 0, i32 31, metadata !383}
!383 = metadata !{metadata !384}
!384 = metadata !{metadata !"bias", metadata !385, metadata !"float", i32 0, i32 31}
!385 = metadata !{metadata !386}
!386 = metadata !{i32 0, i32 3617, i32 1}
!387 = metadata !{metadata !388}
!388 = metadata !{i32 0, i32 31, metadata !389}
!389 = metadata !{metadata !390}
!390 = metadata !{metadata !"fc_output", metadata !391, metadata !"float", i32 0, i32 31}
!391 = metadata !{metadata !392}
!392 = metadata !{i32 0, i32 999, i32 1}

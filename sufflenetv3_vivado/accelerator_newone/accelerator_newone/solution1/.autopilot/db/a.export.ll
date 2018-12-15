; ModuleID = '/home/ziyan/ziyan/ece527/shufflenetv2_master/sufflenetv3_vivado/accelerator_newone/accelerator_newone/solution1/.autopilot/db/a.o.2.bc'
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
@buffer1_1_96_4x4 = global [1536 x float] zeroinitializer
@buffer1_1_48_8x8_p = global [4800 x float] zeroinitializer
@buffer1_1_48_8x8 = global [3072 x float] zeroinitializer
@buffer1_1_24_16x16_p = global [7776 x float] zeroinitializer
@buffer1_1_24_16x16 = global [6144 x float] zeroinitializer
@buffer0_1_96_4x4_p = global [3456 x float] zeroinitializer
@buffer0_1_96_4x4 = global [1536 x float] zeroinitializer
@buffer0_1_48_8x8_p = global [4800 x float] zeroinitializer
@buffer0_1_48_8x8 = global [3072 x float] zeroinitializer
@buffer0_1_24_16x16_p = global [7776 x float] zeroinitializer
@buffer0_1_24_16x16 = global [6144 x float] zeroinitializer
@bias_96 = global [96 x float] zeroinitializer, align 16
@bias_48 = global [48 x float] zeroinitializer, align 16
@bias_24 = global [24 x float] zeroinitializer, align 16
@avgpool_output = global [512 x float] zeroinitializer, align 16
@ShuffleNetV2_str = internal unnamed_addr constant [13 x i8] c"ShuffleNetV2\00"
@ShuffleConvs_2_Downs_1 = global [6144 x float] zeroinitializer
@ShuffleConvs_2_Downs = global [9600 x float] zeroinitializer
@ShuffleConvs_1_Downs_1 = global [12288 x float] zeroinitializer
@ShuffleConvs_1_Downs = global [15552 x float] zeroinitializer
@ShuffleConvs_0_Downs_1 = global [24576 x float] zeroinitializer
@ShuffleConvs_0_Downs = global [27744 x float] zeroinitializer

define internal fastcc void @subconv_3x3_8_stride([9600 x float]* nocapture %input_r, [864 x float]* nocapture %weight, [96 x float]* nocapture %bias, [3456 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader13
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_1, %.loopexit.loopexit ]
  %exitcond7 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_1 = add i7 %co, 1
  br i1 %exitcond7, label %.preheader11.preheader, label %.preheader13.preheader

.preheader11.preheader:                           ; preds = %.loopexit
  br label %.preheader11

.preheader13.preheader:                           ; preds = %.loopexit
  %tmp = zext i7 %co to i64
  %tmp_1 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0)
  %p_shl_cast = zext i10 %tmp_1 to i11
  %tmp_2 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co, i1 false)
  %p_shl1_cast = zext i8 %tmp_2 to i11
  %tmp_3 = sub i11 %p_shl_cast, %p_shl1_cast
  %tmp_17_cast = sext i11 %tmp_3 to i12
  %bias_addr = getelementptr [96 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader13

.preheader13:                                     ; preds = %2, %.preheader13.preheader
  %h = phi i3 [ %h_1, %2 ], [ 1, %.preheader13.preheader ]
  %exitcond6 = icmp eq i3 %h, -3
  %empty_12 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %exitcond6, label %.loopexit.loopexit, label %.preheader12.preheader

.preheader12.preheader:                           ; preds = %.preheader13
  %tmp_3_cast = zext i3 %h to i12
  %tmp_15 = add i12 %tmp_3_cast, %tmp_17_cast
  %tmp_16 = trunc i12 %tmp_15 to i10
  %p_shl2_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_16, i3 0)
  %p_shl3_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_15, i1 false)
  %tmp_17 = sub i13 %p_shl2_cast, %p_shl3_cast
  br label %.preheader12

.preheader12:                                     ; preds = %1, %.preheader12.preheader
  %w = phi i3 [ %w_1, %1 ], [ 1, %.preheader12.preheader ]
  %exitcond5 = icmp eq i3 %w, -3
  %empty_13 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %exitcond5, label %2, label %1

; <label>:1                                       ; preds = %.preheader12
  %bias_load = load float* %bias_addr, align 4
  %tmp_8_cast = zext i3 %w to i13
  %tmp_21 = add i13 %tmp_17, %tmp_8_cast
  %tmp_34_cast = zext i13 %tmp_21 to i64
  %output_addr = getelementptr [3456 x float]* %output_r, i64 0, i64 %tmp_34_cast
  store float %bias_load, float* %output_addr, align 4
  %w_1 = add i3 %w, 1
  br label %.preheader12

; <label>:2                                       ; preds = %.preheader12
  %h_1 = add i3 %h, 1
  br label %.preheader13

.preheader11.loopexit:                            ; preds = %.preheader10
  br label %.preheader11

.preheader11:                                     ; preds = %.preheader11.preheader, %.preheader11.loopexit
  %co1 = phi i7 [ %co_2, %.preheader11.loopexit ], [ 0, %.preheader11.preheader ]
  %exitcond4 = icmp eq i7 %co1, -32
  %empty_14 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_2 = add i7 %co1, 1
  br i1 %exitcond4, label %6, label %.preheader10.preheader

.preheader10.preheader:                           ; preds = %.preheader11
  %tmp_1_cast = zext i7 %co1 to i10
  %tmp_6 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co1, i3 0)
  %p_shl7_cast = zext i10 %tmp_6 to i11
  %tmp_7 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co1, i1 false)
  %p_shl8_cast = zext i8 %tmp_7 to i11
  %tmp_8 = add i11 %p_shl8_cast, %p_shl7_cast
  %tmp_10 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %co1, i2 0)
  %p_shl6_cast = zext i9 %tmp_10 to i10
  %tmp_11 = sub i10 %p_shl6_cast, %tmp_1_cast
  %tmp_22_cast = sext i10 %tmp_11 to i11
  %tmp_13 = sub i11 %p_shl7_cast, %p_shl8_cast
  %tmp_25_cast = sext i11 %tmp_13 to i12
  br label %.preheader10

.preheader10:                                     ; preds = %5, %.preheader10.preheader
  %h2 = phi i3 [ %h_2, %5 ], [ 1, %.preheader10.preheader ]
  %exitcond3 = icmp eq i3 %h2, -3
  %empty_15 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %exitcond3, label %.preheader11.loopexit, label %.preheader9.preheader

.preheader9.preheader:                            ; preds = %.preheader10
  %tmp_5 = call i4 @_ssdm_op_BitConcatenate.i4.i3.i1(i3 %h2, i1 false)
  %tmp_6_cast = zext i3 %h2 to i12
  %tmp_18 = add i12 %tmp_25_cast, %tmp_6_cast
  %tmp_19 = trunc i12 %tmp_18 to i10
  %p_shl9_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_19, i3 0)
  %p_shl10_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_18, i1 false)
  %tmp_20 = sub i13 %p_shl9_cast, %p_shl10_cast
  br label %.preheader9

.preheader9:                                      ; preds = %4, %.preheader9.preheader
  %w3 = phi i3 [ %w_2, %4 ], [ 1, %.preheader9.preheader ]
  %exitcond2 = icmp eq i3 %w3, -3
  %empty_16 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %exitcond2, label %5, label %.preheader8.preheader

.preheader8.preheader:                            ; preds = %.preheader9
  %tmp_s = call i4 @_ssdm_op_BitConcatenate.i4.i3.i1(i3 %w3, i1 false)
  br label %.preheader8

.preheader8.loopexit:                             ; preds = %.preheader
  br label %.preheader8

.preheader8:                                      ; preds = %.preheader8.loopexit, %.preheader8.preheader
  %sum = phi float [ 0.000000e+00, %.preheader8.preheader ], [ %sum_1, %.preheader8.loopexit ]
  %m = phi i2 [ 0, %.preheader8.preheader ], [ %m_1, %.preheader8.loopexit ]
  %exitcond1 = icmp eq i2 %m, -1
  %empty_17 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_1 = add i2 %m, 1
  br i1 %exitcond1, label %4, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader8
  %tmp_7_cast = zext i2 %m to i11
  %tmp_23 = add i11 %tmp_22_cast, %tmp_7_cast
  %tmp_24 = shl i11 %tmp_23, 2
  %tmp_25 = sub i11 %tmp_24, %tmp_23
  %tmp1 = xor i2 %m, -2
  %tmp1_cast = sext i2 %tmp1 to i4
  %tmp_9 = add i4 %tmp_5, %tmp1_cast
  %tmp_10_cast = zext i4 %tmp_9 to i11
  %tmp_26 = add i11 %tmp_8, %tmp_10_cast
  %tmp_27 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_26, i3 0)
  %p_shl11_cast = zext i14 %tmp_27 to i15
  %tmp_28 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_26, i1 false)
  %p_shl12_cast = zext i12 %tmp_28 to i15
  %tmp_29 = add i15 %p_shl12_cast, %p_shl11_cast
  br label %.preheader

.preheader:                                       ; preds = %3, %.preheader.preheader
  %sum_1 = phi float [ %sum_2, %3 ], [ %sum, %.preheader.preheader ]
  %n = phi i2 [ %n_1, %3 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i2 %n, -1
  %empty_18 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_1 = add i2 %n, 1
  br i1 %exitcond, label %.preheader8.loopexit, label %3

; <label>:3                                       ; preds = %.preheader
  %tmp_11_cast = zext i2 %n to i11
  %tmp_30 = add i11 %tmp_25, %tmp_11_cast
  %tmp_43_cast = zext i11 %tmp_30 to i64
  %weight_addr = getelementptr [864 x float]* %weight, i64 0, i64 %tmp_43_cast
  %weight_load = load float* %weight_addr, align 4
  %tmp2 = xor i2 %n, -2
  %tmp2_cast = sext i2 %tmp2 to i4
  %tmp_12 = add i4 %tmp_s, %tmp2_cast
  %tmp_13_cast = zext i4 %tmp_12 to i15
  %tmp_31 = add i15 %tmp_29, %tmp_13_cast
  %tmp_44_cast = zext i15 %tmp_31 to i64
  %input_addr = getelementptr [9600 x float]* %input_r, i64 0, i64 %tmp_44_cast
  %input_load = load float* %input_addr, align 4
  %tmp_14 = fmul float %weight_load, %input_load
  %sum_2 = fadd float %sum_1, %tmp_14
  br label %.preheader

; <label>:4                                       ; preds = %.preheader8
  %tmp_2_cast = zext i3 %w3 to i13
  %tmp_22 = add i13 %tmp_20, %tmp_2_cast
  %tmp_35_cast = zext i13 %tmp_22 to i64
  %output_addr_1 = getelementptr [3456 x float]* %output_r, i64 0, i64 %tmp_35_cast
  %output_load = load float* %output_addr_1, align 4
  %tmp_4 = fadd float %output_load, %sum
  store float %tmp_4, float* %output_addr_1, align 4
  %w_2 = add i3 %w3, 1
  br label %.preheader9

; <label>:5                                       ; preds = %.preheader9
  %h_2 = add i3 %h2, 1
  br label %.preheader10

; <label>:6                                       ; preds = %.preheader11
  ret void
}

define internal fastcc void @subconv_3x3_8_no_rel([4800 x float]* nocapture %input_r, [432 x float]* nocapture %weight, [48 x float]* nocapture %bias, [4800 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader13
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_3, %.loopexit.loopexit ]
  %exitcond7 = icmp eq i6 %co, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_3 = add i6 %co, 1
  br i1 %exitcond7, label %.preheader11.preheader, label %.preheader13.preheader

.preheader11.preheader:                           ; preds = %.loopexit
  br label %.preheader11

.preheader13.preheader:                           ; preds = %.loopexit
  %tmp = zext i6 %co to i64
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co, i3 0)
  %p_shl_cast = zext i9 %tmp_s to i10
  %tmp_32 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co, i1 false)
  %p_shl1_cast = zext i7 %tmp_32 to i10
  %tmp_33 = add i10 %p_shl1_cast, %p_shl_cast
  %bias_addr = getelementptr [48 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader13

.preheader13:                                     ; preds = %2, %.preheader13.preheader
  %h = phi i4 [ %h_3, %2 ], [ 1, %.preheader13.preheader ]
  %exitcond6 = icmp eq i4 %h, -7
  %empty_19 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond6, label %.loopexit.loopexit, label %.preheader12.preheader

.preheader12.preheader:                           ; preds = %.preheader13
  %tmp_15_cast = zext i4 %h to i10
  %tmp_39 = add i10 %tmp_15_cast, %tmp_33
  %tmp_29 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_39, i3 0)
  %p_shl2_cast = zext i13 %tmp_29 to i14
  %tmp_30 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_39, i1 false)
  %p_shl3_cast = zext i11 %tmp_30 to i14
  %tmp_40 = add i14 %p_shl2_cast, %p_shl3_cast
  br label %.preheader12

.preheader12:                                     ; preds = %1, %.preheader12.preheader
  %w = phi i4 [ %w_3, %1 ], [ 1, %.preheader12.preheader ]
  %exitcond5 = icmp eq i4 %w, -7
  %empty_20 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond5, label %2, label %1

; <label>:1                                       ; preds = %.preheader12
  %bias_load = load float* %bias_addr, align 4
  %tmp_17_cast = zext i4 %w to i14
  %tmp_44 = add i14 %tmp_40, %tmp_17_cast
  %tmp_61_cast = zext i14 %tmp_44 to i64
  %output_addr = getelementptr [4800 x float]* %output_r, i64 0, i64 %tmp_61_cast
  store float %bias_load, float* %output_addr, align 4
  %w_3 = add i4 %w, 1
  br label %.preheader12

; <label>:2                                       ; preds = %.preheader12
  %h_3 = add i4 %h, 1
  br label %.preheader13

.preheader11.loopexit:                            ; preds = %.preheader10
  br label %.preheader11

.preheader11:                                     ; preds = %.preheader11.preheader, %.preheader11.loopexit
  %co1 = phi i6 [ %co_4, %.preheader11.loopexit ], [ 0, %.preheader11.preheader ]
  %exitcond4 = icmp eq i6 %co1, -16
  %empty_21 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_4 = add i6 %co1, 1
  br i1 %exitcond4, label %6, label %.preheader10.preheader

.preheader10.preheader:                           ; preds = %.preheader11
  %tmp_cast = zext i6 %co1 to i9
  %tmp_34 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co1, i3 0)
  %p_shl5_cast = zext i9 %tmp_34 to i10
  %tmp_35 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co1, i1 false)
  %p_shl6_cast = zext i7 %tmp_35 to i10
  %tmp_36 = add i10 %p_shl6_cast, %p_shl5_cast
  %tmp_37 = call i8 @_ssdm_op_BitConcatenate.i8.i6.i2(i6 %co1, i2 0)
  %p_shl4_cast = zext i8 %tmp_37 to i9
  %tmp_38 = sub i9 %p_shl4_cast, %tmp_cast
  %tmp_52_cast = sext i9 %tmp_38 to i10
  br label %.preheader10

.preheader10:                                     ; preds = %5, %.preheader10.preheader
  %h2 = phi i4 [ %h_4, %5 ], [ 1, %.preheader10.preheader ]
  %exitcond3 = icmp eq i4 %h2, -7
  %empty_22 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond3, label %.preheader11.loopexit, label %.preheader9.preheader

.preheader9.preheader:                            ; preds = %.preheader10
  %tmp_16_cast = zext i4 %h2 to i10
  %tmp_41 = add i10 %tmp_16_cast, %tmp_36
  %tmp_31 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_41, i3 0)
  %p_shl7_cast = zext i13 %tmp_31 to i14
  %tmp_42 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_41, i1 false)
  %p_shl8_cast = zext i11 %tmp_42 to i14
  %tmp_43 = add i14 %p_shl7_cast, %p_shl8_cast
  br label %.preheader9

.preheader9:                                      ; preds = %4, %.preheader9.preheader
  %w3 = phi i4 [ %w_4, %4 ], [ 1, %.preheader9.preheader ]
  %exitcond2 = icmp eq i4 %w3, -7
  %empty_23 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond2, label %5, label %.preheader8.preheader

.preheader8.preheader:                            ; preds = %.preheader9
  br label %.preheader8

.preheader8.loopexit:                             ; preds = %.preheader
  br label %.preheader8

.preheader8:                                      ; preds = %.preheader8.preheader, %.preheader8.loopexit
  %sum = phi float [ %sum_1, %.preheader8.loopexit ], [ 0.000000e+00, %.preheader8.preheader ]
  %m = phi i2 [ %m_2, %.preheader8.loopexit ], [ 0, %.preheader8.preheader ]
  %exitcond1 = icmp eq i2 %m, -1
  %empty_24 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_2 = add i2 %m, 1
  br i1 %exitcond1, label %4, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader8
  %tmp_20_cast = zext i2 %m to i10
  %tmp_46 = add i10 %tmp_52_cast, %tmp_20_cast
  %tmp_47 = shl i10 %tmp_46, 2
  %tmp_48 = sub i10 %tmp_47, %tmp_46
  %tmp1 = add i2 -1, %m
  %tmp1_cast = sext i2 %tmp1 to i4
  %tmp_21 = add i4 %h2, %tmp1_cast
  %tmp_22_cast = zext i4 %tmp_21 to i10
  %tmp_49 = add i10 %tmp_36, %tmp_22_cast
  %tmp_50 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_49, i3 0)
  %p_shl9_cast = zext i13 %tmp_50 to i14
  %tmp_51 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_49, i1 false)
  %p_shl10_cast = zext i11 %tmp_51 to i14
  %tmp_52 = add i14 %p_shl10_cast, %p_shl9_cast
  br label %.preheader

.preheader:                                       ; preds = %3, %.preheader.preheader
  %sum_1 = phi float [ %sum_3, %3 ], [ %sum, %.preheader.preheader ]
  %n = phi i2 [ %n_2, %3 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i2 %n, -1
  %empty_25 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_2 = add i2 %n, 1
  br i1 %exitcond, label %.preheader8.loopexit, label %3

; <label>:3                                       ; preds = %.preheader
  %tmp_23_cast = zext i2 %n to i10
  %tmp_53 = add i10 %tmp_48, %tmp_23_cast
  %tmp_70_cast = zext i10 %tmp_53 to i64
  %weight_addr = getelementptr [432 x float]* %weight, i64 0, i64 %tmp_70_cast
  %weight_load = load float* %weight_addr, align 4
  %tmp2 = add i2 %n, -1
  %tmp2_cast = sext i2 %tmp2 to i4
  %tmp_24 = add i4 %w3, %tmp2_cast
  %tmp_25_cast = zext i4 %tmp_24 to i14
  %tmp_54 = add i14 %tmp_52, %tmp_25_cast
  %tmp_71_cast = zext i14 %tmp_54 to i64
  %input_addr = getelementptr [4800 x float]* %input_r, i64 0, i64 %tmp_71_cast
  %input_load = load float* %input_addr, align 4
  %tmp_26 = fmul float %weight_load, %input_load
  %sum_3 = fadd float %sum_1, %tmp_26
  br label %.preheader

; <label>:4                                       ; preds = %.preheader8
  %tmp_18_cast = zext i4 %w3 to i14
  %tmp_45 = add i14 %tmp_43, %tmp_18_cast
  %tmp_62_cast = zext i14 %tmp_45 to i64
  %output_addr_2 = getelementptr [4800 x float]* %output_r, i64 0, i64 %tmp_62_cast
  %output_load = load float* %output_addr_2, align 4
  %tmp_19 = fadd float %output_load, %sum
  store float %tmp_19, float* %output_addr_2, align 4
  %w_4 = add i4 %w3, 1
  br label %.preheader9

; <label>:5                                       ; preds = %.preheader9
  %h_4 = add i4 %h2, 1
  br label %.preheader10

; <label>:6                                       ; preds = %.preheader11
  ret void
}

define internal fastcc void @subconv_3x3_4_no_rel([3456 x float]* nocapture %input_r, [864 x float]* nocapture %weight, [96 x float]* nocapture %bias, [3456 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader13
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_5, %.loopexit.loopexit ]
  %exitcond7 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_5 = add i7 %co, 1
  br i1 %exitcond7, label %.preheader11.preheader, label %.preheader13.preheader

.preheader11.preheader:                           ; preds = %.loopexit
  br label %.preheader11

.preheader13.preheader:                           ; preds = %.loopexit
  %tmp = zext i7 %co to i64
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0)
  %p_shl_cast = zext i10 %tmp_s to i11
  %tmp_55 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co, i1 false)
  %p_shl1_cast = zext i8 %tmp_55 to i11
  %tmp_56 = sub i11 %p_shl_cast, %p_shl1_cast
  %tmp_74_cast = sext i11 %tmp_56 to i12
  %bias_addr = getelementptr [96 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader13

.preheader13:                                     ; preds = %2, %.preheader13.preheader
  %h = phi i3 [ %h_5, %2 ], [ 1, %.preheader13.preheader ]
  %exitcond6 = icmp eq i3 %h, -3
  %empty_26 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %exitcond6, label %.loopexit.loopexit, label %.preheader12.preheader

.preheader12.preheader:                           ; preds = %.preheader13
  %tmp_27_cast = zext i3 %h to i12
  %tmp_62 = add i12 %tmp_27_cast, %tmp_74_cast
  %tmp_52 = trunc i12 %tmp_62 to i10
  %p_shl2_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_52, i3 0)
  %p_shl3_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_62, i1 false)
  %tmp_63 = sub i13 %p_shl2_cast, %p_shl3_cast
  br label %.preheader12

.preheader12:                                     ; preds = %1, %.preheader12.preheader
  %w = phi i3 [ %w_5, %1 ], [ 1, %.preheader12.preheader ]
  %exitcond5 = icmp eq i3 %w, -3
  %empty_27 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %exitcond5, label %2, label %1

; <label>:1                                       ; preds = %.preheader12
  %bias_load = load float* %bias_addr, align 4
  %tmp_29_cast = zext i3 %w to i13
  %tmp_66 = add i13 %tmp_63, %tmp_29_cast
  %tmp_88_cast = zext i13 %tmp_66 to i64
  %output_addr = getelementptr [3456 x float]* %output_r, i64 0, i64 %tmp_88_cast
  store float %bias_load, float* %output_addr, align 4
  %w_5 = add i3 %w, 1
  br label %.preheader12

; <label>:2                                       ; preds = %.preheader12
  %h_5 = add i3 %h, 1
  br label %.preheader13

.preheader11.loopexit:                            ; preds = %.preheader10
  br label %.preheader11

.preheader11:                                     ; preds = %.preheader11.preheader, %.preheader11.loopexit
  %co1 = phi i7 [ %co_6, %.preheader11.loopexit ], [ 0, %.preheader11.preheader ]
  %exitcond4 = icmp eq i7 %co1, -32
  %empty_28 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_6 = add i7 %co1, 1
  br i1 %exitcond4, label %6, label %.preheader10.preheader

.preheader10.preheader:                           ; preds = %.preheader11
  %tmp_cast = zext i7 %co1 to i10
  %tmp_57 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co1, i3 0)
  %p_shl5_cast = zext i10 %tmp_57 to i11
  %tmp_58 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co1, i1 false)
  %p_shl6_cast = zext i8 %tmp_58 to i11
  %tmp_59 = sub i11 %p_shl5_cast, %p_shl6_cast
  %tmp_77_cast = sext i11 %tmp_59 to i12
  %tmp_60 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %co1, i2 0)
  %p_shl4_cast = zext i9 %tmp_60 to i10
  %tmp_61 = sub i10 %p_shl4_cast, %tmp_cast
  %tmp_79_cast = sext i10 %tmp_61 to i11
  br label %.preheader10

.preheader10:                                     ; preds = %5, %.preheader10.preheader
  %h2 = phi i3 [ %h_6, %5 ], [ 1, %.preheader10.preheader ]
  %exitcond3 = icmp eq i3 %h2, -3
  %empty_29 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %exitcond3, label %.preheader11.loopexit, label %.preheader9.preheader

.preheader9.preheader:                            ; preds = %.preheader10
  %tmp_28_cast = zext i3 %h2 to i12
  %tmp_64 = add i12 %tmp_28_cast, %tmp_77_cast
  %tmp_53 = trunc i12 %tmp_64 to i10
  %p_shl7_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_53, i3 0)
  %p_shl8_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_64, i1 false)
  %tmp_65 = sub i13 %p_shl7_cast, %p_shl8_cast
  br label %.preheader9

.preheader9:                                      ; preds = %4, %.preheader9.preheader
  %w3 = phi i3 [ %w_6, %4 ], [ 1, %.preheader9.preheader ]
  %exitcond2 = icmp eq i3 %w3, -3
  %empty_30 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %exitcond2, label %5, label %.preheader8.preheader

.preheader8.preheader:                            ; preds = %.preheader9
  br label %.preheader8

.preheader8.loopexit:                             ; preds = %.preheader
  br label %.preheader8

.preheader8:                                      ; preds = %.preheader8.preheader, %.preheader8.loopexit
  %sum = phi float [ %sum_1, %.preheader8.loopexit ], [ 0.000000e+00, %.preheader8.preheader ]
  %m = phi i2 [ %m_3, %.preheader8.loopexit ], [ 0, %.preheader8.preheader ]
  %exitcond1 = icmp eq i2 %m, -1
  %empty_31 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_3 = add i2 %m, 1
  br i1 %exitcond1, label %4, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader8
  %tmp_32_cast = zext i2 %m to i11
  %tmp_68 = add i11 %tmp_32_cast, %tmp_79_cast
  %tmp_54 = shl i11 %tmp_68, 2
  %tmp_69 = sub i11 %tmp_54, %tmp_68
  %tmp1 = add i2 -1, %m
  %tmp1_cast = sext i2 %tmp1 to i3
  %tmp_33 = add i3 %tmp1_cast, %h2
  %tmp_34_cast = zext i3 %tmp_33 to i12
  %tmp_70 = add i12 %tmp_34_cast, %tmp_77_cast
  %tmp_71 = trunc i12 %tmp_70 to i10
  %p_shl9_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_71, i3 0)
  %p_shl10_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_70, i1 false)
  %tmp_72 = sub i13 %p_shl9_cast, %p_shl10_cast
  br label %.preheader

.preheader:                                       ; preds = %3, %.preheader.preheader
  %sum_1 = phi float [ %sum_4, %3 ], [ %sum, %.preheader.preheader ]
  %n = phi i2 [ %n_3, %3 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i2 %n, -1
  %empty_32 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_3 = add i2 %n, 1
  br i1 %exitcond, label %.preheader8.loopexit, label %3

; <label>:3                                       ; preds = %.preheader
  %tmp_35_cast = zext i2 %n to i11
  %tmp_73 = add i11 %tmp_69, %tmp_35_cast
  %tmp_97_cast = zext i11 %tmp_73 to i64
  %weight_addr = getelementptr [864 x float]* %weight, i64 0, i64 %tmp_97_cast
  %weight_load = load float* %weight_addr, align 4
  %tmp2 = add i2 %n, -1
  %tmp2_cast = sext i2 %tmp2 to i3
  %tmp_36 = add i3 %w3, %tmp2_cast
  %tmp_37_cast = zext i3 %tmp_36 to i13
  %tmp_74 = add i13 %tmp_72, %tmp_37_cast
  %tmp_98_cast = zext i13 %tmp_74 to i64
  %input_addr = getelementptr [3456 x float]* %input_r, i64 0, i64 %tmp_98_cast
  %input_load = load float* %input_addr, align 4
  %tmp_38 = fmul float %weight_load, %input_load
  %sum_4 = fadd float %sum_1, %tmp_38
  br label %.preheader

; <label>:4                                       ; preds = %.preheader8
  %tmp_30_cast = zext i3 %w3 to i13
  %tmp_67 = add i13 %tmp_65, %tmp_30_cast
  %tmp_89_cast = zext i13 %tmp_67 to i64
  %output_addr_3 = getelementptr [3456 x float]* %output_r, i64 0, i64 %tmp_89_cast
  %output_load = load float* %output_addr_3, align 4
  %tmp_31 = fadd float %output_load, %sum
  store float %tmp_31, float* %output_addr_3, align 4
  %w_6 = add i3 %w3, 1
  br label %.preheader9

; <label>:5                                       ; preds = %.preheader9
  %h_6 = add i3 %h2, 1
  br label %.preheader10

; <label>:6                                       ; preds = %.preheader11
  ret void
}

define internal fastcc void @subconv_3x3_32_strid([27744 x float]* nocapture %input_r, [216 x float]* nocapture %weight, [24 x float]* nocapture %bias, [7776 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader13
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i5 [ 0, %0 ], [ %co_7, %.loopexit.loopexit ]
  %exitcond7 = icmp eq i5 %co, -8
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_7 = add i5 %co, 1
  br i1 %exitcond7, label %.preheader11.preheader, label %.preheader13.preheader

.preheader11.preheader:                           ; preds = %.loopexit
  br label %.preheader11

.preheader13.preheader:                           ; preds = %.loopexit
  %tmp = zext i5 %co to i64
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co, i4 0)
  %p_shl_cast = zext i9 %tmp_s to i10
  %tmp_75 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co, i1 false)
  %p_shl1_cast = zext i6 %tmp_75 to i10
  %tmp_76 = add i10 %p_shl1_cast, %p_shl_cast
  %bias_addr = getelementptr [24 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader13

.preheader13:                                     ; preds = %2, %.preheader13.preheader
  %h = phi i5 [ %h_7, %2 ], [ 1, %.preheader13.preheader ]
  %exitcond6 = icmp eq i5 %h, -15
  %empty_33 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond6, label %.loopexit.loopexit, label %.preheader12.preheader

.preheader12.preheader:                           ; preds = %.preheader13
  %tmp_39_cast = zext i5 %h to i10
  %tmp_84 = add i10 %tmp_39_cast, %tmp_76
  %p_shl2_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_84, i4 0)
  %tmp_72 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_84, i1 false)
  %p_shl3_cast = zext i11 %tmp_72 to i14
  %tmp_85 = add i14 %p_shl2_cast, %p_shl3_cast
  br label %.preheader12

.preheader12:                                     ; preds = %1, %.preheader12.preheader
  %w = phi i5 [ %w_7, %1 ], [ 1, %.preheader12.preheader ]
  %exitcond5 = icmp eq i5 %w, -15
  %empty_34 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond5, label %2, label %1

; <label>:1                                       ; preds = %.preheader12
  %bias_load = load float* %bias_addr, align 4
  %tmp_42_cast = zext i5 %w to i14
  %tmp_88 = add i14 %tmp_85, %tmp_42_cast
  %tmp_118_cast = zext i14 %tmp_88 to i64
  %output_addr = getelementptr [7776 x float]* %output_r, i64 0, i64 %tmp_118_cast
  store float %bias_load, float* %output_addr, align 4
  %w_7 = add i5 %w, 1
  br label %.preheader12

; <label>:2                                       ; preds = %.preheader12
  %h_7 = add i5 %h, 1
  br label %.preheader13

.preheader11.loopexit:                            ; preds = %.preheader10
  br label %.preheader11

.preheader11:                                     ; preds = %.preheader11.preheader, %.preheader11.loopexit
  %co1 = phi i5 [ %co_8, %.preheader11.loopexit ], [ 0, %.preheader11.preheader ]
  %exitcond4 = icmp eq i5 %co1, -8
  %empty_35 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_8 = add i5 %co1, 1
  br i1 %exitcond4, label %6, label %.preheader10.preheader

.preheader10.preheader:                           ; preds = %.preheader11
  %tmp_cast = zext i5 %co1 to i8
  %tmp_77 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co1, i5 0)
  %p_shl7_cast = zext i10 %tmp_77 to i11
  %tmp_78 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co1, i1 false)
  %p_shl8_cast1 = zext i6 %tmp_78 to i10
  %p_shl8_cast = zext i6 %tmp_78 to i11
  %tmp_79 = add i11 %p_shl8_cast, %p_shl7_cast
  %tmp_80 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co1, i2 0)
  %p_shl6_cast = zext i7 %tmp_80 to i8
  %tmp_81 = sub i8 %p_shl6_cast, %tmp_cast
  %tmp_106_cast = sext i8 %tmp_81 to i9
  %tmp_82 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co1, i4 0)
  %p_shl4_cast = zext i9 %tmp_82 to i10
  %tmp_83 = add i10 %p_shl8_cast1, %p_shl4_cast
  br label %.preheader10

.preheader10:                                     ; preds = %5, %.preheader10.preheader
  %h2 = phi i5 [ %h_8, %5 ], [ 1, %.preheader10.preheader ]
  %exitcond3 = icmp eq i5 %h2, -15
  %empty_36 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond3, label %.preheader11.loopexit, label %.preheader9.preheader

.preheader9.preheader:                            ; preds = %.preheader10
  %tmp_40 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %h2, i1 false)
  %tmp_41_cast = zext i5 %h2 to i10
  %tmp_86 = add i10 %tmp_83, %tmp_41_cast
  %p_shl9_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_86, i4 0)
  %tmp_73 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_86, i1 false)
  %p_shl10_cast = zext i11 %tmp_73 to i14
  %tmp_87 = add i14 %p_shl10_cast, %p_shl9_cast
  br label %.preheader9

.preheader9:                                      ; preds = %4, %.preheader9.preheader
  %w3 = phi i5 [ %w_8, %4 ], [ 1, %.preheader9.preheader ]
  %exitcond2 = icmp eq i5 %w3, -15
  %empty_37 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond2, label %5, label %.preheader8.preheader

.preheader8.preheader:                            ; preds = %.preheader9
  %tmp_43 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %w3, i1 false)
  br label %.preheader8

.preheader8.loopexit:                             ; preds = %.preheader
  br label %.preheader8

.preheader8:                                      ; preds = %.preheader8.loopexit, %.preheader8.preheader
  %sum = phi float [ 0.000000e+00, %.preheader8.preheader ], [ %sum_1, %.preheader8.loopexit ]
  %m = phi i2 [ 0, %.preheader8.preheader ], [ %m_4, %.preheader8.loopexit ]
  %exitcond1 = icmp eq i2 %m, -1
  %empty_38 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_4 = add i2 %m, 1
  br i1 %exitcond1, label %4, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader8
  %tmp_46_cast = zext i2 %m to i9
  %tmp_90 = add i9 %tmp_106_cast, %tmp_46_cast
  %tmp_74 = shl i9 %tmp_90, 2
  %tmp_91 = sub i9 %tmp_74, %tmp_90
  %tmp1 = xor i2 %m, -2
  %tmp1_cast = sext i2 %tmp1 to i6
  %tmp_47 = add i6 %tmp_40, %tmp1_cast
  %tmp_48_cast = zext i6 %tmp_47 to i11
  %tmp_92 = add i11 %tmp_79, %tmp_48_cast
  %p_shl11_cast = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_92, i5 0)
  %tmp_93 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_92, i1 false)
  %p_shl12_cast = zext i12 %tmp_93 to i16
  %tmp_94 = add i16 %p_shl12_cast, %p_shl11_cast
  br label %.preheader

.preheader:                                       ; preds = %3, %.preheader.preheader
  %sum_1 = phi float [ %sum_5, %3 ], [ %sum, %.preheader.preheader ]
  %n = phi i2 [ %n_4, %3 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i2 %n, -1
  %empty_39 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_4 = add i2 %n, 1
  br i1 %exitcond, label %.preheader8.loopexit, label %3

; <label>:3                                       ; preds = %.preheader
  %tmp_49_cast = zext i2 %n to i9
  %tmp_95 = add i9 %tmp_91, %tmp_49_cast
  %tmp_127_cast = zext i9 %tmp_95 to i64
  %weight_addr = getelementptr [216 x float]* %weight, i64 0, i64 %tmp_127_cast
  %weight_load = load float* %weight_addr, align 4
  %tmp2 = xor i2 %n, -2
  %tmp2_cast = sext i2 %tmp2 to i6
  %tmp_50 = add i6 %tmp_43, %tmp2_cast
  %tmp_51_cast = zext i6 %tmp_50 to i16
  %tmp_96 = add i16 %tmp_94, %tmp_51_cast
  %tmp_128_cast = zext i16 %tmp_96 to i64
  %input_addr = getelementptr [27744 x float]* %input_r, i64 0, i64 %tmp_128_cast
  %input_load = load float* %input_addr, align 4
  %tmp_52 = fmul float %weight_load, %input_load
  %sum_5 = fadd float %sum_1, %tmp_52
  br label %.preheader

; <label>:4                                       ; preds = %.preheader8
  %tmp_44_cast = zext i5 %w3 to i14
  %tmp_89 = add i14 %tmp_87, %tmp_44_cast
  %tmp_119_cast = zext i14 %tmp_89 to i64
  %output_addr_4 = getelementptr [7776 x float]* %output_r, i64 0, i64 %tmp_119_cast
  %output_load = load float* %output_addr_4, align 4
  %tmp_45 = fadd float %output_load, %sum
  store float %tmp_45, float* %output_addr_4, align 4
  %w_8 = add i5 %w3, 1
  br label %.preheader9

; <label>:5                                       ; preds = %.preheader9
  %h_8 = add i5 %h2, 1
  br label %.preheader10

; <label>:6                                       ; preds = %.preheader11
  ret void
}

define internal fastcc void @subconv_3x3_16_strid([15552 x float]* nocapture %input_r, [432 x float]* nocapture %weight, [48 x float]* nocapture %bias, [4800 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader13
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_9, %.loopexit.loopexit ]
  %exitcond7 = icmp eq i6 %co, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_9 = add i6 %co, 1
  br i1 %exitcond7, label %.preheader11.preheader, label %.preheader13.preheader

.preheader11.preheader:                           ; preds = %.loopexit
  br label %.preheader11

.preheader13.preheader:                           ; preds = %.loopexit
  %tmp = zext i6 %co to i64
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co, i3 0)
  %p_shl_cast = zext i9 %tmp_s to i10
  %tmp_97 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co, i1 false)
  %p_shl1_cast = zext i7 %tmp_97 to i10
  %tmp_98 = add i10 %p_shl1_cast, %p_shl_cast
  %bias_addr = getelementptr [48 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader13

.preheader13:                                     ; preds = %2, %.preheader13.preheader
  %h = phi i4 [ %h_9, %2 ], [ 1, %.preheader13.preheader ]
  %exitcond6 = icmp eq i4 %h, -7
  %empty_40 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond6, label %.loopexit.loopexit, label %.preheader12.preheader

.preheader12.preheader:                           ; preds = %.preheader13
  %tmp_53_cast = zext i4 %h to i10
  %tmp_106 = add i10 %tmp_53_cast, %tmp_98
  %tmp_94 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_106, i3 0)
  %p_shl2_cast = zext i13 %tmp_94 to i14
  %tmp_95 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_106, i1 false)
  %p_shl3_cast = zext i11 %tmp_95 to i14
  %tmp_107 = add i14 %p_shl2_cast, %p_shl3_cast
  br label %.preheader12

.preheader12:                                     ; preds = %1, %.preheader12.preheader
  %w = phi i4 [ %w_9, %1 ], [ 1, %.preheader12.preheader ]
  %exitcond5 = icmp eq i4 %w, -7
  %empty_41 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond5, label %2, label %1

; <label>:1                                       ; preds = %.preheader12
  %bias_load = load float* %bias_addr, align 4
  %tmp_56_cast = zext i4 %w to i14
  %tmp_111 = add i14 %tmp_107, %tmp_56_cast
  %tmp_148_cast = zext i14 %tmp_111 to i64
  %output_addr = getelementptr [4800 x float]* %output_r, i64 0, i64 %tmp_148_cast
  store float %bias_load, float* %output_addr, align 4
  %w_9 = add i4 %w, 1
  br label %.preheader12

; <label>:2                                       ; preds = %.preheader12
  %h_9 = add i4 %h, 1
  br label %.preheader13

.preheader11.loopexit:                            ; preds = %.preheader10
  br label %.preheader11

.preheader11:                                     ; preds = %.preheader11.preheader, %.preheader11.loopexit
  %co1 = phi i6 [ %co_10, %.preheader11.loopexit ], [ 0, %.preheader11.preheader ]
  %exitcond4 = icmp eq i6 %co1, -16
  %empty_42 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_10 = add i6 %co1, 1
  br i1 %exitcond4, label %6, label %.preheader10.preheader

.preheader10.preheader:                           ; preds = %.preheader11
  %tmp_cast = zext i6 %co1 to i9
  %tmp_99 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co1, i4 0)
  %p_shl7_cast = zext i10 %tmp_99 to i11
  %tmp_100 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co1, i1 false)
  %p_shl8_cast2 = zext i7 %tmp_100 to i10
  %p_shl8_cast = zext i7 %tmp_100 to i11
  %tmp_101 = add i11 %p_shl8_cast, %p_shl7_cast
  %tmp_102 = call i8 @_ssdm_op_BitConcatenate.i8.i6.i2(i6 %co1, i2 0)
  %p_shl6_cast = zext i8 %tmp_102 to i9
  %tmp_103 = sub i9 %p_shl6_cast, %tmp_cast
  %tmp_136_cast = sext i9 %tmp_103 to i10
  %tmp_104 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co1, i3 0)
  %p_shl4_cast = zext i9 %tmp_104 to i10
  %tmp_105 = add i10 %p_shl8_cast2, %p_shl4_cast
  br label %.preheader10

.preheader10:                                     ; preds = %5, %.preheader10.preheader
  %h2 = phi i4 [ %h_10, %5 ], [ 1, %.preheader10.preheader ]
  %exitcond3 = icmp eq i4 %h2, -7
  %empty_43 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond3, label %.preheader11.loopexit, label %.preheader9.preheader

.preheader9.preheader:                            ; preds = %.preheader10
  %tmp_54 = call i5 @_ssdm_op_BitConcatenate.i5.i4.i1(i4 %h2, i1 false)
  %tmp_55_cast = zext i4 %h2 to i10
  %tmp_108 = add i10 %tmp_105, %tmp_55_cast
  %tmp_96 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_108, i3 0)
  %p_shl9_cast = zext i13 %tmp_96 to i14
  %tmp_109 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_108, i1 false)
  %p_shl10_cast = zext i11 %tmp_109 to i14
  %tmp_110 = add i14 %p_shl10_cast, %p_shl9_cast
  br label %.preheader9

.preheader9:                                      ; preds = %4, %.preheader9.preheader
  %w3 = phi i4 [ %w_10, %4 ], [ 1, %.preheader9.preheader ]
  %exitcond2 = icmp eq i4 %w3, -7
  %empty_44 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond2, label %5, label %.preheader8.preheader

.preheader8.preheader:                            ; preds = %.preheader9
  %tmp_57 = call i5 @_ssdm_op_BitConcatenate.i5.i4.i1(i4 %w3, i1 false)
  br label %.preheader8

.preheader8.loopexit:                             ; preds = %.preheader
  br label %.preheader8

.preheader8:                                      ; preds = %.preheader8.loopexit, %.preheader8.preheader
  %sum = phi float [ 0.000000e+00, %.preheader8.preheader ], [ %sum_1, %.preheader8.loopexit ]
  %m = phi i2 [ 0, %.preheader8.preheader ], [ %m_5, %.preheader8.loopexit ]
  %exitcond1 = icmp eq i2 %m, -1
  %empty_45 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_5 = add i2 %m, 1
  br i1 %exitcond1, label %4, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader8
  %tmp_60_cast = zext i2 %m to i10
  %tmp_113 = add i10 %tmp_136_cast, %tmp_60_cast
  %tmp_114 = shl i10 %tmp_113, 2
  %tmp_115 = sub i10 %tmp_114, %tmp_113
  %tmp1 = xor i2 %m, -2
  %tmp1_cast = sext i2 %tmp1 to i5
  %tmp_61 = add i5 %tmp_54, %tmp1_cast
  %tmp_62_cast = zext i5 %tmp_61 to i11
  %tmp_116 = add i11 %tmp_101, %tmp_62_cast
  %p_shl11_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_116, i4 0)
  %tmp_117 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_116, i1 false)
  %p_shl12_cast = zext i12 %tmp_117 to i15
  %tmp_118 = add i15 %p_shl12_cast, %p_shl11_cast
  br label %.preheader

.preheader:                                       ; preds = %3, %.preheader.preheader
  %sum_1 = phi float [ %sum_6, %3 ], [ %sum, %.preheader.preheader ]
  %n = phi i2 [ %n_5, %3 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i2 %n, -1
  %empty_46 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_5 = add i2 %n, 1
  br i1 %exitcond, label %.preheader8.loopexit, label %3

; <label>:3                                       ; preds = %.preheader
  %tmp_63_cast = zext i2 %n to i10
  %tmp_119 = add i10 %tmp_115, %tmp_63_cast
  %tmp_157_cast = zext i10 %tmp_119 to i64
  %weight_addr = getelementptr [432 x float]* %weight, i64 0, i64 %tmp_157_cast
  %weight_load = load float* %weight_addr, align 4
  %tmp2 = xor i2 %n, -2
  %tmp2_cast = sext i2 %tmp2 to i5
  %tmp_64 = add i5 %tmp_57, %tmp2_cast
  %tmp_65_cast = zext i5 %tmp_64 to i15
  %tmp_120 = add i15 %tmp_118, %tmp_65_cast
  %tmp_158_cast = zext i15 %tmp_120 to i64
  %input_addr = getelementptr [15552 x float]* %input_r, i64 0, i64 %tmp_158_cast
  %input_load = load float* %input_addr, align 4
  %tmp_66 = fmul float %weight_load, %input_load
  %sum_6 = fadd float %sum_1, %tmp_66
  br label %.preheader

; <label>:4                                       ; preds = %.preheader8
  %tmp_58_cast = zext i4 %w3 to i14
  %tmp_112 = add i14 %tmp_110, %tmp_58_cast
  %tmp_149_cast = zext i14 %tmp_112 to i64
  %output_addr_5 = getelementptr [4800 x float]* %output_r, i64 0, i64 %tmp_149_cast
  %output_load = load float* %output_addr_5, align 4
  %tmp_59 = fadd float %output_load, %sum
  store float %tmp_59, float* %output_addr_5, align 4
  %w_10 = add i4 %w3, 1
  br label %.preheader9

; <label>:5                                       ; preds = %.preheader9
  %h_10 = add i4 %h2, 1
  br label %.preheader10

; <label>:6                                       ; preds = %.preheader11
  ret void
}

define internal fastcc void @subconv_3x3_16_no_re([7776 x float]* nocapture %input_r, [216 x float]* nocapture %weight, [24 x float]* nocapture %bias, [7776 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader13
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i5 [ 0, %0 ], [ %co_11, %.loopexit.loopexit ]
  %exitcond7 = icmp eq i5 %co, -8
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_11 = add i5 %co, 1
  br i1 %exitcond7, label %.preheader11.preheader, label %.preheader13.preheader

.preheader11.preheader:                           ; preds = %.loopexit
  br label %.preheader11

.preheader13.preheader:                           ; preds = %.loopexit
  %tmp = zext i5 %co to i64
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co, i4 0)
  %p_shl_cast = zext i9 %tmp_s to i10
  %tmp_121 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co, i1 false)
  %p_shl1_cast = zext i6 %tmp_121 to i10
  %tmp_122 = add i10 %p_shl1_cast, %p_shl_cast
  %bias_addr = getelementptr [24 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader13

.preheader13:                                     ; preds = %2, %.preheader13.preheader
  %h = phi i5 [ %h_11, %2 ], [ 1, %.preheader13.preheader ]
  %exitcond6 = icmp eq i5 %h, -15
  %empty_47 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond6, label %.loopexit.loopexit, label %.preheader12.preheader

.preheader12.preheader:                           ; preds = %.preheader13
  %tmp_67_cast = zext i5 %h to i10
  %tmp_128 = add i10 %tmp_67_cast, %tmp_122
  %p_shl2_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_128, i4 0)
  %tmp_118 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_128, i1 false)
  %p_shl3_cast = zext i11 %tmp_118 to i14
  %tmp_129 = add i14 %p_shl2_cast, %p_shl3_cast
  br label %.preheader12

.preheader12:                                     ; preds = %1, %.preheader12.preheader
  %w = phi i5 [ %w_11, %1 ], [ 1, %.preheader12.preheader ]
  %exitcond5 = icmp eq i5 %w, -15
  %empty_48 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond5, label %2, label %1

; <label>:1                                       ; preds = %.preheader12
  %bias_load = load float* %bias_addr, align 4
  %tmp_69_cast = zext i5 %w to i14
  %tmp_132 = add i14 %tmp_129, %tmp_69_cast
  %tmp_175_cast = zext i14 %tmp_132 to i64
  %output_addr = getelementptr [7776 x float]* %output_r, i64 0, i64 %tmp_175_cast
  store float %bias_load, float* %output_addr, align 4
  %w_11 = add i5 %w, 1
  br label %.preheader12

; <label>:2                                       ; preds = %.preheader12
  %h_11 = add i5 %h, 1
  br label %.preheader13

.preheader11.loopexit:                            ; preds = %.preheader10
  br label %.preheader11

.preheader11:                                     ; preds = %.preheader11.preheader, %.preheader11.loopexit
  %co1 = phi i5 [ %co_12, %.preheader11.loopexit ], [ 0, %.preheader11.preheader ]
  %exitcond4 = icmp eq i5 %co1, -8
  %empty_49 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_12 = add i5 %co1, 1
  br i1 %exitcond4, label %6, label %.preheader10.preheader

.preheader10.preheader:                           ; preds = %.preheader11
  %tmp_cast = zext i5 %co1 to i8
  %tmp_123 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co1, i4 0)
  %p_shl5_cast = zext i9 %tmp_123 to i10
  %tmp_124 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co1, i1 false)
  %p_shl6_cast = zext i6 %tmp_124 to i10
  %tmp_125 = add i10 %p_shl6_cast, %p_shl5_cast
  %tmp_126 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co1, i2 0)
  %p_shl4_cast = zext i7 %tmp_126 to i8
  %tmp_127 = sub i8 %p_shl4_cast, %tmp_cast
  %tmp_166_cast = sext i8 %tmp_127 to i9
  br label %.preheader10

.preheader10:                                     ; preds = %5, %.preheader10.preheader
  %h2 = phi i5 [ %h_12, %5 ], [ 1, %.preheader10.preheader ]
  %exitcond3 = icmp eq i5 %h2, -15
  %empty_50 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond3, label %.preheader11.loopexit, label %.preheader9.preheader

.preheader9.preheader:                            ; preds = %.preheader10
  %tmp_68_cast = zext i5 %h2 to i10
  %tmp_130 = add i10 %tmp_68_cast, %tmp_125
  %p_shl7_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_130, i4 0)
  %tmp_119 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_130, i1 false)
  %p_shl8_cast = zext i11 %tmp_119 to i14
  %tmp_131 = add i14 %p_shl7_cast, %p_shl8_cast
  br label %.preheader9

.preheader9:                                      ; preds = %4, %.preheader9.preheader
  %w3 = phi i5 [ %w_12, %4 ], [ 1, %.preheader9.preheader ]
  %exitcond2 = icmp eq i5 %w3, -15
  %empty_51 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond2, label %5, label %.preheader8.preheader

.preheader8.preheader:                            ; preds = %.preheader9
  br label %.preheader8

.preheader8.loopexit:                             ; preds = %.preheader
  br label %.preheader8

.preheader8:                                      ; preds = %.preheader8.preheader, %.preheader8.loopexit
  %sum = phi float [ %sum_1, %.preheader8.loopexit ], [ 0.000000e+00, %.preheader8.preheader ]
  %m = phi i2 [ %m_6, %.preheader8.loopexit ], [ 0, %.preheader8.preheader ]
  %exitcond1 = icmp eq i2 %m, -1
  %empty_52 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_6 = add i2 %m, 1
  br i1 %exitcond1, label %4, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader8
  %tmp_72_cast = zext i2 %m to i9
  %tmp_134 = add i9 %tmp_166_cast, %tmp_72_cast
  %tmp_120 = shl i9 %tmp_134, 2
  %tmp_135 = sub i9 %tmp_120, %tmp_134
  %tmp1 = add i2 -1, %m
  %tmp1_cast = sext i2 %tmp1 to i5
  %tmp_73 = add i5 %h2, %tmp1_cast
  %tmp_74_cast = zext i5 %tmp_73 to i10
  %tmp_136 = add i10 %tmp_125, %tmp_74_cast
  %p_shl9_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_136, i4 0)
  %tmp_137 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_136, i1 false)
  %p_shl10_cast = zext i11 %tmp_137 to i14
  %tmp_138 = add i14 %p_shl10_cast, %p_shl9_cast
  br label %.preheader

.preheader:                                       ; preds = %3, %.preheader.preheader
  %sum_1 = phi float [ %sum_7, %3 ], [ %sum, %.preheader.preheader ]
  %n = phi i2 [ %n_6, %3 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i2 %n, -1
  %empty_53 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_6 = add i2 %n, 1
  br i1 %exitcond, label %.preheader8.loopexit, label %3

; <label>:3                                       ; preds = %.preheader
  %tmp_75_cast = zext i2 %n to i9
  %tmp_139 = add i9 %tmp_135, %tmp_75_cast
  %tmp_184_cast = zext i9 %tmp_139 to i64
  %weight_addr = getelementptr [216 x float]* %weight, i64 0, i64 %tmp_184_cast
  %weight_load = load float* %weight_addr, align 4
  %tmp2 = add i2 %n, -1
  %tmp2_cast = sext i2 %tmp2 to i5
  %tmp_76 = add i5 %w3, %tmp2_cast
  %tmp_77_cast = zext i5 %tmp_76 to i14
  %tmp_140 = add i14 %tmp_138, %tmp_77_cast
  %tmp_185_cast = zext i14 %tmp_140 to i64
  %input_addr = getelementptr [7776 x float]* %input_r, i64 0, i64 %tmp_185_cast
  %input_load = load float* %input_addr, align 4
  %tmp_78 = fmul float %weight_load, %input_load
  %sum_7 = fadd float %sum_1, %tmp_78
  br label %.preheader

; <label>:4                                       ; preds = %.preheader8
  %tmp_70_cast = zext i5 %w3 to i14
  %tmp_133 = add i14 %tmp_131, %tmp_70_cast
  %tmp_176_cast = zext i14 %tmp_133 to i64
  %output_addr_6 = getelementptr [7776 x float]* %output_r, i64 0, i64 %tmp_176_cast
  %output_load = load float* %output_addr_6, align 4
  %tmp_71 = fadd float %output_load, %sum
  store float %tmp_71, float* %output_addr_6, align 4
  %w_12 = add i5 %w3, 1
  br label %.preheader9

; <label>:5                                       ; preds = %.preheader9
  %h_12 = add i5 %h2, 1
  br label %.preheader10

; <label>:6                                       ; preds = %.preheader11
  ret void
}

define internal fastcc void @subconv_1x1_8p_p([9216 x float]* nocapture %weight, [96 x float]* nocapture %bias) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader17
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_13, %.loopexit.loopexit ]
  %exitcond9 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_13 = add i7 %co, 1
  br i1 %exitcond9, label %.preheader15.preheader, label %.preheader17.preheader

.preheader15.preheader:                           ; preds = %.loopexit
  br label %.preheader15

.preheader17.preheader:                           ; preds = %.loopexit
  %tmp = zext i7 %co to i64
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0)
  %p_shl_cast = zext i10 %tmp_s to i11
  %tmp_141 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co, i1 false)
  %p_shl1_cast = zext i8 %tmp_141 to i11
  %tmp_142 = add i11 %p_shl1_cast, %p_shl_cast
  %bias_addr = getelementptr [96 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader17

.preheader17:                                     ; preds = %2, %.preheader17.preheader
  %h = phi i4 [ %h_13, %2 ], [ 1, %.preheader17.preheader ]
  %exitcond8 = icmp eq i4 %h, -7
  %empty_54 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond8, label %.loopexit.loopexit, label %.preheader16.preheader

.preheader16.preheader:                           ; preds = %.preheader17
  %tmp_cast = zext i4 %h to i11
  %tmp_149 = add i11 %tmp_cast, %tmp_142
  %tmp_138 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_149, i3 0)
  %p_shl2_cast = zext i14 %tmp_138 to i15
  %tmp_139 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_149, i1 false)
  %p_shl3_cast = zext i12 %tmp_139 to i15
  %tmp_150 = add i15 %p_shl2_cast, %p_shl3_cast
  br label %.preheader16

.preheader16:                                     ; preds = %1, %.preheader16.preheader
  %w = phi i4 [ %w_13, %1 ], [ 1, %.preheader16.preheader ]
  %exitcond7 = icmp eq i4 %w, -7
  %empty_55 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond7, label %2, label %1

; <label>:1                                       ; preds = %.preheader16
  %bias_load = load float* %bias_addr, align 4
  %tmp_80_cast = zext i4 %w to i15
  %tmp_157 = add i15 %tmp_150, %tmp_80_cast
  %tmp_206_cast = zext i15 %tmp_157 to i64
  %ShuffleConvs_2_Downs = getelementptr [9600 x float]* @ShuffleConvs_2_Downs, i64 0, i64 %tmp_206_cast
  store float %bias_load, float* %ShuffleConvs_2_Downs, align 4
  %w_13 = add i4 %w, 1
  br label %.preheader16

; <label>:2                                       ; preds = %.preheader16
  %h_13 = add i4 %h, 1
  br label %.preheader17

.preheader15.loopexit:                            ; preds = %.preheader14
  br label %.preheader15

.preheader15:                                     ; preds = %.preheader15.preheader, %.preheader15.loopexit
  %co1 = phi i7 [ %co_14, %.preheader15.loopexit ], [ 0, %.preheader15.preheader ]
  %exitcond6 = icmp eq i7 %co1, -32
  %empty_56 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_14 = add i7 %co1, 1
  br i1 %exitcond6, label %.preheader11.preheader, label %.preheader14.preheader

.preheader11.preheader:                           ; preds = %.preheader15
  br label %.preheader11

.preheader14.preheader:                           ; preds = %.preheader15
  %tmp_143 = call i14 @_ssdm_op_BitConcatenate.i14.i7.i7(i7 %co1, i7 0)
  %p_shl6_cast = zext i14 %tmp_143 to i15
  %tmp_144 = call i12 @_ssdm_op_BitConcatenate.i12.i7.i5(i7 %co1, i5 0)
  %p_shl7_cast = zext i12 %tmp_144 to i15
  %tmp_145 = sub i15 %p_shl6_cast, %p_shl7_cast
  %tmp_146 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co1, i3 0)
  %p_shl4_cast = zext i10 %tmp_146 to i11
  %tmp_147 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co1, i1 false)
  %p_shl5_cast = zext i8 %tmp_147 to i11
  %tmp_148 = add i11 %p_shl5_cast, %p_shl4_cast
  br label %.preheader14

.preheader14:                                     ; preds = %5, %.preheader14.preheader
  %h2 = phi i4 [ %h_14, %5 ], [ 1, %.preheader14.preheader ]
  %exitcond5 = icmp eq i4 %h2, -7
  %empty_57 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond5, label %.preheader15.loopexit, label %.preheader13.preheader

.preheader13.preheader:                           ; preds = %.preheader14
  %tmp_79_cast = zext i4 %h2 to i11
  %tmp_154 = add i11 %tmp_79_cast, %tmp_148
  %tmp_140 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_154, i3 0)
  %p_shl8_cast = zext i14 %tmp_140 to i15
  %tmp_155 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_154, i1 false)
  %p_shl9_cast = zext i12 %tmp_155 to i15
  %tmp_156 = add i15 %p_shl8_cast, %p_shl9_cast
  br label %.preheader13

.preheader13:                                     ; preds = %4, %.preheader13.preheader
  %w3 = phi i4 [ %w_14, %4 ], [ 1, %.preheader13.preheader ]
  %exitcond4 = icmp eq i4 %w3, -7
  %empty_58 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond4, label %5, label %.preheader12.preheader

.preheader12.preheader:                           ; preds = %.preheader13
  %tmp_82_cast = zext i4 %w3 to i15
  %tmp_162 = add i15 %tmp_156, %tmp_82_cast
  %tmp_211_cast = zext i15 %tmp_162 to i64
  %ShuffleConvs_2_Downs_2 = getelementptr [9600 x float]* @ShuffleConvs_2_Downs, i64 0, i64 %tmp_211_cast
  br label %.preheader12

.preheader12:                                     ; preds = %3, %.preheader12.preheader
  %sum = phi float [ %sum_8, %3 ], [ 0.000000e+00, %.preheader12.preheader ]
  %ci = phi i7 [ %ci_1, %3 ], [ 0, %.preheader12.preheader ]
  %exitcond3 = icmp eq i7 %ci, -32
  %empty_59 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %ci_1 = add i7 %ci, 1
  br i1 %exitcond3, label %4, label %3

; <label>:3                                       ; preds = %.preheader12
  %tmp_85_cast = zext i7 %ci to i15
  %tmp_165 = add i15 %tmp_85_cast, %tmp_145
  %tmp_213_cast = sext i15 %tmp_165 to i64
  %weight_addr = getelementptr [9216 x float]* %weight, i64 0, i64 %tmp_213_cast
  %tmp_166 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %ci, i3 0)
  %p_shl12_cast = zext i10 %tmp_166 to i11
  %tmp_167 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %ci, i1 false)
  %p_shl13_cast = zext i8 %tmp_167 to i11
  %tmp_168 = add i11 %p_shl12_cast, %p_shl13_cast
  %tmp_169 = add i11 %tmp_79_cast, %tmp_168
  %tmp_170 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_169, i3 0)
  %p_shl10_cast = zext i14 %tmp_170 to i15
  %tmp_171 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_169, i1 false)
  %p_shl11_cast = zext i12 %tmp_171 to i15
  %tmp_172 = add i15 %p_shl10_cast, %p_shl11_cast
  %tmp_173 = add i15 %tmp_82_cast, %tmp_172
  %tmp_221_cast = zext i15 %tmp_173 to i64
  %shuffleunit1_7_outpu = getelementptr [9600 x float]* @shuffleunit1_7_outpu, i64 0, i64 %tmp_221_cast
  %weight_load = load float* %weight_addr, align 4
  %shuffleunit1_7_outpu_1 = load float* %shuffleunit1_7_outpu, align 4
  %tmp_86 = fmul float %weight_load, %shuffleunit1_7_outpu_1
  %sum_8 = fadd float %sum, %tmp_86
  br label %.preheader12

; <label>:4                                       ; preds = %.preheader12
  %ShuffleConvs_2_Downs_3 = load float* %ShuffleConvs_2_Downs_2, align 4
  %tmp_84 = fadd float %ShuffleConvs_2_Downs_3, %sum
  store float %tmp_84, float* %ShuffleConvs_2_Downs_2, align 4
  %w_14 = add i4 %w3, 1
  br label %.preheader13

; <label>:5                                       ; preds = %.preheader13
  %h_14 = add i4 %h2, 1
  br label %.preheader14

.preheader11.loopexit:                            ; preds = %.preheader10
  br label %.preheader11

.preheader11:                                     ; preds = %.preheader11.preheader, %.preheader11.loopexit
  %co4 = phi i7 [ %co_15, %.preheader11.loopexit ], [ 0, %.preheader11.preheader ]
  %exitcond2 = icmp eq i7 %co4, -32
  %empty_60 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_15 = add i7 %co4, 1
  br i1 %exitcond2, label %9, label %.preheader10.preheader

.preheader10.preheader:                           ; preds = %.preheader11
  %tmp_151 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co4, i3 0)
  %p_shl14_cast = zext i10 %tmp_151 to i11
  %tmp_152 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co4, i1 false)
  %p_shl15_cast = zext i8 %tmp_152 to i11
  %tmp_153 = add i11 %p_shl15_cast, %p_shl14_cast
  br label %.preheader10

.preheader10:                                     ; preds = %8, %.preheader10.preheader
  %h5 = phi i4 [ %h_15, %8 ], [ 1, %.preheader10.preheader ]
  %exitcond1 = icmp eq i4 %h5, -7
  %empty_61 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond1, label %.preheader11.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader10
  %tmp_81_cast = zext i4 %h5 to i11
  %tmp_158 = add i11 %tmp_81_cast, %tmp_153
  %tmp_159 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_158, i3 0)
  %p_shl16_cast = zext i14 %tmp_159 to i15
  %tmp_160 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_158, i1 false)
  %p_shl17_cast = zext i12 %tmp_160 to i15
  %tmp_161 = add i15 %p_shl16_cast, %p_shl17_cast
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w6 = phi i4 [ %w_15, %._crit_edge ], [ 1, %.preheader.preheader ]
  %exitcond = icmp eq i4 %w6, -7
  %empty_62 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond, label %8, label %6

; <label>:6                                       ; preds = %.preheader
  %tmp_83_cast = zext i4 %w6 to i15
  %tmp_163 = add i15 %tmp_161, %tmp_83_cast
  %tmp_212_cast = zext i15 %tmp_163 to i64
  %ShuffleConvs_2_Downs_4 = getelementptr [9600 x float]* @ShuffleConvs_2_Downs, i64 0, i64 %tmp_212_cast
  %ShuffleConvs_2_Downs_5 = load float* %ShuffleConvs_2_Downs_4, align 4
  %ShuffleConvs_2_Downs_7 = bitcast float %ShuffleConvs_2_Downs_5 to i32
  %tmp_1 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %ShuffleConvs_2_Downs_7, i32 23, i32 30)
  %tmp_164 = trunc i32 %ShuffleConvs_2_Downs_7 to i23
  %notlhs = icmp ne i8 %tmp_1, -1
  %notrhs = icmp eq i23 %tmp_164, 0
  %tmp_3 = or i1 %notrhs, %notlhs
  %tmp_4 = fcmp olt float %ShuffleConvs_2_Downs_5, 0.000000e+00
  %tmp_5 = and i1 %tmp_3, %tmp_4
  br i1 %tmp_5, label %7, label %._crit_edge

; <label>:7                                       ; preds = %6
  store float 0.000000e+00, float* %ShuffleConvs_2_Downs_4, align 4
  br label %._crit_edge

._crit_edge:                                      ; preds = %7, %6
  %w_15 = add i4 %w6, 1
  br label %.preheader

; <label>:8                                       ; preds = %.preheader
  %h_15 = add i4 %h5, 1
  br label %.preheader10

; <label>:9                                       ; preds = %.preheader11
  ret void
}

define internal fastcc void @subconv_1x1_8_p([4800 x float]* nocapture %input_r, [2304 x float]* nocapture %weight, [48 x float]* nocapture %bias, [4800 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader17
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_16, %.loopexit.loopexit ]
  %exitcond9 = icmp eq i6 %co, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_16 = add i6 %co, 1
  br i1 %exitcond9, label %.preheader15.preheader, label %.preheader17.preheader

.preheader15.preheader:                           ; preds = %.loopexit
  br label %.preheader15

.preheader17.preheader:                           ; preds = %.loopexit
  %tmp = zext i6 %co to i64
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co, i3 0)
  %p_shl_cast = zext i9 %tmp_s to i10
  %tmp_174 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co, i1 false)
  %p_shl1_cast = zext i7 %tmp_174 to i10
  %tmp_175 = add i10 %p_shl1_cast, %p_shl_cast
  %bias_addr = getelementptr [48 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader17

.preheader17:                                     ; preds = %2, %.preheader17.preheader
  %h = phi i4 [ %h_16, %2 ], [ 1, %.preheader17.preheader ]
  %exitcond8 = icmp eq i4 %h, -7
  %empty_63 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond8, label %.loopexit.loopexit, label %.preheader16.preheader

.preheader16.preheader:                           ; preds = %.preheader17
  %tmp_cast = zext i4 %h to i10
  %tmp_182 = add i10 %tmp_cast, %tmp_175
  %tmp_172 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_182, i3 0)
  %p_shl2_cast = zext i13 %tmp_172 to i14
  %tmp_173 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_182, i1 false)
  %p_shl3_cast = zext i11 %tmp_173 to i14
  %tmp_183 = add i14 %p_shl2_cast, %p_shl3_cast
  br label %.preheader16

.preheader16:                                     ; preds = %1, %.preheader16.preheader
  %w = phi i4 [ %w_16, %1 ], [ 1, %.preheader16.preheader ]
  %exitcond7 = icmp eq i4 %w, -7
  %empty_64 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond7, label %2, label %1

; <label>:1                                       ; preds = %.preheader16
  %bias_load = load float* %bias_addr, align 4
  %tmp_88_cast = zext i4 %w to i14
  %tmp_191 = add i14 %tmp_183, %tmp_88_cast
  %tmp_242_cast = zext i14 %tmp_191 to i64
  %output_addr = getelementptr [4800 x float]* %output_r, i64 0, i64 %tmp_242_cast
  store float %bias_load, float* %output_addr, align 4
  %w_16 = add i4 %w, 1
  br label %.preheader16

; <label>:2                                       ; preds = %.preheader16
  %h_16 = add i4 %h, 1
  br label %.preheader17

.preheader15.loopexit:                            ; preds = %.preheader14
  br label %.preheader15

.preheader15:                                     ; preds = %.preheader15.preheader, %.preheader15.loopexit
  %co1 = phi i6 [ %co_17, %.preheader15.loopexit ], [ 0, %.preheader15.preheader ]
  %exitcond6 = icmp eq i6 %co1, -16
  %empty_65 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_17 = add i6 %co1, 1
  br i1 %exitcond6, label %.preheader11.preheader, label %.preheader14.preheader

.preheader11.preheader:                           ; preds = %.preheader15
  br label %.preheader11

.preheader14.preheader:                           ; preds = %.preheader15
  %tmp_176 = call i12 @_ssdm_op_BitConcatenate.i12.i6.i6(i6 %co1, i6 0)
  %p_shl6_cast = zext i12 %tmp_176 to i13
  %tmp_177 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co1, i4 0)
  %p_shl7_cast = zext i10 %tmp_177 to i13
  %tmp_178 = sub i13 %p_shl6_cast, %p_shl7_cast
  %tmp_179 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co1, i3 0)
  %p_shl4_cast = zext i9 %tmp_179 to i10
  %tmp_180 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co1, i1 false)
  %p_shl5_cast = zext i7 %tmp_180 to i10
  %tmp_181 = add i10 %p_shl5_cast, %p_shl4_cast
  br label %.preheader14

.preheader14:                                     ; preds = %5, %.preheader14.preheader
  %h2 = phi i4 [ %h_17, %5 ], [ 1, %.preheader14.preheader ]
  %exitcond5 = icmp eq i4 %h2, -7
  %empty_66 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond5, label %.preheader15.loopexit, label %.preheader13.preheader

.preheader13.preheader:                           ; preds = %.preheader14
  %tmp_87_cast = zext i4 %h2 to i10
  %tmp_187 = add i10 %tmp_87_cast, %tmp_181
  %tmp_188 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_187, i3 0)
  %p_shl8_cast = zext i13 %tmp_188 to i14
  %tmp_189 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_187, i1 false)
  %p_shl9_cast = zext i11 %tmp_189 to i14
  %tmp_190 = add i14 %p_shl8_cast, %p_shl9_cast
  br label %.preheader13

.preheader13:                                     ; preds = %4, %.preheader13.preheader
  %w3 = phi i4 [ %w_17, %4 ], [ 1, %.preheader13.preheader ]
  %exitcond4 = icmp eq i4 %w3, -7
  %empty_67 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond4, label %5, label %.preheader12.preheader

.preheader12.preheader:                           ; preds = %.preheader13
  %tmp_90_cast = zext i4 %w3 to i14
  %tmp_196 = add i14 %tmp_190, %tmp_90_cast
  %tmp_247_cast = zext i14 %tmp_196 to i64
  %output_addr_8 = getelementptr [4800 x float]* %output_r, i64 0, i64 %tmp_247_cast
  br label %.preheader12

.preheader12:                                     ; preds = %3, %.preheader12.preheader
  %sum = phi float [ %sum_9, %3 ], [ 0.000000e+00, %.preheader12.preheader ]
  %ci = phi i6 [ %ci_2, %3 ], [ 0, %.preheader12.preheader ]
  %exitcond3 = icmp eq i6 %ci, -16
  %empty_68 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %ci_2 = add i6 %ci, 1
  br i1 %exitcond3, label %4, label %3

; <label>:3                                       ; preds = %.preheader12
  %tmp_93_cast = zext i6 %ci to i13
  %tmp_199 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %ci, i3 0)
  %p_shl12_cast = zext i9 %tmp_199 to i10
  %tmp_200 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %ci, i1 false)
  %p_shl13_cast = zext i7 %tmp_200 to i10
  %tmp_201 = add i10 %p_shl12_cast, %p_shl13_cast
  %tmp_202 = add i10 %tmp_87_cast, %tmp_201
  %tmp_203 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_202, i3 0)
  %p_shl10_cast = zext i13 %tmp_203 to i14
  %tmp_204 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_202, i1 false)
  %p_shl11_cast = zext i11 %tmp_204 to i14
  %tmp_205 = add i14 %p_shl10_cast, %p_shl11_cast
  %tmp_206 = add i14 %tmp_90_cast, %tmp_205
  %tmp_256_cast = zext i14 %tmp_206 to i64
  %input_addr = getelementptr [4800 x float]* %input_r, i64 0, i64 %tmp_256_cast
  %tmp_207 = add i13 %tmp_93_cast, %tmp_178
  %tmp_257_cast = sext i13 %tmp_207 to i64
  %weight_addr = getelementptr [2304 x float]* %weight, i64 0, i64 %tmp_257_cast
  %weight_load = load float* %weight_addr, align 4
  %input_load = load float* %input_addr, align 4
  %tmp_94 = fmul float %weight_load, %input_load
  %sum_9 = fadd float %sum, %tmp_94
  br label %.preheader12

; <label>:4                                       ; preds = %.preheader12
  %output_load_1 = load float* %output_addr_8, align 4
  %tmp_92 = fadd float %output_load_1, %sum
  store float %tmp_92, float* %output_addr_8, align 4
  %w_17 = add i4 %w3, 1
  br label %.preheader13

; <label>:5                                       ; preds = %.preheader13
  %h_17 = add i4 %h2, 1
  br label %.preheader14

.preheader11.loopexit:                            ; preds = %.preheader10
  br label %.preheader11

.preheader11:                                     ; preds = %.preheader11.preheader, %.preheader11.loopexit
  %co4 = phi i6 [ %co_18, %.preheader11.loopexit ], [ 0, %.preheader11.preheader ]
  %exitcond2 = icmp eq i6 %co4, -16
  %empty_69 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_18 = add i6 %co4, 1
  br i1 %exitcond2, label %9, label %.preheader10.preheader

.preheader10.preheader:                           ; preds = %.preheader11
  %tmp_184 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co4, i3 0)
  %p_shl14_cast = zext i9 %tmp_184 to i10
  %tmp_185 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co4, i1 false)
  %p_shl15_cast = zext i7 %tmp_185 to i10
  %tmp_186 = add i10 %p_shl15_cast, %p_shl14_cast
  br label %.preheader10

.preheader10:                                     ; preds = %8, %.preheader10.preheader
  %h5 = phi i4 [ %h_18, %8 ], [ 1, %.preheader10.preheader ]
  %exitcond1 = icmp eq i4 %h5, -7
  %empty_70 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond1, label %.preheader11.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader10
  %tmp_89_cast = zext i4 %h5 to i10
  %tmp_192 = add i10 %tmp_89_cast, %tmp_186
  %tmp_193 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_192, i3 0)
  %p_shl16_cast = zext i13 %tmp_193 to i14
  %tmp_194 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_192, i1 false)
  %p_shl17_cast = zext i11 %tmp_194 to i14
  %tmp_195 = add i14 %p_shl16_cast, %p_shl17_cast
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w6 = phi i4 [ %w_18, %._crit_edge ], [ 1, %.preheader.preheader ]
  %exitcond = icmp eq i4 %w6, -7
  %empty_71 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  br i1 %exitcond, label %8, label %6

; <label>:6                                       ; preds = %.preheader
  %tmp_91_cast = zext i4 %w6 to i14
  %tmp_197 = add i14 %tmp_195, %tmp_91_cast
  %tmp_248_cast = zext i14 %tmp_197 to i64
  %output_addr_7 = getelementptr [4800 x float]* %output_r, i64 0, i64 %tmp_248_cast
  %output_load = load float* %output_addr_7, align 4
  %output_load_to_int = bitcast float %output_load to i32
  %tmp_6 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %output_load_to_int, i32 23, i32 30)
  %tmp_198 = trunc i32 %output_load_to_int to i23
  %notlhs = icmp ne i8 %tmp_6, -1
  %notrhs = icmp eq i23 %tmp_198, 0
  %tmp_8 = or i1 %notrhs, %notlhs
  %tmp_9 = fcmp olt float %output_load, 0.000000e+00
  %tmp_10 = and i1 %tmp_8, %tmp_9
  br i1 %tmp_10, label %7, label %._crit_edge

; <label>:7                                       ; preds = %6
  store float 0.000000e+00, float* %output_addr_7, align 4
  br label %._crit_edge

._crit_edge:                                      ; preds = %7, %6
  %w_18 = add i4 %w6, 1
  br label %.preheader

; <label>:8                                       ; preds = %.preheader
  %h_18 = add i4 %h5, 1
  br label %.preheader10

; <label>:9                                       ; preds = %.preheader11
  ret void
}

define internal fastcc void @subconv_1x1_4_p([3456 x float]* nocapture %input_r, [9216 x float]* nocapture %weight, [96 x float]* nocapture %bias, [3456 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader17
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_19, %.loopexit.loopexit ]
  %exitcond9 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_19 = add i7 %co, 1
  br i1 %exitcond9, label %.preheader15.preheader, label %.preheader17.preheader

.preheader15.preheader:                           ; preds = %.loopexit
  br label %.preheader15

.preheader17.preheader:                           ; preds = %.loopexit
  %tmp = zext i7 %co to i64
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0)
  %p_shl_cast = zext i10 %tmp_s to i11
  %tmp_208 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co, i1 false)
  %p_shl1_cast = zext i8 %tmp_208 to i11
  %tmp_209 = sub i11 %p_shl_cast, %p_shl1_cast
  %tmp_260_cast = sext i11 %tmp_209 to i12
  %bias_addr = getelementptr [96 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader17

.preheader17:                                     ; preds = %2, %.preheader17.preheader
  %h = phi i3 [ %h_19, %2 ], [ 1, %.preheader17.preheader ]
  %exitcond8 = icmp eq i3 %h, -3
  %empty_72 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %exitcond8, label %.loopexit.loopexit, label %.preheader16.preheader

.preheader16.preheader:                           ; preds = %.preheader17
  %tmp_cast = zext i3 %h to i12
  %tmp_216 = add i12 %tmp_cast, %tmp_260_cast
  %tmp_205 = trunc i12 %tmp_216 to i10
  %p_shl2_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_205, i3 0)
  %p_shl3_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_216, i1 false)
  %tmp_217 = sub i13 %p_shl2_cast, %p_shl3_cast
  br label %.preheader16

.preheader16:                                     ; preds = %1, %.preheader16.preheader
  %w = phi i3 [ %w_19, %1 ], [ 1, %.preheader16.preheader ]
  %exitcond7 = icmp eq i3 %w, -3
  %empty_73 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %exitcond7, label %2, label %1

; <label>:1                                       ; preds = %.preheader16
  %bias_load = load float* %bias_addr, align 4
  %tmp_96_cast = zext i3 %w to i13
  %tmp_223 = add i13 %tmp_217, %tmp_96_cast
  %tmp_278_cast = zext i13 %tmp_223 to i64
  %output_addr = getelementptr [3456 x float]* %output_r, i64 0, i64 %tmp_278_cast
  store float %bias_load, float* %output_addr, align 4
  %w_19 = add i3 %w, 1
  br label %.preheader16

; <label>:2                                       ; preds = %.preheader16
  %h_19 = add i3 %h, 1
  br label %.preheader17

.preheader15.loopexit:                            ; preds = %.preheader14
  br label %.preheader15

.preheader15:                                     ; preds = %.preheader15.preheader, %.preheader15.loopexit
  %co1 = phi i7 [ %co_20, %.preheader15.loopexit ], [ 0, %.preheader15.preheader ]
  %exitcond6 = icmp eq i7 %co1, -32
  %empty_74 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_20 = add i7 %co1, 1
  br i1 %exitcond6, label %.preheader11.preheader, label %.preheader14.preheader

.preheader11.preheader:                           ; preds = %.preheader15
  br label %.preheader11

.preheader14.preheader:                           ; preds = %.preheader15
  %tmp_210 = call i14 @_ssdm_op_BitConcatenate.i14.i7.i7(i7 %co1, i7 0)
  %p_shl6_cast = zext i14 %tmp_210 to i15
  %tmp_211 = call i12 @_ssdm_op_BitConcatenate.i12.i7.i5(i7 %co1, i5 0)
  %p_shl7_cast = zext i12 %tmp_211 to i15
  %tmp_212 = sub i15 %p_shl6_cast, %p_shl7_cast
  %tmp_213 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co1, i3 0)
  %p_shl4_cast = zext i10 %tmp_213 to i11
  %tmp_214 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co1, i1 false)
  %p_shl5_cast = zext i8 %tmp_214 to i11
  %tmp_215 = sub i11 %p_shl4_cast, %p_shl5_cast
  %tmp_266_cast = sext i11 %tmp_215 to i12
  br label %.preheader14

.preheader14:                                     ; preds = %5, %.preheader14.preheader
  %h2 = phi i3 [ %h_20, %5 ], [ 1, %.preheader14.preheader ]
  %exitcond5 = icmp eq i3 %h2, -3
  %empty_75 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %exitcond5, label %.preheader15.loopexit, label %.preheader13.preheader

.preheader13.preheader:                           ; preds = %.preheader14
  %tmp_95_cast = zext i3 %h2 to i12
  %tmp_221 = add i12 %tmp_95_cast, %tmp_266_cast
  %tmp_206 = trunc i12 %tmp_221 to i10
  %p_shl8_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_206, i3 0)
  %p_shl9_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_221, i1 false)
  %tmp_222 = sub i13 %p_shl8_cast, %p_shl9_cast
  br label %.preheader13

.preheader13:                                     ; preds = %4, %.preheader13.preheader
  %w3 = phi i3 [ %w_20, %4 ], [ 1, %.preheader13.preheader ]
  %exitcond4 = icmp eq i3 %w3, -3
  %empty_76 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %exitcond4, label %5, label %.preheader12.preheader

.preheader12.preheader:                           ; preds = %.preheader13
  %tmp_98_cast = zext i3 %w3 to i13
  %tmp_226 = add i13 %tmp_222, %tmp_98_cast
  %tmp_283_cast = zext i13 %tmp_226 to i64
  %output_addr_10 = getelementptr [3456 x float]* %output_r, i64 0, i64 %tmp_283_cast
  br label %.preheader12

.preheader12:                                     ; preds = %3, %.preheader12.preheader
  %sum = phi float [ %sum_10, %3 ], [ 0.000000e+00, %.preheader12.preheader ]
  %ci = phi i7 [ %ci_3, %3 ], [ 0, %.preheader12.preheader ]
  %exitcond3 = icmp eq i7 %ci, -32
  %empty_77 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %ci_3 = add i7 %ci, 1
  br i1 %exitcond3, label %4, label %3

; <label>:3                                       ; preds = %.preheader12
  %tmp_101_cast = zext i7 %ci to i15
  %tmp_229 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %ci, i3 0)
  %p_shl12_cast = zext i10 %tmp_229 to i11
  %tmp_230 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %ci, i1 false)
  %p_shl13_cast = zext i8 %tmp_230 to i11
  %tmp_231 = sub i11 %p_shl12_cast, %p_shl13_cast
  %tmp_287_cast = sext i11 %tmp_231 to i12
  %tmp_232 = add i12 %tmp_95_cast, %tmp_287_cast
  %tmp_233 = trunc i12 %tmp_232 to i10
  %p_shl10_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_233, i3 0)
  %p_shl11_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_232, i1 false)
  %tmp_234 = sub i13 %p_shl10_cast, %p_shl11_cast
  %tmp_235 = add i13 %tmp_98_cast, %tmp_234
  %tmp_292_cast = zext i13 %tmp_235 to i64
  %input_addr = getelementptr [3456 x float]* %input_r, i64 0, i64 %tmp_292_cast
  %tmp_236 = add i15 %tmp_101_cast, %tmp_212
  %tmp_293_cast = sext i15 %tmp_236 to i64
  %weight_addr = getelementptr [9216 x float]* %weight, i64 0, i64 %tmp_293_cast
  %weight_load = load float* %weight_addr, align 4
  %input_load = load float* %input_addr, align 4
  %tmp_102 = fmul float %weight_load, %input_load
  %sum_10 = fadd float %sum, %tmp_102
  br label %.preheader12

; <label>:4                                       ; preds = %.preheader12
  %output_load_2 = load float* %output_addr_10, align 4
  %tmp_100 = fadd float %output_load_2, %sum
  store float %tmp_100, float* %output_addr_10, align 4
  %w_20 = add i3 %w3, 1
  br label %.preheader13

; <label>:5                                       ; preds = %.preheader13
  %h_20 = add i3 %h2, 1
  br label %.preheader14

.preheader11.loopexit:                            ; preds = %.preheader10
  br label %.preheader11

.preheader11:                                     ; preds = %.preheader11.preheader, %.preheader11.loopexit
  %co4 = phi i7 [ %co_21, %.preheader11.loopexit ], [ 0, %.preheader11.preheader ]
  %exitcond2 = icmp eq i7 %co4, -32
  %empty_78 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_21 = add i7 %co4, 1
  br i1 %exitcond2, label %9, label %.preheader10.preheader

.preheader10.preheader:                           ; preds = %.preheader11
  %tmp_218 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co4, i3 0)
  %p_shl14_cast = zext i10 %tmp_218 to i11
  %tmp_219 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co4, i1 false)
  %p_shl15_cast = zext i8 %tmp_219 to i11
  %tmp_220 = sub i11 %p_shl14_cast, %p_shl15_cast
  %tmp_273_cast = sext i11 %tmp_220 to i12
  br label %.preheader10

.preheader10:                                     ; preds = %8, %.preheader10.preheader
  %h5 = phi i3 [ %h_21, %8 ], [ 1, %.preheader10.preheader ]
  %exitcond1 = icmp eq i3 %h5, -3
  %empty_79 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %exitcond1, label %.preheader11.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader10
  %tmp_97_cast = zext i3 %h5 to i12
  %tmp_224 = add i12 %tmp_97_cast, %tmp_273_cast
  %tmp_207 = trunc i12 %tmp_224 to i10
  %p_shl16_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_207, i3 0)
  %p_shl17_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_224, i1 false)
  %tmp_225 = sub i13 %p_shl16_cast, %p_shl17_cast
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w6 = phi i3 [ %w_21, %._crit_edge ], [ 1, %.preheader.preheader ]
  %exitcond = icmp eq i3 %w6, -3
  %empty_80 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %exitcond, label %8, label %6

; <label>:6                                       ; preds = %.preheader
  %tmp_99_cast = zext i3 %w6 to i13
  %tmp_227 = add i13 %tmp_225, %tmp_99_cast
  %tmp_284_cast = zext i13 %tmp_227 to i64
  %output_addr_9 = getelementptr [3456 x float]* %output_r, i64 0, i64 %tmp_284_cast
  %output_load = load float* %output_addr_9, align 4
  %output_load_to_int = bitcast float %output_load to i32
  %tmp_11 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %output_load_to_int, i32 23, i32 30)
  %tmp_228 = trunc i32 %output_load_to_int to i23
  %notlhs = icmp ne i8 %tmp_11, -1
  %notrhs = icmp eq i23 %tmp_228, 0
  %tmp_13 = or i1 %notrhs, %notlhs
  %tmp_14 = fcmp olt float %output_load, 0.000000e+00
  %tmp_15 = and i1 %tmp_13, %tmp_14
  br i1 %tmp_15, label %7, label %._crit_edge

; <label>:7                                       ; preds = %6
  store float 0.000000e+00, float* %output_addr_9, align 4
  br label %._crit_edge

._crit_edge:                                      ; preds = %7, %6
  %w_21 = add i3 %w6, 1
  br label %.preheader

; <label>:8                                       ; preds = %.preheader
  %h_21 = add i3 %h5, 1
  br label %.preheader10

; <label>:9                                       ; preds = %.preheader11
  ret void
}

define internal fastcc void @subconv_1x1_32_p([576 x float]* nocapture %weight, [24 x float]* nocapture %bias) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader17
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i5 [ 0, %0 ], [ %co_22, %.loopexit.loopexit ]
  %exitcond9 = icmp eq i5 %co, -8
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_22 = add i5 %co, 1
  br i1 %exitcond9, label %.preheader15.preheader, label %.preheader17.preheader

.preheader15.preheader:                           ; preds = %.loopexit
  br label %.preheader15

.preheader17.preheader:                           ; preds = %.loopexit
  %tmp = zext i5 %co to i64
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co, i5 0)
  %p_shl_cast = zext i10 %tmp_s to i11
  %tmp_237 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co, i1 false)
  %p_shl1_cast = zext i6 %tmp_237 to i11
  %tmp_238 = add i11 %p_shl1_cast, %p_shl_cast
  %bias_addr = getelementptr [24 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader17

.preheader17:                                     ; preds = %2, %.preheader17.preheader
  %h = phi i6 [ %h_22, %2 ], [ 1, %.preheader17.preheader ]
  %exitcond8 = icmp eq i6 %h, -31
  %empty_81 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  br i1 %exitcond8, label %.loopexit.loopexit, label %.preheader16.preheader

.preheader16.preheader:                           ; preds = %.preheader17
  %tmp_cast = zext i6 %h to i11
  %tmp_244 = add i11 %tmp_cast, %tmp_238
  %p_shl2_cast = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_244, i5 0)
  %tmp_234 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_244, i1 false)
  %p_shl3_cast = zext i12 %tmp_234 to i16
  %tmp_245 = add i16 %p_shl2_cast, %p_shl3_cast
  br label %.preheader16

.preheader16:                                     ; preds = %1, %.preheader16.preheader
  %w = phi i6 [ %w_22, %1 ], [ 1, %.preheader16.preheader ]
  %exitcond7 = icmp eq i6 %w, -31
  %empty_82 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  br i1 %exitcond7, label %2, label %1

; <label>:1                                       ; preds = %.preheader16
  %bias_load = load float* %bias_addr, align 4
  %tmp_104_cast = zext i6 %w to i16
  %tmp_251 = add i16 %tmp_245, %tmp_104_cast
  %tmp_314_cast = zext i16 %tmp_251 to i64
  %ShuffleConvs_0_Downs = getelementptr [27744 x float]* @ShuffleConvs_0_Downs, i64 0, i64 %tmp_314_cast
  store float %bias_load, float* %ShuffleConvs_0_Downs, align 4
  %w_22 = add i6 %w, 1
  br label %.preheader16

; <label>:2                                       ; preds = %.preheader16
  %h_22 = add i6 %h, 1
  br label %.preheader17

.preheader15.loopexit:                            ; preds = %.preheader14
  br label %.preheader15

.preheader15:                                     ; preds = %.preheader15.preheader, %.preheader15.loopexit
  %co1 = phi i5 [ %co_23, %.preheader15.loopexit ], [ 0, %.preheader15.preheader ]
  %exitcond6 = icmp eq i5 %co1, -8
  %empty_83 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_23 = add i5 %co1, 1
  br i1 %exitcond6, label %.preheader11.preheader, label %.preheader14.preheader

.preheader11.preheader:                           ; preds = %.preheader15
  br label %.preheader11

.preheader14.preheader:                           ; preds = %.preheader15
  %tmp_239 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co1, i5 0)
  %p_shl6_cast = zext i10 %tmp_239 to i11
  %tmp_240 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co1, i3 0)
  %p_shl7_cast = zext i8 %tmp_240 to i11
  %tmp_241 = sub i11 %p_shl6_cast, %p_shl7_cast
  %tmp_242 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co1, i1 false)
  %p_shl5_cast = zext i6 %tmp_242 to i11
  %tmp_243 = add i11 %p_shl5_cast, %p_shl6_cast
  br label %.preheader14

.preheader14:                                     ; preds = %5, %.preheader14.preheader
  %h2 = phi i6 [ %h_23, %5 ], [ 1, %.preheader14.preheader ]
  %exitcond5 = icmp eq i6 %h2, -31
  %empty_84 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  br i1 %exitcond5, label %.preheader15.loopexit, label %.preheader13.preheader

.preheader13.preheader:                           ; preds = %.preheader14
  %tmp_103_cast = zext i6 %h2 to i11
  %tmp_249 = add i11 %tmp_103_cast, %tmp_243
  %p_shl8_cast = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_249, i5 0)
  %tmp_235 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_249, i1 false)
  %p_shl9_cast = zext i12 %tmp_235 to i16
  %tmp_250 = add i16 %p_shl8_cast, %p_shl9_cast
  br label %.preheader13

.preheader13:                                     ; preds = %4, %.preheader13.preheader
  %w3 = phi i6 [ %w_23, %4 ], [ 1, %.preheader13.preheader ]
  %exitcond4 = icmp eq i6 %w3, -31
  %empty_85 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  br i1 %exitcond4, label %5, label %.preheader12.preheader

.preheader12.preheader:                           ; preds = %.preheader13
  %tmp_106_cast = zext i6 %w3 to i16
  %tmp_254 = add i16 %tmp_250, %tmp_106_cast
  %tmp_319_cast = zext i16 %tmp_254 to i64
  %ShuffleConvs_0_Downs_2 = getelementptr [27744 x float]* @ShuffleConvs_0_Downs, i64 0, i64 %tmp_319_cast
  br label %.preheader12

.preheader12:                                     ; preds = %3, %.preheader12.preheader
  %sum = phi float [ %sum_11, %3 ], [ 0.000000e+00, %.preheader12.preheader ]
  %ci = phi i5 [ %ci_4, %3 ], [ 0, %.preheader12.preheader ]
  %exitcond3 = icmp eq i5 %ci, -8
  %empty_86 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_4 = add i5 %ci, 1
  br i1 %exitcond3, label %4, label %3

; <label>:3                                       ; preds = %.preheader12
  %tmp_109_cast = zext i5 %ci to i11
  %tmp_257 = add i11 %tmp_109_cast, %tmp_241
  %tmp_321_cast = sext i11 %tmp_257 to i64
  %weight_addr = getelementptr [576 x float]* %weight, i64 0, i64 %tmp_321_cast
  %tmp_258 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %ci, i5 0)
  %p_shl12_cast = zext i10 %tmp_258 to i11
  %tmp_259 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %ci, i1 false)
  %p_shl13_cast = zext i6 %tmp_259 to i11
  %tmp_260 = add i11 %p_shl12_cast, %p_shl13_cast
  %tmp_261 = add i11 %tmp_103_cast, %tmp_260
  %p_shl10_cast = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_261, i5 0)
  %tmp_262 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_261, i1 false)
  %p_shl11_cast = zext i12 %tmp_262 to i16
  %tmp_263 = add i16 %p_shl10_cast, %p_shl11_cast
  %tmp_264 = add i16 %tmp_106_cast, %tmp_263
  %tmp_329_cast = zext i16 %tmp_264 to i64
  %conv1_output_p_addr = getelementptr [27744 x float]* @conv1_output_p, i64 0, i64 %tmp_329_cast
  %weight_load = load float* %weight_addr, align 4
  %conv1_output_p_load = load float* %conv1_output_p_addr, align 4
  %tmp_110 = fmul float %weight_load, %conv1_output_p_load
  %sum_11 = fadd float %sum, %tmp_110
  br label %.preheader12

; <label>:4                                       ; preds = %.preheader12
  %ShuffleConvs_0_Downs_3 = load float* %ShuffleConvs_0_Downs_2, align 4
  %tmp_108 = fadd float %ShuffleConvs_0_Downs_3, %sum
  store float %tmp_108, float* %ShuffleConvs_0_Downs_2, align 4
  %w_23 = add i6 %w3, 1
  br label %.preheader13

; <label>:5                                       ; preds = %.preheader13
  %h_23 = add i6 %h2, 1
  br label %.preheader14

.preheader11.loopexit:                            ; preds = %.preheader10
  br label %.preheader11

.preheader11:                                     ; preds = %.preheader11.preheader, %.preheader11.loopexit
  %co4 = phi i5 [ %co_24, %.preheader11.loopexit ], [ 0, %.preheader11.preheader ]
  %exitcond2 = icmp eq i5 %co4, -8
  %empty_87 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_24 = add i5 %co4, 1
  br i1 %exitcond2, label %9, label %.preheader10.preheader

.preheader10.preheader:                           ; preds = %.preheader11
  %tmp_246 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co4, i5 0)
  %p_shl14_cast = zext i10 %tmp_246 to i11
  %tmp_247 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co4, i1 false)
  %p_shl15_cast = zext i6 %tmp_247 to i11
  %tmp_248 = add i11 %p_shl15_cast, %p_shl14_cast
  br label %.preheader10

.preheader10:                                     ; preds = %8, %.preheader10.preheader
  %h5 = phi i6 [ %h_24, %8 ], [ 1, %.preheader10.preheader ]
  %exitcond1 = icmp eq i6 %h5, -31
  %empty_88 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  br i1 %exitcond1, label %.preheader11.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader10
  %tmp_105_cast = zext i6 %h5 to i11
  %tmp_252 = add i11 %tmp_105_cast, %tmp_248
  %p_shl16_cast = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_252, i5 0)
  %tmp_236 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_252, i1 false)
  %p_shl17_cast = zext i12 %tmp_236 to i16
  %tmp_253 = add i16 %p_shl16_cast, %p_shl17_cast
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w6 = phi i6 [ %w_24, %._crit_edge ], [ 1, %.preheader.preheader ]
  %exitcond = icmp eq i6 %w6, -31
  %empty_89 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  br i1 %exitcond, label %8, label %6

; <label>:6                                       ; preds = %.preheader
  %tmp_107_cast = zext i6 %w6 to i16
  %tmp_255 = add i16 %tmp_253, %tmp_107_cast
  %tmp_320_cast = zext i16 %tmp_255 to i64
  %ShuffleConvs_0_Downs_4 = getelementptr [27744 x float]* @ShuffleConvs_0_Downs, i64 0, i64 %tmp_320_cast
  %ShuffleConvs_0_Downs_5 = load float* %ShuffleConvs_0_Downs_4, align 4
  %ShuffleConvs_0_Downs_7 = bitcast float %ShuffleConvs_0_Downs_5 to i32
  %tmp_16 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %ShuffleConvs_0_Downs_7, i32 23, i32 30)
  %tmp_256 = trunc i32 %ShuffleConvs_0_Downs_7 to i23
  %notlhs = icmp ne i8 %tmp_16, -1
  %notrhs = icmp eq i23 %tmp_256, 0
  %tmp_18 = or i1 %notrhs, %notlhs
  %tmp_19 = fcmp olt float %ShuffleConvs_0_Downs_5, 0.000000e+00
  %tmp_20 = and i1 %tmp_18, %tmp_19
  br i1 %tmp_20, label %7, label %._crit_edge

; <label>:7                                       ; preds = %6
  store float 0.000000e+00, float* %ShuffleConvs_0_Downs_4, align 4
  br label %._crit_edge

._crit_edge:                                      ; preds = %7, %6
  %w_24 = add i6 %w6, 1
  br label %.preheader

; <label>:8                                       ; preds = %.preheader
  %h_24 = add i6 %h5, 1
  br label %.preheader10

; <label>:9                                       ; preds = %.preheader11
  ret void
}

define internal fastcc void @subconv_1x1_16p_p([2304 x float]* nocapture %weight, [48 x float]* nocapture %bias) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader17
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_25, %.loopexit.loopexit ]
  %exitcond9 = icmp eq i6 %co, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_25 = add i6 %co, 1
  br i1 %exitcond9, label %.preheader15.preheader, label %.preheader17.preheader

.preheader15.preheader:                           ; preds = %.loopexit
  br label %.preheader15

.preheader17.preheader:                           ; preds = %.loopexit
  %tmp = zext i6 %co to i64
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co, i4 0)
  %p_shl_cast = zext i10 %tmp_s to i11
  %tmp_265 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co, i1 false)
  %p_shl1_cast = zext i7 %tmp_265 to i11
  %tmp_266 = add i11 %p_shl1_cast, %p_shl_cast
  %bias_addr = getelementptr [48 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader17

.preheader17:                                     ; preds = %2, %.preheader17.preheader
  %h = phi i5 [ %h_25, %2 ], [ 1, %.preheader17.preheader ]
  %exitcond8 = icmp eq i5 %h, -15
  %empty_90 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond8, label %.loopexit.loopexit, label %.preheader16.preheader

.preheader16.preheader:                           ; preds = %.preheader17
  %tmp_cast = zext i5 %h to i11
  %tmp_272 = add i11 %tmp_cast, %tmp_266
  %p_shl2_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_272, i4 0)
  %tmp_263 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_272, i1 false)
  %p_shl3_cast = zext i12 %tmp_263 to i15
  %tmp_273 = add i15 %p_shl2_cast, %p_shl3_cast
  br label %.preheader16

.preheader16:                                     ; preds = %1, %.preheader16.preheader
  %w = phi i5 [ %w_25, %1 ], [ 1, %.preheader16.preheader ]
  %exitcond7 = icmp eq i5 %w, -15
  %empty_91 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond7, label %2, label %1

; <label>:1                                       ; preds = %.preheader16
  %bias_load = load float* %bias_addr, align 4
  %tmp_112_cast = zext i5 %w to i15
  %tmp_279 = add i15 %tmp_273, %tmp_112_cast
  %tmp_350_cast = zext i15 %tmp_279 to i64
  %ShuffleConvs_1_Downs = getelementptr [15552 x float]* @ShuffleConvs_1_Downs, i64 0, i64 %tmp_350_cast
  store float %bias_load, float* %ShuffleConvs_1_Downs, align 4
  %w_25 = add i5 %w, 1
  br label %.preheader16

; <label>:2                                       ; preds = %.preheader16
  %h_25 = add i5 %h, 1
  br label %.preheader17

.preheader15.loopexit:                            ; preds = %.preheader14
  br label %.preheader15

.preheader15:                                     ; preds = %.preheader15.preheader, %.preheader15.loopexit
  %co1 = phi i6 [ %co_26, %.preheader15.loopexit ], [ 0, %.preheader15.preheader ]
  %exitcond6 = icmp eq i6 %co1, -16
  %empty_92 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_26 = add i6 %co1, 1
  br i1 %exitcond6, label %.preheader11.preheader, label %.preheader14.preheader

.preheader11.preheader:                           ; preds = %.preheader15
  br label %.preheader11

.preheader14.preheader:                           ; preds = %.preheader15
  %tmp_267 = call i12 @_ssdm_op_BitConcatenate.i12.i6.i6(i6 %co1, i6 0)
  %p_shl6_cast = zext i12 %tmp_267 to i13
  %tmp_268 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co1, i4 0)
  %p_shl7_cast1 = zext i10 %tmp_268 to i11
  %p_shl7_cast = zext i10 %tmp_268 to i13
  %tmp_269 = sub i13 %p_shl6_cast, %p_shl7_cast
  %tmp_270 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co1, i1 false)
  %p_shl5_cast = zext i7 %tmp_270 to i11
  %tmp_271 = add i11 %p_shl5_cast, %p_shl7_cast1
  br label %.preheader14

.preheader14:                                     ; preds = %5, %.preheader14.preheader
  %h2 = phi i5 [ %h_26, %5 ], [ 1, %.preheader14.preheader ]
  %exitcond5 = icmp eq i5 %h2, -15
  %empty_93 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond5, label %.preheader15.loopexit, label %.preheader13.preheader

.preheader13.preheader:                           ; preds = %.preheader14
  %tmp_111_cast = zext i5 %h2 to i11
  %tmp_277 = add i11 %tmp_111_cast, %tmp_271
  %p_shl8_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_277, i4 0)
  %tmp_264 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_277, i1 false)
  %p_shl9_cast = zext i12 %tmp_264 to i15
  %tmp_278 = add i15 %p_shl8_cast, %p_shl9_cast
  br label %.preheader13

.preheader13:                                     ; preds = %4, %.preheader13.preheader
  %w3 = phi i5 [ %w_26, %4 ], [ 1, %.preheader13.preheader ]
  %exitcond4 = icmp eq i5 %w3, -15
  %empty_94 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond4, label %5, label %.preheader12.preheader

.preheader12.preheader:                           ; preds = %.preheader13
  %tmp_114_cast = zext i5 %w3 to i15
  %tmp_283 = add i15 %tmp_278, %tmp_114_cast
  %tmp_355_cast = zext i15 %tmp_283 to i64
  %ShuffleConvs_1_Downs_2 = getelementptr [15552 x float]* @ShuffleConvs_1_Downs, i64 0, i64 %tmp_355_cast
  br label %.preheader12

.preheader12:                                     ; preds = %3, %.preheader12.preheader
  %sum = phi float [ %sum_12, %3 ], [ 0.000000e+00, %.preheader12.preheader ]
  %ci = phi i6 [ %ci_5, %3 ], [ 0, %.preheader12.preheader ]
  %exitcond3 = icmp eq i6 %ci, -16
  %empty_95 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %ci_5 = add i6 %ci, 1
  br i1 %exitcond3, label %4, label %3

; <label>:3                                       ; preds = %.preheader12
  %tmp_117_cast = zext i6 %ci to i13
  %tmp_286 = add i13 %tmp_117_cast, %tmp_269
  %tmp_357_cast = sext i13 %tmp_286 to i64
  %weight_addr = getelementptr [2304 x float]* %weight, i64 0, i64 %tmp_357_cast
  %tmp_287 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %ci, i4 0)
  %p_shl12_cast = zext i10 %tmp_287 to i11
  %tmp_288 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %ci, i1 false)
  %p_shl13_cast = zext i7 %tmp_288 to i11
  %tmp_289 = add i11 %p_shl12_cast, %p_shl13_cast
  %tmp_290 = add i11 %tmp_111_cast, %tmp_289
  %p_shl10_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_290, i4 0)
  %tmp_291 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_290, i1 false)
  %p_shl11_cast = zext i12 %tmp_291 to i15
  %tmp_292 = add i15 %p_shl10_cast, %p_shl11_cast
  %tmp_293 = add i15 %tmp_114_cast, %tmp_292
  %tmp_365_cast = zext i15 %tmp_293 to i64
  %shuffleunit0_2_outpu = getelementptr [15552 x float]* @shuffleunit0_2_outpu, i64 0, i64 %tmp_365_cast
  %weight_load = load float* %weight_addr, align 4
  %shuffleunit0_2_outpu_1 = load float* %shuffleunit0_2_outpu, align 4
  %tmp_118 = fmul float %weight_load, %shuffleunit0_2_outpu_1
  %sum_12 = fadd float %sum, %tmp_118
  br label %.preheader12

; <label>:4                                       ; preds = %.preheader12
  %ShuffleConvs_1_Downs_3 = load float* %ShuffleConvs_1_Downs_2, align 4
  %tmp_116 = fadd float %ShuffleConvs_1_Downs_3, %sum
  store float %tmp_116, float* %ShuffleConvs_1_Downs_2, align 4
  %w_26 = add i5 %w3, 1
  br label %.preheader13

; <label>:5                                       ; preds = %.preheader13
  %h_26 = add i5 %h2, 1
  br label %.preheader14

.preheader11.loopexit:                            ; preds = %.preheader10
  br label %.preheader11

.preheader11:                                     ; preds = %.preheader11.preheader, %.preheader11.loopexit
  %co4 = phi i6 [ %co_27, %.preheader11.loopexit ], [ 0, %.preheader11.preheader ]
  %exitcond2 = icmp eq i6 %co4, -16
  %empty_96 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_27 = add i6 %co4, 1
  br i1 %exitcond2, label %9, label %.preheader10.preheader

.preheader10.preheader:                           ; preds = %.preheader11
  %tmp_274 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co4, i4 0)
  %p_shl14_cast = zext i10 %tmp_274 to i11
  %tmp_275 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co4, i1 false)
  %p_shl15_cast = zext i7 %tmp_275 to i11
  %tmp_276 = add i11 %p_shl15_cast, %p_shl14_cast
  br label %.preheader10

.preheader10:                                     ; preds = %8, %.preheader10.preheader
  %h5 = phi i5 [ %h_27, %8 ], [ 1, %.preheader10.preheader ]
  %exitcond1 = icmp eq i5 %h5, -15
  %empty_97 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond1, label %.preheader11.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader10
  %tmp_113_cast = zext i5 %h5 to i11
  %tmp_280 = add i11 %tmp_113_cast, %tmp_276
  %p_shl16_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_280, i4 0)
  %tmp_281 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_280, i1 false)
  %p_shl17_cast = zext i12 %tmp_281 to i15
  %tmp_282 = add i15 %p_shl16_cast, %p_shl17_cast
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w6 = phi i5 [ %w_27, %._crit_edge ], [ 1, %.preheader.preheader ]
  %exitcond = icmp eq i5 %w6, -15
  %empty_98 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond, label %8, label %6

; <label>:6                                       ; preds = %.preheader
  %tmp_115_cast = zext i5 %w6 to i15
  %tmp_284 = add i15 %tmp_282, %tmp_115_cast
  %tmp_356_cast = zext i15 %tmp_284 to i64
  %ShuffleConvs_1_Downs_4 = getelementptr [15552 x float]* @ShuffleConvs_1_Downs, i64 0, i64 %tmp_356_cast
  %ShuffleConvs_1_Downs_5 = load float* %ShuffleConvs_1_Downs_4, align 4
  %ShuffleConvs_1_Downs_7 = bitcast float %ShuffleConvs_1_Downs_5 to i32
  %tmp_21 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %ShuffleConvs_1_Downs_7, i32 23, i32 30)
  %tmp_285 = trunc i32 %ShuffleConvs_1_Downs_7 to i23
  %notlhs = icmp ne i8 %tmp_21, -1
  %notrhs = icmp eq i23 %tmp_285, 0
  %tmp_23 = or i1 %notrhs, %notlhs
  %tmp_24 = fcmp olt float %ShuffleConvs_1_Downs_5, 0.000000e+00
  %tmp_25 = and i1 %tmp_23, %tmp_24
  br i1 %tmp_25, label %7, label %._crit_edge

; <label>:7                                       ; preds = %6
  store float 0.000000e+00, float* %ShuffleConvs_1_Downs_4, align 4
  br label %._crit_edge

._crit_edge:                                      ; preds = %7, %6
  %w_27 = add i5 %w6, 1
  br label %.preheader

; <label>:8                                       ; preds = %.preheader
  %h_27 = add i5 %h5, 1
  br label %.preheader10

; <label>:9                                       ; preds = %.preheader11
  ret void
}

define internal fastcc void @subconv_1x1_16_p([7776 x float]* nocapture %input_r, [576 x float]* nocapture %weight, [24 x float]* nocapture %bias, [7776 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader17
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i5 [ 0, %0 ], [ %co_28, %.loopexit.loopexit ]
  %exitcond9 = icmp eq i5 %co, -8
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_28 = add i5 %co, 1
  br i1 %exitcond9, label %.preheader15.preheader, label %.preheader17.preheader

.preheader15.preheader:                           ; preds = %.loopexit
  br label %.preheader15

.preheader17.preheader:                           ; preds = %.loopexit
  %tmp = zext i5 %co to i64
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co, i4 0)
  %p_shl_cast = zext i9 %tmp_s to i10
  %tmp_294 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co, i1 false)
  %p_shl1_cast = zext i6 %tmp_294 to i10
  %tmp_295 = add i10 %p_shl1_cast, %p_shl_cast
  %bias_addr = getelementptr [24 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader17

.preheader17:                                     ; preds = %2, %.preheader17.preheader
  %h = phi i5 [ %h_28, %2 ], [ 1, %.preheader17.preheader ]
  %exitcond8 = icmp eq i5 %h, -15
  %empty_99 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond8, label %.loopexit.loopexit, label %.preheader16.preheader

.preheader16.preheader:                           ; preds = %.preheader17
  %tmp_cast = zext i5 %h to i10
  %tmp_302 = add i10 %tmp_cast, %tmp_295
  %p_shl2_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_302, i4 0)
  %tmp_292 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_302, i1 false)
  %p_shl3_cast = zext i11 %tmp_292 to i14
  %tmp_303 = add i14 %p_shl2_cast, %p_shl3_cast
  br label %.preheader16

.preheader16:                                     ; preds = %1, %.preheader16.preheader
  %w = phi i5 [ %w_28, %1 ], [ 1, %.preheader16.preheader ]
  %exitcond7 = icmp eq i5 %w, -15
  %empty_100 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond7, label %2, label %1

; <label>:1                                       ; preds = %.preheader16
  %bias_load = load float* %bias_addr, align 4
  %tmp_120_cast = zext i5 %w to i14
  %tmp_309 = add i14 %tmp_303, %tmp_120_cast
  %tmp_386_cast = zext i14 %tmp_309 to i64
  %output_addr = getelementptr [7776 x float]* %output_r, i64 0, i64 %tmp_386_cast
  store float %bias_load, float* %output_addr, align 4
  %w_28 = add i5 %w, 1
  br label %.preheader16

; <label>:2                                       ; preds = %.preheader16
  %h_28 = add i5 %h, 1
  br label %.preheader17

.preheader15.loopexit:                            ; preds = %.preheader14
  br label %.preheader15

.preheader15:                                     ; preds = %.preheader15.preheader, %.preheader15.loopexit
  %co1 = phi i5 [ %co_29, %.preheader15.loopexit ], [ 0, %.preheader15.preheader ]
  %exitcond6 = icmp eq i5 %co1, -8
  %empty_101 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_29 = add i5 %co1, 1
  br i1 %exitcond6, label %.preheader11.preheader, label %.preheader14.preheader

.preheader11.preheader:                           ; preds = %.preheader15
  br label %.preheader11

.preheader14.preheader:                           ; preds = %.preheader15
  %tmp_296 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co1, i5 0)
  %p_shl6_cast = zext i10 %tmp_296 to i11
  %tmp_297 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co1, i3 0)
  %p_shl7_cast = zext i8 %tmp_297 to i11
  %tmp_298 = sub i11 %p_shl6_cast, %p_shl7_cast
  %tmp_299 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co1, i4 0)
  %p_shl4_cast = zext i9 %tmp_299 to i10
  %tmp_300 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co1, i1 false)
  %p_shl5_cast = zext i6 %tmp_300 to i10
  %tmp_301 = add i10 %p_shl5_cast, %p_shl4_cast
  br label %.preheader14

.preheader14:                                     ; preds = %5, %.preheader14.preheader
  %h2 = phi i5 [ %h_29, %5 ], [ 1, %.preheader14.preheader ]
  %exitcond5 = icmp eq i5 %h2, -15
  %empty_102 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond5, label %.preheader15.loopexit, label %.preheader13.preheader

.preheader13.preheader:                           ; preds = %.preheader14
  %tmp_119_cast = zext i5 %h2 to i10
  %tmp_307 = add i10 %tmp_119_cast, %tmp_301
  %p_shl8_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_307, i4 0)
  %tmp_293 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_307, i1 false)
  %p_shl9_cast = zext i11 %tmp_293 to i14
  %tmp_308 = add i14 %p_shl8_cast, %p_shl9_cast
  br label %.preheader13

.preheader13:                                     ; preds = %4, %.preheader13.preheader
  %w3 = phi i5 [ %w_29, %4 ], [ 1, %.preheader13.preheader ]
  %exitcond4 = icmp eq i5 %w3, -15
  %empty_103 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond4, label %5, label %.preheader12.preheader

.preheader12.preheader:                           ; preds = %.preheader13
  %tmp_122_cast = zext i5 %w3 to i14
  %tmp_313 = add i14 %tmp_308, %tmp_122_cast
  %tmp_391_cast = zext i14 %tmp_313 to i64
  %output_addr_12 = getelementptr [7776 x float]* %output_r, i64 0, i64 %tmp_391_cast
  br label %.preheader12

.preheader12:                                     ; preds = %3, %.preheader12.preheader
  %sum = phi float [ %sum_13, %3 ], [ 0.000000e+00, %.preheader12.preheader ]
  %ci = phi i5 [ %ci_6, %3 ], [ 0, %.preheader12.preheader ]
  %exitcond3 = icmp eq i5 %ci, -8
  %empty_104 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %ci_6 = add i5 %ci, 1
  br i1 %exitcond3, label %4, label %3

; <label>:3                                       ; preds = %.preheader12
  %tmp_125_cast = zext i5 %ci to i11
  %tmp_316 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %ci, i4 0)
  %p_shl12_cast = zext i9 %tmp_316 to i10
  %tmp_317 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %ci, i1 false)
  %p_shl13_cast = zext i6 %tmp_317 to i10
  %tmp_318 = add i10 %p_shl12_cast, %p_shl13_cast
  %tmp_319 = add i10 %tmp_119_cast, %tmp_318
  %p_shl10_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_319, i4 0)
  %tmp_320 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_319, i1 false)
  %p_shl11_cast = zext i11 %tmp_320 to i14
  %tmp_321 = add i14 %p_shl10_cast, %p_shl11_cast
  %tmp_322 = add i14 %tmp_122_cast, %tmp_321
  %tmp_400_cast = zext i14 %tmp_322 to i64
  %input_addr = getelementptr [7776 x float]* %input_r, i64 0, i64 %tmp_400_cast
  %tmp_323 = add i11 %tmp_125_cast, %tmp_298
  %tmp_401_cast = sext i11 %tmp_323 to i64
  %weight_addr = getelementptr [576 x float]* %weight, i64 0, i64 %tmp_401_cast
  %weight_load = load float* %weight_addr, align 4
  %input_load = load float* %input_addr, align 4
  %tmp_126 = fmul float %weight_load, %input_load
  %sum_13 = fadd float %sum, %tmp_126
  br label %.preheader12

; <label>:4                                       ; preds = %.preheader12
  %output_load_3 = load float* %output_addr_12, align 4
  %tmp_124 = fadd float %output_load_3, %sum
  store float %tmp_124, float* %output_addr_12, align 4
  %w_29 = add i5 %w3, 1
  br label %.preheader13

; <label>:5                                       ; preds = %.preheader13
  %h_29 = add i5 %h2, 1
  br label %.preheader14

.preheader11.loopexit:                            ; preds = %.preheader10
  br label %.preheader11

.preheader11:                                     ; preds = %.preheader11.preheader, %.preheader11.loopexit
  %co4 = phi i5 [ %co_30, %.preheader11.loopexit ], [ 0, %.preheader11.preheader ]
  %exitcond2 = icmp eq i5 %co4, -8
  %empty_105 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_30 = add i5 %co4, 1
  br i1 %exitcond2, label %9, label %.preheader10.preheader

.preheader10.preheader:                           ; preds = %.preheader11
  %tmp_304 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co4, i4 0)
  %p_shl14_cast = zext i9 %tmp_304 to i10
  %tmp_305 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co4, i1 false)
  %p_shl15_cast = zext i6 %tmp_305 to i10
  %tmp_306 = add i10 %p_shl15_cast, %p_shl14_cast
  br label %.preheader10

.preheader10:                                     ; preds = %8, %.preheader10.preheader
  %h5 = phi i5 [ %h_30, %8 ], [ 1, %.preheader10.preheader ]
  %exitcond1 = icmp eq i5 %h5, -15
  %empty_106 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond1, label %.preheader11.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader10
  %tmp_121_cast = zext i5 %h5 to i10
  %tmp_310 = add i10 %tmp_121_cast, %tmp_306
  %p_shl16_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_310, i4 0)
  %tmp_311 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_310, i1 false)
  %p_shl17_cast = zext i11 %tmp_311 to i14
  %tmp_312 = add i14 %p_shl16_cast, %p_shl17_cast
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w6 = phi i5 [ %w_30, %._crit_edge ], [ 1, %.preheader.preheader ]
  %exitcond = icmp eq i5 %w6, -15
  %empty_107 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %exitcond, label %8, label %6

; <label>:6                                       ; preds = %.preheader
  %tmp_123_cast = zext i5 %w6 to i14
  %tmp_314 = add i14 %tmp_312, %tmp_123_cast
  %tmp_392_cast = zext i14 %tmp_314 to i64
  %output_addr_11 = getelementptr [7776 x float]* %output_r, i64 0, i64 %tmp_392_cast
  %output_load = load float* %output_addr_11, align 4
  %output_load_to_int = bitcast float %output_load to i32
  %tmp_26 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %output_load_to_int, i32 23, i32 30)
  %tmp_315 = trunc i32 %output_load_to_int to i23
  %notlhs = icmp ne i8 %tmp_26, -1
  %notrhs = icmp eq i23 %tmp_315, 0
  %tmp_28 = or i1 %notrhs, %notlhs
  %tmp_29 = fcmp olt float %output_load, 0.000000e+00
  %tmp_30 = and i1 %tmp_28, %tmp_29
  br i1 %tmp_30, label %7, label %._crit_edge

; <label>:7                                       ; preds = %6
  store float 0.000000e+00, float* %output_addr_11, align 4
  br label %._crit_edge

._crit_edge:                                      ; preds = %7, %6
  %w_30 = add i5 %w6, 1
  br label %.preheader

; <label>:8                                       ; preds = %.preheader
  %h_30 = add i5 %h5, 1
  br label %.preheader10

; <label>:9                                       ; preds = %.preheader11
  ret void
}

define internal fastcc void @shuffle_96_r_p([3456 x float]* nocapture %right_r, [6912 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i8 [ 0, %0 ], [ %co_31, %.loopexit.loopexit ]
  %tmp_321 = trunc i8 %co to i1
  %exitcond2 = icmp eq i8 %co, -64
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 192, i64 192, i64 192)
  %co_31 = add i8 1, %co
  br i1 %exitcond2, label %3, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i7 @_ssdm_op_PartSelect.i7.i8.i32.i32(i8 %co, i32 1, i32 7)
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp, i3 0)
  %p_shl2_cast = zext i10 %tmp_s to i11
  %tmp_324 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp, i1 false)
  %p_shl3_cast = zext i8 %tmp_324 to i11
  %tmp_325 = sub i11 %p_shl2_cast, %p_shl3_cast
  %tmp_405_cast = sext i11 %tmp_325 to i12
  %tmp_326 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %co, i3 0)
  %p_shl_cast = zext i11 %tmp_326 to i12
  %tmp_327 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %co, i1 false)
  %p_shl1_cast = zext i9 %tmp_327 to i12
  %tmp_328 = sub i12 %p_shl_cast, %p_shl1_cast
  %tmp_408_cast = sext i12 %tmp_328 to i13
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i3 [ 0, %.preheader3.preheader ], [ %h_31, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i3 %h, -2
  %empty_108 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 6, i64 6, i64 6)
  %h_31 = add i3 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast9 = zext i3 %h to i13
  %tmp_cast = zext i3 %h to i12
  %tmp_329 = add i12 %tmp_cast, %tmp_405_cast
  %tmp_322 = trunc i12 %tmp_329 to i10
  %p_shl6_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_322, i3 0)
  %p_shl7_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_329, i1 false)
  %tmp_330 = sub i13 %p_shl6_cast, %p_shl7_cast
  %tmp_331 = add i13 %tmp_cast9, %tmp_408_cast
  %tmp_323 = trunc i13 %tmp_331 to i11
  %p_shl4_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_323, i3 0)
  %p_shl5_cast = call i14 @_ssdm_op_BitConcatenate.i14.i13.i1(i13 %tmp_331, i1 false)
  %tmp_332 = sub i14 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w = phi i3 [ %w_31, %._crit_edge ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i3 %w, -2
  %empty_109 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 6, i64 6, i64 6)
  %w_31 = add i3 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  br i1 %tmp_321, label %2, label %._crit_edge

; <label>:2                                       ; preds = %1
  %tmp_127_cast8 = zext i3 %w to i14
  %tmp_127_cast = zext i3 %w to i13
  %tmp_333 = add i13 %tmp_330, %tmp_127_cast
  %tmp_417_cast = zext i13 %tmp_333 to i64
  %right_addr = getelementptr [3456 x float]* %right_r, i64 0, i64 %tmp_417_cast
  %tmp_334 = add i14 %tmp_332, %tmp_127_cast8
  %tmp_418_cast = zext i14 %tmp_334 to i64
  %output_addr = getelementptr [6912 x float]* %output_r, i64 0, i64 %tmp_418_cast
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
  %co = phi i8 [ 0, %0 ], [ %co_32, %.loopexit.loopexit ]
  %tmp_324 = trunc i8 %co to i1
  %exitcond2 = icmp eq i8 %co, -64
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 192, i64 192, i64 192)
  %co_32 = add i8 1, %co
  br i1 %exitcond2, label %5, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i7 @_ssdm_op_PartSelect.i7.i8.i32.i32(i8 %co, i32 1, i32 7)
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp, i3 0)
  %p_shl2_cast = zext i10 %tmp_s to i11
  %tmp_335 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp, i1 false)
  %p_shl3_cast = zext i8 %tmp_335 to i11
  %tmp_336 = sub i11 %p_shl2_cast, %p_shl3_cast
  %tmp_422_cast = sext i11 %tmp_336 to i12
  %tmp_337 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %co, i3 0)
  %p_shl_cast = zext i11 %tmp_337 to i12
  %tmp_338 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %co, i1 false)
  %p_shl1_cast = zext i9 %tmp_338 to i12
  %tmp_339 = sub i12 %p_shl_cast, %p_shl1_cast
  %tmp_425_cast = sext i12 %tmp_339 to i13
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i3 [ 0, %.preheader3.preheader ], [ %h_32, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i3 %h, -2
  %empty_110 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 6, i64 6, i64 6)
  %h_32 = add i3 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast9 = zext i3 %h to i13
  %tmp_cast = zext i3 %h to i12
  %tmp_340 = add i12 %tmp_cast, %tmp_422_cast
  %tmp_325 = trunc i12 %tmp_340 to i10
  %p_shl6_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_325, i3 0)
  %p_shl7_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_340, i1 false)
  %tmp_341 = sub i13 %p_shl6_cast, %p_shl7_cast
  %tmp_342 = add i13 %tmp_cast9, %tmp_425_cast
  %tmp_326 = trunc i13 %tmp_342 to i11
  %p_shl4_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_326, i3 0)
  %p_shl5_cast = call i14 @_ssdm_op_BitConcatenate.i14.i13.i1(i13 %tmp_342, i1 false)
  %tmp_343 = sub i14 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %4, %.preheader.preheader
  %w = phi i3 [ %w_32, %4 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i3 %w, -2
  %empty_111 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 6, i64 6, i64 6)
  %w_32 = add i3 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_128_cast8 = zext i3 %w to i14
  %tmp_128_cast = zext i3 %w to i13
  %tmp_344 = add i13 %tmp_341, %tmp_128_cast
  %tmp_434_cast = zext i13 %tmp_344 to i64
  %left_addr = getelementptr [3456 x float]* %left_r, i64 0, i64 %tmp_434_cast
  %tmp_345 = add i14 %tmp_343, %tmp_128_cast8
  %tmp_435_cast = zext i14 %tmp_345 to i64
  %output_addr = getelementptr [6912 x float]* %output_r, i64 0, i64 %tmp_435_cast
  %buffer1_1_96_4x4_p_a = getelementptr [3456 x float]* @buffer1_1_96_4x4_p, i64 0, i64 %tmp_434_cast
  br i1 %tmp_324, label %3, label %2

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
  %co = phi i8 [ 0, %0 ], [ %co_33, %.loopexit.loopexit ]
  %tmp_327 = trunc i8 %co to i1
  %exitcond2 = icmp eq i8 %co, -64
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 192, i64 192, i64 192)
  %co_33 = add i8 1, %co
  br i1 %exitcond2, label %3, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i7 @_ssdm_op_PartSelect.i7.i8.i32.i32(i8 %co, i32 1, i32 7)
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp, i3 0)
  %p_shl2_cast = zext i10 %tmp_s to i11
  %tmp_346 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp, i1 false)
  %p_shl3_cast = zext i8 %tmp_346 to i11
  %tmp_347 = sub i11 %p_shl2_cast, %p_shl3_cast
  %tmp_439_cast = sext i11 %tmp_347 to i12
  %tmp_348 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %co, i3 0)
  %p_shl_cast = zext i11 %tmp_348 to i12
  %tmp_349 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %co, i1 false)
  %p_shl1_cast = zext i9 %tmp_349 to i12
  %tmp_350 = sub i12 %p_shl_cast, %p_shl1_cast
  %tmp_442_cast = sext i12 %tmp_350 to i13
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i3 [ 0, %.preheader3.preheader ], [ %h_33, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i3 %h, -2
  %empty_112 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 6, i64 6, i64 6)
  %h_33 = add i3 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast9 = zext i3 %h to i13
  %tmp_cast = zext i3 %h to i12
  %tmp_351 = add i12 %tmp_cast, %tmp_439_cast
  %tmp_328 = trunc i12 %tmp_351 to i10
  %p_shl6_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_328, i3 0)
  %p_shl7_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_351, i1 false)
  %tmp_352 = sub i13 %p_shl6_cast, %p_shl7_cast
  %tmp_353 = add i13 %tmp_cast9, %tmp_442_cast
  %tmp_329 = trunc i13 %tmp_353 to i11
  %p_shl4_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_329, i3 0)
  %p_shl5_cast = call i14 @_ssdm_op_BitConcatenate.i14.i13.i1(i13 %tmp_353, i1 false)
  %tmp_354 = sub i14 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w = phi i3 [ %w_33, %._crit_edge ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i3 %w, -2
  %empty_113 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 6, i64 6, i64 6)
  %w_33 = add i3 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  br i1 %tmp_327, label %._crit_edge, label %2

; <label>:2                                       ; preds = %1
  %tmp_129_cast8 = zext i3 %w to i14
  %tmp_129_cast = zext i3 %w to i13
  %tmp_355 = add i13 %tmp_352, %tmp_129_cast
  %tmp_451_cast = zext i13 %tmp_355 to i64
  %left_addr = getelementptr [3456 x float]* %left_r, i64 0, i64 %tmp_451_cast
  %tmp_356 = add i14 %tmp_354, %tmp_129_cast8
  %tmp_452_cast = zext i14 %tmp_356 to i64
  %output_addr = getelementptr [6912 x float]* %output_r, i64 0, i64 %tmp_452_cast
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
  %co = phi i7 [ 0, %0 ], [ %co_34, %.loopexit.loopexit ]
  %tmp_330 = trunc i7 %co to i1
  %exitcond2 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_34 = add i7 1, %co
  br i1 %exitcond2, label %3, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i6 @_ssdm_op_PartSelect.i6.i7.i32.i32(i7 %co, i32 1, i32 6)
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %tmp, i3 0)
  %p_shl2_cast = zext i9 %tmp_s to i10
  %tmp_357 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %tmp, i1 false)
  %p_shl3_cast = zext i7 %tmp_357 to i10
  %tmp_358 = add i10 %p_shl3_cast, %p_shl2_cast
  %tmp_359 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0)
  %p_shl_cast = zext i10 %tmp_359 to i11
  %tmp_360 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co, i1 false)
  %p_shl1_cast = zext i8 %tmp_360 to i11
  %tmp_361 = add i11 %p_shl1_cast, %p_shl_cast
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i4 [ 0, %.preheader3.preheader ], [ %h_34, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i4 %h, -6
  %empty_114 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10)
  %h_34 = add i4 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast9 = zext i4 %h to i11
  %tmp_cast = zext i4 %h to i10
  %tmp_362 = add i10 %tmp_cast, %tmp_358
  %tmp_331 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_362, i3 0)
  %p_shl6_cast = zext i13 %tmp_331 to i14
  %tmp_332 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_362, i1 false)
  %p_shl7_cast = zext i11 %tmp_332 to i14
  %tmp_363 = add i14 %p_shl6_cast, %p_shl7_cast
  %tmp_364 = add i11 %tmp_cast9, %tmp_361
  %tmp_333 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_364, i3 0)
  %p_shl4_cast = zext i14 %tmp_333 to i15
  %tmp_334 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_364, i1 false)
  %p_shl5_cast = zext i12 %tmp_334 to i15
  %tmp_365 = add i15 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w = phi i4 [ %w_34, %._crit_edge ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i4 %w, -6
  %empty_115 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10)
  %w_34 = add i4 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  br i1 %tmp_330, label %2, label %._crit_edge

; <label>:2                                       ; preds = %1
  %tmp_130_cast8 = zext i4 %w to i15
  %tmp_130_cast = zext i4 %w to i14
  %tmp_366 = add i14 %tmp_363, %tmp_130_cast
  %tmp_468_cast = zext i14 %tmp_366 to i64
  %right_addr = getelementptr [4800 x float]* %right_r, i64 0, i64 %tmp_468_cast
  %tmp_367 = add i15 %tmp_365, %tmp_130_cast8
  %tmp_469_cast = zext i15 %tmp_367 to i64
  %output_addr = getelementptr [9600 x float]* %output_r, i64 0, i64 %tmp_469_cast
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
  %co = phi i7 [ 0, %0 ], [ %co_35, %.loopexit.loopexit ]
  %tmp_335 = trunc i7 %co to i1
  %exitcond2 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_35 = add i7 1, %co
  br i1 %exitcond2, label %5, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i6 @_ssdm_op_PartSelect.i6.i7.i32.i32(i7 %co, i32 1, i32 6)
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %tmp, i3 0)
  %p_shl2_cast = zext i9 %tmp_s to i10
  %tmp_368 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %tmp, i1 false)
  %p_shl3_cast = zext i7 %tmp_368 to i10
  %tmp_369 = add i10 %p_shl3_cast, %p_shl2_cast
  %tmp_370 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0)
  %p_shl_cast = zext i10 %tmp_370 to i11
  %tmp_371 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co, i1 false)
  %p_shl1_cast = zext i8 %tmp_371 to i11
  %tmp_372 = add i11 %p_shl1_cast, %p_shl_cast
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i4 [ 0, %.preheader3.preheader ], [ %h_35, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i4 %h, -6
  %empty_116 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10)
  %h_35 = add i4 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast9 = zext i4 %h to i11
  %tmp_cast = zext i4 %h to i10
  %tmp_373 = add i10 %tmp_cast, %tmp_369
  %tmp_336 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_373, i3 0)
  %p_shl6_cast = zext i13 %tmp_336 to i14
  %tmp_337 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_373, i1 false)
  %p_shl7_cast = zext i11 %tmp_337 to i14
  %tmp_374 = add i14 %p_shl6_cast, %p_shl7_cast
  %tmp_375 = add i11 %tmp_cast9, %tmp_372
  %tmp_338 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_375, i3 0)
  %p_shl4_cast = zext i14 %tmp_338 to i15
  %tmp_339 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_375, i1 false)
  %p_shl5_cast = zext i12 %tmp_339 to i15
  %tmp_376 = add i15 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %4, %.preheader.preheader
  %w = phi i4 [ %w_35, %4 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i4 %w, -6
  %empty_117 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10)
  %w_35 = add i4 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_131_cast8 = zext i4 %w to i15
  %tmp_131_cast = zext i4 %w to i14
  %tmp_377 = add i14 %tmp_374, %tmp_131_cast
  %tmp_485_cast = zext i14 %tmp_377 to i64
  %left_addr = getelementptr [4800 x float]* %left_r, i64 0, i64 %tmp_485_cast
  %tmp_378 = add i15 %tmp_376, %tmp_131_cast8
  %tmp_486_cast = zext i15 %tmp_378 to i64
  %output_addr = getelementptr [9600 x float]* %output_r, i64 0, i64 %tmp_486_cast
  %buffer1_1_48_8x8_p_a = getelementptr [4800 x float]* @buffer1_1_48_8x8_p, i64 0, i64 %tmp_485_cast
  br i1 %tmp_335, label %3, label %2

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
  %co = phi i7 [ 0, %0 ], [ %co_36, %.loopexit.loopexit ]
  %tmp_340 = trunc i7 %co to i1
  %exitcond2 = icmp eq i7 %co, -32
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96)
  %co_36 = add i7 1, %co
  br i1 %exitcond2, label %3, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i6 @_ssdm_op_PartSelect.i6.i7.i32.i32(i7 %co, i32 1, i32 6)
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %tmp, i3 0)
  %p_shl2_cast = zext i9 %tmp_s to i10
  %tmp_379 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %tmp, i1 false)
  %p_shl3_cast = zext i7 %tmp_379 to i10
  %tmp_380 = add i10 %p_shl3_cast, %p_shl2_cast
  %tmp_381 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0)
  %p_shl_cast = zext i10 %tmp_381 to i11
  %tmp_382 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co, i1 false)
  %p_shl1_cast = zext i8 %tmp_382 to i11
  %tmp_383 = add i11 %p_shl1_cast, %p_shl_cast
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i4 [ 0, %.preheader3.preheader ], [ %h_36, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i4 %h, -6
  %empty_118 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10)
  %h_36 = add i4 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast9 = zext i4 %h to i11
  %tmp_cast = zext i4 %h to i10
  %tmp_384 = add i10 %tmp_cast, %tmp_380
  %tmp_341 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_384, i3 0)
  %p_shl6_cast = zext i13 %tmp_341 to i14
  %tmp_342 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_384, i1 false)
  %p_shl7_cast = zext i11 %tmp_342 to i14
  %tmp_385 = add i14 %p_shl6_cast, %p_shl7_cast
  %tmp_386 = add i11 %tmp_cast9, %tmp_383
  %tmp_343 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_386, i3 0)
  %p_shl4_cast = zext i14 %tmp_343 to i15
  %tmp_344 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_386, i1 false)
  %p_shl5_cast = zext i12 %tmp_344 to i15
  %tmp_387 = add i15 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w = phi i4 [ %w_36, %._crit_edge ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i4 %w, -6
  %empty_119 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10)
  %w_36 = add i4 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  br i1 %tmp_340, label %._crit_edge, label %2

; <label>:2                                       ; preds = %1
  %tmp_132_cast8 = zext i4 %w to i15
  %tmp_132_cast = zext i4 %w to i14
  %tmp_388 = add i14 %tmp_385, %tmp_132_cast
  %tmp_502_cast = zext i14 %tmp_388 to i64
  %left_addr = getelementptr [4800 x float]* %left_r, i64 0, i64 %tmp_502_cast
  %tmp_389 = add i15 %tmp_387, %tmp_132_cast8
  %tmp_503_cast = zext i15 %tmp_389 to i64
  %output_addr = getelementptr [9600 x float]* %output_r, i64 0, i64 %tmp_503_cast
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
  %co = phi i6 [ 0, %0 ], [ %co_37, %.loopexit.loopexit ]
  %tmp_345 = trunc i6 %co to i1
  %exitcond2 = icmp eq i6 %co, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_37 = add i6 1, %co
  br i1 %exitcond2, label %3, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i5 @_ssdm_op_PartSelect.i5.i6.i32.i32(i6 %co, i32 1, i32 5)
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %tmp, i4 0)
  %p_shl2_cast = zext i9 %tmp_s to i10
  %tmp_390 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %tmp, i1 false)
  %p_shl3_cast = zext i6 %tmp_390 to i10
  %tmp_391 = add i10 %p_shl3_cast, %p_shl2_cast
  %tmp_392 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co, i4 0)
  %p_shl_cast = zext i10 %tmp_392 to i11
  %tmp_393 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co, i1 false)
  %p_shl1_cast = zext i7 %tmp_393 to i11
  %tmp_394 = add i11 %p_shl1_cast, %p_shl_cast
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i5 [ 0, %.preheader3.preheader ], [ %h_37, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i5 %h, -14
  %empty_120 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 18, i64 18, i64 18)
  %h_37 = add i5 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast9 = zext i5 %h to i11
  %tmp_cast = zext i5 %h to i10
  %tmp_395 = add i10 %tmp_cast, %tmp_391
  %p_shl6_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_395, i4 0)
  %tmp_346 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_395, i1 false)
  %p_shl7_cast = zext i11 %tmp_346 to i14
  %tmp_396 = add i14 %p_shl6_cast, %p_shl7_cast
  %tmp_397 = add i11 %tmp_cast9, %tmp_394
  %p_shl4_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_397, i4 0)
  %tmp_347 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_397, i1 false)
  %p_shl5_cast = zext i12 %tmp_347 to i15
  %tmp_398 = add i15 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w = phi i5 [ %w_37, %._crit_edge ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i5 %w, -14
  %empty_121 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 18, i64 18, i64 18)
  %w_37 = add i5 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  br i1 %tmp_345, label %2, label %._crit_edge

; <label>:2                                       ; preds = %1
  %tmp_133_cast8 = zext i5 %w to i15
  %tmp_133_cast = zext i5 %w to i14
  %tmp_399 = add i14 %tmp_396, %tmp_133_cast
  %tmp_519_cast = zext i14 %tmp_399 to i64
  %right_addr = getelementptr [7776 x float]* %right_r, i64 0, i64 %tmp_519_cast
  %tmp_400 = add i15 %tmp_398, %tmp_133_cast8
  %tmp_520_cast = zext i15 %tmp_400 to i64
  %output_addr = getelementptr [15552 x float]* %output_r, i64 0, i64 %tmp_520_cast
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
  %co = phi i6 [ 0, %0 ], [ %co_38, %.loopexit.loopexit ]
  %tmp_348 = trunc i6 %co to i1
  %exitcond2 = icmp eq i6 %co, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_38 = add i6 1, %co
  br i1 %exitcond2, label %5, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i5 @_ssdm_op_PartSelect.i5.i6.i32.i32(i6 %co, i32 1, i32 5)
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %tmp, i4 0)
  %p_shl2_cast = zext i9 %tmp_s to i10
  %tmp_401 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %tmp, i1 false)
  %p_shl3_cast = zext i6 %tmp_401 to i10
  %tmp_402 = add i10 %p_shl3_cast, %p_shl2_cast
  %tmp_403 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co, i4 0)
  %p_shl_cast = zext i10 %tmp_403 to i11
  %tmp_404 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co, i1 false)
  %p_shl1_cast = zext i7 %tmp_404 to i11
  %tmp_405 = add i11 %p_shl1_cast, %p_shl_cast
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i5 [ 0, %.preheader3.preheader ], [ %h_38, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i5 %h, -14
  %empty_122 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 18, i64 18, i64 18)
  %h_38 = add i5 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast9 = zext i5 %h to i11
  %tmp_cast = zext i5 %h to i10
  %tmp_406 = add i10 %tmp_cast, %tmp_402
  %p_shl6_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_406, i4 0)
  %tmp_349 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_406, i1 false)
  %p_shl7_cast = zext i11 %tmp_349 to i14
  %tmp_407 = add i14 %p_shl6_cast, %p_shl7_cast
  %tmp_408 = add i11 %tmp_cast9, %tmp_405
  %p_shl4_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_408, i4 0)
  %tmp_350 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_408, i1 false)
  %p_shl5_cast = zext i12 %tmp_350 to i15
  %tmp_409 = add i15 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %4, %.preheader.preheader
  %w = phi i5 [ %w_38, %4 ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i5 %w, -14
  %empty_123 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 18, i64 18, i64 18)
  %w_38 = add i5 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_134_cast8 = zext i5 %w to i15
  %tmp_134_cast = zext i5 %w to i14
  %tmp_410 = add i14 %tmp_407, %tmp_134_cast
  %tmp_536_cast = zext i14 %tmp_410 to i64
  %left_addr = getelementptr [7776 x float]* %left_r, i64 0, i64 %tmp_536_cast
  %tmp_411 = add i15 %tmp_409, %tmp_134_cast8
  %tmp_537_cast = zext i15 %tmp_411 to i64
  %output_addr = getelementptr [15552 x float]* %output_r, i64 0, i64 %tmp_537_cast
  %buffer1_1_24_16x16_p = getelementptr [7776 x float]* @buffer1_1_24_16x16_p, i64 0, i64 %tmp_536_cast
  br i1 %tmp_348, label %3, label %2

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
  %co = phi i6 [ 0, %0 ], [ %co_39, %.loopexit.loopexit ]
  %tmp_351 = trunc i6 %co to i1
  %exitcond2 = icmp eq i6 %co, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  %co_39 = add i6 1, %co
  br i1 %exitcond2, label %3, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i5 @_ssdm_op_PartSelect.i5.i6.i32.i32(i6 %co, i32 1, i32 5)
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %tmp, i4 0)
  %p_shl2_cast = zext i9 %tmp_s to i10
  %tmp_412 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %tmp, i1 false)
  %p_shl3_cast = zext i6 %tmp_412 to i10
  %tmp_413 = add i10 %p_shl3_cast, %p_shl2_cast
  %tmp_414 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co, i4 0)
  %p_shl_cast = zext i10 %tmp_414 to i11
  %tmp_415 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co, i1 false)
  %p_shl1_cast = zext i7 %tmp_415 to i11
  %tmp_416 = add i11 %p_shl1_cast, %p_shl_cast
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i5 [ 0, %.preheader3.preheader ], [ %h_39, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i5 %h, -14
  %empty_124 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 18, i64 18, i64 18)
  %h_39 = add i5 %h, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast9 = zext i5 %h to i11
  %tmp_cast = zext i5 %h to i10
  %tmp_417 = add i10 %tmp_cast, %tmp_413
  %p_shl6_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_417, i4 0)
  %tmp_352 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_417, i1 false)
  %p_shl7_cast = zext i11 %tmp_352 to i14
  %tmp_418 = add i14 %p_shl6_cast, %p_shl7_cast
  %tmp_419 = add i11 %tmp_cast9, %tmp_416
  %p_shl4_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_419, i4 0)
  %tmp_353 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_419, i1 false)
  %p_shl5_cast = zext i12 %tmp_353 to i15
  %tmp_420 = add i15 %p_shl4_cast, %p_shl5_cast
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w = phi i5 [ %w_39, %._crit_edge ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i5 %w, -14
  %empty_125 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 18, i64 18, i64 18)
  %w_39 = add i5 %w, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  br i1 %tmp_351, label %._crit_edge, label %2

; <label>:2                                       ; preds = %1
  %tmp_135_cast8 = zext i5 %w to i15
  %tmp_135_cast = zext i5 %w to i14
  %tmp_421 = add i14 %tmp_418, %tmp_135_cast
  %tmp_553_cast = zext i14 %tmp_421 to i64
  %left_addr = getelementptr [7776 x float]* %left_r, i64 0, i64 %tmp_553_cast
  %tmp_422 = add i15 %tmp_420, %tmp_135_cast8
  %tmp_554_cast = zext i15 %tmp_422 to i64
  %output_addr = getelementptr [15552 x float]* %output_r, i64 0, i64 %tmp_554_cast
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

.loopexit.loopexit:                               ; preds = %.preheader17
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i10 [ 0, %0 ], [ %co_40, %.loopexit.loopexit ]
  %exitcond9 = icmp eq i10 %co, -512
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512)
  %co_40 = add i10 %co, 1
  br i1 %exitcond9, label %.preheader15.preheader, label %.preheader17.preheader

.preheader15.preheader:                           ; preds = %.loopexit
  br label %.preheader15

.preheader17.preheader:                           ; preds = %.loopexit
  %tmp = zext i10 %co to i64
  %tmp_s = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %co, i2 0)
  %tmp_556_cast = zext i12 %tmp_s to i13
  %bias_addr = getelementptr [512 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader17

.preheader17.loopexit:                            ; preds = %.preheader16
  br label %.preheader17

.preheader17:                                     ; preds = %.preheader17.loopexit, %.preheader17.preheader
  %h = phi i3 [ 0, %.preheader17.preheader ], [ %h_40, %.preheader17.loopexit ]
  %exitcond8 = icmp eq i3 %h, -4
  %empty_126 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %h_40 = add i3 %h, 1
  br i1 %exitcond8, label %.loopexit.loopexit, label %.preheader16.preheader

.preheader16.preheader:                           ; preds = %.preheader17
  %tmp_cast = zext i3 %h to i13
  %tmp_427 = add i13 %tmp_cast, %tmp_556_cast
  %tmp_564_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_427, i2 0)
  br label %.preheader16

.preheader16:                                     ; preds = %1, %.preheader16.preheader
  %w = phi i3 [ %w_40, %1 ], [ 0, %.preheader16.preheader ]
  %exitcond7 = icmp eq i3 %w, -4
  %empty_127 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %w_40 = add i3 %w, 1
  br i1 %exitcond7, label %.preheader17.loopexit, label %1

; <label>:1                                       ; preds = %.preheader16
  %bias_load = load float* %bias_addr, align 4
  %tmp_137_cast = zext i3 %w to i15
  %tmp_430 = add i15 %tmp_564_cast, %tmp_137_cast
  %tmp_570_cast = zext i15 %tmp_430 to i64
  %output_addr = getelementptr [8192 x float]* %output_r, i64 0, i64 %tmp_570_cast
  store float %bias_load, float* %output_addr, align 4
  br label %.preheader16

.preheader15.loopexit:                            ; preds = %.preheader14
  br label %.preheader15

.preheader15:                                     ; preds = %.preheader15.preheader, %.preheader15.loopexit
  %co1 = phi i10 [ %co_41, %.preheader15.loopexit ], [ 0, %.preheader15.preheader ]
  %exitcond6 = icmp eq i10 %co1, -512
  %empty_128 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512)
  %co_41 = add i10 %co1, 1
  br i1 %exitcond6, label %.preheader11.preheader, label %.preheader14.preheader

.preheader11.preheader:                           ; preds = %.preheader15
  br label %.preheader11

.preheader14.preheader:                           ; preds = %.preheader15
  %tmp_423 = call i18 @_ssdm_op_BitConcatenate.i18.i10.i8(i10 %co1, i8 0)
  %tmp_424 = call i16 @_ssdm_op_BitConcatenate.i16.i10.i6(i10 %co1, i6 0)
  %p_shl1_cast = zext i16 %tmp_424 to i18
  %tmp_425 = sub i18 %tmp_423, %p_shl1_cast
  %tmp_426 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %co1, i2 0)
  %tmp_561_cast = zext i12 %tmp_426 to i13
  br label %.preheader14

.preheader14.loopexit:                            ; preds = %.preheader13
  br label %.preheader14

.preheader14:                                     ; preds = %.preheader14.loopexit, %.preheader14.preheader
  %h2 = phi i3 [ 0, %.preheader14.preheader ], [ %h_41, %.preheader14.loopexit ]
  %exitcond5 = icmp eq i3 %h2, -4
  %empty_129 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %h_41 = add i3 %h2, 1
  br i1 %exitcond5, label %.preheader15.loopexit, label %.preheader13.preheader

.preheader13.preheader:                           ; preds = %.preheader14
  %tmp_136_cast3 = zext i3 %h2 to i11
  %tmp_136_cast = zext i3 %h2 to i13
  %tmp_429 = add i13 %tmp_136_cast, %tmp_561_cast
  %tmp_569_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_429, i2 0)
  br label %.preheader13

.preheader13:                                     ; preds = %3, %.preheader13.preheader
  %w3 = phi i3 [ %w_41, %3 ], [ 0, %.preheader13.preheader ]
  %exitcond4 = icmp eq i3 %w3, -4
  %empty_130 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %w_41 = add i3 %w3, 1
  br i1 %exitcond4, label %.preheader14.loopexit, label %.preheader12.preheader

.preheader12.preheader:                           ; preds = %.preheader13
  %tmp_139_cast2 = zext i3 %w3 to i13
  %tmp_139_cast = zext i3 %w3 to i15
  %tmp_432 = add i15 %tmp_569_cast, %tmp_139_cast
  %tmp_574_cast = zext i15 %tmp_432 to i64
  %output_addr_13 = getelementptr [8192 x float]* %output_r, i64 0, i64 %tmp_574_cast
  br label %.preheader12

.preheader12:                                     ; preds = %2, %.preheader12.preheader
  %sum = phi float [ %sum_14, %2 ], [ 0.000000e+00, %.preheader12.preheader ]
  %ci = phi i8 [ %ci_7, %2 ], [ 0, %.preheader12.preheader ]
  %exitcond3 = icmp eq i8 %ci, -64
  %empty_131 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 192, i64 192, i64 192)
  %ci_7 = add i8 %ci, 1
  br i1 %exitcond3, label %3, label %2

; <label>:2                                       ; preds = %.preheader12
  %tmp_142_cast = zext i8 %ci to i18
  %tmp_434 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %ci, i2 0)
  %tmp_577_cast = zext i10 %tmp_434 to i11
  %tmp_435 = add i11 %tmp_136_cast3, %tmp_577_cast
  %tmp_580_cast = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_435, i2 0)
  %tmp_436 = add i13 %tmp_139_cast2, %tmp_580_cast
  %tmp_581_cast = zext i13 %tmp_436 to i64
  %input_addr = getelementptr [3072 x float]* %input_r, i64 0, i64 %tmp_581_cast
  %tmp_437 = add i18 %tmp_142_cast, %tmp_425
  %tmp_582_cast = sext i18 %tmp_437 to i64
  %weight_addr = getelementptr [98304 x float]* %weight, i64 0, i64 %tmp_582_cast
  %weight_load = load float* %weight_addr, align 4
  %input_load = load float* %input_addr, align 4
  %tmp_143 = fmul float %weight_load, %input_load
  %sum_14 = fadd float %sum, %tmp_143
  br label %.preheader12

; <label>:3                                       ; preds = %.preheader12
  %output_load_4 = load float* %output_addr_13, align 4
  %tmp_141 = fadd float %output_load_4, %sum
  store float %tmp_141, float* %output_addr_13, align 4
  br label %.preheader13

.preheader11.loopexit:                            ; preds = %.preheader10
  br label %.preheader11

.preheader11:                                     ; preds = %.preheader11.preheader, %.preheader11.loopexit
  %co4 = phi i10 [ %co_42, %.preheader11.loopexit ], [ 0, %.preheader11.preheader ]
  %exitcond2 = icmp eq i10 %co4, -512
  %empty_132 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512)
  %co_42 = add i10 %co4, 1
  br i1 %exitcond2, label %6, label %.preheader10.preheader

.preheader10.preheader:                           ; preds = %.preheader11
  %tmp_428 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %co4, i2 0)
  %tmp_566_cast = zext i12 %tmp_428 to i13
  br label %.preheader10

.preheader10.loopexit:                            ; preds = %.preheader
  br label %.preheader10

.preheader10:                                     ; preds = %.preheader10.loopexit, %.preheader10.preheader
  %h5 = phi i3 [ 0, %.preheader10.preheader ], [ %h_42, %.preheader10.loopexit ]
  %exitcond1 = icmp eq i3 %h5, -4
  %empty_133 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %h_42 = add i3 %h5, 1
  br i1 %exitcond1, label %.preheader11.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader10
  %tmp_138_cast = zext i3 %h5 to i13
  %tmp_431 = add i13 %tmp_138_cast, %tmp_566_cast
  %tmp_573_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_431, i2 0)
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w6 = phi i3 [ %w_1, %._crit_edge ], [ 0, %.preheader.preheader ]
  %exitcond = icmp eq i3 %w6, -4
  %empty_134 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %w_1 = add i3 %w6, 1
  br i1 %exitcond, label %.preheader10.loopexit, label %4

; <label>:4                                       ; preds = %.preheader
  %tmp_140_cast = zext i3 %w6 to i15
  %tmp_433 = add i15 %tmp_573_cast, %tmp_140_cast
  %tmp_575_cast = zext i15 %tmp_433 to i64
  %output_addr_14 = getelementptr [8192 x float]* %output_r, i64 0, i64 %tmp_575_cast
  %output_load = load float* %output_addr_14, align 4
  %output_load_to_int = bitcast float %output_load to i32
  %tmp_31 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %output_load_to_int, i32 23, i32 30)
  %tmp_354 = trunc i32 %output_load_to_int to i23
  %notlhs = icmp ne i8 %tmp_31, -1
  %notrhs = icmp eq i23 %tmp_354, 0
  %tmp_33 = or i1 %notrhs, %notlhs
  %tmp_34 = fcmp olt float %output_load, 0.000000e+00
  %tmp_35 = and i1 %tmp_33, %tmp_34
  br i1 %tmp_35, label %5, label %._crit_edge

; <label>:5                                       ; preds = %4
  store float 0.000000e+00, float* %output_addr_14, align 4
  br label %._crit_edge

._crit_edge:                                      ; preds = %5, %4
  br label %.preheader

; <label>:6                                       ; preds = %.preheader11
  ret void
}

define internal fastcc void @conv1_p([3468 x float]* nocapture %input_r, [648 x float]* nocapture %weight, [24 x float]* nocapture %bias, [27744 x float]* nocapture %output_r) {
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader21
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i5 [ 0, %0 ], [ %co_43, %.loopexit.loopexit ]
  %exitcond11 = icmp eq i5 %co, -8
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_43 = add i5 %co, 1
  br i1 %exitcond11, label %.preheader19.preheader, label %.preheader21.preheader

.preheader19.preheader:                           ; preds = %.loopexit
  br label %.preheader19

.preheader21.preheader:                           ; preds = %.loopexit
  %tmp = zext i5 %co to i64
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co, i5 0)
  %p_shl_cast = zext i10 %tmp_s to i11
  %tmp_438 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co, i1 false)
  %p_shl1_cast = zext i6 %tmp_438 to i11
  %tmp_439 = add i11 %p_shl1_cast, %p_shl_cast
  %bias_addr = getelementptr [24 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader21

.preheader21:                                     ; preds = %2, %.preheader21.preheader
  %h = phi i6 [ %h_43, %2 ], [ 1, %.preheader21.preheader ]
  %exitcond10 = icmp eq i6 %h, -31
  %empty_135 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  br i1 %exitcond10, label %.loopexit.loopexit, label %.preheader20.preheader

.preheader20.preheader:                           ; preds = %.preheader21
  %tmp_144_cast = zext i6 %h to i11
  %tmp_445 = add i11 %tmp_144_cast, %tmp_439
  %p_shl2_cast = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_445, i5 0)
  %tmp_355 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_445, i1 false)
  %p_shl3_cast = zext i12 %tmp_355 to i16
  %tmp_446 = add i16 %p_shl2_cast, %p_shl3_cast
  br label %.preheader20

.preheader20:                                     ; preds = %1, %.preheader20.preheader
  %w = phi i6 [ %w_42, %1 ], [ 1, %.preheader20.preheader ]
  %exitcond9 = icmp eq i6 %w, -31
  %empty_136 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  br i1 %exitcond9, label %2, label %1

; <label>:1                                       ; preds = %.preheader20
  %bias_load = load float* %bias_addr, align 4
  %tmp_146_cast = zext i6 %w to i16
  %tmp_452 = add i16 %tmp_446, %tmp_146_cast
  %tmp_602_cast = zext i16 %tmp_452 to i64
  %output_addr = getelementptr [27744 x float]* %output_r, i64 0, i64 %tmp_602_cast
  store float %bias_load, float* %output_addr, align 4
  %w_42 = add i6 %w, 1
  br label %.preheader20

; <label>:2                                       ; preds = %.preheader20
  %h_43 = add i6 %h, 1
  br label %.preheader21

.preheader19.loopexit:                            ; preds = %.preheader18
  br label %.preheader19

.preheader19:                                     ; preds = %.preheader19.preheader, %.preheader19.loopexit
  %co1 = phi i5 [ %co_44, %.preheader19.loopexit ], [ 0, %.preheader19.preheader ]
  %exitcond8 = icmp eq i5 %co1, -8
  %empty_137 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_44 = add i5 %co1, 1
  br i1 %exitcond8, label %.preheader13.preheader, label %.preheader18.preheader

.preheader13.preheader:                           ; preds = %.preheader19
  br label %.preheader13

.preheader18.preheader:                           ; preds = %.preheader19
  %tmp_cast = zext i5 %co1 to i8
  %tmp_440 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co1, i2 0)
  %p_shl6_cast = zext i7 %tmp_440 to i8
  %tmp_441 = sub i8 %p_shl6_cast, %tmp_cast
  %tmp_587_cast = sext i8 %tmp_441 to i9
  %tmp_442 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co1, i5 0)
  %p_shl4_cast = zext i10 %tmp_442 to i11
  %tmp_443 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co1, i1 false)
  %p_shl5_cast = zext i6 %tmp_443 to i11
  %tmp_444 = add i11 %p_shl5_cast, %p_shl4_cast
  br label %.preheader18

.preheader18:                                     ; preds = %5, %.preheader18.preheader
  %h2 = phi i6 [ %h_44, %5 ], [ 1, %.preheader18.preheader ]
  %exitcond7 = icmp eq i6 %h2, -31
  %empty_138 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  br i1 %exitcond7, label %.preheader19.loopexit, label %.preheader17.preheader

.preheader17.preheader:                           ; preds = %.preheader18
  %tmp_145_cast = zext i6 %h2 to i11
  %tmp_450 = add i11 %tmp_145_cast, %tmp_444
  %p_shl7_cast = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_450, i5 0)
  %tmp_356 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_450, i1 false)
  %p_shl8_cast = zext i12 %tmp_356 to i16
  %tmp_451 = add i16 %p_shl7_cast, %p_shl8_cast
  br label %.preheader17

.preheader17:                                     ; preds = %4, %.preheader17.preheader
  %w3 = phi i6 [ %w_43, %4 ], [ 1, %.preheader17.preheader ]
  %exitcond6 = icmp eq i6 %w3, -31
  %empty_139 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  br i1 %exitcond6, label %5, label %.preheader16.preheader

.preheader16.preheader:                           ; preds = %.preheader17
  br label %.preheader16

.preheader16.loopexit:                            ; preds = %.preheader15
  br label %.preheader16

.preheader16:                                     ; preds = %.preheader16.preheader, %.preheader16.loopexit
  %ci = phi i2 [ %ci_8, %.preheader16.loopexit ], [ 0, %.preheader16.preheader ]
  %sum = phi float [ %sum_1, %.preheader16.loopexit ], [ 0.000000e+00, %.preheader16.preheader ]
  %exitcond5 = icmp eq i2 %ci, -1
  %empty_140 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %ci_8 = add i2 %ci, 1
  br i1 %exitcond5, label %4, label %.preheader15.preheader

.preheader15.preheader:                           ; preds = %.preheader16
  %tmp_151_cast = zext i2 %ci to i9
  %tmp_457 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %ci, i5 0)
  %p_shl10_cast = zext i7 %tmp_457 to i8
  %tmp_458 = call i3 @_ssdm_op_BitConcatenate.i3.i2.i1(i2 %ci, i1 false)
  %p_shl11_cast = zext i3 %tmp_458 to i8
  %tmp_459 = add i8 %p_shl11_cast, %p_shl10_cast
  %tmp_460 = add i9 %tmp_587_cast, %tmp_151_cast
  %tmp_612_cast = sext i9 %tmp_460 to i64
  %tmp_359 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_460, i2 0)
  %p_shl9 = sext i11 %tmp_359 to i64
  %tmp_461 = sub i64 %p_shl9, %tmp_612_cast
  br label %.preheader15

.preheader15.loopexit:                            ; preds = %.preheader14
  br label %.preheader15

.preheader15:                                     ; preds = %.preheader15.loopexit, %.preheader15.preheader
  %m = phi i2 [ 0, %.preheader15.preheader ], [ %m_7, %.preheader15.loopexit ]
  %sum_1 = phi float [ %sum, %.preheader15.preheader ], [ %sum_2, %.preheader15.loopexit ]
  %exitcond4 = icmp eq i2 %m, -1
  %empty_141 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %m_7 = add i2 %m, 1
  br i1 %exitcond4, label %.preheader16.loopexit, label %.preheader14.preheader

.preheader14.preheader:                           ; preds = %.preheader15
  %tmp_152 = zext i2 %m to i64
  %tmp_462 = add i64 %tmp_461, %tmp_152
  %tmp_360 = trunc i64 %tmp_462 to i11
  %tmp_361 = trunc i64 %tmp_462 to i9
  %p_shl14_cast = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_361, i2 0)
  %tmp_463 = sub i11 %p_shl14_cast, %tmp_360
  %tmp1 = add i2 -1, %m
  %tmp1_cast = sext i2 %tmp1 to i6
  %tmp_153 = add i6 %h2, %tmp1_cast
  %tmp_154_cast = zext i6 %tmp_153 to i8
  %tmp_464 = add i8 %tmp_459, %tmp_154_cast
  %p_shl12_cast = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_464, i5 0)
  %tmp_362 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_464, i1 false)
  %p_shl13_cast = zext i9 %tmp_362 to i13
  %tmp_465 = add i13 %p_shl13_cast, %p_shl12_cast
  br label %.preheader14

.preheader14:                                     ; preds = %3, %.preheader14.preheader
  %sum_2 = phi float [ %sum_15, %3 ], [ %sum_1, %.preheader14.preheader ]
  %n = phi i2 [ %n_7, %3 ], [ 0, %.preheader14.preheader ]
  %exitcond3 = icmp eq i2 %n, -1
  %empty_142 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %n_7 = add i2 %n, 1
  br i1 %exitcond3, label %.preheader15.loopexit, label %3

; <label>:3                                       ; preds = %.preheader14
  %tmp_155_cast = zext i2 %n to i11
  %tmp_466 = add i11 %tmp_463, %tmp_155_cast
  %tmp_622_cast = zext i11 %tmp_466 to i64
  %weight_addr = getelementptr [648 x float]* %weight, i64 0, i64 %tmp_622_cast
  %weight_load = load float* %weight_addr, align 4
  %tmp2 = add i2 %n, -1
  %tmp2_cast = sext i2 %tmp2 to i6
  %tmp_156 = add i6 %w3, %tmp2_cast
  %tmp_157_cast = zext i6 %tmp_156 to i13
  %tmp_467 = add i13 %tmp_465, %tmp_157_cast
  %tmp_623_cast = zext i13 %tmp_467 to i64
  %input_addr = getelementptr [3468 x float]* %input_r, i64 0, i64 %tmp_623_cast
  %input_load = load float* %input_addr, align 4
  %tmp_158 = fmul float %weight_load, %input_load
  %sum_15 = fadd float %sum_2, %tmp_158
  br label %.preheader14

; <label>:4                                       ; preds = %.preheader16
  %tmp_149_cast = zext i6 %w3 to i16
  %tmp_456 = add i16 %tmp_451, %tmp_149_cast
  %tmp_608_cast = zext i16 %tmp_456 to i64
  %output_addr_16 = getelementptr [27744 x float]* %output_r, i64 0, i64 %tmp_608_cast
  %output_load_5 = load float* %output_addr_16, align 4
  %tmp_150 = fadd float %output_load_5, %sum
  store float %tmp_150, float* %output_addr_16, align 4
  %w_43 = add i6 %w3, 1
  br label %.preheader17

; <label>:5                                       ; preds = %.preheader17
  %h_44 = add i6 %h2, 1
  br label %.preheader18

.preheader13.loopexit:                            ; preds = %.preheader12
  br label %.preheader13

.preheader13:                                     ; preds = %.preheader13.preheader, %.preheader13.loopexit
  %co4 = phi i5 [ %co_45, %.preheader13.loopexit ], [ 0, %.preheader13.preheader ]
  %exitcond2 = icmp eq i5 %co4, -8
  %empty_143 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24)
  %co_45 = add i5 %co4, 1
  br i1 %exitcond2, label %9, label %.preheader12.preheader

.preheader12.preheader:                           ; preds = %.preheader13
  %tmp_447 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co4, i5 0)
  %p_shl15_cast = zext i10 %tmp_447 to i11
  %tmp_448 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co4, i1 false)
  %p_shl16_cast = zext i6 %tmp_448 to i11
  %tmp_449 = add i11 %p_shl16_cast, %p_shl15_cast
  br label %.preheader12

.preheader12:                                     ; preds = %8, %.preheader12.preheader
  %h5 = phi i6 [ %h_45, %8 ], [ 1, %.preheader12.preheader ]
  %exitcond1 = icmp eq i6 %h5, -31
  %empty_144 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  br i1 %exitcond1, label %.preheader13.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader12
  %tmp_147_cast = zext i6 %h5 to i11
  %tmp_453 = add i11 %tmp_147_cast, %tmp_449
  %p_shl17_cast = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_453, i5 0)
  %tmp_357 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_453, i1 false)
  %p_shl18_cast = zext i12 %tmp_357 to i16
  %tmp_454 = add i16 %p_shl17_cast, %p_shl18_cast
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %w6 = phi i6 [ %w_44, %._crit_edge ], [ 1, %.preheader.preheader ]
  %exitcond = icmp eq i6 %w6, -31
  %empty_145 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  br i1 %exitcond, label %8, label %6

; <label>:6                                       ; preds = %.preheader
  %tmp_148_cast = zext i6 %w6 to i16
  %tmp_455 = add i16 %tmp_454, %tmp_148_cast
  %tmp_607_cast = zext i16 %tmp_455 to i64
  %output_addr_15 = getelementptr [27744 x float]* %output_r, i64 0, i64 %tmp_607_cast
  %output_load = load float* %output_addr_15, align 4
  %output_load_to_int = bitcast float %output_load to i32
  %tmp_36 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %output_load_to_int, i32 23, i32 30)
  %tmp_358 = trunc i32 %output_load_to_int to i23
  %notlhs = icmp ne i8 %tmp_36, -1
  %notrhs = icmp eq i23 %tmp_358, 0
  %tmp_38 = or i1 %notrhs, %notlhs
  %tmp_39 = fcmp olt float %output_load, 0.000000e+00
  %tmp_40 = and i1 %tmp_38, %tmp_39
  br i1 %tmp_40, label %7, label %._crit_edge

; <label>:7                                       ; preds = %6
  store float 0.000000e+00, float* %output_addr_15, align 4
  br label %._crit_edge

._crit_edge:                                      ; preds = %7, %6
  %w_44 = add i6 %w6, 1
  br label %.preheader

; <label>:8                                       ; preds = %.preheader
  %h_45 = add i6 %h5, 1
  br label %.preheader12

; <label>:9                                       ; preds = %.preheader13
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
  %empty_146 = trunc i32 %empty to i8
  ret i8 %empty_146
}

declare i8 @_ssdm_op_PartSelect.i8.i10.i32.i32(i10, i32, i32) nounwind readnone

declare i7 @_ssdm_op_PartSelect.i7.i9.i32.i32(i9, i32, i32) nounwind readnone

define weak i7 @_ssdm_op_PartSelect.i7.i8.i32.i32(i8, i32, i32) nounwind readnone {
entry:
  %empty = call i8 @llvm.part.select.i8(i8 %0, i32 %1, i32 %2)
  %empty_147 = trunc i8 %empty to i7
  ret i7 %empty_147
}

define weak i6 @_ssdm_op_PartSelect.i6.i7.i32.i32(i7, i32, i32) nounwind readnone {
entry:
  %empty = call i7 @llvm.part.select.i7(i7 %0, i32 %1, i32 %2)
  %empty_148 = trunc i7 %empty to i6
  ret i6 %empty_148
}

define weak i5 @_ssdm_op_PartSelect.i5.i6.i32.i32(i6, i32, i32) nounwind readnone {
entry:
  %empty = call i6 @llvm.part.select.i6(i6 %0, i32 %1, i32 %2)
  %empty_149 = trunc i6 %empty to i5
  ret i5 %empty_149
}

define weak i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5, i32, i32) nounwind readnone {
entry:
  %empty = call i5 @llvm.part.select.i5(i5 %0, i32 %1, i32 %2)
  %empty_150 = trunc i5 %empty to i4
  ret i4 %empty_150
}

define weak i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5, i32, i32) nounwind readnone {
entry:
  %empty = call i5 @llvm.part.select.i5(i5 %0, i32 %1, i32 %2)
  %empty_151 = trunc i5 %empty to i3
  ret i3 %empty_151
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
  %empty_152 = zext i1 %1 to i9
  %empty_153 = shl i9 %empty, 1
  %empty_154 = or i9 %empty_153, %empty_152
  ret i9 %empty_154
}

define weak i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7, i2) nounwind readnone {
entry:
  %empty = zext i7 %0 to i9
  %empty_155 = zext i2 %1 to i9
  %empty_156 = shl i9 %empty, 2
  %empty_157 = or i9 %empty_156, %empty_155
  ret i9 %empty_157
}

define weak i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6, i3) nounwind readnone {
entry:
  %empty = zext i6 %0 to i9
  %empty_158 = zext i3 %1 to i9
  %empty_159 = shl i9 %empty, 3
  %empty_160 = or i9 %empty_159, %empty_158
  ret i9 %empty_160
}

define weak i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5, i4) nounwind readnone {
entry:
  %empty = zext i5 %0 to i9
  %empty_161 = zext i4 %1 to i9
  %empty_162 = shl i9 %empty, 4
  %empty_163 = or i9 %empty_162, %empty_161
  ret i9 %empty_163
}

define weak i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4, i5) nounwind readnone {
entry:
  %empty = zext i4 %0 to i9
  %empty_164 = zext i5 %1 to i9
  %empty_165 = shl i9 %empty, 5
  %empty_166 = or i9 %empty_165, %empty_164
  ret i9 %empty_166
}

define weak i9 @_ssdm_op_BitConcatenate.i9.i1.i5.i3(i1, i5, i3) nounwind readnone {
entry:
  %empty = zext i5 %1 to i8
  %empty_167 = zext i3 %2 to i8
  %empty_168 = shl i8 %empty, 3
  %empty_169 = or i8 %empty_168, %empty_167
  %empty_170 = zext i1 %0 to i9
  %empty_171 = zext i8 %empty_169 to i9
  %empty_172 = shl i9 %empty_170, 8
  %empty_173 = or i9 %empty_172, %empty_171
  ret i9 %empty_173
}

define weak i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7, i1) nounwind readnone {
entry:
  %empty = zext i7 %0 to i8
  %empty_174 = zext i1 %1 to i8
  %empty_175 = shl i8 %empty, 1
  %empty_176 = or i8 %empty_175, %empty_174
  ret i8 %empty_176
}

define weak i8 @_ssdm_op_BitConcatenate.i8.i6.i2(i6, i2) nounwind readnone {
entry:
  %empty = zext i6 %0 to i8
  %empty_177 = zext i2 %1 to i8
  %empty_178 = shl i8 %empty, 2
  %empty_179 = or i8 %empty_178, %empty_177
  ret i8 %empty_179
}

define weak i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5, i3) nounwind readnone {
entry:
  %empty = zext i5 %0 to i8
  %empty_180 = zext i3 %1 to i8
  %empty_181 = shl i8 %empty, 3
  %empty_182 = or i8 %empty_181, %empty_180
  ret i8 %empty_182
}

define weak i8 @_ssdm_op_BitConcatenate.i8.i1.i5.i2(i1, i5, i2) nounwind readnone {
entry:
  %empty = zext i5 %1 to i7
  %empty_183 = zext i2 %2 to i7
  %empty_184 = shl i7 %empty, 2
  %empty_185 = or i7 %empty_184, %empty_183
  %empty_186 = zext i1 %0 to i8
  %empty_187 = zext i7 %empty_185 to i8
  %empty_188 = shl i8 %empty_186, 7
  %empty_189 = or i8 %empty_188, %empty_187
  ret i8 %empty_189
}

define weak i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6, i1) nounwind readnone {
entry:
  %empty = zext i6 %0 to i7
  %empty_190 = zext i1 %1 to i7
  %empty_191 = shl i7 %empty, 1
  %empty_192 = or i7 %empty_191, %empty_190
  ret i7 %empty_192
}

define weak i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5, i2) nounwind readnone {
entry:
  %empty = zext i5 %0 to i7
  %empty_193 = zext i2 %1 to i7
  %empty_194 = shl i7 %empty, 2
  %empty_195 = or i7 %empty_194, %empty_193
  ret i7 %empty_195
}

define weak i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4, i3) nounwind readnone {
entry:
  %empty = zext i4 %0 to i7
  %empty_196 = zext i3 %1 to i7
  %empty_197 = shl i7 %empty, 3
  %empty_198 = or i7 %empty_197, %empty_196
  ret i7 %empty_198
}

define weak i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2, i5) nounwind readnone {
entry:
  %empty = zext i2 %0 to i7
  %empty_199 = zext i5 %1 to i7
  %empty_200 = shl i7 %empty, 5
  %empty_201 = or i7 %empty_200, %empty_199
  ret i7 %empty_201
}

define weak i64 @_ssdm_op_BitConcatenate.i64.i50.i14(i50, i14) nounwind readnone {
entry:
  %empty = zext i50 %0 to i64
  %empty_202 = zext i14 %1 to i64
  %empty_203 = shl i64 %empty, 14
  %empty_204 = or i64 %empty_203, %empty_202
  ret i64 %empty_204
}

define weak i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5, i1) nounwind readnone {
entry:
  %empty = zext i5 %0 to i6
  %empty_205 = zext i1 %1 to i6
  %empty_206 = shl i6 %empty, 1
  %empty_207 = or i6 %empty_206, %empty_205
  ret i6 %empty_207
}

define weak i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2, i4) nounwind readnone {
entry:
  %empty = zext i2 %0 to i6
  %empty_208 = zext i4 %1 to i6
  %empty_209 = shl i6 %empty, 4
  %empty_210 = or i6 %empty_209, %empty_208
  ret i6 %empty_210
}

define weak i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1, i5) nounwind readnone {
entry:
  %empty = zext i1 %0 to i6
  %empty_211 = zext i5 %1 to i6
  %empty_212 = shl i6 %empty, 5
  %empty_213 = or i6 %empty_212, %empty_211
  ret i6 %empty_213
}

define weak i5 @_ssdm_op_BitConcatenate.i5.i4.i1(i4, i1) nounwind readnone {
entry:
  %empty = zext i4 %0 to i5
  %empty_214 = zext i1 %1 to i5
  %empty_215 = shl i5 %empty, 1
  %empty_216 = or i5 %empty_215, %empty_214
  ret i5 %empty_216
}

define weak i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2, i3) nounwind readnone {
entry:
  %empty = zext i2 %0 to i5
  %empty_217 = zext i3 %1 to i5
  %empty_218 = shl i5 %empty, 3
  %empty_219 = or i5 %empty_218, %empty_217
  ret i5 %empty_219
}

define weak i4 @_ssdm_op_BitConcatenate.i4.i3.i1(i3, i1) nounwind readnone {
entry:
  %empty = zext i3 %0 to i4
  %empty_220 = zext i1 %1 to i4
  %empty_221 = shl i4 %empty, 1
  %empty_222 = or i4 %empty_221, %empty_220
  ret i4 %empty_222
}

define weak i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2, i2) nounwind readnone {
entry:
  %empty = zext i2 %0 to i4
  %empty_223 = zext i2 %1 to i4
  %empty_224 = shl i4 %empty, 2
  %empty_225 = or i4 %empty_224, %empty_223
  ret i4 %empty_225
}

define weak i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1, i3) nounwind readnone {
entry:
  %empty = zext i1 %0 to i4
  %empty_226 = zext i3 %1 to i4
  %empty_227 = shl i4 %empty, 3
  %empty_228 = or i4 %empty_227, %empty_226
  ret i4 %empty_228
}

define weak i3 @_ssdm_op_BitConcatenate.i3.i2.i1(i2, i1) nounwind readnone {
entry:
  %empty = zext i2 %0 to i3
  %empty_229 = zext i1 %1 to i3
  %empty_230 = shl i3 %empty, 1
  %empty_231 = or i3 %empty_230, %empty_229
  ret i3 %empty_231
}

define weak i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13, i5) nounwind readnone {
entry:
  %empty = zext i13 %0 to i18
  %empty_232 = zext i5 %1 to i18
  %empty_233 = shl i18 %empty, 5
  %empty_234 = or i18 %empty_233, %empty_232
  ret i18 %empty_234
}

define weak i18 @_ssdm_op_BitConcatenate.i18.i10.i8(i10, i8) nounwind readnone {
entry:
  %empty = zext i10 %0 to i18
  %empty_235 = zext i8 %1 to i18
  %empty_236 = shl i18 %empty, 8
  %empty_237 = or i18 %empty_236, %empty_235
  ret i18 %empty_237
}

define weak i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12, i5) nounwind readnone {
entry:
  %empty = zext i12 %0 to i17
  %empty_238 = zext i5 %1 to i17
  %empty_239 = shl i17 %empty, 5
  %empty_240 = or i17 %empty_239, %empty_238
  ret i17 %empty_240
}

define weak i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13, i3) nounwind readnone {
entry:
  %empty = zext i13 %0 to i16
  %empty_241 = zext i3 %1 to i16
  %empty_242 = shl i16 %empty, 3
  %empty_243 = or i16 %empty_242, %empty_241
  ret i16 %empty_243
}

define weak i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11, i5) nounwind readnone {
entry:
  %empty = zext i11 %0 to i16
  %empty_244 = zext i5 %1 to i16
  %empty_245 = shl i16 %empty, 5
  %empty_246 = or i16 %empty_245, %empty_244
  ret i16 %empty_246
}

define weak i16 @_ssdm_op_BitConcatenate.i16.i10.i6(i10, i6) nounwind readnone {
entry:
  %empty = zext i10 %0 to i16
  %empty_247 = zext i6 %1 to i16
  %empty_248 = shl i16 %empty, 6
  %empty_249 = or i16 %empty_248, %empty_247
  ret i16 %empty_249
}

define weak i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8, i7) nounwind readnone {
entry:
  %empty = zext i8 %0 to i15
  %empty_250 = zext i7 %1 to i15
  %empty_251 = shl i15 %empty, 7
  %empty_252 = or i15 %empty_251, %empty_250
  ret i15 %empty_252
}

define weak i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13, i2) nounwind readnone {
entry:
  %empty = zext i13 %0 to i15
  %empty_253 = zext i2 %1 to i15
  %empty_254 = shl i15 %empty, 2
  %empty_255 = or i15 %empty_254, %empty_253
  ret i15 %empty_255
}

define weak i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12, i3) nounwind readnone {
entry:
  %empty = zext i12 %0 to i15
  %empty_256 = zext i3 %1 to i15
  %empty_257 = shl i15 %empty, 3
  %empty_258 = or i15 %empty_257, %empty_256
  ret i15 %empty_258
}

define weak i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11, i4) nounwind readnone {
entry:
  %empty = zext i11 %0 to i15
  %empty_259 = zext i4 %1 to i15
  %empty_260 = shl i15 %empty, 4
  %empty_261 = or i15 %empty_260, %empty_259
  ret i15 %empty_261
}

define weak i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10, i5) nounwind readnone {
entry:
  %empty = zext i10 %0 to i15
  %empty_262 = zext i5 %1 to i15
  %empty_263 = shl i15 %empty, 5
  %empty_264 = or i15 %empty_263, %empty_262
  ret i15 %empty_264
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i9.i5(i9, i5) nounwind readnone {
entry:
  %empty = zext i9 %0 to i14
  %empty_265 = zext i5 %1 to i14
  %empty_266 = shl i14 %empty, 5
  %empty_267 = or i14 %empty_266, %empty_265
  ret i14 %empty_267
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i7.i7(i7, i7) nounwind readnone {
entry:
  %empty = zext i7 %0 to i14
  %empty_268 = zext i7 %1 to i14
  %empty_269 = shl i14 %empty, 7
  %empty_270 = or i14 %empty_269, %empty_268
  ret i14 %empty_270
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i13.i1(i13, i1) nounwind readnone {
entry:
  %empty = zext i13 %0 to i14
  %empty_271 = zext i1 %1 to i14
  %empty_272 = shl i14 %empty, 1
  %empty_273 = or i14 %empty_272, %empty_271
  ret i14 %empty_273
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12, i2) nounwind readnone {
entry:
  %empty = zext i12 %0 to i14
  %empty_274 = zext i2 %1 to i14
  %empty_275 = shl i14 %empty, 2
  %empty_276 = or i14 %empty_275, %empty_274
  ret i14 %empty_276
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11, i3) nounwind readnone {
entry:
  %empty = zext i11 %0 to i14
  %empty_277 = zext i3 %1 to i14
  %empty_278 = shl i14 %empty, 3
  %empty_279 = or i14 %empty_278, %empty_277
  ret i14 %empty_279
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10, i4) nounwind readnone {
entry:
  %empty = zext i10 %0 to i14
  %empty_280 = zext i4 %1 to i14
  %empty_281 = shl i14 %empty, 4
  %empty_282 = or i14 %empty_281, %empty_280
  ret i14 %empty_282
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8, i5) nounwind readnone {
entry:
  %empty = zext i8 %0 to i13
  %empty_283 = zext i5 %1 to i13
  %empty_284 = shl i13 %empty, 5
  %empty_285 = or i13 %empty_284, %empty_283
  ret i13 %empty_285
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7, i6) nounwind readnone {
entry:
  %empty = zext i7 %0 to i13
  %empty_286 = zext i6 %1 to i13
  %empty_287 = shl i13 %empty, 6
  %empty_288 = or i13 %empty_287, %empty_286
  ret i13 %empty_288
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i4.i9(i4, i9) nounwind readnone {
entry:
  %empty = zext i4 %0 to i13
  %empty_289 = zext i9 %1 to i13
  %empty_290 = shl i13 %empty, 9
  %empty_291 = or i13 %empty_290, %empty_289
  ret i13 %empty_291
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12, i1) nounwind readnone {
entry:
  %empty = zext i12 %0 to i13
  %empty_292 = zext i1 %1 to i13
  %empty_293 = shl i13 %empty, 1
  %empty_294 = or i13 %empty_293, %empty_292
  ret i13 %empty_294
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11, i2) nounwind readnone {
entry:
  %empty = zext i11 %0 to i13
  %empty_295 = zext i2 %1 to i13
  %empty_296 = shl i13 %empty, 2
  %empty_297 = or i13 %empty_296, %empty_295
  ret i13 %empty_297
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10, i3) nounwind readnone {
entry:
  %empty = zext i10 %0 to i13
  %empty_298 = zext i3 %1 to i13
  %empty_299 = shl i13 %empty, 3
  %empty_300 = or i13 %empty_299, %empty_298
  ret i13 %empty_300
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9, i3) nounwind readnone {
entry:
  %empty = zext i9 %0 to i12
  %empty_301 = zext i3 %1 to i12
  %empty_302 = shl i12 %empty, 3
  %empty_303 = or i12 %empty_302, %empty_301
  ret i12 %empty_303
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i7.i5(i7, i5) nounwind readnone {
entry:
  %empty = zext i7 %0 to i12
  %empty_304 = zext i5 %1 to i12
  %empty_305 = shl i12 %empty, 5
  %empty_306 = or i12 %empty_305, %empty_304
  ret i12 %empty_306
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i6.i6(i6, i6) nounwind readnone {
entry:
  %empty = zext i6 %0 to i12
  %empty_307 = zext i6 %1 to i12
  %empty_308 = shl i12 %empty, 6
  %empty_309 = or i12 %empty_308, %empty_307
  ret i12 %empty_309
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i2.i5.i5(i2, i5, i5) nounwind readnone {
entry:
  %empty = zext i5 %1 to i10
  %empty_310 = zext i5 %2 to i10
  %empty_311 = shl i10 %empty, 5
  %empty_312 = or i10 %empty_311, %empty_310
  %empty_313 = zext i2 %0 to i12
  %empty_314 = zext i10 %empty_312 to i12
  %empty_315 = shl i12 %empty_313, 10
  %empty_316 = or i12 %empty_315, %empty_314
  ret i12 %empty_316
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11, i1) nounwind readnone {
entry:
  %empty = zext i11 %0 to i12
  %empty_317 = zext i1 %1 to i12
  %empty_318 = shl i12 %empty, 1
  %empty_319 = or i12 %empty_318, %empty_317
  ret i12 %empty_319
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10, i2) nounwind readnone {
entry:
  %empty = zext i10 %0 to i12
  %empty_320 = zext i2 %1 to i12
  %empty_321 = shl i12 %empty, 2
  %empty_322 = or i12 %empty_321, %empty_320
  ret i12 %empty_322
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9, i2) nounwind readnone {
entry:
  %empty = zext i9 %0 to i11
  %empty_323 = zext i2 %1 to i11
  %empty_324 = shl i11 %empty, 2
  %empty_325 = or i11 %empty_324, %empty_323
  ret i11 %empty_325
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8, i3) nounwind readnone {
entry:
  %empty = zext i8 %0 to i11
  %empty_326 = zext i3 %1 to i11
  %empty_327 = shl i11 %empty, 3
  %empty_328 = or i11 %empty_327, %empty_326
  ret i11 %empty_328
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7, i4) nounwind readnone {
entry:
  %empty = zext i7 %0 to i11
  %empty_329 = zext i4 %1 to i11
  %empty_330 = shl i11 %empty, 4
  %empty_331 = or i11 %empty_330, %empty_329
  ret i11 %empty_331
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i6.i5(i6, i5) nounwind readnone {
entry:
  %empty = zext i6 %0 to i11
  %empty_332 = zext i5 %1 to i11
  %empty_333 = shl i11 %empty, 5
  %empty_334 = or i11 %empty_333, %empty_332
  ret i11 %empty_334
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10, i1) nounwind readnone {
entry:
  %empty = zext i10 %0 to i11
  %empty_335 = zext i1 %1 to i11
  %empty_336 = shl i11 %empty, 1
  %empty_337 = or i11 %empty_336, %empty_335
  ret i11 %empty_337
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i1.i5.i5(i1, i5, i5) nounwind readnone {
entry:
  %empty = zext i5 %1 to i10
  %empty_338 = zext i5 %2 to i10
  %empty_339 = shl i10 %empty, 5
  %empty_340 = or i10 %empty_339, %empty_338
  %empty_341 = zext i1 %0 to i11
  %empty_342 = zext i10 %empty_340 to i11
  %empty_343 = shl i11 %empty_341, 10
  %empty_344 = or i11 %empty_343, %empty_342
  ret i11 %empty_344
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8, i2) nounwind readnone {
entry:
  %empty = zext i8 %0 to i10
  %empty_345 = zext i2 %1 to i10
  %empty_346 = shl i10 %empty, 2
  %empty_347 = or i10 %empty_346, %empty_345
  ret i10 %empty_347
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7, i3) nounwind readnone {
entry:
  %empty = zext i7 %0 to i10
  %empty_348 = zext i3 %1 to i10
  %empty_349 = shl i10 %empty, 3
  %empty_350 = or i10 %empty_349, %empty_348
  ret i10 %empty_350
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6, i4) nounwind readnone {
entry:
  %empty = zext i6 %0 to i10
  %empty_351 = zext i4 %1 to i10
  %empty_352 = shl i10 %empty, 4
  %empty_353 = or i10 %empty_352, %empty_351
  ret i10 %empty_353
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5, i5) nounwind readnone {
entry:
  %empty = zext i5 %0 to i10
  %empty_354 = zext i5 %1 to i10
  %empty_355 = shl i10 %empty, 5
  %empty_356 = or i10 %empty_355, %empty_354
  ret i10 %empty_356
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i2.i5.i3(i2, i5, i3) nounwind readnone {
entry:
  %empty = zext i5 %1 to i8
  %empty_357 = zext i3 %2 to i8
  %empty_358 = shl i8 %empty, 3
  %empty_359 = or i8 %empty_358, %empty_357
  %empty_360 = zext i2 %0 to i10
  %empty_361 = zext i8 %empty_359 to i10
  %empty_362 = shl i10 %empty_360, 8
  %empty_363 = or i10 %empty_362, %empty_361
  ret i10 %empty_363
}

declare void @_GLOBAL__I_a55() nounwind section ".text.startup"

declare void @_GLOBAL__I_a() nounwind section ".text.startup"

define void @ShuffleNetV2([3072 x float]* %image_r, [648 x float]* %conv1_weight, [9720 x float]* %shuffle_conv_3x3, [131904 x float]* %shuffle_conv_1x1, [98304 x float]* %conv_last_weight, [5120 x float]* %fc_weight, [3618 x float]* %bias, [1000 x float]* %fc_output) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap([3072 x float]* %image_r) nounwind, !map !434
  call void (...)* @_ssdm_op_SpecBitsMap([648 x float]* %conv1_weight) nounwind, !map !439
  call void (...)* @_ssdm_op_SpecBitsMap([9720 x float]* %shuffle_conv_3x3) nounwind, !map !444
  call void (...)* @_ssdm_op_SpecBitsMap([131904 x float]* %shuffle_conv_1x1) nounwind, !map !450
  call void (...)* @_ssdm_op_SpecBitsMap([98304 x float]* %conv_last_weight) nounwind, !map !456
  call void (...)* @_ssdm_op_SpecBitsMap([5120 x float]* %fc_weight) nounwind, !map !461
  call void (...)* @_ssdm_op_SpecBitsMap([3618 x float]* %bias) nounwind, !map !466
  call void (...)* @_ssdm_op_SpecBitsMap([1000 x float]* %fc_output) nounwind, !map !472
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
  %i1_cast715_cast = zext i10 %i1 to i11
  %exitcond369 = icmp eq i10 %i1, -512
  %empty_364 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512) nounwind
  %i_2 = add i10 %i1, 1
  br i1 %exitcond369, label %.preheader665.preheader, label %3

.preheader665.preheader:                          ; preds = %.preheader666
  br label %.preheader665

; <label>:3                                       ; preds = %.preheader666
  %tmp_s = add i11 %i1_cast715_cast, -1000
  %tmp_cast = sext i11 %tmp_s to i12
  %tmp_159 = zext i12 %tmp_cast to i64
  %bias_addr_1 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_159
  %bias_load_1 = load float* %bias_addr_1, align 4
  %tmp_160 = zext i10 %i1 to i64
  %conv_last_bias_addr = getelementptr inbounds [512 x float]* @conv_last_bias, i64 0, i64 %tmp_160
  store float %bias_load_1, float* %conv_last_bias_addr, align 4
  br label %.preheader666

.preheader665:                                    ; preds = %.preheader665.preheader, %4
  %i2 = phi i4 [ %i_3, %4 ], [ 0, %.preheader665.preheader ]
  %i2_cast713_cast = zext i4 %i2 to i10
  %exitcond368 = icmp eq i4 %i2, -6
  %empty_365 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10) nounwind
  %i_3 = add i4 %i2, 1
  br i1 %exitcond368, label %.preheader664.preheader, label %4

.preheader664.preheader:                          ; preds = %.preheader665
  br label %.preheader664

; <label>:4                                       ; preds = %.preheader665
  %tmp_161 = add i10 %i2_cast713_cast, -488
  %tmp_225_cast = sext i10 %tmp_161 to i12
  %tmp_162 = zext i12 %tmp_225_cast to i64
  %bias_addr_2 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_162
  %bias_load_2 = load float* %bias_addr_2, align 4
  %tmp_163 = zext i4 %i2 to i64
  %fc_bias_addr = getelementptr inbounds [10 x float]* @fc_bias, i64 0, i64 %tmp_163
  store float %bias_load_2, float* %fc_bias_addr, align 4
  br label %.preheader665

.preheader664.loopexit:                           ; preds = %.preheader663
  br label %.preheader664

.preheader664:                                    ; preds = %.preheader664.preheader, %.preheader664.loopexit
  %ci = phi i2 [ %ci_9, %.preheader664.loopexit ], [ 0, %.preheader664.preheader ]
  %exitcond367 = icmp eq i2 %ci, -1
  %empty_366 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %ci_9 = add i2 %ci, 1
  br i1 %exitcond367, label %6, label %.preheader663.preheader

.preheader663.preheader:                          ; preds = %.preheader664
  %tmp_471 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %ci, i5 0)
  %tmp_638_cast = zext i7 %tmp_471 to i8
  %tmp_478 = call i3 @_ssdm_op_BitConcatenate.i3.i2.i1(i2 %ci, i1 false)
  %p_shl276_cast = zext i3 %tmp_478 to i8
  %tmp_479 = add i8 %p_shl276_cast, %tmp_638_cast
  br label %.preheader663

.preheader663.loopexit:                           ; preds = %.preheader662
  br label %.preheader663

.preheader663:                                    ; preds = %.preheader663.loopexit, %.preheader663.preheader
  %w = phi i6 [ 0, %.preheader663.preheader ], [ %w_45, %.preheader663.loopexit ]
  %exitcond366 = icmp eq i6 %w, -32
  %empty_367 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32) nounwind
  %w_45 = add i6 %w, 1
  br i1 %exitcond366, label %.preheader664.loopexit, label %.preheader662.preheader

.preheader662.preheader:                          ; preds = %.preheader663
  %tmp_164_cast = zext i6 %w to i8
  %tmp_497 = add i8 %tmp_164_cast, %tmp_638_cast
  %tmp_693_cast1 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_497, i5 0)
  %tmp_165_cast = zext i6 %w_45 to i8
  %tmp_499 = add i8 %tmp_165_cast, %tmp_479
  %p_shl277_cast = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_499, i5 0)
  %tmp_368 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_499, i1 false)
  %p_shl278_cast = zext i9 %tmp_368 to i13
  %tmp_500 = add i13 %p_shl277_cast, %p_shl278_cast
  br label %.preheader662

.preheader662:                                    ; preds = %5, %.preheader662.preheader
  %h = phi i6 [ %h_46, %5 ], [ 0, %.preheader662.preheader ]
  %exitcond365 = icmp eq i6 %h, -32
  %empty_368 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32) nounwind
  %h_46 = add i6 %h, 1
  br i1 %exitcond365, label %.preheader663.loopexit, label %5

; <label>:5                                       ; preds = %.preheader662
  %tmp_170_cast = zext i6 %h to i13
  %tmp_503 = add i13 %tmp_693_cast1, %tmp_170_cast
  %tmp_741_cast = zext i13 %tmp_503 to i64
  %image_addr = getelementptr [3072 x float]* %image_r, i64 0, i64 %tmp_741_cast
  %image_load = load float* %image_addr, align 4
  %tmp_171_cast = zext i6 %h_46 to i13
  %tmp_504 = add i13 %tmp_500, %tmp_171_cast
  %tmp_743_cast = zext i13 %tmp_504 to i64
  %image_p_addr = getelementptr [3468 x float]* @image_p, i64 0, i64 %tmp_743_cast
  store float %image_load, float* %image_p_addr, align 4
  br label %.preheader662

; <label>:6                                       ; preds = %.preheader664
  call fastcc void @conv1_p([3468 x float]* @image_p, [648 x float]* %conv1_weight, [24 x float]* @conv1_bias, [27744 x float]* @conv1_output_p) nounwind
  br label %.loopexit899

.loopexit899.loopexit:                            ; preds = %.preheader661
  br label %.loopexit899

.loopexit899:                                     ; preds = %.loopexit899.loopexit, %6
  %co = phi i5 [ 0, %6 ], [ %co_46, %.loopexit899.loopexit ]
  %exitcond364 = icmp eq i5 %co, -8
  %empty_369 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_46 = add i5 %co, 1
  br i1 %exitcond364, label %.preheader660.preheader, label %.preheader661.preheader

.preheader660.preheader:                          ; preds = %.loopexit899
  br label %.preheader660

.preheader661.preheader:                          ; preds = %.loopexit899
  %tmp_481 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co, i5 0)
  %p_shl279_cast = zext i10 %tmp_481 to i11
  %tmp_484 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co, i3 0)
  %p_shl280_cast = zext i8 %tmp_484 to i11
  %tmp_486 = sub i11 %p_shl279_cast, %p_shl280_cast
  %tmp_680_cast = sext i11 %tmp_486 to i12
  br label %.preheader661

.preheader661:                                    ; preds = %7, %.preheader661.preheader
  %ci3 = phi i5 [ %ci_10, %7 ], [ 0, %.preheader661.preheader ]
  %exitcond363 = icmp eq i5 %ci3, -8
  %empty_370 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_10 = add i5 %ci3, 1
  br i1 %exitcond363, label %.loopexit899.loopexit, label %7

; <label>:7                                       ; preds = %.preheader661
  %tmp_169_cast = zext i5 %ci3 to i12
  %tmp_501 = add i12 %tmp_680_cast, %tmp_169_cast
  %tmp_738_cast = sext i12 %tmp_501 to i64
  %shuffle_conv_1x1_add = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_738_cast
  %weights_24_24_1x1_ad = getelementptr [576 x float]* @weights_24_24_1x1, i64 0, i64 %tmp_738_cast
  %shuffle_conv_1x1_loa = load float* %shuffle_conv_1x1_add, align 4
  store float %shuffle_conv_1x1_loa, float* %weights_24_24_1x1_ad, align 4
  br label %.preheader661

.preheader660:                                    ; preds = %.preheader660.preheader, %8
  %i4 = phi i5 [ %i_4, %8 ], [ 0, %.preheader660.preheader ]
  %i4_cast = zext i5 %i4 to i6
  %exitcond362 = icmp eq i5 %i4, -8
  %empty_371 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_4 = add i5 %i4, 1
  br i1 %exitcond362, label %9, label %8

; <label>:8                                       ; preds = %.preheader660
  %tmp_166 = add i6 %i4_cast, 24
  %tmp_167 = zext i6 %tmp_166 to i64
  %bias_addr_3 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_167
  %bias_load_3 = load float* %bias_addr_3, align 4
  %tmp_168 = zext i5 %i4 to i64
  %bias_24_addr = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_168
  store float %bias_load_3, float* %bias_24_addr, align 4
  br label %.preheader660

; <label>:9                                       ; preds = %.preheader660
  call fastcc void @subconv_1x1_32_p([576 x float]* @weights_24_24_1x1, [24 x float]* @bias_24) nounwind
  br label %.loopexit898

.loopexit898.loopexit:                            ; preds = %.preheader659
  br label %.loopexit898

.loopexit898:                                     ; preds = %.loopexit898.loopexit, %9
  %co5 = phi i5 [ 0, %9 ], [ %co_47, %.loopexit898.loopexit ]
  %exitcond361 = icmp eq i5 %co5, -8
  %empty_372 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_47 = add i5 %co5, 1
  br i1 %exitcond361, label %.preheader657.preheader, label %.preheader659.preheader

.preheader657.preheader:                          ; preds = %.loopexit898
  br label %.preheader657

.preheader659.preheader:                          ; preds = %.loopexit898
  %tmp_172_cast = zext i5 %co5 to i8
  %tmp_514 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co5, i2 0)
  %p_shl281_cast = zext i7 %tmp_514 to i8
  %tmp_521 = sub i8 %p_shl281_cast, %tmp_172_cast
  %tmp_760_cast1 = sext i8 %tmp_521 to i9
  br label %.preheader659

.preheader659.loopexit:                           ; preds = %.preheader658
  br label %.preheader659

.preheader659:                                    ; preds = %.preheader659.loopexit, %.preheader659.preheader
  %w6 = phi i2 [ 0, %.preheader659.preheader ], [ %w_46, %.preheader659.loopexit ]
  %exitcond360 = icmp eq i2 %w6, -1
  %empty_373 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_46 = add i2 %w6, 1
  br i1 %exitcond360, label %.loopexit898.loopexit, label %.preheader658.preheader

.preheader658.preheader:                          ; preds = %.preheader659
  %tmp_176_cast = zext i2 %w6 to i9
  %tmp_522 = add i9 %tmp_176_cast, %tmp_760_cast1
  %tmp_763_cast = sext i9 %tmp_522 to i15
  %tmp_370 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_522, i2 0)
  %p_shl282_cast = sext i11 %tmp_370 to i15
  %tmp_524 = sub i15 %p_shl282_cast, %tmp_763_cast
  br label %.preheader658

.preheader658:                                    ; preds = %10, %.preheader658.preheader
  %h7 = phi i2 [ %h_47, %10 ], [ 0, %.preheader658.preheader ]
  %exitcond359 = icmp eq i2 %h7, -1
  %empty_374 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_47 = add i2 %h7, 1
  br i1 %exitcond359, label %.preheader659.loopexit, label %10

; <label>:10                                      ; preds = %.preheader658
  %tmp_178_cast = zext i2 %h7 to i15
  %tmp_546 = add i15 %tmp_524, %tmp_178_cast
  %tmp_854_cast = zext i15 %tmp_546 to i64
  %shuffle_conv_3x3_add = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_854_cast
  %weights_24_1_3x3_add = getelementptr [216 x float]* @weights_24_1_3x3, i64 0, i64 %tmp_854_cast
  %shuffle_conv_3x3_loa = load float* %shuffle_conv_3x3_add, align 4
  store float %shuffle_conv_3x3_loa, float* %weights_24_1_3x3_add, align 4
  br label %.preheader658

.preheader657:                                    ; preds = %.preheader657.preheader, %11
  %i8 = phi i5 [ %i_5, %11 ], [ 0, %.preheader657.preheader ]
  %i8_cast = zext i5 %i8 to i7
  %exitcond358 = icmp eq i5 %i8, -8
  %empty_375 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_5 = add i5 %i8, 1
  br i1 %exitcond358, label %12, label %11

; <label>:11                                      ; preds = %.preheader657
  %tmp_173 = add i7 %i8_cast, 48
  %tmp_174 = zext i7 %tmp_173 to i64
  %bias_addr_4 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_174
  %bias_load_4 = load float* %bias_addr_4, align 4
  %tmp_175 = zext i5 %i8 to i64
  %bias_24_addr_1 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_175
  store float %bias_load_4, float* %bias_24_addr_1, align 4
  br label %.preheader657

; <label>:12                                      ; preds = %.preheader657
  call fastcc void @subconv_3x3_32_strid([27744 x float]* @ShuffleConvs_0_Downs, [216 x float]* @weights_24_1_3x3, [24 x float]* @bias_24, [7776 x float]* @buffer0_1_24_16x16_p) nounwind
  br label %.loopexit897

.loopexit897.loopexit:                            ; preds = %.preheader656
  br label %.loopexit897

.loopexit897:                                     ; preds = %.loopexit897.loopexit, %12
  %co9 = phi i5 [ 0, %12 ], [ %co_48, %.loopexit897.loopexit ]
  %co9_cast = zext i5 %co9 to i6
  %exitcond357 = icmp eq i5 %co9, -8
  %empty_376 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_48 = add i5 %co9, 1
  br i1 %exitcond357, label %.preheader655.preheader, label %.preheader656.preheader

.preheader655.preheader:                          ; preds = %.loopexit897
  br label %.preheader655

.preheader656.preheader:                          ; preds = %.loopexit897
  %tmp_177 = add i6 %co9_cast, 24
  %tmp_527 = call i11 @_ssdm_op_BitConcatenate.i11.i6.i5(i6 %tmp_177, i5 0)
  %p_shl285_cast = zext i11 %tmp_527 to i12
  %tmp_529 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %tmp_177, i3 0)
  %p_shl286_cast = zext i9 %tmp_529 to i12
  %tmp_540 = sub i12 %p_shl285_cast, %p_shl286_cast
  %tmp_808_cast = sext i12 %tmp_540 to i13
  %tmp_542 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co9, i5 0)
  %p_shl283_cast = zext i10 %tmp_542 to i11
  %tmp_543 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co9, i3 0)
  %p_shl284_cast = zext i8 %tmp_543 to i11
  %tmp_544 = sub i11 %p_shl283_cast, %p_shl284_cast
  br label %.preheader656

.preheader656:                                    ; preds = %13, %.preheader656.preheader
  %ci10 = phi i5 [ %ci_11, %13 ], [ 0, %.preheader656.preheader ]
  %exitcond356 = icmp eq i5 %ci10, -8
  %empty_377 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_11 = add i5 %ci10, 1
  br i1 %exitcond356, label %.loopexit897.loopexit, label %13

; <label>:13                                      ; preds = %.preheader656
  %tmp_182_cast1 = zext i5 %ci10 to i11
  %tmp_182_cast = zext i5 %ci10 to i13
  %tmp_547 = add i13 %tmp_808_cast, %tmp_182_cast
  %tmp_862_cast = sext i13 %tmp_547 to i64
  %shuffle_conv_1x1_add_1 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_862_cast
  %tmp_557 = add i11 %tmp_544, %tmp_182_cast1
  %tmp_865_cast1 = sext i11 %tmp_557 to i64
  %weights_24_24_1x1_ad_1 = getelementptr [576 x float]* @weights_24_24_1x1, i64 0, i64 %tmp_865_cast1
  %shuffle_conv_1x1_loa_1 = load float* %shuffle_conv_1x1_add_1, align 4
  store float %shuffle_conv_1x1_loa_1, float* %weights_24_24_1x1_ad_1, align 4
  br label %.preheader656

.preheader655:                                    ; preds = %.preheader655.preheader, %14
  %i6 = phi i5 [ %i_6, %14 ], [ 0, %.preheader655.preheader ]
  %i6_cast = zext i5 %i6 to i7
  %exitcond355 = icmp eq i5 %i6, -8
  %empty_378 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_6 = add i5 %i6, 1
  br i1 %exitcond355, label %15, label %14

; <label>:14                                      ; preds = %.preheader655
  %tmp_179 = add i7 %i6_cast, -56
  %tmp_180 = zext i7 %tmp_179 to i64
  %bias_addr_5 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_180
  %bias_load_5 = load float* %bias_addr_5, align 4
  %tmp_181 = zext i5 %i6 to i64
  %bias_24_addr_2 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_181
  store float %bias_load_5, float* %bias_24_addr_2, align 4
  br label %.preheader655

; <label>:15                                      ; preds = %.preheader655
  call fastcc void @subconv_1x1_16_p([7776 x float]* @buffer0_1_24_16x16_p, [576 x float]* @weights_24_24_1x1, [24 x float]* @bias_24, [7776 x float]* @buffer1_1_24_16x16_p) nounwind
  call fastcc void @shuffle_24_l_p([7776 x float]* @buffer1_1_24_16x16_p, [15552 x float]* @downsampleunit0_outp) nounwind
  br label %.loopexit896

.loopexit896.loopexit:                            ; preds = %.preheader654
  br label %.loopexit896

.loopexit896:                                     ; preds = %.loopexit896.loopexit, %15
  %co12 = phi i5 [ 0, %15 ], [ %co_49, %.loopexit896.loopexit ]
  %co12_cast = zext i5 %co12 to i6
  %exitcond354 = icmp eq i5 %co12, -8
  %empty_379 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_49 = add i5 %co12, 1
  br i1 %exitcond354, label %.preheader652.preheader, label %.preheader654.preheader

.preheader652.preheader:                          ; preds = %.loopexit896
  br label %.preheader652

.preheader654.preheader:                          ; preds = %.loopexit896
  %tmp_183 = add i6 %co12_cast, 24
  %tmp_184_cast = zext i6 %tmp_183 to i9
  %tmp_564 = call i8 @_ssdm_op_BitConcatenate.i8.i6.i2(i6 %tmp_183, i2 0)
  %p_shl288_cast = zext i8 %tmp_564 to i9
  %tmp_565 = sub i9 %p_shl288_cast, %tmp_184_cast
  %tmp_185_cast = zext i5 %co12 to i8
  %tmp_567 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co12, i2 0)
  %p_shl287_cast = zext i7 %tmp_567 to i8
  %tmp_570 = sub i8 %p_shl287_cast, %tmp_185_cast
  %tmp_907_cast = sext i8 %tmp_570 to i9
  br label %.preheader654

.preheader654.loopexit:                           ; preds = %.preheader653
  br label %.preheader654

.preheader654:                                    ; preds = %.preheader654.loopexit, %.preheader654.preheader
  %w13 = phi i2 [ 0, %.preheader654.preheader ], [ %w_47, %.preheader654.loopexit ]
  %exitcond353 = icmp eq i2 %w13, -1
  %empty_380 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_47 = add i2 %w13, 1
  br i1 %exitcond353, label %.loopexit896.loopexit, label %.preheader653.preheader

.preheader653.preheader:                          ; preds = %.preheader654
  %tmp_189_cast = zext i2 %w13 to i9
  %tmp_572 = add i9 %tmp_565, %tmp_189_cast
  %tmp_910_cast1 = sext i9 %tmp_572 to i15
  %tmp_371 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_572, i2 0)
  %p_shl290_cast = sext i11 %tmp_371 to i15
  %tmp_583 = sub i15 %p_shl290_cast, %tmp_910_cast1
  %tmp_585 = add i9 %tmp_907_cast, %tmp_189_cast
  %tmp_372 = shl i9 %tmp_585, 2
  %tmp_586 = sub i9 %tmp_372, %tmp_585
  br label %.preheader653

.preheader653:                                    ; preds = %16, %.preheader653.preheader
  %h14 = phi i2 [ %h_48, %16 ], [ 0, %.preheader653.preheader ]
  %exitcond352 = icmp eq i2 %h14, -1
  %empty_381 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_48 = add i2 %h14, 1
  br i1 %exitcond352, label %.preheader654.loopexit, label %16

; <label>:16                                      ; preds = %.preheader653
  %tmp_191_cast1 = zext i2 %h14 to i9
  %tmp_191_cast = zext i2 %h14 to i15
  %tmp_610 = add i15 %tmp_583, %tmp_191_cast
  %tmp_999_cast = zext i15 %tmp_610 to i64
  %shuffle_conv_3x3_add_1 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_999_cast
  %tmp_613 = add i9 %tmp_586, %tmp_191_cast1
  %tmp_1007_cast = zext i9 %tmp_613 to i64
  %weights_24_1_3x3_add_1 = getelementptr [216 x float]* @weights_24_1_3x3, i64 0, i64 %tmp_1007_cast
  %shuffle_conv_3x3_loa_1 = load float* %shuffle_conv_3x3_add_1, align 4
  store float %shuffle_conv_3x3_loa_1, float* %weights_24_1_3x3_add_1, align 4
  br label %.preheader653

.preheader652:                                    ; preds = %.preheader652.preheader, %17
  %i7 = phi i5 [ %i_7, %17 ], [ 0, %.preheader652.preheader ]
  %exitcond351 = icmp eq i5 %i7, -8
  %empty_382 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_7 = add i5 %i7, 1
  br i1 %exitcond351, label %18, label %17

; <label>:17                                      ; preds = %.preheader652
  %tmp_186 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 true, i5 %i7)
  %tmp_254_cast = sext i6 %tmp_186 to i7
  %tmp_187 = zext i7 %tmp_254_cast to i64
  %bias_addr_6 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_187
  %bias_load_6 = load float* %bias_addr_6, align 4
  %tmp_188 = zext i5 %i7 to i64
  %bias_24_addr_3 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_188
  store float %bias_load_6, float* %bias_24_addr_3, align 4
  br label %.preheader652

; <label>:18                                      ; preds = %.preheader652
  call fastcc void @subconv_3x3_32_strid([27744 x float]* @conv1_output_p, [216 x float]* @weights_24_1_3x3, [24 x float]* @bias_24, [7776 x float]* @buffer0_1_24_16x16_p) nounwind
  br label %.loopexit895

.loopexit895.loopexit:                            ; preds = %.preheader651
  br label %.loopexit895

.loopexit895:                                     ; preds = %.loopexit895.loopexit, %18
  %co16 = phi i5 [ 0, %18 ], [ %co_50, %.loopexit895.loopexit ]
  %co16_cast = zext i5 %co16 to i7
  %exitcond350 = icmp eq i5 %co16, -8
  %empty_383 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_50 = add i5 %co16, 1
  br i1 %exitcond350, label %.preheader650.preheader, label %.preheader651.preheader

.preheader650.preheader:                          ; preds = %.loopexit895
  br label %.preheader650

.preheader651.preheader:                          ; preds = %.loopexit895
  %tmp_190 = add i7 %co16_cast, 48
  %tmp_587 = call i12 @_ssdm_op_BitConcatenate.i12.i7.i5(i7 %tmp_190, i5 0)
  %p_shl293_cast = zext i12 %tmp_587 to i13
  %tmp_589 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_190, i3 0)
  %p_shl294_cast = zext i10 %tmp_589 to i13
  %tmp_590 = sub i13 %p_shl293_cast, %p_shl294_cast
  %tmp_962_cast = sext i13 %tmp_590 to i14
  %tmp_600 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co16, i5 0)
  %p_shl291_cast = zext i10 %tmp_600 to i11
  %tmp_607 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co16, i3 0)
  %p_shl292_cast = zext i8 %tmp_607 to i11
  %tmp_608 = sub i11 %p_shl291_cast, %p_shl292_cast
  br label %.preheader651

.preheader651:                                    ; preds = %19, %.preheader651.preheader
  %ci12 = phi i5 [ %ci_13, %19 ], [ 0, %.preheader651.preheader ]
  %exitcond349 = icmp eq i5 %ci12, -8
  %empty_384 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_13 = add i5 %ci12, 1
  br i1 %exitcond349, label %.loopexit895.loopexit, label %19

; <label>:19                                      ; preds = %.preheader651
  %tmp_195_cast1 = zext i5 %ci12 to i11
  %tmp_195_cast = zext i5 %ci12 to i14
  %tmp_615 = add i14 %tmp_962_cast, %tmp_195_cast
  %tmp_1010_cast = sext i14 %tmp_615 to i64
  %shuffle_conv_1x1_add_2 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1010_cast
  %tmp_626 = add i11 %tmp_608, %tmp_195_cast1
  %tmp_1011_cast = sext i11 %tmp_626 to i64
  %weights_24_24_1x1_ad_2 = getelementptr [576 x float]* @weights_24_24_1x1, i64 0, i64 %tmp_1011_cast
  %shuffle_conv_1x1_loa_2 = load float* %shuffle_conv_1x1_add_2, align 4
  store float %shuffle_conv_1x1_loa_2, float* %weights_24_24_1x1_ad_2, align 4
  br label %.preheader651

.preheader650:                                    ; preds = %.preheader650.preheader, %20
  %i9 = phi i5 [ %i_8, %20 ], [ 0, %.preheader650.preheader ]
  %i9_cast = zext i5 %i9 to i8
  %exitcond348 = icmp eq i5 %i9, -8
  %empty_385 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_8 = add i5 %i9, 1
  br i1 %exitcond348, label %21, label %20

; <label>:20                                      ; preds = %.preheader650
  %tmp_192 = add i8 %i9_cast, 120
  %tmp_193 = zext i8 %tmp_192 to i64
  %bias_addr_7 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_193
  %bias_load_7 = load float* %bias_addr_7, align 4
  %tmp_194 = zext i5 %i9 to i64
  %bias_24_addr_4 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_194
  store float %bias_load_7, float* %bias_24_addr_4, align 4
  br label %.preheader650

; <label>:21                                      ; preds = %.preheader650
  call fastcc void @subconv_1x1_16_p([7776 x float]* @buffer0_1_24_16x16_p, [576 x float]* @weights_24_24_1x1, [24 x float]* @bias_24, [7776 x float]* @buffer1_1_24_16x16_p) nounwind
  call fastcc void @shuffle_24_r_p([7776 x float]* @buffer1_1_24_16x16_p, [15552 x float]* @downsampleunit0_outp) nounwind
  br label %.loopexit894

.loopexit894.loopexit:                            ; preds = %.preheader649
  br label %.loopexit894

.loopexit894:                                     ; preds = %.loopexit894.loopexit, %21
  %co19 = phi i5 [ 0, %21 ], [ %co_51, %.loopexit894.loopexit ]
  %co19_cast = zext i5 %co19 to i6
  %exitcond347 = icmp eq i5 %co19, -8
  %empty_386 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_51 = add i5 %co19, 1
  br i1 %exitcond347, label %.preheader647.preheader, label %.preheader649.preheader

.preheader647.preheader:                          ; preds = %.loopexit894
  br label %.preheader647

.preheader649.preheader:                          ; preds = %.loopexit894
  %tmp_196 = add i6 %co19_cast, 24
  %tmp_628 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %tmp_196, i4 0)
  %p_shl297_cast = zext i10 %tmp_628 to i11
  %tmp_629 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %tmp_196, i1 false)
  %p_shl298_cast = zext i7 %tmp_629 to i11
  %tmp_630 = add i11 %p_shl298_cast, %p_shl297_cast
  %tmp_631 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co19, i4 0)
  %p_shl295_cast = zext i9 %tmp_631 to i10
  %tmp_633 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co19, i1 false)
  %p_shl296_cast = zext i6 %tmp_633 to i10
  %tmp_634 = add i10 %p_shl296_cast, %p_shl295_cast
  br label %.preheader649

.preheader649.loopexit:                           ; preds = %.preheader648
  br label %.preheader649

.preheader649:                                    ; preds = %.preheader649.loopexit, %.preheader649.preheader
  %h20 = phi i5 [ 0, %.preheader649.preheader ], [ %h_49, %.preheader649.loopexit ]
  %exitcond346 = icmp eq i5 %h20, -16
  %empty_387 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %h_49 = add i5 %h20, 1
  br i1 %exitcond346, label %.loopexit894.loopexit, label %.preheader648.preheader

.preheader648.preheader:                          ; preds = %.preheader649
  %tmp_198_cast1 = zext i5 %h_49 to i10
  %tmp_198_cast = zext i5 %h_49 to i11
  %tmp_656 = add i11 %tmp_198_cast, %tmp_630
  %p_shl301_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_656, i4 0)
  %tmp_374 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_656, i1 false)
  %p_shl302_cast = zext i12 %tmp_374 to i15
  %tmp_658 = add i15 %p_shl301_cast, %p_shl302_cast
  %tmp_660 = add i10 %tmp_198_cast1, %tmp_634
  %p_shl299_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_660, i4 0)
  %tmp_375 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_660, i1 false)
  %p_shl300_cast = zext i11 %tmp_375 to i14
  %tmp_662 = add i14 %p_shl299_cast, %p_shl300_cast
  br label %.preheader648

.preheader648:                                    ; preds = %22, %.preheader648.preheader
  %w21 = phi i5 [ %w_48, %22 ], [ 0, %.preheader648.preheader ]
  %exitcond345 = icmp eq i5 %w21, -16
  %empty_388 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %w_48 = add i5 %w21, 1
  br i1 %exitcond345, label %.preheader649.loopexit, label %22

; <label>:22                                      ; preds = %.preheader648
  %tmp_203_cast1 = zext i5 %w_48 to i14
  %tmp_203_cast = zext i5 %w_48 to i15
  %tmp_676 = add i15 %tmp_658, %tmp_203_cast
  %tmp_1040_cast1 = zext i15 %tmp_676 to i64
  %downsampleunit0_outp = getelementptr [15552 x float]* @downsampleunit0_outp, i64 0, i64 %tmp_1040_cast1
  %tmp_677 = add i14 %tmp_662, %tmp_203_cast1
  %tmp_1041_cast = zext i14 %tmp_677 to i64
  %buffer0_1_24_16x16_p = getelementptr [7776 x float]* @buffer0_1_24_16x16_p, i64 0, i64 %tmp_1041_cast
  %downsampleunit0_outp_1 = load float* %downsampleunit0_outp, align 4
  store float %downsampleunit0_outp_1, float* %buffer0_1_24_16x16_p, align 4
  br label %.preheader648

.preheader647.loopexit:                           ; preds = %.preheader646
  br label %.preheader647

.preheader647:                                    ; preds = %.preheader647.preheader, %.preheader647.loopexit
  %co22 = phi i5 [ %co_52, %.preheader647.loopexit ], [ 0, %.preheader647.preheader ]
  %co22_cast = zext i5 %co22 to i7
  %exitcond344 = icmp eq i5 %co22, -8
  %empty_389 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_52 = add i5 %co22, 1
  br i1 %exitcond344, label %.preheader645.preheader, label %.preheader646.preheader

.preheader645.preheader:                          ; preds = %.preheader647
  br label %.preheader645

.preheader646.preheader:                          ; preds = %.preheader647
  %tmp_197 = add i7 %co22_cast, -56
  %tmp_638 = call i12 @_ssdm_op_BitConcatenate.i12.i7.i5(i7 %tmp_197, i5 0)
  %p_shl305_cast = zext i12 %tmp_638 to i13
  %tmp_641 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_197, i3 0)
  %p_shl306_cast = zext i10 %tmp_641 to i13
  %tmp_643 = sub i13 %p_shl305_cast, %p_shl306_cast
  %tmp_1026_cast = sext i13 %tmp_643 to i14
  %tmp_644 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co22, i5 0)
  %p_shl303_cast = zext i10 %tmp_644 to i11
  %tmp_648 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co22, i3 0)
  %p_shl304_cast = zext i8 %tmp_648 to i11
  %tmp_655 = sub i11 %p_shl303_cast, %p_shl304_cast
  br label %.preheader646

.preheader646:                                    ; preds = %23, %.preheader646.preheader
  %ci14 = phi i5 [ %ci_15, %23 ], [ 0, %.preheader646.preheader ]
  %exitcond343 = icmp eq i5 %ci14, -8
  %empty_390 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_15 = add i5 %ci14, 1
  br i1 %exitcond343, label %.preheader647.loopexit, label %23

; <label>:23                                      ; preds = %.preheader646
  %tmp_202_cast1 = zext i5 %ci14 to i11
  %tmp_202_cast = zext i5 %ci14 to i14
  %tmp_663 = add i14 %tmp_1026_cast, %tmp_202_cast
  %tmp_1038_cast = sext i14 %tmp_663 to i64
  %shuffle_conv_1x1_add_3 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1038_cast
  %tmp_665 = add i11 %tmp_655, %tmp_202_cast1
  %tmp_1039_cast = sext i11 %tmp_665 to i64
  %weights_24_24_1x1_ad_3 = getelementptr [576 x float]* @weights_24_24_1x1, i64 0, i64 %tmp_1039_cast
  %shuffle_conv_1x1_loa_3 = load float* %shuffle_conv_1x1_add_3, align 4
  store float %shuffle_conv_1x1_loa_3, float* %weights_24_24_1x1_ad_3, align 4
  br label %.preheader646

.preheader645:                                    ; preds = %.preheader645.preheader, %24
  %i10 = phi i5 [ %i_9, %24 ], [ 0, %.preheader645.preheader ]
  %i10_cast = zext i5 %i10 to i8
  %exitcond342 = icmp eq i5 %i10, -8
  %empty_391 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_9 = add i5 %i10, 1
  br i1 %exitcond342, label %25, label %24

; <label>:24                                      ; preds = %.preheader645
  %tmp_199 = add i8 %i10_cast, -112
  %tmp_200 = zext i8 %tmp_199 to i64
  %bias_addr_8 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_200
  %bias_load_8 = load float* %bias_addr_8, align 4
  %tmp_201 = zext i5 %i10 to i64
  %bias_24_addr_5 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_201
  store float %bias_load_8, float* %bias_24_addr_5, align 4
  br label %.preheader645

; <label>:25                                      ; preds = %.preheader645
  call fastcc void @subconv_1x1_16_p([7776 x float]* @buffer0_1_24_16x16_p, [576 x float]* @weights_24_24_1x1, [24 x float]* @bias_24, [7776 x float]* @buffer1_1_24_16x16_p) nounwind
  br label %.loopexit893

.loopexit893.loopexit:                            ; preds = %.preheader644
  br label %.loopexit893

.loopexit893:                                     ; preds = %.loopexit893.loopexit, %25
  %co25 = phi i5 [ 0, %25 ], [ %co_53, %.loopexit893.loopexit ]
  %co25_cast = zext i5 %co25 to i7
  %exitcond341 = icmp eq i5 %co25, -8
  %empty_392 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_53 = add i5 %co25, 1
  br i1 %exitcond341, label %.preheader642.preheader, label %.preheader644.preheader

.preheader642.preheader:                          ; preds = %.loopexit893
  br label %.preheader642

.preheader644.preheader:                          ; preds = %.loopexit893
  %tmp_204 = add i7 %co25_cast, 48
  %tmp_205_cast = zext i7 %tmp_204 to i10
  %tmp_679 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_204, i2 0)
  %p_shl308_cast = zext i9 %tmp_679 to i10
  %tmp_680 = sub i10 %p_shl308_cast, %tmp_205_cast
  %tmp_206_cast = zext i5 %co25 to i8
  %tmp_681 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co25, i2 0)
  %p_shl307_cast = zext i7 %tmp_681 to i8
  %tmp_688 = sub i8 %p_shl307_cast, %tmp_206_cast
  %tmp_1045_cast = sext i8 %tmp_688 to i9
  br label %.preheader644

.preheader644.loopexit:                           ; preds = %.preheader643
  br label %.preheader644

.preheader644:                                    ; preds = %.preheader644.loopexit, %.preheader644.preheader
  %w26 = phi i2 [ 0, %.preheader644.preheader ], [ %w_49, %.preheader644.loopexit ]
  %exitcond340 = icmp eq i2 %w26, -1
  %empty_393 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_49 = add i2 %w26, 1
  br i1 %exitcond340, label %.loopexit893.loopexit, label %.preheader643.preheader

.preheader643.preheader:                          ; preds = %.preheader644
  %tmp_210_cast1 = zext i2 %w26 to i9
  %tmp_210_cast = zext i2 %w26 to i10
  %tmp_691 = add i10 %tmp_680, %tmp_210_cast
  %tmp_1046_cast1 = sext i10 %tmp_691 to i15
  %tmp_385 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_691, i2 0)
  %p_shl310_cast = sext i12 %tmp_385 to i15
  %tmp_693 = sub i15 %p_shl310_cast, %tmp_1046_cast1
  %tmp_694 = add i9 %tmp_1045_cast, %tmp_210_cast1
  %tmp_392 = shl i9 %tmp_694, 2
  %tmp_695 = sub i9 %tmp_392, %tmp_694
  br label %.preheader643

.preheader643:                                    ; preds = %26, %.preheader643.preheader
  %h27 = phi i2 [ %h_50, %26 ], [ 0, %.preheader643.preheader ]
  %exitcond339 = icmp eq i2 %h27, -1
  %empty_394 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_50 = add i2 %h27, 1
  br i1 %exitcond339, label %.preheader644.loopexit, label %26

; <label>:26                                      ; preds = %.preheader643
  %tmp_211_cast1 = zext i2 %h27 to i9
  %tmp_211_cast = zext i2 %h27 to i15
  %tmp_729 = add i15 %tmp_693, %tmp_211_cast
  %tmp_1060_cast = zext i15 %tmp_729 to i64
  %shuffle_conv_3x3_add_2 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1060_cast
  %tmp_730 = add i9 %tmp_695, %tmp_211_cast1
  %tmp_1061_cast = zext i9 %tmp_730 to i64
  %weights_24_1_3x3_add_2 = getelementptr [216 x float]* @weights_24_1_3x3, i64 0, i64 %tmp_1061_cast
  %shuffle_conv_3x3_loa_2 = load float* %shuffle_conv_3x3_add_2, align 4
  store float %shuffle_conv_3x3_loa_2, float* %weights_24_1_3x3_add_2, align 4
  br label %.preheader643

.preheader642:                                    ; preds = %.preheader642.preheader, %27
  %i11 = phi i5 [ %i_12, %27 ], [ 0, %.preheader642.preheader ]
  %i11_cast = zext i5 %i11 to i8
  %exitcond338 = icmp eq i5 %i11, -8
  %empty_395 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_12 = add i5 %i11, 1
  br i1 %exitcond338, label %28, label %27

; <label>:27                                      ; preds = %.preheader642
  %tmp_207 = add i8 %i11_cast, -88
  %tmp_208 = zext i8 %tmp_207 to i64
  %bias_addr_9 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_208
  %bias_load_9 = load float* %bias_addr_9, align 4
  %tmp_209 = zext i5 %i11 to i64
  %bias_24_addr_6 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_209
  store float %bias_load_9, float* %bias_24_addr_6, align 4
  br label %.preheader642

; <label>:28                                      ; preds = %.preheader642
  call fastcc void @subconv_3x3_16_no_re([7776 x float]* @buffer1_1_24_16x16_p, [216 x float]* @weights_24_1_3x3, [24 x float]* @bias_24, [7776 x float]* @buffer0_1_24_16x16_p) nounwind
  br label %.loopexit892

.loopexit892.loopexit:                            ; preds = %.preheader641
  br label %.loopexit892

.loopexit892:                                     ; preds = %.loopexit892.loopexit, %28
  %co29 = phi i5 [ 0, %28 ], [ %co_54, %.loopexit892.loopexit ]
  %exitcond337 = icmp eq i5 %co29, -8
  %empty_396 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_54 = add i5 %co29, 1
  br i1 %exitcond337, label %.preheader640.preheader, label %.preheader641.preheader

.preheader640.preheader:                          ; preds = %.loopexit892
  br label %.preheader640

.preheader641.preheader:                          ; preds = %.loopexit892
  %tmp_702 = call i11 @_ssdm_op_BitConcatenate.i11.i1.i5.i5(i1 true, i5 %co29, i5 0)
  %tmp_703 = sext i11 %tmp_702 to i12
  %p_shl313_cast = zext i12 %tmp_703 to i13
  %tmp_705 = call i9 @_ssdm_op_BitConcatenate.i9.i1.i5.i3(i1 true, i5 %co29, i3 0)
  %tmp_708 = sext i9 %tmp_705 to i10
  %p_shl314_cast = zext i10 %tmp_708 to i13
  %tmp_710 = sub i13 %p_shl313_cast, %p_shl314_cast
  %tmp_1056_cast = sext i13 %tmp_710 to i14
  %tmp_711 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co29, i5 0)
  %p_shl311_cast = zext i10 %tmp_711 to i11
  %tmp_713 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co29, i3 0)
  %p_shl312_cast = zext i8 %tmp_713 to i11
  %tmp_722 = sub i11 %p_shl311_cast, %p_shl312_cast
  br label %.preheader641

.preheader641:                                    ; preds = %29, %.preheader641.preheader
  %ci16 = phi i5 [ %ci_17, %29 ], [ 0, %.preheader641.preheader ]
  %exitcond336 = icmp eq i5 %ci16, -8
  %empty_397 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_17 = add i5 %ci16, 1
  br i1 %exitcond336, label %.loopexit892.loopexit, label %29

; <label>:29                                      ; preds = %.preheader641
  %tmp_215_cast1 = zext i5 %ci16 to i11
  %tmp_215_cast = zext i5 %ci16 to i14
  %tmp_731 = add i14 %tmp_1056_cast, %tmp_215_cast
  %tmp_1062_cast = sext i14 %tmp_731 to i64
  %shuffle_conv_1x1_add_4 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1062_cast
  %tmp_733 = add i11 %tmp_722, %tmp_215_cast1
  %tmp_1063_cast = sext i11 %tmp_733 to i64
  %weights_24_24_1x1_ad_4 = getelementptr [576 x float]* @weights_24_24_1x1, i64 0, i64 %tmp_1063_cast
  %shuffle_conv_1x1_loa_4 = load float* %shuffle_conv_1x1_add_4, align 4
  store float %shuffle_conv_1x1_loa_4, float* %weights_24_24_1x1_ad_4, align 4
  br label %.preheader641

.preheader640:                                    ; preds = %.preheader640.preheader, %30
  %i13 = phi i5 [ %i_14, %30 ], [ 0, %.preheader640.preheader ]
  %exitcond335 = icmp eq i5 %i13, -8
  %empty_398 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_14 = add i5 %i13, 1
  br i1 %exitcond335, label %31, label %30

; <label>:30                                      ; preds = %.preheader640
  %tmp_212 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 -2, i5 %i13)
  %tmp_289_cast = sext i7 %tmp_212 to i8
  %tmp_213 = zext i8 %tmp_289_cast to i64
  %bias_addr_10 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_213
  %bias_load_10 = load float* %bias_addr_10, align 4
  %tmp_214 = zext i5 %i13 to i64
  %bias_24_addr_7 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_214
  store float %bias_load_10, float* %bias_24_addr_7, align 4
  br label %.preheader640

; <label>:31                                      ; preds = %.preheader640
  call fastcc void @subconv_1x1_16_p([7776 x float]* @buffer0_1_24_16x16_p, [576 x float]* @weights_24_24_1x1, [24 x float]* @bias_24, [7776 x float]* @buffer1_1_24_16x16_p) nounwind
  br label %.loopexit891

.loopexit891.loopexit:                            ; preds = %.preheader639
  br label %.loopexit891

.loopexit891:                                     ; preds = %.loopexit891.loopexit, %31
  %co32 = phi i5 [ 0, %31 ], [ %co_55, %.loopexit891.loopexit ]
  %exitcond334 = icmp eq i5 %co32, -8
  %empty_399 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_55 = add i5 %co32, 1
  br i1 %exitcond334, label %33, label %.preheader639.preheader

.preheader639.preheader:                          ; preds = %.loopexit891
  %tmp_736 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co32, i4 0)
  %p_shl315_cast = zext i9 %tmp_736 to i10
  %tmp_738 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co32, i1 false)
  %p_shl316_cast = zext i6 %tmp_738 to i10
  %tmp_739 = add i10 %p_shl316_cast, %p_shl315_cast
  br label %.preheader639

.preheader639.loopexit:                           ; preds = %.preheader638
  br label %.preheader639

.preheader639:                                    ; preds = %.preheader639.loopexit, %.preheader639.preheader
  %h33 = phi i5 [ 0, %.preheader639.preheader ], [ %h_51, %.preheader639.loopexit ]
  %exitcond333 = icmp eq i5 %h33, -16
  %empty_400 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %h_51 = add i5 %h33, 1
  br i1 %exitcond333, label %.loopexit891.loopexit, label %.preheader638.preheader

.preheader638.preheader:                          ; preds = %.preheader639
  %tmp_217_cast = zext i5 %h_51 to i10
  %tmp_758 = add i10 %tmp_217_cast, %tmp_739
  %tmp_393 = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_758, i4 0)
  %p_shl317_cast = zext i14 %tmp_393 to i15
  %tmp_395 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_758, i1 false)
  %p_shl318_cast = zext i11 %tmp_395 to i15
  %tmp_760 = add i15 %p_shl317_cast, %p_shl318_cast
  br label %.preheader638

.preheader638:                                    ; preds = %32, %.preheader638.preheader
  %w34 = phi i5 [ %w_50, %32 ], [ 0, %.preheader638.preheader ]
  %exitcond332 = icmp eq i5 %w34, -16
  %empty_401 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %w_50 = add i5 %w34, 1
  br i1 %exitcond332, label %.preheader639.loopexit, label %32

; <label>:32                                      ; preds = %.preheader638
  %tmp_220_cast = zext i5 %w_50 to i15
  %tmp_799 = add i15 %tmp_760, %tmp_220_cast
  %tmp_1091_cast = zext i15 %tmp_799 to i64
  %downsampleunit0_outp_2 = getelementptr [15552 x float]* @downsampleunit0_outp, i64 0, i64 %tmp_1091_cast
  %buffer0_1_24_16x16_p_1 = getelementptr [7776 x float]* @buffer0_1_24_16x16_p, i64 0, i64 %tmp_1091_cast
  %downsampleunit0_outp_3 = load float* %downsampleunit0_outp_2, align 4
  store float %downsampleunit0_outp_3, float* %buffer0_1_24_16x16_p_1, align 4
  br label %.preheader638

; <label>:33                                      ; preds = %.loopexit891
  call fastcc void @shuffle_24_p([7776 x float]* @buffer0_1_24_16x16_p, [15552 x float]* @shuffleunit0_0_outpu) nounwind
  br label %.loopexit890

.loopexit890.loopexit:                            ; preds = %.preheader637
  br label %.loopexit890

.loopexit890:                                     ; preds = %.loopexit890.loopexit, %33
  %co35 = phi i5 [ 0, %33 ], [ %co_56, %.loopexit890.loopexit ]
  %co35_cast = zext i5 %co35 to i6
  %exitcond331 = icmp eq i5 %co35, -8
  %empty_402 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_56 = add i5 %co35, 1
  br i1 %exitcond331, label %.preheader635.preheader, label %.preheader637.preheader

.preheader635.preheader:                          ; preds = %.loopexit890
  br label %.preheader635

.preheader637.preheader:                          ; preds = %.loopexit890
  %tmp_216 = add i6 %co35_cast, 24
  %tmp_741 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %tmp_216, i4 0)
  %p_shl321_cast = zext i10 %tmp_741 to i11
  %tmp_743 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %tmp_216, i1 false)
  %p_shl322_cast = zext i7 %tmp_743 to i11
  %tmp_744 = add i11 %p_shl322_cast, %p_shl321_cast
  %tmp_754 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co35, i4 0)
  %p_shl319_cast = zext i9 %tmp_754 to i10
  %tmp_755 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co35, i1 false)
  %p_shl320_cast = zext i6 %tmp_755 to i10
  %tmp_757 = add i10 %p_shl320_cast, %p_shl319_cast
  br label %.preheader637

.preheader637.loopexit:                           ; preds = %.preheader636
  br label %.preheader637

.preheader637:                                    ; preds = %.preheader637.loopexit, %.preheader637.preheader
  %h36 = phi i5 [ 0, %.preheader637.preheader ], [ %h_52, %.preheader637.loopexit ]
  %exitcond330 = icmp eq i5 %h36, -16
  %empty_403 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %h_52 = add i5 %h36, 1
  br i1 %exitcond330, label %.loopexit890.loopexit, label %.preheader636.preheader

.preheader636.preheader:                          ; preds = %.preheader637
  %tmp_219_cast1 = zext i5 %h_52 to i11
  %tmp_219_cast = zext i5 %h_52 to i10
  %tmp_784 = add i10 %tmp_219_cast, %tmp_757
  %p_shl325_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_784, i4 0)
  %tmp_398 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_784, i1 false)
  %p_shl326_cast = zext i11 %tmp_398 to i14
  %tmp_786 = add i14 %p_shl325_cast, %p_shl326_cast
  %tmp_788 = add i11 %tmp_219_cast1, %tmp_744
  %p_shl323_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_788, i4 0)
  %tmp_400 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_788, i1 false)
  %p_shl324_cast = zext i12 %tmp_400 to i15
  %tmp_791 = add i15 %p_shl323_cast, %p_shl324_cast
  br label %.preheader636

.preheader636:                                    ; preds = %34, %.preheader636.preheader
  %w37 = phi i5 [ %w_51, %34 ], [ 0, %.preheader636.preheader ]
  %exitcond329 = icmp eq i5 %w37, -16
  %empty_404 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %w_51 = add i5 %w37, 1
  br i1 %exitcond329, label %.preheader637.loopexit, label %34

; <label>:34                                      ; preds = %.preheader636
  %tmp_225_cast1 = zext i5 %w_51 to i15
  %tmp_225_cast2 = zext i5 %w_51 to i14
  %tmp_803 = add i14 %tmp_786, %tmp_225_cast2
  %tmp_1094_cast = zext i14 %tmp_803 to i64
  %buffer0_1_24_16x16_p_2 = getelementptr [7776 x float]* @buffer0_1_24_16x16_p, i64 0, i64 %tmp_1094_cast
  %tmp_805 = add i15 %tmp_791, %tmp_225_cast1
  %tmp_1095_cast = zext i15 %tmp_805 to i64
  %shuffleunit0_0_outpu = getelementptr [15552 x float]* @shuffleunit0_0_outpu, i64 0, i64 %tmp_1095_cast
  %shuffleunit0_0_outpu_1 = load float* %shuffleunit0_0_outpu, align 4
  store float %shuffleunit0_0_outpu_1, float* %buffer0_1_24_16x16_p_2, align 4
  br label %.preheader636

.preheader635.loopexit:                           ; preds = %.preheader634
  br label %.preheader635

.preheader635:                                    ; preds = %.preheader635.preheader, %.preheader635.loopexit
  %co38 = phi i5 [ %co_57, %.preheader635.loopexit ], [ 0, %.preheader635.preheader ]
  %co38_cast = zext i5 %co38 to i8
  %exitcond328 = icmp eq i5 %co38, -8
  %empty_405 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_57 = add i5 %co38, 1
  br i1 %exitcond328, label %.preheader633.preheader, label %.preheader634.preheader

.preheader633.preheader:                          ; preds = %.preheader635
  br label %.preheader633

.preheader634.preheader:                          ; preds = %.preheader635
  %tmp_218 = add i8 %co38_cast, 120
  %tmp_763 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_218, i5 0)
  %p_shl329_cast = zext i13 %tmp_763 to i14
  %tmp_770 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %tmp_218, i3 0)
  %p_shl330_cast = zext i11 %tmp_770 to i14
  %tmp_777 = sub i14 %p_shl329_cast, %p_shl330_cast
  %tmp_1079_cast = sext i14 %tmp_777 to i15
  %tmp_778 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co38, i5 0)
  %p_shl327_cast = zext i10 %tmp_778 to i11
  %tmp_780 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co38, i3 0)
  %p_shl328_cast = zext i8 %tmp_780 to i11
  %tmp_781 = sub i11 %p_shl327_cast, %p_shl328_cast
  br label %.preheader634

.preheader634:                                    ; preds = %35, %.preheader634.preheader
  %ci18 = phi i5 [ %ci_19, %35 ], [ 0, %.preheader634.preheader ]
  %exitcond327 = icmp eq i5 %ci18, -8
  %empty_406 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_19 = add i5 %ci18, 1
  br i1 %exitcond327, label %.preheader635.loopexit, label %35

; <label>:35                                      ; preds = %.preheader634
  %tmp_224_cast1 = zext i5 %ci18 to i11
  %tmp_224_cast = zext i5 %ci18 to i15
  %tmp_801 = add i15 %tmp_1079_cast, %tmp_224_cast
  %tmp_1092_cast1 = sext i15 %tmp_801 to i64
  %shuffle_conv_1x1_add_5 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1092_cast1
  %tmp_802 = add i11 %tmp_781, %tmp_224_cast1
  %tmp_1093_cast = sext i11 %tmp_802 to i64
  %weights_24_24_1x1_ad_5 = getelementptr [576 x float]* @weights_24_24_1x1, i64 0, i64 %tmp_1093_cast
  %shuffle_conv_1x1_loa_5 = load float* %shuffle_conv_1x1_add_5, align 4
  store float %shuffle_conv_1x1_loa_5, float* %weights_24_24_1x1_ad_5, align 4
  br label %.preheader634

.preheader633:                                    ; preds = %.preheader633.preheader, %36
  %i15 = phi i5 [ %i_16, %36 ], [ 0, %.preheader633.preheader ]
  %i15_cast664_cast = zext i5 %i15 to i7
  %exitcond326 = icmp eq i5 %i15, -8
  %empty_407 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_16 = add i5 %i15, 1
  br i1 %exitcond326, label %37, label %36

; <label>:36                                      ; preds = %.preheader633
  %tmp_221 = add i7 %i15_cast664_cast, -40
  %tmp_302_cast = sext i7 %tmp_221 to i8
  %tmp_222 = zext i8 %tmp_302_cast to i64
  %bias_addr_11 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_222
  %bias_load_11 = load float* %bias_addr_11, align 4
  %tmp_223 = zext i5 %i15 to i64
  %bias_24_addr_8 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_223
  store float %bias_load_11, float* %bias_24_addr_8, align 4
  br label %.preheader633

; <label>:37                                      ; preds = %.preheader633
  call fastcc void @subconv_1x1_16_p([7776 x float]* @buffer0_1_24_16x16_p, [576 x float]* @weights_24_24_1x1, [24 x float]* @bias_24, [7776 x float]* @buffer1_1_24_16x16_p) nounwind
  br label %.loopexit889

.loopexit889.loopexit:                            ; preds = %.preheader632
  br label %.loopexit889

.loopexit889:                                     ; preds = %.loopexit889.loopexit, %37
  %co41 = phi i5 [ 0, %37 ], [ %co_58, %.loopexit889.loopexit ]
  %co41_cast = zext i5 %co41 to i7
  %exitcond325 = icmp eq i5 %co41, -8
  %empty_408 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_58 = add i5 %co41, 1
  br i1 %exitcond325, label %.preheader630.preheader, label %.preheader632.preheader

.preheader630.preheader:                          ; preds = %.loopexit889
  br label %.preheader630

.preheader632.preheader:                          ; preds = %.loopexit889
  %tmp_226 = add i7 %co41_cast, -56
  %tmp_227_cast = zext i7 %tmp_226 to i10
  %tmp_806 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_226, i2 0)
  %p_shl332_cast = zext i9 %tmp_806 to i10
  %tmp_807 = sub i10 %p_shl332_cast, %tmp_227_cast
  %tmp_228_cast = zext i5 %co41 to i8
  %tmp_808 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co41, i2 0)
  %p_shl331_cast = zext i7 %tmp_808 to i8
  %tmp_818 = sub i8 %p_shl331_cast, %tmp_228_cast
  %tmp_1099_cast = sext i8 %tmp_818 to i9
  br label %.preheader632

.preheader632.loopexit:                           ; preds = %.preheader631
  br label %.preheader632

.preheader632:                                    ; preds = %.preheader632.loopexit, %.preheader632.preheader
  %w42 = phi i2 [ 0, %.preheader632.preheader ], [ %w_52, %.preheader632.loopexit ]
  %exitcond324 = icmp eq i2 %w42, -1
  %empty_409 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_52 = add i2 %w42, 1
  br i1 %exitcond324, label %.loopexit889.loopexit, label %.preheader631.preheader

.preheader631.preheader:                          ; preds = %.preheader632
  %tmp_232_cast1 = zext i2 %w42 to i9
  %tmp_232_cast = zext i2 %w42 to i10
  %tmp_825 = add i10 %tmp_807, %tmp_232_cast
  %tmp_1100_cast1 = sext i10 %tmp_825 to i15
  %tmp_411 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_825, i2 0)
  %p_shl334_cast = sext i12 %tmp_411 to i15
  %tmp_826 = sub i15 %p_shl334_cast, %tmp_1100_cast1
  %tmp_828 = add i9 %tmp_1099_cast, %tmp_232_cast1
  %tmp_413 = shl i9 %tmp_828, 2
  %tmp_831 = sub i9 %tmp_413, %tmp_828
  br label %.preheader631

.preheader631:                                    ; preds = %38, %.preheader631.preheader
  %h43 = phi i2 [ %h_53, %38 ], [ 0, %.preheader631.preheader ]
  %exitcond323 = icmp eq i2 %h43, -1
  %empty_410 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_53 = add i2 %h43, 1
  br i1 %exitcond323, label %.preheader632.loopexit, label %38

; <label>:38                                      ; preds = %.preheader631
  %tmp_234_cast1 = zext i2 %h43 to i9
  %tmp_234_cast = zext i2 %h43 to i15
  %tmp_850 = add i15 %tmp_826, %tmp_234_cast
  %tmp_1112_cast = zext i15 %tmp_850 to i64
  %shuffle_conv_3x3_add_3 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1112_cast
  %tmp_852 = add i9 %tmp_831, %tmp_234_cast1
  %tmp_1113_cast1 = zext i9 %tmp_852 to i64
  %weights_24_1_3x3_add_3 = getelementptr [216 x float]* @weights_24_1_3x3, i64 0, i64 %tmp_1113_cast1
  %shuffle_conv_3x3_loa_3 = load float* %shuffle_conv_3x3_add_3, align 4
  store float %shuffle_conv_3x3_loa_3, float* %weights_24_1_3x3_add_3, align 4
  br label %.preheader631

.preheader630:                                    ; preds = %.preheader630.preheader, %39
  %i17 = phi i5 [ %i_18, %39 ], [ 0, %.preheader630.preheader ]
  %i17_cast = zext i5 %i17 to i9
  %exitcond322 = icmp eq i5 %i17, -8
  %empty_411 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_18 = add i5 %i17, 1
  br i1 %exitcond322, label %40, label %39

; <label>:39                                      ; preds = %.preheader630
  %tmp_229 = add i9 %i17_cast, 240
  %tmp_230 = zext i9 %tmp_229 to i64
  %bias_addr_12 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_230
  %bias_load_12 = load float* %bias_addr_12, align 4
  %tmp_231 = zext i5 %i17 to i64
  %bias_24_addr_9 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_231
  store float %bias_load_12, float* %bias_24_addr_9, align 4
  br label %.preheader630

; <label>:40                                      ; preds = %.preheader630
  call fastcc void @subconv_3x3_16_no_re([7776 x float]* @buffer1_1_24_16x16_p, [216 x float]* @weights_24_1_3x3, [24 x float]* @bias_24, [7776 x float]* @buffer0_1_24_16x16_p) nounwind
  br label %.loopexit888

.loopexit888.loopexit:                            ; preds = %.preheader629
  br label %.loopexit888

.loopexit888:                                     ; preds = %.loopexit888.loopexit, %40
  %co45 = phi i5 [ 0, %40 ], [ %co_59, %.loopexit888.loopexit ]
  %co45_cast = zext i5 %co45 to i8
  %exitcond321 = icmp eq i5 %co45, -8
  %empty_412 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_59 = add i5 %co45, 1
  br i1 %exitcond321, label %.preheader628.preheader, label %.preheader629.preheader

.preheader628.preheader:                          ; preds = %.loopexit888
  br label %.preheader628

.preheader629.preheader:                          ; preds = %.loopexit888
  %tmp_233 = add i8 %co45_cast, -112
  %tmp_832 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_233, i5 0)
  %p_shl337_cast = zext i13 %tmp_832 to i14
  %tmp_834 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %tmp_233, i3 0)
  %p_shl338_cast = zext i11 %tmp_834 to i14
  %tmp_835 = sub i14 %p_shl337_cast, %p_shl338_cast
  %tmp_1108_cast = sext i14 %tmp_835 to i15
  %tmp_846 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co45, i5 0)
  %p_shl335_cast = zext i10 %tmp_846 to i11
  %tmp_848 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co45, i3 0)
  %p_shl336_cast = zext i8 %tmp_848 to i11
  %tmp_849 = sub i11 %p_shl335_cast, %p_shl336_cast
  br label %.preheader629

.preheader629:                                    ; preds = %41, %.preheader629.preheader
  %ci20 = phi i5 [ %ci_21, %41 ], [ 0, %.preheader629.preheader ]
  %exitcond320 = icmp eq i5 %ci20, -8
  %empty_413 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_21 = add i5 %ci20, 1
  br i1 %exitcond320, label %.loopexit888.loopexit, label %41

; <label>:41                                      ; preds = %.preheader629
  %tmp_238_cast1 = zext i5 %ci20 to i11
  %tmp_238_cast = zext i5 %ci20 to i15
  %tmp_853 = add i15 %tmp_1108_cast, %tmp_238_cast
  %tmp_1114_cast = sext i15 %tmp_853 to i64
  %shuffle_conv_1x1_add_6 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1114_cast
  %tmp_854 = add i11 %tmp_849, %tmp_238_cast1
  %tmp_1115_cast1 = sext i11 %tmp_854 to i64
  %weights_24_24_1x1_ad_6 = getelementptr [576 x float]* @weights_24_24_1x1, i64 0, i64 %tmp_1115_cast1
  %shuffle_conv_1x1_loa_6 = load float* %shuffle_conv_1x1_add_6, align 4
  store float %shuffle_conv_1x1_loa_6, float* %weights_24_24_1x1_ad_6, align 4
  br label %.preheader629

.preheader628:                                    ; preds = %.preheader628.preheader, %42
  %i19 = phi i5 [ %i_20, %42 ], [ 0, %.preheader628.preheader ]
  %i19_cast = zext i5 %i19 to i9
  %exitcond319 = icmp eq i5 %i19, -8
  %empty_414 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_20 = add i5 %i19, 1
  br i1 %exitcond319, label %43, label %42

; <label>:42                                      ; preds = %.preheader628
  %tmp_235 = add i9 %i19_cast, -248
  %tmp_236 = zext i9 %tmp_235 to i64
  %bias_addr_13 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_236
  %bias_load_13 = load float* %bias_addr_13, align 4
  %tmp_237 = zext i5 %i19 to i64
  %bias_24_addr_10 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_237
  store float %bias_load_13, float* %bias_24_addr_10, align 4
  br label %.preheader628

; <label>:43                                      ; preds = %.preheader628
  call fastcc void @subconv_1x1_16_p([7776 x float]* @buffer0_1_24_16x16_p, [576 x float]* @weights_24_24_1x1, [24 x float]* @bias_24, [7776 x float]* @buffer1_1_24_16x16_p) nounwind
  br label %.loopexit887

.loopexit887.loopexit:                            ; preds = %.preheader627
  br label %.loopexit887

.loopexit887:                                     ; preds = %.loopexit887.loopexit, %43
  %co48 = phi i5 [ 0, %43 ], [ %co_60, %.loopexit887.loopexit ]
  %exitcond318 = icmp eq i5 %co48, -8
  %empty_415 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_60 = add i5 %co48, 1
  br i1 %exitcond318, label %45, label %.preheader627.preheader

.preheader627.preheader:                          ; preds = %.loopexit887
  %tmp_855 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co48, i4 0)
  %p_shl339_cast = zext i9 %tmp_855 to i10
  %tmp_862 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co48, i1 false)
  %p_shl340_cast = zext i6 %tmp_862 to i10
  %tmp_865 = add i10 %p_shl340_cast, %p_shl339_cast
  br label %.preheader627

.preheader627.loopexit:                           ; preds = %.preheader626
  br label %.preheader627

.preheader627:                                    ; preds = %.preheader627.loopexit, %.preheader627.preheader
  %h49 = phi i5 [ 0, %.preheader627.preheader ], [ %h_54, %.preheader627.loopexit ]
  %exitcond317 = icmp eq i5 %h49, -16
  %empty_416 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %h_54 = add i5 %h49, 1
  br i1 %exitcond317, label %.loopexit887.loopexit, label %.preheader626.preheader

.preheader626.preheader:                          ; preds = %.preheader627
  %tmp_240_cast = zext i5 %h_54 to i10
  %tmp_882 = add i10 %tmp_240_cast, %tmp_865
  %tmp_414 = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_882, i4 0)
  %p_shl341_cast = zext i14 %tmp_414 to i15
  %tmp_415 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_882, i1 false)
  %p_shl342_cast = zext i11 %tmp_415 to i15
  %tmp_884 = add i15 %p_shl341_cast, %p_shl342_cast
  br label %.preheader626

.preheader626:                                    ; preds = %44, %.preheader626.preheader
  %w50 = phi i5 [ %w_53, %44 ], [ 0, %.preheader626.preheader ]
  %exitcond316 = icmp eq i5 %w50, -16
  %empty_417 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %w_53 = add i5 %w50, 1
  br i1 %exitcond316, label %.preheader627.loopexit, label %44

; <label>:44                                      ; preds = %.preheader626
  %tmp_243_cast = zext i5 %w_53 to i15
  %tmp_904 = add i15 %tmp_884, %tmp_243_cast
  %tmp_1143_cast = zext i15 %tmp_904 to i64
  %buffer0_1_24_16x16_p_3 = getelementptr [7776 x float]* @buffer0_1_24_16x16_p, i64 0, i64 %tmp_1143_cast
  %shuffleunit0_0_outpu_2 = getelementptr [15552 x float]* @shuffleunit0_0_outpu, i64 0, i64 %tmp_1143_cast
  %shuffleunit0_0_outpu_3 = load float* %shuffleunit0_0_outpu_2, align 4
  store float %shuffleunit0_0_outpu_3, float* %buffer0_1_24_16x16_p_3, align 4
  br label %.preheader626

; <label>:45                                      ; preds = %.loopexit887
  call fastcc void @shuffle_24_p([7776 x float]* @buffer0_1_24_16x16_p, [15552 x float]* @shuffleunit0_1_outpu) nounwind
  br label %.loopexit886

.loopexit886.loopexit:                            ; preds = %.preheader625
  br label %.loopexit886

.loopexit886:                                     ; preds = %.loopexit886.loopexit, %45
  %co51 = phi i5 [ 0, %45 ], [ %co_61, %.loopexit886.loopexit ]
  %co51_cast = zext i5 %co51 to i6
  %exitcond315 = icmp eq i5 %co51, -8
  %empty_418 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_61 = add i5 %co51, 1
  br i1 %exitcond315, label %.preheader623.preheader, label %.preheader625.preheader

.preheader623.preheader:                          ; preds = %.loopexit886
  br label %.preheader623

.preheader625.preheader:                          ; preds = %.loopexit886
  %tmp_239 = add i6 %co51_cast, 24
  %tmp_867 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %tmp_239, i4 0)
  %p_shl345_cast = zext i10 %tmp_867 to i11
  %tmp_874 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %tmp_239, i1 false)
  %p_shl346_cast = zext i7 %tmp_874 to i11
  %tmp_875 = add i11 %p_shl346_cast, %p_shl345_cast
  %tmp_877 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co51, i4 0)
  %p_shl343_cast = zext i9 %tmp_877 to i10
  %tmp_879 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co51, i1 false)
  %p_shl344_cast = zext i6 %tmp_879 to i10
  %tmp_881 = add i10 %p_shl344_cast, %p_shl343_cast
  br label %.preheader625

.preheader625.loopexit:                           ; preds = %.preheader624
  br label %.preheader625

.preheader625:                                    ; preds = %.preheader625.loopexit, %.preheader625.preheader
  %h52 = phi i5 [ 0, %.preheader625.preheader ], [ %h_55, %.preheader625.loopexit ]
  %exitcond314 = icmp eq i5 %h52, -16
  %empty_419 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %h_55 = add i5 %h52, 1
  br i1 %exitcond314, label %.loopexit886.loopexit, label %.preheader624.preheader

.preheader624.preheader:                          ; preds = %.preheader625
  %tmp_242_cast1 = zext i5 %h_55 to i11
  %tmp_242_cast = zext i5 %h_55 to i10
  %tmp_900 = add i10 %tmp_242_cast, %tmp_881
  %p_shl349_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_900, i4 0)
  %tmp_417 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_900, i1 false)
  %p_shl350_cast = zext i11 %tmp_417 to i14
  %tmp_901 = add i14 %p_shl349_cast, %p_shl350_cast
  %tmp_902 = add i11 %tmp_242_cast1, %tmp_875
  %p_shl347_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_902, i4 0)
  %tmp_418 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_902, i1 false)
  %p_shl348_cast = zext i12 %tmp_418 to i15
  %tmp_903 = add i15 %p_shl347_cast, %p_shl348_cast
  br label %.preheader624

.preheader624:                                    ; preds = %46, %.preheader624.preheader
  %w53 = phi i5 [ %w_54, %46 ], [ 0, %.preheader624.preheader ]
  %exitcond313 = icmp eq i5 %w53, -16
  %empty_420 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %w_54 = add i5 %w53, 1
  br i1 %exitcond313, label %.preheader625.loopexit, label %46

; <label>:46                                      ; preds = %.preheader624
  %tmp_248_cast1 = zext i5 %w_54 to i15
  %tmp_248_cast = zext i5 %w_54 to i14
  %tmp_907 = add i14 %tmp_901, %tmp_248_cast
  %tmp_1146_cast = zext i14 %tmp_907 to i64
  %buffer0_1_24_16x16_p_4 = getelementptr [7776 x float]* @buffer0_1_24_16x16_p, i64 0, i64 %tmp_1146_cast
  %tmp_908 = add i15 %tmp_903, %tmp_248_cast1
  %tmp_1147_cast = zext i15 %tmp_908 to i64
  %shuffleunit0_1_outpu = getelementptr [15552 x float]* @shuffleunit0_1_outpu, i64 0, i64 %tmp_1147_cast
  %shuffleunit0_1_outpu_1 = load float* %shuffleunit0_1_outpu, align 4
  store float %shuffleunit0_1_outpu_1, float* %buffer0_1_24_16x16_p_4, align 4
  br label %.preheader624

.preheader623.loopexit:                           ; preds = %.preheader622
  br label %.preheader623

.preheader623:                                    ; preds = %.preheader623.preheader, %.preheader623.loopexit
  %co54 = phi i5 [ %co_62, %.preheader623.loopexit ], [ 0, %.preheader623.preheader ]
  %co54_cast = zext i5 %co54 to i8
  %exitcond312 = icmp eq i5 %co54, -8
  %empty_421 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_62 = add i5 %co54, 1
  br i1 %exitcond312, label %.preheader621.preheader, label %.preheader622.preheader

.preheader621.preheader:                          ; preds = %.preheader623
  br label %.preheader621

.preheader622.preheader:                          ; preds = %.preheader623
  %tmp_241 = add i8 %co54_cast, -88
  %tmp_894 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_241, i5 0)
  %p_shl353_cast = zext i13 %tmp_894 to i14
  %tmp_895 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %tmp_241, i3 0)
  %p_shl354_cast = zext i11 %tmp_895 to i14
  %tmp_896 = sub i14 %p_shl353_cast, %p_shl354_cast
  %tmp_1131_cast = sext i14 %tmp_896 to i15
  %tmp_897 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co54, i5 0)
  %p_shl351_cast = zext i10 %tmp_897 to i11
  %tmp_898 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co54, i3 0)
  %p_shl352_cast = zext i8 %tmp_898 to i11
  %tmp_899 = sub i11 %p_shl351_cast, %p_shl352_cast
  br label %.preheader622

.preheader622:                                    ; preds = %47, %.preheader622.preheader
  %ci22 = phi i5 [ %ci_23, %47 ], [ 0, %.preheader622.preheader ]
  %exitcond311 = icmp eq i5 %ci22, -8
  %empty_422 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_23 = add i5 %ci22, 1
  br i1 %exitcond311, label %.preheader623.loopexit, label %47

; <label>:47                                      ; preds = %.preheader622
  %tmp_247_cast1 = zext i5 %ci22 to i11
  %tmp_247_cast = zext i5 %ci22 to i15
  %tmp_905 = add i15 %tmp_1131_cast, %tmp_247_cast
  %tmp_1144_cast = sext i15 %tmp_905 to i64
  %shuffle_conv_1x1_add_7 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1144_cast
  %tmp_906 = add i11 %tmp_899, %tmp_247_cast1
  %tmp_1145_cast1 = sext i11 %tmp_906 to i64
  %weights_24_24_1x1_ad_7 = getelementptr [576 x float]* @weights_24_24_1x1, i64 0, i64 %tmp_1145_cast1
  %shuffle_conv_1x1_loa_7 = load float* %shuffle_conv_1x1_add_7, align 4
  store float %shuffle_conv_1x1_loa_7, float* %weights_24_24_1x1_ad_7, align 4
  br label %.preheader622

.preheader621:                                    ; preds = %.preheader621.preheader, %48
  %i21 = phi i5 [ %i_22, %48 ], [ 0, %.preheader621.preheader ]
  %exitcond310 = icmp eq i5 %i21, -8
  %empty_423 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_22 = add i5 %i21, 1
  br i1 %exitcond310, label %49, label %48

; <label>:48                                      ; preds = %.preheader621
  %tmp_244 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 -7, i5 %i21)
  %tmp_245 = zext i9 %tmp_244 to i64
  %bias_addr_14 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_245
  %bias_load_14 = load float* %bias_addr_14, align 4
  %tmp_246 = zext i5 %i21 to i64
  %bias_24_addr_11 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_246
  store float %bias_load_14, float* %bias_24_addr_11, align 4
  br label %.preheader621

; <label>:49                                      ; preds = %.preheader621
  call fastcc void @subconv_1x1_16_p([7776 x float]* @buffer0_1_24_16x16_p, [576 x float]* @weights_24_24_1x1, [24 x float]* @bias_24, [7776 x float]* @buffer1_1_24_16x16_p) nounwind
  br label %.loopexit885

.loopexit885.loopexit:                            ; preds = %.preheader620
  br label %.loopexit885

.loopexit885:                                     ; preds = %.loopexit885.loopexit, %49
  %co57 = phi i5 [ 0, %49 ], [ %co_63, %.loopexit885.loopexit ]
  %exitcond309 = icmp eq i5 %co57, -8
  %empty_424 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_63 = add i5 %co57, 1
  br i1 %exitcond309, label %.preheader618.preheader, label %.preheader620.preheader

.preheader618.preheader:                          ; preds = %.loopexit885
  br label %.preheader618

.preheader620.preheader:                          ; preds = %.loopexit885
  %tmp_249 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 true, i5 %co57)
  %tmp_338_cast = sext i6 %tmp_249 to i7
  %tmp_250_cast = zext i7 %tmp_338_cast to i10
  %tmp_909 = call i8 @_ssdm_op_BitConcatenate.i8.i1.i5.i2(i1 true, i5 %co57, i2 0)
  %tmp_910 = sext i8 %tmp_909 to i9
  %p_shl356_cast = zext i9 %tmp_910 to i10
  %tmp_911 = sub i10 %p_shl356_cast, %tmp_250_cast
  %tmp_1150_cast = sext i10 %tmp_911 to i11
  %tmp_251_cast = zext i5 %co57 to i8
  %tmp_912 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co57, i2 0)
  %p_shl355_cast = zext i7 %tmp_912 to i8
  %tmp_913 = sub i8 %p_shl355_cast, %tmp_251_cast
  %tmp_1152_cast1 = sext i8 %tmp_913 to i9
  br label %.preheader620

.preheader620.loopexit:                           ; preds = %.preheader619
  br label %.preheader620

.preheader620:                                    ; preds = %.preheader620.loopexit, %.preheader620.preheader
  %w55 = phi i2 [ 0, %.preheader620.preheader ], [ %w_56, %.preheader620.loopexit ]
  %exitcond308 = icmp eq i2 %w55, -1
  %empty_425 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_56 = add i2 %w55, 1
  br i1 %exitcond308, label %.loopexit885.loopexit, label %.preheader619.preheader

.preheader619.preheader:                          ; preds = %.preheader620
  %tmp_255_cast1 = zext i2 %w55 to i9
  %tmp_255_cast = zext i2 %w55 to i11
  %tmp_914 = add i11 %tmp_1150_cast, %tmp_255_cast
  %tmp_1153_cast = sext i11 %tmp_914 to i15
  %tmp_428 = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_914, i2 0)
  %p_shl358_cast = sext i13 %tmp_428 to i15
  %tmp_915 = sub i15 %p_shl358_cast, %tmp_1153_cast
  %tmp_916 = add i9 %tmp_1152_cast1, %tmp_255_cast1
  %tmp_435 = shl i9 %tmp_916, 2
  %tmp_917 = sub i9 %tmp_435, %tmp_916
  br label %.preheader619

.preheader619:                                    ; preds = %50, %.preheader619.preheader
  %h56 = phi i2 [ %h_57, %50 ], [ 0, %.preheader619.preheader ]
  %exitcond307 = icmp eq i2 %h56, -1
  %empty_426 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_57 = add i2 %h56, 1
  br i1 %exitcond307, label %.preheader620.loopexit, label %50

; <label>:50                                      ; preds = %.preheader619
  %tmp_256_cast1 = zext i2 %h56 to i9
  %tmp_256_cast = zext i2 %h56 to i15
  %tmp_926 = add i15 %tmp_915, %tmp_256_cast
  %tmp_1167_cast = zext i15 %tmp_926 to i64
  %shuffle_conv_3x3_add_4 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1167_cast
  %tmp_927 = add i9 %tmp_917, %tmp_256_cast1
  %tmp_1168_cast = zext i9 %tmp_927 to i64
  %weights_24_1_3x3_add_4 = getelementptr [216 x float]* @weights_24_1_3x3, i64 0, i64 %tmp_1168_cast
  %shuffle_conv_3x3_loa_4 = load float* %shuffle_conv_3x3_add_4, align 4
  store float %shuffle_conv_3x3_loa_4, float* %weights_24_1_3x3_add_4, align 4
  br label %.preheader619

.preheader618:                                    ; preds = %.preheader618.preheader, %51
  %i23 = phi i5 [ %i_24, %51 ], [ 0, %.preheader618.preheader ]
  %i23_cast = zext i5 %i23 to i9
  %exitcond306 = icmp eq i5 %i23, -8
  %empty_427 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_24 = add i5 %i23, 1
  br i1 %exitcond306, label %52, label %51

; <label>:51                                      ; preds = %.preheader618
  %tmp_252 = add i9 %i23_cast, -200
  %tmp_253 = zext i9 %tmp_252 to i64
  %bias_addr_15 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_253
  %bias_load_15 = load float* %bias_addr_15, align 4
  %tmp_254 = zext i5 %i23 to i64
  %bias_24_addr_12 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_254
  store float %bias_load_15, float* %bias_24_addr_12, align 4
  br label %.preheader618

; <label>:52                                      ; preds = %.preheader618
  call fastcc void @subconv_3x3_16_no_re([7776 x float]* @buffer1_1_24_16x16_p, [216 x float]* @weights_24_1_3x3, [24 x float]* @bias_24, [7776 x float]* @buffer0_1_24_16x16_p) nounwind
  br label %.loopexit884

.loopexit884.loopexit:                            ; preds = %.preheader617
  br label %.loopexit884

.loopexit884:                                     ; preds = %.loopexit884.loopexit, %52
  %co61 = phi i5 [ 0, %52 ], [ %co_64, %.loopexit884.loopexit ]
  %exitcond305 = icmp eq i5 %co61, -8
  %empty_428 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_64 = add i5 %co61, 1
  br i1 %exitcond305, label %.preheader616.preheader, label %.preheader617.preheader

.preheader616.preheader:                          ; preds = %.loopexit884
  br label %.preheader616

.preheader617.preheader:                          ; preds = %.loopexit884
  %tmp_918 = call i12 @_ssdm_op_BitConcatenate.i12.i2.i5.i5(i2 -2, i5 %co61, i5 0)
  %tmp_919 = sext i12 %tmp_918 to i13
  %p_shl361_cast = zext i13 %tmp_919 to i14
  %tmp_920 = call i10 @_ssdm_op_BitConcatenate.i10.i2.i5.i3(i2 -2, i5 %co61, i3 0)
  %tmp_921 = sext i10 %tmp_920 to i11
  %p_shl362_cast = zext i11 %tmp_921 to i14
  %tmp_922 = sub i14 %p_shl361_cast, %p_shl362_cast
  %tmp_1163_cast = sext i14 %tmp_922 to i15
  %tmp_923 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co61, i5 0)
  %p_shl359_cast = zext i10 %tmp_923 to i11
  %tmp_924 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co61, i3 0)
  %p_shl360_cast = zext i8 %tmp_924 to i11
  %tmp_925 = sub i11 %p_shl359_cast, %p_shl360_cast
  br label %.preheader617

.preheader617:                                    ; preds = %53, %.preheader617.preheader
  %ci24 = phi i5 [ %ci_25, %53 ], [ 0, %.preheader617.preheader ]
  %exitcond304 = icmp eq i5 %ci24, -8
  %empty_429 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_25 = add i5 %ci24, 1
  br i1 %exitcond304, label %.loopexit884.loopexit, label %53

; <label>:53                                      ; preds = %.preheader617
  %tmp_260_cast1 = zext i5 %ci24 to i11
  %tmp_260_cast = zext i5 %ci24 to i15
  %tmp_928 = add i15 %tmp_1163_cast, %tmp_260_cast
  %tmp_1169_cast = sext i15 %tmp_928 to i64
  %shuffle_conv_1x1_add_8 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1169_cast
  %tmp_929 = add i11 %tmp_925, %tmp_260_cast1
  %tmp_1170_cast = sext i11 %tmp_929 to i64
  %weights_24_24_1x1_ad_8 = getelementptr [576 x float]* @weights_24_24_1x1, i64 0, i64 %tmp_1170_cast
  %shuffle_conv_1x1_loa_8 = load float* %shuffle_conv_1x1_add_8, align 4
  store float %shuffle_conv_1x1_loa_8, float* %weights_24_24_1x1_ad_8, align 4
  br label %.preheader617

.preheader616:                                    ; preds = %.preheader616.preheader, %54
  %i25 = phi i5 [ %i_26, %54 ], [ 0, %.preheader616.preheader ]
  %i25_cast = zext i5 %i25 to i9
  %exitcond303 = icmp eq i5 %i25, -8
  %empty_430 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_26 = add i5 %i25, 1
  br i1 %exitcond303, label %55, label %54

; <label>:54                                      ; preds = %.preheader616
  %tmp_257 = add i9 %i25_cast, -176
  %tmp_258 = zext i9 %tmp_257 to i64
  %bias_addr_16 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_258
  %bias_load_16 = load float* %bias_addr_16, align 4
  %tmp_259 = zext i5 %i25 to i64
  %bias_24_addr_13 = getelementptr inbounds [24 x float]* @bias_24, i64 0, i64 %tmp_259
  store float %bias_load_16, float* %bias_24_addr_13, align 4
  br label %.preheader616

; <label>:55                                      ; preds = %.preheader616
  call fastcc void @subconv_1x1_16_p([7776 x float]* @buffer0_1_24_16x16_p, [576 x float]* @weights_24_24_1x1, [24 x float]* @bias_24, [7776 x float]* @buffer1_1_24_16x16_p) nounwind
  br label %.loopexit883

.loopexit883.loopexit:                            ; preds = %.preheader615
  br label %.loopexit883

.loopexit883:                                     ; preds = %.loopexit883.loopexit, %55
  %co64 = phi i5 [ 0, %55 ], [ %co_65, %.loopexit883.loopexit ]
  %exitcond302 = icmp eq i5 %co64, -8
  %empty_431 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_65 = add i5 %co64, 1
  br i1 %exitcond302, label %57, label %.preheader615.preheader

.preheader615.preheader:                          ; preds = %.loopexit883
  %tmp_930 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co64, i4 0)
  %p_shl363_cast = zext i9 %tmp_930 to i10
  %tmp_931 = call i6 @_ssdm_op_BitConcatenate.i6.i5.i1(i5 %co64, i1 false)
  %p_shl364_cast = zext i6 %tmp_931 to i10
  %tmp_932 = add i10 %p_shl364_cast, %p_shl363_cast
  br label %.preheader615

.preheader615.loopexit:                           ; preds = %.preheader614
  br label %.preheader615

.preheader615:                                    ; preds = %.preheader615.loopexit, %.preheader615.preheader
  %h58 = phi i5 [ 0, %.preheader615.preheader ], [ %h_59, %.preheader615.loopexit ]
  %exitcond301 = icmp eq i5 %h58, -16
  %empty_432 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %h_59 = add i5 %h58, 1
  br i1 %exitcond301, label %.loopexit883.loopexit, label %.preheader614.preheader

.preheader614.preheader:                          ; preds = %.preheader615
  %tmp_262_cast = zext i5 %h_59 to i10
  %tmp_933 = add i10 %tmp_262_cast, %tmp_932
  %tmp_438 = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_933, i4 0)
  %p_shl365_cast = zext i14 %tmp_438 to i15
  %tmp_441 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_933, i1 false)
  %p_shl366_cast = zext i11 %tmp_441 to i15
  %tmp_934 = add i15 %p_shl365_cast, %p_shl366_cast
  br label %.preheader614

.preheader614:                                    ; preds = %56, %.preheader614.preheader
  %w57 = phi i5 [ %w_58, %56 ], [ 0, %.preheader614.preheader ]
  %exitcond300 = icmp eq i5 %w57, -16
  %empty_433 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %w_58 = add i5 %w57, 1
  br i1 %exitcond300, label %.preheader615.loopexit, label %56

; <label>:56                                      ; preds = %.preheader614
  %tmp_266_cast = zext i5 %w_58 to i15
  %tmp_935 = add i15 %tmp_934, %tmp_266_cast
  %tmp_1180_cast = zext i15 %tmp_935 to i64
  %buffer0_1_24_16x16_p_5 = getelementptr [7776 x float]* @buffer0_1_24_16x16_p, i64 0, i64 %tmp_1180_cast
  %shuffleunit0_1_outpu_2 = getelementptr [15552 x float]* @shuffleunit0_1_outpu, i64 0, i64 %tmp_1180_cast
  %shuffleunit0_1_outpu_3 = load float* %shuffleunit0_1_outpu_2, align 4
  store float %shuffleunit0_1_outpu_3, float* %buffer0_1_24_16x16_p_5, align 4
  br label %.preheader614

; <label>:57                                      ; preds = %.loopexit883
  call fastcc void @shuffle_24_p([7776 x float]* @buffer0_1_24_16x16_p, [15552 x float]* @shuffleunit0_2_outpu) nounwind
  br label %.loopexit882

.loopexit882.loopexit:                            ; preds = %.preheader613
  br label %.loopexit882

.loopexit882:                                     ; preds = %.loopexit882.loopexit, %57
  %co65 = phi i5 [ 0, %57 ], [ %co_66, %.loopexit882.loopexit ]
  %co66_cast = zext i5 %co65 to i9
  %exitcond299 = icmp eq i5 %co65, -8
  %empty_434 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_66 = add i5 %co65, 1
  br i1 %exitcond299, label %.preheader611.preheader, label %.preheader613.preheader

.preheader611.preheader:                          ; preds = %.loopexit882
  br label %.preheader611

.preheader613.preheader:                          ; preds = %.loopexit882
  %tmp_436 = trunc i5 %co65 to i1
  %p_shl = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_436, i5 0)
  %p_shl_cast = zext i6 %p_shl to i7
  %p_shl1 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_436, i3 0)
  %p_shl1_cast = zext i4 %p_shl1 to i7
  %tmp_261 = sub i7 %p_shl_cast, %p_shl1_cast
  %p_lshr_f_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co65, i32 1, i32 4)
  %tmp_356_cast = zext i4 %p_lshr_f_cast to i7
  br label %.preheader613

.preheader613.loopexit:                           ; preds = %.preheader612
  br label %.preheader613

.preheader613:                                    ; preds = %.preheader613.loopexit, %.preheader613.preheader
  %ci26 = phi i5 [ 0, %.preheader613.preheader ], [ %ci_27, %.preheader613.loopexit ]
  %ci26_cast = zext i5 %ci26 to i7
  %exitcond298 = icmp eq i5 %ci26, -8
  %empty_435 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_27 = add i5 %ci26, 1
  br i1 %exitcond298, label %.loopexit882.loopexit, label %.preheader612.preheader

.preheader612.preheader:                          ; preds = %.preheader613
  %tmp_263_cast = zext i5 %ci26 to i16
  %tmp_264 = add i7 %tmp_261, %ci26_cast
  %tmp_265_cast = sext i7 %tmp_264 to i13
  br label %.preheader612

.preheader612:                                    ; preds = %58, %.preheader612.preheader
  %i28 = phi i3 [ %i_29, %58 ], [ 0, %.preheader612.preheader ]
  %exitcond297 = icmp eq i3 %i28, -4
  %empty_436 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_29 = add i3 %i28, 1
  br i1 %exitcond297, label %.preheader613.loopexit, label %58

; <label>:58                                      ; preds = %.preheader612
  %tmp_454 = trunc i3 %i28 to i2
  %p_shl4 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_454, i5 0)
  %p_shl4_cast = zext i7 %p_shl4 to i8
  %p_shl5 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_454, i3 0)
  %p_shl5_cast = zext i5 %p_shl5 to i8
  %tmp_272 = sub i8 %p_shl4_cast, %p_shl5_cast
  %tmp_370_cast = sext i8 %tmp_272 to i9
  %tmp5 = add i9 216, %tmp_370_cast
  %tmp_273 = add i9 %tmp5, %co66_cast
  %tmp_936 = call i14 @_ssdm_op_BitConcatenate.i14.i9.i5(i9 %tmp_273, i5 0)
  %p_shl369_cast = zext i14 %tmp_936 to i15
  %tmp_937 = call i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9 %tmp_273, i3 0)
  %p_shl370_cast = zext i12 %tmp_937 to i15
  %tmp_938 = sub i15 %p_shl369_cast, %p_shl370_cast
  %tmp_1187_cast = sext i15 %tmp_938 to i16
  %tmp_939 = add i16 %tmp_263_cast, %tmp_1187_cast
  %tmp_1188_cast = sext i16 %tmp_939 to i64
  %shuffle_conv_1x1_add_9 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1188_cast
  %shuffle_conv_1x1_loa_9 = load float* %shuffle_conv_1x1_add_9, align 4
  %p_shl6 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_454, i4 0)
  %p_shl6_cast = zext i6 %p_shl6 to i7
  %p_shl7 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_454, i2 0)
  %p_shl7_cast = zext i4 %p_shl7 to i7
  %tmp_274 = sub i7 %p_shl6_cast, %p_shl7_cast
  %tmp_275 = add i7 %tmp_274, %tmp_356_cast
  %tmp_940 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_275, i6 0)
  %tmp_941 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_275, i4 0)
  %p_shl368_cast = sext i11 %tmp_941 to i13
  %tmp_942 = sub i13 %tmp_940, %p_shl368_cast
  %tmp_943 = add i13 %tmp_265_cast, %tmp_942
  %tmp_1196_cast = sext i13 %tmp_943 to i64
  %weights_48_48_1x1_ad = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1196_cast
  store float %shuffle_conv_1x1_loa_9, float* %weights_48_48_1x1_ad, align 4
  br label %.preheader612

.preheader611.loopexit:                           ; preds = %.preheader610
  br label %.preheader611

.preheader611:                                    ; preds = %.preheader611.preheader, %.preheader611.loopexit
  %i27 = phi i5 [ %i_28, %.preheader611.loopexit ], [ 0, %.preheader611.preheader ]
  %i27_cast = zext i5 %i27 to i7
  %i27_cast1 = zext i5 %i27 to i9
  %exitcond296 = icmp eq i5 %i27, -8
  %empty_437 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_28 = add i5 %i27, 1
  br i1 %exitcond296, label %60, label %.preheader610.preheader

.preheader610.preheader:                          ; preds = %.preheader611
  br label %.preheader610

.preheader610:                                    ; preds = %.preheader610.preheader, %59
  %k = phi i2 [ %k_1, %59 ], [ 0, %.preheader610.preheader ]
  %exitcond295 = icmp eq i2 %k, -2
  %empty_438 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_1 = add i2 %k, 1
  br i1 %exitcond295, label %.preheader611.loopexit, label %59

; <label>:59                                      ; preds = %.preheader610
  %tmp_443 = trunc i2 %k to i1
  %p_shl2 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_443, i5 0)
  %p_shl2_cast = zext i6 %p_shl2 to i7
  %p_shl3 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_443, i3 0)
  %p_shl3_cast = zext i4 %p_shl3 to i7
  %tmp_267 = sub i7 %p_shl2_cast, %p_shl3_cast
  %tmp_359_cast = sext i7 %tmp_267 to i9
  %tmp6 = add i9 -152, %tmp_359_cast
  %tmp_268 = add i9 %i27_cast1, %tmp6
  %tmp_269 = zext i9 %tmp_268 to i64
  %bias_addr_17 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_269
  %bias_load_17 = load float* %bias_addr_17, align 4
  %tmp_270 = add i7 %tmp_267, %i27_cast
  %tmp_363_cast = sext i7 %tmp_270 to i32
  %tmp_271 = zext i32 %tmp_363_cast to i64
  %bias_48_addr = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_271
  store float %bias_load_17, float* %bias_48_addr, align 4
  br label %.preheader610

; <label>:60                                      ; preds = %.preheader611
  call fastcc void @subconv_1x1_16p_p([2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48) nounwind
  br label %.loopexit881

.loopexit881.loopexit:                            ; preds = %.preheader609
  br label %.loopexit881

.loopexit881:                                     ; preds = %.loopexit881.loopexit, %60
  %co67 = phi i5 [ 0, %60 ], [ %co_68, %.loopexit881.loopexit ]
  %co69_cast = zext i5 %co67 to i7
  %co69_cast1 = zext i5 %co67 to i8
  %exitcond294 = icmp eq i5 %co67, -8
  %empty_439 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_68 = add i5 %co67, 1
  br i1 %exitcond294, label %.preheader606.preheader, label %.preheader609.preheader

.preheader609.preheader:                          ; preds = %.loopexit881
  br label %.preheader609

.preheader606.preheader:                          ; preds = %.loopexit881
  br label %.preheader606

.preheader609.loopexit:                           ; preds = %.preheader608
  br label %.preheader609

.preheader609:                                    ; preds = %.preheader609.preheader, %.preheader609.loopexit
  %w59 = phi i2 [ %w_60, %.preheader609.loopexit ], [ 0, %.preheader609.preheader ]
  %exitcond293 = icmp eq i2 %w59, -1
  %empty_440 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_60 = add i2 %w59, 1
  br i1 %exitcond293, label %.loopexit881.loopexit, label %.preheader608.preheader

.preheader608.preheader:                          ; preds = %.preheader609
  %tmp_276_cast1 = zext i2 %w59 to i36
  %tmp_276_cast = zext i2 %w59 to i12
  br label %.preheader608

.preheader608.loopexit:                           ; preds = %.preheader607
  br label %.preheader608

.preheader608:                                    ; preds = %.preheader608.loopexit, %.preheader608.preheader
  %h60 = phi i2 [ 0, %.preheader608.preheader ], [ %h_61, %.preheader608.loopexit ]
  %exitcond292 = icmp eq i2 %h60, -1
  %empty_441 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_61 = add i2 %h60, 1
  br i1 %exitcond292, label %.preheader609.loopexit, label %.preheader607.preheader

.preheader607.preheader:                          ; preds = %.preheader608
  %tmp_283_cast1 = zext i2 %h60 to i10
  %tmp_283_cast = zext i2 %h60 to i15
  br label %.preheader607

.preheader607:                                    ; preds = %61, %.preheader607.preheader
  %i33 = phi i2 [ %i_34, %61 ], [ 0, %.preheader607.preheader ]
  %exitcond291 = icmp eq i2 %i33, -2
  %empty_442 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_34 = add i2 %i33, 1
  br i1 %exitcond291, label %.preheader608.loopexit, label %61

; <label>:61                                      ; preds = %.preheader607
  %tmp_458 = trunc i2 %i33 to i1
  %p_shl14 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_458, i5 0)
  %p_shl14_cast = zext i6 %p_shl14 to i7
  %p_shl15 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_458, i3 0)
  %p_shl15_cast = zext i4 %p_shl15 to i7
  %tmp_287 = sub i7 %p_shl14_cast, %p_shl15_cast
  %tmp_396_cast = sext i7 %tmp_287 to i8
  %tmp7 = add i8 120, %tmp_396_cast
  %tmp_288 = add i8 %tmp7, %co69_cast1
  %tmp_289_cast1 = zext i8 %tmp_288 to i11
  %tmp_944 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_288, i2 0)
  %p_shl374_cast = zext i10 %tmp_944 to i11
  %tmp_945 = sub i11 %p_shl374_cast, %tmp_289_cast1
  %tmp_1204_cast = sext i11 %tmp_945 to i12
  %tmp_946 = add i12 %tmp_276_cast, %tmp_1204_cast
  %tmp_1205_cast = sext i12 %tmp_946 to i15
  %tmp_460 = call i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12 %tmp_946, i2 0)
  %p_shl373_cast = sext i14 %tmp_460 to i15
  %tmp_947 = sub i15 %p_shl373_cast, %tmp_1205_cast
  %tmp_948 = add i15 %tmp_283_cast, %tmp_947
  %tmp_1208_cast = zext i15 %tmp_948 to i64
  %shuffle_conv_3x3_add_5 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1208_cast
  %shuffle_conv_3x3_loa_5 = load float* %shuffle_conv_3x3_add_5, align 4
  %tmp_290 = add i7 %co69_cast, %tmp_287
  %tmp_400_cast = sext i7 %tmp_290 to i32
  %tmp_291_cast = zext i32 %tmp_400_cast to i35
  %tmp_949 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_290, i2 0)
  %tmp_950 = sext i9 %tmp_949 to i34
  %p_shl372_cast = zext i34 %tmp_950 to i35
  %tmp_951 = sub i35 %p_shl372_cast, %tmp_291_cast
  %tmp_1211_cast = sext i35 %tmp_951 to i36
  %tmp_952 = add i36 %tmp_276_cast1, %tmp_1211_cast
  %tmp_461 = trunc i36 %tmp_952 to i10
  %tmp_953 = trunc i36 %tmp_952 to i8
  %p_shl371_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_953, i2 0)
  %tmp_954 = sub i10 %p_shl371_cast, %tmp_461
  %tmp_955 = add i10 %tmp_283_cast1, %tmp_954
  %tmp_1215_cast = zext i10 %tmp_955 to i64
  %weights_48_1_3x3_add = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1215_cast
  store float %shuffle_conv_3x3_loa_5, float* %weights_48_1_3x3_add, align 4
  br label %.preheader607

.preheader606.loopexit:                           ; preds = %.preheader605
  br label %.preheader606

.preheader606:                                    ; preds = %.preheader606.preheader, %.preheader606.loopexit
  %i29 = phi i5 [ %i_30, %.preheader606.loopexit ], [ 0, %.preheader606.preheader ]
  %i29_cast = zext i5 %i29 to i7
  %i29_cast612_cast = zext i5 %i29 to i8
  %exitcond290 = icmp eq i5 %i29, -8
  %empty_443 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_30 = add i5 %i29, 1
  br i1 %exitcond290, label %63, label %.preheader605.preheader

.preheader605.preheader:                          ; preds = %.preheader606
  br label %.preheader605

.preheader605:                                    ; preds = %.preheader605.preheader, %62
  %k2 = phi i2 [ %k_2, %62 ], [ 0, %.preheader605.preheader ]
  %exitcond289 = icmp eq i2 %k2, -2
  %empty_444 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_2 = add i2 %k2, 1
  br i1 %exitcond289, label %.preheader606.loopexit, label %62

; <label>:62                                      ; preds = %.preheader605
  %tmp_457 = trunc i2 %k2 to i1
  %p_shl8 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_457, i5 0)
  %p_shl8_cast = zext i6 %p_shl8 to i7
  %p_shl9 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_457, i3 0)
  %p_shl9_cast = zext i4 %p_shl9 to i7
  %tmp_278 = sub i7 %p_shl8_cast, %p_shl9_cast
  %tmp_377_cast_cast = sext i7 %tmp_278 to i8
  %tmp8 = add i8 -104, %tmp_377_cast_cast
  %tmp_279 = add i8 %i29_cast612_cast, %tmp8
  %tmp_379_cast = sext i8 %tmp_279 to i9
  %tmp_280 = zext i9 %tmp_379_cast to i64
  %bias_addr_18 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_280
  %bias_load_18 = load float* %bias_addr_18, align 4
  %tmp_281 = add i7 %tmp_278, %i29_cast
  %tmp_381_cast = sext i7 %tmp_281 to i32
  %tmp_282 = zext i32 %tmp_381_cast to i64
  %bias_48_addr_1 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_282
  store float %bias_load_18, float* %bias_48_addr_1, align 4
  br label %.preheader605

; <label>:63                                      ; preds = %.preheader606
  call fastcc void @subconv_3x3_16_strid([15552 x float]* @ShuffleConvs_1_Downs, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [4800 x float]* @buffer0_1_48_8x8_p) nounwind
  br label %.loopexit880

.loopexit880.loopexit:                            ; preds = %.preheader604
  br label %.loopexit880

.loopexit880:                                     ; preds = %.loopexit880.loopexit, %63
  %co69 = phi i5 [ 0, %63 ], [ %co_70, %.loopexit880.loopexit ]
  %co71_cast = zext i5 %co69 to i9
  %exitcond288 = icmp eq i5 %co69, -8
  %empty_445 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_70 = add i5 %co69, 1
  br i1 %exitcond288, label %.preheader602.preheader, label %.preheader604.preheader

.preheader602.preheader:                          ; preds = %.loopexit880
  br label %.preheader602

.preheader604.preheader:                          ; preds = %.loopexit880
  %tmp_456 = trunc i5 %co69 to i1
  %p_shl10 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_456, i5 0)
  %p_shl10_cast = zext i6 %p_shl10 to i7
  %p_shl11 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_456, i3 0)
  %p_shl11_cast = zext i4 %p_shl11 to i7
  %tmp_277 = sub i7 %p_shl10_cast, %p_shl11_cast
  %p_lshr_f1_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co69, i32 1, i32 4)
  %tmp_385_cast = zext i4 %p_lshr_f1_cast to i7
  br label %.preheader604

.preheader604.loopexit:                           ; preds = %.preheader603
  br label %.preheader604

.preheader604:                                    ; preds = %.preheader604.loopexit, %.preheader604.preheader
  %ci28 = phi i5 [ 0, %.preheader604.preheader ], [ %ci_29, %.preheader604.loopexit ]
  %ci28_cast = zext i5 %ci28 to i7
  %exitcond287 = icmp eq i5 %ci28, -8
  %empty_446 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_29 = add i5 %ci28, 1
  br i1 %exitcond287, label %.loopexit880.loopexit, label %.preheader603.preheader

.preheader603.preheader:                          ; preds = %.preheader604
  %tmp_284_cast = zext i5 %ci28 to i16
  %tmp_285 = add i7 %tmp_277, %ci28_cast
  %tmp_286_cast = sext i7 %tmp_285 to i13
  br label %.preheader603

.preheader603:                                    ; preds = %64, %.preheader603.preheader
  %i35 = phi i3 [ %i_36, %64 ], [ 0, %.preheader603.preheader ]
  %exitcond286 = icmp eq i3 %i35, -4
  %empty_447 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_36 = add i3 %i35, 1
  br i1 %exitcond286, label %.preheader604.loopexit, label %64

; <label>:64                                      ; preds = %.preheader603
  %tmp_957 = trunc i3 %i35 to i2
  %p_shl16 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_957, i5 0)
  %p_shl16_cast = zext i7 %p_shl16 to i8
  %p_shl17 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_957, i3 0)
  %p_shl17_cast = zext i5 %p_shl17 to i8
  %tmp_297 = sub i8 %p_shl16_cast, %p_shl17_cast
  %tmp_403_cast = sext i8 %tmp_297 to i9
  %tmp9 = add i9 -200, %tmp_403_cast
  %tmp_298 = add i9 %tmp9, %co71_cast
  %tmp_958 = call i14 @_ssdm_op_BitConcatenate.i14.i9.i5(i9 %tmp_298, i5 0)
  %p_shl377_cast = zext i14 %tmp_958 to i15
  %tmp_959 = call i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9 %tmp_298, i3 0)
  %p_shl378_cast = zext i12 %tmp_959 to i15
  %tmp_960 = sub i15 %p_shl377_cast, %p_shl378_cast
  %tmp_1222_cast = sext i15 %tmp_960 to i16
  %tmp_961 = add i16 %tmp_284_cast, %tmp_1222_cast
  %tmp_1223_cast = sext i16 %tmp_961 to i64
  %shuffle_conv_1x1_add_10 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1223_cast
  %shuffle_conv_1x1_loa_10 = load float* %shuffle_conv_1x1_add_10, align 4
  %p_shl18 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_957, i4 0)
  %p_shl18_cast = zext i6 %p_shl18 to i7
  %p_shl19 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_957, i2 0)
  %p_shl19_cast = zext i4 %p_shl19 to i7
  %tmp_299 = sub i7 %p_shl18_cast, %p_shl19_cast
  %tmp_300 = add i7 %tmp_299, %tmp_385_cast
  %tmp_962 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_300, i6 0)
  %tmp_963 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_300, i4 0)
  %p_shl376_cast = sext i11 %tmp_963 to i13
  %tmp_964 = sub i13 %tmp_962, %p_shl376_cast
  %tmp_965 = add i13 %tmp_286_cast, %tmp_964
  %tmp_1231_cast = sext i13 %tmp_965 to i64
  %weights_48_48_1x1_ad_1 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1231_cast
  store float %shuffle_conv_1x1_loa_10, float* %weights_48_48_1x1_ad_1, align 4
  br label %.preheader603

.preheader602.loopexit:                           ; preds = %.preheader601
  br label %.preheader602

.preheader602:                                    ; preds = %.preheader602.preheader, %.preheader602.loopexit
  %i31 = phi i5 [ %i_32, %.preheader602.loopexit ], [ 0, %.preheader602.preheader ]
  %i32_cast = zext i5 %i31 to i7
  %i32_cast599_cast = zext i5 %i31 to i8
  %exitcond285 = icmp eq i5 %i31, -8
  %empty_448 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_32 = add i5 %i31, 1
  br i1 %exitcond285, label %66, label %.preheader601.preheader

.preheader601.preheader:                          ; preds = %.preheader602
  br label %.preheader601

.preheader601:                                    ; preds = %.preheader601.preheader, %65
  %k3 = phi i2 [ %k_3, %65 ], [ 0, %.preheader601.preheader ]
  %exitcond284 = icmp eq i2 %k3, -2
  %empty_449 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_3 = add i2 %k3, 1
  br i1 %exitcond284, label %.preheader602.loopexit, label %65

; <label>:65                                      ; preds = %.preheader601
  %tmp_956 = trunc i2 %k3 to i1
  %p_shl12 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_956, i5 0)
  %p_shl12_cast = zext i6 %p_shl12 to i7
  %p_shl13 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_956, i3 0)
  %p_shl13_cast = zext i4 %p_shl13 to i7
  %tmp_292 = sub i7 %p_shl12_cast, %p_shl13_cast
  %tmp_387_cast_cast = sext i7 %tmp_292 to i8
  %tmp10 = add i8 -56, %tmp_387_cast_cast
  %tmp_293 = add i8 %i32_cast599_cast, %tmp10
  %tmp_389_cast = sext i8 %tmp_293 to i9
  %tmp_294 = zext i9 %tmp_389_cast to i64
  %bias_addr_19 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_294
  %bias_load_19 = load float* %bias_addr_19, align 4
  %tmp_295 = add i7 %tmp_292, %i32_cast
  %tmp_391_cast = sext i7 %tmp_295 to i32
  %tmp_296 = zext i32 %tmp_391_cast to i64
  %bias_48_addr_2 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_296
  store float %bias_load_19, float* %bias_48_addr_2, align 4
  br label %.preheader601

; <label>:66                                      ; preds = %.preheader602
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  call fastcc void @shuffle_48_l_p([4800 x float]* @buffer1_1_48_8x8_p, [9600 x float]* @downsampleunit1_outp) nounwind
  br label %.loopexit879

.loopexit879.loopexit:                            ; preds = %.preheader600
  br label %.loopexit879

.loopexit879:                                     ; preds = %.loopexit879.loopexit, %66
  %co71 = phi i5 [ 0, %66 ], [ %co_72, %.loopexit879.loopexit ]
  %co73_cast = zext i5 %co71 to i7
  %co73_cast1 = zext i5 %co71 to i8
  %exitcond283 = icmp eq i5 %co71, -8
  %empty_450 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_72 = add i5 %co71, 1
  br i1 %exitcond283, label %.preheader597.preheader, label %.preheader600.preheader

.preheader600.preheader:                          ; preds = %.loopexit879
  br label %.preheader600

.preheader597.preheader:                          ; preds = %.loopexit879
  br label %.preheader597

.preheader600.loopexit:                           ; preds = %.preheader599
  br label %.preheader600

.preheader600:                                    ; preds = %.preheader600.preheader, %.preheader600.loopexit
  %w61 = phi i2 [ %w_62, %.preheader600.loopexit ], [ 0, %.preheader600.preheader ]
  %exitcond282 = icmp eq i2 %w61, -1
  %empty_451 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_62 = add i2 %w61, 1
  br i1 %exitcond282, label %.loopexit879.loopexit, label %.preheader599.preheader

.preheader599.preheader:                          ; preds = %.preheader600
  %tmp_301_cast1 = zext i2 %w61 to i36
  %tmp_301_cast = zext i2 %w61 to i11
  br label %.preheader599

.preheader599.loopexit:                           ; preds = %.preheader598
  br label %.preheader599

.preheader599:                                    ; preds = %.preheader599.loopexit, %.preheader599.preheader
  %h62 = phi i2 [ 0, %.preheader599.preheader ], [ %h_63, %.preheader599.loopexit ]
  %exitcond281 = icmp eq i2 %h62, -1
  %empty_452 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_63 = add i2 %h62, 1
  br i1 %exitcond281, label %.preheader600.loopexit, label %.preheader598.preheader

.preheader598.preheader:                          ; preds = %.preheader599
  %tmp_308_cast1 = zext i2 %h62 to i10
  %tmp_308_cast = zext i2 %h62 to i15
  br label %.preheader598

.preheader598:                                    ; preds = %67, %.preheader598.preheader
  %i40 = phi i2 [ %i_41, %67 ], [ 0, %.preheader598.preheader ]
  %exitcond280 = icmp eq i2 %i40, -2
  %empty_453 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_41 = add i2 %i40, 1
  br i1 %exitcond280, label %.preheader599.loopexit, label %67

; <label>:67                                      ; preds = %.preheader598
  %tmp_968 = trunc i2 %i40 to i1
  %p_shl26 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_968, i5 0)
  %p_shl26_cast = zext i6 %p_shl26 to i7
  %p_shl27 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_968, i3 0)
  %p_shl27_cast = zext i4 %p_shl27 to i7
  %tmp_312 = sub i7 %p_shl26_cast, %p_shl27_cast
  %tmp_429_cast = sext i7 %tmp_312 to i8
  %tmp11 = add i8 -88, %tmp_429_cast
  %tmp_313 = add i8 %tmp11, %co73_cast1
  %tmp_314_cast = zext i8 %tmp_313 to i11
  %tmp_969 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_313, i2 0)
  %p_shl382_cast = zext i10 %tmp_969 to i11
  %tmp_970 = sub i11 %p_shl382_cast, %tmp_314_cast
  %tmp_971 = add i11 %tmp_301_cast, %tmp_970
  %tmp_1240_cast = sext i11 %tmp_971 to i15
  %tmp_972 = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_971, i2 0)
  %p_shl381_cast = sext i13 %tmp_972 to i15
  %tmp_973 = sub i15 %p_shl381_cast, %tmp_1240_cast
  %tmp_974 = add i15 %tmp_308_cast, %tmp_973
  %tmp_1243_cast = zext i15 %tmp_974 to i64
  %shuffle_conv_3x3_add_6 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1243_cast
  %shuffle_conv_3x3_loa_6 = load float* %shuffle_conv_3x3_add_6, align 4
  %tmp_315 = add i7 %co73_cast, %tmp_312
  %tmp_433_cast = sext i7 %tmp_315 to i32
  %tmp_316_cast = zext i32 %tmp_433_cast to i35
  %tmp_975 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_315, i2 0)
  %tmp_976 = sext i9 %tmp_975 to i34
  %p_shl380_cast = zext i34 %tmp_976 to i35
  %tmp_977 = sub i35 %p_shl380_cast, %tmp_316_cast
  %tmp_1246_cast = sext i35 %tmp_977 to i36
  %tmp_978 = add i36 %tmp_301_cast1, %tmp_1246_cast
  %tmp_979 = trunc i36 %tmp_978 to i10
  %tmp_980 = trunc i36 %tmp_978 to i8
  %p_shl379_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_980, i2 0)
  %tmp_981 = sub i10 %p_shl379_cast, %tmp_979
  %tmp_982 = add i10 %tmp_308_cast1, %tmp_981
  %tmp_1250_cast = zext i10 %tmp_982 to i64
  %weights_48_1_3x3_add_1 = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1250_cast
  store float %shuffle_conv_3x3_loa_6, float* %weights_48_1_3x3_add_1, align 4
  br label %.preheader598

.preheader597.loopexit:                           ; preds = %.preheader596
  br label %.preheader597

.preheader597:                                    ; preds = %.preheader597.preheader, %.preheader597.loopexit
  %i37 = phi i5 [ %i_38, %.preheader597.loopexit ], [ 0, %.preheader597.preheader ]
  %i37_cast = zext i5 %i37 to i7
  %i37_cast1 = zext i5 %i37 to i10
  %exitcond279 = icmp eq i5 %i37, -8
  %empty_454 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_38 = add i5 %i37, 1
  br i1 %exitcond279, label %69, label %.preheader596.preheader

.preheader596.preheader:                          ; preds = %.preheader597
  br label %.preheader596

.preheader596:                                    ; preds = %.preheader596.preheader, %68
  %k4 = phi i2 [ %k_4, %68 ], [ 0, %.preheader596.preheader ]
  %exitcond278 = icmp eq i2 %k4, -2
  %empty_455 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_4 = add i2 %k4, 1
  br i1 %exitcond278, label %.preheader597.loopexit, label %68

; <label>:68                                      ; preds = %.preheader596
  %tmp_967 = trunc i2 %k4 to i1
  %p_shl20 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_967, i5 0)
  %p_shl20_cast = zext i6 %p_shl20 to i7
  %p_shl21 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_967, i3 0)
  %p_shl21_cast = zext i4 %p_shl21 to i7
  %tmp_303 = sub i7 %p_shl20_cast, %p_shl21_cast
  %tmp_410_cast = sext i7 %tmp_303 to i10
  %tmp12 = add i10 504, %tmp_410_cast
  %tmp_304 = add i10 %i37_cast1, %tmp12
  %tmp_305 = zext i10 %tmp_304 to i64
  %bias_addr_20 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_305
  %bias_load_20 = load float* %bias_addr_20, align 4
  %tmp_306 = add i7 %tmp_303, %i37_cast
  %tmp_414_cast = sext i7 %tmp_306 to i32
  %tmp_307 = zext i32 %tmp_414_cast to i64
  %bias_48_addr_3 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_307
  store float %bias_load_20, float* %bias_48_addr_3, align 4
  br label %.preheader596

; <label>:69                                      ; preds = %.preheader597
  call fastcc void @subconv_3x3_16_strid([15552 x float]* @shuffleunit0_2_outpu, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [4800 x float]* @buffer0_1_48_8x8_p) nounwind
  br label %.loopexit878

.loopexit878.loopexit:                            ; preds = %.preheader595
  br label %.loopexit878

.loopexit878:                                     ; preds = %.loopexit878.loopexit, %69
  %co73 = phi i5 [ 0, %69 ], [ %co_74, %.loopexit878.loopexit ]
  %co75_cast = zext i5 %co73 to i10
  %exitcond277 = icmp eq i5 %co73, -8
  %empty_456 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_74 = add i5 %co73, 1
  br i1 %exitcond277, label %.preheader593.preheader, label %.preheader595.preheader

.preheader593.preheader:                          ; preds = %.loopexit878
  br label %.preheader593

.preheader595.preheader:                          ; preds = %.loopexit878
  %tmp_966 = trunc i5 %co73 to i1
  %p_shl22 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_966, i5 0)
  %p_shl22_cast = zext i6 %p_shl22 to i7
  %p_shl23 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_966, i3 0)
  %p_shl23_cast = zext i4 %p_shl23 to i7
  %tmp_302 = sub i7 %p_shl22_cast, %p_shl23_cast
  %p_lshr_f2_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co73, i32 1, i32 4)
  %tmp_418_cast = zext i4 %p_lshr_f2_cast to i7
  br label %.preheader595

.preheader595.loopexit:                           ; preds = %.preheader594
  br label %.preheader595

.preheader595:                                    ; preds = %.preheader595.loopexit, %.preheader595.preheader
  %ci30 = phi i5 [ 0, %.preheader595.preheader ], [ %ci_31, %.preheader595.loopexit ]
  %ci30_cast = zext i5 %ci30 to i7
  %exitcond276 = icmp eq i5 %ci30, -8
  %empty_457 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_31 = add i5 %ci30, 1
  br i1 %exitcond276, label %.loopexit878.loopexit, label %.preheader594.preheader

.preheader594.preheader:                          ; preds = %.preheader595
  %tmp_309_cast = zext i5 %ci30 to i17
  %tmp_310 = add i7 %tmp_302, %ci30_cast
  %tmp_311_cast = sext i7 %tmp_310 to i13
  br label %.preheader594

.preheader594:                                    ; preds = %70, %.preheader594.preheader
  %i42 = phi i3 [ %i_43, %70 ], [ 0, %.preheader594.preheader ]
  %exitcond275 = icmp eq i3 %i42, -4
  %empty_458 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_43 = add i3 %i42, 1
  br i1 %exitcond275, label %.preheader595.loopexit, label %70

; <label>:70                                      ; preds = %.preheader594
  %tmp_990 = trunc i3 %i42 to i2
  %p_shl30 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_990, i5 0)
  %p_shl30_cast = zext i7 %p_shl30 to i8
  %p_shl31 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_990, i3 0)
  %p_shl31_cast = zext i5 %p_shl31 to i8
  %tmp_323 = sub i8 %p_shl30_cast, %p_shl31_cast
  %tmp_441_cast = sext i8 %tmp_323 to i9
  %tmp13 = add i9 -104, %tmp_441_cast
  %tmp13_cast = zext i9 %tmp13 to i10
  %tmp_324 = add i10 %tmp13_cast, %co75_cast
  %tmp_991 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_324, i5 0)
  %p_shl385_cast = zext i15 %tmp_991 to i16
  %tmp_992 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_324, i3 0)
  %p_shl386_cast = zext i13 %tmp_992 to i16
  %tmp_993 = sub i16 %p_shl385_cast, %p_shl386_cast
  %tmp_1263_cast = sext i16 %tmp_993 to i17
  %tmp_994 = add i17 %tmp_309_cast, %tmp_1263_cast
  %tmp_1264_cast = sext i17 %tmp_994 to i64
  %shuffle_conv_1x1_add_11 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1264_cast
  %shuffle_conv_1x1_loa_11 = load float* %shuffle_conv_1x1_add_11, align 4
  %p_shl32 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_990, i4 0)
  %p_shl32_cast = zext i6 %p_shl32 to i7
  %p_shl33 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_990, i2 0)
  %p_shl33_cast = zext i4 %p_shl33 to i7
  %tmp_325 = sub i7 %p_shl32_cast, %p_shl33_cast
  %tmp_326 = add i7 %tmp_325, %tmp_418_cast
  %tmp_995 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_326, i6 0)
  %tmp_996 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_326, i4 0)
  %p_shl384_cast = sext i11 %tmp_996 to i13
  %tmp_997 = sub i13 %tmp_995, %p_shl384_cast
  %tmp_998 = add i13 %tmp_311_cast, %tmp_997
  %tmp_1272_cast = sext i13 %tmp_998 to i64
  %weights_48_48_1x1_ad_2 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1272_cast
  store float %shuffle_conv_1x1_loa_11, float* %weights_48_48_1x1_ad_2, align 4
  br label %.preheader594

.preheader593.loopexit:                           ; preds = %.preheader592
  br label %.preheader593

.preheader593:                                    ; preds = %.preheader593.preheader, %.preheader593.loopexit
  %i39 = phi i5 [ %i_40, %.preheader593.loopexit ], [ 0, %.preheader593.preheader ]
  %i39_cast = zext i5 %i39 to i7
  %i39_cast1 = zext i5 %i39 to i10
  %exitcond274 = icmp eq i5 %i39, -8
  %empty_459 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_40 = add i5 %i39, 1
  br i1 %exitcond274, label %72, label %.preheader592.preheader

.preheader592.preheader:                          ; preds = %.preheader593
  br label %.preheader592

.preheader592:                                    ; preds = %.preheader592.preheader, %71
  %k5 = phi i2 [ %k_5, %71 ], [ 0, %.preheader592.preheader ]
  %exitcond273 = icmp eq i2 %k5, -2
  %empty_460 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_5 = add i2 %k5, 1
  br i1 %exitcond273, label %.preheader593.loopexit, label %71

; <label>:71                                      ; preds = %.preheader592
  %tmp_989 = trunc i2 %k5 to i1
  %p_shl24 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_989, i5 0)
  %p_shl24_cast = zext i6 %p_shl24 to i7
  %p_shl25 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_989, i3 0)
  %p_shl25_cast = zext i4 %p_shl25 to i7
  %tmp_318 = sub i7 %p_shl24_cast, %p_shl25_cast
  %tmp_420_cast = sext i7 %tmp_318 to i10
  %tmp14 = add i10 -472, %tmp_420_cast
  %tmp_319 = add i10 %i39_cast1, %tmp14
  %tmp_320 = zext i10 %tmp_319 to i64
  %bias_addr_21 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_320
  %bias_load_21 = load float* %bias_addr_21, align 4
  %tmp_321 = add i7 %tmp_318, %i39_cast
  %tmp_424_cast = sext i7 %tmp_321 to i32
  %tmp_322 = zext i32 %tmp_424_cast to i64
  %bias_48_addr_4 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_322
  store float %bias_load_21, float* %bias_48_addr_4, align 4
  br label %.preheader592

; <label>:72                                      ; preds = %.preheader593
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  call fastcc void @shuffle_48_r_p([4800 x float]* @buffer1_1_48_8x8_p, [9600 x float]* @downsampleunit1_outp) nounwind
  br label %.loopexit877

.loopexit877.loopexit:                            ; preds = %.preheader591
  br label %.loopexit877

.loopexit877:                                     ; preds = %.loopexit877.loopexit, %72
  %co75 = phi i6 [ 0, %72 ], [ %co_76, %.loopexit877.loopexit ]
  %co77_cast = zext i6 %co75 to i7
  %exitcond272 = icmp eq i6 %co75, -16
  %empty_461 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_76 = add i6 %co75, 1
  br i1 %exitcond272, label %.preheader589.preheader, label %.preheader591.preheader

.preheader589.preheader:                          ; preds = %.loopexit877
  br label %.preheader589

.preheader591.preheader:                          ; preds = %.loopexit877
  %tmp_317 = add i7 %co77_cast, 48
  %tmp_983 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_317, i3 0)
  %p_shl389_cast = zext i10 %tmp_983 to i11
  %tmp_984 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp_317, i1 false)
  %p_shl390_cast = zext i8 %tmp_984 to i11
  %tmp_985 = add i11 %p_shl390_cast, %p_shl389_cast
  %tmp_986 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co75, i3 0)
  %p_shl387_cast = zext i9 %tmp_986 to i10
  %tmp_987 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co75, i1 false)
  %p_shl388_cast = zext i7 %tmp_987 to i10
  %tmp_988 = add i10 %p_shl388_cast, %p_shl387_cast
  br label %.preheader591

.preheader591.loopexit:                           ; preds = %.preheader590
  br label %.preheader591

.preheader591:                                    ; preds = %.preheader591.loopexit, %.preheader591.preheader
  %h64 = phi i4 [ 0, %.preheader591.preheader ], [ %h_65, %.preheader591.loopexit ]
  %exitcond271 = icmp eq i4 %h64, -8
  %empty_462 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_65 = add i4 %h64, 1
  br i1 %exitcond271, label %.loopexit877.loopexit, label %.preheader590.preheader

.preheader590.preheader:                          ; preds = %.preheader591
  %tmp_328_cast1 = zext i4 %h_65 to i10
  %tmp_328_cast = zext i4 %h_65 to i11
  %tmp_1000 = add i11 %tmp_328_cast, %tmp_985
  %tmp_1001 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1000, i3 0)
  %p_shl393_cast = zext i14 %tmp_1001 to i15
  %tmp_1002 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_1000, i1 false)
  %p_shl394_cast = zext i12 %tmp_1002 to i15
  %tmp_1003 = add i15 %p_shl393_cast, %p_shl394_cast
  %tmp_1004 = add i10 %tmp_328_cast1, %tmp_988
  %tmp_1005 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1004, i3 0)
  %p_shl391_cast = zext i13 %tmp_1005 to i14
  %tmp_1006 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1004, i1 false)
  %p_shl392_cast = zext i11 %tmp_1006 to i14
  %tmp_1007 = add i14 %p_shl391_cast, %p_shl392_cast
  br label %.preheader590

.preheader590:                                    ; preds = %73, %.preheader590.preheader
  %w63 = phi i4 [ %w_64, %73 ], [ 0, %.preheader590.preheader ]
  %exitcond270 = icmp eq i4 %w63, -8
  %empty_463 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_64 = add i4 %w63, 1
  br i1 %exitcond270, label %.preheader591.loopexit, label %73

; <label>:73                                      ; preds = %.preheader590
  %tmp_332_cast1 = zext i4 %w_64 to i14
  %tmp_332_cast = zext i4 %w_64 to i15
  %tmp_1008 = add i15 %tmp_1003, %tmp_332_cast
  %tmp_1283_cast = zext i15 %tmp_1008 to i64
  %downsampleunit1_outp = getelementptr [9600 x float]* @downsampleunit1_outp, i64 0, i64 %tmp_1283_cast
  %tmp_1009 = add i14 %tmp_1007, %tmp_332_cast1
  %tmp_1284_cast = zext i14 %tmp_1009 to i64
  %buffer0_1_48_8x8_p_a = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1284_cast
  %downsampleunit1_outp_1 = load float* %downsampleunit1_outp, align 4
  store float %downsampleunit1_outp_1, float* %buffer0_1_48_8x8_p_a, align 4
  br label %.preheader590

.preheader589.loopexit:                           ; preds = %.preheader588
  br label %.preheader589

.preheader589:                                    ; preds = %.preheader589.preheader, %.preheader589.loopexit
  %co77 = phi i5 [ %co_78, %.preheader589.loopexit ], [ 0, %.preheader589.preheader ]
  %co78_cast = zext i5 %co77 to i10
  %exitcond269 = icmp eq i5 %co77, -8
  %empty_464 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_78 = add i5 %co77, 1
  br i1 %exitcond269, label %.preheader586.preheader, label %.preheader588.preheader

.preheader586.preheader:                          ; preds = %.preheader589
  br label %.preheader586

.preheader588.preheader:                          ; preds = %.preheader589
  %tmp_999 = trunc i5 %co77 to i1
  %p_shl28 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_999, i5 0)
  %p_shl28_cast = zext i6 %p_shl28 to i7
  %p_shl29 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_999, i3 0)
  %p_shl29_cast = zext i4 %p_shl29 to i7
  %tmp_327 = sub i7 %p_shl28_cast, %p_shl29_cast
  %p_lshr_f3_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co77, i32 1, i32 4)
  %tmp_440_cast = zext i4 %p_lshr_f3_cast to i7
  br label %.preheader588

.preheader588.loopexit:                           ; preds = %.preheader587
  br label %.preheader588

.preheader588:                                    ; preds = %.preheader588.loopexit, %.preheader588.preheader
  %ci32 = phi i5 [ 0, %.preheader588.preheader ], [ %ci_33, %.preheader588.loopexit ]
  %ci32_cast = zext i5 %ci32 to i7
  %exitcond268 = icmp eq i5 %ci32, -8
  %empty_465 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_33 = add i5 %ci32, 1
  br i1 %exitcond268, label %.preheader589.loopexit, label %.preheader587.preheader

.preheader587.preheader:                          ; preds = %.preheader588
  %tmp_329_cast = zext i5 %ci32 to i17
  %tmp_330 = add i7 %tmp_327, %ci32_cast
  %tmp_331_cast = sext i7 %tmp_330 to i13
  br label %.preheader587

.preheader587:                                    ; preds = %74, %.preheader587.preheader
  %i46 = phi i3 [ %i_47, %74 ], [ 0, %.preheader587.preheader ]
  %exitcond267 = icmp eq i3 %i46, -4
  %empty_466 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_47 = add i3 %i46, 1
  br i1 %exitcond267, label %.preheader588.loopexit, label %74

; <label>:74                                      ; preds = %.preheader587
  %tmp_1011 = trunc i3 %i46 to i2
  %p_shl36 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1011, i5 0)
  %p_shl36_cast = zext i7 %p_shl36 to i8
  %p_shl37 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1011, i3 0)
  %p_shl37_cast = zext i5 %p_shl37 to i8
  %tmp_338 = sub i8 %p_shl36_cast, %p_shl37_cast
  %tmp_460_cast = sext i8 %tmp_338 to i10
  %tmp15 = add i10 504, %tmp_460_cast
  %tmp_339 = add i10 %tmp15, %co78_cast
  %tmp_1012 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_339, i5 0)
  %p_shl397_cast = zext i15 %tmp_1012 to i16
  %tmp_1013 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_339, i3 0)
  %p_shl398_cast = zext i13 %tmp_1013 to i16
  %tmp_1014 = sub i16 %p_shl397_cast, %p_shl398_cast
  %tmp_1291_cast = sext i16 %tmp_1014 to i17
  %tmp_1015 = add i17 %tmp_329_cast, %tmp_1291_cast
  %tmp_1292_cast = sext i17 %tmp_1015 to i64
  %shuffle_conv_1x1_add_12 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1292_cast
  %shuffle_conv_1x1_loa_12 = load float* %shuffle_conv_1x1_add_12, align 4
  %p_shl38 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1011, i4 0)
  %p_shl38_cast = zext i6 %p_shl38 to i7
  %p_shl39 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1011, i2 0)
  %p_shl39_cast = zext i4 %p_shl39 to i7
  %tmp_340 = sub i7 %p_shl38_cast, %p_shl39_cast
  %tmp_341 = add i7 %tmp_340, %tmp_440_cast
  %tmp_1016 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_341, i6 0)
  %tmp_1017 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_341, i4 0)
  %p_shl396_cast = sext i11 %tmp_1017 to i13
  %tmp_1018 = sub i13 %tmp_1016, %p_shl396_cast
  %tmp_1019 = add i13 %tmp_331_cast, %tmp_1018
  %tmp_1300_cast = sext i13 %tmp_1019 to i64
  %weights_48_48_1x1_ad_3 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1300_cast
  store float %shuffle_conv_1x1_loa_12, float* %weights_48_48_1x1_ad_3, align 4
  br label %.preheader587

.preheader586.loopexit:                           ; preds = %.preheader585
  br label %.preheader586

.preheader586:                                    ; preds = %.preheader586.preheader, %.preheader586.loopexit
  %i44 = phi i5 [ %i_45, %.preheader586.loopexit ], [ 0, %.preheader586.preheader ]
  %i45_cast = zext i5 %i44 to i7
  %i45_cast1 = zext i5 %i44 to i10
  %exitcond266 = icmp eq i5 %i44, -8
  %empty_467 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_45 = add i5 %i44, 1
  br i1 %exitcond266, label %76, label %.preheader585.preheader

.preheader585.preheader:                          ; preds = %.preheader586
  br label %.preheader585

.preheader585:                                    ; preds = %.preheader585.preheader, %75
  %k6 = phi i2 [ %k_6, %75 ], [ 0, %.preheader585.preheader ]
  %exitcond265 = icmp eq i2 %k6, -2
  %empty_468 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_6 = add i2 %k6, 1
  br i1 %exitcond265, label %.preheader586.loopexit, label %75

; <label>:75                                      ; preds = %.preheader585
  %tmp_1010 = trunc i2 %k6 to i1
  %p_shl34 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1010, i5 0)
  %p_shl34_cast = zext i6 %p_shl34 to i7
  %p_shl35 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1010, i3 0)
  %p_shl35_cast = zext i4 %p_shl35 to i7
  %tmp_333 = sub i7 %p_shl34_cast, %p_shl35_cast
  %tmp_449_cast = sext i7 %tmp_333 to i10
  %tmp16 = add i10 -424, %tmp_449_cast
  %tmp_334 = add i10 %i45_cast1, %tmp16
  %tmp_335 = zext i10 %tmp_334 to i64
  %bias_addr_22 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_335
  %bias_load_22 = load float* %bias_addr_22, align 4
  %tmp_336 = add i7 %tmp_333, %i45_cast
  %tmp_453_cast = sext i7 %tmp_336 to i32
  %tmp_337 = zext i32 %tmp_453_cast to i64
  %bias_48_addr_5 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_337
  store float %bias_load_22, float* %bias_48_addr_5, align 4
  br label %.preheader585

; <label>:76                                      ; preds = %.preheader586
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit876

.loopexit876.loopexit:                            ; preds = %.preheader584
  br label %.loopexit876

.loopexit876:                                     ; preds = %.loopexit876.loopexit, %76
  %co79 = phi i5 [ 0, %76 ], [ %co_80, %.loopexit876.loopexit ]
  %co81_cast = zext i5 %co79 to i7
  %co81_cast1 = zext i5 %co79 to i9
  %exitcond264 = icmp eq i5 %co79, -8
  %empty_469 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_80 = add i5 %co79, 1
  br i1 %exitcond264, label %.preheader581.preheader, label %.preheader584.preheader

.preheader584.preheader:                          ; preds = %.loopexit876
  br label %.preheader584

.preheader581.preheader:                          ; preds = %.loopexit876
  br label %.preheader581

.preheader584.loopexit:                           ; preds = %.preheader583
  br label %.preheader584

.preheader584:                                    ; preds = %.preheader584.preheader, %.preheader584.loopexit
  %w65 = phi i2 [ %w_66, %.preheader584.loopexit ], [ 0, %.preheader584.preheader ]
  %exitcond263 = icmp eq i2 %w65, -1
  %empty_470 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_66 = add i2 %w65, 1
  br i1 %exitcond263, label %.loopexit876.loopexit, label %.preheader583.preheader

.preheader583.preheader:                          ; preds = %.preheader584
  %tmp_342_cast1 = zext i2 %w65 to i36
  %tmp_342_cast = zext i2 %w65 to i13
  br label %.preheader583

.preheader583.loopexit:                           ; preds = %.preheader582
  br label %.preheader583

.preheader583:                                    ; preds = %.preheader583.loopexit, %.preheader583.preheader
  %h66 = phi i2 [ 0, %.preheader583.preheader ], [ %h_67, %.preheader583.loopexit ]
  %exitcond262 = icmp eq i2 %h66, -1
  %empty_471 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_67 = add i2 %h66, 1
  br i1 %exitcond262, label %.preheader584.loopexit, label %.preheader582.preheader

.preheader582.preheader:                          ; preds = %.preheader583
  %tmp_349_cast1 = zext i2 %h66 to i10
  %tmp_349_cast = zext i2 %h66 to i15
  br label %.preheader582

.preheader582:                                    ; preds = %77, %.preheader582.preheader
  %i52 = phi i2 [ %i_53, %77 ], [ 0, %.preheader582.preheader ]
  %exitcond261 = icmp eq i2 %i52, -2
  %empty_472 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_53 = add i2 %i52, 1
  br i1 %exitcond261, label %.preheader583.loopexit, label %77

; <label>:77                                      ; preds = %.preheader582
  %tmp_1022 = trunc i2 %i52 to i1
  %p_shl46 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1022, i5 0)
  %p_shl46_cast = zext i6 %p_shl46 to i7
  %p_shl47 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1022, i3 0)
  %p_shl47_cast = zext i4 %p_shl47 to i7
  %tmp_353 = sub i7 %p_shl46_cast, %p_shl47_cast
  %tmp17 = add i7 -40, %tmp_353
  %tmp17_cast1 = sext i7 %tmp17 to i8
  %tmp17_cast = zext i8 %tmp17_cast1 to i9
  %tmp_354 = add i9 %co81_cast1, %tmp17_cast
  %tmp_355_cast = zext i9 %tmp_354 to i12
  %tmp_1023 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_354, i2 0)
  %p_shl402_cast = zext i11 %tmp_1023 to i12
  %tmp_1024 = sub i12 %p_shl402_cast, %tmp_355_cast
  %tmp_1308_cast = sext i12 %tmp_1024 to i13
  %tmp_1025 = add i13 %tmp_1308_cast, %tmp_342_cast
  %tmp_1309_cast = sext i13 %tmp_1025 to i15
  %p_shl401_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1025, i2 0)
  %tmp_1026 = sub i15 %p_shl401_cast, %tmp_1309_cast
  %tmp_1027 = add i15 %tmp_1026, %tmp_349_cast
  %tmp_1312_cast = zext i15 %tmp_1027 to i64
  %shuffle_conv_3x3_add_7 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1312_cast
  %shuffle_conv_3x3_loa_7 = load float* %shuffle_conv_3x3_add_7, align 4
  %tmp_356 = add i7 %tmp_353, %co81_cast
  %tmp_490_cast = sext i7 %tmp_356 to i32
  %tmp_357_cast = zext i32 %tmp_490_cast to i35
  %tmp_1028 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_356, i2 0)
  %tmp_1029 = sext i9 %tmp_1028 to i34
  %p_shl400_cast = zext i34 %tmp_1029 to i35
  %tmp_1030 = sub i35 %p_shl400_cast, %tmp_357_cast
  %tmp_1315_cast = sext i35 %tmp_1030 to i36
  %tmp_1031 = add i36 %tmp_1315_cast, %tmp_342_cast1
  %tmp_1032 = trunc i36 %tmp_1031 to i10
  %tmp_1033 = trunc i36 %tmp_1031 to i8
  %p_shl399_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1033, i2 0)
  %tmp_1034 = sub i10 %p_shl399_cast, %tmp_1032
  %tmp_1035 = add i10 %tmp_1034, %tmp_349_cast1
  %tmp_1319_cast = zext i10 %tmp_1035 to i64
  %weights_48_1_3x3_add_2 = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1319_cast
  store float %shuffle_conv_3x3_loa_7, float* %weights_48_1_3x3_add_2, align 4
  br label %.preheader582

.preheader581.loopexit:                           ; preds = %.preheader580
  br label %.preheader581

.preheader581:                                    ; preds = %.preheader581.preheader, %.preheader581.loopexit
  %i48 = phi i5 [ %i_49, %.preheader581.loopexit ], [ 0, %.preheader581.preheader ]
  %i49_cast = zext i5 %i48 to i7
  %i49_cast1 = zext i5 %i48 to i10
  %exitcond260 = icmp eq i5 %i48, -8
  %empty_473 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_49 = add i5 %i48, 1
  br i1 %exitcond260, label %79, label %.preheader580.preheader

.preheader580.preheader:                          ; preds = %.preheader581
  br label %.preheader580

.preheader580:                                    ; preds = %.preheader580.preheader, %78
  %k7 = phi i2 [ %k_7, %78 ], [ 0, %.preheader580.preheader ]
  %exitcond259 = icmp eq i2 %k7, -2
  %empty_474 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_7 = add i2 %k7, 1
  br i1 %exitcond259, label %.preheader581.loopexit, label %78

; <label>:78                                      ; preds = %.preheader580
  %tmp_1021 = trunc i2 %k7 to i1
  %p_shl40 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1021, i5 0)
  %p_shl40_cast = zext i6 %p_shl40 to i7
  %p_shl41 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1021, i3 0)
  %p_shl41_cast = zext i4 %p_shl41 to i7
  %tmp_344 = sub i7 %p_shl40_cast, %p_shl41_cast
  %tmp_467_cast = sext i7 %tmp_344 to i10
  %tmp18 = add i10 -376, %tmp_467_cast
  %tmp_345 = add i10 %i49_cast1, %tmp18
  %tmp_346 = zext i10 %tmp_345 to i64
  %bias_addr_23 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_346
  %bias_load_23 = load float* %bias_addr_23, align 4
  %tmp_347 = add i7 %tmp_344, %i49_cast
  %tmp_471_cast = sext i7 %tmp_347 to i32
  %tmp_348 = zext i32 %tmp_471_cast to i64
  %bias_48_addr_6 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_348
  store float %bias_load_23, float* %bias_48_addr_6, align 4
  br label %.preheader580

; <label>:79                                      ; preds = %.preheader581
  call fastcc void @subconv_3x3_8_no_rel([4800 x float]* @buffer1_1_48_8x8_p, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [4800 x float]* @buffer0_1_48_8x8_p) nounwind
  br label %.loopexit875

.loopexit875.loopexit:                            ; preds = %.preheader579
  br label %.loopexit875

.loopexit875:                                     ; preds = %.loopexit875.loopexit, %79
  %co81 = phi i5 [ 0, %79 ], [ %co_82, %.loopexit875.loopexit ]
  %co83_cast = zext i5 %co81 to i10
  %exitcond258 = icmp eq i5 %co81, -8
  %empty_475 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_82 = add i5 %co81, 1
  br i1 %exitcond258, label %.preheader577.preheader, label %.preheader579.preheader

.preheader577.preheader:                          ; preds = %.loopexit875
  br label %.preheader577

.preheader579.preheader:                          ; preds = %.loopexit875
  %tmp_1020 = trunc i5 %co81 to i1
  %p_shl42 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1020, i5 0)
  %p_shl42_cast = zext i6 %p_shl42 to i7
  %p_shl43 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1020, i3 0)
  %p_shl43_cast = zext i4 %p_shl43 to i7
  %tmp_343 = sub i7 %p_shl42_cast, %p_shl43_cast
  %p_lshr_f4_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co81, i32 1, i32 4)
  %tmp_475_cast = zext i4 %p_lshr_f4_cast to i7
  br label %.preheader579

.preheader579.loopexit:                           ; preds = %.preheader578
  br label %.preheader579

.preheader579:                                    ; preds = %.preheader579.loopexit, %.preheader579.preheader
  %ci34 = phi i5 [ 0, %.preheader579.preheader ], [ %ci_35, %.preheader579.loopexit ]
  %ci34_cast = zext i5 %ci34 to i7
  %exitcond257 = icmp eq i5 %ci34, -8
  %empty_476 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_35 = add i5 %ci34, 1
  br i1 %exitcond257, label %.loopexit875.loopexit, label %.preheader578.preheader

.preheader578.preheader:                          ; preds = %.preheader579
  %tmp_350_cast = zext i5 %ci34 to i17
  %tmp_351 = add i7 %tmp_343, %ci34_cast
  %tmp_352_cast = sext i7 %tmp_351 to i13
  br label %.preheader578

.preheader578:                                    ; preds = %80, %.preheader578.preheader
  %i54 = phi i3 [ %i_55, %80 ], [ 0, %.preheader578.preheader ]
  %exitcond256 = icmp eq i3 %i54, -4
  %empty_477 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_55 = add i3 %i54, 1
  br i1 %exitcond256, label %.preheader579.loopexit, label %80

; <label>:80                                      ; preds = %.preheader578
  %tmp_1040 = trunc i3 %i54 to i2
  %p_shl48 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1040, i5 0)
  %p_shl48_cast = zext i7 %p_shl48 to i8
  %p_shl49 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1040, i3 0)
  %p_shl49_cast = zext i5 %p_shl49 to i8
  %tmp_363 = sub i8 %p_shl48_cast, %p_shl49_cast
  %tmp_493_cast = sext i8 %tmp_363 to i10
  %tmp19 = add i10 -424, %tmp_493_cast
  %tmp_364 = add i10 %tmp19, %co83_cast
  %tmp_1041 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_364, i5 0)
  %p_shl405_cast = zext i15 %tmp_1041 to i16
  %tmp_1042 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_364, i3 0)
  %p_shl406_cast = zext i13 %tmp_1042 to i16
  %tmp_1043 = sub i16 %p_shl405_cast, %p_shl406_cast
  %tmp_1329_cast = sext i16 %tmp_1043 to i17
  %tmp_1044 = add i17 %tmp_350_cast, %tmp_1329_cast
  %tmp_1330_cast = sext i17 %tmp_1044 to i64
  %shuffle_conv_1x1_add_13 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1330_cast
  %shuffle_conv_1x1_loa_13 = load float* %shuffle_conv_1x1_add_13, align 4
  %p_shl50 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1040, i4 0)
  %p_shl50_cast = zext i6 %p_shl50 to i7
  %p_shl51 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1040, i2 0)
  %p_shl51_cast = zext i4 %p_shl51 to i7
  %tmp_365 = sub i7 %p_shl50_cast, %p_shl51_cast
  %tmp_366 = add i7 %tmp_365, %tmp_475_cast
  %tmp_1045 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_366, i6 0)
  %tmp_1046 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_366, i4 0)
  %p_shl404_cast = sext i11 %tmp_1046 to i13
  %tmp_1047 = sub i13 %tmp_1045, %p_shl404_cast
  %tmp_1048 = add i13 %tmp_352_cast, %tmp_1047
  %tmp_1338_cast = sext i13 %tmp_1048 to i64
  %weights_48_48_1x1_ad_4 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1338_cast
  store float %shuffle_conv_1x1_loa_13, float* %weights_48_48_1x1_ad_4, align 4
  br label %.preheader578

.preheader577.loopexit:                           ; preds = %.preheader576
  br label %.preheader577

.preheader577:                                    ; preds = %.preheader577.preheader, %.preheader577.loopexit
  %i50 = phi i5 [ %i_51, %.preheader577.loopexit ], [ 0, %.preheader577.preheader ]
  %i51_cast = zext i5 %i50 to i7
  %i51_cast1 = zext i5 %i50 to i10
  %exitcond255 = icmp eq i5 %i50, -8
  %empty_478 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_51 = add i5 %i50, 1
  br i1 %exitcond255, label %82, label %.preheader576.preheader

.preheader576.preheader:                          ; preds = %.preheader577
  br label %.preheader576

.preheader576:                                    ; preds = %.preheader576.preheader, %81
  %k8 = phi i2 [ %k_8, %81 ], [ 0, %.preheader576.preheader ]
  %exitcond254 = icmp eq i2 %k8, -2
  %empty_479 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_8 = add i2 %k8, 1
  br i1 %exitcond254, label %.preheader577.loopexit, label %81

; <label>:81                                      ; preds = %.preheader576
  %tmp_1039 = trunc i2 %k8 to i1
  %p_shl44 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1039, i5 0)
  %p_shl44_cast = zext i6 %p_shl44 to i7
  %p_shl45 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1039, i3 0)
  %p_shl45_cast = zext i4 %p_shl45 to i7
  %tmp_358 = sub i7 %p_shl44_cast, %p_shl45_cast
  %tmp_477_cast = sext i7 %tmp_358 to i10
  %tmp20 = add i10 -328, %tmp_477_cast
  %tmp_359 = add i10 %i51_cast1, %tmp20
  %tmp_360 = zext i10 %tmp_359 to i64
  %bias_addr_24 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_360
  %bias_load_24 = load float* %bias_addr_24, align 4
  %tmp_361 = add i7 %tmp_358, %i51_cast
  %tmp_481_cast = sext i7 %tmp_361 to i32
  %tmp_362 = zext i32 %tmp_481_cast to i64
  %bias_48_addr_7 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_362
  store float %bias_load_24, float* %bias_48_addr_7, align 4
  br label %.preheader576

; <label>:82                                      ; preds = %.preheader577
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit874

.loopexit874.loopexit:                            ; preds = %.preheader575
  br label %.loopexit874

.loopexit874:                                     ; preds = %.loopexit874.loopexit, %82
  %co83 = phi i6 [ 0, %82 ], [ %co_84, %.loopexit874.loopexit ]
  %exitcond253 = icmp eq i6 %co83, -16
  %empty_480 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_84 = add i6 %co83, 1
  br i1 %exitcond253, label %84, label %.preheader575.preheader

.preheader575.preheader:                          ; preds = %.loopexit874
  %tmp_1036 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co83, i3 0)
  %p_shl407_cast = zext i9 %tmp_1036 to i10
  %tmp_1037 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co83, i1 false)
  %p_shl408_cast = zext i7 %tmp_1037 to i10
  %tmp_1038 = add i10 %p_shl408_cast, %p_shl407_cast
  br label %.preheader575

.preheader575.loopexit:                           ; preds = %.preheader574
  br label %.preheader575

.preheader575:                                    ; preds = %.preheader575.loopexit, %.preheader575.preheader
  %h68 = phi i4 [ 0, %.preheader575.preheader ], [ %h_69, %.preheader575.loopexit ]
  %exitcond252 = icmp eq i4 %h68, -8
  %empty_481 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_69 = add i4 %h68, 1
  br i1 %exitcond252, label %.loopexit874.loopexit, label %.preheader574.preheader

.preheader574.preheader:                          ; preds = %.preheader575
  %tmp_368_cast = zext i4 %h_69 to i10
  %tmp_1055 = add i10 %tmp_368_cast, %tmp_1038
  %tmp_1056 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1055, i3 0)
  %p_shl409_cast = zext i13 %tmp_1056 to i15
  %tmp_1057 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1055, i1 false)
  %p_shl410_cast = zext i11 %tmp_1057 to i15
  %tmp_1058 = add i15 %p_shl409_cast, %p_shl410_cast
  br label %.preheader574

.preheader574:                                    ; preds = %83, %.preheader574.preheader
  %w67 = phi i4 [ %w_68, %83 ], [ 0, %.preheader574.preheader ]
  %exitcond251 = icmp eq i4 %w67, -8
  %empty_482 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_68 = add i4 %w67, 1
  br i1 %exitcond251, label %.preheader575.loopexit, label %83

; <label>:83                                      ; preds = %.preheader574
  %tmp_371_cast = zext i4 %w_68 to i15
  %tmp_1068 = add i15 %tmp_1058, %tmp_371_cast
  %tmp_1359_cast = zext i15 %tmp_1068 to i64
  %downsampleunit1_outp_2 = getelementptr [9600 x float]* @downsampleunit1_outp, i64 0, i64 %tmp_1359_cast
  %buffer0_1_48_8x8_p_a_1 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1359_cast
  %downsampleunit1_outp_3 = load float* %downsampleunit1_outp_2, align 4
  store float %downsampleunit1_outp_3, float* %buffer0_1_48_8x8_p_a_1, align 4
  br label %.preheader574

; <label>:84                                      ; preds = %.loopexit874
  call fastcc void @shuffle_48_p([4800 x float]* @buffer0_1_48_8x8_p, [9600 x float]* @shuffleunit1_0_outpu) nounwind
  br label %.loopexit873

.loopexit873.loopexit:                            ; preds = %.preheader573
  br label %.loopexit873

.loopexit873:                                     ; preds = %.loopexit873.loopexit, %84
  %co85 = phi i6 [ 0, %84 ], [ %co_86, %.loopexit873.loopexit ]
  %co86_cast = zext i6 %co85 to i7
  %exitcond250 = icmp eq i6 %co85, -16
  %empty_483 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_86 = add i6 %co85, 1
  br i1 %exitcond250, label %.preheader571.preheader, label %.preheader573.preheader

.preheader571.preheader:                          ; preds = %.loopexit873
  br label %.preheader571

.preheader573.preheader:                          ; preds = %.loopexit873
  %tmp_367 = add i7 %co86_cast, 48
  %tmp_1049 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_367, i3 0)
  %p_shl413_cast = zext i10 %tmp_1049 to i11
  %tmp_1050 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp_367, i1 false)
  %p_shl414_cast = zext i8 %tmp_1050 to i11
  %tmp_1051 = add i11 %p_shl414_cast, %p_shl413_cast
  %tmp_1052 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co85, i3 0)
  %p_shl411_cast = zext i9 %tmp_1052 to i10
  %tmp_1053 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co85, i1 false)
  %p_shl412_cast = zext i7 %tmp_1053 to i10
  %tmp_1054 = add i10 %p_shl412_cast, %p_shl411_cast
  br label %.preheader573

.preheader573.loopexit:                           ; preds = %.preheader572
  br label %.preheader573

.preheader573:                                    ; preds = %.preheader573.loopexit, %.preheader573.preheader
  %h70 = phi i4 [ 0, %.preheader573.preheader ], [ %h_71, %.preheader573.loopexit ]
  %exitcond249 = icmp eq i4 %h70, -8
  %empty_484 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_71 = add i4 %h70, 1
  br i1 %exitcond249, label %.loopexit873.loopexit, label %.preheader572.preheader

.preheader572.preheader:                          ; preds = %.preheader573
  %tmp_370_cast1 = zext i4 %h_71 to i10
  %tmp_370_cast2 = zext i4 %h_71 to i11
  %tmp_1060 = add i11 %tmp_370_cast2, %tmp_1051
  %tmp_1061 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1060, i3 0)
  %p_shl417_cast = zext i14 %tmp_1061 to i15
  %tmp_1062 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_1060, i1 false)
  %p_shl418_cast = zext i12 %tmp_1062 to i15
  %tmp_1063 = add i15 %p_shl417_cast, %p_shl418_cast
  %tmp_1064 = add i10 %tmp_370_cast1, %tmp_1054
  %tmp_1065 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1064, i3 0)
  %p_shl415_cast = zext i13 %tmp_1065 to i14
  %tmp_1066 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1064, i1 false)
  %p_shl416_cast = zext i11 %tmp_1066 to i14
  %tmp_1067 = add i14 %p_shl415_cast, %p_shl416_cast
  br label %.preheader572

.preheader572:                                    ; preds = %85, %.preheader572.preheader
  %w69 = phi i4 [ %w_70, %85 ], [ 0, %.preheader572.preheader ]
  %exitcond248 = icmp eq i4 %w69, -8
  %empty_485 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_70 = add i4 %w69, 1
  br i1 %exitcond248, label %.preheader573.loopexit, label %85

; <label>:85                                      ; preds = %.preheader572
  %tmp_375_cast1 = zext i4 %w_70 to i14
  %tmp_375_cast = zext i4 %w_70 to i15
  %tmp_1069 = add i15 %tmp_1063, %tmp_375_cast
  %tmp_1360_cast = zext i15 %tmp_1069 to i64
  %shuffleunit1_0_outpu = getelementptr [9600 x float]* @shuffleunit1_0_outpu, i64 0, i64 %tmp_1360_cast
  %tmp_1070 = add i14 %tmp_1067, %tmp_375_cast1
  %tmp_1361_cast = zext i14 %tmp_1070 to i64
  %buffer0_1_48_8x8_p_a_2 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1361_cast
  %shuffleunit1_0_outpu_1 = load float* %shuffleunit1_0_outpu, align 4
  store float %shuffleunit1_0_outpu_1, float* %buffer0_1_48_8x8_p_a_2, align 4
  br label %.preheader572

.preheader571.loopexit:                           ; preds = %.preheader570
  br label %.preheader571

.preheader571:                                    ; preds = %.preheader571.preheader, %.preheader571.loopexit
  %co87 = phi i5 [ %co_88, %.preheader571.loopexit ], [ 0, %.preheader571.preheader ]
  %co88_cast = zext i5 %co87 to i10
  %exitcond247 = icmp eq i5 %co87, -8
  %empty_486 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_88 = add i5 %co87, 1
  br i1 %exitcond247, label %.preheader568.preheader, label %.preheader570.preheader

.preheader568.preheader:                          ; preds = %.preheader571
  br label %.preheader568

.preheader570.preheader:                          ; preds = %.preheader571
  %tmp_1059 = trunc i5 %co87 to i1
  %p_shl52 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1059, i5 0)
  %p_shl52_cast = zext i6 %p_shl52 to i7
  %p_shl53 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1059, i3 0)
  %p_shl53_cast = zext i4 %p_shl53 to i7
  %tmp_369 = sub i7 %p_shl52_cast, %p_shl53_cast
  %p_lshr_f5_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co87, i32 1, i32 4)
  %tmp_505_cast = zext i4 %p_lshr_f5_cast to i7
  br label %.preheader570

.preheader570.loopexit:                           ; preds = %.preheader569
  br label %.preheader570

.preheader570:                                    ; preds = %.preheader570.loopexit, %.preheader570.preheader
  %ci36 = phi i5 [ 0, %.preheader570.preheader ], [ %ci_37, %.preheader570.loopexit ]
  %ci36_cast = zext i5 %ci36 to i7
  %exitcond246 = icmp eq i5 %ci36, -8
  %empty_487 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_37 = add i5 %ci36, 1
  br i1 %exitcond246, label %.preheader571.loopexit, label %.preheader569.preheader

.preheader569.preheader:                          ; preds = %.preheader570
  %tmp_372_cast = zext i5 %ci36 to i17
  %tmp_373 = add i7 %tmp_369, %ci36_cast
  %tmp_374_cast = sext i7 %tmp_373 to i13
  br label %.preheader569

.preheader569:                                    ; preds = %86, %.preheader569.preheader
  %i58 = phi i3 [ %i_59, %86 ], [ 0, %.preheader569.preheader ]
  %exitcond245 = icmp eq i3 %i58, -4
  %empty_488 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_59 = add i3 %i58, 1
  br i1 %exitcond245, label %.preheader570.loopexit, label %86

; <label>:86                                      ; preds = %.preheader569
  %tmp_1072 = trunc i3 %i58 to i2
  %p_shl56 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1072, i5 0)
  %p_shl56_cast = zext i7 %p_shl56 to i8
  %p_shl57 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1072, i3 0)
  %p_shl57_cast = zext i5 %p_shl57 to i8
  %tmp_381 = sub i8 %p_shl56_cast, %p_shl57_cast
  %tmp_520_cast = sext i8 %tmp_381 to i10
  %tmp21 = add i10 -328, %tmp_520_cast
  %tmp_382 = add i10 %tmp21, %co88_cast
  %tmp_1073 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_382, i5 0)
  %p_shl421_cast = zext i15 %tmp_1073 to i16
  %tmp_1074 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_382, i3 0)
  %p_shl422_cast = zext i13 %tmp_1074 to i16
  %tmp_1075 = sub i16 %p_shl421_cast, %p_shl422_cast
  %tmp_1368_cast = sext i16 %tmp_1075 to i17
  %tmp_1076 = add i17 %tmp_372_cast, %tmp_1368_cast
  %tmp_1369_cast = sext i17 %tmp_1076 to i64
  %shuffle_conv_1x1_add_14 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1369_cast
  %shuffle_conv_1x1_loa_14 = load float* %shuffle_conv_1x1_add_14, align 4
  %p_shl58 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1072, i4 0)
  %p_shl58_cast = zext i6 %p_shl58 to i7
  %p_shl59 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1072, i2 0)
  %p_shl59_cast = zext i4 %p_shl59 to i7
  %tmp_383 = sub i7 %p_shl58_cast, %p_shl59_cast
  %tmp_384 = add i7 %tmp_383, %tmp_505_cast
  %tmp_1077 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_384, i6 0)
  %tmp_1078 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_384, i4 0)
  %p_shl420_cast = sext i11 %tmp_1078 to i13
  %tmp_1079 = sub i13 %tmp_1077, %p_shl420_cast
  %tmp_1080 = add i13 %tmp_374_cast, %tmp_1079
  %tmp_1377_cast = sext i13 %tmp_1080 to i64
  %weights_48_48_1x1_ad_5 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1377_cast
  store float %shuffle_conv_1x1_loa_14, float* %weights_48_48_1x1_ad_5, align 4
  br label %.preheader569

.preheader568.loopexit:                           ; preds = %.preheader567
  br label %.preheader568

.preheader568:                                    ; preds = %.preheader568.preheader, %.preheader568.loopexit
  %i56 = phi i5 [ %i_57, %.preheader568.loopexit ], [ 0, %.preheader568.preheader ]
  %i57_cast = zext i5 %i56 to i7
  %i57_cast1 = zext i5 %i56 to i10
  %exitcond244 = icmp eq i5 %i56, -8
  %empty_489 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_57 = add i5 %i56, 1
  br i1 %exitcond244, label %88, label %.preheader567.preheader

.preheader567.preheader:                          ; preds = %.preheader568
  br label %.preheader567

.preheader567:                                    ; preds = %.preheader567.preheader, %87
  %k9 = phi i2 [ %k_9, %87 ], [ 0, %.preheader567.preheader ]
  %exitcond243 = icmp eq i2 %k9, -2
  %empty_490 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_9 = add i2 %k9, 1
  br i1 %exitcond243, label %.preheader568.loopexit, label %87

; <label>:87                                      ; preds = %.preheader567
  %tmp_1071 = trunc i2 %k9 to i1
  %p_shl54 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1071, i5 0)
  %p_shl54_cast = zext i6 %p_shl54 to i7
  %p_shl55 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1071, i3 0)
  %p_shl55_cast = zext i4 %p_shl55 to i7
  %tmp_376 = sub i7 %p_shl54_cast, %p_shl55_cast
  %tmp_509_cast = sext i7 %tmp_376 to i10
  %tmp22 = add i10 -280, %tmp_509_cast
  %tmp_377 = add i10 %i57_cast1, %tmp22
  %tmp_378 = zext i10 %tmp_377 to i64
  %bias_addr_25 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_378
  %bias_load_25 = load float* %bias_addr_25, align 4
  %tmp_379 = add i7 %tmp_376, %i57_cast
  %tmp_513_cast = sext i7 %tmp_379 to i32
  %tmp_380 = zext i32 %tmp_513_cast to i64
  %bias_48_addr_8 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_380
  store float %bias_load_25, float* %bias_48_addr_8, align 4
  br label %.preheader567

; <label>:88                                      ; preds = %.preheader568
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit872

.loopexit872.loopexit:                            ; preds = %.preheader566
  br label %.loopexit872

.loopexit872:                                     ; preds = %.loopexit872.loopexit, %88
  %co89 = phi i5 [ 0, %88 ], [ %co_90, %.loopexit872.loopexit ]
  %co91_cast = zext i5 %co89 to i7
  %co91_cast1 = zext i5 %co89 to i9
  %exitcond242 = icmp eq i5 %co89, -8
  %empty_491 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_90 = add i5 %co89, 1
  br i1 %exitcond242, label %.preheader563.preheader, label %.preheader566.preheader

.preheader566.preheader:                          ; preds = %.loopexit872
  br label %.preheader566

.preheader563.preheader:                          ; preds = %.loopexit872
  br label %.preheader563

.preheader566.loopexit:                           ; preds = %.preheader565
  br label %.preheader566

.preheader566:                                    ; preds = %.preheader566.preheader, %.preheader566.loopexit
  %w71 = phi i2 [ %w_72, %.preheader566.loopexit ], [ 0, %.preheader566.preheader ]
  %exitcond241 = icmp eq i2 %w71, -1
  %empty_492 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_72 = add i2 %w71, 1
  br i1 %exitcond241, label %.loopexit872.loopexit, label %.preheader565.preheader

.preheader565.preheader:                          ; preds = %.preheader566
  %tmp_385_cast1 = zext i2 %w71 to i36
  %tmp_385_cast2 = zext i2 %w71 to i13
  br label %.preheader565

.preheader565.loopexit:                           ; preds = %.preheader564
  br label %.preheader565

.preheader565:                                    ; preds = %.preheader565.loopexit, %.preheader565.preheader
  %h72 = phi i2 [ 0, %.preheader565.preheader ], [ %h_73, %.preheader565.loopexit ]
  %exitcond240 = icmp eq i2 %h72, -1
  %empty_493 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_73 = add i2 %h72, 1
  br i1 %exitcond240, label %.preheader566.loopexit, label %.preheader564.preheader

.preheader564.preheader:                          ; preds = %.preheader565
  %tmp_392_cast1 = zext i2 %h72 to i10
  %tmp_392_cast = zext i2 %h72 to i15
  br label %.preheader564

.preheader564:                                    ; preds = %89, %.preheader564.preheader
  %i64 = phi i2 [ %i_65, %89 ], [ 0, %.preheader564.preheader ]
  %exitcond239 = icmp eq i2 %i64, -2
  %empty_494 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_65 = add i2 %i64, 1
  br i1 %exitcond239, label %.preheader565.loopexit, label %89

; <label>:89                                      ; preds = %.preheader564
  %tmp_1083 = trunc i2 %i64 to i1
  %p_shl66 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1083, i5 0)
  %p_shl66_cast = zext i6 %p_shl66 to i7
  %p_shl67 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1083, i3 0)
  %p_shl67_cast = zext i4 %p_shl67 to i7
  %tmp_396 = sub i7 %p_shl66_cast, %p_shl67_cast
  %tmp_546_cast = sext i7 %tmp_396 to i9
  %tmp23 = add i9 -248, %tmp_546_cast
  %tmp_397 = add i9 %co91_cast1, %tmp23
  %tmp_398_cast = zext i9 %tmp_397 to i12
  %tmp_1084 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_397, i2 0)
  %p_shl426_cast = zext i11 %tmp_1084 to i12
  %tmp_1085 = sub i12 %p_shl426_cast, %tmp_398_cast
  %tmp_1385_cast = sext i12 %tmp_1085 to i13
  %tmp_1086 = add i13 %tmp_1385_cast, %tmp_385_cast2
  %tmp_1386_cast = sext i13 %tmp_1086 to i15
  %p_shl425_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1086, i2 0)
  %tmp_1087 = sub i15 %p_shl425_cast, %tmp_1386_cast
  %tmp_1088 = add i15 %tmp_1087, %tmp_392_cast
  %tmp_1389_cast = zext i15 %tmp_1088 to i64
  %shuffle_conv_3x3_add_8 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1389_cast
  %shuffle_conv_3x3_loa_8 = load float* %shuffle_conv_3x3_add_8, align 4
  %tmp_399 = add i7 %tmp_396, %co91_cast
  %tmp_550_cast = sext i7 %tmp_399 to i32
  %tmp_400_cast1 = zext i32 %tmp_550_cast to i35
  %tmp_1089 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_399, i2 0)
  %tmp_1090 = sext i9 %tmp_1089 to i34
  %p_shl424_cast = zext i34 %tmp_1090 to i35
  %tmp_1091 = sub i35 %p_shl424_cast, %tmp_400_cast1
  %tmp_1392_cast = sext i35 %tmp_1091 to i36
  %tmp_1092 = add i36 %tmp_1392_cast, %tmp_385_cast1
  %tmp_1093 = trunc i36 %tmp_1092 to i10
  %tmp_1094 = trunc i36 %tmp_1092 to i8
  %p_shl423_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1094, i2 0)
  %tmp_1095 = sub i10 %p_shl423_cast, %tmp_1093
  %tmp_1096 = add i10 %tmp_1095, %tmp_392_cast1
  %tmp_1396_cast = zext i10 %tmp_1096 to i64
  %weights_48_1_3x3_add_3 = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1396_cast
  store float %shuffle_conv_3x3_loa_8, float* %weights_48_1_3x3_add_3, align 4
  br label %.preheader564

.preheader563.loopexit:                           ; preds = %.preheader562
  br label %.preheader563

.preheader563:                                    ; preds = %.preheader563.preheader, %.preheader563.loopexit
  %i60 = phi i5 [ %i_61, %.preheader563.loopexit ], [ 0, %.preheader563.preheader ]
  %i61_cast = zext i5 %i60 to i7
  %i61_cast514_cast = zext i5 %i60 to i9
  %exitcond238 = icmp eq i5 %i60, -8
  %empty_495 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_61 = add i5 %i60, 1
  br i1 %exitcond238, label %91, label %.preheader562.preheader

.preheader562.preheader:                          ; preds = %.preheader563
  br label %.preheader562

.preheader562:                                    ; preds = %.preheader562.preheader, %90
  %k10 = phi i2 [ %k_11, %90 ], [ 0, %.preheader562.preheader ]
  %exitcond237 = icmp eq i2 %k10, -2
  %empty_496 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_11 = add i2 %k10, 1
  br i1 %exitcond237, label %.preheader563.loopexit, label %90

; <label>:90                                      ; preds = %.preheader562
  %tmp_1082 = trunc i2 %k10 to i1
  %p_shl60 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1082, i5 0)
  %p_shl60_cast = zext i6 %p_shl60 to i7
  %p_shl61 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1082, i3 0)
  %p_shl61_cast = zext i4 %p_shl61 to i7
  %tmp_387 = sub i7 %p_shl60_cast, %p_shl61_cast
  %tmp_527_cast_cast = sext i7 %tmp_387 to i9
  %tmp24 = add i9 -232, %tmp_527_cast_cast
  %tmp_388 = add i9 %i61_cast514_cast, %tmp24
  %tmp_529_cast = sext i9 %tmp_388 to i10
  %tmp_389 = zext i10 %tmp_529_cast to i64
  %bias_addr_26 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_389
  %bias_load_26 = load float* %bias_addr_26, align 4
  %tmp_390 = add i7 %tmp_387, %i61_cast
  %tmp_531_cast = sext i7 %tmp_390 to i32
  %tmp_391 = zext i32 %tmp_531_cast to i64
  %bias_48_addr_9 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_391
  store float %bias_load_26, float* %bias_48_addr_9, align 4
  br label %.preheader562

; <label>:91                                      ; preds = %.preheader563
  call fastcc void @subconv_3x3_8_no_rel([4800 x float]* @buffer1_1_48_8x8_p, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [4800 x float]* @buffer0_1_48_8x8_p) nounwind
  br label %.loopexit871

.loopexit871.loopexit:                            ; preds = %.preheader561
  br label %.loopexit871

.loopexit871:                                     ; preds = %.loopexit871.loopexit, %91
  %co91 = phi i5 [ 0, %91 ], [ %co_92, %.loopexit871.loopexit ]
  %co93_cast = zext i5 %co91 to i10
  %exitcond236 = icmp eq i5 %co91, -8
  %empty_497 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_92 = add i5 %co91, 1
  br i1 %exitcond236, label %.preheader559.preheader, label %.preheader561.preheader

.preheader559.preheader:                          ; preds = %.loopexit871
  br label %.preheader559

.preheader561.preheader:                          ; preds = %.loopexit871
  %tmp_1081 = trunc i5 %co91 to i1
  %p_shl62 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1081, i5 0)
  %p_shl62_cast = zext i6 %p_shl62 to i7
  %p_shl63 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1081, i3 0)
  %p_shl63_cast = zext i4 %p_shl63 to i7
  %tmp_386 = sub i7 %p_shl62_cast, %p_shl63_cast
  %p_lshr_f6_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co91, i32 1, i32 4)
  %tmp_535_cast = zext i4 %p_lshr_f6_cast to i7
  br label %.preheader561

.preheader561.loopexit:                           ; preds = %.preheader560
  br label %.preheader561

.preheader561:                                    ; preds = %.preheader561.loopexit, %.preheader561.preheader
  %ci38 = phi i5 [ 0, %.preheader561.preheader ], [ %ci_39, %.preheader561.loopexit ]
  %ci38_cast = zext i5 %ci38 to i7
  %exitcond235 = icmp eq i5 %ci38, -8
  %empty_498 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_39 = add i5 %ci38, 1
  br i1 %exitcond235, label %.loopexit871.loopexit, label %.preheader560.preheader

.preheader560.preheader:                          ; preds = %.preheader561
  %tmp_393_cast = zext i5 %ci38 to i17
  %tmp_394 = add i7 %tmp_386, %ci38_cast
  %tmp_395_cast = sext i7 %tmp_394 to i13
  br label %.preheader560

.preheader560:                                    ; preds = %92, %.preheader560.preheader
  %i66 = phi i3 [ %i_67, %92 ], [ 0, %.preheader560.preheader ]
  %exitcond234 = icmp eq i3 %i66, -4
  %empty_499 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_67 = add i3 %i66, 1
  br i1 %exitcond234, label %.preheader561.loopexit, label %92

; <label>:92                                      ; preds = %.preheader560
  %tmp_1101 = trunc i3 %i66 to i2
  %p_shl68 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1101, i5 0)
  %p_shl68_cast = zext i7 %p_shl68 to i8
  %p_shl69 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1101, i3 0)
  %p_shl69_cast = zext i5 %p_shl69 to i8
  %tmp_406 = sub i8 %p_shl68_cast, %p_shl69_cast
  %tmp_553_cast = sext i8 %tmp_406 to i10
  %tmp25 = add i10 -232, %tmp_553_cast
  %tmp_407 = add i10 %tmp25, %co93_cast
  %tmp_1102 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_407, i5 0)
  %p_shl429_cast = zext i15 %tmp_1102 to i16
  %tmp_1103 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_407, i3 0)
  %p_shl430_cast = zext i13 %tmp_1103 to i16
  %tmp_1104 = sub i16 %p_shl429_cast, %p_shl430_cast
  %tmp_1406_cast = sext i16 %tmp_1104 to i17
  %tmp_1105 = add i17 %tmp_393_cast, %tmp_1406_cast
  %tmp_1407_cast = sext i17 %tmp_1105 to i64
  %shuffle_conv_1x1_add_15 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1407_cast
  %shuffle_conv_1x1_loa_15 = load float* %shuffle_conv_1x1_add_15, align 4
  %p_shl70 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1101, i4 0)
  %p_shl70_cast = zext i6 %p_shl70 to i7
  %p_shl71 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1101, i2 0)
  %p_shl71_cast = zext i4 %p_shl71 to i7
  %tmp_408 = sub i7 %p_shl70_cast, %p_shl71_cast
  %tmp_409 = add i7 %tmp_408, %tmp_535_cast
  %tmp_1106 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_409, i6 0)
  %tmp_1107 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_409, i4 0)
  %p_shl428_cast = sext i11 %tmp_1107 to i13
  %tmp_1108 = sub i13 %tmp_1106, %p_shl428_cast
  %tmp_1109 = add i13 %tmp_395_cast, %tmp_1108
  %tmp_1415_cast = sext i13 %tmp_1109 to i64
  %weights_48_48_1x1_ad_6 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1415_cast
  store float %shuffle_conv_1x1_loa_15, float* %weights_48_48_1x1_ad_6, align 4
  br label %.preheader560

.preheader559.loopexit:                           ; preds = %.preheader558
  br label %.preheader559

.preheader559:                                    ; preds = %.preheader559.preheader, %.preheader559.loopexit
  %i62 = phi i5 [ %i_63, %.preheader559.loopexit ], [ 0, %.preheader559.preheader ]
  %i63_cast = zext i5 %i62 to i7
  %i63_cast501_cast = zext i5 %i62 to i9
  %exitcond233 = icmp eq i5 %i62, -8
  %empty_500 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_63 = add i5 %i62, 1
  br i1 %exitcond233, label %94, label %.preheader558.preheader

.preheader558.preheader:                          ; preds = %.preheader559
  br label %.preheader558

.preheader558:                                    ; preds = %.preheader558.preheader, %93
  %k12 = phi i2 [ %k_13, %93 ], [ 0, %.preheader558.preheader ]
  %exitcond232 = icmp eq i2 %k12, -2
  %empty_501 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_13 = add i2 %k12, 1
  br i1 %exitcond232, label %.preheader559.loopexit, label %93

; <label>:93                                      ; preds = %.preheader558
  %tmp_1100 = trunc i2 %k12 to i1
  %p_shl64 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1100, i5 0)
  %p_shl64_cast = zext i6 %p_shl64 to i7
  %p_shl65 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1100, i3 0)
  %p_shl65_cast = zext i4 %p_shl65 to i7
  %tmp_401 = sub i7 %p_shl64_cast, %p_shl65_cast
  %tmp_537_cast_cast = sext i7 %tmp_401 to i9
  %tmp26 = add i9 -184, %tmp_537_cast_cast
  %tmp_402 = add i9 %i63_cast501_cast, %tmp26
  %tmp_539_cast = sext i9 %tmp_402 to i10
  %tmp_403 = zext i10 %tmp_539_cast to i64
  %bias_addr_27 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_403
  %bias_load_27 = load float* %bias_addr_27, align 4
  %tmp_404 = add i7 %tmp_401, %i63_cast
  %tmp_541_cast = sext i7 %tmp_404 to i32
  %tmp_405 = zext i32 %tmp_541_cast to i64
  %bias_48_addr_10 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_405
  store float %bias_load_27, float* %bias_48_addr_10, align 4
  br label %.preheader558

; <label>:94                                      ; preds = %.preheader559
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit870

.loopexit870.loopexit:                            ; preds = %.preheader557
  br label %.loopexit870

.loopexit870:                                     ; preds = %.loopexit870.loopexit, %94
  %co93 = phi i6 [ 0, %94 ], [ %co_94, %.loopexit870.loopexit ]
  %exitcond231 = icmp eq i6 %co93, -16
  %empty_502 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_94 = add i6 %co93, 1
  br i1 %exitcond231, label %96, label %.preheader557.preheader

.preheader557.preheader:                          ; preds = %.loopexit870
  %tmp_1097 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co93, i3 0)
  %p_shl431_cast = zext i9 %tmp_1097 to i10
  %tmp_1098 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co93, i1 false)
  %p_shl432_cast = zext i7 %tmp_1098 to i10
  %tmp_1099 = add i10 %p_shl432_cast, %p_shl431_cast
  br label %.preheader557

.preheader557.loopexit:                           ; preds = %.preheader556
  br label %.preheader557

.preheader557:                                    ; preds = %.preheader557.loopexit, %.preheader557.preheader
  %h74 = phi i4 [ 0, %.preheader557.preheader ], [ %h_75, %.preheader557.loopexit ]
  %exitcond230 = icmp eq i4 %h74, -8
  %empty_503 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_75 = add i4 %h74, 1
  br i1 %exitcond230, label %.loopexit870.loopexit, label %.preheader556.preheader

.preheader556.preheader:                          ; preds = %.preheader557
  %tmp_411_cast = zext i4 %h_75 to i10
  %tmp_1116 = add i10 %tmp_411_cast, %tmp_1099
  %tmp_1117 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1116, i3 0)
  %p_shl433_cast = zext i13 %tmp_1117 to i15
  %tmp_1118 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1116, i1 false)
  %p_shl434_cast = zext i11 %tmp_1118 to i15
  %tmp_1119 = add i15 %p_shl433_cast, %p_shl434_cast
  br label %.preheader556

.preheader556:                                    ; preds = %95, %.preheader556.preheader
  %w73 = phi i4 [ %w_74, %95 ], [ 0, %.preheader556.preheader ]
  %exitcond229 = icmp eq i4 %w73, -8
  %empty_504 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_74 = add i4 %w73, 1
  br i1 %exitcond229, label %.preheader557.loopexit, label %95

; <label>:95                                      ; preds = %.preheader556
  %tmp_414_cast1 = zext i4 %w_74 to i15
  %tmp_1129 = add i15 %tmp_1119, %tmp_414_cast1
  %tmp_1436_cast = zext i15 %tmp_1129 to i64
  %shuffleunit1_0_outpu_2 = getelementptr [9600 x float]* @shuffleunit1_0_outpu, i64 0, i64 %tmp_1436_cast
  %buffer0_1_48_8x8_p_a_3 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1436_cast
  %shuffleunit1_0_outpu_3 = load float* %shuffleunit1_0_outpu_2, align 4
  store float %shuffleunit1_0_outpu_3, float* %buffer0_1_48_8x8_p_a_3, align 4
  br label %.preheader556

; <label>:96                                      ; preds = %.loopexit870
  call fastcc void @shuffle_48_p([4800 x float]* @buffer0_1_48_8x8_p, [9600 x float]* @shuffleunit1_1_outpu) nounwind
  br label %.loopexit869

.loopexit869.loopexit:                            ; preds = %.preheader555
  br label %.loopexit869

.loopexit869:                                     ; preds = %.loopexit869.loopexit, %96
  %co95 = phi i6 [ 0, %96 ], [ %co_96, %.loopexit869.loopexit ]
  %co96_cast = zext i6 %co95 to i7
  %exitcond228 = icmp eq i6 %co95, -16
  %empty_505 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_96 = add i6 %co95, 1
  br i1 %exitcond228, label %.preheader553.preheader, label %.preheader555.preheader

.preheader553.preheader:                          ; preds = %.loopexit869
  br label %.preheader553

.preheader555.preheader:                          ; preds = %.loopexit869
  %tmp_410 = add i7 %co96_cast, 48
  %tmp_1110 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_410, i3 0)
  %p_shl437_cast = zext i10 %tmp_1110 to i11
  %tmp_1111 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp_410, i1 false)
  %p_shl438_cast = zext i8 %tmp_1111 to i11
  %tmp_1112 = add i11 %p_shl438_cast, %p_shl437_cast
  %tmp_1113 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co95, i3 0)
  %p_shl435_cast = zext i9 %tmp_1113 to i10
  %tmp_1114 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co95, i1 false)
  %p_shl436_cast = zext i7 %tmp_1114 to i10
  %tmp_1115 = add i10 %p_shl436_cast, %p_shl435_cast
  br label %.preheader555

.preheader555.loopexit:                           ; preds = %.preheader554
  br label %.preheader555

.preheader555:                                    ; preds = %.preheader555.loopexit, %.preheader555.preheader
  %h76 = phi i4 [ 0, %.preheader555.preheader ], [ %h_77, %.preheader555.loopexit ]
  %exitcond227 = icmp eq i4 %h76, -8
  %empty_506 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_77 = add i4 %h76, 1
  br i1 %exitcond227, label %.loopexit869.loopexit, label %.preheader554.preheader

.preheader554.preheader:                          ; preds = %.preheader555
  %tmp_413_cast1 = zext i4 %h_77 to i11
  %tmp_413_cast = zext i4 %h_77 to i10
  %tmp_1121 = add i10 %tmp_413_cast, %tmp_1115
  %tmp_1122 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1121, i3 0)
  %p_shl441_cast = zext i13 %tmp_1122 to i14
  %tmp_1123 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1121, i1 false)
  %p_shl442_cast = zext i11 %tmp_1123 to i14
  %tmp_1124 = add i14 %p_shl441_cast, %p_shl442_cast
  %tmp_1125 = add i11 %tmp_413_cast1, %tmp_1112
  %tmp_1126 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1125, i3 0)
  %p_shl439_cast = zext i14 %tmp_1126 to i15
  %tmp_1127 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_1125, i1 false)
  %p_shl440_cast = zext i12 %tmp_1127 to i15
  %tmp_1128 = add i15 %p_shl439_cast, %p_shl440_cast
  br label %.preheader554

.preheader554:                                    ; preds = %97, %.preheader554.preheader
  %w75 = phi i4 [ %w_76, %97 ], [ 0, %.preheader554.preheader ]
  %exitcond226 = icmp eq i4 %w75, -8
  %empty_507 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_76 = add i4 %w75, 1
  br i1 %exitcond226, label %.preheader555.loopexit, label %97

; <label>:97                                      ; preds = %.preheader554
  %tmp_418_cast1 = zext i4 %w_76 to i15
  %tmp_418_cast2 = zext i4 %w_76 to i14
  %tmp_1130 = add i14 %tmp_1124, %tmp_418_cast2
  %tmp_1437_cast = zext i14 %tmp_1130 to i64
  %buffer0_1_48_8x8_p_a_4 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1437_cast
  %tmp_1131 = add i15 %tmp_1128, %tmp_418_cast1
  %tmp_1438_cast = zext i15 %tmp_1131 to i64
  %shuffleunit1_1_outpu = getelementptr [9600 x float]* @shuffleunit1_1_outpu, i64 0, i64 %tmp_1438_cast
  %shuffleunit1_1_outpu_1 = load float* %shuffleunit1_1_outpu, align 4
  store float %shuffleunit1_1_outpu_1, float* %buffer0_1_48_8x8_p_a_4, align 4
  br label %.preheader554

.preheader553.loopexit:                           ; preds = %.preheader552
  br label %.preheader553

.preheader553:                                    ; preds = %.preheader553.preheader, %.preheader553.loopexit
  %co97 = phi i5 [ %co_98, %.preheader553.loopexit ], [ 0, %.preheader553.preheader ]
  %co98_cast496_cast = zext i5 %co97 to i9
  %exitcond225 = icmp eq i5 %co97, -8
  %empty_508 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_98 = add i5 %co97, 1
  br i1 %exitcond225, label %.preheader550.preheader, label %.preheader552.preheader

.preheader550.preheader:                          ; preds = %.preheader553
  br label %.preheader550

.preheader552.preheader:                          ; preds = %.preheader553
  %tmp_1120 = trunc i5 %co97 to i1
  %p_shl72 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1120, i5 0)
  %p_shl72_cast = zext i6 %p_shl72 to i7
  %p_shl73 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1120, i3 0)
  %p_shl73_cast = zext i4 %p_shl73 to i7
  %tmp_412 = sub i7 %p_shl72_cast, %p_shl73_cast
  %p_lshr_f7_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co97, i32 1, i32 4)
  %tmp_565_cast = zext i4 %p_lshr_f7_cast to i7
  br label %.preheader552

.preheader552.loopexit:                           ; preds = %.preheader551
  br label %.preheader552

.preheader552:                                    ; preds = %.preheader552.loopexit, %.preheader552.preheader
  %ci40 = phi i5 [ 0, %.preheader552.preheader ], [ %ci_41, %.preheader552.loopexit ]
  %ci40_cast = zext i5 %ci40 to i7
  %exitcond224 = icmp eq i5 %ci40, -8
  %empty_509 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_41 = add i5 %ci40, 1
  br i1 %exitcond224, label %.preheader553.loopexit, label %.preheader551.preheader

.preheader551.preheader:                          ; preds = %.preheader552
  %tmp_415_cast = zext i5 %ci40 to i17
  %tmp_416 = add i7 %tmp_412, %ci40_cast
  %tmp_417_cast = sext i7 %tmp_416 to i13
  br label %.preheader551

.preheader551:                                    ; preds = %98, %.preheader551.preheader
  %i70 = phi i3 [ %i_71, %98 ], [ 0, %.preheader551.preheader ]
  %exitcond223 = icmp eq i3 %i70, -4
  %empty_510 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_71 = add i3 %i70, 1
  br i1 %exitcond223, label %.preheader552.loopexit, label %98

; <label>:98                                      ; preds = %.preheader551
  %tmp_1133 = trunc i3 %i70 to i2
  %p_shl76 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1133, i5 0)
  %p_shl76_cast = zext i7 %p_shl76 to i8
  %p_shl77 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1133, i3 0)
  %p_shl77_cast = zext i5 %p_shl77 to i8
  %tmp_424 = sub i8 %p_shl76_cast, %p_shl77_cast
  %tmp_580_cast_cast = sext i8 %tmp_424 to i9
  %tmp27 = add i9 -136, %tmp_580_cast_cast
  %tmp_425 = add i9 %tmp27, %co98_cast496_cast
  %tmp_1134 = call i14 @_ssdm_op_BitConcatenate.i14.i9.i5(i9 %tmp_425, i5 0)
  %tmp_1135 = sext i14 %tmp_1134 to i15
  %p_shl445_cast = zext i15 %tmp_1135 to i16
  %tmp_1136 = call i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9 %tmp_425, i3 0)
  %tmp_1137 = sext i12 %tmp_1136 to i13
  %p_shl446_cast = zext i13 %tmp_1137 to i16
  %tmp_1138 = sub i16 %p_shl445_cast, %p_shl446_cast
  %tmp_1447_cast = sext i16 %tmp_1138 to i17
  %tmp_1139 = add i17 %tmp_415_cast, %tmp_1447_cast
  %tmp_1448_cast = sext i17 %tmp_1139 to i64
  %shuffle_conv_1x1_add_16 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1448_cast
  %shuffle_conv_1x1_loa_16 = load float* %shuffle_conv_1x1_add_16, align 4
  %p_shl78 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1133, i4 0)
  %p_shl78_cast = zext i6 %p_shl78 to i7
  %p_shl79 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1133, i2 0)
  %p_shl79_cast = zext i4 %p_shl79 to i7
  %tmp_426 = sub i7 %p_shl78_cast, %p_shl79_cast
  %tmp_427 = add i7 %tmp_426, %tmp_565_cast
  %tmp_1140 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_427, i6 0)
  %tmp_1141 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_427, i4 0)
  %p_shl444_cast = sext i11 %tmp_1141 to i13
  %tmp_1142 = sub i13 %tmp_1140, %p_shl444_cast
  %tmp_1143 = add i13 %tmp_417_cast, %tmp_1142
  %tmp_1456_cast = sext i13 %tmp_1143 to i64
  %weights_48_48_1x1_ad_7 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1456_cast
  store float %shuffle_conv_1x1_loa_16, float* %weights_48_48_1x1_ad_7, align 4
  br label %.preheader551

.preheader550.loopexit:                           ; preds = %.preheader549
  br label %.preheader550

.preheader550:                                    ; preds = %.preheader550.preheader, %.preheader550.loopexit
  %i68 = phi i5 [ %i_69, %.preheader550.loopexit ], [ 0, %.preheader550.preheader ]
  %i69_cast = zext i5 %i68 to i7
  %i69_cast486_cast = zext i5 %i68 to i9
  %exitcond222 = icmp eq i5 %i68, -8
  %empty_511 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_69 = add i5 %i68, 1
  br i1 %exitcond222, label %100, label %.preheader549.preheader

.preheader549.preheader:                          ; preds = %.preheader550
  br label %.preheader549

.preheader549:                                    ; preds = %.preheader549.preheader, %99
  %k14 = phi i2 [ %k_15, %99 ], [ 0, %.preheader549.preheader ]
  %exitcond221 = icmp eq i2 %k14, -2
  %empty_512 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_15 = add i2 %k14, 1
  br i1 %exitcond221, label %.preheader550.loopexit, label %99

; <label>:99                                      ; preds = %.preheader549
  %tmp_1132 = trunc i2 %k14 to i1
  %p_shl74 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1132, i5 0)
  %p_shl74_cast = zext i6 %p_shl74 to i7
  %p_shl75 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1132, i3 0)
  %p_shl75_cast = zext i4 %p_shl75 to i7
  %tmp_419 = sub i7 %p_shl74_cast, %p_shl75_cast
  %tmp_569_cast_cast = sext i7 %tmp_419 to i9
  %tmp28 = add i9 -136, %tmp_569_cast_cast
  %tmp_420 = add i9 %i69_cast486_cast, %tmp28
  %tmp_571_cast = sext i9 %tmp_420 to i10
  %tmp_421 = zext i10 %tmp_571_cast to i64
  %bias_addr_28 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_421
  %bias_load_28 = load float* %bias_addr_28, align 4
  %tmp_422 = add i7 %tmp_419, %i69_cast
  %tmp_573_cast = sext i7 %tmp_422 to i32
  %tmp_423 = zext i32 %tmp_573_cast to i64
  %bias_48_addr_11 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_423
  store float %bias_load_28, float* %bias_48_addr_11, align 4
  br label %.preheader549

; <label>:100                                     ; preds = %.preheader550
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit868

.loopexit868.loopexit:                            ; preds = %.preheader548
  br label %.loopexit868

.loopexit868:                                     ; preds = %.loopexit868.loopexit, %100
  %co99 = phi i5 [ 0, %100 ], [ %co_100, %.loopexit868.loopexit ]
  %co101_cast = zext i5 %co99 to i7
  %co101_cast1 = zext i5 %co99 to i9
  %exitcond220 = icmp eq i5 %co99, -8
  %empty_513 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_100 = add i5 %co99, 1
  br i1 %exitcond220, label %.preheader545.preheader, label %.preheader548.preheader

.preheader548.preheader:                          ; preds = %.loopexit868
  br label %.preheader548

.preheader545.preheader:                          ; preds = %.loopexit868
  br label %.preheader545

.preheader548.loopexit:                           ; preds = %.preheader547
  br label %.preheader548

.preheader548:                                    ; preds = %.preheader548.preheader, %.preheader548.loopexit
  %w77 = phi i2 [ %w_78, %.preheader548.loopexit ], [ 0, %.preheader548.preheader ]
  %exitcond219 = icmp eq i2 %w77, -1
  %empty_514 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_78 = add i2 %w77, 1
  br i1 %exitcond219, label %.loopexit868.loopexit, label %.preheader547.preheader

.preheader547.preheader:                          ; preds = %.preheader548
  %tmp_428_cast1 = zext i2 %w77 to i36
  %tmp_428_cast = zext i2 %w77 to i12
  br label %.preheader547

.preheader547.loopexit:                           ; preds = %.preheader546
  br label %.preheader547

.preheader547:                                    ; preds = %.preheader547.loopexit, %.preheader547.preheader
  %h78 = phi i2 [ 0, %.preheader547.preheader ], [ %h_79, %.preheader547.loopexit ]
  %exitcond218 = icmp eq i2 %h78, -1
  %empty_515 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_79 = add i2 %h78, 1
  br i1 %exitcond218, label %.preheader548.loopexit, label %.preheader546.preheader

.preheader546.preheader:                          ; preds = %.preheader547
  %tmp_435_cast1 = zext i2 %h78 to i10
  %tmp_435_cast = zext i2 %h78 to i15
  br label %.preheader546

.preheader546:                                    ; preds = %101, %.preheader546.preheader
  %i76 = phi i2 [ %i_77, %101 ], [ 0, %.preheader546.preheader ]
  %exitcond217 = icmp eq i2 %i76, -2
  %empty_516 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_77 = add i2 %i76, 1
  br i1 %exitcond217, label %.preheader547.loopexit, label %101

; <label>:101                                     ; preds = %.preheader546
  %tmp_1146 = trunc i2 %i76 to i1
  %p_shl86 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1146, i5 0)
  %p_shl86_cast = zext i6 %p_shl86 to i7
  %p_shl87 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1146, i3 0)
  %p_shl87_cast = zext i4 %p_shl87 to i7
  %tmp_439 = sub i7 %p_shl86_cast, %p_shl87_cast
  %tmp_606_cast = sext i7 %tmp_439 to i9
  %tmp29 = add i9 -200, %tmp_606_cast
  %tmp_440 = add i9 %tmp29, %co101_cast1
  %tmp_441_cast1 = zext i9 %tmp_440 to i12
  %tmp_1147 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_440, i2 0)
  %p_shl450_cast = zext i11 %tmp_1147 to i12
  %tmp_1148 = sub i12 %p_shl450_cast, %tmp_441_cast1
  %tmp_1149 = add i12 %tmp_428_cast, %tmp_1148
  %tmp_1465_cast = sext i12 %tmp_1149 to i15
  %tmp_1150 = call i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12 %tmp_1149, i2 0)
  %p_shl449_cast = sext i14 %tmp_1150 to i15
  %tmp_1151 = sub i15 %p_shl449_cast, %tmp_1465_cast
  %tmp_1152 = add i15 %tmp_435_cast, %tmp_1151
  %tmp_1468_cast = zext i15 %tmp_1152 to i64
  %shuffle_conv_3x3_add_9 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1468_cast
  %shuffle_conv_3x3_loa_9 = load float* %shuffle_conv_3x3_add_9, align 4
  %tmp_442 = add i7 %co101_cast, %tmp_439
  %tmp_610_cast = sext i7 %tmp_442 to i32
  %tmp_443_cast = zext i32 %tmp_610_cast to i35
  %tmp_1153 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_442, i2 0)
  %tmp_1154 = sext i9 %tmp_1153 to i34
  %p_shl448_cast = zext i34 %tmp_1154 to i35
  %tmp_1155 = sub i35 %p_shl448_cast, %tmp_443_cast
  %tmp_1471_cast = sext i35 %tmp_1155 to i36
  %tmp_1156 = add i36 %tmp_428_cast1, %tmp_1471_cast
  %tmp_1157 = trunc i36 %tmp_1156 to i10
  %tmp_1158 = trunc i36 %tmp_1156 to i8
  %p_shl447_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1158, i2 0)
  %tmp_1159 = sub i10 %p_shl447_cast, %tmp_1157
  %tmp_1160 = add i10 %tmp_435_cast1, %tmp_1159
  %tmp_1475_cast = zext i10 %tmp_1160 to i64
  %weights_48_1_3x3_add_4 = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1475_cast
  store float %shuffle_conv_3x3_loa_9, float* %weights_48_1_3x3_add_4, align 4
  br label %.preheader546

.preheader545.loopexit:                           ; preds = %.preheader544
  br label %.preheader545

.preheader545:                                    ; preds = %.preheader545.preheader, %.preheader545.loopexit
  %i72 = phi i5 [ %i_73, %.preheader545.loopexit ], [ 0, %.preheader545.preheader ]
  %i73_cast = zext i5 %i72 to i7
  %i73_cast476_cast = zext i5 %i72 to i8
  %exitcond216 = icmp eq i5 %i72, -8
  %empty_517 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_73 = add i5 %i72, 1
  br i1 %exitcond216, label %103, label %.preheader544.preheader

.preheader544.preheader:                          ; preds = %.preheader545
  br label %.preheader544

.preheader544:                                    ; preds = %.preheader544.preheader, %102
  %k16 = phi i2 [ %k_17, %102 ], [ 0, %.preheader544.preheader ]
  %exitcond215 = icmp eq i2 %k16, -2
  %empty_518 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_17 = add i2 %k16, 1
  br i1 %exitcond215, label %.preheader545.loopexit, label %102

; <label>:102                                     ; preds = %.preheader544
  %tmp_1145 = trunc i2 %k16 to i1
  %p_shl80 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1145, i5 0)
  %p_shl80_cast = zext i6 %p_shl80 to i7
  %p_shl81 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1145, i3 0)
  %p_shl81_cast = zext i4 %p_shl81 to i7
  %tmp_430 = sub i7 %p_shl80_cast, %p_shl81_cast
  %tmp_587_cast_cast = sext i7 %tmp_430 to i8
  %tmp30 = add i8 -88, %tmp_587_cast_cast
  %tmp_431 = add i8 %i73_cast476_cast, %tmp30
  %tmp_589_cast = sext i8 %tmp_431 to i10
  %tmp_432 = zext i10 %tmp_589_cast to i64
  %bias_addr_29 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_432
  %bias_load_29 = load float* %bias_addr_29, align 4
  %tmp_433 = add i7 %tmp_430, %i73_cast
  %tmp_591_cast = sext i7 %tmp_433 to i32
  %tmp_434 = zext i32 %tmp_591_cast to i64
  %bias_48_addr_12 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_434
  store float %bias_load_29, float* %bias_48_addr_12, align 4
  br label %.preheader544

; <label>:103                                     ; preds = %.preheader545
  call fastcc void @subconv_3x3_8_no_rel([4800 x float]* @buffer1_1_48_8x8_p, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [4800 x float]* @buffer0_1_48_8x8_p) nounwind
  br label %.loopexit867

.loopexit867.loopexit:                            ; preds = %.preheader543
  br label %.loopexit867

.loopexit867:                                     ; preds = %.loopexit867.loopexit, %103
  %co101 = phi i5 [ 0, %103 ], [ %co_102, %.loopexit867.loopexit ]
  %co103_cast = zext i5 %co101 to i11
  %exitcond214 = icmp eq i5 %co101, -8
  %empty_519 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_102 = add i5 %co101, 1
  br i1 %exitcond214, label %.preheader541.preheader, label %.preheader543.preheader

.preheader541.preheader:                          ; preds = %.loopexit867
  br label %.preheader541

.preheader543.preheader:                          ; preds = %.loopexit867
  %tmp_1144 = trunc i5 %co101 to i1
  %p_shl82 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1144, i5 0)
  %p_shl82_cast = zext i6 %p_shl82 to i7
  %p_shl83 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1144, i3 0)
  %p_shl83_cast = zext i4 %p_shl83 to i7
  %tmp_429 = sub i7 %p_shl82_cast, %p_shl83_cast
  %p_lshr_f8_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co101, i32 1, i32 4)
  %tmp_595_cast = zext i4 %p_lshr_f8_cast to i7
  br label %.preheader543

.preheader543.loopexit:                           ; preds = %.preheader542
  br label %.preheader543

.preheader543:                                    ; preds = %.preheader543.loopexit, %.preheader543.preheader
  %ci42 = phi i5 [ 0, %.preheader543.preheader ], [ %ci_43, %.preheader543.loopexit ]
  %ci42_cast = zext i5 %ci42 to i7
  %exitcond213 = icmp eq i5 %ci42, -8
  %empty_520 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_43 = add i5 %ci42, 1
  br i1 %exitcond213, label %.loopexit867.loopexit, label %.preheader542.preheader

.preheader542.preheader:                          ; preds = %.preheader543
  %tmp_436_cast = zext i5 %ci42 to i18
  %tmp_437 = add i7 %tmp_429, %ci42_cast
  %tmp_438_cast = sext i7 %tmp_437 to i13
  br label %.preheader542

.preheader542:                                    ; preds = %104, %.preheader542.preheader
  %i78 = phi i3 [ %i_79, %104 ], [ 0, %.preheader542.preheader ]
  %exitcond212 = icmp eq i3 %i78, -4
  %empty_521 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_79 = add i3 %i78, 1
  br i1 %exitcond212, label %.preheader543.loopexit, label %104

; <label>:104                                     ; preds = %.preheader542
  %tmp_1165 = trunc i3 %i78 to i2
  %p_shl88 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1165, i5 0)
  %p_shl88_cast = zext i7 %p_shl88 to i8
  %p_shl89 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1165, i3 0)
  %p_shl89_cast = zext i5 %p_shl89 to i8
  %tmp_449 = sub i8 %p_shl88_cast, %p_shl89_cast
  %tmp_613_cast = sext i8 %tmp_449 to i11
  %tmp31 = add i11 984, %tmp_613_cast
  %tmp_450 = add i11 %tmp31, %co103_cast
  %tmp_1166 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_450, i5 0)
  %p_shl453_cast = zext i16 %tmp_1166 to i17
  %tmp_1167 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_450, i3 0)
  %p_shl454_cast = zext i14 %tmp_1167 to i17
  %tmp_1168 = sub i17 %p_shl453_cast, %p_shl454_cast
  %tmp_1485_cast = sext i17 %tmp_1168 to i18
  %tmp_1169 = add i18 %tmp_436_cast, %tmp_1485_cast
  %tmp_1486_cast = sext i18 %tmp_1169 to i64
  %shuffle_conv_1x1_add_17 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1486_cast
  %shuffle_conv_1x1_loa_17 = load float* %shuffle_conv_1x1_add_17, align 4
  %p_shl90 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1165, i4 0)
  %p_shl90_cast = zext i6 %p_shl90 to i7
  %p_shl91 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1165, i2 0)
  %p_shl91_cast = zext i4 %p_shl91 to i7
  %tmp_451 = sub i7 %p_shl90_cast, %p_shl91_cast
  %tmp_452 = add i7 %tmp_451, %tmp_595_cast
  %tmp_1170 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_452, i6 0)
  %tmp_1171 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_452, i4 0)
  %p_shl452_cast = sext i11 %tmp_1171 to i13
  %tmp_1172 = sub i13 %tmp_1170, %p_shl452_cast
  %tmp_1173 = add i13 %tmp_438_cast, %tmp_1172
  %tmp_1494_cast = sext i13 %tmp_1173 to i64
  %weights_48_48_1x1_ad_8 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1494_cast
  store float %shuffle_conv_1x1_loa_17, float* %weights_48_48_1x1_ad_8, align 4
  br label %.preheader542

.preheader541.loopexit:                           ; preds = %.preheader540
  br label %.preheader541

.preheader541:                                    ; preds = %.preheader541.preheader, %.preheader541.loopexit
  %i74 = phi i5 [ %i_75, %.preheader541.loopexit ], [ 0, %.preheader541.preheader ]
  %i75_cast = zext i5 %i74 to i7
  %i75_cast1 = zext i5 %i74 to i11
  %exitcond211 = icmp eq i5 %i74, -8
  %empty_522 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_75 = add i5 %i74, 1
  br i1 %exitcond211, label %106, label %.preheader540.preheader

.preheader540.preheader:                          ; preds = %.preheader541
  br label %.preheader540

.preheader540:                                    ; preds = %.preheader540.preheader, %105
  %k18 = phi i2 [ %k_19, %105 ], [ 0, %.preheader540.preheader ]
  %exitcond210 = icmp eq i2 %k18, -2
  %empty_523 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_19 = add i2 %k18, 1
  br i1 %exitcond210, label %.preheader541.loopexit, label %105

; <label>:105                                     ; preds = %.preheader540
  %tmp_1164 = trunc i2 %k18 to i1
  %p_shl84 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1164, i5 0)
  %p_shl84_cast = zext i6 %p_shl84 to i7
  %p_shl85 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1164, i3 0)
  %p_shl85_cast = zext i4 %p_shl85 to i7
  %tmp_444 = sub i7 %p_shl84_cast, %p_shl85_cast
  %tmp32 = add i7 -40, %tmp_444
  %tmp32_cast1 = sext i7 %tmp32 to i10
  %tmp32_cast = zext i10 %tmp32_cast1 to i11
  %tmp_445 = add i11 %i75_cast1, %tmp32_cast
  %tmp_446 = zext i11 %tmp_445 to i64
  %bias_addr_30 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_446
  %bias_load_30 = load float* %bias_addr_30, align 4
  %tmp_447 = add i7 %tmp_444, %i75_cast
  %tmp_601_cast = sext i7 %tmp_447 to i32
  %tmp_448 = zext i32 %tmp_601_cast to i64
  %bias_48_addr_13 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_448
  store float %bias_load_30, float* %bias_48_addr_13, align 4
  br label %.preheader540

; <label>:106                                     ; preds = %.preheader541
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit866

.loopexit866.loopexit:                            ; preds = %.preheader539
  br label %.loopexit866

.loopexit866:                                     ; preds = %.loopexit866.loopexit, %106
  %co103 = phi i6 [ 0, %106 ], [ %co_104, %.loopexit866.loopexit ]
  %exitcond209 = icmp eq i6 %co103, -16
  %empty_524 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_104 = add i6 %co103, 1
  br i1 %exitcond209, label %108, label %.preheader539.preheader

.preheader539.preheader:                          ; preds = %.loopexit866
  %tmp_1161 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co103, i3 0)
  %p_shl455_cast = zext i9 %tmp_1161 to i10
  %tmp_1162 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co103, i1 false)
  %p_shl456_cast = zext i7 %tmp_1162 to i10
  %tmp_1163 = add i10 %p_shl456_cast, %p_shl455_cast
  br label %.preheader539

.preheader539.loopexit:                           ; preds = %.preheader538
  br label %.preheader539

.preheader539:                                    ; preds = %.preheader539.loopexit, %.preheader539.preheader
  %h80 = phi i4 [ 0, %.preheader539.preheader ], [ %h_81, %.preheader539.loopexit ]
  %exitcond208 = icmp eq i4 %h80, -8
  %empty_525 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_81 = add i4 %h80, 1
  br i1 %exitcond208, label %.loopexit866.loopexit, label %.preheader538.preheader

.preheader538.preheader:                          ; preds = %.preheader539
  %tmp_454_cast = zext i4 %h_81 to i10
  %tmp_1180 = add i10 %tmp_454_cast, %tmp_1163
  %tmp_1181 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1180, i3 0)
  %p_shl457_cast = zext i13 %tmp_1181 to i15
  %tmp_1182 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1180, i1 false)
  %p_shl458_cast = zext i11 %tmp_1182 to i15
  %tmp_1183 = add i15 %p_shl457_cast, %p_shl458_cast
  br label %.preheader538

.preheader538:                                    ; preds = %107, %.preheader538.preheader
  %w79 = phi i4 [ %w_80, %107 ], [ 0, %.preheader538.preheader ]
  %exitcond207 = icmp eq i4 %w79, -8
  %empty_526 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_80 = add i4 %w79, 1
  br i1 %exitcond207, label %.preheader539.loopexit, label %107

; <label>:107                                     ; preds = %.preheader538
  %tmp_457_cast = zext i4 %w_80 to i15
  %tmp_1193 = add i15 %tmp_1183, %tmp_457_cast
  %tmp_1515_cast = zext i15 %tmp_1193 to i64
  %buffer0_1_48_8x8_p_a_5 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1515_cast
  %shuffleunit1_1_outpu_2 = getelementptr [9600 x float]* @shuffleunit1_1_outpu, i64 0, i64 %tmp_1515_cast
  %shuffleunit1_1_outpu_3 = load float* %shuffleunit1_1_outpu_2, align 4
  store float %shuffleunit1_1_outpu_3, float* %buffer0_1_48_8x8_p_a_5, align 4
  br label %.preheader538

; <label>:108                                     ; preds = %.loopexit866
  call fastcc void @shuffle_48_p([4800 x float]* @buffer0_1_48_8x8_p, [9600 x float]* @shuffleunit1_2_outpu) nounwind
  br label %.loopexit865

.loopexit865.loopexit:                            ; preds = %.preheader537
  br label %.loopexit865

.loopexit865:                                     ; preds = %.loopexit865.loopexit, %108
  %co105 = phi i6 [ 0, %108 ], [ %co_106, %.loopexit865.loopexit ]
  %co106_cast = zext i6 %co105 to i7
  %exitcond206 = icmp eq i6 %co105, -16
  %empty_527 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_106 = add i6 %co105, 1
  br i1 %exitcond206, label %.preheader535.preheader, label %.preheader537.preheader

.preheader535.preheader:                          ; preds = %.loopexit865
  br label %.preheader535

.preheader537.preheader:                          ; preds = %.loopexit865
  %tmp_453 = add i7 %co106_cast, 48
  %tmp_1174 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_453, i3 0)
  %p_shl461_cast = zext i10 %tmp_1174 to i11
  %tmp_1175 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp_453, i1 false)
  %p_shl462_cast = zext i8 %tmp_1175 to i11
  %tmp_1176 = add i11 %p_shl462_cast, %p_shl461_cast
  %tmp_1177 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co105, i3 0)
  %p_shl459_cast = zext i9 %tmp_1177 to i10
  %tmp_1178 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co105, i1 false)
  %p_shl460_cast = zext i7 %tmp_1178 to i10
  %tmp_1179 = add i10 %p_shl460_cast, %p_shl459_cast
  br label %.preheader537

.preheader537.loopexit:                           ; preds = %.preheader536
  br label %.preheader537

.preheader537:                                    ; preds = %.preheader537.loopexit, %.preheader537.preheader
  %h82 = phi i4 [ 0, %.preheader537.preheader ], [ %h_83, %.preheader537.loopexit ]
  %exitcond205 = icmp eq i4 %h82, -8
  %empty_528 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_83 = add i4 %h82, 1
  br i1 %exitcond205, label %.loopexit865.loopexit, label %.preheader536.preheader

.preheader536.preheader:                          ; preds = %.preheader537
  %tmp_456_cast = zext i4 %h_83 to i11
  %tmp_456_cast1 = zext i4 %h_83 to i10
  %tmp_1185 = add i10 %tmp_456_cast1, %tmp_1179
  %tmp_1186 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1185, i3 0)
  %p_shl465_cast = zext i13 %tmp_1186 to i14
  %tmp_1187 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1185, i1 false)
  %p_shl466_cast = zext i11 %tmp_1187 to i14
  %tmp_1188 = add i14 %p_shl465_cast, %p_shl466_cast
  %tmp_1189 = add i11 %tmp_456_cast, %tmp_1176
  %tmp_1190 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1189, i3 0)
  %p_shl463_cast = zext i14 %tmp_1190 to i15
  %tmp_1191 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_1189, i1 false)
  %p_shl464_cast = zext i12 %tmp_1191 to i15
  %tmp_1192 = add i15 %p_shl463_cast, %p_shl464_cast
  br label %.preheader536

.preheader536:                                    ; preds = %109, %.preheader536.preheader
  %w81 = phi i4 [ %w_82, %109 ], [ 0, %.preheader536.preheader ]
  %exitcond204 = icmp eq i4 %w81, -8
  %empty_529 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_82 = add i4 %w81, 1
  br i1 %exitcond204, label %.preheader537.loopexit, label %109

; <label>:109                                     ; preds = %.preheader536
  %tmp_461_cast1 = zext i4 %w_82 to i15
  %tmp_461_cast = zext i4 %w_82 to i14
  %tmp_1194 = add i14 %tmp_1188, %tmp_461_cast
  %tmp_1516_cast = zext i14 %tmp_1194 to i64
  %buffer0_1_48_8x8_p_a_6 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1516_cast
  %tmp_1195 = add i15 %tmp_1192, %tmp_461_cast1
  %tmp_1517_cast = zext i15 %tmp_1195 to i64
  %shuffleunit1_2_outpu = getelementptr [9600 x float]* @shuffleunit1_2_outpu, i64 0, i64 %tmp_1517_cast
  %shuffleunit1_2_outpu_1 = load float* %shuffleunit1_2_outpu, align 4
  store float %shuffleunit1_2_outpu_1, float* %buffer0_1_48_8x8_p_a_6, align 4
  br label %.preheader536

.preheader535.loopexit:                           ; preds = %.preheader534
  br label %.preheader535

.preheader535:                                    ; preds = %.preheader535.preheader, %.preheader535.loopexit
  %co107 = phi i5 [ %co_108, %.preheader535.loopexit ], [ 0, %.preheader535.preheader ]
  %co108_cast = zext i5 %co107 to i11
  %exitcond203 = icmp eq i5 %co107, -8
  %empty_530 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_108 = add i5 %co107, 1
  br i1 %exitcond203, label %.preheader532.preheader, label %.preheader534.preheader

.preheader532.preheader:                          ; preds = %.preheader535
  br label %.preheader532

.preheader534.preheader:                          ; preds = %.preheader535
  %tmp_1184 = trunc i5 %co107 to i1
  %p_shl92 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1184, i5 0)
  %p_shl92_cast = zext i6 %p_shl92 to i7
  %p_shl93 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1184, i3 0)
  %p_shl93_cast = zext i4 %p_shl93 to i7
  %tmp_455 = sub i7 %p_shl92_cast, %p_shl93_cast
  %p_lshr_f9_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co107, i32 1, i32 4)
  %tmp_625_cast = zext i4 %p_lshr_f9_cast to i7
  br label %.preheader534

.preheader534.loopexit:                           ; preds = %.preheader533
  br label %.preheader534

.preheader534:                                    ; preds = %.preheader534.loopexit, %.preheader534.preheader
  %ci44 = phi i5 [ 0, %.preheader534.preheader ], [ %ci_45, %.preheader534.loopexit ]
  %ci44_cast = zext i5 %ci44 to i7
  %exitcond202 = icmp eq i5 %ci44, -8
  %empty_531 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_45 = add i5 %ci44, 1
  br i1 %exitcond202, label %.preheader535.loopexit, label %.preheader533.preheader

.preheader533.preheader:                          ; preds = %.preheader534
  %tmp_458_cast = zext i5 %ci44 to i18
  %tmp_459 = add i7 %tmp_455, %ci44_cast
  %tmp_460_cast1 = sext i7 %tmp_459 to i13
  br label %.preheader533

.preheader533:                                    ; preds = %110, %.preheader533.preheader
  %i82 = phi i3 [ %i_83, %110 ], [ 0, %.preheader533.preheader ]
  %exitcond201 = icmp eq i3 %i82, -4
  %empty_532 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_83 = add i3 %i82, 1
  br i1 %exitcond201, label %.preheader534.loopexit, label %110

; <label>:110                                     ; preds = %.preheader533
  %tmp_1197 = trunc i3 %i82 to i2
  %p_shl96 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1197, i5 0)
  %p_shl96_cast = zext i7 %p_shl96 to i8
  %p_shl97 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1197, i3 0)
  %p_shl97_cast = zext i5 %p_shl97 to i8
  %tmp_467 = sub i8 %p_shl96_cast, %p_shl97_cast
  %tmp_640_cast = sext i8 %tmp_467 to i11
  %tmp33 = add i11 -968, %tmp_640_cast
  %tmp_468 = add i11 %tmp33, %co108_cast
  %tmp_1198 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_468, i5 0)
  %p_shl469_cast = zext i16 %tmp_1198 to i17
  %tmp_1199 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_468, i3 0)
  %p_shl470_cast = zext i14 %tmp_1199 to i17
  %tmp_1200 = sub i17 %p_shl469_cast, %p_shl470_cast
  %tmp_1524_cast = sext i17 %tmp_1200 to i18
  %tmp_1201 = add i18 %tmp_458_cast, %tmp_1524_cast
  %tmp_1525_cast = sext i18 %tmp_1201 to i64
  %shuffle_conv_1x1_add_18 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1525_cast
  %shuffle_conv_1x1_loa_18 = load float* %shuffle_conv_1x1_add_18, align 4
  %p_shl98 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1197, i4 0)
  %p_shl98_cast = zext i6 %p_shl98 to i7
  %p_shl99 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1197, i2 0)
  %p_shl99_cast = zext i4 %p_shl99 to i7
  %tmp_469 = sub i7 %p_shl98_cast, %p_shl99_cast
  %tmp_470 = add i7 %tmp_469, %tmp_625_cast
  %tmp_1202 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_470, i6 0)
  %tmp_1203 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_470, i4 0)
  %p_shl468_cast = sext i11 %tmp_1203 to i13
  %tmp_1204 = sub i13 %tmp_1202, %p_shl468_cast
  %tmp_1205 = add i13 %tmp_460_cast1, %tmp_1204
  %tmp_1533_cast = sext i13 %tmp_1205 to i64
  %weights_48_48_1x1_ad_9 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1533_cast
  store float %shuffle_conv_1x1_loa_18, float* %weights_48_48_1x1_ad_9, align 4
  br label %.preheader533

.preheader532.loopexit:                           ; preds = %.preheader531
  br label %.preheader532

.preheader532:                                    ; preds = %.preheader532.preheader, %.preheader532.loopexit
  %i80 = phi i5 [ %i_81, %.preheader532.loopexit ], [ 0, %.preheader532.preheader ]
  %i81_cast = zext i5 %i80 to i7
  %i81_cast1 = zext i5 %i80 to i11
  %exitcond200 = icmp eq i5 %i80, -8
  %empty_533 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_81 = add i5 %i80, 1
  br i1 %exitcond200, label %112, label %.preheader531.preheader

.preheader531.preheader:                          ; preds = %.preheader532
  br label %.preheader531

.preheader531:                                    ; preds = %.preheader531.preheader, %111
  %k20 = phi i2 [ %k_21, %111 ], [ 0, %.preheader531.preheader ]
  %exitcond199 = icmp eq i2 %k20, -2
  %empty_534 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_21 = add i2 %k20, 1
  br i1 %exitcond199, label %.preheader532.loopexit, label %111

; <label>:111                                     ; preds = %.preheader531
  %tmp_1196 = trunc i2 %k20 to i1
  %p_shl94 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1196, i5 0)
  %p_shl94_cast = zext i6 %p_shl94 to i7
  %p_shl95 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1196, i3 0)
  %p_shl95_cast = zext i4 %p_shl95 to i7
  %tmp_462 = sub i7 %p_shl94_cast, %p_shl95_cast
  %tmp_629_cast = sext i7 %tmp_462 to i11
  %tmp34 = add i11 -1016, %tmp_629_cast
  %tmp_463 = add i11 %i81_cast1, %tmp34
  %tmp_464 = zext i11 %tmp_463 to i64
  %bias_addr_31 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_464
  %bias_load_31 = load float* %bias_addr_31, align 4
  %tmp_465 = add i7 %tmp_462, %i81_cast
  %tmp_633_cast = sext i7 %tmp_465 to i32
  %tmp_466 = zext i32 %tmp_633_cast to i64
  %bias_48_addr_14 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_466
  store float %bias_load_31, float* %bias_48_addr_14, align 4
  br label %.preheader531

; <label>:112                                     ; preds = %.preheader532
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit864

.loopexit864.loopexit:                            ; preds = %.preheader530
  br label %.loopexit864

.loopexit864:                                     ; preds = %.loopexit864.loopexit, %112
  %co109 = phi i5 [ 0, %112 ], [ %co_110, %.loopexit864.loopexit ]
  %co111_cast = zext i5 %co109 to i7
  %co111_cast1 = zext i5 %co109 to i9
  %exitcond198 = icmp eq i5 %co109, -8
  %empty_535 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_110 = add i5 %co109, 1
  br i1 %exitcond198, label %.preheader527.preheader, label %.preheader530.preheader

.preheader530.preheader:                          ; preds = %.loopexit864
  br label %.preheader530

.preheader527.preheader:                          ; preds = %.loopexit864
  br label %.preheader527

.preheader530.loopexit:                           ; preds = %.preheader529
  br label %.preheader530

.preheader530:                                    ; preds = %.preheader530.preheader, %.preheader530.loopexit
  %w83 = phi i2 [ %w_84, %.preheader530.loopexit ], [ 0, %.preheader530.preheader ]
  %exitcond197 = icmp eq i2 %w83, -1
  %empty_536 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_84 = add i2 %w83, 1
  br i1 %exitcond197, label %.loopexit864.loopexit, label %.preheader529.preheader

.preheader529.preheader:                          ; preds = %.preheader530
  %tmp_471_cast1 = zext i2 %w83 to i36
  %tmp_471_cast2 = zext i2 %w83 to i12
  br label %.preheader529

.preheader529.loopexit:                           ; preds = %.preheader528
  br label %.preheader529

.preheader529:                                    ; preds = %.preheader529.loopexit, %.preheader529.preheader
  %h84 = phi i2 [ 0, %.preheader529.preheader ], [ %h_85, %.preheader529.loopexit ]
  %exitcond196 = icmp eq i2 %h84, -1
  %empty_537 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_85 = add i2 %h84, 1
  br i1 %exitcond196, label %.preheader530.loopexit, label %.preheader528.preheader

.preheader528.preheader:                          ; preds = %.preheader529
  %tmp_478_cast1 = zext i2 %h84 to i10
  %tmp_478_cast = zext i2 %h84 to i15
  br label %.preheader528

.preheader528:                                    ; preds = %113, %.preheader528.preheader
  %i88 = phi i2 [ %i_89, %113 ], [ 0, %.preheader528.preheader ]
  %exitcond195 = icmp eq i2 %i88, -2
  %empty_538 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_89 = add i2 %i88, 1
  br i1 %exitcond195, label %.preheader529.loopexit, label %113

; <label>:113                                     ; preds = %.preheader528
  %tmp_1208 = trunc i2 %i88 to i1
  %p_shl106 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1208, i5 0)
  %p_shl106_cast = zext i6 %p_shl106 to i7
  %p_shl107 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1208, i3 0)
  %p_shl107_cast = zext i4 %p_shl107 to i7
  %tmp_482 = sub i7 %p_shl106_cast, %p_shl107_cast
  %tmp_666_cast = sext i7 %tmp_482 to i9
  %tmp35 = add i9 -152, %tmp_666_cast
  %tmp_483 = add i9 %tmp35, %co111_cast1
  %tmp_484_cast = zext i9 %tmp_483 to i12
  %tmp_1209 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_483, i2 0)
  %p_shl474_cast = zext i11 %tmp_1209 to i12
  %tmp_1210 = sub i12 %p_shl474_cast, %tmp_484_cast
  %tmp_1211 = add i12 %tmp_471_cast2, %tmp_1210
  %tmp_1542_cast = sext i12 %tmp_1211 to i15
  %tmp_1212 = call i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12 %tmp_1211, i2 0)
  %p_shl473_cast = sext i14 %tmp_1212 to i15
  %tmp_1213 = sub i15 %p_shl473_cast, %tmp_1542_cast
  %tmp_1214 = add i15 %tmp_478_cast, %tmp_1213
  %tmp_1545_cast = zext i15 %tmp_1214 to i64
  %shuffle_conv_3x3_add_10 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1545_cast
  %shuffle_conv_3x3_loa_10 = load float* %shuffle_conv_3x3_add_10, align 4
  %tmp_485 = add i7 %co111_cast, %tmp_482
  %tmp_670_cast = sext i7 %tmp_485 to i32
  %tmp_486_cast = zext i32 %tmp_670_cast to i35
  %tmp_1215 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_485, i2 0)
  %tmp_1216 = sext i9 %tmp_1215 to i34
  %p_shl472_cast = zext i34 %tmp_1216 to i35
  %tmp_1217 = sub i35 %p_shl472_cast, %tmp_486_cast
  %tmp_1548_cast = sext i35 %tmp_1217 to i36
  %tmp_1218 = add i36 %tmp_471_cast1, %tmp_1548_cast
  %tmp_1219 = trunc i36 %tmp_1218 to i10
  %tmp_1220 = trunc i36 %tmp_1218 to i8
  %p_shl471_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1220, i2 0)
  %tmp_1221 = sub i10 %p_shl471_cast, %tmp_1219
  %tmp_1222 = add i10 %tmp_478_cast1, %tmp_1221
  %tmp_1552_cast = zext i10 %tmp_1222 to i64
  %weights_48_1_3x3_add_5 = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1552_cast
  store float %shuffle_conv_3x3_loa_10, float* %weights_48_1_3x3_add_5, align 4
  br label %.preheader528

.preheader527.loopexit:                           ; preds = %.preheader526
  br label %.preheader527

.preheader527:                                    ; preds = %.preheader527.preheader, %.preheader527.loopexit
  %i84 = phi i5 [ %i_85, %.preheader527.loopexit ], [ 0, %.preheader527.preheader ]
  %i85_cast = zext i5 %i84 to i7
  %i85_cast1 = zext i5 %i84 to i11
  %exitcond194 = icmp eq i5 %i84, -8
  %empty_539 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_85 = add i5 %i84, 1
  br i1 %exitcond194, label %115, label %.preheader526.preheader

.preheader526.preheader:                          ; preds = %.preheader527
  br label %.preheader526

.preheader526:                                    ; preds = %.preheader526.preheader, %114
  %k22 = phi i2 [ %k_23, %114 ], [ 0, %.preheader526.preheader ]
  %exitcond193 = icmp eq i2 %k22, -2
  %empty_540 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_23 = add i2 %k22, 1
  br i1 %exitcond193, label %.preheader527.loopexit, label %114

; <label>:114                                     ; preds = %.preheader526
  %tmp_1207 = trunc i2 %k22 to i1
  %p_shl100 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1207, i5 0)
  %p_shl100_cast = zext i6 %p_shl100 to i7
  %p_shl101 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1207, i3 0)
  %p_shl101_cast = zext i4 %p_shl101 to i7
  %tmp_473 = sub i7 %p_shl100_cast, %p_shl101_cast
  %tmp_647_cast = sext i7 %tmp_473 to i11
  %tmp36 = add i11 -968, %tmp_647_cast
  %tmp_474 = add i11 %i85_cast1, %tmp36
  %tmp_475 = zext i11 %tmp_474 to i64
  %bias_addr_32 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_475
  %bias_load_32 = load float* %bias_addr_32, align 4
  %tmp_476 = add i7 %tmp_473, %i85_cast
  %tmp_651_cast = sext i7 %tmp_476 to i32
  %tmp_477 = zext i32 %tmp_651_cast to i64
  %bias_48_addr_15 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_477
  store float %bias_load_32, float* %bias_48_addr_15, align 4
  br label %.preheader526

; <label>:115                                     ; preds = %.preheader527
  call fastcc void @subconv_3x3_8_no_rel([4800 x float]* @buffer1_1_48_8x8_p, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [4800 x float]* @buffer0_1_48_8x8_p) nounwind
  br label %.loopexit863

.loopexit863.loopexit:                            ; preds = %.preheader525
  br label %.loopexit863

.loopexit863:                                     ; preds = %.loopexit863.loopexit, %115
  %co111 = phi i5 [ 0, %115 ], [ %co_112, %.loopexit863.loopexit ]
  %co113_cast = zext i5 %co111 to i11
  %exitcond192 = icmp eq i5 %co111, -8
  %empty_541 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_112 = add i5 %co111, 1
  br i1 %exitcond192, label %.preheader523.preheader, label %.preheader525.preheader

.preheader523.preheader:                          ; preds = %.loopexit863
  br label %.preheader523

.preheader525.preheader:                          ; preds = %.loopexit863
  %tmp_1206 = trunc i5 %co111 to i1
  %p_shl102 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1206, i5 0)
  %p_shl102_cast = zext i6 %p_shl102 to i7
  %p_shl103 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1206, i3 0)
  %p_shl103_cast = zext i4 %p_shl103 to i7
  %tmp_472 = sub i7 %p_shl102_cast, %p_shl103_cast
  %p_lshr_f10_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co111, i32 1, i32 4)
  %tmp_655_cast = zext i4 %p_lshr_f10_cast to i7
  br label %.preheader525

.preheader525.loopexit:                           ; preds = %.preheader524
  br label %.preheader525

.preheader525:                                    ; preds = %.preheader525.loopexit, %.preheader525.preheader
  %ci46 = phi i5 [ 0, %.preheader525.preheader ], [ %ci_47, %.preheader525.loopexit ]
  %ci46_cast = zext i5 %ci46 to i7
  %exitcond191 = icmp eq i5 %ci46, -8
  %empty_542 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_47 = add i5 %ci46, 1
  br i1 %exitcond191, label %.loopexit863.loopexit, label %.preheader524.preheader

.preheader524.preheader:                          ; preds = %.preheader525
  %tmp_479_cast = zext i5 %ci46 to i18
  %tmp_480 = add i7 %tmp_472, %ci46_cast
  %tmp_481_cast1 = sext i7 %tmp_480 to i13
  br label %.preheader524

.preheader524:                                    ; preds = %116, %.preheader524.preheader
  %i90 = phi i3 [ %i_91, %116 ], [ 0, %.preheader524.preheader ]
  %exitcond190 = icmp eq i3 %i90, -4
  %empty_543 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_91 = add i3 %i90, 1
  br i1 %exitcond190, label %.preheader525.loopexit, label %116

; <label>:116                                     ; preds = %.preheader524
  %tmp_1227 = trunc i3 %i90 to i2
  %p_shl108 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1227, i5 0)
  %p_shl108_cast = zext i7 %p_shl108 to i8
  %p_shl109 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1227, i3 0)
  %p_shl109_cast = zext i5 %p_shl109 to i8
  %tmp_492 = sub i8 %p_shl108_cast, %p_shl109_cast
  %tmp_673_cast = sext i8 %tmp_492 to i11
  %tmp37 = add i11 -872, %tmp_673_cast
  %tmp_493 = add i11 %tmp37, %co113_cast
  %tmp_1228 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_493, i5 0)
  %p_shl477_cast = zext i16 %tmp_1228 to i17
  %tmp_1229 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_493, i3 0)
  %p_shl478_cast = zext i14 %tmp_1229 to i17
  %tmp_1230 = sub i17 %p_shl477_cast, %p_shl478_cast
  %tmp_1562_cast = sext i17 %tmp_1230 to i18
  %tmp_1231 = add i18 %tmp_479_cast, %tmp_1562_cast
  %tmp_1563_cast = sext i18 %tmp_1231 to i64
  %shuffle_conv_1x1_add_19 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1563_cast
  %shuffle_conv_1x1_loa_19 = load float* %shuffle_conv_1x1_add_19, align 4
  %p_shl110 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1227, i4 0)
  %p_shl110_cast = zext i6 %p_shl110 to i7
  %p_shl111 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1227, i2 0)
  %p_shl111_cast = zext i4 %p_shl111 to i7
  %tmp_494 = sub i7 %p_shl110_cast, %p_shl111_cast
  %tmp_495 = add i7 %tmp_494, %tmp_655_cast
  %tmp_1232 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_495, i6 0)
  %tmp_1233 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_495, i4 0)
  %p_shl476_cast = sext i11 %tmp_1233 to i13
  %tmp_1234 = sub i13 %tmp_1232, %p_shl476_cast
  %tmp_1235 = add i13 %tmp_481_cast1, %tmp_1234
  %tmp_1571_cast = sext i13 %tmp_1235 to i64
  %weights_48_48_1x1_ad_10 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1571_cast
  store float %shuffle_conv_1x1_loa_19, float* %weights_48_48_1x1_ad_10, align 4
  br label %.preheader524

.preheader523.loopexit:                           ; preds = %.preheader522
  br label %.preheader523

.preheader523:                                    ; preds = %.preheader523.preheader, %.preheader523.loopexit
  %i86 = phi i5 [ %i_87, %.preheader523.loopexit ], [ 0, %.preheader523.preheader ]
  %i87_cast = zext i5 %i86 to i7
  %i87_cast1 = zext i5 %i86 to i11
  %exitcond189 = icmp eq i5 %i86, -8
  %empty_544 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_87 = add i5 %i86, 1
  br i1 %exitcond189, label %118, label %.preheader522.preheader

.preheader522.preheader:                          ; preds = %.preheader523
  br label %.preheader522

.preheader522:                                    ; preds = %.preheader522.preheader, %117
  %k24 = phi i2 [ %k_25, %117 ], [ 0, %.preheader522.preheader ]
  %exitcond188 = icmp eq i2 %k24, -2
  %empty_545 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_25 = add i2 %k24, 1
  br i1 %exitcond188, label %.preheader523.loopexit, label %117

; <label>:117                                     ; preds = %.preheader522
  %tmp_1226 = trunc i2 %k24 to i1
  %p_shl104 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1226, i5 0)
  %p_shl104_cast = zext i6 %p_shl104 to i7
  %p_shl105 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1226, i3 0)
  %p_shl105_cast = zext i4 %p_shl105 to i7
  %tmp_487 = sub i7 %p_shl104_cast, %p_shl105_cast
  %tmp_657_cast = sext i7 %tmp_487 to i11
  %tmp38 = add i11 -920, %tmp_657_cast
  %tmp_488 = add i11 %i87_cast1, %tmp38
  %tmp_489 = zext i11 %tmp_488 to i64
  %bias_addr_33 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_489
  %bias_load_33 = load float* %bias_addr_33, align 4
  %tmp_490 = add i7 %tmp_487, %i87_cast
  %tmp_661_cast = sext i7 %tmp_490 to i32
  %tmp_491 = zext i32 %tmp_661_cast to i64
  %bias_48_addr_16 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_491
  store float %bias_load_33, float* %bias_48_addr_16, align 4
  br label %.preheader522

; <label>:118                                     ; preds = %.preheader523
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit862

.loopexit862.loopexit:                            ; preds = %.preheader521
  br label %.loopexit862

.loopexit862:                                     ; preds = %.loopexit862.loopexit, %118
  %co113 = phi i6 [ 0, %118 ], [ %co_114, %.loopexit862.loopexit ]
  %exitcond187 = icmp eq i6 %co113, -16
  %empty_546 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_114 = add i6 %co113, 1
  br i1 %exitcond187, label %120, label %.preheader521.preheader

.preheader521.preheader:                          ; preds = %.loopexit862
  %tmp_1223 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co113, i3 0)
  %p_shl479_cast = zext i9 %tmp_1223 to i10
  %tmp_1224 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co113, i1 false)
  %p_shl480_cast = zext i7 %tmp_1224 to i10
  %tmp_1225 = add i10 %p_shl480_cast, %p_shl479_cast
  br label %.preheader521

.preheader521.loopexit:                           ; preds = %.preheader520
  br label %.preheader521

.preheader521:                                    ; preds = %.preheader521.loopexit, %.preheader521.preheader
  %h86 = phi i4 [ 0, %.preheader521.preheader ], [ %h_87, %.preheader521.loopexit ]
  %exitcond186 = icmp eq i4 %h86, -8
  %empty_547 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_87 = add i4 %h86, 1
  br i1 %exitcond186, label %.loopexit862.loopexit, label %.preheader520.preheader

.preheader520.preheader:                          ; preds = %.preheader521
  %tmp_497_cast = zext i4 %h_87 to i10
  %tmp_1242 = add i10 %tmp_497_cast, %tmp_1225
  %tmp_1243 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1242, i3 0)
  %p_shl481_cast = zext i13 %tmp_1243 to i15
  %tmp_1244 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1242, i1 false)
  %p_shl482_cast = zext i11 %tmp_1244 to i15
  %tmp_1245 = add i15 %p_shl481_cast, %p_shl482_cast
  br label %.preheader520

.preheader520:                                    ; preds = %119, %.preheader520.preheader
  %w85 = phi i4 [ %w_86, %119 ], [ 0, %.preheader520.preheader ]
  %exitcond185 = icmp eq i4 %w85, -8
  %empty_548 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_86 = add i4 %w85, 1
  br i1 %exitcond185, label %.preheader521.loopexit, label %119

; <label>:119                                     ; preds = %.preheader520
  %tmp_500_cast = zext i4 %w_86 to i15
  %tmp_1255 = add i15 %tmp_1245, %tmp_500_cast
  %tmp_1592_cast = zext i15 %tmp_1255 to i64
  %buffer0_1_48_8x8_p_a_7 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1592_cast
  %shuffleunit1_2_outpu_2 = getelementptr [9600 x float]* @shuffleunit1_2_outpu, i64 0, i64 %tmp_1592_cast
  %shuffleunit1_2_outpu_3 = load float* %shuffleunit1_2_outpu_2, align 4
  store float %shuffleunit1_2_outpu_3, float* %buffer0_1_48_8x8_p_a_7, align 4
  br label %.preheader520

; <label>:120                                     ; preds = %.loopexit862
  call fastcc void @shuffle_48_p([4800 x float]* @buffer0_1_48_8x8_p, [9600 x float]* @shuffleunit1_3_outpu) nounwind
  br label %.loopexit861

.loopexit861.loopexit:                            ; preds = %.preheader519
  br label %.loopexit861

.loopexit861:                                     ; preds = %.loopexit861.loopexit, %120
  %co115 = phi i6 [ 0, %120 ], [ %co_116, %.loopexit861.loopexit ]
  %co116_cast = zext i6 %co115 to i7
  %exitcond184 = icmp eq i6 %co115, -16
  %empty_549 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_116 = add i6 %co115, 1
  br i1 %exitcond184, label %.preheader517.preheader, label %.preheader519.preheader

.preheader517.preheader:                          ; preds = %.loopexit861
  br label %.preheader517

.preheader519.preheader:                          ; preds = %.loopexit861
  %tmp_496 = add i7 %co116_cast, 48
  %tmp_1236 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_496, i3 0)
  %p_shl485_cast = zext i10 %tmp_1236 to i11
  %tmp_1237 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp_496, i1 false)
  %p_shl486_cast = zext i8 %tmp_1237 to i11
  %tmp_1238 = add i11 %p_shl486_cast, %p_shl485_cast
  %tmp_1239 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co115, i3 0)
  %p_shl483_cast = zext i9 %tmp_1239 to i10
  %tmp_1240 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co115, i1 false)
  %p_shl484_cast = zext i7 %tmp_1240 to i10
  %tmp_1241 = add i10 %p_shl484_cast, %p_shl483_cast
  br label %.preheader519

.preheader519.loopexit:                           ; preds = %.preheader518
  br label %.preheader519

.preheader519:                                    ; preds = %.preheader519.loopexit, %.preheader519.preheader
  %h88 = phi i4 [ 0, %.preheader519.preheader ], [ %h_89, %.preheader519.loopexit ]
  %exitcond183 = icmp eq i4 %h88, -8
  %empty_550 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_89 = add i4 %h88, 1
  br i1 %exitcond183, label %.loopexit861.loopexit, label %.preheader518.preheader

.preheader518.preheader:                          ; preds = %.preheader519
  %tmp_499_cast1 = zext i4 %h_89 to i11
  %tmp_499_cast = zext i4 %h_89 to i10
  %tmp_1247 = add i10 %tmp_499_cast, %tmp_1241
  %tmp_1248 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1247, i3 0)
  %p_shl489_cast = zext i13 %tmp_1248 to i14
  %tmp_1249 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1247, i1 false)
  %p_shl490_cast = zext i11 %tmp_1249 to i14
  %tmp_1250 = add i14 %p_shl489_cast, %p_shl490_cast
  %tmp_1251 = add i11 %tmp_499_cast1, %tmp_1238
  %tmp_1252 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1251, i3 0)
  %p_shl487_cast = zext i14 %tmp_1252 to i15
  %tmp_1253 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_1251, i1 false)
  %p_shl488_cast = zext i12 %tmp_1253 to i15
  %tmp_1254 = add i15 %p_shl487_cast, %p_shl488_cast
  br label %.preheader518

.preheader518:                                    ; preds = %121, %.preheader518.preheader
  %w87 = phi i4 [ %w_88, %121 ], [ 0, %.preheader518.preheader ]
  %exitcond182 = icmp eq i4 %w87, -8
  %empty_551 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_88 = add i4 %w87, 1
  br i1 %exitcond182, label %.preheader519.loopexit, label %121

; <label>:121                                     ; preds = %.preheader518
  %tmp_504_cast1 = zext i4 %w_88 to i15
  %tmp_504_cast = zext i4 %w_88 to i14
  %tmp_1256 = add i14 %tmp_1250, %tmp_504_cast
  %tmp_1593_cast = zext i14 %tmp_1256 to i64
  %buffer0_1_48_8x8_p_a_8 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1593_cast
  %tmp_1257 = add i15 %tmp_1254, %tmp_504_cast1
  %tmp_1594_cast = zext i15 %tmp_1257 to i64
  %shuffleunit1_3_outpu = getelementptr [9600 x float]* @shuffleunit1_3_outpu, i64 0, i64 %tmp_1594_cast
  %shuffleunit1_3_outpu_1 = load float* %shuffleunit1_3_outpu, align 4
  store float %shuffleunit1_3_outpu_1, float* %buffer0_1_48_8x8_p_a_8, align 4
  br label %.preheader518

.preheader517.loopexit:                           ; preds = %.preheader516
  br label %.preheader517

.preheader517:                                    ; preds = %.preheader517.preheader, %.preheader517.loopexit
  %co117 = phi i5 [ %co_118, %.preheader517.loopexit ], [ 0, %.preheader517.preheader ]
  %co118_cast = zext i5 %co117 to i11
  %exitcond181 = icmp eq i5 %co117, -8
  %empty_552 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_118 = add i5 %co117, 1
  br i1 %exitcond181, label %.preheader514.preheader, label %.preheader516.preheader

.preheader514.preheader:                          ; preds = %.preheader517
  br label %.preheader514

.preheader516.preheader:                          ; preds = %.preheader517
  %tmp_1246 = trunc i5 %co117 to i1
  %p_shl112 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1246, i5 0)
  %p_shl112_cast = zext i6 %p_shl112 to i7
  %p_shl113 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1246, i3 0)
  %p_shl113_cast = zext i4 %p_shl113 to i7
  %tmp_498 = sub i7 %p_shl112_cast, %p_shl113_cast
  %p_lshr_f11_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co117, i32 1, i32 4)
  %tmp_685_cast = zext i4 %p_lshr_f11_cast to i7
  br label %.preheader516

.preheader516.loopexit:                           ; preds = %.preheader515
  br label %.preheader516

.preheader516:                                    ; preds = %.preheader516.loopexit, %.preheader516.preheader
  %ci48 = phi i5 [ 0, %.preheader516.preheader ], [ %ci_49, %.preheader516.loopexit ]
  %ci48_cast = zext i5 %ci48 to i7
  %exitcond180 = icmp eq i5 %ci48, -8
  %empty_553 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_49 = add i5 %ci48, 1
  br i1 %exitcond180, label %.preheader517.loopexit, label %.preheader515.preheader

.preheader515.preheader:                          ; preds = %.preheader516
  %tmp_501_cast = zext i5 %ci48 to i18
  %tmp_502 = add i7 %tmp_498, %ci48_cast
  %tmp_503_cast = sext i7 %tmp_502 to i13
  br label %.preheader515

.preheader515:                                    ; preds = %122, %.preheader515.preheader
  %i94 = phi i3 [ %i_95, %122 ], [ 0, %.preheader515.preheader ]
  %exitcond179 = icmp eq i3 %i94, -4
  %empty_554 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_95 = add i3 %i94, 1
  br i1 %exitcond179, label %.preheader516.loopexit, label %122

; <label>:122                                     ; preds = %.preheader515
  %tmp_1259 = trunc i3 %i94 to i2
  %p_shl116 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1259, i5 0)
  %p_shl116_cast = zext i7 %p_shl116 to i8
  %p_shl117 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1259, i3 0)
  %p_shl117_cast = zext i5 %p_shl117 to i8
  %tmp_510 = sub i8 %p_shl116_cast, %p_shl117_cast
  %tmp_700_cast = sext i8 %tmp_510 to i11
  %tmp39 = add i11 -776, %tmp_700_cast
  %tmp_511 = add i11 %tmp39, %co118_cast
  %tmp_1260 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_511, i5 0)
  %p_shl493_cast = zext i16 %tmp_1260 to i17
  %tmp_1261 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_511, i3 0)
  %p_shl494_cast = zext i14 %tmp_1261 to i17
  %tmp_1262 = sub i17 %p_shl493_cast, %p_shl494_cast
  %tmp_1601_cast = sext i17 %tmp_1262 to i18
  %tmp_1263 = add i18 %tmp_501_cast, %tmp_1601_cast
  %tmp_1602_cast = sext i18 %tmp_1263 to i64
  %shuffle_conv_1x1_add_20 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1602_cast
  %shuffle_conv_1x1_loa_20 = load float* %shuffle_conv_1x1_add_20, align 4
  %p_shl118 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1259, i4 0)
  %p_shl118_cast = zext i6 %p_shl118 to i7
  %p_shl119 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1259, i2 0)
  %p_shl119_cast = zext i4 %p_shl119 to i7
  %tmp_512 = sub i7 %p_shl118_cast, %p_shl119_cast
  %tmp_513 = add i7 %tmp_512, %tmp_685_cast
  %tmp_1264 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_513, i6 0)
  %tmp_1265 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_513, i4 0)
  %p_shl492_cast = sext i11 %tmp_1265 to i13
  %tmp_1266 = sub i13 %tmp_1264, %p_shl492_cast
  %tmp_1267 = add i13 %tmp_503_cast, %tmp_1266
  %tmp_1610_cast = sext i13 %tmp_1267 to i64
  %weights_48_48_1x1_ad_11 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1610_cast
  store float %shuffle_conv_1x1_loa_20, float* %weights_48_48_1x1_ad_11, align 4
  br label %.preheader515

.preheader514.loopexit:                           ; preds = %.preheader513
  br label %.preheader514

.preheader514:                                    ; preds = %.preheader514.preheader, %.preheader514.loopexit
  %i92 = phi i5 [ %i_93, %.preheader514.loopexit ], [ 0, %.preheader514.preheader ]
  %i93_cast = zext i5 %i92 to i7
  %i93_cast1 = zext i5 %i92 to i11
  %exitcond178 = icmp eq i5 %i92, -8
  %empty_555 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_93 = add i5 %i92, 1
  br i1 %exitcond178, label %124, label %.preheader513.preheader

.preheader513.preheader:                          ; preds = %.preheader514
  br label %.preheader513

.preheader513:                                    ; preds = %.preheader513.preheader, %123
  %k26 = phi i2 [ %k_27, %123 ], [ 0, %.preheader513.preheader ]
  %exitcond177 = icmp eq i2 %k26, -2
  %empty_556 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_27 = add i2 %k26, 1
  br i1 %exitcond177, label %.preheader514.loopexit, label %123

; <label>:123                                     ; preds = %.preheader513
  %tmp_1258 = trunc i2 %k26 to i1
  %p_shl114 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1258, i5 0)
  %p_shl114_cast = zext i6 %p_shl114 to i7
  %p_shl115 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1258, i3 0)
  %p_shl115_cast = zext i4 %p_shl115 to i7
  %tmp_505 = sub i7 %p_shl114_cast, %p_shl115_cast
  %tmp_689_cast = sext i7 %tmp_505 to i11
  %tmp40 = add i11 -872, %tmp_689_cast
  %tmp_506 = add i11 %i93_cast1, %tmp40
  %tmp_507 = zext i11 %tmp_506 to i64
  %bias_addr_34 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_507
  %bias_load_34 = load float* %bias_addr_34, align 4
  %tmp_508 = add i7 %tmp_505, %i93_cast
  %tmp_693_cast = sext i7 %tmp_508 to i32
  %tmp_509 = zext i32 %tmp_693_cast to i64
  %bias_48_addr_17 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_509
  store float %bias_load_34, float* %bias_48_addr_17, align 4
  br label %.preheader513

; <label>:124                                     ; preds = %.preheader514
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit860

.loopexit860.loopexit:                            ; preds = %.preheader512
  br label %.loopexit860

.loopexit860:                                     ; preds = %.loopexit860.loopexit, %124
  %co119 = phi i5 [ 0, %124 ], [ %co_120, %.loopexit860.loopexit ]
  %co121_cast = zext i5 %co119 to i7
  %co121_cast406_cast = zext i5 %co119 to i8
  %exitcond176 = icmp eq i5 %co119, -8
  %empty_557 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_120 = add i5 %co119, 1
  br i1 %exitcond176, label %.preheader509.preheader, label %.preheader512.preheader

.preheader512.preheader:                          ; preds = %.loopexit860
  br label %.preheader512

.preheader509.preheader:                          ; preds = %.loopexit860
  br label %.preheader509

.preheader512.loopexit:                           ; preds = %.preheader511
  br label %.preheader512

.preheader512:                                    ; preds = %.preheader512.preheader, %.preheader512.loopexit
  %w89 = phi i2 [ %w_90, %.preheader512.loopexit ], [ 0, %.preheader512.preheader ]
  %exitcond175 = icmp eq i2 %w89, -1
  %empty_558 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_90 = add i2 %w89, 1
  br i1 %exitcond175, label %.loopexit860.loopexit, label %.preheader511.preheader

.preheader511.preheader:                          ; preds = %.preheader512
  %tmp_514_cast1 = zext i2 %w89 to i36
  %tmp_514_cast = zext i2 %w89 to i12
  br label %.preheader511

.preheader511.loopexit:                           ; preds = %.preheader510
  br label %.preheader511

.preheader511:                                    ; preds = %.preheader511.loopexit, %.preheader511.preheader
  %h90 = phi i2 [ 0, %.preheader511.preheader ], [ %h_91, %.preheader511.loopexit ]
  %exitcond174 = icmp eq i2 %h90, -1
  %empty_559 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_91 = add i2 %h90, 1
  br i1 %exitcond174, label %.preheader512.loopexit, label %.preheader510.preheader

.preheader510.preheader:                          ; preds = %.preheader511
  %tmp_521_cast1 = zext i2 %h90 to i10
  %tmp_521_cast = zext i2 %h90 to i15
  br label %.preheader510

.preheader510:                                    ; preds = %125, %.preheader510.preheader
  %i100 = phi i2 [ %i_101, %125 ], [ 0, %.preheader510.preheader ]
  %exitcond173 = icmp eq i2 %i100, -2
  %empty_560 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_101 = add i2 %i100, 1
  br i1 %exitcond173, label %.preheader511.loopexit, label %125

; <label>:125                                     ; preds = %.preheader510
  %tmp_1270 = trunc i2 %i100 to i1
  %p_shl126 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1270, i5 0)
  %p_shl126_cast = zext i6 %p_shl126 to i7
  %p_shl127 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1270, i3 0)
  %p_shl127_cast = zext i4 %p_shl127 to i7
  %tmp_525 = sub i7 %p_shl126_cast, %p_shl127_cast
  %tmp_726_cast_cast = sext i7 %tmp_525 to i8
  %tmp41 = add i8 -104, %tmp_726_cast_cast
  %tmp_526 = add i8 %tmp41, %co121_cast406_cast
  %tmp_728_cast = sext i8 %tmp_526 to i9
  %tmp_527_cast = zext i9 %tmp_728_cast to i12
  %tmp_1271 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_526, i2 0)
  %tmp_1272 = sext i10 %tmp_1271 to i11
  %p_shl498_cast = zext i11 %tmp_1272 to i12
  %tmp_1273 = sub i12 %p_shl498_cast, %tmp_527_cast
  %tmp_1274 = add i12 %tmp_514_cast, %tmp_1273
  %tmp_1620_cast = sext i12 %tmp_1274 to i15
  %tmp_1275 = call i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12 %tmp_1274, i2 0)
  %p_shl497_cast = sext i14 %tmp_1275 to i15
  %tmp_1276 = sub i15 %p_shl497_cast, %tmp_1620_cast
  %tmp_1277 = add i15 %tmp_521_cast, %tmp_1276
  %tmp_1623_cast = zext i15 %tmp_1277 to i64
  %shuffle_conv_3x3_add_11 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1623_cast
  %shuffle_conv_3x3_loa_11 = load float* %shuffle_conv_3x3_add_11, align 4
  %tmp_528 = add i7 %co121_cast, %tmp_525
  %tmp_730_cast = sext i7 %tmp_528 to i32
  %tmp_529_cast1 = zext i32 %tmp_730_cast to i35
  %tmp_1278 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_528, i2 0)
  %tmp_1279 = sext i9 %tmp_1278 to i34
  %p_shl496_cast = zext i34 %tmp_1279 to i35
  %tmp_1280 = sub i35 %p_shl496_cast, %tmp_529_cast1
  %tmp_1626_cast = sext i35 %tmp_1280 to i36
  %tmp_1281 = add i36 %tmp_514_cast1, %tmp_1626_cast
  %tmp_1282 = trunc i36 %tmp_1281 to i10
  %tmp_1283 = trunc i36 %tmp_1281 to i8
  %p_shl495_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1283, i2 0)
  %tmp_1284 = sub i10 %p_shl495_cast, %tmp_1282
  %tmp_1285 = add i10 %tmp_521_cast1, %tmp_1284
  %tmp_1630_cast = zext i10 %tmp_1285 to i64
  %weights_48_1_3x3_add_6 = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1630_cast
  store float %shuffle_conv_3x3_loa_11, float* %weights_48_1_3x3_add_6, align 4
  br label %.preheader510

.preheader509.loopexit:                           ; preds = %.preheader508
  br label %.preheader509

.preheader509:                                    ; preds = %.preheader509.preheader, %.preheader509.loopexit
  %i96 = phi i5 [ %i_97, %.preheader509.loopexit ], [ 0, %.preheader509.preheader ]
  %i97_cast = zext i5 %i96 to i7
  %i97_cast1 = zext i5 %i96 to i11
  %exitcond172 = icmp eq i5 %i96, -8
  %empty_561 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_97 = add i5 %i96, 1
  br i1 %exitcond172, label %127, label %.preheader508.preheader

.preheader508.preheader:                          ; preds = %.preheader509
  br label %.preheader508

.preheader508:                                    ; preds = %.preheader508.preheader, %126
  %k28 = phi i2 [ %k_29, %126 ], [ 0, %.preheader508.preheader ]
  %exitcond171 = icmp eq i2 %k28, -2
  %empty_562 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_29 = add i2 %k28, 1
  br i1 %exitcond171, label %.preheader509.loopexit, label %126

; <label>:126                                     ; preds = %.preheader508
  %tmp_1269 = trunc i2 %k28 to i1
  %p_shl120 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1269, i5 0)
  %p_shl120_cast = zext i6 %p_shl120 to i7
  %p_shl121 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1269, i3 0)
  %p_shl121_cast = zext i4 %p_shl121 to i7
  %tmp_516 = sub i7 %p_shl120_cast, %p_shl121_cast
  %tmp_707_cast = sext i7 %tmp_516 to i11
  %tmp42 = add i11 -824, %tmp_707_cast
  %tmp_517 = add i11 %i97_cast1, %tmp42
  %tmp_518 = zext i11 %tmp_517 to i64
  %bias_addr_35 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_518
  %bias_load_35 = load float* %bias_addr_35, align 4
  %tmp_519 = add i7 %tmp_516, %i97_cast
  %tmp_711_cast = sext i7 %tmp_519 to i32
  %tmp_520 = zext i32 %tmp_711_cast to i64
  %bias_48_addr_18 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_520
  store float %bias_load_35, float* %bias_48_addr_18, align 4
  br label %.preheader508

; <label>:127                                     ; preds = %.preheader509
  call fastcc void @subconv_3x3_8_no_rel([4800 x float]* @buffer1_1_48_8x8_p, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [4800 x float]* @buffer0_1_48_8x8_p) nounwind
  br label %.loopexit859

.loopexit859.loopexit:                            ; preds = %.preheader507
  br label %.loopexit859

.loopexit859:                                     ; preds = %.loopexit859.loopexit, %127
  %co121 = phi i5 [ 0, %127 ], [ %co_122, %.loopexit859.loopexit ]
  %co123_cast = zext i5 %co121 to i11
  %exitcond170 = icmp eq i5 %co121, -8
  %empty_563 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_122 = add i5 %co121, 1
  br i1 %exitcond170, label %.preheader505.preheader, label %.preheader507.preheader

.preheader505.preheader:                          ; preds = %.loopexit859
  br label %.preheader505

.preheader507.preheader:                          ; preds = %.loopexit859
  %tmp_1268 = trunc i5 %co121 to i1
  %p_shl122 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1268, i5 0)
  %p_shl122_cast = zext i6 %p_shl122 to i7
  %p_shl123 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1268, i3 0)
  %p_shl123_cast = zext i4 %p_shl123 to i7
  %tmp_515 = sub i7 %p_shl122_cast, %p_shl123_cast
  %p_lshr_f12_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co121, i32 1, i32 4)
  %tmp_715_cast = zext i4 %p_lshr_f12_cast to i7
  br label %.preheader507

.preheader507.loopexit:                           ; preds = %.preheader506
  br label %.preheader507

.preheader507:                                    ; preds = %.preheader507.loopexit, %.preheader507.preheader
  %ci50 = phi i5 [ 0, %.preheader507.preheader ], [ %ci_51, %.preheader507.loopexit ]
  %ci50_cast = zext i5 %ci50 to i7
  %exitcond169 = icmp eq i5 %ci50, -8
  %empty_564 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_51 = add i5 %ci50, 1
  br i1 %exitcond169, label %.loopexit859.loopexit, label %.preheader506.preheader

.preheader506.preheader:                          ; preds = %.preheader507
  %tmp_522_cast = zext i5 %ci50 to i18
  %tmp_523 = add i7 %tmp_515, %ci50_cast
  %tmp_524_cast = sext i7 %tmp_523 to i13
  br label %.preheader506

.preheader506:                                    ; preds = %128, %.preheader506.preheader
  %i102 = phi i3 [ %i_103, %128 ], [ 0, %.preheader506.preheader ]
  %exitcond168 = icmp eq i3 %i102, -4
  %empty_565 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_103 = add i3 %i102, 1
  br i1 %exitcond168, label %.preheader507.loopexit, label %128

; <label>:128                                     ; preds = %.preheader506
  %tmp_1290 = trunc i3 %i102 to i2
  %p_shl128 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1290, i5 0)
  %p_shl128_cast = zext i7 %p_shl128 to i8
  %p_shl129 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1290, i3 0)
  %p_shl129_cast = zext i5 %p_shl129 to i8
  %tmp_535 = sub i8 %p_shl128_cast, %p_shl129_cast
  %tmp_733_cast = sext i8 %tmp_535 to i11
  %tmp43 = add i11 -680, %tmp_733_cast
  %tmp_536 = add i11 %tmp43, %co123_cast
  %tmp_1291 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_536, i5 0)
  %p_shl501_cast = zext i16 %tmp_1291 to i17
  %tmp_1292 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_536, i3 0)
  %p_shl502_cast = zext i14 %tmp_1292 to i17
  %tmp_1293 = sub i17 %p_shl501_cast, %p_shl502_cast
  %tmp_1640_cast = sext i17 %tmp_1293 to i18
  %tmp_1294 = add i18 %tmp_522_cast, %tmp_1640_cast
  %tmp_1641_cast = sext i18 %tmp_1294 to i64
  %shuffle_conv_1x1_add_21 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1641_cast
  %shuffle_conv_1x1_loa_21 = load float* %shuffle_conv_1x1_add_21, align 4
  %p_shl130 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1290, i4 0)
  %p_shl130_cast = zext i6 %p_shl130 to i7
  %p_shl131 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1290, i2 0)
  %p_shl131_cast = zext i4 %p_shl131 to i7
  %tmp_537 = sub i7 %p_shl130_cast, %p_shl131_cast
  %tmp_538 = add i7 %tmp_537, %tmp_715_cast
  %tmp_1295 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_538, i6 0)
  %tmp_1296 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_538, i4 0)
  %p_shl500_cast = sext i11 %tmp_1296 to i13
  %tmp_1297 = sub i13 %tmp_1295, %p_shl500_cast
  %tmp_1298 = add i13 %tmp_524_cast, %tmp_1297
  %tmp_1649_cast = sext i13 %tmp_1298 to i64
  %weights_48_48_1x1_ad_12 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1649_cast
  store float %shuffle_conv_1x1_loa_21, float* %weights_48_48_1x1_ad_12, align 4
  br label %.preheader506

.preheader505.loopexit:                           ; preds = %.preheader504
  br label %.preheader505

.preheader505:                                    ; preds = %.preheader505.preheader, %.preheader505.loopexit
  %i98 = phi i5 [ %i_99, %.preheader505.loopexit ], [ 0, %.preheader505.preheader ]
  %i99_cast = zext i5 %i98 to i7
  %i99_cast1 = zext i5 %i98 to i11
  %exitcond167 = icmp eq i5 %i98, -8
  %empty_566 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_99 = add i5 %i98, 1
  br i1 %exitcond167, label %130, label %.preheader504.preheader

.preheader504.preheader:                          ; preds = %.preheader505
  br label %.preheader504

.preheader504:                                    ; preds = %.preheader504.preheader, %129
  %k30 = phi i2 [ %k_31, %129 ], [ 0, %.preheader504.preheader ]
  %exitcond166 = icmp eq i2 %k30, -2
  %empty_567 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_31 = add i2 %k30, 1
  br i1 %exitcond166, label %.preheader505.loopexit, label %129

; <label>:129                                     ; preds = %.preheader504
  %tmp_1289 = trunc i2 %k30 to i1
  %p_shl124 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1289, i5 0)
  %p_shl124_cast = zext i6 %p_shl124 to i7
  %p_shl125 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1289, i3 0)
  %p_shl125_cast = zext i4 %p_shl125 to i7
  %tmp_530 = sub i7 %p_shl124_cast, %p_shl125_cast
  %tmp_717_cast = sext i7 %tmp_530 to i11
  %tmp44 = add i11 -776, %tmp_717_cast
  %tmp_531 = add i11 %i99_cast1, %tmp44
  %tmp_532 = zext i11 %tmp_531 to i64
  %bias_addr_36 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_532
  %bias_load_36 = load float* %bias_addr_36, align 4
  %tmp_533 = add i7 %tmp_530, %i99_cast
  %tmp_721_cast = sext i7 %tmp_533 to i32
  %tmp_534 = zext i32 %tmp_721_cast to i64
  %bias_48_addr_19 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_534
  store float %bias_load_36, float* %bias_48_addr_19, align 4
  br label %.preheader504

; <label>:130                                     ; preds = %.preheader505
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit858

.loopexit858.loopexit:                            ; preds = %.preheader503
  br label %.loopexit858

.loopexit858:                                     ; preds = %.loopexit858.loopexit, %130
  %co123 = phi i6 [ 0, %130 ], [ %co_124, %.loopexit858.loopexit ]
  %exitcond165 = icmp eq i6 %co123, -16
  %empty_568 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_124 = add i6 %co123, 1
  br i1 %exitcond165, label %132, label %.preheader503.preheader

.preheader503.preheader:                          ; preds = %.loopexit858
  %tmp_1286 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co123, i3 0)
  %p_shl503_cast = zext i9 %tmp_1286 to i10
  %tmp_1287 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co123, i1 false)
  %p_shl504_cast = zext i7 %tmp_1287 to i10
  %tmp_1288 = add i10 %p_shl504_cast, %p_shl503_cast
  br label %.preheader503

.preheader503.loopexit:                           ; preds = %.preheader502
  br label %.preheader503

.preheader503:                                    ; preds = %.preheader503.loopexit, %.preheader503.preheader
  %h92 = phi i4 [ 0, %.preheader503.preheader ], [ %h_93, %.preheader503.loopexit ]
  %exitcond164 = icmp eq i4 %h92, -8
  %empty_569 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_93 = add i4 %h92, 1
  br i1 %exitcond164, label %.loopexit858.loopexit, label %.preheader502.preheader

.preheader502.preheader:                          ; preds = %.preheader503
  %tmp_540_cast = zext i4 %h_93 to i10
  %tmp_1305 = add i10 %tmp_540_cast, %tmp_1288
  %tmp_1306 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1305, i3 0)
  %p_shl505_cast = zext i13 %tmp_1306 to i15
  %tmp_1307 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1305, i1 false)
  %p_shl506_cast = zext i11 %tmp_1307 to i15
  %tmp_1308 = add i15 %p_shl505_cast, %p_shl506_cast
  br label %.preheader502

.preheader502:                                    ; preds = %131, %.preheader502.preheader
  %w91 = phi i4 [ %w_92, %131 ], [ 0, %.preheader502.preheader ]
  %exitcond163 = icmp eq i4 %w91, -8
  %empty_570 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_92 = add i4 %w91, 1
  br i1 %exitcond163, label %.preheader503.loopexit, label %131

; <label>:131                                     ; preds = %.preheader502
  %tmp_543_cast = zext i4 %w_92 to i15
  %tmp_1318 = add i15 %tmp_1308, %tmp_543_cast
  %tmp_1670_cast = zext i15 %tmp_1318 to i64
  %buffer0_1_48_8x8_p_a_9 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1670_cast
  %shuffleunit1_3_outpu_2 = getelementptr [9600 x float]* @shuffleunit1_3_outpu, i64 0, i64 %tmp_1670_cast
  %shuffleunit1_3_outpu_3 = load float* %shuffleunit1_3_outpu_2, align 4
  store float %shuffleunit1_3_outpu_3, float* %buffer0_1_48_8x8_p_a_9, align 4
  br label %.preheader502

; <label>:132                                     ; preds = %.loopexit858
  call fastcc void @shuffle_48_p([4800 x float]* @buffer0_1_48_8x8_p, [9600 x float]* @shuffleunit1_4_outpu) nounwind
  br label %.loopexit857

.loopexit857.loopexit:                            ; preds = %.preheader501
  br label %.loopexit857

.loopexit857:                                     ; preds = %.loopexit857.loopexit, %132
  %co125 = phi i6 [ 0, %132 ], [ %co_126, %.loopexit857.loopexit ]
  %co126_cast = zext i6 %co125 to i7
  %exitcond162 = icmp eq i6 %co125, -16
  %empty_571 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_126 = add i6 %co125, 1
  br i1 %exitcond162, label %.preheader499.preheader, label %.preheader501.preheader

.preheader499.preheader:                          ; preds = %.loopexit857
  br label %.preheader499

.preheader501.preheader:                          ; preds = %.loopexit857
  %tmp_539 = add i7 %co126_cast, 48
  %tmp_1299 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_539, i3 0)
  %p_shl509_cast = zext i10 %tmp_1299 to i11
  %tmp_1300 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp_539, i1 false)
  %p_shl510_cast = zext i8 %tmp_1300 to i11
  %tmp_1301 = add i11 %p_shl510_cast, %p_shl509_cast
  %tmp_1302 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co125, i3 0)
  %p_shl507_cast = zext i9 %tmp_1302 to i10
  %tmp_1303 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co125, i1 false)
  %p_shl508_cast = zext i7 %tmp_1303 to i10
  %tmp_1304 = add i10 %p_shl508_cast, %p_shl507_cast
  br label %.preheader501

.preheader501.loopexit:                           ; preds = %.preheader500
  br label %.preheader501

.preheader501:                                    ; preds = %.preheader501.loopexit, %.preheader501.preheader
  %h94 = phi i4 [ 0, %.preheader501.preheader ], [ %h_95, %.preheader501.loopexit ]
  %exitcond161 = icmp eq i4 %h94, -8
  %empty_572 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_95 = add i4 %h94, 1
  br i1 %exitcond161, label %.loopexit857.loopexit, label %.preheader500.preheader

.preheader500.preheader:                          ; preds = %.preheader501
  %tmp_542_cast1 = zext i4 %h_95 to i10
  %tmp_542_cast = zext i4 %h_95 to i11
  %tmp_1310 = add i11 %tmp_542_cast, %tmp_1301
  %tmp_1311 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1310, i3 0)
  %p_shl513_cast = zext i14 %tmp_1311 to i15
  %tmp_1312 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_1310, i1 false)
  %p_shl514_cast = zext i12 %tmp_1312 to i15
  %tmp_1313 = add i15 %p_shl513_cast, %p_shl514_cast
  %tmp_1314 = add i10 %tmp_542_cast1, %tmp_1304
  %tmp_1315 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1314, i3 0)
  %p_shl511_cast = zext i13 %tmp_1315 to i14
  %tmp_1316 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1314, i1 false)
  %p_shl512_cast = zext i11 %tmp_1316 to i14
  %tmp_1317 = add i14 %p_shl511_cast, %p_shl512_cast
  br label %.preheader500

.preheader500:                                    ; preds = %133, %.preheader500.preheader
  %w93 = phi i4 [ %w_94, %133 ], [ 0, %.preheader500.preheader ]
  %exitcond160 = icmp eq i4 %w93, -8
  %empty_573 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_94 = add i4 %w93, 1
  br i1 %exitcond160, label %.preheader501.loopexit, label %133

; <label>:133                                     ; preds = %.preheader500
  %tmp_547_cast1 = zext i4 %w_94 to i14
  %tmp_547_cast = zext i4 %w_94 to i15
  %tmp_1319 = add i15 %tmp_1313, %tmp_547_cast
  %tmp_1671_cast = zext i15 %tmp_1319 to i64
  %shuffleunit1_4_outpu = getelementptr [9600 x float]* @shuffleunit1_4_outpu, i64 0, i64 %tmp_1671_cast
  %tmp_1320 = add i14 %tmp_1317, %tmp_547_cast1
  %tmp_1672_cast = zext i14 %tmp_1320 to i64
  %buffer0_1_48_8x8_p_a_10 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1672_cast
  %shuffleunit1_4_outpu_1 = load float* %shuffleunit1_4_outpu, align 4
  store float %shuffleunit1_4_outpu_1, float* %buffer0_1_48_8x8_p_a_10, align 4
  br label %.preheader500

.preheader499.loopexit:                           ; preds = %.preheader498
  br label %.preheader499

.preheader499:                                    ; preds = %.preheader499.preheader, %.preheader499.loopexit
  %co127 = phi i5 [ %co_128, %.preheader499.loopexit ], [ 0, %.preheader499.preheader ]
  %co128_cast = zext i5 %co127 to i11
  %exitcond159 = icmp eq i5 %co127, -8
  %empty_574 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_128 = add i5 %co127, 1
  br i1 %exitcond159, label %.preheader496.preheader, label %.preheader498.preheader

.preheader496.preheader:                          ; preds = %.preheader499
  br label %.preheader496

.preheader498.preheader:                          ; preds = %.preheader499
  %tmp_1309 = trunc i5 %co127 to i1
  %p_shl132 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1309, i5 0)
  %p_shl132_cast = zext i6 %p_shl132 to i7
  %p_shl133 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1309, i3 0)
  %p_shl133_cast = zext i4 %p_shl133 to i7
  %tmp_541 = sub i7 %p_shl132_cast, %p_shl133_cast
  %p_lshr_f13_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co127, i32 1, i32 4)
  %tmp_745_cast = zext i4 %p_lshr_f13_cast to i7
  br label %.preheader498

.preheader498.loopexit:                           ; preds = %.preheader497
  br label %.preheader498

.preheader498:                                    ; preds = %.preheader498.loopexit, %.preheader498.preheader
  %ci52 = phi i5 [ 0, %.preheader498.preheader ], [ %ci_53, %.preheader498.loopexit ]
  %ci52_cast = zext i5 %ci52 to i7
  %exitcond158 = icmp eq i5 %ci52, -8
  %empty_575 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_53 = add i5 %ci52, 1
  br i1 %exitcond158, label %.preheader499.loopexit, label %.preheader497.preheader

.preheader497.preheader:                          ; preds = %.preheader498
  %tmp_544_cast = zext i5 %ci52 to i18
  %tmp_545 = add i7 %tmp_541, %ci52_cast
  %tmp_546_cast1 = sext i7 %tmp_545 to i13
  br label %.preheader497

.preheader497:                                    ; preds = %134, %.preheader497.preheader
  %i106 = phi i3 [ %i_107, %134 ], [ 0, %.preheader497.preheader ]
  %exitcond157 = icmp eq i3 %i106, -4
  %empty_576 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_107 = add i3 %i106, 1
  br i1 %exitcond157, label %.preheader498.loopexit, label %134

; <label>:134                                     ; preds = %.preheader497
  %tmp_1322 = trunc i3 %i106 to i2
  %p_shl136 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1322, i5 0)
  %p_shl136_cast = zext i7 %p_shl136 to i8
  %p_shl137 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1322, i3 0)
  %p_shl137_cast = zext i5 %p_shl137 to i8
  %tmp_553 = sub i8 %p_shl136_cast, %p_shl137_cast
  %tmp_760_cast = sext i8 %tmp_553 to i11
  %tmp45 = add i11 -584, %tmp_760_cast
  %tmp_554 = add i11 %tmp45, %co128_cast
  %tmp_1323 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_554, i5 0)
  %p_shl517_cast = zext i16 %tmp_1323 to i17
  %tmp_1324 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_554, i3 0)
  %p_shl518_cast = zext i14 %tmp_1324 to i17
  %tmp_1325 = sub i17 %p_shl517_cast, %p_shl518_cast
  %tmp_1679_cast = sext i17 %tmp_1325 to i18
  %tmp_1326 = add i18 %tmp_544_cast, %tmp_1679_cast
  %tmp_1680_cast = sext i18 %tmp_1326 to i64
  %shuffle_conv_1x1_add_22 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1680_cast
  %shuffle_conv_1x1_loa_22 = load float* %shuffle_conv_1x1_add_22, align 4
  %p_shl138 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1322, i4 0)
  %p_shl138_cast = zext i6 %p_shl138 to i7
  %p_shl139 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1322, i2 0)
  %p_shl139_cast = zext i4 %p_shl139 to i7
  %tmp_555 = sub i7 %p_shl138_cast, %p_shl139_cast
  %tmp_556 = add i7 %tmp_555, %tmp_745_cast
  %tmp_1327 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_556, i6 0)
  %tmp_1328 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_556, i4 0)
  %p_shl516_cast = sext i11 %tmp_1328 to i13
  %tmp_1329 = sub i13 %tmp_1327, %p_shl516_cast
  %tmp_1330 = add i13 %tmp_546_cast1, %tmp_1329
  %tmp_1688_cast = sext i13 %tmp_1330 to i64
  %weights_48_48_1x1_ad_13 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1688_cast
  store float %shuffle_conv_1x1_loa_22, float* %weights_48_48_1x1_ad_13, align 4
  br label %.preheader497

.preheader496.loopexit:                           ; preds = %.preheader495
  br label %.preheader496

.preheader496:                                    ; preds = %.preheader496.preheader, %.preheader496.loopexit
  %i104 = phi i5 [ %i_105, %.preheader496.loopexit ], [ 0, %.preheader496.preheader ]
  %i105_cast = zext i5 %i104 to i7
  %i105_cast1 = zext i5 %i104 to i11
  %exitcond156 = icmp eq i5 %i104, -8
  %empty_577 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_105 = add i5 %i104, 1
  br i1 %exitcond156, label %136, label %.preheader495.preheader

.preheader495.preheader:                          ; preds = %.preheader496
  br label %.preheader495

.preheader495:                                    ; preds = %.preheader495.preheader, %135
  %k32 = phi i2 [ %k_33, %135 ], [ 0, %.preheader495.preheader ]
  %exitcond155 = icmp eq i2 %k32, -2
  %empty_578 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_33 = add i2 %k32, 1
  br i1 %exitcond155, label %.preheader496.loopexit, label %135

; <label>:135                                     ; preds = %.preheader495
  %tmp_1321 = trunc i2 %k32 to i1
  %p_shl134 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1321, i5 0)
  %p_shl134_cast = zext i6 %p_shl134 to i7
  %p_shl135 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1321, i3 0)
  %p_shl135_cast = zext i4 %p_shl135 to i7
  %tmp_548 = sub i7 %p_shl134_cast, %p_shl135_cast
  %tmp_749_cast = sext i7 %tmp_548 to i11
  %tmp46 = add i11 -728, %tmp_749_cast
  %tmp_549 = add i11 %i105_cast1, %tmp46
  %tmp_550 = zext i11 %tmp_549 to i64
  %bias_addr_37 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_550
  %bias_load_37 = load float* %bias_addr_37, align 4
  %tmp_551 = add i7 %tmp_548, %i105_cast
  %tmp_753_cast = sext i7 %tmp_551 to i32
  %tmp_552 = zext i32 %tmp_753_cast to i64
  %bias_48_addr_20 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_552
  store float %bias_load_37, float* %bias_48_addr_20, align 4
  br label %.preheader495

; <label>:136                                     ; preds = %.preheader496
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit856

.loopexit856.loopexit:                            ; preds = %.preheader494
  br label %.loopexit856

.loopexit856:                                     ; preds = %.loopexit856.loopexit, %136
  %co129 = phi i5 [ 0, %136 ], [ %co_130, %.loopexit856.loopexit ]
  %co131_cast = zext i5 %co129 to i7
  %co131_cast368_cast = zext i5 %co129 to i8
  %exitcond154 = icmp eq i5 %co129, -8
  %empty_579 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_130 = add i5 %co129, 1
  br i1 %exitcond154, label %.preheader491.preheader, label %.preheader494.preheader

.preheader494.preheader:                          ; preds = %.loopexit856
  br label %.preheader494

.preheader491.preheader:                          ; preds = %.loopexit856
  br label %.preheader491

.preheader494.loopexit:                           ; preds = %.preheader493
  br label %.preheader494

.preheader494:                                    ; preds = %.preheader494.preheader, %.preheader494.loopexit
  %w95 = phi i2 [ %w_96, %.preheader494.loopexit ], [ 0, %.preheader494.preheader ]
  %exitcond153 = icmp eq i2 %w95, -1
  %empty_580 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_96 = add i2 %w95, 1
  br i1 %exitcond153, label %.loopexit856.loopexit, label %.preheader493.preheader

.preheader493.preheader:                          ; preds = %.preheader494
  %tmp_557_cast1 = zext i2 %w95 to i36
  %tmp_557_cast = zext i2 %w95 to i13
  br label %.preheader493

.preheader493.loopexit:                           ; preds = %.preheader492
  br label %.preheader493

.preheader493:                                    ; preds = %.preheader493.loopexit, %.preheader493.preheader
  %h96 = phi i2 [ 0, %.preheader493.preheader ], [ %h_97, %.preheader493.loopexit ]
  %exitcond152 = icmp eq i2 %h96, -1
  %empty_581 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_97 = add i2 %h96, 1
  br i1 %exitcond152, label %.preheader494.loopexit, label %.preheader492.preheader

.preheader492.preheader:                          ; preds = %.preheader493
  %tmp_564_cast1 = zext i2 %h96 to i10
  %tmp_564_cast = zext i2 %h96 to i15
  br label %.preheader492

.preheader492:                                    ; preds = %137, %.preheader492.preheader
  %i112 = phi i2 [ %i_113, %137 ], [ 0, %.preheader492.preheader ]
  %exitcond151 = icmp eq i2 %i112, -2
  %empty_582 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_113 = add i2 %i112, 1
  br i1 %exitcond151, label %.preheader493.loopexit, label %137

; <label>:137                                     ; preds = %.preheader492
  %tmp_1333 = trunc i2 %i112 to i1
  %p_shl146 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1333, i5 0)
  %p_shl146_cast = zext i6 %p_shl146 to i7
  %p_shl147 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1333, i3 0)
  %p_shl147_cast = zext i4 %p_shl147 to i7
  %tmp_568 = sub i7 %p_shl146_cast, %p_shl147_cast
  %tmp_786_cast_cast = sext i7 %tmp_568 to i8
  %tmp47 = add i8 -56, %tmp_786_cast_cast
  %tmp_569 = add i8 %co131_cast368_cast, %tmp47
  %tmp_788_cast = sext i8 %tmp_569 to i9
  %tmp_570_cast = zext i9 %tmp_788_cast to i12
  %tmp_1334 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_569, i2 0)
  %tmp_1335 = sext i10 %tmp_1334 to i11
  %p_shl522_cast = zext i11 %tmp_1335 to i12
  %tmp_1336 = sub i12 %p_shl522_cast, %tmp_570_cast
  %tmp_1697_cast = sext i12 %tmp_1336 to i13
  %tmp_1337 = add i13 %tmp_1697_cast, %tmp_557_cast
  %tmp_1698_cast = sext i13 %tmp_1337 to i15
  %p_shl521_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1337, i2 0)
  %tmp_1338 = sub i15 %p_shl521_cast, %tmp_1698_cast
  %tmp_1339 = add i15 %tmp_1338, %tmp_564_cast
  %tmp_1701_cast = zext i15 %tmp_1339 to i64
  %shuffle_conv_3x3_add_12 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1701_cast
  %shuffle_conv_3x3_loa_12 = load float* %shuffle_conv_3x3_add_12, align 4
  %tmp_571 = add i7 %tmp_568, %co131_cast
  %tmp_790_cast = sext i7 %tmp_571 to i32
  %tmp_572_cast = zext i32 %tmp_790_cast to i35
  %tmp_1340 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_571, i2 0)
  %tmp_1341 = sext i9 %tmp_1340 to i34
  %p_shl520_cast = zext i34 %tmp_1341 to i35
  %tmp_1342 = sub i35 %p_shl520_cast, %tmp_572_cast
  %tmp_1704_cast = sext i35 %tmp_1342 to i36
  %tmp_1343 = add i36 %tmp_1704_cast, %tmp_557_cast1
  %tmp_1344 = trunc i36 %tmp_1343 to i10
  %tmp_1345 = trunc i36 %tmp_1343 to i8
  %p_shl519_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1345, i2 0)
  %tmp_1346 = sub i10 %p_shl519_cast, %tmp_1344
  %tmp_1347 = add i10 %tmp_1346, %tmp_564_cast1
  %tmp_1708_cast = zext i10 %tmp_1347 to i64
  %weights_48_1_3x3_add_7 = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1708_cast
  store float %shuffle_conv_3x3_loa_12, float* %weights_48_1_3x3_add_7, align 4
  br label %.preheader492

.preheader491.loopexit:                           ; preds = %.preheader490
  br label %.preheader491

.preheader491:                                    ; preds = %.preheader491.preheader, %.preheader491.loopexit
  %i108 = phi i5 [ %i_109, %.preheader491.loopexit ], [ 0, %.preheader491.preheader ]
  %i109_cast = zext i5 %i108 to i7
  %i109_cast1 = zext i5 %i108 to i11
  %exitcond150 = icmp eq i5 %i108, -8
  %empty_583 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_109 = add i5 %i108, 1
  br i1 %exitcond150, label %139, label %.preheader490.preheader

.preheader490.preheader:                          ; preds = %.preheader491
  br label %.preheader490

.preheader490:                                    ; preds = %.preheader490.preheader, %138
  %k34 = phi i2 [ %k_35, %138 ], [ 0, %.preheader490.preheader ]
  %exitcond149 = icmp eq i2 %k34, -2
  %empty_584 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_35 = add i2 %k34, 1
  br i1 %exitcond149, label %.preheader491.loopexit, label %138

; <label>:138                                     ; preds = %.preheader490
  %tmp_1332 = trunc i2 %k34 to i1
  %p_shl140 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1332, i5 0)
  %p_shl140_cast = zext i6 %p_shl140 to i7
  %p_shl141 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1332, i3 0)
  %p_shl141_cast = zext i4 %p_shl141 to i7
  %tmp_559 = sub i7 %p_shl140_cast, %p_shl141_cast
  %tmp_767_cast = sext i7 %tmp_559 to i11
  %tmp48 = add i11 -680, %tmp_767_cast
  %tmp_560 = add i11 %i109_cast1, %tmp48
  %tmp_561 = zext i11 %tmp_560 to i64
  %bias_addr_38 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_561
  %bias_load_38 = load float* %bias_addr_38, align 4
  %tmp_562 = add i7 %tmp_559, %i109_cast
  %tmp_771_cast = sext i7 %tmp_562 to i32
  %tmp_563 = zext i32 %tmp_771_cast to i64
  %bias_48_addr_21 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_563
  store float %bias_load_38, float* %bias_48_addr_21, align 4
  br label %.preheader490

; <label>:139                                     ; preds = %.preheader491
  call fastcc void @subconv_3x3_8_no_rel([4800 x float]* @buffer1_1_48_8x8_p, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [4800 x float]* @buffer0_1_48_8x8_p) nounwind
  br label %.loopexit855

.loopexit855.loopexit:                            ; preds = %.preheader489
  br label %.loopexit855

.loopexit855:                                     ; preds = %.loopexit855.loopexit, %139
  %co131 = phi i5 [ 0, %139 ], [ %co_132, %.loopexit855.loopexit ]
  %co133_cast = zext i5 %co131 to i11
  %exitcond148 = icmp eq i5 %co131, -8
  %empty_585 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_132 = add i5 %co131, 1
  br i1 %exitcond148, label %.preheader487.preheader, label %.preheader489.preheader

.preheader487.preheader:                          ; preds = %.loopexit855
  br label %.preheader487

.preheader489.preheader:                          ; preds = %.loopexit855
  %tmp_1331 = trunc i5 %co131 to i1
  %p_shl142 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1331, i5 0)
  %p_shl142_cast = zext i6 %p_shl142 to i7
  %p_shl143 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1331, i3 0)
  %p_shl143_cast = zext i4 %p_shl143 to i7
  %tmp_558 = sub i7 %p_shl142_cast, %p_shl143_cast
  %p_lshr_f14_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co131, i32 1, i32 4)
  %tmp_775_cast = zext i4 %p_lshr_f14_cast to i7
  br label %.preheader489

.preheader489.loopexit:                           ; preds = %.preheader488
  br label %.preheader489

.preheader489:                                    ; preds = %.preheader489.loopexit, %.preheader489.preheader
  %ci54 = phi i5 [ 0, %.preheader489.preheader ], [ %ci_55, %.preheader489.loopexit ]
  %ci54_cast = zext i5 %ci54 to i7
  %exitcond147 = icmp eq i5 %ci54, -8
  %empty_586 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_55 = add i5 %ci54, 1
  br i1 %exitcond147, label %.loopexit855.loopexit, label %.preheader488.preheader

.preheader488.preheader:                          ; preds = %.preheader489
  %tmp_565_cast1 = zext i5 %ci54 to i18
  %tmp_566 = add i7 %tmp_558, %ci54_cast
  %tmp_567_cast = sext i7 %tmp_566 to i13
  br label %.preheader488

.preheader488:                                    ; preds = %140, %.preheader488.preheader
  %i114 = phi i3 [ %i_115, %140 ], [ 0, %.preheader488.preheader ]
  %exitcond146 = icmp eq i3 %i114, -4
  %empty_587 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_115 = add i3 %i114, 1
  br i1 %exitcond146, label %.preheader489.loopexit, label %140

; <label>:140                                     ; preds = %.preheader488
  %tmp_1352 = trunc i3 %i114 to i2
  %p_shl148 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1352, i5 0)
  %p_shl148_cast = zext i7 %p_shl148 to i8
  %p_shl149 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1352, i3 0)
  %p_shl149_cast = zext i5 %p_shl149 to i8
  %tmp_578 = sub i8 %p_shl148_cast, %p_shl149_cast
  %tmp_793_cast = sext i8 %tmp_578 to i11
  %tmp49 = add i11 -488, %tmp_793_cast
  %tmp_579 = add i11 %tmp49, %co133_cast
  %tmp_1353 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_579, i5 0)
  %p_shl525_cast = zext i16 %tmp_1353 to i17
  %tmp_1354 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_579, i3 0)
  %p_shl526_cast = zext i14 %tmp_1354 to i17
  %tmp_1355 = sub i17 %p_shl525_cast, %p_shl526_cast
  %tmp_1718_cast = sext i17 %tmp_1355 to i18
  %tmp_1356 = add i18 %tmp_565_cast1, %tmp_1718_cast
  %tmp_1719_cast = sext i18 %tmp_1356 to i64
  %shuffle_conv_1x1_add_23 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1719_cast
  %shuffle_conv_1x1_loa_23 = load float* %shuffle_conv_1x1_add_23, align 4
  %p_shl150 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1352, i4 0)
  %p_shl150_cast = zext i6 %p_shl150 to i7
  %p_shl151 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1352, i2 0)
  %p_shl151_cast = zext i4 %p_shl151 to i7
  %tmp_580 = sub i7 %p_shl150_cast, %p_shl151_cast
  %tmp_581 = add i7 %tmp_580, %tmp_775_cast
  %tmp_1357 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_581, i6 0)
  %tmp_1358 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_581, i4 0)
  %p_shl524_cast = sext i11 %tmp_1358 to i13
  %tmp_1359 = sub i13 %tmp_1357, %p_shl524_cast
  %tmp_1360 = add i13 %tmp_567_cast, %tmp_1359
  %tmp_1727_cast = sext i13 %tmp_1360 to i64
  %weights_48_48_1x1_ad_14 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1727_cast
  store float %shuffle_conv_1x1_loa_23, float* %weights_48_48_1x1_ad_14, align 4
  br label %.preheader488

.preheader487.loopexit:                           ; preds = %.preheader486
  br label %.preheader487

.preheader487:                                    ; preds = %.preheader487.preheader, %.preheader487.loopexit
  %i110 = phi i5 [ %i_111, %.preheader487.loopexit ], [ 0, %.preheader487.preheader ]
  %i111_cast = zext i5 %i110 to i7
  %i111_cast1 = zext i5 %i110 to i11
  %exitcond145 = icmp eq i5 %i110, -8
  %empty_588 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_111 = add i5 %i110, 1
  br i1 %exitcond145, label %142, label %.preheader486.preheader

.preheader486.preheader:                          ; preds = %.preheader487
  br label %.preheader486

.preheader486:                                    ; preds = %.preheader486.preheader, %141
  %k36 = phi i2 [ %k_37, %141 ], [ 0, %.preheader486.preheader ]
  %exitcond144 = icmp eq i2 %k36, -2
  %empty_589 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_37 = add i2 %k36, 1
  br i1 %exitcond144, label %.preheader487.loopexit, label %141

; <label>:141                                     ; preds = %.preheader486
  %tmp_1351 = trunc i2 %k36 to i1
  %p_shl144 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1351, i5 0)
  %p_shl144_cast = zext i6 %p_shl144 to i7
  %p_shl145 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1351, i3 0)
  %p_shl145_cast = zext i4 %p_shl145 to i7
  %tmp_573 = sub i7 %p_shl144_cast, %p_shl145_cast
  %tmp_777_cast = sext i7 %tmp_573 to i11
  %tmp50 = add i11 -632, %tmp_777_cast
  %tmp_574 = add i11 %i111_cast1, %tmp50
  %tmp_575 = zext i11 %tmp_574 to i64
  %bias_addr_39 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_575
  %bias_load_39 = load float* %bias_addr_39, align 4
  %tmp_576 = add i7 %tmp_573, %i111_cast
  %tmp_781_cast = sext i7 %tmp_576 to i32
  %tmp_577 = zext i32 %tmp_781_cast to i64
  %bias_48_addr_22 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_577
  store float %bias_load_39, float* %bias_48_addr_22, align 4
  br label %.preheader486

; <label>:142                                     ; preds = %.preheader487
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit854

.loopexit854.loopexit:                            ; preds = %.preheader485
  br label %.loopexit854

.loopexit854:                                     ; preds = %.loopexit854.loopexit, %142
  %co133 = phi i6 [ 0, %142 ], [ %co_134, %.loopexit854.loopexit ]
  %exitcond143 = icmp eq i6 %co133, -16
  %empty_590 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_134 = add i6 %co133, 1
  br i1 %exitcond143, label %144, label %.preheader485.preheader

.preheader485.preheader:                          ; preds = %.loopexit854
  %tmp_1348 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co133, i3 0)
  %p_shl527_cast = zext i9 %tmp_1348 to i10
  %tmp_1349 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co133, i1 false)
  %p_shl528_cast = zext i7 %tmp_1349 to i10
  %tmp_1350 = add i10 %p_shl528_cast, %p_shl527_cast
  br label %.preheader485

.preheader485.loopexit:                           ; preds = %.preheader484
  br label %.preheader485

.preheader485:                                    ; preds = %.preheader485.loopexit, %.preheader485.preheader
  %h98 = phi i4 [ 0, %.preheader485.preheader ], [ %h_99, %.preheader485.loopexit ]
  %exitcond142 = icmp eq i4 %h98, -8
  %empty_591 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_99 = add i4 %h98, 1
  br i1 %exitcond142, label %.loopexit854.loopexit, label %.preheader484.preheader

.preheader484.preheader:                          ; preds = %.preheader485
  %tmp_583_cast = zext i4 %h_99 to i10
  %tmp_1367 = add i10 %tmp_583_cast, %tmp_1350
  %tmp_1368 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1367, i3 0)
  %p_shl529_cast = zext i13 %tmp_1368 to i15
  %tmp_1369 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1367, i1 false)
  %p_shl530_cast = zext i11 %tmp_1369 to i15
  %tmp_1370 = add i15 %p_shl529_cast, %p_shl530_cast
  br label %.preheader484

.preheader484:                                    ; preds = %143, %.preheader484.preheader
  %w97 = phi i4 [ %w_98, %143 ], [ 0, %.preheader484.preheader ]
  %exitcond141 = icmp eq i4 %w97, -8
  %empty_592 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_98 = add i4 %w97, 1
  br i1 %exitcond141, label %.preheader485.loopexit, label %143

; <label>:143                                     ; preds = %.preheader484
  %tmp_586_cast = zext i4 %w_98 to i15
  %tmp_1380 = add i15 %tmp_1370, %tmp_586_cast
  %tmp_1748_cast = zext i15 %tmp_1380 to i64
  %shuffleunit1_4_outpu_2 = getelementptr [9600 x float]* @shuffleunit1_4_outpu, i64 0, i64 %tmp_1748_cast
  %buffer0_1_48_8x8_p_a_11 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1748_cast
  %shuffleunit1_4_outpu_3 = load float* %shuffleunit1_4_outpu_2, align 4
  store float %shuffleunit1_4_outpu_3, float* %buffer0_1_48_8x8_p_a_11, align 4
  br label %.preheader484

; <label>:144                                     ; preds = %.loopexit854
  call fastcc void @shuffle_48_p([4800 x float]* @buffer0_1_48_8x8_p, [9600 x float]* @shuffleunit1_5_outpu) nounwind
  br label %.loopexit853

.loopexit853.loopexit:                            ; preds = %.preheader483
  br label %.loopexit853

.loopexit853:                                     ; preds = %.loopexit853.loopexit, %144
  %co135 = phi i6 [ 0, %144 ], [ %co_136, %.loopexit853.loopexit ]
  %co136_cast = zext i6 %co135 to i7
  %exitcond140 = icmp eq i6 %co135, -16
  %empty_593 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_136 = add i6 %co135, 1
  br i1 %exitcond140, label %.preheader481.preheader, label %.preheader483.preheader

.preheader481.preheader:                          ; preds = %.loopexit853
  br label %.preheader481

.preheader483.preheader:                          ; preds = %.loopexit853
  %tmp_582 = add i7 %co136_cast, 48
  %tmp_1361 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_582, i3 0)
  %p_shl533_cast = zext i10 %tmp_1361 to i11
  %tmp_1362 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp_582, i1 false)
  %p_shl534_cast = zext i8 %tmp_1362 to i11
  %tmp_1363 = add i11 %p_shl534_cast, %p_shl533_cast
  %tmp_1364 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co135, i3 0)
  %p_shl531_cast = zext i9 %tmp_1364 to i10
  %tmp_1365 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co135, i1 false)
  %p_shl532_cast = zext i7 %tmp_1365 to i10
  %tmp_1366 = add i10 %p_shl532_cast, %p_shl531_cast
  br label %.preheader483

.preheader483.loopexit:                           ; preds = %.preheader482
  br label %.preheader483

.preheader483:                                    ; preds = %.preheader483.loopexit, %.preheader483.preheader
  %h100 = phi i4 [ 0, %.preheader483.preheader ], [ %h_101, %.preheader483.loopexit ]
  %exitcond139 = icmp eq i4 %h100, -8
  %empty_594 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_101 = add i4 %h100, 1
  br i1 %exitcond139, label %.loopexit853.loopexit, label %.preheader482.preheader

.preheader482.preheader:                          ; preds = %.preheader483
  %tmp_585_cast1 = zext i4 %h_101 to i10
  %tmp_585_cast = zext i4 %h_101 to i11
  %tmp_1372 = add i11 %tmp_585_cast, %tmp_1363
  %tmp_1373 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1372, i3 0)
  %p_shl537_cast = zext i14 %tmp_1373 to i15
  %tmp_1374 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_1372, i1 false)
  %p_shl538_cast = zext i12 %tmp_1374 to i15
  %tmp_1375 = add i15 %p_shl537_cast, %p_shl538_cast
  %tmp_1376 = add i10 %tmp_585_cast1, %tmp_1366
  %tmp_1377 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1376, i3 0)
  %p_shl535_cast = zext i13 %tmp_1377 to i14
  %tmp_1378 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1376, i1 false)
  %p_shl536_cast = zext i11 %tmp_1378 to i14
  %tmp_1379 = add i14 %p_shl535_cast, %p_shl536_cast
  br label %.preheader482

.preheader482:                                    ; preds = %145, %.preheader482.preheader
  %w99 = phi i4 [ %w_100, %145 ], [ 0, %.preheader482.preheader ]
  %exitcond138 = icmp eq i4 %w99, -8
  %empty_595 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_100 = add i4 %w99, 1
  br i1 %exitcond138, label %.preheader483.loopexit, label %145

; <label>:145                                     ; preds = %.preheader482
  %tmp_590_cast1 = zext i4 %w_100 to i14
  %tmp_590_cast = zext i4 %w_100 to i15
  %tmp_1381 = add i15 %tmp_1375, %tmp_590_cast
  %tmp_1749_cast = zext i15 %tmp_1381 to i64
  %shuffleunit1_5_outpu = getelementptr [9600 x float]* @shuffleunit1_5_outpu, i64 0, i64 %tmp_1749_cast
  %tmp_1382 = add i14 %tmp_1379, %tmp_590_cast1
  %tmp_1750_cast = zext i14 %tmp_1382 to i64
  %buffer0_1_48_8x8_p_a_12 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1750_cast
  %shuffleunit1_5_outpu_1 = load float* %shuffleunit1_5_outpu, align 4
  store float %shuffleunit1_5_outpu_1, float* %buffer0_1_48_8x8_p_a_12, align 4
  br label %.preheader482

.preheader481.loopexit:                           ; preds = %.preheader480
  br label %.preheader481

.preheader481:                                    ; preds = %.preheader481.preheader, %.preheader481.loopexit
  %co137 = phi i5 [ %co_138, %.preheader481.loopexit ], [ 0, %.preheader481.preheader ]
  %co138_cast344_cast = zext i5 %co137 to i10
  %exitcond137 = icmp eq i5 %co137, -8
  %empty_596 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_138 = add i5 %co137, 1
  br i1 %exitcond137, label %.preheader478.preheader, label %.preheader480.preheader

.preheader478.preheader:                          ; preds = %.preheader481
  br label %.preheader478

.preheader480.preheader:                          ; preds = %.preheader481
  %tmp_1371 = trunc i5 %co137 to i1
  %p_shl152 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1371, i5 0)
  %p_shl152_cast = zext i6 %p_shl152 to i7
  %p_shl153 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1371, i3 0)
  %p_shl153_cast = zext i4 %p_shl153 to i7
  %tmp_584 = sub i7 %p_shl152_cast, %p_shl153_cast
  %p_lshr_f15_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co137, i32 1, i32 4)
  %tmp_805_cast = zext i4 %p_lshr_f15_cast to i7
  br label %.preheader480

.preheader480.loopexit:                           ; preds = %.preheader479
  br label %.preheader480

.preheader480:                                    ; preds = %.preheader480.loopexit, %.preheader480.preheader
  %ci56 = phi i5 [ 0, %.preheader480.preheader ], [ %ci_57, %.preheader480.loopexit ]
  %ci56_cast = zext i5 %ci56 to i7
  %exitcond136 = icmp eq i5 %ci56, -8
  %empty_597 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_57 = add i5 %ci56, 1
  br i1 %exitcond136, label %.preheader481.loopexit, label %.preheader479.preheader

.preheader479.preheader:                          ; preds = %.preheader480
  %tmp_587_cast = zext i5 %ci56 to i18
  %tmp_588 = add i7 %tmp_584, %ci56_cast
  %tmp_589_cast1 = sext i7 %tmp_588 to i13
  br label %.preheader479

.preheader479:                                    ; preds = %146, %.preheader479.preheader
  %i118 = phi i3 [ %i_119, %146 ], [ 0, %.preheader479.preheader ]
  %exitcond135 = icmp eq i3 %i118, -4
  %empty_598 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_119 = add i3 %i118, 1
  br i1 %exitcond135, label %.preheader480.loopexit, label %146

; <label>:146                                     ; preds = %.preheader479
  %tmp_1384 = trunc i3 %i118 to i2
  %p_shl156 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1384, i5 0)
  %p_shl156_cast = zext i7 %p_shl156 to i8
  %p_shl157 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1384, i3 0)
  %p_shl157_cast = zext i5 %p_shl157 to i8
  %tmp_596 = sub i8 %p_shl156_cast, %p_shl157_cast
  %tmp_820_cast_cast = sext i8 %tmp_596 to i10
  %tmp51 = add i10 -392, %tmp_820_cast_cast
  %tmp_597 = add i10 %tmp51, %co138_cast344_cast
  %tmp_1385 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_597, i5 0)
  %tmp_1386 = sext i15 %tmp_1385 to i16
  %p_shl541_cast = zext i16 %tmp_1386 to i17
  %tmp_1387 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_597, i3 0)
  %tmp_1388 = sext i13 %tmp_1387 to i14
  %p_shl542_cast = zext i14 %tmp_1388 to i17
  %tmp_1389 = sub i17 %p_shl541_cast, %p_shl542_cast
  %tmp_1759_cast = sext i17 %tmp_1389 to i18
  %tmp_1390 = add i18 %tmp_587_cast, %tmp_1759_cast
  %tmp_1760_cast = sext i18 %tmp_1390 to i64
  %shuffle_conv_1x1_add_24 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1760_cast
  %shuffle_conv_1x1_loa_24 = load float* %shuffle_conv_1x1_add_24, align 4
  %p_shl158 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1384, i4 0)
  %p_shl158_cast = zext i6 %p_shl158 to i7
  %p_shl159 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1384, i2 0)
  %p_shl159_cast = zext i4 %p_shl159 to i7
  %tmp_598 = sub i7 %p_shl158_cast, %p_shl159_cast
  %tmp_599 = add i7 %tmp_598, %tmp_805_cast
  %tmp_1391 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_599, i6 0)
  %tmp_1392 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_599, i4 0)
  %p_shl540_cast = sext i11 %tmp_1392 to i13
  %tmp_1393 = sub i13 %tmp_1391, %p_shl540_cast
  %tmp_1394 = add i13 %tmp_589_cast1, %tmp_1393
  %tmp_1768_cast = sext i13 %tmp_1394 to i64
  %weights_48_48_1x1_ad_15 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1768_cast
  store float %shuffle_conv_1x1_loa_24, float* %weights_48_48_1x1_ad_15, align 4
  br label %.preheader479

.preheader478.loopexit:                           ; preds = %.preheader477
  br label %.preheader478

.preheader478:                                    ; preds = %.preheader478.preheader, %.preheader478.loopexit
  %i116 = phi i5 [ %i_117, %.preheader478.loopexit ], [ 0, %.preheader478.preheader ]
  %i117_cast = zext i5 %i116 to i7
  %i117_cast1 = zext i5 %i116 to i11
  %exitcond134 = icmp eq i5 %i116, -8
  %empty_599 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_117 = add i5 %i116, 1
  br i1 %exitcond134, label %148, label %.preheader477.preheader

.preheader477.preheader:                          ; preds = %.preheader478
  br label %.preheader477

.preheader477:                                    ; preds = %.preheader477.preheader, %147
  %k38 = phi i2 [ %k_39, %147 ], [ 0, %.preheader477.preheader ]
  %exitcond133 = icmp eq i2 %k38, -2
  %empty_600 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_39 = add i2 %k38, 1
  br i1 %exitcond133, label %.preheader478.loopexit, label %147

; <label>:147                                     ; preds = %.preheader477
  %tmp_1383 = trunc i2 %k38 to i1
  %p_shl154 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1383, i5 0)
  %p_shl154_cast = zext i6 %p_shl154 to i7
  %p_shl155 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1383, i3 0)
  %p_shl155_cast = zext i4 %p_shl155 to i7
  %tmp_591 = sub i7 %p_shl154_cast, %p_shl155_cast
  %tmp_809_cast = sext i7 %tmp_591 to i11
  %tmp52 = add i11 -584, %tmp_809_cast
  %tmp_592 = add i11 %i117_cast1, %tmp52
  %tmp_593 = zext i11 %tmp_592 to i64
  %bias_addr_40 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_593
  %bias_load_40 = load float* %bias_addr_40, align 4
  %tmp_594 = add i7 %tmp_591, %i117_cast
  %tmp_813_cast = sext i7 %tmp_594 to i32
  %tmp_595 = zext i32 %tmp_813_cast to i64
  %bias_48_addr_23 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_595
  store float %bias_load_40, float* %bias_48_addr_23, align 4
  br label %.preheader477

; <label>:148                                     ; preds = %.preheader478
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit852

.loopexit852.loopexit:                            ; preds = %.preheader476
  br label %.loopexit852

.loopexit852:                                     ; preds = %.loopexit852.loopexit, %148
  %co139 = phi i5 [ 0, %148 ], [ %co_140, %.loopexit852.loopexit ]
  %co141_cast = zext i5 %co139 to i7
  %co141_cast1 = zext i5 %co139 to i10
  %exitcond132 = icmp eq i5 %co139, -8
  %empty_601 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_140 = add i5 %co139, 1
  br i1 %exitcond132, label %.preheader473.preheader, label %.preheader476.preheader

.preheader476.preheader:                          ; preds = %.loopexit852
  br label %.preheader476

.preheader473.preheader:                          ; preds = %.loopexit852
  br label %.preheader473

.preheader476.loopexit:                           ; preds = %.preheader475
  br label %.preheader476

.preheader476:                                    ; preds = %.preheader476.preheader, %.preheader476.loopexit
  %w101 = phi i2 [ %w_102, %.preheader476.loopexit ], [ 0, %.preheader476.preheader ]
  %exitcond131 = icmp eq i2 %w101, -1
  %empty_602 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_102 = add i2 %w101, 1
  br i1 %exitcond131, label %.loopexit852.loopexit, label %.preheader475.preheader

.preheader475.preheader:                          ; preds = %.preheader476
  %tmp_600_cast1 = zext i2 %w101 to i36
  %tmp_600_cast = zext i2 %w101 to i14
  br label %.preheader475

.preheader475.loopexit:                           ; preds = %.preheader474
  br label %.preheader475

.preheader475:                                    ; preds = %.preheader475.loopexit, %.preheader475.preheader
  %h102 = phi i2 [ 0, %.preheader475.preheader ], [ %h_103, %.preheader475.loopexit ]
  %exitcond130 = icmp eq i2 %h102, -1
  %empty_603 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_103 = add i2 %h102, 1
  br i1 %exitcond130, label %.preheader476.loopexit, label %.preheader474.preheader

.preheader474.preheader:                          ; preds = %.preheader475
  %tmp_607_cast1 = zext i2 %h102 to i10
  %tmp_607_cast = zext i2 %h102 to i15
  br label %.preheader474

.preheader474:                                    ; preds = %149, %.preheader474.preheader
  %i124 = phi i2 [ %i_125, %149 ], [ 0, %.preheader474.preheader ]
  %exitcond129 = icmp eq i2 %i124, -2
  %empty_604 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_125 = add i2 %i124, 1
  br i1 %exitcond129, label %.preheader475.loopexit, label %149

; <label>:149                                     ; preds = %.preheader474
  %tmp_1397 = trunc i2 %i124 to i1
  %p_shl166 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1397, i5 0)
  %p_shl166_cast = zext i6 %p_shl166 to i7
  %p_shl167 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1397, i3 0)
  %p_shl167_cast = zext i4 %p_shl167 to i7
  %tmp_611 = sub i7 %p_shl166_cast, %p_shl167_cast
  %tmp_846_cast = sext i7 %tmp_611 to i10
  %tmp53 = add i10 504, %tmp_846_cast
  %tmp_612 = add i10 %co141_cast1, %tmp53
  %tmp_613_cast1 = zext i10 %tmp_612 to i13
  %tmp_1398 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_612, i2 0)
  %p_shl546_cast = zext i12 %tmp_1398 to i13
  %tmp_1399 = sub i13 %p_shl546_cast, %tmp_613_cast1
  %tmp_1776_cast = sext i13 %tmp_1399 to i14
  %tmp_1400 = add i14 %tmp_1776_cast, %tmp_600_cast
  %tmp_1777_cast = sext i14 %tmp_1400 to i15
  %tmp_1401 = trunc i14 %tmp_1400 to i13
  %p_shl545_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1401, i2 0)
  %tmp_1402 = sub i15 %p_shl545_cast, %tmp_1777_cast
  %tmp_1403 = add i15 %tmp_1402, %tmp_607_cast
  %tmp_1780_cast = zext i15 %tmp_1403 to i64
  %shuffle_conv_3x3_add_13 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1780_cast
  %shuffle_conv_3x3_loa_13 = load float* %shuffle_conv_3x3_add_13, align 4
  %tmp_614 = add i7 %tmp_611, %co141_cast
  %tmp_850_cast = sext i7 %tmp_614 to i32
  %tmp_615_cast = zext i32 %tmp_850_cast to i35
  %tmp_1404 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_614, i2 0)
  %tmp_1405 = sext i9 %tmp_1404 to i34
  %p_shl544_cast = zext i34 %tmp_1405 to i35
  %tmp_1406 = sub i35 %p_shl544_cast, %tmp_615_cast
  %tmp_1783_cast = sext i35 %tmp_1406 to i36
  %tmp_1407 = add i36 %tmp_1783_cast, %tmp_600_cast1
  %tmp_1408 = trunc i36 %tmp_1407 to i10
  %tmp_1409 = trunc i36 %tmp_1407 to i8
  %p_shl543_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1409, i2 0)
  %tmp_1410 = sub i10 %p_shl543_cast, %tmp_1408
  %tmp_1411 = add i10 %tmp_1410, %tmp_607_cast1
  %tmp_1787_cast = zext i10 %tmp_1411 to i64
  %weights_48_1_3x3_add_8 = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1787_cast
  store float %shuffle_conv_3x3_loa_13, float* %weights_48_1_3x3_add_8, align 4
  br label %.preheader474

.preheader473.loopexit:                           ; preds = %.preheader472
  br label %.preheader473

.preheader473:                                    ; preds = %.preheader473.preheader, %.preheader473.loopexit
  %i120 = phi i5 [ %i_121, %.preheader473.loopexit ], [ 0, %.preheader473.preheader ]
  %i121_cast = zext i5 %i120 to i7
  %i121_cast1 = zext i5 %i120 to i11
  %exitcond128 = icmp eq i5 %i120, -8
  %empty_605 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_121 = add i5 %i120, 1
  br i1 %exitcond128, label %151, label %.preheader472.preheader

.preheader472.preheader:                          ; preds = %.preheader473
  br label %.preheader472

.preheader472:                                    ; preds = %.preheader472.preheader, %150
  %k40 = phi i2 [ %k_41, %150 ], [ 0, %.preheader472.preheader ]
  %exitcond127 = icmp eq i2 %k40, -2
  %empty_606 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_41 = add i2 %k40, 1
  br i1 %exitcond127, label %.preheader473.loopexit, label %150

; <label>:150                                     ; preds = %.preheader472
  %tmp_1396 = trunc i2 %k40 to i1
  %p_shl160 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1396, i5 0)
  %p_shl160_cast = zext i6 %p_shl160 to i7
  %p_shl161 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1396, i3 0)
  %p_shl161_cast = zext i4 %p_shl161 to i7
  %tmp_602 = sub i7 %p_shl160_cast, %p_shl161_cast
  %tmp_827_cast = sext i7 %tmp_602 to i11
  %tmp54 = add i11 -536, %tmp_827_cast
  %tmp_603 = add i11 %i121_cast1, %tmp54
  %tmp_604 = zext i11 %tmp_603 to i64
  %bias_addr_41 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_604
  %bias_load_41 = load float* %bias_addr_41, align 4
  %tmp_605 = add i7 %tmp_602, %i121_cast
  %tmp_831_cast = sext i7 %tmp_605 to i32
  %tmp_606 = zext i32 %tmp_831_cast to i64
  %bias_48_addr_24 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_606
  store float %bias_load_41, float* %bias_48_addr_24, align 4
  br label %.preheader472

; <label>:151                                     ; preds = %.preheader473
  call fastcc void @subconv_3x3_8_no_rel([4800 x float]* @buffer1_1_48_8x8_p, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [4800 x float]* @buffer0_1_48_8x8_p) nounwind
  br label %.loopexit851

.loopexit851.loopexit:                            ; preds = %.preheader471
  br label %.loopexit851

.loopexit851:                                     ; preds = %.loopexit851.loopexit, %151
  %co141 = phi i5 [ 0, %151 ], [ %co_142, %.loopexit851.loopexit ]
  %co143_cast321_cast = zext i5 %co141 to i10
  %exitcond126 = icmp eq i5 %co141, -8
  %empty_607 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_142 = add i5 %co141, 1
  br i1 %exitcond126, label %.preheader469.preheader, label %.preheader471.preheader

.preheader469.preheader:                          ; preds = %.loopexit851
  br label %.preheader469

.preheader471.preheader:                          ; preds = %.loopexit851
  %tmp_1395 = trunc i5 %co141 to i1
  %p_shl162 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1395, i5 0)
  %p_shl162_cast = zext i6 %p_shl162 to i7
  %p_shl163 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1395, i3 0)
  %p_shl163_cast = zext i4 %p_shl163 to i7
  %tmp_601 = sub i7 %p_shl162_cast, %p_shl163_cast
  %p_lshr_f16_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co141, i32 1, i32 4)
  %tmp_835_cast = zext i4 %p_lshr_f16_cast to i7
  br label %.preheader471

.preheader471.loopexit:                           ; preds = %.preheader470
  br label %.preheader471

.preheader471:                                    ; preds = %.preheader471.loopexit, %.preheader471.preheader
  %ci58 = phi i5 [ 0, %.preheader471.preheader ], [ %ci_59, %.preheader471.loopexit ]
  %ci58_cast = zext i5 %ci58 to i7
  %exitcond125 = icmp eq i5 %ci58, -8
  %empty_608 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_59 = add i5 %ci58, 1
  br i1 %exitcond125, label %.loopexit851.loopexit, label %.preheader470.preheader

.preheader470.preheader:                          ; preds = %.preheader471
  %tmp_608_cast = zext i5 %ci58 to i18
  %tmp_609 = add i7 %tmp_601, %ci58_cast
  %tmp_610_cast1 = sext i7 %tmp_609 to i13
  br label %.preheader470

.preheader470:                                    ; preds = %152, %.preheader470.preheader
  %i126 = phi i3 [ %i_127, %152 ], [ 0, %.preheader470.preheader ]
  %exitcond124 = icmp eq i3 %i126, -4
  %empty_609 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_127 = add i3 %i126, 1
  br i1 %exitcond124, label %.preheader471.loopexit, label %152

; <label>:152                                     ; preds = %.preheader470
  %tmp_1416 = trunc i3 %i126 to i2
  %p_shl168 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1416, i5 0)
  %p_shl168_cast = zext i7 %p_shl168 to i8
  %p_shl169 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1416, i3 0)
  %p_shl169_cast = zext i5 %p_shl169 to i8
  %tmp_621 = sub i8 %p_shl168_cast, %p_shl169_cast
  %tmp_853_cast_cast = sext i8 %tmp_621 to i10
  %tmp55 = add i10 -296, %tmp_853_cast_cast
  %tmp_622 = add i10 %tmp55, %co143_cast321_cast
  %tmp_1417 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_622, i5 0)
  %tmp_1418 = sext i15 %tmp_1417 to i16
  %p_shl549_cast = zext i16 %tmp_1418 to i17
  %tmp_1419 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_622, i3 0)
  %tmp_1420 = sext i13 %tmp_1419 to i14
  %p_shl550_cast = zext i14 %tmp_1420 to i17
  %tmp_1421 = sub i17 %p_shl549_cast, %p_shl550_cast
  %tmp_1799_cast = sext i17 %tmp_1421 to i18
  %tmp_1422 = add i18 %tmp_608_cast, %tmp_1799_cast
  %tmp_1800_cast = sext i18 %tmp_1422 to i64
  %shuffle_conv_1x1_add_25 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1800_cast
  %shuffle_conv_1x1_loa_25 = load float* %shuffle_conv_1x1_add_25, align 4
  %p_shl170 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1416, i4 0)
  %p_shl170_cast = zext i6 %p_shl170 to i7
  %p_shl171 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1416, i2 0)
  %p_shl171_cast = zext i4 %p_shl171 to i7
  %tmp_623 = sub i7 %p_shl170_cast, %p_shl171_cast
  %tmp_624 = add i7 %tmp_623, %tmp_835_cast
  %tmp_1423 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_624, i6 0)
  %tmp_1424 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_624, i4 0)
  %p_shl548_cast = sext i11 %tmp_1424 to i13
  %tmp_1425 = sub i13 %tmp_1423, %p_shl548_cast
  %tmp_1426 = add i13 %tmp_610_cast1, %tmp_1425
  %tmp_1808_cast = sext i13 %tmp_1426 to i64
  %weights_48_48_1x1_ad_16 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1808_cast
  store float %shuffle_conv_1x1_loa_25, float* %weights_48_48_1x1_ad_16, align 4
  br label %.preheader470

.preheader469.loopexit:                           ; preds = %.preheader468
  br label %.preheader469

.preheader469:                                    ; preds = %.preheader469.preheader, %.preheader469.loopexit
  %i122 = phi i5 [ %i_123, %.preheader469.loopexit ], [ 0, %.preheader469.preheader ]
  %i123_cast = zext i5 %i122 to i7
  %i123_cast311_cast = zext i5 %i122 to i10
  %exitcond123 = icmp eq i5 %i122, -8
  %empty_610 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_123 = add i5 %i122, 1
  br i1 %exitcond123, label %154, label %.preheader468.preheader

.preheader468.preheader:                          ; preds = %.preheader469
  br label %.preheader468

.preheader468:                                    ; preds = %.preheader468.preheader, %153
  %k42 = phi i2 [ %k_43, %153 ], [ 0, %.preheader468.preheader ]
  %exitcond122 = icmp eq i2 %k42, -2
  %empty_611 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_43 = add i2 %k42, 1
  br i1 %exitcond122, label %.preheader469.loopexit, label %153

; <label>:153                                     ; preds = %.preheader468
  %tmp_1415 = trunc i2 %k42 to i1
  %p_shl164 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1415, i5 0)
  %p_shl164_cast = zext i6 %p_shl164 to i7
  %p_shl165 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1415, i3 0)
  %p_shl165_cast = zext i4 %p_shl165 to i7
  %tmp_616 = sub i7 %p_shl164_cast, %p_shl165_cast
  %tmp_837_cast_cast = sext i7 %tmp_616 to i10
  %tmp56 = add i10 -488, %tmp_837_cast_cast
  %tmp_617 = add i10 %i123_cast311_cast, %tmp56
  %tmp_839_cast = sext i10 %tmp_617 to i11
  %tmp_618 = zext i11 %tmp_839_cast to i64
  %bias_addr_42 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_618
  %bias_load_42 = load float* %bias_addr_42, align 4
  %tmp_619 = add i7 %tmp_616, %i123_cast
  %tmp_841_cast = sext i7 %tmp_619 to i32
  %tmp_620 = zext i32 %tmp_841_cast to i64
  %bias_48_addr_25 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_620
  store float %bias_load_42, float* %bias_48_addr_25, align 4
  br label %.preheader468

; <label>:154                                     ; preds = %.preheader469
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit850

.loopexit850.loopexit:                            ; preds = %.preheader467
  br label %.loopexit850

.loopexit850:                                     ; preds = %.loopexit850.loopexit, %154
  %co143 = phi i6 [ 0, %154 ], [ %co_144, %.loopexit850.loopexit ]
  %exitcond121 = icmp eq i6 %co143, -16
  %empty_612 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_144 = add i6 %co143, 1
  br i1 %exitcond121, label %156, label %.preheader467.preheader

.preheader467.preheader:                          ; preds = %.loopexit850
  %tmp_1412 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co143, i3 0)
  %p_shl551_cast = zext i9 %tmp_1412 to i10
  %tmp_1413 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co143, i1 false)
  %p_shl552_cast = zext i7 %tmp_1413 to i10
  %tmp_1414 = add i10 %p_shl552_cast, %p_shl551_cast
  br label %.preheader467

.preheader467.loopexit:                           ; preds = %.preheader466
  br label %.preheader467

.preheader467:                                    ; preds = %.preheader467.loopexit, %.preheader467.preheader
  %h104 = phi i4 [ 0, %.preheader467.preheader ], [ %h_105, %.preheader467.loopexit ]
  %exitcond120 = icmp eq i4 %h104, -8
  %empty_613 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_105 = add i4 %h104, 1
  br i1 %exitcond120, label %.loopexit850.loopexit, label %.preheader466.preheader

.preheader466.preheader:                          ; preds = %.preheader467
  %tmp_626_cast = zext i4 %h_105 to i10
  %tmp_1433 = add i10 %tmp_626_cast, %tmp_1414
  %tmp_1434 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1433, i3 0)
  %p_shl553_cast = zext i13 %tmp_1434 to i15
  %tmp_1435 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1433, i1 false)
  %p_shl554_cast = zext i11 %tmp_1435 to i15
  %tmp_1436 = add i15 %p_shl553_cast, %p_shl554_cast
  br label %.preheader466

.preheader466:                                    ; preds = %155, %.preheader466.preheader
  %w103 = phi i4 [ %w_104, %155 ], [ 0, %.preheader466.preheader ]
  %exitcond119 = icmp eq i4 %w103, -8
  %empty_614 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_104 = add i4 %w103, 1
  br i1 %exitcond119, label %.preheader467.loopexit, label %155

; <label>:155                                     ; preds = %.preheader466
  %tmp_629_cast1 = zext i4 %w_104 to i15
  %tmp_1446 = add i15 %tmp_1436, %tmp_629_cast1
  %tmp_1829_cast = zext i15 %tmp_1446 to i64
  %shuffleunit1_5_outpu_2 = getelementptr [9600 x float]* @shuffleunit1_5_outpu, i64 0, i64 %tmp_1829_cast
  %buffer0_1_48_8x8_p_a_13 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1829_cast
  %shuffleunit1_5_outpu_3 = load float* %shuffleunit1_5_outpu_2, align 4
  store float %shuffleunit1_5_outpu_3, float* %buffer0_1_48_8x8_p_a_13, align 4
  br label %.preheader466

; <label>:156                                     ; preds = %.loopexit850
  call fastcc void @shuffle_48_p([4800 x float]* @buffer0_1_48_8x8_p, [9600 x float]* @shuffleunit1_6_outpu) nounwind
  br label %.loopexit849

.loopexit849.loopexit:                            ; preds = %.preheader465
  br label %.loopexit849

.loopexit849:                                     ; preds = %.loopexit849.loopexit, %156
  %co145 = phi i6 [ 0, %156 ], [ %co_146, %.loopexit849.loopexit ]
  %co146_cast = zext i6 %co145 to i7
  %exitcond118 = icmp eq i6 %co145, -16
  %empty_615 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_146 = add i6 %co145, 1
  br i1 %exitcond118, label %.preheader463.preheader, label %.preheader465.preheader

.preheader463.preheader:                          ; preds = %.loopexit849
  br label %.preheader463

.preheader465.preheader:                          ; preds = %.loopexit849
  %tmp_625 = add i7 %co146_cast, 48
  %tmp_1427 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_625, i3 0)
  %p_shl557_cast = zext i10 %tmp_1427 to i11
  %tmp_1428 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp_625, i1 false)
  %p_shl558_cast = zext i8 %tmp_1428 to i11
  %tmp_1429 = add i11 %p_shl558_cast, %p_shl557_cast
  %tmp_1430 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co145, i3 0)
  %p_shl555_cast = zext i9 %tmp_1430 to i10
  %tmp_1431 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co145, i1 false)
  %p_shl556_cast = zext i7 %tmp_1431 to i10
  %tmp_1432 = add i10 %p_shl556_cast, %p_shl555_cast
  br label %.preheader465

.preheader465.loopexit:                           ; preds = %.preheader464
  br label %.preheader465

.preheader465:                                    ; preds = %.preheader465.loopexit, %.preheader465.preheader
  %h106 = phi i4 [ 0, %.preheader465.preheader ], [ %h_107, %.preheader465.loopexit ]
  %exitcond117 = icmp eq i4 %h106, -8
  %empty_616 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_107 = add i4 %h106, 1
  br i1 %exitcond117, label %.loopexit849.loopexit, label %.preheader464.preheader

.preheader464.preheader:                          ; preds = %.preheader465
  %tmp_628_cast1 = zext i4 %h_107 to i11
  %tmp_628_cast = zext i4 %h_107 to i10
  %tmp_1438 = add i10 %tmp_628_cast, %tmp_1432
  %tmp_1439 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1438, i3 0)
  %p_shl561_cast = zext i13 %tmp_1439 to i14
  %tmp_1440 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1438, i1 false)
  %p_shl562_cast = zext i11 %tmp_1440 to i14
  %tmp_1441 = add i14 %p_shl561_cast, %p_shl562_cast
  %tmp_1442 = add i11 %tmp_628_cast1, %tmp_1429
  %tmp_1443 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1442, i3 0)
  %p_shl559_cast = zext i14 %tmp_1443 to i15
  %tmp_1444 = call i12 @_ssdm_op_BitConcatenate.i12.i11.i1(i11 %tmp_1442, i1 false)
  %p_shl560_cast = zext i12 %tmp_1444 to i15
  %tmp_1445 = add i15 %p_shl559_cast, %p_shl560_cast
  br label %.preheader464

.preheader464:                                    ; preds = %157, %.preheader464.preheader
  %w105 = phi i4 [ %w_106, %157 ], [ 0, %.preheader464.preheader ]
  %exitcond116 = icmp eq i4 %w105, -8
  %empty_617 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_106 = add i4 %w105, 1
  br i1 %exitcond116, label %.preheader465.loopexit, label %157

; <label>:157                                     ; preds = %.preheader464
  %tmp_634_cast1 = zext i4 %w_106 to i15
  %tmp_634_cast = zext i4 %w_106 to i14
  %tmp_1447 = add i14 %tmp_1441, %tmp_634_cast
  %tmp_1830_cast = zext i14 %tmp_1447 to i64
  %buffer0_1_48_8x8_p_a_14 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1830_cast
  %tmp_1448 = add i15 %tmp_1445, %tmp_634_cast1
  %tmp_1831_cast = zext i15 %tmp_1448 to i64
  %shuffleunit1_6_outpu = getelementptr [9600 x float]* @shuffleunit1_6_outpu, i64 0, i64 %tmp_1831_cast
  %shuffleunit1_6_outpu_1 = load float* %shuffleunit1_6_outpu, align 4
  store float %shuffleunit1_6_outpu_1, float* %buffer0_1_48_8x8_p_a_14, align 4
  br label %.preheader464

.preheader463.loopexit:                           ; preds = %.preheader462
  br label %.preheader463

.preheader463:                                    ; preds = %.preheader463.preheader, %.preheader463.loopexit
  %co147 = phi i5 [ %co_148, %.preheader463.loopexit ], [ 0, %.preheader463.preheader ]
  %co148_cast306_cast = zext i5 %co147 to i9
  %exitcond115 = icmp eq i5 %co147, -8
  %empty_618 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_148 = add i5 %co147, 1
  br i1 %exitcond115, label %.preheader460.preheader, label %.preheader462.preheader

.preheader460.preheader:                          ; preds = %.preheader463
  br label %.preheader460

.preheader462.preheader:                          ; preds = %.preheader463
  %tmp_1437 = trunc i5 %co147 to i1
  %p_shl172 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1437, i5 0)
  %p_shl172_cast = zext i6 %p_shl172 to i7
  %p_shl173 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1437, i3 0)
  %p_shl173_cast = zext i4 %p_shl173 to i7
  %tmp_627 = sub i7 %p_shl172_cast, %p_shl173_cast
  %p_lshr_f17_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co147, i32 1, i32 4)
  %tmp_865_cast = zext i4 %p_lshr_f17_cast to i7
  br label %.preheader462

.preheader462.loopexit:                           ; preds = %.preheader461
  br label %.preheader462

.preheader462:                                    ; preds = %.preheader462.loopexit, %.preheader462.preheader
  %ci60 = phi i5 [ 0, %.preheader462.preheader ], [ %ci_61, %.preheader462.loopexit ]
  %ci60_cast = zext i5 %ci60 to i7
  %exitcond114 = icmp eq i5 %ci60, -8
  %empty_619 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_61 = add i5 %ci60, 1
  br i1 %exitcond114, label %.preheader463.loopexit, label %.preheader461.preheader

.preheader461.preheader:                          ; preds = %.preheader462
  %tmp_631_cast = zext i5 %ci60 to i18
  %tmp_632 = add i7 %tmp_627, %ci60_cast
  %tmp_633_cast1 = sext i7 %tmp_632 to i13
  br label %.preheader461

.preheader461:                                    ; preds = %158, %.preheader461.preheader
  %i130 = phi i3 [ %i_131, %158 ], [ 0, %.preheader461.preheader ]
  %exitcond113 = icmp eq i3 %i130, -4
  %empty_620 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_131 = add i3 %i130, 1
  br i1 %exitcond113, label %.preheader462.loopexit, label %158

; <label>:158                                     ; preds = %.preheader461
  %tmp_1450 = trunc i3 %i130 to i2
  %p_shl176 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1450, i5 0)
  %p_shl176_cast = zext i7 %p_shl176 to i8
  %p_shl177 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1450, i3 0)
  %p_shl177_cast = zext i5 %p_shl177 to i8
  %tmp_642 = sub i8 %p_shl176_cast, %p_shl177_cast
  %tmp_880_cast_cast = sext i8 %tmp_642 to i9
  %tmp57 = add i9 -200, %tmp_880_cast_cast
  %tmp_645 = add i9 %tmp57, %co148_cast306_cast
  %tmp_1451 = call i14 @_ssdm_op_BitConcatenate.i14.i9.i5(i9 %tmp_645, i5 0)
  %tmp_1452 = sext i14 %tmp_1451 to i16
  %p_shl565_cast = zext i16 %tmp_1452 to i17
  %tmp_1453 = call i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9 %tmp_645, i3 0)
  %tmp_1454 = sext i12 %tmp_1453 to i14
  %p_shl566_cast = zext i14 %tmp_1454 to i17
  %tmp_1455 = sub i17 %p_shl565_cast, %p_shl566_cast
  %tmp_1840_cast = sext i17 %tmp_1455 to i18
  %tmp_1456 = add i18 %tmp_631_cast, %tmp_1840_cast
  %tmp_1841_cast = sext i18 %tmp_1456 to i64
  %shuffle_conv_1x1_add_26 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1841_cast
  %shuffle_conv_1x1_loa_26 = load float* %shuffle_conv_1x1_add_26, align 4
  %p_shl178 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1450, i4 0)
  %p_shl178_cast = zext i6 %p_shl178 to i7
  %p_shl179 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1450, i2 0)
  %p_shl179_cast = zext i4 %p_shl179 to i7
  %tmp_646 = sub i7 %p_shl178_cast, %p_shl179_cast
  %tmp_647 = add i7 %tmp_646, %tmp_865_cast
  %tmp_1457 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_647, i6 0)
  %tmp_1458 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_647, i4 0)
  %p_shl564_cast = sext i11 %tmp_1458 to i13
  %tmp_1459 = sub i13 %tmp_1457, %p_shl564_cast
  %tmp_1460 = add i13 %tmp_633_cast1, %tmp_1459
  %tmp_1849_cast = sext i13 %tmp_1460 to i64
  %weights_48_48_1x1_ad_17 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1849_cast
  store float %shuffle_conv_1x1_loa_26, float* %weights_48_48_1x1_ad_17, align 4
  br label %.preheader461

.preheader460.loopexit:                           ; preds = %.preheader459
  br label %.preheader460

.preheader460:                                    ; preds = %.preheader460.preheader, %.preheader460.loopexit
  %i128 = phi i5 [ %i_129, %.preheader460.loopexit ], [ 0, %.preheader460.preheader ]
  %i129_cast = zext i5 %i128 to i7
  %i129_cast296_cast = zext i5 %i128 to i10
  %exitcond112 = icmp eq i5 %i128, -8
  %empty_621 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_129 = add i5 %i128, 1
  br i1 %exitcond112, label %160, label %.preheader459.preheader

.preheader459.preheader:                          ; preds = %.preheader460
  br label %.preheader459

.preheader459:                                    ; preds = %.preheader459.preheader, %159
  %k44 = phi i2 [ %k_45, %159 ], [ 0, %.preheader459.preheader ]
  %exitcond111 = icmp eq i2 %k44, -2
  %empty_622 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_45 = add i2 %k44, 1
  br i1 %exitcond111, label %.preheader460.loopexit, label %159

; <label>:159                                     ; preds = %.preheader459
  %tmp_1449 = trunc i2 %k44 to i1
  %p_shl174 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1449, i5 0)
  %p_shl174_cast = zext i6 %p_shl174 to i7
  %p_shl175 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1449, i3 0)
  %p_shl175_cast = zext i4 %p_shl175 to i7
  %tmp_635 = sub i7 %p_shl174_cast, %p_shl175_cast
  %tmp_869_cast_cast = sext i7 %tmp_635 to i10
  %tmp58 = add i10 -440, %tmp_869_cast_cast
  %tmp_636 = add i10 %i129_cast296_cast, %tmp58
  %tmp_871_cast = sext i10 %tmp_636 to i11
  %tmp_637 = zext i11 %tmp_871_cast to i64
  %bias_addr_43 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_637
  %bias_load_43 = load float* %bias_addr_43, align 4
  %tmp_639 = add i7 %tmp_635, %i129_cast
  %tmp_873_cast = sext i7 %tmp_639 to i32
  %tmp_640 = zext i32 %tmp_873_cast to i64
  %bias_48_addr_26 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_640
  store float %bias_load_43, float* %bias_48_addr_26, align 4
  br label %.preheader459

; <label>:160                                     ; preds = %.preheader460
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit848

.loopexit848.loopexit:                            ; preds = %.preheader458
  br label %.loopexit848

.loopexit848:                                     ; preds = %.loopexit848.loopexit, %160
  %co149 = phi i5 [ 0, %160 ], [ %co_150, %.loopexit848.loopexit ]
  %co151_cast = zext i5 %co149 to i7
  %co151_cast1 = zext i5 %co149 to i10
  %exitcond110 = icmp eq i5 %co149, -8
  %empty_623 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_150 = add i5 %co149, 1
  br i1 %exitcond110, label %.preheader455.preheader, label %.preheader458.preheader

.preheader458.preheader:                          ; preds = %.loopexit848
  br label %.preheader458

.preheader455.preheader:                          ; preds = %.loopexit848
  br label %.preheader455

.preheader458.loopexit:                           ; preds = %.preheader457
  br label %.preheader458

.preheader458:                                    ; preds = %.preheader458.preheader, %.preheader458.loopexit
  %w107 = phi i2 [ %w_108, %.preheader458.loopexit ], [ 0, %.preheader458.preheader ]
  %exitcond109 = icmp eq i2 %w107, -1
  %empty_624 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_108 = add i2 %w107, 1
  br i1 %exitcond109, label %.loopexit848.loopexit, label %.preheader457.preheader

.preheader457.preheader:                          ; preds = %.preheader458
  %tmp_648_cast1 = zext i2 %w107 to i36
  %tmp_648_cast = zext i2 %w107 to i13
  br label %.preheader457

.preheader457.loopexit:                           ; preds = %.preheader456
  br label %.preheader457

.preheader457:                                    ; preds = %.preheader457.loopexit, %.preheader457.preheader
  %h108 = phi i2 [ 0, %.preheader457.preheader ], [ %h_109, %.preheader457.loopexit ]
  %exitcond108 = icmp eq i2 %h108, -1
  %empty_625 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_109 = add i2 %h108, 1
  br i1 %exitcond108, label %.preheader458.loopexit, label %.preheader456.preheader

.preheader456.preheader:                          ; preds = %.preheader457
  %tmp_655_cast1 = zext i2 %h108 to i10
  %tmp_655_cast2 = zext i2 %h108 to i15
  br label %.preheader456

.preheader456:                                    ; preds = %161, %.preheader456.preheader
  %i136 = phi i2 [ %i_137, %161 ], [ 0, %.preheader456.preheader ]
  %exitcond107 = icmp eq i2 %i136, -2
  %empty_626 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %i_137 = add i2 %i136, 1
  br i1 %exitcond107, label %.preheader457.loopexit, label %161

; <label>:161                                     ; preds = %.preheader456
  %tmp_1463 = trunc i2 %i136 to i1
  %p_shl186 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1463, i5 0)
  %p_shl186_cast = zext i6 %p_shl186 to i7
  %p_shl187 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1463, i3 0)
  %p_shl187_cast = zext i4 %p_shl187 to i7
  %tmp_659 = sub i7 %p_shl186_cast, %p_shl187_cast
  %tmp_906_cast = sext i7 %tmp_659 to i10
  %tmp59 = add i10 -472, %tmp_906_cast
  %tmp_661 = add i10 %co151_cast1, %tmp59
  %tmp_662_cast = zext i10 %tmp_661 to i13
  %tmp_1464 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_661, i2 0)
  %p_shl570_cast = zext i12 %tmp_1464 to i13
  %tmp_1465 = sub i13 %p_shl570_cast, %tmp_662_cast
  %tmp_1466 = add i13 %tmp_1465, %tmp_648_cast
  %tmp_1858_cast = sext i13 %tmp_1466 to i15
  %p_shl569_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1466, i2 0)
  %tmp_1467 = sub i15 %p_shl569_cast, %tmp_1858_cast
  %tmp_1468 = add i15 %tmp_1467, %tmp_655_cast2
  %tmp_1861_cast = zext i15 %tmp_1468 to i64
  %shuffle_conv_3x3_add_14 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1861_cast
  %shuffle_conv_3x3_loa_14 = load float* %shuffle_conv_3x3_add_14, align 4
  %tmp_664 = add i7 %tmp_659, %co151_cast
  %tmp_910_cast = sext i7 %tmp_664 to i32
  %tmp_665_cast = zext i32 %tmp_910_cast to i35
  %tmp_1469 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_664, i2 0)
  %tmp_1470 = sext i9 %tmp_1469 to i34
  %p_shl568_cast = zext i34 %tmp_1470 to i35
  %tmp_1471 = sub i35 %p_shl568_cast, %tmp_665_cast
  %tmp_1864_cast = sext i35 %tmp_1471 to i36
  %tmp_1472 = add i36 %tmp_1864_cast, %tmp_648_cast1
  %tmp_1473 = trunc i36 %tmp_1472 to i10
  %tmp_1474 = trunc i36 %tmp_1472 to i8
  %p_shl567_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_1474, i2 0)
  %tmp_1475 = sub i10 %p_shl567_cast, %tmp_1473
  %tmp_1476 = add i10 %tmp_1475, %tmp_655_cast1
  %tmp_1868_cast = zext i10 %tmp_1476 to i64
  %weights_48_1_3x3_add_9 = getelementptr [432 x float]* @weights_48_1_3x3, i64 0, i64 %tmp_1868_cast
  store float %shuffle_conv_3x3_loa_14, float* %weights_48_1_3x3_add_9, align 4
  br label %.preheader456

.preheader455.loopexit:                           ; preds = %.preheader454
  br label %.preheader455

.preheader455:                                    ; preds = %.preheader455.preheader, %.preheader455.loopexit
  %i132 = phi i5 [ %i_133, %.preheader455.loopexit ], [ 0, %.preheader455.preheader ]
  %i133_cast = zext i5 %i132 to i7
  %i133_cast286_cast = zext i5 %i132 to i10
  %exitcond106 = icmp eq i5 %i132, -8
  %empty_627 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_133 = add i5 %i132, 1
  br i1 %exitcond106, label %163, label %.preheader454.preheader

.preheader454.preheader:                          ; preds = %.preheader455
  br label %.preheader454

.preheader454:                                    ; preds = %.preheader454.preheader, %162
  %k46 = phi i2 [ %k_47, %162 ], [ 0, %.preheader454.preheader ]
  %exitcond105 = icmp eq i2 %k46, -2
  %empty_628 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_47 = add i2 %k46, 1
  br i1 %exitcond105, label %.preheader455.loopexit, label %162

; <label>:162                                     ; preds = %.preheader454
  %tmp_1462 = trunc i2 %k46 to i1
  %p_shl180 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1462, i5 0)
  %p_shl180_cast = zext i6 %p_shl180 to i7
  %p_shl181 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1462, i3 0)
  %p_shl181_cast = zext i4 %p_shl181 to i7
  %tmp_650 = sub i7 %p_shl180_cast, %p_shl181_cast
  %tmp_887_cast_cast = sext i7 %tmp_650 to i10
  %tmp60 = add i10 -392, %tmp_887_cast_cast
  %tmp_651 = add i10 %i133_cast286_cast, %tmp60
  %tmp_889_cast = sext i10 %tmp_651 to i11
  %tmp_652 = zext i11 %tmp_889_cast to i64
  %bias_addr_44 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_652
  %bias_load_44 = load float* %bias_addr_44, align 4
  %tmp_653 = add i7 %tmp_650, %i133_cast
  %tmp_891_cast = sext i7 %tmp_653 to i32
  %tmp_654 = zext i32 %tmp_891_cast to i64
  %bias_48_addr_27 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_654
  store float %bias_load_44, float* %bias_48_addr_27, align 4
  br label %.preheader454

; <label>:163                                     ; preds = %.preheader455
  call fastcc void @subconv_3x3_8_no_rel([4800 x float]* @buffer1_1_48_8x8_p, [432 x float]* @weights_48_1_3x3, [48 x float]* @bias_48, [4800 x float]* @buffer0_1_48_8x8_p) nounwind
  br label %.loopexit847

.loopexit847.loopexit:                            ; preds = %.preheader453
  br label %.loopexit847

.loopexit847:                                     ; preds = %.loopexit847.loopexit, %163
  %co151 = phi i5 [ 0, %163 ], [ %co_152, %.loopexit847.loopexit ]
  %co153_cast = zext i5 %co151 to i12
  %exitcond104 = icmp eq i5 %co151, -8
  %empty_629 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_152 = add i5 %co151, 1
  br i1 %exitcond104, label %.preheader451.preheader, label %.preheader453.preheader

.preheader451.preheader:                          ; preds = %.loopexit847
  br label %.preheader451

.preheader453.preheader:                          ; preds = %.loopexit847
  %tmp_1461 = trunc i5 %co151 to i1
  %p_shl182 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1461, i5 0)
  %p_shl182_cast = zext i6 %p_shl182 to i7
  %p_shl183 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1461, i3 0)
  %p_shl183_cast = zext i4 %p_shl183 to i7
  %tmp_649 = sub i7 %p_shl182_cast, %p_shl183_cast
  %p_lshr_f18_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co151, i32 1, i32 4)
  %tmp_895_cast = zext i4 %p_lshr_f18_cast to i7
  br label %.preheader453

.preheader453.loopexit:                           ; preds = %.preheader452
  br label %.preheader453

.preheader453:                                    ; preds = %.preheader453.loopexit, %.preheader453.preheader
  %ci62 = phi i5 [ 0, %.preheader453.preheader ], [ %ci_63, %.preheader453.loopexit ]
  %ci62_cast = zext i5 %ci62 to i7
  %exitcond103 = icmp eq i5 %ci62, -8
  %empty_630 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_63 = add i5 %ci62, 1
  br i1 %exitcond103, label %.loopexit847.loopexit, label %.preheader452.preheader

.preheader452.preheader:                          ; preds = %.preheader453
  %tmp_656_cast = zext i5 %ci62 to i19
  %tmp_657 = add i7 %tmp_649, %ci62_cast
  %tmp_658_cast = sext i7 %tmp_657 to i13
  br label %.preheader452

.preheader452:                                    ; preds = %164, %.preheader452.preheader
  %i138 = phi i3 [ %i_139, %164 ], [ 0, %.preheader452.preheader ]
  %exitcond102 = icmp eq i3 %i138, -4
  %empty_631 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_139 = add i3 %i138, 1
  br i1 %exitcond102, label %.preheader453.loopexit, label %164

; <label>:164                                     ; preds = %.preheader452
  %tmp_1481 = trunc i3 %i138 to i2
  %p_shl188 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1481, i5 0)
  %p_shl188_cast = zext i7 %p_shl188 to i8
  %p_shl189 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1481, i3 0)
  %p_shl189_cast = zext i5 %p_shl189 to i8
  %tmp_671 = sub i8 %p_shl188_cast, %p_shl189_cast
  %tmp_913_cast_cast = sext i8 %tmp_671 to i9
  %tmp61 = add i9 -104, %tmp_913_cast_cast
  %tmp61_cast1 = sext i9 %tmp61 to i11
  %tmp61_cast = zext i11 %tmp61_cast1 to i12
  %tmp_672 = add i12 %tmp61_cast, %co153_cast
  %tmp_1482 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_672, i5 0)
  %p_shl573_cast = zext i17 %tmp_1482 to i18
  %tmp_1483 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_672, i3 0)
  %p_shl574_cast = zext i15 %tmp_1483 to i18
  %tmp_1484 = sub i18 %p_shl573_cast, %p_shl574_cast
  %tmp_1878_cast = sext i18 %tmp_1484 to i19
  %tmp_1485 = add i19 %tmp_656_cast, %tmp_1878_cast
  %tmp_1879_cast = sext i19 %tmp_1485 to i64
  %shuffle_conv_1x1_add_27 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1879_cast
  %shuffle_conv_1x1_loa_27 = load float* %shuffle_conv_1x1_add_27, align 4
  %p_shl190 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_1481, i4 0)
  %p_shl190_cast = zext i6 %p_shl190 to i7
  %p_shl191 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_1481, i2 0)
  %p_shl191_cast = zext i4 %p_shl191 to i7
  %tmp_673 = sub i7 %p_shl190_cast, %p_shl191_cast
  %tmp_674 = add i7 %tmp_673, %tmp_895_cast
  %tmp_1486 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_674, i6 0)
  %tmp_1487 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_674, i4 0)
  %p_shl572_cast = sext i11 %tmp_1487 to i13
  %tmp_1488 = sub i13 %tmp_1486, %p_shl572_cast
  %tmp_1489 = add i13 %tmp_658_cast, %tmp_1488
  %tmp_1887_cast = sext i13 %tmp_1489 to i64
  %weights_48_48_1x1_ad_18 = getelementptr [2304 x float]* @weights_48_48_1x1, i64 0, i64 %tmp_1887_cast
  store float %shuffle_conv_1x1_loa_27, float* %weights_48_48_1x1_ad_18, align 4
  br label %.preheader452

.preheader451.loopexit:                           ; preds = %.preheader450
  br label %.preheader451

.preheader451:                                    ; preds = %.preheader451.preheader, %.preheader451.loopexit
  %i134 = phi i5 [ %i_135, %.preheader451.loopexit ], [ 0, %.preheader451.preheader ]
  %i135_cast = zext i5 %i134 to i7
  %i135_cast273_cast = zext i5 %i134 to i10
  %exitcond101 = icmp eq i5 %i134, -8
  %empty_632 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_135 = add i5 %i134, 1
  br i1 %exitcond101, label %166, label %.preheader450.preheader

.preheader450.preheader:                          ; preds = %.preheader451
  br label %.preheader450

.preheader450:                                    ; preds = %.preheader450.preheader, %165
  %k48 = phi i2 [ %k_49, %165 ], [ 0, %.preheader450.preheader ]
  %exitcond100 = icmp eq i2 %k48, -2
  %empty_633 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_49 = add i2 %k48, 1
  br i1 %exitcond100, label %.preheader451.loopexit, label %165

; <label>:165                                     ; preds = %.preheader450
  %tmp_1480 = trunc i2 %k48 to i1
  %p_shl184 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_1480, i5 0)
  %p_shl184_cast = zext i6 %p_shl184 to i7
  %p_shl185 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_1480, i3 0)
  %p_shl185_cast = zext i4 %p_shl185 to i7
  %tmp_666 = sub i7 %p_shl184_cast, %p_shl185_cast
  %tmp_897_cast_cast = sext i7 %tmp_666 to i10
  %tmp62 = add i10 -344, %tmp_897_cast_cast
  %tmp_667 = add i10 %i135_cast273_cast, %tmp62
  %tmp_899_cast = sext i10 %tmp_667 to i11
  %tmp_668 = zext i11 %tmp_899_cast to i64
  %bias_addr_45 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_668
  %bias_load_45 = load float* %bias_addr_45, align 4
  %tmp_669 = add i7 %tmp_666, %i135_cast
  %tmp_901_cast = sext i7 %tmp_669 to i32
  %tmp_670 = zext i32 %tmp_901_cast to i64
  %bias_48_addr_28 = getelementptr inbounds [48 x float]* @bias_48, i64 0, i64 %tmp_670
  store float %bias_load_45, float* %bias_48_addr_28, align 4
  br label %.preheader450

; <label>:166                                     ; preds = %.preheader451
  call fastcc void @subconv_1x1_8_p([4800 x float]* @buffer0_1_48_8x8_p, [2304 x float]* @weights_48_48_1x1, [48 x float]* @bias_48, [4800 x float]* @buffer1_1_48_8x8_p) nounwind
  br label %.loopexit846

.loopexit846.loopexit:                            ; preds = %.preheader449
  br label %.loopexit846

.loopexit846:                                     ; preds = %.loopexit846.loopexit, %166
  %co153 = phi i6 [ 0, %166 ], [ %co_154, %.loopexit846.loopexit ]
  %exitcond99 = icmp eq i6 %co153, -16
  %empty_634 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) nounwind
  %co_154 = add i6 %co153, 1
  br i1 %exitcond99, label %168, label %.preheader449.preheader

.preheader449.preheader:                          ; preds = %.loopexit846
  %tmp_1477 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co153, i3 0)
  %p_shl575_cast = zext i9 %tmp_1477 to i10
  %tmp_1478 = call i7 @_ssdm_op_BitConcatenate.i7.i6.i1(i6 %co153, i1 false)
  %p_shl576_cast = zext i7 %tmp_1478 to i10
  %tmp_1479 = add i10 %p_shl576_cast, %p_shl575_cast
  br label %.preheader449

.preheader449.loopexit:                           ; preds = %.preheader448
  br label %.preheader449

.preheader449:                                    ; preds = %.preheader449.loopexit, %.preheader449.preheader
  %h110 = phi i4 [ 0, %.preheader449.preheader ], [ %h_111, %.preheader449.loopexit ]
  %exitcond98 = icmp eq i4 %h110, -8
  %empty_635 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %h_111 = add i4 %h110, 1
  br i1 %exitcond98, label %.loopexit846.loopexit, label %.preheader448.preheader

.preheader448.preheader:                          ; preds = %.preheader449
  %tmp_676_cast = zext i4 %h_111 to i10
  %tmp_1492 = add i10 %tmp_676_cast, %tmp_1479
  %tmp_1493 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1492, i3 0)
  %p_shl577_cast = zext i13 %tmp_1493 to i15
  %tmp_1494 = call i11 @_ssdm_op_BitConcatenate.i11.i10.i1(i10 %tmp_1492, i1 false)
  %p_shl578_cast = zext i11 %tmp_1494 to i15
  %tmp_1495 = add i15 %p_shl577_cast, %p_shl578_cast
  br label %.preheader448

.preheader448:                                    ; preds = %167, %.preheader448.preheader
  %w109 = phi i4 [ %w_110, %167 ], [ 0, %.preheader448.preheader ]
  %exitcond97 = icmp eq i4 %w109, -8
  %empty_636 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %w_110 = add i4 %w109, 1
  br i1 %exitcond97, label %.preheader449.loopexit, label %167

; <label>:167                                     ; preds = %.preheader448
  %tmp_681_cast = zext i4 %w_110 to i15
  %tmp_1496 = add i15 %tmp_1495, %tmp_681_cast
  %tmp_1894_cast = zext i15 %tmp_1496 to i64
  %buffer0_1_48_8x8_p_a_15 = getelementptr [4800 x float]* @buffer0_1_48_8x8_p, i64 0, i64 %tmp_1894_cast
  %shuffleunit1_6_outpu_2 = getelementptr [9600 x float]* @shuffleunit1_6_outpu, i64 0, i64 %tmp_1894_cast
  %shuffleunit1_6_outpu_3 = load float* %shuffleunit1_6_outpu_2, align 4
  store float %shuffleunit1_6_outpu_3, float* %buffer0_1_48_8x8_p_a_15, align 4
  br label %.preheader448

; <label>:168                                     ; preds = %.loopexit846
  call fastcc void @shuffle_48_p([4800 x float]* @buffer0_1_48_8x8_p, [9600 x float]* @shuffleunit1_7_outpu) nounwind
  br label %.loopexit845

.loopexit845.loopexit:                            ; preds = %.preheader447
  br label %.loopexit845

.loopexit845:                                     ; preds = %.loopexit845.loopexit, %168
  %co155 = phi i5 [ 0, %168 ], [ %co_156, %.loopexit845.loopexit ]
  %co156_cast = zext i5 %co155 to i12
  %exitcond96 = icmp eq i5 %co155, -8
  %empty_637 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_156 = add i5 %co155, 1
  br i1 %exitcond96, label %.preheader445.preheader, label %.preheader447.preheader

.preheader445.preheader:                          ; preds = %.loopexit845
  br label %.preheader445

.preheader447.preheader:                          ; preds = %.loopexit845
  %tmp_1490 = trunc i5 %co155 to i2
  %p_shl192 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1490, i5 0)
  %p_shl192_cast = zext i7 %p_shl192 to i8
  %tmp_1491 = shl i5 %co155, 3
  %p_shl193_cast = zext i5 %tmp_1491 to i8
  %tmp_675 = sub i8 %p_shl192_cast, %p_shl193_cast
  %p_lshr_f19_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co155, i32 2, i32 4)
  %tmp_921_cast = zext i3 %p_lshr_f19_cast to i8
  br label %.preheader447

.preheader447.loopexit:                           ; preds = %.preheader446
  br label %.preheader447

.preheader447:                                    ; preds = %.preheader447.loopexit, %.preheader447.preheader
  %ci64 = phi i5 [ 0, %.preheader447.preheader ], [ %ci_65, %.preheader447.loopexit ]
  %ci64_cast = zext i5 %ci64 to i8
  %exitcond95 = icmp eq i5 %ci64, -8
  %empty_638 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_65 = add i5 %ci64, 1
  br i1 %exitcond95, label %.loopexit845.loopexit, label %.preheader446.preheader

.preheader446.preheader:                          ; preds = %.preheader447
  %tmp_677_cast = zext i5 %ci64 to i19
  %tmp_678 = add i8 %tmp_675, %ci64_cast
  %tmp_679_cast = sext i8 %tmp_678 to i15
  br label %.preheader446

.preheader446:                                    ; preds = %169, %.preheader446.preheader
  %i142 = phi i5 [ %i_143, %169 ], [ 0, %.preheader446.preheader ]
  %exitcond94 = icmp eq i5 %i142, -16
  %empty_639 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %i_143 = add i5 %i142, 1
  br i1 %exitcond94, label %.preheader447.loopexit, label %169

; <label>:169                                     ; preds = %.preheader446
  %tmp_1498 = trunc i5 %i142 to i4
  %p_shl195 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1498, i5 0)
  %p_shl196_cast = zext i9 %p_shl195 to i10
  %p_shl196 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1498, i3 0)
  %p_shl197_cast1 = zext i7 %p_shl196 to i8
  %p_shl197_cast = zext i7 %p_shl196 to i10
  %tmp_687 = sub i10 %p_shl196_cast, %p_shl197_cast
  %tmp_935_cast = sext i10 %tmp_687 to i12
  %tmp63 = add i12 2040, %tmp_935_cast
  %tmp_689 = add i12 %tmp63, %co156_cast
  %tmp_1499 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_689, i5 0)
  %p_shl581_cast = zext i17 %tmp_1499 to i18
  %tmp_1500 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_689, i3 0)
  %p_shl582_cast = zext i15 %tmp_1500 to i18
  %tmp_1501 = sub i18 %p_shl581_cast, %p_shl582_cast
  %tmp_1901_cast = sext i18 %tmp_1501 to i19
  %tmp_1502 = add i19 %tmp_677_cast, %tmp_1901_cast
  %tmp_1902_cast = sext i19 %tmp_1502 to i64
  %shuffle_conv_1x1_add_28 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1902_cast
  %shuffle_conv_1x1_loa_28 = load float* %shuffle_conv_1x1_add_28, align 4
  %tmp_1503 = shl i5 %i142, 1
  %p_shl198_cast = zext i5 %tmp_1503 to i8
  %tmp_690 = sub i8 %p_shl197_cast1, %p_shl198_cast
  %tmp_692 = add i8 %tmp_690, %tmp_921_cast
  %tmp_1504 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_692, i7 0)
  %tmp_1505 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_692, i5 0)
  %p_shl580_cast = sext i13 %tmp_1505 to i15
  %tmp_1506 = sub i15 %tmp_1504, %p_shl580_cast
  %tmp_1507 = add i15 %tmp_679_cast, %tmp_1506
  %tmp_1909_cast = sext i15 %tmp_1507 to i64
  %weights_96_96_1x1_ad = getelementptr [9216 x float]* @weights_96_96_1x1, i64 0, i64 %tmp_1909_cast
  store float %shuffle_conv_1x1_loa_28, float* %weights_96_96_1x1_ad, align 4
  br label %.preheader446

.preheader445.loopexit:                           ; preds = %.preheader444
  br label %.preheader445

.preheader445:                                    ; preds = %.preheader445.preheader, %.preheader445.loopexit
  %i140 = phi i5 [ %i_141, %.preheader445.loopexit ], [ 0, %.preheader445.preheader ]
  %i141_cast = zext i5 %i140 to i8
  %i141_cast259_cast = zext i5 %i140 to i10
  %exitcond93 = icmp eq i5 %i140, -8
  %empty_640 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_141 = add i5 %i140, 1
  br i1 %exitcond93, label %171, label %.preheader444.preheader

.preheader444.preheader:                          ; preds = %.preheader445
  br label %.preheader444

.preheader444:                                    ; preds = %.preheader444.preheader, %170
  %k50 = phi i3 [ %k_51, %170 ], [ 0, %.preheader444.preheader ]
  %exitcond92 = icmp eq i3 %k50, -4
  %empty_641 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_51 = add i3 %k50, 1
  br i1 %exitcond92, label %.preheader445.loopexit, label %170

; <label>:170                                     ; preds = %.preheader444
  %tmp_1497 = trunc i3 %k50 to i2
  %p_shl193 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1497, i5 0)
  %p_shl194_cast = zext i7 %p_shl193 to i8
  %p_shl194 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1497, i3 0)
  %p_shl195_cast = zext i5 %p_shl194 to i8
  %tmp_682 = sub i8 %p_shl194_cast, %p_shl195_cast
  %tmp_924_cast_cast = sext i8 %tmp_682 to i10
  %tmp64 = add i10 -296, %tmp_924_cast_cast
  %tmp_683 = add i10 %i141_cast259_cast, %tmp64
  %tmp_926_cast = sext i10 %tmp_683 to i11
  %tmp_684 = zext i11 %tmp_926_cast to i64
  %bias_addr_46 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_684
  %bias_load_46 = load float* %bias_addr_46, align 4
  %tmp_685 = add i8 %tmp_682, %i141_cast
  %tmp_928_cast = sext i8 %tmp_685 to i32
  %tmp_686 = zext i32 %tmp_928_cast to i64
  %bias_96_addr = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_686
  store float %bias_load_46, float* %bias_96_addr, align 4
  br label %.preheader444

; <label>:171                                     ; preds = %.preheader445
  call fastcc void @subconv_1x1_8p_p([9216 x float]* @weights_96_96_1x1, [96 x float]* @bias_96) nounwind
  br label %.loopexit844

.loopexit844.loopexit:                            ; preds = %.preheader443
  br label %.loopexit844

.loopexit844:                                     ; preds = %.loopexit844.loopexit, %171
  %co157 = phi i5 [ 0, %171 ], [ %co_158, %.loopexit844.loopexit ]
  %co159_cast = zext i5 %co157 to i8
  %co159_cast1 = zext i5 %co157 to i10
  %exitcond91 = icmp eq i5 %co157, -8
  %empty_642 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_158 = add i5 %co157, 1
  br i1 %exitcond91, label %.preheader440.preheader, label %.preheader443.preheader

.preheader443.preheader:                          ; preds = %.loopexit844
  br label %.preheader443

.preheader440.preheader:                          ; preds = %.loopexit844
  br label %.preheader440

.preheader443.loopexit:                           ; preds = %.preheader442
  br label %.preheader443

.preheader443:                                    ; preds = %.preheader443.preheader, %.preheader443.loopexit
  %w111 = phi i2 [ %w_112, %.preheader443.loopexit ], [ 0, %.preheader443.preheader ]
  %exitcond90 = icmp eq i2 %w111, -1
  %empty_643 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_112 = add i2 %w111, 1
  br i1 %exitcond90, label %.loopexit844.loopexit, label %.preheader442.preheader

.preheader442.preheader:                          ; preds = %.preheader443
  %tmp_695_cast1 = zext i2 %w111 to i36
  %tmp_695_cast = zext i2 %w111 to i13
  br label %.preheader442

.preheader442.loopexit:                           ; preds = %.preheader441
  br label %.preheader442

.preheader442:                                    ; preds = %.preheader442.loopexit, %.preheader442.preheader
  %h112 = phi i2 [ 0, %.preheader442.preheader ], [ %h_113, %.preheader442.loopexit ]
  %exitcond89 = icmp eq i2 %h112, -1
  %empty_644 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_113 = add i2 %h112, 1
  br i1 %exitcond89, label %.preheader443.loopexit, label %.preheader441.preheader

.preheader441.preheader:                          ; preds = %.preheader442
  %tmp_702_cast1 = zext i2 %h112 to i11
  %tmp_702_cast = zext i2 %h112 to i15
  br label %.preheader441

.preheader441:                                    ; preds = %172, %.preheader441.preheader
  %i148 = phi i3 [ %i_149, %172 ], [ 0, %.preheader441.preheader ]
  %exitcond88 = icmp eq i3 %i148, -4
  %empty_645 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_149 = add i3 %i148, 1
  br i1 %exitcond88, label %.preheader442.loopexit, label %172

; <label>:172                                     ; preds = %.preheader441
  %tmp_1511 = trunc i3 %i148 to i2
  %p_shl200 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1511, i5 0)
  %p_shl205_cast = zext i7 %p_shl200 to i8
  %p_shl201 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1511, i3 0)
  %p_shl206_cast = zext i5 %p_shl201 to i8
  %tmp_706 = sub i8 %p_shl205_cast, %p_shl206_cast
  %tmp_961_cast = sext i8 %tmp_706 to i10
  %tmp65 = add i10 -424, %tmp_961_cast
  %tmp_707 = add i10 %co159_cast1, %tmp65
  %tmp_708_cast = zext i10 %tmp_707 to i13
  %tmp_1512 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_707, i2 0)
  %p_shl586_cast = zext i12 %tmp_1512 to i13
  %tmp_1513 = sub i13 %p_shl586_cast, %tmp_708_cast
  %tmp_1514 = add i13 %tmp_1513, %tmp_695_cast
  %tmp_1918_cast = sext i13 %tmp_1514 to i15
  %p_shl585_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1514, i2 0)
  %tmp_1515 = sub i15 %p_shl585_cast, %tmp_1918_cast
  %tmp_1516 = add i15 %tmp_1515, %tmp_702_cast
  %tmp_1921_cast = zext i15 %tmp_1516 to i64
  %shuffle_conv_3x3_add_15 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1921_cast
  %shuffle_conv_3x3_loa_15 = load float* %shuffle_conv_3x3_add_15, align 4
  %tmp_709 = add i8 %tmp_706, %co159_cast
  %tmp_965_cast = sext i8 %tmp_709 to i32
  %tmp_711_cast1 = zext i32 %tmp_965_cast to i35
  %tmp_1517 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_709, i2 0)
  %tmp_1518 = sext i10 %tmp_1517 to i34
  %p_shl584_cast = zext i34 %tmp_1518 to i35
  %tmp_1519 = sub i35 %p_shl584_cast, %tmp_711_cast1
  %tmp_1924_cast = sext i35 %tmp_1519 to i36
  %tmp_1520 = add i36 %tmp_1924_cast, %tmp_695_cast1
  %tmp_1521 = trunc i36 %tmp_1520 to i11
  %tmp_1522 = trunc i36 %tmp_1520 to i9
  %p_shl583_cast = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_1522, i2 0)
  %tmp_1523 = sub i11 %p_shl583_cast, %tmp_1521
  %tmp_1524 = add i11 %tmp_1523, %tmp_702_cast1
  %tmp_1928_cast = zext i11 %tmp_1524 to i64
  %weights_96_1_3x3_add = getelementptr [864 x float]* @weights_96_1_3x3, i64 0, i64 %tmp_1928_cast
  store float %shuffle_conv_3x3_loa_15, float* %weights_96_1_3x3_add, align 4
  br label %.preheader441

.preheader440.loopexit:                           ; preds = %.preheader439
  br label %.preheader440

.preheader440:                                    ; preds = %.preheader440.preheader, %.preheader440.loopexit
  %i144 = phi i5 [ %i_145, %.preheader440.loopexit ], [ 0, %.preheader440.preheader ]
  %i145_cast = zext i5 %i144 to i8
  %i145_cast249_cast = zext i5 %i144 to i9
  %exitcond87 = icmp eq i5 %i144, -8
  %empty_646 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_145 = add i5 %i144, 1
  br i1 %exitcond87, label %174, label %.preheader439.preheader

.preheader439.preheader:                          ; preds = %.preheader440
  br label %.preheader439

.preheader439:                                    ; preds = %.preheader439.preheader, %173
  %k52 = phi i3 [ %k_53, %173 ], [ 0, %.preheader439.preheader ]
  %exitcond86 = icmp eq i3 %k52, -4
  %empty_647 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_53 = add i3 %k52, 1
  br i1 %exitcond86, label %.preheader440.loopexit, label %173

; <label>:173                                     ; preds = %.preheader439
  %tmp_1510 = trunc i3 %k52 to i2
  %p_shl198 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1510, i5 0)
  %p_shl199_cast = zext i7 %p_shl198 to i8
  %p_shl199 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1510, i3 0)
  %p_shl200_cast = zext i5 %p_shl199 to i8
  %tmp_697 = sub i8 %p_shl199_cast, %p_shl200_cast
  %tmp_942_cast_cast = sext i8 %tmp_697 to i9
  %tmp66 = add i9 -200, %tmp_942_cast_cast
  %tmp_698 = add i9 %i145_cast249_cast, %tmp66
  %tmp_944_cast = sext i9 %tmp_698 to i11
  %tmp_699 = zext i11 %tmp_944_cast to i64
  %bias_addr_47 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_699
  %bias_load_47 = load float* %bias_addr_47, align 4
  %tmp_700 = add i8 %tmp_697, %i145_cast
  %tmp_946_cast = sext i8 %tmp_700 to i32
  %tmp_701 = zext i32 %tmp_946_cast to i64
  %bias_96_addr_1 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_701
  store float %bias_load_47, float* %bias_96_addr_1, align 4
  br label %.preheader439

; <label>:174                                     ; preds = %.preheader440
  call fastcc void @subconv_3x3_8_stride([9600 x float]* @ShuffleConvs_2_Downs, [864 x float]* @weights_96_1_3x3, [96 x float]* @bias_96, [3456 x float]* @buffer0_1_96_4x4_p) nounwind
  br label %.loopexit843

.loopexit843.loopexit:                            ; preds = %.preheader438
  br label %.loopexit843

.loopexit843:                                     ; preds = %.loopexit843.loopexit, %174
  %co159 = phi i5 [ 0, %174 ], [ %co_160, %.loopexit843.loopexit ]
  %co161_cast = zext i5 %co159 to i12
  %exitcond85 = icmp eq i5 %co159, -8
  %empty_648 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_160 = add i5 %co159, 1
  br i1 %exitcond85, label %.preheader436.preheader, label %.preheader438.preheader

.preheader436.preheader:                          ; preds = %.loopexit843
  br label %.preheader436

.preheader438.preheader:                          ; preds = %.loopexit843
  %tmp_1508 = trunc i5 %co159 to i2
  %p_shl197 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1508, i5 0)
  %p_shl201_cast = zext i7 %p_shl197 to i8
  %tmp_1509 = shl i5 %co159, 3
  %p_shl202_cast = zext i5 %tmp_1509 to i8
  %tmp_696 = sub i8 %p_shl201_cast, %p_shl202_cast
  %p_lshr_f20_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co159, i32 2, i32 4)
  %tmp_950_cast = zext i3 %p_lshr_f20_cast to i8
  br label %.preheader438

.preheader438.loopexit:                           ; preds = %.preheader437
  br label %.preheader438

.preheader438:                                    ; preds = %.preheader438.loopexit, %.preheader438.preheader
  %ci66 = phi i5 [ 0, %.preheader438.preheader ], [ %ci_67, %.preheader438.loopexit ]
  %ci66_cast = zext i5 %ci66 to i8
  %exitcond84 = icmp eq i5 %ci66, -8
  %empty_649 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_67 = add i5 %ci66, 1
  br i1 %exitcond84, label %.loopexit843.loopexit, label %.preheader437.preheader

.preheader437.preheader:                          ; preds = %.preheader438
  %tmp_703_cast = zext i5 %ci66 to i19
  %tmp_704 = add i8 %tmp_696, %ci66_cast
  %tmp_705_cast = sext i8 %tmp_704 to i15
  br label %.preheader437

.preheader437:                                    ; preds = %175, %.preheader437.preheader
  %i150 = phi i5 [ %i_151, %175 ], [ 0, %.preheader437.preheader ]
  %exitcond83 = icmp eq i5 %i150, -16
  %empty_650 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %i_151 = add i5 %i150, 1
  br i1 %exitcond83, label %.preheader438.loopexit, label %175

; <label>:175                                     ; preds = %.preheader437
  %tmp_1526 = trunc i5 %i150 to i4
  %p_shl204 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1526, i5 0)
  %p_shl207_cast = zext i9 %p_shl204 to i10
  %p_shl205 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1526, i3 0)
  %p_shl208_cast1 = zext i7 %p_shl205 to i8
  %p_shl208_cast = zext i7 %p_shl205 to i10
  %tmp_718 = sub i10 %p_shl207_cast, %p_shl208_cast
  %tmp_968_cast = sext i10 %tmp_718 to i12
  %tmp67 = add i12 -1672, %tmp_968_cast
  %tmp_719 = add i12 %tmp67, %co161_cast
  %tmp_1527 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_719, i5 0)
  %p_shl589_cast = zext i17 %tmp_1527 to i18
  %tmp_1528 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_719, i3 0)
  %p_shl590_cast = zext i15 %tmp_1528 to i18
  %tmp_1529 = sub i18 %p_shl589_cast, %p_shl590_cast
  %tmp_1935_cast = sext i18 %tmp_1529 to i19
  %tmp_1530 = add i19 %tmp_703_cast, %tmp_1935_cast
  %tmp_1936_cast = sext i19 %tmp_1530 to i64
  %shuffle_conv_1x1_add_29 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1936_cast
  %shuffle_conv_1x1_loa_29 = load float* %shuffle_conv_1x1_add_29, align 4
  %tmp_1531 = shl i5 %i150, 1
  %p_shl209_cast = zext i5 %tmp_1531 to i8
  %tmp_720 = sub i8 %p_shl208_cast1, %p_shl209_cast
  %tmp_721 = add i8 %tmp_720, %tmp_950_cast
  %tmp_1532 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_721, i7 0)
  %tmp_1533 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_721, i5 0)
  %p_shl588_cast = sext i13 %tmp_1533 to i15
  %tmp_1534 = sub i15 %tmp_1532, %p_shl588_cast
  %tmp_1535 = add i15 %tmp_705_cast, %tmp_1534
  %tmp_1943_cast = sext i15 %tmp_1535 to i64
  %weights_96_96_1x1_ad_1 = getelementptr [9216 x float]* @weights_96_96_1x1, i64 0, i64 %tmp_1943_cast
  store float %shuffle_conv_1x1_loa_29, float* %weights_96_96_1x1_ad_1, align 4
  br label %.preheader437

.preheader436.loopexit:                           ; preds = %.preheader435
  br label %.preheader436

.preheader436:                                    ; preds = %.preheader436.preheader, %.preheader436.loopexit
  %i146 = phi i5 [ %i_147, %.preheader436.loopexit ], [ 0, %.preheader436.preheader ]
  %i147_cast = zext i5 %i146 to i8
  %i147_cast1 = zext i5 %i146 to i12
  %exitcond82 = icmp eq i5 %i146, -8
  %empty_651 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_147 = add i5 %i146, 1
  br i1 %exitcond82, label %177, label %.preheader435.preheader

.preheader435.preheader:                          ; preds = %.preheader436
  br label %.preheader435

.preheader435:                                    ; preds = %.preheader435.preheader, %176
  %k54 = phi i3 [ %k_55, %176 ], [ 0, %.preheader435.preheader ]
  %exitcond81 = icmp eq i3 %k54, -4
  %empty_652 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_55 = add i3 %k54, 1
  br i1 %exitcond81, label %.preheader436.loopexit, label %176

; <label>:176                                     ; preds = %.preheader435
  %tmp_1525 = trunc i3 %k54 to i2
  %p_shl202 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1525, i5 0)
  %p_shl203_cast = zext i7 %p_shl202 to i8
  %p_shl203 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1525, i3 0)
  %p_shl204_cast = zext i5 %p_shl203 to i8
  %tmp_712 = sub i8 %p_shl203_cast, %p_shl204_cast
  %tmp_952_cast_cast = sext i8 %tmp_712 to i9
  %tmp68 = add i9 -104, %tmp_952_cast_cast
  %tmp68_cast1 = sext i9 %tmp68 to i11
  %tmp68_cast = zext i11 %tmp68_cast1 to i12
  %tmp_714 = add i12 %i147_cast1, %tmp68_cast
  %tmp_715 = zext i12 %tmp_714 to i64
  %bias_addr_48 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_715
  %bias_load_48 = load float* %bias_addr_48, align 4
  %tmp_716 = add i8 %tmp_712, %i147_cast
  %tmp_956_cast = sext i8 %tmp_716 to i32
  %tmp_717 = zext i32 %tmp_956_cast to i64
  %bias_96_addr_2 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_717
  store float %bias_load_48, float* %bias_96_addr_2, align 4
  br label %.preheader435

; <label>:177                                     ; preds = %.preheader436
  call fastcc void @subconv_1x1_4_p([3456 x float]* @buffer0_1_96_4x4_p, [9216 x float]* @weights_96_96_1x1, [96 x float]* @bias_96, [3456 x float]* @buffer1_1_96_4x4_p) nounwind
  call fastcc void @shuffle_96_l_p([3456 x float]* @buffer1_1_96_4x4_p, [6912 x float]* @downsampleunit2_outp) nounwind
  br label %.loopexit842

.loopexit842.loopexit:                            ; preds = %.preheader434
  br label %.loopexit842

.loopexit842:                                     ; preds = %.loopexit842.loopexit, %177
  %co161 = phi i5 [ 0, %177 ], [ %co_162, %.loopexit842.loopexit ]
  %co163_cast = zext i5 %co161 to i8
  %co163_cast1 = zext i5 %co161 to i10
  %exitcond80 = icmp eq i5 %co161, -8
  %empty_653 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_162 = add i5 %co161, 1
  br i1 %exitcond80, label %.preheader431.preheader, label %.preheader434.preheader

.preheader434.preheader:                          ; preds = %.loopexit842
  br label %.preheader434

.preheader431.preheader:                          ; preds = %.loopexit842
  br label %.preheader431

.preheader434.loopexit:                           ; preds = %.preheader433
  br label %.preheader434

.preheader434:                                    ; preds = %.preheader434.preheader, %.preheader434.loopexit
  %w113 = phi i2 [ %w_114, %.preheader434.loopexit ], [ 0, %.preheader434.preheader ]
  %exitcond79 = icmp eq i2 %w113, -1
  %empty_654 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_114 = add i2 %w113, 1
  br i1 %exitcond79, label %.loopexit842.loopexit, label %.preheader433.preheader

.preheader433.preheader:                          ; preds = %.preheader434
  %tmp_722_cast1 = zext i2 %w113 to i36
  %tmp_722_cast = zext i2 %w113 to i13
  br label %.preheader433

.preheader433.loopexit:                           ; preds = %.preheader432
  br label %.preheader433

.preheader433:                                    ; preds = %.preheader433.loopexit, %.preheader433.preheader
  %h114 = phi i2 [ 0, %.preheader433.preheader ], [ %h_115, %.preheader433.loopexit ]
  %exitcond78 = icmp eq i2 %h114, -1
  %empty_655 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_115 = add i2 %h114, 1
  br i1 %exitcond78, label %.preheader434.loopexit, label %.preheader432.preheader

.preheader432.preheader:                          ; preds = %.preheader433
  %tmp_729_cast1 = zext i2 %h114 to i11
  %tmp_729_cast = zext i2 %h114 to i15
  br label %.preheader432

.preheader432:                                    ; preds = %178, %.preheader432.preheader
  %i156 = phi i3 [ %i_157, %178 ], [ 0, %.preheader432.preheader ]
  %exitcond77 = icmp eq i3 %i156, -4
  %empty_656 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_157 = add i3 %i156, 1
  br i1 %exitcond77, label %.preheader433.loopexit, label %178

; <label>:178                                     ; preds = %.preheader432
  %tmp_1539 = trunc i3 %i156 to i2
  %p_shl209 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1539, i5 0)
  %p_shl216_cast = zext i7 %p_shl209 to i8
  %p_shl210 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1539, i3 0)
  %p_shl217_cast = zext i5 %p_shl210 to i8
  %tmp_734 = sub i8 %p_shl216_cast, %p_shl217_cast
  %tmp_994_cast = sext i8 %tmp_734 to i10
  %tmp69 = add i10 -328, %tmp_994_cast
  %tmp_735 = add i10 %co163_cast1, %tmp69
  %tmp_736_cast = zext i10 %tmp_735 to i13
  %tmp_1540 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_735, i2 0)
  %p_shl594_cast = zext i12 %tmp_1540 to i13
  %tmp_1541 = sub i13 %p_shl594_cast, %tmp_736_cast
  %tmp_1542 = add i13 %tmp_1541, %tmp_722_cast
  %tmp_1952_cast = sext i13 %tmp_1542 to i15
  %p_shl593_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1542, i2 0)
  %tmp_1543 = sub i15 %p_shl593_cast, %tmp_1952_cast
  %tmp_1544 = add i15 %tmp_1543, %tmp_729_cast
  %tmp_1955_cast = zext i15 %tmp_1544 to i64
  %shuffle_conv_3x3_add_16 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_1955_cast
  %shuffle_conv_3x3_loa_16 = load float* %shuffle_conv_3x3_add_16, align 4
  %tmp_737 = add i8 %tmp_734, %co163_cast
  %tmp_998_cast = sext i8 %tmp_737 to i32
  %tmp_739_cast = zext i32 %tmp_998_cast to i35
  %tmp_1545 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_737, i2 0)
  %tmp_1546 = sext i10 %tmp_1545 to i34
  %p_shl592_cast = zext i34 %tmp_1546 to i35
  %tmp_1547 = sub i35 %p_shl592_cast, %tmp_739_cast
  %tmp_1958_cast = sext i35 %tmp_1547 to i36
  %tmp_1548 = add i36 %tmp_1958_cast, %tmp_722_cast1
  %tmp_1549 = trunc i36 %tmp_1548 to i11
  %tmp_1550 = trunc i36 %tmp_1548 to i9
  %p_shl591_cast = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_1550, i2 0)
  %tmp_1551 = sub i11 %p_shl591_cast, %tmp_1549
  %tmp_1552 = add i11 %tmp_1551, %tmp_729_cast1
  %tmp_1962_cast = zext i11 %tmp_1552 to i64
  %weights_96_1_3x3_add_1 = getelementptr [864 x float]* @weights_96_1_3x3, i64 0, i64 %tmp_1962_cast
  store float %shuffle_conv_3x3_loa_16, float* %weights_96_1_3x3_add_1, align 4
  br label %.preheader432

.preheader431.loopexit:                           ; preds = %.preheader430
  br label %.preheader431

.preheader431:                                    ; preds = %.preheader431.preheader, %.preheader431.loopexit
  %i152 = phi i5 [ %i_153, %.preheader431.loopexit ], [ 0, %.preheader431.preheader ]
  %i153_cast = zext i5 %i152 to i8
  %i153_cast1 = zext i5 %i152 to i12
  %exitcond76 = icmp eq i5 %i152, -8
  %empty_657 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_153 = add i5 %i152, 1
  br i1 %exitcond76, label %180, label %.preheader430.preheader

.preheader430.preheader:                          ; preds = %.preheader431
  br label %.preheader430

.preheader430:                                    ; preds = %.preheader430.preheader, %179
  %k56 = phi i3 [ %k_57, %179 ], [ 0, %.preheader430.preheader ]
  %exitcond75 = icmp eq i3 %k56, -4
  %empty_658 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_57 = add i3 %k56, 1
  br i1 %exitcond75, label %.preheader431.loopexit, label %179

; <label>:179                                     ; preds = %.preheader430
  %tmp_1538 = trunc i3 %k56 to i2
  %p_shl207 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1538, i5 0)
  %p_shl210_cast = zext i7 %p_shl207 to i8
  %p_shl208 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1538, i3 0)
  %p_shl211_cast = zext i5 %p_shl208 to i8
  %tmp_724 = sub i8 %p_shl210_cast, %p_shl211_cast
  %tmp_975_cast = sext i8 %tmp_724 to i12
  %tmp70 = add i12 2040, %tmp_975_cast
  %tmp_725 = add i12 %i153_cast1, %tmp70
  %tmp_726 = zext i12 %tmp_725 to i64
  %bias_addr_49 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_726
  %bias_load_49 = load float* %bias_addr_49, align 4
  %tmp_727 = add i8 %tmp_724, %i153_cast
  %tmp_979_cast = sext i8 %tmp_727 to i32
  %tmp_728 = zext i32 %tmp_979_cast to i64
  %bias_96_addr_3 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_728
  store float %bias_load_49, float* %bias_96_addr_3, align 4
  br label %.preheader430

; <label>:180                                     ; preds = %.preheader431
  call fastcc void @subconv_3x3_8_stride([9600 x float]* @shuffleunit1_7_outpu, [864 x float]* @weights_96_1_3x3, [96 x float]* @bias_96, [3456 x float]* @buffer0_1_96_4x4_p) nounwind
  br label %.loopexit841

.loopexit841.loopexit:                            ; preds = %.preheader429
  br label %.loopexit841

.loopexit841:                                     ; preds = %.loopexit841.loopexit, %180
  %co163 = phi i5 [ 0, %180 ], [ %co_164, %.loopexit841.loopexit ]
  %co165_cast = zext i5 %co163 to i12
  %exitcond74 = icmp eq i5 %co163, -8
  %empty_659 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_164 = add i5 %co163, 1
  br i1 %exitcond74, label %.preheader427.preheader, label %.preheader429.preheader

.preheader427.preheader:                          ; preds = %.loopexit841
  br label %.preheader427

.preheader429.preheader:                          ; preds = %.loopexit841
  %tmp_1536 = trunc i5 %co163 to i2
  %p_shl206 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1536, i5 0)
  %p_shl212_cast = zext i7 %p_shl206 to i8
  %tmp_1537 = shl i5 %co163, 3
  %p_shl213_cast = zext i5 %tmp_1537 to i8
  %tmp_723 = sub i8 %p_shl212_cast, %p_shl213_cast
  %p_lshr_f21_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co163, i32 2, i32 4)
  %tmp_983_cast = zext i3 %p_lshr_f21_cast to i8
  br label %.preheader429

.preheader429.loopexit:                           ; preds = %.preheader428
  br label %.preheader429

.preheader429:                                    ; preds = %.preheader429.loopexit, %.preheader429.preheader
  %ci68 = phi i5 [ 0, %.preheader429.preheader ], [ %ci_69, %.preheader429.loopexit ]
  %ci68_cast = zext i5 %ci68 to i8
  %exitcond73 = icmp eq i5 %ci68, -8
  %empty_660 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_69 = add i5 %ci68, 1
  br i1 %exitcond73, label %.loopexit841.loopexit, label %.preheader428.preheader

.preheader428.preheader:                          ; preds = %.preheader429
  %tmp_731_cast = zext i5 %ci68 to i19
  %tmp_732 = add i8 %tmp_723, %ci68_cast
  %tmp_733_cast1 = sext i8 %tmp_732 to i15
  br label %.preheader428

.preheader428:                                    ; preds = %181, %.preheader428.preheader
  %i158 = phi i5 [ %i_159, %181 ], [ 0, %.preheader428.preheader ]
  %exitcond72 = icmp eq i5 %i158, -16
  %empty_661 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %i_159 = add i5 %i158, 1
  br i1 %exitcond72, label %.preheader429.loopexit, label %181

; <label>:181                                     ; preds = %.preheader428
  %tmp_1560 = trunc i5 %i158 to i4
  %p_shl213 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1560, i5 0)
  %p_shl220_cast = zext i9 %p_shl213 to i10
  %p_shl214 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1560, i3 0)
  %p_shl221_cast1 = zext i7 %p_shl214 to i8
  %p_shl221_cast = zext i7 %p_shl214 to i10
  %tmp_749 = sub i10 %p_shl220_cast, %p_shl221_cast
  %tmp_1006_cast = sext i10 %tmp_749 to i12
  %tmp71 = add i12 -1288, %tmp_1006_cast
  %tmp_750 = add i12 %tmp71, %co165_cast
  %tmp_1561 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_750, i5 0)
  %p_shl597_cast = zext i17 %tmp_1561 to i18
  %tmp_1562 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_750, i3 0)
  %p_shl598_cast = zext i15 %tmp_1562 to i18
  %tmp_1563 = sub i18 %p_shl597_cast, %p_shl598_cast
  %tmp_1975_cast = sext i18 %tmp_1563 to i19
  %tmp_1564 = add i19 %tmp_731_cast, %tmp_1975_cast
  %tmp_1976_cast = sext i19 %tmp_1564 to i64
  %shuffle_conv_1x1_add_30 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_1976_cast
  %shuffle_conv_1x1_loa_30 = load float* %shuffle_conv_1x1_add_30, align 4
  %tmp_1565 = shl i5 %i158, 1
  %p_shl222_cast = zext i5 %tmp_1565 to i8
  %tmp_751 = sub i8 %p_shl221_cast1, %p_shl222_cast
  %tmp_752 = add i8 %tmp_751, %tmp_983_cast
  %tmp_1566 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_752, i7 0)
  %tmp_1567 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_752, i5 0)
  %p_shl596_cast = sext i13 %tmp_1567 to i15
  %tmp_1568 = sub i15 %tmp_1566, %p_shl596_cast
  %tmp_1569 = add i15 %tmp_733_cast1, %tmp_1568
  %tmp_1983_cast = sext i15 %tmp_1569 to i64
  %weights_96_96_1x1_ad_2 = getelementptr [9216 x float]* @weights_96_96_1x1, i64 0, i64 %tmp_1983_cast
  store float %shuffle_conv_1x1_loa_30, float* %weights_96_96_1x1_ad_2, align 4
  br label %.preheader428

.preheader427.loopexit:                           ; preds = %.preheader426
  br label %.preheader427

.preheader427:                                    ; preds = %.preheader427.preheader, %.preheader427.loopexit
  %i154 = phi i5 [ %i_155, %.preheader427.loopexit ], [ 0, %.preheader427.preheader ]
  %i155_cast = zext i5 %i154 to i8
  %i155_cast1 = zext i5 %i154 to i12
  %exitcond71 = icmp eq i5 %i154, -8
  %empty_662 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_155 = add i5 %i154, 1
  br i1 %exitcond71, label %183, label %.preheader426.preheader

.preheader426.preheader:                          ; preds = %.preheader427
  br label %.preheader426

.preheader426:                                    ; preds = %.preheader426.preheader, %182
  %k58 = phi i3 [ %k_59, %182 ], [ 0, %.preheader426.preheader ]
  %exitcond70 = icmp eq i3 %k58, -4
  %empty_663 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_59 = add i3 %k58, 1
  br i1 %exitcond70, label %.preheader427.loopexit, label %182

; <label>:182                                     ; preds = %.preheader426
  %tmp_1559 = trunc i3 %k58 to i2
  %p_shl211 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1559, i5 0)
  %p_shl214_cast = zext i7 %p_shl211 to i8
  %p_shl212 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1559, i3 0)
  %p_shl215_cast = zext i5 %p_shl212 to i8
  %tmp_742 = sub i8 %p_shl214_cast, %p_shl215_cast
  %tmp_985_cast = sext i8 %tmp_742 to i12
  %tmp72 = add i12 -1960, %tmp_985_cast
  %tmp_745 = add i12 %i155_cast1, %tmp72
  %tmp_746 = zext i12 %tmp_745 to i64
  %bias_addr_50 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_746
  %bias_load_50 = load float* %bias_addr_50, align 4
  %tmp_747 = add i8 %tmp_742, %i155_cast
  %tmp_989_cast = sext i8 %tmp_747 to i32
  %tmp_748 = zext i32 %tmp_989_cast to i64
  %bias_96_addr_4 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_748
  store float %bias_load_50, float* %bias_96_addr_4, align 4
  br label %.preheader426

; <label>:183                                     ; preds = %.preheader427
  call fastcc void @subconv_1x1_4_p([3456 x float]* @buffer0_1_96_4x4_p, [9216 x float]* @weights_96_96_1x1, [96 x float]* @bias_96, [3456 x float]* @buffer1_1_96_4x4_p) nounwind
  call fastcc void @shuffle_96_r_p([3456 x float]* @buffer1_1_96_4x4_p, [6912 x float]* @downsampleunit2_outp) nounwind
  br label %.loopexit840

.loopexit840.loopexit:                            ; preds = %.preheader425
  br label %.loopexit840

.loopexit840:                                     ; preds = %.loopexit840.loopexit, %183
  %co165 = phi i7 [ 0, %183 ], [ %co_166, %.loopexit840.loopexit ]
  %co167_cast = zext i7 %co165 to i8
  %exitcond69 = icmp eq i7 %co165, -32
  %empty_664 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) nounwind
  %co_166 = add i7 %co165, 1
  br i1 %exitcond69, label %.preheader423.preheader, label %.preheader425.preheader

.preheader423.preheader:                          ; preds = %.loopexit840
  br label %.preheader423

.preheader425.preheader:                          ; preds = %.loopexit840
  %tmp_740 = add i8 %co167_cast, 96
  %tmp_1553 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %tmp_740, i3 0)
  %p_shl601_cast = zext i11 %tmp_1553 to i12
  %tmp_1554 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_740, i1 false)
  %p_shl602_cast = zext i9 %tmp_1554 to i12
  %tmp_1555 = sub i12 %p_shl601_cast, %p_shl602_cast
  %tmp_1965_cast = sext i12 %tmp_1555 to i13
  %tmp_1556 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co165, i3 0)
  %p_shl599_cast = zext i10 %tmp_1556 to i11
  %tmp_1557 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co165, i1 false)
  %p_shl600_cast = zext i8 %tmp_1557 to i11
  %tmp_1558 = sub i11 %p_shl599_cast, %p_shl600_cast
  %tmp_1968_cast = sext i11 %tmp_1558 to i12
  br label %.preheader425

.preheader425.loopexit:                           ; preds = %.preheader424
  br label %.preheader425

.preheader425:                                    ; preds = %.preheader425.loopexit, %.preheader425.preheader
  %h116 = phi i3 [ 0, %.preheader425.preheader ], [ %h_117, %.preheader425.loopexit ]
  %exitcond68 = icmp eq i3 %h116, -4
  %empty_665 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %h_117 = add i3 %h116, 1
  br i1 %exitcond68, label %.loopexit840.loopexit, label %.preheader424.preheader

.preheader424.preheader:                          ; preds = %.preheader425
  %tmp_754_cast1 = zext i3 %h_117 to i12
  %tmp_754_cast = zext i3 %h_117 to i13
  %tmp_1572 = add i13 %tmp_754_cast, %tmp_1965_cast
  %tmp_1573 = trunc i13 %tmp_1572 to i11
  %p_shl605_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1573, i3 0)
  %p_shl606_cast = call i14 @_ssdm_op_BitConcatenate.i14.i13.i1(i13 %tmp_1572, i1 false)
  %tmp_1574 = sub i14 %p_shl605_cast, %p_shl606_cast
  %tmp_1575 = add i12 %tmp_754_cast1, %tmp_1968_cast
  %tmp_1576 = trunc i12 %tmp_1575 to i10
  %p_shl603_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1576, i3 0)
  %p_shl604_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_1575, i1 false)
  %tmp_1577 = sub i13 %p_shl603_cast, %p_shl604_cast
  br label %.preheader424

.preheader424:                                    ; preds = %184, %.preheader424.preheader
  %w115 = phi i3 [ %w_116, %184 ], [ 0, %.preheader424.preheader ]
  %exitcond67 = icmp eq i3 %w115, -4
  %empty_666 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %w_116 = add i3 %w115, 1
  br i1 %exitcond67, label %.preheader425.loopexit, label %184

; <label>:184                                     ; preds = %.preheader424
  %tmp_758_cast1 = zext i3 %w_116 to i13
  %tmp_758_cast = zext i3 %w_116 to i14
  %tmp_1578 = add i14 %tmp_1574, %tmp_758_cast
  %tmp_1994_cast = zext i14 %tmp_1578 to i64
  %downsampleunit2_outp = getelementptr [6912 x float]* @downsampleunit2_outp, i64 0, i64 %tmp_1994_cast
  %tmp_1579 = add i13 %tmp_1577, %tmp_758_cast1
  %tmp_1995_cast = zext i13 %tmp_1579 to i64
  %buffer0_1_96_4x4_p_a = getelementptr [3456 x float]* @buffer0_1_96_4x4_p, i64 0, i64 %tmp_1995_cast
  %downsampleunit2_outp_1 = load float* %downsampleunit2_outp, align 4
  store float %downsampleunit2_outp_1, float* %buffer0_1_96_4x4_p_a, align 4
  br label %.preheader424

.preheader423.loopexit:                           ; preds = %.preheader422
  br label %.preheader423

.preheader423:                                    ; preds = %.preheader423.preheader, %.preheader423.loopexit
  %co167 = phi i5 [ %co_168, %.preheader423.loopexit ], [ 0, %.preheader423.preheader ]
  %co168_cast = zext i5 %co167 to i12
  %exitcond66 = icmp eq i5 %co167, -8
  %empty_667 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_168 = add i5 %co167, 1
  br i1 %exitcond66, label %.preheader420.preheader, label %.preheader422.preheader

.preheader420.preheader:                          ; preds = %.preheader423
  br label %.preheader420

.preheader422.preheader:                          ; preds = %.preheader423
  %tmp_1570 = trunc i5 %co167 to i2
  %p_shl215 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1570, i5 0)
  %p_shl218_cast = zext i7 %p_shl215 to i8
  %tmp_1571 = shl i5 %co167, 3
  %p_shl219_cast = zext i5 %tmp_1571 to i8
  %tmp_753 = sub i8 %p_shl218_cast, %p_shl219_cast
  %p_lshr_f22_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co167, i32 2, i32 4)
  %tmp_1005_cast = zext i3 %p_lshr_f22_cast to i8
  br label %.preheader422

.preheader422.loopexit:                           ; preds = %.preheader421
  br label %.preheader422

.preheader422:                                    ; preds = %.preheader422.loopexit, %.preheader422.preheader
  %ci70 = phi i5 [ 0, %.preheader422.preheader ], [ %ci_71, %.preheader422.loopexit ]
  %ci70_cast = zext i5 %ci70 to i8
  %exitcond65 = icmp eq i5 %ci70, -8
  %empty_668 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_71 = add i5 %ci70, 1
  br i1 %exitcond65, label %.preheader423.loopexit, label %.preheader421.preheader

.preheader421.preheader:                          ; preds = %.preheader422
  %tmp_755_cast = zext i5 %ci70 to i19
  %tmp_756 = add i8 %tmp_753, %ci70_cast
  %tmp_757_cast = sext i8 %tmp_756 to i15
  br label %.preheader421

.preheader421:                                    ; preds = %185, %.preheader421.preheader
  %i162 = phi i5 [ %i_163, %185 ], [ 0, %.preheader421.preheader ]
  %exitcond64 = icmp eq i5 %i162, -16
  %empty_669 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %i_163 = add i5 %i162, 1
  br i1 %exitcond64, label %.preheader422.loopexit, label %185

; <label>:185                                     ; preds = %.preheader421
  %tmp_1581 = trunc i5 %i162 to i4
  %p_shl218 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1581, i5 0)
  %p_shl225_cast = zext i9 %p_shl218 to i10
  %p_shl219 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1581, i3 0)
  %p_shl226_cast1 = zext i7 %p_shl219 to i8
  %p_shl226_cast = zext i7 %p_shl219 to i10
  %tmp_766 = sub i10 %p_shl225_cast, %p_shl226_cast
  %tmp_1025_cast = sext i10 %tmp_766 to i12
  %tmp73 = add i12 -904, %tmp_1025_cast
  %tmp_767 = add i12 %tmp73, %co168_cast
  %tmp_1582 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_767, i5 0)
  %p_shl609_cast = zext i17 %tmp_1582 to i18
  %tmp_1583 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_767, i3 0)
  %p_shl610_cast = zext i15 %tmp_1583 to i18
  %tmp_1584 = sub i18 %p_shl609_cast, %p_shl610_cast
  %tmp_2002_cast = sext i18 %tmp_1584 to i19
  %tmp_1585 = add i19 %tmp_755_cast, %tmp_2002_cast
  %tmp_2003_cast = sext i19 %tmp_1585 to i64
  %shuffle_conv_1x1_add_31 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_2003_cast
  %shuffle_conv_1x1_loa_31 = load float* %shuffle_conv_1x1_add_31, align 4
  %tmp_1586 = shl i5 %i162, 1
  %p_shl227_cast = zext i5 %tmp_1586 to i8
  %tmp_768 = sub i8 %p_shl226_cast1, %p_shl227_cast
  %tmp_769 = add i8 %tmp_768, %tmp_1005_cast
  %tmp_1587 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_769, i7 0)
  %tmp_1588 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_769, i5 0)
  %p_shl608_cast = sext i13 %tmp_1588 to i15
  %tmp_1589 = sub i15 %tmp_1587, %p_shl608_cast
  %tmp_1590 = add i15 %tmp_757_cast, %tmp_1589
  %tmp_2010_cast = sext i15 %tmp_1590 to i64
  %weights_96_96_1x1_ad_3 = getelementptr [9216 x float]* @weights_96_96_1x1, i64 0, i64 %tmp_2010_cast
  store float %shuffle_conv_1x1_loa_31, float* %weights_96_96_1x1_ad_3, align 4
  br label %.preheader421

.preheader420.loopexit:                           ; preds = %.preheader419
  br label %.preheader420

.preheader420:                                    ; preds = %.preheader420.preheader, %.preheader420.loopexit
  %i160 = phi i5 [ %i_161, %.preheader420.loopexit ], [ 0, %.preheader420.preheader ]
  %i161_cast = zext i5 %i160 to i8
  %i161_cast1 = zext i5 %i160 to i12
  %exitcond63 = icmp eq i5 %i160, -8
  %empty_670 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_161 = add i5 %i160, 1
  br i1 %exitcond63, label %187, label %.preheader419.preheader

.preheader419.preheader:                          ; preds = %.preheader420
  br label %.preheader419

.preheader419:                                    ; preds = %.preheader419.preheader, %186
  %k60 = phi i3 [ %k_61, %186 ], [ 0, %.preheader419.preheader ]
  %exitcond62 = icmp eq i3 %k60, -4
  %empty_671 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_61 = add i3 %k60, 1
  br i1 %exitcond62, label %.preheader420.loopexit, label %186

; <label>:186                                     ; preds = %.preheader419
  %tmp_1580 = trunc i3 %k60 to i2
  %p_shl216 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1580, i5 0)
  %p_shl223_cast = zext i7 %p_shl216 to i8
  %p_shl217 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1580, i3 0)
  %p_shl224_cast = zext i5 %p_shl217 to i8
  %tmp_759 = sub i8 %p_shl223_cast, %p_shl224_cast
  %tmp_1014_cast = sext i8 %tmp_759 to i12
  %tmp74 = add i12 -1864, %tmp_1014_cast
  %tmp_761 = add i12 %i161_cast1, %tmp74
  %tmp_762 = zext i12 %tmp_761 to i64
  %bias_addr_51 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_762
  %bias_load_51 = load float* %bias_addr_51, align 4
  %tmp_764 = add i8 %tmp_759, %i161_cast
  %tmp_1018_cast = sext i8 %tmp_764 to i32
  %tmp_765 = zext i32 %tmp_1018_cast to i64
  %bias_96_addr_5 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_765
  store float %bias_load_51, float* %bias_96_addr_5, align 4
  br label %.preheader419

; <label>:187                                     ; preds = %.preheader420
  call fastcc void @subconv_1x1_4_p([3456 x float]* @buffer0_1_96_4x4_p, [9216 x float]* @weights_96_96_1x1, [96 x float]* @bias_96, [3456 x float]* @buffer1_1_96_4x4_p) nounwind
  br label %.loopexit839

.loopexit839.loopexit:                            ; preds = %.preheader418
  br label %.loopexit839

.loopexit839:                                     ; preds = %.loopexit839.loopexit, %187
  %co169 = phi i5 [ 0, %187 ], [ %co_170, %.loopexit839.loopexit ]
  %co171_cast = zext i5 %co169 to i8
  %co171_cast1 = zext i5 %co169 to i10
  %exitcond61 = icmp eq i5 %co169, -8
  %empty_672 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_170 = add i5 %co169, 1
  br i1 %exitcond61, label %.preheader415.preheader, label %.preheader418.preheader

.preheader418.preheader:                          ; preds = %.loopexit839
  br label %.preheader418

.preheader415.preheader:                          ; preds = %.loopexit839
  br label %.preheader415

.preheader418.loopexit:                           ; preds = %.preheader417
  br label %.preheader418

.preheader418:                                    ; preds = %.preheader418.preheader, %.preheader418.loopexit
  %w117 = phi i2 [ %w_118, %.preheader418.loopexit ], [ 0, %.preheader418.preheader ]
  %exitcond60 = icmp eq i2 %w117, -1
  %empty_673 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_118 = add i2 %w117, 1
  br i1 %exitcond60, label %.loopexit839.loopexit, label %.preheader417.preheader

.preheader417.preheader:                          ; preds = %.preheader418
  %tmp_770_cast1 = zext i2 %w117 to i36
  %tmp_770_cast = zext i2 %w117 to i13
  br label %.preheader417

.preheader417.loopexit:                           ; preds = %.preheader416
  br label %.preheader417

.preheader417:                                    ; preds = %.preheader417.loopexit, %.preheader417.preheader
  %h118 = phi i2 [ 0, %.preheader417.preheader ], [ %h_119, %.preheader417.loopexit ]
  %exitcond59 = icmp eq i2 %h118, -1
  %empty_674 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_119 = add i2 %h118, 1
  br i1 %exitcond59, label %.preheader418.loopexit, label %.preheader416.preheader

.preheader416.preheader:                          ; preds = %.preheader417
  %tmp_777_cast1 = zext i2 %h118 to i11
  %tmp_777_cast2 = zext i2 %h118 to i15
  br label %.preheader416

.preheader416:                                    ; preds = %188, %.preheader416.preheader
  %i168 = phi i3 [ %i_169, %188 ], [ 0, %.preheader416.preheader ]
  %exitcond58 = icmp eq i3 %i168, -4
  %empty_675 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_169 = add i3 %i168, 1
  br i1 %exitcond58, label %.preheader417.loopexit, label %188

; <label>:188                                     ; preds = %.preheader416
  %tmp_1594 = trunc i3 %i168 to i2
  %p_shl223 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1594, i5 0)
  %p_shl234_cast = zext i7 %p_shl223 to i8
  %p_shl224 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1594, i3 0)
  %p_shl235_cast = zext i5 %p_shl224 to i8
  %tmp_782 = sub i8 %p_shl234_cast, %p_shl235_cast
  %tmp_1051_cast = sext i8 %tmp_782 to i10
  %tmp75 = add i10 -232, %tmp_1051_cast
  %tmp_783 = add i10 %co171_cast1, %tmp75
  %tmp_784_cast = zext i10 %tmp_783 to i13
  %tmp_1595 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_783, i2 0)
  %p_shl614_cast = zext i12 %tmp_1595 to i13
  %tmp_1596 = sub i13 %p_shl614_cast, %tmp_784_cast
  %tmp_1597 = add i13 %tmp_1596, %tmp_770_cast
  %tmp_2019_cast = sext i13 %tmp_1597 to i15
  %p_shl613_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1597, i2 0)
  %tmp_1598 = sub i15 %p_shl613_cast, %tmp_2019_cast
  %tmp_1599 = add i15 %tmp_1598, %tmp_777_cast2
  %tmp_2022_cast = zext i15 %tmp_1599 to i64
  %shuffle_conv_3x3_add_17 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_2022_cast
  %shuffle_conv_3x3_loa_17 = load float* %shuffle_conv_3x3_add_17, align 4
  %tmp_785 = add i8 %tmp_782, %co171_cast
  %tmp_1055_cast = sext i8 %tmp_785 to i32
  %tmp_786_cast = zext i32 %tmp_1055_cast to i35
  %tmp_1600 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_785, i2 0)
  %tmp_1601 = sext i10 %tmp_1600 to i34
  %p_shl612_cast = zext i34 %tmp_1601 to i35
  %tmp_1602 = sub i35 %p_shl612_cast, %tmp_786_cast
  %tmp_2025_cast = sext i35 %tmp_1602 to i36
  %tmp_1603 = add i36 %tmp_2025_cast, %tmp_770_cast1
  %tmp_1604 = trunc i36 %tmp_1603 to i11
  %tmp_1605 = trunc i36 %tmp_1603 to i9
  %p_shl611_cast = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_1605, i2 0)
  %tmp_1606 = sub i11 %p_shl611_cast, %tmp_1604
  %tmp_1607 = add i11 %tmp_1606, %tmp_777_cast1
  %tmp_2029_cast = zext i11 %tmp_1607 to i64
  %weights_96_1_3x3_add_2 = getelementptr [864 x float]* @weights_96_1_3x3, i64 0, i64 %tmp_2029_cast
  store float %shuffle_conv_3x3_loa_17, float* %weights_96_1_3x3_add_2, align 4
  br label %.preheader416

.preheader415.loopexit:                           ; preds = %.preheader414
  br label %.preheader415

.preheader415:                                    ; preds = %.preheader415.preheader, %.preheader415.loopexit
  %i164 = phi i5 [ %i_165, %.preheader415.loopexit ], [ 0, %.preheader415.preheader ]
  %i165_cast = zext i5 %i164 to i8
  %i165_cast1 = zext i5 %i164 to i12
  %exitcond57 = icmp eq i5 %i164, -8
  %empty_676 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_165 = add i5 %i164, 1
  br i1 %exitcond57, label %190, label %.preheader414.preheader

.preheader414.preheader:                          ; preds = %.preheader415
  br label %.preheader414

.preheader414:                                    ; preds = %.preheader414.preheader, %189
  %k62 = phi i3 [ %k_63, %189 ], [ 0, %.preheader414.preheader ]
  %exitcond56 = icmp eq i3 %k62, -4
  %empty_677 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_63 = add i3 %k62, 1
  br i1 %exitcond56, label %.preheader415.loopexit, label %189

; <label>:189                                     ; preds = %.preheader414
  %tmp_1593 = trunc i3 %k62 to i2
  %p_shl221 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1593, i5 0)
  %p_shl228_cast = zext i7 %p_shl221 to i8
  %p_shl222 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1593, i3 0)
  %p_shl229_cast = zext i5 %p_shl222 to i8
  %tmp_772 = sub i8 %p_shl228_cast, %p_shl229_cast
  %tmp_1032_cast = sext i8 %tmp_772 to i12
  %tmp76 = add i12 -1768, %tmp_1032_cast
  %tmp_773 = add i12 %i165_cast1, %tmp76
  %tmp_774 = zext i12 %tmp_773 to i64
  %bias_addr_52 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_774
  %bias_load_52 = load float* %bias_addr_52, align 4
  %tmp_775 = add i8 %tmp_772, %i165_cast
  %tmp_1036_cast = sext i8 %tmp_775 to i32
  %tmp_776 = zext i32 %tmp_1036_cast to i64
  %bias_96_addr_6 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_776
  store float %bias_load_52, float* %bias_96_addr_6, align 4
  br label %.preheader414

; <label>:190                                     ; preds = %.preheader415
  call fastcc void @subconv_3x3_4_no_rel([3456 x float]* @buffer1_1_96_4x4_p, [864 x float]* @weights_96_1_3x3, [96 x float]* @bias_96, [3456 x float]* @buffer0_1_96_4x4_p) nounwind
  br label %.loopexit838

.loopexit838.loopexit:                            ; preds = %.preheader413
  br label %.loopexit838

.loopexit838:                                     ; preds = %.loopexit838.loopexit, %190
  %co171 = phi i5 [ 0, %190 ], [ %co_172, %.loopexit838.loopexit ]
  %co173_cast186_cast = zext i5 %co171 to i11
  %exitcond55 = icmp eq i5 %co171, -8
  %empty_678 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_172 = add i5 %co171, 1
  br i1 %exitcond55, label %.preheader411.preheader, label %.preheader413.preheader

.preheader411.preheader:                          ; preds = %.loopexit838
  br label %.preheader411

.preheader413.preheader:                          ; preds = %.loopexit838
  %tmp_1591 = trunc i5 %co171 to i2
  %p_shl220 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1591, i5 0)
  %p_shl230_cast = zext i7 %p_shl220 to i8
  %tmp_1592 = shl i5 %co171, 3
  %p_shl231_cast = zext i5 %tmp_1592 to i8
  %tmp_771 = sub i8 %p_shl230_cast, %p_shl231_cast
  %p_lshr_f23_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co171, i32 2, i32 4)
  %tmp_1040_cast = zext i3 %p_lshr_f23_cast to i8
  br label %.preheader413

.preheader413.loopexit:                           ; preds = %.preheader412
  br label %.preheader413

.preheader413:                                    ; preds = %.preheader413.loopexit, %.preheader413.preheader
  %ci72 = phi i5 [ 0, %.preheader413.preheader ], [ %ci_73, %.preheader413.loopexit ]
  %ci72_cast = zext i5 %ci72 to i8
  %exitcond54 = icmp eq i5 %ci72, -8
  %empty_679 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_73 = add i5 %ci72, 1
  br i1 %exitcond54, label %.loopexit838.loopexit, label %.preheader412.preheader

.preheader412.preheader:                          ; preds = %.preheader413
  %tmp_778_cast = zext i5 %ci72 to i19
  %tmp_779 = add i8 %tmp_771, %ci72_cast
  %tmp_781_cast1 = sext i8 %tmp_779 to i15
  br label %.preheader412

.preheader412:                                    ; preds = %191, %.preheader412.preheader
  %i170 = phi i5 [ %i_171, %191 ], [ 0, %.preheader412.preheader ]
  %exitcond53 = icmp eq i5 %i170, -16
  %empty_680 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %i_171 = add i5 %i170, 1
  br i1 %exitcond53, label %.preheader413.loopexit, label %191

; <label>:191                                     ; preds = %.preheader412
  %tmp_1612 = trunc i5 %i170 to i4
  %p_shl227 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1612, i5 0)
  %p_shl236_cast = zext i9 %p_shl227 to i10
  %p_shl228 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1612, i3 0)
  %p_shl237_cast1 = zext i7 %p_shl228 to i8
  %p_shl237_cast = zext i7 %p_shl228 to i10
  %tmp_794 = sub i10 %p_shl236_cast, %p_shl237_cast
  %tmp_1058_cast_cast = sext i10 %tmp_794 to i11
  %tmp77 = add i11 -520, %tmp_1058_cast_cast
  %tmp_795 = add i11 %tmp77, %co173_cast186_cast
  %tmp_1613 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_795, i5 0)
  %tmp_1614 = sext i16 %tmp_1613 to i17
  %p_shl617_cast = zext i17 %tmp_1614 to i18
  %tmp_1615 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_795, i3 0)
  %tmp_1616 = sext i14 %tmp_1615 to i15
  %p_shl618_cast = zext i15 %tmp_1616 to i18
  %tmp_1617 = sub i18 %p_shl617_cast, %p_shl618_cast
  %tmp_2041_cast = sext i18 %tmp_1617 to i19
  %tmp_1618 = add i19 %tmp_778_cast, %tmp_2041_cast
  %tmp_2042_cast = sext i19 %tmp_1618 to i64
  %shuffle_conv_1x1_add_32 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_2042_cast
  %shuffle_conv_1x1_loa_32 = load float* %shuffle_conv_1x1_add_32, align 4
  %tmp_1619 = shl i5 %i170, 1
  %p_shl238_cast = zext i5 %tmp_1619 to i8
  %tmp_796 = sub i8 %p_shl237_cast1, %p_shl238_cast
  %tmp_797 = add i8 %tmp_796, %tmp_1040_cast
  %tmp_1620 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_797, i7 0)
  %tmp_1621 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_797, i5 0)
  %p_shl616_cast = sext i13 %tmp_1621 to i15
  %tmp_1622 = sub i15 %tmp_1620, %p_shl616_cast
  %tmp_1623 = add i15 %tmp_781_cast1, %tmp_1622
  %tmp_2049_cast = sext i15 %tmp_1623 to i64
  %weights_96_96_1x1_ad_4 = getelementptr [9216 x float]* @weights_96_96_1x1, i64 0, i64 %tmp_2049_cast
  store float %shuffle_conv_1x1_loa_32, float* %weights_96_96_1x1_ad_4, align 4
  br label %.preheader412

.preheader411.loopexit:                           ; preds = %.preheader410
  br label %.preheader411

.preheader411:                                    ; preds = %.preheader411.preheader, %.preheader411.loopexit
  %i166 = phi i5 [ %i_167, %.preheader411.loopexit ], [ 0, %.preheader411.preheader ]
  %i167_cast = zext i5 %i166 to i8
  %i167_cast1 = zext i5 %i166 to i12
  %exitcond52 = icmp eq i5 %i166, -8
  %empty_681 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_167 = add i5 %i166, 1
  br i1 %exitcond52, label %193, label %.preheader410.preheader

.preheader410.preheader:                          ; preds = %.preheader411
  br label %.preheader410

.preheader410:                                    ; preds = %.preheader410.preheader, %192
  %k64 = phi i3 [ %k_65, %192 ], [ 0, %.preheader410.preheader ]
  %exitcond51 = icmp eq i3 %k64, -4
  %empty_682 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_65 = add i3 %k64, 1
  br i1 %exitcond51, label %.preheader411.loopexit, label %192

; <label>:192                                     ; preds = %.preheader410
  %tmp_1611 = trunc i3 %k64 to i2
  %p_shl225 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1611, i5 0)
  %p_shl232_cast = zext i7 %p_shl225 to i8
  %p_shl226 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1611, i3 0)
  %p_shl233_cast = zext i5 %p_shl226 to i8
  %tmp_787 = sub i8 %p_shl232_cast, %p_shl233_cast
  %tmp_1042_cast = sext i8 %tmp_787 to i12
  %tmp78 = add i12 -1672, %tmp_1042_cast
  %tmp_789 = add i12 %i167_cast1, %tmp78
  %tmp_790 = zext i12 %tmp_789 to i64
  %bias_addr_53 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_790
  %bias_load_53 = load float* %bias_addr_53, align 4
  %tmp_792 = add i8 %tmp_787, %i167_cast
  %tmp_1046_cast = sext i8 %tmp_792 to i32
  %tmp_793 = zext i32 %tmp_1046_cast to i64
  %bias_96_addr_7 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_793
  store float %bias_load_53, float* %bias_96_addr_7, align 4
  br label %.preheader410

; <label>:193                                     ; preds = %.preheader411
  call fastcc void @subconv_1x1_4_p([3456 x float]* @buffer0_1_96_4x4_p, [9216 x float]* @weights_96_96_1x1, [96 x float]* @bias_96, [3456 x float]* @buffer1_1_96_4x4_p) nounwind
  br label %.loopexit837

.loopexit837.loopexit:                            ; preds = %.preheader409
  br label %.loopexit837

.loopexit837:                                     ; preds = %.loopexit837.loopexit, %193
  %co173 = phi i7 [ 0, %193 ], [ %co_174, %.loopexit837.loopexit ]
  %exitcond50 = icmp eq i7 %co173, -32
  %empty_683 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) nounwind
  %co_174 = add i7 %co173, 1
  br i1 %exitcond50, label %195, label %.preheader409.preheader

.preheader409.preheader:                          ; preds = %.loopexit837
  %tmp_1608 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co173, i3 0)
  %p_shl619_cast = zext i10 %tmp_1608 to i11
  %tmp_1609 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co173, i1 false)
  %p_shl620_cast = zext i8 %tmp_1609 to i11
  %tmp_1610 = sub i11 %p_shl619_cast, %p_shl620_cast
  %tmp_2032_cast = sext i11 %tmp_1610 to i12
  br label %.preheader409

.preheader409.loopexit:                           ; preds = %.preheader408
  br label %.preheader409

.preheader409:                                    ; preds = %.preheader409.loopexit, %.preheader409.preheader
  %h120 = phi i3 [ 0, %.preheader409.preheader ], [ %h_121, %.preheader409.loopexit ]
  %exitcond49 = icmp eq i3 %h120, -4
  %empty_684 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %h_121 = add i3 %h120, 1
  br i1 %exitcond49, label %.loopexit837.loopexit, label %.preheader408.preheader

.preheader408.preheader:                          ; preds = %.preheader409
  %tmp_799_cast = zext i3 %h_121 to i12
  %tmp_1630 = add i12 %tmp_2032_cast, %tmp_799_cast
  %tmp_1631 = trunc i12 %tmp_1630 to i11
  %p_shl621_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1631, i3 0)
  %tmp_1632 = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_1630, i1 false)
  %p_shl622_cast = sext i13 %tmp_1632 to i14
  %tmp_1633 = sub i14 %p_shl621_cast, %p_shl622_cast
  br label %.preheader408

.preheader408:                                    ; preds = %194, %.preheader408.preheader
  %w119 = phi i3 [ %w_120, %194 ], [ 0, %.preheader408.preheader ]
  %exitcond48 = icmp eq i3 %w119, -4
  %empty_685 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %w_120 = add i3 %w119, 1
  br i1 %exitcond48, label %.preheader409.loopexit, label %194

; <label>:194                                     ; preds = %.preheader408
  %tmp_802_cast = zext i3 %w_120 to i14
  %tmp_1642 = add i14 %tmp_1633, %tmp_802_cast
  %tmp_2070_cast = zext i14 %tmp_1642 to i64
  %downsampleunit2_outp_2 = getelementptr [6912 x float]* @downsampleunit2_outp, i64 0, i64 %tmp_2070_cast
  %buffer0_1_96_4x4_p_a_1 = getelementptr [3456 x float]* @buffer0_1_96_4x4_p, i64 0, i64 %tmp_2070_cast
  %downsampleunit2_outp_3 = load float* %downsampleunit2_outp_2, align 4
  store float %downsampleunit2_outp_3, float* %buffer0_1_96_4x4_p_a_1, align 4
  br label %.preheader408

; <label>:195                                     ; preds = %.loopexit837
  call fastcc void @shuffle_96_p([3456 x float]* @buffer0_1_96_4x4_p, [6912 x float]* @shuffleunit2_0_outpu) nounwind
  br label %.loopexit836

.loopexit836.loopexit:                            ; preds = %.preheader407
  br label %.loopexit836

.loopexit836:                                     ; preds = %.loopexit836.loopexit, %195
  %co175 = phi i7 [ 0, %195 ], [ %co_176, %.loopexit836.loopexit ]
  %co176_cast = zext i7 %co175 to i8
  %exitcond47 = icmp eq i7 %co175, -32
  %empty_686 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) nounwind
  %co_176 = add i7 %co175, 1
  br i1 %exitcond47, label %.preheader405.preheader, label %.preheader407.preheader

.preheader405.preheader:                          ; preds = %.loopexit836
  br label %.preheader405

.preheader407.preheader:                          ; preds = %.loopexit836
  %tmp_798 = add i8 %co176_cast, 96
  %tmp_1624 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %tmp_798, i3 0)
  %p_shl625_cast = zext i11 %tmp_1624 to i12
  %tmp_1625 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_798, i1 false)
  %p_shl626_cast = zext i9 %tmp_1625 to i12
  %tmp_1626 = sub i12 %p_shl625_cast, %p_shl626_cast
  %tmp_2052_cast = sext i12 %tmp_1626 to i13
  %tmp_1627 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co175, i3 0)
  %p_shl623_cast = zext i10 %tmp_1627 to i11
  %tmp_1628 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co175, i1 false)
  %p_shl624_cast = zext i8 %tmp_1628 to i11
  %tmp_1629 = sub i11 %p_shl623_cast, %p_shl624_cast
  %tmp_2055_cast = sext i11 %tmp_1629 to i12
  br label %.preheader407

.preheader407.loopexit:                           ; preds = %.preheader406
  br label %.preheader407

.preheader407:                                    ; preds = %.preheader407.loopexit, %.preheader407.preheader
  %h122 = phi i3 [ 0, %.preheader407.preheader ], [ %h_123, %.preheader407.loopexit ]
  %exitcond46 = icmp eq i3 %h122, -4
  %empty_687 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %h_123 = add i3 %h122, 1
  br i1 %exitcond46, label %.loopexit836.loopexit, label %.preheader406.preheader

.preheader406.preheader:                          ; preds = %.preheader407
  %tmp_801_cast1 = zext i3 %h_123 to i12
  %tmp_801_cast = zext i3 %h_123 to i13
  %tmp_1636 = add i13 %tmp_801_cast, %tmp_2052_cast
  %tmp_1637 = trunc i13 %tmp_1636 to i11
  %p_shl629_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1637, i3 0)
  %p_shl630_cast = call i14 @_ssdm_op_BitConcatenate.i14.i13.i1(i13 %tmp_1636, i1 false)
  %tmp_1638 = sub i14 %p_shl629_cast, %p_shl630_cast
  %tmp_1639 = add i12 %tmp_801_cast1, %tmp_2055_cast
  %tmp_1640 = trunc i12 %tmp_1639 to i10
  %p_shl627_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1640, i3 0)
  %p_shl628_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_1639, i1 false)
  %tmp_1641 = sub i13 %p_shl627_cast, %p_shl628_cast
  br label %.preheader406

.preheader406:                                    ; preds = %196, %.preheader406.preheader
  %w121 = phi i3 [ %w_122, %196 ], [ 0, %.preheader406.preheader ]
  %exitcond45 = icmp eq i3 %w121, -4
  %empty_688 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %w_122 = add i3 %w121, 1
  br i1 %exitcond45, label %.preheader407.loopexit, label %196

; <label>:196                                     ; preds = %.preheader406
  %tmp_807_cast1 = zext i3 %w_122 to i13
  %tmp_807_cast = zext i3 %w_122 to i14
  %tmp_1643 = add i14 %tmp_1638, %tmp_807_cast
  %tmp_2071_cast = zext i14 %tmp_1643 to i64
  %shuffleunit2_0_outpu = getelementptr [6912 x float]* @shuffleunit2_0_outpu, i64 0, i64 %tmp_2071_cast
  %tmp_1644 = add i13 %tmp_1641, %tmp_807_cast1
  %tmp_2072_cast = zext i13 %tmp_1644 to i64
  %buffer0_1_96_4x4_p_a_2 = getelementptr [3456 x float]* @buffer0_1_96_4x4_p, i64 0, i64 %tmp_2072_cast
  %shuffleunit2_0_outpu_1 = load float* %shuffleunit2_0_outpu, align 4
  store float %shuffleunit2_0_outpu_1, float* %buffer0_1_96_4x4_p_a_2, align 4
  br label %.preheader406

.preheader405.loopexit:                           ; preds = %.preheader404
  br label %.preheader405

.preheader405:                                    ; preds = %.preheader405.preheader, %.preheader405.loopexit
  %co177 = phi i5 [ %co_178, %.preheader405.loopexit ], [ 0, %.preheader405.preheader ]
  %co178_cast = zext i5 %co177 to i13
  %exitcond44 = icmp eq i5 %co177, -8
  %empty_689 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_178 = add i5 %co177, 1
  br i1 %exitcond44, label %.preheader402.preheader, label %.preheader404.preheader

.preheader402.preheader:                          ; preds = %.preheader405
  br label %.preheader402

.preheader404.preheader:                          ; preds = %.preheader405
  %tmp_1634 = trunc i5 %co177 to i2
  %p_shl229 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1634, i5 0)
  %p_shl239_cast = zext i7 %p_shl229 to i8
  %tmp_1635 = shl i5 %co177, 3
  %p_shl240_cast = zext i5 %tmp_1635 to i8
  %tmp_800 = sub i8 %p_shl239_cast, %p_shl240_cast
  %p_lshr_f24_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co177, i32 2, i32 4)
  %tmp_1070_cast = zext i3 %p_lshr_f24_cast to i8
  br label %.preheader404

.preheader404.loopexit:                           ; preds = %.preheader403
  br label %.preheader404

.preheader404:                                    ; preds = %.preheader404.loopexit, %.preheader404.preheader
  %ci74 = phi i5 [ 0, %.preheader404.preheader ], [ %ci_75, %.preheader404.loopexit ]
  %ci74_cast = zext i5 %ci74 to i8
  %exitcond43 = icmp eq i5 %ci74, -8
  %empty_690 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_75 = add i5 %ci74, 1
  br i1 %exitcond43, label %.preheader405.loopexit, label %.preheader403.preheader

.preheader403.preheader:                          ; preds = %.preheader404
  %tmp_803_cast = zext i5 %ci74 to i19
  %tmp_804 = add i8 %tmp_800, %ci74_cast
  %tmp_806_cast = sext i8 %tmp_804 to i15
  br label %.preheader403

.preheader403:                                    ; preds = %197, %.preheader403.preheader
  %i174 = phi i5 [ %i_175, %197 ], [ 0, %.preheader403.preheader ]
  %exitcond42 = icmp eq i5 %i174, -16
  %empty_691 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %i_175 = add i5 %i174, 1
  br i1 %exitcond42, label %.preheader404.loopexit, label %197

; <label>:197                                     ; preds = %.preheader403
  %tmp_1646 = trunc i5 %i174 to i4
  %p_shl232 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1646, i5 0)
  %p_shl243_cast = zext i9 %p_shl232 to i10
  %p_shl233 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1646, i3 0)
  %p_shl244_cast1 = zext i7 %p_shl233 to i8
  %p_shl244_cast = zext i7 %p_shl233 to i10
  %tmp_814 = sub i10 %p_shl243_cast, %p_shl244_cast
  %tmp_1085_cast = sext i10 %tmp_814 to i13
  %tmp79 = add i13 3960, %tmp_1085_cast
  %tmp_815 = add i13 %tmp79, %co178_cast
  %tmp_1647 = call i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13 %tmp_815, i5 0)
  %p_shl633_cast = zext i18 %tmp_1647 to i19
  %tmp_1648 = call i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13 %tmp_815, i3 0)
  %p_shl634_cast = zext i16 %tmp_1648 to i19
  %tmp_1649 = sub i19 %p_shl633_cast, %p_shl634_cast
  %tmp_1650 = add i19 %tmp_803_cast, %tmp_1649
  %tmp_2080_cast = sext i19 %tmp_1650 to i64
  %shuffle_conv_1x1_add_33 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_2080_cast
  %shuffle_conv_1x1_loa_33 = load float* %shuffle_conv_1x1_add_33, align 4
  %tmp_1651 = shl i5 %i174, 1
  %p_shl245_cast = zext i5 %tmp_1651 to i8
  %tmp_816 = sub i8 %p_shl244_cast1, %p_shl245_cast
  %tmp_817 = add i8 %tmp_816, %tmp_1070_cast
  %tmp_1652 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_817, i7 0)
  %tmp_1653 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_817, i5 0)
  %p_shl632_cast = sext i13 %tmp_1653 to i15
  %tmp_1654 = sub i15 %tmp_1652, %p_shl632_cast
  %tmp_1655 = add i15 %tmp_806_cast, %tmp_1654
  %tmp_2087_cast = sext i15 %tmp_1655 to i64
  %weights_96_96_1x1_ad_5 = getelementptr [9216 x float]* @weights_96_96_1x1, i64 0, i64 %tmp_2087_cast
  store float %shuffle_conv_1x1_loa_33, float* %weights_96_96_1x1_ad_5, align 4
  br label %.preheader403

.preheader402.loopexit:                           ; preds = %.preheader401
  br label %.preheader402

.preheader402:                                    ; preds = %.preheader402.preheader, %.preheader402.loopexit
  %i172 = phi i5 [ %i_173, %.preheader402.loopexit ], [ 0, %.preheader402.preheader ]
  %i173_cast = zext i5 %i172 to i8
  %i173_cast1 = zext i5 %i172 to i12
  %exitcond41 = icmp eq i5 %i172, -8
  %empty_692 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_173 = add i5 %i172, 1
  br i1 %exitcond41, label %199, label %.preheader401.preheader

.preheader401.preheader:                          ; preds = %.preheader402
  br label %.preheader401

.preheader401:                                    ; preds = %.preheader401.preheader, %198
  %k66 = phi i3 [ %k_67, %198 ], [ 0, %.preheader401.preheader ]
  %exitcond40 = icmp eq i3 %k66, -4
  %empty_693 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_67 = add i3 %k66, 1
  br i1 %exitcond40, label %.preheader402.loopexit, label %198

; <label>:198                                     ; preds = %.preheader401
  %tmp_1645 = trunc i3 %k66 to i2
  %p_shl230 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1645, i5 0)
  %p_shl241_cast = zext i7 %p_shl230 to i8
  %p_shl231 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1645, i3 0)
  %p_shl242_cast = zext i5 %p_shl231 to i8
  %tmp_809 = sub i8 %p_shl241_cast, %p_shl242_cast
  %tmp_1074_cast = sext i8 %tmp_809 to i12
  %tmp80 = add i12 -1576, %tmp_1074_cast
  %tmp_810 = add i12 %i173_cast1, %tmp80
  %tmp_811 = zext i12 %tmp_810 to i64
  %bias_addr_54 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_811
  %bias_load_54 = load float* %bias_addr_54, align 4
  %tmp_812 = add i8 %tmp_809, %i173_cast
  %tmp_1078_cast = sext i8 %tmp_812 to i32
  %tmp_813 = zext i32 %tmp_1078_cast to i64
  %bias_96_addr_8 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_813
  store float %bias_load_54, float* %bias_96_addr_8, align 4
  br label %.preheader401

; <label>:199                                     ; preds = %.preheader402
  call fastcc void @subconv_1x1_4_p([3456 x float]* @buffer0_1_96_4x4_p, [9216 x float]* @weights_96_96_1x1, [96 x float]* @bias_96, [3456 x float]* @buffer1_1_96_4x4_p) nounwind
  br label %.loopexit835

.loopexit835.loopexit:                            ; preds = %.preheader400
  br label %.loopexit835

.loopexit835:                                     ; preds = %.loopexit835.loopexit, %199
  %co179 = phi i5 [ 0, %199 ], [ %co_180, %.loopexit835.loopexit ]
  %co181_cast = zext i5 %co179 to i8
  %co181_cast157_cast = zext i5 %co179 to i9
  %exitcond39 = icmp eq i5 %co179, -8
  %empty_694 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_180 = add i5 %co179, 1
  br i1 %exitcond39, label %.preheader397.preheader, label %.preheader400.preheader

.preheader400.preheader:                          ; preds = %.loopexit835
  br label %.preheader400

.preheader397.preheader:                          ; preds = %.loopexit835
  br label %.preheader397

.preheader400.loopexit:                           ; preds = %.preheader399
  br label %.preheader400

.preheader400:                                    ; preds = %.preheader400.preheader, %.preheader400.loopexit
  %w123 = phi i2 [ %w_124, %.preheader400.loopexit ], [ 0, %.preheader400.preheader ]
  %exitcond38 = icmp eq i2 %w123, -1
  %empty_695 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_124 = add i2 %w123, 1
  br i1 %exitcond38, label %.loopexit835.loopexit, label %.preheader399.preheader

.preheader399.preheader:                          ; preds = %.preheader400
  %tmp_818_cast1 = zext i2 %w123 to i36
  %tmp_818_cast = zext i2 %w123 to i14
  br label %.preheader399

.preheader399.loopexit:                           ; preds = %.preheader398
  br label %.preheader399

.preheader399:                                    ; preds = %.preheader399.loopexit, %.preheader399.preheader
  %h124 = phi i2 [ 0, %.preheader399.preheader ], [ %h_125, %.preheader399.loopexit ]
  %exitcond37 = icmp eq i2 %h124, -1
  %empty_696 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_125 = add i2 %h124, 1
  br i1 %exitcond37, label %.preheader400.loopexit, label %.preheader398.preheader

.preheader398.preheader:                          ; preds = %.preheader399
  %tmp_825_cast1 = zext i2 %h124 to i11
  %tmp_825_cast = zext i2 %h124 to i15
  br label %.preheader398

.preheader398:                                    ; preds = %200, %.preheader398.preheader
  %i180 = phi i3 [ %i_181, %200 ], [ 0, %.preheader398.preheader ]
  %exitcond36 = icmp eq i3 %i180, -4
  %empty_697 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_181 = add i3 %i180, 1
  br i1 %exitcond36, label %.preheader399.loopexit, label %200

; <label>:200                                     ; preds = %.preheader398
  %tmp_1659 = trunc i3 %i180 to i2
  %p_shl237 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1659, i5 0)
  %p_shl252_cast = zext i7 %p_shl237 to i8
  %p_shl238 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1659, i3 0)
  %p_shl253_cast = zext i5 %p_shl238 to i8
  %tmp_829 = sub i8 %p_shl252_cast, %p_shl253_cast
  %tmp_1111_cast_cast = sext i8 %tmp_829 to i9
  %tmp81 = add i9 -136, %tmp_1111_cast_cast
  %tmp_830 = add i9 %co181_cast157_cast, %tmp81
  %tmp_1113_cast = sext i9 %tmp_830 to i10
  %tmp_831_cast1 = zext i10 %tmp_1113_cast to i13
  %tmp_1660 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_830, i2 0)
  %tmp_1661 = sext i11 %tmp_1660 to i12
  %p_shl638_cast = zext i12 %tmp_1661 to i13
  %tmp_1662 = sub i13 %p_shl638_cast, %tmp_831_cast1
  %tmp_2096_cast = sext i13 %tmp_1662 to i14
  %tmp_1663 = add i14 %tmp_2096_cast, %tmp_818_cast
  %tmp_2097_cast = sext i14 %tmp_1663 to i15
  %tmp_1664 = trunc i14 %tmp_1663 to i13
  %p_shl637_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_1664, i2 0)
  %tmp_1665 = sub i15 %p_shl637_cast, %tmp_2097_cast
  %tmp_1666 = add i15 %tmp_1665, %tmp_825_cast
  %tmp_2100_cast = zext i15 %tmp_1666 to i64
  %shuffle_conv_3x3_add_18 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_2100_cast
  %shuffle_conv_3x3_loa_18 = load float* %shuffle_conv_3x3_add_18, align 4
  %tmp_833 = add i8 %tmp_829, %co181_cast
  %tmp_1115_cast = sext i8 %tmp_833 to i32
  %tmp_834_cast = zext i32 %tmp_1115_cast to i35
  %tmp_1667 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_833, i2 0)
  %tmp_1668 = sext i10 %tmp_1667 to i34
  %p_shl636_cast = zext i34 %tmp_1668 to i35
  %tmp_1669 = sub i35 %p_shl636_cast, %tmp_834_cast
  %tmp_2103_cast = sext i35 %tmp_1669 to i36
  %tmp_1670 = add i36 %tmp_2103_cast, %tmp_818_cast1
  %tmp_1671 = trunc i36 %tmp_1670 to i11
  %tmp_1672 = trunc i36 %tmp_1670 to i9
  %p_shl635_cast = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_1672, i2 0)
  %tmp_1673 = sub i11 %p_shl635_cast, %tmp_1671
  %tmp_1674 = add i11 %tmp_1673, %tmp_825_cast1
  %tmp_2107_cast = zext i11 %tmp_1674 to i64
  %weights_96_1_3x3_add_3 = getelementptr [864 x float]* @weights_96_1_3x3, i64 0, i64 %tmp_2107_cast
  store float %shuffle_conv_3x3_loa_18, float* %weights_96_1_3x3_add_3, align 4
  br label %.preheader398

.preheader397.loopexit:                           ; preds = %.preheader396
  br label %.preheader397

.preheader397:                                    ; preds = %.preheader397.preheader, %.preheader397.loopexit
  %i176 = phi i5 [ %i_177, %.preheader397.loopexit ], [ 0, %.preheader397.preheader ]
  %i177_cast = zext i5 %i176 to i8
  %i177_cast1 = zext i5 %i176 to i12
  %exitcond35 = icmp eq i5 %i176, -8
  %empty_698 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_177 = add i5 %i176, 1
  br i1 %exitcond35, label %202, label %.preheader396.preheader

.preheader396.preheader:                          ; preds = %.preheader397
  br label %.preheader396

.preheader396:                                    ; preds = %.preheader396.preheader, %201
  %k68 = phi i3 [ %k_69, %201 ], [ 0, %.preheader396.preheader ]
  %exitcond34 = icmp eq i3 %k68, -4
  %empty_699 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_69 = add i3 %k68, 1
  br i1 %exitcond34, label %.preheader397.loopexit, label %201

; <label>:201                                     ; preds = %.preheader396
  %tmp_1658 = trunc i3 %k68 to i2
  %p_shl235 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1658, i5 0)
  %p_shl246_cast = zext i7 %p_shl235 to i8
  %p_shl236 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1658, i3 0)
  %p_shl247_cast = zext i5 %p_shl236 to i8
  %tmp_820 = sub i8 %p_shl246_cast, %p_shl247_cast
  %tmp_1092_cast = sext i8 %tmp_820 to i12
  %tmp82 = add i12 -1480, %tmp_1092_cast
  %tmp_821 = add i12 %i177_cast1, %tmp82
  %tmp_822 = zext i12 %tmp_821 to i64
  %bias_addr_55 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_822
  %bias_load_55 = load float* %bias_addr_55, align 4
  %tmp_823 = add i8 %tmp_820, %i177_cast
  %tmp_1096_cast = sext i8 %tmp_823 to i32
  %tmp_824 = zext i32 %tmp_1096_cast to i64
  %bias_96_addr_9 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_824
  store float %bias_load_55, float* %bias_96_addr_9, align 4
  br label %.preheader396

; <label>:202                                     ; preds = %.preheader397
  call fastcc void @subconv_3x3_4_no_rel([3456 x float]* @buffer1_1_96_4x4_p, [864 x float]* @weights_96_1_3x3, [96 x float]* @bias_96, [3456 x float]* @buffer0_1_96_4x4_p) nounwind
  br label %.loopexit834

.loopexit834.loopexit:                            ; preds = %.preheader395
  br label %.loopexit834

.loopexit834:                                     ; preds = %.loopexit834.loopexit, %202
  %co181 = phi i5 [ 0, %202 ], [ %co_182, %.loopexit834.loopexit ]
  %co183_cast = zext i5 %co181 to i13
  %exitcond33 = icmp eq i5 %co181, -8
  %empty_700 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_182 = add i5 %co181, 1
  br i1 %exitcond33, label %.preheader393.preheader, label %.preheader395.preheader

.preheader393.preheader:                          ; preds = %.loopexit834
  br label %.preheader393

.preheader395.preheader:                          ; preds = %.loopexit834
  %tmp_1656 = trunc i5 %co181 to i2
  %p_shl234 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1656, i5 0)
  %p_shl248_cast = zext i7 %p_shl234 to i8
  %tmp_1657 = shl i5 %co181, 3
  %p_shl249_cast = zext i5 %tmp_1657 to i8
  %tmp_819 = sub i8 %p_shl248_cast, %p_shl249_cast
  %p_lshr_f25_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co181, i32 2, i32 4)
  %tmp_1100_cast = zext i3 %p_lshr_f25_cast to i8
  br label %.preheader395

.preheader395.loopexit:                           ; preds = %.preheader394
  br label %.preheader395

.preheader395:                                    ; preds = %.preheader395.loopexit, %.preheader395.preheader
  %ci76 = phi i5 [ 0, %.preheader395.preheader ], [ %ci_77, %.preheader395.loopexit ]
  %ci76_cast = zext i5 %ci76 to i8
  %exitcond32 = icmp eq i5 %ci76, -8
  %empty_701 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_77 = add i5 %ci76, 1
  br i1 %exitcond32, label %.loopexit834.loopexit, label %.preheader394.preheader

.preheader394.preheader:                          ; preds = %.preheader395
  %tmp_826_cast = zext i5 %ci76 to i19
  %tmp_827 = add i8 %tmp_819, %ci76_cast
  %tmp_828_cast = sext i8 %tmp_827 to i15
  br label %.preheader394

.preheader394:                                    ; preds = %203, %.preheader394.preheader
  %i182 = phi i5 [ %i_183, %203 ], [ 0, %.preheader394.preheader ]
  %exitcond31 = icmp eq i5 %i182, -16
  %empty_702 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %i_183 = add i5 %i182, 1
  br i1 %exitcond31, label %.preheader395.loopexit, label %203

; <label>:203                                     ; preds = %.preheader394
  %tmp_1679 = trunc i5 %i182 to i4
  %p_shl241 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1679, i5 0)
  %p_shl254_cast = zext i9 %p_shl241 to i10
  %p_shl242 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1679, i3 0)
  %p_shl255_cast1 = zext i7 %p_shl242 to i8
  %p_shl255_cast = zext i7 %p_shl242 to i10
  %tmp_841 = sub i10 %p_shl254_cast, %p_shl255_cast
  %tmp_1118_cast = sext i10 %tmp_841 to i13
  %tmp83 = add i13 -3848, %tmp_1118_cast
  %tmp_842 = add i13 %tmp83, %co183_cast
  %tmp_1680 = call i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13 %tmp_842, i5 0)
  %p_shl641_cast = zext i18 %tmp_1680 to i19
  %tmp_1681 = call i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13 %tmp_842, i3 0)
  %p_shl642_cast = zext i16 %tmp_1681 to i19
  %tmp_1682 = sub i19 %p_shl641_cast, %p_shl642_cast
  %tmp_1683 = add i19 %tmp_826_cast, %tmp_1682
  %tmp_2118_cast = sext i19 %tmp_1683 to i64
  %shuffle_conv_1x1_add_34 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_2118_cast
  %shuffle_conv_1x1_loa_34 = load float* %shuffle_conv_1x1_add_34, align 4
  %tmp_1684 = shl i5 %i182, 1
  %p_shl256_cast = zext i5 %tmp_1684 to i8
  %tmp_843 = sub i8 %p_shl255_cast1, %p_shl256_cast
  %tmp_844 = add i8 %tmp_843, %tmp_1100_cast
  %tmp_1685 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_844, i7 0)
  %tmp_1686 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_844, i5 0)
  %p_shl640_cast = sext i13 %tmp_1686 to i15
  %tmp_1687 = sub i15 %tmp_1685, %p_shl640_cast
  %tmp_1688 = add i15 %tmp_828_cast, %tmp_1687
  %tmp_2125_cast = sext i15 %tmp_1688 to i64
  %weights_96_96_1x1_ad_6 = getelementptr [9216 x float]* @weights_96_96_1x1, i64 0, i64 %tmp_2125_cast
  store float %shuffle_conv_1x1_loa_34, float* %weights_96_96_1x1_ad_6, align 4
  br label %.preheader394

.preheader393.loopexit:                           ; preds = %.preheader392
  br label %.preheader393

.preheader393:                                    ; preds = %.preheader393.preheader, %.preheader393.loopexit
  %i178 = phi i5 [ %i_179, %.preheader393.loopexit ], [ 0, %.preheader393.preheader ]
  %i179_cast = zext i5 %i178 to i8
  %i179_cast1 = zext i5 %i178 to i12
  %exitcond30 = icmp eq i5 %i178, -8
  %empty_703 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_179 = add i5 %i178, 1
  br i1 %exitcond30, label %205, label %.preheader392.preheader

.preheader392.preheader:                          ; preds = %.preheader393
  br label %.preheader392

.preheader392:                                    ; preds = %.preheader392.preheader, %204
  %k70 = phi i3 [ %k_71, %204 ], [ 0, %.preheader392.preheader ]
  %exitcond29 = icmp eq i3 %k70, -4
  %empty_704 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_71 = add i3 %k70, 1
  br i1 %exitcond29, label %.preheader393.loopexit, label %204

; <label>:204                                     ; preds = %.preheader392
  %tmp_1678 = trunc i3 %k70 to i2
  %p_shl239 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1678, i5 0)
  %p_shl250_cast = zext i7 %p_shl239 to i8
  %p_shl240 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1678, i3 0)
  %p_shl251_cast = zext i5 %p_shl240 to i8
  %tmp_836 = sub i8 %p_shl250_cast, %p_shl251_cast
  %tmp_1102_cast = sext i8 %tmp_836 to i12
  %tmp84 = add i12 -1384, %tmp_1102_cast
  %tmp_837 = add i12 %i179_cast1, %tmp84
  %tmp_838 = zext i12 %tmp_837 to i64
  %bias_addr_56 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_838
  %bias_load_56 = load float* %bias_addr_56, align 4
  %tmp_839 = add i8 %tmp_836, %i179_cast
  %tmp_1106_cast = sext i8 %tmp_839 to i32
  %tmp_840 = zext i32 %tmp_1106_cast to i64
  %bias_96_addr_10 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_840
  store float %bias_load_56, float* %bias_96_addr_10, align 4
  br label %.preheader392

; <label>:205                                     ; preds = %.preheader393
  call fastcc void @subconv_1x1_4_p([3456 x float]* @buffer0_1_96_4x4_p, [9216 x float]* @weights_96_96_1x1, [96 x float]* @bias_96, [3456 x float]* @buffer1_1_96_4x4_p) nounwind
  br label %.loopexit833

.loopexit833.loopexit:                            ; preds = %.preheader391
  br label %.loopexit833

.loopexit833:                                     ; preds = %.loopexit833.loopexit, %205
  %co183 = phi i7 [ 0, %205 ], [ %co_184, %.loopexit833.loopexit ]
  %exitcond28 = icmp eq i7 %co183, -32
  %empty_705 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) nounwind
  %co_184 = add i7 %co183, 1
  br i1 %exitcond28, label %207, label %.preheader391.preheader

.preheader391.preheader:                          ; preds = %.loopexit833
  %tmp_1675 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co183, i3 0)
  %p_shl643_cast = zext i10 %tmp_1675 to i11
  %tmp_1676 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co183, i1 false)
  %p_shl644_cast = zext i8 %tmp_1676 to i11
  %tmp_1677 = sub i11 %p_shl643_cast, %p_shl644_cast
  %tmp_2110_cast = sext i11 %tmp_1677 to i12
  br label %.preheader391

.preheader391.loopexit:                           ; preds = %.preheader390
  br label %.preheader391

.preheader391:                                    ; preds = %.preheader391.loopexit, %.preheader391.preheader
  %h126 = phi i3 [ 0, %.preheader391.preheader ], [ %h_127, %.preheader391.loopexit ]
  %exitcond27 = icmp eq i3 %h126, -4
  %empty_706 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %h_127 = add i3 %h126, 1
  br i1 %exitcond27, label %.loopexit833.loopexit, label %.preheader390.preheader

.preheader390.preheader:                          ; preds = %.preheader391
  %tmp_846_cast1 = zext i3 %h_127 to i12
  %tmp_1695 = add i12 %tmp_2110_cast, %tmp_846_cast1
  %tmp_1696 = trunc i12 %tmp_1695 to i11
  %p_shl645_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1696, i3 0)
  %tmp_1697 = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_1695, i1 false)
  %p_shl646_cast = sext i13 %tmp_1697 to i14
  %tmp_1698 = sub i14 %p_shl645_cast, %p_shl646_cast
  br label %.preheader390

.preheader390:                                    ; preds = %206, %.preheader390.preheader
  %w125 = phi i3 [ %w_126, %206 ], [ 0, %.preheader390.preheader ]
  %exitcond26 = icmp eq i3 %w125, -4
  %empty_707 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %w_126 = add i3 %w125, 1
  br i1 %exitcond26, label %.preheader391.loopexit, label %206

; <label>:206                                     ; preds = %.preheader390
  %tmp_849_cast = zext i3 %w_126 to i14
  %tmp_1707 = add i14 %tmp_1698, %tmp_849_cast
  %tmp_2146_cast = zext i14 %tmp_1707 to i64
  %shuffleunit2_0_outpu_2 = getelementptr [6912 x float]* @shuffleunit2_0_outpu, i64 0, i64 %tmp_2146_cast
  %buffer0_1_96_4x4_p_a_3 = getelementptr [3456 x float]* @buffer0_1_96_4x4_p, i64 0, i64 %tmp_2146_cast
  %shuffleunit2_0_outpu_3 = load float* %shuffleunit2_0_outpu_2, align 4
  store float %shuffleunit2_0_outpu_3, float* %buffer0_1_96_4x4_p_a_3, align 4
  br label %.preheader390

; <label>:207                                     ; preds = %.loopexit833
  call fastcc void @shuffle_96_p([3456 x float]* @buffer0_1_96_4x4_p, [6912 x float]* @shuffleunit2_1_outpu) nounwind
  br label %.loopexit832

.loopexit832.loopexit:                            ; preds = %.preheader389
  br label %.loopexit832

.loopexit832:                                     ; preds = %.loopexit832.loopexit, %207
  %co185 = phi i7 [ 0, %207 ], [ %co_186, %.loopexit832.loopexit ]
  %co186_cast = zext i7 %co185 to i8
  %exitcond25 = icmp eq i7 %co185, -32
  %empty_708 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) nounwind
  %co_186 = add i7 %co185, 1
  br i1 %exitcond25, label %.preheader387.preheader, label %.preheader389.preheader

.preheader387.preheader:                          ; preds = %.loopexit832
  br label %.preheader387

.preheader389.preheader:                          ; preds = %.loopexit832
  %tmp_845 = add i8 %co186_cast, 96
  %tmp_1689 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %tmp_845, i3 0)
  %p_shl649_cast = zext i11 %tmp_1689 to i12
  %tmp_1690 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_845, i1 false)
  %p_shl650_cast = zext i9 %tmp_1690 to i12
  %tmp_1691 = sub i12 %p_shl649_cast, %p_shl650_cast
  %tmp_2128_cast = sext i12 %tmp_1691 to i13
  %tmp_1692 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co185, i3 0)
  %p_shl647_cast = zext i10 %tmp_1692 to i11
  %tmp_1693 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co185, i1 false)
  %p_shl648_cast = zext i8 %tmp_1693 to i11
  %tmp_1694 = sub i11 %p_shl647_cast, %p_shl648_cast
  %tmp_2131_cast = sext i11 %tmp_1694 to i12
  br label %.preheader389

.preheader389.loopexit:                           ; preds = %.preheader388
  br label %.preheader389

.preheader389:                                    ; preds = %.preheader389.loopexit, %.preheader389.preheader
  %h128 = phi i3 [ 0, %.preheader389.preheader ], [ %h_129, %.preheader389.loopexit ]
  %exitcond24 = icmp eq i3 %h128, -4
  %empty_709 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %h_129 = add i3 %h128, 1
  br i1 %exitcond24, label %.loopexit832.loopexit, label %.preheader388.preheader

.preheader388.preheader:                          ; preds = %.preheader389
  %tmp_848_cast1 = zext i3 %h_129 to i12
  %tmp_848_cast = zext i3 %h_129 to i13
  %tmp_1701 = add i13 %tmp_848_cast, %tmp_2128_cast
  %tmp_1702 = trunc i13 %tmp_1701 to i11
  %p_shl653_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1702, i3 0)
  %p_shl654_cast = call i14 @_ssdm_op_BitConcatenate.i14.i13.i1(i13 %tmp_1701, i1 false)
  %tmp_1703 = sub i14 %p_shl653_cast, %p_shl654_cast
  %tmp_1704 = add i12 %tmp_848_cast1, %tmp_2131_cast
  %tmp_1705 = trunc i12 %tmp_1704 to i10
  %p_shl651_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_1705, i3 0)
  %p_shl652_cast = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_1704, i1 false)
  %tmp_1706 = sub i13 %p_shl651_cast, %p_shl652_cast
  br label %.preheader388

.preheader388:                                    ; preds = %208, %.preheader388.preheader
  %w127 = phi i3 [ %w_128, %208 ], [ 0, %.preheader388.preheader ]
  %exitcond23 = icmp eq i3 %w127, -4
  %empty_710 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %w_128 = add i3 %w127, 1
  br i1 %exitcond23, label %.preheader389.loopexit, label %208

; <label>:208                                     ; preds = %.preheader388
  %tmp_855_cast1 = zext i3 %w_128 to i13
  %tmp_855_cast = zext i3 %w_128 to i14
  %tmp_1708 = add i14 %tmp_1703, %tmp_855_cast
  %tmp_2147_cast = zext i14 %tmp_1708 to i64
  %shuffleunit2_1_outpu = getelementptr [6912 x float]* @shuffleunit2_1_outpu, i64 0, i64 %tmp_2147_cast
  %tmp_1709 = add i13 %tmp_1706, %tmp_855_cast1
  %tmp_2148_cast = zext i13 %tmp_1709 to i64
  %buffer0_1_96_4x4_p_a_4 = getelementptr [3456 x float]* @buffer0_1_96_4x4_p, i64 0, i64 %tmp_2148_cast
  %shuffleunit2_1_outpu_1 = load float* %shuffleunit2_1_outpu, align 4
  store float %shuffleunit2_1_outpu_1, float* %buffer0_1_96_4x4_p_a_4, align 4
  br label %.preheader388

.preheader387.loopexit:                           ; preds = %.preheader386
  br label %.preheader387

.preheader387:                                    ; preds = %.preheader387.preheader, %.preheader387.loopexit
  %co187 = phi i5 [ %co_188, %.preheader387.loopexit ], [ 0, %.preheader387.preheader ]
  %co188_cast = zext i5 %co187 to i13
  %exitcond22 = icmp eq i5 %co187, -8
  %empty_711 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_188 = add i5 %co187, 1
  br i1 %exitcond22, label %.preheader384.preheader, label %.preheader386.preheader

.preheader384.preheader:                          ; preds = %.preheader387
  br label %.preheader384

.preheader386.preheader:                          ; preds = %.preheader387
  %tmp_1699 = trunc i5 %co187 to i2
  %p_shl243 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1699, i5 0)
  %p_shl257_cast = zext i7 %p_shl243 to i8
  %tmp_1700 = shl i5 %co187, 3
  %p_shl258_cast = zext i5 %tmp_1700 to i8
  %tmp_847 = sub i8 %p_shl257_cast, %p_shl258_cast
  %p_lshr_f26_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co187, i32 2, i32 4)
  %tmp_1130_cast = zext i3 %p_lshr_f26_cast to i8
  br label %.preheader386

.preheader386.loopexit:                           ; preds = %.preheader385
  br label %.preheader386

.preheader386:                                    ; preds = %.preheader386.loopexit, %.preheader386.preheader
  %ci78 = phi i5 [ 0, %.preheader386.preheader ], [ %ci_79, %.preheader386.loopexit ]
  %ci78_cast = zext i5 %ci78 to i8
  %exitcond21 = icmp eq i5 %ci78, -8
  %empty_712 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_79 = add i5 %ci78, 1
  br i1 %exitcond21, label %.preheader387.loopexit, label %.preheader385.preheader

.preheader385.preheader:                          ; preds = %.preheader386
  %tmp_850_cast1 = zext i5 %ci78 to i19
  %tmp_851 = add i8 %tmp_847, %ci78_cast
  %tmp_852_cast = sext i8 %tmp_851 to i15
  br label %.preheader385

.preheader385:                                    ; preds = %209, %.preheader385.preheader
  %i186 = phi i5 [ %i_187, %209 ], [ 0, %.preheader385.preheader ]
  %exitcond20 = icmp eq i5 %i186, -16
  %empty_713 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %i_187 = add i5 %i186, 1
  br i1 %exitcond20, label %.preheader386.loopexit, label %209

; <label>:209                                     ; preds = %.preheader385
  %tmp_1711 = trunc i5 %i186 to i4
  %p_shl246 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1711, i5 0)
  %p_shl261_cast = zext i9 %p_shl246 to i10
  %p_shl247 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1711, i3 0)
  %p_shl262_cast1 = zext i7 %p_shl247 to i8
  %p_shl262_cast = zext i7 %p_shl247 to i10
  %tmp_861 = sub i10 %p_shl261_cast, %p_shl262_cast
  %tmp_1145_cast = sext i10 %tmp_861 to i13
  %tmp85 = add i13 -3464, %tmp_1145_cast
  %tmp_863 = add i13 %tmp85, %co188_cast
  %tmp_1712 = call i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13 %tmp_863, i5 0)
  %p_shl657_cast = zext i18 %tmp_1712 to i19
  %tmp_1713 = call i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13 %tmp_863, i3 0)
  %p_shl658_cast = zext i16 %tmp_1713 to i19
  %tmp_1714 = sub i19 %p_shl657_cast, %p_shl658_cast
  %tmp_1715 = add i19 %tmp_850_cast1, %tmp_1714
  %tmp_2156_cast = sext i19 %tmp_1715 to i64
  %shuffle_conv_1x1_add_35 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_2156_cast
  %shuffle_conv_1x1_loa_35 = load float* %shuffle_conv_1x1_add_35, align 4
  %tmp_1716 = shl i5 %i186, 1
  %p_shl263_cast = zext i5 %tmp_1716 to i8
  %tmp_864 = sub i8 %p_shl262_cast1, %p_shl263_cast
  %tmp_866 = add i8 %tmp_864, %tmp_1130_cast
  %tmp_1717 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_866, i7 0)
  %tmp_1718 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_866, i5 0)
  %p_shl656_cast = sext i13 %tmp_1718 to i15
  %tmp_1719 = sub i15 %tmp_1717, %p_shl656_cast
  %tmp_1720 = add i15 %tmp_852_cast, %tmp_1719
  %tmp_2163_cast = sext i15 %tmp_1720 to i64
  %weights_96_96_1x1_ad_7 = getelementptr [9216 x float]* @weights_96_96_1x1, i64 0, i64 %tmp_2163_cast
  store float %shuffle_conv_1x1_loa_35, float* %weights_96_96_1x1_ad_7, align 4
  br label %.preheader385

.preheader384.loopexit:                           ; preds = %.preheader383
  br label %.preheader384

.preheader384:                                    ; preds = %.preheader384.preheader, %.preheader384.loopexit
  %i184 = phi i5 [ %i_185, %.preheader384.loopexit ], [ 0, %.preheader384.preheader ]
  %i185_cast = zext i5 %i184 to i8
  %i185_cast1 = zext i5 %i184 to i12
  %exitcond19 = icmp eq i5 %i184, -8
  %empty_714 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_185 = add i5 %i184, 1
  br i1 %exitcond19, label %211, label %.preheader383.preheader

.preheader383.preheader:                          ; preds = %.preheader384
  br label %.preheader383

.preheader383:                                    ; preds = %.preheader383.preheader, %210
  %k72 = phi i3 [ %k_73, %210 ], [ 0, %.preheader383.preheader ]
  %exitcond18 = icmp eq i3 %k72, -4
  %empty_715 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_73 = add i3 %k72, 1
  br i1 %exitcond18, label %.preheader384.loopexit, label %210

; <label>:210                                     ; preds = %.preheader383
  %tmp_1710 = trunc i3 %k72 to i2
  %p_shl244 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1710, i5 0)
  %p_shl259_cast = zext i7 %p_shl244 to i8
  %p_shl245 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1710, i3 0)
  %p_shl260_cast = zext i5 %p_shl245 to i8
  %tmp_856 = sub i8 %p_shl259_cast, %p_shl260_cast
  %tmp_1134_cast = sext i8 %tmp_856 to i12
  %tmp86 = add i12 -1288, %tmp_1134_cast
  %tmp_857 = add i12 %i185_cast1, %tmp86
  %tmp_858 = zext i12 %tmp_857 to i64
  %bias_addr_57 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_858
  %bias_load_57 = load float* %bias_addr_57, align 4
  %tmp_859 = add i8 %tmp_856, %i185_cast
  %tmp_1138_cast = sext i8 %tmp_859 to i32
  %tmp_860 = zext i32 %tmp_1138_cast to i64
  %bias_96_addr_11 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_860
  store float %bias_load_57, float* %bias_96_addr_11, align 4
  br label %.preheader383

; <label>:211                                     ; preds = %.preheader384
  call fastcc void @subconv_1x1_4_p([3456 x float]* @buffer0_1_96_4x4_p, [9216 x float]* @weights_96_96_1x1, [96 x float]* @bias_96, [3456 x float]* @buffer1_1_96_4x4_p) nounwind
  br label %.loopexit831

.loopexit831.loopexit:                            ; preds = %.preheader382
  br label %.loopexit831

.loopexit831:                                     ; preds = %.loopexit831.loopexit, %211
  %co189 = phi i5 [ 0, %211 ], [ %co_190, %.loopexit831.loopexit ]
  %co191_cast = zext i5 %co189 to i8
  %co191_cast1 = zext i5 %co189 to i11
  %exitcond17 = icmp eq i5 %co189, -8
  %empty_716 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_190 = add i5 %co189, 1
  br i1 %exitcond17, label %.preheader379.preheader, label %.preheader382.preheader

.preheader382.preheader:                          ; preds = %.loopexit831
  br label %.preheader382

.preheader379.preheader:                          ; preds = %.loopexit831
  br label %.preheader379

.preheader382.loopexit:                           ; preds = %.preheader381
  br label %.preheader382

.preheader382:                                    ; preds = %.preheader382.preheader, %.preheader382.loopexit
  %w129 = phi i2 [ %w_130, %.preheader382.loopexit ], [ 0, %.preheader382.preheader ]
  %exitcond16 = icmp eq i2 %w129, -1
  %empty_717 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %w_130 = add i2 %w129, 1
  br i1 %exitcond16, label %.loopexit831.loopexit, label %.preheader381.preheader

.preheader381.preheader:                          ; preds = %.preheader382
  %tmp_867_cast1 = zext i2 %w129 to i36
  %tmp_867_cast = zext i2 %w129 to i15
  br label %.preheader381

.preheader381.loopexit:                           ; preds = %.preheader380
  br label %.preheader381

.preheader381:                                    ; preds = %.preheader381.loopexit, %.preheader381.preheader
  %h130 = phi i2 [ 0, %.preheader381.preheader ], [ %h_131, %.preheader381.loopexit ]
  %exitcond15 = icmp eq i2 %h130, -1
  %empty_718 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
  %h_131 = add i2 %h130, 1
  br i1 %exitcond15, label %.preheader382.loopexit, label %.preheader380.preheader

.preheader380.preheader:                          ; preds = %.preheader381
  %tmp_874_cast1 = zext i2 %h130 to i11
  %tmp_874_cast = zext i2 %h130 to i15
  br label %.preheader380

.preheader380:                                    ; preds = %212, %.preheader380.preheader
  %i192 = phi i3 [ %i_193, %212 ], [ 0, %.preheader380.preheader ]
  %exitcond14 = icmp eq i3 %i192, -4
  %empty_719 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %i_193 = add i3 %i192, 1
  br i1 %exitcond14, label %.preheader381.loopexit, label %212

; <label>:212                                     ; preds = %.preheader380
  %tmp_1724 = trunc i3 %i192 to i2
  %p_shl251 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1724, i5 0)
  %p_shl270_cast = zext i7 %p_shl251 to i8
  %p_shl252 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1724, i3 0)
  %p_shl271_cast = zext i5 %p_shl252 to i8
  %tmp_878 = sub i8 %p_shl270_cast, %p_shl271_cast
  %tmp_1171_cast = sext i8 %tmp_878 to i11
  %tmp87 = add i11 984, %tmp_1171_cast
  %tmp_880 = add i11 %co191_cast1, %tmp87
  %tmp_881_cast = zext i11 %tmp_880 to i14
  %tmp_1725 = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_880, i2 0)
  %p_shl662_cast = zext i13 %tmp_1725 to i14
  %tmp_1726 = sub i14 %p_shl662_cast, %tmp_881_cast
  %tmp_2171_cast = sext i14 %tmp_1726 to i15
  %tmp_1727 = add i15 %tmp_2171_cast, %tmp_867_cast
  %tmp_1728 = shl i15 %tmp_1727, 2
  %tmp_1729 = sub i15 %tmp_1728, %tmp_1727
  %tmp_1730 = add i15 %tmp_1729, %tmp_874_cast
  %tmp_2175_cast = zext i15 %tmp_1730 to i64
  %shuffle_conv_3x3_add_19 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_2175_cast
  %shuffle_conv_3x3_loa_19 = load float* %shuffle_conv_3x3_add_19, align 4
  %tmp_883 = add i8 %tmp_878, %co191_cast
  %tmp_1175_cast = sext i8 %tmp_883 to i32
  %tmp_884_cast = zext i32 %tmp_1175_cast to i35
  %tmp_1731 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_883, i2 0)
  %tmp_1732 = sext i10 %tmp_1731 to i34
  %p_shl660_cast = zext i34 %tmp_1732 to i35
  %tmp_1733 = sub i35 %p_shl660_cast, %tmp_884_cast
  %tmp_2178_cast = sext i35 %tmp_1733 to i36
  %tmp_1734 = add i36 %tmp_2178_cast, %tmp_867_cast1
  %tmp_1735 = trunc i36 %tmp_1734 to i11
  %tmp_1736 = trunc i36 %tmp_1734 to i9
  %p_shl659_cast = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_1736, i2 0)
  %tmp_1737 = sub i11 %p_shl659_cast, %tmp_1735
  %tmp_1738 = add i11 %tmp_1737, %tmp_874_cast1
  %tmp_2182_cast = zext i11 %tmp_1738 to i64
  %weights_96_1_3x3_add_4 = getelementptr [864 x float]* @weights_96_1_3x3, i64 0, i64 %tmp_2182_cast
  store float %shuffle_conv_3x3_loa_19, float* %weights_96_1_3x3_add_4, align 4
  br label %.preheader380

.preheader379.loopexit:                           ; preds = %.preheader378
  br label %.preheader379

.preheader379:                                    ; preds = %.preheader379.preheader, %.preheader379.loopexit
  %i188 = phi i5 [ %i_189, %.preheader379.loopexit ], [ 0, %.preheader379.preheader ]
  %i189_cast = zext i5 %i188 to i8
  %i189_cast1 = zext i5 %i188 to i12
  %exitcond13 = icmp eq i5 %i188, -8
  %empty_720 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_189 = add i5 %i188, 1
  br i1 %exitcond13, label %214, label %.preheader378.preheader

.preheader378.preheader:                          ; preds = %.preheader379
  br label %.preheader378

.preheader378:                                    ; preds = %.preheader378.preheader, %213
  %k74 = phi i3 [ %k_75, %213 ], [ 0, %.preheader378.preheader ]
  %exitcond12 = icmp eq i3 %k74, -4
  %empty_721 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_75 = add i3 %k74, 1
  br i1 %exitcond12, label %.preheader379.loopexit, label %213

; <label>:213                                     ; preds = %.preheader378
  %tmp_1723 = trunc i3 %k74 to i2
  %p_shl249 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1723, i5 0)
  %p_shl264_cast = zext i7 %p_shl249 to i8
  %p_shl250 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1723, i3 0)
  %p_shl265_cast = zext i5 %p_shl250 to i8
  %tmp_869 = sub i8 %p_shl264_cast, %p_shl265_cast
  %tmp_1152_cast = sext i8 %tmp_869 to i12
  %tmp88 = add i12 -1192, %tmp_1152_cast
  %tmp_870 = add i12 %i189_cast1, %tmp88
  %tmp_871 = zext i12 %tmp_870 to i64
  %bias_addr_58 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_871
  %bias_load_58 = load float* %bias_addr_58, align 4
  %tmp_872 = add i8 %tmp_869, %i189_cast
  %tmp_1156_cast = sext i8 %tmp_872 to i32
  %tmp_873 = zext i32 %tmp_1156_cast to i64
  %bias_96_addr_12 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_873
  store float %bias_load_58, float* %bias_96_addr_12, align 4
  br label %.preheader378

; <label>:214                                     ; preds = %.preheader379
  call fastcc void @subconv_3x3_4_no_rel([3456 x float]* @buffer1_1_96_4x4_p, [864 x float]* @weights_96_1_3x3, [96 x float]* @bias_96, [3456 x float]* @buffer0_1_96_4x4_p) nounwind
  br label %.loopexit830

.loopexit830.loopexit:                            ; preds = %.preheader377
  br label %.loopexit830

.loopexit830:                                     ; preds = %.loopexit830.loopexit, %214
  %co191 = phi i5 [ 0, %214 ], [ %co_192, %.loopexit830.loopexit ]
  %co193_cast = zext i5 %co191 to i13
  %exitcond11 = icmp eq i5 %co191, -8
  %empty_722 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %co_192 = add i5 %co191, 1
  br i1 %exitcond11, label %.preheader375.preheader, label %.preheader377.preheader

.preheader375.preheader:                          ; preds = %.loopexit830
  br label %.preheader375

.preheader377.preheader:                          ; preds = %.loopexit830
  %tmp_1721 = trunc i5 %co191 to i2
  %p_shl248 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1721, i5 0)
  %p_shl266_cast = zext i7 %p_shl248 to i8
  %tmp_1722 = shl i5 %co191, 3
  %p_shl267_cast = zext i5 %tmp_1722 to i8
  %tmp_868 = sub i8 %p_shl266_cast, %p_shl267_cast
  %p_lshr_f27_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co191, i32 2, i32 4)
  %tmp_1160_cast = zext i3 %p_lshr_f27_cast to i8
  br label %.preheader377

.preheader377.loopexit:                           ; preds = %.preheader376
  br label %.preheader377

.preheader377:                                    ; preds = %.preheader377.loopexit, %.preheader377.preheader
  %ci80 = phi i5 [ 0, %.preheader377.preheader ], [ %ci_81, %.preheader377.loopexit ]
  %ci80_cast = zext i5 %ci80 to i8
  %exitcond10 = icmp eq i5 %ci80, -8
  %empty_723 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %ci_81 = add i5 %ci80, 1
  br i1 %exitcond10, label %.loopexit830.loopexit, label %.preheader376.preheader

.preheader376.preheader:                          ; preds = %.preheader377
  %tmp_875_cast = zext i5 %ci80 to i19
  %tmp_876 = add i8 %tmp_868, %ci80_cast
  %tmp_877_cast = sext i8 %tmp_876 to i15
  br label %.preheader376

.preheader376:                                    ; preds = %215, %.preheader376.preheader
  %i194 = phi i5 [ %i_195, %215 ], [ 0, %.preheader376.preheader ]
  %exitcond9 = icmp eq i5 %i194, -16
  %empty_724 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %i_195 = add i5 %i194, 1
  br i1 %exitcond9, label %.preheader377.loopexit, label %215

; <label>:215                                     ; preds = %.preheader376
  %tmp_1743 = trunc i5 %i194 to i4
  %p_shl255 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_1743, i5 0)
  %p_shl272_cast = zext i9 %p_shl255 to i10
  %p_shl256 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_1743, i3 0)
  %p_shl273_cast1 = zext i7 %p_shl256 to i8
  %p_shl273_cast = zext i7 %p_shl256 to i10
  %tmp_890 = sub i10 %p_shl272_cast, %p_shl273_cast
  %tmp_1178_cast = sext i10 %tmp_890 to i13
  %tmp89 = add i13 -3080, %tmp_1178_cast
  %tmp_891 = add i13 %tmp89, %co193_cast
  %tmp_1744 = call i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13 %tmp_891, i5 0)
  %p_shl665_cast = zext i18 %tmp_1744 to i19
  %tmp_1745 = call i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13 %tmp_891, i3 0)
  %p_shl666_cast = zext i16 %tmp_1745 to i19
  %tmp_1746 = sub i19 %p_shl665_cast, %p_shl666_cast
  %tmp_1747 = add i19 %tmp_875_cast, %tmp_1746
  %tmp_2193_cast = sext i19 %tmp_1747 to i64
  %shuffle_conv_1x1_add_36 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_2193_cast
  %shuffle_conv_1x1_loa_36 = load float* %shuffle_conv_1x1_add_36, align 4
  %tmp_1748 = shl i5 %i194, 1
  %p_shl274_cast = zext i5 %tmp_1748 to i8
  %tmp_892 = sub i8 %p_shl273_cast1, %p_shl274_cast
  %tmp_893 = add i8 %tmp_892, %tmp_1160_cast
  %tmp_1749 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_893, i7 0)
  %tmp_1750 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_893, i5 0)
  %p_shl664_cast = sext i13 %tmp_1750 to i15
  %tmp_1751 = sub i15 %tmp_1749, %p_shl664_cast
  %tmp_1752 = add i15 %tmp_877_cast, %tmp_1751
  %tmp_2200_cast = sext i15 %tmp_1752 to i64
  %weights_96_96_1x1_ad_8 = getelementptr [9216 x float]* @weights_96_96_1x1, i64 0, i64 %tmp_2200_cast
  store float %shuffle_conv_1x1_loa_36, float* %weights_96_96_1x1_ad_8, align 4
  br label %.preheader376

.preheader375.loopexit:                           ; preds = %.preheader374
  br label %.preheader375

.preheader375:                                    ; preds = %.preheader375.preheader, %.preheader375.loopexit
  %i190 = phi i5 [ %i_191, %.preheader375.loopexit ], [ 0, %.preheader375.preheader ]
  %i191_cast = zext i5 %i190 to i8
  %i191_cast1 = zext i5 %i190 to i12
  %exitcond8 = icmp eq i5 %i190, -8
  %empty_725 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind
  %i_191 = add i5 %i190, 1
  br i1 %exitcond8, label %217, label %.preheader374.preheader

.preheader374.preheader:                          ; preds = %.preheader375
  br label %.preheader374

.preheader374:                                    ; preds = %.preheader374.preheader, %216
  %k76 = phi i3 [ %k_77, %216 ], [ 0, %.preheader374.preheader ]
  %exitcond7 = icmp eq i3 %k76, -4
  %empty_726 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %k_77 = add i3 %k76, 1
  br i1 %exitcond7, label %.preheader375.loopexit, label %216

; <label>:216                                     ; preds = %.preheader374
  %tmp_1742 = trunc i3 %k76 to i2
  %p_shl253 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_1742, i5 0)
  %p_shl268_cast = zext i7 %p_shl253 to i8
  %p_shl254 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_1742, i3 0)
  %p_shl269_cast = zext i5 %p_shl254 to i8
  %tmp_885 = sub i8 %p_shl268_cast, %p_shl269_cast
  %tmp_1162_cast = sext i8 %tmp_885 to i12
  %tmp90 = add i12 -1096, %tmp_1162_cast
  %tmp_886 = add i12 %i191_cast1, %tmp90
  %tmp_887 = zext i12 %tmp_886 to i64
  %bias_addr_59 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_887
  %bias_load_59 = load float* %bias_addr_59, align 4
  %tmp_888 = add i8 %tmp_885, %i191_cast
  %tmp_1166_cast = sext i8 %tmp_888 to i32
  %tmp_889 = zext i32 %tmp_1166_cast to i64
  %bias_96_addr_13 = getelementptr inbounds [96 x float]* @bias_96, i64 0, i64 %tmp_889
  store float %bias_load_59, float* %bias_96_addr_13, align 4
  br label %.preheader374

; <label>:217                                     ; preds = %.preheader375
  call fastcc void @subconv_1x1_4_p([3456 x float]* @buffer0_1_96_4x4_p, [9216 x float]* @weights_96_96_1x1, [96 x float]* @bias_96, [3456 x float]* @buffer1_1_96_4x4_p) nounwind
  br label %.loopexit829

.loopexit829.loopexit:                            ; preds = %.preheader373
  br label %.loopexit829

.loopexit829:                                     ; preds = %.loopexit829.loopexit, %217
  %co193 = phi i7 [ 0, %217 ], [ %co_194, %.loopexit829.loopexit ]
  %exitcond6 = icmp eq i7 %co193, -32
  %empty_727 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) nounwind
  %co_194 = add i7 %co193, 1
  br i1 %exitcond6, label %219, label %.preheader373.preheader

.preheader373.preheader:                          ; preds = %.loopexit829
  %tmp_1739 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co193, i3 0)
  %p_shl667_cast = zext i10 %tmp_1739 to i11
  %tmp_1740 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %co193, i1 false)
  %p_shl668_cast = zext i8 %tmp_1740 to i11
  %tmp_1741 = sub i11 %p_shl667_cast, %p_shl668_cast
  %tmp_2185_cast = sext i11 %tmp_1741 to i12
  br label %.preheader373

.preheader373.loopexit:                           ; preds = %.preheader372
  br label %.preheader373

.preheader373:                                    ; preds = %.preheader373.loopexit, %.preheader373.preheader
  %h132 = phi i3 [ 0, %.preheader373.preheader ], [ %h_133, %.preheader373.loopexit ]
  %exitcond5 = icmp eq i3 %h132, -4
  %empty_728 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %h_133 = add i3 %h132, 1
  br i1 %exitcond5, label %.loopexit829.loopexit, label %.preheader372.preheader

.preheader372.preheader:                          ; preds = %.preheader373
  %tmp_894_cast = zext i3 %h_133 to i12
  %tmp_1757 = add i12 %tmp_2185_cast, %tmp_894_cast
  %tmp_1758 = trunc i12 %tmp_1757 to i11
  %p_shl669_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1758, i3 0)
  %tmp_1759 = call i13 @_ssdm_op_BitConcatenate.i13.i12.i1(i12 %tmp_1757, i1 false)
  %p_shl670_cast = sext i13 %tmp_1759 to i14
  %tmp_1760 = sub i14 %p_shl669_cast, %p_shl670_cast
  br label %.preheader372

.preheader372:                                    ; preds = %218, %.preheader372.preheader
  %w132 = phi i3 [ %w_2, %218 ], [ 0, %.preheader372.preheader ]
  %exitcond4 = icmp eq i3 %w132, -4
  %empty_729 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %w_2 = add i3 %w132, 1
  br i1 %exitcond4, label %.preheader373.loopexit, label %218

; <label>:218                                     ; preds = %.preheader372
  %tmp_897_cast = zext i3 %w_2 to i14
  %tmp_1797 = add i14 %tmp_1760, %tmp_897_cast
  %tmp_2249_cast = zext i14 %tmp_1797 to i64
  %shuffleunit2_1_outpu_2 = getelementptr [6912 x float]* @shuffleunit2_1_outpu, i64 0, i64 %tmp_2249_cast
  %buffer0_1_96_4x4_p_a_5 = getelementptr [3456 x float]* @buffer0_1_96_4x4_p, i64 0, i64 %tmp_2249_cast
  %shuffleunit2_1_outpu_3 = load float* %shuffleunit2_1_outpu_2, align 4
  store float %shuffleunit2_1_outpu_3, float* %buffer0_1_96_4x4_p_a_5, align 4
  br label %.preheader372

; <label>:219                                     ; preds = %.loopexit829
  call fastcc void @shuffle_96_p([3456 x float]* @buffer0_1_96_4x4_p, [6912 x float]* @shuffleunit2_2_outpu) nounwind
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader371
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %219
  %ci82 = phi i8 [ 0, %219 ], [ %ci_83, %.loopexit.loopexit ]
  %exitcond3 = icmp eq i8 %ci82, -64
  %empty_730 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 192, i64 192, i64 192) nounwind
  %ci_83 = add i8 %ci82, 1
  br i1 %exitcond3, label %221, label %.preheader371.preheader

.preheader371.preheader:                          ; preds = %.loopexit
  %tmp_1753 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %ci82, i3 0)
  %p_shl671_cast = zext i11 %tmp_1753 to i12
  %tmp_1754 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %ci82, i1 false)
  %p_shl672_cast = zext i9 %tmp_1754 to i12
  %tmp_1755 = sub i12 %p_shl671_cast, %p_shl672_cast
  %tmp_2203_cast = sext i12 %tmp_1755 to i13
  %tmp_1756 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %ci82, i2 0)
  %tmp_2205_cast = zext i10 %tmp_1756 to i11
  br label %.preheader371

.preheader371.loopexit:                           ; preds = %.preheader
  br label %.preheader371

.preheader371:                                    ; preds = %.preheader371.loopexit, %.preheader371.preheader
  %w131 = phi i3 [ 0, %.preheader371.preheader ], [ %w_133, %.preheader371.loopexit ]
  %exitcond2 = icmp eq i3 %w131, -4
  %empty_731 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %w_133 = add i3 %w131, 1
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader371
  %tmp_895_cast1 = zext i3 %w_133 to i13
  %tmp_1793 = add i13 %tmp_895_cast1, %tmp_2203_cast
  %tmp_1794 = trunc i13 %tmp_1793 to i11
  %p_shl673_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_1794, i3 0)
  %p_shl674_cast = call i14 @_ssdm_op_BitConcatenate.i14.i13.i1(i13 %tmp_1793, i1 false)
  %tmp_1795 = sub i14 %p_shl673_cast, %p_shl674_cast
  %tmp_896_cast = zext i3 %w131 to i11
  %tmp_1796 = add i11 %tmp_896_cast, %tmp_2205_cast
  %tmp_2248_cast = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_1796, i2 0)
  br label %.preheader

.preheader:                                       ; preds = %220, %.preheader.preheader
  %h134 = phi i3 [ %h_135, %220 ], [ 0, %.preheader.preheader ]
  %exitcond1 = icmp eq i3 %h134, -4
  %empty_732 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %h_135 = add i3 %h134, 1
  br i1 %exitcond1, label %.preheader371.loopexit, label %220

; <label>:220                                     ; preds = %.preheader
  %tmp_898_cast = zext i3 %h_135 to i14
  %tmp_1799 = add i14 %tmp_1795, %tmp_898_cast
  %tmp_2252_cast = zext i14 %tmp_1799 to i64
  %shuffleunit2_2_outpu = getelementptr [6912 x float]* @shuffleunit2_2_outpu, i64 0, i64 %tmp_2252_cast
  %shuffleunit2_2_outpu_2 = load float* %shuffleunit2_2_outpu, align 4
  %tmp_900_cast = zext i3 %h134 to i13
  %tmp_1800 = add i13 %tmp_2248_cast, %tmp_900_cast
  %tmp_2253_cast = zext i13 %tmp_1800 to i64
  %shuffleunit2_2_outpu_3 = getelementptr [3072 x float]* @shuffleunit2_2_outpu_1, i64 0, i64 %tmp_2253_cast
  store float %shuffleunit2_2_outpu_2, float* %shuffleunit2_2_outpu_3, align 4
  br label %.preheader

; <label>:221                                     ; preds = %.loopexit
  call fastcc void @conv_last([3072 x float]* @shuffleunit2_2_outpu_1, [98304 x float]* %conv_last_weight, [512 x float]* @conv_last_bias, [8192 x float]* @conv_last_output) nounwind
  br label %222

; <label>:222                                     ; preds = %223, %221
  %co_i1 = phi i10 [ 0, %221 ], [ %co_195, %223 ]
  %exitcond_i2 = icmp eq i10 %co_i1, -512
  %empty_733 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512) nounwind
  %co_195 = add i10 %co_i1, 1
  br i1 %exitcond_i2, label %avgpool.exit.preheader, label %223

avgpool.exit.preheader:                           ; preds = %222
  br label %avgpool.exit

; <label>:223                                     ; preds = %222
  %tmp_i3 = zext i10 %co_i1 to i64
  %tmp_1761 = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %co_i1, i4 0)
  %tmp_1762 = zext i14 %tmp_1761 to i64
  %conv_last_output_add = getelementptr [8192 x float]* @conv_last_output, i64 0, i64 %tmp_1762
  %tmp_1763 = or i14 %tmp_1761, 1
  %tmp_1764 = call i64 @_ssdm_op_BitConcatenate.i64.i50.i14(i50 0, i14 %tmp_1763)
  %conv_last_output_add_1 = getelementptr [8192 x float]* @conv_last_output, i64 0, i64 %tmp_1764
  %tmp_1765 = or i14 %tmp_1761, 2
  %tmp_1766 = call i64 @_ssdm_op_BitConcatenate.i64.i50.i14(i50 0, i14 %tmp_1765)
  %conv_last_output_add_2 = getelementptr [8192 x float]* @conv_last_output, i64 0, i64 %tmp_1766
  %tmp_1767 = or i14 %tmp_1761, 3
  %tmp_1768 = call i64 @_ssdm_op_BitConcatenate.i64.i50.i14(i50 0, i14 %tmp_1767)
  %conv_last_output_add_3 = getelementptr [8192 x float]* @conv_last_output, i64 0, i64 %tmp_1768
  %tmp_1769 = or i14 %tmp_1761, 4
  %tmp_1770 = call i64 @_ssdm_op_BitConcatenate.i64.i50.i14(i50 0, i14 %tmp_1769)
  %conv_last_output_add_4 = getelementptr [8192 x float]* @conv_last_output, i64 0, i64 %tmp_1770
  %tmp_1771 = or i14 %tmp_1761, 5
  %tmp_1772 = call i64 @_ssdm_op_BitConcatenate.i64.i50.i14(i50 0, i14 %tmp_1771)
  %conv_last_output_add_5 = getelementptr [8192 x float]* @conv_last_output, i64 0, i64 %tmp_1772
  %tmp_1773 = or i14 %tmp_1761, 6
  %tmp_1774 = call i64 @_ssdm_op_BitConcatenate.i64.i50.i14(i50 0, i14 %tmp_1773)
  %conv_last_output_add_6 = getelementptr [8192 x float]* @conv_last_output, i64 0, i64 %tmp_1774
  %tmp_1775 = or i14 %tmp_1761, 7
  %tmp_1776 = call i64 @_ssdm_op_BitConcatenate.i64.i50.i14(i50 0, i14 %tmp_1775)
  %conv_last_output_add_7 = getelementptr [8192 x float]* @conv_last_output, i64 0, i64 %tmp_1776
  %tmp_1777 = or i14 %tmp_1761, 8
  %tmp_1778 = call i64 @_ssdm_op_BitConcatenate.i64.i50.i14(i50 0, i14 %tmp_1777)
  %conv_last_output_add_8 = getelementptr [8192 x float]* @conv_last_output, i64 0, i64 %tmp_1778
  %tmp_1779 = or i14 %tmp_1761, 9
  %tmp_1780 = call i64 @_ssdm_op_BitConcatenate.i64.i50.i14(i50 0, i14 %tmp_1779)
  %conv_last_output_add_9 = getelementptr [8192 x float]* @conv_last_output, i64 0, i64 %tmp_1780
  %tmp_1781 = or i14 %tmp_1761, 10
  %tmp_1782 = call i64 @_ssdm_op_BitConcatenate.i64.i50.i14(i50 0, i14 %tmp_1781)
  %conv_last_output_add_10 = getelementptr [8192 x float]* @conv_last_output, i64 0, i64 %tmp_1782
  %tmp_1783 = or i14 %tmp_1761, 11
  %tmp_1784 = call i64 @_ssdm_op_BitConcatenate.i64.i50.i14(i50 0, i14 %tmp_1783)
  %conv_last_output_add_11 = getelementptr [8192 x float]* @conv_last_output, i64 0, i64 %tmp_1784
  %tmp_1785 = or i14 %tmp_1761, 12
  %tmp_1786 = call i64 @_ssdm_op_BitConcatenate.i64.i50.i14(i50 0, i14 %tmp_1785)
  %conv_last_output_add_12 = getelementptr [8192 x float]* @conv_last_output, i64 0, i64 %tmp_1786
  %tmp_1787 = or i14 %tmp_1761, 13
  %tmp_1788 = call i64 @_ssdm_op_BitConcatenate.i64.i50.i14(i50 0, i14 %tmp_1787)
  %conv_last_output_add_13 = getelementptr [8192 x float]* @conv_last_output, i64 0, i64 %tmp_1788
  %tmp_1789 = or i14 %tmp_1761, 14
  %tmp_1790 = call i64 @_ssdm_op_BitConcatenate.i64.i50.i14(i50 0, i14 %tmp_1789)
  %conv_last_output_add_14 = getelementptr [8192 x float]* @conv_last_output, i64 0, i64 %tmp_1790
  %tmp_1791 = or i14 %tmp_1761, 15
  %tmp_1792 = call i64 @_ssdm_op_BitConcatenate.i64.i50.i14(i50 0, i14 %tmp_1791)
  %conv_last_output_add_15 = getelementptr [8192 x float]* @conv_last_output, i64 0, i64 %tmp_1792
  %conv_last_output_loa = load float* %conv_last_output_add, align 16
  %conv_last_output_loa_1 = load float* %conv_last_output_add_1, align 4
  %conv_last_output_loa_2 = load float* %conv_last_output_add_2, align 8
  %conv_last_output_loa_3 = load float* %conv_last_output_add_3, align 4
  %conv_last_output_loa_4 = load float* %conv_last_output_add_4, align 16
  %conv_last_output_loa_5 = load float* %conv_last_output_add_5, align 4
  %conv_last_output_loa_6 = load float* %conv_last_output_add_6, align 8
  %conv_last_output_loa_7 = load float* %conv_last_output_add_7, align 4
  %conv_last_output_loa_8 = load float* %conv_last_output_add_8, align 16
  %conv_last_output_loa_9 = load float* %conv_last_output_add_9, align 4
  %conv_last_output_loa_10 = load float* %conv_last_output_add_10, align 8
  %conv_last_output_loa_11 = load float* %conv_last_output_add_11, align 4
  %conv_last_output_loa_12 = load float* %conv_last_output_add_12, align 16
  %conv_last_output_loa_13 = load float* %conv_last_output_add_13, align 4
  %conv_last_output_loa_14 = load float* %conv_last_output_add_14, align 8
  %conv_last_output_loa_15 = load float* %conv_last_output_add_15, align 4
  %temp1 = fadd float %conv_last_output_loa, %conv_last_output_loa_1
  %temp2 = fadd float %conv_last_output_loa_2, %conv_last_output_loa_3
  %temp3 = fadd float %conv_last_output_loa_4, %conv_last_output_loa_5
  %temp4 = fadd float %conv_last_output_loa_6, %conv_last_output_loa_7
  %temp5 = fadd float %conv_last_output_loa_8, %conv_last_output_loa_9
  %temp6 = fadd float %conv_last_output_loa_10, %conv_last_output_loa_11
  %temp7 = fadd float %conv_last_output_loa_12, %conv_last_output_loa_13
  %temp8 = fadd float %conv_last_output_loa_14, %conv_last_output_loa_15
  %temp9 = fadd float %temp1, %temp2
  %temp10 = fadd float %temp3, %temp4
  %temp11 = fadd float %temp5, %temp6
  %temp12 = fadd float %temp7, %temp8
  %temp13 = fadd float %temp9, %temp10
  %temp14 = fadd float %temp11, %temp12
  %temp15 = fadd float %temp13, %temp14
  %tmp_i4 = fmul float %temp15, 6.250000e-02
  %avgpool_output_addr_1 = getelementptr [512 x float]* @avgpool_output, i64 0, i64 %tmp_i3
  store float %tmp_i4, float* %avgpool_output_addr_1, align 4
  br label %222

avgpool.exit:                                     ; preds = %avgpool.exit.preheader, %225
  %co_i = phi i4 [ %co_196, %225 ], [ 0, %avgpool.exit.preheader ]
  %exitcond1_i = icmp eq i4 %co_i, -6
  %empty_734 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10) nounwind
  %co_196 = add i4 %co_i, 1
  br i1 %exitcond1_i, label %fc.exit.preheader_ifconv, label %.preheader.preheader.i

fc.exit.preheader_ifconv:                         ; preds = %avgpool.exit
  ret void

.preheader.preheader.i:                           ; preds = %avgpool.exit
  %tmp_i = zext i4 %co_i to i64
  %tmp_1798 = call i13 @_ssdm_op_BitConcatenate.i13.i4.i9(i4 %co_i, i9 0)
  %tmp_2251_cast = zext i13 %tmp_1798 to i14
  br label %.preheader.i

.preheader.i:                                     ; preds = %224, %.preheader.preheader.i
  %sum_i = phi float [ %sum, %224 ], [ 0.000000e+00, %.preheader.preheader.i ]
  %ci_i = phi i10 [ %ci_84, %224 ], [ 0, %.preheader.preheader.i ]
  %exitcond_i = icmp eq i10 %ci_i, -512
  %empty_735 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512) nounwind
  %ci_84 = add i10 %ci_i, 1
  br i1 %exitcond_i, label %225, label %224

; <label>:224                                     ; preds = %.preheader.i
  %tmp_i_736 = zext i10 %ci_i to i64
  %tmp_i_cast = zext i10 %ci_i to i14
  %tmp_1801 = add i14 %tmp_2251_cast, %tmp_i_cast
  %tmp_2254_cast = zext i14 %tmp_1801 to i64
  %fc_weight_addr = getelementptr [5120 x float]* %fc_weight, i64 0, i64 %tmp_2254_cast
  %fc_weight_load = load float* %fc_weight_addr, align 4
  %avgpool_output_addr = getelementptr [512 x float]* @avgpool_output, i64 0, i64 %tmp_i_736
  %avgpool_output_load = load float* %avgpool_output_addr, align 4
  %tmp_193_i = fmul float %fc_weight_load, %avgpool_output_load
  %sum = fadd float %sum_i, %tmp_193_i
  br label %.preheader.i

; <label>:225                                     ; preds = %.preheader.i
  %fc_bias_addr_1 = getelementptr [10 x float]* @fc_bias, i64 0, i64 %tmp_i
  %fc_bias_load = load float* %fc_bias_addr_1, align 4
  %result = fadd float %sum_i, %fc_bias_load
  %fc_output_addr = getelementptr [1000 x float]* %fc_output, i64 0, i64 %tmp_i
  store float %result, float* %fc_output_addr, align 4
  br label %avgpool.exit
}

!opencl.kernels = !{!0, !7, !13, !15, !17, !19, !21, !27, !33, !35, !37, !39, !41, !43, !45, !47, !48, !50, !52, !54, !56, !58, !60, !61, !63, !69, !72}
!hls.encrypted.func = !{}
!llvm.map.gv = !{!74, !82, !89, !96, !102, !109, !115, !123, !130, !135, !140, !147, !152, !157, !162, !167, !172, !177, !182, !189, !194, !199, !206, !213, !219, !224, !229, !234, !241, !247, !253, !260, !266, !272, !278, !284, !291, !297, !304, !309, !314, !319, !324, !329, !334, !340, !346, !351, !356, !361, !367, !372, !378, !383, !388, !389, !390, !391, !392, !393, !394, !395, !396, !397, !398, !399, !400, !401, !402, !403, !404, !405, !406, !407, !408, !409, !410, !411, !412, !413, !414, !415, !416, !417, !418, !419, !420, !421, !422, !423, !424, !425, !426, !427, !428, !429, !430, !431, !432, !433}

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
!63 = metadata !{null, metadata !64, metadata !65, metadata !66, metadata !67, metadata !68, metadata !6}
!64 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0}
!65 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none"}
!66 = metadata !{metadata !"kernel_arg_type", metadata !"float", metadata !"float", metadata !"float", metadata !"float", metadata !"float", metadata !"float", metadata !"float", metadata !"float", metadata !"float", metadata !"float", metadata !"float", metadata !"float", metadata !"float", metadata !"float", metadata !"float", metadata !"float"}
!67 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !"", metadata !"", metadata !"", metadata !"", metadata !"", metadata !"", metadata !"", metadata !"", metadata !"", metadata !"", metadata !"", metadata !"", metadata !"", metadata !""}
!68 = metadata !{metadata !"kernel_arg_name", metadata !"inp1", metadata !"inp2", metadata !"inp3", metadata !"inp4", metadata !"inp5", metadata !"inp6", metadata !"inp7", metadata !"inp8", metadata !"inp9", metadata !"inp10", metadata !"inp11", metadata !"inp12", metadata !"inp13", metadata !"inp14", metadata !"inp15", metadata !"inp16"}
!69 = metadata !{null, metadata !28, metadata !29, metadata !70, metadata !31, metadata !71, metadata !6}
!70 = metadata !{metadata !"kernel_arg_type", metadata !"float [512][4][4]*", metadata !"float*"}
!71 = metadata !{metadata !"kernel_arg_name", metadata !"input", metadata !"output"}
!72 = metadata !{null, metadata !8, metadata !9, metadata !73, metadata !11, metadata !12, metadata !6}
!73 = metadata !{metadata !"kernel_arg_type", metadata !"float*", metadata !"float [512]*", metadata !"float*", metadata !"float*"}
!74 = metadata !{metadata !75, null}
!75 = metadata !{metadata !76}
!76 = metadata !{i32 0, i32 31, metadata !77}
!77 = metadata !{metadata !78}
!78 = metadata !{metadata !"weights_96_96_1x1", metadata !79, metadata !"float", i32 0, i32 31}
!79 = metadata !{metadata !80, metadata !80, metadata !81, metadata !81}
!80 = metadata !{i32 0, i32 95, i32 1}
!81 = metadata !{i32 0, i32 0, i32 1}
!82 = metadata !{metadata !83, null}
!83 = metadata !{metadata !84}
!84 = metadata !{i32 0, i32 31, metadata !85}
!85 = metadata !{metadata !86}
!86 = metadata !{metadata !"weights_96_1_3x3", metadata !87, metadata !"float", i32 0, i32 31}
!87 = metadata !{metadata !80, metadata !81, metadata !88, metadata !88}
!88 = metadata !{i32 0, i32 2, i32 1}
!89 = metadata !{metadata !90, null}
!90 = metadata !{metadata !91}
!91 = metadata !{i32 0, i32 31, metadata !92}
!92 = metadata !{metadata !93}
!93 = metadata !{metadata !"weights_48_48_1x1", metadata !94, metadata !"float", i32 0, i32 31}
!94 = metadata !{metadata !95, metadata !95, metadata !81, metadata !81}
!95 = metadata !{i32 0, i32 47, i32 1}
!96 = metadata !{metadata !97, null}
!97 = metadata !{metadata !98}
!98 = metadata !{i32 0, i32 31, metadata !99}
!99 = metadata !{metadata !100}
!100 = metadata !{metadata !"weights_48_1_3x3", metadata !101, metadata !"float", i32 0, i32 31}
!101 = metadata !{metadata !95, metadata !81, metadata !88, metadata !88}
!102 = metadata !{metadata !103, null}
!103 = metadata !{metadata !104}
!104 = metadata !{i32 0, i32 31, metadata !105}
!105 = metadata !{metadata !106}
!106 = metadata !{metadata !"weights_24_24_1x1", metadata !107, metadata !"float", i32 0, i32 31}
!107 = metadata !{metadata !108, metadata !108, metadata !81, metadata !81}
!108 = metadata !{i32 0, i32 23, i32 1}
!109 = metadata !{metadata !110, null}
!110 = metadata !{metadata !111}
!111 = metadata !{i32 0, i32 31, metadata !112}
!112 = metadata !{metadata !113}
!113 = metadata !{metadata !"weights_24_1_3x3", metadata !114, metadata !"float", i32 0, i32 31}
!114 = metadata !{metadata !108, metadata !81, metadata !88, metadata !88}
!115 = metadata !{metadata !116, null}
!116 = metadata !{metadata !117}
!117 = metadata !{i32 0, i32 31, metadata !118}
!118 = metadata !{metadata !119}
!119 = metadata !{metadata !"shuffleunit2_2_output_p", metadata !120, metadata !"float", i32 0, i32 31}
!120 = metadata !{metadata !81, metadata !121, metadata !122, metadata !122}
!121 = metadata !{i32 0, i32 191, i32 1}
!122 = metadata !{i32 0, i32 5, i32 1}
!123 = metadata !{metadata !124, null}
!124 = metadata !{metadata !125}
!125 = metadata !{i32 0, i32 31, metadata !126}
!126 = metadata !{metadata !127}
!127 = metadata !{metadata !"shuffleunit2_2_output", metadata !128, metadata !"float", i32 0, i32 31}
!128 = metadata !{metadata !81, metadata !121, metadata !129, metadata !129}
!129 = metadata !{i32 0, i32 3, i32 1}
!130 = metadata !{metadata !131, null}
!131 = metadata !{metadata !132}
!132 = metadata !{i32 0, i32 31, metadata !133}
!133 = metadata !{metadata !134}
!134 = metadata !{metadata !"shuffleunit2_1_output_p", metadata !120, metadata !"float", i32 0, i32 31}
!135 = metadata !{metadata !136, null}
!136 = metadata !{metadata !137}
!137 = metadata !{i32 0, i32 31, metadata !138}
!138 = metadata !{metadata !139}
!139 = metadata !{metadata !"shuffleunit2_0_output_p", metadata !120, metadata !"float", i32 0, i32 31}
!140 = metadata !{metadata !141, null}
!141 = metadata !{metadata !142}
!142 = metadata !{i32 0, i32 31, metadata !143}
!143 = metadata !{metadata !144}
!144 = metadata !{metadata !"shuffleunit1_7_output_p", metadata !145, metadata !"float", i32 0, i32 31}
!145 = metadata !{metadata !81, metadata !80, metadata !146, metadata !146}
!146 = metadata !{i32 0, i32 9, i32 1}
!147 = metadata !{metadata !148, null}
!148 = metadata !{metadata !149}
!149 = metadata !{i32 0, i32 31, metadata !150}
!150 = metadata !{metadata !151}
!151 = metadata !{metadata !"shuffleunit1_6_output_p", metadata !145, metadata !"float", i32 0, i32 31}
!152 = metadata !{metadata !153, null}
!153 = metadata !{metadata !154}
!154 = metadata !{i32 0, i32 31, metadata !155}
!155 = metadata !{metadata !156}
!156 = metadata !{metadata !"shuffleunit1_5_output_p", metadata !145, metadata !"float", i32 0, i32 31}
!157 = metadata !{metadata !158, null}
!158 = metadata !{metadata !159}
!159 = metadata !{i32 0, i32 31, metadata !160}
!160 = metadata !{metadata !161}
!161 = metadata !{metadata !"shuffleunit1_4_output_p", metadata !145, metadata !"float", i32 0, i32 31}
!162 = metadata !{metadata !163, null}
!163 = metadata !{metadata !164}
!164 = metadata !{i32 0, i32 31, metadata !165}
!165 = metadata !{metadata !166}
!166 = metadata !{metadata !"shuffleunit1_3_output_p", metadata !145, metadata !"float", i32 0, i32 31}
!167 = metadata !{metadata !168, null}
!168 = metadata !{metadata !169}
!169 = metadata !{i32 0, i32 31, metadata !170}
!170 = metadata !{metadata !171}
!171 = metadata !{metadata !"shuffleunit1_2_output_p", metadata !145, metadata !"float", i32 0, i32 31}
!172 = metadata !{metadata !173, null}
!173 = metadata !{metadata !174}
!174 = metadata !{i32 0, i32 31, metadata !175}
!175 = metadata !{metadata !176}
!176 = metadata !{metadata !"shuffleunit1_1_output_p", metadata !145, metadata !"float", i32 0, i32 31}
!177 = metadata !{metadata !178, null}
!178 = metadata !{metadata !179}
!179 = metadata !{i32 0, i32 31, metadata !180}
!180 = metadata !{metadata !181}
!181 = metadata !{metadata !"shuffleunit1_0_output_p", metadata !145, metadata !"float", i32 0, i32 31}
!182 = metadata !{metadata !183, null}
!183 = metadata !{metadata !184}
!184 = metadata !{i32 0, i32 31, metadata !185}
!185 = metadata !{metadata !186}
!186 = metadata !{metadata !"shuffleunit0_2_output_p", metadata !187, metadata !"float", i32 0, i32 31}
!187 = metadata !{metadata !81, metadata !95, metadata !188, metadata !188}
!188 = metadata !{i32 0, i32 17, i32 1}
!189 = metadata !{metadata !190, null}
!190 = metadata !{metadata !191}
!191 = metadata !{i32 0, i32 31, metadata !192}
!192 = metadata !{metadata !193}
!193 = metadata !{metadata !"shuffleunit0_1_output_p", metadata !187, metadata !"float", i32 0, i32 31}
!194 = metadata !{metadata !195, null}
!195 = metadata !{metadata !196}
!196 = metadata !{i32 0, i32 31, metadata !197}
!197 = metadata !{metadata !198}
!198 = metadata !{metadata !"shuffleunit0_0_output_p", metadata !187, metadata !"float", i32 0, i32 31}
!199 = metadata !{metadata !200, [2 x i32]* @llvm_global_ctors_0}
!200 = metadata !{metadata !201}
!201 = metadata !{i32 0, i32 31, metadata !202}
!202 = metadata !{metadata !203}
!203 = metadata !{metadata !"llvm.global_ctors.0", metadata !204, metadata !"", i32 0, i32 31}
!204 = metadata !{metadata !205}
!205 = metadata !{i32 0, i32 1, i32 1}
!206 = metadata !{metadata !207, null}
!207 = metadata !{metadata !208}
!208 = metadata !{i32 0, i32 31, metadata !209}
!209 = metadata !{metadata !210}
!210 = metadata !{metadata !"image_p", metadata !211, metadata !"float", i32 0, i32 31}
!211 = metadata !{metadata !81, metadata !88, metadata !212, metadata !212}
!212 = metadata !{i32 0, i32 33, i32 1}
!213 = metadata !{metadata !214, [10 x float]* @fc_bias}
!214 = metadata !{metadata !215}
!215 = metadata !{i32 0, i32 31, metadata !216}
!216 = metadata !{metadata !217}
!217 = metadata !{metadata !"fc_bias", metadata !218, metadata !"float", i32 0, i32 31}
!218 = metadata !{metadata !146}
!219 = metadata !{metadata !220, null}
!220 = metadata !{metadata !221}
!221 = metadata !{i32 0, i32 31, metadata !222}
!222 = metadata !{metadata !223}
!223 = metadata !{metadata !"downsampleunit2_output_p", metadata !120, metadata !"float", i32 0, i32 31}
!224 = metadata !{metadata !225, null}
!225 = metadata !{metadata !226}
!226 = metadata !{i32 0, i32 31, metadata !227}
!227 = metadata !{metadata !228}
!228 = metadata !{metadata !"downsampleunit1_output_p", metadata !145, metadata !"float", i32 0, i32 31}
!229 = metadata !{metadata !230, null}
!230 = metadata !{metadata !231}
!231 = metadata !{i32 0, i32 31, metadata !232}
!232 = metadata !{metadata !233}
!233 = metadata !{metadata !"downsampleunit0_output_p", metadata !187, metadata !"float", i32 0, i32 31}
!234 = metadata !{metadata !235, null}
!235 = metadata !{metadata !236}
!236 = metadata !{i32 0, i32 31, metadata !237}
!237 = metadata !{metadata !238}
!238 = metadata !{metadata !"conv_last_output", metadata !239, metadata !"float", i32 0, i32 31}
!239 = metadata !{metadata !81, metadata !240, metadata !129, metadata !129}
!240 = metadata !{i32 0, i32 511, i32 1}
!241 = metadata !{metadata !242, [512 x float]* @conv_last_bias}
!242 = metadata !{metadata !243}
!243 = metadata !{i32 0, i32 31, metadata !244}
!244 = metadata !{metadata !245}
!245 = metadata !{metadata !"conv_last_bias", metadata !246, metadata !"float", i32 0, i32 31}
!246 = metadata !{metadata !240}
!247 = metadata !{metadata !248, null}
!248 = metadata !{metadata !249}
!249 = metadata !{i32 0, i32 31, metadata !250}
!250 = metadata !{metadata !251}
!251 = metadata !{metadata !"conv1_output_p", metadata !252, metadata !"float", i32 0, i32 31}
!252 = metadata !{metadata !81, metadata !108, metadata !212, metadata !212}
!253 = metadata !{metadata !254, null}
!254 = metadata !{metadata !255}
!255 = metadata !{i32 0, i32 31, metadata !256}
!256 = metadata !{metadata !257}
!257 = metadata !{metadata !"conv1_output", metadata !258, metadata !"float", i32 0, i32 31}
!258 = metadata !{metadata !81, metadata !108, metadata !259, metadata !259}
!259 = metadata !{i32 0, i32 31, i32 1}
!260 = metadata !{metadata !261, [24 x float]* @conv1_bias}
!261 = metadata !{metadata !262}
!262 = metadata !{i32 0, i32 31, metadata !263}
!263 = metadata !{metadata !264}
!264 = metadata !{metadata !"conv1_bias", metadata !265, metadata !"float", i32 0, i32 31}
!265 = metadata !{metadata !108}
!266 = metadata !{metadata !267, null}
!267 = metadata !{metadata !268}
!268 = metadata !{i32 0, i32 31, metadata !269}
!269 = metadata !{metadata !270}
!270 = metadata !{metadata !"buffer1_1_96_4x4_p", metadata !271, metadata !"float", i32 0, i32 31}
!271 = metadata !{metadata !81, metadata !80, metadata !122, metadata !122}
!272 = metadata !{metadata !273, null}
!273 = metadata !{metadata !274}
!274 = metadata !{i32 0, i32 31, metadata !275}
!275 = metadata !{metadata !276}
!276 = metadata !{metadata !"buffer1_1_96_4x4", metadata !277, metadata !"float", i32 0, i32 31}
!277 = metadata !{metadata !81, metadata !80, metadata !129, metadata !129}
!278 = metadata !{metadata !279, null}
!279 = metadata !{metadata !280}
!280 = metadata !{i32 0, i32 31, metadata !281}
!281 = metadata !{metadata !282}
!282 = metadata !{metadata !"buffer1_1_48_8x8_p", metadata !283, metadata !"float", i32 0, i32 31}
!283 = metadata !{metadata !81, metadata !95, metadata !146, metadata !146}
!284 = metadata !{metadata !285, null}
!285 = metadata !{metadata !286}
!286 = metadata !{i32 0, i32 31, metadata !287}
!287 = metadata !{metadata !288}
!288 = metadata !{metadata !"buffer1_1_48_8x8", metadata !289, metadata !"float", i32 0, i32 31}
!289 = metadata !{metadata !81, metadata !95, metadata !290, metadata !290}
!290 = metadata !{i32 0, i32 7, i32 1}
!291 = metadata !{metadata !292, null}
!292 = metadata !{metadata !293}
!293 = metadata !{i32 0, i32 31, metadata !294}
!294 = metadata !{metadata !295}
!295 = metadata !{metadata !"buffer1_1_24_16x16_p", metadata !296, metadata !"float", i32 0, i32 31}
!296 = metadata !{metadata !81, metadata !108, metadata !188, metadata !188}
!297 = metadata !{metadata !298, null}
!298 = metadata !{metadata !299}
!299 = metadata !{i32 0, i32 31, metadata !300}
!300 = metadata !{metadata !301}
!301 = metadata !{metadata !"buffer1_1_24_16x16", metadata !302, metadata !"float", i32 0, i32 31}
!302 = metadata !{metadata !81, metadata !108, metadata !303, metadata !303}
!303 = metadata !{i32 0, i32 15, i32 1}
!304 = metadata !{metadata !305, null}
!305 = metadata !{metadata !306}
!306 = metadata !{i32 0, i32 31, metadata !307}
!307 = metadata !{metadata !308}
!308 = metadata !{metadata !"buffer0_1_96_4x4_p", metadata !271, metadata !"float", i32 0, i32 31}
!309 = metadata !{metadata !310, null}
!310 = metadata !{metadata !311}
!311 = metadata !{i32 0, i32 31, metadata !312}
!312 = metadata !{metadata !313}
!313 = metadata !{metadata !"buffer0_1_96_4x4", metadata !277, metadata !"float", i32 0, i32 31}
!314 = metadata !{metadata !315, null}
!315 = metadata !{metadata !316}
!316 = metadata !{i32 0, i32 31, metadata !317}
!317 = metadata !{metadata !318}
!318 = metadata !{metadata !"buffer0_1_48_8x8_p", metadata !283, metadata !"float", i32 0, i32 31}
!319 = metadata !{metadata !320, null}
!320 = metadata !{metadata !321}
!321 = metadata !{i32 0, i32 31, metadata !322}
!322 = metadata !{metadata !323}
!323 = metadata !{metadata !"buffer0_1_48_8x8", metadata !289, metadata !"float", i32 0, i32 31}
!324 = metadata !{metadata !325, null}
!325 = metadata !{metadata !326}
!326 = metadata !{i32 0, i32 31, metadata !327}
!327 = metadata !{metadata !328}
!328 = metadata !{metadata !"buffer0_1_24_16x16_p", metadata !296, metadata !"float", i32 0, i32 31}
!329 = metadata !{metadata !330, null}
!330 = metadata !{metadata !331}
!331 = metadata !{i32 0, i32 31, metadata !332}
!332 = metadata !{metadata !333}
!333 = metadata !{metadata !"buffer0_1_24_16x16", metadata !302, metadata !"float", i32 0, i32 31}
!334 = metadata !{metadata !335, [96 x float]* @bias_96}
!335 = metadata !{metadata !336}
!336 = metadata !{i32 0, i32 31, metadata !337}
!337 = metadata !{metadata !338}
!338 = metadata !{metadata !"bias_96", metadata !339, metadata !"float", i32 0, i32 31}
!339 = metadata !{metadata !80}
!340 = metadata !{metadata !341, [48 x float]* @bias_48}
!341 = metadata !{metadata !342}
!342 = metadata !{i32 0, i32 31, metadata !343}
!343 = metadata !{metadata !344}
!344 = metadata !{metadata !"bias_48", metadata !345, metadata !"float", i32 0, i32 31}
!345 = metadata !{metadata !95}
!346 = metadata !{metadata !347, [24 x float]* @bias_24}
!347 = metadata !{metadata !348}
!348 = metadata !{i32 0, i32 31, metadata !349}
!349 = metadata !{metadata !350}
!350 = metadata !{metadata !"bias_24", metadata !265, metadata !"float", i32 0, i32 31}
!351 = metadata !{metadata !352, [512 x float]* @avgpool_output}
!352 = metadata !{metadata !353}
!353 = metadata !{i32 0, i32 31, metadata !354}
!354 = metadata !{metadata !355}
!355 = metadata !{metadata !"avgpool_output", metadata !246, metadata !"float", i32 0, i32 31}
!356 = metadata !{metadata !357, null}
!357 = metadata !{metadata !358}
!358 = metadata !{i32 0, i32 31, metadata !359}
!359 = metadata !{metadata !360}
!360 = metadata !{metadata !"ShuffleConvs_2_DownsampleUnit__conv1r_output_p", metadata !145, metadata !"float", i32 0, i32 31}
!361 = metadata !{metadata !362, null}
!362 = metadata !{metadata !363}
!363 = metadata !{i32 0, i32 31, metadata !364}
!364 = metadata !{metadata !365}
!365 = metadata !{metadata !"ShuffleConvs_2_DownsampleUnit__conv1r_output", metadata !366, metadata !"float", i32 0, i32 31}
!366 = metadata !{metadata !81, metadata !80, metadata !290, metadata !290}
!367 = metadata !{metadata !368, null}
!368 = metadata !{metadata !369}
!369 = metadata !{i32 0, i32 31, metadata !370}
!370 = metadata !{metadata !371}
!371 = metadata !{metadata !"ShuffleConvs_1_DownsampleUnit__conv1r_output_p", metadata !187, metadata !"float", i32 0, i32 31}
!372 = metadata !{metadata !373, null}
!373 = metadata !{metadata !374}
!374 = metadata !{i32 0, i32 31, metadata !375}
!375 = metadata !{metadata !376}
!376 = metadata !{metadata !"ShuffleConvs_1_DownsampleUnit__conv1r_output", metadata !377, metadata !"float", i32 0, i32 31}
!377 = metadata !{metadata !81, metadata !95, metadata !303, metadata !303}
!378 = metadata !{metadata !379, null}
!379 = metadata !{metadata !380}
!380 = metadata !{i32 0, i32 31, metadata !381}
!381 = metadata !{metadata !382}
!382 = metadata !{metadata !"ShuffleConvs_0_DownsampleUnit__conv1r_output_p", metadata !252, metadata !"float", i32 0, i32 31}
!383 = metadata !{metadata !384, null}
!384 = metadata !{metadata !385}
!385 = metadata !{i32 0, i32 31, metadata !386}
!386 = metadata !{metadata !387}
!387 = metadata !{metadata !"ShuffleConvs_0_DownsampleUnit__conv1r_output", metadata !258, metadata !"float", i32 0, i32 31}
!388 = metadata !{metadata !75, [9216 x float]* @weights_96_96_1x1}
!389 = metadata !{metadata !83, [864 x float]* @weights_96_1_3x3}
!390 = metadata !{metadata !90, [2304 x float]* @weights_48_48_1x1}
!391 = metadata !{metadata !97, [432 x float]* @weights_48_1_3x3}
!392 = metadata !{metadata !103, [576 x float]* @weights_24_24_1x1}
!393 = metadata !{metadata !110, [216 x float]* @weights_24_1_3x3}
!394 = metadata !{metadata !116, [6912 x float]* @shuffleunit2_2_outpu}
!395 = metadata !{metadata !124, [3072 x float]* @shuffleunit2_2_outpu_1}
!396 = metadata !{metadata !131, [6912 x float]* @shuffleunit2_1_outpu}
!397 = metadata !{metadata !136, [6912 x float]* @shuffleunit2_0_outpu}
!398 = metadata !{metadata !141, [9600 x float]* @shuffleunit1_7_outpu}
!399 = metadata !{metadata !148, [9600 x float]* @shuffleunit1_6_outpu}
!400 = metadata !{metadata !153, [9600 x float]* @shuffleunit1_5_outpu}
!401 = metadata !{metadata !158, [9600 x float]* @shuffleunit1_4_outpu}
!402 = metadata !{metadata !163, [9600 x float]* @shuffleunit1_3_outpu}
!403 = metadata !{metadata !168, [9600 x float]* @shuffleunit1_2_outpu}
!404 = metadata !{metadata !173, [9600 x float]* @shuffleunit1_1_outpu}
!405 = metadata !{metadata !178, [9600 x float]* @shuffleunit1_0_outpu}
!406 = metadata !{metadata !183, [15552 x float]* @shuffleunit0_2_outpu}
!407 = metadata !{metadata !190, [15552 x float]* @shuffleunit0_1_outpu}
!408 = metadata !{metadata !195, [15552 x float]* @shuffleunit0_0_outpu}
!409 = metadata !{metadata !207, [3468 x float]* @image_p}
!410 = metadata !{metadata !220, [6912 x float]* @downsampleunit2_outp}
!411 = metadata !{metadata !225, [9600 x float]* @downsampleunit1_outp}
!412 = metadata !{metadata !230, [15552 x float]* @downsampleunit0_outp}
!413 = metadata !{metadata !235, [8192 x float]* @conv_last_output}
!414 = metadata !{metadata !248, [27744 x float]* @conv1_output_p}
!415 = metadata !{metadata !254, [24576 x float]* @conv1_output}
!416 = metadata !{metadata !267, [3456 x float]* @buffer1_1_96_4x4_p}
!417 = metadata !{metadata !273, [1536 x float]* @buffer1_1_96_4x4}
!418 = metadata !{metadata !279, [4800 x float]* @buffer1_1_48_8x8_p}
!419 = metadata !{metadata !285, [3072 x float]* @buffer1_1_48_8x8}
!420 = metadata !{metadata !292, [7776 x float]* @buffer1_1_24_16x16_p}
!421 = metadata !{metadata !298, [6144 x float]* @buffer1_1_24_16x16}
!422 = metadata !{metadata !305, [3456 x float]* @buffer0_1_96_4x4_p}
!423 = metadata !{metadata !310, [1536 x float]* @buffer0_1_96_4x4}
!424 = metadata !{metadata !315, [4800 x float]* @buffer0_1_48_8x8_p}
!425 = metadata !{metadata !320, [3072 x float]* @buffer0_1_48_8x8}
!426 = metadata !{metadata !325, [7776 x float]* @buffer0_1_24_16x16_p}
!427 = metadata !{metadata !330, [6144 x float]* @buffer0_1_24_16x16}
!428 = metadata !{metadata !357, [9600 x float]* @ShuffleConvs_2_Downs}
!429 = metadata !{metadata !362, [6144 x float]* @ShuffleConvs_2_Downs_1}
!430 = metadata !{metadata !368, [15552 x float]* @ShuffleConvs_1_Downs}
!431 = metadata !{metadata !373, [12288 x float]* @ShuffleConvs_1_Downs_1}
!432 = metadata !{metadata !379, [27744 x float]* @ShuffleConvs_0_Downs}
!433 = metadata !{metadata !384, [24576 x float]* @ShuffleConvs_0_Downs_1}
!434 = metadata !{metadata !435}
!435 = metadata !{i32 0, i32 31, metadata !436}
!436 = metadata !{metadata !437}
!437 = metadata !{metadata !"image", metadata !438, metadata !"float", i32 0, i32 31}
!438 = metadata !{metadata !81, metadata !88, metadata !259, metadata !259}
!439 = metadata !{metadata !440}
!440 = metadata !{i32 0, i32 31, metadata !441}
!441 = metadata !{metadata !442}
!442 = metadata !{metadata !"conv1_weight", metadata !443, metadata !"float", i32 0, i32 31}
!443 = metadata !{metadata !108, metadata !88, metadata !88, metadata !88}
!444 = metadata !{metadata !445}
!445 = metadata !{i32 0, i32 31, metadata !446}
!446 = metadata !{metadata !447}
!447 = metadata !{metadata !"shuffle_conv_3x3", metadata !448, metadata !"float", i32 0, i32 31}
!448 = metadata !{metadata !449, metadata !81, metadata !88, metadata !88}
!449 = metadata !{i32 0, i32 1079, i32 1}
!450 = metadata !{metadata !451}
!451 = metadata !{i32 0, i32 31, metadata !452}
!452 = metadata !{metadata !453}
!453 = metadata !{metadata !"shuffle_conv_1x1", metadata !454, metadata !"float", i32 0, i32 31}
!454 = metadata !{metadata !455, metadata !108, metadata !81, metadata !81}
!455 = metadata !{i32 0, i32 5495, i32 1}
!456 = metadata !{metadata !457}
!457 = metadata !{i32 0, i32 31, metadata !458}
!458 = metadata !{metadata !459}
!459 = metadata !{metadata !"conv_last_weight", metadata !460, metadata !"float", i32 0, i32 31}
!460 = metadata !{metadata !240, metadata !121, metadata !81, metadata !81}
!461 = metadata !{metadata !462}
!462 = metadata !{i32 0, i32 31, metadata !463}
!463 = metadata !{metadata !464}
!464 = metadata !{metadata !"fc_weight", metadata !465, metadata !"float", i32 0, i32 31}
!465 = metadata !{metadata !146, metadata !240}
!466 = metadata !{metadata !467}
!467 = metadata !{i32 0, i32 31, metadata !468}
!468 = metadata !{metadata !469}
!469 = metadata !{metadata !"bias", metadata !470, metadata !"float", i32 0, i32 31}
!470 = metadata !{metadata !471}
!471 = metadata !{i32 0, i32 3617, i32 1}
!472 = metadata !{metadata !473}
!473 = metadata !{i32 0, i32 31, metadata !474}
!474 = metadata !{metadata !475}
!475 = metadata !{metadata !"fc_output", metadata !476, metadata !"float", i32 0, i32 31}
!476 = metadata !{metadata !477}
!477 = metadata !{i32 0, i32 999, i32 1}

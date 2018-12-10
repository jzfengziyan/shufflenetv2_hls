; ModuleID = '/home/ziyan/ziyan/ece527/shufflenetv2_master/sufflenetv3_vivado/accelerator_hls/naive/.autopilot/db/a.o.3.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@shuffleunit2_2_outpu = global [3072 x float] zeroinitializer ; [#uses=2 type=[3072 x float]*]
@shuffleunit2_1_outpu = global [3072 x float] zeroinitializer ; [#uses=2 type=[3072 x float]*]
@shuffleunit2_0_outpu = global [3072 x float] zeroinitializer ; [#uses=2 type=[3072 x float]*]
@shuffleunit1_7_outpu = global [6144 x float] zeroinitializer ; [#uses=3 type=[6144 x float]*]
@shuffleunit1_6_outpu = global [6144 x float] zeroinitializer ; [#uses=2 type=[6144 x float]*]
@shuffleunit1_5_outpu = global [6144 x float] zeroinitializer ; [#uses=2 type=[6144 x float]*]
@shuffleunit1_4_outpu = global [6144 x float] zeroinitializer ; [#uses=2 type=[6144 x float]*]
@shuffleunit1_3_outpu = global [6144 x float] zeroinitializer ; [#uses=2 type=[6144 x float]*]
@shuffleunit1_2_outpu = global [6144 x float] zeroinitializer ; [#uses=2 type=[6144 x float]*]
@shuffleunit1_1_outpu = global [6144 x float] zeroinitializer ; [#uses=2 type=[6144 x float]*]
@shuffleunit1_0_outpu = global [6144 x float] zeroinitializer ; [#uses=2 type=[6144 x float]*]
@shuffleunit0_2_outpu = global [12288 x float] zeroinitializer ; [#uses=3 type=[12288 x float]*]
@shuffleunit0_1_outpu = global [12288 x float] zeroinitializer ; [#uses=2 type=[12288 x float]*]
@shuffleunit0_0_outpu = global [12288 x float] zeroinitializer ; [#uses=2 type=[12288 x float]*]
@memset_right_part_st = internal unnamed_addr constant [18 x i8] c"memset_right_part\00" ; [#uses=9 type=[18 x i8]*]
@memset_left_part_str = internal unnamed_addr constant [17 x i8] c"memset_left_part\00" ; [#uses=9 type=[17 x i8]*]
@memset_conv3r_ourput = internal unnamed_addr constant [21 x i8] c"memset_conv3r_ourput\00" ; [#uses=9 type=[21 x i8]*]
@memset_conv3_output_s = internal unnamed_addr constant [20 x i8] c"memset_conv3_output\00" ; [#uses=9 type=[20 x i8]*]
@memset_conv2r_ourput = internal unnamed_addr constant [21 x i8] c"memset_conv2r_ourput\00" ; [#uses=9 type=[21 x i8]*]
@memset_conv2l_output = internal unnamed_addr constant [21 x i8] c"memset_conv2l_output\00" ; [#uses=9 type=[21 x i8]*]
@memset_conv2_output_s = internal unnamed_addr constant [20 x i8] c"memset_conv2_output\00" ; [#uses=9 type=[20 x i8]*]
@memset_conv1r_output = internal unnamed_addr constant [21 x i8] c"memset_conv1r_output\00" ; [#uses=9 type=[21 x i8]*]
@memset_conv1l_output = internal unnamed_addr constant [21 x i8] c"memset_conv1l_output\00" ; [#uses=9 type=[21 x i8]*]
@memset_conv1_output_s = internal unnamed_addr constant [20 x i8] c"memset_conv1_output\00" ; [#uses=9 type=[20 x i8]*]
@llvm_global_ctors_1 = appending global [2 x void ()*] [void ()* @_GLOBAL__I_a, void ()* @_GLOBAL__I_a25] ; [#uses=0 type=[2 x void ()*]*]
@llvm_global_ctors_0 = appending global [2 x i32] [i32 65535, i32 65535] ; [#uses=0 type=[2 x i32]*]
@fc_bias = global [10 x float] zeroinitializer, align 16 ; [#uses=2 type=[10 x float]*]
@downsampleunit2_outp = global [3072 x float] zeroinitializer ; [#uses=2 type=[3072 x float]*]
@downsampleunit1_outp = global [6144 x float] zeroinitializer ; [#uses=2 type=[6144 x float]*]
@downsampleunit0_outp = global [12288 x float] zeroinitializer ; [#uses=2 type=[12288 x float]*]
@conv_last_output = global [8192 x float] zeroinitializer ; [#uses=2 type=[8192 x float]*]
@conv_last_bias = global [512 x float] zeroinitializer, align 16 ; [#uses=2 type=[512 x float]*]
@conv1_output = global [24576 x float] zeroinitializer ; [#uses=2 type=[24576 x float]*]
@conv1_bias = global [24 x float] zeroinitializer, align 16 ; [#uses=2 type=[24 x float]*]
@avgpool_output = global [512 x float] zeroinitializer, align 16 ; [#uses=2 type=[512 x float]*]
@ShuffleNetV2_str = internal unnamed_addr constant [13 x i8] c"ShuffleNetV2\00" ; [#uses=1 type=[13 x i8]*]
@ShuffleConvs_2_Shuff_9 = global [864 x float] zeroinitializer ; [#uses=2 type=[864 x float]*]
@ShuffleConvs_2_Shuff_8 = global [9216 x float] zeroinitializer ; [#uses=2 type=[9216 x float]*]
@ShuffleConvs_2_Shuff_7 = global [9216 x float] zeroinitializer ; [#uses=2 type=[9216 x float]*]
@ShuffleConvs_2_Shuff_6 = global [864 x float] zeroinitializer ; [#uses=2 type=[864 x float]*]
@ShuffleConvs_2_Shuff_5 = global [9216 x float] zeroinitializer ; [#uses=2 type=[9216 x float]*]
@ShuffleConvs_2_Shuff_4 = global [96 x float] zeroinitializer, align 16 ; [#uses=2 type=[96 x float]*]
@ShuffleConvs_2_Shuff_3 = global [96 x float] zeroinitializer, align 16 ; [#uses=2 type=[96 x float]*]
@ShuffleConvs_2_Shuff_22 = global [96 x float] zeroinitializer, align 16 ; [#uses=2 type=[96 x float]*]
@ShuffleConvs_2_Shuff_21 = global [96 x float] zeroinitializer, align 16 ; [#uses=2 type=[96 x float]*]
@ShuffleConvs_2_Shuff_20 = global [96 x float] zeroinitializer, align 16 ; [#uses=2 type=[96 x float]*]
@ShuffleConvs_2_Shuff_19 = global [96 x float] zeroinitializer, align 16 ; [#uses=2 type=[96 x float]*]
@ShuffleConvs_2_Shuff_18 = global [9216 x float] zeroinitializer ; [#uses=2 type=[9216 x float]*]
@ShuffleConvs_2_Shuff_17 = global [96 x float] zeroinitializer, align 16 ; [#uses=2 type=[96 x float]*]
@ShuffleConvs_2_Shuff_15 = global [864 x float] zeroinitializer ; [#uses=2 type=[864 x float]*]
@ShuffleConvs_2_Shuff_13 = global [9216 x float] zeroinitializer ; [#uses=2 type=[9216 x float]*]
@ShuffleConvs_2_Shuff_11 = global [9216 x float] zeroinitializer ; [#uses=2 type=[9216 x float]*]
@ShuffleConvs_2_Shuff_1 = global [96 x float] zeroinitializer, align 16 ; [#uses=2 type=[96 x float]*]
@ShuffleConvs_2_Shuff = global [96 x float] zeroinitializer, align 16 ; [#uses=2 type=[96 x float]*]
@ShuffleConvs_2_Downs_9 = global [864 x float] zeroinitializer ; [#uses=2 type=[864 x float]*]
@ShuffleConvs_2_Downs_8 = global [9216 x float] zeroinitializer ; [#uses=2 type=[9216 x float]*]
@ShuffleConvs_2_Downs_7 = global [9216 x float] zeroinitializer ; [#uses=2 type=[9216 x float]*]
@ShuffleConvs_2_Downs_6 = global [864 x float] zeroinitializer ; [#uses=2 type=[864 x float]*]
@ShuffleConvs_2_Downs_5 = global [96 x float] zeroinitializer, align 16 ; [#uses=2 type=[96 x float]*]
@ShuffleConvs_2_Downs_4 = global [96 x float] zeroinitializer, align 16 ; [#uses=2 type=[96 x float]*]
@ShuffleConvs_2_Downs_3 = global [96 x float] zeroinitializer, align 16 ; [#uses=2 type=[96 x float]*]
@ShuffleConvs_2_Downs_10 = global [9216 x float] zeroinitializer ; [#uses=2 type=[9216 x float]*]
@ShuffleConvs_2_Downs_1 = global [96 x float] zeroinitializer, align 16 ; [#uses=2 type=[96 x float]*]
@ShuffleConvs_2_Downs = global [96 x float] zeroinitializer, align 16 ; [#uses=2 type=[96 x float]*]
@ShuffleConvs_1_Shuff_9 = global [432 x float] zeroinitializer ; [#uses=2 type=[432 x float]*]
@ShuffleConvs_1_Shuff_71 = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_1_Shuff_70 = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_1_Shuff_7 = global [2304 x float] zeroinitializer ; [#uses=2 type=[2304 x float]*]
@ShuffleConvs_1_Shuff_69 = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_1_Shuff_68 = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_1_Shuff_67 = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_1_Shuff_66 = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_1_Shuff_65 = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_1_Shuff_64 = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_1_Shuff_63 = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_1_Shuff_62 = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_1_Shuff_61 = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_1_Shuff_60 = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_1_Shuff_59 = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_1_Shuff_58 = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_1_Shuff_57 = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_1_Shuff_56 = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_1_Shuff_55 = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_1_Shuff_54 = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_1_Shuff_53 = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_1_Shuff_52 = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_1_Shuff_51 = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_1_Shuff_50 = global [2304 x float] zeroinitializer ; [#uses=2 type=[2304 x float]*]
@ShuffleConvs_1_Shuff_5 = global [2304 x float] zeroinitializer ; [#uses=2 type=[2304 x float]*]
@ShuffleConvs_1_Shuff_49 = global [432 x float] zeroinitializer ; [#uses=2 type=[432 x float]*]
@ShuffleConvs_1_Shuff_47 = global [2304 x float] zeroinitializer ; [#uses=2 type=[2304 x float]*]
@ShuffleConvs_1_Shuff_45 = global [2304 x float] zeroinitializer ; [#uses=2 type=[2304 x float]*]
@ShuffleConvs_1_Shuff_43 = global [432 x float] zeroinitializer ; [#uses=2 type=[432 x float]*]
@ShuffleConvs_1_Shuff_41 = global [2304 x float] zeroinitializer ; [#uses=2 type=[2304 x float]*]
@ShuffleConvs_1_Shuff_39 = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_1_Shuff_37 = global [2304 x float] zeroinitializer ; [#uses=2 type=[2304 x float]*]
@ShuffleConvs_1_Shuff_35 = global [432 x float] zeroinitializer ; [#uses=2 type=[432 x float]*]
@ShuffleConvs_1_Shuff_33 = global [2304 x float] zeroinitializer ; [#uses=2 type=[2304 x float]*]
@ShuffleConvs_1_Shuff_31 = global [2304 x float] zeroinitializer ; [#uses=2 type=[2304 x float]*]
@ShuffleConvs_1_Shuff_3 = global [432 x float] zeroinitializer ; [#uses=2 type=[432 x float]*]
@ShuffleConvs_1_Shuff_29 = global [432 x float] zeroinitializer ; [#uses=2 type=[432 x float]*]
@ShuffleConvs_1_Shuff_27 = global [2304 x float] zeroinitializer ; [#uses=2 type=[2304 x float]*]
@ShuffleConvs_1_Shuff_25 = global [2304 x float] zeroinitializer ; [#uses=2 type=[2304 x float]*]
@ShuffleConvs_1_Shuff_23 = global [432 x float] zeroinitializer ; [#uses=2 type=[432 x float]*]
@ShuffleConvs_1_Shuff_21 = global [2304 x float] zeroinitializer ; [#uses=2 type=[2304 x float]*]
@ShuffleConvs_1_Shuff_19 = global [2304 x float] zeroinitializer ; [#uses=2 type=[2304 x float]*]
@ShuffleConvs_1_Shuff_17 = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_1_Shuff_15 = global [432 x float] zeroinitializer ; [#uses=2 type=[432 x float]*]
@ShuffleConvs_1_Shuff_13 = global [2304 x float] zeroinitializer ; [#uses=2 type=[2304 x float]*]
@ShuffleConvs_1_Shuff_11 = global [2304 x float] zeroinitializer ; [#uses=2 type=[2304 x float]*]
@ShuffleConvs_1_Shuff_1 = global [2304 x float] zeroinitializer ; [#uses=2 type=[2304 x float]*]
@ShuffleConvs_1_Shuff = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_1_Downs_9 = global [432 x float] zeroinitializer ; [#uses=2 type=[432 x float]*]
@ShuffleConvs_1_Downs_8 = global [2304 x float] zeroinitializer ; [#uses=2 type=[2304 x float]*]
@ShuffleConvs_1_Downs_7 = global [2304 x float] zeroinitializer ; [#uses=2 type=[2304 x float]*]
@ShuffleConvs_1_Downs_6 = global [432 x float] zeroinitializer ; [#uses=2 type=[432 x float]*]
@ShuffleConvs_1_Downs_5 = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_1_Downs_4 = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_1_Downs_3 = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_1_Downs_10 = global [2304 x float] zeroinitializer ; [#uses=2 type=[2304 x float]*]
@ShuffleConvs_1_Downs_1 = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_1_Downs = global [48 x float] zeroinitializer, align 16 ; [#uses=2 type=[48 x float]*]
@ShuffleConvs_0_Shuff_9 = global [216 x float] zeroinitializer ; [#uses=2 type=[216 x float]*]
@ShuffleConvs_0_Shuff_8 = global [576 x float] zeroinitializer ; [#uses=2 type=[576 x float]*]
@ShuffleConvs_0_Shuff_7 = global [576 x float] zeroinitializer ; [#uses=2 type=[576 x float]*]
@ShuffleConvs_0_Shuff_6 = global [216 x float] zeroinitializer ; [#uses=2 type=[216 x float]*]
@ShuffleConvs_0_Shuff_5 = global [576 x float] zeroinitializer ; [#uses=2 type=[576 x float]*]
@ShuffleConvs_0_Shuff_4 = global [24 x float] zeroinitializer, align 16 ; [#uses=2 type=[24 x float]*]
@ShuffleConvs_0_Shuff_3 = global [24 x float] zeroinitializer, align 16 ; [#uses=2 type=[24 x float]*]
@ShuffleConvs_0_Shuff_22 = global [24 x float] zeroinitializer, align 16 ; [#uses=2 type=[24 x float]*]
@ShuffleConvs_0_Shuff_21 = global [24 x float] zeroinitializer, align 16 ; [#uses=2 type=[24 x float]*]
@ShuffleConvs_0_Shuff_20 = global [24 x float] zeroinitializer, align 16 ; [#uses=2 type=[24 x float]*]
@ShuffleConvs_0_Shuff_19 = global [24 x float] zeroinitializer, align 16 ; [#uses=2 type=[24 x float]*]
@ShuffleConvs_0_Shuff_18 = global [576 x float] zeroinitializer ; [#uses=2 type=[576 x float]*]
@ShuffleConvs_0_Shuff_17 = global [24 x float] zeroinitializer, align 16 ; [#uses=2 type=[24 x float]*]
@ShuffleConvs_0_Shuff_15 = global [216 x float] zeroinitializer ; [#uses=2 type=[216 x float]*]
@ShuffleConvs_0_Shuff_13 = global [576 x float] zeroinitializer ; [#uses=2 type=[576 x float]*]
@ShuffleConvs_0_Shuff_11 = global [576 x float] zeroinitializer ; [#uses=2 type=[576 x float]*]
@ShuffleConvs_0_Shuff_1 = global [24 x float] zeroinitializer, align 16 ; [#uses=2 type=[24 x float]*]
@ShuffleConvs_0_Shuff = global [24 x float] zeroinitializer, align 16 ; [#uses=2 type=[24 x float]*]
@ShuffleConvs_0_Downs_9 = global [216 x float] zeroinitializer ; [#uses=2 type=[216 x float]*]
@ShuffleConvs_0_Downs_8 = global [576 x float] zeroinitializer ; [#uses=2 type=[576 x float]*]
@ShuffleConvs_0_Downs_7 = global [576 x float] zeroinitializer ; [#uses=2 type=[576 x float]*]
@ShuffleConvs_0_Downs_6 = global [216 x float] zeroinitializer ; [#uses=2 type=[216 x float]*]
@ShuffleConvs_0_Downs_5 = global [24 x float] zeroinitializer, align 16 ; [#uses=2 type=[24 x float]*]
@ShuffleConvs_0_Downs_4 = global [24 x float] zeroinitializer, align 16 ; [#uses=2 type=[24 x float]*]
@ShuffleConvs_0_Downs_3 = global [24 x float] zeroinitializer, align 16 ; [#uses=2 type=[24 x float]*]
@ShuffleConvs_0_Downs_10 = global [576 x float] zeroinitializer ; [#uses=2 type=[576 x float]*]
@ShuffleConvs_0_Downs_1 = global [24 x float] zeroinitializer, align 16 ; [#uses=2 type=[24 x float]*]
@ShuffleConvs_0_Downs = global [24 x float] zeroinitializer, align 16 ; [#uses=2 type=[24 x float]*]

; [#uses=2]
define internal fastcc void @subconv_3x3_8_stride([6144 x float]* nocapture %input, [864 x float]* nocapture %weight, [96 x float]* nocapture %bias, [1536 x float]* nocapture %output_0) {
  call void @llvm.dbg.value(metadata !{[6144 x float]* %input}, i64 0, metadata !874), !dbg !899 ; [debug line = 419:41] [debug variable = input]
  call void @llvm.dbg.value(metadata !{[864 x float]* %weight}, i64 0, metadata !900), !dbg !903 ; [debug line = 420:8] [debug variable = weight]
  call void @llvm.dbg.value(metadata !{[96 x float]* %bias}, i64 0, metadata !904), !dbg !907 ; [debug line = 421:8] [debug variable = bias]
  call void @llvm.dbg.value(metadata !{[1536 x float]* %output_0}, i64 0, metadata !908), !dbg !911 ; [debug line = 422:8] [debug variable = output[0]]
  br label %.loopexit, !dbg !912                  ; [debug line = 423:16]

.loopexit.loopexit:                               ; preds = %.preheader7
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_1, %.loopexit.loopexit ] ; [#uses=6 type=i7]
  %exitcond4 = icmp eq i7 %co, -32, !dbg !912     ; [#uses=1 type=i1] [debug line = 423:16]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) ; [#uses=0 type=i32]
  %co_1 = add i7 %co, 1, !dbg !915                ; [#uses=1 type=i7] [debug line = 423:23]
  call void @llvm.dbg.value(metadata !{i7 %co_1}, i64 0, metadata !916), !dbg !915 ; [debug line = 423:23] [debug variable = co]
  br i1 %exitcond4, label %2, label %.preheader7.preheader, !dbg !912 ; [debug line = 423:16]

.preheader7.preheader:                            ; preds = %.loopexit
  %tmp = zext i7 %co to i64, !dbg !918            ; [#uses=1 type=i64] [debug line = 429:8]
  %tmp_cast = zext i7 %co to i10                  ; [#uses=1 type=i10]
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0) ; [#uses=1 type=i10]
  %tmp_15_cast = zext i10 %tmp_s to i11           ; [#uses=1 type=i11]
  %tmp_2 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %co, i2 0) ; [#uses=1 type=i9]
  %p_shl_cast = zext i9 %tmp_2 to i10, !dbg !918  ; [#uses=2 type=i10] [debug line = 429:8]
  %tmp_3 = sub i10 %p_shl_cast, %tmp_cast, !dbg !918 ; [#uses=1 type=i10] [debug line = 429:8]
  %tmp_17_cast = sext i10 %tmp_3 to i11, !dbg !918 ; [#uses=1 type=i11] [debug line = 429:8]
  %bias_addr = getelementptr [96 x float]* %bias, i64 0, i64 %tmp, !dbg !928 ; [#uses=1 type=float*] [debug line = 432:34]
  br label %.preheader7, !dbg !929                ; [debug line = 424:16]

.preheader7.loopexit:                             ; preds = %.preheader6
  br label %.preheader7

.preheader7:                                      ; preds = %.preheader7.loopexit, %.preheader7.preheader
  %h = phi i3 [ 0, %.preheader7.preheader ], [ %h_1, %.preheader7.loopexit ] ; [#uses=4 type=i3]
  %exitcond3 = icmp eq i3 %h, -4, !dbg !929       ; [#uses=1 type=i1] [debug line = 424:16]
  %empty_15 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  %h_1 = add i3 %h, 1, !dbg !930                  ; [#uses=1 type=i3] [debug line = 424:21]
  call void @llvm.dbg.value(metadata !{i3 %h_1}, i64 0, metadata !931), !dbg !930 ; [debug line = 424:21] [debug variable = h]
  br i1 %exitcond3, label %.loopexit.loopexit, label %.preheader6.preheader, !dbg !929 ; [debug line = 424:16]

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_5 = shl i3 %h, 1, !dbg !918                ; [#uses=1 type=i3] [debug line = 429:8]
  %tmp_2_cast = zext i3 %tmp_5 to i4, !dbg !918   ; [#uses=2 type=i4] [debug line = 429:8]
  %tmp_3_cast = zext i3 %h to i10, !dbg !932      ; [#uses=1 type=i10] [debug line = 433:5]
  %tmp_6 = add i10 %p_shl_cast, %tmp_3_cast, !dbg !932 ; [#uses=1 type=i10] [debug line = 433:5]
  %tmp_23_cast = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_6, i2 0), !dbg !933 ; [#uses=1 type=i12] [debug line = 425:17]
  br label %.preheader6, !dbg !933                ; [debug line = 425:17]

.preheader6:                                      ; preds = %1, %.preheader6.preheader
  %w = phi i3 [ %w_1, %1 ], [ 0, %.preheader6.preheader ] ; [#uses=4 type=i3]
  %exitcond2 = icmp eq i3 %w, -4, !dbg !933       ; [#uses=1 type=i1] [debug line = 425:17]
  %empty_16 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  %w_1 = add i3 %w, 1, !dbg !934                  ; [#uses=1 type=i3] [debug line = 425:22]
  br i1 %exitcond2, label %.preheader7.loopexit, label %.preheader5.preheader, !dbg !933 ; [debug line = 425:17]

.preheader5.preheader:                            ; preds = %.preheader6
  %tmp_7 = shl i3 %w, 1, !dbg !918                ; [#uses=1 type=i3] [debug line = 429:8]
  %tmp_5_cast = zext i3 %tmp_7 to i4, !dbg !918   ; [#uses=2 type=i4] [debug line = 429:8]
  %tmp_1 = sub i4 0, %tmp_5_cast, !dbg !918       ; [#uses=1 type=i4] [debug line = 429:8]
  br label %.preheader5, !dbg !935                ; [debug line = 427:18]

.preheader5.loopexit:                             ; preds = %.preheader
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %sum = phi float [ 0.000000e+00, %.preheader5.preheader ], [ %sum_1, %.preheader5.loopexit ] ; [#uses=2 type=float]
  %m = phi i2 [ 0, %.preheader5.preheader ], [ %m_1, %.preheader5.loopexit ] ; [#uses=5 type=i2]
  %m_cast8_cast = zext i2 %m to i3, !dbg !935     ; [#uses=1 type=i3] [debug line = 427:18]
  %exitcond1 = icmp eq i2 %m, -1, !dbg !935       ; [#uses=1 type=i1] [debug line = 427:18]
  %empty_17 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) ; [#uses=0 type=i32]
  %m_1 = add i2 %m, 1, !dbg !936                  ; [#uses=1 type=i2] [debug line = 427:23]
  call void @llvm.dbg.value(metadata !{i2 %m_1}, i64 0, metadata !937), !dbg !936 ; [debug line = 427:23] [debug variable = m]
  br i1 %exitcond1, label %1, label %.preheader.preheader, !dbg !935 ; [debug line = 427:18]

.preheader.preheader:                             ; preds = %.preheader5
  %tmp_8_cast = zext i2 %m to i11, !dbg !918      ; [#uses=1 type=i11] [debug line = 429:8]
  %tmp_11 = add i11 %tmp_8_cast, %tmp_17_cast, !dbg !918 ; [#uses=2 type=i11] [debug line = 429:8]
  %tmp_14 = shl i11 %tmp_11, 2, !dbg !918         ; [#uses=1 type=i11] [debug line = 429:8]
  %tmp_15 = sub i11 %tmp_14, %tmp_11, !dbg !918   ; [#uses=1 type=i11] [debug line = 429:8]
  %tmp3 = add i2 -1, %m, !dbg !918                ; [#uses=1 type=i2] [debug line = 429:8]
  %tmp3_cast = sext i2 %tmp3 to i4, !dbg !918     ; [#uses=1 type=i4] [debug line = 429:8]
  %tmp_4 = add i4 %tmp3_cast, %tmp_2_cast, !dbg !918 ; [#uses=1 type=i4] [debug line = 429:8]
  %tmp_7_cast = sext i4 %tmp_4 to i11             ; [#uses=1 type=i11]
  %tmp_16 = add i11 %tmp_7_cast, %tmp_15_cast     ; [#uses=1 type=i11]
  %tmp_31_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_16, i3 0), !dbg !918 ; [#uses=1 type=i14] [debug line = 429:8]
  %tmp_9 = sub i3 0, %m_cast8_cast, !dbg !918     ; [#uses=1 type=i3] [debug line = 429:8]
  %tmp_9_cast = sext i3 %tmp_9 to i4, !dbg !918   ; [#uses=1 type=i4] [debug line = 429:8]
  %sel_tmp = icmp eq i4 %tmp_2_cast, %tmp_9_cast, !dbg !918 ; [#uses=1 type=i1] [debug line = 429:8]
  br label %.preheader, !dbg !938                 ; [debug line = 428:20]

.preheader:                                       ; preds = %_ifconv, %.preheader.preheader
  %sum_1 = phi float [ %sum_2, %_ifconv ], [ %sum, %.preheader.preheader ] ; [#uses=2 type=float]
  %n = phi i2 [ %n_1, %_ifconv ], [ 0, %.preheader.preheader ] ; [#uses=5 type=i2]
  %n_cast6 = zext i2 %n to i4, !dbg !938          ; [#uses=1 type=i4] [debug line = 428:20]
  %exitcond = icmp eq i2 %n, -1, !dbg !938        ; [#uses=1 type=i1] [debug line = 428:20]
  %empty_18 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) ; [#uses=0 type=i32]
  %n_1 = add i2 %n, 1, !dbg !939                  ; [#uses=1 type=i2] [debug line = 428:25]
  br i1 %exitcond, label %.preheader5.loopexit, label %_ifconv, !dbg !938 ; [debug line = 428:20]

_ifconv:                                          ; preds = %.preheader
  %tmp_cast_19 = zext i2 %n to i11, !dbg !918     ; [#uses=1 type=i11] [debug line = 429:8]
  %tmp_17 = add i11 %tmp_15, %tmp_cast_19, !dbg !918 ; [#uses=1 type=i11] [debug line = 429:8]
  %tmp_32_cast = zext i11 %tmp_17 to i64, !dbg !918 ; [#uses=1 type=i64] [debug line = 429:8]
  %weight_addr = getelementptr [864 x float]* %weight, i64 0, i64 %tmp_32_cast, !dbg !918 ; [#uses=1 type=float*] [debug line = 429:8]
  %weight_load = load float* %weight_addr, align 4, !dbg !918 ; [#uses=1 type=float] [debug line = 429:8]
  %p_not = icmp eq i4 %n_cast6, %tmp_1, !dbg !918 ; [#uses=1 type=i1] [debug line = 429:8]
  %tmp4 = add i2 %n, -1, !dbg !918                ; [#uses=1 type=i2] [debug line = 429:8]
  %tmp4_cast = sext i2 %tmp4 to i4, !dbg !918     ; [#uses=1 type=i4] [debug line = 429:8]
  %tmp_10 = add i4 %tmp_5_cast, %tmp4_cast, !dbg !918 ; [#uses=1 type=i4] [debug line = 429:8]
  %tmp_11_cast = sext i4 %tmp_10 to i14, !dbg !918 ; [#uses=1 type=i14] [debug line = 429:8]
  %tmp_18 = add i14 %tmp_31_cast, %tmp_11_cast, !dbg !918 ; [#uses=1 type=i14] [debug line = 429:8]
  %tmp_33_cast = zext i14 %tmp_18 to i64, !dbg !918 ; [#uses=1 type=i64] [debug line = 429:8]
  %input_addr = getelementptr [6144 x float]* %input, i64 0, i64 %tmp_33_cast, !dbg !918 ; [#uses=1 type=float*] [debug line = 429:8]
  %input_load = load float* %input_addr, align 4, !dbg !918 ; [#uses=1 type=float] [debug line = 429:8]
  %sel_tmp1 = or i1 %sel_tmp, %p_not              ; [#uses=1 type=i1]
  %tmp_12 = select i1 %sel_tmp1, float 0.000000e+00, float %input_load, !dbg !918 ; [#uses=1 type=float] [debug line = 429:8]
  %tmp_13 = fmul float %weight_load, %tmp_12, !dbg !918 ; [#uses=1 type=float] [debug line = 429:8]
  %sum_2 = fadd float %sum_1, %tmp_13, !dbg !918  ; [#uses=1 type=float] [debug line = 429:8]
  call void @llvm.dbg.value(metadata !{float %sum_2}, i64 0, metadata !940), !dbg !918 ; [debug line = 429:8] [debug variable = sum]
  call void @llvm.dbg.value(metadata !{i2 %n_1}, i64 0, metadata !941), !dbg !939 ; [debug line = 428:25] [debug variable = n]
  br label %.preheader, !dbg !939                 ; [debug line = 428:25]

; <label>:1                                       ; preds = %.preheader5
  %bias_load = load float* %bias_addr, align 4, !dbg !928 ; [#uses=1 type=float] [debug line = 432:34]
  %result = fadd float %sum, %bias_load, !dbg !928 ; [#uses=1 type=float] [debug line = 432:34]
  call void @llvm.dbg.value(metadata !{float %result}, i64 0, metadata !942), !dbg !928 ; [debug line = 432:34] [debug variable = result]
  %tmp_6_cast = zext i3 %w to i12, !dbg !932      ; [#uses=1 type=i12] [debug line = 433:5]
  %tmp_8 = add i12 %tmp_23_cast, %tmp_6_cast, !dbg !932 ; [#uses=1 type=i12] [debug line = 433:5]
  %tmp_25_cast = zext i12 %tmp_8 to i64, !dbg !932 ; [#uses=1 type=i64] [debug line = 433:5]
  %output_0_addr = getelementptr [1536 x float]* %output_0, i64 0, i64 %tmp_25_cast, !dbg !932 ; [#uses=1 type=float*] [debug line = 433:5]
  store float %result, float* %output_0_addr, align 4, !dbg !932 ; [debug line = 433:5]
  call void @llvm.dbg.value(metadata !{i3 %w_1}, i64 0, metadata !943), !dbg !934 ; [debug line = 425:22] [debug variable = w]
  br label %.preheader6, !dbg !934                ; [debug line = 425:22]

; <label>:2                                       ; preds = %.loopexit
  ret void, !dbg !944                             ; [debug line = 438:1]
}

; [#uses=1]
define internal fastcc void @subconv_3x3_8_no_rel([3072 x float]* nocapture %input_0, [432 x float]* nocapture %weight, [48 x float]* nocapture %bias, [3072 x float]* nocapture %output_0) {
  call void @llvm.dbg.value(metadata !{[3072 x float]* %input_0}, i64 0, metadata !945), !dbg !955 ; [debug line = 272:34] [debug variable = input[0]]
  call void @llvm.dbg.value(metadata !{[432 x float]* %weight}, i64 0, metadata !956), !dbg !959 ; [debug line = 273:8] [debug variable = weight]
  call void @llvm.dbg.value(metadata !{[48 x float]* %bias}, i64 0, metadata !960), !dbg !963 ; [debug line = 274:8] [debug variable = bias]
  call void @llvm.dbg.value(metadata !{[3072 x float]* %output_0}, i64 0, metadata !964), !dbg !965 ; [debug line = 275:8] [debug variable = output[0]]
  br label %.loopexit, !dbg !966                  ; [debug line = 276:16]

.loopexit.loopexit:                               ; preds = %.preheader7
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_2, %.loopexit.loopexit ] ; [#uses=6 type=i6]
  %exitcond4 = icmp eq i6 %co, -16, !dbg !966     ; [#uses=1 type=i1] [debug line = 276:16]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) ; [#uses=0 type=i32]
  %co_2 = add i6 %co, 1, !dbg !969                ; [#uses=1 type=i6] [debug line = 276:23]
  call void @llvm.dbg.value(metadata !{i6 %co_2}, i64 0, metadata !970), !dbg !969 ; [debug line = 276:23] [debug variable = co]
  br i1 %exitcond4, label %2, label %.preheader7.preheader, !dbg !966 ; [debug line = 276:16]

.preheader7.preheader:                            ; preds = %.loopexit
  %tmp = zext i6 %co to i64, !dbg !971            ; [#uses=1 type=i64] [debug line = 282:8]
  %tmp_cast = zext i6 %co to i9                   ; [#uses=1 type=i9]
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co, i3 0) ; [#uses=2 type=i9]
  %tmp_35_cast2 = zext i9 %tmp_s to i10           ; [#uses=1 type=i10]
  %tmp_35_cast = zext i9 %tmp_s to i10            ; [#uses=1 type=i10]
  %tmp_19 = call i8 @_ssdm_op_BitConcatenate.i8.i6.i2(i6 %co, i2 0) ; [#uses=1 type=i8]
  %p_shl_cast = zext i8 %tmp_19 to i9, !dbg !971  ; [#uses=1 type=i9] [debug line = 282:8]
  %tmp_20 = sub i9 %p_shl_cast, %tmp_cast, !dbg !971 ; [#uses=1 type=i9] [debug line = 282:8]
  %tmp_37_cast = sext i9 %tmp_20 to i10, !dbg !971 ; [#uses=1 type=i10] [debug line = 282:8]
  %bias_addr = getelementptr [48 x float]* %bias, i64 0, i64 %tmp, !dbg !981 ; [#uses=1 type=float*] [debug line = 285:34]
  br label %.preheader7, !dbg !982                ; [debug line = 277:16]

.preheader7.loopexit:                             ; preds = %.preheader6
  br label %.preheader7

.preheader7:                                      ; preds = %.preheader7.loopexit, %.preheader7.preheader
  %h = phi i4 [ 0, %.preheader7.preheader ], [ %h_2, %.preheader7.loopexit ] ; [#uses=5 type=i4]
  %h_cast = zext i4 %h to i5, !dbg !982           ; [#uses=1 type=i5] [debug line = 277:16]
  %exitcond3 = icmp eq i4 %h, -8, !dbg !982       ; [#uses=1 type=i1] [debug line = 277:16]
  %empty_20 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  %h_2 = add i4 %h, 1, !dbg !983                  ; [#uses=1 type=i4] [debug line = 277:21]
  call void @llvm.dbg.value(metadata !{i4 %h_2}, i64 0, metadata !984), !dbg !983 ; [debug line = 277:21] [debug variable = h]
  br i1 %exitcond3, label %.loopexit.loopexit, label %.preheader6.preheader, !dbg !982 ; [debug line = 277:16]

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_cast_21 = zext i4 %h to i10, !dbg !985     ; [#uses=1 type=i10] [debug line = 286:5]
  %tmp_22 = add i10 %tmp_cast_21, %tmp_35_cast, !dbg !985 ; [#uses=1 type=i10] [debug line = 286:5]
  %tmp_40_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_22, i3 0), !dbg !986 ; [#uses=1 type=i13] [debug line = 278:17]
  br label %.preheader6, !dbg !986                ; [debug line = 278:17]

.preheader6:                                      ; preds = %1, %.preheader6.preheader
  %w = phi i4 [ %w_2, %1 ], [ 0, %.preheader6.preheader ] ; [#uses=5 type=i4]
  %w_cast = zext i4 %w to i5, !dbg !986           ; [#uses=1 type=i5] [debug line = 278:17]
  %exitcond2 = icmp eq i4 %w, -8, !dbg !986       ; [#uses=1 type=i1] [debug line = 278:17]
  %empty_22 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  %w_2 = add i4 %w, 1, !dbg !987                  ; [#uses=1 type=i4] [debug line = 278:22]
  br i1 %exitcond2, label %.preheader7.loopexit, label %.preheader5.preheader, !dbg !986 ; [debug line = 278:17]

.preheader5.preheader:                            ; preds = %.preheader6
  %tmp_23 = sub i4 0, %w, !dbg !971               ; [#uses=1 type=i4] [debug line = 282:8]
  br label %.preheader5, !dbg !988                ; [debug line = 280:18]

.preheader5.loopexit:                             ; preds = %.preheader
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %sum = phi float [ 0.000000e+00, %.preheader5.preheader ], [ %sum_1, %.preheader5.loopexit ] ; [#uses=2 type=float]
  %m = phi i2 [ 0, %.preheader5.preheader ], [ %m_2, %.preheader5.loopexit ] ; [#uses=5 type=i2]
  %m_cast_cast = zext i2 %m to i3, !dbg !988      ; [#uses=1 type=i3] [debug line = 280:18]
  %exitcond1 = icmp eq i2 %m, -1, !dbg !988       ; [#uses=1 type=i1] [debug line = 280:18]
  %empty_23 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) ; [#uses=0 type=i32]
  %m_2 = add i2 %m, 1, !dbg !989                  ; [#uses=1 type=i2] [debug line = 280:23]
  call void @llvm.dbg.value(metadata !{i2 %m_2}, i64 0, metadata !990), !dbg !989 ; [debug line = 280:23] [debug variable = m]
  br i1 %exitcond1, label %1, label %.preheader.preheader, !dbg !988 ; [debug line = 280:18]

.preheader.preheader:                             ; preds = %.preheader5
  %tmp_15_cast = zext i2 %m to i10, !dbg !971     ; [#uses=1 type=i10] [debug line = 282:8]
  %tmp_27 = add i10 %tmp_15_cast, %tmp_37_cast, !dbg !971 ; [#uses=2 type=i10] [debug line = 282:8]
  %tmp_15 = shl i10 %tmp_27, 2, !dbg !971         ; [#uses=1 type=i10] [debug line = 282:8]
  %tmp_28 = sub i10 %tmp_15, %tmp_27, !dbg !971   ; [#uses=1 type=i10] [debug line = 282:8]
  %tmp_16 = sub i3 0, %m_cast_cast, !dbg !971     ; [#uses=1 type=i3] [debug line = 282:8]
  %tmp_16_cast = sext i3 %tmp_16 to i4, !dbg !971 ; [#uses=1 type=i4] [debug line = 282:8]
  %tmp_17 = icmp ne i4 %h, %tmp_16_cast, !dbg !971 ; [#uses=1 type=i1] [debug line = 282:8]
  %tmp4 = add i2 -1, %m, !dbg !971                ; [#uses=1 type=i2] [debug line = 282:8]
  %tmp4_cast = sext i2 %tmp4 to i5, !dbg !971     ; [#uses=1 type=i5] [debug line = 282:8]
  %tmp_18 = add i5 %tmp4_cast, %h_cast, !dbg !971 ; [#uses=2 type=i5] [debug line = 282:8]
  %tmp_19_cast = sext i5 %tmp_18 to i10           ; [#uses=1 type=i10]
  %tmp_29 = add i10 %tmp_19_cast, %tmp_35_cast2   ; [#uses=1 type=i10]
  %tmp_47_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_29, i3 0), !dbg !971 ; [#uses=1 type=i13] [debug line = 282:8]
  %tmp_30 = call i2 @_ssdm_op_PartSelect.i2.i5.i32.i32(i5 %tmp_18, i32 3, i32 4), !dbg !971 ; [#uses=1 type=i2] [debug line = 282:8]
  %icmp = icmp ne i2 %tmp_30, 1, !dbg !971        ; [#uses=1 type=i1] [debug line = 282:8]
  br label %.preheader, !dbg !991                 ; [debug line = 281:20]

.preheader:                                       ; preds = %_ifconv, %.preheader.preheader
  %sum_1 = phi float [ %sum_3, %_ifconv ], [ %sum, %.preheader.preheader ] ; [#uses=2 type=float]
  %n = phi i2 [ %n_2, %_ifconv ], [ 0, %.preheader.preheader ] ; [#uses=5 type=i2]
  %n_cast9 = zext i2 %n to i4, !dbg !991          ; [#uses=1 type=i4] [debug line = 281:20]
  %exitcond = icmp eq i2 %n, -1, !dbg !991        ; [#uses=1 type=i1] [debug line = 281:20]
  %empty_24 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) ; [#uses=0 type=i32]
  %n_2 = add i2 %n, 1, !dbg !992                  ; [#uses=1 type=i2] [debug line = 281:25]
  br i1 %exitcond, label %.preheader5.loopexit, label %_ifconv, !dbg !991 ; [debug line = 281:20]

_ifconv:                                          ; preds = %.preheader
  %tmp_20_cast = zext i2 %n to i10, !dbg !971     ; [#uses=1 type=i10] [debug line = 282:8]
  %tmp_31 = add i10 %tmp_28, %tmp_20_cast, !dbg !971 ; [#uses=1 type=i10] [debug line = 282:8]
  %tmp_48_cast = zext i10 %tmp_31 to i64, !dbg !971 ; [#uses=1 type=i64] [debug line = 282:8]
  %weight_addr = getelementptr [432 x float]* %weight, i64 0, i64 %tmp_48_cast, !dbg !971 ; [#uses=1 type=float*] [debug line = 282:8]
  %weight_load = load float* %weight_addr, align 4, !dbg !971 ; [#uses=1 type=float] [debug line = 282:8]
  %tmp5 = add i2 %n, -1, !dbg !971                ; [#uses=1 type=i2] [debug line = 282:8]
  %tmp5_cast = sext i2 %tmp5 to i5, !dbg !971     ; [#uses=1 type=i5] [debug line = 282:8]
  %tmp_21 = add i5 %w_cast, %tmp5_cast, !dbg !971 ; [#uses=2 type=i5] [debug line = 282:8]
  %tmp_32 = call i2 @_ssdm_op_PartSelect.i2.i5.i32.i32(i5 %tmp_21, i32 3, i32 4), !dbg !971 ; [#uses=1 type=i2] [debug line = 282:8]
  %icmp5 = icmp ne i2 %tmp_32, 1, !dbg !971       ; [#uses=1 type=i1] [debug line = 282:8]
  %tmp_23_cast = sext i5 %tmp_21 to i13, !dbg !971 ; [#uses=1 type=i13] [debug line = 282:8]
  %tmp_33 = add i13 %tmp_47_cast, %tmp_23_cast, !dbg !971 ; [#uses=1 type=i13] [debug line = 282:8]
  %tmp_49_cast = zext i13 %tmp_33 to i64, !dbg !971 ; [#uses=1 type=i64] [debug line = 282:8]
  %input_0_addr = getelementptr [3072 x float]* %input_0, i64 0, i64 %tmp_49_cast, !dbg !971 ; [#uses=1 type=float*] [debug line = 282:8]
  %input_0_load = load float* %input_0_addr, align 4, !dbg !971 ; [#uses=1 type=float] [debug line = 282:8]
  %notlhs = icmp ne i4 %n_cast9, %tmp_23, !dbg !971 ; [#uses=1 type=i1] [debug line = 282:8]
  %tmp6 = and i1 %icmp, %notlhs                   ; [#uses=1 type=i1]
  %tmp7 = and i1 %tmp_17, %icmp5                  ; [#uses=1 type=i1]
  %sel_tmp2 = and i1 %tmp7, %tmp6                 ; [#uses=1 type=i1]
  %tmp_25 = select i1 %sel_tmp2, float %input_0_load, float 0.000000e+00, !dbg !971 ; [#uses=1 type=float] [debug line = 282:8]
  %tmp_26 = fmul float %weight_load, %tmp_25, !dbg !971 ; [#uses=1 type=float] [debug line = 282:8]
  %sum_3 = fadd float %sum_1, %tmp_26, !dbg !971  ; [#uses=1 type=float] [debug line = 282:8]
  call void @llvm.dbg.value(metadata !{float %sum_3}, i64 0, metadata !993), !dbg !971 ; [debug line = 282:8] [debug variable = sum]
  call void @llvm.dbg.value(metadata !{i2 %n_2}, i64 0, metadata !994), !dbg !992 ; [debug line = 281:25] [debug variable = n]
  br label %.preheader, !dbg !992                 ; [debug line = 281:25]

; <label>:1                                       ; preds = %.preheader5
  %bias_load = load float* %bias_addr, align 4, !dbg !981 ; [#uses=1 type=float] [debug line = 285:34]
  %result = fadd float %sum, %bias_load, !dbg !981 ; [#uses=1 type=float] [debug line = 285:34]
  call void @llvm.dbg.value(metadata !{float %result}, i64 0, metadata !995), !dbg !981 ; [debug line = 285:34] [debug variable = result]
  %tmp_14_cast = zext i4 %w to i13, !dbg !985     ; [#uses=1 type=i13] [debug line = 286:5]
  %tmp_24 = add i13 %tmp_40_cast, %tmp_14_cast, !dbg !985 ; [#uses=1 type=i13] [debug line = 286:5]
  %tmp_41_cast = zext i13 %tmp_24 to i64, !dbg !985 ; [#uses=1 type=i64] [debug line = 286:5]
  %output_0_addr = getelementptr [3072 x float]* %output_0, i64 0, i64 %tmp_41_cast, !dbg !985 ; [#uses=1 type=float*] [debug line = 286:5]
  store float %result, float* %output_0_addr, align 4, !dbg !985 ; [debug line = 286:5]
  call void @llvm.dbg.value(metadata !{i4 %w_2}, i64 0, metadata !996), !dbg !987 ; [debug line = 278:22] [debug variable = w]
  br label %.preheader6, !dbg !987                ; [debug line = 278:22]

; <label>:2                                       ; preds = %.loopexit
  ret void, !dbg !997                             ; [debug line = 290:1]
}

; [#uses=1]
define internal fastcc void @subconv_3x3_4_no_rel([1536 x float]* nocapture %input_0, [864 x float]* nocapture %weight, [96 x float]* nocapture %bias, [1536 x float]* nocapture %output_0) {
  call void @llvm.dbg.value(metadata !{[1536 x float]* %input_0}, i64 0, metadata !998), !dbg !1002 ; [debug line = 441:34] [debug variable = input[0]]
  call void @llvm.dbg.value(metadata !{[864 x float]* %weight}, i64 0, metadata !1003), !dbg !1004 ; [debug line = 442:8] [debug variable = weight]
  call void @llvm.dbg.value(metadata !{[96 x float]* %bias}, i64 0, metadata !1005), !dbg !1006 ; [debug line = 443:8] [debug variable = bias]
  call void @llvm.dbg.value(metadata !{[1536 x float]* %output_0}, i64 0, metadata !1007), !dbg !1008 ; [debug line = 444:8] [debug variable = output[0]]
  br label %.loopexit, !dbg !1009                 ; [debug line = 445:16]

.loopexit.loopexit:                               ; preds = %.preheader7
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_3, %.loopexit.loopexit ] ; [#uses=5 type=i7]
  %exitcond4 = icmp eq i7 %co, -32, !dbg !1009    ; [#uses=1 type=i1] [debug line = 445:16]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) ; [#uses=0 type=i32]
  %co_3 = add i7 %co, 1, !dbg !1012               ; [#uses=1 type=i7] [debug line = 445:23]
  call void @llvm.dbg.value(metadata !{i7 %co_3}, i64 0, metadata !1013), !dbg !1012 ; [debug line = 445:23] [debug variable = co]
  br i1 %exitcond4, label %2, label %.preheader7.preheader, !dbg !1009 ; [debug line = 445:16]

.preheader7.preheader:                            ; preds = %.loopexit
  %tmp = zext i7 %co to i64, !dbg !1014           ; [#uses=1 type=i64] [debug line = 451:8]
  %tmp_cast = zext i7 %co to i10                  ; [#uses=1 type=i10]
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %co, i2 0) ; [#uses=2 type=i9]
  %tmp_51_cast2 = zext i9 %tmp_s to i10           ; [#uses=1 type=i10]
  %tmp_51_cast = zext i9 %tmp_s to i10, !dbg !1014 ; [#uses=2 type=i10] [debug line = 451:8]
  %tmp_35 = sub i10 %tmp_51_cast, %tmp_cast, !dbg !1014 ; [#uses=1 type=i10] [debug line = 451:8]
  %tmp_53_cast = sext i10 %tmp_35 to i11, !dbg !1014 ; [#uses=1 type=i11] [debug line = 451:8]
  %bias_addr = getelementptr [96 x float]* %bias, i64 0, i64 %tmp, !dbg !1024 ; [#uses=1 type=float*] [debug line = 454:34]
  br label %.preheader7, !dbg !1025               ; [debug line = 446:16]

.preheader7.loopexit:                             ; preds = %.preheader6
  br label %.preheader7

.preheader7:                                      ; preds = %.preheader7.loopexit, %.preheader7.preheader
  %h = phi i3 [ 0, %.preheader7.preheader ], [ %h_3, %.preheader7.loopexit ] ; [#uses=5 type=i3]
  %h_cast = zext i3 %h to i4, !dbg !1025          ; [#uses=1 type=i4] [debug line = 446:16]
  %exitcond3 = icmp eq i3 %h, -4, !dbg !1025      ; [#uses=1 type=i1] [debug line = 446:16]
  %empty_25 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  %h_3 = add i3 %h, 1, !dbg !1026                 ; [#uses=1 type=i3] [debug line = 446:21]
  call void @llvm.dbg.value(metadata !{i3 %h_3}, i64 0, metadata !1027), !dbg !1026 ; [debug line = 446:21] [debug variable = h]
  br i1 %exitcond3, label %.loopexit.loopexit, label %.preheader6.preheader, !dbg !1025 ; [debug line = 446:16]

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_cast_26 = zext i3 %h to i10, !dbg !1028    ; [#uses=1 type=i10] [debug line = 455:5]
  %tmp_36 = add i10 %tmp_cast_26, %tmp_51_cast, !dbg !1028 ; [#uses=1 type=i10] [debug line = 455:5]
  %tmp_56_cast = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_36, i2 0), !dbg !1029 ; [#uses=1 type=i12] [debug line = 447:17]
  br label %.preheader6, !dbg !1029               ; [debug line = 447:17]

.preheader6:                                      ; preds = %1, %.preheader6.preheader
  %w = phi i3 [ %w_3, %1 ], [ 0, %.preheader6.preheader ] ; [#uses=5 type=i3]
  %w_cast = zext i3 %w to i4, !dbg !1029          ; [#uses=1 type=i4] [debug line = 447:17]
  %exitcond2 = icmp eq i3 %w, -4, !dbg !1029      ; [#uses=1 type=i1] [debug line = 447:17]
  %empty_27 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  %w_3 = add i3 %w, 1, !dbg !1030                 ; [#uses=1 type=i3] [debug line = 447:22]
  br i1 %exitcond2, label %.preheader7.loopexit, label %.preheader5.preheader, !dbg !1029 ; [debug line = 447:17]

.preheader5.preheader:                            ; preds = %.preheader6
  %tmp_37 = sub i3 0, %w, !dbg !1014              ; [#uses=1 type=i3] [debug line = 451:8]
  br label %.preheader5, !dbg !1031               ; [debug line = 449:18]

.preheader5.loopexit:                             ; preds = %.preheader
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %sum = phi float [ 0.000000e+00, %.preheader5.preheader ], [ %sum_1, %.preheader5.loopexit ] ; [#uses=2 type=float]
  %m = phi i2 [ 0, %.preheader5.preheader ], [ %m_3, %.preheader5.loopexit ] ; [#uses=5 type=i2]
  %m_cast = zext i2 %m to i3, !dbg !1031          ; [#uses=1 type=i3] [debug line = 449:18]
  %exitcond1 = icmp eq i2 %m, -1, !dbg !1031      ; [#uses=1 type=i1] [debug line = 449:18]
  %empty_28 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) ; [#uses=0 type=i32]
  %m_3 = add i2 %m, 1, !dbg !1032                 ; [#uses=1 type=i2] [debug line = 449:23]
  call void @llvm.dbg.value(metadata !{i2 %m_3}, i64 0, metadata !1033), !dbg !1032 ; [debug line = 449:23] [debug variable = m]
  br i1 %exitcond1, label %1, label %.preheader.preheader, !dbg !1031 ; [debug line = 449:18]

.preheader.preheader:                             ; preds = %.preheader5
  %tmp_28_cast = zext i2 %m to i11, !dbg !1014    ; [#uses=1 type=i11] [debug line = 451:8]
  %tmp_41 = add i11 %tmp_28_cast, %tmp_53_cast, !dbg !1014 ; [#uses=2 type=i11] [debug line = 451:8]
  %tmp_33 = shl i11 %tmp_41, 2, !dbg !1014        ; [#uses=1 type=i11] [debug line = 451:8]
  %tmp_42 = sub i11 %tmp_33, %tmp_41, !dbg !1014  ; [#uses=1 type=i11] [debug line = 451:8]
  %tmp_29 = sub i3 0, %m_cast, !dbg !1014         ; [#uses=1 type=i3] [debug line = 451:8]
  %tmp_30 = icmp ne i3 %h, %tmp_29, !dbg !1014    ; [#uses=1 type=i1] [debug line = 451:8]
  %tmp4 = add i2 -1, %m, !dbg !1014               ; [#uses=1 type=i2] [debug line = 451:8]
  %tmp4_cast = sext i2 %tmp4 to i4, !dbg !1014    ; [#uses=1 type=i4] [debug line = 451:8]
  %tmp_31 = add i4 %tmp4_cast, %h_cast, !dbg !1014 ; [#uses=2 type=i4] [debug line = 451:8]
  %tmp_32_cast = sext i4 %tmp_31 to i10           ; [#uses=1 type=i10]
  %tmp_43 = add i10 %tmp_32_cast, %tmp_51_cast2   ; [#uses=1 type=i10]
  %tmp_63_cast = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_43, i2 0), !dbg !1014 ; [#uses=1 type=i12] [debug line = 451:8]
  %tmp_44 = call i2 @_ssdm_op_PartSelect.i2.i4.i32.i32(i4 %tmp_31, i32 2, i32 3), !dbg !1014 ; [#uses=1 type=i2] [debug line = 451:8]
  %icmp = icmp ne i2 %tmp_44, 1, !dbg !1014       ; [#uses=1 type=i1] [debug line = 451:8]
  br label %.preheader, !dbg !1034                ; [debug line = 450:20]

.preheader:                                       ; preds = %_ifconv, %.preheader.preheader
  %sum_1 = phi float [ %sum_4, %_ifconv ], [ %sum, %.preheader.preheader ] ; [#uses=2 type=float]
  %n = phi i2 [ %n_3, %_ifconv ], [ 0, %.preheader.preheader ] ; [#uses=5 type=i2]
  %n_cast = zext i2 %n to i3, !dbg !1034          ; [#uses=1 type=i3] [debug line = 450:20]
  %exitcond = icmp eq i2 %n, -1, !dbg !1034       ; [#uses=1 type=i1] [debug line = 450:20]
  %empty_29 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) ; [#uses=0 type=i32]
  %n_3 = add i2 %n, 1, !dbg !1035                 ; [#uses=1 type=i2] [debug line = 450:25]
  br i1 %exitcond, label %.preheader5.loopexit, label %_ifconv, !dbg !1034 ; [debug line = 450:20]

_ifconv:                                          ; preds = %.preheader
  %tmp_33_cast = zext i2 %n to i11, !dbg !1014    ; [#uses=1 type=i11] [debug line = 451:8]
  %tmp_45 = add i11 %tmp_42, %tmp_33_cast, !dbg !1014 ; [#uses=1 type=i11] [debug line = 451:8]
  %tmp_64_cast = zext i11 %tmp_45 to i64, !dbg !1014 ; [#uses=1 type=i64] [debug line = 451:8]
  %weight_addr = getelementptr [864 x float]* %weight, i64 0, i64 %tmp_64_cast, !dbg !1014 ; [#uses=1 type=float*] [debug line = 451:8]
  %weight_load = load float* %weight_addr, align 4, !dbg !1014 ; [#uses=1 type=float] [debug line = 451:8]
  %tmp5 = add i2 %n, -1, !dbg !1014               ; [#uses=1 type=i2] [debug line = 451:8]
  %tmp5_cast = sext i2 %tmp5 to i4, !dbg !1014    ; [#uses=1 type=i4] [debug line = 451:8]
  %tmp_34 = add i4 %w_cast, %tmp5_cast, !dbg !1014 ; [#uses=2 type=i4] [debug line = 451:8]
  %tmp_46 = call i2 @_ssdm_op_PartSelect.i2.i4.i32.i32(i4 %tmp_34, i32 2, i32 3), !dbg !1014 ; [#uses=1 type=i2] [debug line = 451:8]
  %icmp5 = icmp ne i2 %tmp_46, 1, !dbg !1014      ; [#uses=1 type=i1] [debug line = 451:8]
  %tmp_36_cast = sext i4 %tmp_34 to i12, !dbg !1014 ; [#uses=1 type=i12] [debug line = 451:8]
  %tmp_47 = add i12 %tmp_63_cast, %tmp_36_cast, !dbg !1014 ; [#uses=1 type=i12] [debug line = 451:8]
  %tmp_65_cast = zext i12 %tmp_47 to i64, !dbg !1014 ; [#uses=1 type=i64] [debug line = 451:8]
  %input_0_addr = getelementptr [1536 x float]* %input_0, i64 0, i64 %tmp_65_cast, !dbg !1014 ; [#uses=1 type=float*] [debug line = 451:8]
  %input_0_load = load float* %input_0_addr, align 4, !dbg !1014 ; [#uses=1 type=float] [debug line = 451:8]
  %notlhs = icmp ne i3 %n_cast, %tmp_37, !dbg !1014 ; [#uses=1 type=i1] [debug line = 451:8]
  %tmp6 = and i1 %icmp, %notlhs                   ; [#uses=1 type=i1]
  %tmp7 = and i1 %tmp_30, %icmp5                  ; [#uses=1 type=i1]
  %sel_tmp2 = and i1 %tmp7, %tmp6                 ; [#uses=1 type=i1]
  %tmp_38 = select i1 %sel_tmp2, float %input_0_load, float 0.000000e+00, !dbg !1014 ; [#uses=1 type=float] [debug line = 451:8]
  %tmp_39 = fmul float %weight_load, %tmp_38, !dbg !1014 ; [#uses=1 type=float] [debug line = 451:8]
  %sum_4 = fadd float %sum_1, %tmp_39, !dbg !1014 ; [#uses=1 type=float] [debug line = 451:8]
  call void @llvm.dbg.value(metadata !{float %sum_4}, i64 0, metadata !1036), !dbg !1014 ; [debug line = 451:8] [debug variable = sum]
  call void @llvm.dbg.value(metadata !{i2 %n_3}, i64 0, metadata !1037), !dbg !1035 ; [debug line = 450:25] [debug variable = n]
  br label %.preheader, !dbg !1035                ; [debug line = 450:25]

; <label>:1                                       ; preds = %.preheader5
  %bias_load = load float* %bias_addr, align 4, !dbg !1024 ; [#uses=1 type=float] [debug line = 454:34]
  %result = fadd float %sum, %bias_load, !dbg !1024 ; [#uses=1 type=float] [debug line = 454:34]
  call void @llvm.dbg.value(metadata !{float %result}, i64 0, metadata !1038), !dbg !1024 ; [debug line = 454:34] [debug variable = result]
  %tmp_27_cast = zext i3 %w to i12, !dbg !1028    ; [#uses=1 type=i12] [debug line = 455:5]
  %tmp_40 = add i12 %tmp_56_cast, %tmp_27_cast, !dbg !1028 ; [#uses=1 type=i12] [debug line = 455:5]
  %tmp_57_cast = zext i12 %tmp_40 to i64, !dbg !1028 ; [#uses=1 type=i64] [debug line = 455:5]
  %output_0_addr = getelementptr [1536 x float]* %output_0, i64 0, i64 %tmp_57_cast, !dbg !1028 ; [#uses=1 type=float*] [debug line = 455:5]
  store float %result, float* %output_0_addr, align 4, !dbg !1028 ; [debug line = 455:5]
  call void @llvm.dbg.value(metadata !{i3 %w_3}, i64 0, metadata !1039), !dbg !1030 ; [debug line = 447:22] [debug variable = w]
  br label %.preheader6, !dbg !1030               ; [debug line = 447:22]

; <label>:2                                       ; preds = %.loopexit
  ret void, !dbg !1040                            ; [debug line = 459:1]
}

; [#uses=2]
define internal fastcc void @subconv_3x3_32_strid([24576 x float]* nocapture %input, [216 x float]* nocapture %weight, [24 x float]* nocapture %bias, [6144 x float]* nocapture %output_0) {
  call void @llvm.dbg.value(metadata !{[24576 x float]* %input}, i64 0, metadata !1041), !dbg !1056 ; [debug line = 77:42] [debug variable = input]
  call void @llvm.dbg.value(metadata !{[216 x float]* %weight}, i64 0, metadata !1057), !dbg !1060 ; [debug line = 78:8] [debug variable = weight]
  call void @llvm.dbg.value(metadata !{[24 x float]* %bias}, i64 0, metadata !1061), !dbg !1064 ; [debug line = 79:8] [debug variable = bias]
  call void @llvm.dbg.value(metadata !{[6144 x float]* %output_0}, i64 0, metadata !1065), !dbg !1068 ; [debug line = 80:8] [debug variable = output[0]]
  br label %.loopexit, !dbg !1069                 ; [debug line = 81:16]

.loopexit.loopexit:                               ; preds = %.preheader7
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i5 [ 0, %0 ], [ %co_4, %.loopexit.loopexit ] ; [#uses=7 type=i5]
  %exitcond4 = icmp eq i5 %co, -8, !dbg !1069     ; [#uses=1 type=i1] [debug line = 81:16]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) ; [#uses=0 type=i32]
  %co_4 = add i5 %co, 1, !dbg !1072               ; [#uses=1 type=i5] [debug line = 81:23]
  call void @llvm.dbg.value(metadata !{i5 %co_4}, i64 0, metadata !1073), !dbg !1072 ; [debug line = 81:23] [debug variable = co]
  br i1 %exitcond4, label %2, label %.preheader7.preheader, !dbg !1069 ; [debug line = 81:16]

.preheader7.preheader:                            ; preds = %.loopexit
  %tmp = zext i5 %co to i64, !dbg !1074           ; [#uses=1 type=i64] [debug line = 87:8]
  %tmp_cast = zext i5 %co to i8                   ; [#uses=1 type=i8]
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co, i5 0) ; [#uses=1 type=i10]
  %tmp_67_cast = zext i10 %tmp_s to i11           ; [#uses=1 type=i11]
  %tmp_49 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co, i2 0) ; [#uses=1 type=i7]
  %p_shl_cast = zext i7 %tmp_49 to i8, !dbg !1074 ; [#uses=1 type=i8] [debug line = 87:8]
  %tmp_53 = sub i8 %p_shl_cast, %tmp_cast, !dbg !1074 ; [#uses=1 type=i8] [debug line = 87:8]
  %tmp_69_cast = sext i8 %tmp_53 to i9, !dbg !1074 ; [#uses=1 type=i9] [debug line = 87:8]
  %tmp_54 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co, i4 0) ; [#uses=1 type=i9]
  %tmp_71_cast = zext i9 %tmp_54 to i10, !dbg !1084 ; [#uses=1 type=i10] [debug line = 90:34]
  %bias_addr = getelementptr [24 x float]* %bias, i64 0, i64 %tmp, !dbg !1084 ; [#uses=1 type=float*] [debug line = 90:34]
  br label %.preheader7, !dbg !1085               ; [debug line = 82:16]

.preheader7.loopexit:                             ; preds = %.preheader6
  br label %.preheader7

.preheader7:                                      ; preds = %.preheader7.loopexit, %.preheader7.preheader
  %h = phi i5 [ 0, %.preheader7.preheader ], [ %h_4, %.preheader7.loopexit ] ; [#uses=4 type=i5]
  %exitcond3 = icmp eq i5 %h, -16, !dbg !1085     ; [#uses=1 type=i1] [debug line = 82:16]
  %empty_30 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  %h_4 = add i5 %h, 1, !dbg !1086                 ; [#uses=1 type=i5] [debug line = 82:22]
  call void @llvm.dbg.value(metadata !{i5 %h_4}, i64 0, metadata !1087), !dbg !1086 ; [debug line = 82:22] [debug variable = h]
  br i1 %exitcond3, label %.loopexit.loopexit, label %.preheader6.preheader, !dbg !1085 ; [debug line = 82:16]

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_55 = shl i5 %h, 1, !dbg !1074              ; [#uses=1 type=i5] [debug line = 87:8]
  %tmp_cast_31 = zext i5 %tmp_55 to i6, !dbg !1074 ; [#uses=2 type=i6] [debug line = 87:8]
  %tmp_40_cast = zext i5 %h to i10, !dbg !1088    ; [#uses=1 type=i10] [debug line = 91:5]
  %tmp_56 = add i10 %tmp_71_cast, %tmp_40_cast, !dbg !1088 ; [#uses=1 type=i10] [debug line = 91:5]
  %tmp_75_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_56, i4 0), !dbg !1089 ; [#uses=1 type=i14] [debug line = 83:17]
  br label %.preheader6, !dbg !1089               ; [debug line = 83:17]

.preheader6:                                      ; preds = %1, %.preheader6.preheader
  %w = phi i5 [ %w_4, %1 ], [ 0, %.preheader6.preheader ] ; [#uses=4 type=i5]
  %exitcond2 = icmp eq i5 %w, -16, !dbg !1089     ; [#uses=1 type=i1] [debug line = 83:17]
  %empty_32 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  %w_4 = add i5 %w, 1, !dbg !1090                 ; [#uses=1 type=i5] [debug line = 83:23]
  br i1 %exitcond2, label %.preheader7.loopexit, label %.preheader5.preheader, !dbg !1089 ; [debug line = 83:17]

.preheader5.preheader:                            ; preds = %.preheader6
  %tmp_57 = shl i5 %w, 1, !dbg !1074              ; [#uses=1 type=i5] [debug line = 87:8]
  %tmp_48_cast = zext i5 %tmp_57 to i6, !dbg !1074 ; [#uses=2 type=i6] [debug line = 87:8]
  %tmp_47 = sub i6 0, %tmp_48_cast, !dbg !1074    ; [#uses=1 type=i6] [debug line = 87:8]
  br label %.preheader5, !dbg !1091               ; [debug line = 85:18]

.preheader5.loopexit:                             ; preds = %.preheader
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %sum = phi float [ 0.000000e+00, %.preheader5.preheader ], [ %sum_1, %.preheader5.loopexit ] ; [#uses=2 type=float]
  %m = phi i2 [ 0, %.preheader5.preheader ], [ %m_4, %.preheader5.loopexit ] ; [#uses=5 type=i2]
  %m_cast8_cast = zext i2 %m to i3, !dbg !1091    ; [#uses=1 type=i3] [debug line = 85:18]
  %exitcond1 = icmp eq i2 %m, -1, !dbg !1091      ; [#uses=1 type=i1] [debug line = 85:18]
  %empty_33 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) ; [#uses=0 type=i32]
  %m_4 = add i2 %m, 1, !dbg !1092                 ; [#uses=1 type=i2] [debug line = 85:23]
  call void @llvm.dbg.value(metadata !{i2 %m_4}, i64 0, metadata !1093), !dbg !1092 ; [debug line = 85:23] [debug variable = m]
  br i1 %exitcond1, label %1, label %.preheader.preheader, !dbg !1091 ; [debug line = 85:18]

.preheader.preheader:                             ; preds = %.preheader5
  %tmp_43_cast = zext i2 %m to i9, !dbg !1074     ; [#uses=1 type=i9] [debug line = 87:8]
  %tmp_59 = add i9 %tmp_43_cast, %tmp_69_cast, !dbg !1074 ; [#uses=2 type=i9] [debug line = 87:8]
  %tmp_60 = shl i9 %tmp_59, 2, !dbg !1074         ; [#uses=1 type=i9] [debug line = 87:8]
  %tmp_61 = sub i9 %tmp_60, %tmp_59, !dbg !1074   ; [#uses=1 type=i9] [debug line = 87:8]
  %tmp3 = add i2 -1, %m, !dbg !1074               ; [#uses=1 type=i2] [debug line = 87:8]
  %tmp3_cast = sext i2 %tmp3 to i6, !dbg !1074    ; [#uses=1 type=i6] [debug line = 87:8]
  %tmp_44 = add i6 %tmp3_cast, %tmp_cast_31, !dbg !1074 ; [#uses=1 type=i6] [debug line = 87:8]
  %tmp_45_cast = sext i6 %tmp_44 to i11           ; [#uses=1 type=i11]
  %tmp_62 = add i11 %tmp_45_cast, %tmp_67_cast    ; [#uses=1 type=i11]
  %tmp_83_cast = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_62, i5 0), !dbg !1074 ; [#uses=1 type=i16] [debug line = 87:8]
  %tmp_50 = sub i3 0, %m_cast8_cast, !dbg !1074   ; [#uses=1 type=i3] [debug line = 87:8]
  %tmp_50_cast = sext i3 %tmp_50 to i6, !dbg !1074 ; [#uses=1 type=i6] [debug line = 87:8]
  %sel_tmp = icmp eq i6 %tmp_cast_31, %tmp_50_cast, !dbg !1074 ; [#uses=1 type=i1] [debug line = 87:8]
  br label %.preheader, !dbg !1094                ; [debug line = 86:20]

.preheader:                                       ; preds = %_ifconv, %.preheader.preheader
  %sum_1 = phi float [ %sum_5, %_ifconv ], [ %sum, %.preheader.preheader ] ; [#uses=2 type=float]
  %n = phi i2 [ %n_4, %_ifconv ], [ 0, %.preheader.preheader ] ; [#uses=5 type=i2]
  %n_cast6 = zext i2 %n to i6, !dbg !1094         ; [#uses=1 type=i6] [debug line = 86:20]
  %exitcond = icmp eq i2 %n, -1, !dbg !1094       ; [#uses=1 type=i1] [debug line = 86:20]
  %empty_34 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) ; [#uses=0 type=i32]
  %n_4 = add i2 %n, 1, !dbg !1095                 ; [#uses=1 type=i2] [debug line = 86:25]
  br i1 %exitcond, label %.preheader5.loopexit, label %_ifconv, !dbg !1094 ; [debug line = 86:20]

_ifconv:                                          ; preds = %.preheader
  %tmp_46_cast = zext i2 %n to i9, !dbg !1074     ; [#uses=1 type=i9] [debug line = 87:8]
  %tmp_63 = add i9 %tmp_61, %tmp_46_cast, !dbg !1074 ; [#uses=1 type=i9] [debug line = 87:8]
  %tmp_84_cast = zext i9 %tmp_63 to i64, !dbg !1074 ; [#uses=1 type=i64] [debug line = 87:8]
  %weight_addr = getelementptr [216 x float]* %weight, i64 0, i64 %tmp_84_cast, !dbg !1074 ; [#uses=1 type=float*] [debug line = 87:8]
  %weight_load = load float* %weight_addr, align 4, !dbg !1074 ; [#uses=1 type=float] [debug line = 87:8]
  %p_not = icmp eq i6 %n_cast6, %tmp_47, !dbg !1074 ; [#uses=1 type=i1] [debug line = 87:8]
  %tmp4 = add i2 %n, -1, !dbg !1074               ; [#uses=1 type=i2] [debug line = 87:8]
  %tmp4_cast = sext i2 %tmp4 to i6, !dbg !1074    ; [#uses=1 type=i6] [debug line = 87:8]
  %tmp_48 = add i6 %tmp_48_cast, %tmp4_cast, !dbg !1074 ; [#uses=1 type=i6] [debug line = 87:8]
  %tmp_49_cast = sext i6 %tmp_48 to i16, !dbg !1074 ; [#uses=1 type=i16] [debug line = 87:8]
  %tmp_64 = add i16 %tmp_83_cast, %tmp_49_cast, !dbg !1074 ; [#uses=1 type=i16] [debug line = 87:8]
  %tmp_85_cast = zext i16 %tmp_64 to i64, !dbg !1074 ; [#uses=1 type=i64] [debug line = 87:8]
  %input_addr = getelementptr [24576 x float]* %input, i64 0, i64 %tmp_85_cast, !dbg !1074 ; [#uses=1 type=float*] [debug line = 87:8]
  %input_load = load float* %input_addr, align 4, !dbg !1074 ; [#uses=1 type=float] [debug line = 87:8]
  %sel_tmp1 = or i1 %sel_tmp, %p_not              ; [#uses=1 type=i1]
  %tmp_51 = select i1 %sel_tmp1, float 0.000000e+00, float %input_load, !dbg !1074 ; [#uses=1 type=float] [debug line = 87:8]
  %tmp_52 = fmul float %weight_load, %tmp_51, !dbg !1074 ; [#uses=1 type=float] [debug line = 87:8]
  %sum_5 = fadd float %sum_1, %tmp_52, !dbg !1074 ; [#uses=1 type=float] [debug line = 87:8]
  call void @llvm.dbg.value(metadata !{float %sum_5}, i64 0, metadata !1096), !dbg !1074 ; [debug line = 87:8] [debug variable = sum]
  call void @llvm.dbg.value(metadata !{i2 %n_4}, i64 0, metadata !1097), !dbg !1095 ; [debug line = 86:25] [debug variable = n]
  br label %.preheader, !dbg !1095                ; [debug line = 86:25]

; <label>:1                                       ; preds = %.preheader5
  %bias_load = load float* %bias_addr, align 4, !dbg !1084 ; [#uses=1 type=float] [debug line = 90:34]
  %result = fadd float %sum, %bias_load, !dbg !1084 ; [#uses=1 type=float] [debug line = 90:34]
  call void @llvm.dbg.value(metadata !{float %result}, i64 0, metadata !1098), !dbg !1084 ; [debug line = 90:34] [debug variable = result]
  %tmp_42_cast = zext i5 %w to i14, !dbg !1088    ; [#uses=1 type=i14] [debug line = 91:5]
  %tmp_58 = add i14 %tmp_75_cast, %tmp_42_cast, !dbg !1088 ; [#uses=1 type=i14] [debug line = 91:5]
  %tmp_77_cast = zext i14 %tmp_58 to i64, !dbg !1088 ; [#uses=1 type=i64] [debug line = 91:5]
  %output_0_addr = getelementptr [6144 x float]* %output_0, i64 0, i64 %tmp_77_cast, !dbg !1088 ; [#uses=1 type=float*] [debug line = 91:5]
  store float %result, float* %output_0_addr, align 4, !dbg !1088 ; [debug line = 91:5]
  call void @llvm.dbg.value(metadata !{i5 %w_4}, i64 0, metadata !1099), !dbg !1090 ; [debug line = 83:23] [debug variable = w]
  br label %.preheader6, !dbg !1090               ; [debug line = 83:23]

; <label>:2                                       ; preds = %.loopexit
  ret void, !dbg !1100                            ; [debug line = 97:1]
}

; [#uses=2]
define internal fastcc void @subconv_3x3_16_strid([12288 x float]* nocapture %input, [432 x float]* nocapture %weight, [48 x float]* nocapture %bias, [3072 x float]* nocapture %output_0) {
  call void @llvm.dbg.value(metadata !{[12288 x float]* %input}, i64 0, metadata !1101), !dbg !1110 ; [debug line = 250:42] [debug variable = input]
  call void @llvm.dbg.value(metadata !{[432 x float]* %weight}, i64 0, metadata !1111), !dbg !1112 ; [debug line = 251:8] [debug variable = weight]
  call void @llvm.dbg.value(metadata !{[48 x float]* %bias}, i64 0, metadata !1113), !dbg !1114 ; [debug line = 252:8] [debug variable = bias]
  call void @llvm.dbg.value(metadata !{[3072 x float]* %output_0}, i64 0, metadata !1115), !dbg !1116 ; [debug line = 253:8] [debug variable = output[0]]
  br label %.loopexit, !dbg !1117                 ; [debug line = 254:16]

.loopexit.loopexit:                               ; preds = %.preheader7
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_5, %.loopexit.loopexit ] ; [#uses=7 type=i6]
  %exitcond4 = icmp eq i6 %co, -16, !dbg !1117    ; [#uses=1 type=i1] [debug line = 254:16]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) ; [#uses=0 type=i32]
  %co_5 = add i6 %co, 1, !dbg !1120               ; [#uses=1 type=i6] [debug line = 254:23]
  call void @llvm.dbg.value(metadata !{i6 %co_5}, i64 0, metadata !1121), !dbg !1120 ; [debug line = 254:23] [debug variable = co]
  br i1 %exitcond4, label %2, label %.preheader7.preheader, !dbg !1117 ; [debug line = 254:16]

.preheader7.preheader:                            ; preds = %.loopexit
  %tmp = zext i6 %co to i64, !dbg !1122           ; [#uses=1 type=i64] [debug line = 260:8]
  %tmp_cast = zext i6 %co to i9                   ; [#uses=1 type=i9]
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co, i4 0) ; [#uses=1 type=i10]
  %tmp_87_cast = zext i10 %tmp_s to i11           ; [#uses=1 type=i11]
  %tmp_66 = call i8 @_ssdm_op_BitConcatenate.i8.i6.i2(i6 %co, i2 0) ; [#uses=1 type=i8]
  %p_shl_cast = zext i8 %tmp_66 to i9, !dbg !1122 ; [#uses=1 type=i9] [debug line = 260:8]
  %tmp_67 = sub i9 %p_shl_cast, %tmp_cast, !dbg !1122 ; [#uses=1 type=i9] [debug line = 260:8]
  %tmp_89_cast = sext i9 %tmp_67 to i10, !dbg !1122 ; [#uses=1 type=i10] [debug line = 260:8]
  %tmp_68 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co, i3 0) ; [#uses=1 type=i9]
  %tmp_91_cast = zext i9 %tmp_68 to i10, !dbg !1132 ; [#uses=1 type=i10] [debug line = 263:34]
  %bias_addr = getelementptr [48 x float]* %bias, i64 0, i64 %tmp, !dbg !1132 ; [#uses=1 type=float*] [debug line = 263:34]
  br label %.preheader7, !dbg !1133               ; [debug line = 255:16]

.preheader7.loopexit:                             ; preds = %.preheader6
  br label %.preheader7

.preheader7:                                      ; preds = %.preheader7.loopexit, %.preheader7.preheader
  %h = phi i4 [ 0, %.preheader7.preheader ], [ %h_5, %.preheader7.loopexit ] ; [#uses=4 type=i4]
  %exitcond3 = icmp eq i4 %h, -8, !dbg !1133      ; [#uses=1 type=i1] [debug line = 255:16]
  %empty_35 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  %h_5 = add i4 %h, 1, !dbg !1134                 ; [#uses=1 type=i4] [debug line = 255:21]
  call void @llvm.dbg.value(metadata !{i4 %h_5}, i64 0, metadata !1135), !dbg !1134 ; [debug line = 255:21] [debug variable = h]
  br i1 %exitcond3, label %.loopexit.loopexit, label %.preheader6.preheader, !dbg !1133 ; [debug line = 255:16]

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_62 = shl i4 %h, 1, !dbg !1122              ; [#uses=1 type=i4] [debug line = 260:8]
  %tmp_cast_36 = zext i4 %tmp_62 to i5, !dbg !1122 ; [#uses=2 type=i5] [debug line = 260:8]
  %tmp_53_cast = zext i4 %h to i10, !dbg !1136    ; [#uses=1 type=i10] [debug line = 264:5]
  %tmp_69 = add i10 %tmp_91_cast, %tmp_53_cast, !dbg !1136 ; [#uses=1 type=i10] [debug line = 264:5]
  %tmp_95_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_69, i3 0), !dbg !1137 ; [#uses=1 type=i13] [debug line = 256:17]
  br label %.preheader6, !dbg !1137               ; [debug line = 256:17]

.preheader6:                                      ; preds = %1, %.preheader6.preheader
  %w = phi i4 [ %w_5, %1 ], [ 0, %.preheader6.preheader ] ; [#uses=4 type=i4]
  %exitcond2 = icmp eq i4 %w, -8, !dbg !1137      ; [#uses=1 type=i1] [debug line = 256:17]
  %empty_37 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  %w_5 = add i4 %w, 1, !dbg !1138                 ; [#uses=1 type=i4] [debug line = 256:22]
  br i1 %exitcond2, label %.preheader7.loopexit, label %.preheader5.preheader, !dbg !1137 ; [debug line = 256:17]

.preheader5.preheader:                            ; preds = %.preheader6
  %tmp_70 = shl i4 %w, 1, !dbg !1122              ; [#uses=1 type=i4] [debug line = 260:8]
  %tmp_64_cast = zext i4 %tmp_70 to i5, !dbg !1122 ; [#uses=2 type=i5] [debug line = 260:8]
  %tmp_60 = sub i5 0, %tmp_64_cast, !dbg !1122    ; [#uses=1 type=i5] [debug line = 260:8]
  br label %.preheader5, !dbg !1139               ; [debug line = 258:18]

.preheader5.loopexit:                             ; preds = %.preheader
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %sum = phi float [ 0.000000e+00, %.preheader5.preheader ], [ %sum_1, %.preheader5.loopexit ] ; [#uses=2 type=float]
  %m = phi i2 [ 0, %.preheader5.preheader ], [ %m_5, %.preheader5.loopexit ] ; [#uses=5 type=i2]
  %m_cast8_cast = zext i2 %m to i3, !dbg !1139    ; [#uses=1 type=i3] [debug line = 258:18]
  %exitcond1 = icmp eq i2 %m, -1, !dbg !1139      ; [#uses=1 type=i1] [debug line = 258:18]
  %empty_38 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) ; [#uses=0 type=i32]
  %m_5 = add i2 %m, 1, !dbg !1140                 ; [#uses=1 type=i2] [debug line = 258:23]
  call void @llvm.dbg.value(metadata !{i2 %m_5}, i64 0, metadata !1141), !dbg !1140 ; [debug line = 258:23] [debug variable = m]
  br i1 %exitcond1, label %1, label %.preheader.preheader, !dbg !1139 ; [debug line = 258:18]

.preheader.preheader:                             ; preds = %.preheader5
  %tmp_56_cast = zext i2 %m to i10, !dbg !1122    ; [#uses=1 type=i10] [debug line = 260:8]
  %tmp_72 = add i10 %tmp_56_cast, %tmp_89_cast, !dbg !1122 ; [#uses=2 type=i10] [debug line = 260:8]
  %tmp_73 = shl i10 %tmp_72, 2, !dbg !1122        ; [#uses=1 type=i10] [debug line = 260:8]
  %tmp_74 = sub i10 %tmp_73, %tmp_72, !dbg !1122  ; [#uses=1 type=i10] [debug line = 260:8]
  %tmp3 = add i2 -1, %m, !dbg !1122               ; [#uses=1 type=i2] [debug line = 260:8]
  %tmp3_cast = sext i2 %tmp3 to i5, !dbg !1122    ; [#uses=1 type=i5] [debug line = 260:8]
  %tmp_57 = add i5 %tmp3_cast, %tmp_cast_36, !dbg !1122 ; [#uses=1 type=i5] [debug line = 260:8]
  %tmp_58_cast = sext i5 %tmp_57 to i11           ; [#uses=1 type=i11]
  %tmp_75 = add i11 %tmp_58_cast, %tmp_87_cast    ; [#uses=1 type=i11]
  %tmp_103_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_75, i4 0), !dbg !1122 ; [#uses=1 type=i15] [debug line = 260:8]
  %tmp_63 = sub i3 0, %m_cast8_cast, !dbg !1122   ; [#uses=1 type=i3] [debug line = 260:8]
  %tmp_63_cast = sext i3 %tmp_63 to i5, !dbg !1122 ; [#uses=1 type=i5] [debug line = 260:8]
  %sel_tmp = icmp eq i5 %tmp_cast_36, %tmp_63_cast, !dbg !1122 ; [#uses=1 type=i1] [debug line = 260:8]
  br label %.preheader, !dbg !1142                ; [debug line = 259:20]

.preheader:                                       ; preds = %_ifconv, %.preheader.preheader
  %sum_1 = phi float [ %sum_6, %_ifconv ], [ %sum, %.preheader.preheader ] ; [#uses=2 type=float]
  %n = phi i2 [ %n_5, %_ifconv ], [ 0, %.preheader.preheader ] ; [#uses=5 type=i2]
  %n_cast6 = zext i2 %n to i5, !dbg !1142         ; [#uses=1 type=i5] [debug line = 259:20]
  %exitcond = icmp eq i2 %n, -1, !dbg !1142       ; [#uses=1 type=i1] [debug line = 259:20]
  %empty_39 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) ; [#uses=0 type=i32]
  %n_5 = add i2 %n, 1, !dbg !1143                 ; [#uses=1 type=i2] [debug line = 259:25]
  br i1 %exitcond, label %.preheader5.loopexit, label %_ifconv, !dbg !1142 ; [debug line = 259:20]

_ifconv:                                          ; preds = %.preheader
  %tmp_59_cast = zext i2 %n to i10, !dbg !1122    ; [#uses=1 type=i10] [debug line = 260:8]
  %tmp_76 = add i10 %tmp_74, %tmp_59_cast, !dbg !1122 ; [#uses=1 type=i10] [debug line = 260:8]
  %tmp_104_cast = zext i10 %tmp_76 to i64, !dbg !1122 ; [#uses=1 type=i64] [debug line = 260:8]
  %weight_addr = getelementptr [432 x float]* %weight, i64 0, i64 %tmp_104_cast, !dbg !1122 ; [#uses=1 type=float*] [debug line = 260:8]
  %weight_load = load float* %weight_addr, align 4, !dbg !1122 ; [#uses=1 type=float] [debug line = 260:8]
  %p_not = icmp eq i5 %n_cast6, %tmp_60, !dbg !1122 ; [#uses=1 type=i1] [debug line = 260:8]
  %tmp4 = add i2 %n, -1, !dbg !1122               ; [#uses=1 type=i2] [debug line = 260:8]
  %tmp4_cast = sext i2 %tmp4 to i5, !dbg !1122    ; [#uses=1 type=i5] [debug line = 260:8]
  %tmp_61 = add i5 %tmp_64_cast, %tmp4_cast, !dbg !1122 ; [#uses=1 type=i5] [debug line = 260:8]
  %tmp_62_cast = sext i5 %tmp_61 to i15, !dbg !1122 ; [#uses=1 type=i15] [debug line = 260:8]
  %tmp_77 = add i15 %tmp_103_cast, %tmp_62_cast, !dbg !1122 ; [#uses=1 type=i15] [debug line = 260:8]
  %tmp_105_cast = zext i15 %tmp_77 to i64, !dbg !1122 ; [#uses=1 type=i64] [debug line = 260:8]
  %input_addr = getelementptr [12288 x float]* %input, i64 0, i64 %tmp_105_cast, !dbg !1122 ; [#uses=1 type=float*] [debug line = 260:8]
  %input_load = load float* %input_addr, align 4, !dbg !1122 ; [#uses=1 type=float] [debug line = 260:8]
  %sel_tmp1 = or i1 %sel_tmp, %p_not              ; [#uses=1 type=i1]
  %tmp_64 = select i1 %sel_tmp1, float 0.000000e+00, float %input_load, !dbg !1122 ; [#uses=1 type=float] [debug line = 260:8]
  %tmp_65 = fmul float %weight_load, %tmp_64, !dbg !1122 ; [#uses=1 type=float] [debug line = 260:8]
  %sum_6 = fadd float %sum_1, %tmp_65, !dbg !1122 ; [#uses=1 type=float] [debug line = 260:8]
  call void @llvm.dbg.value(metadata !{float %sum_6}, i64 0, metadata !1144), !dbg !1122 ; [debug line = 260:8] [debug variable = sum]
  call void @llvm.dbg.value(metadata !{i2 %n_5}, i64 0, metadata !1145), !dbg !1143 ; [debug line = 259:25] [debug variable = n]
  br label %.preheader, !dbg !1143                ; [debug line = 259:25]

; <label>:1                                       ; preds = %.preheader5
  %bias_load = load float* %bias_addr, align 4, !dbg !1132 ; [#uses=1 type=float] [debug line = 263:34]
  %result = fadd float %sum, %bias_load, !dbg !1132 ; [#uses=1 type=float] [debug line = 263:34]
  call void @llvm.dbg.value(metadata !{float %result}, i64 0, metadata !1146), !dbg !1132 ; [debug line = 263:34] [debug variable = result]
  %tmp_55_cast = zext i4 %w to i13, !dbg !1136    ; [#uses=1 type=i13] [debug line = 264:5]
  %tmp_71 = add i13 %tmp_95_cast, %tmp_55_cast, !dbg !1136 ; [#uses=1 type=i13] [debug line = 264:5]
  %tmp_97_cast = zext i13 %tmp_71 to i64, !dbg !1136 ; [#uses=1 type=i64] [debug line = 264:5]
  %output_0_addr = getelementptr [3072 x float]* %output_0, i64 0, i64 %tmp_97_cast, !dbg !1136 ; [#uses=1 type=float*] [debug line = 264:5]
  store float %result, float* %output_0_addr, align 4, !dbg !1136 ; [debug line = 264:5]
  call void @llvm.dbg.value(metadata !{i4 %w_5}, i64 0, metadata !1147), !dbg !1138 ; [debug line = 256:22] [debug variable = w]
  br label %.preheader6, !dbg !1138               ; [debug line = 256:22]

; <label>:2                                       ; preds = %.loopexit
  ret void, !dbg !1148                            ; [debug line = 269:1]
}

; [#uses=1]
define internal fastcc void @subconv_3x3_16_no_re([6144 x float]* nocapture %input_0, [216 x float]* nocapture %weight, [24 x float]* nocapture %bias, [6144 x float]* nocapture %output_0) {
  call void @llvm.dbg.value(metadata !{[6144 x float]* %input_0}, i64 0, metadata !1149), !dbg !1153 ; [debug line = 100:35] [debug variable = input[0]]
  call void @llvm.dbg.value(metadata !{[216 x float]* %weight}, i64 0, metadata !1154), !dbg !1155 ; [debug line = 101:8] [debug variable = weight]
  call void @llvm.dbg.value(metadata !{[24 x float]* %bias}, i64 0, metadata !1156), !dbg !1157 ; [debug line = 102:8] [debug variable = bias]
  call void @llvm.dbg.value(metadata !{[6144 x float]* %output_0}, i64 0, metadata !1158), !dbg !1159 ; [debug line = 103:8] [debug variable = output[0]]
  br label %.loopexit, !dbg !1160                 ; [debug line = 104:16]

.loopexit.loopexit:                               ; preds = %.preheader7
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i5 [ 0, %0 ], [ %co_6, %.loopexit.loopexit ] ; [#uses=6 type=i5]
  %exitcond4 = icmp eq i5 %co, -8, !dbg !1160     ; [#uses=1 type=i1] [debug line = 104:16]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) ; [#uses=0 type=i32]
  %co_6 = add i5 %co, 1, !dbg !1163               ; [#uses=1 type=i5] [debug line = 104:23]
  call void @llvm.dbg.value(metadata !{i5 %co_6}, i64 0, metadata !1164), !dbg !1163 ; [debug line = 104:23] [debug variable = co]
  br i1 %exitcond4, label %2, label %.preheader7.preheader, !dbg !1160 ; [debug line = 104:16]

.preheader7.preheader:                            ; preds = %.loopexit
  %tmp = zext i5 %co to i64, !dbg !1165           ; [#uses=1 type=i64] [debug line = 110:8]
  %tmp_cast = zext i5 %co to i8                   ; [#uses=1 type=i8]
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co, i4 0) ; [#uses=2 type=i9]
  %tmp_107_cast2 = zext i9 %tmp_s to i10          ; [#uses=1 type=i10]
  %tmp_107_cast = zext i9 %tmp_s to i10           ; [#uses=1 type=i10]
  %tmp_79 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co, i2 0) ; [#uses=1 type=i7]
  %p_shl_cast = zext i7 %tmp_79 to i8, !dbg !1165 ; [#uses=1 type=i8] [debug line = 110:8]
  %tmp_80 = sub i8 %p_shl_cast, %tmp_cast, !dbg !1165 ; [#uses=1 type=i8] [debug line = 110:8]
  %tmp_109_cast = sext i8 %tmp_80 to i9, !dbg !1165 ; [#uses=1 type=i9] [debug line = 110:8]
  %bias_addr = getelementptr [24 x float]* %bias, i64 0, i64 %tmp, !dbg !1175 ; [#uses=1 type=float*] [debug line = 113:34]
  br label %.preheader7, !dbg !1176               ; [debug line = 105:16]

.preheader7.loopexit:                             ; preds = %.preheader6
  br label %.preheader7

.preheader7:                                      ; preds = %.preheader7.loopexit, %.preheader7.preheader
  %h = phi i5 [ 0, %.preheader7.preheader ], [ %h_6, %.preheader7.loopexit ] ; [#uses=5 type=i5]
  %h_cast = zext i5 %h to i6, !dbg !1176          ; [#uses=1 type=i6] [debug line = 105:16]
  %exitcond3 = icmp eq i5 %h, -16, !dbg !1176     ; [#uses=1 type=i1] [debug line = 105:16]
  %empty_40 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  %h_6 = add i5 %h, 1, !dbg !1177                 ; [#uses=1 type=i5] [debug line = 105:22]
  call void @llvm.dbg.value(metadata !{i5 %h_6}, i64 0, metadata !1178), !dbg !1177 ; [debug line = 105:22] [debug variable = h]
  br i1 %exitcond3, label %.loopexit.loopexit, label %.preheader6.preheader, !dbg !1176 ; [debug line = 105:16]

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_cast_41 = zext i5 %h to i10, !dbg !1179    ; [#uses=1 type=i10] [debug line = 114:5]
  %tmp_81 = add i10 %tmp_cast_41, %tmp_107_cast, !dbg !1179 ; [#uses=1 type=i10] [debug line = 114:5]
  %tmp_112_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_81, i4 0), !dbg !1180 ; [#uses=1 type=i14] [debug line = 106:17]
  br label %.preheader6, !dbg !1180               ; [debug line = 106:17]

.preheader6:                                      ; preds = %1, %.preheader6.preheader
  %w = phi i5 [ %w_6, %1 ], [ 0, %.preheader6.preheader ] ; [#uses=5 type=i5]
  %w_cast = zext i5 %w to i6, !dbg !1180          ; [#uses=1 type=i6] [debug line = 106:17]
  %exitcond2 = icmp eq i5 %w, -16, !dbg !1180     ; [#uses=1 type=i1] [debug line = 106:17]
  %empty_42 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  %w_6 = add i5 %w, 1, !dbg !1181                 ; [#uses=1 type=i5] [debug line = 106:23]
  br i1 %exitcond2, label %.preheader7.loopexit, label %.preheader5.preheader, !dbg !1180 ; [debug line = 106:17]

.preheader5.preheader:                            ; preds = %.preheader6
  %tmp_76 = sub i5 0, %w, !dbg !1165              ; [#uses=1 type=i5] [debug line = 110:8]
  br label %.preheader5, !dbg !1182               ; [debug line = 108:18]

.preheader5.loopexit:                             ; preds = %.preheader
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %sum = phi float [ 0.000000e+00, %.preheader5.preheader ], [ %sum_1, %.preheader5.loopexit ] ; [#uses=2 type=float]
  %m = phi i2 [ 0, %.preheader5.preheader ], [ %m_6, %.preheader5.loopexit ] ; [#uses=5 type=i2]
  %m_cast_cast = zext i2 %m to i3, !dbg !1182     ; [#uses=1 type=i3] [debug line = 108:18]
  %exitcond1 = icmp eq i2 %m, -1, !dbg !1182      ; [#uses=1 type=i1] [debug line = 108:18]
  %empty_43 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) ; [#uses=0 type=i32]
  %m_6 = add i2 %m, 1, !dbg !1183                 ; [#uses=1 type=i2] [debug line = 108:23]
  call void @llvm.dbg.value(metadata !{i2 %m_6}, i64 0, metadata !1184), !dbg !1183 ; [debug line = 108:23] [debug variable = m]
  br i1 %exitcond1, label %1, label %.preheader.preheader, !dbg !1182 ; [debug line = 108:18]

.preheader.preheader:                             ; preds = %.preheader5
  %tmp_67_cast = zext i2 %m to i9, !dbg !1165     ; [#uses=1 type=i9] [debug line = 110:8]
  %tmp_83 = add i9 %tmp_67_cast, %tmp_109_cast, !dbg !1165 ; [#uses=2 type=i9] [debug line = 110:8]
  %tmp_74 = shl i9 %tmp_83, 2, !dbg !1165         ; [#uses=1 type=i9] [debug line = 110:8]
  %tmp_84 = sub i9 %tmp_74, %tmp_83, !dbg !1165   ; [#uses=1 type=i9] [debug line = 110:8]
  %tmp_68 = sub i3 0, %m_cast_cast, !dbg !1165    ; [#uses=1 type=i3] [debug line = 110:8]
  %tmp_68_cast = sext i3 %tmp_68 to i5, !dbg !1165 ; [#uses=1 type=i5] [debug line = 110:8]
  %tmp_69 = icmp ne i5 %h, %tmp_68_cast, !dbg !1165 ; [#uses=1 type=i1] [debug line = 110:8]
  %tmp4 = add i2 -1, %m, !dbg !1165               ; [#uses=1 type=i2] [debug line = 110:8]
  %tmp4_cast = sext i2 %tmp4 to i6, !dbg !1165    ; [#uses=1 type=i6] [debug line = 110:8]
  %tmp_70 = add i6 %tmp4_cast, %h_cast, !dbg !1165 ; [#uses=2 type=i6] [debug line = 110:8]
  %tmp_71_cast = sext i6 %tmp_70 to i10           ; [#uses=1 type=i10]
  %tmp_85 = add i10 %tmp_71_cast, %tmp_107_cast2  ; [#uses=1 type=i10]
  %tmp_119_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_85, i4 0), !dbg !1165 ; [#uses=1 type=i14] [debug line = 110:8]
  %tmp_75 = call i2 @_ssdm_op_PartSelect.i2.i6.i32.i32(i6 %tmp_70, i32 4, i32 5), !dbg !1165 ; [#uses=1 type=i2] [debug line = 110:8]
  %icmp = icmp ne i2 %tmp_75, 1, !dbg !1165       ; [#uses=1 type=i1] [debug line = 110:8]
  br label %.preheader, !dbg !1185                ; [debug line = 109:20]

.preheader:                                       ; preds = %_ifconv, %.preheader.preheader
  %sum_1 = phi float [ %sum_7, %_ifconv ], [ %sum, %.preheader.preheader ] ; [#uses=2 type=float]
  %n = phi i2 [ %n_6, %_ifconv ], [ 0, %.preheader.preheader ] ; [#uses=5 type=i2]
  %n_cast9 = zext i2 %n to i5, !dbg !1185         ; [#uses=1 type=i5] [debug line = 109:20]
  %exitcond = icmp eq i2 %n, -1, !dbg !1185       ; [#uses=1 type=i1] [debug line = 109:20]
  %empty_44 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) ; [#uses=0 type=i32]
  %n_6 = add i2 %n, 1, !dbg !1186                 ; [#uses=1 type=i2] [debug line = 109:25]
  br i1 %exitcond, label %.preheader5.loopexit, label %_ifconv, !dbg !1185 ; [debug line = 109:20]

_ifconv:                                          ; preds = %.preheader
  %tmp_72_cast = zext i2 %n to i9, !dbg !1165     ; [#uses=1 type=i9] [debug line = 110:8]
  %tmp_86 = add i9 %tmp_84, %tmp_72_cast, !dbg !1165 ; [#uses=1 type=i9] [debug line = 110:8]
  %tmp_120_cast = zext i9 %tmp_86 to i64, !dbg !1165 ; [#uses=1 type=i64] [debug line = 110:8]
  %weight_addr = getelementptr [216 x float]* %weight, i64 0, i64 %tmp_120_cast, !dbg !1165 ; [#uses=1 type=float*] [debug line = 110:8]
  %weight_load = load float* %weight_addr, align 4, !dbg !1165 ; [#uses=1 type=float] [debug line = 110:8]
  %tmp5 = add i2 %n, -1, !dbg !1165               ; [#uses=1 type=i2] [debug line = 110:8]
  %tmp5_cast = sext i2 %tmp5 to i6, !dbg !1165    ; [#uses=1 type=i6] [debug line = 110:8]
  %tmp_73 = add i6 %w_cast, %tmp5_cast, !dbg !1165 ; [#uses=2 type=i6] [debug line = 110:8]
  %tmp_87 = call i2 @_ssdm_op_PartSelect.i2.i6.i32.i32(i6 %tmp_73, i32 4, i32 5), !dbg !1165 ; [#uses=1 type=i2] [debug line = 110:8]
  %icmp5 = icmp ne i2 %tmp_87, 1, !dbg !1165      ; [#uses=1 type=i1] [debug line = 110:8]
  %tmp_75_cast = sext i6 %tmp_73 to i14, !dbg !1165 ; [#uses=1 type=i14] [debug line = 110:8]
  %tmp_88 = add i14 %tmp_119_cast, %tmp_75_cast, !dbg !1165 ; [#uses=1 type=i14] [debug line = 110:8]
  %tmp_121_cast = zext i14 %tmp_88 to i64, !dbg !1165 ; [#uses=1 type=i64] [debug line = 110:8]
  %input_0_addr = getelementptr [6144 x float]* %input_0, i64 0, i64 %tmp_121_cast, !dbg !1165 ; [#uses=1 type=float*] [debug line = 110:8]
  %input_0_load = load float* %input_0_addr, align 4, !dbg !1165 ; [#uses=1 type=float] [debug line = 110:8]
  %notlhs = icmp ne i5 %n_cast9, %tmp_76, !dbg !1165 ; [#uses=1 type=i1] [debug line = 110:8]
  %tmp6 = and i1 %icmp, %notlhs                   ; [#uses=1 type=i1]
  %tmp7 = and i1 %tmp_69, %icmp5                  ; [#uses=1 type=i1]
  %sel_tmp2 = and i1 %tmp7, %tmp6                 ; [#uses=1 type=i1]
  %tmp_77 = select i1 %sel_tmp2, float %input_0_load, float 0.000000e+00, !dbg !1165 ; [#uses=1 type=float] [debug line = 110:8]
  %tmp_78 = fmul float %weight_load, %tmp_77, !dbg !1165 ; [#uses=1 type=float] [debug line = 110:8]
  %sum_7 = fadd float %sum_1, %tmp_78, !dbg !1165 ; [#uses=1 type=float] [debug line = 110:8]
  call void @llvm.dbg.value(metadata !{float %sum_7}, i64 0, metadata !1187), !dbg !1165 ; [debug line = 110:8] [debug variable = sum]
  call void @llvm.dbg.value(metadata !{i2 %n_6}, i64 0, metadata !1188), !dbg !1186 ; [debug line = 109:25] [debug variable = n]
  br label %.preheader, !dbg !1186                ; [debug line = 109:25]

; <label>:1                                       ; preds = %.preheader5
  %bias_load = load float* %bias_addr, align 4, !dbg !1175 ; [#uses=1 type=float] [debug line = 113:34]
  %result = fadd float %sum, %bias_load, !dbg !1175 ; [#uses=1 type=float] [debug line = 113:34]
  call void @llvm.dbg.value(metadata !{float %result}, i64 0, metadata !1189), !dbg !1175 ; [debug line = 113:34] [debug variable = result]
  %tmp_66_cast = zext i5 %w to i14, !dbg !1179    ; [#uses=1 type=i14] [debug line = 114:5]
  %tmp_82 = add i14 %tmp_112_cast, %tmp_66_cast, !dbg !1179 ; [#uses=1 type=i14] [debug line = 114:5]
  %tmp_113_cast = zext i14 %tmp_82 to i64, !dbg !1179 ; [#uses=1 type=i64] [debug line = 114:5]
  %output_0_addr = getelementptr [6144 x float]* %output_0, i64 0, i64 %tmp_113_cast, !dbg !1179 ; [#uses=1 type=float*] [debug line = 114:5]
  store float %result, float* %output_0_addr, align 4, !dbg !1179 ; [debug line = 114:5]
  call void @llvm.dbg.value(metadata !{i5 %w_6}, i64 0, metadata !1190), !dbg !1181 ; [debug line = 106:23] [debug variable = w]
  br label %.preheader6, !dbg !1181               ; [debug line = 106:23]

; <label>:2                                       ; preds = %.loopexit
  ret void, !dbg !1191                            ; [debug line = 119:1]
}

; [#uses=1]
define internal fastcc void @subconv_1x1_8p20([9216 x float]* nocapture %weight, [96 x float]* nocapture %bias, [6144 x float]* nocapture %output) {
  call void @llvm.dbg.value(metadata !{[9216 x float]* %weight}, i64 0, metadata !1192), !dbg !1201 ; [debug line = 381:8] [debug variable = weight]
  call void @llvm.dbg.value(metadata !{[96 x float]* %bias}, i64 0, metadata !1202), !dbg !1203 ; [debug line = 382:8] [debug variable = bias]
  call void @llvm.dbg.value(metadata !{[6144 x float]* %output}, i64 0, metadata !1204), !dbg !1205 ; [debug line = 383:8] [debug variable = output]
  br label %.loopexit, !dbg !1206                 ; [debug line = 385:16]

.loopexit.loopexit:                               ; preds = %.preheader5
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_7, %.loopexit.loopexit ] ; [#uses=6 type=i7]
  %exitcond3 = icmp eq i7 %co, -32, !dbg !1206    ; [#uses=1 type=i1] [debug line = 385:16]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) ; [#uses=0 type=i32]
  %co_7 = add i7 %co, 1, !dbg !1209               ; [#uses=1 type=i7] [debug line = 385:23]
  call void @llvm.dbg.value(metadata !{i7 %co_7}, i64 0, metadata !1210), !dbg !1209 ; [debug line = 385:23] [debug variable = co]
  br i1 %exitcond3, label %3, label %.preheader5.preheader, !dbg !1206 ; [debug line = 385:16]

.preheader5.preheader:                            ; preds = %.loopexit
  %tmp = zext i7 %co to i64, !dbg !1211           ; [#uses=1 type=i64] [debug line = 390:6]
  %tmp_s = call i14 @_ssdm_op_BitConcatenate.i14.i7.i7(i7 %co, i7 0) ; [#uses=1 type=i14]
  %p_shl_cast = zext i14 %tmp_s to i15            ; [#uses=1 type=i15]
  %tmp_89 = call i12 @_ssdm_op_BitConcatenate.i12.i7.i5(i7 %co, i5 0) ; [#uses=1 type=i12]
  %p_shl1_cast = zext i12 %tmp_89 to i15, !dbg !1211 ; [#uses=1 type=i15] [debug line = 390:6]
  %tmp_90 = sub i15 %p_shl_cast, %p_shl1_cast, !dbg !1211 ; [#uses=1 type=i15] [debug line = 390:6]
  %tmp_91 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0) ; [#uses=1 type=i10]
  %tmp_126_cast = zext i10 %tmp_91 to i11, !dbg !1219 ; [#uses=1 type=i11] [debug line = 392:34]
  %bias_addr = getelementptr [96 x float]* %bias, i64 0, i64 %tmp, !dbg !1219 ; [#uses=1 type=float*] [debug line = 392:34]
  br label %.preheader5, !dbg !1220               ; [debug line = 386:16]

.preheader5.loopexit:                             ; preds = %.preheader4
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %h = phi i4 [ 0, %.preheader5.preheader ], [ %h_7, %.preheader5.loopexit ] ; [#uses=3 type=i4]
  %exitcond2 = icmp eq i4 %h, -8, !dbg !1220      ; [#uses=1 type=i1] [debug line = 386:16]
  %empty_45 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  %h_7 = add i4 %h, 1, !dbg !1221                 ; [#uses=1 type=i4] [debug line = 386:21]
  call void @llvm.dbg.value(metadata !{i4 %h_7}, i64 0, metadata !1222), !dbg !1221 ; [debug line = 386:21] [debug variable = h]
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader4.preheader, !dbg !1220 ; [debug line = 386:16]

.preheader4.preheader:                            ; preds = %.preheader5
  %tmp_cast = zext i4 %h to i11, !dbg !1223       ; [#uses=2 type=i11] [debug line = 393:17]
  %tmp_92 = add i11 %tmp_cast, %tmp_126_cast, !dbg !1223 ; [#uses=1 type=i11] [debug line = 393:17]
  %tmp_129_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_92, i3 0), !dbg !1224 ; [#uses=1 type=i14] [debug line = 387:17]
  br label %.preheader4, !dbg !1224               ; [debug line = 387:17]

.preheader4:                                      ; preds = %2, %.preheader4.preheader
  %w = phi i4 [ %w_7, %2 ], [ 0, %.preheader4.preheader ] ; [#uses=3 type=i4]
  %exitcond1 = icmp eq i4 %w, -8, !dbg !1224      ; [#uses=1 type=i1] [debug line = 387:17]
  %empty_46 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  %w_7 = add i4 %w, 1, !dbg !1225                 ; [#uses=1 type=i4] [debug line = 387:22]
  br i1 %exitcond1, label %.preheader5.loopexit, label %.preheader.preheader, !dbg !1224 ; [debug line = 387:17]

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_79_cast = zext i4 %w to i14, !dbg !1223    ; [#uses=2 type=i14] [debug line = 393:17]
  %tmp_93 = add i14 %tmp_129_cast, %tmp_79_cast, !dbg !1223 ; [#uses=1 type=i14] [debug line = 393:17]
  %tmp_130_cast = zext i14 %tmp_93 to i64, !dbg !1223 ; [#uses=1 type=i64] [debug line = 393:17]
  %output_addr = getelementptr [6144 x float]* %output, i64 0, i64 %tmp_130_cast, !dbg !1223 ; [#uses=1 type=float*] [debug line = 393:17]
  br label %.preheader, !dbg !1226                ; [debug line = 389:19]

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum = phi float [ %sum_8, %1 ], [ 0.000000e+00, %.preheader.preheader ] ; [#uses=2 type=float]
  %ci = phi i7 [ %ci_1, %1 ], [ 0, %.preheader.preheader ] ; [#uses=4 type=i7]
  %exitcond = icmp eq i7 %ci, -32, !dbg !1226     ; [#uses=1 type=i1] [debug line = 389:19]
  %empty_47 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) ; [#uses=0 type=i32]
  %ci_1 = add i7 %ci, 1, !dbg !1227               ; [#uses=1 type=i7] [debug line = 389:26]
  br i1 %exitcond, label %2, label %1, !dbg !1226 ; [debug line = 389:19]

; <label>:1                                       ; preds = %.preheader
  %tmp_80_cast = zext i7 %ci to i15, !dbg !1211   ; [#uses=1 type=i15] [debug line = 390:6]
  %tmp_94 = add i15 %tmp_80_cast, %tmp_90, !dbg !1211 ; [#uses=1 type=i15] [debug line = 390:6]
  %tmp_131_cast = sext i15 %tmp_94 to i64, !dbg !1211 ; [#uses=1 type=i64] [debug line = 390:6]
  %weight_addr = getelementptr [9216 x float]* %weight, i64 0, i64 %tmp_131_cast, !dbg !1211 ; [#uses=1 type=float*] [debug line = 390:6]
  %tmp_95 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %ci, i3 0) ; [#uses=1 type=i10]
  %tmp_133_cast = zext i10 %tmp_95 to i11, !dbg !1211 ; [#uses=1 type=i11] [debug line = 390:6]
  %tmp_96 = add i11 %tmp_cast, %tmp_133_cast, !dbg !1211 ; [#uses=1 type=i11] [debug line = 390:6]
  %tmp_136_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_96, i3 0), !dbg !1211 ; [#uses=1 type=i14] [debug line = 390:6]
  %tmp_97 = add i14 %tmp_79_cast, %tmp_136_cast, !dbg !1211 ; [#uses=1 type=i14] [debug line = 390:6]
  %tmp_137_cast = zext i14 %tmp_97 to i64, !dbg !1211 ; [#uses=1 type=i64] [debug line = 390:6]
  %shuffleunit1_7_outpu = getelementptr [6144 x float]* @shuffleunit1_7_outpu, i64 0, i64 %tmp_137_cast, !dbg !1211 ; [#uses=1 type=float*] [debug line = 390:6]
  %weight_load = load float* %weight_addr, align 4, !dbg !1211 ; [#uses=1 type=float] [debug line = 390:6]
  %shuffleunit1_7_outpu_1 = load float* %shuffleunit1_7_outpu, align 4, !dbg !1211 ; [#uses=1 type=float] [debug line = 390:6]
  %tmp_81 = fmul float %weight_load, %shuffleunit1_7_outpu_1, !dbg !1211 ; [#uses=1 type=float] [debug line = 390:6]
  %sum_8 = fadd float %sum, %tmp_81, !dbg !1211   ; [#uses=1 type=float] [debug line = 390:6]
  call void @llvm.dbg.value(metadata !{float %sum_8}, i64 0, metadata !1228), !dbg !1211 ; [debug line = 390:6] [debug variable = sum]
  call void @llvm.dbg.value(metadata !{i7 %ci_1}, i64 0, metadata !1229), !dbg !1227 ; [debug line = 389:26] [debug variable = ci]
  br label %.preheader, !dbg !1227                ; [debug line = 389:26]

; <label>:2                                       ; preds = %.preheader
  %bias_load = load float* %bias_addr, align 4, !dbg !1219 ; [#uses=1 type=float] [debug line = 392:34]
  %result = fadd float %sum, %bias_load, !dbg !1219 ; [#uses=3 type=float] [debug line = 392:34]
  call void @llvm.dbg.value(metadata !{float %result}, i64 0, metadata !1230), !dbg !1219 ; [debug line = 392:34] [debug variable = result]
  %result_to_int = bitcast float %result to i32   ; [#uses=2 type=i32]
  %tmp_1 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %result_to_int, i32 23, i32 30) ; [#uses=1 type=i8]
  %tmp_88 = trunc i32 %result_to_int to i23       ; [#uses=1 type=i23]
  %notlhs = icmp ne i8 %tmp_1, -1                 ; [#uses=1 type=i1]
  %notrhs = icmp eq i23 %tmp_88, 0                ; [#uses=1 type=i1]
  %tmp_3 = or i1 %notrhs, %notlhs                 ; [#uses=1 type=i1]
  %tmp_4 = fcmp ogt float %result, 0.000000e+00, !dbg !1223 ; [#uses=1 type=i1] [debug line = 393:17]
  %tmp_5 = and i1 %tmp_3, %tmp_4, !dbg !1223      ; [#uses=1 type=i1] [debug line = 393:17]
  %result_1 = select i1 %tmp_5, float %result, float 0.000000e+00, !dbg !1223 ; [#uses=1 type=float] [debug line = 393:17]
  call void @llvm.dbg.value(metadata !{float %result_1}, i64 0, metadata !1230), !dbg !1223 ; [debug line = 393:17] [debug variable = result]
  store float %result_1, float* %output_addr, align 4, !dbg !1223 ; [debug line = 393:17]
  call void @llvm.dbg.value(metadata !{i4 %w_7}, i64 0, metadata !1231), !dbg !1225 ; [debug line = 387:22] [debug variable = w]
  br label %.preheader4, !dbg !1225               ; [debug line = 387:22]

; <label>:3                                       ; preds = %.loopexit
  ret void, !dbg !1232                            ; [debug line = 397:1]
}

; [#uses=4]
define internal fastcc void @subconv_1x1_89([3072 x float]* nocapture %input_0, [2304 x float]* nocapture %weight, [48 x float]* nocapture %bias, [3072 x float]* nocapture %output_0) {
  call void @llvm.dbg.value(metadata !{[3072 x float]* %input_0}, i64 0, metadata !1233), !dbg !1240 ; [debug line = 229:26] [debug variable = input[0]]
  call void @llvm.dbg.value(metadata !{[2304 x float]* %weight}, i64 0, metadata !1241), !dbg !1244 ; [debug line = 230:8] [debug variable = weight]
  call void @llvm.dbg.value(metadata !{[48 x float]* %bias}, i64 0, metadata !1245), !dbg !1246 ; [debug line = 231:8] [debug variable = bias]
  call void @llvm.dbg.value(metadata !{[3072 x float]* %output_0}, i64 0, metadata !1247), !dbg !1248 ; [debug line = 232:8] [debug variable = output[0]]
  br label %.loopexit, !dbg !1249                 ; [debug line = 235:16]

.loopexit.loopexit:                               ; preds = %.preheader5
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_8, %.loopexit.loopexit ] ; [#uses=6 type=i6]
  %exitcond3 = icmp eq i6 %co, -16, !dbg !1249    ; [#uses=1 type=i1] [debug line = 235:16]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) ; [#uses=0 type=i32]
  %co_8 = add i6 %co, 1, !dbg !1252               ; [#uses=1 type=i6] [debug line = 235:23]
  call void @llvm.dbg.value(metadata !{i6 %co_8}, i64 0, metadata !1253), !dbg !1252 ; [debug line = 235:23] [debug variable = co]
  br i1 %exitcond3, label %3, label %.preheader5.preheader, !dbg !1249 ; [debug line = 235:16]

.preheader5.preheader:                            ; preds = %.loopexit
  %tmp = zext i6 %co to i64, !dbg !1254           ; [#uses=1 type=i64] [debug line = 240:6]
  %tmp_s = call i12 @_ssdm_op_BitConcatenate.i12.i6.i6(i6 %co, i6 0) ; [#uses=1 type=i12]
  %p_shl_cast = zext i12 %tmp_s to i13            ; [#uses=1 type=i13]
  %tmp_98 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co, i4 0) ; [#uses=1 type=i10]
  %p_shl1_cast = zext i10 %tmp_98 to i13, !dbg !1254 ; [#uses=1 type=i13] [debug line = 240:6]
  %tmp_99 = sub i13 %p_shl_cast, %p_shl1_cast, !dbg !1254 ; [#uses=1 type=i13] [debug line = 240:6]
  %tmp_100 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co, i3 0) ; [#uses=1 type=i9]
  %tmp_142_cast = zext i9 %tmp_100 to i10, !dbg !1262 ; [#uses=1 type=i10] [debug line = 242:34]
  %bias_addr = getelementptr [48 x float]* %bias, i64 0, i64 %tmp, !dbg !1262 ; [#uses=1 type=float*] [debug line = 242:34]
  br label %.preheader5, !dbg !1263               ; [debug line = 236:16]

.preheader5.loopexit:                             ; preds = %.preheader4
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %h = phi i4 [ 0, %.preheader5.preheader ], [ %h_8, %.preheader5.loopexit ] ; [#uses=3 type=i4]
  %exitcond2 = icmp eq i4 %h, -8, !dbg !1263      ; [#uses=1 type=i1] [debug line = 236:16]
  %empty_48 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  %h_8 = add i4 %h, 1, !dbg !1264                 ; [#uses=1 type=i4] [debug line = 236:21]
  call void @llvm.dbg.value(metadata !{i4 %h_8}, i64 0, metadata !1265), !dbg !1264 ; [debug line = 236:21] [debug variable = h]
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader4.preheader, !dbg !1263 ; [debug line = 236:16]

.preheader4.preheader:                            ; preds = %.preheader5
  %tmp_cast = zext i4 %h to i10, !dbg !1266       ; [#uses=2 type=i10] [debug line = 243:17]
  %tmp_101 = add i10 %tmp_cast, %tmp_142_cast, !dbg !1266 ; [#uses=1 type=i10] [debug line = 243:17]
  %tmp_145_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_101, i3 0), !dbg !1267 ; [#uses=1 type=i13] [debug line = 237:17]
  br label %.preheader4, !dbg !1267               ; [debug line = 237:17]

.preheader4:                                      ; preds = %2, %.preheader4.preheader
  %w = phi i4 [ %w_8, %2 ], [ 0, %.preheader4.preheader ] ; [#uses=3 type=i4]
  %exitcond1 = icmp eq i4 %w, -8, !dbg !1267      ; [#uses=1 type=i1] [debug line = 237:17]
  %empty_49 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  %w_8 = add i4 %w, 1, !dbg !1268                 ; [#uses=1 type=i4] [debug line = 237:22]
  br i1 %exitcond1, label %.preheader5.loopexit, label %.preheader.preheader, !dbg !1267 ; [debug line = 237:17]

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_82_cast = zext i4 %w to i13, !dbg !1266    ; [#uses=2 type=i13] [debug line = 243:17]
  %tmp_102 = add i13 %tmp_145_cast, %tmp_82_cast, !dbg !1266 ; [#uses=1 type=i13] [debug line = 243:17]
  %tmp_146_cast = zext i13 %tmp_102 to i64, !dbg !1266 ; [#uses=1 type=i64] [debug line = 243:17]
  %output_0_addr = getelementptr [3072 x float]* %output_0, i64 0, i64 %tmp_146_cast, !dbg !1266 ; [#uses=1 type=float*] [debug line = 243:17]
  br label %.preheader, !dbg !1269                ; [debug line = 239:19]

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum = phi float [ %sum_9, %1 ], [ 0.000000e+00, %.preheader.preheader ] ; [#uses=2 type=float]
  %ci = phi i6 [ %ci_2, %1 ], [ 0, %.preheader.preheader ] ; [#uses=4 type=i6]
  %exitcond = icmp eq i6 %ci, -16, !dbg !1269     ; [#uses=1 type=i1] [debug line = 239:19]
  %empty_50 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) ; [#uses=0 type=i32]
  %ci_2 = add i6 %ci, 1, !dbg !1270               ; [#uses=1 type=i6] [debug line = 239:26]
  br i1 %exitcond, label %2, label %1, !dbg !1269 ; [debug line = 239:19]

; <label>:1                                       ; preds = %.preheader
  %tmp_83_cast = zext i6 %ci to i13               ; [#uses=1 type=i13]
  %tmp_103 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %ci, i3 0) ; [#uses=1 type=i9]
  %tmp_148_cast = zext i9 %tmp_103 to i10, !dbg !1254 ; [#uses=1 type=i10] [debug line = 240:6]
  %tmp_104 = add i10 %tmp_cast, %tmp_148_cast, !dbg !1254 ; [#uses=1 type=i10] [debug line = 240:6]
  %tmp_151_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_104, i3 0), !dbg !1254 ; [#uses=1 type=i13] [debug line = 240:6]
  %tmp_105 = add i13 %tmp_82_cast, %tmp_151_cast, !dbg !1254 ; [#uses=1 type=i13] [debug line = 240:6]
  %tmp_152_cast = zext i13 %tmp_105 to i64, !dbg !1254 ; [#uses=1 type=i64] [debug line = 240:6]
  %input_0_addr = getelementptr [3072 x float]* %input_0, i64 0, i64 %tmp_152_cast, !dbg !1254 ; [#uses=1 type=float*] [debug line = 240:6]
  %tmp_106 = add i13 %tmp_83_cast, %tmp_99, !dbg !1254 ; [#uses=1 type=i13] [debug line = 240:6]
  %tmp_153_cast = sext i13 %tmp_106 to i64, !dbg !1254 ; [#uses=1 type=i64] [debug line = 240:6]
  %weight_addr = getelementptr [2304 x float]* %weight, i64 0, i64 %tmp_153_cast, !dbg !1254 ; [#uses=1 type=float*] [debug line = 240:6]
  %weight_load = load float* %weight_addr, align 4, !dbg !1254 ; [#uses=1 type=float] [debug line = 240:6]
  %input_0_load = load float* %input_0_addr, align 4, !dbg !1254 ; [#uses=1 type=float] [debug line = 240:6]
  %tmp_84 = fmul float %weight_load, %input_0_load, !dbg !1254 ; [#uses=1 type=float] [debug line = 240:6]
  %sum_9 = fadd float %sum, %tmp_84, !dbg !1254   ; [#uses=1 type=float] [debug line = 240:6]
  call void @llvm.dbg.value(metadata !{float %sum_9}, i64 0, metadata !1271), !dbg !1254 ; [debug line = 240:6] [debug variable = sum]
  call void @llvm.dbg.value(metadata !{i6 %ci_2}, i64 0, metadata !1272), !dbg !1270 ; [debug line = 239:26] [debug variable = ci]
  br label %.preheader, !dbg !1270                ; [debug line = 239:26]

; <label>:2                                       ; preds = %.preheader
  %bias_load = load float* %bias_addr, align 4, !dbg !1262 ; [#uses=1 type=float] [debug line = 242:34]
  %result = fadd float %sum, %bias_load, !dbg !1262 ; [#uses=3 type=float] [debug line = 242:34]
  call void @llvm.dbg.value(metadata !{float %result}, i64 0, metadata !1273), !dbg !1262 ; [debug line = 242:34] [debug variable = result]
  %result_to_int = bitcast float %result to i32   ; [#uses=2 type=i32]
  %tmp_6 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %result_to_int, i32 23, i32 30) ; [#uses=1 type=i8]
  %tmp_89 = trunc i32 %result_to_int to i23       ; [#uses=1 type=i23]
  %notlhs = icmp ne i8 %tmp_6, -1                 ; [#uses=1 type=i1]
  %notrhs = icmp eq i23 %tmp_89, 0                ; [#uses=1 type=i1]
  %tmp_8 = or i1 %notrhs, %notlhs                 ; [#uses=1 type=i1]
  %tmp_9 = fcmp ogt float %result, 0.000000e+00, !dbg !1266 ; [#uses=1 type=i1] [debug line = 243:17]
  %tmp_10 = and i1 %tmp_8, %tmp_9, !dbg !1266     ; [#uses=1 type=i1] [debug line = 243:17]
  %result_2 = select i1 %tmp_10, float %result, float 0.000000e+00, !dbg !1266 ; [#uses=1 type=float] [debug line = 243:17]
  call void @llvm.dbg.value(metadata !{float %result_2}, i64 0, metadata !1273), !dbg !1266 ; [debug line = 243:17] [debug variable = result]
  store float %result_2, float* %output_0_addr, align 4, !dbg !1266 ; [debug line = 243:17]
  call void @llvm.dbg.value(metadata !{i4 %w_8}, i64 0, metadata !1274), !dbg !1268 ; [debug line = 237:22] [debug variable = w]
  br label %.preheader4, !dbg !1268               ; [debug line = 237:22]

; <label>:3                                       ; preds = %.loopexit
  ret void, !dbg !1275                            ; [debug line = 247:1]
}

; [#uses=4]
define internal fastcc void @subconv_1x1_419([1536 x float]* nocapture %input_0, [9216 x float]* nocapture %weight, [96 x float]* nocapture %bias, [1536 x float]* nocapture %output_0) {
  call void @llvm.dbg.value(metadata !{[1536 x float]* %input_0}, i64 0, metadata !1276), !dbg !1280 ; [debug line = 399:26] [debug variable = input[0]]
  call void @llvm.dbg.value(metadata !{[9216 x float]* %weight}, i64 0, metadata !1281), !dbg !1282 ; [debug line = 400:8] [debug variable = weight]
  call void @llvm.dbg.value(metadata !{[96 x float]* %bias}, i64 0, metadata !1283), !dbg !1284 ; [debug line = 401:8] [debug variable = bias]
  call void @llvm.dbg.value(metadata !{[1536 x float]* %output_0}, i64 0, metadata !1285), !dbg !1286 ; [debug line = 402:8] [debug variable = output[0]]
  br label %.loopexit, !dbg !1287                 ; [debug line = 405:16]

.loopexit.loopexit:                               ; preds = %.preheader5
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_9, %.loopexit.loopexit ] ; [#uses=6 type=i7]
  %exitcond3 = icmp eq i7 %co, -32, !dbg !1287    ; [#uses=1 type=i1] [debug line = 405:16]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) ; [#uses=0 type=i32]
  %co_9 = add i7 %co, 1, !dbg !1290               ; [#uses=1 type=i7] [debug line = 405:23]
  call void @llvm.dbg.value(metadata !{i7 %co_9}, i64 0, metadata !1291), !dbg !1290 ; [debug line = 405:23] [debug variable = co]
  br i1 %exitcond3, label %3, label %.preheader5.preheader, !dbg !1287 ; [debug line = 405:16]

.preheader5.preheader:                            ; preds = %.loopexit
  %tmp = zext i7 %co to i64, !dbg !1292           ; [#uses=1 type=i64] [debug line = 410:6]
  %tmp_s = call i14 @_ssdm_op_BitConcatenate.i14.i7.i7(i7 %co, i7 0) ; [#uses=1 type=i14]
  %p_shl_cast = zext i14 %tmp_s to i15            ; [#uses=1 type=i15]
  %tmp_107 = call i12 @_ssdm_op_BitConcatenate.i12.i7.i5(i7 %co, i5 0) ; [#uses=1 type=i12]
  %p_shl1_cast = zext i12 %tmp_107 to i15, !dbg !1292 ; [#uses=1 type=i15] [debug line = 410:6]
  %tmp_108 = sub i15 %p_shl_cast, %p_shl1_cast, !dbg !1292 ; [#uses=1 type=i15] [debug line = 410:6]
  %tmp_109 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %co, i2 0) ; [#uses=1 type=i9]
  %tmp_158_cast = zext i9 %tmp_109 to i10, !dbg !1300 ; [#uses=1 type=i10] [debug line = 412:34]
  %bias_addr = getelementptr [96 x float]* %bias, i64 0, i64 %tmp, !dbg !1300 ; [#uses=1 type=float*] [debug line = 412:34]
  br label %.preheader5, !dbg !1301               ; [debug line = 406:16]

.preheader5.loopexit:                             ; preds = %.preheader4
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %h = phi i3 [ 0, %.preheader5.preheader ], [ %h_9, %.preheader5.loopexit ] ; [#uses=3 type=i3]
  %exitcond2 = icmp eq i3 %h, -4, !dbg !1301      ; [#uses=1 type=i1] [debug line = 406:16]
  %empty_51 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  %h_9 = add i3 %h, 1, !dbg !1302                 ; [#uses=1 type=i3] [debug line = 406:21]
  call void @llvm.dbg.value(metadata !{i3 %h_9}, i64 0, metadata !1303), !dbg !1302 ; [debug line = 406:21] [debug variable = h]
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader4.preheader, !dbg !1301 ; [debug line = 406:16]

.preheader4.preheader:                            ; preds = %.preheader5
  %tmp_cast = zext i3 %h to i10, !dbg !1304       ; [#uses=2 type=i10] [debug line = 413:17]
  %tmp_110 = add i10 %tmp_cast, %tmp_158_cast, !dbg !1304 ; [#uses=1 type=i10] [debug line = 413:17]
  %tmp_161_cast = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_110, i2 0), !dbg !1305 ; [#uses=1 type=i12] [debug line = 407:17]
  br label %.preheader4, !dbg !1305               ; [debug line = 407:17]

.preheader4:                                      ; preds = %2, %.preheader4.preheader
  %w = phi i3 [ %w_9, %2 ], [ 0, %.preheader4.preheader ] ; [#uses=3 type=i3]
  %exitcond1 = icmp eq i3 %w, -4, !dbg !1305      ; [#uses=1 type=i1] [debug line = 407:17]
  %empty_52 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  %w_9 = add i3 %w, 1, !dbg !1306                 ; [#uses=1 type=i3] [debug line = 407:22]
  br i1 %exitcond1, label %.preheader5.loopexit, label %.preheader.preheader, !dbg !1305 ; [debug line = 407:17]

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_85_cast = zext i3 %w to i12, !dbg !1304    ; [#uses=2 type=i12] [debug line = 413:17]
  %tmp_111 = add i12 %tmp_161_cast, %tmp_85_cast, !dbg !1304 ; [#uses=1 type=i12] [debug line = 413:17]
  %tmp_162_cast = zext i12 %tmp_111 to i64, !dbg !1304 ; [#uses=1 type=i64] [debug line = 413:17]
  %output_0_addr = getelementptr [1536 x float]* %output_0, i64 0, i64 %tmp_162_cast, !dbg !1304 ; [#uses=1 type=float*] [debug line = 413:17]
  br label %.preheader, !dbg !1307                ; [debug line = 409:19]

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum = phi float [ %sum_10, %1 ], [ 0.000000e+00, %.preheader.preheader ] ; [#uses=2 type=float]
  %ci = phi i7 [ %ci_3, %1 ], [ 0, %.preheader.preheader ] ; [#uses=4 type=i7]
  %exitcond = icmp eq i7 %ci, -32, !dbg !1307     ; [#uses=1 type=i1] [debug line = 409:19]
  %empty_53 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) ; [#uses=0 type=i32]
  %ci_3 = add i7 %ci, 1, !dbg !1308               ; [#uses=1 type=i7] [debug line = 409:26]
  br i1 %exitcond, label %2, label %1, !dbg !1307 ; [debug line = 409:19]

; <label>:1                                       ; preds = %.preheader
  %tmp_86_cast = zext i7 %ci to i15               ; [#uses=1 type=i15]
  %tmp_112 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %ci, i2 0) ; [#uses=1 type=i9]
  %tmp_164_cast = zext i9 %tmp_112 to i10, !dbg !1292 ; [#uses=1 type=i10] [debug line = 410:6]
  %tmp_113 = add i10 %tmp_cast, %tmp_164_cast, !dbg !1292 ; [#uses=1 type=i10] [debug line = 410:6]
  %tmp_167_cast = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_113, i2 0), !dbg !1292 ; [#uses=1 type=i12] [debug line = 410:6]
  %tmp_114 = add i12 %tmp_85_cast, %tmp_167_cast, !dbg !1292 ; [#uses=1 type=i12] [debug line = 410:6]
  %tmp_168_cast = zext i12 %tmp_114 to i64, !dbg !1292 ; [#uses=1 type=i64] [debug line = 410:6]
  %input_0_addr = getelementptr [1536 x float]* %input_0, i64 0, i64 %tmp_168_cast, !dbg !1292 ; [#uses=1 type=float*] [debug line = 410:6]
  %tmp_115 = add i15 %tmp_86_cast, %tmp_108, !dbg !1292 ; [#uses=1 type=i15] [debug line = 410:6]
  %tmp_169_cast = sext i15 %tmp_115 to i64, !dbg !1292 ; [#uses=1 type=i64] [debug line = 410:6]
  %weight_addr = getelementptr [9216 x float]* %weight, i64 0, i64 %tmp_169_cast, !dbg !1292 ; [#uses=1 type=float*] [debug line = 410:6]
  %weight_load = load float* %weight_addr, align 4, !dbg !1292 ; [#uses=1 type=float] [debug line = 410:6]
  %input_0_load = load float* %input_0_addr, align 4, !dbg !1292 ; [#uses=1 type=float] [debug line = 410:6]
  %tmp_87 = fmul float %weight_load, %input_0_load, !dbg !1292 ; [#uses=1 type=float] [debug line = 410:6]
  %sum_10 = fadd float %sum, %tmp_87, !dbg !1292  ; [#uses=1 type=float] [debug line = 410:6]
  call void @llvm.dbg.value(metadata !{float %sum_10}, i64 0, metadata !1309), !dbg !1292 ; [debug line = 410:6] [debug variable = sum]
  call void @llvm.dbg.value(metadata !{i7 %ci_3}, i64 0, metadata !1310), !dbg !1308 ; [debug line = 409:26] [debug variable = ci]
  br label %.preheader, !dbg !1308                ; [debug line = 409:26]

; <label>:2                                       ; preds = %.preheader
  %bias_load = load float* %bias_addr, align 4, !dbg !1300 ; [#uses=1 type=float] [debug line = 412:34]
  %result = fadd float %sum, %bias_load, !dbg !1300 ; [#uses=3 type=float] [debug line = 412:34]
  call void @llvm.dbg.value(metadata !{float %result}, i64 0, metadata !1311), !dbg !1300 ; [debug line = 412:34] [debug variable = result]
  %result_to_int = bitcast float %result to i32   ; [#uses=2 type=i32]
  %tmp_11 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %result_to_int, i32 23, i32 30) ; [#uses=1 type=i8]
  %tmp_90 = trunc i32 %result_to_int to i23       ; [#uses=1 type=i23]
  %notlhs = icmp ne i8 %tmp_11, -1                ; [#uses=1 type=i1]
  %notrhs = icmp eq i23 %tmp_90, 0                ; [#uses=1 type=i1]
  %tmp_13 = or i1 %notrhs, %notlhs                ; [#uses=1 type=i1]
  %tmp_14 = fcmp ogt float %result, 0.000000e+00, !dbg !1304 ; [#uses=1 type=i1] [debug line = 413:17]
  %tmp_15 = and i1 %tmp_13, %tmp_14, !dbg !1304   ; [#uses=1 type=i1] [debug line = 413:17]
  %result_3 = select i1 %tmp_15, float %result, float 0.000000e+00, !dbg !1304 ; [#uses=1 type=float] [debug line = 413:17]
  call void @llvm.dbg.value(metadata !{float %result_3}, i64 0, metadata !1311), !dbg !1304 ; [debug line = 413:17] [debug variable = result]
  store float %result_3, float* %output_0_addr, align 4, !dbg !1304 ; [debug line = 413:17]
  call void @llvm.dbg.value(metadata !{i3 %w_9}, i64 0, metadata !1312), !dbg !1306 ; [debug line = 407:22] [debug variable = w]
  br label %.preheader4, !dbg !1306               ; [debug line = 407:22]

; <label>:3                                       ; preds = %.loopexit
  ret void, !dbg !1313                            ; [debug line = 417:1]
}

; [#uses=1]
define internal fastcc void @subconv_1x1_3214([24576 x float]* nocapture %input, [576 x float]* nocapture %weight, [24 x float]* nocapture %bias, [24576 x float]* nocapture %output) {
  call void @llvm.dbg.value(metadata !{[24576 x float]* %input}, i64 0, metadata !1314), !dbg !1321 ; [debug line = 33:27] [debug variable = input]
  call void @llvm.dbg.value(metadata !{[576 x float]* %weight}, i64 0, metadata !1322), !dbg !1325 ; [debug line = 34:8] [debug variable = weight]
  call void @llvm.dbg.value(metadata !{[24 x float]* %bias}, i64 0, metadata !1326), !dbg !1327 ; [debug line = 35:8] [debug variable = bias]
  call void @llvm.dbg.value(metadata !{[24576 x float]* %output}, i64 0, metadata !1328), !dbg !1329 ; [debug line = 36:8] [debug variable = output]
  br label %.loopexit, !dbg !1330                 ; [debug line = 38:16]

.loopexit.loopexit:                               ; preds = %.preheader5
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i5 [ 0, %0 ], [ %co_10, %.loopexit.loopexit ] ; [#uses=5 type=i5]
  %exitcond3 = icmp eq i5 %co, -8, !dbg !1330     ; [#uses=1 type=i1] [debug line = 38:16]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) ; [#uses=0 type=i32]
  %co_10 = add i5 %co, 1, !dbg !1333              ; [#uses=1 type=i5] [debug line = 38:23]
  call void @llvm.dbg.value(metadata !{i5 %co_10}, i64 0, metadata !1334), !dbg !1333 ; [debug line = 38:23] [debug variable = co]
  br i1 %exitcond3, label %3, label %.preheader5.preheader, !dbg !1330 ; [debug line = 38:16]

.preheader5.preheader:                            ; preds = %.loopexit
  %tmp = zext i5 %co to i64, !dbg !1335           ; [#uses=1 type=i64] [debug line = 43:6]
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co, i5 0) ; [#uses=1 type=i10]
  %p_shl_cast = zext i10 %tmp_s to i11            ; [#uses=2 type=i11]
  %tmp_116 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co, i3 0) ; [#uses=1 type=i8]
  %p_shl1_cast = zext i8 %tmp_116 to i11, !dbg !1335 ; [#uses=1 type=i11] [debug line = 43:6]
  %tmp_117 = sub i11 %p_shl_cast, %p_shl1_cast, !dbg !1335 ; [#uses=1 type=i11] [debug line = 43:6]
  %bias_addr = getelementptr [24 x float]* %bias, i64 0, i64 %tmp, !dbg !1343 ; [#uses=1 type=float*] [debug line = 45:34]
  br label %.preheader5, !dbg !1344               ; [debug line = 39:16]

.preheader5.loopexit:                             ; preds = %.preheader4
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %h = phi i6 [ 0, %.preheader5.preheader ], [ %h_10, %.preheader5.loopexit ] ; [#uses=3 type=i6]
  %exitcond2 = icmp eq i6 %h, -32, !dbg !1344     ; [#uses=1 type=i1] [debug line = 39:16]
  %empty_54 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32) ; [#uses=0 type=i32]
  %h_10 = add i6 %h, 1, !dbg !1345                ; [#uses=1 type=i6] [debug line = 39:22]
  call void @llvm.dbg.value(metadata !{i6 %h_10}, i64 0, metadata !1346), !dbg !1345 ; [debug line = 39:22] [debug variable = h]
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader4.preheader, !dbg !1344 ; [debug line = 39:16]

.preheader4.preheader:                            ; preds = %.preheader5
  %tmp_cast = zext i6 %h to i11, !dbg !1347       ; [#uses=2 type=i11] [debug line = 46:17]
  %tmp_118 = add i11 %tmp_cast, %p_shl_cast, !dbg !1347 ; [#uses=1 type=i11] [debug line = 46:17]
  %tmp_177_cast = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_118, i5 0), !dbg !1348 ; [#uses=1 type=i16] [debug line = 40:17]
  br label %.preheader4, !dbg !1348               ; [debug line = 40:17]

.preheader4:                                      ; preds = %2, %.preheader4.preheader
  %w = phi i6 [ %w_10, %2 ], [ 0, %.preheader4.preheader ] ; [#uses=3 type=i6]
  %exitcond1 = icmp eq i6 %w, -32, !dbg !1348     ; [#uses=1 type=i1] [debug line = 40:17]
  %empty_55 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32) ; [#uses=0 type=i32]
  %w_10 = add i6 %w, 1, !dbg !1349                ; [#uses=1 type=i6] [debug line = 40:23]
  br i1 %exitcond1, label %.preheader5.loopexit, label %.preheader.preheader, !dbg !1348 ; [debug line = 40:17]

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_88_cast = zext i6 %w to i16, !dbg !1347    ; [#uses=2 type=i16] [debug line = 46:17]
  %tmp_119 = add i16 %tmp_177_cast, %tmp_88_cast, !dbg !1347 ; [#uses=1 type=i16] [debug line = 46:17]
  %tmp_178_cast = zext i16 %tmp_119 to i64, !dbg !1347 ; [#uses=1 type=i64] [debug line = 46:17]
  %output_addr = getelementptr [24576 x float]* %output, i64 0, i64 %tmp_178_cast, !dbg !1347 ; [#uses=1 type=float*] [debug line = 46:17]
  br label %.preheader, !dbg !1350                ; [debug line = 42:19]

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum = phi float [ %sum_11, %1 ], [ 0.000000e+00, %.preheader.preheader ] ; [#uses=2 type=float]
  %ci = phi i5 [ %ci_4, %1 ], [ 0, %.preheader.preheader ] ; [#uses=4 type=i5]
  %exitcond = icmp eq i5 %ci, -8, !dbg !1350      ; [#uses=1 type=i1] [debug line = 42:19]
  %empty_56 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) ; [#uses=0 type=i32]
  %ci_4 = add i5 %ci, 1, !dbg !1351               ; [#uses=1 type=i5] [debug line = 42:26]
  br i1 %exitcond, label %2, label %1, !dbg !1350 ; [debug line = 42:19]

; <label>:1                                       ; preds = %.preheader
  %tmp_89_cast = zext i5 %ci to i11               ; [#uses=1 type=i11]
  %tmp_120 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %ci, i5 0) ; [#uses=1 type=i10]
  %tmp_180_cast = zext i10 %tmp_120 to i11, !dbg !1335 ; [#uses=1 type=i11] [debug line = 43:6]
  %tmp_121 = add i11 %tmp_cast, %tmp_180_cast, !dbg !1335 ; [#uses=1 type=i11] [debug line = 43:6]
  %tmp_183_cast = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_121, i5 0), !dbg !1335 ; [#uses=1 type=i16] [debug line = 43:6]
  %tmp_122 = add i16 %tmp_88_cast, %tmp_183_cast, !dbg !1335 ; [#uses=1 type=i16] [debug line = 43:6]
  %tmp_184_cast = zext i16 %tmp_122 to i64, !dbg !1335 ; [#uses=1 type=i64] [debug line = 43:6]
  %input_addr = getelementptr [24576 x float]* %input, i64 0, i64 %tmp_184_cast, !dbg !1335 ; [#uses=1 type=float*] [debug line = 43:6]
  %tmp_123 = add i11 %tmp_89_cast, %tmp_117, !dbg !1335 ; [#uses=1 type=i11] [debug line = 43:6]
  %tmp_185_cast = sext i11 %tmp_123 to i64, !dbg !1335 ; [#uses=1 type=i64] [debug line = 43:6]
  %weight_addr = getelementptr [576 x float]* %weight, i64 0, i64 %tmp_185_cast, !dbg !1335 ; [#uses=1 type=float*] [debug line = 43:6]
  %weight_load = load float* %weight_addr, align 4, !dbg !1335 ; [#uses=1 type=float] [debug line = 43:6]
  %input_load = load float* %input_addr, align 4, !dbg !1335 ; [#uses=1 type=float] [debug line = 43:6]
  %tmp_90 = fmul float %weight_load, %input_load, !dbg !1335 ; [#uses=1 type=float] [debug line = 43:6]
  %sum_11 = fadd float %sum, %tmp_90, !dbg !1335  ; [#uses=1 type=float] [debug line = 43:6]
  call void @llvm.dbg.value(metadata !{float %sum_11}, i64 0, metadata !1352), !dbg !1335 ; [debug line = 43:6] [debug variable = sum]
  call void @llvm.dbg.value(metadata !{i5 %ci_4}, i64 0, metadata !1353), !dbg !1351 ; [debug line = 42:26] [debug variable = ci]
  br label %.preheader, !dbg !1351                ; [debug line = 42:26]

; <label>:2                                       ; preds = %.preheader
  %bias_load = load float* %bias_addr, align 4, !dbg !1343 ; [#uses=1 type=float] [debug line = 45:34]
  %result = fadd float %sum, %bias_load, !dbg !1343 ; [#uses=3 type=float] [debug line = 45:34]
  call void @llvm.dbg.value(metadata !{float %result}, i64 0, metadata !1354), !dbg !1343 ; [debug line = 45:34] [debug variable = result]
  %result_to_int = bitcast float %result to i32   ; [#uses=2 type=i32]
  %tmp_16 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %result_to_int, i32 23, i32 30) ; [#uses=1 type=i8]
  %tmp_91 = trunc i32 %result_to_int to i23       ; [#uses=1 type=i23]
  %notlhs = icmp ne i8 %tmp_16, -1                ; [#uses=1 type=i1]
  %notrhs = icmp eq i23 %tmp_91, 0                ; [#uses=1 type=i1]
  %tmp_18 = or i1 %notrhs, %notlhs                ; [#uses=1 type=i1]
  %tmp_19 = fcmp ogt float %result, 0.000000e+00, !dbg !1347 ; [#uses=1 type=i1] [debug line = 46:17]
  %tmp_20 = and i1 %tmp_18, %tmp_19, !dbg !1347   ; [#uses=1 type=i1] [debug line = 46:17]
  %result_4 = select i1 %tmp_20, float %result, float 0.000000e+00, !dbg !1347 ; [#uses=1 type=float] [debug line = 46:17]
  call void @llvm.dbg.value(metadata !{float %result_4}, i64 0, metadata !1354), !dbg !1347 ; [debug line = 46:17] [debug variable = result]
  store float %result_4, float* %output_addr, align 4, !dbg !1347 ; [debug line = 46:17]
  call void @llvm.dbg.value(metadata !{i6 %w_10}, i64 0, metadata !1355), !dbg !1349 ; [debug line = 40:23] [debug variable = w]
  br label %.preheader4, !dbg !1349               ; [debug line = 40:23]

; <label>:3                                       ; preds = %.loopexit
  ret void, !dbg !1356                            ; [debug line = 51:1]
}

; [#uses=1]
define internal fastcc void @subconv_1x1_16p16([2304 x float]* nocapture %weight, [48 x float]* nocapture %bias, [12288 x float]* nocapture %output) {
  call void @llvm.dbg.value(metadata !{[2304 x float]* %weight}, i64 0, metadata !1357), !dbg !1361 ; [debug line = 206:8] [debug variable = weight]
  call void @llvm.dbg.value(metadata !{[48 x float]* %bias}, i64 0, metadata !1362), !dbg !1363 ; [debug line = 207:8] [debug variable = bias]
  call void @llvm.dbg.value(metadata !{[12288 x float]* %output}, i64 0, metadata !1364), !dbg !1365 ; [debug line = 208:8] [debug variable = output]
  br label %.loopexit, !dbg !1366                 ; [debug line = 210:16]

.loopexit.loopexit:                               ; preds = %.preheader5
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_11, %.loopexit.loopexit ] ; [#uses=5 type=i6]
  %exitcond3 = icmp eq i6 %co, -16, !dbg !1366    ; [#uses=1 type=i1] [debug line = 210:16]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) ; [#uses=0 type=i32]
  %co_11 = add i6 %co, 1, !dbg !1369              ; [#uses=1 type=i6] [debug line = 210:23]
  call void @llvm.dbg.value(metadata !{i6 %co_11}, i64 0, metadata !1370), !dbg !1369 ; [debug line = 210:23] [debug variable = co]
  br i1 %exitcond3, label %3, label %.preheader5.preheader, !dbg !1366 ; [debug line = 210:16]

.preheader5.preheader:                            ; preds = %.loopexit
  %tmp = zext i6 %co to i64, !dbg !1371           ; [#uses=1 type=i64] [debug line = 215:6]
  %tmp_s = call i12 @_ssdm_op_BitConcatenate.i12.i6.i6(i6 %co, i6 0) ; [#uses=1 type=i12]
  %p_shl_cast = zext i12 %tmp_s to i13            ; [#uses=1 type=i13]
  %tmp_124 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co, i4 0) ; [#uses=2 type=i10]
  %p_shl1_cast2 = zext i10 %tmp_124 to i11, !dbg !1371 ; [#uses=1 type=i11] [debug line = 215:6]
  %p_shl1_cast = zext i10 %tmp_124 to i13, !dbg !1371 ; [#uses=1 type=i13] [debug line = 215:6]
  %tmp_125 = sub i13 %p_shl_cast, %p_shl1_cast, !dbg !1371 ; [#uses=1 type=i13] [debug line = 215:6]
  %bias_addr = getelementptr [48 x float]* %bias, i64 0, i64 %tmp, !dbg !1379 ; [#uses=1 type=float*] [debug line = 221:34]
  br label %.preheader5, !dbg !1380               ; [debug line = 211:16]

.preheader5.loopexit:                             ; preds = %.preheader4
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %h = phi i5 [ 0, %.preheader5.preheader ], [ %h_11, %.preheader5.loopexit ] ; [#uses=3 type=i5]
  %exitcond2 = icmp eq i5 %h, -16, !dbg !1380     ; [#uses=1 type=i1] [debug line = 211:16]
  %empty_57 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  %h_11 = add i5 %h, 1, !dbg !1381                ; [#uses=1 type=i5] [debug line = 211:22]
  call void @llvm.dbg.value(metadata !{i5 %h_11}, i64 0, metadata !1382), !dbg !1381 ; [debug line = 211:22] [debug variable = h]
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader4.preheader, !dbg !1380 ; [debug line = 211:16]

.preheader4.preheader:                            ; preds = %.preheader5
  %tmp_cast = zext i5 %h to i11, !dbg !1383       ; [#uses=2 type=i11] [debug line = 222:17]
  %tmp_126 = add i11 %tmp_cast, %p_shl1_cast2, !dbg !1383 ; [#uses=1 type=i11] [debug line = 222:17]
  %tmp_193_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_126, i4 0), !dbg !1384 ; [#uses=1 type=i15] [debug line = 212:17]
  br label %.preheader4, !dbg !1384               ; [debug line = 212:17]

.preheader4:                                      ; preds = %2, %.preheader4.preheader
  %w = phi i5 [ %w_11, %2 ], [ 0, %.preheader4.preheader ] ; [#uses=3 type=i5]
  %exitcond1 = icmp eq i5 %w, -16, !dbg !1384     ; [#uses=1 type=i1] [debug line = 212:17]
  %empty_58 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  %w_11 = add i5 %w, 1, !dbg !1385                ; [#uses=1 type=i5] [debug line = 212:23]
  br i1 %exitcond1, label %.preheader5.loopexit, label %.preheader.preheader, !dbg !1384 ; [debug line = 212:17]

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_91_cast = zext i5 %w to i15, !dbg !1383    ; [#uses=2 type=i15] [debug line = 222:17]
  %tmp_127 = add i15 %tmp_193_cast, %tmp_91_cast, !dbg !1383 ; [#uses=1 type=i15] [debug line = 222:17]
  %tmp_194_cast = zext i15 %tmp_127 to i64, !dbg !1383 ; [#uses=1 type=i64] [debug line = 222:17]
  %output_addr = getelementptr [12288 x float]* %output, i64 0, i64 %tmp_194_cast, !dbg !1383 ; [#uses=1 type=float*] [debug line = 222:17]
  br label %.preheader, !dbg !1386                ; [debug line = 214:19]

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum = phi float [ %sum_12, %1 ], [ 0.000000e+00, %.preheader.preheader ] ; [#uses=2 type=float]
  %ci = phi i6 [ %ci_5, %1 ], [ 0, %.preheader.preheader ] ; [#uses=4 type=i6]
  %exitcond = icmp eq i6 %ci, -16, !dbg !1386     ; [#uses=1 type=i1] [debug line = 214:19]
  %empty_59 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) ; [#uses=0 type=i32]
  %ci_5 = add i6 %ci, 1, !dbg !1387               ; [#uses=1 type=i6] [debug line = 214:26]
  br i1 %exitcond, label %2, label %1, !dbg !1386 ; [debug line = 214:19]

; <label>:1                                       ; preds = %.preheader
  %tmp_92_cast = zext i6 %ci to i13, !dbg !1371   ; [#uses=1 type=i13] [debug line = 215:6]
  %tmp_128 = add i13 %tmp_92_cast, %tmp_125, !dbg !1371 ; [#uses=1 type=i13] [debug line = 215:6]
  %tmp_195_cast = sext i13 %tmp_128 to i64, !dbg !1371 ; [#uses=1 type=i64] [debug line = 215:6]
  %weight_addr = getelementptr [2304 x float]* %weight, i64 0, i64 %tmp_195_cast, !dbg !1371 ; [#uses=1 type=float*] [debug line = 215:6]
  %tmp_129 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %ci, i4 0) ; [#uses=1 type=i10]
  %tmp_197_cast = zext i10 %tmp_129 to i11, !dbg !1371 ; [#uses=1 type=i11] [debug line = 215:6]
  %tmp_130 = add i11 %tmp_cast, %tmp_197_cast, !dbg !1371 ; [#uses=1 type=i11] [debug line = 215:6]
  %tmp_200_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_130, i4 0), !dbg !1371 ; [#uses=1 type=i15] [debug line = 215:6]
  %tmp_131 = add i15 %tmp_91_cast, %tmp_200_cast, !dbg !1371 ; [#uses=1 type=i15] [debug line = 215:6]
  %tmp_201_cast = zext i15 %tmp_131 to i64, !dbg !1371 ; [#uses=1 type=i64] [debug line = 215:6]
  %shuffleunit0_2_outpu = getelementptr [12288 x float]* @shuffleunit0_2_outpu, i64 0, i64 %tmp_201_cast, !dbg !1371 ; [#uses=1 type=float*] [debug line = 215:6]
  %weight_load = load float* %weight_addr, align 4, !dbg !1371 ; [#uses=1 type=float] [debug line = 215:6]
  %shuffleunit0_2_outpu_1 = load float* %shuffleunit0_2_outpu, align 4, !dbg !1371 ; [#uses=1 type=float] [debug line = 215:6]
  %tmp_93 = fmul float %weight_load, %shuffleunit0_2_outpu_1, !dbg !1371 ; [#uses=1 type=float] [debug line = 215:6]
  %sum_12 = fadd float %sum, %tmp_93, !dbg !1371  ; [#uses=1 type=float] [debug line = 215:6]
  call void @llvm.dbg.value(metadata !{float %sum_12}, i64 0, metadata !1388), !dbg !1371 ; [debug line = 215:6] [debug variable = sum]
  call void @llvm.dbg.value(metadata !{i6 %ci_5}, i64 0, metadata !1389), !dbg !1387 ; [debug line = 214:26] [debug variable = ci]
  br label %.preheader, !dbg !1387                ; [debug line = 214:26]

; <label>:2                                       ; preds = %.preheader
  %bias_load = load float* %bias_addr, align 4, !dbg !1379 ; [#uses=1 type=float] [debug line = 221:34]
  %result = fadd float %sum, %bias_load, !dbg !1379 ; [#uses=3 type=float] [debug line = 221:34]
  call void @llvm.dbg.value(metadata !{float %result}, i64 0, metadata !1390), !dbg !1379 ; [debug line = 221:34] [debug variable = result]
  %result_to_int = bitcast float %result to i32   ; [#uses=2 type=i32]
  %tmp_21 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %result_to_int, i32 23, i32 30) ; [#uses=1 type=i8]
  %tmp_92 = trunc i32 %result_to_int to i23       ; [#uses=1 type=i23]
  %notlhs = icmp ne i8 %tmp_21, -1                ; [#uses=1 type=i1]
  %notrhs = icmp eq i23 %tmp_92, 0                ; [#uses=1 type=i1]
  %tmp_23 = or i1 %notrhs, %notlhs                ; [#uses=1 type=i1]
  %tmp_24 = fcmp ogt float %result, 0.000000e+00, !dbg !1383 ; [#uses=1 type=i1] [debug line = 222:17]
  %tmp_25 = and i1 %tmp_23, %tmp_24, !dbg !1383   ; [#uses=1 type=i1] [debug line = 222:17]
  %result_5 = select i1 %tmp_25, float %result, float 0.000000e+00, !dbg !1383 ; [#uses=1 type=float] [debug line = 222:17]
  call void @llvm.dbg.value(metadata !{float %result_5}, i64 0, metadata !1390), !dbg !1383 ; [debug line = 222:17] [debug variable = result]
  store float %result_5, float* %output_addr, align 4, !dbg !1383 ; [debug line = 222:17]
  call void @llvm.dbg.value(metadata !{i5 %w_11}, i64 0, metadata !1391), !dbg !1385 ; [debug line = 212:23] [debug variable = w]
  br label %.preheader4, !dbg !1385               ; [debug line = 212:23]

; <label>:3                                       ; preds = %.loopexit
  ret void, !dbg !1392                            ; [debug line = 227:1]
}

; [#uses=4]
define internal fastcc void @subconv_1x1_1612([6144 x float]* nocapture %input_0, [576 x float]* nocapture %weight, [24 x float]* nocapture %bias, [6144 x float]* nocapture %output_0) {
  call void @llvm.dbg.value(metadata !{[6144 x float]* %input_0}, i64 0, metadata !1393), !dbg !1397 ; [debug line = 53:27] [debug variable = input[0]]
  call void @llvm.dbg.value(metadata !{[576 x float]* %weight}, i64 0, metadata !1398), !dbg !1399 ; [debug line = 54:8] [debug variable = weight]
  call void @llvm.dbg.value(metadata !{[24 x float]* %bias}, i64 0, metadata !1400), !dbg !1401 ; [debug line = 55:8] [debug variable = bias]
  call void @llvm.dbg.value(metadata !{[6144 x float]* %output_0}, i64 0, metadata !1402), !dbg !1403 ; [debug line = 56:8] [debug variable = output[0]]
  br label %.loopexit, !dbg !1404                 ; [debug line = 59:16]

.loopexit.loopexit:                               ; preds = %.preheader5
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i5 [ 0, %0 ], [ %co_12, %.loopexit.loopexit ] ; [#uses=6 type=i5]
  %exitcond3 = icmp eq i5 %co, -8, !dbg !1404     ; [#uses=1 type=i1] [debug line = 59:16]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) ; [#uses=0 type=i32]
  %co_12 = add i5 %co, 1, !dbg !1407              ; [#uses=1 type=i5] [debug line = 59:23]
  call void @llvm.dbg.value(metadata !{i5 %co_12}, i64 0, metadata !1408), !dbg !1407 ; [debug line = 59:23] [debug variable = co]
  br i1 %exitcond3, label %3, label %.preheader5.preheader, !dbg !1404 ; [debug line = 59:16]

.preheader5.preheader:                            ; preds = %.loopexit
  %tmp = zext i5 %co to i64, !dbg !1409           ; [#uses=1 type=i64] [debug line = 64:6]
  %tmp_s = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co, i5 0) ; [#uses=1 type=i10]
  %p_shl_cast = zext i10 %tmp_s to i11            ; [#uses=1 type=i11]
  %tmp_132 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co, i3 0) ; [#uses=1 type=i8]
  %p_shl1_cast = zext i8 %tmp_132 to i11, !dbg !1409 ; [#uses=1 type=i11] [debug line = 64:6]
  %tmp_133 = sub i11 %p_shl_cast, %p_shl1_cast, !dbg !1409 ; [#uses=1 type=i11] [debug line = 64:6]
  %tmp_134 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co, i4 0) ; [#uses=1 type=i9]
  %tmp_206_cast = zext i9 %tmp_134 to i10, !dbg !1417 ; [#uses=1 type=i10] [debug line = 70:34]
  %bias_addr = getelementptr [24 x float]* %bias, i64 0, i64 %tmp, !dbg !1417 ; [#uses=1 type=float*] [debug line = 70:34]
  br label %.preheader5, !dbg !1418               ; [debug line = 60:16]

.preheader5.loopexit:                             ; preds = %.preheader4
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %h = phi i5 [ 0, %.preheader5.preheader ], [ %h_12, %.preheader5.loopexit ] ; [#uses=3 type=i5]
  %exitcond2 = icmp eq i5 %h, -16, !dbg !1418     ; [#uses=1 type=i1] [debug line = 60:16]
  %empty_60 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  %h_12 = add i5 %h, 1, !dbg !1419                ; [#uses=1 type=i5] [debug line = 60:22]
  call void @llvm.dbg.value(metadata !{i5 %h_12}, i64 0, metadata !1420), !dbg !1419 ; [debug line = 60:22] [debug variable = h]
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader4.preheader, !dbg !1418 ; [debug line = 60:16]

.preheader4.preheader:                            ; preds = %.preheader5
  %tmp_cast = zext i5 %h to i10, !dbg !1421       ; [#uses=2 type=i10] [debug line = 71:17]
  %tmp_135 = add i10 %tmp_cast, %tmp_206_cast, !dbg !1421 ; [#uses=1 type=i10] [debug line = 71:17]
  %tmp_209_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_135, i4 0), !dbg !1422 ; [#uses=1 type=i14] [debug line = 61:17]
  br label %.preheader4, !dbg !1422               ; [debug line = 61:17]

.preheader4:                                      ; preds = %2, %.preheader4.preheader
  %w = phi i5 [ %w_12, %2 ], [ 0, %.preheader4.preheader ] ; [#uses=3 type=i5]
  %exitcond1 = icmp eq i5 %w, -16, !dbg !1422     ; [#uses=1 type=i1] [debug line = 61:17]
  %empty_61 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  %w_12 = add i5 %w, 1, !dbg !1423                ; [#uses=1 type=i5] [debug line = 61:23]
  br i1 %exitcond1, label %.preheader5.loopexit, label %.preheader.preheader, !dbg !1422 ; [debug line = 61:17]

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_94_cast = zext i5 %w to i14, !dbg !1421    ; [#uses=2 type=i14] [debug line = 71:17]
  %tmp_136 = add i14 %tmp_209_cast, %tmp_94_cast, !dbg !1421 ; [#uses=1 type=i14] [debug line = 71:17]
  %tmp_210_cast = zext i14 %tmp_136 to i64, !dbg !1421 ; [#uses=1 type=i64] [debug line = 71:17]
  %output_0_addr = getelementptr [6144 x float]* %output_0, i64 0, i64 %tmp_210_cast, !dbg !1421 ; [#uses=1 type=float*] [debug line = 71:17]
  br label %.preheader, !dbg !1424                ; [debug line = 63:19]

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum = phi float [ %sum_13, %1 ], [ 0.000000e+00, %.preheader.preheader ] ; [#uses=2 type=float]
  %ci = phi i5 [ %ci_6, %1 ], [ 0, %.preheader.preheader ] ; [#uses=4 type=i5]
  %exitcond = icmp eq i5 %ci, -8, !dbg !1424      ; [#uses=1 type=i1] [debug line = 63:19]
  %empty_62 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) ; [#uses=0 type=i32]
  %ci_6 = add i5 %ci, 1, !dbg !1425               ; [#uses=1 type=i5] [debug line = 63:26]
  br i1 %exitcond, label %2, label %1, !dbg !1424 ; [debug line = 63:19]

; <label>:1                                       ; preds = %.preheader
  %tmp_95_cast = zext i5 %ci to i11               ; [#uses=1 type=i11]
  %tmp_137 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %ci, i4 0) ; [#uses=1 type=i9]
  %tmp_212_cast = zext i9 %tmp_137 to i10, !dbg !1409 ; [#uses=1 type=i10] [debug line = 64:6]
  %tmp_138 = add i10 %tmp_cast, %tmp_212_cast, !dbg !1409 ; [#uses=1 type=i10] [debug line = 64:6]
  %tmp_215_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_138, i4 0), !dbg !1409 ; [#uses=1 type=i14] [debug line = 64:6]
  %tmp_139 = add i14 %tmp_94_cast, %tmp_215_cast, !dbg !1409 ; [#uses=1 type=i14] [debug line = 64:6]
  %tmp_216_cast = zext i14 %tmp_139 to i64, !dbg !1409 ; [#uses=1 type=i64] [debug line = 64:6]
  %input_0_addr = getelementptr [6144 x float]* %input_0, i64 0, i64 %tmp_216_cast, !dbg !1409 ; [#uses=1 type=float*] [debug line = 64:6]
  %tmp_140 = add i11 %tmp_95_cast, %tmp_133, !dbg !1409 ; [#uses=1 type=i11] [debug line = 64:6]
  %tmp_217_cast = sext i11 %tmp_140 to i64, !dbg !1409 ; [#uses=1 type=i64] [debug line = 64:6]
  %weight_addr = getelementptr [576 x float]* %weight, i64 0, i64 %tmp_217_cast, !dbg !1409 ; [#uses=1 type=float*] [debug line = 64:6]
  %weight_load = load float* %weight_addr, align 4, !dbg !1409 ; [#uses=1 type=float] [debug line = 64:6]
  %input_0_load = load float* %input_0_addr, align 4, !dbg !1409 ; [#uses=1 type=float] [debug line = 64:6]
  %tmp_96 = fmul float %weight_load, %input_0_load, !dbg !1409 ; [#uses=1 type=float] [debug line = 64:6]
  %sum_13 = fadd float %sum, %tmp_96, !dbg !1409  ; [#uses=1 type=float] [debug line = 64:6]
  call void @llvm.dbg.value(metadata !{float %sum_13}, i64 0, metadata !1426), !dbg !1409 ; [debug line = 64:6] [debug variable = sum]
  call void @llvm.dbg.value(metadata !{i5 %ci_6}, i64 0, metadata !1427), !dbg !1425 ; [debug line = 63:26] [debug variable = ci]
  br label %.preheader, !dbg !1425                ; [debug line = 63:26]

; <label>:2                                       ; preds = %.preheader
  %bias_load = load float* %bias_addr, align 4, !dbg !1417 ; [#uses=1 type=float] [debug line = 70:34]
  %result = fadd float %sum, %bias_load, !dbg !1417 ; [#uses=3 type=float] [debug line = 70:34]
  call void @llvm.dbg.value(metadata !{float %result}, i64 0, metadata !1428), !dbg !1417 ; [debug line = 70:34] [debug variable = result]
  %result_to_int = bitcast float %result to i32   ; [#uses=2 type=i32]
  %tmp_26 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %result_to_int, i32 23, i32 30) ; [#uses=1 type=i8]
  %tmp_93 = trunc i32 %result_to_int to i23       ; [#uses=1 type=i23]
  %notlhs = icmp ne i8 %tmp_26, -1                ; [#uses=1 type=i1]
  %notrhs = icmp eq i23 %tmp_93, 0                ; [#uses=1 type=i1]
  %tmp_28 = or i1 %notrhs, %notlhs                ; [#uses=1 type=i1]
  %tmp_29 = fcmp ogt float %result, 0.000000e+00, !dbg !1421 ; [#uses=1 type=i1] [debug line = 71:17]
  %tmp_30 = and i1 %tmp_28, %tmp_29, !dbg !1421   ; [#uses=1 type=i1] [debug line = 71:17]
  %result_6 = select i1 %tmp_30, float %result, float 0.000000e+00, !dbg !1421 ; [#uses=1 type=float] [debug line = 71:17]
  call void @llvm.dbg.value(metadata !{float %result_6}, i64 0, metadata !1428), !dbg !1421 ; [debug line = 71:17] [debug variable = result]
  store float %result_6, float* %output_0_addr, align 4, !dbg !1421 ; [debug line = 71:17]
  call void @llvm.dbg.value(metadata !{i5 %w_12}, i64 0, metadata !1429), !dbg !1423 ; [debug line = 61:23] [debug variable = w]
  br label %.preheader4, !dbg !1423               ; [debug line = 61:23]

; <label>:3                                       ; preds = %.loopexit
  ret void, !dbg !1430                            ; [debug line = 75:1]
}

; [#uses=2]
define internal fastcc void @shuffle_9621([1536 x float]* nocapture %left_0, [1536 x float]* nocapture %right_0, [3072 x float]* nocapture %output) {
  call void @llvm.dbg.value(metadata !{[1536 x float]* %left_0}, i64 0, metadata !1431), !dbg !1439 ; [debug line = 462:23] [debug variable = left[0]]
  call void @llvm.dbg.value(metadata !{[1536 x float]* %right_0}, i64 0, metadata !1440), !dbg !1441 ; [debug line = 462:47] [debug variable = right[0]]
  call void @llvm.dbg.value(metadata !{[3072 x float]* %output}, i64 0, metadata !1442), !dbg !1445 ; [debug line = 462:72] [debug variable = output]
  br label %.loopexit, !dbg !1446                 ; [debug line = 463:16]

.loopexit.loopexit:                               ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i8 [ 0, %0 ], [ %co_13, %.loopexit.loopexit ] ; [#uses=5 type=i8]
  %tmp_94 = trunc i8 %co to i1, !dbg !1446        ; [#uses=1 type=i1] [debug line = 463:16]
  %exitcond2 = icmp eq i8 %co, -64, !dbg !1446    ; [#uses=1 type=i1] [debug line = 463:16]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 192, i64 192, i64 192) ; [#uses=0 type=i32]
  %co_13 = add i8 1, %co, !dbg !1449              ; [#uses=1 type=i8] [debug line = 463:25]
  call void @llvm.dbg.value(metadata !{i8 %co_13}, i64 0, metadata !1450), !dbg !1449 ; [debug line = 463:25] [debug variable = co]
  br i1 %exitcond2, label %5, label %.preheader3.preheader, !dbg !1446 ; [debug line = 463:16]

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i7 @_ssdm_op_PartSelect.i7.i8.i32.i32(i8 %co, i32 1, i32 7) ; [#uses=1 type=i7]
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp, i2 0) ; [#uses=1 type=i9]
  %tmp_219_cast = zext i9 %tmp_s to i10           ; [#uses=1 type=i10]
  %tmp_141 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %co, i2 0) ; [#uses=1 type=i10]
  %tmp_221_cast = zext i10 %tmp_141 to i11, !dbg !1451 ; [#uses=1 type=i11] [debug line = 464:14]
  br label %.preheader3, !dbg !1451               ; [debug line = 464:14]

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i3 [ 0, %.preheader3.preheader ], [ %h_13, %.preheader3.loopexit ] ; [#uses=4 type=i3]
  %exitcond1 = icmp eq i3 %h, -4, !dbg !1451      ; [#uses=1 type=i1] [debug line = 464:14]
  %empty_63 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  %h_13 = add i3 %h, 1, !dbg !1454                ; [#uses=1 type=i3] [debug line = 464:19]
  call void @llvm.dbg.value(metadata !{i3 %h_13}, i64 0, metadata !1455), !dbg !1454 ; [debug line = 464:19] [debug variable = h]
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader, !dbg !1451 ; [debug line = 464:14]

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast2 = zext i3 %h to i11, !dbg !1456      ; [#uses=1 type=i11] [debug line = 466:19]
  %tmp_cast = zext i3 %h to i10, !dbg !1456       ; [#uses=1 type=i10] [debug line = 466:19]
  %tmp_142 = add i10 %tmp_cast, %tmp_219_cast, !dbg !1456 ; [#uses=1 type=i10] [debug line = 466:19]
  %tmp_224_cast = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_142, i2 0), !dbg !1456 ; [#uses=1 type=i12] [debug line = 466:19]
  %tmp_143 = add i11 %tmp_cast2, %tmp_221_cast, !dbg !1456 ; [#uses=1 type=i11] [debug line = 466:19]
  %tmp_227_cast = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_143, i2 0), !dbg !1460 ; [#uses=1 type=i13] [debug line = 465:17]
  br label %.preheader, !dbg !1460                ; [debug line = 465:17]

.preheader:                                       ; preds = %4, %.preheader.preheader
  %w = phi i3 [ %w_13, %4 ], [ 0, %.preheader.preheader ] ; [#uses=4 type=i3]
  %exitcond = icmp eq i3 %w, -4, !dbg !1460       ; [#uses=1 type=i1] [debug line = 465:17]
  %empty_64 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  %w_13 = add i3 %w, 1, !dbg !1461                ; [#uses=1 type=i3] [debug line = 465:22]
  br i1 %exitcond, label %.preheader3.loopexit, label %1, !dbg !1460 ; [debug line = 465:17]

; <label>:1                                       ; preds = %.preheader
  %tmp_97_cast1 = zext i3 %w to i13, !dbg !1456   ; [#uses=1 type=i13] [debug line = 466:19]
  %tmp_97_cast = zext i3 %w to i12, !dbg !1456    ; [#uses=1 type=i12] [debug line = 466:19]
  %tmp_144 = add i12 %tmp_224_cast, %tmp_97_cast, !dbg !1456 ; [#uses=1 type=i12] [debug line = 466:19]
  %tmp_228_cast = zext i12 %tmp_144 to i64, !dbg !1456 ; [#uses=2 type=i64] [debug line = 466:19]
  %left_0_addr = getelementptr [1536 x float]* %left_0, i64 0, i64 %tmp_228_cast, !dbg !1456 ; [#uses=1 type=float*] [debug line = 466:19]
  %right_0_addr = getelementptr [1536 x float]* %right_0, i64 0, i64 %tmp_228_cast, !dbg !1462 ; [#uses=1 type=float*] [debug line = 467:10]
  %tmp_145 = add i13 %tmp_227_cast, %tmp_97_cast1, !dbg !1456 ; [#uses=1 type=i13] [debug line = 466:19]
  %tmp_229_cast = zext i13 %tmp_145 to i64, !dbg !1456 ; [#uses=1 type=i64] [debug line = 466:19]
  %output_addr = getelementptr [3072 x float]* %output, i64 0, i64 %tmp_229_cast, !dbg !1456 ; [#uses=1 type=float*] [debug line = 466:19]
  br i1 %tmp_94, label %3, label %2, !dbg !1463   ; [debug line = 466:5]

; <label>:2                                       ; preds = %1
  %left_0_load = load float* %left_0_addr, align 4, !dbg !1456 ; [#uses=1 type=float] [debug line = 466:19]
  br label %4, !dbg !1456                         ; [debug line = 466:19]

; <label>:3                                       ; preds = %1
  %right_0_load = load float* %right_0_addr, align 4, !dbg !1462 ; [#uses=1 type=float] [debug line = 467:10]
  br label %4

; <label>:4                                       ; preds = %3, %2
  %storemerge = phi float [ %left_0_load, %2 ], [ %right_0_load, %3 ] ; [#uses=1 type=float]
  store float %storemerge, float* %output_addr, align 4, !dbg !1462 ; [debug line = 467:10]
  call void @llvm.dbg.value(metadata !{i3 %w_13}, i64 0, metadata !1464), !dbg !1461 ; [debug line = 465:22] [debug variable = w]
  br label %.preheader, !dbg !1461                ; [debug line = 465:22]

; <label>:5                                       ; preds = %.loopexit
  ret void, !dbg !1465                            ; [debug line = 471:1]
}

; [#uses=2]
define internal fastcc void @shuffle_4811([3072 x float]* nocapture %left_0, [3072 x float]* nocapture %right_0, [6144 x float]* nocapture %output) {
  call void @llvm.dbg.value(metadata !{[3072 x float]* %left_0}, i64 0, metadata !1466), !dbg !1470 ; [debug line = 292:23] [debug variable = left[0]]
  call void @llvm.dbg.value(metadata !{[3072 x float]* %right_0}, i64 0, metadata !1471), !dbg !1472 ; [debug line = 292:47] [debug variable = right[0]]
  call void @llvm.dbg.value(metadata !{[6144 x float]* %output}, i64 0, metadata !1473), !dbg !1474 ; [debug line = 292:72] [debug variable = output]
  br label %.loopexit, !dbg !1475                 ; [debug line = 293:16]

.loopexit.loopexit:                               ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i7 [ 0, %0 ], [ %co_14, %.loopexit.loopexit ] ; [#uses=5 type=i7]
  %tmp_95 = trunc i7 %co to i1, !dbg !1475        ; [#uses=1 type=i1] [debug line = 293:16]
  %exitcond2 = icmp eq i7 %co, -32, !dbg !1475    ; [#uses=1 type=i1] [debug line = 293:16]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) ; [#uses=0 type=i32]
  %co_14 = add i7 1, %co, !dbg !1478              ; [#uses=1 type=i7] [debug line = 293:24]
  call void @llvm.dbg.value(metadata !{i7 %co_14}, i64 0, metadata !1479), !dbg !1478 ; [debug line = 293:24] [debug variable = co]
  br i1 %exitcond2, label %5, label %.preheader3.preheader, !dbg !1475 ; [debug line = 293:16]

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i6 @_ssdm_op_PartSelect.i6.i7.i32.i32(i7 %co, i32 1, i32 6) ; [#uses=1 type=i6]
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %tmp, i3 0) ; [#uses=1 type=i9]
  %tmp_231_cast = zext i9 %tmp_s to i10           ; [#uses=1 type=i10]
  %tmp_146 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %co, i3 0) ; [#uses=1 type=i10]
  %tmp_233_cast = zext i10 %tmp_146 to i11, !dbg !1480 ; [#uses=1 type=i11] [debug line = 294:14]
  br label %.preheader3, !dbg !1480               ; [debug line = 294:14]

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i4 [ 0, %.preheader3.preheader ], [ %h_14, %.preheader3.loopexit ] ; [#uses=4 type=i4]
  %exitcond1 = icmp eq i4 %h, -8, !dbg !1480      ; [#uses=1 type=i1] [debug line = 294:14]
  %empty_65 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  %h_14 = add i4 %h, 1, !dbg !1483                ; [#uses=1 type=i4] [debug line = 294:19]
  call void @llvm.dbg.value(metadata !{i4 %h_14}, i64 0, metadata !1484), !dbg !1483 ; [debug line = 294:19] [debug variable = h]
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader, !dbg !1480 ; [debug line = 294:14]

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast2 = zext i4 %h to i11, !dbg !1485      ; [#uses=1 type=i11] [debug line = 296:19]
  %tmp_cast = zext i4 %h to i10, !dbg !1485       ; [#uses=1 type=i10] [debug line = 296:19]
  %tmp_147 = add i10 %tmp_cast, %tmp_231_cast, !dbg !1485 ; [#uses=1 type=i10] [debug line = 296:19]
  %tmp_236_cast = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_147, i3 0), !dbg !1485 ; [#uses=1 type=i13] [debug line = 296:19]
  %tmp_148 = add i11 %tmp_cast2, %tmp_233_cast, !dbg !1485 ; [#uses=1 type=i11] [debug line = 296:19]
  %tmp_239_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_148, i3 0), !dbg !1489 ; [#uses=1 type=i14] [debug line = 295:17]
  br label %.preheader, !dbg !1489                ; [debug line = 295:17]

.preheader:                                       ; preds = %4, %.preheader.preheader
  %w = phi i4 [ %w_14, %4 ], [ 0, %.preheader.preheader ] ; [#uses=4 type=i4]
  %exitcond = icmp eq i4 %w, -8, !dbg !1489       ; [#uses=1 type=i1] [debug line = 295:17]
  %empty_66 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  %w_14 = add i4 %w, 1, !dbg !1490                ; [#uses=1 type=i4] [debug line = 295:22]
  br i1 %exitcond, label %.preheader3.loopexit, label %1, !dbg !1489 ; [debug line = 295:17]

; <label>:1                                       ; preds = %.preheader
  %tmp_98_cast1 = zext i4 %w to i14, !dbg !1485   ; [#uses=1 type=i14] [debug line = 296:19]
  %tmp_98_cast = zext i4 %w to i13, !dbg !1485    ; [#uses=1 type=i13] [debug line = 296:19]
  %tmp_149 = add i13 %tmp_236_cast, %tmp_98_cast, !dbg !1485 ; [#uses=1 type=i13] [debug line = 296:19]
  %tmp_240_cast = zext i13 %tmp_149 to i64, !dbg !1485 ; [#uses=2 type=i64] [debug line = 296:19]
  %left_0_addr = getelementptr [3072 x float]* %left_0, i64 0, i64 %tmp_240_cast, !dbg !1485 ; [#uses=1 type=float*] [debug line = 296:19]
  %right_0_addr = getelementptr [3072 x float]* %right_0, i64 0, i64 %tmp_240_cast, !dbg !1491 ; [#uses=1 type=float*] [debug line = 297:10]
  %tmp_150 = add i14 %tmp_239_cast, %tmp_98_cast1, !dbg !1485 ; [#uses=1 type=i14] [debug line = 296:19]
  %tmp_241_cast = zext i14 %tmp_150 to i64, !dbg !1485 ; [#uses=1 type=i64] [debug line = 296:19]
  %output_addr = getelementptr [6144 x float]* %output, i64 0, i64 %tmp_241_cast, !dbg !1485 ; [#uses=1 type=float*] [debug line = 296:19]
  br i1 %tmp_95, label %3, label %2, !dbg !1492   ; [debug line = 296:5]

; <label>:2                                       ; preds = %1
  %left_0_load = load float* %left_0_addr, align 4, !dbg !1485 ; [#uses=1 type=float] [debug line = 296:19]
  br label %4, !dbg !1485                         ; [debug line = 296:19]

; <label>:3                                       ; preds = %1
  %right_0_load = load float* %right_0_addr, align 4, !dbg !1491 ; [#uses=1 type=float] [debug line = 297:10]
  br label %4

; <label>:4                                       ; preds = %3, %2
  %storemerge = phi float [ %left_0_load, %2 ], [ %right_0_load, %3 ] ; [#uses=1 type=float]
  store float %storemerge, float* %output_addr, align 4, !dbg !1491 ; [debug line = 297:10]
  call void @llvm.dbg.value(metadata !{i4 %w_14}, i64 0, metadata !1493), !dbg !1490 ; [debug line = 295:22] [debug variable = w]
  br label %.preheader, !dbg !1490                ; [debug line = 295:22]

; <label>:5                                       ; preds = %.loopexit
  ret void, !dbg !1494                            ; [debug line = 301:1]
}

; [#uses=2]
define internal fastcc void @shuffle_2415([6144 x float]* nocapture %left_0, [6144 x float]* nocapture %right_0, [12288 x float]* nocapture %output) {
  call void @llvm.dbg.value(metadata !{[6144 x float]* %left_0}, i64 0, metadata !1495), !dbg !1499 ; [debug line = 121:23] [debug variable = left[0]]
  call void @llvm.dbg.value(metadata !{[6144 x float]* %right_0}, i64 0, metadata !1500), !dbg !1501 ; [debug line = 121:49] [debug variable = right[0]]
  call void @llvm.dbg.value(metadata !{[12288 x float]* %output}, i64 0, metadata !1502), !dbg !1503 ; [debug line = 121:76] [debug variable = output]
  br label %.loopexit, !dbg !1504                 ; [debug line = 122:16]

.loopexit.loopexit:                               ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i6 [ 0, %0 ], [ %co_15, %.loopexit.loopexit ] ; [#uses=5 type=i6]
  %tmp_96 = trunc i6 %co to i1, !dbg !1504        ; [#uses=1 type=i1] [debug line = 122:16]
  %exitcond2 = icmp eq i6 %co, -16, !dbg !1504    ; [#uses=1 type=i1] [debug line = 122:16]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) ; [#uses=0 type=i32]
  %co_15 = add i6 1, %co, !dbg !1507              ; [#uses=1 type=i6] [debug line = 122:24]
  call void @llvm.dbg.value(metadata !{i6 %co_15}, i64 0, metadata !1508), !dbg !1507 ; [debug line = 122:24] [debug variable = co]
  br i1 %exitcond2, label %5, label %.preheader3.preheader, !dbg !1504 ; [debug line = 122:16]

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i5 @_ssdm_op_PartSelect.i5.i6.i32.i32(i6 %co, i32 1, i32 5) ; [#uses=1 type=i5]
  %tmp_s = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %tmp, i4 0) ; [#uses=1 type=i9]
  %tmp_243_cast = zext i9 %tmp_s to i10           ; [#uses=1 type=i10]
  %tmp_151 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %co, i4 0) ; [#uses=1 type=i10]
  %tmp_245_cast = zext i10 %tmp_151 to i11, !dbg !1509 ; [#uses=1 type=i11] [debug line = 123:14]
  br label %.preheader3, !dbg !1509               ; [debug line = 123:14]

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i5 [ 0, %.preheader3.preheader ], [ %h_15, %.preheader3.loopexit ] ; [#uses=4 type=i5]
  %exitcond1 = icmp eq i5 %h, -16, !dbg !1509     ; [#uses=1 type=i1] [debug line = 123:14]
  %empty_67 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  %h_15 = add i5 %h, 1, !dbg !1512                ; [#uses=1 type=i5] [debug line = 123:20]
  call void @llvm.dbg.value(metadata !{i5 %h_15}, i64 0, metadata !1513), !dbg !1512 ; [debug line = 123:20] [debug variable = h]
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader, !dbg !1509 ; [debug line = 123:14]

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_cast2 = zext i5 %h to i11, !dbg !1514      ; [#uses=1 type=i11] [debug line = 125:19]
  %tmp_cast = zext i5 %h to i10, !dbg !1514       ; [#uses=1 type=i10] [debug line = 125:19]
  %tmp_152 = add i10 %tmp_cast, %tmp_243_cast, !dbg !1514 ; [#uses=1 type=i10] [debug line = 125:19]
  %tmp_248_cast = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_152, i4 0), !dbg !1514 ; [#uses=1 type=i14] [debug line = 125:19]
  %tmp_153 = add i11 %tmp_cast2, %tmp_245_cast, !dbg !1514 ; [#uses=1 type=i11] [debug line = 125:19]
  %tmp_251_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_153, i4 0), !dbg !1518 ; [#uses=1 type=i15] [debug line = 124:17]
  br label %.preheader, !dbg !1518                ; [debug line = 124:17]

.preheader:                                       ; preds = %4, %.preheader.preheader
  %w = phi i5 [ %w_15, %4 ], [ 0, %.preheader.preheader ] ; [#uses=4 type=i5]
  %exitcond = icmp eq i5 %w, -16, !dbg !1518      ; [#uses=1 type=i1] [debug line = 124:17]
  %empty_68 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  %w_15 = add i5 %w, 1, !dbg !1519                ; [#uses=1 type=i5] [debug line = 124:23]
  br i1 %exitcond, label %.preheader3.loopexit, label %1, !dbg !1518 ; [debug line = 124:17]

; <label>:1                                       ; preds = %.preheader
  %tmp_99_cast1 = zext i5 %w to i15, !dbg !1514   ; [#uses=1 type=i15] [debug line = 125:19]
  %tmp_99_cast = zext i5 %w to i14, !dbg !1514    ; [#uses=1 type=i14] [debug line = 125:19]
  %tmp_154 = add i14 %tmp_248_cast, %tmp_99_cast, !dbg !1514 ; [#uses=1 type=i14] [debug line = 125:19]
  %tmp_252_cast = zext i14 %tmp_154 to i64, !dbg !1514 ; [#uses=2 type=i64] [debug line = 125:19]
  %left_0_addr = getelementptr [6144 x float]* %left_0, i64 0, i64 %tmp_252_cast, !dbg !1514 ; [#uses=1 type=float*] [debug line = 125:19]
  %right_0_addr = getelementptr [6144 x float]* %right_0, i64 0, i64 %tmp_252_cast, !dbg !1520 ; [#uses=1 type=float*] [debug line = 126:10]
  %tmp_155 = add i15 %tmp_251_cast, %tmp_99_cast1, !dbg !1514 ; [#uses=1 type=i15] [debug line = 125:19]
  %tmp_253_cast = zext i15 %tmp_155 to i64, !dbg !1514 ; [#uses=1 type=i64] [debug line = 125:19]
  %output_addr = getelementptr [12288 x float]* %output, i64 0, i64 %tmp_253_cast, !dbg !1514 ; [#uses=1 type=float*] [debug line = 125:19]
  br i1 %tmp_96, label %3, label %2, !dbg !1521   ; [debug line = 125:5]

; <label>:2                                       ; preds = %1
  %left_0_load = load float* %left_0_addr, align 4, !dbg !1514 ; [#uses=1 type=float] [debug line = 125:19]
  br label %4, !dbg !1514                         ; [debug line = 125:19]

; <label>:3                                       ; preds = %1
  %right_0_load = load float* %right_0_addr, align 4, !dbg !1520 ; [#uses=1 type=float] [debug line = 126:10]
  br label %4

; <label>:4                                       ; preds = %3, %2
  %storemerge = phi float [ %left_0_load, %2 ], [ %right_0_load, %3 ] ; [#uses=1 type=float]
  store float %storemerge, float* %output_addr, align 4, !dbg !1520 ; [debug line = 126:10]
  call void @llvm.dbg.value(metadata !{i5 %w_15}, i64 0, metadata !1522), !dbg !1519 ; [debug line = 124:23] [debug variable = w]
  br label %.preheader, !dbg !1519                ; [debug line = 124:23]

; <label>:5                                       ; preds = %.loopexit
  ret void, !dbg !1523                            ; [debug line = 130:1]
}

; [#uses=1]
declare i8 @llvm.part.select.i8(i8, i32, i32) nounwind readnone

; [#uses=2]
declare i7 @llvm.part.select.i7(i7, i32, i32) nounwind readnone

; [#uses=2]
declare i6 @llvm.part.select.i6(i6, i32, i32) nounwind readnone

; [#uses=3]
declare i5 @llvm.part.select.i5(i5, i32, i32) nounwind readnone

; [#uses=1]
declare i4 @llvm.part.select.i4(i4, i32, i32) nounwind readnone

; [#uses=1]
declare i32 @llvm.part.select.i32(i32, i32, i32) nounwind readnone

; [#uses=267]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=30]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=1]
define internal fastcc void @conv_last([98304 x float]* nocapture %weight, [512 x float]* nocapture %bias, [8192 x float]* nocapture %output) {
  call void @llvm.dbg.value(metadata !{[98304 x float]* %weight}, i64 0, metadata !1524), !dbg !1537 ; [debug line = 549:8] [debug variable = weight]
  call void @llvm.dbg.value(metadata !{[512 x float]* %bias}, i64 0, metadata !1538), !dbg !1541 ; [debug line = 550:8] [debug variable = bias]
  call void @llvm.dbg.value(metadata !{[8192 x float]* %output}, i64 0, metadata !1542), !dbg !1545 ; [debug line = 551:8] [debug variable = output]
  br label %.loopexit, !dbg !1546                 ; [debug line = 553:16]

.loopexit.loopexit:                               ; preds = %.preheader5
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i10 [ 0, %0 ], [ %co_16, %.loopexit.loopexit ] ; [#uses=6 type=i10]
  %exitcond3 = icmp eq i10 %co, -512, !dbg !1546  ; [#uses=1 type=i1] [debug line = 553:16]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512) ; [#uses=0 type=i32]
  %co_16 = add i10 %co, 1, !dbg !1549             ; [#uses=1 type=i10] [debug line = 553:24]
  call void @llvm.dbg.value(metadata !{i10 %co_16}, i64 0, metadata !1550), !dbg !1549 ; [debug line = 553:24] [debug variable = co]
  br i1 %exitcond3, label %3, label %.preheader5.preheader, !dbg !1546 ; [debug line = 553:16]

.preheader5.preheader:                            ; preds = %.loopexit
  %tmp = zext i10 %co to i64, !dbg !1551          ; [#uses=1 type=i64] [debug line = 558:6]
  %tmp_s = call i18 @_ssdm_op_BitConcatenate.i18.i10.i8(i10 %co, i8 0) ; [#uses=1 type=i18]
  %tmp_156 = call i16 @_ssdm_op_BitConcatenate.i16.i10.i6(i10 %co, i6 0) ; [#uses=1 type=i16]
  %p_shl1_cast = zext i16 %tmp_156 to i18, !dbg !1551 ; [#uses=1 type=i18] [debug line = 558:6]
  %tmp_157 = sub i18 %tmp_s, %p_shl1_cast, !dbg !1551 ; [#uses=1 type=i18] [debug line = 558:6]
  %tmp_158 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %co, i2 0) ; [#uses=1 type=i12]
  %tmp_258_cast = zext i12 %tmp_158 to i13, !dbg !1559 ; [#uses=1 type=i13] [debug line = 560:34]
  %bias_addr = getelementptr [512 x float]* %bias, i64 0, i64 %tmp, !dbg !1559 ; [#uses=1 type=float*] [debug line = 560:34]
  br label %.preheader5, !dbg !1560               ; [debug line = 554:16]

.preheader5.loopexit:                             ; preds = %.preheader4
  br label %.preheader5

.preheader5:                                      ; preds = %.preheader5.loopexit, %.preheader5.preheader
  %h = phi i3 [ 0, %.preheader5.preheader ], [ %h_16, %.preheader5.loopexit ] ; [#uses=4 type=i3]
  %exitcond2 = icmp eq i3 %h, -4, !dbg !1560      ; [#uses=1 type=i1] [debug line = 554:16]
  %empty_69 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  %h_16 = add i3 %h, 1, !dbg !1561                ; [#uses=1 type=i3] [debug line = 554:21]
  call void @llvm.dbg.value(metadata !{i3 %h_16}, i64 0, metadata !1562), !dbg !1561 ; [debug line = 554:21] [debug variable = h]
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader4.preheader, !dbg !1560 ; [debug line = 554:16]

.preheader4.preheader:                            ; preds = %.preheader5
  %tmp_cast3 = zext i3 %h to i11, !dbg !1563      ; [#uses=1 type=i11] [debug line = 561:17]
  %tmp_cast = zext i3 %h to i13, !dbg !1563       ; [#uses=1 type=i13] [debug line = 561:17]
  %tmp_159 = add i13 %tmp_cast, %tmp_258_cast, !dbg !1563 ; [#uses=1 type=i13] [debug line = 561:17]
  %tmp_261_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_159, i2 0), !dbg !1564 ; [#uses=1 type=i15] [debug line = 555:17]
  br label %.preheader4, !dbg !1564               ; [debug line = 555:17]

.preheader4:                                      ; preds = %2, %.preheader4.preheader
  %w = phi i3 [ %w_16, %2 ], [ 0, %.preheader4.preheader ] ; [#uses=4 type=i3]
  %exitcond1 = icmp eq i3 %w, -4, !dbg !1564      ; [#uses=1 type=i1] [debug line = 555:17]
  %empty_70 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  %w_16 = add i3 %w, 1, !dbg !1565                ; [#uses=1 type=i3] [debug line = 555:22]
  br i1 %exitcond1, label %.preheader5.loopexit, label %.preheader.preheader, !dbg !1564 ; [debug line = 555:17]

.preheader.preheader:                             ; preds = %.preheader4
  %tmp_100_cast2 = zext i3 %w to i13, !dbg !1563  ; [#uses=1 type=i13] [debug line = 561:17]
  %tmp_100_cast = zext i3 %w to i15, !dbg !1563   ; [#uses=1 type=i15] [debug line = 561:17]
  %tmp_160 = add i15 %tmp_261_cast, %tmp_100_cast, !dbg !1563 ; [#uses=1 type=i15] [debug line = 561:17]
  %tmp_262_cast = zext i15 %tmp_160 to i64, !dbg !1563 ; [#uses=1 type=i64] [debug line = 561:17]
  %output_addr = getelementptr [8192 x float]* %output, i64 0, i64 %tmp_262_cast, !dbg !1563 ; [#uses=1 type=float*] [debug line = 561:17]
  br label %.preheader, !dbg !1566                ; [debug line = 557:19]

.preheader:                                       ; preds = %1, %.preheader.preheader
  %sum = phi float [ %sum_14, %1 ], [ 0.000000e+00, %.preheader.preheader ] ; [#uses=2 type=float]
  %ci = phi i8 [ %ci_7, %1 ], [ 0, %.preheader.preheader ] ; [#uses=4 type=i8]
  %exitcond = icmp eq i8 %ci, -64, !dbg !1566     ; [#uses=1 type=i1] [debug line = 557:19]
  %empty_71 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 192, i64 192, i64 192) ; [#uses=0 type=i32]
  %ci_7 = add i8 %ci, 1, !dbg !1567               ; [#uses=1 type=i8] [debug line = 557:27]
  br i1 %exitcond, label %2, label %1, !dbg !1566 ; [debug line = 557:19]

; <label>:1                                       ; preds = %.preheader
  %tmp_101_cast = zext i8 %ci to i18, !dbg !1551  ; [#uses=1 type=i18] [debug line = 558:6]
  %tmp_161 = add i18 %tmp_101_cast, %tmp_157, !dbg !1551 ; [#uses=1 type=i18] [debug line = 558:6]
  %tmp_263_cast = sext i18 %tmp_161 to i64, !dbg !1551 ; [#uses=1 type=i64] [debug line = 558:6]
  %weight_addr = getelementptr [98304 x float]* %weight, i64 0, i64 %tmp_263_cast, !dbg !1551 ; [#uses=1 type=float*] [debug line = 558:6]
  %tmp_162 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %ci, i2 0) ; [#uses=1 type=i10]
  %tmp_265_cast = zext i10 %tmp_162 to i11, !dbg !1551 ; [#uses=1 type=i11] [debug line = 558:6]
  %tmp_163 = add i11 %tmp_cast3, %tmp_265_cast, !dbg !1551 ; [#uses=1 type=i11] [debug line = 558:6]
  %tmp_268_cast = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_163, i2 0), !dbg !1551 ; [#uses=1 type=i13] [debug line = 558:6]
  %tmp_164 = add i13 %tmp_100_cast2, %tmp_268_cast, !dbg !1551 ; [#uses=1 type=i13] [debug line = 558:6]
  %tmp_269_cast = zext i13 %tmp_164 to i64, !dbg !1551 ; [#uses=1 type=i64] [debug line = 558:6]
  %shuffleunit2_2_outpu = getelementptr [3072 x float]* @shuffleunit2_2_outpu, i64 0, i64 %tmp_269_cast, !dbg !1551 ; [#uses=1 type=float*] [debug line = 558:6]
  %weight_load = load float* %weight_addr, align 4, !dbg !1551 ; [#uses=1 type=float] [debug line = 558:6]
  %shuffleunit2_2_outpu_1 = load float* %shuffleunit2_2_outpu, align 4, !dbg !1551 ; [#uses=1 type=float] [debug line = 558:6]
  %tmp_102 = fmul float %weight_load, %shuffleunit2_2_outpu_1, !dbg !1551 ; [#uses=1 type=float] [debug line = 558:6]
  %sum_14 = fadd float %sum, %tmp_102, !dbg !1551 ; [#uses=1 type=float] [debug line = 558:6]
  call void @llvm.dbg.value(metadata !{float %sum_14}, i64 0, metadata !1568), !dbg !1551 ; [debug line = 558:6] [debug variable = sum]
  call void @llvm.dbg.value(metadata !{i8 %ci_7}, i64 0, metadata !1569), !dbg !1567 ; [debug line = 557:27] [debug variable = ci]
  br label %.preheader, !dbg !1567                ; [debug line = 557:27]

; <label>:2                                       ; preds = %.preheader
  %bias_load = load float* %bias_addr, align 4, !dbg !1559 ; [#uses=1 type=float] [debug line = 560:34]
  %result = fadd float %sum, %bias_load, !dbg !1559 ; [#uses=3 type=float] [debug line = 560:34]
  call void @llvm.dbg.value(metadata !{float %result}, i64 0, metadata !1570), !dbg !1559 ; [debug line = 560:34] [debug variable = result]
  %result_to_int = bitcast float %result to i32   ; [#uses=2 type=i32]
  %tmp_31 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %result_to_int, i32 23, i32 30) ; [#uses=1 type=i8]
  %tmp_97 = trunc i32 %result_to_int to i23       ; [#uses=1 type=i23]
  %notlhs = icmp ne i8 %tmp_31, -1                ; [#uses=1 type=i1]
  %notrhs = icmp eq i23 %tmp_97, 0                ; [#uses=1 type=i1]
  %tmp_33 = or i1 %notrhs, %notlhs                ; [#uses=1 type=i1]
  %tmp_34 = fcmp ogt float %result, 0.000000e+00, !dbg !1563 ; [#uses=1 type=i1] [debug line = 561:17]
  %tmp_35 = and i1 %tmp_33, %tmp_34, !dbg !1563   ; [#uses=1 type=i1] [debug line = 561:17]
  %result_7 = select i1 %tmp_35, float %result, float 0.000000e+00, !dbg !1563 ; [#uses=1 type=float] [debug line = 561:17]
  call void @llvm.dbg.value(metadata !{float %result_7}, i64 0, metadata !1570), !dbg !1563 ; [debug line = 561:17] [debug variable = result]
  store float %result_7, float* %output_addr, align 4, !dbg !1563 ; [debug line = 561:17]
  call void @llvm.dbg.value(metadata !{i3 %w_16}, i64 0, metadata !1571), !dbg !1565 ; [debug line = 555:22] [debug variable = w]
  br label %.preheader4, !dbg !1565               ; [debug line = 555:22]

; <label>:3                                       ; preds = %.loopexit
  ret void, !dbg !1572                            ; [debug line = 565:1]
}

; [#uses=1]
define internal fastcc void @conv1([3072 x float]* nocapture %input, [648 x float]* nocapture %weight, [24 x float]* nocapture %bias) {
  call void @llvm.dbg.value(metadata !{[3072 x float]* %input}, i64 0, metadata !1573), !dbg !1585 ; [debug line = 7:18] [debug variable = input]
  call void @llvm.dbg.value(metadata !{[648 x float]* %weight}, i64 0, metadata !1586), !dbg !1589 ; [debug line = 8:8] [debug variable = weight]
  call void @llvm.dbg.value(metadata !{[24 x float]* %bias}, i64 0, metadata !1590), !dbg !1591 ; [debug line = 9:8] [debug variable = bias]
  br label %.loopexit, !dbg !1592                 ; [debug line = 11:16]

.loopexit.loopexit:                               ; preds = %.preheader9
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i5 [ 0, %0 ], [ %co_17, %.loopexit.loopexit ] ; [#uses=6 type=i5]
  %exitcond5 = icmp eq i5 %co, -8, !dbg !1592     ; [#uses=1 type=i1] [debug line = 11:16]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) ; [#uses=0 type=i32]
  %co_17 = add i5 %co, 1, !dbg !1595              ; [#uses=1 type=i5] [debug line = 11:23]
  call void @llvm.dbg.value(metadata !{i5 %co_17}, i64 0, metadata !1596), !dbg !1595 ; [debug line = 11:23] [debug variable = co]
  br i1 %exitcond5, label %2, label %.preheader9.preheader, !dbg !1592 ; [debug line = 11:16]

.preheader9.preheader:                            ; preds = %.loopexit
  %tmp = zext i5 %co to i64, !dbg !1597           ; [#uses=1 type=i64] [debug line = 18:8]
  %tmp_cast = zext i5 %co to i8                   ; [#uses=1 type=i8]
  %tmp_s = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co, i2 0) ; [#uses=1 type=i7]
  %p_shl_cast = zext i7 %tmp_s to i8, !dbg !1597  ; [#uses=1 type=i8] [debug line = 18:8]
  %tmp_165 = sub i8 %p_shl_cast, %tmp_cast, !dbg !1597 ; [#uses=1 type=i8] [debug line = 18:8]
  %tmp_271_cast = sext i8 %tmp_165 to i9, !dbg !1597 ; [#uses=1 type=i9] [debug line = 18:8]
  %tmp_166 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co, i5 0) ; [#uses=1 type=i10]
  %tmp_273_cast = zext i10 %tmp_166 to i11, !dbg !1609 ; [#uses=1 type=i11] [debug line = 22:34]
  %bias_addr = getelementptr [24 x float]* %bias, i64 0, i64 %tmp, !dbg !1609 ; [#uses=1 type=float*] [debug line = 22:34]
  br label %.preheader9, !dbg !1610               ; [debug line = 12:16]

.preheader9.loopexit:                             ; preds = %.preheader8
  br label %.preheader9

.preheader9:                                      ; preds = %.preheader9.loopexit, %.preheader9.preheader
  %h = phi i6 [ 0, %.preheader9.preheader ], [ %h_17, %.preheader9.loopexit ] ; [#uses=5 type=i6]
  %h_cast = zext i6 %h to i7, !dbg !1610          ; [#uses=1 type=i7] [debug line = 12:16]
  %exitcond4 = icmp eq i6 %h, -32, !dbg !1610     ; [#uses=1 type=i1] [debug line = 12:16]
  %empty_72 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32) ; [#uses=0 type=i32]
  %h_17 = add i6 %h, 1, !dbg !1611                ; [#uses=1 type=i6] [debug line = 12:22]
  call void @llvm.dbg.value(metadata !{i6 %h_17}, i64 0, metadata !1612), !dbg !1611 ; [debug line = 12:22] [debug variable = h]
  br i1 %exitcond4, label %.loopexit.loopexit, label %.preheader8.preheader, !dbg !1610 ; [debug line = 12:16]

.preheader8.preheader:                            ; preds = %.preheader9
  %tmp_cast_73 = zext i6 %h to i11, !dbg !1613    ; [#uses=1 type=i11] [debug line = 23:5]
  %tmp_167 = add i11 %tmp_cast_73, %tmp_273_cast, !dbg !1613 ; [#uses=1 type=i11] [debug line = 23:5]
  %tmp_276_cast = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_167, i5 0), !dbg !1614 ; [#uses=1 type=i16] [debug line = 13:17]
  br label %.preheader8, !dbg !1614               ; [debug line = 13:17]

.preheader8:                                      ; preds = %1, %.preheader8.preheader
  %w = phi i6 [ %w_17, %1 ], [ 0, %.preheader8.preheader ] ; [#uses=5 type=i6]
  %w_cast = zext i6 %w to i7, !dbg !1614          ; [#uses=1 type=i7] [debug line = 13:17]
  %exitcond3 = icmp eq i6 %w, -32, !dbg !1614     ; [#uses=1 type=i1] [debug line = 13:17]
  %empty_74 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32) ; [#uses=0 type=i32]
  %w_17 = add i6 %w, 1, !dbg !1615                ; [#uses=1 type=i6] [debug line = 13:23]
  br i1 %exitcond3, label %.preheader9.loopexit, label %.preheader7.preheader, !dbg !1614 ; [debug line = 13:17]

.preheader7.preheader:                            ; preds = %.preheader8
  %tmp_103 = sub i6 0, %w, !dbg !1597             ; [#uses=1 type=i6] [debug line = 18:8]
  br label %.preheader7, !dbg !1616               ; [debug line = 15:19]

.preheader7.loopexit:                             ; preds = %.preheader6
  br label %.preheader7

.preheader7:                                      ; preds = %.preheader7.loopexit, %.preheader7.preheader
  %sum = phi float [ 0.000000e+00, %.preheader7.preheader ], [ %sum_1, %.preheader7.loopexit ] ; [#uses=2 type=float]
  %ci = phi i2 [ 0, %.preheader7.preheader ], [ %ci_8, %.preheader7.loopexit ] ; [#uses=4 type=i2]
  %exitcond2 = icmp eq i2 %ci, -1, !dbg !1616     ; [#uses=1 type=i1] [debug line = 15:19]
  %empty_75 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) ; [#uses=0 type=i32]
  %ci_8 = add i2 %ci, 1, !dbg !1617               ; [#uses=1 type=i2] [debug line = 15:25]
  call void @llvm.dbg.value(metadata !{i2 %ci_8}, i64 0, metadata !1618), !dbg !1617 ; [debug line = 15:25] [debug variable = ci]
  br i1 %exitcond2, label %1, label %.preheader6.preheader, !dbg !1616 ; [debug line = 15:19]

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_105_cast = zext i2 %ci to i9               ; [#uses=1 type=i9]
  %tmp_169 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %ci, i5 0) ; [#uses=1 type=i7]
  %tmp_279_cast = zext i7 %tmp_169 to i8          ; [#uses=1 type=i8]
  %tmp_170 = add i9 %tmp_105_cast, %tmp_271_cast, !dbg !1597 ; [#uses=2 type=i9] [debug line = 18:8]
  %tmp_280_cast = sext i9 %tmp_170 to i64, !dbg !1597 ; [#uses=1 type=i64] [debug line = 18:8]
  %tmp_99 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_170, i2 0) ; [#uses=1 type=i11]
  %p_shl1 = sext i11 %tmp_99 to i64, !dbg !1597   ; [#uses=1 type=i64] [debug line = 18:8]
  %tmp_171 = sub i64 %p_shl1, %tmp_280_cast, !dbg !1597 ; [#uses=1 type=i64] [debug line = 18:8]
  br label %.preheader6, !dbg !1619               ; [debug line = 16:19]

.preheader6.loopexit:                             ; preds = %.preheader
  br label %.preheader6

.preheader6:                                      ; preds = %.preheader6.loopexit, %.preheader6.preheader
  %sum_1 = phi float [ %sum, %.preheader6.preheader ], [ %sum_2, %.preheader6.loopexit ] ; [#uses=2 type=float]
  %m = phi i2 [ 0, %.preheader6.preheader ], [ %m_7, %.preheader6.loopexit ] ; [#uses=5 type=i2]
  %m_cast8_cast = zext i2 %m to i3, !dbg !1619    ; [#uses=1 type=i3] [debug line = 16:19]
  %exitcond1 = icmp eq i2 %m, -1, !dbg !1619      ; [#uses=1 type=i1] [debug line = 16:19]
  %empty_76 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) ; [#uses=0 type=i32]
  %m_7 = add i2 %m, 1, !dbg !1620                 ; [#uses=1 type=i2] [debug line = 16:24]
  call void @llvm.dbg.value(metadata !{i2 %m_7}, i64 0, metadata !1621), !dbg !1620 ; [debug line = 16:24] [debug variable = m]
  br i1 %exitcond1, label %.preheader7.loopexit, label %.preheader.preheader, !dbg !1619 ; [debug line = 16:19]

.preheader.preheader:                             ; preds = %.preheader6
  %tmp_106 = zext i2 %m to i64, !dbg !1597        ; [#uses=1 type=i64] [debug line = 18:8]
  %tmp_172 = add i64 %tmp_106, %tmp_171, !dbg !1597 ; [#uses=2 type=i64] [debug line = 18:8]
  %tmp_100 = trunc i64 %tmp_172 to i11            ; [#uses=1 type=i11]
  %tmp_101 = trunc i64 %tmp_172 to i9             ; [#uses=1 type=i9]
  %p_shl2_cast = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_101, i2 0), !dbg !1597 ; [#uses=1 type=i11] [debug line = 18:8]
  %tmp_173 = sub i11 %p_shl2_cast, %tmp_100, !dbg !1597 ; [#uses=1 type=i11] [debug line = 18:8]
  %tmp_107 = sub i3 0, %m_cast8_cast, !dbg !1597  ; [#uses=1 type=i3] [debug line = 18:8]
  %tmp_107_cast = sext i3 %tmp_107 to i6, !dbg !1597 ; [#uses=1 type=i6] [debug line = 18:8]
  %tmp_108 = icmp ne i6 %h, %tmp_107_cast, !dbg !1597 ; [#uses=1 type=i1] [debug line = 18:8]
  %tmp1 = add i2 -1, %m, !dbg !1597               ; [#uses=1 type=i2] [debug line = 18:8]
  %tmp1_cast = sext i2 %tmp1 to i7, !dbg !1597    ; [#uses=1 type=i7] [debug line = 18:8]
  %tmp_109 = add i7 %tmp1_cast, %h_cast, !dbg !1597 ; [#uses=2 type=i7] [debug line = 18:8]
  %tmp_110_cast = sext i7 %tmp_109 to i8          ; [#uses=1 type=i8]
  %tmp_174 = add i8 %tmp_110_cast, %tmp_279_cast  ; [#uses=1 type=i8]
  %tmp_288_cast = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_174, i5 0), !dbg !1597 ; [#uses=1 type=i13] [debug line = 18:8]
  %tmp_102 = call i2 @_ssdm_op_PartSelect.i2.i7.i32.i32(i7 %tmp_109, i32 5, i32 6), !dbg !1597 ; [#uses=1 type=i2] [debug line = 18:8]
  %icmp = icmp ne i2 %tmp_102, 1, !dbg !1597      ; [#uses=1 type=i1] [debug line = 18:8]
  br label %.preheader, !dbg !1622                ; [debug line = 17:20]

.preheader:                                       ; preds = %_ifconv, %.preheader.preheader
  %sum_2 = phi float [ %sum_15, %_ifconv ], [ %sum_1, %.preheader.preheader ] ; [#uses=2 type=float]
  %n = phi i2 [ %n_7, %_ifconv ], [ 0, %.preheader.preheader ] ; [#uses=5 type=i2]
  %n_cast6 = zext i2 %n to i6, !dbg !1622         ; [#uses=1 type=i6] [debug line = 17:20]
  %exitcond = icmp eq i2 %n, -1, !dbg !1622       ; [#uses=1 type=i1] [debug line = 17:20]
  %empty_77 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) ; [#uses=0 type=i32]
  %n_7 = add i2 %n, 1, !dbg !1623                 ; [#uses=1 type=i2] [debug line = 17:25]
  br i1 %exitcond, label %.preheader6.loopexit, label %_ifconv, !dbg !1622 ; [debug line = 17:20]

_ifconv:                                          ; preds = %.preheader
  %tmp_111_cast = zext i2 %n to i11, !dbg !1597   ; [#uses=1 type=i11] [debug line = 18:8]
  %tmp_175 = add i11 %tmp_173, %tmp_111_cast, !dbg !1597 ; [#uses=1 type=i11] [debug line = 18:8]
  %tmp_289_cast = zext i11 %tmp_175 to i64, !dbg !1597 ; [#uses=1 type=i64] [debug line = 18:8]
  %weight_addr = getelementptr [648 x float]* %weight, i64 0, i64 %tmp_289_cast, !dbg !1597 ; [#uses=1 type=float*] [debug line = 18:8]
  %weight_load = load float* %weight_addr, align 4, !dbg !1597 ; [#uses=1 type=float] [debug line = 18:8]
  %tmp2 = add i2 %n, -1, !dbg !1597               ; [#uses=1 type=i2] [debug line = 18:8]
  %tmp2_cast = sext i2 %tmp2 to i7, !dbg !1597    ; [#uses=1 type=i7] [debug line = 18:8]
  %tmp_112 = add i7 %w_cast, %tmp2_cast, !dbg !1597 ; [#uses=2 type=i7] [debug line = 18:8]
  %tmp_104 = call i2 @_ssdm_op_PartSelect.i2.i7.i32.i32(i7 %tmp_112, i32 5, i32 6), !dbg !1597 ; [#uses=1 type=i2] [debug line = 18:8]
  %icmp5 = icmp ne i2 %tmp_104, 1, !dbg !1597     ; [#uses=1 type=i1] [debug line = 18:8]
  %tmp_114_cast = sext i7 %tmp_112 to i13, !dbg !1597 ; [#uses=1 type=i13] [debug line = 18:8]
  %tmp_176 = add i13 %tmp_288_cast, %tmp_114_cast, !dbg !1597 ; [#uses=1 type=i13] [debug line = 18:8]
  %tmp_290_cast = zext i13 %tmp_176 to i64, !dbg !1597 ; [#uses=1 type=i64] [debug line = 18:8]
  %input_addr = getelementptr [3072 x float]* %input, i64 0, i64 %tmp_290_cast, !dbg !1597 ; [#uses=1 type=float*] [debug line = 18:8]
  %input_load = load float* %input_addr, align 4, !dbg !1597 ; [#uses=1 type=float] [debug line = 18:8]
  %notlhs = icmp ne i6 %n_cast6, %tmp_103, !dbg !1597 ; [#uses=1 type=i1] [debug line = 18:8]
  %tmp3 = and i1 %icmp, %notlhs                   ; [#uses=1 type=i1]
  %tmp4 = and i1 %tmp_108, %icmp5                 ; [#uses=1 type=i1]
  %sel_tmp2 = and i1 %tmp4, %tmp3                 ; [#uses=1 type=i1]
  %tmp_115 = select i1 %sel_tmp2, float %input_load, float 0.000000e+00, !dbg !1597 ; [#uses=1 type=float] [debug line = 18:8]
  %tmp_116 = fmul float %weight_load, %tmp_115, !dbg !1597 ; [#uses=1 type=float] [debug line = 18:8]
  %sum_15 = fadd float %sum_2, %tmp_116, !dbg !1597 ; [#uses=1 type=float] [debug line = 18:8]
  call void @llvm.dbg.value(metadata !{float %sum_15}, i64 0, metadata !1624), !dbg !1597 ; [debug line = 18:8] [debug variable = sum]
  call void @llvm.dbg.value(metadata !{i2 %n_7}, i64 0, metadata !1625), !dbg !1623 ; [debug line = 17:25] [debug variable = n]
  br label %.preheader, !dbg !1623                ; [debug line = 17:25]

; <label>:1                                       ; preds = %.preheader7
  %bias_load = load float* %bias_addr, align 4, !dbg !1609 ; [#uses=1 type=float] [debug line = 22:34]
  %result = fadd float %sum, %bias_load, !dbg !1609 ; [#uses=3 type=float] [debug line = 22:34]
  call void @llvm.dbg.value(metadata !{float %result}, i64 0, metadata !1626), !dbg !1609 ; [debug line = 22:34] [debug variable = result]
  %result_to_int = bitcast float %result to i32   ; [#uses=2 type=i32]
  %tmp_36 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %result_to_int, i32 23, i32 30) ; [#uses=1 type=i8]
  %tmp_98 = trunc i32 %result_to_int to i23       ; [#uses=1 type=i23]
  %notlhs1 = icmp ne i8 %tmp_36, -1               ; [#uses=1 type=i1]
  %notrhs1 = icmp eq i23 %tmp_98, 0               ; [#uses=1 type=i1]
  %tmp_38 = or i1 %notrhs1, %notlhs1              ; [#uses=1 type=i1]
  %tmp_39 = fcmp ogt float %result, 0.000000e+00, !dbg !1613 ; [#uses=1 type=i1] [debug line = 23:5]
  %tmp_40 = and i1 %tmp_38, %tmp_39, !dbg !1613   ; [#uses=1 type=i1] [debug line = 23:5]
  %result_8 = select i1 %tmp_40, float %result, float 0.000000e+00, !dbg !1613 ; [#uses=1 type=float] [debug line = 23:5]
  call void @llvm.dbg.value(metadata !{float %result_8}, i64 0, metadata !1626), !dbg !1613 ; [debug line = 23:5] [debug variable = result]
  %tmp_104_cast = zext i6 %w to i16, !dbg !1613   ; [#uses=1 type=i16] [debug line = 23:5]
  %tmp_168 = add i16 %tmp_276_cast, %tmp_104_cast, !dbg !1613 ; [#uses=1 type=i16] [debug line = 23:5]
  %tmp_277_cast = zext i16 %tmp_168 to i64, !dbg !1613 ; [#uses=1 type=i64] [debug line = 23:5]
  %conv1_output_addr = getelementptr [24576 x float]* @conv1_output, i64 0, i64 %tmp_277_cast, !dbg !1613 ; [#uses=1 type=float*] [debug line = 23:5]
  store float %result_8, float* %conv1_output_addr, align 4, !dbg !1613 ; [debug line = 23:5]
  call void @llvm.dbg.value(metadata !{i6 %w_17}, i64 0, metadata !1627), !dbg !1615 ; [debug line = 13:23] [debug variable = w]
  br label %.preheader8, !dbg !1615               ; [debug line = 13:23]

; <label>:2                                       ; preds = %.loopexit
  ret void, !dbg !1628                            ; [debug line = 27:1]
}

; [#uses=1]
define internal fastcc void @avgpool([512 x float]* nocapture %output) {
  call void @llvm.dbg.value(metadata !{[512 x float]* %output}, i64 0, metadata !1629), !dbg !1633 ; [debug line = 568:8] [debug variable = output]
  br label %1, !dbg !1634                         ; [debug line = 570:16]

; <label>:1                                       ; preds = %3, %0
  %co = phi i10 [ 0, %0 ], [ %co_18, %3 ]         ; [#uses=4 type=i10]
  %exitcond2 = icmp eq i10 %co, -512, !dbg !1634  ; [#uses=1 type=i1] [debug line = 570:16]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512) ; [#uses=0 type=i32]
  %co_18 = add i10 %co, 1, !dbg !1637             ; [#uses=1 type=i10] [debug line = 570:24]
  br i1 %exitcond2, label %4, label %.preheader3.preheader, !dbg !1634 ; [debug line = 570:16]

.preheader3.preheader:                            ; preds = %1
  %tmp = zext i10 %co to i64, !dbg !1638          ; [#uses=1 type=i64] [debug line = 574:5]
  %tmp_177 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %co, i2 0) ; [#uses=1 type=i12]
  %tmp_292_cast = zext i12 %tmp_177 to i13, !dbg !1644 ; [#uses=1 type=i13] [debug line = 572:16]
  br label %.preheader3, !dbg !1644               ; [debug line = 572:16]

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %sum = phi float [ 0.000000e+00, %.preheader3.preheader ], [ %sum_1, %.preheader3.loopexit ] ; [#uses=2 type=float]
  %h = phi i3 [ 0, %.preheader3.preheader ], [ %h_18, %.preheader3.loopexit ] ; [#uses=3 type=i3]
  %exitcond1 = icmp eq i3 %h, -4, !dbg !1644      ; [#uses=1 type=i1] [debug line = 572:16]
  %empty_78 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  %h_18 = add i3 %h, 1, !dbg !1645                ; [#uses=1 type=i3] [debug line = 572:21]
  call void @llvm.dbg.value(metadata !{i3 %h_18}, i64 0, metadata !1646), !dbg !1645 ; [debug line = 572:21] [debug variable = h]
  br i1 %exitcond1, label %3, label %.preheader.preheader, !dbg !1644 ; [debug line = 572:16]

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_117_cast = zext i3 %h to i13, !dbg !1638   ; [#uses=1 type=i13] [debug line = 574:5]
  %tmp_178 = add i13 %tmp_117_cast, %tmp_292_cast, !dbg !1638 ; [#uses=1 type=i13] [debug line = 574:5]
  %tmp_295_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_178, i2 0), !dbg !1647 ; [#uses=1 type=i15] [debug line = 573:15]
  br label %.preheader, !dbg !1647                ; [debug line = 573:15]

.preheader:                                       ; preds = %2, %.preheader.preheader
  %sum_1 = phi float [ %sum_16, %2 ], [ %sum, %.preheader.preheader ] ; [#uses=2 type=float]
  %w = phi i3 [ %w_18, %2 ], [ 0, %.preheader.preheader ] ; [#uses=3 type=i3]
  %exitcond = icmp eq i3 %w, -4, !dbg !1647       ; [#uses=1 type=i1] [debug line = 573:15]
  %empty_79 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  %w_18 = add i3 %w, 1, !dbg !1648                ; [#uses=1 type=i3] [debug line = 573:20]
  br i1 %exitcond, label %.preheader3.loopexit, label %2, !dbg !1647 ; [debug line = 573:15]

; <label>:2                                       ; preds = %.preheader
  %tmp_118_cast = zext i3 %w to i15, !dbg !1638   ; [#uses=1 type=i15] [debug line = 574:5]
  %tmp_179 = add i15 %tmp_295_cast, %tmp_118_cast, !dbg !1638 ; [#uses=1 type=i15] [debug line = 574:5]
  %tmp_296_cast = zext i15 %tmp_179 to i64, !dbg !1638 ; [#uses=1 type=i64] [debug line = 574:5]
  %conv_last_output_add = getelementptr [8192 x float]* @conv_last_output, i64 0, i64 %tmp_296_cast, !dbg !1638 ; [#uses=1 type=float*] [debug line = 574:5]
  %conv_last_output_loa = load float* %conv_last_output_add, align 4, !dbg !1638 ; [#uses=1 type=float] [debug line = 574:5]
  %sum_16 = fadd float %sum_1, %conv_last_output_loa, !dbg !1638 ; [#uses=1 type=float] [debug line = 574:5]
  call void @llvm.dbg.value(metadata !{float %sum_16}, i64 0, metadata !1649), !dbg !1638 ; [debug line = 574:5] [debug variable = sum]
  call void @llvm.dbg.value(metadata !{i3 %w_18}, i64 0, metadata !1650), !dbg !1648 ; [debug line = 573:20] [debug variable = w]
  br label %.preheader, !dbg !1648                ; [debug line = 573:20]

; <label>:3                                       ; preds = %.preheader3
  %tmp_s = fmul float %sum, 6.250000e-02, !dbg !1651 ; [#uses=1 type=float] [debug line = 577:3]
  %output_addr = getelementptr [512 x float]* %output, i64 0, i64 %tmp, !dbg !1651 ; [#uses=1 type=float*] [debug line = 577:3]
  store float %tmp_s, float* %output_addr, align 4, !dbg !1651 ; [debug line = 577:3]
  call void @llvm.dbg.value(metadata !{i10 %co_18}, i64 0, metadata !1652), !dbg !1637 ; [debug line = 570:24] [debug variable = co]
  br label %1, !dbg !1637                         ; [debug line = 570:24]

; <label>:4                                       ; preds = %1
  ret void, !dbg !1653                            ; [debug line = 579:1]
}

; [#uses=1]
define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

; [#uses=191]
define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

; [#uses=90]
define weak i32 @_ssdm_op_SpecLoopName(...) {
entry:
  ret i32 0
}

; [#uses=8]
define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

; [#uses=0]
declare i9 @_ssdm_op_PartSelect.i9.i64.i32.i32(i64, i32, i32) nounwind readnone

; [#uses=0]
declare i9 @_ssdm_op_PartSelect.i9.i36.i32.i32(i36, i32, i32) nounwind readnone

; [#uses=0]
declare i9 @_ssdm_op_PartSelect.i9.i11.i32.i32(i11, i32, i32) nounwind readnone

; [#uses=0]
declare i8 @_ssdm_op_PartSelect.i8.i36.i32.i32(i36, i32, i32) nounwind readnone

; [#uses=8]
define weak i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2) ; [#uses=1 type=i32]
  %empty_80 = trunc i32 %empty to i8              ; [#uses=1 type=i8]
  ret i8 %empty_80
}

; [#uses=0]
declare i8 @_ssdm_op_PartSelect.i8.i10.i32.i32(i10, i32, i32) nounwind readnone

; [#uses=0]
declare i7 @_ssdm_op_PartSelect.i7.i9.i32.i32(i9, i32, i32) nounwind readnone

; [#uses=1]
define weak i7 @_ssdm_op_PartSelect.i7.i8.i32.i32(i8, i32, i32) nounwind readnone {
entry:
  %empty = call i8 @llvm.part.select.i8(i8 %0, i32 %1, i32 %2) ; [#uses=1 type=i8]
  %empty_81 = trunc i8 %empty to i7               ; [#uses=1 type=i7]
  ret i7 %empty_81
}

; [#uses=1]
define weak i6 @_ssdm_op_PartSelect.i6.i7.i32.i32(i7, i32, i32) nounwind readnone {
entry:
  %empty = call i7 @llvm.part.select.i7(i7 %0, i32 %1, i32 %2) ; [#uses=1 type=i7]
  %empty_82 = trunc i7 %empty to i6               ; [#uses=1 type=i6]
  ret i6 %empty_82
}

; [#uses=1]
define weak i5 @_ssdm_op_PartSelect.i5.i6.i32.i32(i6, i32, i32) nounwind readnone {
entry:
  %empty = call i6 @llvm.part.select.i6(i6 %0, i32 %1, i32 %2) ; [#uses=1 type=i6]
  %empty_83 = trunc i6 %empty to i5               ; [#uses=1 type=i5]
  ret i5 %empty_83
}

; [#uses=1]
define weak i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5, i32, i32) nounwind readnone {
entry:
  %empty = call i5 @llvm.part.select.i5(i5 %0, i32 %1, i32 %2) ; [#uses=1 type=i5]
  %empty_84 = trunc i5 %empty to i4               ; [#uses=1 type=i4]
  ret i4 %empty_84
}

; [#uses=1]
define weak i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5, i32, i32) nounwind readnone {
entry:
  %empty = call i5 @llvm.part.select.i5(i5 %0, i32 %1, i32 %2) ; [#uses=1 type=i5]
  %empty_85 = trunc i5 %empty to i3               ; [#uses=1 type=i3]
  ret i3 %empty_85
}

; [#uses=0]
declare i3 @_ssdm_op_PartSelect.i3.i4.i32.i32(i4, i32, i32) nounwind readnone

; [#uses=0]
declare i23 @_ssdm_op_PartSelect.i23.i32.i32.i32(i32, i32, i32) nounwind readnone

; [#uses=2]
define weak i2 @_ssdm_op_PartSelect.i2.i7.i32.i32(i7, i32, i32) nounwind readnone {
entry:
  %empty = call i7 @llvm.part.select.i7(i7 %0, i32 %1, i32 %2) ; [#uses=1 type=i7]
  %empty_86 = trunc i7 %empty to i2               ; [#uses=1 type=i2]
  ret i2 %empty_86
}

; [#uses=2]
define weak i2 @_ssdm_op_PartSelect.i2.i6.i32.i32(i6, i32, i32) nounwind readnone {
entry:
  %empty = call i6 @llvm.part.select.i6(i6 %0, i32 %1, i32 %2) ; [#uses=1 type=i6]
  %empty_87 = trunc i6 %empty to i2               ; [#uses=1 type=i2]
  ret i2 %empty_87
}

; [#uses=2]
define weak i2 @_ssdm_op_PartSelect.i2.i5.i32.i32(i5, i32, i32) nounwind readnone {
entry:
  %empty = call i5 @llvm.part.select.i5(i5 %0, i32 %1, i32 %2) ; [#uses=1 type=i5]
  %empty_88 = trunc i5 %empty to i2               ; [#uses=1 type=i2]
  ret i2 %empty_88
}

; [#uses=2]
define weak i2 @_ssdm_op_PartSelect.i2.i4.i32.i32(i4, i32, i32) nounwind readnone {
entry:
  %empty = call i4 @llvm.part.select.i4(i4 %0, i32 %1, i32 %2) ; [#uses=1 type=i4]
  %empty_89 = trunc i4 %empty to i2               ; [#uses=1 type=i2]
  ret i2 %empty_89
}

; [#uses=0]
declare i2 @_ssdm_op_PartSelect.i2.i3.i32.i32(i3, i32, i32) nounwind readnone

; [#uses=0]
declare i13 @_ssdm_op_PartSelect.i13.i15.i32.i32(i15, i32, i32) nounwind readnone

; [#uses=0]
declare i13 @_ssdm_op_PartSelect.i13.i14.i32.i32(i14, i32, i32) nounwind readnone

; [#uses=0]
declare i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64, i32, i32) nounwind readnone

; [#uses=0]
declare i11 @_ssdm_op_PartSelect.i11.i36.i32.i32(i36, i32, i32) nounwind readnone

; [#uses=0]
declare i10 @_ssdm_op_PartSelect.i10.i36.i32.i32(i36, i32, i32) nounwind readnone

; [#uses=0]
declare i1 @_ssdm_op_PartSelect.i1.i8.i32.i32(i8, i32, i32) nounwind readnone

; [#uses=0]
declare i1 @_ssdm_op_PartSelect.i1.i7.i32.i32(i7, i32, i32) nounwind readnone

; [#uses=0]
declare i1 @_ssdm_op_PartSelect.i1.i6.i32.i32(i6, i32, i32) nounwind readnone

; [#uses=0]
declare i1 @_ssdm_op_PartSelect.i1.i5.i32.i32(i5, i32, i32) nounwind readnone

; [#uses=0]
declare i1 @_ssdm_op_PartSelect.i1.i2.i32.i32(i2, i32, i32) nounwind readnone

; [#uses=9]
define weak i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7, i2) nounwind readnone {
entry:
  %empty = zext i7 %0 to i9                       ; [#uses=1 type=i9]
  %empty_90 = zext i2 %1 to i9                    ; [#uses=1 type=i9]
  %empty_91 = shl i9 %empty, 2                    ; [#uses=1 type=i9]
  %empty_92 = or i9 %empty_91, %empty_90          ; [#uses=1 type=i9]
  ret i9 %empty_92
}

; [#uses=7]
define weak i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6, i3) nounwind readnone {
entry:
  %empty = zext i6 %0 to i9                       ; [#uses=1 type=i9]
  %empty_93 = zext i3 %1 to i9                    ; [#uses=1 type=i9]
  %empty_94 = shl i9 %empty, 3                    ; [#uses=1 type=i9]
  %empty_95 = or i9 %empty_94, %empty_93          ; [#uses=1 type=i9]
  ret i9 %empty_95
}

; [#uses=6]
define weak i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5, i4) nounwind readnone {
entry:
  %empty = zext i5 %0 to i9                       ; [#uses=1 type=i9]
  %empty_96 = zext i4 %1 to i9                    ; [#uses=1 type=i9]
  %empty_97 = shl i9 %empty, 4                    ; [#uses=1 type=i9]
  %empty_98 = or i9 %empty_97, %empty_96          ; [#uses=1 type=i9]
  ret i9 %empty_98
}

; [#uses=2]
define weak i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4, i5) nounwind readnone {
entry:
  %empty = zext i4 %0 to i9                       ; [#uses=1 type=i9]
  %empty_99 = zext i5 %1 to i9                    ; [#uses=1 type=i9]
  %empty_100 = shl i9 %empty, 5                   ; [#uses=1 type=i9]
  %empty_101 = or i9 %empty_100, %empty_99        ; [#uses=1 type=i9]
  ret i9 %empty_101
}

; [#uses=1]
define weak i9 @_ssdm_op_BitConcatenate.i9.i1.i5.i3(i1, i5, i3) nounwind readnone {
entry:
  %empty = zext i5 %1 to i8                       ; [#uses=1 type=i8]
  %empty_102 = zext i3 %2 to i8                   ; [#uses=1 type=i8]
  %empty_103 = shl i8 %empty, 3                   ; [#uses=1 type=i8]
  %empty_104 = or i8 %empty_103, %empty_102       ; [#uses=1 type=i8]
  %empty_105 = zext i1 %0 to i9                   ; [#uses=1 type=i9]
  %empty_106 = zext i8 %empty_104 to i9           ; [#uses=1 type=i9]
  %empty_107 = shl i9 %empty_105, 8               ; [#uses=1 type=i9]
  %empty_108 = or i9 %empty_107, %empty_106       ; [#uses=1 type=i9]
  ret i9 %empty_108
}

; [#uses=3]
define weak i8 @_ssdm_op_BitConcatenate.i8.i6.i2(i6, i2) nounwind readnone {
entry:
  %empty = zext i6 %0 to i8                       ; [#uses=1 type=i8]
  %empty_109 = zext i2 %1 to i8                   ; [#uses=1 type=i8]
  %empty_110 = shl i8 %empty, 2                   ; [#uses=1 type=i8]
  %empty_111 = or i8 %empty_110, %empty_109       ; [#uses=1 type=i8]
  ret i8 %empty_111
}

; [#uses=3]
define weak i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5, i3) nounwind readnone {
entry:
  %empty = zext i5 %0 to i8                       ; [#uses=1 type=i8]
  %empty_112 = zext i3 %1 to i8                   ; [#uses=1 type=i8]
  %empty_113 = shl i8 %empty, 3                   ; [#uses=1 type=i8]
  %empty_114 = or i8 %empty_113, %empty_112       ; [#uses=1 type=i8]
  ret i8 %empty_114
}

; [#uses=1]
define weak i8 @_ssdm_op_BitConcatenate.i8.i1.i5.i2(i1, i5, i2) nounwind readnone {
entry:
  %empty = zext i5 %1 to i7                       ; [#uses=1 type=i7]
  %empty_115 = zext i2 %2 to i7                   ; [#uses=1 type=i7]
  %empty_116 = shl i7 %empty, 2                   ; [#uses=1 type=i7]
  %empty_117 = or i7 %empty_116, %empty_115       ; [#uses=1 type=i7]
  %empty_118 = zext i1 %0 to i8                   ; [#uses=1 type=i8]
  %empty_119 = zext i7 %empty_117 to i8           ; [#uses=1 type=i8]
  %empty_120 = shl i8 %empty_118, 7               ; [#uses=1 type=i8]
  %empty_121 = or i8 %empty_120, %empty_119       ; [#uses=1 type=i8]
  ret i8 %empty_121
}

; [#uses=4]
define weak i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5, i2) nounwind readnone {
entry:
  %empty = zext i5 %0 to i7                       ; [#uses=1 type=i7]
  %empty_122 = zext i2 %1 to i7                   ; [#uses=1 type=i7]
  %empty_123 = shl i7 %empty, 2                   ; [#uses=1 type=i7]
  %empty_124 = or i7 %empty_123, %empty_122       ; [#uses=1 type=i7]
  ret i7 %empty_124
}

; [#uses=1]
define weak i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4, i3) nounwind readnone {
entry:
  %empty = zext i4 %0 to i7                       ; [#uses=1 type=i7]
  %empty_125 = zext i3 %1 to i7                   ; [#uses=1 type=i7]
  %empty_126 = shl i7 %empty, 3                   ; [#uses=1 type=i7]
  %empty_127 = or i7 %empty_126, %empty_125       ; [#uses=1 type=i7]
  ret i7 %empty_127
}

; [#uses=6]
define weak i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2, i5) nounwind readnone {
entry:
  %empty = zext i2 %0 to i7                       ; [#uses=1 type=i7]
  %empty_128 = zext i5 %1 to i7                   ; [#uses=1 type=i7]
  %empty_129 = shl i7 %empty, 5                   ; [#uses=1 type=i7]
  %empty_130 = or i7 %empty_129, %empty_128       ; [#uses=1 type=i7]
  ret i7 %empty_130
}

; [#uses=1]
define weak i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2, i4) nounwind readnone {
entry:
  %empty = zext i2 %0 to i6                       ; [#uses=1 type=i6]
  %empty_131 = zext i4 %1 to i6                   ; [#uses=1 type=i6]
  %empty_132 = shl i6 %empty, 4                   ; [#uses=1 type=i6]
  %empty_133 = or i6 %empty_132, %empty_131       ; [#uses=1 type=i6]
  ret i6 %empty_133
}

; [#uses=5]
define weak i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1, i5) nounwind readnone {
entry:
  %empty = zext i1 %0 to i6                       ; [#uses=1 type=i6]
  %empty_134 = zext i5 %1 to i6                   ; [#uses=1 type=i6]
  %empty_135 = shl i6 %empty, 5                   ; [#uses=1 type=i6]
  %empty_136 = or i6 %empty_135, %empty_134       ; [#uses=1 type=i6]
  ret i6 %empty_136
}

; [#uses=0]
declare i5 @_ssdm_op_BitConcatenate.i5.i4.i1(i4, i1) nounwind readnone

; [#uses=3]
define weak i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2, i3) nounwind readnone {
entry:
  %empty = zext i2 %0 to i5                       ; [#uses=1 type=i5]
  %empty_137 = zext i3 %1 to i5                   ; [#uses=1 type=i5]
  %empty_138 = shl i5 %empty, 3                   ; [#uses=1 type=i5]
  %empty_139 = or i5 %empty_138, %empty_137       ; [#uses=1 type=i5]
  ret i5 %empty_139
}

; [#uses=0]
declare i4 @_ssdm_op_BitConcatenate.i4.i3.i1(i3, i1) nounwind readnone

; [#uses=1]
define weak i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2, i2) nounwind readnone {
entry:
  %empty = zext i2 %0 to i4                       ; [#uses=1 type=i4]
  %empty_140 = zext i2 %1 to i4                   ; [#uses=1 type=i4]
  %empty_141 = shl i4 %empty, 2                   ; [#uses=1 type=i4]
  %empty_142 = or i4 %empty_141, %empty_140       ; [#uses=1 type=i4]
  ret i4 %empty_142
}

; [#uses=3]
define weak i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1, i3) nounwind readnone {
entry:
  %empty = zext i1 %0 to i4                       ; [#uses=1 type=i4]
  %empty_143 = zext i3 %1 to i4                   ; [#uses=1 type=i4]
  %empty_144 = shl i4 %empty, 3                   ; [#uses=1 type=i4]
  %empty_145 = or i4 %empty_144, %empty_143       ; [#uses=1 type=i4]
  ret i4 %empty_145
}

; [#uses=0]
declare i3 @_ssdm_op_BitConcatenate.i3.i2.i1(i2, i1) nounwind readnone

; [#uses=4]
define weak i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13, i5) nounwind readnone {
entry:
  %empty = zext i13 %0 to i18                     ; [#uses=1 type=i18]
  %empty_146 = zext i5 %1 to i18                  ; [#uses=1 type=i18]
  %empty_147 = shl i18 %empty, 5                  ; [#uses=1 type=i18]
  %empty_148 = or i18 %empty_147, %empty_146      ; [#uses=1 type=i18]
  ret i18 %empty_148
}

; [#uses=1]
define weak i18 @_ssdm_op_BitConcatenate.i18.i10.i8(i10, i8) nounwind readnone {
entry:
  %empty = zext i10 %0 to i18                     ; [#uses=1 type=i18]
  %empty_149 = zext i8 %1 to i18                  ; [#uses=1 type=i18]
  %empty_150 = shl i18 %empty, 8                  ; [#uses=1 type=i18]
  %empty_151 = or i18 %empty_150, %empty_149      ; [#uses=1 type=i18]
  ret i18 %empty_151
}

; [#uses=5]
define weak i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12, i5) nounwind readnone {
entry:
  %empty = zext i12 %0 to i17                     ; [#uses=1 type=i17]
  %empty_152 = zext i5 %1 to i17                  ; [#uses=1 type=i17]
  %empty_153 = shl i17 %empty, 5                  ; [#uses=1 type=i17]
  %empty_154 = or i17 %empty_153, %empty_152      ; [#uses=1 type=i17]
  ret i17 %empty_154
}

; [#uses=4]
define weak i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13, i3) nounwind readnone {
entry:
  %empty = zext i13 %0 to i16                     ; [#uses=1 type=i16]
  %empty_155 = zext i3 %1 to i16                  ; [#uses=1 type=i16]
  %empty_156 = shl i16 %empty, 3                  ; [#uses=1 type=i16]
  %empty_157 = or i16 %empty_156, %empty_155      ; [#uses=1 type=i16]
  ret i16 %empty_157
}

; [#uses=12]
define weak i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11, i5) nounwind readnone {
entry:
  %empty = zext i11 %0 to i16                     ; [#uses=1 type=i16]
  %empty_158 = zext i5 %1 to i16                  ; [#uses=1 type=i16]
  %empty_159 = shl i16 %empty, 5                  ; [#uses=1 type=i16]
  %empty_160 = or i16 %empty_159, %empty_158      ; [#uses=1 type=i16]
  ret i16 %empty_160
}

; [#uses=1]
define weak i16 @_ssdm_op_BitConcatenate.i16.i10.i6(i10, i6) nounwind readnone {
entry:
  %empty = zext i10 %0 to i16                     ; [#uses=1 type=i16]
  %empty_161 = zext i6 %1 to i16                  ; [#uses=1 type=i16]
  %empty_162 = shl i16 %empty, 6                  ; [#uses=1 type=i16]
  %empty_163 = or i16 %empty_162, %empty_161      ; [#uses=1 type=i16]
  ret i16 %empty_163
}

; [#uses=1]
define weak i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8, i7) nounwind readnone {
entry:
  %empty = zext i8 %0 to i15                      ; [#uses=1 type=i15]
  %empty_164 = zext i7 %1 to i15                  ; [#uses=1 type=i15]
  %empty_165 = shl i15 %empty, 7                  ; [#uses=1 type=i15]
  %empty_166 = or i15 %empty_165, %empty_164      ; [#uses=1 type=i15]
  ret i15 %empty_166
}

; [#uses=1]
define weak i15 @_ssdm_op_BitConcatenate.i15.i5.i5.i5(i5, i5, i5) nounwind readnone {
entry:
  %empty = zext i5 %1 to i10                      ; [#uses=1 type=i10]
  %empty_167 = zext i5 %2 to i10                  ; [#uses=1 type=i10]
  %empty_168 = shl i10 %empty, 5                  ; [#uses=1 type=i10]
  %empty_169 = or i10 %empty_168, %empty_167      ; [#uses=1 type=i10]
  %empty_170 = zext i5 %0 to i15                  ; [#uses=1 type=i15]
  %empty_171 = zext i10 %empty_169 to i15         ; [#uses=1 type=i15]
  %empty_172 = shl i15 %empty_170, 10             ; [#uses=1 type=i15]
  %empty_173 = or i15 %empty_172, %empty_171      ; [#uses=1 type=i15]
  ret i15 %empty_173
}

; [#uses=11]
define weak i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13, i2) nounwind readnone {
entry:
  %empty = zext i13 %0 to i15                     ; [#uses=1 type=i15]
  %empty_174 = zext i2 %1 to i15                  ; [#uses=1 type=i15]
  %empty_175 = shl i15 %empty, 2                  ; [#uses=1 type=i15]
  %empty_176 = or i15 %empty_175, %empty_174      ; [#uses=1 type=i15]
  ret i15 %empty_176
}

; [#uses=5]
define weak i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12, i3) nounwind readnone {
entry:
  %empty = zext i12 %0 to i15                     ; [#uses=1 type=i15]
  %empty_177 = zext i3 %1 to i15                  ; [#uses=1 type=i15]
  %empty_178 = shl i15 %empty, 3                  ; [#uses=1 type=i15]
  %empty_179 = or i15 %empty_178, %empty_177      ; [#uses=1 type=i15]
  ret i15 %empty_179
}

; [#uses=5]
define weak i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11, i4) nounwind readnone {
entry:
  %empty = zext i11 %0 to i15                     ; [#uses=1 type=i15]
  %empty_180 = zext i4 %1 to i15                  ; [#uses=1 type=i15]
  %empty_181 = shl i15 %empty, 4                  ; [#uses=1 type=i15]
  %empty_182 = or i15 %empty_181, %empty_180      ; [#uses=1 type=i15]
  ret i15 %empty_182
}

; [#uses=7]
define weak i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10, i5) nounwind readnone {
entry:
  %empty = zext i10 %0 to i15                     ; [#uses=1 type=i15]
  %empty_183 = zext i5 %1 to i15                  ; [#uses=1 type=i15]
  %empty_184 = shl i15 %empty, 5                  ; [#uses=1 type=i15]
  %empty_185 = or i15 %empty_184, %empty_183      ; [#uses=1 type=i15]
  ret i15 %empty_185
}

; [#uses=3]
define weak i14 @_ssdm_op_BitConcatenate.i14.i9.i5(i9, i5) nounwind readnone {
entry:
  %empty = zext i9 %0 to i14                      ; [#uses=1 type=i14]
  %empty_186 = zext i5 %1 to i14                  ; [#uses=1 type=i14]
  %empty_187 = shl i14 %empty, 5                  ; [#uses=1 type=i14]
  %empty_188 = or i14 %empty_187, %empty_186      ; [#uses=1 type=i14]
  ret i14 %empty_188
}

; [#uses=2]
define weak i14 @_ssdm_op_BitConcatenate.i14.i7.i7(i7, i7) nounwind readnone {
entry:
  %empty = zext i7 %0 to i14                      ; [#uses=1 type=i14]
  %empty_189 = zext i7 %1 to i14                  ; [#uses=1 type=i14]
  %empty_190 = shl i14 %empty, 7                  ; [#uses=1 type=i14]
  %empty_191 = or i14 %empty_190, %empty_189      ; [#uses=1 type=i14]
  ret i14 %empty_191
}

; [#uses=1]
define weak i14 @_ssdm_op_BitConcatenate.i14.i6.i4.i4(i6, i4, i4) nounwind readnone {
entry:
  %empty = zext i4 %1 to i8                       ; [#uses=1 type=i8]
  %empty_192 = zext i4 %2 to i8                   ; [#uses=1 type=i8]
  %empty_193 = shl i8 %empty, 4                   ; [#uses=1 type=i8]
  %empty_194 = or i8 %empty_193, %empty_192       ; [#uses=1 type=i8]
  %empty_195 = zext i6 %0 to i14                  ; [#uses=1 type=i14]
  %empty_196 = zext i8 %empty_194 to i14          ; [#uses=1 type=i14]
  %empty_197 = shl i14 %empty_195, 8              ; [#uses=1 type=i14]
  %empty_198 = or i14 %empty_197, %empty_196      ; [#uses=1 type=i14]
  ret i14 %empty_198
}

; [#uses=4]
define weak i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12, i2) nounwind readnone {
entry:
  %empty = zext i12 %0 to i14                     ; [#uses=1 type=i14]
  %empty_199 = zext i2 %1 to i14                  ; [#uses=1 type=i14]
  %empty_200 = shl i14 %empty, 2                  ; [#uses=1 type=i14]
  %empty_201 = or i14 %empty_200, %empty_199      ; [#uses=1 type=i14]
  ret i14 %empty_201
}

; [#uses=13]
define weak i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11, i3) nounwind readnone {
entry:
  %empty = zext i11 %0 to i14                     ; [#uses=1 type=i14]
  %empty_202 = zext i3 %1 to i14                  ; [#uses=1 type=i14]
  %empty_203 = shl i14 %empty, 3                  ; [#uses=1 type=i14]
  %empty_204 = or i14 %empty_203, %empty_202      ; [#uses=1 type=i14]
  ret i14 %empty_204
}

; [#uses=7]
define weak i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10, i4) nounwind readnone {
entry:
  %empty = zext i10 %0 to i14                     ; [#uses=1 type=i14]
  %empty_205 = zext i4 %1 to i14                  ; [#uses=1 type=i14]
  %empty_206 = shl i14 %empty, 4                  ; [#uses=1 type=i14]
  %empty_207 = or i14 %empty_206, %empty_205      ; [#uses=1 type=i14]
  ret i14 %empty_207
}

; [#uses=5]
define weak i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8, i5) nounwind readnone {
entry:
  %empty = zext i8 %0 to i13                      ; [#uses=1 type=i13]
  %empty_208 = zext i5 %1 to i13                  ; [#uses=1 type=i13]
  %empty_209 = shl i13 %empty, 5                  ; [#uses=1 type=i13]
  %empty_210 = or i13 %empty_209, %empty_208      ; [#uses=1 type=i13]
  ret i13 %empty_210
}

; [#uses=1]
define weak i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7, i6) nounwind readnone {
entry:
  %empty = zext i7 %0 to i13                      ; [#uses=1 type=i13]
  %empty_211 = zext i6 %1 to i13                  ; [#uses=1 type=i13]
  %empty_212 = shl i13 %empty, 6                  ; [#uses=1 type=i13]
  %empty_213 = or i13 %empty_212, %empty_211      ; [#uses=1 type=i13]
  ret i13 %empty_213
}

; [#uses=1]
define weak i13 @_ssdm_op_BitConcatenate.i13.i7.i3.i3(i7, i3, i3) nounwind readnone {
entry:
  %empty = zext i3 %1 to i6                       ; [#uses=1 type=i6]
  %empty_214 = zext i3 %2 to i6                   ; [#uses=1 type=i6]
  %empty_215 = shl i6 %empty, 3                   ; [#uses=1 type=i6]
  %empty_216 = or i6 %empty_215, %empty_214       ; [#uses=1 type=i6]
  %empty_217 = zext i7 %0 to i13                  ; [#uses=1 type=i13]
  %empty_218 = zext i6 %empty_216 to i13          ; [#uses=1 type=i13]
  %empty_219 = shl i13 %empty_217, 6              ; [#uses=1 type=i13]
  %empty_220 = or i13 %empty_219, %empty_218      ; [#uses=1 type=i13]
  ret i13 %empty_220
}

; [#uses=9]
define weak i13 @_ssdm_op_BitConcatenate.i13.i5.i4.i4(i5, i4, i4) nounwind readnone {
entry:
  %empty = zext i4 %1 to i8                       ; [#uses=1 type=i8]
  %empty_221 = zext i4 %2 to i8                   ; [#uses=1 type=i8]
  %empty_222 = shl i8 %empty, 4                   ; [#uses=1 type=i8]
  %empty_223 = or i8 %empty_222, %empty_221       ; [#uses=1 type=i8]
  %empty_224 = zext i5 %0 to i13                  ; [#uses=1 type=i13]
  %empty_225 = zext i8 %empty_223 to i13          ; [#uses=1 type=i13]
  %empty_226 = shl i13 %empty_224, 8              ; [#uses=1 type=i13]
  %empty_227 = or i13 %empty_226, %empty_225      ; [#uses=1 type=i13]
  ret i13 %empty_227
}

; [#uses=1]
define weak i13 @_ssdm_op_BitConcatenate.i13.i4.i9(i4, i9) nounwind readnone {
entry:
  %empty = zext i4 %0 to i13                      ; [#uses=1 type=i13]
  %empty_228 = zext i9 %1 to i13                  ; [#uses=1 type=i13]
  %empty_229 = shl i13 %empty, 9                  ; [#uses=1 type=i13]
  %empty_230 = or i13 %empty_229, %empty_228      ; [#uses=1 type=i13]
  ret i13 %empty_230
}

; [#uses=6]
define weak i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11, i2) nounwind readnone {
entry:
  %empty = zext i11 %0 to i13                     ; [#uses=1 type=i13]
  %empty_231 = zext i2 %1 to i13                  ; [#uses=1 type=i13]
  %empty_232 = shl i13 %empty, 2                  ; [#uses=1 type=i13]
  %empty_233 = or i13 %empty_232, %empty_231      ; [#uses=1 type=i13]
  ret i13 %empty_233
}

; [#uses=14]
define weak i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10, i3) nounwind readnone {
entry:
  %empty = zext i10 %0 to i13                     ; [#uses=1 type=i13]
  %empty_234 = zext i3 %1 to i13                  ; [#uses=1 type=i13]
  %empty_235 = shl i13 %empty, 3                  ; [#uses=1 type=i13]
  %empty_236 = or i13 %empty_235, %empty_234      ; [#uses=1 type=i13]
  ret i13 %empty_236
}

; [#uses=3]
define weak i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9, i3) nounwind readnone {
entry:
  %empty = zext i9 %0 to i12                      ; [#uses=1 type=i12]
  %empty_237 = zext i3 %1 to i12                  ; [#uses=1 type=i12]
  %empty_238 = shl i12 %empty, 3                  ; [#uses=1 type=i12]
  %empty_239 = or i12 %empty_238, %empty_237      ; [#uses=1 type=i12]
  ret i12 %empty_239
}

; [#uses=4]
define weak i12 @_ssdm_op_BitConcatenate.i12.i7.i5(i7, i5) nounwind readnone {
entry:
  %empty = zext i7 %0 to i12                      ; [#uses=1 type=i12]
  %empty_240 = zext i5 %1 to i12                  ; [#uses=1 type=i12]
  %empty_241 = shl i12 %empty, 5                  ; [#uses=1 type=i12]
  %empty_242 = or i12 %empty_241, %empty_240      ; [#uses=1 type=i12]
  ret i12 %empty_242
}

; [#uses=2]
define weak i12 @_ssdm_op_BitConcatenate.i12.i6.i6(i6, i6) nounwind readnone {
entry:
  %empty = zext i6 %0 to i12                      ; [#uses=1 type=i12]
  %empty_243 = zext i6 %1 to i12                  ; [#uses=1 type=i12]
  %empty_244 = shl i12 %empty, 6                  ; [#uses=1 type=i12]
  %empty_245 = or i12 %empty_244, %empty_243      ; [#uses=1 type=i12]
  ret i12 %empty_245
}

; [#uses=9]
define weak i12 @_ssdm_op_BitConcatenate.i12.i6.i3.i3(i6, i3, i3) nounwind readnone {
entry:
  %empty = zext i3 %1 to i6                       ; [#uses=1 type=i6]
  %empty_246 = zext i3 %2 to i6                   ; [#uses=1 type=i6]
  %empty_247 = shl i6 %empty, 3                   ; [#uses=1 type=i6]
  %empty_248 = or i6 %empty_247, %empty_246       ; [#uses=1 type=i6]
  %empty_249 = zext i6 %0 to i12                  ; [#uses=1 type=i12]
  %empty_250 = zext i6 %empty_248 to i12          ; [#uses=1 type=i12]
  %empty_251 = shl i12 %empty_249, 6              ; [#uses=1 type=i12]
  %empty_252 = or i12 %empty_251, %empty_250      ; [#uses=1 type=i12]
  ret i12 %empty_252
}

; [#uses=1]
define weak i12 @_ssdm_op_BitConcatenate.i12.i2.i5.i5(i2, i5, i5) nounwind readnone {
entry:
  %empty = zext i5 %1 to i10                      ; [#uses=1 type=i10]
  %empty_253 = zext i5 %2 to i10                  ; [#uses=1 type=i10]
  %empty_254 = shl i10 %empty, 5                  ; [#uses=1 type=i10]
  %empty_255 = or i10 %empty_254, %empty_253      ; [#uses=1 type=i10]
  %empty_256 = zext i2 %0 to i12                  ; [#uses=1 type=i12]
  %empty_257 = zext i10 %empty_255 to i12         ; [#uses=1 type=i12]
  %empty_258 = shl i12 %empty_256, 10             ; [#uses=1 type=i12]
  %empty_259 = or i12 %empty_258, %empty_257      ; [#uses=1 type=i12]
  ret i12 %empty_259
}

; [#uses=16]
define weak i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10, i2) nounwind readnone {
entry:
  %empty = zext i10 %0 to i12                     ; [#uses=1 type=i12]
  %empty_260 = zext i2 %1 to i12                  ; [#uses=1 type=i12]
  %empty_261 = shl i12 %empty, 2                  ; [#uses=1 type=i12]
  %empty_262 = or i12 %empty_261, %empty_260      ; [#uses=1 type=i12]
  ret i12 %empty_262
}

; [#uses=10]
define weak i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9, i2) nounwind readnone {
entry:
  %empty = zext i9 %0 to i11                      ; [#uses=1 type=i11]
  %empty_263 = zext i2 %1 to i11                  ; [#uses=1 type=i11]
  %empty_264 = shl i11 %empty, 2                  ; [#uses=1 type=i11]
  %empty_265 = or i11 %empty_264, %empty_263      ; [#uses=1 type=i11]
  ret i11 %empty_265
}

; [#uses=3]
define weak i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8, i3) nounwind readnone {
entry:
  %empty = zext i8 %0 to i11                      ; [#uses=1 type=i11]
  %empty_266 = zext i3 %1 to i11                  ; [#uses=1 type=i11]
  %empty_267 = shl i11 %empty, 3                  ; [#uses=1 type=i11]
  %empty_268 = or i11 %empty_267, %empty_266      ; [#uses=1 type=i11]
  ret i11 %empty_268
}

; [#uses=1]
define weak i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7, i4) nounwind readnone {
entry:
  %empty = zext i7 %0 to i11                      ; [#uses=1 type=i11]
  %empty_269 = zext i4 %1 to i11                  ; [#uses=1 type=i11]
  %empty_270 = shl i11 %empty, 4                  ; [#uses=1 type=i11]
  %empty_271 = or i11 %empty_270, %empty_269      ; [#uses=1 type=i11]
  ret i11 %empty_271
}

; [#uses=9]
define weak i11 @_ssdm_op_BitConcatenate.i11.i7.i2.i2(i7, i2, i2) nounwind readnone {
entry:
  %empty = zext i2 %1 to i4                       ; [#uses=1 type=i4]
  %empty_272 = zext i2 %2 to i4                   ; [#uses=1 type=i4]
  %empty_273 = shl i4 %empty, 2                   ; [#uses=1 type=i4]
  %empty_274 = or i4 %empty_273, %empty_272       ; [#uses=1 type=i4]
  %empty_275 = zext i7 %0 to i11                  ; [#uses=1 type=i11]
  %empty_276 = zext i4 %empty_274 to i11          ; [#uses=1 type=i11]
  %empty_277 = shl i11 %empty_275, 4              ; [#uses=1 type=i11]
  %empty_278 = or i11 %empty_277, %empty_276      ; [#uses=1 type=i11]
  ret i11 %empty_278
}

; [#uses=1]
define weak i11 @_ssdm_op_BitConcatenate.i11.i6.i5(i6, i5) nounwind readnone {
entry:
  %empty = zext i6 %0 to i11                      ; [#uses=1 type=i11]
  %empty_279 = zext i5 %1 to i11                  ; [#uses=1 type=i11]
  %empty_280 = shl i11 %empty, 5                  ; [#uses=1 type=i11]
  %empty_281 = or i11 %empty_280, %empty_279      ; [#uses=1 type=i11]
  ret i11 %empty_281
}

; [#uses=1]
define weak i11 @_ssdm_op_BitConcatenate.i11.i1.i5.i5(i1, i5, i5) nounwind readnone {
entry:
  %empty = zext i5 %1 to i10                      ; [#uses=1 type=i10]
  %empty_282 = zext i5 %2 to i10                  ; [#uses=1 type=i10]
  %empty_283 = shl i10 %empty, 5                  ; [#uses=1 type=i10]
  %empty_284 = or i10 %empty_283, %empty_282      ; [#uses=1 type=i10]
  %empty_285 = zext i1 %0 to i11                  ; [#uses=1 type=i11]
  %empty_286 = zext i10 %empty_284 to i11         ; [#uses=1 type=i11]
  %empty_287 = shl i11 %empty_285, 10             ; [#uses=1 type=i11]
  %empty_288 = or i11 %empty_287, %empty_286      ; [#uses=1 type=i11]
  ret i11 %empty_288
}

; [#uses=9]
define weak i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8, i2) nounwind readnone {
entry:
  %empty = zext i8 %0 to i10                      ; [#uses=1 type=i10]
  %empty_289 = zext i2 %1 to i10                  ; [#uses=1 type=i10]
  %empty_290 = shl i10 %empty, 2                  ; [#uses=1 type=i10]
  %empty_291 = or i10 %empty_290, %empty_289      ; [#uses=1 type=i10]
  ret i10 %empty_291
}

; [#uses=7]
define weak i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7, i3) nounwind readnone {
entry:
  %empty = zext i7 %0 to i10                      ; [#uses=1 type=i10]
  %empty_292 = zext i3 %1 to i10                  ; [#uses=1 type=i10]
  %empty_293 = shl i10 %empty, 3                  ; [#uses=1 type=i10]
  %empty_294 = or i10 %empty_293, %empty_292      ; [#uses=1 type=i10]
  ret i10 %empty_294
}

; [#uses=6]
define weak i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6, i4) nounwind readnone {
entry:
  %empty = zext i6 %0 to i10                      ; [#uses=1 type=i10]
  %empty_295 = zext i4 %1 to i10                  ; [#uses=1 type=i10]
  %empty_296 = shl i10 %empty, 4                  ; [#uses=1 type=i10]
  %empty_297 = or i10 %empty_296, %empty_295      ; [#uses=1 type=i10]
  ret i10 %empty_297
}

; [#uses=6]
define weak i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5, i5) nounwind readnone {
entry:
  %empty = zext i5 %0 to i10                      ; [#uses=1 type=i10]
  %empty_298 = zext i5 %1 to i10                  ; [#uses=1 type=i10]
  %empty_299 = shl i10 %empty, 5                  ; [#uses=1 type=i10]
  %empty_300 = or i10 %empty_299, %empty_298      ; [#uses=1 type=i10]
  ret i10 %empty_300
}

; [#uses=1]
define weak i10 @_ssdm_op_BitConcatenate.i10.i2.i5.i3(i2, i5, i3) nounwind readnone {
entry:
  %empty = zext i5 %1 to i8                       ; [#uses=1 type=i8]
  %empty_301 = zext i3 %2 to i8                   ; [#uses=1 type=i8]
  %empty_302 = shl i8 %empty, 3                   ; [#uses=1 type=i8]
  %empty_303 = or i8 %empty_302, %empty_301       ; [#uses=1 type=i8]
  %empty_304 = zext i2 %0 to i10                  ; [#uses=1 type=i10]
  %empty_305 = zext i8 %empty_303 to i10          ; [#uses=1 type=i10]
  %empty_306 = shl i10 %empty_304, 8              ; [#uses=1 type=i10]
  %empty_307 = or i10 %empty_306, %empty_305      ; [#uses=1 type=i10]
  ret i10 %empty_307
}

; [#uses=1]
declare void @_GLOBAL__I_a25() nounwind section ".text.startup"

; [#uses=1]
declare void @_GLOBAL__I_a() nounwind section ".text.startup"

; [#uses=3]
define internal fastcc void @ShuffleUnit2([3072 x float]* nocapture %input, [9216 x float]* nocapture %conv1_weight, [96 x float]* nocapture %conv1_bias, [864 x float]* nocapture %conv2_weight, [96 x float]* nocapture %conv2_bias, [9216 x float]* nocapture %conv3_weight, [96 x float]* nocapture %conv3_bias, [3072 x float]* nocapture %output) {
meminst.0:
  %left_part_0 = alloca [1536 x float], align 4   ; [#uses=3 type=[1536 x float]*]
  %right_part_0 = alloca [1536 x float], align 4  ; [#uses=3 type=[1536 x float]*]
  call void @llvm.dbg.declare(metadata !{[1536 x float]* %right_part_0}, metadata !1654), !dbg !1659 ; [debug line = 521:8] [debug variable = right_part[0]]
  %conv1_output_0 = alloca [1536 x float], align 4 ; [#uses=3 type=[1536 x float]*]
  call void @llvm.dbg.declare(metadata !{[1536 x float]* %conv1_output_0}, metadata !1660), !dbg !1661 ; [debug line = 522:8] [debug variable = conv1_output[0]]
  %conv2_output_0 = alloca [1536 x float], align 4 ; [#uses=3 type=[1536 x float]*]
  call void @llvm.dbg.declare(metadata !{[1536 x float]* %conv2_output_0}, metadata !1662), !dbg !1663 ; [debug line = 523:8] [debug variable = conv2_output[0]]
  %conv3_output_0 = alloca [1536 x float], align 4 ; [#uses=3 type=[1536 x float]*]
  call void @llvm.dbg.declare(metadata !{[1536 x float]* %conv3_output_0}, metadata !1664), !dbg !1665 ; [debug line = 524:8] [debug variable = conv3_output[0]]
  call void @llvm.dbg.value(metadata !{[3072 x float]* %input}, i64 0, metadata !1666), !dbg !1667 ; [debug line = 511:25] [debug variable = input]
  call void @llvm.dbg.value(metadata !{[9216 x float]* %conv1_weight}, i64 0, metadata !1668), !dbg !1669 ; [debug line = 512:8] [debug variable = conv1_weight]
  call void @llvm.dbg.value(metadata !{[96 x float]* %conv1_bias}, i64 0, metadata !1670), !dbg !1671 ; [debug line = 513:8] [debug variable = conv1_bias]
  call void @llvm.dbg.value(metadata !{[864 x float]* %conv2_weight}, i64 0, metadata !1672), !dbg !1673 ; [debug line = 514:8] [debug variable = conv2_weight]
  call void @llvm.dbg.value(metadata !{[96 x float]* %conv2_bias}, i64 0, metadata !1674), !dbg !1675 ; [debug line = 515:8] [debug variable = conv2_bias]
  call void @llvm.dbg.value(metadata !{[9216 x float]* %conv3_weight}, i64 0, metadata !1676), !dbg !1677 ; [debug line = 516:8] [debug variable = conv3_weight]
  call void @llvm.dbg.value(metadata !{[96 x float]* %conv3_bias}, i64 0, metadata !1678), !dbg !1679 ; [debug line = 517:8] [debug variable = conv3_bias]
  call void @llvm.dbg.value(metadata !{[3072 x float]* %output}, i64 0, metadata !1680), !dbg !1681 ; [debug line = 518:8] [debug variable = output]
  call void @llvm.dbg.declare(metadata !{[1536 x float]* %left_part_0}, metadata !1682), !dbg !1683 ; [debug line = 520:8] [debug variable = left_part[0]]
  br label %meminst5.0

meminst58.0:                                      ; preds = %meminst912.0
  %tmp_120 = icmp eq i7 %invdar6, -33, !dbg !1684 ; [#uses=1 type=i1] [debug line = 520:36]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopName([17 x i8]* @memset_left_part_str) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_120, label %meminst20.0.preheader, label %meminst5.0, !dbg !1684 ; [debug line = 520:36]

meminst20.0.preheader:                            ; preds = %meminst58.0
  br label %meminst20.0, !dbg !1685               ; [debug line = 521:37]

meminst912.0:                                     ; preds = %meminst13.0
  %tmp_119 = icmp eq i2 %invdar1, -1, !dbg !1684  ; [#uses=1 type=i1] [debug line = 520:36]
  %empty_308 = call i32 (...)* @_ssdm_op_SpecLoopName([17 x i8]* @memset_left_part_str) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_119, label %meminst58.0, label %meminst9.0, !dbg !1684 ; [debug line = 520:36]

meminst13.0:                                      ; preds = %meminst9.0, %meminst13.0
  %invdar2 = phi i2 [ 0, %meminst9.0 ], [ %indvarinc2, %meminst13.0 ] ; [#uses=3 type=i2]
  %indvarinc2 = add i2 %invdar2, 1, !dbg !1684    ; [#uses=1 type=i2] [debug line = 520:36]
  %tmp = call i11 @_ssdm_op_BitConcatenate.i11.i7.i2.i2(i7 %invdar6, i2 %invdar1, i2 %invdar2) ; [#uses=1 type=i11]
  %tmp_180 = zext i11 %tmp to i64, !dbg !1684     ; [#uses=1 type=i64] [debug line = 520:36]
  %left_part_0_addr = getelementptr [1536 x float]* %left_part_0, i64 0, i64 %tmp_180, !dbg !1684 ; [#uses=1 type=float*] [debug line = 520:36]
  store float 0.000000e+00, float* %left_part_0_addr, align 4, !dbg !1684 ; [debug line = 520:36]
  %tmp_s = icmp eq i2 %invdar2, -1, !dbg !1684    ; [#uses=1 type=i1] [debug line = 520:36]
  %empty_309 = call i32 (...)* @_ssdm_op_SpecLoopName([17 x i8]* @memset_left_part_str) nounwind ; [#uses=0 type=i32]
  %empty_310 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  br i1 %tmp_s, label %meminst912.0, label %meminst13.0, !dbg !1684 ; [debug line = 520:36]

meminst9.0:                                       ; preds = %meminst5.0, %meminst912.0
  %invdar1 = phi i2 [ 0, %meminst5.0 ], [ %indvarinc1, %meminst912.0 ] ; [#uses=3 type=i2]
  %indvarinc1 = add i2 %invdar1, 1, !dbg !1684    ; [#uses=1 type=i2] [debug line = 520:36]
  %empty_311 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  br label %meminst13.0

meminst5.0:                                       ; preds = %meminst58.0, %meminst.0
  %invdar6 = phi i7 [ 0, %meminst.0 ], [ %indvarinc7, %meminst58.0 ] ; [#uses=3 type=i7]
  %indvarinc7 = add i7 %invdar6, 1, !dbg !1684    ; [#uses=1 type=i7] [debug line = 520:36]
  %empty_312 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) ; [#uses=0 type=i32]
  br label %meminst9.0

meminst2023.0:                                    ; preds = %meminst2427.0
  %tmp_123 = icmp eq i7 %invdar4, -33, !dbg !1685 ; [#uses=1 type=i1] [debug line = 521:37]
  %empty_313 = call i32 (...)* @_ssdm_op_SpecLoopName([18 x i8]* @memset_right_part_st) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_123, label %meminst35.0.preheader, label %meminst20.0, !dbg !1685 ; [debug line = 521:37]

meminst35.0.preheader:                            ; preds = %meminst2023.0
  br label %meminst35.0, !dbg !1686               ; [debug line = 522:39]

meminst2427.0:                                    ; preds = %meminst28.0
  %tmp_122 = icmp eq i2 %invdar5, -1, !dbg !1685  ; [#uses=1 type=i1] [debug line = 521:37]
  %empty_314 = call i32 (...)* @_ssdm_op_SpecLoopName([18 x i8]* @memset_right_part_st) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_122, label %meminst2023.0, label %meminst24.0, !dbg !1685 ; [debug line = 521:37]

meminst28.0:                                      ; preds = %meminst24.0, %meminst28.0
  %invdar7 = phi i2 [ 0, %meminst24.0 ], [ %indvarinc6, %meminst28.0 ] ; [#uses=3 type=i2]
  %indvarinc6 = add i2 %invdar7, 1, !dbg !1685    ; [#uses=1 type=i2] [debug line = 521:37]
  %tmp_105 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i2.i2(i7 %invdar4, i2 %invdar5, i2 %invdar7) ; [#uses=1 type=i11]
  %tmp_181 = zext i11 %tmp_105 to i64, !dbg !1685 ; [#uses=1 type=i64] [debug line = 521:37]
  %right_part_0_addr = getelementptr [1536 x float]* %right_part_0, i64 0, i64 %tmp_181, !dbg !1685 ; [#uses=1 type=float*] [debug line = 521:37]
  store float 0.000000e+00, float* %right_part_0_addr, align 4, !dbg !1685 ; [debug line = 521:37]
  %tmp_121 = icmp eq i2 %invdar7, -1, !dbg !1685  ; [#uses=1 type=i1] [debug line = 521:37]
  %empty_315 = call i32 (...)* @_ssdm_op_SpecLoopName([18 x i8]* @memset_right_part_st) nounwind ; [#uses=0 type=i32]
  %empty_316 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  br i1 %tmp_121, label %meminst2427.0, label %meminst28.0, !dbg !1685 ; [debug line = 521:37]

meminst24.0:                                      ; preds = %meminst20.0, %meminst2427.0
  %invdar5 = phi i2 [ 0, %meminst20.0 ], [ %indvarinc5, %meminst2427.0 ] ; [#uses=3 type=i2]
  %indvarinc5 = add i2 %invdar5, 1, !dbg !1685    ; [#uses=1 type=i2] [debug line = 521:37]
  %empty_317 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  br label %meminst28.0

meminst20.0:                                      ; preds = %meminst2023.0, %meminst20.0.preheader
  %invdar4 = phi i7 [ %indvarinc4, %meminst2023.0 ], [ 0, %meminst20.0.preheader ] ; [#uses=3 type=i7]
  %indvarinc4 = add i7 %invdar4, 1, !dbg !1685    ; [#uses=1 type=i7] [debug line = 521:37]
  %empty_318 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) ; [#uses=0 type=i32]
  br label %meminst24.0

meminst3538.0:                                    ; preds = %meminst3942.0
  %tmp_126 = icmp eq i7 %invdar9, -33, !dbg !1686 ; [#uses=1 type=i1] [debug line = 522:39]
  %empty_319 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv1_output_s) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_126, label %meminst50.0.preheader, label %meminst35.0, !dbg !1686 ; [debug line = 522:39]

meminst50.0.preheader:                            ; preds = %meminst3538.0
  br label %meminst50.0, !dbg !1687               ; [debug line = 523:39]

meminst3942.0:                                    ; preds = %meminst43.0
  %tmp_125 = icmp eq i2 %invdar, -1, !dbg !1686   ; [#uses=1 type=i1] [debug line = 522:39]
  %empty_320 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv1_output_s) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_125, label %meminst3538.0, label %meminst39.0, !dbg !1686 ; [debug line = 522:39]

meminst43.0:                                      ; preds = %meminst39.0, %meminst43.0
  %invdar3 = phi i2 [ 0, %meminst39.0 ], [ %indvarinc3, %meminst43.0 ] ; [#uses=3 type=i2]
  %indvarinc3 = add i2 %invdar3, 1, !dbg !1686    ; [#uses=1 type=i2] [debug line = 522:39]
  %tmp_106 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i2.i2(i7 %invdar9, i2 %invdar, i2 %invdar3) ; [#uses=1 type=i11]
  %tmp_182 = zext i11 %tmp_106 to i64, !dbg !1686 ; [#uses=1 type=i64] [debug line = 522:39]
  %conv1_output_0_addr = getelementptr [1536 x float]* %conv1_output_0, i64 0, i64 %tmp_182, !dbg !1686 ; [#uses=1 type=float*] [debug line = 522:39]
  store float 0.000000e+00, float* %conv1_output_0_addr, align 4, !dbg !1686 ; [debug line = 522:39]
  %tmp_124 = icmp eq i2 %invdar3, -1, !dbg !1686  ; [#uses=1 type=i1] [debug line = 522:39]
  %empty_321 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv1_output_s) nounwind ; [#uses=0 type=i32]
  %empty_322 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  br i1 %tmp_124, label %meminst3942.0, label %meminst43.0, !dbg !1686 ; [debug line = 522:39]

meminst39.0:                                      ; preds = %meminst35.0, %meminst3942.0
  %invdar = phi i2 [ 0, %meminst35.0 ], [ %indvarinc, %meminst3942.0 ] ; [#uses=3 type=i2]
  %indvarinc = add i2 %invdar, 1, !dbg !1686      ; [#uses=1 type=i2] [debug line = 522:39]
  %empty_323 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  br label %meminst43.0

meminst35.0:                                      ; preds = %meminst3538.0, %meminst35.0.preheader
  %invdar9 = phi i7 [ %indvarinc9, %meminst3538.0 ], [ 0, %meminst35.0.preheader ] ; [#uses=3 type=i7]
  %indvarinc9 = add i7 %invdar9, 1, !dbg !1686    ; [#uses=1 type=i7] [debug line = 522:39]
  %empty_324 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) ; [#uses=0 type=i32]
  br label %meminst39.0

meminst5053.0:                                    ; preds = %meminst5457.0
  %tmp_129 = icmp eq i7 %invdar8, -33, !dbg !1687 ; [#uses=1 type=i1] [debug line = 523:39]
  %empty_325 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv2_output_s) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_129, label %meminst66.0.preheader, label %meminst50.0, !dbg !1687 ; [debug line = 523:39]

meminst66.0.preheader:                            ; preds = %meminst5053.0
  br label %meminst66.0, !dbg !1688               ; [debug line = 524:39]

meminst5457.0:                                    ; preds = %meminst59.0
  %tmp_128 = icmp eq i2 %invdar10, -1, !dbg !1687 ; [#uses=1 type=i1] [debug line = 523:39]
  %empty_326 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv2_output_s) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_128, label %meminst5053.0, label %meminst54.0, !dbg !1687 ; [debug line = 523:39]

meminst59.0:                                      ; preds = %meminst54.0, %meminst59.0
  %invdar11 = phi i2 [ 0, %meminst54.0 ], [ %indvarinc11, %meminst59.0 ] ; [#uses=3 type=i2]
  %indvarinc11 = add i2 %invdar11, 1, !dbg !1687  ; [#uses=1 type=i2] [debug line = 523:39]
  %tmp_107 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i2.i2(i7 %invdar8, i2 %invdar10, i2 %invdar11) ; [#uses=1 type=i11]
  %tmp_183 = zext i11 %tmp_107 to i64, !dbg !1687 ; [#uses=1 type=i64] [debug line = 523:39]
  %conv2_output_0_addr = getelementptr [1536 x float]* %conv2_output_0, i64 0, i64 %tmp_183, !dbg !1687 ; [#uses=1 type=float*] [debug line = 523:39]
  store float 0.000000e+00, float* %conv2_output_0_addr, align 4, !dbg !1687 ; [debug line = 523:39]
  %tmp_127 = icmp eq i2 %invdar11, -1, !dbg !1687 ; [#uses=1 type=i1] [debug line = 523:39]
  %empty_327 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv2_output_s) nounwind ; [#uses=0 type=i32]
  %empty_328 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  br i1 %tmp_127, label %meminst5457.0, label %meminst59.0, !dbg !1687 ; [debug line = 523:39]

meminst54.0:                                      ; preds = %meminst50.0, %meminst5457.0
  %invdar10 = phi i2 [ 0, %meminst50.0 ], [ %indvarinc10, %meminst5457.0 ] ; [#uses=3 type=i2]
  %indvarinc10 = add i2 %invdar10, 1, !dbg !1687  ; [#uses=1 type=i2] [debug line = 523:39]
  %empty_329 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  br label %meminst59.0

meminst50.0:                                      ; preds = %meminst5053.0, %meminst50.0.preheader
  %invdar8 = phi i7 [ %indvarinc8, %meminst5053.0 ], [ 0, %meminst50.0.preheader ] ; [#uses=3 type=i7]
  %indvarinc8 = add i7 %invdar8, 1, !dbg !1687    ; [#uses=1 type=i7] [debug line = 523:39]
  %empty_330 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) ; [#uses=0 type=i32]
  br label %meminst54.0

meminst6669.0:                                    ; preds = %meminst7073.0
  %tmp_132 = icmp eq i7 %invdar12, -33, !dbg !1688 ; [#uses=1 type=i1] [debug line = 524:39]
  %empty_331 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv3_output_s) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_132, label %.preheader77.preheader, label %meminst66.0, !dbg !1688 ; [debug line = 524:39]

.preheader77.preheader:                           ; preds = %meminst6669.0
  br label %.preheader77, !dbg !1689              ; [debug line = 527:16]

meminst7073.0:                                    ; preds = %meminst74.0
  %tmp_131 = icmp eq i2 %invdar13, -1, !dbg !1688 ; [#uses=1 type=i1] [debug line = 524:39]
  %empty_332 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv3_output_s) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_131, label %meminst6669.0, label %meminst70.0, !dbg !1688 ; [debug line = 524:39]

meminst74.0:                                      ; preds = %meminst70.0, %meminst74.0
  %invdar14 = phi i2 [ 0, %meminst70.0 ], [ %indvarinc14, %meminst74.0 ] ; [#uses=3 type=i2]
  %indvarinc14 = add i2 %invdar14, 1, !dbg !1688  ; [#uses=1 type=i2] [debug line = 524:39]
  %tmp_108 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i2.i2(i7 %invdar12, i2 %invdar13, i2 %invdar14) ; [#uses=1 type=i11]
  %tmp_184 = zext i11 %tmp_108 to i64, !dbg !1688 ; [#uses=1 type=i64] [debug line = 524:39]
  %conv3_output_0_addr = getelementptr [1536 x float]* %conv3_output_0, i64 0, i64 %tmp_184, !dbg !1688 ; [#uses=1 type=float*] [debug line = 524:39]
  store float 0.000000e+00, float* %conv3_output_0_addr, align 4, !dbg !1688 ; [debug line = 524:39]
  %tmp_130 = icmp eq i2 %invdar14, -1, !dbg !1688 ; [#uses=1 type=i1] [debug line = 524:39]
  %empty_333 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv3_output_s) nounwind ; [#uses=0 type=i32]
  %empty_334 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  br i1 %tmp_130, label %meminst7073.0, label %meminst74.0, !dbg !1688 ; [debug line = 524:39]

meminst70.0:                                      ; preds = %meminst66.0, %meminst7073.0
  %invdar13 = phi i2 [ 0, %meminst66.0 ], [ %indvarinc13, %meminst7073.0 ] ; [#uses=3 type=i2]
  %indvarinc13 = add i2 %invdar13, 1, !dbg !1688  ; [#uses=1 type=i2] [debug line = 524:39]
  %empty_335 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  br label %meminst74.0

meminst66.0:                                      ; preds = %meminst6669.0, %meminst66.0.preheader
  %invdar12 = phi i7 [ %indvarinc12, %meminst6669.0 ], [ 0, %meminst66.0.preheader ] ; [#uses=3 type=i7]
  %indvarinc12 = add i7 %invdar12, 1, !dbg !1688  ; [#uses=1 type=i7] [debug line = 524:39]
  %empty_336 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) ; [#uses=0 type=i32]
  br label %meminst70.0

.preheader77.loopexit:                            ; preds = %.preheader3
  br label %.preheader77

.preheader77:                                     ; preds = %.preheader77.loopexit, %.preheader77.preheader
  %co = phi i7 [ %co_19, %.preheader77.loopexit ], [ 0, %.preheader77.preheader ] ; [#uses=4 type=i7]
  %co_cast = zext i7 %co to i8, !dbg !1689        ; [#uses=1 type=i8] [debug line = 527:16]
  %exitcond2 = icmp eq i7 %co, -32, !dbg !1689    ; [#uses=1 type=i1] [debug line = 527:16]
  %empty_337 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) ; [#uses=0 type=i32]
  %co_19 = add i7 %co, 1, !dbg !1691              ; [#uses=1 type=i7] [debug line = 527:24]
  call void @llvm.dbg.value(metadata !{i7 %co_19}, i64 0, metadata !1692), !dbg !1691 ; [debug line = 527:24] [debug variable = co]
  br i1 %exitcond2, label %1, label %.preheader3.preheader, !dbg !1689 ; [debug line = 527:16]

.preheader3.preheader:                            ; preds = %.preheader77
  %tmp_133 = add i8 %co_cast, 96, !dbg !1693      ; [#uses=1 type=i8] [debug line = 530:5]
  %tmp_185 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_133, i2 0) ; [#uses=1 type=i10]
  %tmp_307_cast = zext i10 %tmp_185 to i11        ; [#uses=1 type=i11]
  %tmp_186 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %co, i2 0) ; [#uses=1 type=i9]
  %tmp_309_cast = zext i9 %tmp_186 to i10, !dbg !1699 ; [#uses=1 type=i10] [debug line = 528:14]
  br label %.preheader3, !dbg !1699               ; [debug line = 528:14]

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i3 [ 0, %.preheader3.preheader ], [ %h_19, %.preheader3.loopexit ] ; [#uses=4 type=i3]
  %exitcond1 = icmp eq i3 %h, -4, !dbg !1699      ; [#uses=1 type=i1] [debug line = 528:14]
  %empty_338 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  %h_19 = add i3 %h, 1, !dbg !1700                ; [#uses=1 type=i3] [debug line = 528:19]
  call void @llvm.dbg.value(metadata !{i3 %h_19}, i64 0, metadata !1701), !dbg !1700 ; [debug line = 528:19] [debug variable = h]
  br i1 %exitcond1, label %.preheader77.loopexit, label %.preheader.preheader, !dbg !1699 ; [debug line = 528:14]

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_134_cast1 = zext i3 %h to i10, !dbg !1693  ; [#uses=1 type=i10] [debug line = 530:5]
  %tmp_134_cast = zext i3 %h to i11, !dbg !1693   ; [#uses=1 type=i11] [debug line = 530:5]
  %tmp_187 = add i11 %tmp_307_cast, %tmp_134_cast, !dbg !1693 ; [#uses=1 type=i11] [debug line = 530:5]
  %tmp_312_cast = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_187, i2 0), !dbg !1702 ; [#uses=1 type=i13] [debug line = 531:5]
  %tmp_188 = add i10 %tmp_309_cast, %tmp_134_cast1, !dbg !1702 ; [#uses=1 type=i10] [debug line = 531:5]
  %tmp_109 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_188, i2 0) ; [#uses=1 type=i12]
  %tmp_315_cast = zext i12 %tmp_109 to i13, !dbg !1703 ; [#uses=1 type=i13] [debug line = 529:17]
  br label %.preheader, !dbg !1703                ; [debug line = 529:17]

.preheader:                                       ; preds = %0, %.preheader.preheader
  %w = phi i3 [ %w_19, %0 ], [ 0, %.preheader.preheader ] ; [#uses=3 type=i3]
  %exitcond = icmp eq i3 %w, -4, !dbg !1703       ; [#uses=1 type=i1] [debug line = 529:17]
  %empty_339 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  %w_19 = add i3 %w, 1, !dbg !1704                ; [#uses=1 type=i3] [debug line = 529:22]
  br i1 %exitcond, label %.preheader3.loopexit, label %0, !dbg !1703 ; [debug line = 529:17]

; <label>:0                                       ; preds = %.preheader
  %tmp_135_cast = zext i3 %w to i13, !dbg !1693   ; [#uses=2 type=i13] [debug line = 530:5]
  %tmp_189 = add i13 %tmp_312_cast, %tmp_135_cast, !dbg !1693 ; [#uses=1 type=i13] [debug line = 530:5]
  %tmp_316_cast = zext i13 %tmp_189 to i64, !dbg !1693 ; [#uses=1 type=i64] [debug line = 530:5]
  %input_addr = getelementptr [3072 x float]* %input, i64 0, i64 %tmp_316_cast, !dbg !1693 ; [#uses=1 type=float*] [debug line = 530:5]
  %tmp_190 = add i13 %tmp_315_cast, %tmp_135_cast, !dbg !1702 ; [#uses=1 type=i13] [debug line = 531:5]
  %tmp_317_cast = zext i13 %tmp_190 to i64, !dbg !1702 ; [#uses=3 type=i64] [debug line = 531:5]
  %input_addr_1 = getelementptr [3072 x float]* %input, i64 0, i64 %tmp_317_cast, !dbg !1702 ; [#uses=1 type=float*] [debug line = 531:5]
  %left_part_0_addr_1 = getelementptr [1536 x float]* %left_part_0, i64 0, i64 %tmp_317_cast, !dbg !1702 ; [#uses=1 type=float*] [debug line = 531:5]
  %right_part_0_addr_1 = getelementptr [1536 x float]* %right_part_0, i64 0, i64 %tmp_317_cast, !dbg !1693 ; [#uses=1 type=float*] [debug line = 530:5]
  %input_load = load float* %input_addr, align 4, !dbg !1693 ; [#uses=1 type=float] [debug line = 530:5]
  store float %input_load, float* %right_part_0_addr_1, align 4, !dbg !1693 ; [debug line = 530:5]
  %input_load_1 = load float* %input_addr_1, align 4, !dbg !1702 ; [#uses=1 type=float] [debug line = 531:5]
  store float %input_load_1, float* %left_part_0_addr_1, align 4, !dbg !1702 ; [debug line = 531:5]
  call void @llvm.dbg.value(metadata !{i3 %w_19}, i64 0, metadata !1705), !dbg !1704 ; [debug line = 529:22] [debug variable = w]
  br label %.preheader, !dbg !1704                ; [debug line = 529:22]

; <label>:1                                       ; preds = %.preheader77
  call fastcc void @subconv_1x1_419([1536 x float]* %right_part_0, [9216 x float]* %conv1_weight, [96 x float]* %conv1_bias, [1536 x float]* %conv1_output_0), !dbg !1706 ; [debug line = 536:2]
  call fastcc void @subconv_3x3_4_no_rel([1536 x float]* %conv1_output_0, [864 x float]* %conv2_weight, [96 x float]* %conv2_bias, [1536 x float]* %conv2_output_0), !dbg !1707 ; [debug line = 540:2]
  call fastcc void @subconv_1x1_419([1536 x float]* %conv2_output_0, [9216 x float]* %conv3_weight, [96 x float]* %conv3_bias, [1536 x float]* %conv3_output_0), !dbg !1708 ; [debug line = 542:2]
  call fastcc void @shuffle_9621([1536 x float]* %left_part_0, [1536 x float]* %conv3_output_0, [3072 x float]* %output), !dbg !1709 ; [debug line = 544:2]
  ret void, !dbg !1710                            ; [debug line = 545:1]
}

; [#uses=8]
define internal fastcc void @ShuffleUnit1([6144 x float]* nocapture %input, [2304 x float]* nocapture %conv1_weight, [48 x float]* nocapture %conv1_bias, [432 x float]* nocapture %conv2_weight, [48 x float]* nocapture %conv2_bias, [2304 x float]* nocapture %conv3_weight, [48 x float]* nocapture %conv3_bias, [6144 x float]* nocapture %output) {
meminst.0:
  %left_part_0 = alloca [3072 x float], align 4   ; [#uses=3 type=[3072 x float]*]
  %right_part_0 = alloca [3072 x float], align 4  ; [#uses=3 type=[3072 x float]*]
  call void @llvm.dbg.declare(metadata !{[3072 x float]* %right_part_0}, metadata !1711), !dbg !1716 ; [debug line = 352:8] [debug variable = right_part[0]]
  %conv1_output_0 = alloca [3072 x float], align 4 ; [#uses=3 type=[3072 x float]*]
  call void @llvm.dbg.declare(metadata !{[3072 x float]* %conv1_output_0}, metadata !1717), !dbg !1718 ; [debug line = 353:8] [debug variable = conv1_output[0]]
  %conv2_output_0 = alloca [3072 x float], align 4 ; [#uses=3 type=[3072 x float]*]
  call void @llvm.dbg.declare(metadata !{[3072 x float]* %conv2_output_0}, metadata !1719), !dbg !1720 ; [debug line = 354:8] [debug variable = conv2_output[0]]
  %conv3_output_0 = alloca [3072 x float], align 4 ; [#uses=3 type=[3072 x float]*]
  call void @llvm.dbg.declare(metadata !{[3072 x float]* %conv3_output_0}, metadata !1721), !dbg !1722 ; [debug line = 355:8] [debug variable = conv3_output[0]]
  call void @llvm.dbg.value(metadata !{[6144 x float]* %input}, i64 0, metadata !1723), !dbg !1724 ; [debug line = 342:25] [debug variable = input]
  call void @llvm.dbg.value(metadata !{[2304 x float]* %conv1_weight}, i64 0, metadata !1725), !dbg !1726 ; [debug line = 343:8] [debug variable = conv1_weight]
  call void @llvm.dbg.value(metadata !{[48 x float]* %conv1_bias}, i64 0, metadata !1727), !dbg !1728 ; [debug line = 344:8] [debug variable = conv1_bias]
  call void @llvm.dbg.value(metadata !{[432 x float]* %conv2_weight}, i64 0, metadata !1729), !dbg !1730 ; [debug line = 345:8] [debug variable = conv2_weight]
  call void @llvm.dbg.value(metadata !{[48 x float]* %conv2_bias}, i64 0, metadata !1731), !dbg !1732 ; [debug line = 346:8] [debug variable = conv2_bias]
  call void @llvm.dbg.value(metadata !{[2304 x float]* %conv3_weight}, i64 0, metadata !1733), !dbg !1734 ; [debug line = 347:8] [debug variable = conv3_weight]
  call void @llvm.dbg.value(metadata !{[48 x float]* %conv3_bias}, i64 0, metadata !1735), !dbg !1736 ; [debug line = 348:8] [debug variable = conv3_bias]
  call void @llvm.dbg.value(metadata !{[6144 x float]* %output}, i64 0, metadata !1737), !dbg !1738 ; [debug line = 349:8] [debug variable = output]
  call void @llvm.dbg.declare(metadata !{[3072 x float]* %left_part_0}, metadata !1739), !dbg !1740 ; [debug line = 351:8] [debug variable = left_part[0]]
  br label %meminst5.0

meminst58.0:                                      ; preds = %meminst912.0
  %tmp_137 = icmp eq i6 %invdar6, -17, !dbg !1741 ; [#uses=1 type=i1] [debug line = 351:36]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopName([17 x i8]* @memset_left_part_str) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_137, label %meminst20.0.preheader, label %meminst5.0, !dbg !1741 ; [debug line = 351:36]

meminst20.0.preheader:                            ; preds = %meminst58.0
  br label %meminst20.0, !dbg !1742               ; [debug line = 352:37]

meminst912.0:                                     ; preds = %meminst13.0
  %tmp_136 = icmp eq i3 %invdar10, -1, !dbg !1741 ; [#uses=1 type=i1] [debug line = 351:36]
  %empty_340 = call i32 (...)* @_ssdm_op_SpecLoopName([17 x i8]* @memset_left_part_str) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_136, label %meminst58.0, label %meminst9.0, !dbg !1741 ; [debug line = 351:36]

meminst13.0:                                      ; preds = %meminst9.0, %meminst13.0
  %invdar14 = phi i3 [ 0, %meminst9.0 ], [ %indvarinc, %meminst13.0 ] ; [#uses=3 type=i3]
  %indvarinc = add i3 %invdar14, 1, !dbg !1741    ; [#uses=1 type=i3] [debug line = 351:36]
  %tmp = call i12 @_ssdm_op_BitConcatenate.i12.i6.i3.i3(i6 %invdar6, i3 %invdar10, i3 %invdar14) ; [#uses=1 type=i12]
  %tmp_191 = zext i12 %tmp to i64, !dbg !1741     ; [#uses=1 type=i64] [debug line = 351:36]
  %left_part_0_addr = getelementptr [3072 x float]* %left_part_0, i64 0, i64 %tmp_191, !dbg !1741 ; [#uses=1 type=float*] [debug line = 351:36]
  store float 0.000000e+00, float* %left_part_0_addr, align 4, !dbg !1741 ; [debug line = 351:36]
  %tmp_s = icmp eq i3 %invdar14, -1, !dbg !1741   ; [#uses=1 type=i1] [debug line = 351:36]
  %empty_341 = call i32 (...)* @_ssdm_op_SpecLoopName([17 x i8]* @memset_left_part_str) nounwind ; [#uses=0 type=i32]
  %empty_342 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  br i1 %tmp_s, label %meminst912.0, label %meminst13.0, !dbg !1741 ; [debug line = 351:36]

meminst9.0:                                       ; preds = %meminst5.0, %meminst912.0
  %invdar10 = phi i3 [ 0, %meminst5.0 ], [ %indvarinc11, %meminst912.0 ] ; [#uses=3 type=i3]
  %indvarinc11 = add i3 %invdar10, 1, !dbg !1741  ; [#uses=1 type=i3] [debug line = 351:36]
  %empty_343 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  br label %meminst13.0

meminst5.0:                                       ; preds = %meminst58.0, %meminst.0
  %invdar6 = phi i6 [ 0, %meminst.0 ], [ %indvarinc7, %meminst58.0 ] ; [#uses=3 type=i6]
  %indvarinc7 = add i6 %invdar6, 1, !dbg !1741    ; [#uses=1 type=i6] [debug line = 351:36]
  %empty_344 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) ; [#uses=0 type=i32]
  br label %meminst9.0

meminst2023.0:                                    ; preds = %meminst2427.0
  %tmp_140 = icmp eq i6 %invdar, -17, !dbg !1742  ; [#uses=1 type=i1] [debug line = 352:37]
  %empty_345 = call i32 (...)* @_ssdm_op_SpecLoopName([18 x i8]* @memset_right_part_st) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_140, label %meminst35.0.preheader, label %meminst20.0, !dbg !1742 ; [debug line = 352:37]

meminst35.0.preheader:                            ; preds = %meminst2023.0
  br label %meminst35.0, !dbg !1743               ; [debug line = 353:39]

meminst2427.0:                                    ; preds = %meminst28.0
  %tmp_139 = icmp eq i3 %invdar15, -1, !dbg !1742 ; [#uses=1 type=i1] [debug line = 352:37]
  %empty_346 = call i32 (...)* @_ssdm_op_SpecLoopName([18 x i8]* @memset_right_part_st) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_139, label %meminst2023.0, label %meminst24.0, !dbg !1742 ; [debug line = 352:37]

meminst28.0:                                      ; preds = %meminst24.0, %meminst28.0
  %invdar16 = phi i3 [ 0, %meminst24.0 ], [ %indvarinc17, %meminst28.0 ] ; [#uses=3 type=i3]
  %indvarinc17 = add i3 %invdar16, 1, !dbg !1742  ; [#uses=1 type=i3] [debug line = 352:37]
  %tmp_110 = call i12 @_ssdm_op_BitConcatenate.i12.i6.i3.i3(i6 %invdar, i3 %invdar15, i3 %invdar16) ; [#uses=1 type=i12]
  %tmp_192 = zext i12 %tmp_110 to i64, !dbg !1742 ; [#uses=1 type=i64] [debug line = 352:37]
  %right_part_0_addr = getelementptr [3072 x float]* %right_part_0, i64 0, i64 %tmp_192, !dbg !1742 ; [#uses=1 type=float*] [debug line = 352:37]
  store float 0.000000e+00, float* %right_part_0_addr, align 4, !dbg !1742 ; [debug line = 352:37]
  %tmp_138 = icmp eq i3 %invdar16, -1, !dbg !1742 ; [#uses=1 type=i1] [debug line = 352:37]
  %empty_347 = call i32 (...)* @_ssdm_op_SpecLoopName([18 x i8]* @memset_right_part_st) nounwind ; [#uses=0 type=i32]
  %empty_348 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  br i1 %tmp_138, label %meminst2427.0, label %meminst28.0, !dbg !1742 ; [debug line = 352:37]

meminst24.0:                                      ; preds = %meminst20.0, %meminst2427.0
  %invdar15 = phi i3 [ 0, %meminst20.0 ], [ %indvarinc16, %meminst2427.0 ] ; [#uses=3 type=i3]
  %indvarinc16 = add i3 %invdar15, 1, !dbg !1742  ; [#uses=1 type=i3] [debug line = 352:37]
  %empty_349 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  br label %meminst28.0

meminst20.0:                                      ; preds = %meminst2023.0, %meminst20.0.preheader
  %invdar = phi i6 [ %indvarinc15, %meminst2023.0 ], [ 0, %meminst20.0.preheader ] ; [#uses=3 type=i6]
  %indvarinc15 = add i6 %invdar, 1, !dbg !1742    ; [#uses=1 type=i6] [debug line = 352:37]
  %empty_350 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) ; [#uses=0 type=i32]
  br label %meminst24.0

meminst3538.0:                                    ; preds = %meminst3942.0
  %tmp_143 = icmp eq i6 %invdar17, -17, !dbg !1743 ; [#uses=1 type=i1] [debug line = 353:39]
  %empty_351 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv1_output_s) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_143, label %meminst50.0.preheader, label %meminst35.0, !dbg !1743 ; [debug line = 353:39]

meminst50.0.preheader:                            ; preds = %meminst3538.0
  br label %meminst50.0, !dbg !1744               ; [debug line = 354:39]

meminst3942.0:                                    ; preds = %meminst43.0
  %tmp_142 = icmp eq i3 %invdar18, -1, !dbg !1743 ; [#uses=1 type=i1] [debug line = 353:39]
  %empty_352 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv1_output_s) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_142, label %meminst3538.0, label %meminst39.0, !dbg !1743 ; [debug line = 353:39]

meminst43.0:                                      ; preds = %meminst39.0, %meminst43.0
  %invdar19 = phi i3 [ 0, %meminst39.0 ], [ %indvarinc20, %meminst43.0 ] ; [#uses=3 type=i3]
  %indvarinc20 = add i3 %invdar19, 1, !dbg !1743  ; [#uses=1 type=i3] [debug line = 353:39]
  %tmp_111 = call i12 @_ssdm_op_BitConcatenate.i12.i6.i3.i3(i6 %invdar17, i3 %invdar18, i3 %invdar19) ; [#uses=1 type=i12]
  %tmp_193 = zext i12 %tmp_111 to i64, !dbg !1743 ; [#uses=1 type=i64] [debug line = 353:39]
  %conv1_output_0_addr = getelementptr [3072 x float]* %conv1_output_0, i64 0, i64 %tmp_193, !dbg !1743 ; [#uses=1 type=float*] [debug line = 353:39]
  store float 0.000000e+00, float* %conv1_output_0_addr, align 4, !dbg !1743 ; [debug line = 353:39]
  %tmp_141 = icmp eq i3 %invdar19, -1, !dbg !1743 ; [#uses=1 type=i1] [debug line = 353:39]
  %empty_353 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv1_output_s) nounwind ; [#uses=0 type=i32]
  %empty_354 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  br i1 %tmp_141, label %meminst3942.0, label %meminst43.0, !dbg !1743 ; [debug line = 353:39]

meminst39.0:                                      ; preds = %meminst35.0, %meminst3942.0
  %invdar18 = phi i3 [ 0, %meminst35.0 ], [ %indvarinc19, %meminst3942.0 ] ; [#uses=3 type=i3]
  %indvarinc19 = add i3 %invdar18, 1, !dbg !1743  ; [#uses=1 type=i3] [debug line = 353:39]
  %empty_355 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  br label %meminst43.0

meminst35.0:                                      ; preds = %meminst3538.0, %meminst35.0.preheader
  %invdar17 = phi i6 [ %indvarinc18, %meminst3538.0 ], [ 0, %meminst35.0.preheader ] ; [#uses=3 type=i6]
  %indvarinc18 = add i6 %invdar17, 1, !dbg !1743  ; [#uses=1 type=i6] [debug line = 353:39]
  %empty_356 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) ; [#uses=0 type=i32]
  br label %meminst39.0

meminst5053.0:                                    ; preds = %meminst5457.0
  %tmp_146 = icmp eq i6 %invdar20, -17, !dbg !1744 ; [#uses=1 type=i1] [debug line = 354:39]
  %empty_357 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv2_output_s) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_146, label %meminst66.0.preheader, label %meminst50.0, !dbg !1744 ; [debug line = 354:39]

meminst66.0.preheader:                            ; preds = %meminst5053.0
  br label %meminst66.0, !dbg !1745               ; [debug line = 355:39]

meminst5457.0:                                    ; preds = %meminst59.0
  %tmp_145 = icmp eq i3 %invdar21, -1, !dbg !1744 ; [#uses=1 type=i1] [debug line = 354:39]
  %empty_358 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv2_output_s) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_145, label %meminst5053.0, label %meminst54.0, !dbg !1744 ; [debug line = 354:39]

meminst59.0:                                      ; preds = %meminst54.0, %meminst59.0
  %invdar22 = phi i3 [ 0, %meminst54.0 ], [ %indvarinc23, %meminst59.0 ] ; [#uses=3 type=i3]
  %indvarinc23 = add i3 %invdar22, 1, !dbg !1744  ; [#uses=1 type=i3] [debug line = 354:39]
  %tmp_112 = call i12 @_ssdm_op_BitConcatenate.i12.i6.i3.i3(i6 %invdar20, i3 %invdar21, i3 %invdar22) ; [#uses=1 type=i12]
  %tmp_194 = zext i12 %tmp_112 to i64, !dbg !1744 ; [#uses=1 type=i64] [debug line = 354:39]
  %conv2_output_0_addr = getelementptr [3072 x float]* %conv2_output_0, i64 0, i64 %tmp_194, !dbg !1744 ; [#uses=1 type=float*] [debug line = 354:39]
  store float 0.000000e+00, float* %conv2_output_0_addr, align 4, !dbg !1744 ; [debug line = 354:39]
  %tmp_144 = icmp eq i3 %invdar22, -1, !dbg !1744 ; [#uses=1 type=i1] [debug line = 354:39]
  %empty_359 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv2_output_s) nounwind ; [#uses=0 type=i32]
  %empty_360 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  br i1 %tmp_144, label %meminst5457.0, label %meminst59.0, !dbg !1744 ; [debug line = 354:39]

meminst54.0:                                      ; preds = %meminst50.0, %meminst5457.0
  %invdar21 = phi i3 [ 0, %meminst50.0 ], [ %indvarinc22, %meminst5457.0 ] ; [#uses=3 type=i3]
  %indvarinc22 = add i3 %invdar21, 1, !dbg !1744  ; [#uses=1 type=i3] [debug line = 354:39]
  %empty_361 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  br label %meminst59.0

meminst50.0:                                      ; preds = %meminst5053.0, %meminst50.0.preheader
  %invdar20 = phi i6 [ %indvarinc21, %meminst5053.0 ], [ 0, %meminst50.0.preheader ] ; [#uses=3 type=i6]
  %indvarinc21 = add i6 %invdar20, 1, !dbg !1744  ; [#uses=1 type=i6] [debug line = 354:39]
  %empty_362 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) ; [#uses=0 type=i32]
  br label %meminst54.0

meminst6669.0:                                    ; preds = %meminst7073.0
  %tmp_149 = icmp eq i6 %invdar23, -17, !dbg !1745 ; [#uses=1 type=i1] [debug line = 355:39]
  %empty_363 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv3_output_s) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_149, label %.preheader77.preheader, label %meminst66.0, !dbg !1745 ; [debug line = 355:39]

.preheader77.preheader:                           ; preds = %meminst6669.0
  br label %.preheader77, !dbg !1746              ; [debug line = 358:16]

meminst7073.0:                                    ; preds = %meminst74.0
  %tmp_148 = icmp eq i3 %invdar24, -1, !dbg !1745 ; [#uses=1 type=i1] [debug line = 355:39]
  %empty_364 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv3_output_s) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_148, label %meminst6669.0, label %meminst70.0, !dbg !1745 ; [debug line = 355:39]

meminst74.0:                                      ; preds = %meminst70.0, %meminst74.0
  %invdar25 = phi i3 [ 0, %meminst70.0 ], [ %indvarinc26, %meminst74.0 ] ; [#uses=3 type=i3]
  %indvarinc26 = add i3 %invdar25, 1, !dbg !1745  ; [#uses=1 type=i3] [debug line = 355:39]
  %tmp_113 = call i12 @_ssdm_op_BitConcatenate.i12.i6.i3.i3(i6 %invdar23, i3 %invdar24, i3 %invdar25) ; [#uses=1 type=i12]
  %tmp_195 = zext i12 %tmp_113 to i64, !dbg !1745 ; [#uses=1 type=i64] [debug line = 355:39]
  %conv3_output_0_addr = getelementptr [3072 x float]* %conv3_output_0, i64 0, i64 %tmp_195, !dbg !1745 ; [#uses=1 type=float*] [debug line = 355:39]
  store float 0.000000e+00, float* %conv3_output_0_addr, align 4, !dbg !1745 ; [debug line = 355:39]
  %tmp_147 = icmp eq i3 %invdar25, -1, !dbg !1745 ; [#uses=1 type=i1] [debug line = 355:39]
  %empty_365 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv3_output_s) nounwind ; [#uses=0 type=i32]
  %empty_366 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  br i1 %tmp_147, label %meminst7073.0, label %meminst74.0, !dbg !1745 ; [debug line = 355:39]

meminst70.0:                                      ; preds = %meminst66.0, %meminst7073.0
  %invdar24 = phi i3 [ 0, %meminst66.0 ], [ %indvarinc25, %meminst7073.0 ] ; [#uses=3 type=i3]
  %indvarinc25 = add i3 %invdar24, 1, !dbg !1745  ; [#uses=1 type=i3] [debug line = 355:39]
  %empty_367 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  br label %meminst74.0

meminst66.0:                                      ; preds = %meminst6669.0, %meminst66.0.preheader
  %invdar23 = phi i6 [ %indvarinc24, %meminst6669.0 ], [ 0, %meminst66.0.preheader ] ; [#uses=3 type=i6]
  %indvarinc24 = add i6 %invdar23, 1, !dbg !1745  ; [#uses=1 type=i6] [debug line = 355:39]
  %empty_368 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) ; [#uses=0 type=i32]
  br label %meminst70.0

.preheader77.loopexit:                            ; preds = %.preheader3
  br label %.preheader77

.preheader77:                                     ; preds = %.preheader77.loopexit, %.preheader77.preheader
  %co = phi i6 [ %co_20, %.preheader77.loopexit ], [ 0, %.preheader77.preheader ] ; [#uses=4 type=i6]
  %co_cast = zext i6 %co to i7, !dbg !1746        ; [#uses=1 type=i7] [debug line = 358:16]
  %exitcond2 = icmp eq i6 %co, -16, !dbg !1746    ; [#uses=1 type=i1] [debug line = 358:16]
  %empty_369 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) ; [#uses=0 type=i32]
  %co_20 = add i6 %co, 1, !dbg !1748              ; [#uses=1 type=i6] [debug line = 358:24]
  call void @llvm.dbg.value(metadata !{i6 %co_20}, i64 0, metadata !1749), !dbg !1748 ; [debug line = 358:24] [debug variable = co]
  br i1 %exitcond2, label %1, label %.preheader3.preheader, !dbg !1746 ; [debug line = 358:16]

.preheader3.preheader:                            ; preds = %.preheader77
  %tmp_150 = add i7 %co_cast, 48, !dbg !1750      ; [#uses=1 type=i7] [debug line = 361:5]
  %tmp_196 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_150, i3 0) ; [#uses=1 type=i10]
  %tmp_328_cast = zext i10 %tmp_196 to i11        ; [#uses=1 type=i11]
  %tmp_197 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %co, i3 0) ; [#uses=1 type=i9]
  %tmp_330_cast = zext i9 %tmp_197 to i10, !dbg !1756 ; [#uses=1 type=i10] [debug line = 359:14]
  br label %.preheader3, !dbg !1756               ; [debug line = 359:14]

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i4 [ 0, %.preheader3.preheader ], [ %h_20, %.preheader3.loopexit ] ; [#uses=4 type=i4]
  %exitcond1 = icmp eq i4 %h, -8, !dbg !1756      ; [#uses=1 type=i1] [debug line = 359:14]
  %empty_370 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  %h_20 = add i4 %h, 1, !dbg !1757                ; [#uses=1 type=i4] [debug line = 359:19]
  call void @llvm.dbg.value(metadata !{i4 %h_20}, i64 0, metadata !1758), !dbg !1757 ; [debug line = 359:19] [debug variable = h]
  br i1 %exitcond1, label %.preheader77.loopexit, label %.preheader.preheader, !dbg !1756 ; [debug line = 359:14]

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_151_cast1 = zext i4 %h to i10, !dbg !1750  ; [#uses=1 type=i10] [debug line = 361:5]
  %tmp_151_cast = zext i4 %h to i11, !dbg !1750   ; [#uses=1 type=i11] [debug line = 361:5]
  %tmp_198 = add i11 %tmp_328_cast, %tmp_151_cast, !dbg !1750 ; [#uses=1 type=i11] [debug line = 361:5]
  %tmp_333_cast = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_198, i3 0), !dbg !1759 ; [#uses=1 type=i14] [debug line = 362:5]
  %tmp_199 = add i10 %tmp_330_cast, %tmp_151_cast1, !dbg !1759 ; [#uses=1 type=i10] [debug line = 362:5]
  %tmp_114 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_199, i3 0) ; [#uses=1 type=i13]
  %tmp_336_cast = zext i13 %tmp_114 to i14, !dbg !1760 ; [#uses=1 type=i14] [debug line = 360:17]
  br label %.preheader, !dbg !1760                ; [debug line = 360:17]

.preheader:                                       ; preds = %0, %.preheader.preheader
  %w = phi i4 [ %w_20, %0 ], [ 0, %.preheader.preheader ] ; [#uses=3 type=i4]
  %exitcond = icmp eq i4 %w, -8, !dbg !1760       ; [#uses=1 type=i1] [debug line = 360:17]
  %empty_371 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  %w_20 = add i4 %w, 1, !dbg !1761                ; [#uses=1 type=i4] [debug line = 360:22]
  br i1 %exitcond, label %.preheader3.loopexit, label %0, !dbg !1760 ; [debug line = 360:17]

; <label>:0                                       ; preds = %.preheader
  %tmp_152_cast = zext i4 %w to i14, !dbg !1750   ; [#uses=2 type=i14] [debug line = 361:5]
  %tmp_200 = add i14 %tmp_333_cast, %tmp_152_cast, !dbg !1750 ; [#uses=1 type=i14] [debug line = 361:5]
  %tmp_337_cast = zext i14 %tmp_200 to i64, !dbg !1750 ; [#uses=1 type=i64] [debug line = 361:5]
  %input_addr = getelementptr [6144 x float]* %input, i64 0, i64 %tmp_337_cast, !dbg !1750 ; [#uses=1 type=float*] [debug line = 361:5]
  %tmp_201 = add i14 %tmp_336_cast, %tmp_152_cast, !dbg !1759 ; [#uses=1 type=i14] [debug line = 362:5]
  %tmp_338_cast = zext i14 %tmp_201 to i64, !dbg !1759 ; [#uses=3 type=i64] [debug line = 362:5]
  %input_addr_2 = getelementptr [6144 x float]* %input, i64 0, i64 %tmp_338_cast, !dbg !1759 ; [#uses=1 type=float*] [debug line = 362:5]
  %right_part_0_addr_2 = getelementptr [3072 x float]* %right_part_0, i64 0, i64 %tmp_338_cast, !dbg !1750 ; [#uses=1 type=float*] [debug line = 361:5]
  %left_part_0_addr_2 = getelementptr [3072 x float]* %left_part_0, i64 0, i64 %tmp_338_cast, !dbg !1759 ; [#uses=1 type=float*] [debug line = 362:5]
  %input_load = load float* %input_addr, align 4, !dbg !1750 ; [#uses=1 type=float] [debug line = 361:5]
  store float %input_load, float* %right_part_0_addr_2, align 4, !dbg !1750 ; [debug line = 361:5]
  %input_load_2 = load float* %input_addr_2, align 4, !dbg !1759 ; [#uses=1 type=float] [debug line = 362:5]
  store float %input_load_2, float* %left_part_0_addr_2, align 4, !dbg !1759 ; [debug line = 362:5]
  call void @llvm.dbg.value(metadata !{i4 %w_20}, i64 0, metadata !1762), !dbg !1761 ; [debug line = 360:22] [debug variable = w]
  br label %.preheader, !dbg !1761                ; [debug line = 360:22]

; <label>:1                                       ; preds = %.preheader77
  call fastcc void @subconv_1x1_89([3072 x float]* %right_part_0, [2304 x float]* %conv1_weight, [48 x float]* %conv1_bias, [3072 x float]* %conv1_output_0), !dbg !1763 ; [debug line = 367:2]
  call fastcc void @subconv_3x3_8_no_rel([3072 x float]* %conv1_output_0, [432 x float]* %conv2_weight, [48 x float]* %conv2_bias, [3072 x float]* %conv2_output_0), !dbg !1764 ; [debug line = 371:2]
  call fastcc void @subconv_1x1_89([3072 x float]* %conv2_output_0, [2304 x float]* %conv3_weight, [48 x float]* %conv3_bias, [3072 x float]* %conv3_output_0), !dbg !1765 ; [debug line = 373:2]
  call fastcc void @shuffle_4811([3072 x float]* %left_part_0, [3072 x float]* %conv3_output_0, [6144 x float]* %output), !dbg !1766 ; [debug line = 375:2]
  ret void, !dbg !1767                            ; [debug line = 376:1]
}

; [#uses=3]
define internal fastcc void @ShuffleUnit0([12288 x float]* nocapture %input, [576 x float]* nocapture %conv1_weight, [24 x float]* nocapture %conv1_bias, [216 x float]* nocapture %conv2_weight, [24 x float]* nocapture %conv2_bias, [576 x float]* nocapture %conv3_weight, [24 x float]* nocapture %conv3_bias, [12288 x float]* nocapture %output) {
meminst.0:
  %left_part_0 = alloca [6144 x float], align 4   ; [#uses=3 type=[6144 x float]*]
  %right_part_0 = alloca [6144 x float], align 4  ; [#uses=3 type=[6144 x float]*]
  call void @llvm.dbg.declare(metadata !{[6144 x float]* %right_part_0}, metadata !1768), !dbg !1773 ; [debug line = 180:8] [debug variable = right_part[0]]
  %conv1_output_0 = alloca [6144 x float], align 4 ; [#uses=3 type=[6144 x float]*]
  call void @llvm.dbg.declare(metadata !{[6144 x float]* %conv1_output_0}, metadata !1774), !dbg !1775 ; [debug line = 181:8] [debug variable = conv1_output[0]]
  %conv2_output_0 = alloca [6144 x float], align 4 ; [#uses=3 type=[6144 x float]*]
  call void @llvm.dbg.declare(metadata !{[6144 x float]* %conv2_output_0}, metadata !1776), !dbg !1777 ; [debug line = 182:8] [debug variable = conv2_output[0]]
  %conv3_output_0 = alloca [6144 x float], align 4 ; [#uses=3 type=[6144 x float]*]
  call void @llvm.dbg.declare(metadata !{[6144 x float]* %conv3_output_0}, metadata !1778), !dbg !1779 ; [debug line = 183:8] [debug variable = conv3_output[0]]
  call void @llvm.dbg.value(metadata !{[12288 x float]* %input}, i64 0, metadata !1780), !dbg !1781 ; [debug line = 170:25] [debug variable = input]
  call void @llvm.dbg.value(metadata !{[576 x float]* %conv1_weight}, i64 0, metadata !1782), !dbg !1783 ; [debug line = 171:8] [debug variable = conv1_weight]
  call void @llvm.dbg.value(metadata !{[24 x float]* %conv1_bias}, i64 0, metadata !1784), !dbg !1785 ; [debug line = 172:8] [debug variable = conv1_bias]
  call void @llvm.dbg.value(metadata !{[216 x float]* %conv2_weight}, i64 0, metadata !1786), !dbg !1787 ; [debug line = 173:8] [debug variable = conv2_weight]
  call void @llvm.dbg.value(metadata !{[24 x float]* %conv2_bias}, i64 0, metadata !1788), !dbg !1789 ; [debug line = 174:8] [debug variable = conv2_bias]
  call void @llvm.dbg.value(metadata !{[576 x float]* %conv3_weight}, i64 0, metadata !1790), !dbg !1791 ; [debug line = 175:8] [debug variable = conv3_weight]
  call void @llvm.dbg.value(metadata !{[24 x float]* %conv3_bias}, i64 0, metadata !1792), !dbg !1793 ; [debug line = 176:8] [debug variable = conv3_bias]
  call void @llvm.dbg.value(metadata !{[12288 x float]* %output}, i64 0, metadata !1794), !dbg !1795 ; [debug line = 177:8] [debug variable = output]
  call void @llvm.dbg.declare(metadata !{[6144 x float]* %left_part_0}, metadata !1796), !dbg !1797 ; [debug line = 179:8] [debug variable = left_part[0]]
  br label %meminst5.0

meminst58.0:                                      ; preds = %meminst912.0
  %tmp_154 = icmp eq i5 %invdar6, -9, !dbg !1798  ; [#uses=1 type=i1] [debug line = 179:38]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopName([17 x i8]* @memset_left_part_str) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_154, label %meminst20.0.preheader, label %meminst5.0, !dbg !1798 ; [debug line = 179:38]

meminst20.0.preheader:                            ; preds = %meminst58.0
  br label %meminst20.0, !dbg !1799               ; [debug line = 180:39]

meminst912.0:                                     ; preds = %meminst13.0
  %tmp_153 = icmp eq i4 %invdar10, -1, !dbg !1798 ; [#uses=1 type=i1] [debug line = 179:38]
  %empty_372 = call i32 (...)* @_ssdm_op_SpecLoopName([17 x i8]* @memset_left_part_str) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_153, label %meminst58.0, label %meminst9.0, !dbg !1798 ; [debug line = 179:38]

meminst13.0:                                      ; preds = %meminst9.0, %meminst13.0
  %invdar14 = phi i4 [ 0, %meminst9.0 ], [ %indvarinc15, %meminst13.0 ] ; [#uses=3 type=i4]
  %indvarinc15 = add i4 %invdar14, 1, !dbg !1798  ; [#uses=1 type=i4] [debug line = 179:38]
  %tmp = call i13 @_ssdm_op_BitConcatenate.i13.i5.i4.i4(i5 %invdar6, i4 %invdar10, i4 %invdar14) ; [#uses=1 type=i13]
  %tmp_202 = zext i13 %tmp to i64, !dbg !1798     ; [#uses=1 type=i64] [debug line = 179:38]
  %left_part_0_addr = getelementptr [6144 x float]* %left_part_0, i64 0, i64 %tmp_202, !dbg !1798 ; [#uses=1 type=float*] [debug line = 179:38]
  store float 0.000000e+00, float* %left_part_0_addr, align 4, !dbg !1798 ; [debug line = 179:38]
  %tmp_s = icmp eq i4 %invdar14, -1, !dbg !1798   ; [#uses=1 type=i1] [debug line = 179:38]
  %empty_373 = call i32 (...)* @_ssdm_op_SpecLoopName([17 x i8]* @memset_left_part_str) nounwind ; [#uses=0 type=i32]
  %empty_374 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  br i1 %tmp_s, label %meminst912.0, label %meminst13.0, !dbg !1798 ; [debug line = 179:38]

meminst9.0:                                       ; preds = %meminst5.0, %meminst912.0
  %invdar10 = phi i4 [ 0, %meminst5.0 ], [ %indvarinc11, %meminst912.0 ] ; [#uses=3 type=i4]
  %indvarinc11 = add i4 %invdar10, 1, !dbg !1798  ; [#uses=1 type=i4] [debug line = 179:38]
  %empty_375 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  br label %meminst13.0

meminst5.0:                                       ; preds = %meminst58.0, %meminst.0
  %invdar6 = phi i5 [ 0, %meminst.0 ], [ %indvarinc7, %meminst58.0 ] ; [#uses=3 type=i5]
  %indvarinc7 = add i5 %invdar6, 1, !dbg !1798    ; [#uses=1 type=i5] [debug line = 179:38]
  %empty_376 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) ; [#uses=0 type=i32]
  br label %meminst9.0

meminst2023.0:                                    ; preds = %meminst2427.0
  %tmp_157 = icmp eq i5 %invdar21, -9, !dbg !1799 ; [#uses=1 type=i1] [debug line = 180:39]
  %empty_377 = call i32 (...)* @_ssdm_op_SpecLoopName([18 x i8]* @memset_right_part_st) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_157, label %meminst35.0.preheader, label %meminst20.0, !dbg !1799 ; [debug line = 180:39]

meminst35.0.preheader:                            ; preds = %meminst2023.0
  br label %meminst35.0, !dbg !1800               ; [debug line = 181:41]

meminst2427.0:                                    ; preds = %meminst28.0
  %tmp_156 = icmp eq i4 %invdar25, -1, !dbg !1799 ; [#uses=1 type=i1] [debug line = 180:39]
  %empty_378 = call i32 (...)* @_ssdm_op_SpecLoopName([18 x i8]* @memset_right_part_st) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_156, label %meminst2023.0, label %meminst24.0, !dbg !1799 ; [debug line = 180:39]

meminst28.0:                                      ; preds = %meminst24.0, %meminst28.0
  %invdar = phi i4 [ 0, %meminst24.0 ], [ %indvarinc, %meminst28.0 ] ; [#uses=3 type=i4]
  %indvarinc = add i4 %invdar, 1, !dbg !1799      ; [#uses=1 type=i4] [debug line = 180:39]
  %tmp_115 = call i13 @_ssdm_op_BitConcatenate.i13.i5.i4.i4(i5 %invdar21, i4 %invdar25, i4 %invdar) ; [#uses=1 type=i13]
  %tmp_203 = zext i13 %tmp_115 to i64, !dbg !1799 ; [#uses=1 type=i64] [debug line = 180:39]
  %right_part_0_addr = getelementptr [6144 x float]* %right_part_0, i64 0, i64 %tmp_203, !dbg !1799 ; [#uses=1 type=float*] [debug line = 180:39]
  store float 0.000000e+00, float* %right_part_0_addr, align 4, !dbg !1799 ; [debug line = 180:39]
  %tmp_155 = icmp eq i4 %invdar, -1, !dbg !1799   ; [#uses=1 type=i1] [debug line = 180:39]
  %empty_379 = call i32 (...)* @_ssdm_op_SpecLoopName([18 x i8]* @memset_right_part_st) nounwind ; [#uses=0 type=i32]
  %empty_380 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  br i1 %tmp_155, label %meminst2427.0, label %meminst28.0, !dbg !1799 ; [debug line = 180:39]

meminst24.0:                                      ; preds = %meminst20.0, %meminst2427.0
  %invdar25 = phi i4 [ 0, %meminst20.0 ], [ %indvarinc26, %meminst2427.0 ] ; [#uses=3 type=i4]
  %indvarinc26 = add i4 %invdar25, 1, !dbg !1799  ; [#uses=1 type=i4] [debug line = 180:39]
  %empty_381 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  br label %meminst28.0

meminst20.0:                                      ; preds = %meminst2023.0, %meminst20.0.preheader
  %invdar21 = phi i5 [ %indvarinc22, %meminst2023.0 ], [ 0, %meminst20.0.preheader ] ; [#uses=3 type=i5]
  %indvarinc22 = add i5 %invdar21, 1, !dbg !1799  ; [#uses=1 type=i5] [debug line = 180:39]
  %empty_382 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) ; [#uses=0 type=i32]
  br label %meminst24.0

meminst3538.0:                                    ; preds = %meminst3942.0
  %tmp_160 = icmp eq i5 %invdar26, -9, !dbg !1800 ; [#uses=1 type=i1] [debug line = 181:41]
  %empty_383 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv1_output_s) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_160, label %meminst50.0.preheader, label %meminst35.0, !dbg !1800 ; [debug line = 181:41]

meminst50.0.preheader:                            ; preds = %meminst3538.0
  br label %meminst50.0, !dbg !1801               ; [debug line = 182:41]

meminst3942.0:                                    ; preds = %meminst43.0
  %tmp_159 = icmp eq i4 %invdar27, -1, !dbg !1800 ; [#uses=1 type=i1] [debug line = 181:41]
  %empty_384 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv1_output_s) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_159, label %meminst3538.0, label %meminst39.0, !dbg !1800 ; [debug line = 181:41]

meminst43.0:                                      ; preds = %meminst39.0, %meminst43.0
  %invdar28 = phi i4 [ 0, %meminst39.0 ], [ %indvarinc29, %meminst43.0 ] ; [#uses=3 type=i4]
  %indvarinc29 = add i4 %invdar28, 1, !dbg !1800  ; [#uses=1 type=i4] [debug line = 181:41]
  %tmp_116 = call i13 @_ssdm_op_BitConcatenate.i13.i5.i4.i4(i5 %invdar26, i4 %invdar27, i4 %invdar28) ; [#uses=1 type=i13]
  %tmp_204 = zext i13 %tmp_116 to i64, !dbg !1800 ; [#uses=1 type=i64] [debug line = 181:41]
  %conv1_output_0_addr = getelementptr [6144 x float]* %conv1_output_0, i64 0, i64 %tmp_204, !dbg !1800 ; [#uses=1 type=float*] [debug line = 181:41]
  store float 0.000000e+00, float* %conv1_output_0_addr, align 4, !dbg !1800 ; [debug line = 181:41]
  %tmp_158 = icmp eq i4 %invdar28, -1, !dbg !1800 ; [#uses=1 type=i1] [debug line = 181:41]
  %empty_385 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv1_output_s) nounwind ; [#uses=0 type=i32]
  %empty_386 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  br i1 %tmp_158, label %meminst3942.0, label %meminst43.0, !dbg !1800 ; [debug line = 181:41]

meminst39.0:                                      ; preds = %meminst35.0, %meminst3942.0
  %invdar27 = phi i4 [ 0, %meminst35.0 ], [ %indvarinc28, %meminst3942.0 ] ; [#uses=3 type=i4]
  %indvarinc28 = add i4 %invdar27, 1, !dbg !1800  ; [#uses=1 type=i4] [debug line = 181:41]
  %empty_387 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  br label %meminst43.0

meminst35.0:                                      ; preds = %meminst3538.0, %meminst35.0.preheader
  %invdar26 = phi i5 [ %indvarinc27, %meminst3538.0 ], [ 0, %meminst35.0.preheader ] ; [#uses=3 type=i5]
  %indvarinc27 = add i5 %invdar26, 1, !dbg !1800  ; [#uses=1 type=i5] [debug line = 181:41]
  %empty_388 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) ; [#uses=0 type=i32]
  br label %meminst39.0

meminst5053.0:                                    ; preds = %meminst5457.0
  %tmp_163 = icmp eq i5 %invdar29, -9, !dbg !1801 ; [#uses=1 type=i1] [debug line = 182:41]
  %empty_389 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv2_output_s) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_163, label %meminst66.0.preheader, label %meminst50.0, !dbg !1801 ; [debug line = 182:41]

meminst66.0.preheader:                            ; preds = %meminst5053.0
  br label %meminst66.0, !dbg !1802               ; [debug line = 183:41]

meminst5457.0:                                    ; preds = %meminst59.0
  %tmp_162 = icmp eq i4 %invdar30, -1, !dbg !1801 ; [#uses=1 type=i1] [debug line = 182:41]
  %empty_390 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv2_output_s) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_162, label %meminst5053.0, label %meminst54.0, !dbg !1801 ; [debug line = 182:41]

meminst59.0:                                      ; preds = %meminst54.0, %meminst59.0
  %invdar31 = phi i4 [ 0, %meminst54.0 ], [ %indvarinc32, %meminst59.0 ] ; [#uses=3 type=i4]
  %indvarinc32 = add i4 %invdar31, 1, !dbg !1801  ; [#uses=1 type=i4] [debug line = 182:41]
  %tmp_117 = call i13 @_ssdm_op_BitConcatenate.i13.i5.i4.i4(i5 %invdar29, i4 %invdar30, i4 %invdar31) ; [#uses=1 type=i13]
  %tmp_205 = zext i13 %tmp_117 to i64, !dbg !1801 ; [#uses=1 type=i64] [debug line = 182:41]
  %conv2_output_0_addr = getelementptr [6144 x float]* %conv2_output_0, i64 0, i64 %tmp_205, !dbg !1801 ; [#uses=1 type=float*] [debug line = 182:41]
  store float 0.000000e+00, float* %conv2_output_0_addr, align 4, !dbg !1801 ; [debug line = 182:41]
  %tmp_161 = icmp eq i4 %invdar31, -1, !dbg !1801 ; [#uses=1 type=i1] [debug line = 182:41]
  %empty_391 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv2_output_s) nounwind ; [#uses=0 type=i32]
  %empty_392 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  br i1 %tmp_161, label %meminst5457.0, label %meminst59.0, !dbg !1801 ; [debug line = 182:41]

meminst54.0:                                      ; preds = %meminst50.0, %meminst5457.0
  %invdar30 = phi i4 [ 0, %meminst50.0 ], [ %indvarinc31, %meminst5457.0 ] ; [#uses=3 type=i4]
  %indvarinc31 = add i4 %invdar30, 1, !dbg !1801  ; [#uses=1 type=i4] [debug line = 182:41]
  %empty_393 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  br label %meminst59.0

meminst50.0:                                      ; preds = %meminst5053.0, %meminst50.0.preheader
  %invdar29 = phi i5 [ %indvarinc30, %meminst5053.0 ], [ 0, %meminst50.0.preheader ] ; [#uses=3 type=i5]
  %indvarinc30 = add i5 %invdar29, 1, !dbg !1801  ; [#uses=1 type=i5] [debug line = 182:41]
  %empty_394 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) ; [#uses=0 type=i32]
  br label %meminst54.0

meminst6669.0:                                    ; preds = %meminst7073.0
  %tmp_169 = icmp eq i5 %invdar32, -9, !dbg !1802 ; [#uses=1 type=i1] [debug line = 183:41]
  %empty_395 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv3_output_s) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_169, label %.preheader77.preheader, label %meminst66.0, !dbg !1802 ; [debug line = 183:41]

.preheader77.preheader:                           ; preds = %meminst6669.0
  br label %.preheader77, !dbg !1803              ; [debug line = 185:16]

meminst7073.0:                                    ; preds = %meminst74.0
  %tmp_166 = icmp eq i4 %invdar33, -1, !dbg !1802 ; [#uses=1 type=i1] [debug line = 183:41]
  %empty_396 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv3_output_s) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_166, label %meminst6669.0, label %meminst70.0, !dbg !1802 ; [debug line = 183:41]

meminst74.0:                                      ; preds = %meminst70.0, %meminst74.0
  %invdar34 = phi i4 [ 0, %meminst70.0 ], [ %indvarinc35, %meminst74.0 ] ; [#uses=3 type=i4]
  %indvarinc35 = add i4 %invdar34, 1, !dbg !1802  ; [#uses=1 type=i4] [debug line = 183:41]
  %tmp_118 = call i13 @_ssdm_op_BitConcatenate.i13.i5.i4.i4(i5 %invdar32, i4 %invdar33, i4 %invdar34) ; [#uses=1 type=i13]
  %tmp_206 = zext i13 %tmp_118 to i64, !dbg !1802 ; [#uses=1 type=i64] [debug line = 183:41]
  %conv3_output_0_addr = getelementptr [6144 x float]* %conv3_output_0, i64 0, i64 %tmp_206, !dbg !1802 ; [#uses=1 type=float*] [debug line = 183:41]
  store float 0.000000e+00, float* %conv3_output_0_addr, align 4, !dbg !1802 ; [debug line = 183:41]
  %tmp_165 = icmp eq i4 %invdar34, -1, !dbg !1802 ; [#uses=1 type=i1] [debug line = 183:41]
  %empty_397 = call i32 (...)* @_ssdm_op_SpecLoopName([20 x i8]* @memset_conv3_output_s) nounwind ; [#uses=0 type=i32]
  %empty_398 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  br i1 %tmp_165, label %meminst7073.0, label %meminst74.0, !dbg !1802 ; [debug line = 183:41]

meminst70.0:                                      ; preds = %meminst66.0, %meminst7073.0
  %invdar33 = phi i4 [ 0, %meminst66.0 ], [ %indvarinc34, %meminst7073.0 ] ; [#uses=3 type=i4]
  %indvarinc34 = add i4 %invdar33, 1, !dbg !1802  ; [#uses=1 type=i4] [debug line = 183:41]
  %empty_399 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  br label %meminst74.0

meminst66.0:                                      ; preds = %meminst6669.0, %meminst66.0.preheader
  %invdar32 = phi i5 [ %indvarinc33, %meminst6669.0 ], [ 0, %meminst66.0.preheader ] ; [#uses=3 type=i5]
  %indvarinc33 = add i5 %invdar32, 1, !dbg !1802  ; [#uses=1 type=i5] [debug line = 183:41]
  %empty_400 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) ; [#uses=0 type=i32]
  br label %meminst70.0

.preheader77.loopexit:                            ; preds = %.preheader3
  br label %.preheader77

.preheader77:                                     ; preds = %.preheader77.loopexit, %.preheader77.preheader
  %co = phi i5 [ %co_21, %.preheader77.loopexit ], [ 0, %.preheader77.preheader ] ; [#uses=4 type=i5]
  %co_cast = zext i5 %co to i6, !dbg !1803        ; [#uses=1 type=i6] [debug line = 185:16]
  %exitcond2 = icmp eq i5 %co, -8, !dbg !1803     ; [#uses=1 type=i1] [debug line = 185:16]
  %empty_401 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) ; [#uses=0 type=i32]
  %co_21 = add i5 %co, 1, !dbg !1805              ; [#uses=1 type=i5] [debug line = 185:24]
  call void @llvm.dbg.value(metadata !{i5 %co_21}, i64 0, metadata !1806), !dbg !1805 ; [debug line = 185:24] [debug variable = co]
  br i1 %exitcond2, label %1, label %.preheader3.preheader, !dbg !1803 ; [debug line = 185:16]

.preheader3.preheader:                            ; preds = %.preheader77
  %tmp_164 = add i6 %co_cast, 24, !dbg !1807      ; [#uses=1 type=i6] [debug line = 188:5]
  %tmp_207 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %tmp_164, i4 0) ; [#uses=1 type=i10]
  %tmp_349_cast = zext i10 %tmp_207 to i11        ; [#uses=1 type=i11]
  %tmp_208 = call i9 @_ssdm_op_BitConcatenate.i9.i5.i4(i5 %co, i4 0) ; [#uses=1 type=i9]
  %tmp_351_cast = zext i9 %tmp_208 to i10, !dbg !1813 ; [#uses=1 type=i10] [debug line = 186:14]
  br label %.preheader3, !dbg !1813               ; [debug line = 186:14]

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %h = phi i5 [ 0, %.preheader3.preheader ], [ %h_21, %.preheader3.loopexit ] ; [#uses=4 type=i5]
  %exitcond1 = icmp eq i5 %h, -16, !dbg !1813     ; [#uses=1 type=i1] [debug line = 186:14]
  %empty_402 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  %h_21 = add i5 %h, 1, !dbg !1814                ; [#uses=1 type=i5] [debug line = 186:20]
  call void @llvm.dbg.value(metadata !{i5 %h_21}, i64 0, metadata !1815), !dbg !1814 ; [debug line = 186:20] [debug variable = h]
  br i1 %exitcond1, label %.preheader77.loopexit, label %.preheader.preheader, !dbg !1813 ; [debug line = 186:14]

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_167_cast1 = zext i5 %h to i10, !dbg !1807  ; [#uses=1 type=i10] [debug line = 188:5]
  %tmp_167_cast = zext i5 %h to i11, !dbg !1807   ; [#uses=1 type=i11] [debug line = 188:5]
  %tmp_209 = add i11 %tmp_349_cast, %tmp_167_cast, !dbg !1807 ; [#uses=1 type=i11] [debug line = 188:5]
  %tmp_354_cast = call i15 @_ssdm_op_BitConcatenate.i15.i11.i4(i11 %tmp_209, i4 0), !dbg !1816 ; [#uses=1 type=i15] [debug line = 189:5]
  %tmp_210 = add i10 %tmp_351_cast, %tmp_167_cast1, !dbg !1816 ; [#uses=1 type=i10] [debug line = 189:5]
  %tmp_119 = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_210, i4 0) ; [#uses=1 type=i14]
  %tmp_357_cast = zext i14 %tmp_119 to i15, !dbg !1817 ; [#uses=1 type=i15] [debug line = 187:17]
  br label %.preheader, !dbg !1817                ; [debug line = 187:17]

.preheader:                                       ; preds = %0, %.preheader.preheader
  %w = phi i5 [ %w_21, %0 ], [ 0, %.preheader.preheader ] ; [#uses=3 type=i5]
  %exitcond = icmp eq i5 %w, -16, !dbg !1817      ; [#uses=1 type=i1] [debug line = 187:17]
  %empty_403 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  %w_21 = add i5 %w, 1, !dbg !1818                ; [#uses=1 type=i5] [debug line = 187:23]
  br i1 %exitcond, label %.preheader3.loopexit, label %0, !dbg !1817 ; [debug line = 187:17]

; <label>:0                                       ; preds = %.preheader
  %tmp_168_cast = zext i5 %w to i15, !dbg !1807   ; [#uses=2 type=i15] [debug line = 188:5]
  %tmp_211 = add i15 %tmp_354_cast, %tmp_168_cast, !dbg !1807 ; [#uses=1 type=i15] [debug line = 188:5]
  %tmp_358_cast = zext i15 %tmp_211 to i64, !dbg !1807 ; [#uses=1 type=i64] [debug line = 188:5]
  %input_addr = getelementptr [12288 x float]* %input, i64 0, i64 %tmp_358_cast, !dbg !1807 ; [#uses=1 type=float*] [debug line = 188:5]
  %tmp_212 = add i15 %tmp_357_cast, %tmp_168_cast, !dbg !1816 ; [#uses=1 type=i15] [debug line = 189:5]
  %tmp_359_cast = zext i15 %tmp_212 to i64, !dbg !1816 ; [#uses=3 type=i64] [debug line = 189:5]
  %input_addr_3 = getelementptr [12288 x float]* %input, i64 0, i64 %tmp_359_cast, !dbg !1816 ; [#uses=1 type=float*] [debug line = 189:5]
  %left_part_0_addr_3 = getelementptr [6144 x float]* %left_part_0, i64 0, i64 %tmp_359_cast, !dbg !1816 ; [#uses=1 type=float*] [debug line = 189:5]
  %right_part_0_addr_3 = getelementptr [6144 x float]* %right_part_0, i64 0, i64 %tmp_359_cast, !dbg !1807 ; [#uses=1 type=float*] [debug line = 188:5]
  %input_load = load float* %input_addr, align 4, !dbg !1807 ; [#uses=1 type=float] [debug line = 188:5]
  store float %input_load, float* %right_part_0_addr_3, align 4, !dbg !1807 ; [debug line = 188:5]
  %input_load_3 = load float* %input_addr_3, align 4, !dbg !1816 ; [#uses=1 type=float] [debug line = 189:5]
  store float %input_load_3, float* %left_part_0_addr_3, align 4, !dbg !1816 ; [debug line = 189:5]
  call void @llvm.dbg.value(metadata !{i5 %w_21}, i64 0, metadata !1819), !dbg !1818 ; [debug line = 187:23] [debug variable = w]
  br label %.preheader, !dbg !1818                ; [debug line = 187:23]

; <label>:1                                       ; preds = %.preheader77
  call fastcc void @subconv_1x1_1612([6144 x float]* %right_part_0, [576 x float]* %conv1_weight, [24 x float]* %conv1_bias, [6144 x float]* %conv1_output_0), !dbg !1820 ; [debug line = 194:2]
  call fastcc void @subconv_3x3_16_no_re([6144 x float]* %conv1_output_0, [216 x float]* %conv2_weight, [24 x float]* %conv2_bias, [6144 x float]* %conv2_output_0), !dbg !1821 ; [debug line = 196:2]
  call fastcc void @subconv_1x1_1612([6144 x float]* %conv2_output_0, [576 x float]* %conv3_weight, [24 x float]* %conv3_bias, [6144 x float]* %conv3_output_0), !dbg !1822 ; [debug line = 198:2]
  call fastcc void @shuffle_2415([6144 x float]* %left_part_0, [6144 x float]* %conv3_output_0, [12288 x float]* %output), !dbg !1823 ; [debug line = 200:2]
  ret void, !dbg !1824                            ; [debug line = 201:1]
}

; [#uses=0]
define void @ShuffleNetV2([3072 x float]* %image, [648 x float]* %conv1_weight, [9720 x float]* %shuffle_conv_3x3, [131904 x float]* %shuffle_conv_1x1, [98304 x float]* %conv_last_weight, [5120 x float]* %fc_weight, [3618 x float]* %bias, [1000 x float]* %fc_output) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap([3072 x float]* %image) nounwind, !map !1825
  call void (...)* @_ssdm_op_SpecBitsMap([648 x float]* %conv1_weight) nounwind, !map !1830
  call void (...)* @_ssdm_op_SpecBitsMap([9720 x float]* %shuffle_conv_3x3) nounwind, !map !1835
  call void (...)* @_ssdm_op_SpecBitsMap([131904 x float]* %shuffle_conv_1x1) nounwind, !map !1841
  call void (...)* @_ssdm_op_SpecBitsMap([98304 x float]* %conv_last_weight) nounwind, !map !1847
  call void (...)* @_ssdm_op_SpecBitsMap([5120 x float]* %fc_weight) nounwind, !map !1852
  call void (...)* @_ssdm_op_SpecBitsMap([3618 x float]* %bias) nounwind, !map !1857
  call void (...)* @_ssdm_op_SpecBitsMap([1000 x float]* %fc_output) nounwind, !map !1863
  call void (...)* @_ssdm_op_SpecTopModule([13 x i8]* @ShuffleNetV2_str) nounwind
  call void @llvm.dbg.value(metadata !{[3072 x float]* %image}, i64 0, metadata !1869), !dbg !1875 ; [debug line = 143:25] [debug variable = image]
  call void @llvm.dbg.value(metadata !{[648 x float]* %conv1_weight}, i64 0, metadata !1876), !dbg !1877 ; [debug line = 144:9] [debug variable = conv1_weight]
  call void @llvm.dbg.value(metadata !{[9720 x float]* %shuffle_conv_3x3}, i64 0, metadata !1878), !dbg !1882 ; [debug line = 145:9] [debug variable = shuffle_conv_3x3]
  call void @llvm.dbg.value(metadata !{[131904 x float]* %shuffle_conv_1x1}, i64 0, metadata !1883), !dbg !1887 ; [debug line = 146:9] [debug variable = shuffle_conv_1x1]
  call void @llvm.dbg.value(metadata !{[98304 x float]* %conv_last_weight}, i64 0, metadata !1888), !dbg !1889 ; [debug line = 147:9] [debug variable = conv_last_weight]
  call void @llvm.dbg.value(metadata !{[5120 x float]* %fc_weight}, i64 0, metadata !1890), !dbg !1894 ; [debug line = 148:9] [debug variable = fc_weight]
  call void @llvm.dbg.value(metadata !{[3618 x float]* %bias}, i64 0, metadata !1895), !dbg !1899 ; [debug line = 149:9] [debug variable = bias]
  call void @llvm.dbg.value(metadata !{[1000 x float]* %fc_output}, i64 0, metadata !1900), !dbg !1904 ; [debug line = 150:9] [debug variable = fc_output]
  br label %.loopexit, !dbg !1905                 ; [debug line = 154:20]

.loopexit.loopexit:                               ; preds = %.preheader35
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %co = phi i5 [ 0, %0 ], [ %co_22, %.loopexit.loopexit ] ; [#uses=21 type=i5]
  %co_cast1 = zext i5 %co to i13, !dbg !1905      ; [#uses=4 type=i13] [debug line = 154:20]
  %co_cast2 = zext i5 %co to i12, !dbg !1905      ; [#uses=5 type=i12] [debug line = 154:20]
  %co_cast144_cast = zext i5 %co to i11, !dbg !1905 ; [#uses=8 type=i11] [debug line = 154:20]
  %co_cast143_cast1 = zext i5 %co to i9, !dbg !1905 ; [#uses=3 type=i9] [debug line = 154:20]
  %co_cast143_cast = zext i5 %co to i10, !dbg !1905 ; [#uses=7 type=i10] [debug line = 154:20]
  %co_cast8 = zext i5 %co to i8, !dbg !1905       ; [#uses=3 type=i8] [debug line = 154:20]
  %co_cast138_cast = zext i5 %co to i7, !dbg !1905 ; [#uses=2 type=i7] [debug line = 154:20]
  %co_cast137_cast = zext i5 %co to i6, !dbg !1905 ; [#uses=1 type=i6] [debug line = 154:20]
  %exitcond = icmp eq i5 %co, -8, !dbg !1905      ; [#uses=1 type=i1] [debug line = 154:20]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind ; [#uses=0 type=i32]
  %co_22 = add i5 %co, 1, !dbg !1908              ; [#uses=1 type=i5] [debug line = 154:31]
  call void @llvm.dbg.value(metadata !{i5 %co_22}, i64 0, metadata !1909), !dbg !1908 ; [debug line = 154:31] [debug variable = co]
  br i1 %exitcond, label %.preheader33.preheader, label %.preheader35.preheader, !dbg !1905 ; [debug line = 154:20]

.preheader33.preheader:                           ; preds = %.loopexit
  br label %.preheader33, !dbg !1910              ; [debug line = 202:20]

.preheader35.preheader:                           ; preds = %.loopexit
  %tmp = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %co, i5 0) ; [#uses=1 type=i10]
  %p_shl35_cast = zext i10 %tmp to i11            ; [#uses=1 type=i11]
  %tmp_218 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %co, i3 0) ; [#uses=1 type=i8]
  %p_shl36_cast = zext i8 %tmp_218 to i11, !dbg !1912 ; [#uses=1 type=i11] [debug line = 156:14]
  %tmp_220 = sub i11 %p_shl35_cast, %p_shl36_cast, !dbg !1912 ; [#uses=1 type=i11] [debug line = 156:14]
  %tmp_362_cast = sext i11 %tmp_220 to i12, !dbg !1912 ; [#uses=1 type=i12] [debug line = 156:14]
  %tmp_s = add i6 24, %co_cast137_cast, !dbg !1916 ; [#uses=2 type=i6] [debug line = 157:14]
  %tmp_309 = call i11 @_ssdm_op_BitConcatenate.i11.i6.i5(i6 %tmp_s, i5 0) ; [#uses=1 type=i11]
  %p_shl33_cast = zext i11 %tmp_309 to i12        ; [#uses=1 type=i12]
  %tmp_355 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %tmp_s, i3 0) ; [#uses=1 type=i9]
  %p_shl34_cast = zext i9 %tmp_355 to i12, !dbg !1916 ; [#uses=1 type=i12] [debug line = 157:14]
  %tmp_357 = sub i12 %p_shl33_cast, %p_shl34_cast, !dbg !1916 ; [#uses=1 type=i12] [debug line = 157:14]
  %tmp_368_cast = sext i12 %tmp_357 to i13, !dbg !1916 ; [#uses=1 type=i13] [debug line = 157:14]
  %tmp_170 = add i7 48, %co_cast138_cast, !dbg !1917 ; [#uses=2 type=i7] [debug line = 158:14]
  %tmp_359 = call i12 @_ssdm_op_BitConcatenate.i12.i7.i5(i7 %tmp_170, i5 0) ; [#uses=1 type=i12]
  %p_shl31_cast = zext i12 %tmp_359 to i13        ; [#uses=1 type=i13]
  %tmp_360 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_170, i3 0) ; [#uses=1 type=i10]
  %p_shl32_cast = zext i10 %tmp_360 to i13, !dbg !1917 ; [#uses=1 type=i13] [debug line = 158:14]
  %tmp_362 = sub i13 %p_shl31_cast, %p_shl32_cast, !dbg !1917 ; [#uses=1 type=i13] [debug line = 158:14]
  %tmp_439_cast = sext i13 %tmp_362 to i14, !dbg !1917 ; [#uses=1 type=i14] [debug line = 158:14]
  %tmp_171 = add i7 -56, %co_cast138_cast, !dbg !1918 ; [#uses=2 type=i7] [debug line = 159:14]
  %tmp_363 = call i12 @_ssdm_op_BitConcatenate.i12.i7.i5(i7 %tmp_171, i5 0) ; [#uses=1 type=i12]
  %p_shl29_cast = zext i12 %tmp_363 to i13        ; [#uses=1 type=i13]
  %tmp_364 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_171, i3 0) ; [#uses=1 type=i10]
  %p_shl30_cast = zext i10 %tmp_364 to i13, !dbg !1918 ; [#uses=1 type=i13] [debug line = 159:14]
  %tmp_366 = sub i13 %p_shl29_cast, %p_shl30_cast, !dbg !1918 ; [#uses=1 type=i13] [debug line = 159:14]
  %tmp_442_cast = sext i13 %tmp_366 to i14, !dbg !1918 ; [#uses=1 type=i14] [debug line = 159:14]
  %tmp_367 = call i11 @_ssdm_op_BitConcatenate.i11.i1.i5.i5(i1 true, i5 %co, i5 0) ; [#uses=1 type=i11]
  %tmp_368 = sext i11 %tmp_367 to i12             ; [#uses=1 type=i12]
  %p_shl27_cast = zext i12 %tmp_368 to i13        ; [#uses=1 type=i13]
  %tmp_370 = call i9 @_ssdm_op_BitConcatenate.i9.i1.i5.i3(i1 true, i5 %co, i3 0) ; [#uses=1 type=i9]
  %tmp_371 = sext i9 %tmp_370 to i10              ; [#uses=1 type=i10]
  %p_shl28_cast = zext i10 %tmp_371 to i13, !dbg !1919 ; [#uses=1 type=i13] [debug line = 160:14]
  %tmp_373 = sub i13 %p_shl27_cast, %p_shl28_cast, !dbg !1919 ; [#uses=1 type=i13] [debug line = 160:14]
  %tmp_447_cast = sext i13 %tmp_373 to i14, !dbg !1919 ; [#uses=1 type=i14] [debug line = 160:14]
  %tmp_172 = add i8 120, %co_cast8, !dbg !1920    ; [#uses=2 type=i8] [debug line = 161:14]
  %tmp_375 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_172, i5 0) ; [#uses=1 type=i13]
  %p_shl25_cast = zext i13 %tmp_375 to i14        ; [#uses=1 type=i14]
  %tmp_377 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %tmp_172, i3 0) ; [#uses=1 type=i11]
  %p_shl26_cast = zext i11 %tmp_377 to i14, !dbg !1920 ; [#uses=1 type=i14] [debug line = 161:14]
  %tmp_379 = sub i14 %p_shl25_cast, %p_shl26_cast, !dbg !1920 ; [#uses=1 type=i14] [debug line = 161:14]
  %tmp_450_cast = sext i14 %tmp_379 to i15, !dbg !1920 ; [#uses=1 type=i15] [debug line = 161:14]
  %tmp_173 = add i8 -112, %co_cast8, !dbg !1921   ; [#uses=2 type=i8] [debug line = 162:14]
  %tmp_381 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_173, i5 0) ; [#uses=1 type=i13]
  %p_shl23_cast = zext i13 %tmp_381 to i14        ; [#uses=1 type=i14]
  %tmp_384 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %tmp_173, i3 0) ; [#uses=1 type=i11]
  %p_shl24_cast = zext i11 %tmp_384 to i14, !dbg !1921 ; [#uses=1 type=i14] [debug line = 162:14]
  %tmp_386 = sub i14 %p_shl23_cast, %p_shl24_cast, !dbg !1921 ; [#uses=1 type=i14] [debug line = 162:14]
  %tmp_453_cast = sext i14 %tmp_386 to i15, !dbg !1921 ; [#uses=1 type=i15] [debug line = 162:14]
  %tmp_174 = add i8 -88, %co_cast8, !dbg !1922    ; [#uses=2 type=i8] [debug line = 163:14]
  %tmp_388 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_174, i5 0) ; [#uses=1 type=i13]
  %p_shl21_cast = zext i13 %tmp_388 to i14        ; [#uses=1 type=i14]
  %tmp_390 = call i11 @_ssdm_op_BitConcatenate.i11.i8.i3(i8 %tmp_174, i3 0) ; [#uses=1 type=i11]
  %p_shl22_cast = zext i11 %tmp_390 to i14, !dbg !1922 ; [#uses=1 type=i14] [debug line = 163:14]
  %tmp_392 = sub i14 %p_shl21_cast, %p_shl22_cast, !dbg !1922 ; [#uses=1 type=i14] [debug line = 163:14]
  %tmp_456_cast = sext i14 %tmp_392 to i15, !dbg !1922 ; [#uses=1 type=i15] [debug line = 163:14]
  %tmp_394 = call i12 @_ssdm_op_BitConcatenate.i12.i2.i5.i5(i2 -2, i5 %co, i5 0) ; [#uses=1 type=i12]
  %tmp_395 = sext i12 %tmp_394 to i13             ; [#uses=1 type=i13]
  %p_shl19_cast = zext i13 %tmp_395 to i14        ; [#uses=1 type=i14]
  %tmp_396 = call i10 @_ssdm_op_BitConcatenate.i10.i2.i5.i3(i2 -2, i5 %co, i3 0) ; [#uses=1 type=i10]
  %tmp_397 = sext i10 %tmp_396 to i11             ; [#uses=1 type=i11]
  %p_shl20_cast = zext i11 %tmp_397 to i14, !dbg !1923 ; [#uses=1 type=i14] [debug line = 164:14]
  %tmp_398 = sub i14 %p_shl19_cast, %p_shl20_cast, !dbg !1923 ; [#uses=1 type=i14] [debug line = 164:14]
  %tmp_461_cast = sext i14 %tmp_398 to i15, !dbg !1923 ; [#uses=1 type=i15] [debug line = 164:14]
  %tmp_120 = trunc i5 %co to i1                   ; [#uses=2 type=i1]
  %p_shl1 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_120, i5 0), !dbg !1924 ; [#uses=1 type=i6] [debug line = 167:14]
  %p_shl1_cast = zext i6 %p_shl1 to i7, !dbg !1924 ; [#uses=1 type=i7] [debug line = 167:14]
  %p_shl2 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_120, i3 0), !dbg !1924 ; [#uses=1 type=i4] [debug line = 167:14]
  %p_shl2_cast = zext i4 %p_shl2 to i7, !dbg !1924 ; [#uses=1 type=i7] [debug line = 167:14]
  %tmp_175 = sub i7 %p_shl1_cast, %p_shl2_cast, !dbg !1924 ; [#uses=1 type=i7] [debug line = 167:14]
  %p_lshr_f1_cast = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %co, i32 1, i32 4), !dbg !1924 ; [#uses=1 type=i4] [debug line = 167:14]
  %tmp_186_cast = zext i4 %p_lshr_f1_cast to i7, !dbg !1927 ; [#uses=1 type=i7] [debug line = 189:18]
  %tmp_121 = trunc i5 %co to i2                   ; [#uses=1 type=i2]
  %p_shl = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_121, i5 0), !dbg !1927 ; [#uses=1 type=i7] [debug line = 189:18]
  %p_shl_cast = zext i7 %p_shl to i8, !dbg !1927  ; [#uses=1 type=i8] [debug line = 189:18]
  %tmp_122 = shl i5 %co, 3, !dbg !1927            ; [#uses=1 type=i5] [debug line = 189:18]
  %p_shl3_cast = zext i5 %tmp_122 to i8, !dbg !1927 ; [#uses=1 type=i8] [debug line = 189:18]
  %tmp_176 = sub i8 %p_shl_cast, %p_shl3_cast, !dbg !1927 ; [#uses=1 type=i8] [debug line = 189:18]
  %p_lshr_f_cast = call i3 @_ssdm_op_PartSelect.i3.i5.i32.i32(i5 %co, i32 2, i32 4), !dbg !1927 ; [#uses=1 type=i3] [debug line = 189:18]
  %tmp_189_cast = zext i3 %p_lshr_f_cast to i8, !dbg !1930 ; [#uses=1 type=i8] [debug line = 155:24]
  br label %.preheader35, !dbg !1930              ; [debug line = 155:24]

.preheader35.loopexit:                            ; preds = %.preheader34
  br label %.preheader35

.preheader35:                                     ; preds = %.preheader35.loopexit, %.preheader35.preheader
  %ci = phi i5 [ 0, %.preheader35.preheader ], [ %ci_9, %.preheader35.loopexit ] ; [#uses=12 type=i5]
  %ci_cast = zext i5 %ci to i8, !dbg !1930        ; [#uses=1 type=i8] [debug line = 155:24]
  %ci_cast1 = zext i5 %ci to i7, !dbg !1930       ; [#uses=1 type=i7] [debug line = 155:24]
  %exitcond2 = icmp eq i5 %ci, -8, !dbg !1930     ; [#uses=1 type=i1] [debug line = 155:24]
  %empty_404 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind ; [#uses=0 type=i32]
  %ci_9 = add i5 %ci, 1, !dbg !1931               ; [#uses=1 type=i5] [debug line = 155:34]
  call void @llvm.dbg.value(metadata !{i5 %ci_9}, i64 0, metadata !1932), !dbg !1931 ; [debug line = 155:34] [debug variable = ci]
  br i1 %exitcond2, label %.loopexit.loopexit, label %1, !dbg !1930 ; [debug line = 155:24]

; <label>:1                                       ; preds = %.preheader35
  %tmp_186_cast1 = zext i5 %ci to i18, !dbg !1912 ; [#uses=10 type=i18] [debug line = 156:14]
  %tmp_186_cast2 = zext i5 %ci to i17, !dbg !1912 ; [#uses=6 type=i17] [debug line = 156:14]
  %tmp_186_cast3 = zext i5 %ci to i16, !dbg !1912 ; [#uses=2 type=i16] [debug line = 156:14]
  %tmp_186_cast4 = zext i5 %ci to i19, !dbg !1912 ; [#uses=10 type=i19] [debug line = 156:14]
  %tmp_186_cast5 = zext i5 %ci to i15, !dbg !1912 ; [#uses=4 type=i15] [debug line = 156:14]
  %tmp_186_cast6 = zext i5 %ci to i14, !dbg !1912 ; [#uses=3 type=i14] [debug line = 156:14]
  %tmp_186_cast7 = zext i5 %ci to i13, !dbg !1912 ; [#uses=1 type=i13] [debug line = 156:14]
  %tmp_186_cast8 = zext i5 %ci to i12, !dbg !1912 ; [#uses=1 type=i12] [debug line = 156:14]
  %tmp_410 = add i12 %tmp_186_cast8, %tmp_362_cast, !dbg !1912 ; [#uses=1 type=i12] [debug line = 156:14]
  %tmp_477_cast = sext i12 %tmp_410 to i64, !dbg !1912 ; [#uses=10 type=i64] [debug line = 156:14]
  %shuffle_conv_1x1_add = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_477_cast, !dbg !1912 ; [#uses=1 type=float*] [debug line = 156:14]
  %tmp_411 = add i13 %tmp_186_cast7, %tmp_368_cast, !dbg !1916 ; [#uses=1 type=i13] [debug line = 157:14]
  %tmp_478_cast = sext i13 %tmp_411 to i64, !dbg !1916 ; [#uses=1 type=i64] [debug line = 157:14]
  %shuffle_conv_1x1_add_1 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_478_cast, !dbg !1916 ; [#uses=1 type=float*] [debug line = 157:14]
  %tmp_412 = add i14 %tmp_186_cast6, %tmp_439_cast, !dbg !1917 ; [#uses=1 type=i14] [debug line = 158:14]
  %tmp_479_cast = sext i14 %tmp_412 to i64, !dbg !1917 ; [#uses=1 type=i64] [debug line = 158:14]
  %shuffle_conv_1x1_add_2 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_479_cast, !dbg !1917 ; [#uses=1 type=float*] [debug line = 158:14]
  %tmp_413 = add i14 %tmp_186_cast6, %tmp_442_cast, !dbg !1918 ; [#uses=1 type=i14] [debug line = 159:14]
  %tmp_480_cast = sext i14 %tmp_413 to i64, !dbg !1918 ; [#uses=1 type=i64] [debug line = 159:14]
  %shuffle_conv_1x1_add_3 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_480_cast, !dbg !1918 ; [#uses=1 type=float*] [debug line = 159:14]
  %tmp_414 = add i14 %tmp_186_cast6, %tmp_447_cast, !dbg !1919 ; [#uses=1 type=i14] [debug line = 160:14]
  %tmp_481_cast = sext i14 %tmp_414 to i64, !dbg !1919 ; [#uses=1 type=i64] [debug line = 160:14]
  %shuffle_conv_1x1_add_4 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_481_cast, !dbg !1919 ; [#uses=1 type=float*] [debug line = 160:14]
  %tmp_415 = add i15 %tmp_186_cast5, %tmp_450_cast, !dbg !1920 ; [#uses=1 type=i15] [debug line = 161:14]
  %tmp_482_cast = sext i15 %tmp_415 to i64, !dbg !1920 ; [#uses=1 type=i64] [debug line = 161:14]
  %shuffle_conv_1x1_add_5 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_482_cast, !dbg !1920 ; [#uses=1 type=float*] [debug line = 161:14]
  %tmp_416 = add i15 %tmp_186_cast5, %tmp_453_cast, !dbg !1921 ; [#uses=1 type=i15] [debug line = 162:14]
  %tmp_483_cast = sext i15 %tmp_416 to i64, !dbg !1921 ; [#uses=1 type=i64] [debug line = 162:14]
  %shuffle_conv_1x1_add_6 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_483_cast, !dbg !1921 ; [#uses=1 type=float*] [debug line = 162:14]
  %tmp_417 = add i15 %tmp_186_cast5, %tmp_456_cast, !dbg !1922 ; [#uses=1 type=i15] [debug line = 163:14]
  %tmp_484_cast = sext i15 %tmp_417 to i64, !dbg !1922 ; [#uses=1 type=i64] [debug line = 163:14]
  %shuffle_conv_1x1_add_7 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_484_cast, !dbg !1922 ; [#uses=1 type=float*] [debug line = 163:14]
  %tmp_418 = add i15 %tmp_186_cast5, %tmp_461_cast, !dbg !1923 ; [#uses=1 type=i15] [debug line = 164:14]
  %tmp_485_cast = sext i15 %tmp_418 to i64, !dbg !1923 ; [#uses=1 type=i64] [debug line = 164:14]
  %shuffle_conv_1x1_add_8 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_485_cast, !dbg !1923 ; [#uses=1 type=float*] [debug line = 164:14]
  %ShuffleConvs_0_Shuff = getelementptr [576 x float]* @ShuffleConvs_0_Shuff_7, i64 0, i64 %tmp_477_cast, !dbg !1919 ; [#uses=1 type=float*] [debug line = 160:14]
  %ShuffleConvs_0_Shuff_23 = getelementptr [576 x float]* @ShuffleConvs_0_Shuff_11, i64 0, i64 %tmp_477_cast, !dbg !1921 ; [#uses=1 type=float*] [debug line = 162:14]
  %ShuffleConvs_0_Shuff_24 = getelementptr [576 x float]* @ShuffleConvs_0_Shuff_8, i64 0, i64 %tmp_477_cast, !dbg !1920 ; [#uses=1 type=float*] [debug line = 161:14]
  %ShuffleConvs_0_Downs = getelementptr [576 x float]* @ShuffleConvs_0_Downs_7, i64 0, i64 %tmp_477_cast, !dbg !1912 ; [#uses=1 type=float*] [debug line = 156:14]
  %ShuffleConvs_0_Downs_11 = getelementptr [576 x float]* @ShuffleConvs_0_Downs_8, i64 0, i64 %tmp_477_cast, !dbg !1917 ; [#uses=1 type=float*] [debug line = 158:14]
  %ShuffleConvs_0_Shuff_25 = getelementptr [576 x float]* @ShuffleConvs_0_Shuff_18, i64 0, i64 %tmp_477_cast, !dbg !1923 ; [#uses=1 type=float*] [debug line = 164:14]
  %ShuffleConvs_0_Downs_12 = getelementptr [576 x float]* @ShuffleConvs_0_Downs_10, i64 0, i64 %tmp_477_cast, !dbg !1916 ; [#uses=1 type=float*] [debug line = 157:14]
  %ShuffleConvs_0_Shuff_26 = getelementptr [576 x float]* @ShuffleConvs_0_Shuff_5, i64 0, i64 %tmp_477_cast, !dbg !1918 ; [#uses=1 type=float*] [debug line = 159:14]
  %ShuffleConvs_0_Shuff_27 = getelementptr [576 x float]* @ShuffleConvs_0_Shuff_13, i64 0, i64 %tmp_477_cast, !dbg !1922 ; [#uses=1 type=float*] [debug line = 163:14]
  %shuffle_conv_1x1_loa = load float* %shuffle_conv_1x1_add, align 4, !dbg !1912 ; [#uses=1 type=float] [debug line = 156:14]
  store float %shuffle_conv_1x1_loa, float* %ShuffleConvs_0_Downs, align 4, !dbg !1912 ; [debug line = 156:14]
  %shuffle_conv_1x1_loa_1 = load float* %shuffle_conv_1x1_add_1, align 4, !dbg !1916 ; [#uses=1 type=float] [debug line = 157:14]
  store float %shuffle_conv_1x1_loa_1, float* %ShuffleConvs_0_Downs_12, align 4, !dbg !1916 ; [debug line = 157:14]
  %shuffle_conv_1x1_loa_2 = load float* %shuffle_conv_1x1_add_2, align 4, !dbg !1917 ; [#uses=1 type=float] [debug line = 158:14]
  store float %shuffle_conv_1x1_loa_2, float* %ShuffleConvs_0_Downs_11, align 4, !dbg !1917 ; [debug line = 158:14]
  %shuffle_conv_1x1_loa_3 = load float* %shuffle_conv_1x1_add_3, align 4, !dbg !1918 ; [#uses=1 type=float] [debug line = 159:14]
  store float %shuffle_conv_1x1_loa_3, float* %ShuffleConvs_0_Shuff_26, align 4, !dbg !1918 ; [debug line = 159:14]
  %shuffle_conv_1x1_loa_4 = load float* %shuffle_conv_1x1_add_4, align 4, !dbg !1919 ; [#uses=1 type=float] [debug line = 160:14]
  store float %shuffle_conv_1x1_loa_4, float* %ShuffleConvs_0_Shuff, align 4, !dbg !1919 ; [debug line = 160:14]
  %shuffle_conv_1x1_loa_5 = load float* %shuffle_conv_1x1_add_5, align 4, !dbg !1920 ; [#uses=1 type=float] [debug line = 161:14]
  store float %shuffle_conv_1x1_loa_5, float* %ShuffleConvs_0_Shuff_24, align 4, !dbg !1920 ; [debug line = 161:14]
  %shuffle_conv_1x1_loa_6 = load float* %shuffle_conv_1x1_add_6, align 4, !dbg !1921 ; [#uses=1 type=float] [debug line = 162:14]
  store float %shuffle_conv_1x1_loa_6, float* %ShuffleConvs_0_Shuff_23, align 4, !dbg !1921 ; [debug line = 162:14]
  %shuffle_conv_1x1_loa_7 = load float* %shuffle_conv_1x1_add_7, align 4, !dbg !1922 ; [#uses=1 type=float] [debug line = 163:14]
  store float %shuffle_conv_1x1_loa_7, float* %ShuffleConvs_0_Shuff_27, align 4, !dbg !1922 ; [debug line = 163:14]
  %shuffle_conv_1x1_loa_8 = load float* %shuffle_conv_1x1_add_8, align 4, !dbg !1923 ; [#uses=1 type=float] [debug line = 164:14]
  store float %shuffle_conv_1x1_loa_8, float* %ShuffleConvs_0_Shuff_25, align 4, !dbg !1923 ; [debug line = 164:14]
  %tmp_187 = add i7 %tmp_175, %ci_cast1, !dbg !1924 ; [#uses=1 type=i7] [debug line = 167:14]
  %tmp_188_cast = sext i7 %tmp_187 to i13, !dbg !1933 ; [#uses=1 type=i13] [debug line = 166:27]
  br label %2, !dbg !1933                         ; [debug line = 166:27]

; <label>:2                                       ; preds = %3, %1
  %i = phi i3 [ 0, %1 ], [ %i_1, %3 ]             ; [#uses=3 type=i3]
  %exitcond5 = icmp eq i3 %i, -4, !dbg !1933      ; [#uses=1 type=i1] [debug line = 166:27]
  %empty_405 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind ; [#uses=0 type=i32]
  %i_1 = add i3 %i, 1, !dbg !1934                 ; [#uses=1 type=i3] [debug line = 166:36]
  br i1 %exitcond5, label %.preheader34.preheader, label %3, !dbg !1933 ; [debug line = 166:27]

.preheader34.preheader:                           ; preds = %2
  %tmp_219 = add i8 %tmp_176, %ci_cast, !dbg !1927 ; [#uses=1 type=i8] [debug line = 189:18]
  %tmp_220_cast = sext i8 %tmp_219 to i15, !dbg !1935 ; [#uses=1 type=i15] [debug line = 188:27]
  br label %.preheader34, !dbg !1935              ; [debug line = 188:27]

; <label>:3                                       ; preds = %2
  %tmp_128 = trunc i3 %i to i2                    ; [#uses=4 type=i2]
  %p_shl6 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_128, i5 0), !dbg !1924 ; [#uses=1 type=i7] [debug line = 167:14]
  %p_shl6_cast = zext i7 %p_shl6 to i8, !dbg !1924 ; [#uses=1 type=i8] [debug line = 167:14]
  %p_shl7 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_128, i3 0), !dbg !1924 ; [#uses=1 type=i5] [debug line = 167:14]
  %p_shl7_cast = zext i5 %p_shl7 to i8, !dbg !1924 ; [#uses=1 type=i8] [debug line = 167:14]
  %tmp_221 = sub i8 %p_shl6_cast, %p_shl7_cast, !dbg !1924 ; [#uses=3 type=i8] [debug line = 167:14]
  %tmp_330_cast1 = sext i8 %tmp_221 to i11, !dbg !1924 ; [#uses=7 type=i11] [debug line = 167:14]
  %tmp_330_cast127_cast_1 = sext i8 %tmp_221 to i9, !dbg !1924 ; [#uses=4 type=i9] [debug line = 167:14]
  %tmp_330_cast127_cast = sext i8 %tmp_221 to i10, !dbg !1924 ; [#uses=6 type=i10] [debug line = 167:14]
  %tmp1 = add i9 216, %tmp_330_cast127_cast_1, !dbg !1924 ; [#uses=1 type=i9] [debug line = 167:14]
  %tmp_222 = add i9 %tmp1, %co_cast143_cast1, !dbg !1924 ; [#uses=2 type=i9] [debug line = 167:14]
  %tmp_429 = call i14 @_ssdm_op_BitConcatenate.i14.i9.i5(i9 %tmp_222, i5 0) ; [#uses=1 type=i14]
  %p_shl75_cast = zext i14 %tmp_429 to i15        ; [#uses=1 type=i15]
  %tmp_430 = call i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9 %tmp_222, i3 0) ; [#uses=1 type=i12]
  %p_shl76_cast = zext i12 %tmp_430 to i15, !dbg !1924 ; [#uses=1 type=i15] [debug line = 167:14]
  %tmp_431 = sub i15 %p_shl75_cast, %p_shl76_cast, !dbg !1924 ; [#uses=1 type=i15] [debug line = 167:14]
  %tmp_505_cast2 = sext i15 %tmp_431 to i16, !dbg !1924 ; [#uses=1 type=i16] [debug line = 167:14]
  %tmp_432 = add i16 %tmp_186_cast3, %tmp_505_cast2, !dbg !1924 ; [#uses=1 type=i16] [debug line = 167:14]
  %tmp_506_cast = sext i16 %tmp_432 to i64, !dbg !1924 ; [#uses=1 type=i64] [debug line = 167:14]
  %shuffle_conv_1x1_add_9 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_506_cast, !dbg !1924 ; [#uses=1 type=float*] [debug line = 167:14]
  %shuffle_conv_1x1_loa_9 = load float* %shuffle_conv_1x1_add_9, align 4, !dbg !1924 ; [#uses=1 type=float] [debug line = 167:14]
  %p_shl8 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %tmp_128, i4 0), !dbg !1924 ; [#uses=1 type=i6] [debug line = 167:14]
  %p_shl8_cast = zext i6 %p_shl8 to i7, !dbg !1924 ; [#uses=1 type=i7] [debug line = 167:14]
  %p_shl9 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %tmp_128, i2 0), !dbg !1924 ; [#uses=1 type=i4] [debug line = 167:14]
  %p_shl9_cast = zext i4 %p_shl9 to i7, !dbg !1924 ; [#uses=1 type=i7] [debug line = 167:14]
  %tmp_223 = sub i7 %p_shl8_cast, %p_shl9_cast, !dbg !1924 ; [#uses=1 type=i7] [debug line = 167:14]
  %tmp_224 = add i7 %tmp_223, %tmp_186_cast, !dbg !1924 ; [#uses=2 type=i7] [debug line = 167:14]
  %tmp_433 = call i13 @_ssdm_op_BitConcatenate.i13.i7.i6(i7 %tmp_224, i6 0) ; [#uses=1 type=i13]
  %tmp_434 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_224, i4 0) ; [#uses=1 type=i11]
  %p_shl74_cast = sext i11 %tmp_434 to i13, !dbg !1936 ; [#uses=1 type=i13] [debug line = 185:14]
  %tmp_435 = sub i13 %tmp_433, %p_shl74_cast, !dbg !1936 ; [#uses=1 type=i13] [debug line = 185:14]
  %tmp_436 = add i13 %tmp_188_cast, %tmp_435, !dbg !1936 ; [#uses=1 type=i13] [debug line = 185:14]
  %tmp_514_cast = sext i13 %tmp_436 to i64, !dbg !1936 ; [#uses=19 type=i64] [debug line = 185:14]
  %ShuffleConvs_1_Shuff = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_50, i64 0, i64 %tmp_514_cast, !dbg !1936 ; [#uses=1 type=float*] [debug line = 185:14]
  %ShuffleConvs_1_Shuff_72 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_13, i64 0, i64 %tmp_514_cast, !dbg !1937 ; [#uses=1 type=float*] [debug line = 174:14]
  %ShuffleConvs_1_Shuff_73 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_11, i64 0, i64 %tmp_514_cast, !dbg !1938 ; [#uses=1 type=float*] [debug line = 173:14]
  %ShuffleConvs_1_Shuff_74 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_21, i64 0, i64 %tmp_514_cast, !dbg !1939 ; [#uses=1 type=float*] [debug line = 176:14]
  %ShuffleConvs_1_Shuff_75 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_19, i64 0, i64 %tmp_514_cast, !dbg !1940 ; [#uses=1 type=float*] [debug line = 175:14]
  %ShuffleConvs_1_Shuff_76 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_37, i64 0, i64 %tmp_514_cast, !dbg !1941 ; [#uses=1 type=float*] [debug line = 181:14]
  %ShuffleConvs_1_Shuff_77 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_41, i64 0, i64 %tmp_514_cast, !dbg !1942 ; [#uses=1 type=float*] [debug line = 182:14]
  %ShuffleConvs_1_Shuff_78 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_27, i64 0, i64 %tmp_514_cast, !dbg !1943 ; [#uses=1 type=float*] [debug line = 178:14]
  %ShuffleConvs_1_Shuff_79 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_25, i64 0, i64 %tmp_514_cast, !dbg !1944 ; [#uses=1 type=float*] [debug line = 177:14]
  %ShuffleConvs_1_Shuff_80 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_5, i64 0, i64 %tmp_514_cast, !dbg !1945 ; [#uses=1 type=float*] [debug line = 171:14]
  %ShuffleConvs_1_Shuff_81 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_7, i64 0, i64 %tmp_514_cast, !dbg !1946 ; [#uses=1 type=float*] [debug line = 172:14]
  %ShuffleConvs_1_Downs = getelementptr [2304 x float]* @ShuffleConvs_1_Downs_10, i64 0, i64 %tmp_514_cast, !dbg !1947 ; [#uses=1 type=float*] [debug line = 168:14]
  %ShuffleConvs_1_Shuff_82 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_1, i64 0, i64 %tmp_514_cast, !dbg !1948 ; [#uses=1 type=float*] [debug line = 170:14]
  %ShuffleConvs_1_Shuff_83 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_33, i64 0, i64 %tmp_514_cast, !dbg !1949 ; [#uses=1 type=float*] [debug line = 180:14]
  %ShuffleConvs_1_Shuff_84 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_47, i64 0, i64 %tmp_514_cast, !dbg !1950 ; [#uses=1 type=float*] [debug line = 184:14]
  %ShuffleConvs_1_Shuff_85 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_45, i64 0, i64 %tmp_514_cast, !dbg !1951 ; [#uses=1 type=float*] [debug line = 183:14]
  %ShuffleConvs_1_Downs_11 = getelementptr [2304 x float]* @ShuffleConvs_1_Downs_7, i64 0, i64 %tmp_514_cast, !dbg !1924 ; [#uses=1 type=float*] [debug line = 167:14]
  %ShuffleConvs_1_Downs_12 = getelementptr [2304 x float]* @ShuffleConvs_1_Downs_8, i64 0, i64 %tmp_514_cast, !dbg !1952 ; [#uses=1 type=float*] [debug line = 169:14]
  %ShuffleConvs_1_Shuff_86 = getelementptr [2304 x float]* @ShuffleConvs_1_Shuff_31, i64 0, i64 %tmp_514_cast, !dbg !1953 ; [#uses=1 type=float*] [debug line = 179:14]
  store float %shuffle_conv_1x1_loa_9, float* %ShuffleConvs_1_Downs_11, align 4, !dbg !1924 ; [debug line = 167:14]
  %tmp2 = add i9 -200, %tmp_330_cast127_cast_1, !dbg !1947 ; [#uses=1 type=i9] [debug line = 168:14]
  %tmp_225 = add i9 %tmp2, %co_cast143_cast1, !dbg !1947 ; [#uses=2 type=i9] [debug line = 168:14]
  %tmp_437 = call i14 @_ssdm_op_BitConcatenate.i14.i9.i5(i9 %tmp_225, i5 0) ; [#uses=2 type=i14]
  %p_shl71_cast = zext i14 %tmp_437 to i15        ; [#uses=1 type=i15]
  %tmp_438 = call i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9 %tmp_225, i3 0) ; [#uses=2 type=i12]
  %p_shl72_cast = zext i12 %tmp_438 to i15, !dbg !1947 ; [#uses=1 type=i15] [debug line = 168:14]
  %tmp_439 = sub i15 %p_shl71_cast, %p_shl72_cast, !dbg !1947 ; [#uses=1 type=i15] [debug line = 168:14]
  %tmp_517_cast = sext i15 %tmp_439 to i16, !dbg !1947 ; [#uses=1 type=i16] [debug line = 168:14]
  %tmp_440 = add i16 %tmp_186_cast3, %tmp_517_cast, !dbg !1947 ; [#uses=1 type=i16] [debug line = 168:14]
  %tmp_518_cast = sext i16 %tmp_440 to i64, !dbg !1947 ; [#uses=1 type=i64] [debug line = 168:14]
  %shuffle_conv_1x1_add_10 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_518_cast, !dbg !1947 ; [#uses=1 type=float*] [debug line = 168:14]
  %shuffle_conv_1x1_loa_10 = load float* %shuffle_conv_1x1_add_10, align 4, !dbg !1947 ; [#uses=1 type=float] [debug line = 168:14]
  store float %shuffle_conv_1x1_loa_10, float* %ShuffleConvs_1_Downs, align 4, !dbg !1947 ; [debug line = 168:14]
  %tmp3 = add i9 -104, %tmp_330_cast127_cast_1, !dbg !1952 ; [#uses=2 type=i9] [debug line = 169:14]
  %tmp3_cast = zext i9 %tmp3 to i10, !dbg !1952   ; [#uses=1 type=i10] [debug line = 169:14]
  %tmp_226 = add i10 %tmp3_cast, %co_cast143_cast, !dbg !1952 ; [#uses=2 type=i10] [debug line = 169:14]
  %tmp_441 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_226, i5 0) ; [#uses=1 type=i15]
  %p_shl69_cast = zext i15 %tmp_441 to i16        ; [#uses=1 type=i16]
  %tmp_442 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_226, i3 0) ; [#uses=1 type=i13]
  %p_shl70_cast = zext i13 %tmp_442 to i16, !dbg !1952 ; [#uses=1 type=i16] [debug line = 169:14]
  %tmp_443 = sub i16 %p_shl69_cast, %p_shl70_cast, !dbg !1952 ; [#uses=1 type=i16] [debug line = 169:14]
  %tmp_521_cast = sext i16 %tmp_443 to i17, !dbg !1952 ; [#uses=1 type=i17] [debug line = 169:14]
  %tmp_444 = add i17 %tmp_186_cast2, %tmp_521_cast, !dbg !1952 ; [#uses=1 type=i17] [debug line = 169:14]
  %tmp_522_cast = sext i17 %tmp_444 to i64, !dbg !1952 ; [#uses=1 type=i64] [debug line = 169:14]
  %shuffle_conv_1x1_add_11 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_522_cast, !dbg !1952 ; [#uses=1 type=float*] [debug line = 169:14]
  %shuffle_conv_1x1_loa_11 = load float* %shuffle_conv_1x1_add_11, align 4, !dbg !1952 ; [#uses=1 type=float] [debug line = 169:14]
  store float %shuffle_conv_1x1_loa_11, float* %ShuffleConvs_1_Downs_12, align 4, !dbg !1952 ; [debug line = 169:14]
  %tmp4 = add i10 504, %tmp_330_cast127_cast, !dbg !1948 ; [#uses=1 type=i10] [debug line = 170:14]
  %tmp_227 = add i10 %tmp4, %co_cast143_cast, !dbg !1948 ; [#uses=2 type=i10] [debug line = 170:14]
  %tmp_445 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_227, i5 0) ; [#uses=1 type=i15]
  %p_shl67_cast = zext i15 %tmp_445 to i16        ; [#uses=1 type=i16]
  %tmp_446 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_227, i3 0) ; [#uses=1 type=i13]
  %p_shl68_cast = zext i13 %tmp_446 to i16, !dbg !1948 ; [#uses=1 type=i16] [debug line = 170:14]
  %tmp_447 = sub i16 %p_shl67_cast, %p_shl68_cast, !dbg !1948 ; [#uses=1 type=i16] [debug line = 170:14]
  %tmp_525_cast = sext i16 %tmp_447 to i17, !dbg !1948 ; [#uses=1 type=i17] [debug line = 170:14]
  %tmp_448 = add i17 %tmp_186_cast2, %tmp_525_cast, !dbg !1948 ; [#uses=1 type=i17] [debug line = 170:14]
  %tmp_526_cast = sext i17 %tmp_448 to i64, !dbg !1948 ; [#uses=1 type=i64] [debug line = 170:14]
  %shuffle_conv_1x1_add_12 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_526_cast, !dbg !1948 ; [#uses=1 type=float*] [debug line = 170:14]
  %shuffle_conv_1x1_loa_12 = load float* %shuffle_conv_1x1_add_12, align 4, !dbg !1948 ; [#uses=1 type=float] [debug line = 170:14]
  store float %shuffle_conv_1x1_loa_12, float* %ShuffleConvs_1_Shuff_82, align 4, !dbg !1948 ; [debug line = 170:14]
  %tmp5 = add i10 -424, %tmp_330_cast127_cast, !dbg !1945 ; [#uses=1 type=i10] [debug line = 171:14]
  %tmp_228 = add i10 %tmp5, %co_cast143_cast, !dbg !1945 ; [#uses=2 type=i10] [debug line = 171:14]
  %tmp_449 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_228, i5 0) ; [#uses=1 type=i15]
  %p_shl65_cast = zext i15 %tmp_449 to i16        ; [#uses=1 type=i16]
  %tmp_450 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_228, i3 0) ; [#uses=1 type=i13]
  %p_shl66_cast = zext i13 %tmp_450 to i16, !dbg !1945 ; [#uses=1 type=i16] [debug line = 171:14]
  %tmp_451 = sub i16 %p_shl65_cast, %p_shl66_cast, !dbg !1945 ; [#uses=1 type=i16] [debug line = 171:14]
  %tmp_529_cast = sext i16 %tmp_451 to i17, !dbg !1945 ; [#uses=1 type=i17] [debug line = 171:14]
  %tmp_452 = add i17 %tmp_186_cast2, %tmp_529_cast, !dbg !1945 ; [#uses=1 type=i17] [debug line = 171:14]
  %tmp_530_cast = sext i17 %tmp_452 to i64, !dbg !1945 ; [#uses=1 type=i64] [debug line = 171:14]
  %shuffle_conv_1x1_add_13 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_530_cast, !dbg !1945 ; [#uses=1 type=float*] [debug line = 171:14]
  %shuffle_conv_1x1_loa_13 = load float* %shuffle_conv_1x1_add_13, align 4, !dbg !1945 ; [#uses=1 type=float] [debug line = 171:14]
  store float %shuffle_conv_1x1_loa_13, float* %ShuffleConvs_1_Shuff_80, align 4, !dbg !1945 ; [debug line = 171:14]
  %tmp6 = add i10 -328, %tmp_330_cast127_cast, !dbg !1946 ; [#uses=1 type=i10] [debug line = 172:14]
  %tmp_229 = add i10 %tmp6, %co_cast143_cast, !dbg !1946 ; [#uses=2 type=i10] [debug line = 172:14]
  %tmp_453 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_229, i5 0) ; [#uses=1 type=i15]
  %p_shl63_cast = zext i15 %tmp_453 to i16        ; [#uses=1 type=i16]
  %tmp_454 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_229, i3 0) ; [#uses=1 type=i13]
  %p_shl64_cast = zext i13 %tmp_454 to i16, !dbg !1946 ; [#uses=1 type=i16] [debug line = 172:14]
  %tmp_455 = sub i16 %p_shl63_cast, %p_shl64_cast, !dbg !1946 ; [#uses=1 type=i16] [debug line = 172:14]
  %tmp_533_cast = sext i16 %tmp_455 to i17, !dbg !1946 ; [#uses=1 type=i17] [debug line = 172:14]
  %tmp_456 = add i17 %tmp_186_cast2, %tmp_533_cast, !dbg !1946 ; [#uses=1 type=i17] [debug line = 172:14]
  %tmp_534_cast = sext i17 %tmp_456 to i64, !dbg !1946 ; [#uses=1 type=i64] [debug line = 172:14]
  %shuffle_conv_1x1_add_14 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_534_cast, !dbg !1946 ; [#uses=1 type=float*] [debug line = 172:14]
  %shuffle_conv_1x1_loa_14 = load float* %shuffle_conv_1x1_add_14, align 4, !dbg !1946 ; [#uses=1 type=float] [debug line = 172:14]
  store float %shuffle_conv_1x1_loa_14, float* %ShuffleConvs_1_Shuff_81, align 4, !dbg !1946 ; [debug line = 172:14]
  %tmp7 = add i10 -232, %tmp_330_cast127_cast, !dbg !1938 ; [#uses=1 type=i10] [debug line = 173:14]
  %tmp_230 = add i10 %tmp7, %co_cast143_cast, !dbg !1938 ; [#uses=2 type=i10] [debug line = 173:14]
  %tmp_457 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_230, i5 0) ; [#uses=1 type=i15]
  %p_shl61_cast = zext i15 %tmp_457 to i16        ; [#uses=1 type=i16]
  %tmp_458 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_230, i3 0) ; [#uses=1 type=i13]
  %p_shl62_cast = zext i13 %tmp_458 to i16, !dbg !1938 ; [#uses=1 type=i16] [debug line = 173:14]
  %tmp_459 = sub i16 %p_shl61_cast, %p_shl62_cast, !dbg !1938 ; [#uses=1 type=i16] [debug line = 173:14]
  %tmp_537_cast = sext i16 %tmp_459 to i17, !dbg !1938 ; [#uses=1 type=i17] [debug line = 173:14]
  %tmp_460 = add i17 %tmp_186_cast2, %tmp_537_cast, !dbg !1938 ; [#uses=1 type=i17] [debug line = 173:14]
  %tmp_538_cast = sext i17 %tmp_460 to i64, !dbg !1938 ; [#uses=1 type=i64] [debug line = 173:14]
  %shuffle_conv_1x1_add_15 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_538_cast, !dbg !1938 ; [#uses=1 type=float*] [debug line = 173:14]
  %shuffle_conv_1x1_loa_15 = load float* %shuffle_conv_1x1_add_15, align 4, !dbg !1938 ; [#uses=1 type=float] [debug line = 173:14]
  store float %shuffle_conv_1x1_loa_15, float* %ShuffleConvs_1_Shuff_73, align 4, !dbg !1938 ; [debug line = 173:14]
  %tmp8 = add i9 -136, %tmp_330_cast127_cast_1, !dbg !1937 ; [#uses=1 type=i9] [debug line = 174:14]
  %tmp_234 = add i9 %tmp8, %co_cast143_cast1, !dbg !1937 ; [#uses=2 type=i9] [debug line = 174:14]
  %tmp_461 = call i14 @_ssdm_op_BitConcatenate.i14.i9.i5(i9 %tmp_234, i5 0) ; [#uses=1 type=i14]
  %tmp_462 = sext i14 %tmp_461 to i15             ; [#uses=1 type=i15]
  %p_shl59_cast = zext i15 %tmp_462 to i16        ; [#uses=1 type=i16]
  %tmp_463 = call i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9 %tmp_234, i3 0) ; [#uses=1 type=i12]
  %tmp_464 = sext i12 %tmp_463 to i13             ; [#uses=1 type=i13]
  %p_shl60_cast = zext i13 %tmp_464 to i16, !dbg !1937 ; [#uses=1 type=i16] [debug line = 174:14]
  %tmp_465 = sub i16 %p_shl59_cast, %p_shl60_cast, !dbg !1937 ; [#uses=1 type=i16] [debug line = 174:14]
  %tmp_543_cast = sext i16 %tmp_465 to i17, !dbg !1937 ; [#uses=1 type=i17] [debug line = 174:14]
  %tmp_466 = add i17 %tmp_186_cast2, %tmp_543_cast, !dbg !1937 ; [#uses=1 type=i17] [debug line = 174:14]
  %tmp_544_cast = sext i17 %tmp_466 to i64, !dbg !1937 ; [#uses=1 type=i64] [debug line = 174:14]
  %shuffle_conv_1x1_add_16 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_544_cast, !dbg !1937 ; [#uses=1 type=float*] [debug line = 174:14]
  %shuffle_conv_1x1_loa_16 = load float* %shuffle_conv_1x1_add_16, align 4, !dbg !1937 ; [#uses=1 type=float] [debug line = 174:14]
  store float %shuffle_conv_1x1_loa_16, float* %ShuffleConvs_1_Shuff_72, align 4, !dbg !1937 ; [debug line = 174:14]
  %tmp9 = add i11 984, %tmp_330_cast1, !dbg !1940 ; [#uses=1 type=i11] [debug line = 175:14]
  %tmp_239 = add i11 %tmp9, %co_cast144_cast, !dbg !1940 ; [#uses=2 type=i11] [debug line = 175:14]
  %tmp_467 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_239, i5 0) ; [#uses=1 type=i16]
  %p_shl57_cast = zext i16 %tmp_467 to i17        ; [#uses=1 type=i17]
  %tmp_468 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_239, i3 0) ; [#uses=1 type=i14]
  %p_shl58_cast = zext i14 %tmp_468 to i17, !dbg !1940 ; [#uses=1 type=i17] [debug line = 175:14]
  %tmp_469 = sub i17 %p_shl57_cast, %p_shl58_cast, !dbg !1940 ; [#uses=1 type=i17] [debug line = 175:14]
  %tmp_547_cast = sext i17 %tmp_469 to i18, !dbg !1940 ; [#uses=1 type=i18] [debug line = 175:14]
  %tmp_470 = add i18 %tmp_186_cast1, %tmp_547_cast, !dbg !1940 ; [#uses=1 type=i18] [debug line = 175:14]
  %tmp_548_cast = sext i18 %tmp_470 to i64, !dbg !1940 ; [#uses=1 type=i64] [debug line = 175:14]
  %shuffle_conv_1x1_add_17 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_548_cast, !dbg !1940 ; [#uses=1 type=float*] [debug line = 175:14]
  %shuffle_conv_1x1_loa_17 = load float* %shuffle_conv_1x1_add_17, align 4, !dbg !1940 ; [#uses=1 type=float] [debug line = 175:14]
  store float %shuffle_conv_1x1_loa_17, float* %ShuffleConvs_1_Shuff_75, align 4, !dbg !1940 ; [debug line = 175:14]
  %tmp10 = add i11 -968, %tmp_330_cast1, !dbg !1939 ; [#uses=1 type=i11] [debug line = 176:14]
  %tmp_244 = add i11 %tmp10, %co_cast144_cast, !dbg !1939 ; [#uses=2 type=i11] [debug line = 176:14]
  %tmp_471 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_244, i5 0) ; [#uses=1 type=i16]
  %p_shl55_cast = zext i16 %tmp_471 to i17        ; [#uses=1 type=i17]
  %tmp_472 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_244, i3 0) ; [#uses=1 type=i14]
  %p_shl56_cast = zext i14 %tmp_472 to i17, !dbg !1939 ; [#uses=1 type=i17] [debug line = 176:14]
  %tmp_473 = sub i17 %p_shl55_cast, %p_shl56_cast, !dbg !1939 ; [#uses=1 type=i17] [debug line = 176:14]
  %tmp_551_cast = sext i17 %tmp_473 to i18, !dbg !1939 ; [#uses=1 type=i18] [debug line = 176:14]
  %tmp_474 = add i18 %tmp_186_cast1, %tmp_551_cast, !dbg !1939 ; [#uses=1 type=i18] [debug line = 176:14]
  %tmp_552_cast = sext i18 %tmp_474 to i64, !dbg !1939 ; [#uses=1 type=i64] [debug line = 176:14]
  %shuffle_conv_1x1_add_18 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_552_cast, !dbg !1939 ; [#uses=1 type=float*] [debug line = 176:14]
  %shuffle_conv_1x1_loa_18 = load float* %shuffle_conv_1x1_add_18, align 4, !dbg !1939 ; [#uses=1 type=float] [debug line = 176:14]
  store float %shuffle_conv_1x1_loa_18, float* %ShuffleConvs_1_Shuff_74, align 4, !dbg !1939 ; [debug line = 176:14]
  %tmp11 = add i11 -872, %tmp_330_cast1, !dbg !1944 ; [#uses=1 type=i11] [debug line = 177:14]
  %tmp_247 = add i11 %tmp11, %co_cast144_cast, !dbg !1944 ; [#uses=2 type=i11] [debug line = 177:14]
  %tmp_475 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_247, i5 0) ; [#uses=1 type=i16]
  %p_shl53_cast = zext i16 %tmp_475 to i17        ; [#uses=1 type=i17]
  %tmp_476 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_247, i3 0) ; [#uses=1 type=i14]
  %p_shl54_cast = zext i14 %tmp_476 to i17, !dbg !1944 ; [#uses=1 type=i17] [debug line = 177:14]
  %tmp_477 = sub i17 %p_shl53_cast, %p_shl54_cast, !dbg !1944 ; [#uses=1 type=i17] [debug line = 177:14]
  %tmp_555_cast = sext i17 %tmp_477 to i18, !dbg !1944 ; [#uses=1 type=i18] [debug line = 177:14]
  %tmp_478 = add i18 %tmp_186_cast1, %tmp_555_cast, !dbg !1944 ; [#uses=1 type=i18] [debug line = 177:14]
  %tmp_556_cast = sext i18 %tmp_478 to i64, !dbg !1944 ; [#uses=1 type=i64] [debug line = 177:14]
  %shuffle_conv_1x1_add_19 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_556_cast, !dbg !1944 ; [#uses=1 type=float*] [debug line = 177:14]
  %shuffle_conv_1x1_loa_19 = load float* %shuffle_conv_1x1_add_19, align 4, !dbg !1944 ; [#uses=1 type=float] [debug line = 177:14]
  store float %shuffle_conv_1x1_loa_19, float* %ShuffleConvs_1_Shuff_79, align 4, !dbg !1944 ; [debug line = 177:14]
  %tmp12 = add i11 -776, %tmp_330_cast1, !dbg !1943 ; [#uses=1 type=i11] [debug line = 178:14]
  %tmp_250 = add i11 %tmp12, %co_cast144_cast, !dbg !1943 ; [#uses=2 type=i11] [debug line = 178:14]
  %tmp_479 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_250, i5 0) ; [#uses=1 type=i16]
  %p_shl51_cast = zext i16 %tmp_479 to i17        ; [#uses=1 type=i17]
  %tmp_480 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_250, i3 0) ; [#uses=1 type=i14]
  %p_shl52_cast = zext i14 %tmp_480 to i17, !dbg !1943 ; [#uses=1 type=i17] [debug line = 178:14]
  %tmp_481 = sub i17 %p_shl51_cast, %p_shl52_cast, !dbg !1943 ; [#uses=1 type=i17] [debug line = 178:14]
  %tmp_559_cast = sext i17 %tmp_481 to i18, !dbg !1943 ; [#uses=1 type=i18] [debug line = 178:14]
  %tmp_482 = add i18 %tmp_186_cast1, %tmp_559_cast, !dbg !1943 ; [#uses=1 type=i18] [debug line = 178:14]
  %tmp_560_cast = sext i18 %tmp_482 to i64, !dbg !1943 ; [#uses=1 type=i64] [debug line = 178:14]
  %shuffle_conv_1x1_add_20 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_560_cast, !dbg !1943 ; [#uses=1 type=float*] [debug line = 178:14]
  %shuffle_conv_1x1_loa_20 = load float* %shuffle_conv_1x1_add_20, align 4, !dbg !1943 ; [#uses=1 type=float] [debug line = 178:14]
  store float %shuffle_conv_1x1_loa_20, float* %ShuffleConvs_1_Shuff_78, align 4, !dbg !1943 ; [debug line = 178:14]
  %tmp13 = add i11 -680, %tmp_330_cast1, !dbg !1953 ; [#uses=1 type=i11] [debug line = 179:14]
  %tmp_253 = add i11 %tmp13, %co_cast144_cast, !dbg !1953 ; [#uses=2 type=i11] [debug line = 179:14]
  %tmp_483 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_253, i5 0) ; [#uses=1 type=i16]
  %p_shl49_cast = zext i16 %tmp_483 to i17        ; [#uses=1 type=i17]
  %tmp_484 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_253, i3 0) ; [#uses=1 type=i14]
  %p_shl50_cast = zext i14 %tmp_484 to i17, !dbg !1953 ; [#uses=1 type=i17] [debug line = 179:14]
  %tmp_485 = sub i17 %p_shl49_cast, %p_shl50_cast, !dbg !1953 ; [#uses=1 type=i17] [debug line = 179:14]
  %tmp_563_cast = sext i17 %tmp_485 to i18, !dbg !1953 ; [#uses=1 type=i18] [debug line = 179:14]
  %tmp_486 = add i18 %tmp_186_cast1, %tmp_563_cast, !dbg !1953 ; [#uses=1 type=i18] [debug line = 179:14]
  %tmp_564_cast = sext i18 %tmp_486 to i64, !dbg !1953 ; [#uses=1 type=i64] [debug line = 179:14]
  %shuffle_conv_1x1_add_21 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_564_cast, !dbg !1953 ; [#uses=1 type=float*] [debug line = 179:14]
  %shuffle_conv_1x1_loa_21 = load float* %shuffle_conv_1x1_add_21, align 4, !dbg !1953 ; [#uses=1 type=float] [debug line = 179:14]
  store float %shuffle_conv_1x1_loa_21, float* %ShuffleConvs_1_Shuff_86, align 4, !dbg !1953 ; [debug line = 179:14]
  %tmp14 = add i11 -584, %tmp_330_cast1, !dbg !1949 ; [#uses=1 type=i11] [debug line = 180:14]
  %tmp_256 = add i11 %tmp14, %co_cast144_cast, !dbg !1949 ; [#uses=2 type=i11] [debug line = 180:14]
  %tmp_487 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_256, i5 0) ; [#uses=1 type=i16]
  %p_shl47_cast = zext i16 %tmp_487 to i17        ; [#uses=1 type=i17]
  %tmp_488 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_256, i3 0) ; [#uses=1 type=i14]
  %p_shl48_cast = zext i14 %tmp_488 to i17, !dbg !1949 ; [#uses=1 type=i17] [debug line = 180:14]
  %tmp_489 = sub i17 %p_shl47_cast, %p_shl48_cast, !dbg !1949 ; [#uses=1 type=i17] [debug line = 180:14]
  %tmp_567_cast = sext i17 %tmp_489 to i18, !dbg !1949 ; [#uses=1 type=i18] [debug line = 180:14]
  %tmp_490 = add i18 %tmp_186_cast1, %tmp_567_cast, !dbg !1949 ; [#uses=1 type=i18] [debug line = 180:14]
  %tmp_568_cast = sext i18 %tmp_490 to i64, !dbg !1949 ; [#uses=1 type=i64] [debug line = 180:14]
  %shuffle_conv_1x1_add_22 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_568_cast, !dbg !1949 ; [#uses=1 type=float*] [debug line = 180:14]
  %shuffle_conv_1x1_loa_22 = load float* %shuffle_conv_1x1_add_22, align 4, !dbg !1949 ; [#uses=1 type=float] [debug line = 180:14]
  store float %shuffle_conv_1x1_loa_22, float* %ShuffleConvs_1_Shuff_83, align 4, !dbg !1949 ; [debug line = 180:14]
  %tmp15 = add i11 -488, %tmp_330_cast1, !dbg !1941 ; [#uses=1 type=i11] [debug line = 181:14]
  %tmp_259 = add i11 %tmp15, %co_cast144_cast, !dbg !1941 ; [#uses=2 type=i11] [debug line = 181:14]
  %tmp_491 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_259, i5 0) ; [#uses=1 type=i16]
  %p_shl45_cast = zext i16 %tmp_491 to i17        ; [#uses=1 type=i17]
  %tmp_492 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_259, i3 0) ; [#uses=1 type=i14]
  %p_shl46_cast = zext i14 %tmp_492 to i17, !dbg !1941 ; [#uses=1 type=i17] [debug line = 181:14]
  %tmp_493 = sub i17 %p_shl45_cast, %p_shl46_cast, !dbg !1941 ; [#uses=1 type=i17] [debug line = 181:14]
  %tmp_571_cast = sext i17 %tmp_493 to i18, !dbg !1941 ; [#uses=1 type=i18] [debug line = 181:14]
  %tmp_494 = add i18 %tmp_186_cast1, %tmp_571_cast, !dbg !1941 ; [#uses=1 type=i18] [debug line = 181:14]
  %tmp_572_cast = sext i18 %tmp_494 to i64, !dbg !1941 ; [#uses=1 type=i64] [debug line = 181:14]
  %shuffle_conv_1x1_add_23 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_572_cast, !dbg !1941 ; [#uses=1 type=float*] [debug line = 181:14]
  %shuffle_conv_1x1_loa_23 = load float* %shuffle_conv_1x1_add_23, align 4, !dbg !1941 ; [#uses=1 type=float] [debug line = 181:14]
  store float %shuffle_conv_1x1_loa_23, float* %ShuffleConvs_1_Shuff_76, align 4, !dbg !1941 ; [debug line = 181:14]
  %tmp16 = add i10 -392, %tmp_330_cast127_cast, !dbg !1942 ; [#uses=1 type=i10] [debug line = 182:14]
  %tmp_262 = add i10 %tmp16, %co_cast143_cast, !dbg !1942 ; [#uses=2 type=i10] [debug line = 182:14]
  %tmp_495 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_262, i5 0) ; [#uses=1 type=i15]
  %tmp_496 = sext i15 %tmp_495 to i16             ; [#uses=1 type=i16]
  %p_shl43_cast = zext i16 %tmp_496 to i17        ; [#uses=1 type=i17]
  %tmp_497 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_262, i3 0) ; [#uses=1 type=i13]
  %tmp_498 = sext i13 %tmp_497 to i14             ; [#uses=1 type=i14]
  %p_shl44_cast = zext i14 %tmp_498 to i17, !dbg !1942 ; [#uses=1 type=i17] [debug line = 182:14]
  %tmp_499 = sub i17 %p_shl43_cast, %p_shl44_cast, !dbg !1942 ; [#uses=1 type=i17] [debug line = 182:14]
  %tmp_577_cast = sext i17 %tmp_499 to i18, !dbg !1942 ; [#uses=1 type=i18] [debug line = 182:14]
  %tmp_500 = add i18 %tmp_186_cast1, %tmp_577_cast, !dbg !1942 ; [#uses=1 type=i18] [debug line = 182:14]
  %tmp_578_cast = sext i18 %tmp_500 to i64, !dbg !1942 ; [#uses=1 type=i64] [debug line = 182:14]
  %shuffle_conv_1x1_add_24 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_578_cast, !dbg !1942 ; [#uses=1 type=float*] [debug line = 182:14]
  %shuffle_conv_1x1_loa_24 = load float* %shuffle_conv_1x1_add_24, align 4, !dbg !1942 ; [#uses=1 type=float] [debug line = 182:14]
  store float %shuffle_conv_1x1_loa_24, float* %ShuffleConvs_1_Shuff_77, align 4, !dbg !1942 ; [debug line = 182:14]
  %tmp17 = add i10 -296, %tmp_330_cast127_cast, !dbg !1951 ; [#uses=1 type=i10] [debug line = 183:14]
  %tmp_265 = add i10 %tmp17, %co_cast143_cast, !dbg !1951 ; [#uses=2 type=i10] [debug line = 183:14]
  %tmp_501 = call i15 @_ssdm_op_BitConcatenate.i15.i10.i5(i10 %tmp_265, i5 0) ; [#uses=1 type=i15]
  %tmp_502 = sext i15 %tmp_501 to i16             ; [#uses=1 type=i16]
  %p_shl41_cast = zext i16 %tmp_502 to i17        ; [#uses=1 type=i17]
  %tmp_503 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_265, i3 0) ; [#uses=1 type=i13]
  %tmp_504 = sext i13 %tmp_503 to i14             ; [#uses=1 type=i14]
  %p_shl42_cast = zext i14 %tmp_504 to i17, !dbg !1951 ; [#uses=1 type=i17] [debug line = 183:14]
  %tmp_505 = sub i17 %p_shl41_cast, %p_shl42_cast, !dbg !1951 ; [#uses=1 type=i17] [debug line = 183:14]
  %tmp_583_cast = sext i17 %tmp_505 to i18, !dbg !1951 ; [#uses=1 type=i18] [debug line = 183:14]
  %tmp_506 = add i18 %tmp_186_cast1, %tmp_583_cast, !dbg !1951 ; [#uses=1 type=i18] [debug line = 183:14]
  %tmp_584_cast = sext i18 %tmp_506 to i64, !dbg !1951 ; [#uses=1 type=i64] [debug line = 183:14]
  %shuffle_conv_1x1_add_25 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_584_cast, !dbg !1951 ; [#uses=1 type=float*] [debug line = 183:14]
  %shuffle_conv_1x1_loa_25 = load float* %shuffle_conv_1x1_add_25, align 4, !dbg !1951 ; [#uses=1 type=float] [debug line = 183:14]
  store float %shuffle_conv_1x1_loa_25, float* %ShuffleConvs_1_Shuff_85, align 4, !dbg !1951 ; [debug line = 183:14]
  %tmp_507 = sext i14 %tmp_437 to i16             ; [#uses=1 type=i16]
  %p_shl39_cast = zext i16 %tmp_507 to i17        ; [#uses=1 type=i17]
  %tmp_508 = sext i12 %tmp_438 to i14             ; [#uses=1 type=i14]
  %p_shl40_cast = zext i14 %tmp_508 to i17, !dbg !1950 ; [#uses=1 type=i17] [debug line = 184:14]
  %tmp_509 = sub i17 %p_shl39_cast, %p_shl40_cast, !dbg !1950 ; [#uses=1 type=i17] [debug line = 184:14]
  %tmp_589_cast = sext i17 %tmp_509 to i18, !dbg !1950 ; [#uses=1 type=i18] [debug line = 184:14]
  %tmp_510 = add i18 %tmp_186_cast1, %tmp_589_cast, !dbg !1950 ; [#uses=1 type=i18] [debug line = 184:14]
  %tmp_590_cast = sext i18 %tmp_510 to i64, !dbg !1950 ; [#uses=1 type=i64] [debug line = 184:14]
  %shuffle_conv_1x1_add_26 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_590_cast, !dbg !1950 ; [#uses=1 type=float*] [debug line = 184:14]
  %shuffle_conv_1x1_loa_26 = load float* %shuffle_conv_1x1_add_26, align 4, !dbg !1950 ; [#uses=1 type=float] [debug line = 184:14]
  store float %shuffle_conv_1x1_loa_26, float* %ShuffleConvs_1_Shuff_84, align 4, !dbg !1950 ; [debug line = 184:14]
  %tmp19_cast1 = sext i9 %tmp3 to i11, !dbg !1936 ; [#uses=1 type=i11] [debug line = 185:14]
  %tmp19_cast = zext i11 %tmp19_cast1 to i12, !dbg !1936 ; [#uses=1 type=i12] [debug line = 185:14]
  %tmp_268 = add i12 %tmp19_cast, %co_cast2, !dbg !1936 ; [#uses=2 type=i12] [debug line = 185:14]
  %tmp_511 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_268, i5 0) ; [#uses=1 type=i17]
  %p_shl37_cast = zext i17 %tmp_511 to i18        ; [#uses=1 type=i18]
  %tmp_512 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_268, i3 0) ; [#uses=1 type=i15]
  %p_shl38_cast = zext i15 %tmp_512 to i18, !dbg !1936 ; [#uses=1 type=i18] [debug line = 185:14]
  %tmp_513 = sub i18 %p_shl37_cast, %p_shl38_cast, !dbg !1936 ; [#uses=1 type=i18] [debug line = 185:14]
  %tmp_593_cast = sext i18 %tmp_513 to i19, !dbg !1936 ; [#uses=1 type=i19] [debug line = 185:14]
  %tmp_514 = add i19 %tmp_186_cast4, %tmp_593_cast, !dbg !1936 ; [#uses=1 type=i19] [debug line = 185:14]
  %tmp_594_cast = sext i19 %tmp_514 to i64, !dbg !1936 ; [#uses=1 type=i64] [debug line = 185:14]
  %shuffle_conv_1x1_add_27 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_594_cast, !dbg !1936 ; [#uses=1 type=float*] [debug line = 185:14]
  %shuffle_conv_1x1_loa_27 = load float* %shuffle_conv_1x1_add_27, align 4, !dbg !1936 ; [#uses=1 type=float] [debug line = 185:14]
  store float %shuffle_conv_1x1_loa_27, float* %ShuffleConvs_1_Shuff, align 4, !dbg !1936 ; [debug line = 185:14]
  call void @llvm.dbg.value(metadata !{i3 %i_1}, i64 0, metadata !1954), !dbg !1934 ; [debug line = 166:36] [debug variable = i]
  br label %2, !dbg !1934                         ; [debug line = 166:36]

.preheader34:                                     ; preds = %4, %.preheader34.preheader
  %i1 = phi i5 [ %i_3, %4 ], [ 0, %.preheader34.preheader ] ; [#uses=4 type=i5]
  %exitcond11 = icmp eq i5 %i1, -16, !dbg !1935   ; [#uses=1 type=i1] [debug line = 188:27]
  %empty_406 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind ; [#uses=0 type=i32]
  %i_3 = add i5 %i1, 1, !dbg !1955                ; [#uses=1 type=i5] [debug line = 188:36]
  br i1 %exitcond11, label %.preheader35.loopexit, label %4, !dbg !1935 ; [debug line = 188:27]

; <label>:4                                       ; preds = %.preheader34
  %tmp_130 = trunc i5 %i1 to i4                   ; [#uses=2 type=i4]
  %p_shl3 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_130, i5 0), !dbg !1927 ; [#uses=1 type=i9] [debug line = 189:18]
  %p_shl12_cast = zext i9 %p_shl3 to i10, !dbg !1927 ; [#uses=1 type=i10] [debug line = 189:18]
  %p_shl12 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_130, i3 0), !dbg !1927 ; [#uses=2 type=i7] [debug line = 189:18]
  %p_shl13_cast1 = zext i7 %p_shl12 to i8, !dbg !1927 ; [#uses=1 type=i8] [debug line = 189:18]
  %p_shl13_cast = zext i7 %p_shl12 to i10, !dbg !1927 ; [#uses=1 type=i10] [debug line = 189:18]
  %tmp_310 = sub i10 %p_shl12_cast, %p_shl13_cast, !dbg !1927 ; [#uses=3 type=i10] [debug line = 189:18]
  %tmp_438_cast1 = sext i10 %tmp_310 to i13, !dbg !1927 ; [#uses=4 type=i13] [debug line = 189:18]
  %tmp_438_cast = sext i10 %tmp_310 to i12, !dbg !1927 ; [#uses=4 type=i12] [debug line = 189:18]
  %tmp_438_cast_cast = sext i10 %tmp_310 to i11, !dbg !1927 ; [#uses=1 type=i11] [debug line = 189:18]
  %tmp20 = add i12 2040, %tmp_438_cast, !dbg !1927 ; [#uses=1 type=i12] [debug line = 189:18]
  %tmp_311 = add i12 %tmp20, %co_cast2, !dbg !1927 ; [#uses=2 type=i12] [debug line = 189:18]
  %tmp_520 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_311, i5 0) ; [#uses=1 type=i17]
  %p_shl95_cast = zext i17 %tmp_520 to i18        ; [#uses=1 type=i18]
  %tmp_521 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_311, i3 0) ; [#uses=1 type=i15]
  %p_shl96_cast = zext i15 %tmp_521 to i18, !dbg !1927 ; [#uses=1 type=i18] [debug line = 189:18]
  %tmp_522 = sub i18 %p_shl95_cast, %p_shl96_cast, !dbg !1927 ; [#uses=1 type=i18] [debug line = 189:18]
  %tmp_606_cast = sext i18 %tmp_522 to i19, !dbg !1927 ; [#uses=1 type=i19] [debug line = 189:18]
  %tmp_523 = add i19 %tmp_186_cast4, %tmp_606_cast, !dbg !1927 ; [#uses=1 type=i19] [debug line = 189:18]
  %tmp_607_cast = sext i19 %tmp_523 to i64, !dbg !1927 ; [#uses=1 type=i64] [debug line = 189:18]
  %shuffle_conv_1x1_add_28 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_607_cast, !dbg !1927 ; [#uses=1 type=float*] [debug line = 189:18]
  %shuffle_conv_1x1_loa_28 = load float* %shuffle_conv_1x1_add_28, align 4, !dbg !1927 ; [#uses=1 type=float] [debug line = 189:18]
  %tmp_131 = shl i5 %i1, 1, !dbg !1927            ; [#uses=1 type=i5] [debug line = 189:18]
  %p_shl14_cast = zext i5 %tmp_131 to i8, !dbg !1927 ; [#uses=1 type=i8] [debug line = 189:18]
  %tmp_312 = sub i8 %p_shl13_cast1, %p_shl14_cast, !dbg !1927 ; [#uses=1 type=i8] [debug line = 189:18]
  %tmp_313 = add i8 %tmp_312, %tmp_189_cast, !dbg !1927 ; [#uses=2 type=i8] [debug line = 189:18]
  %tmp_524 = call i15 @_ssdm_op_BitConcatenate.i15.i8.i7(i8 %tmp_313, i7 0) ; [#uses=1 type=i15]
  %tmp_525 = call i13 @_ssdm_op_BitConcatenate.i13.i8.i5(i8 %tmp_313, i5 0) ; [#uses=1 type=i13]
  %p_shl94_cast = sext i13 %tmp_525 to i15, !dbg !1956 ; [#uses=1 type=i15] [debug line = 196:18]
  %tmp_526 = sub i15 %tmp_524, %p_shl94_cast, !dbg !1956 ; [#uses=1 type=i15] [debug line = 196:18]
  %tmp_527 = add i15 %tmp_220_cast, %tmp_526, !dbg !1956 ; [#uses=1 type=i15] [debug line = 196:18]
  %tmp_614_cast = sext i15 %tmp_527 to i64, !dbg !1956 ; [#uses=9 type=i64] [debug line = 196:18]
  %ShuffleConvs_2_Shuff = getelementptr [9216 x float]* @ShuffleConvs_2_Shuff_13, i64 0, i64 %tmp_614_cast, !dbg !1956 ; [#uses=1 type=float*] [debug line = 196:18]
  %ShuffleConvs_2_Shuff_23 = getelementptr [9216 x float]* @ShuffleConvs_2_Shuff_5, i64 0, i64 %tmp_614_cast, !dbg !1957 ; [#uses=1 type=float*] [debug line = 192:18]
  %ShuffleConvs_2_Downs = getelementptr [9216 x float]* @ShuffleConvs_2_Downs_10, i64 0, i64 %tmp_614_cast, !dbg !1958 ; [#uses=1 type=float*] [debug line = 190:18]
  %ShuffleConvs_2_Shuff_24 = getelementptr [9216 x float]* @ShuffleConvs_2_Shuff_8, i64 0, i64 %tmp_614_cast, !dbg !1959 ; [#uses=1 type=float*] [debug line = 194:18]
  %ShuffleConvs_2_Downs_11 = getelementptr [9216 x float]* @ShuffleConvs_2_Downs_8, i64 0, i64 %tmp_614_cast, !dbg !1960 ; [#uses=1 type=float*] [debug line = 191:18]
  %ShuffleConvs_2_Downs_12 = getelementptr [9216 x float]* @ShuffleConvs_2_Downs_7, i64 0, i64 %tmp_614_cast, !dbg !1927 ; [#uses=1 type=float*] [debug line = 189:18]
  %ShuffleConvs_2_Shuff_25 = getelementptr [9216 x float]* @ShuffleConvs_2_Shuff_18, i64 0, i64 %tmp_614_cast, !dbg !1961 ; [#uses=1 type=float*] [debug line = 197:18]
  %ShuffleConvs_2_Shuff_26 = getelementptr [9216 x float]* @ShuffleConvs_2_Shuff_7, i64 0, i64 %tmp_614_cast, !dbg !1962 ; [#uses=1 type=float*] [debug line = 193:18]
  %ShuffleConvs_2_Shuff_27 = getelementptr [9216 x float]* @ShuffleConvs_2_Shuff_11, i64 0, i64 %tmp_614_cast, !dbg !1963 ; [#uses=1 type=float*] [debug line = 195:18]
  store float %shuffle_conv_1x1_loa_28, float* %ShuffleConvs_2_Downs_12, align 4, !dbg !1927 ; [debug line = 189:18]
  %tmp21 = add i12 -1672, %tmp_438_cast, !dbg !1958 ; [#uses=1 type=i12] [debug line = 190:18]
  %tmp_314 = add i12 %tmp21, %co_cast2, !dbg !1958 ; [#uses=2 type=i12] [debug line = 190:18]
  %tmp_528 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_314, i5 0) ; [#uses=1 type=i17]
  %p_shl91_cast = zext i17 %tmp_528 to i18        ; [#uses=1 type=i18]
  %tmp_529 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_314, i3 0) ; [#uses=1 type=i15]
  %p_shl92_cast = zext i15 %tmp_529 to i18, !dbg !1958 ; [#uses=1 type=i18] [debug line = 190:18]
  %tmp_530 = sub i18 %p_shl91_cast, %p_shl92_cast, !dbg !1958 ; [#uses=1 type=i18] [debug line = 190:18]
  %tmp_617_cast = sext i18 %tmp_530 to i19, !dbg !1958 ; [#uses=1 type=i19] [debug line = 190:18]
  %tmp_531 = add i19 %tmp_186_cast4, %tmp_617_cast, !dbg !1958 ; [#uses=1 type=i19] [debug line = 190:18]
  %tmp_618_cast = sext i19 %tmp_531 to i64, !dbg !1958 ; [#uses=1 type=i64] [debug line = 190:18]
  %shuffle_conv_1x1_add_29 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_618_cast, !dbg !1958 ; [#uses=1 type=float*] [debug line = 190:18]
  %shuffle_conv_1x1_loa_29 = load float* %shuffle_conv_1x1_add_29, align 4, !dbg !1958 ; [#uses=1 type=float] [debug line = 190:18]
  store float %shuffle_conv_1x1_loa_29, float* %ShuffleConvs_2_Downs, align 4, !dbg !1958 ; [debug line = 190:18]
  %tmp22 = add i12 -1288, %tmp_438_cast, !dbg !1960 ; [#uses=1 type=i12] [debug line = 191:18]
  %tmp_315 = add i12 %tmp22, %co_cast2, !dbg !1960 ; [#uses=2 type=i12] [debug line = 191:18]
  %tmp_532 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_315, i5 0) ; [#uses=1 type=i17]
  %p_shl89_cast = zext i17 %tmp_532 to i18        ; [#uses=1 type=i18]
  %tmp_533 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_315, i3 0) ; [#uses=1 type=i15]
  %p_shl90_cast = zext i15 %tmp_533 to i18, !dbg !1960 ; [#uses=1 type=i18] [debug line = 191:18]
  %tmp_534 = sub i18 %p_shl89_cast, %p_shl90_cast, !dbg !1960 ; [#uses=1 type=i18] [debug line = 191:18]
  %tmp_621_cast = sext i18 %tmp_534 to i19, !dbg !1960 ; [#uses=1 type=i19] [debug line = 191:18]
  %tmp_535 = add i19 %tmp_186_cast4, %tmp_621_cast, !dbg !1960 ; [#uses=1 type=i19] [debug line = 191:18]
  %tmp_622_cast = sext i19 %tmp_535 to i64, !dbg !1960 ; [#uses=1 type=i64] [debug line = 191:18]
  %shuffle_conv_1x1_add_30 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_622_cast, !dbg !1960 ; [#uses=1 type=float*] [debug line = 191:18]
  %shuffle_conv_1x1_loa_30 = load float* %shuffle_conv_1x1_add_30, align 4, !dbg !1960 ; [#uses=1 type=float] [debug line = 191:18]
  store float %shuffle_conv_1x1_loa_30, float* %ShuffleConvs_2_Downs_11, align 4, !dbg !1960 ; [debug line = 191:18]
  %tmp23 = add i12 -904, %tmp_438_cast, !dbg !1957 ; [#uses=1 type=i12] [debug line = 192:18]
  %tmp_316 = add i12 %tmp23, %co_cast2, !dbg !1957 ; [#uses=2 type=i12] [debug line = 192:18]
  %tmp_536 = call i17 @_ssdm_op_BitConcatenate.i17.i12.i5(i12 %tmp_316, i5 0) ; [#uses=1 type=i17]
  %p_shl87_cast = zext i17 %tmp_536 to i18        ; [#uses=1 type=i18]
  %tmp_537 = call i15 @_ssdm_op_BitConcatenate.i15.i12.i3(i12 %tmp_316, i3 0) ; [#uses=1 type=i15]
  %p_shl88_cast = zext i15 %tmp_537 to i18, !dbg !1957 ; [#uses=1 type=i18] [debug line = 192:18]
  %tmp_538 = sub i18 %p_shl87_cast, %p_shl88_cast, !dbg !1957 ; [#uses=1 type=i18] [debug line = 192:18]
  %tmp_625_cast = sext i18 %tmp_538 to i19, !dbg !1957 ; [#uses=1 type=i19] [debug line = 192:18]
  %tmp_539 = add i19 %tmp_186_cast4, %tmp_625_cast, !dbg !1957 ; [#uses=1 type=i19] [debug line = 192:18]
  %tmp_626_cast = sext i19 %tmp_539 to i64, !dbg !1957 ; [#uses=1 type=i64] [debug line = 192:18]
  %shuffle_conv_1x1_add_31 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_626_cast, !dbg !1957 ; [#uses=1 type=float*] [debug line = 192:18]
  %shuffle_conv_1x1_loa_31 = load float* %shuffle_conv_1x1_add_31, align 4, !dbg !1957 ; [#uses=1 type=float] [debug line = 192:18]
  store float %shuffle_conv_1x1_loa_31, float* %ShuffleConvs_2_Shuff_23, align 4, !dbg !1957 ; [debug line = 192:18]
  %tmp24 = add i11 -520, %tmp_438_cast_cast, !dbg !1962 ; [#uses=1 type=i11] [debug line = 193:18]
  %tmp_317 = add i11 %tmp24, %co_cast144_cast, !dbg !1962 ; [#uses=2 type=i11] [debug line = 193:18]
  %tmp_540 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %tmp_317, i5 0) ; [#uses=1 type=i16]
  %tmp_541 = sext i16 %tmp_540 to i17             ; [#uses=1 type=i17]
  %p_shl85_cast = zext i17 %tmp_541 to i18        ; [#uses=1 type=i18]
  %tmp_542 = call i14 @_ssdm_op_BitConcatenate.i14.i11.i3(i11 %tmp_317, i3 0) ; [#uses=1 type=i14]
  %tmp_543 = sext i14 %tmp_542 to i15             ; [#uses=1 type=i15]
  %p_shl86_cast = zext i15 %tmp_543 to i18, !dbg !1962 ; [#uses=1 type=i18] [debug line = 193:18]
  %tmp_544 = sub i18 %p_shl85_cast, %p_shl86_cast, !dbg !1962 ; [#uses=1 type=i18] [debug line = 193:18]
  %tmp_631_cast = sext i18 %tmp_544 to i19, !dbg !1962 ; [#uses=1 type=i19] [debug line = 193:18]
  %tmp_545 = add i19 %tmp_186_cast4, %tmp_631_cast, !dbg !1962 ; [#uses=1 type=i19] [debug line = 193:18]
  %tmp_632_cast = sext i19 %tmp_545 to i64, !dbg !1962 ; [#uses=1 type=i64] [debug line = 193:18]
  %shuffle_conv_1x1_add_32 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_632_cast, !dbg !1962 ; [#uses=1 type=float*] [debug line = 193:18]
  %shuffle_conv_1x1_loa_32 = load float* %shuffle_conv_1x1_add_32, align 4, !dbg !1962 ; [#uses=1 type=float] [debug line = 193:18]
  store float %shuffle_conv_1x1_loa_32, float* %ShuffleConvs_2_Shuff_26, align 4, !dbg !1962 ; [debug line = 193:18]
  %tmp25 = add i13 3960, %tmp_438_cast1, !dbg !1959 ; [#uses=1 type=i13] [debug line = 194:18]
  %tmp_318 = add i13 %tmp25, %co_cast1, !dbg !1959 ; [#uses=2 type=i13] [debug line = 194:18]
  %tmp_546 = call i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13 %tmp_318, i5 0) ; [#uses=1 type=i18]
  %p_shl83_cast = zext i18 %tmp_546 to i19        ; [#uses=1 type=i19]
  %tmp_547 = call i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13 %tmp_318, i3 0) ; [#uses=1 type=i16]
  %p_shl84_cast = zext i16 %tmp_547 to i19, !dbg !1959 ; [#uses=1 type=i19] [debug line = 194:18]
  %tmp_548 = sub i19 %p_shl83_cast, %p_shl84_cast, !dbg !1959 ; [#uses=1 type=i19] [debug line = 194:18]
  %tmp_549 = add i19 %tmp_186_cast4, %tmp_548, !dbg !1959 ; [#uses=1 type=i19] [debug line = 194:18]
  %tmp_636_cast = sext i19 %tmp_549 to i64, !dbg !1959 ; [#uses=1 type=i64] [debug line = 194:18]
  %shuffle_conv_1x1_add_33 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_636_cast, !dbg !1959 ; [#uses=1 type=float*] [debug line = 194:18]
  %shuffle_conv_1x1_loa_33 = load float* %shuffle_conv_1x1_add_33, align 4, !dbg !1959 ; [#uses=1 type=float] [debug line = 194:18]
  store float %shuffle_conv_1x1_loa_33, float* %ShuffleConvs_2_Shuff_24, align 4, !dbg !1959 ; [debug line = 194:18]
  %tmp26 = add i13 -3848, %tmp_438_cast1, !dbg !1963 ; [#uses=1 type=i13] [debug line = 195:18]
  %tmp_319 = add i13 %tmp26, %co_cast1, !dbg !1963 ; [#uses=2 type=i13] [debug line = 195:18]
  %tmp_550 = call i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13 %tmp_319, i5 0) ; [#uses=1 type=i18]
  %p_shl81_cast = zext i18 %tmp_550 to i19        ; [#uses=1 type=i19]
  %tmp_551 = call i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13 %tmp_319, i3 0) ; [#uses=1 type=i16]
  %p_shl82_cast = zext i16 %tmp_551 to i19, !dbg !1963 ; [#uses=1 type=i19] [debug line = 195:18]
  %tmp_552 = sub i19 %p_shl81_cast, %p_shl82_cast, !dbg !1963 ; [#uses=1 type=i19] [debug line = 195:18]
  %tmp_553 = add i19 %tmp_186_cast4, %tmp_552, !dbg !1963 ; [#uses=1 type=i19] [debug line = 195:18]
  %tmp_640_cast = sext i19 %tmp_553 to i64, !dbg !1963 ; [#uses=1 type=i64] [debug line = 195:18]
  %shuffle_conv_1x1_add_34 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_640_cast, !dbg !1963 ; [#uses=1 type=float*] [debug line = 195:18]
  %shuffle_conv_1x1_loa_34 = load float* %shuffle_conv_1x1_add_34, align 4, !dbg !1963 ; [#uses=1 type=float] [debug line = 195:18]
  store float %shuffle_conv_1x1_loa_34, float* %ShuffleConvs_2_Shuff_27, align 4, !dbg !1963 ; [debug line = 195:18]
  %tmp27 = add i13 -3464, %tmp_438_cast1, !dbg !1956 ; [#uses=1 type=i13] [debug line = 196:18]
  %tmp_320 = add i13 %tmp27, %co_cast1, !dbg !1956 ; [#uses=2 type=i13] [debug line = 196:18]
  %tmp_554 = call i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13 %tmp_320, i5 0) ; [#uses=1 type=i18]
  %p_shl79_cast = zext i18 %tmp_554 to i19        ; [#uses=1 type=i19]
  %tmp_555 = call i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13 %tmp_320, i3 0) ; [#uses=1 type=i16]
  %p_shl80_cast = zext i16 %tmp_555 to i19, !dbg !1956 ; [#uses=1 type=i19] [debug line = 196:18]
  %tmp_556 = sub i19 %p_shl79_cast, %p_shl80_cast, !dbg !1956 ; [#uses=1 type=i19] [debug line = 196:18]
  %tmp_557 = add i19 %tmp_186_cast4, %tmp_556, !dbg !1956 ; [#uses=1 type=i19] [debug line = 196:18]
  %tmp_644_cast = sext i19 %tmp_557 to i64, !dbg !1956 ; [#uses=1 type=i64] [debug line = 196:18]
  %shuffle_conv_1x1_add_35 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_644_cast, !dbg !1956 ; [#uses=1 type=float*] [debug line = 196:18]
  %shuffle_conv_1x1_loa_35 = load float* %shuffle_conv_1x1_add_35, align 4, !dbg !1956 ; [#uses=1 type=float] [debug line = 196:18]
  store float %shuffle_conv_1x1_loa_35, float* %ShuffleConvs_2_Shuff, align 4, !dbg !1956 ; [debug line = 196:18]
  %tmp28 = add i13 -3080, %tmp_438_cast1, !dbg !1961 ; [#uses=1 type=i13] [debug line = 197:18]
  %tmp_321 = add i13 %tmp28, %co_cast1, !dbg !1961 ; [#uses=2 type=i13] [debug line = 197:18]
  %tmp_558 = call i18 @_ssdm_op_BitConcatenate.i18.i13.i5(i13 %tmp_321, i5 0) ; [#uses=1 type=i18]
  %p_shl77_cast = zext i18 %tmp_558 to i19        ; [#uses=1 type=i19]
  %tmp_559 = call i16 @_ssdm_op_BitConcatenate.i16.i13.i3(i13 %tmp_321, i3 0) ; [#uses=1 type=i16]
  %p_shl78_cast = zext i16 %tmp_559 to i19, !dbg !1961 ; [#uses=1 type=i19] [debug line = 197:18]
  %tmp_560 = sub i19 %p_shl77_cast, %p_shl78_cast, !dbg !1961 ; [#uses=1 type=i19] [debug line = 197:18]
  %tmp_561 = add i19 %tmp_186_cast4, %tmp_560, !dbg !1961 ; [#uses=1 type=i19] [debug line = 197:18]
  %tmp_648_cast = sext i19 %tmp_561 to i64, !dbg !1961 ; [#uses=1 type=i64] [debug line = 197:18]
  %shuffle_conv_1x1_add_36 = getelementptr [131904 x float]* %shuffle_conv_1x1, i64 0, i64 %tmp_648_cast, !dbg !1961 ; [#uses=1 type=float*] [debug line = 197:18]
  %shuffle_conv_1x1_loa_36 = load float* %shuffle_conv_1x1_add_36, align 4, !dbg !1961 ; [#uses=1 type=float] [debug line = 197:18]
  store float %shuffle_conv_1x1_loa_36, float* %ShuffleConvs_2_Shuff_25, align 4, !dbg !1961 ; [debug line = 197:18]
  call void @llvm.dbg.value(metadata !{i5 %i_3}, i64 0, metadata !1964), !dbg !1955 ; [debug line = 188:36] [debug variable = i]
  br label %.preheader34, !dbg !1955              ; [debug line = 188:36]

.preheader33.loopexit:                            ; preds = %.preheader32
  br label %.preheader33

.preheader33:                                     ; preds = %.preheader33.loopexit, %.preheader33.preheader
  %co2 = phi i5 [ %co_23, %.preheader33.loopexit ], [ 0, %.preheader33.preheader ] ; [#uses=11 type=i5]
  %co2_cast1 = zext i5 %co2 to i11, !dbg !1910    ; [#uses=1 type=i11] [debug line = 202:20]
  %co2_cast2 = zext i5 %co2 to i10, !dbg !1910    ; [#uses=5 type=i10] [debug line = 202:20]
  %co2_cast120_cast = zext i5 %co2 to i9, !dbg !1910 ; [#uses=5 type=i9] [debug line = 202:20]
  %co2_cast119_cast = zext i5 %co2 to i8, !dbg !1910 ; [#uses=6 type=i8] [debug line = 202:20]
  %co2_cast5 = zext i5 %co2 to i7, !dbg !1910     ; [#uses=3 type=i7] [debug line = 202:20]
  %co2_cast117_cast = zext i5 %co2 to i6, !dbg !1910 ; [#uses=1 type=i6] [debug line = 202:20]
  %exitcond1 = icmp eq i5 %co2, -8, !dbg !1910    ; [#uses=1 type=i1] [debug line = 202:20]
  %empty_407 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind ; [#uses=0 type=i32]
  %co_23 = add i5 %co2, 1, !dbg !1965             ; [#uses=1 type=i5] [debug line = 202:27]
  call void @llvm.dbg.value(metadata !{i5 %co_23}, i64 0, metadata !1966), !dbg !1965 ; [debug line = 202:27] [debug variable = co]
  br i1 %exitcond1, label %.preheader29.preheader, label %.preheader32.preheader, !dbg !1910 ; [debug line = 202:20]

.preheader29.preheader:                           ; preds = %.preheader33
  br label %.preheader29, !dbg !1967              ; [debug line = 238:19]

.preheader32.preheader:                           ; preds = %.preheader33
  %tmp_399 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %co2, i2 0) ; [#uses=1 type=i7]
  %p_shl101_cast = zext i7 %tmp_399 to i8, !dbg !1969 ; [#uses=1 type=i8] [debug line = 206:18]
  %tmp_400 = sub i8 %p_shl101_cast, %co2_cast119_cast, !dbg !1969 ; [#uses=1 type=i8] [debug line = 206:18]
  %tmp_467_cast = sext i8 %tmp_400 to i9, !dbg !1969 ; [#uses=1 type=i9] [debug line = 206:18]
  %tmp_178 = add i6 %co2_cast117_cast, 24, !dbg !1975 ; [#uses=2 type=i6] [debug line = 207:18]
  %tmp_179_cast = zext i6 %tmp_178 to i9          ; [#uses=1 type=i9]
  %tmp_401 = call i8 @_ssdm_op_BitConcatenate.i8.i6.i2(i6 %tmp_178, i2 0) ; [#uses=1 type=i8]
  %p_shl100_cast = zext i8 %tmp_401 to i9, !dbg !1975 ; [#uses=1 type=i9] [debug line = 207:18]
  %tmp_402 = sub i9 %p_shl100_cast, %tmp_179_cast, !dbg !1975 ; [#uses=1 type=i9] [debug line = 207:18]
  %tmp_180 = add i7 %co2_cast5, 48, !dbg !1976    ; [#uses=2 type=i7] [debug line = 208:18]
  %tmp_181_cast = zext i7 %tmp_180 to i10         ; [#uses=1 type=i10]
  %tmp_403 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_180, i2 0) ; [#uses=1 type=i9]
  %p_shl99_cast = zext i9 %tmp_403 to i10, !dbg !1976 ; [#uses=1 type=i10] [debug line = 208:18]
  %tmp_404 = sub i10 %p_shl99_cast, %tmp_181_cast, !dbg !1976 ; [#uses=1 type=i10] [debug line = 208:18]
  %tmp_182 = add i7 %co2_cast5, -56, !dbg !1977   ; [#uses=2 type=i7] [debug line = 209:18]
  %tmp_183_cast = zext i7 %tmp_182 to i10         ; [#uses=1 type=i10]
  %tmp_405 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_182, i2 0) ; [#uses=1 type=i9]
  %p_shl98_cast = zext i9 %tmp_405 to i10, !dbg !1977 ; [#uses=1 type=i10] [debug line = 209:18]
  %tmp_406 = sub i10 %p_shl98_cast, %tmp_183_cast, !dbg !1977 ; [#uses=1 type=i10] [debug line = 209:18]
  %tmp_184 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 true, i5 %co2), !dbg !1978 ; [#uses=1 type=i6] [debug line = 210:18]
  %tmp_197_cast = sext i6 %tmp_184 to i7, !dbg !1978 ; [#uses=1 type=i7] [debug line = 210:18]
  %tmp_185_cast = zext i7 %tmp_197_cast to i10    ; [#uses=1 type=i10]
  %tmp_407 = call i8 @_ssdm_op_BitConcatenate.i8.i1.i5.i2(i1 true, i5 %co2, i2 0) ; [#uses=1 type=i8]
  %tmp_408 = sext i8 %tmp_407 to i9               ; [#uses=1 type=i9]
  %p_shl97_cast = zext i9 %tmp_408 to i10, !dbg !1978 ; [#uses=1 type=i10] [debug line = 210:18]
  %tmp_409 = sub i10 %p_shl97_cast, %tmp_185_cast, !dbg !1978 ; [#uses=1 type=i10] [debug line = 210:18]
  %tmp_476_cast = sext i10 %tmp_409 to i11, !dbg !1978 ; [#uses=1 type=i11] [debug line = 210:18]
  br label %.preheader32, !dbg !1979              ; [debug line = 203:23]

.preheader32.loopexit:                            ; preds = %.preheader31
  br label %.preheader32

.preheader32:                                     ; preds = %.preheader32.loopexit, %.preheader32.preheader
  %w = phi i2 [ 0, %.preheader32.preheader ], [ %w_22, %.preheader32.loopexit ] ; [#uses=10 type=i2]
  %exitcond4 = icmp eq i2 %w, -1, !dbg !1979      ; [#uses=1 type=i1] [debug line = 203:23]
  %empty_408 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind ; [#uses=0 type=i32]
  %w_22 = add i2 %w, 1, !dbg !1980                ; [#uses=1 type=i2] [debug line = 203:31]
  call void @llvm.dbg.value(metadata !{i2 %w_22}, i64 0, metadata !1981), !dbg !1980 ; [debug line = 203:31] [debug variable = w]
  br i1 %exitcond4, label %.preheader33.loopexit, label %.preheader31.preheader, !dbg !1979 ; [debug line = 203:23]

.preheader31.preheader:                           ; preds = %.preheader32
  %tmp_218_cast1 = zext i2 %w to i12, !dbg !1969  ; [#uses=4 type=i12] [debug line = 206:18]
  %tmp_218_cast2 = zext i2 %w to i15, !dbg !1969  ; [#uses=1 type=i15] [debug line = 206:18]
  %tmp_218_cast3 = zext i2 %w to i14, !dbg !1969  ; [#uses=2 type=i14] [debug line = 206:18]
  %tmp_218_cast4 = zext i2 %w to i36, !dbg !1969  ; [#uses=2 type=i36] [debug line = 206:18]
  %tmp_218_cast5 = zext i2 %w to i13, !dbg !1969  ; [#uses=7 type=i13] [debug line = 206:18]
  %tmp_218_cast6 = zext i2 %w to i11, !dbg !1969  ; [#uses=2 type=i11] [debug line = 206:18]
  %tmp_218_cast7 = zext i2 %w to i10, !dbg !1969  ; [#uses=2 type=i10] [debug line = 206:18]
  %tmp_218_cast = zext i2 %w to i9, !dbg !1969    ; [#uses=2 type=i9] [debug line = 206:18]
  %tmp_419 = add i9 %tmp_218_cast, %tmp_467_cast, !dbg !1969 ; [#uses=2 type=i9] [debug line = 206:18]
  %tmp_486_cast = sext i9 %tmp_419 to i15, !dbg !1969 ; [#uses=1 type=i15] [debug line = 206:18]
  %tmp_123 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_419, i2 0) ; [#uses=1 type=i11]
  %p_shl106_cast = sext i11 %tmp_123 to i15, !dbg !1969 ; [#uses=1 type=i15] [debug line = 206:18]
  %tmp_420 = sub i15 %p_shl106_cast, %tmp_486_cast, !dbg !1969 ; [#uses=1 type=i15] [debug line = 206:18]
  %tmp_421 = add i9 %tmp_218_cast, %tmp_402, !dbg !1975 ; [#uses=2 type=i9] [debug line = 207:18]
  %tmp_489_cast = sext i9 %tmp_421 to i15, !dbg !1975 ; [#uses=1 type=i15] [debug line = 207:18]
  %tmp_124 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_421, i2 0) ; [#uses=1 type=i11]
  %p_shl105_cast = sext i11 %tmp_124 to i15, !dbg !1975 ; [#uses=1 type=i15] [debug line = 207:18]
  %tmp_422 = sub i15 %p_shl105_cast, %tmp_489_cast, !dbg !1975 ; [#uses=1 type=i15] [debug line = 207:18]
  %tmp_423 = add i10 %tmp_218_cast7, %tmp_404, !dbg !1976 ; [#uses=2 type=i10] [debug line = 208:18]
  %tmp_492_cast1 = sext i10 %tmp_423 to i15, !dbg !1976 ; [#uses=1 type=i15] [debug line = 208:18]
  %tmp_125 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_423, i2 0) ; [#uses=1 type=i12]
  %p_shl104_cast = sext i12 %tmp_125 to i15, !dbg !1976 ; [#uses=1 type=i15] [debug line = 208:18]
  %tmp_424 = sub i15 %p_shl104_cast, %tmp_492_cast1, !dbg !1976 ; [#uses=1 type=i15] [debug line = 208:18]
  %tmp_425 = add i10 %tmp_218_cast7, %tmp_406, !dbg !1977 ; [#uses=2 type=i10] [debug line = 209:18]
  %tmp_495_cast1 = sext i10 %tmp_425 to i15, !dbg !1977 ; [#uses=1 type=i15] [debug line = 209:18]
  %tmp_126 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_425, i2 0) ; [#uses=1 type=i12]
  %p_shl103_cast = sext i12 %tmp_126 to i15, !dbg !1977 ; [#uses=1 type=i15] [debug line = 209:18]
  %tmp_426 = sub i15 %p_shl103_cast, %tmp_495_cast1, !dbg !1977 ; [#uses=1 type=i15] [debug line = 209:18]
  %tmp_427 = add i11 %tmp_218_cast6, %tmp_476_cast, !dbg !1978 ; [#uses=2 type=i11] [debug line = 210:18]
  %tmp_498_cast = sext i11 %tmp_427 to i15, !dbg !1978 ; [#uses=1 type=i15] [debug line = 210:18]
  %tmp_127 = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_427, i2 0) ; [#uses=1 type=i13]
  %p_shl102_cast = sext i13 %tmp_127 to i15, !dbg !1978 ; [#uses=1 type=i15] [debug line = 210:18]
  %tmp_428 = sub i15 %p_shl102_cast, %tmp_498_cast, !dbg !1978 ; [#uses=1 type=i15] [debug line = 210:18]
  br label %.preheader31, !dbg !1982              ; [debug line = 204:27]

.preheader31.loopexit:                            ; preds = %.preheader30
  br label %.preheader31

.preheader31:                                     ; preds = %.preheader31.loopexit, %.preheader31.preheader
  %h = phi i2 [ 0, %.preheader31.preheader ], [ %h_22, %.preheader31.loopexit ] ; [#uses=5 type=i2]
  %exitcond10 = icmp eq i2 %h, -1, !dbg !1982     ; [#uses=1 type=i1] [debug line = 204:27]
  %empty_409 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind ; [#uses=0 type=i32]
  %h_22 = add i2 %h, 1, !dbg !1983                ; [#uses=1 type=i2] [debug line = 204:34]
  call void @llvm.dbg.value(metadata !{i2 %h_22}, i64 0, metadata !1984), !dbg !1983 ; [debug line = 204:34] [debug variable = h]
  br i1 %exitcond10, label %.preheader32.loopexit, label %5, !dbg !1982 ; [debug line = 204:27]

; <label>:5                                       ; preds = %.preheader31
  %tmp_309_cast1 = zext i2 %h to i10, !dbg !1969  ; [#uses=1 type=i10] [debug line = 206:18]
  %tmp_309_cast2 = zext i2 %h to i11, !dbg !1969  ; [#uses=1 type=i11] [debug line = 206:18]
  %tmp_309_cast = zext i2 %h to i15, !dbg !1969   ; [#uses=20 type=i15] [debug line = 206:18]
  %tmp_515 = add i15 %tmp_420, %tmp_309_cast, !dbg !1969 ; [#uses=1 type=i15] [debug line = 206:18]
  %tmp_597_cast = zext i15 %tmp_515 to i64, !dbg !1969 ; [#uses=6 type=i64] [debug line = 206:18]
  %shuffle_conv_3x3_add = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_597_cast, !dbg !1969 ; [#uses=1 type=float*] [debug line = 206:18]
  %tmp_516 = add i15 %tmp_422, %tmp_309_cast, !dbg !1975 ; [#uses=1 type=i15] [debug line = 207:18]
  %tmp_598_cast = zext i15 %tmp_516 to i64, !dbg !1975 ; [#uses=1 type=i64] [debug line = 207:18]
  %shuffle_conv_3x3_add_1 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_598_cast, !dbg !1975 ; [#uses=1 type=float*] [debug line = 207:18]
  %tmp_517 = add i15 %tmp_424, %tmp_309_cast, !dbg !1976 ; [#uses=1 type=i15] [debug line = 208:18]
  %tmp_599_cast = zext i15 %tmp_517 to i64, !dbg !1976 ; [#uses=1 type=i64] [debug line = 208:18]
  %shuffle_conv_3x3_add_2 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_599_cast, !dbg !1976 ; [#uses=1 type=float*] [debug line = 208:18]
  %tmp_518 = add i15 %tmp_426, %tmp_309_cast, !dbg !1977 ; [#uses=1 type=i15] [debug line = 209:18]
  %tmp_600_cast = zext i15 %tmp_518 to i64, !dbg !1977 ; [#uses=1 type=i64] [debug line = 209:18]
  %shuffle_conv_3x3_add_3 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_600_cast, !dbg !1977 ; [#uses=1 type=float*] [debug line = 209:18]
  %tmp_519 = add i15 %tmp_428, %tmp_309_cast, !dbg !1978 ; [#uses=1 type=i15] [debug line = 210:18]
  %tmp_601_cast = zext i15 %tmp_519 to i64, !dbg !1978 ; [#uses=1 type=i64] [debug line = 210:18]
  %shuffle_conv_3x3_add_4 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_601_cast, !dbg !1978 ; [#uses=1 type=float*] [debug line = 210:18]
  %ShuffleConvs_0_Shuff_28 = getelementptr [216 x float]* @ShuffleConvs_0_Shuff_9, i64 0, i64 %tmp_597_cast, !dbg !1977 ; [#uses=1 type=float*] [debug line = 209:18]
  %ShuffleConvs_0_Shuff_29 = getelementptr [216 x float]* @ShuffleConvs_0_Shuff_6, i64 0, i64 %tmp_597_cast, !dbg !1976 ; [#uses=1 type=float*] [debug line = 208:18]
  %ShuffleConvs_0_Downs_13 = getelementptr [216 x float]* @ShuffleConvs_0_Downs_6, i64 0, i64 %tmp_597_cast, !dbg !1975 ; [#uses=1 type=float*] [debug line = 207:18]
  %ShuffleConvs_0_Downs_14 = getelementptr [216 x float]* @ShuffleConvs_0_Downs_9, i64 0, i64 %tmp_597_cast, !dbg !1969 ; [#uses=1 type=float*] [debug line = 206:18]
  %ShuffleConvs_0_Shuff_30 = getelementptr [216 x float]* @ShuffleConvs_0_Shuff_15, i64 0, i64 %tmp_597_cast, !dbg !1978 ; [#uses=1 type=float*] [debug line = 210:18]
  %shuffle_conv_3x3_loa = load float* %shuffle_conv_3x3_add, align 4, !dbg !1969 ; [#uses=1 type=float] [debug line = 206:18]
  store float %shuffle_conv_3x3_loa, float* %ShuffleConvs_0_Downs_14, align 4, !dbg !1969 ; [debug line = 206:18]
  %shuffle_conv_3x3_loa_1 = load float* %shuffle_conv_3x3_add_1, align 4, !dbg !1975 ; [#uses=1 type=float] [debug line = 207:18]
  store float %shuffle_conv_3x3_loa_1, float* %ShuffleConvs_0_Downs_13, align 4, !dbg !1975 ; [debug line = 207:18]
  %shuffle_conv_3x3_loa_2 = load float* %shuffle_conv_3x3_add_2, align 4, !dbg !1976 ; [#uses=1 type=float] [debug line = 208:18]
  store float %shuffle_conv_3x3_loa_2, float* %ShuffleConvs_0_Shuff_29, align 4, !dbg !1976 ; [debug line = 208:18]
  %shuffle_conv_3x3_loa_3 = load float* %shuffle_conv_3x3_add_3, align 4, !dbg !1977 ; [#uses=1 type=float] [debug line = 209:18]
  store float %shuffle_conv_3x3_loa_3, float* %ShuffleConvs_0_Shuff_28, align 4, !dbg !1977 ; [debug line = 209:18]
  %shuffle_conv_3x3_loa_4 = load float* %shuffle_conv_3x3_add_4, align 4, !dbg !1978 ; [#uses=1 type=float] [debug line = 210:18]
  store float %shuffle_conv_3x3_loa_4, float* %ShuffleConvs_0_Shuff_30, align 4, !dbg !1978 ; [debug line = 210:18]
  br label %6, !dbg !1985                         ; [debug line = 212:31]

; <label>:6                                       ; preds = %7, %5
  %i3 = phi i2 [ 0, %5 ], [ %i_6, %7 ]            ; [#uses=3 type=i2]
  %exitcond13 = icmp eq i2 %i3, -2, !dbg !1985    ; [#uses=1 type=i1] [debug line = 212:31]
  %empty_410 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind ; [#uses=0 type=i32]
  %i_6 = add i2 %i3, 1, !dbg !1987                ; [#uses=1 type=i2] [debug line = 212:40]
  br i1 %exitcond13, label %.preheader30.preheader, label %7, !dbg !1985 ; [debug line = 212:31]

.preheader30.preheader:                           ; preds = %6
  br label %.preheader30, !dbg !1988              ; [debug line = 225:31]

; <label>:7                                       ; preds = %6
  %tmp_133 = trunc i2 %i3 to i1                   ; [#uses=2 type=i1]
  %p_shl13 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_133, i5 0), !dbg !1990 ; [#uses=1 type=i6] [debug line = 213:22]
  %p_shl15_cast = zext i6 %p_shl13 to i7, !dbg !1990 ; [#uses=1 type=i7] [debug line = 213:22]
  %p_shl14 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_133, i3 0), !dbg !1990 ; [#uses=1 type=i4] [debug line = 213:22]
  %p_shl16_cast = zext i4 %p_shl14 to i7, !dbg !1990 ; [#uses=1 type=i7] [debug line = 213:22]
  %tmp_353 = sub i7 %p_shl15_cast, %p_shl16_cast, !dbg !1990 ; [#uses=5 type=i7] [debug line = 213:22]
  %tmp_470_cast1 = sext i7 %tmp_353 to i10, !dbg !1990 ; [#uses=2 type=i10] [debug line = 213:22]
  %tmp_470_cast2 = sext i7 %tmp_353 to i9, !dbg !1990 ; [#uses=3 type=i9] [debug line = 213:22]
  %tmp_470_cast110_cast = sext i7 %tmp_353 to i8, !dbg !1990 ; [#uses=4 type=i8] [debug line = 213:22]
  %tmp29 = add i8 120, %tmp_470_cast110_cast, !dbg !1990 ; [#uses=1 type=i8] [debug line = 213:22]
  %tmp_354 = add i8 %tmp29, %co2_cast119_cast, !dbg !1990 ; [#uses=2 type=i8] [debug line = 213:22]
  %tmp_355_cast = zext i8 %tmp_354 to i11         ; [#uses=1 type=i11]
  %tmp_562 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_354, i2 0) ; [#uses=1 type=i10]
  %p_shl128_cast = zext i10 %tmp_562 to i11, !dbg !1990 ; [#uses=1 type=i11] [debug line = 213:22]
  %tmp_563 = sub i11 %p_shl128_cast, %tmp_355_cast, !dbg !1990 ; [#uses=1 type=i11] [debug line = 213:22]
  %tmp_654_cast = sext i11 %tmp_563 to i12, !dbg !1990 ; [#uses=1 type=i12] [debug line = 213:22]
  %tmp_564 = add i12 %tmp_218_cast1, %tmp_654_cast, !dbg !1990 ; [#uses=2 type=i12] [debug line = 213:22]
  %tmp_655_cast = sext i12 %tmp_564 to i15, !dbg !1990 ; [#uses=1 type=i15] [debug line = 213:22]
  %tmp_134 = call i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12 %tmp_564, i2 0) ; [#uses=1 type=i14]
  %p_shl127_cast = sext i14 %tmp_134 to i15, !dbg !1990 ; [#uses=1 type=i15] [debug line = 213:22]
  %tmp_565 = sub i15 %p_shl127_cast, %tmp_655_cast, !dbg !1990 ; [#uses=1 type=i15] [debug line = 213:22]
  %tmp_566 = add i15 %tmp_309_cast, %tmp_565, !dbg !1990 ; [#uses=1 type=i15] [debug line = 213:22]
  %tmp_658_cast = zext i15 %tmp_566 to i64, !dbg !1990 ; [#uses=1 type=i64] [debug line = 213:22]
  %shuffle_conv_3x3_add_5 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_658_cast, !dbg !1990 ; [#uses=1 type=float*] [debug line = 213:22]
  %shuffle_conv_3x3_loa_5 = load float* %shuffle_conv_3x3_add_5, align 4, !dbg !1990 ; [#uses=1 type=float] [debug line = 213:22]
  %tmp_356 = add i7 %co2_cast5, %tmp_353, !dbg !1990 ; [#uses=2 type=i7] [debug line = 213:22]
  %tmp_474_cast = sext i7 %tmp_356 to i32, !dbg !1990 ; [#uses=1 type=i32] [debug line = 213:22]
  %tmp_357_cast = zext i32 %tmp_474_cast to i35   ; [#uses=1 type=i35]
  %tmp_567 = call i9 @_ssdm_op_BitConcatenate.i9.i7.i2(i7 %tmp_356, i2 0) ; [#uses=1 type=i9]
  %tmp_568 = sext i9 %tmp_567 to i34              ; [#uses=1 type=i34]
  %p_shl126_cast = zext i34 %tmp_568 to i35, !dbg !1992 ; [#uses=1 type=i35] [debug line = 222:22]
  %tmp_569 = sub i35 %p_shl126_cast, %tmp_357_cast, !dbg !1992 ; [#uses=1 type=i35] [debug line = 222:22]
  %tmp_661_cast = sext i35 %tmp_569 to i36, !dbg !1992 ; [#uses=1 type=i36] [debug line = 222:22]
  %tmp_570 = add i36 %tmp_218_cast4, %tmp_661_cast, !dbg !1992 ; [#uses=2 type=i36] [debug line = 222:22]
  %tmp_135 = trunc i36 %tmp_570 to i10, !dbg !1992 ; [#uses=1 type=i10] [debug line = 222:22]
  %tmp_136 = trunc i36 %tmp_570 to i8             ; [#uses=1 type=i8]
  %p_shl125_cast = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_136, i2 0), !dbg !1992 ; [#uses=1 type=i10] [debug line = 222:22]
  %tmp_571 = sub i10 %p_shl125_cast, %tmp_135, !dbg !1992 ; [#uses=1 type=i10] [debug line = 222:22]
  %tmp_572 = add i10 %tmp_309_cast1, %tmp_571, !dbg !1992 ; [#uses=1 type=i10] [debug line = 222:22]
  %tmp_665_cast = zext i10 %tmp_572 to i64, !dbg !1992 ; [#uses=10 type=i64] [debug line = 222:22]
  %ShuffleConvs_1_Shuff_87 = getelementptr [432 x float]* @ShuffleConvs_1_Shuff_49, i64 0, i64 %tmp_665_cast, !dbg !1992 ; [#uses=1 type=float*] [debug line = 222:22]
  %ShuffleConvs_1_Shuff_88 = getelementptr [432 x float]* @ShuffleConvs_1_Shuff_9, i64 0, i64 %tmp_665_cast, !dbg !1993 ; [#uses=1 type=float*] [debug line = 216:22]
  %ShuffleConvs_1_Shuff_89 = getelementptr [432 x float]* @ShuffleConvs_1_Shuff_23, i64 0, i64 %tmp_665_cast, !dbg !1994 ; [#uses=1 type=float*] [debug line = 218:22]
  %ShuffleConvs_1_Shuff_90 = getelementptr [432 x float]* @ShuffleConvs_1_Shuff_15, i64 0, i64 %tmp_665_cast, !dbg !1995 ; [#uses=1 type=float*] [debug line = 217:22]
  %ShuffleConvs_1_Shuff_91 = getelementptr [432 x float]* @ShuffleConvs_1_Shuff_35, i64 0, i64 %tmp_665_cast, !dbg !1996 ; [#uses=1 type=float*] [debug line = 220:22]
  %ShuffleConvs_1_Downs_13 = getelementptr [432 x float]* @ShuffleConvs_1_Downs_6, i64 0, i64 %tmp_665_cast, !dbg !1997 ; [#uses=1 type=float*] [debug line = 214:22]
  %ShuffleConvs_1_Shuff_92 = getelementptr [432 x float]* @ShuffleConvs_1_Shuff_3, i64 0, i64 %tmp_665_cast, !dbg !1998 ; [#uses=1 type=float*] [debug line = 215:22]
  %ShuffleConvs_1_Downs_14 = getelementptr [432 x float]* @ShuffleConvs_1_Downs_9, i64 0, i64 %tmp_665_cast, !dbg !1990 ; [#uses=1 type=float*] [debug line = 213:22]
  %ShuffleConvs_1_Shuff_93 = getelementptr [432 x float]* @ShuffleConvs_1_Shuff_43, i64 0, i64 %tmp_665_cast, !dbg !1999 ; [#uses=1 type=float*] [debug line = 221:22]
  %ShuffleConvs_1_Shuff_94 = getelementptr [432 x float]* @ShuffleConvs_1_Shuff_29, i64 0, i64 %tmp_665_cast, !dbg !2000 ; [#uses=1 type=float*] [debug line = 219:22]
  store float %shuffle_conv_3x3_loa_5, float* %ShuffleConvs_1_Downs_14, align 4, !dbg !1990 ; [debug line = 213:22]
  %tmp30 = add i8 -88, %tmp_470_cast110_cast, !dbg !1997 ; [#uses=1 type=i8] [debug line = 214:22]
  %tmp_358 = add i8 %tmp30, %co2_cast119_cast, !dbg !1997 ; [#uses=2 type=i8] [debug line = 214:22]
  %tmp_359_cast = zext i8 %tmp_358 to i11         ; [#uses=1 type=i11]
  %tmp_573 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_358, i2 0) ; [#uses=1 type=i10]
  %p_shl124_cast = zext i10 %tmp_573 to i11, !dbg !1997 ; [#uses=1 type=i11] [debug line = 214:22]
  %tmp_574 = sub i11 %p_shl124_cast, %tmp_359_cast, !dbg !1997 ; [#uses=1 type=i11] [debug line = 214:22]
  %tmp_575 = add i11 %tmp_218_cast6, %tmp_574, !dbg !1997 ; [#uses=2 type=i11] [debug line = 214:22]
  %tmp_668_cast = sext i11 %tmp_575 to i15, !dbg !1997 ; [#uses=1 type=i15] [debug line = 214:22]
  %tmp_137 = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_575, i2 0) ; [#uses=1 type=i13]
  %p_shl123_cast = sext i13 %tmp_137 to i15, !dbg !1997 ; [#uses=1 type=i15] [debug line = 214:22]
  %tmp_576 = sub i15 %p_shl123_cast, %tmp_668_cast, !dbg !1997 ; [#uses=1 type=i15] [debug line = 214:22]
  %tmp_577 = add i15 %tmp_309_cast, %tmp_576, !dbg !1997 ; [#uses=1 type=i15] [debug line = 214:22]
  %tmp_671_cast = zext i15 %tmp_577 to i64, !dbg !1997 ; [#uses=1 type=i64] [debug line = 214:22]
  %shuffle_conv_3x3_add_6 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_671_cast, !dbg !1997 ; [#uses=1 type=float*] [debug line = 214:22]
  %shuffle_conv_3x3_loa_6 = load float* %shuffle_conv_3x3_add_6, align 4, !dbg !1997 ; [#uses=1 type=float] [debug line = 214:22]
  store float %shuffle_conv_3x3_loa_6, float* %ShuffleConvs_1_Downs_13, align 4, !dbg !1997 ; [debug line = 214:22]
  %tmp31 = add i7 -40, %tmp_353, !dbg !1998       ; [#uses=1 type=i7] [debug line = 215:22]
  %tmp31_cast1 = sext i7 %tmp31 to i8, !dbg !1998 ; [#uses=1 type=i8] [debug line = 215:22]
  %tmp31_cast = zext i8 %tmp31_cast1 to i9, !dbg !1998 ; [#uses=1 type=i9] [debug line = 215:22]
  %tmp_361 = add i9 %tmp31_cast, %co2_cast120_cast, !dbg !1998 ; [#uses=2 type=i9] [debug line = 215:22]
  %tmp_363_cast = zext i9 %tmp_361 to i12         ; [#uses=1 type=i12]
  %tmp_578 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_361, i2 0) ; [#uses=1 type=i11]
  %p_shl122_cast = zext i11 %tmp_578 to i12, !dbg !1998 ; [#uses=1 type=i12] [debug line = 215:22]
  %tmp_579 = sub i12 %p_shl122_cast, %tmp_363_cast, !dbg !1998 ; [#uses=1 type=i12] [debug line = 215:22]
  %tmp_673_cast = sext i12 %tmp_579 to i13, !dbg !1998 ; [#uses=1 type=i13] [debug line = 215:22]
  %tmp_580 = add i13 %tmp_218_cast5, %tmp_673_cast, !dbg !1998 ; [#uses=2 type=i13] [debug line = 215:22]
  %tmp_674_cast = sext i13 %tmp_580 to i15, !dbg !1998 ; [#uses=1 type=i15] [debug line = 215:22]
  %p_shl121_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_580, i2 0), !dbg !1998 ; [#uses=1 type=i15] [debug line = 215:22]
  %tmp_581 = sub i15 %p_shl121_cast, %tmp_674_cast, !dbg !1998 ; [#uses=1 type=i15] [debug line = 215:22]
  %tmp_582 = add i15 %tmp_309_cast, %tmp_581, !dbg !1998 ; [#uses=1 type=i15] [debug line = 215:22]
  %tmp_677_cast = zext i15 %tmp_582 to i64, !dbg !1998 ; [#uses=1 type=i64] [debug line = 215:22]
  %shuffle_conv_3x3_add_7 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_677_cast, !dbg !1998 ; [#uses=1 type=float*] [debug line = 215:22]
  %shuffle_conv_3x3_loa_7 = load float* %shuffle_conv_3x3_add_7, align 4, !dbg !1998 ; [#uses=1 type=float] [debug line = 215:22]
  store float %shuffle_conv_3x3_loa_7, float* %ShuffleConvs_1_Shuff_92, align 4, !dbg !1998 ; [debug line = 215:22]
  %tmp32 = add i9 -248, %tmp_470_cast2, !dbg !1993 ; [#uses=1 type=i9] [debug line = 216:22]
  %tmp_365 = add i9 %tmp32, %co2_cast120_cast, !dbg !1993 ; [#uses=2 type=i9] [debug line = 216:22]
  %tmp_367_cast = zext i9 %tmp_365 to i12         ; [#uses=1 type=i12]
  %tmp_583 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_365, i2 0) ; [#uses=1 type=i11]
  %p_shl120_cast = zext i11 %tmp_583 to i12, !dbg !1993 ; [#uses=1 type=i12] [debug line = 216:22]
  %tmp_584 = sub i12 %p_shl120_cast, %tmp_367_cast, !dbg !1993 ; [#uses=1 type=i12] [debug line = 216:22]
  %tmp_679_cast = sext i12 %tmp_584 to i13, !dbg !1993 ; [#uses=1 type=i13] [debug line = 216:22]
  %tmp_585 = add i13 %tmp_218_cast5, %tmp_679_cast, !dbg !1993 ; [#uses=2 type=i13] [debug line = 216:22]
  %tmp_680_cast = sext i13 %tmp_585 to i15, !dbg !1993 ; [#uses=1 type=i15] [debug line = 216:22]
  %p_shl119_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_585, i2 0), !dbg !1993 ; [#uses=1 type=i15] [debug line = 216:22]
  %tmp_586 = sub i15 %p_shl119_cast, %tmp_680_cast, !dbg !1993 ; [#uses=1 type=i15] [debug line = 216:22]
  %tmp_587 = add i15 %tmp_309_cast, %tmp_586, !dbg !1993 ; [#uses=1 type=i15] [debug line = 216:22]
  %tmp_683_cast = zext i15 %tmp_587 to i64, !dbg !1993 ; [#uses=1 type=i64] [debug line = 216:22]
  %shuffle_conv_3x3_add_8 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_683_cast, !dbg !1993 ; [#uses=1 type=float*] [debug line = 216:22]
  %shuffle_conv_3x3_loa_8 = load float* %shuffle_conv_3x3_add_8, align 4, !dbg !1993 ; [#uses=1 type=float] [debug line = 216:22]
  store float %shuffle_conv_3x3_loa_8, float* %ShuffleConvs_1_Shuff_88, align 4, !dbg !1993 ; [debug line = 216:22]
  %tmp33 = add i9 -200, %tmp_470_cast2, !dbg !1995 ; [#uses=1 type=i9] [debug line = 217:22]
  %tmp_369 = add i9 %tmp33, %co2_cast120_cast, !dbg !1995 ; [#uses=2 type=i9] [debug line = 217:22]
  %tmp_371_cast = zext i9 %tmp_369 to i12         ; [#uses=1 type=i12]
  %tmp_588 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_369, i2 0) ; [#uses=1 type=i11]
  %p_shl118_cast = zext i11 %tmp_588 to i12, !dbg !1995 ; [#uses=1 type=i12] [debug line = 217:22]
  %tmp_589 = sub i12 %p_shl118_cast, %tmp_371_cast, !dbg !1995 ; [#uses=1 type=i12] [debug line = 217:22]
  %tmp_590 = add i12 %tmp_218_cast1, %tmp_589, !dbg !1995 ; [#uses=2 type=i12] [debug line = 217:22]
  %tmp_686_cast = sext i12 %tmp_590 to i15, !dbg !1995 ; [#uses=1 type=i15] [debug line = 217:22]
  %tmp_138 = call i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12 %tmp_590, i2 0) ; [#uses=1 type=i14]
  %p_shl117_cast = sext i14 %tmp_138 to i15, !dbg !1995 ; [#uses=1 type=i15] [debug line = 217:22]
  %tmp_591 = sub i15 %p_shl117_cast, %tmp_686_cast, !dbg !1995 ; [#uses=1 type=i15] [debug line = 217:22]
  %tmp_592 = add i15 %tmp_309_cast, %tmp_591, !dbg !1995 ; [#uses=1 type=i15] [debug line = 217:22]
  %tmp_689_cast = zext i15 %tmp_592 to i64, !dbg !1995 ; [#uses=1 type=i64] [debug line = 217:22]
  %shuffle_conv_3x3_add_9 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_689_cast, !dbg !1995 ; [#uses=1 type=float*] [debug line = 217:22]
  %shuffle_conv_3x3_loa_9 = load float* %shuffle_conv_3x3_add_9, align 4, !dbg !1995 ; [#uses=1 type=float] [debug line = 217:22]
  store float %shuffle_conv_3x3_loa_9, float* %ShuffleConvs_1_Shuff_90, align 4, !dbg !1995 ; [debug line = 217:22]
  %tmp34 = add i9 -152, %tmp_470_cast2, !dbg !1994 ; [#uses=1 type=i9] [debug line = 218:22]
  %tmp_372 = add i9 %tmp34, %co2_cast120_cast, !dbg !1994 ; [#uses=2 type=i9] [debug line = 218:22]
  %tmp_373_cast = zext i9 %tmp_372 to i12         ; [#uses=1 type=i12]
  %tmp_593 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_372, i2 0) ; [#uses=1 type=i11]
  %p_shl116_cast = zext i11 %tmp_593 to i12, !dbg !1994 ; [#uses=1 type=i12] [debug line = 218:22]
  %tmp_594 = sub i12 %p_shl116_cast, %tmp_373_cast, !dbg !1994 ; [#uses=1 type=i12] [debug line = 218:22]
  %tmp_595 = add i12 %tmp_218_cast1, %tmp_594, !dbg !1994 ; [#uses=2 type=i12] [debug line = 218:22]
  %tmp_692_cast = sext i12 %tmp_595 to i15, !dbg !1994 ; [#uses=1 type=i15] [debug line = 218:22]
  %tmp_139 = call i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12 %tmp_595, i2 0) ; [#uses=1 type=i14]
  %p_shl115_cast = sext i14 %tmp_139 to i15, !dbg !1994 ; [#uses=1 type=i15] [debug line = 218:22]
  %tmp_596 = sub i15 %p_shl115_cast, %tmp_692_cast, !dbg !1994 ; [#uses=1 type=i15] [debug line = 218:22]
  %tmp_597 = add i15 %tmp_309_cast, %tmp_596, !dbg !1994 ; [#uses=1 type=i15] [debug line = 218:22]
  %tmp_695_cast = zext i15 %tmp_597 to i64, !dbg !1994 ; [#uses=1 type=i64] [debug line = 218:22]
  %shuffle_conv_3x3_add_10 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_695_cast, !dbg !1994 ; [#uses=1 type=float*] [debug line = 218:22]
  %shuffle_conv_3x3_loa_10 = load float* %shuffle_conv_3x3_add_10, align 4, !dbg !1994 ; [#uses=1 type=float] [debug line = 218:22]
  store float %shuffle_conv_3x3_loa_10, float* %ShuffleConvs_1_Shuff_89, align 4, !dbg !1994 ; [debug line = 218:22]
  %tmp35 = add i8 -104, %tmp_470_cast110_cast, !dbg !2000 ; [#uses=1 type=i8] [debug line = 219:22]
  %tmp_374 = add i8 %tmp35, %co2_cast119_cast, !dbg !2000 ; [#uses=2 type=i8] [debug line = 219:22]
  %tmp_492_cast = sext i8 %tmp_374 to i9, !dbg !2000 ; [#uses=1 type=i9] [debug line = 219:22]
  %tmp_375_cast = zext i9 %tmp_492_cast to i12    ; [#uses=1 type=i12]
  %tmp_598 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_374, i2 0) ; [#uses=1 type=i10]
  %tmp_599 = sext i10 %tmp_598 to i11             ; [#uses=1 type=i11]
  %p_shl114_cast = zext i11 %tmp_599 to i12, !dbg !2000 ; [#uses=1 type=i12] [debug line = 219:22]
  %tmp_600 = sub i12 %p_shl114_cast, %tmp_375_cast, !dbg !2000 ; [#uses=1 type=i12] [debug line = 219:22]
  %tmp_601 = add i12 %tmp_218_cast1, %tmp_600, !dbg !2000 ; [#uses=2 type=i12] [debug line = 219:22]
  %tmp_699_cast = sext i12 %tmp_601 to i15, !dbg !2000 ; [#uses=1 type=i15] [debug line = 219:22]
  %tmp_140 = call i14 @_ssdm_op_BitConcatenate.i14.i12.i2(i12 %tmp_601, i2 0) ; [#uses=1 type=i14]
  %p_shl113_cast = sext i14 %tmp_140 to i15, !dbg !2000 ; [#uses=1 type=i15] [debug line = 219:22]
  %tmp_602 = sub i15 %p_shl113_cast, %tmp_699_cast, !dbg !2000 ; [#uses=1 type=i15] [debug line = 219:22]
  %tmp_603 = add i15 %tmp_309_cast, %tmp_602, !dbg !2000 ; [#uses=1 type=i15] [debug line = 219:22]
  %tmp_702_cast = zext i15 %tmp_603 to i64, !dbg !2000 ; [#uses=1 type=i64] [debug line = 219:22]
  %shuffle_conv_3x3_add_11 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_702_cast, !dbg !2000 ; [#uses=1 type=float*] [debug line = 219:22]
  %shuffle_conv_3x3_loa_11 = load float* %shuffle_conv_3x3_add_11, align 4, !dbg !2000 ; [#uses=1 type=float] [debug line = 219:22]
  store float %shuffle_conv_3x3_loa_11, float* %ShuffleConvs_1_Shuff_94, align 4, !dbg !2000 ; [debug line = 219:22]
  %tmp36 = add i8 -56, %tmp_470_cast110_cast, !dbg !1996 ; [#uses=1 type=i8] [debug line = 220:22]
  %tmp_376 = add i8 %tmp36, %co2_cast119_cast, !dbg !1996 ; [#uses=2 type=i8] [debug line = 220:22]
  %tmp_495_cast = sext i8 %tmp_376 to i9, !dbg !1996 ; [#uses=1 type=i9] [debug line = 220:22]
  %tmp_377_cast = zext i9 %tmp_495_cast to i12    ; [#uses=1 type=i12]
  %tmp_604 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_376, i2 0) ; [#uses=1 type=i10]
  %tmp_605 = sext i10 %tmp_604 to i11             ; [#uses=1 type=i11]
  %p_shl112_cast = zext i11 %tmp_605 to i12, !dbg !1996 ; [#uses=1 type=i12] [debug line = 220:22]
  %tmp_606 = sub i12 %p_shl112_cast, %tmp_377_cast, !dbg !1996 ; [#uses=1 type=i12] [debug line = 220:22]
  %tmp_705_cast = sext i12 %tmp_606 to i13, !dbg !1996 ; [#uses=1 type=i13] [debug line = 220:22]
  %tmp_607 = add i13 %tmp_218_cast5, %tmp_705_cast, !dbg !1996 ; [#uses=2 type=i13] [debug line = 220:22]
  %tmp_706_cast = sext i13 %tmp_607 to i15, !dbg !1996 ; [#uses=1 type=i15] [debug line = 220:22]
  %p_shl111_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_607, i2 0), !dbg !1996 ; [#uses=1 type=i15] [debug line = 220:22]
  %tmp_608 = sub i15 %p_shl111_cast, %tmp_706_cast, !dbg !1996 ; [#uses=1 type=i15] [debug line = 220:22]
  %tmp_609 = add i15 %tmp_309_cast, %tmp_608, !dbg !1996 ; [#uses=1 type=i15] [debug line = 220:22]
  %tmp_709_cast = zext i15 %tmp_609 to i64, !dbg !1996 ; [#uses=1 type=i64] [debug line = 220:22]
  %shuffle_conv_3x3_add_12 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_709_cast, !dbg !1996 ; [#uses=1 type=float*] [debug line = 220:22]
  %shuffle_conv_3x3_loa_12 = load float* %shuffle_conv_3x3_add_12, align 4, !dbg !1996 ; [#uses=1 type=float] [debug line = 220:22]
  store float %shuffle_conv_3x3_loa_12, float* %ShuffleConvs_1_Shuff_91, align 4, !dbg !1996 ; [debug line = 220:22]
  %tmp37 = add i10 504, %tmp_470_cast1, !dbg !1999 ; [#uses=1 type=i10] [debug line = 221:22]
  %tmp_378 = add i10 %tmp37, %co2_cast2, !dbg !1999 ; [#uses=2 type=i10] [debug line = 221:22]
  %tmp_379_cast = zext i10 %tmp_378 to i13        ; [#uses=1 type=i13]
  %tmp_610 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_378, i2 0) ; [#uses=1 type=i12]
  %p_shl110_cast = zext i12 %tmp_610 to i13, !dbg !1999 ; [#uses=1 type=i13] [debug line = 221:22]
  %tmp_611 = sub i13 %p_shl110_cast, %tmp_379_cast, !dbg !1999 ; [#uses=1 type=i13] [debug line = 221:22]
  %tmp_711_cast = sext i13 %tmp_611 to i14, !dbg !1999 ; [#uses=1 type=i14] [debug line = 221:22]
  %tmp_612 = add i14 %tmp_218_cast3, %tmp_711_cast, !dbg !1999 ; [#uses=2 type=i14] [debug line = 221:22]
  %tmp_712_cast = sext i14 %tmp_612 to i15, !dbg !1999 ; [#uses=1 type=i15] [debug line = 221:22]
  %tmp_141 = trunc i14 %tmp_612 to i13            ; [#uses=1 type=i13]
  %p_shl109_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_141, i2 0), !dbg !1999 ; [#uses=1 type=i15] [debug line = 221:22]
  %tmp_613 = sub i15 %p_shl109_cast, %tmp_712_cast, !dbg !1999 ; [#uses=1 type=i15] [debug line = 221:22]
  %tmp_614 = add i15 %tmp_309_cast, %tmp_613, !dbg !1999 ; [#uses=1 type=i15] [debug line = 221:22]
  %tmp_715_cast = zext i15 %tmp_614 to i64, !dbg !1999 ; [#uses=1 type=i64] [debug line = 221:22]
  %shuffle_conv_3x3_add_13 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_715_cast, !dbg !1999 ; [#uses=1 type=float*] [debug line = 221:22]
  %shuffle_conv_3x3_loa_13 = load float* %shuffle_conv_3x3_add_13, align 4, !dbg !1999 ; [#uses=1 type=float] [debug line = 221:22]
  store float %shuffle_conv_3x3_loa_13, float* %ShuffleConvs_1_Shuff_93, align 4, !dbg !1999 ; [debug line = 221:22]
  %tmp38 = add i10 -472, %tmp_470_cast1, !dbg !1992 ; [#uses=1 type=i10] [debug line = 222:22]
  %tmp_380 = add i10 %tmp38, %co2_cast2, !dbg !1992 ; [#uses=2 type=i10] [debug line = 222:22]
  %tmp_381_cast = zext i10 %tmp_380 to i13        ; [#uses=1 type=i13]
  %tmp_615 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_380, i2 0) ; [#uses=1 type=i12]
  %p_shl108_cast = zext i12 %tmp_615 to i13, !dbg !1992 ; [#uses=1 type=i13] [debug line = 222:22]
  %tmp_616 = sub i13 %p_shl108_cast, %tmp_381_cast, !dbg !1992 ; [#uses=1 type=i13] [debug line = 222:22]
  %tmp_617 = add i13 %tmp_218_cast5, %tmp_616, !dbg !1992 ; [#uses=2 type=i13] [debug line = 222:22]
  %tmp_718_cast = sext i13 %tmp_617 to i15, !dbg !1992 ; [#uses=1 type=i15] [debug line = 222:22]
  %p_shl107_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_617, i2 0), !dbg !1992 ; [#uses=1 type=i15] [debug line = 222:22]
  %tmp_618 = sub i15 %p_shl107_cast, %tmp_718_cast, !dbg !1992 ; [#uses=1 type=i15] [debug line = 222:22]
  %tmp_619 = add i15 %tmp_309_cast, %tmp_618, !dbg !1992 ; [#uses=1 type=i15] [debug line = 222:22]
  %tmp_721_cast = zext i15 %tmp_619 to i64, !dbg !1992 ; [#uses=1 type=i64] [debug line = 222:22]
  %shuffle_conv_3x3_add_14 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_721_cast, !dbg !1992 ; [#uses=1 type=float*] [debug line = 222:22]
  %shuffle_conv_3x3_loa_14 = load float* %shuffle_conv_3x3_add_14, align 4, !dbg !1992 ; [#uses=1 type=float] [debug line = 222:22]
  store float %shuffle_conv_3x3_loa_14, float* %ShuffleConvs_1_Shuff_87, align 4, !dbg !1992 ; [debug line = 222:22]
  call void @llvm.dbg.value(metadata !{i2 %i_6}, i64 0, metadata !2001), !dbg !1987 ; [debug line = 212:40] [debug variable = i]
  br label %6, !dbg !1987                         ; [debug line = 212:40]

.preheader30:                                     ; preds = %8, %.preheader30.preheader
  %i4 = phi i3 [ %i_7, %8 ], [ 0, %.preheader30.preheader ] ; [#uses=3 type=i3]
  %exitcond12 = icmp eq i3 %i4, -4, !dbg !1988    ; [#uses=1 type=i1] [debug line = 225:31]
  %empty_411 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind ; [#uses=0 type=i32]
  %i_7 = add i3 %i4, 1, !dbg !2002                ; [#uses=1 type=i3] [debug line = 225:40]
  br i1 %exitcond12, label %.preheader31.loopexit, label %8, !dbg !1988 ; [debug line = 225:31]

; <label>:8                                       ; preds = %.preheader30
  %tmp_142 = trunc i3 %i4 to i2                   ; [#uses=2 type=i2]
  %p_shl15 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_142, i5 0), !dbg !2003 ; [#uses=1 type=i7] [debug line = 226:22]
  %p_shl17_cast = zext i7 %p_shl15 to i8, !dbg !2003 ; [#uses=1 type=i8] [debug line = 226:22]
  %p_shl16 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_142, i3 0), !dbg !2003 ; [#uses=1 type=i5] [debug line = 226:22]
  %p_shl18_cast = zext i5 %p_shl16 to i8, !dbg !2003 ; [#uses=1 type=i8] [debug line = 226:22]
  %tmp_382 = sub i8 %p_shl17_cast, %p_shl18_cast, !dbg !2003 ; [#uses=4 type=i8] [debug line = 226:22]
  %tmp_505_cast1 = sext i8 %tmp_382 to i11, !dbg !2003 ; [#uses=1 type=i11] [debug line = 226:22]
  %tmp_505_cast = sext i8 %tmp_382 to i10, !dbg !2003 ; [#uses=3 type=i10] [debug line = 226:22]
  %tmp_505_cast_cast = sext i8 %tmp_382 to i9, !dbg !2003 ; [#uses=1 type=i9] [debug line = 226:22]
  %tmp39 = add i10 -424, %tmp_505_cast, !dbg !2003 ; [#uses=1 type=i10] [debug line = 226:22]
  %tmp_383 = add i10 %co2_cast2, %tmp39, !dbg !2003 ; [#uses=2 type=i10] [debug line = 226:22]
  %tmp_384_cast = zext i10 %tmp_383 to i13        ; [#uses=1 type=i13]
  %tmp_621 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_383, i2 0) ; [#uses=1 type=i12]
  %p_shl140_cast = zext i12 %tmp_621 to i13, !dbg !2003 ; [#uses=1 type=i13] [debug line = 226:22]
  %tmp_622 = sub i13 %p_shl140_cast, %tmp_384_cast, !dbg !2003 ; [#uses=1 type=i13] [debug line = 226:22]
  %tmp_623 = add i13 %tmp_622, %tmp_218_cast5, !dbg !2003 ; [#uses=2 type=i13] [debug line = 226:22]
  %tmp_728_cast = sext i13 %tmp_623 to i15, !dbg !2003 ; [#uses=1 type=i15] [debug line = 226:22]
  %p_shl139_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_623, i2 0), !dbg !2003 ; [#uses=1 type=i15] [debug line = 226:22]
  %tmp_624 = sub i15 %p_shl139_cast, %tmp_728_cast, !dbg !2003 ; [#uses=1 type=i15] [debug line = 226:22]
  %tmp_625 = add i15 %tmp_624, %tmp_309_cast, !dbg !2003 ; [#uses=1 type=i15] [debug line = 226:22]
  %tmp_731_cast = zext i15 %tmp_625 to i64, !dbg !2003 ; [#uses=1 type=i64] [debug line = 226:22]
  %shuffle_conv_3x3_add_15 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_731_cast, !dbg !2003 ; [#uses=1 type=float*] [debug line = 226:22]
  %shuffle_conv_3x3_loa_15 = load float* %shuffle_conv_3x3_add_15, align 4, !dbg !2003 ; [#uses=1 type=float] [debug line = 226:22]
  %tmp_385 = add i8 %tmp_382, %co2_cast119_cast, !dbg !2003 ; [#uses=2 type=i8] [debug line = 226:22]
  %tmp_509_cast = sext i8 %tmp_385 to i32, !dbg !2003 ; [#uses=1 type=i32] [debug line = 226:22]
  %tmp_386_cast = zext i32 %tmp_509_cast to i35   ; [#uses=1 type=i35]
  %tmp_626 = call i10 @_ssdm_op_BitConcatenate.i10.i8.i2(i8 %tmp_385, i2 0) ; [#uses=1 type=i10]
  %tmp_627 = sext i10 %tmp_626 to i34             ; [#uses=1 type=i34]
  %p_shl138_cast = zext i34 %tmp_627 to i35, !dbg !2005 ; [#uses=1 type=i35] [debug line = 227:22]
  %tmp_628 = sub i35 %p_shl138_cast, %tmp_386_cast, !dbg !2005 ; [#uses=1 type=i35] [debug line = 227:22]
  %tmp_734_cast = sext i35 %tmp_628 to i36, !dbg !2005 ; [#uses=1 type=i36] [debug line = 227:22]
  %tmp_629 = add i36 %tmp_734_cast, %tmp_218_cast4, !dbg !2005 ; [#uses=2 type=i36] [debug line = 227:22]
  %tmp_143 = trunc i36 %tmp_629 to i11, !dbg !2005 ; [#uses=1 type=i11] [debug line = 227:22]
  %tmp_144 = trunc i36 %tmp_629 to i9             ; [#uses=1 type=i9]
  %p_shl137_cast = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_144, i2 0), !dbg !2005 ; [#uses=1 type=i11] [debug line = 227:22]
  %tmp_630 = sub i11 %p_shl137_cast, %tmp_143, !dbg !2005 ; [#uses=1 type=i11] [debug line = 227:22]
  %tmp_631 = add i11 %tmp_630, %tmp_309_cast2, !dbg !2005 ; [#uses=1 type=i11] [debug line = 227:22]
  %tmp_738_cast = zext i11 %tmp_631 to i64, !dbg !2005 ; [#uses=5 type=i64] [debug line = 227:22]
  %ShuffleConvs_2_Downs_13 = getelementptr [864 x float]* @ShuffleConvs_2_Downs_6, i64 0, i64 %tmp_738_cast, !dbg !2005 ; [#uses=1 type=float*] [debug line = 227:22]
  %ShuffleConvs_2_Shuff_28 = getelementptr [864 x float]* @ShuffleConvs_2_Shuff_6, i64 0, i64 %tmp_738_cast, !dbg !2006 ; [#uses=1 type=float*] [debug line = 228:22]
  %ShuffleConvs_2_Shuff_29 = getelementptr [864 x float]* @ShuffleConvs_2_Shuff_15, i64 0, i64 %tmp_738_cast, !dbg !2007 ; [#uses=1 type=float*] [debug line = 230:22]
  %ShuffleConvs_2_Downs_14 = getelementptr [864 x float]* @ShuffleConvs_2_Downs_9, i64 0, i64 %tmp_738_cast, !dbg !2003 ; [#uses=1 type=float*] [debug line = 226:22]
  %ShuffleConvs_2_Shuff_30 = getelementptr [864 x float]* @ShuffleConvs_2_Shuff_9, i64 0, i64 %tmp_738_cast, !dbg !2008 ; [#uses=1 type=float*] [debug line = 229:22]
  store float %shuffle_conv_3x3_loa_15, float* %ShuffleConvs_2_Downs_14, align 4, !dbg !2003 ; [debug line = 226:22]
  %tmp40 = add i10 -328, %tmp_505_cast, !dbg !2005 ; [#uses=1 type=i10] [debug line = 227:22]
  %tmp_387 = add i10 %co2_cast2, %tmp40, !dbg !2005 ; [#uses=2 type=i10] [debug line = 227:22]
  %tmp_388_cast = zext i10 %tmp_387 to i13        ; [#uses=1 type=i13]
  %tmp_632 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_387, i2 0) ; [#uses=1 type=i12]
  %p_shl136_cast = zext i12 %tmp_632 to i13, !dbg !2005 ; [#uses=1 type=i13] [debug line = 227:22]
  %tmp_633 = sub i13 %p_shl136_cast, %tmp_388_cast, !dbg !2005 ; [#uses=1 type=i13] [debug line = 227:22]
  %tmp_634 = add i13 %tmp_633, %tmp_218_cast5, !dbg !2005 ; [#uses=2 type=i13] [debug line = 227:22]
  %tmp_741_cast = sext i13 %tmp_634 to i15, !dbg !2005 ; [#uses=1 type=i15] [debug line = 227:22]
  %p_shl135_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_634, i2 0), !dbg !2005 ; [#uses=1 type=i15] [debug line = 227:22]
  %tmp_635 = sub i15 %p_shl135_cast, %tmp_741_cast, !dbg !2005 ; [#uses=1 type=i15] [debug line = 227:22]
  %tmp_636 = add i15 %tmp_635, %tmp_309_cast, !dbg !2005 ; [#uses=1 type=i15] [debug line = 227:22]
  %tmp_744_cast = zext i15 %tmp_636 to i64, !dbg !2005 ; [#uses=1 type=i64] [debug line = 227:22]
  %shuffle_conv_3x3_add_16 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_744_cast, !dbg !2005 ; [#uses=1 type=float*] [debug line = 227:22]
  %shuffle_conv_3x3_loa_16 = load float* %shuffle_conv_3x3_add_16, align 4, !dbg !2005 ; [#uses=1 type=float] [debug line = 227:22]
  store float %shuffle_conv_3x3_loa_16, float* %ShuffleConvs_2_Downs_13, align 4, !dbg !2005 ; [debug line = 227:22]
  %tmp41 = add i10 -232, %tmp_505_cast, !dbg !2006 ; [#uses=1 type=i10] [debug line = 228:22]
  %tmp_389 = add i10 %co2_cast2, %tmp41, !dbg !2006 ; [#uses=2 type=i10] [debug line = 228:22]
  %tmp_390_cast = zext i10 %tmp_389 to i13        ; [#uses=1 type=i13]
  %tmp_637 = call i12 @_ssdm_op_BitConcatenate.i12.i10.i2(i10 %tmp_389, i2 0) ; [#uses=1 type=i12]
  %p_shl134_cast = zext i12 %tmp_637 to i13, !dbg !2006 ; [#uses=1 type=i13] [debug line = 228:22]
  %tmp_638 = sub i13 %p_shl134_cast, %tmp_390_cast, !dbg !2006 ; [#uses=1 type=i13] [debug line = 228:22]
  %tmp_639 = add i13 %tmp_638, %tmp_218_cast5, !dbg !2006 ; [#uses=2 type=i13] [debug line = 228:22]
  %tmp_747_cast = sext i13 %tmp_639 to i15, !dbg !2006 ; [#uses=1 type=i15] [debug line = 228:22]
  %p_shl133_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_639, i2 0), !dbg !2006 ; [#uses=1 type=i15] [debug line = 228:22]
  %tmp_640 = sub i15 %p_shl133_cast, %tmp_747_cast, !dbg !2006 ; [#uses=1 type=i15] [debug line = 228:22]
  %tmp_641 = add i15 %tmp_640, %tmp_309_cast, !dbg !2006 ; [#uses=1 type=i15] [debug line = 228:22]
  %tmp_750_cast = zext i15 %tmp_641 to i64, !dbg !2006 ; [#uses=1 type=i64] [debug line = 228:22]
  %shuffle_conv_3x3_add_17 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_750_cast, !dbg !2006 ; [#uses=1 type=float*] [debug line = 228:22]
  %shuffle_conv_3x3_loa_17 = load float* %shuffle_conv_3x3_add_17, align 4, !dbg !2006 ; [#uses=1 type=float] [debug line = 228:22]
  store float %shuffle_conv_3x3_loa_17, float* %ShuffleConvs_2_Shuff_28, align 4, !dbg !2006 ; [debug line = 228:22]
  %tmp42 = add i9 -136, %tmp_505_cast_cast, !dbg !2008 ; [#uses=1 type=i9] [debug line = 229:22]
  %tmp_391 = add i9 %co2_cast120_cast, %tmp42, !dbg !2008 ; [#uses=2 type=i9] [debug line = 229:22]
  %tmp_515_cast = sext i9 %tmp_391 to i10, !dbg !2008 ; [#uses=1 type=i10] [debug line = 229:22]
  %tmp_392_cast = zext i10 %tmp_515_cast to i13   ; [#uses=1 type=i13]
  %tmp_642 = call i11 @_ssdm_op_BitConcatenate.i11.i9.i2(i9 %tmp_391, i2 0) ; [#uses=1 type=i11]
  %tmp_643 = sext i11 %tmp_642 to i12             ; [#uses=1 type=i12]
  %p_shl132_cast = zext i12 %tmp_643 to i13, !dbg !2008 ; [#uses=1 type=i13] [debug line = 229:22]
  %tmp_644 = sub i13 %p_shl132_cast, %tmp_392_cast, !dbg !2008 ; [#uses=1 type=i13] [debug line = 229:22]
  %tmp_753_cast = sext i13 %tmp_644 to i14, !dbg !2008 ; [#uses=1 type=i14] [debug line = 229:22]
  %tmp_645 = add i14 %tmp_753_cast, %tmp_218_cast3, !dbg !2008 ; [#uses=2 type=i14] [debug line = 229:22]
  %tmp_754_cast = sext i14 %tmp_645 to i15, !dbg !2008 ; [#uses=1 type=i15] [debug line = 229:22]
  %tmp_145 = trunc i14 %tmp_645 to i13            ; [#uses=1 type=i13]
  %p_shl131_cast = call i15 @_ssdm_op_BitConcatenate.i15.i13.i2(i13 %tmp_145, i2 0), !dbg !2008 ; [#uses=1 type=i15] [debug line = 229:22]
  %tmp_646 = sub i15 %p_shl131_cast, %tmp_754_cast, !dbg !2008 ; [#uses=1 type=i15] [debug line = 229:22]
  %tmp_647 = add i15 %tmp_646, %tmp_309_cast, !dbg !2008 ; [#uses=1 type=i15] [debug line = 229:22]
  %tmp_757_cast = zext i15 %tmp_647 to i64, !dbg !2008 ; [#uses=1 type=i64] [debug line = 229:22]
  %shuffle_conv_3x3_add_18 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_757_cast, !dbg !2008 ; [#uses=1 type=float*] [debug line = 229:22]
  %shuffle_conv_3x3_loa_18 = load float* %shuffle_conv_3x3_add_18, align 4, !dbg !2008 ; [#uses=1 type=float] [debug line = 229:22]
  store float %shuffle_conv_3x3_loa_18, float* %ShuffleConvs_2_Shuff_30, align 4, !dbg !2008 ; [debug line = 229:22]
  %tmp43 = add i11 984, %tmp_505_cast1, !dbg !2007 ; [#uses=1 type=i11] [debug line = 230:22]
  %tmp_393 = add i11 %co2_cast1, %tmp43, !dbg !2007 ; [#uses=2 type=i11] [debug line = 230:22]
  %tmp_394_cast = zext i11 %tmp_393 to i14        ; [#uses=1 type=i14]
  %tmp_648 = call i13 @_ssdm_op_BitConcatenate.i13.i11.i2(i11 %tmp_393, i2 0) ; [#uses=1 type=i13]
  %p_shl130_cast = zext i13 %tmp_648 to i14, !dbg !2007 ; [#uses=1 type=i14] [debug line = 230:22]
  %tmp_649 = sub i14 %p_shl130_cast, %tmp_394_cast, !dbg !2007 ; [#uses=1 type=i14] [debug line = 230:22]
  %tmp_759_cast = sext i14 %tmp_649 to i15, !dbg !2007 ; [#uses=1 type=i15] [debug line = 230:22]
  %tmp_650 = add i15 %tmp_759_cast, %tmp_218_cast2, !dbg !2007 ; [#uses=2 type=i15] [debug line = 230:22]
  %tmp_146 = shl i15 %tmp_650, 2, !dbg !2007      ; [#uses=1 type=i15] [debug line = 230:22]
  %tmp_651 = sub i15 %tmp_146, %tmp_650, !dbg !2007 ; [#uses=1 type=i15] [debug line = 230:22]
  %tmp_652 = add i15 %tmp_651, %tmp_309_cast, !dbg !2007 ; [#uses=1 type=i15] [debug line = 230:22]
  %tmp_763_cast = zext i15 %tmp_652 to i64, !dbg !2007 ; [#uses=1 type=i64] [debug line = 230:22]
  %shuffle_conv_3x3_add_19 = getelementptr [9720 x float]* %shuffle_conv_3x3, i64 0, i64 %tmp_763_cast, !dbg !2007 ; [#uses=1 type=float*] [debug line = 230:22]
  %shuffle_conv_3x3_loa_19 = load float* %shuffle_conv_3x3_add_19, align 4, !dbg !2007 ; [#uses=1 type=float] [debug line = 230:22]
  store float %shuffle_conv_3x3_loa_19, float* %ShuffleConvs_2_Shuff_29, align 4, !dbg !2007 ; [debug line = 230:22]
  call void @llvm.dbg.value(metadata !{i3 %i_7}, i64 0, metadata !2009), !dbg !2002 ; [debug line = 225:40] [debug variable = i]
  br label %.preheader30, !dbg !2002              ; [debug line = 225:40]

.preheader29.loopexit:                            ; preds = %.preheader28
  br label %.preheader29

.preheader29:                                     ; preds = %.preheader29.loopexit, %.preheader29.preheader
  %i5 = phi i5 [ %i_5, %.preheader29.loopexit ], [ 0, %.preheader29.preheader ] ; [#uses=13 type=i5]
  %i5_cast1 = zext i5 %i5 to i12, !dbg !1967      ; [#uses=12 type=i12] [debug line = 238:19]
  %i5_cast2 = zext i5 %i5 to i11, !dbg !1967      ; [#uses=12 type=i11] [debug line = 238:19]
  %i5_cast105_cast1 = zext i5 %i5 to i9, !dbg !1967 ; [#uses=9 type=i9] [debug line = 238:19]
  %i5_cast105_cast = zext i5 %i5 to i10, !dbg !1967 ; [#uses=11 type=i10] [debug line = 238:19]
  %i5_cast104_cast1 = zext i5 %i5 to i8, !dbg !1967 ; [#uses=7 type=i8] [debug line = 238:19]
  %i5_cast102_cast = zext i5 %i5 to i7, !dbg !1967 ; [#uses=4 type=i7] [debug line = 238:19]
  %i5_cast101_cast = zext i5 %i5 to i6, !dbg !1967 ; [#uses=1 type=i6] [debug line = 238:19]
  %exitcond3 = icmp eq i5 %i5, -8, !dbg !1967     ; [#uses=1 type=i1] [debug line = 238:19]
  %empty_412 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) nounwind ; [#uses=0 type=i32]
  %i_5 = add i5 %i5, 1, !dbg !2010                ; [#uses=1 type=i5] [debug line = 238:27]
  call void @llvm.dbg.value(metadata !{i5 %i_5}, i64 0, metadata !2011), !dbg !2010 ; [debug line = 238:27] [debug variable = i]
  br i1 %exitcond3, label %.preheader27.preheader, label %9, !dbg !1967 ; [debug line = 238:19]

.preheader27.preheader:                           ; preds = %.preheader29
  br label %.preheader27, !dbg !2012              ; [debug line = 303:19]

; <label>:9                                       ; preds = %.preheader29
  %tmp_189 = zext i5 %i5 to i64, !dbg !2014       ; [#uses=16 type=i64] [debug line = 239:10]
  %bias_addr = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_189, !dbg !2014 ; [#uses=1 type=float*] [debug line = 239:10]
  %bias_load = load float* %bias_addr, align 4, !dbg !2014 ; [#uses=1 type=float] [debug line = 239:10]
  %conv1_bias_addr = getelementptr inbounds [24 x float]* @conv1_bias, i64 0, i64 %tmp_189, !dbg !2014 ; [#uses=1 type=float*] [debug line = 239:10]
  store float %bias_load, float* %conv1_bias_addr, align 4, !dbg !2014 ; [debug line = 239:10]
  %tmp_190 = add i6 %i5_cast101_cast, 24, !dbg !2016 ; [#uses=1 type=i6] [debug line = 240:10]
  %tmp_191 = zext i6 %tmp_190 to i64, !dbg !2016  ; [#uses=1 type=i64] [debug line = 240:10]
  %bias_addr_1 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_191, !dbg !2016 ; [#uses=1 type=float*] [debug line = 240:10]
  %bias_load_1 = load float* %bias_addr_1, align 4, !dbg !2016 ; [#uses=1 type=float] [debug line = 240:10]
  %ShuffleConvs_0_Downs_15 = getelementptr inbounds [24 x float]* @ShuffleConvs_0_Downs_3, i64 0, i64 %tmp_189, !dbg !2016 ; [#uses=1 type=float*] [debug line = 240:10]
  store float %bias_load_1, float* %ShuffleConvs_0_Downs_15, align 4, !dbg !2016 ; [debug line = 240:10]
  %tmp_192 = add i7 %i5_cast102_cast, 48, !dbg !2017 ; [#uses=1 type=i7] [debug line = 241:10]
  %tmp_193 = zext i7 %tmp_192 to i64, !dbg !2017  ; [#uses=1 type=i64] [debug line = 241:10]
  %bias_addr_2 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_193, !dbg !2017 ; [#uses=1 type=float*] [debug line = 241:10]
  %bias_load_2 = load float* %bias_addr_2, align 4, !dbg !2017 ; [#uses=1 type=float] [debug line = 241:10]
  %ShuffleConvs_0_Downs_16 = getelementptr inbounds [24 x float]* @ShuffleConvs_0_Downs_5, i64 0, i64 %tmp_189, !dbg !2017 ; [#uses=1 type=float*] [debug line = 241:10]
  store float %bias_load_2, float* %ShuffleConvs_0_Downs_16, align 4, !dbg !2017 ; [debug line = 241:10]
  %tmp_194 = add i7 %i5_cast102_cast, -56, !dbg !2018 ; [#uses=1 type=i7] [debug line = 242:10]
  %tmp_195 = zext i7 %tmp_194 to i64, !dbg !2018  ; [#uses=1 type=i64] [debug line = 242:10]
  %bias_addr_3 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_195, !dbg !2018 ; [#uses=1 type=float*] [debug line = 242:10]
  %bias_load_3 = load float* %bias_addr_3, align 4, !dbg !2018 ; [#uses=1 type=float] [debug line = 242:10]
  %ShuffleConvs_0_Downs_17 = getelementptr inbounds [24 x float]* @ShuffleConvs_0_Downs, i64 0, i64 %tmp_189, !dbg !2018 ; [#uses=1 type=float*] [debug line = 242:10]
  store float %bias_load_3, float* %ShuffleConvs_0_Downs_17, align 4, !dbg !2018 ; [debug line = 242:10]
  %tmp_196 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 true, i5 %i5), !dbg !2019 ; [#uses=1 type=i6] [debug line = 243:10]
  %tmp_206_cast = sext i6 %tmp_196 to i7, !dbg !2019 ; [#uses=1 type=i7] [debug line = 243:10]
  %tmp_197 = zext i7 %tmp_206_cast to i64, !dbg !2019 ; [#uses=1 type=i64] [debug line = 243:10]
  %bias_addr_4 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_197, !dbg !2019 ; [#uses=1 type=float*] [debug line = 243:10]
  %bias_load_4 = load float* %bias_addr_4, align 4, !dbg !2019 ; [#uses=1 type=float] [debug line = 243:10]
  %ShuffleConvs_0_Downs_18 = getelementptr inbounds [24 x float]* @ShuffleConvs_0_Downs_1, i64 0, i64 %tmp_189, !dbg !2019 ; [#uses=1 type=float*] [debug line = 243:10]
  store float %bias_load_4, float* %ShuffleConvs_0_Downs_18, align 4, !dbg !2019 ; [debug line = 243:10]
  %tmp_198 = add i8 %i5_cast104_cast1, 120, !dbg !2020 ; [#uses=1 type=i8] [debug line = 244:10]
  %tmp_199 = zext i8 %tmp_198 to i64, !dbg !2020  ; [#uses=1 type=i64] [debug line = 244:10]
  %bias_addr_5 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_199, !dbg !2020 ; [#uses=1 type=float*] [debug line = 244:10]
  %bias_load_5 = load float* %bias_addr_5, align 4, !dbg !2020 ; [#uses=1 type=float] [debug line = 244:10]
  %ShuffleConvs_0_Downs_19 = getelementptr inbounds [24 x float]* @ShuffleConvs_0_Downs_4, i64 0, i64 %tmp_189, !dbg !2020 ; [#uses=1 type=float*] [debug line = 244:10]
  store float %bias_load_5, float* %ShuffleConvs_0_Downs_19, align 4, !dbg !2020 ; [debug line = 244:10]
  %tmp_200 = add i8 %i5_cast104_cast1, -112, !dbg !2021 ; [#uses=1 type=i8] [debug line = 245:10]
  %tmp_201 = zext i8 %tmp_200 to i64, !dbg !2021  ; [#uses=1 type=i64] [debug line = 245:10]
  %bias_addr_6 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_201, !dbg !2021 ; [#uses=1 type=float*] [debug line = 245:10]
  %bias_load_6 = load float* %bias_addr_6, align 4, !dbg !2021 ; [#uses=1 type=float] [debug line = 245:10]
  %ShuffleConvs_0_Shuff_31 = getelementptr inbounds [24 x float]* @ShuffleConvs_0_Shuff_19, i64 0, i64 %tmp_189, !dbg !2021 ; [#uses=1 type=float*] [debug line = 245:10]
  store float %bias_load_6, float* %ShuffleConvs_0_Shuff_31, align 4, !dbg !2021 ; [debug line = 245:10]
  %tmp_202 = add i8 %i5_cast104_cast1, -88, !dbg !2022 ; [#uses=1 type=i8] [debug line = 246:10]
  %tmp_203 = zext i8 %tmp_202 to i64, !dbg !2022  ; [#uses=1 type=i64] [debug line = 246:10]
  %bias_addr_7 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_203, !dbg !2022 ; [#uses=1 type=float*] [debug line = 246:10]
  %bias_load_7 = load float* %bias_addr_7, align 4, !dbg !2022 ; [#uses=1 type=float] [debug line = 246:10]
  %ShuffleConvs_0_Shuff_32 = getelementptr inbounds [24 x float]* @ShuffleConvs_0_Shuff_20, i64 0, i64 %tmp_189, !dbg !2022 ; [#uses=1 type=float*] [debug line = 246:10]
  store float %bias_load_7, float* %ShuffleConvs_0_Shuff_32, align 4, !dbg !2022 ; [debug line = 246:10]
  %tmp_204 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 -2, i5 %i5), !dbg !2023 ; [#uses=1 type=i7] [debug line = 247:10]
  %tmp_214_cast = sext i7 %tmp_204 to i8, !dbg !2023 ; [#uses=1 type=i8] [debug line = 247:10]
  %tmp_205 = zext i8 %tmp_214_cast to i64, !dbg !2023 ; [#uses=1 type=i64] [debug line = 247:10]
  %bias_addr_8 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_205, !dbg !2023 ; [#uses=1 type=float*] [debug line = 247:10]
  %bias_load_8 = load float* %bias_addr_8, align 4, !dbg !2023 ; [#uses=1 type=float] [debug line = 247:10]
  %ShuffleConvs_0_Shuff_33 = getelementptr inbounds [24 x float]* @ShuffleConvs_0_Shuff_21, i64 0, i64 %tmp_189, !dbg !2023 ; [#uses=1 type=float*] [debug line = 247:10]
  store float %bias_load_8, float* %ShuffleConvs_0_Shuff_33, align 4, !dbg !2023 ; [debug line = 247:10]
  %tmp_206 = add i7 %i5_cast102_cast, -40, !dbg !2024 ; [#uses=1 type=i7] [debug line = 248:10]
  %tmp_216_cast = sext i7 %tmp_206 to i8, !dbg !2024 ; [#uses=1 type=i8] [debug line = 248:10]
  %tmp_207 = zext i8 %tmp_216_cast to i64, !dbg !2024 ; [#uses=1 type=i64] [debug line = 248:10]
  %bias_addr_9 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_207, !dbg !2024 ; [#uses=1 type=float*] [debug line = 248:10]
  %bias_load_9 = load float* %bias_addr_9, align 4, !dbg !2024 ; [#uses=1 type=float] [debug line = 248:10]
  %ShuffleConvs_0_Shuff_34 = getelementptr inbounds [24 x float]* @ShuffleConvs_0_Shuff_22, i64 0, i64 %tmp_189, !dbg !2024 ; [#uses=1 type=float*] [debug line = 248:10]
  store float %bias_load_9, float* %ShuffleConvs_0_Shuff_34, align 4, !dbg !2024 ; [debug line = 248:10]
  %tmp_208 = add i9 %i5_cast105_cast1, 240, !dbg !2025 ; [#uses=1 type=i9] [debug line = 249:10]
  %tmp_209 = zext i9 %tmp_208 to i64, !dbg !2025  ; [#uses=1 type=i64] [debug line = 249:10]
  %bias_addr_10 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_209, !dbg !2025 ; [#uses=1 type=float*] [debug line = 249:10]
  %bias_load_10 = load float* %bias_addr_10, align 4, !dbg !2025 ; [#uses=1 type=float] [debug line = 249:10]
  %ShuffleConvs_0_Shuff_35 = getelementptr inbounds [24 x float]* @ShuffleConvs_0_Shuff_1, i64 0, i64 %tmp_189, !dbg !2025 ; [#uses=1 type=float*] [debug line = 249:10]
  store float %bias_load_10, float* %ShuffleConvs_0_Shuff_35, align 4, !dbg !2025 ; [debug line = 249:10]
  %tmp_210 = add i9 %i5_cast105_cast1, -248, !dbg !2026 ; [#uses=1 type=i9] [debug line = 250:10]
  %tmp_211 = zext i9 %tmp_210 to i64, !dbg !2026  ; [#uses=1 type=i64] [debug line = 250:10]
  %bias_addr_11 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_211, !dbg !2026 ; [#uses=1 type=float*] [debug line = 250:10]
  %bias_load_11 = load float* %bias_addr_11, align 4, !dbg !2026 ; [#uses=1 type=float] [debug line = 250:10]
  %ShuffleConvs_0_Shuff_36 = getelementptr inbounds [24 x float]* @ShuffleConvs_0_Shuff_3, i64 0, i64 %tmp_189, !dbg !2026 ; [#uses=1 type=float*] [debug line = 250:10]
  store float %bias_load_11, float* %ShuffleConvs_0_Shuff_36, align 4, !dbg !2026 ; [debug line = 250:10]
  %tmp_212 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 -7, i5 %i5), !dbg !2027 ; [#uses=1 type=i9] [debug line = 251:10]
  %tmp_213 = zext i9 %tmp_212 to i64, !dbg !2027  ; [#uses=1 type=i64] [debug line = 251:10]
  %bias_addr_12 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_213, !dbg !2027 ; [#uses=1 type=float*] [debug line = 251:10]
  %bias_load_12 = load float* %bias_addr_12, align 4, !dbg !2027 ; [#uses=1 type=float] [debug line = 251:10]
  %ShuffleConvs_0_Shuff_37 = getelementptr inbounds [24 x float]* @ShuffleConvs_0_Shuff_4, i64 0, i64 %tmp_189, !dbg !2027 ; [#uses=1 type=float*] [debug line = 251:10]
  store float %bias_load_12, float* %ShuffleConvs_0_Shuff_37, align 4, !dbg !2027 ; [debug line = 251:10]
  %tmp_214 = add i9 %i5_cast105_cast1, -200, !dbg !2028 ; [#uses=1 type=i9] [debug line = 252:10]
  %tmp_215 = zext i9 %tmp_214 to i64, !dbg !2028  ; [#uses=1 type=i64] [debug line = 252:10]
  %bias_addr_13 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_215, !dbg !2028 ; [#uses=1 type=float*] [debug line = 252:10]
  %bias_load_13 = load float* %bias_addr_13, align 4, !dbg !2028 ; [#uses=1 type=float] [debug line = 252:10]
  %ShuffleConvs_0_Shuff_38 = getelementptr inbounds [24 x float]* @ShuffleConvs_0_Shuff_17, i64 0, i64 %tmp_189, !dbg !2028 ; [#uses=1 type=float*] [debug line = 252:10]
  store float %bias_load_13, float* %ShuffleConvs_0_Shuff_38, align 4, !dbg !2028 ; [debug line = 252:10]
  %tmp_216 = add i9 %i5_cast105_cast1, -176, !dbg !2029 ; [#uses=1 type=i9] [debug line = 253:10]
  %tmp_217 = zext i9 %tmp_216 to i64, !dbg !2029  ; [#uses=1 type=i64] [debug line = 253:10]
  %bias_addr_14 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_217, !dbg !2029 ; [#uses=1 type=float*] [debug line = 253:10]
  %bias_load_14 = load float* %bias_addr_14, align 4, !dbg !2029 ; [#uses=1 type=float] [debug line = 253:10]
  %ShuffleConvs_0_Shuff_39 = getelementptr inbounds [24 x float]* @ShuffleConvs_0_Shuff, i64 0, i64 %tmp_189, !dbg !2029 ; [#uses=1 type=float*] [debug line = 253:10]
  store float %bias_load_14, float* %ShuffleConvs_0_Shuff_39, align 4, !dbg !2029 ; [debug line = 253:10]
  br label %10, !dbg !2030                        ; [debug line = 254:23]

; <label>:10                                      ; preds = %11, %9
  %k = phi i2 [ 0, %9 ], [ %k_1, %11 ]            ; [#uses=3 type=i2]
  %exitcond6 = icmp eq i2 %k, -2, !dbg !2030      ; [#uses=1 type=i1] [debug line = 254:23]
  %empty_413 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind ; [#uses=0 type=i32]
  %k_1 = add i2 %k, 1, !dbg !2032                 ; [#uses=1 type=i2] [debug line = 254:30]
  br i1 %exitcond6, label %.preheader28.preheader, label %11, !dbg !2030 ; [debug line = 254:23]

.preheader28.preheader:                           ; preds = %10
  br label %.preheader28, !dbg !2033              ; [debug line = 286:23]

; <label>:11                                      ; preds = %10
  %tmp_129 = trunc i2 %k to i1                    ; [#uses=2 type=i1]
  %p_shl4 = call i6 @_ssdm_op_BitConcatenate.i6.i1.i5(i1 %tmp_129, i5 0), !dbg !2035 ; [#uses=1 type=i6] [debug line = 255:14]
  %p_shl4_cast = zext i6 %p_shl4 to i7, !dbg !2035 ; [#uses=1 type=i7] [debug line = 255:14]
  %p_shl5 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 %tmp_129, i3 0), !dbg !2035 ; [#uses=1 type=i4] [debug line = 255:14]
  %p_shl5_cast = zext i4 %p_shl5 to i7, !dbg !2035 ; [#uses=1 type=i7] [debug line = 255:14]
  %tmp_238 = sub i7 %p_shl4_cast, %p_shl5_cast, !dbg !2035 ; [#uses=6 type=i7] [debug line = 255:14]
  %tmp_238_cast1 = sext i7 %tmp_238 to i11, !dbg !2035 ; [#uses=11 type=i11] [debug line = 255:14]
  %tmp_238_cast97_cast = sext i7 %tmp_238 to i10, !dbg !2035 ; [#uses=10 type=i10] [debug line = 255:14]
  %tmp_238_cast96_cast1 = sext i7 %tmp_238 to i8, !dbg !2035 ; [#uses=3 type=i8] [debug line = 255:14]
  %tmp_238_cast96_cast = sext i7 %tmp_238 to i9, !dbg !2035 ; [#uses=4 type=i9] [debug line = 255:14]
  %tmp44 = add i9 -152, %tmp_238_cast96_cast, !dbg !2035 ; [#uses=1 type=i9] [debug line = 255:14]
  %tmp_240 = add i9 %i5_cast105_cast1, %tmp44, !dbg !2035 ; [#uses=1 type=i9] [debug line = 255:14]
  %tmp_241 = zext i9 %tmp_240 to i64, !dbg !2035  ; [#uses=1 type=i64] [debug line = 255:14]
  %bias_addr_17 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_241, !dbg !2035 ; [#uses=1 type=float*] [debug line = 255:14]
  %bias_load_16 = load float* %bias_addr_17, align 4, !dbg !2035 ; [#uses=1 type=float] [debug line = 255:14]
  %tmp_242 = add i7 %tmp_238, %i5_cast102_cast, !dbg !2035 ; [#uses=1 type=i7] [debug line = 255:14]
  %tmp_242_cast = sext i7 %tmp_242 to i32, !dbg !2035 ; [#uses=1 type=i32] [debug line = 255:14]
  %tmp_243 = zext i32 %tmp_242_cast to i64, !dbg !2035 ; [#uses=29 type=i64] [debug line = 255:14]
  %ShuffleConvs_1_Downs_15 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Downs_3, i64 0, i64 %tmp_243, !dbg !2035 ; [#uses=1 type=float*] [debug line = 255:14]
  store float %bias_load_16, float* %ShuffleConvs_1_Downs_15, align 4, !dbg !2035 ; [debug line = 255:14]
  %tmp45 = add i8 -104, %tmp_238_cast96_cast1, !dbg !2037 ; [#uses=1 type=i8] [debug line = 256:14]
  %tmp_245 = add i8 %i5_cast104_cast1, %tmp45, !dbg !2037 ; [#uses=1 type=i8] [debug line = 256:14]
  %tmp_245_cast = sext i8 %tmp_245 to i9, !dbg !2037 ; [#uses=1 type=i9] [debug line = 256:14]
  %tmp_246 = zext i9 %tmp_245_cast to i64, !dbg !2037 ; [#uses=1 type=i64] [debug line = 256:14]
  %bias_addr_18 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_246, !dbg !2037 ; [#uses=1 type=float*] [debug line = 256:14]
  %bias_load_17 = load float* %bias_addr_18, align 4, !dbg !2037 ; [#uses=1 type=float] [debug line = 256:14]
  %ShuffleConvs_1_Downs_16 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Downs_5, i64 0, i64 %tmp_243, !dbg !2037 ; [#uses=1 type=float*] [debug line = 256:14]
  store float %bias_load_17, float* %ShuffleConvs_1_Downs_16, align 4, !dbg !2037 ; [debug line = 256:14]
  %tmp46 = add i8 -56, %tmp_238_cast96_cast1, !dbg !2038 ; [#uses=1 type=i8] [debug line = 257:14]
  %tmp_248 = add i8 %i5_cast104_cast1, %tmp46, !dbg !2038 ; [#uses=1 type=i8] [debug line = 257:14]
  %tmp_248_cast = sext i8 %tmp_248 to i9, !dbg !2038 ; [#uses=1 type=i9] [debug line = 257:14]
  %tmp_249 = zext i9 %tmp_248_cast to i64, !dbg !2038 ; [#uses=1 type=i64] [debug line = 257:14]
  %bias_addr_19 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_249, !dbg !2038 ; [#uses=1 type=float*] [debug line = 257:14]
  %bias_load_18 = load float* %bias_addr_19, align 4, !dbg !2038 ; [#uses=1 type=float] [debug line = 257:14]
  %ShuffleConvs_1_Downs_17 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Downs, i64 0, i64 %tmp_243, !dbg !2038 ; [#uses=1 type=float*] [debug line = 257:14]
  store float %bias_load_18, float* %ShuffleConvs_1_Downs_17, align 4, !dbg !2038 ; [debug line = 257:14]
  %tmp47 = add i10 504, %tmp_238_cast97_cast, !dbg !2039 ; [#uses=1 type=i10] [debug line = 258:14]
  %tmp_251 = add i10 %i5_cast105_cast, %tmp47, !dbg !2039 ; [#uses=1 type=i10] [debug line = 258:14]
  %tmp_252 = zext i10 %tmp_251 to i64, !dbg !2039 ; [#uses=1 type=i64] [debug line = 258:14]
  %bias_addr_20 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_252, !dbg !2039 ; [#uses=1 type=float*] [debug line = 258:14]
  %bias_load_19 = load float* %bias_addr_20, align 4, !dbg !2039 ; [#uses=1 type=float] [debug line = 258:14]
  %ShuffleConvs_1_Downs_18 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Downs_1, i64 0, i64 %tmp_243, !dbg !2039 ; [#uses=1 type=float*] [debug line = 258:14]
  store float %bias_load_19, float* %ShuffleConvs_1_Downs_18, align 4, !dbg !2039 ; [debug line = 258:14]
  %tmp48 = add i10 -472, %tmp_238_cast97_cast, !dbg !2040 ; [#uses=1 type=i10] [debug line = 259:14]
  %tmp_254 = add i10 %i5_cast105_cast, %tmp48, !dbg !2040 ; [#uses=1 type=i10] [debug line = 259:14]
  %tmp_255 = zext i10 %tmp_254 to i64, !dbg !2040 ; [#uses=1 type=i64] [debug line = 259:14]
  %bias_addr_21 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_255, !dbg !2040 ; [#uses=1 type=float*] [debug line = 259:14]
  %bias_load_20 = load float* %bias_addr_21, align 4, !dbg !2040 ; [#uses=1 type=float] [debug line = 259:14]
  %ShuffleConvs_1_Downs_19 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Downs_4, i64 0, i64 %tmp_243, !dbg !2040 ; [#uses=1 type=float*] [debug line = 259:14]
  store float %bias_load_20, float* %ShuffleConvs_1_Downs_19, align 4, !dbg !2040 ; [debug line = 259:14]
  %tmp49 = add i10 -424, %tmp_238_cast97_cast, !dbg !2041 ; [#uses=1 type=i10] [debug line = 260:14]
  %tmp_257 = add i10 %i5_cast105_cast, %tmp49, !dbg !2041 ; [#uses=1 type=i10] [debug line = 260:14]
  %tmp_258 = zext i10 %tmp_257 to i64, !dbg !2041 ; [#uses=1 type=i64] [debug line = 260:14]
  %bias_addr_22 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_258, !dbg !2041 ; [#uses=1 type=float*] [debug line = 260:14]
  %bias_load_21 = load float* %bias_addr_22, align 4, !dbg !2041 ; [#uses=1 type=float] [debug line = 260:14]
  %ShuffleConvs_1_Shuff_95 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_51, i64 0, i64 %tmp_243, !dbg !2041 ; [#uses=1 type=float*] [debug line = 260:14]
  store float %bias_load_21, float* %ShuffleConvs_1_Shuff_95, align 4, !dbg !2041 ; [debug line = 260:14]
  %tmp50 = add i10 -376, %tmp_238_cast97_cast, !dbg !2042 ; [#uses=1 type=i10] [debug line = 261:14]
  %tmp_260 = add i10 %i5_cast105_cast, %tmp50, !dbg !2042 ; [#uses=1 type=i10] [debug line = 261:14]
  %tmp_261 = zext i10 %tmp_260 to i64, !dbg !2042 ; [#uses=1 type=i64] [debug line = 261:14]
  %bias_addr_23 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_261, !dbg !2042 ; [#uses=1 type=float*] [debug line = 261:14]
  %bias_load_22 = load float* %bias_addr_23, align 4, !dbg !2042 ; [#uses=1 type=float] [debug line = 261:14]
  %ShuffleConvs_1_Shuff_96 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_52, i64 0, i64 %tmp_243, !dbg !2042 ; [#uses=1 type=float*] [debug line = 261:14]
  store float %bias_load_22, float* %ShuffleConvs_1_Shuff_96, align 4, !dbg !2042 ; [debug line = 261:14]
  %tmp51 = add i10 -328, %tmp_238_cast97_cast, !dbg !2043 ; [#uses=1 type=i10] [debug line = 262:14]
  %tmp_263 = add i10 %i5_cast105_cast, %tmp51, !dbg !2043 ; [#uses=1 type=i10] [debug line = 262:14]
  %tmp_264 = zext i10 %tmp_263 to i64, !dbg !2043 ; [#uses=1 type=i64] [debug line = 262:14]
  %bias_addr_24 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_264, !dbg !2043 ; [#uses=1 type=float*] [debug line = 262:14]
  %bias_load_23 = load float* %bias_addr_24, align 4, !dbg !2043 ; [#uses=1 type=float] [debug line = 262:14]
  %ShuffleConvs_1_Shuff_97 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_53, i64 0, i64 %tmp_243, !dbg !2043 ; [#uses=1 type=float*] [debug line = 262:14]
  store float %bias_load_23, float* %ShuffleConvs_1_Shuff_97, align 4, !dbg !2043 ; [debug line = 262:14]
  %tmp52 = add i10 -280, %tmp_238_cast97_cast, !dbg !2044 ; [#uses=1 type=i10] [debug line = 263:14]
  %tmp_266 = add i10 %i5_cast105_cast, %tmp52, !dbg !2044 ; [#uses=1 type=i10] [debug line = 263:14]
  %tmp_267 = zext i10 %tmp_266 to i64, !dbg !2044 ; [#uses=1 type=i64] [debug line = 263:14]
  %bias_addr_25 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_267, !dbg !2044 ; [#uses=1 type=float*] [debug line = 263:14]
  %bias_load_24 = load float* %bias_addr_25, align 4, !dbg !2044 ; [#uses=1 type=float] [debug line = 263:14]
  %ShuffleConvs_1_Shuff_98 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_54, i64 0, i64 %tmp_243, !dbg !2044 ; [#uses=1 type=float*] [debug line = 263:14]
  store float %bias_load_24, float* %ShuffleConvs_1_Shuff_98, align 4, !dbg !2044 ; [debug line = 263:14]
  %tmp53 = add i9 -232, %tmp_238_cast96_cast, !dbg !2045 ; [#uses=1 type=i9] [debug line = 264:14]
  %tmp_269 = add i9 %i5_cast105_cast1, %tmp53, !dbg !2045 ; [#uses=1 type=i9] [debug line = 264:14]
  %tmp_269_cast = sext i9 %tmp_269 to i10, !dbg !2045 ; [#uses=1 type=i10] [debug line = 264:14]
  %tmp_270 = zext i10 %tmp_269_cast to i64, !dbg !2045 ; [#uses=1 type=i64] [debug line = 264:14]
  %bias_addr_26 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_270, !dbg !2045 ; [#uses=1 type=float*] [debug line = 264:14]
  %bias_load_25 = load float* %bias_addr_26, align 4, !dbg !2045 ; [#uses=1 type=float] [debug line = 264:14]
  %ShuffleConvs_1_Shuff_99 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_56, i64 0, i64 %tmp_243, !dbg !2045 ; [#uses=1 type=float*] [debug line = 264:14]
  store float %bias_load_25, float* %ShuffleConvs_1_Shuff_99, align 4, !dbg !2045 ; [debug line = 264:14]
  %tmp54 = add i9 -184, %tmp_238_cast96_cast, !dbg !2046 ; [#uses=1 type=i9] [debug line = 265:14]
  %tmp_271 = add i9 %i5_cast105_cast1, %tmp54, !dbg !2046 ; [#uses=1 type=i9] [debug line = 265:14]
  %tmp_272_cast = sext i9 %tmp_271 to i10, !dbg !2046 ; [#uses=1 type=i10] [debug line = 265:14]
  %tmp_272 = zext i10 %tmp_272_cast to i64, !dbg !2046 ; [#uses=1 type=i64] [debug line = 265:14]
  %bias_addr_27 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_272, !dbg !2046 ; [#uses=1 type=float*] [debug line = 265:14]
  %bias_load_26 = load float* %bias_addr_27, align 4, !dbg !2046 ; [#uses=1 type=float] [debug line = 265:14]
  %ShuffleConvs_1_Shuff_100 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_57, i64 0, i64 %tmp_243, !dbg !2046 ; [#uses=1 type=float*] [debug line = 265:14]
  store float %bias_load_26, float* %ShuffleConvs_1_Shuff_100, align 4, !dbg !2046 ; [debug line = 265:14]
  %tmp55 = add i9 -136, %tmp_238_cast96_cast, !dbg !2047 ; [#uses=1 type=i9] [debug line = 266:14]
  %tmp_273 = add i9 %i5_cast105_cast1, %tmp55, !dbg !2047 ; [#uses=1 type=i9] [debug line = 266:14]
  %tmp_275_cast = sext i9 %tmp_273 to i10, !dbg !2047 ; [#uses=1 type=i10] [debug line = 266:14]
  %tmp_274 = zext i10 %tmp_275_cast to i64, !dbg !2047 ; [#uses=1 type=i64] [debug line = 266:14]
  %bias_addr_28 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_274, !dbg !2047 ; [#uses=1 type=float*] [debug line = 266:14]
  %bias_load_27 = load float* %bias_addr_28, align 4, !dbg !2047 ; [#uses=1 type=float] [debug line = 266:14]
  %ShuffleConvs_1_Shuff_101 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_58, i64 0, i64 %tmp_243, !dbg !2047 ; [#uses=1 type=float*] [debug line = 266:14]
  store float %bias_load_27, float* %ShuffleConvs_1_Shuff_101, align 4, !dbg !2047 ; [debug line = 266:14]
  %tmp56 = add i8 -88, %tmp_238_cast96_cast1, !dbg !2048 ; [#uses=1 type=i8] [debug line = 267:14]
  %tmp_275 = add i8 %i5_cast104_cast1, %tmp56, !dbg !2048 ; [#uses=1 type=i8] [debug line = 267:14]
  %tmp_278_cast = sext i8 %tmp_275 to i10, !dbg !2048 ; [#uses=1 type=i10] [debug line = 267:14]
  %tmp_276 = zext i10 %tmp_278_cast to i64, !dbg !2048 ; [#uses=1 type=i64] [debug line = 267:14]
  %bias_addr_29 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_276, !dbg !2048 ; [#uses=1 type=float*] [debug line = 267:14]
  %bias_load_28 = load float* %bias_addr_29, align 4, !dbg !2048 ; [#uses=1 type=float] [debug line = 267:14]
  %ShuffleConvs_1_Shuff_102 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_59, i64 0, i64 %tmp_243, !dbg !2048 ; [#uses=1 type=float*] [debug line = 267:14]
  store float %bias_load_28, float* %ShuffleConvs_1_Shuff_102, align 4, !dbg !2048 ; [debug line = 267:14]
  %tmp57 = add i7 -40, %tmp_238, !dbg !2049       ; [#uses=1 type=i7] [debug line = 268:14]
  %tmp57_cast1 = sext i7 %tmp57 to i10, !dbg !2049 ; [#uses=1 type=i10] [debug line = 268:14]
  %tmp57_cast = zext i10 %tmp57_cast1 to i11, !dbg !2049 ; [#uses=1 type=i11] [debug line = 268:14]
  %tmp_277 = add i11 %i5_cast2, %tmp57_cast, !dbg !2049 ; [#uses=1 type=i11] [debug line = 268:14]
  %tmp_278 = zext i11 %tmp_277 to i64, !dbg !2049 ; [#uses=1 type=i64] [debug line = 268:14]
  %bias_addr_30 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_278, !dbg !2049 ; [#uses=1 type=float*] [debug line = 268:14]
  %bias_load_29 = load float* %bias_addr_30, align 4, !dbg !2049 ; [#uses=1 type=float] [debug line = 268:14]
  %ShuffleConvs_1_Shuff_103 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_60, i64 0, i64 %tmp_243, !dbg !2049 ; [#uses=1 type=float*] [debug line = 268:14]
  store float %bias_load_29, float* %ShuffleConvs_1_Shuff_103, align 4, !dbg !2049 ; [debug line = 268:14]
  %tmp58 = add i11 -1016, %tmp_238_cast1, !dbg !2050 ; [#uses=1 type=i11] [debug line = 269:14]
  %tmp_279 = add i11 %i5_cast2, %tmp58, !dbg !2050 ; [#uses=1 type=i11] [debug line = 269:14]
  %tmp_280 = zext i11 %tmp_279 to i64, !dbg !2050 ; [#uses=1 type=i64] [debug line = 269:14]
  %bias_addr_31 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_280, !dbg !2050 ; [#uses=1 type=float*] [debug line = 269:14]
  %bias_load_30 = load float* %bias_addr_31, align 4, !dbg !2050 ; [#uses=1 type=float] [debug line = 269:14]
  %ShuffleConvs_1_Shuff_104 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_61, i64 0, i64 %tmp_243, !dbg !2050 ; [#uses=1 type=float*] [debug line = 269:14]
  store float %bias_load_30, float* %ShuffleConvs_1_Shuff_104, align 4, !dbg !2050 ; [debug line = 269:14]
  %tmp59 = add i11 -968, %tmp_238_cast1, !dbg !2051 ; [#uses=1 type=i11] [debug line = 270:14]
  %tmp_281 = add i11 %i5_cast2, %tmp59, !dbg !2051 ; [#uses=1 type=i11] [debug line = 270:14]
  %tmp_282 = zext i11 %tmp_281 to i64, !dbg !2051 ; [#uses=1 type=i64] [debug line = 270:14]
  %bias_addr_32 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_282, !dbg !2051 ; [#uses=1 type=float*] [debug line = 270:14]
  %bias_load_31 = load float* %bias_addr_32, align 4, !dbg !2051 ; [#uses=1 type=float] [debug line = 270:14]
  %ShuffleConvs_1_Shuff_105 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_62, i64 0, i64 %tmp_243, !dbg !2051 ; [#uses=1 type=float*] [debug line = 270:14]
  store float %bias_load_31, float* %ShuffleConvs_1_Shuff_105, align 4, !dbg !2051 ; [debug line = 270:14]
  %tmp60 = add i11 -920, %tmp_238_cast1, !dbg !2052 ; [#uses=1 type=i11] [debug line = 271:14]
  %tmp_283 = add i11 %i5_cast2, %tmp60, !dbg !2052 ; [#uses=1 type=i11] [debug line = 271:14]
  %tmp_284 = zext i11 %tmp_283 to i64, !dbg !2052 ; [#uses=1 type=i64] [debug line = 271:14]
  %bias_addr_33 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_284, !dbg !2052 ; [#uses=1 type=float*] [debug line = 271:14]
  %bias_load_32 = load float* %bias_addr_33, align 4, !dbg !2052 ; [#uses=1 type=float] [debug line = 271:14]
  %ShuffleConvs_1_Shuff_106 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_63, i64 0, i64 %tmp_243, !dbg !2052 ; [#uses=1 type=float*] [debug line = 271:14]
  store float %bias_load_32, float* %ShuffleConvs_1_Shuff_106, align 4, !dbg !2052 ; [debug line = 271:14]
  %tmp61 = add i11 -872, %tmp_238_cast1, !dbg !2053 ; [#uses=1 type=i11] [debug line = 272:14]
  %tmp_285 = add i11 %i5_cast2, %tmp61, !dbg !2053 ; [#uses=1 type=i11] [debug line = 272:14]
  %tmp_286 = zext i11 %tmp_285 to i64, !dbg !2053 ; [#uses=1 type=i64] [debug line = 272:14]
  %bias_addr_34 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_286, !dbg !2053 ; [#uses=1 type=float*] [debug line = 272:14]
  %bias_load_33 = load float* %bias_addr_34, align 4, !dbg !2053 ; [#uses=1 type=float] [debug line = 272:14]
  %ShuffleConvs_1_Shuff_107 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_64, i64 0, i64 %tmp_243, !dbg !2053 ; [#uses=1 type=float*] [debug line = 272:14]
  store float %bias_load_33, float* %ShuffleConvs_1_Shuff_107, align 4, !dbg !2053 ; [debug line = 272:14]
  %tmp62 = add i11 -824, %tmp_238_cast1, !dbg !2054 ; [#uses=1 type=i11] [debug line = 273:14]
  %tmp_287 = add i11 %i5_cast2, %tmp62, !dbg !2054 ; [#uses=1 type=i11] [debug line = 273:14]
  %tmp_288 = zext i11 %tmp_287 to i64, !dbg !2054 ; [#uses=1 type=i64] [debug line = 273:14]
  %bias_addr_35 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_288, !dbg !2054 ; [#uses=1 type=float*] [debug line = 273:14]
  %bias_load_34 = load float* %bias_addr_35, align 4, !dbg !2054 ; [#uses=1 type=float] [debug line = 273:14]
  %ShuffleConvs_1_Shuff_108 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_65, i64 0, i64 %tmp_243, !dbg !2054 ; [#uses=1 type=float*] [debug line = 273:14]
  store float %bias_load_34, float* %ShuffleConvs_1_Shuff_108, align 4, !dbg !2054 ; [debug line = 273:14]
  %tmp63 = add i11 -776, %tmp_238_cast1, !dbg !2055 ; [#uses=1 type=i11] [debug line = 274:14]
  %tmp_289 = add i11 %i5_cast2, %tmp63, !dbg !2055 ; [#uses=1 type=i11] [debug line = 274:14]
  %tmp_290 = zext i11 %tmp_289 to i64, !dbg !2055 ; [#uses=1 type=i64] [debug line = 274:14]
  %bias_addr_36 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_290, !dbg !2055 ; [#uses=1 type=float*] [debug line = 274:14]
  %bias_load_35 = load float* %bias_addr_36, align 4, !dbg !2055 ; [#uses=1 type=float] [debug line = 274:14]
  %ShuffleConvs_1_Shuff_109 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_67, i64 0, i64 %tmp_243, !dbg !2055 ; [#uses=1 type=float*] [debug line = 274:14]
  store float %bias_load_35, float* %ShuffleConvs_1_Shuff_109, align 4, !dbg !2055 ; [debug line = 274:14]
  %tmp64 = add i11 -728, %tmp_238_cast1, !dbg !2056 ; [#uses=1 type=i11] [debug line = 275:14]
  %tmp_291 = add i11 %i5_cast2, %tmp64, !dbg !2056 ; [#uses=1 type=i11] [debug line = 275:14]
  %tmp_292 = zext i11 %tmp_291 to i64, !dbg !2056 ; [#uses=1 type=i64] [debug line = 275:14]
  %bias_addr_37 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_292, !dbg !2056 ; [#uses=1 type=float*] [debug line = 275:14]
  %bias_load_36 = load float* %bias_addr_37, align 4, !dbg !2056 ; [#uses=1 type=float] [debug line = 275:14]
  %ShuffleConvs_1_Shuff_110 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_68, i64 0, i64 %tmp_243, !dbg !2056 ; [#uses=1 type=float*] [debug line = 275:14]
  store float %bias_load_36, float* %ShuffleConvs_1_Shuff_110, align 4, !dbg !2056 ; [debug line = 275:14]
  %tmp65 = add i11 -680, %tmp_238_cast1, !dbg !2057 ; [#uses=1 type=i11] [debug line = 276:14]
  %tmp_293 = add i11 %i5_cast2, %tmp65, !dbg !2057 ; [#uses=1 type=i11] [debug line = 276:14]
  %tmp_294 = zext i11 %tmp_293 to i64, !dbg !2057 ; [#uses=1 type=i64] [debug line = 276:14]
  %bias_addr_38 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_294, !dbg !2057 ; [#uses=1 type=float*] [debug line = 276:14]
  %bias_load_37 = load float* %bias_addr_38, align 4, !dbg !2057 ; [#uses=1 type=float] [debug line = 276:14]
  %ShuffleConvs_1_Shuff_111 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_69, i64 0, i64 %tmp_243, !dbg !2057 ; [#uses=1 type=float*] [debug line = 276:14]
  store float %bias_load_37, float* %ShuffleConvs_1_Shuff_111, align 4, !dbg !2057 ; [debug line = 276:14]
  %tmp66 = add i11 -632, %tmp_238_cast1, !dbg !2058 ; [#uses=1 type=i11] [debug line = 277:14]
  %tmp_295 = add i11 %i5_cast2, %tmp66, !dbg !2058 ; [#uses=1 type=i11] [debug line = 277:14]
  %tmp_296 = zext i11 %tmp_295 to i64, !dbg !2058 ; [#uses=1 type=i64] [debug line = 277:14]
  %bias_addr_39 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_296, !dbg !2058 ; [#uses=1 type=float*] [debug line = 277:14]
  %bias_load_38 = load float* %bias_addr_39, align 4, !dbg !2058 ; [#uses=1 type=float] [debug line = 277:14]
  %ShuffleConvs_1_Shuff_112 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_70, i64 0, i64 %tmp_243, !dbg !2058 ; [#uses=1 type=float*] [debug line = 277:14]
  store float %bias_load_38, float* %ShuffleConvs_1_Shuff_112, align 4, !dbg !2058 ; [debug line = 277:14]
  %tmp67 = add i11 -584, %tmp_238_cast1, !dbg !2059 ; [#uses=1 type=i11] [debug line = 278:14]
  %tmp_297 = add i11 %i5_cast2, %tmp67, !dbg !2059 ; [#uses=1 type=i11] [debug line = 278:14]
  %tmp_298 = zext i11 %tmp_297 to i64, !dbg !2059 ; [#uses=1 type=i64] [debug line = 278:14]
  %bias_addr_40 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_298, !dbg !2059 ; [#uses=1 type=float*] [debug line = 278:14]
  %bias_load_39 = load float* %bias_addr_40, align 4, !dbg !2059 ; [#uses=1 type=float] [debug line = 278:14]
  %ShuffleConvs_1_Shuff_113 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_71, i64 0, i64 %tmp_243, !dbg !2059 ; [#uses=1 type=float*] [debug line = 278:14]
  store float %bias_load_39, float* %ShuffleConvs_1_Shuff_113, align 4, !dbg !2059 ; [debug line = 278:14]
  %tmp68 = add i11 -536, %tmp_238_cast1, !dbg !2060 ; [#uses=1 type=i11] [debug line = 279:14]
  %tmp_299 = add i11 %i5_cast2, %tmp68, !dbg !2060 ; [#uses=1 type=i11] [debug line = 279:14]
  %tmp_300 = zext i11 %tmp_299 to i64, !dbg !2060 ; [#uses=1 type=i64] [debug line = 279:14]
  %bias_addr_41 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_300, !dbg !2060 ; [#uses=1 type=float*] [debug line = 279:14]
  %bias_load_40 = load float* %bias_addr_41, align 4, !dbg !2060 ; [#uses=1 type=float] [debug line = 279:14]
  %ShuffleConvs_1_Shuff_114 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_17, i64 0, i64 %tmp_243, !dbg !2060 ; [#uses=1 type=float*] [debug line = 279:14]
  store float %bias_load_40, float* %ShuffleConvs_1_Shuff_114, align 4, !dbg !2060 ; [debug line = 279:14]
  %tmp69 = add i10 -488, %tmp_238_cast97_cast, !dbg !2061 ; [#uses=1 type=i10] [debug line = 280:14]
  %tmp_301 = add i10 %i5_cast105_cast, %tmp69, !dbg !2061 ; [#uses=1 type=i10] [debug line = 280:14]
  %tmp_317_cast = sext i10 %tmp_301 to i11, !dbg !2061 ; [#uses=1 type=i11] [debug line = 280:14]
  %tmp_302 = zext i11 %tmp_317_cast to i64, !dbg !2061 ; [#uses=1 type=i64] [debug line = 280:14]
  %bias_addr_42 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_302, !dbg !2061 ; [#uses=1 type=float*] [debug line = 280:14]
  %bias_load_41 = load float* %bias_addr_42, align 4, !dbg !2061 ; [#uses=1 type=float] [debug line = 280:14]
  %ShuffleConvs_1_Shuff_115 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_39, i64 0, i64 %tmp_243, !dbg !2061 ; [#uses=1 type=float*] [debug line = 280:14]
  store float %bias_load_41, float* %ShuffleConvs_1_Shuff_115, align 4, !dbg !2061 ; [debug line = 280:14]
  %tmp70 = add i10 -440, %tmp_238_cast97_cast, !dbg !2062 ; [#uses=1 type=i10] [debug line = 281:14]
  %tmp_303 = add i10 %i5_cast105_cast, %tmp70, !dbg !2062 ; [#uses=1 type=i10] [debug line = 281:14]
  %tmp_320_cast = sext i10 %tmp_303 to i11, !dbg !2062 ; [#uses=1 type=i11] [debug line = 281:14]
  %tmp_304 = zext i11 %tmp_320_cast to i64, !dbg !2062 ; [#uses=1 type=i64] [debug line = 281:14]
  %bias_addr_43 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_304, !dbg !2062 ; [#uses=1 type=float*] [debug line = 281:14]
  %bias_load_42 = load float* %bias_addr_43, align 4, !dbg !2062 ; [#uses=1 type=float] [debug line = 281:14]
  %ShuffleConvs_1_Shuff_116 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_55, i64 0, i64 %tmp_243, !dbg !2062 ; [#uses=1 type=float*] [debug line = 281:14]
  store float %bias_load_42, float* %ShuffleConvs_1_Shuff_116, align 4, !dbg !2062 ; [debug line = 281:14]
  %tmp71 = add i10 -392, %tmp_238_cast97_cast, !dbg !2063 ; [#uses=1 type=i10] [debug line = 282:14]
  %tmp_305 = add i10 %i5_cast105_cast, %tmp71, !dbg !2063 ; [#uses=1 type=i10] [debug line = 282:14]
  %tmp_323_cast = sext i10 %tmp_305 to i11, !dbg !2063 ; [#uses=1 type=i11] [debug line = 282:14]
  %tmp_306 = zext i11 %tmp_323_cast to i64, !dbg !2063 ; [#uses=1 type=i64] [debug line = 282:14]
  %bias_addr_44 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_306, !dbg !2063 ; [#uses=1 type=float*] [debug line = 282:14]
  %bias_load_43 = load float* %bias_addr_44, align 4, !dbg !2063 ; [#uses=1 type=float] [debug line = 282:14]
  %ShuffleConvs_1_Shuff_117 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff_66, i64 0, i64 %tmp_243, !dbg !2063 ; [#uses=1 type=float*] [debug line = 282:14]
  store float %bias_load_43, float* %ShuffleConvs_1_Shuff_117, align 4, !dbg !2063 ; [debug line = 282:14]
  %tmp72 = add i10 -344, %tmp_238_cast97_cast, !dbg !2064 ; [#uses=1 type=i10] [debug line = 283:14]
  %tmp_307 = add i10 %i5_cast105_cast, %tmp72, !dbg !2064 ; [#uses=1 type=i10] [debug line = 283:14]
  %tmp_326_cast = sext i10 %tmp_307 to i11, !dbg !2064 ; [#uses=1 type=i11] [debug line = 283:14]
  %tmp_308 = zext i11 %tmp_326_cast to i64, !dbg !2064 ; [#uses=1 type=i64] [debug line = 283:14]
  %bias_addr_45 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_308, !dbg !2064 ; [#uses=1 type=float*] [debug line = 283:14]
  %bias_load_44 = load float* %bias_addr_45, align 4, !dbg !2064 ; [#uses=1 type=float] [debug line = 283:14]
  %ShuffleConvs_1_Shuff_118 = getelementptr inbounds [48 x float]* @ShuffleConvs_1_Shuff, i64 0, i64 %tmp_243, !dbg !2064 ; [#uses=1 type=float*] [debug line = 283:14]
  store float %bias_load_44, float* %ShuffleConvs_1_Shuff_118, align 4, !dbg !2064 ; [debug line = 283:14]
  call void @llvm.dbg.value(metadata !{i2 %k_1}, i64 0, metadata !2065), !dbg !2032 ; [debug line = 254:30] [debug variable = k]
  br label %10, !dbg !2032                        ; [debug line = 254:30]

.preheader28:                                     ; preds = %12, %.preheader28.preheader
  %k6 = phi i3 [ %k_2, %12 ], [ 0, %.preheader28.preheader ] ; [#uses=3 type=i3]
  %exitcond9 = icmp eq i3 %k6, -4, !dbg !2033     ; [#uses=1 type=i1] [debug line = 286:23]
  %empty_414 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind ; [#uses=0 type=i32]
  %k_2 = add i3 %k6, 1, !dbg !2066                ; [#uses=1 type=i3] [debug line = 286:30]
  br i1 %exitcond9, label %.preheader29.loopexit, label %12, !dbg !2033 ; [debug line = 286:23]

; <label>:12                                      ; preds = %.preheader28
  %tmp_132 = trunc i3 %k6 to i2                   ; [#uses=2 type=i2]
  %p_shl10 = call i7 @_ssdm_op_BitConcatenate.i7.i2.i5(i2 %tmp_132, i5 0), !dbg !2067 ; [#uses=1 type=i7] [debug line = 287:10]
  %p_shl10_cast = zext i7 %p_shl10 to i8, !dbg !2067 ; [#uses=1 type=i8] [debug line = 287:10]
  %p_shl11 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_132, i3 0), !dbg !2067 ; [#uses=1 type=i5] [debug line = 287:10]
  %p_shl11_cast = zext i5 %p_shl11 to i8, !dbg !2067 ; [#uses=1 type=i8] [debug line = 287:10]
  %tmp_322 = sub i8 %p_shl10_cast, %p_shl11_cast, !dbg !2067 ; [#uses=4 type=i8] [debug line = 287:10]
  %tmp_391_cast = sext i8 %tmp_322 to i12, !dbg !2067 ; [#uses=11 type=i12] [debug line = 287:10]
  %tmp_391_cast_cast1 = sext i8 %tmp_322 to i9, !dbg !2067 ; [#uses=2 type=i9] [debug line = 287:10]
  %tmp_391_cast_cast = sext i8 %tmp_322 to i10, !dbg !2067 ; [#uses=1 type=i10] [debug line = 287:10]
  %tmp73 = add i10 -296, %tmp_391_cast_cast, !dbg !2067 ; [#uses=1 type=i10] [debug line = 287:10]
  %tmp_323 = add i10 %i5_cast105_cast, %tmp73, !dbg !2067 ; [#uses=1 type=i10] [debug line = 287:10]
  %tmp_393_cast = sext i10 %tmp_323 to i11, !dbg !2067 ; [#uses=1 type=i11] [debug line = 287:10]
  %tmp_324 = zext i11 %tmp_393_cast to i64, !dbg !2067 ; [#uses=1 type=i64] [debug line = 287:10]
  %bias_addr_46 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_324, !dbg !2067 ; [#uses=1 type=float*] [debug line = 287:10]
  %bias_load_46 = load float* %bias_addr_46, align 4, !dbg !2067 ; [#uses=1 type=float] [debug line = 287:10]
  %tmp_325 = add i8 %tmp_322, %i5_cast104_cast1, !dbg !2067 ; [#uses=1 type=i8] [debug line = 287:10]
  %tmp_395_cast = sext i8 %tmp_325 to i32, !dbg !2067 ; [#uses=1 type=i32] [debug line = 287:10]
  %tmp_326 = zext i32 %tmp_395_cast to i64, !dbg !2067 ; [#uses=14 type=i64] [debug line = 287:10]
  %ShuffleConvs_2_Downs_15 = getelementptr inbounds [96 x float]* @ShuffleConvs_2_Downs_3, i64 0, i64 %tmp_326, !dbg !2067 ; [#uses=1 type=float*] [debug line = 287:10]
  store float %bias_load_46, float* %ShuffleConvs_2_Downs_15, align 4, !dbg !2067 ; [debug line = 287:10]
  %tmp74 = add i9 -200, %tmp_391_cast_cast1, !dbg !2069 ; [#uses=1 type=i9] [debug line = 288:10]
  %tmp_327 = add i9 %i5_cast105_cast1, %tmp74, !dbg !2069 ; [#uses=1 type=i9] [debug line = 288:10]
  %tmp_398_cast = sext i9 %tmp_327 to i11, !dbg !2069 ; [#uses=1 type=i11] [debug line = 288:10]
  %tmp_328 = zext i11 %tmp_398_cast to i64, !dbg !2069 ; [#uses=1 type=i64] [debug line = 288:10]
  %bias_addr_47 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_328, !dbg !2069 ; [#uses=1 type=float*] [debug line = 288:10]
  %bias_load_47 = load float* %bias_addr_47, align 4, !dbg !2069 ; [#uses=1 type=float] [debug line = 288:10]
  %ShuffleConvs_2_Downs_16 = getelementptr inbounds [96 x float]* @ShuffleConvs_2_Downs_5, i64 0, i64 %tmp_326, !dbg !2069 ; [#uses=1 type=float*] [debug line = 288:10]
  store float %bias_load_47, float* %ShuffleConvs_2_Downs_16, align 4, !dbg !2069 ; [debug line = 288:10]
  %tmp75 = add i9 -104, %tmp_391_cast_cast1, !dbg !2070 ; [#uses=1 type=i9] [debug line = 289:10]
  %tmp75_cast1 = sext i9 %tmp75 to i11, !dbg !2070 ; [#uses=1 type=i11] [debug line = 289:10]
  %tmp75_cast = zext i11 %tmp75_cast1 to i12, !dbg !2070 ; [#uses=1 type=i12] [debug line = 289:10]
  %tmp_329 = add i12 %i5_cast1, %tmp75_cast, !dbg !2070 ; [#uses=1 type=i12] [debug line = 289:10]
  %tmp_330 = zext i12 %tmp_329 to i64, !dbg !2070 ; [#uses=1 type=i64] [debug line = 289:10]
  %bias_addr_48 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_330, !dbg !2070 ; [#uses=1 type=float*] [debug line = 289:10]
  %bias_load_48 = load float* %bias_addr_48, align 4, !dbg !2070 ; [#uses=1 type=float] [debug line = 289:10]
  %ShuffleConvs_2_Downs_17 = getelementptr inbounds [96 x float]* @ShuffleConvs_2_Downs, i64 0, i64 %tmp_326, !dbg !2070 ; [#uses=1 type=float*] [debug line = 289:10]
  store float %bias_load_48, float* %ShuffleConvs_2_Downs_17, align 4, !dbg !2070 ; [debug line = 289:10]
  %tmp76 = add i12 2040, %tmp_391_cast, !dbg !2071 ; [#uses=1 type=i12] [debug line = 290:10]
  %tmp_331 = add i12 %i5_cast1, %tmp76, !dbg !2071 ; [#uses=1 type=i12] [debug line = 290:10]
  %tmp_332 = zext i12 %tmp_331 to i64, !dbg !2071 ; [#uses=1 type=i64] [debug line = 290:10]
  %bias_addr_49 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_332, !dbg !2071 ; [#uses=1 type=float*] [debug line = 290:10]
  %bias_load_49 = load float* %bias_addr_49, align 4, !dbg !2071 ; [#uses=1 type=float] [debug line = 290:10]
  %ShuffleConvs_2_Downs_18 = getelementptr inbounds [96 x float]* @ShuffleConvs_2_Downs_1, i64 0, i64 %tmp_326, !dbg !2071 ; [#uses=1 type=float*] [debug line = 290:10]
  store float %bias_load_49, float* %ShuffleConvs_2_Downs_18, align 4, !dbg !2071 ; [debug line = 290:10]
  %tmp77 = add i12 -1960, %tmp_391_cast, !dbg !2072 ; [#uses=1 type=i12] [debug line = 291:10]
  %tmp_333 = add i12 %i5_cast1, %tmp77, !dbg !2072 ; [#uses=1 type=i12] [debug line = 291:10]
  %tmp_334 = zext i12 %tmp_333 to i64, !dbg !2072 ; [#uses=1 type=i64] [debug line = 291:10]
  %bias_addr_50 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_334, !dbg !2072 ; [#uses=1 type=float*] [debug line = 291:10]
  %bias_load_50 = load float* %bias_addr_50, align 4, !dbg !2072 ; [#uses=1 type=float] [debug line = 291:10]
  %ShuffleConvs_2_Downs_19 = getelementptr inbounds [96 x float]* @ShuffleConvs_2_Downs_4, i64 0, i64 %tmp_326, !dbg !2072 ; [#uses=1 type=float*] [debug line = 291:10]
  store float %bias_load_50, float* %ShuffleConvs_2_Downs_19, align 4, !dbg !2072 ; [debug line = 291:10]
  %tmp78 = add i12 -1864, %tmp_391_cast, !dbg !2073 ; [#uses=1 type=i12] [debug line = 292:10]
  %tmp_335 = add i12 %i5_cast1, %tmp78, !dbg !2073 ; [#uses=1 type=i12] [debug line = 292:10]
  %tmp_336 = zext i12 %tmp_335 to i64, !dbg !2073 ; [#uses=1 type=i64] [debug line = 292:10]
  %bias_addr_51 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_336, !dbg !2073 ; [#uses=1 type=float*] [debug line = 292:10]
  %bias_load_51 = load float* %bias_addr_51, align 4, !dbg !2073 ; [#uses=1 type=float] [debug line = 292:10]
  %ShuffleConvs_2_Shuff_31 = getelementptr inbounds [96 x float]* @ShuffleConvs_2_Shuff_19, i64 0, i64 %tmp_326, !dbg !2073 ; [#uses=1 type=float*] [debug line = 292:10]
  store float %bias_load_51, float* %ShuffleConvs_2_Shuff_31, align 4, !dbg !2073 ; [debug line = 292:10]
  %tmp79 = add i12 -1768, %tmp_391_cast, !dbg !2074 ; [#uses=1 type=i12] [debug line = 293:10]
  %tmp_337 = add i12 %i5_cast1, %tmp79, !dbg !2074 ; [#uses=1 type=i12] [debug line = 293:10]
  %tmp_338 = zext i12 %tmp_337 to i64, !dbg !2074 ; [#uses=1 type=i64] [debug line = 293:10]
  %bias_addr_52 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_338, !dbg !2074 ; [#uses=1 type=float*] [debug line = 293:10]
  %bias_load_52 = load float* %bias_addr_52, align 4, !dbg !2074 ; [#uses=1 type=float] [debug line = 293:10]
  %ShuffleConvs_2_Shuff_32 = getelementptr inbounds [96 x float]* @ShuffleConvs_2_Shuff_20, i64 0, i64 %tmp_326, !dbg !2074 ; [#uses=1 type=float*] [debug line = 293:10]
  store float %bias_load_52, float* %ShuffleConvs_2_Shuff_32, align 4, !dbg !2074 ; [debug line = 293:10]
  %tmp80 = add i12 -1672, %tmp_391_cast, !dbg !2075 ; [#uses=1 type=i12] [debug line = 294:10]
  %tmp_339 = add i12 %i5_cast1, %tmp80, !dbg !2075 ; [#uses=1 type=i12] [debug line = 294:10]
  %tmp_340 = zext i12 %tmp_339 to i64, !dbg !2075 ; [#uses=1 type=i64] [debug line = 294:10]
  %bias_addr_53 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_340, !dbg !2075 ; [#uses=1 type=float*] [debug line = 294:10]
  %bias_load_53 = load float* %bias_addr_53, align 4, !dbg !2075 ; [#uses=1 type=float] [debug line = 294:10]
  %ShuffleConvs_2_Shuff_33 = getelementptr inbounds [96 x float]* @ShuffleConvs_2_Shuff_21, i64 0, i64 %tmp_326, !dbg !2075 ; [#uses=1 type=float*] [debug line = 294:10]
  store float %bias_load_53, float* %ShuffleConvs_2_Shuff_33, align 4, !dbg !2075 ; [debug line = 294:10]
  %tmp81 = add i12 -1576, %tmp_391_cast, !dbg !2076 ; [#uses=1 type=i12] [debug line = 295:10]
  %tmp_341 = add i12 %i5_cast1, %tmp81, !dbg !2076 ; [#uses=1 type=i12] [debug line = 295:10]
  %tmp_342 = zext i12 %tmp_341 to i64, !dbg !2076 ; [#uses=1 type=i64] [debug line = 295:10]
  %bias_addr_54 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_342, !dbg !2076 ; [#uses=1 type=float*] [debug line = 295:10]
  %bias_load_54 = load float* %bias_addr_54, align 4, !dbg !2076 ; [#uses=1 type=float] [debug line = 295:10]
  %ShuffleConvs_2_Shuff_34 = getelementptr inbounds [96 x float]* @ShuffleConvs_2_Shuff_22, i64 0, i64 %tmp_326, !dbg !2076 ; [#uses=1 type=float*] [debug line = 295:10]
  store float %bias_load_54, float* %ShuffleConvs_2_Shuff_34, align 4, !dbg !2076 ; [debug line = 295:10]
  %tmp82 = add i12 -1480, %tmp_391_cast, !dbg !2077 ; [#uses=1 type=i12] [debug line = 296:10]
  %tmp_343 = add i12 %i5_cast1, %tmp82, !dbg !2077 ; [#uses=1 type=i12] [debug line = 296:10]
  %tmp_344 = zext i12 %tmp_343 to i64, !dbg !2077 ; [#uses=1 type=i64] [debug line = 296:10]
  %bias_addr_55 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_344, !dbg !2077 ; [#uses=1 type=float*] [debug line = 296:10]
  %bias_load_55 = load float* %bias_addr_55, align 4, !dbg !2077 ; [#uses=1 type=float] [debug line = 296:10]
  %ShuffleConvs_2_Shuff_35 = getelementptr inbounds [96 x float]* @ShuffleConvs_2_Shuff_1, i64 0, i64 %tmp_326, !dbg !2077 ; [#uses=1 type=float*] [debug line = 296:10]
  store float %bias_load_55, float* %ShuffleConvs_2_Shuff_35, align 4, !dbg !2077 ; [debug line = 296:10]
  %tmp83 = add i12 -1384, %tmp_391_cast, !dbg !2078 ; [#uses=1 type=i12] [debug line = 297:10]
  %tmp_345 = add i12 %i5_cast1, %tmp83, !dbg !2078 ; [#uses=1 type=i12] [debug line = 297:10]
  %tmp_346 = zext i12 %tmp_345 to i64, !dbg !2078 ; [#uses=1 type=i64] [debug line = 297:10]
  %bias_addr_56 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_346, !dbg !2078 ; [#uses=1 type=float*] [debug line = 297:10]
  %bias_load_56 = load float* %bias_addr_56, align 4, !dbg !2078 ; [#uses=1 type=float] [debug line = 297:10]
  %ShuffleConvs_2_Shuff_36 = getelementptr inbounds [96 x float]* @ShuffleConvs_2_Shuff_3, i64 0, i64 %tmp_326, !dbg !2078 ; [#uses=1 type=float*] [debug line = 297:10]
  store float %bias_load_56, float* %ShuffleConvs_2_Shuff_36, align 4, !dbg !2078 ; [debug line = 297:10]
  %tmp84 = add i12 -1288, %tmp_391_cast, !dbg !2079 ; [#uses=1 type=i12] [debug line = 298:10]
  %tmp_347 = add i12 %i5_cast1, %tmp84, !dbg !2079 ; [#uses=1 type=i12] [debug line = 298:10]
  %tmp_348 = zext i12 %tmp_347 to i64, !dbg !2079 ; [#uses=1 type=i64] [debug line = 298:10]
  %bias_addr_57 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_348, !dbg !2079 ; [#uses=1 type=float*] [debug line = 298:10]
  %bias_load_57 = load float* %bias_addr_57, align 4, !dbg !2079 ; [#uses=1 type=float] [debug line = 298:10]
  %ShuffleConvs_2_Shuff_37 = getelementptr inbounds [96 x float]* @ShuffleConvs_2_Shuff_4, i64 0, i64 %tmp_326, !dbg !2079 ; [#uses=1 type=float*] [debug line = 298:10]
  store float %bias_load_57, float* %ShuffleConvs_2_Shuff_37, align 4, !dbg !2079 ; [debug line = 298:10]
  %tmp85 = add i12 -1192, %tmp_391_cast, !dbg !2080 ; [#uses=1 type=i12] [debug line = 299:10]
  %tmp_349 = add i12 %i5_cast1, %tmp85, !dbg !2080 ; [#uses=1 type=i12] [debug line = 299:10]
  %tmp_350 = zext i12 %tmp_349 to i64, !dbg !2080 ; [#uses=1 type=i64] [debug line = 299:10]
  %bias_addr_58 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_350, !dbg !2080 ; [#uses=1 type=float*] [debug line = 299:10]
  %bias_load_58 = load float* %bias_addr_58, align 4, !dbg !2080 ; [#uses=1 type=float] [debug line = 299:10]
  %ShuffleConvs_2_Shuff_38 = getelementptr inbounds [96 x float]* @ShuffleConvs_2_Shuff_17, i64 0, i64 %tmp_326, !dbg !2080 ; [#uses=1 type=float*] [debug line = 299:10]
  store float %bias_load_58, float* %ShuffleConvs_2_Shuff_38, align 4, !dbg !2080 ; [debug line = 299:10]
  %tmp86 = add i12 -1096, %tmp_391_cast, !dbg !2081 ; [#uses=1 type=i12] [debug line = 300:10]
  %tmp_351 = add i12 %i5_cast1, %tmp86, !dbg !2081 ; [#uses=1 type=i12] [debug line = 300:10]
  %tmp_352 = zext i12 %tmp_351 to i64, !dbg !2081 ; [#uses=1 type=i64] [debug line = 300:10]
  %bias_addr_59 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_352, !dbg !2081 ; [#uses=1 type=float*] [debug line = 300:10]
  %bias_load_59 = load float* %bias_addr_59, align 4, !dbg !2081 ; [#uses=1 type=float] [debug line = 300:10]
  %ShuffleConvs_2_Shuff_39 = getelementptr inbounds [96 x float]* @ShuffleConvs_2_Shuff, i64 0, i64 %tmp_326, !dbg !2081 ; [#uses=1 type=float*] [debug line = 300:10]
  store float %bias_load_59, float* %ShuffleConvs_2_Shuff_39, align 4, !dbg !2081 ; [debug line = 300:10]
  call void @llvm.dbg.value(metadata !{i3 %k_2}, i64 0, metadata !2082), !dbg !2066 ; [debug line = 286:30] [debug variable = k]
  br label %.preheader28, !dbg !2066              ; [debug line = 286:30]

.preheader27:                                     ; preds = %13, %.preheader27.preheader
  %i7 = phi i10 [ %i_2, %13 ], [ 0, %.preheader27.preheader ] ; [#uses=4 type=i10]
  %i7_cast92_cast = zext i10 %i7 to i11, !dbg !2012 ; [#uses=1 type=i11] [debug line = 303:19]
  %exitcond8 = icmp eq i10 %i7, -512, !dbg !2012  ; [#uses=1 type=i1] [debug line = 303:19]
  %empty_415 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512) nounwind ; [#uses=0 type=i32]
  %i_2 = add i10 %i7, 1, !dbg !2083               ; [#uses=1 type=i10] [debug line = 303:31]
  br i1 %exitcond8, label %.preheader26.preheader, label %13, !dbg !2012 ; [debug line = 303:19]

.preheader26.preheader:                           ; preds = %.preheader27
  br label %.preheader26, !dbg !2084              ; [debug line = 306:19]

; <label>:13                                      ; preds = %.preheader27
  %tmp_231 = add i11 %i7_cast92_cast, -1000, !dbg !2086 ; [#uses=1 type=i11] [debug line = 304:10]
  %tmp_231_cast = sext i11 %tmp_231 to i12, !dbg !2086 ; [#uses=1 type=i12] [debug line = 304:10]
  %tmp_232 = zext i12 %tmp_231_cast to i64, !dbg !2086 ; [#uses=1 type=i64] [debug line = 304:10]
  %bias_addr_15 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_232, !dbg !2086 ; [#uses=1 type=float*] [debug line = 304:10]
  %bias_load_15 = load float* %bias_addr_15, align 4, !dbg !2086 ; [#uses=1 type=float] [debug line = 304:10]
  %tmp_233 = zext i10 %i7 to i64, !dbg !2086      ; [#uses=1 type=i64] [debug line = 304:10]
  %conv_last_bias_addr = getelementptr inbounds [512 x float]* @conv_last_bias, i64 0, i64 %tmp_233, !dbg !2086 ; [#uses=1 type=float*] [debug line = 304:10]
  store float %bias_load_15, float* %conv_last_bias_addr, align 4, !dbg !2086 ; [debug line = 304:10]
  call void @llvm.dbg.value(metadata !{i10 %i_2}, i64 0, metadata !2088), !dbg !2083 ; [debug line = 303:31] [debug variable = i]
  br label %.preheader27, !dbg !2083              ; [debug line = 303:31]

.preheader26:                                     ; preds = %14, %.preheader26.preheader
  %i8 = phi i4 [ %i_4, %14 ], [ 0, %.preheader26.preheader ] ; [#uses=4 type=i4]
  %i8_cast90_cast = zext i4 %i8 to i10, !dbg !2084 ; [#uses=1 type=i10] [debug line = 306:19]
  %exitcond7 = icmp eq i4 %i8, -6, !dbg !2084     ; [#uses=1 type=i1] [debug line = 306:19]
  %empty_416 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10) nounwind ; [#uses=0 type=i32]
  %i_4 = add i4 %i8, 1, !dbg !2089                ; [#uses=1 type=i4] [debug line = 306:25]
  br i1 %exitcond7, label %15, label %14, !dbg !2084 ; [debug line = 306:19]

; <label>:14                                      ; preds = %.preheader26
  %tmp_235 = add i10 %i8_cast90_cast, -488, !dbg !2090 ; [#uses=1 type=i10] [debug line = 307:10]
  %tmp_235_cast = sext i10 %tmp_235 to i12, !dbg !2090 ; [#uses=1 type=i12] [debug line = 307:10]
  %tmp_236 = zext i12 %tmp_235_cast to i64, !dbg !2090 ; [#uses=1 type=i64] [debug line = 307:10]
  %bias_addr_16 = getelementptr [3618 x float]* %bias, i64 0, i64 %tmp_236, !dbg !2090 ; [#uses=1 type=float*] [debug line = 307:10]
  %bias_load_45 = load float* %bias_addr_16, align 4, !dbg !2090 ; [#uses=1 type=float] [debug line = 307:10]
  %tmp_237 = zext i4 %i8 to i64, !dbg !2090       ; [#uses=1 type=i64] [debug line = 307:10]
  %fc_bias_addr = getelementptr inbounds [10 x float]* @fc_bias, i64 0, i64 %tmp_237, !dbg !2090 ; [#uses=1 type=float*] [debug line = 307:10]
  store float %bias_load_45, float* %fc_bias_addr, align 4, !dbg !2090 ; [debug line = 307:10]
  call void @llvm.dbg.value(metadata !{i4 %i_4}, i64 0, metadata !2092), !dbg !2089 ; [debug line = 306:25] [debug variable = i]
  br label %.preheader26, !dbg !2089              ; [debug line = 306:25]

; <label>:15                                      ; preds = %.preheader26
  call fastcc void @conv1([3072 x float]* %image, [648 x float]* %conv1_weight, [24 x float]* @conv1_bias) nounwind, !dbg !2093 ; [debug line = 313:5]
  call fastcc void @DownsampleUnit0([24576 x float]* @conv1_output, [576 x float]* @ShuffleConvs_0_Downs_7, [24 x float]* @ShuffleConvs_0_Downs_3, [216 x float]* @ShuffleConvs_0_Downs_9, [24 x float]* @ShuffleConvs_0_Downs_5, [576 x float]* @ShuffleConvs_0_Downs_10, [24 x float]* @ShuffleConvs_0_Downs, [216 x float]* @ShuffleConvs_0_Downs_6, [24 x float]* @ShuffleConvs_0_Downs_1, [576 x float]* @ShuffleConvs_0_Downs_8, [24 x float]* @ShuffleConvs_0_Downs_4) nounwind, !dbg !2094 ; [debug line = 315:5]
  call fastcc void @ShuffleUnit0([12288 x float]* @downsampleunit0_outp, [576 x float]* @ShuffleConvs_0_Shuff_5, [24 x float]* @ShuffleConvs_0_Shuff_19, [216 x float]* @ShuffleConvs_0_Shuff_6, [24 x float]* @ShuffleConvs_0_Shuff_20, [576 x float]* @ShuffleConvs_0_Shuff_7, [24 x float]* @ShuffleConvs_0_Shuff_21, [12288 x float]* @shuffleunit0_0_outpu) nounwind, !dbg !2095 ; [debug line = 328:5]
  call fastcc void @ShuffleUnit0([12288 x float]* @shuffleunit0_0_outpu, [576 x float]* @ShuffleConvs_0_Shuff_8, [24 x float]* @ShuffleConvs_0_Shuff_22, [216 x float]* @ShuffleConvs_0_Shuff_9, [24 x float]* @ShuffleConvs_0_Shuff_1, [576 x float]* @ShuffleConvs_0_Shuff_11, [24 x float]* @ShuffleConvs_0_Shuff_3, [12288 x float]* @shuffleunit0_1_outpu) nounwind, !dbg !2096 ; [debug line = 338:5]
  call fastcc void @ShuffleUnit0([12288 x float]* @shuffleunit0_1_outpu, [576 x float]* @ShuffleConvs_0_Shuff_13, [24 x float]* @ShuffleConvs_0_Shuff_4, [216 x float]* @ShuffleConvs_0_Shuff_15, [24 x float]* @ShuffleConvs_0_Shuff_17, [576 x float]* @ShuffleConvs_0_Shuff_18, [24 x float]* @ShuffleConvs_0_Shuff, [12288 x float]* @shuffleunit0_2_outpu) nounwind, !dbg !2097 ; [debug line = 348:5]
  call fastcc void @DownsampleUnit1([2304 x float]* @ShuffleConvs_1_Downs_7, [48 x float]* @ShuffleConvs_1_Downs_3, [432 x float]* @ShuffleConvs_1_Downs_9, [48 x float]* @ShuffleConvs_1_Downs_5, [2304 x float]* @ShuffleConvs_1_Downs_10, [48 x float]* @ShuffleConvs_1_Downs, [432 x float]* @ShuffleConvs_1_Downs_6, [48 x float]* @ShuffleConvs_1_Downs_1, [2304 x float]* @ShuffleConvs_1_Downs_8, [48 x float]* @ShuffleConvs_1_Downs_4) nounwind, !dbg !2098 ; [debug line = 358:5]
  call fastcc void @ShuffleUnit1([6144 x float]* @downsampleunit1_outp, [2304 x float]* @ShuffleConvs_1_Shuff_1, [48 x float]* @ShuffleConvs_1_Shuff_51, [432 x float]* @ShuffleConvs_1_Shuff_3, [48 x float]* @ShuffleConvs_1_Shuff_52, [2304 x float]* @ShuffleConvs_1_Shuff_5, [48 x float]* @ShuffleConvs_1_Shuff_53, [6144 x float]* @shuffleunit1_0_outpu) nounwind, !dbg !2099 ; [debug line = 371:5]
  call fastcc void @ShuffleUnit1([6144 x float]* @shuffleunit1_0_outpu, [2304 x float]* @ShuffleConvs_1_Shuff_7, [48 x float]* @ShuffleConvs_1_Shuff_54, [432 x float]* @ShuffleConvs_1_Shuff_9, [48 x float]* @ShuffleConvs_1_Shuff_56, [2304 x float]* @ShuffleConvs_1_Shuff_11, [48 x float]* @ShuffleConvs_1_Shuff_57, [6144 x float]* @shuffleunit1_1_outpu) nounwind, !dbg !2100 ; [debug line = 380:5]
  call fastcc void @ShuffleUnit1([6144 x float]* @shuffleunit1_1_outpu, [2304 x float]* @ShuffleConvs_1_Shuff_13, [48 x float]* @ShuffleConvs_1_Shuff_58, [432 x float]* @ShuffleConvs_1_Shuff_15, [48 x float]* @ShuffleConvs_1_Shuff_59, [2304 x float]* @ShuffleConvs_1_Shuff_19, [48 x float]* @ShuffleConvs_1_Shuff_60, [6144 x float]* @shuffleunit1_2_outpu) nounwind, !dbg !2101 ; [debug line = 389:5]
  call fastcc void @ShuffleUnit1([6144 x float]* @shuffleunit1_2_outpu, [2304 x float]* @ShuffleConvs_1_Shuff_21, [48 x float]* @ShuffleConvs_1_Shuff_61, [432 x float]* @ShuffleConvs_1_Shuff_23, [48 x float]* @ShuffleConvs_1_Shuff_62, [2304 x float]* @ShuffleConvs_1_Shuff_25, [48 x float]* @ShuffleConvs_1_Shuff_63, [6144 x float]* @shuffleunit1_3_outpu) nounwind, !dbg !2102 ; [debug line = 398:5]
  call fastcc void @ShuffleUnit1([6144 x float]* @shuffleunit1_3_outpu, [2304 x float]* @ShuffleConvs_1_Shuff_27, [48 x float]* @ShuffleConvs_1_Shuff_64, [432 x float]* @ShuffleConvs_1_Shuff_29, [48 x float]* @ShuffleConvs_1_Shuff_65, [2304 x float]* @ShuffleConvs_1_Shuff_31, [48 x float]* @ShuffleConvs_1_Shuff_67, [6144 x float]* @shuffleunit1_4_outpu) nounwind, !dbg !2103 ; [debug line = 407:5]
  call fastcc void @ShuffleUnit1([6144 x float]* @shuffleunit1_4_outpu, [2304 x float]* @ShuffleConvs_1_Shuff_33, [48 x float]* @ShuffleConvs_1_Shuff_68, [432 x float]* @ShuffleConvs_1_Shuff_35, [48 x float]* @ShuffleConvs_1_Shuff_69, [2304 x float]* @ShuffleConvs_1_Shuff_37, [48 x float]* @ShuffleConvs_1_Shuff_70, [6144 x float]* @shuffleunit1_5_outpu) nounwind, !dbg !2104 ; [debug line = 416:5]
  call fastcc void @ShuffleUnit1([6144 x float]* @shuffleunit1_5_outpu, [2304 x float]* @ShuffleConvs_1_Shuff_41, [48 x float]* @ShuffleConvs_1_Shuff_71, [432 x float]* @ShuffleConvs_1_Shuff_43, [48 x float]* @ShuffleConvs_1_Shuff_17, [2304 x float]* @ShuffleConvs_1_Shuff_45, [48 x float]* @ShuffleConvs_1_Shuff_39, [6144 x float]* @shuffleunit1_6_outpu) nounwind, !dbg !2105 ; [debug line = 425:5]
  call fastcc void @ShuffleUnit1([6144 x float]* @shuffleunit1_6_outpu, [2304 x float]* @ShuffleConvs_1_Shuff_47, [48 x float]* @ShuffleConvs_1_Shuff_55, [432 x float]* @ShuffleConvs_1_Shuff_49, [48 x float]* @ShuffleConvs_1_Shuff_66, [2304 x float]* @ShuffleConvs_1_Shuff_50, [48 x float]* @ShuffleConvs_1_Shuff, [6144 x float]* @shuffleunit1_7_outpu) nounwind, !dbg !2106 ; [debug line = 434:5]
  call fastcc void @DownsampleUnit2([9216 x float]* @ShuffleConvs_2_Downs_7, [96 x float]* @ShuffleConvs_2_Downs_3, [864 x float]* @ShuffleConvs_2_Downs_9, [96 x float]* @ShuffleConvs_2_Downs_5, [9216 x float]* @ShuffleConvs_2_Downs_10, [96 x float]* @ShuffleConvs_2_Downs, [864 x float]* @ShuffleConvs_2_Downs_6, [96 x float]* @ShuffleConvs_2_Downs_1, [9216 x float]* @ShuffleConvs_2_Downs_8, [96 x float]* @ShuffleConvs_2_Downs_4) nounwind, !dbg !2107 ; [debug line = 443:5]
  call fastcc void @ShuffleUnit2([3072 x float]* @downsampleunit2_outp, [9216 x float]* @ShuffleConvs_2_Shuff_5, [96 x float]* @ShuffleConvs_2_Shuff_19, [864 x float]* @ShuffleConvs_2_Shuff_6, [96 x float]* @ShuffleConvs_2_Shuff_20, [9216 x float]* @ShuffleConvs_2_Shuff_7, [96 x float]* @ShuffleConvs_2_Shuff_21, [3072 x float]* @shuffleunit2_0_outpu) nounwind, !dbg !2108 ; [debug line = 456:5]
  call fastcc void @ShuffleUnit2([3072 x float]* @shuffleunit2_0_outpu, [9216 x float]* @ShuffleConvs_2_Shuff_8, [96 x float]* @ShuffleConvs_2_Shuff_22, [864 x float]* @ShuffleConvs_2_Shuff_9, [96 x float]* @ShuffleConvs_2_Shuff_1, [9216 x float]* @ShuffleConvs_2_Shuff_11, [96 x float]* @ShuffleConvs_2_Shuff_3, [3072 x float]* @shuffleunit2_1_outpu) nounwind, !dbg !2109 ; [debug line = 465:5]
  call fastcc void @ShuffleUnit2([3072 x float]* @shuffleunit2_1_outpu, [9216 x float]* @ShuffleConvs_2_Shuff_13, [96 x float]* @ShuffleConvs_2_Shuff_4, [864 x float]* @ShuffleConvs_2_Shuff_15, [96 x float]* @ShuffleConvs_2_Shuff_17, [9216 x float]* @ShuffleConvs_2_Shuff_18, [96 x float]* @ShuffleConvs_2_Shuff, [3072 x float]* @shuffleunit2_2_outpu) nounwind, !dbg !2110 ; [debug line = 474:5]
  call fastcc void @conv_last([98304 x float]* %conv_last_weight, [512 x float]* @conv_last_bias, [8192 x float]* @conv_last_output) nounwind, !dbg !2111 ; [debug line = 485:5]
  call fastcc void @avgpool([512 x float]* @avgpool_output) nounwind, !dbg !2112 ; [debug line = 491:5]
  call void @llvm.dbg.value(metadata !{[5120 x float]* %fc_weight}, i64 0, metadata !2113) nounwind, !dbg !2118 ; [debug line = 582:8@493:5] [debug variable = weight]
  call void @llvm.dbg.value(metadata !{[1000 x float]* %fc_output}, i64 0, metadata !2119) nounwind, !dbg !2120 ; [debug line = 584:8@493:5] [debug variable = output]
  br label %16, !dbg !2121                        ; [debug line = 586:16@493:5]

; <label>:16                                      ; preds = %18, %15
  %co_i = phi i4 [ 0, %15 ], [ %co_24, %18 ]      ; [#uses=4 type=i4]
  %exitcond1_i = icmp eq i4 %co_i, -6, !dbg !2121 ; [#uses=1 type=i1] [debug line = 586:16@493:5]
  %empty_417 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10) nounwind ; [#uses=0 type=i32]
  %co_24 = add i4 %co_i, 1, !dbg !2124            ; [#uses=1 type=i4] [debug line = 586:23@493:5]
  br i1 %exitcond1_i, label %fc.exit.preheader_ifconv, label %.preheader.preheader.i, !dbg !2121 ; [debug line = 586:16@493:5]

fc.exit.preheader_ifconv:                         ; preds = %16
  ret void, !dbg !2125                            ; [debug line = 515:1]

.preheader.preheader.i:                           ; preds = %16
  %tmp_i = zext i4 %co_i to i64, !dbg !2126       ; [#uses=2 type=i64] [debug line = 589:4@493:5]
  %tmp_620 = call i13 @_ssdm_op_BitConcatenate.i13.i4.i9(i4 %co_i, i9 0) ; [#uses=1 type=i13]
  %tmp_723_cast = zext i13 %tmp_620 to i14, !dbg !2130 ; [#uses=1 type=i14] [debug line = 588:17@493:5]
  br label %.preheader.i, !dbg !2130              ; [debug line = 588:17@493:5]

.preheader.i:                                     ; preds = %17, %.preheader.preheader.i
  %sum_i = phi float [ %sum, %17 ], [ 0.000000e+00, %.preheader.preheader.i ] ; [#uses=2 type=float]
  %ci_i = phi i10 [ %ci_10, %17 ], [ 0, %.preheader.preheader.i ] ; [#uses=4 type=i10]
  %exitcond_i = icmp eq i10 %ci_i, -512, !dbg !2130 ; [#uses=1 type=i1] [debug line = 588:17@493:5]
  %empty_418 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512) nounwind ; [#uses=0 type=i32]
  %ci_10 = add i10 %ci_i, 1, !dbg !2131           ; [#uses=1 type=i10] [debug line = 588:25@493:5]
  br i1 %exitcond_i, label %18, label %17, !dbg !2130 ; [debug line = 588:17@493:5]

; <label>:17                                      ; preds = %.preheader.i
  %tmp_i_419 = zext i10 %ci_i to i64, !dbg !2126  ; [#uses=1 type=i64] [debug line = 589:4@493:5]
  %tmp_i_cast = zext i10 %ci_i to i14, !dbg !2126 ; [#uses=1 type=i14] [debug line = 589:4@493:5]
  %tmp_653 = add i14 %tmp_723_cast, %tmp_i_cast, !dbg !2126 ; [#uses=1 type=i14] [debug line = 589:4@493:5]
  %tmp_764_cast = zext i14 %tmp_653 to i64, !dbg !2126 ; [#uses=1 type=i64] [debug line = 589:4@493:5]
  %fc_weight_addr = getelementptr [5120 x float]* %fc_weight, i64 0, i64 %tmp_764_cast, !dbg !2126 ; [#uses=1 type=float*] [debug line = 589:4@493:5]
  %fc_weight_load = load float* %fc_weight_addr, align 4, !dbg !2126 ; [#uses=1 type=float] [debug line = 589:4@493:5]
  %avgpool_output_addr = getelementptr [512 x float]* @avgpool_output, i64 0, i64 %tmp_i_419, !dbg !2126 ; [#uses=1 type=float*] [debug line = 589:4@493:5]
  %avgpool_output_load = load float* %avgpool_output_addr, align 4, !dbg !2126 ; [#uses=1 type=float] [debug line = 589:4@493:5]
  %tmp_130_i = fmul float %fc_weight_load, %avgpool_output_load, !dbg !2126 ; [#uses=1 type=float] [debug line = 589:4@493:5]
  %sum = fadd float %sum_i, %tmp_130_i, !dbg !2126 ; [#uses=1 type=float] [debug line = 589:4@493:5]
  call void @llvm.dbg.value(metadata !{float %sum}, i64 0, metadata !2132) nounwind, !dbg !2126 ; [debug line = 589:4@493:5] [debug variable = sum]
  call void @llvm.dbg.value(metadata !{i10 %ci_10}, i64 0, metadata !2133) nounwind, !dbg !2131 ; [debug line = 588:25@493:5] [debug variable = ci]
  br label %.preheader.i, !dbg !2131              ; [debug line = 588:25@493:5]

; <label>:18                                      ; preds = %.preheader.i
  %fc_bias_addr_1 = getelementptr [10 x float]* @fc_bias, i64 0, i64 %tmp_i, !dbg !2134 ; [#uses=1 type=float*] [debug line = 592:32@493:5]
  %fc_bias_load = load float* %fc_bias_addr_1, align 4, !dbg !2134 ; [#uses=1 type=float] [debug line = 592:32@493:5]
  %result = fadd float %sum_i, %fc_bias_load, !dbg !2134 ; [#uses=1 type=float] [debug line = 592:32@493:5]
  call void @llvm.dbg.value(metadata !{float %result}, i64 0, metadata !2135) nounwind, !dbg !2134 ; [debug line = 592:32@493:5] [debug variable = result]
  %fc_output_addr = getelementptr [1000 x float]* %fc_output, i64 0, i64 %tmp_i, !dbg !2136 ; [#uses=1 type=float*] [debug line = 593:3@493:5]
  store float %result, float* %fc_output_addr, align 4, !dbg !2136 ; [debug line = 593:3@493:5]
  call void @llvm.dbg.value(metadata !{i4 %co_24}, i64 0, metadata !2137) nounwind, !dbg !2124 ; [debug line = 586:23@493:5] [debug variable = co]
  br label %16, !dbg !2124                        ; [debug line = 586:23@493:5]
}

; [#uses=1]
define internal fastcc void @DownsampleUnit2([9216 x float]* nocapture %conv1r_weight, [96 x float]* nocapture %conv1r_bias, [864 x float]* nocapture %conv2r_weight, [96 x float]* nocapture %conv2r_bias, [9216 x float]* nocapture %conv3r_weight, [96 x float]* nocapture %conv3r_bias, [864 x float]* nocapture %conv1l_weight, [96 x float]* nocapture %conv1l_bias, [9216 x float]* nocapture %conv2l_weight, [96 x float]* nocapture %conv2l_bias) {
meminst.0:
  %conv1r_output = alloca [6144 x float], align 4 ; [#uses=3 type=[6144 x float]*]
  %conv2r_ourput_0 = alloca [1536 x float], align 4 ; [#uses=3 type=[1536 x float]*]
  call void @llvm.dbg.declare(metadata !{[1536 x float]* %conv2r_ourput_0}, metadata !2138), !dbg !2143 ; [debug line = 488:8] [debug variable = conv2r_ourput[0]]
  %conv3r_ourput_0 = alloca [1536 x float], align 4 ; [#uses=3 type=[1536 x float]*]
  call void @llvm.dbg.declare(metadata !{[1536 x float]* %conv3r_ourput_0}, metadata !2144), !dbg !2145 ; [debug line = 489:8] [debug variable = conv3r_ourput[0]]
  %conv1l_output_0 = alloca [1536 x float], align 4 ; [#uses=3 type=[1536 x float]*]
  call void @llvm.dbg.declare(metadata !{[1536 x float]* %conv1l_output_0}, metadata !2146), !dbg !2147 ; [debug line = 490:8] [debug variable = conv1l_output[0]]
  %conv2l_output_0 = alloca [1536 x float], align 4 ; [#uses=3 type=[1536 x float]*]
  call void @llvm.dbg.declare(metadata !{[1536 x float]* %conv2l_output_0}, metadata !2148), !dbg !2149 ; [debug line = 491:8] [debug variable = conv2l_output[0]]
  call void @llvm.dbg.value(metadata !{[9216 x float]* %conv1r_weight}, i64 0, metadata !2150), !dbg !2151 ; [debug line = 475:8] [debug variable = conv1r_weight]
  call void @llvm.dbg.value(metadata !{[96 x float]* %conv1r_bias}, i64 0, metadata !2152), !dbg !2153 ; [debug line = 476:8] [debug variable = conv1r_bias]
  call void @llvm.dbg.value(metadata !{[864 x float]* %conv2r_weight}, i64 0, metadata !2154), !dbg !2155 ; [debug line = 477:8] [debug variable = conv2r_weight]
  call void @llvm.dbg.value(metadata !{[96 x float]* %conv2r_bias}, i64 0, metadata !2156), !dbg !2157 ; [debug line = 478:8] [debug variable = conv2r_bias]
  call void @llvm.dbg.value(metadata !{[9216 x float]* %conv3r_weight}, i64 0, metadata !2158), !dbg !2159 ; [debug line = 479:8] [debug variable = conv3r_weight]
  call void @llvm.dbg.value(metadata !{[96 x float]* %conv3r_bias}, i64 0, metadata !2160), !dbg !2161 ; [debug line = 480:8] [debug variable = conv3r_bias]
  call void @llvm.dbg.value(metadata !{[864 x float]* %conv1l_weight}, i64 0, metadata !2162), !dbg !2163 ; [debug line = 481:8] [debug variable = conv1l_weight]
  call void @llvm.dbg.value(metadata !{[96 x float]* %conv1l_bias}, i64 0, metadata !2164), !dbg !2165 ; [debug line = 482:8] [debug variable = conv1l_bias]
  call void @llvm.dbg.value(metadata !{[9216 x float]* %conv2l_weight}, i64 0, metadata !2166), !dbg !2167 ; [debug line = 483:8] [debug variable = conv2l_weight]
  call void @llvm.dbg.value(metadata !{[96 x float]* %conv2l_bias}, i64 0, metadata !2168), !dbg !2169 ; [debug line = 484:8] [debug variable = conv2l_bias]
  call void @llvm.dbg.declare(metadata !{[6144 x float]* %conv1r_output}, metadata !2170), !dbg !2171 ; [debug line = 487:8] [debug variable = conv1r_output]
  br label %meminst2.0

meminst25.0:                                      ; preds = %meminst69.0
  %tmp_396 = icmp eq i7 %invdar3, -33, !dbg !2172 ; [#uses=1 type=i1] [debug line = 487:38]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1r_output) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_396, label %meminst17.0.preheader, label %meminst2.0, !dbg !2172 ; [debug line = 487:38]

meminst17.0.preheader:                            ; preds = %meminst25.0
  br label %meminst17.0, !dbg !2173               ; [debug line = 488:38]

meminst69.0:                                      ; preds = %meminst10.0
  %tmp_395 = icmp eq i3 %invdar7, -1, !dbg !2172  ; [#uses=1 type=i1] [debug line = 487:38]
  %empty_420 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1r_output) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_395, label %meminst25.0, label %meminst6.0, !dbg !2172 ; [debug line = 487:38]

meminst10.0:                                      ; preds = %meminst6.0, %meminst10.0
  %invdar11 = phi i3 [ 0, %meminst6.0 ], [ %indvarinc12, %meminst10.0 ] ; [#uses=3 type=i3]
  %indvarinc12 = add i3 %invdar11, 1, !dbg !2172  ; [#uses=1 type=i3] [debug line = 487:38]
  %tmp = call i13 @_ssdm_op_BitConcatenate.i13.i7.i3.i3(i7 %invdar3, i3 %invdar7, i3 %invdar11) ; [#uses=1 type=i13]
  %tmp_654 = zext i13 %tmp to i64, !dbg !2172     ; [#uses=1 type=i64] [debug line = 487:38]
  %conv1r_output_addr = getelementptr [6144 x float]* %conv1r_output, i64 0, i64 %tmp_654, !dbg !2172 ; [#uses=1 type=float*] [debug line = 487:38]
  store float 0.000000e+00, float* %conv1r_output_addr, align 4, !dbg !2172 ; [debug line = 487:38]
  %tmp_s = icmp eq i3 %invdar11, -1, !dbg !2172   ; [#uses=1 type=i1] [debug line = 487:38]
  %empty_421 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1r_output) nounwind ; [#uses=0 type=i32]
  %empty_422 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  br i1 %tmp_s, label %meminst69.0, label %meminst10.0, !dbg !2172 ; [debug line = 487:38]

meminst6.0:                                       ; preds = %meminst2.0, %meminst69.0
  %invdar7 = phi i3 [ 0, %meminst2.0 ], [ %indvarinc8, %meminst69.0 ] ; [#uses=3 type=i3]
  %indvarinc8 = add i3 %invdar7, 1, !dbg !2172    ; [#uses=1 type=i3] [debug line = 487:38]
  %empty_423 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  br label %meminst10.0

meminst2.0:                                       ; preds = %meminst25.0, %meminst.0
  %invdar3 = phi i7 [ 0, %meminst.0 ], [ %indvarinc4, %meminst25.0 ] ; [#uses=3 type=i7]
  %indvarinc4 = add i7 %invdar3, 1, !dbg !2172    ; [#uses=1 type=i7] [debug line = 487:38]
  %empty_424 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) ; [#uses=0 type=i32]
  br label %meminst6.0

meminst1720.0:                                    ; preds = %meminst2124.0
  %tmp_399 = icmp eq i7 %invdar18, -33, !dbg !2173 ; [#uses=1 type=i1] [debug line = 488:38]
  %empty_425 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2r_ourput) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_399, label %meminst33.0.preheader, label %meminst17.0, !dbg !2173 ; [debug line = 488:38]

meminst33.0.preheader:                            ; preds = %meminst1720.0
  br label %meminst33.0, !dbg !2174               ; [debug line = 489:38]

meminst2124.0:                                    ; preds = %meminst26.0
  %tmp_398 = icmp eq i2 %invdar22, -1, !dbg !2173 ; [#uses=1 type=i1] [debug line = 488:38]
  %empty_426 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2r_ourput) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_398, label %meminst1720.0, label %meminst21.0, !dbg !2173 ; [debug line = 488:38]

meminst26.0:                                      ; preds = %meminst21.0, %meminst26.0
  %invdar27 = phi i2 [ 0, %meminst21.0 ], [ %indvarinc28, %meminst26.0 ] ; [#uses=3 type=i2]
  %indvarinc28 = add i2 %invdar27, 1, !dbg !2173  ; [#uses=1 type=i2] [debug line = 488:38]
  %tmp_147 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i2.i2(i7 %invdar18, i2 %invdar22, i2 %invdar27) ; [#uses=1 type=i11]
  %tmp_655 = zext i11 %tmp_147 to i64, !dbg !2173 ; [#uses=1 type=i64] [debug line = 488:38]
  %conv2r_ourput_0_add = getelementptr [1536 x float]* %conv2r_ourput_0, i64 0, i64 %tmp_655, !dbg !2173 ; [#uses=1 type=float*] [debug line = 488:38]
  store float 0.000000e+00, float* %conv2r_ourput_0_add, align 4, !dbg !2173 ; [debug line = 488:38]
  %tmp_397 = icmp eq i2 %invdar27, -1, !dbg !2173 ; [#uses=1 type=i1] [debug line = 488:38]
  %empty_427 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2r_ourput) nounwind ; [#uses=0 type=i32]
  %empty_428 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  br i1 %tmp_397, label %meminst2124.0, label %meminst26.0, !dbg !2173 ; [debug line = 488:38]

meminst21.0:                                      ; preds = %meminst17.0, %meminst2124.0
  %invdar22 = phi i2 [ 0, %meminst17.0 ], [ %indvarinc23, %meminst2124.0 ] ; [#uses=3 type=i2]
  %indvarinc23 = add i2 %invdar22, 1, !dbg !2173  ; [#uses=1 type=i2] [debug line = 488:38]
  %empty_429 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  br label %meminst26.0

meminst17.0:                                      ; preds = %meminst1720.0, %meminst17.0.preheader
  %invdar18 = phi i7 [ %indvarinc19, %meminst1720.0 ], [ 0, %meminst17.0.preheader ] ; [#uses=3 type=i7]
  %indvarinc19 = add i7 %invdar18, 1, !dbg !2173  ; [#uses=1 type=i7] [debug line = 488:38]
  %empty_430 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) ; [#uses=0 type=i32]
  br label %meminst21.0

meminst3336.0:                                    ; preds = %meminst3740.0
  %tmp_402 = icmp eq i7 %invdar34, -33, !dbg !2174 ; [#uses=1 type=i1] [debug line = 489:38]
  %empty_431 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv3r_ourput) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_402, label %meminst48.0.preheader, label %meminst33.0, !dbg !2174 ; [debug line = 489:38]

meminst48.0.preheader:                            ; preds = %meminst3336.0
  br label %meminst48.0, !dbg !2175               ; [debug line = 490:38]

meminst3740.0:                                    ; preds = %meminst41.0
  %tmp_401 = icmp eq i2 %invdar, -1, !dbg !2174   ; [#uses=1 type=i1] [debug line = 489:38]
  %empty_432 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv3r_ourput) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_401, label %meminst3336.0, label %meminst37.0, !dbg !2174 ; [debug line = 489:38]

meminst41.0:                                      ; preds = %meminst37.0, %meminst41.0
  %invdar35 = phi i2 [ 0, %meminst37.0 ], [ %indvarinc36, %meminst41.0 ] ; [#uses=3 type=i2]
  %indvarinc36 = add i2 %invdar35, 1, !dbg !2174  ; [#uses=1 type=i2] [debug line = 489:38]
  %tmp_148 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i2.i2(i7 %invdar34, i2 %invdar, i2 %invdar35) ; [#uses=1 type=i11]
  %tmp_656 = zext i11 %tmp_148 to i64, !dbg !2174 ; [#uses=1 type=i64] [debug line = 489:38]
  %conv3r_ourput_0_add = getelementptr [1536 x float]* %conv3r_ourput_0, i64 0, i64 %tmp_656, !dbg !2174 ; [#uses=1 type=float*] [debug line = 489:38]
  store float 0.000000e+00, float* %conv3r_ourput_0_add, align 4, !dbg !2174 ; [debug line = 489:38]
  %tmp_400 = icmp eq i2 %invdar35, -1, !dbg !2174 ; [#uses=1 type=i1] [debug line = 489:38]
  %empty_433 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv3r_ourput) nounwind ; [#uses=0 type=i32]
  %empty_434 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  br i1 %tmp_400, label %meminst3740.0, label %meminst41.0, !dbg !2174 ; [debug line = 489:38]

meminst37.0:                                      ; preds = %meminst33.0, %meminst3740.0
  %invdar = phi i2 [ 0, %meminst33.0 ], [ %indvarinc, %meminst3740.0 ] ; [#uses=3 type=i2]
  %indvarinc = add i2 %invdar, 1, !dbg !2174      ; [#uses=1 type=i2] [debug line = 489:38]
  %empty_435 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  br label %meminst41.0

meminst33.0:                                      ; preds = %meminst3336.0, %meminst33.0.preheader
  %invdar34 = phi i7 [ %indvarinc35, %meminst3336.0 ], [ 0, %meminst33.0.preheader ] ; [#uses=3 type=i7]
  %indvarinc35 = add i7 %invdar34, 1, !dbg !2174  ; [#uses=1 type=i7] [debug line = 489:38]
  %empty_436 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) ; [#uses=0 type=i32]
  br label %meminst37.0

meminst4851.0:                                    ; preds = %meminst5255.0
  %tmp_405 = icmp eq i7 %invdar36, -33, !dbg !2175 ; [#uses=1 type=i1] [debug line = 490:38]
  %empty_437 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1l_output) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_405, label %meminst63.0.preheader, label %meminst48.0, !dbg !2175 ; [debug line = 490:38]

meminst63.0.preheader:                            ; preds = %meminst4851.0
  br label %meminst63.0, !dbg !2176               ; [debug line = 491:38]

meminst5255.0:                                    ; preds = %meminst56.0
  %tmp_404 = icmp eq i2 %invdar37, -1, !dbg !2175 ; [#uses=1 type=i1] [debug line = 490:38]
  %empty_438 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1l_output) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_404, label %meminst4851.0, label %meminst52.0, !dbg !2175 ; [debug line = 490:38]

meminst56.0:                                      ; preds = %meminst52.0, %meminst56.0
  %invdar38 = phi i2 [ 0, %meminst52.0 ], [ %indvarinc39, %meminst56.0 ] ; [#uses=3 type=i2]
  %indvarinc39 = add i2 %invdar38, 1, !dbg !2175  ; [#uses=1 type=i2] [debug line = 490:38]
  %tmp_149 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i2.i2(i7 %invdar36, i2 %invdar37, i2 %invdar38) ; [#uses=1 type=i11]
  %tmp_657 = zext i11 %tmp_149 to i64, !dbg !2175 ; [#uses=1 type=i64] [debug line = 490:38]
  %conv1l_output_0_add = getelementptr [1536 x float]* %conv1l_output_0, i64 0, i64 %tmp_657, !dbg !2175 ; [#uses=1 type=float*] [debug line = 490:38]
  store float 0.000000e+00, float* %conv1l_output_0_add, align 4, !dbg !2175 ; [debug line = 490:38]
  %tmp_403 = icmp eq i2 %invdar38, -1, !dbg !2175 ; [#uses=1 type=i1] [debug line = 490:38]
  %empty_439 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1l_output) nounwind ; [#uses=0 type=i32]
  %empty_440 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  br i1 %tmp_403, label %meminst5255.0, label %meminst56.0, !dbg !2175 ; [debug line = 490:38]

meminst52.0:                                      ; preds = %meminst48.0, %meminst5255.0
  %invdar37 = phi i2 [ 0, %meminst48.0 ], [ %indvarinc38, %meminst5255.0 ] ; [#uses=3 type=i2]
  %indvarinc38 = add i2 %invdar37, 1, !dbg !2175  ; [#uses=1 type=i2] [debug line = 490:38]
  %empty_441 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  br label %meminst56.0

meminst48.0:                                      ; preds = %meminst4851.0, %meminst48.0.preheader
  %invdar36 = phi i7 [ %indvarinc37, %meminst4851.0 ], [ 0, %meminst48.0.preheader ] ; [#uses=3 type=i7]
  %indvarinc37 = add i7 %invdar36, 1, !dbg !2175  ; [#uses=1 type=i7] [debug line = 490:38]
  %empty_442 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) ; [#uses=0 type=i32]
  br label %meminst52.0

meminst6366.0:                                    ; preds = %meminst6770.0
  %tmp_408 = icmp eq i7 %invdar39, -33, !dbg !2176 ; [#uses=1 type=i1] [debug line = 491:38]
  %empty_443 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2l_output) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_408, label %meminst5962.0, label %meminst63.0, !dbg !2176 ; [debug line = 491:38]

meminst6770.0:                                    ; preds = %meminst71.0
  %tmp_407 = icmp eq i2 %invdar40, -1, !dbg !2176 ; [#uses=1 type=i1] [debug line = 491:38]
  %empty_444 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2l_output) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_407, label %meminst6366.0, label %meminst67.0, !dbg !2176 ; [debug line = 491:38]

meminst71.0:                                      ; preds = %meminst67.0, %meminst71.0
  %invdar41 = phi i2 [ 0, %meminst67.0 ], [ %indvarinc42, %meminst71.0 ] ; [#uses=3 type=i2]
  %indvarinc42 = add i2 %invdar41, 1, !dbg !2176  ; [#uses=1 type=i2] [debug line = 491:38]
  %tmp_150 = call i11 @_ssdm_op_BitConcatenate.i11.i7.i2.i2(i7 %invdar39, i2 %invdar40, i2 %invdar41) ; [#uses=1 type=i11]
  %tmp_658 = zext i11 %tmp_150 to i64, !dbg !2176 ; [#uses=1 type=i64] [debug line = 491:38]
  %conv2l_output_0_add = getelementptr [1536 x float]* %conv2l_output_0, i64 0, i64 %tmp_658, !dbg !2176 ; [#uses=1 type=float*] [debug line = 491:38]
  store float 0.000000e+00, float* %conv2l_output_0_add, align 4, !dbg !2176 ; [debug line = 491:38]
  %tmp_406 = icmp eq i2 %invdar41, -1, !dbg !2176 ; [#uses=1 type=i1] [debug line = 491:38]
  %empty_445 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2l_output) nounwind ; [#uses=0 type=i32]
  %empty_446 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  br i1 %tmp_406, label %meminst6770.0, label %meminst71.0, !dbg !2176 ; [debug line = 491:38]

meminst67.0:                                      ; preds = %meminst63.0, %meminst6770.0
  %invdar40 = phi i2 [ 0, %meminst63.0 ], [ %indvarinc41, %meminst6770.0 ] ; [#uses=3 type=i2]
  %indvarinc41 = add i2 %invdar40, 1, !dbg !2176  ; [#uses=1 type=i2] [debug line = 491:38]
  %empty_447 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  br label %meminst71.0

meminst63.0:                                      ; preds = %meminst6366.0, %meminst63.0.preheader
  %invdar39 = phi i7 [ %indvarinc40, %meminst6366.0 ], [ 0, %meminst63.0.preheader ] ; [#uses=3 type=i7]
  %indvarinc40 = add i7 %invdar39, 1, !dbg !2176  ; [#uses=1 type=i7] [debug line = 491:38]
  %empty_448 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 96, i64 96, i64 96) ; [#uses=0 type=i32]
  br label %meminst67.0

meminst5962.0:                                    ; preds = %meminst6366.0
  call fastcc void @subconv_1x1_8p20([9216 x float]* %conv1r_weight, [96 x float]* %conv1r_bias, [6144 x float]* %conv1r_output), !dbg !2177 ; [debug line = 495:2]
  call fastcc void @subconv_3x3_8_stride([6144 x float]* %conv1r_output, [864 x float]* %conv2r_weight, [96 x float]* %conv2r_bias, [1536 x float]* %conv2r_ourput_0), !dbg !2178 ; [debug line = 497:2]
  call fastcc void @subconv_1x1_419([1536 x float]* %conv2r_ourput_0, [9216 x float]* %conv3r_weight, [96 x float]* %conv3r_bias, [1536 x float]* %conv3r_ourput_0), !dbg !2179 ; [debug line = 499:2]
  call fastcc void @subconv_3x3_8_stride([6144 x float]* @shuffleunit1_7_outpu, [864 x float]* %conv1l_weight, [96 x float]* %conv1l_bias, [1536 x float]* %conv1l_output_0), !dbg !2180 ; [debug line = 501:2]
  call fastcc void @subconv_1x1_419([1536 x float]* %conv1l_output_0, [9216 x float]* %conv2l_weight, [96 x float]* %conv2l_bias, [1536 x float]* %conv2l_output_0), !dbg !2181 ; [debug line = 503:2]
  call fastcc void @shuffle_9621([1536 x float]* %conv3r_ourput_0, [1536 x float]* %conv2l_output_0, [3072 x float]* @downsampleunit2_outp), !dbg !2182 ; [debug line = 506:2]
  ret void, !dbg !2183                            ; [debug line = 509:1]
}

; [#uses=1]
define internal fastcc void @DownsampleUnit1([2304 x float]* nocapture %conv1r_weight, [48 x float]* nocapture %conv1r_bias, [432 x float]* nocapture %conv2r_weight, [48 x float]* nocapture %conv2r_bias, [2304 x float]* nocapture %conv3r_weight, [48 x float]* nocapture %conv3r_bias, [432 x float]* nocapture %conv1l_weight, [48 x float]* nocapture %conv1l_bias, [2304 x float]* nocapture %conv2l_weight, [48 x float]* nocapture %conv2l_bias) {
meminst.0:
  %conv1r_output = alloca [12288 x float], align 4 ; [#uses=3 type=[12288 x float]*]
  %conv2r_ourput_0 = alloca [3072 x float], align 4 ; [#uses=3 type=[3072 x float]*]
  call void @llvm.dbg.declare(metadata !{[3072 x float]* %conv2r_ourput_0}, metadata !2184), !dbg !2189 ; [debug line = 318:8] [debug variable = conv2r_ourput[0]]
  %conv3r_ourput_0 = alloca [3072 x float], align 4 ; [#uses=3 type=[3072 x float]*]
  call void @llvm.dbg.declare(metadata !{[3072 x float]* %conv3r_ourput_0}, metadata !2190), !dbg !2191 ; [debug line = 319:8] [debug variable = conv3r_ourput[0]]
  %conv1l_output_0 = alloca [3072 x float], align 4 ; [#uses=3 type=[3072 x float]*]
  call void @llvm.dbg.declare(metadata !{[3072 x float]* %conv1l_output_0}, metadata !2192), !dbg !2193 ; [debug line = 320:8] [debug variable = conv1l_output[0]]
  %conv2l_output_0 = alloca [3072 x float], align 4 ; [#uses=3 type=[3072 x float]*]
  call void @llvm.dbg.declare(metadata !{[3072 x float]* %conv2l_output_0}, metadata !2194), !dbg !2195 ; [debug line = 321:8] [debug variable = conv2l_output[0]]
  call void @llvm.dbg.value(metadata !{[2304 x float]* %conv1r_weight}, i64 0, metadata !2196), !dbg !2197 ; [debug line = 305:8] [debug variable = conv1r_weight]
  call void @llvm.dbg.value(metadata !{[48 x float]* %conv1r_bias}, i64 0, metadata !2198), !dbg !2199 ; [debug line = 306:8] [debug variable = conv1r_bias]
  call void @llvm.dbg.value(metadata !{[432 x float]* %conv2r_weight}, i64 0, metadata !2200), !dbg !2201 ; [debug line = 307:8] [debug variable = conv2r_weight]
  call void @llvm.dbg.value(metadata !{[48 x float]* %conv2r_bias}, i64 0, metadata !2202), !dbg !2203 ; [debug line = 308:8] [debug variable = conv2r_bias]
  call void @llvm.dbg.value(metadata !{[2304 x float]* %conv3r_weight}, i64 0, metadata !2204), !dbg !2205 ; [debug line = 309:8] [debug variable = conv3r_weight]
  call void @llvm.dbg.value(metadata !{[48 x float]* %conv3r_bias}, i64 0, metadata !2206), !dbg !2207 ; [debug line = 310:8] [debug variable = conv3r_bias]
  call void @llvm.dbg.value(metadata !{[432 x float]* %conv1l_weight}, i64 0, metadata !2208), !dbg !2209 ; [debug line = 311:8] [debug variable = conv1l_weight]
  call void @llvm.dbg.value(metadata !{[48 x float]* %conv1l_bias}, i64 0, metadata !2210), !dbg !2211 ; [debug line = 312:8] [debug variable = conv1l_bias]
  call void @llvm.dbg.value(metadata !{[2304 x float]* %conv2l_weight}, i64 0, metadata !2212), !dbg !2213 ; [debug line = 313:8] [debug variable = conv2l_weight]
  call void @llvm.dbg.value(metadata !{[48 x float]* %conv2l_bias}, i64 0, metadata !2214), !dbg !2215 ; [debug line = 314:8] [debug variable = conv2l_bias]
  call void @llvm.dbg.declare(metadata !{[12288 x float]* %conv1r_output}, metadata !2216), !dbg !2217 ; [debug line = 317:8] [debug variable = conv1r_output]
  br label %meminst2.0

meminst25.0:                                      ; preds = %meminst69.0
  %tmp_410 = icmp eq i6 %invdar3, -17, !dbg !2218 ; [#uses=1 type=i1] [debug line = 317:40]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1r_output) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_410, label %meminst17.0.preheader, label %meminst2.0, !dbg !2218 ; [debug line = 317:40]

meminst17.0.preheader:                            ; preds = %meminst25.0
  br label %meminst17.0, !dbg !2219               ; [debug line = 318:38]

meminst69.0:                                      ; preds = %meminst10.0
  %tmp_409 = icmp eq i4 %invdar7, -1, !dbg !2218  ; [#uses=1 type=i1] [debug line = 317:40]
  %empty_449 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1r_output) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_409, label %meminst25.0, label %meminst6.0, !dbg !2218 ; [debug line = 317:40]

meminst10.0:                                      ; preds = %meminst6.0, %meminst10.0
  %invdar11 = phi i4 [ 0, %meminst6.0 ], [ %indvarinc12, %meminst10.0 ] ; [#uses=3 type=i4]
  %indvarinc12 = add i4 %invdar11, 1, !dbg !2218  ; [#uses=1 type=i4] [debug line = 317:40]
  %tmp = call i14 @_ssdm_op_BitConcatenate.i14.i6.i4.i4(i6 %invdar3, i4 %invdar7, i4 %invdar11) ; [#uses=1 type=i14]
  %tmp_659 = zext i14 %tmp to i64, !dbg !2218     ; [#uses=1 type=i64] [debug line = 317:40]
  %conv1r_output_addr = getelementptr [12288 x float]* %conv1r_output, i64 0, i64 %tmp_659, !dbg !2218 ; [#uses=1 type=float*] [debug line = 317:40]
  store float 0.000000e+00, float* %conv1r_output_addr, align 4, !dbg !2218 ; [debug line = 317:40]
  %tmp_s = icmp eq i4 %invdar11, -1, !dbg !2218   ; [#uses=1 type=i1] [debug line = 317:40]
  %empty_450 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1r_output) nounwind ; [#uses=0 type=i32]
  %empty_451 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  br i1 %tmp_s, label %meminst69.0, label %meminst10.0, !dbg !2218 ; [debug line = 317:40]

meminst6.0:                                       ; preds = %meminst2.0, %meminst69.0
  %invdar7 = phi i4 [ 0, %meminst2.0 ], [ %indvarinc8, %meminst69.0 ] ; [#uses=3 type=i4]
  %indvarinc8 = add i4 %invdar7, 1, !dbg !2218    ; [#uses=1 type=i4] [debug line = 317:40]
  %empty_452 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  br label %meminst10.0

meminst2.0:                                       ; preds = %meminst25.0, %meminst.0
  %invdar3 = phi i6 [ 0, %meminst.0 ], [ %indvarinc4, %meminst25.0 ] ; [#uses=3 type=i6]
  %indvarinc4 = add i6 %invdar3, 1, !dbg !2218    ; [#uses=1 type=i6] [debug line = 317:40]
  %empty_453 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) ; [#uses=0 type=i32]
  br label %meminst6.0

meminst1720.0:                                    ; preds = %meminst2124.0
  %tmp_413 = icmp eq i6 %invdar18, -17, !dbg !2219 ; [#uses=1 type=i1] [debug line = 318:38]
  %empty_454 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2r_ourput) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_413, label %meminst33.0.preheader, label %meminst17.0, !dbg !2219 ; [debug line = 318:38]

meminst33.0.preheader:                            ; preds = %meminst1720.0
  br label %meminst33.0, !dbg !2220               ; [debug line = 319:38]

meminst2124.0:                                    ; preds = %meminst26.0
  %tmp_412 = icmp eq i3 %invdar22, -1, !dbg !2219 ; [#uses=1 type=i1] [debug line = 318:38]
  %empty_455 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2r_ourput) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_412, label %meminst1720.0, label %meminst21.0, !dbg !2219 ; [debug line = 318:38]

meminst26.0:                                      ; preds = %meminst21.0, %meminst26.0
  %invdar27 = phi i3 [ 0, %meminst21.0 ], [ %indvarinc28, %meminst26.0 ] ; [#uses=3 type=i3]
  %indvarinc28 = add i3 %invdar27, 1, !dbg !2219  ; [#uses=1 type=i3] [debug line = 318:38]
  %tmp_151 = call i12 @_ssdm_op_BitConcatenate.i12.i6.i3.i3(i6 %invdar18, i3 %invdar22, i3 %invdar27) ; [#uses=1 type=i12]
  %tmp_660 = zext i12 %tmp_151 to i64, !dbg !2219 ; [#uses=1 type=i64] [debug line = 318:38]
  %conv2r_ourput_0_add = getelementptr [3072 x float]* %conv2r_ourput_0, i64 0, i64 %tmp_660, !dbg !2219 ; [#uses=1 type=float*] [debug line = 318:38]
  store float 0.000000e+00, float* %conv2r_ourput_0_add, align 4, !dbg !2219 ; [debug line = 318:38]
  %tmp_411 = icmp eq i3 %invdar27, -1, !dbg !2219 ; [#uses=1 type=i1] [debug line = 318:38]
  %empty_456 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2r_ourput) nounwind ; [#uses=0 type=i32]
  %empty_457 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  br i1 %tmp_411, label %meminst2124.0, label %meminst26.0, !dbg !2219 ; [debug line = 318:38]

meminst21.0:                                      ; preds = %meminst17.0, %meminst2124.0
  %invdar22 = phi i3 [ 0, %meminst17.0 ], [ %indvarinc23, %meminst2124.0 ] ; [#uses=3 type=i3]
  %indvarinc23 = add i3 %invdar22, 1, !dbg !2219  ; [#uses=1 type=i3] [debug line = 318:38]
  %empty_458 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  br label %meminst26.0

meminst17.0:                                      ; preds = %meminst1720.0, %meminst17.0.preheader
  %invdar18 = phi i6 [ %indvarinc19, %meminst1720.0 ], [ 0, %meminst17.0.preheader ] ; [#uses=3 type=i6]
  %indvarinc19 = add i6 %invdar18, 1, !dbg !2219  ; [#uses=1 type=i6] [debug line = 318:38]
  %empty_459 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) ; [#uses=0 type=i32]
  br label %meminst21.0

meminst3336.0:                                    ; preds = %meminst3740.0
  %tmp_416 = icmp eq i6 %invdar34, -17, !dbg !2220 ; [#uses=1 type=i1] [debug line = 319:38]
  %empty_460 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv3r_ourput) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_416, label %meminst48.0.preheader, label %meminst33.0, !dbg !2220 ; [debug line = 319:38]

meminst48.0.preheader:                            ; preds = %meminst3336.0
  br label %meminst48.0, !dbg !2221               ; [debug line = 320:38]

meminst3740.0:                                    ; preds = %meminst41.0
  %tmp_415 = icmp eq i3 %invdar38, -1, !dbg !2220 ; [#uses=1 type=i1] [debug line = 319:38]
  %empty_461 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv3r_ourput) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_415, label %meminst3336.0, label %meminst37.0, !dbg !2220 ; [debug line = 319:38]

meminst41.0:                                      ; preds = %meminst37.0, %meminst41.0
  %invdar = phi i3 [ 0, %meminst37.0 ], [ %indvarinc, %meminst41.0 ] ; [#uses=3 type=i3]
  %indvarinc = add i3 %invdar, 1, !dbg !2220      ; [#uses=1 type=i3] [debug line = 319:38]
  %tmp_152 = call i12 @_ssdm_op_BitConcatenate.i12.i6.i3.i3(i6 %invdar34, i3 %invdar38, i3 %invdar) ; [#uses=1 type=i12]
  %tmp_661 = zext i12 %tmp_152 to i64, !dbg !2220 ; [#uses=1 type=i64] [debug line = 319:38]
  %conv3r_ourput_0_add = getelementptr [3072 x float]* %conv3r_ourput_0, i64 0, i64 %tmp_661, !dbg !2220 ; [#uses=1 type=float*] [debug line = 319:38]
  store float 0.000000e+00, float* %conv3r_ourput_0_add, align 4, !dbg !2220 ; [debug line = 319:38]
  %tmp_414 = icmp eq i3 %invdar, -1, !dbg !2220   ; [#uses=1 type=i1] [debug line = 319:38]
  %empty_462 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv3r_ourput) nounwind ; [#uses=0 type=i32]
  %empty_463 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  br i1 %tmp_414, label %meminst3740.0, label %meminst41.0, !dbg !2220 ; [debug line = 319:38]

meminst37.0:                                      ; preds = %meminst33.0, %meminst3740.0
  %invdar38 = phi i3 [ 0, %meminst33.0 ], [ %indvarinc39, %meminst3740.0 ] ; [#uses=3 type=i3]
  %indvarinc39 = add i3 %invdar38, 1, !dbg !2220  ; [#uses=1 type=i3] [debug line = 319:38]
  %empty_464 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  br label %meminst41.0

meminst33.0:                                      ; preds = %meminst3336.0, %meminst33.0.preheader
  %invdar34 = phi i6 [ %indvarinc35, %meminst3336.0 ], [ 0, %meminst33.0.preheader ] ; [#uses=3 type=i6]
  %indvarinc35 = add i6 %invdar34, 1, !dbg !2220  ; [#uses=1 type=i6] [debug line = 319:38]
  %empty_465 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) ; [#uses=0 type=i32]
  br label %meminst37.0

meminst4851.0:                                    ; preds = %meminst5255.0
  %tmp_419 = icmp eq i6 %invdar42, -17, !dbg !2221 ; [#uses=1 type=i1] [debug line = 320:38]
  %empty_466 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1l_output) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_419, label %meminst63.0.preheader, label %meminst48.0, !dbg !2221 ; [debug line = 320:38]

meminst63.0.preheader:                            ; preds = %meminst4851.0
  br label %meminst63.0, !dbg !2222               ; [debug line = 321:38]

meminst5255.0:                                    ; preds = %meminst56.0
  %tmp_418 = icmp eq i3 %invdar43, -1, !dbg !2221 ; [#uses=1 type=i1] [debug line = 320:38]
  %empty_467 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1l_output) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_418, label %meminst4851.0, label %meminst52.0, !dbg !2221 ; [debug line = 320:38]

meminst56.0:                                      ; preds = %meminst52.0, %meminst56.0
  %invdar44 = phi i3 [ 0, %meminst52.0 ], [ %indvarinc45, %meminst56.0 ] ; [#uses=3 type=i3]
  %indvarinc45 = add i3 %invdar44, 1, !dbg !2221  ; [#uses=1 type=i3] [debug line = 320:38]
  %tmp_153 = call i12 @_ssdm_op_BitConcatenate.i12.i6.i3.i3(i6 %invdar42, i3 %invdar43, i3 %invdar44) ; [#uses=1 type=i12]
  %tmp_662 = zext i12 %tmp_153 to i64, !dbg !2221 ; [#uses=1 type=i64] [debug line = 320:38]
  %conv1l_output_0_add = getelementptr [3072 x float]* %conv1l_output_0, i64 0, i64 %tmp_662, !dbg !2221 ; [#uses=1 type=float*] [debug line = 320:38]
  store float 0.000000e+00, float* %conv1l_output_0_add, align 4, !dbg !2221 ; [debug line = 320:38]
  %tmp_417 = icmp eq i3 %invdar44, -1, !dbg !2221 ; [#uses=1 type=i1] [debug line = 320:38]
  %empty_468 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1l_output) nounwind ; [#uses=0 type=i32]
  %empty_469 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  br i1 %tmp_417, label %meminst5255.0, label %meminst56.0, !dbg !2221 ; [debug line = 320:38]

meminst52.0:                                      ; preds = %meminst48.0, %meminst5255.0
  %invdar43 = phi i3 [ 0, %meminst48.0 ], [ %indvarinc44, %meminst5255.0 ] ; [#uses=3 type=i3]
  %indvarinc44 = add i3 %invdar43, 1, !dbg !2221  ; [#uses=1 type=i3] [debug line = 320:38]
  %empty_470 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  br label %meminst56.0

meminst48.0:                                      ; preds = %meminst4851.0, %meminst48.0.preheader
  %invdar42 = phi i6 [ %indvarinc43, %meminst4851.0 ], [ 0, %meminst48.0.preheader ] ; [#uses=3 type=i6]
  %indvarinc43 = add i6 %invdar42, 1, !dbg !2221  ; [#uses=1 type=i6] [debug line = 320:38]
  %empty_471 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) ; [#uses=0 type=i32]
  br label %meminst52.0

meminst6366.0:                                    ; preds = %meminst6770.0
  %tmp_422 = icmp eq i6 %invdar45, -17, !dbg !2222 ; [#uses=1 type=i1] [debug line = 321:38]
  %empty_472 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2l_output) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_422, label %meminst5962.0, label %meminst63.0, !dbg !2222 ; [debug line = 321:38]

meminst6770.0:                                    ; preds = %meminst71.0
  %tmp_421 = icmp eq i3 %invdar46, -1, !dbg !2222 ; [#uses=1 type=i1] [debug line = 321:38]
  %empty_473 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2l_output) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_421, label %meminst6366.0, label %meminst67.0, !dbg !2222 ; [debug line = 321:38]

meminst71.0:                                      ; preds = %meminst67.0, %meminst71.0
  %invdar47 = phi i3 [ 0, %meminst67.0 ], [ %indvarinc48, %meminst71.0 ] ; [#uses=3 type=i3]
  %indvarinc48 = add i3 %invdar47, 1, !dbg !2222  ; [#uses=1 type=i3] [debug line = 321:38]
  %tmp_154 = call i12 @_ssdm_op_BitConcatenate.i12.i6.i3.i3(i6 %invdar45, i3 %invdar46, i3 %invdar47) ; [#uses=1 type=i12]
  %tmp_663 = zext i12 %tmp_154 to i64, !dbg !2222 ; [#uses=1 type=i64] [debug line = 321:38]
  %conv2l_output_0_add = getelementptr [3072 x float]* %conv2l_output_0, i64 0, i64 %tmp_663, !dbg !2222 ; [#uses=1 type=float*] [debug line = 321:38]
  store float 0.000000e+00, float* %conv2l_output_0_add, align 4, !dbg !2222 ; [debug line = 321:38]
  %tmp_420 = icmp eq i3 %invdar47, -1, !dbg !2222 ; [#uses=1 type=i1] [debug line = 321:38]
  %empty_474 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2l_output) nounwind ; [#uses=0 type=i32]
  %empty_475 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  br i1 %tmp_420, label %meminst6770.0, label %meminst71.0, !dbg !2222 ; [debug line = 321:38]

meminst67.0:                                      ; preds = %meminst63.0, %meminst6770.0
  %invdar46 = phi i3 [ 0, %meminst63.0 ], [ %indvarinc47, %meminst6770.0 ] ; [#uses=3 type=i3]
  %indvarinc47 = add i3 %invdar46, 1, !dbg !2222  ; [#uses=1 type=i3] [debug line = 321:38]
  %empty_476 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  br label %meminst71.0

meminst63.0:                                      ; preds = %meminst6366.0, %meminst63.0.preheader
  %invdar45 = phi i6 [ %indvarinc46, %meminst6366.0 ], [ 0, %meminst63.0.preheader ] ; [#uses=3 type=i6]
  %indvarinc46 = add i6 %invdar45, 1, !dbg !2222  ; [#uses=1 type=i6] [debug line = 321:38]
  %empty_477 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48) ; [#uses=0 type=i32]
  br label %meminst67.0

meminst5962.0:                                    ; preds = %meminst6366.0
  call fastcc void @subconv_1x1_16p16([2304 x float]* %conv1r_weight, [48 x float]* %conv1r_bias, [12288 x float]* %conv1r_output), !dbg !2223 ; [debug line = 325:2]
  call fastcc void @subconv_3x3_16_strid([12288 x float]* %conv1r_output, [432 x float]* %conv2r_weight, [48 x float]* %conv2r_bias, [3072 x float]* %conv2r_ourput_0), !dbg !2224 ; [debug line = 327:2]
  call fastcc void @subconv_1x1_89([3072 x float]* %conv2r_ourput_0, [2304 x float]* %conv3r_weight, [48 x float]* %conv3r_bias, [3072 x float]* %conv3r_ourput_0), !dbg !2225 ; [debug line = 329:2]
  call fastcc void @subconv_3x3_16_strid([12288 x float]* @shuffleunit0_2_outpu, [432 x float]* %conv1l_weight, [48 x float]* %conv1l_bias, [3072 x float]* %conv1l_output_0), !dbg !2226 ; [debug line = 331:2]
  call fastcc void @subconv_1x1_89([3072 x float]* %conv1l_output_0, [2304 x float]* %conv2l_weight, [48 x float]* %conv2l_bias, [3072 x float]* %conv2l_output_0), !dbg !2227 ; [debug line = 333:2]
  call fastcc void @shuffle_4811([3072 x float]* %conv3r_ourput_0, [3072 x float]* %conv2l_output_0, [6144 x float]* @downsampleunit1_outp), !dbg !2228 ; [debug line = 336:2]
  ret void, !dbg !2229                            ; [debug line = 339:1]
}

; [#uses=1]
define internal fastcc void @DownsampleUnit0([24576 x float]* nocapture %input, [576 x float]* nocapture %conv1r_weight, [24 x float]* nocapture %conv1r_bias, [216 x float]* nocapture %conv2r_weight, [24 x float]* nocapture %conv2r_bias, [576 x float]* nocapture %conv3r_weight, [24 x float]* nocapture %conv3r_bias, [216 x float]* nocapture %conv1l_weight, [24 x float]* nocapture %conv1l_bias, [576 x float]* nocapture %conv2l_weight, [24 x float]* nocapture %conv2l_bias) {
meminst.0:
  %conv1r_output = alloca [24576 x float], align 4 ; [#uses=3 type=[24576 x float]*]
  %conv2r_ourput_0 = alloca [6144 x float], align 4 ; [#uses=3 type=[6144 x float]*]
  call void @llvm.dbg.declare(metadata !{[6144 x float]* %conv2r_ourput_0}, metadata !2230), !dbg !2235 ; [debug line = 147:8] [debug variable = conv2r_ourput[0]]
  %conv3r_ourput_0 = alloca [6144 x float], align 4 ; [#uses=3 type=[6144 x float]*]
  call void @llvm.dbg.declare(metadata !{[6144 x float]* %conv3r_ourput_0}, metadata !2236), !dbg !2237 ; [debug line = 148:8] [debug variable = conv3r_ourput[0]]
  %conv1l_output_0 = alloca [6144 x float], align 4 ; [#uses=3 type=[6144 x float]*]
  call void @llvm.dbg.declare(metadata !{[6144 x float]* %conv1l_output_0}, metadata !2238), !dbg !2239 ; [debug line = 149:8] [debug variable = conv1l_output[0]]
  %conv2l_output_0 = alloca [6144 x float], align 4 ; [#uses=3 type=[6144 x float]*]
  call void @llvm.dbg.declare(metadata !{[6144 x float]* %conv2l_output_0}, metadata !2240), !dbg !2241 ; [debug line = 150:8] [debug variable = conv2l_output[0]]
  call void @llvm.dbg.value(metadata !{[24576 x float]* %input}, i64 0, metadata !2242), !dbg !2243 ; [debug line = 133:28] [debug variable = input]
  call void @llvm.dbg.value(metadata !{[576 x float]* %conv1r_weight}, i64 0, metadata !2244), !dbg !2245 ; [debug line = 134:8] [debug variable = conv1r_weight]
  call void @llvm.dbg.value(metadata !{[24 x float]* %conv1r_bias}, i64 0, metadata !2246), !dbg !2247 ; [debug line = 135:8] [debug variable = conv1r_bias]
  call void @llvm.dbg.value(metadata !{[216 x float]* %conv2r_weight}, i64 0, metadata !2248), !dbg !2249 ; [debug line = 136:8] [debug variable = conv2r_weight]
  call void @llvm.dbg.value(metadata !{[24 x float]* %conv2r_bias}, i64 0, metadata !2250), !dbg !2251 ; [debug line = 137:8] [debug variable = conv2r_bias]
  call void @llvm.dbg.value(metadata !{[576 x float]* %conv3r_weight}, i64 0, metadata !2252), !dbg !2253 ; [debug line = 138:8] [debug variable = conv3r_weight]
  call void @llvm.dbg.value(metadata !{[24 x float]* %conv3r_bias}, i64 0, metadata !2254), !dbg !2255 ; [debug line = 139:8] [debug variable = conv3r_bias]
  call void @llvm.dbg.value(metadata !{[216 x float]* %conv1l_weight}, i64 0, metadata !2256), !dbg !2257 ; [debug line = 140:8] [debug variable = conv1l_weight]
  call void @llvm.dbg.value(metadata !{[24 x float]* %conv1l_bias}, i64 0, metadata !2258), !dbg !2259 ; [debug line = 141:8] [debug variable = conv1l_bias]
  call void @llvm.dbg.value(metadata !{[576 x float]* %conv2l_weight}, i64 0, metadata !2260), !dbg !2261 ; [debug line = 142:8] [debug variable = conv2l_weight]
  call void @llvm.dbg.value(metadata !{[24 x float]* %conv2l_bias}, i64 0, metadata !2262), !dbg !2263 ; [debug line = 143:8] [debug variable = conv2l_bias]
  call void @llvm.dbg.declare(metadata !{[24576 x float]* %conv1r_output}, metadata !2264), !dbg !2265 ; [debug line = 146:8] [debug variable = conv1r_output]
  br label %meminst2.0

meminst25.0:                                      ; preds = %meminst69.0
  %tmp_424 = icmp eq i5 %invdar3, -9, !dbg !2266  ; [#uses=1 type=i1] [debug line = 146:40]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1r_output) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_424, label %meminst17.0.preheader, label %meminst2.0, !dbg !2266 ; [debug line = 146:40]

meminst17.0.preheader:                            ; preds = %meminst25.0
  br label %meminst17.0, !dbg !2267               ; [debug line = 147:40]

meminst69.0:                                      ; preds = %meminst10.0
  %tmp_423 = icmp eq i5 %invdar7, -1, !dbg !2266  ; [#uses=1 type=i1] [debug line = 146:40]
  %empty_478 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1r_output) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_423, label %meminst25.0, label %meminst6.0, !dbg !2266 ; [debug line = 146:40]

meminst10.0:                                      ; preds = %meminst6.0, %meminst10.0
  %invdar11 = phi i5 [ 0, %meminst6.0 ], [ %indvarinc12, %meminst10.0 ] ; [#uses=3 type=i5]
  %indvarinc12 = add i5 %invdar11, 1, !dbg !2266  ; [#uses=1 type=i5] [debug line = 146:40]
  %tmp = call i15 @_ssdm_op_BitConcatenate.i15.i5.i5.i5(i5 %invdar3, i5 %invdar7, i5 %invdar11) ; [#uses=1 type=i15]
  %tmp_664 = zext i15 %tmp to i64, !dbg !2266     ; [#uses=1 type=i64] [debug line = 146:40]
  %conv1r_output_addr = getelementptr [24576 x float]* %conv1r_output, i64 0, i64 %tmp_664, !dbg !2266 ; [#uses=1 type=float*] [debug line = 146:40]
  store float 0.000000e+00, float* %conv1r_output_addr, align 4, !dbg !2266 ; [debug line = 146:40]
  %tmp_s = icmp eq i5 %invdar11, -1, !dbg !2266   ; [#uses=1 type=i1] [debug line = 146:40]
  %empty_479 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1r_output) nounwind ; [#uses=0 type=i32]
  %empty_480 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32) ; [#uses=0 type=i32]
  br i1 %tmp_s, label %meminst69.0, label %meminst10.0, !dbg !2266 ; [debug line = 146:40]

meminst6.0:                                       ; preds = %meminst2.0, %meminst69.0
  %invdar7 = phi i5 [ 0, %meminst2.0 ], [ %indvarinc8, %meminst69.0 ] ; [#uses=3 type=i5]
  %indvarinc8 = add i5 %invdar7, 1, !dbg !2266    ; [#uses=1 type=i5] [debug line = 146:40]
  %empty_481 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32) ; [#uses=0 type=i32]
  br label %meminst10.0

meminst2.0:                                       ; preds = %meminst25.0, %meminst.0
  %invdar3 = phi i5 [ 0, %meminst.0 ], [ %indvarinc4, %meminst25.0 ] ; [#uses=3 type=i5]
  %indvarinc4 = add i5 %invdar3, 1, !dbg !2266    ; [#uses=1 type=i5] [debug line = 146:40]
  %empty_482 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) ; [#uses=0 type=i32]
  br label %meminst6.0

meminst1720.0:                                    ; preds = %meminst2124.0
  %tmp_427 = icmp eq i5 %invdar18, -9, !dbg !2267 ; [#uses=1 type=i1] [debug line = 147:40]
  %empty_483 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2r_ourput) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_427, label %meminst33.0.preheader, label %meminst17.0, !dbg !2267 ; [debug line = 147:40]

meminst33.0.preheader:                            ; preds = %meminst1720.0
  br label %meminst33.0, !dbg !2268               ; [debug line = 148:40]

meminst2124.0:                                    ; preds = %meminst26.0
  %tmp_426 = icmp eq i4 %invdar22, -1, !dbg !2267 ; [#uses=1 type=i1] [debug line = 147:40]
  %empty_484 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2r_ourput) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_426, label %meminst1720.0, label %meminst21.0, !dbg !2267 ; [debug line = 147:40]

meminst26.0:                                      ; preds = %meminst21.0, %meminst26.0
  %invdar27 = phi i4 [ 0, %meminst21.0 ], [ %indvarinc28, %meminst26.0 ] ; [#uses=3 type=i4]
  %indvarinc28 = add i4 %invdar27, 1, !dbg !2267  ; [#uses=1 type=i4] [debug line = 147:40]
  %tmp_155 = call i13 @_ssdm_op_BitConcatenate.i13.i5.i4.i4(i5 %invdar18, i4 %invdar22, i4 %invdar27) ; [#uses=1 type=i13]
  %tmp_665 = zext i13 %tmp_155 to i64, !dbg !2267 ; [#uses=1 type=i64] [debug line = 147:40]
  %conv2r_ourput_0_add = getelementptr [6144 x float]* %conv2r_ourput_0, i64 0, i64 %tmp_665, !dbg !2267 ; [#uses=1 type=float*] [debug line = 147:40]
  store float 0.000000e+00, float* %conv2r_ourput_0_add, align 4, !dbg !2267 ; [debug line = 147:40]
  %tmp_425 = icmp eq i4 %invdar27, -1, !dbg !2267 ; [#uses=1 type=i1] [debug line = 147:40]
  %empty_485 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2r_ourput) nounwind ; [#uses=0 type=i32]
  %empty_486 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  br i1 %tmp_425, label %meminst2124.0, label %meminst26.0, !dbg !2267 ; [debug line = 147:40]

meminst21.0:                                      ; preds = %meminst17.0, %meminst2124.0
  %invdar22 = phi i4 [ 0, %meminst17.0 ], [ %indvarinc23, %meminst2124.0 ] ; [#uses=3 type=i4]
  %indvarinc23 = add i4 %invdar22, 1, !dbg !2267  ; [#uses=1 type=i4] [debug line = 147:40]
  %empty_487 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  br label %meminst26.0

meminst17.0:                                      ; preds = %meminst1720.0, %meminst17.0.preheader
  %invdar18 = phi i5 [ %indvarinc19, %meminst1720.0 ], [ 0, %meminst17.0.preheader ] ; [#uses=3 type=i5]
  %indvarinc19 = add i5 %invdar18, 1, !dbg !2267  ; [#uses=1 type=i5] [debug line = 147:40]
  %empty_488 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) ; [#uses=0 type=i32]
  br label %meminst21.0

meminst3336.0:                                    ; preds = %meminst3740.0
  %tmp_430 = icmp eq i5 %invdar34, -9, !dbg !2268 ; [#uses=1 type=i1] [debug line = 148:40]
  %empty_489 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv3r_ourput) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_430, label %meminst48.0.preheader, label %meminst33.0, !dbg !2268 ; [debug line = 148:40]

meminst48.0.preheader:                            ; preds = %meminst3336.0
  br label %meminst48.0, !dbg !2269               ; [debug line = 149:40]

meminst3740.0:                                    ; preds = %meminst41.0
  %tmp_429 = icmp eq i4 %invdar38, -1, !dbg !2268 ; [#uses=1 type=i1] [debug line = 148:40]
  %empty_490 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv3r_ourput) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_429, label %meminst3336.0, label %meminst37.0, !dbg !2268 ; [debug line = 148:40]

meminst41.0:                                      ; preds = %meminst37.0, %meminst41.0
  %invdar42 = phi i4 [ 0, %meminst37.0 ], [ %indvarinc43, %meminst41.0 ] ; [#uses=3 type=i4]
  %indvarinc43 = add i4 %invdar42, 1, !dbg !2268  ; [#uses=1 type=i4] [debug line = 148:40]
  %tmp_156 = call i13 @_ssdm_op_BitConcatenate.i13.i5.i4.i4(i5 %invdar34, i4 %invdar38, i4 %invdar42) ; [#uses=1 type=i13]
  %tmp_666 = zext i13 %tmp_156 to i64, !dbg !2268 ; [#uses=1 type=i64] [debug line = 148:40]
  %conv3r_ourput_0_add = getelementptr [6144 x float]* %conv3r_ourput_0, i64 0, i64 %tmp_666, !dbg !2268 ; [#uses=1 type=float*] [debug line = 148:40]
  store float 0.000000e+00, float* %conv3r_ourput_0_add, align 4, !dbg !2268 ; [debug line = 148:40]
  %tmp_428 = icmp eq i4 %invdar42, -1, !dbg !2268 ; [#uses=1 type=i1] [debug line = 148:40]
  %empty_491 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv3r_ourput) nounwind ; [#uses=0 type=i32]
  %empty_492 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  br i1 %tmp_428, label %meminst3740.0, label %meminst41.0, !dbg !2268 ; [debug line = 148:40]

meminst37.0:                                      ; preds = %meminst33.0, %meminst3740.0
  %invdar38 = phi i4 [ 0, %meminst33.0 ], [ %indvarinc39, %meminst3740.0 ] ; [#uses=3 type=i4]
  %indvarinc39 = add i4 %invdar38, 1, !dbg !2268  ; [#uses=1 type=i4] [debug line = 148:40]
  %empty_493 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  br label %meminst41.0

meminst33.0:                                      ; preds = %meminst3336.0, %meminst33.0.preheader
  %invdar34 = phi i5 [ %indvarinc35, %meminst3336.0 ], [ 0, %meminst33.0.preheader ] ; [#uses=3 type=i5]
  %indvarinc35 = add i5 %invdar34, 1, !dbg !2268  ; [#uses=1 type=i5] [debug line = 148:40]
  %empty_494 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) ; [#uses=0 type=i32]
  br label %meminst37.0

meminst4851.0:                                    ; preds = %meminst5255.0
  %tmp_433 = icmp eq i5 %invdar, -9, !dbg !2269   ; [#uses=1 type=i1] [debug line = 149:40]
  %empty_495 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1l_output) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_433, label %meminst63.0.preheader, label %meminst48.0, !dbg !2269 ; [debug line = 149:40]

meminst63.0.preheader:                            ; preds = %meminst4851.0
  br label %meminst63.0, !dbg !2270               ; [debug line = 150:40]

meminst5255.0:                                    ; preds = %meminst56.0
  %tmp_432 = icmp eq i4 %invdar48, -1, !dbg !2269 ; [#uses=1 type=i1] [debug line = 149:40]
  %empty_496 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1l_output) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_432, label %meminst4851.0, label %meminst52.0, !dbg !2269 ; [debug line = 149:40]

meminst56.0:                                      ; preds = %meminst52.0, %meminst56.0
  %invdar49 = phi i4 [ 0, %meminst52.0 ], [ %indvarinc50, %meminst56.0 ] ; [#uses=3 type=i4]
  %indvarinc50 = add i4 %invdar49, 1, !dbg !2269  ; [#uses=1 type=i4] [debug line = 149:40]
  %tmp_157 = call i13 @_ssdm_op_BitConcatenate.i13.i5.i4.i4(i5 %invdar, i4 %invdar48, i4 %invdar49) ; [#uses=1 type=i13]
  %tmp_667 = zext i13 %tmp_157 to i64, !dbg !2269 ; [#uses=1 type=i64] [debug line = 149:40]
  %conv1l_output_0_add = getelementptr [6144 x float]* %conv1l_output_0, i64 0, i64 %tmp_667, !dbg !2269 ; [#uses=1 type=float*] [debug line = 149:40]
  store float 0.000000e+00, float* %conv1l_output_0_add, align 4, !dbg !2269 ; [debug line = 149:40]
  %tmp_431 = icmp eq i4 %invdar49, -1, !dbg !2269 ; [#uses=1 type=i1] [debug line = 149:40]
  %empty_497 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv1l_output) nounwind ; [#uses=0 type=i32]
  %empty_498 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  br i1 %tmp_431, label %meminst5255.0, label %meminst56.0, !dbg !2269 ; [debug line = 149:40]

meminst52.0:                                      ; preds = %meminst48.0, %meminst5255.0
  %invdar48 = phi i4 [ 0, %meminst48.0 ], [ %indvarinc49, %meminst5255.0 ] ; [#uses=3 type=i4]
  %indvarinc49 = add i4 %invdar48, 1, !dbg !2269  ; [#uses=1 type=i4] [debug line = 149:40]
  %empty_499 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  br label %meminst56.0

meminst48.0:                                      ; preds = %meminst4851.0, %meminst48.0.preheader
  %invdar = phi i5 [ %indvarinc, %meminst4851.0 ], [ 0, %meminst48.0.preheader ] ; [#uses=3 type=i5]
  %indvarinc = add i5 %invdar, 1, !dbg !2269      ; [#uses=1 type=i5] [debug line = 149:40]
  %empty_500 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) ; [#uses=0 type=i32]
  br label %meminst52.0

meminst6366.0:                                    ; preds = %meminst6770.0
  %tmp_436 = icmp eq i5 %invdar50, -9, !dbg !2270 ; [#uses=1 type=i1] [debug line = 150:40]
  %empty_501 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2l_output) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_436, label %meminst5962.0, label %meminst63.0, !dbg !2270 ; [debug line = 150:40]

meminst6770.0:                                    ; preds = %meminst71.0
  %tmp_435 = icmp eq i4 %invdar51, -1, !dbg !2270 ; [#uses=1 type=i1] [debug line = 150:40]
  %empty_502 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2l_output) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_435, label %meminst6366.0, label %meminst67.0, !dbg !2270 ; [debug line = 150:40]

meminst71.0:                                      ; preds = %meminst67.0, %meminst71.0
  %invdar52 = phi i4 [ 0, %meminst67.0 ], [ %indvarinc53, %meminst71.0 ] ; [#uses=3 type=i4]
  %indvarinc53 = add i4 %invdar52, 1, !dbg !2270  ; [#uses=1 type=i4] [debug line = 150:40]
  %tmp_158 = call i13 @_ssdm_op_BitConcatenate.i13.i5.i4.i4(i5 %invdar50, i4 %invdar51, i4 %invdar52) ; [#uses=1 type=i13]
  %tmp_668 = zext i13 %tmp_158 to i64, !dbg !2270 ; [#uses=1 type=i64] [debug line = 150:40]
  %conv2l_output_0_add = getelementptr [6144 x float]* %conv2l_output_0, i64 0, i64 %tmp_668, !dbg !2270 ; [#uses=1 type=float*] [debug line = 150:40]
  store float 0.000000e+00, float* %conv2l_output_0_add, align 4, !dbg !2270 ; [debug line = 150:40]
  %tmp_434 = icmp eq i4 %invdar52, -1, !dbg !2270 ; [#uses=1 type=i1] [debug line = 150:40]
  %empty_503 = call i32 (...)* @_ssdm_op_SpecLoopName([21 x i8]* @memset_conv2l_output) nounwind ; [#uses=0 type=i32]
  %empty_504 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  br i1 %tmp_434, label %meminst6770.0, label %meminst71.0, !dbg !2270 ; [debug line = 150:40]

meminst67.0:                                      ; preds = %meminst63.0, %meminst6770.0
  %invdar51 = phi i4 [ 0, %meminst63.0 ], [ %indvarinc52, %meminst6770.0 ] ; [#uses=3 type=i4]
  %indvarinc52 = add i4 %invdar51, 1, !dbg !2270  ; [#uses=1 type=i4] [debug line = 150:40]
  %empty_505 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  br label %meminst71.0

meminst63.0:                                      ; preds = %meminst6366.0, %meminst63.0.preheader
  %invdar50 = phi i5 [ %indvarinc51, %meminst6366.0 ], [ 0, %meminst63.0.preheader ] ; [#uses=3 type=i5]
  %indvarinc51 = add i5 %invdar50, 1, !dbg !2270  ; [#uses=1 type=i5] [debug line = 150:40]
  %empty_506 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 24, i64 24, i64 24) ; [#uses=0 type=i32]
  br label %meminst67.0

meminst5962.0:                                    ; preds = %meminst6366.0
  call fastcc void @subconv_1x1_3214([24576 x float]* %input, [576 x float]* %conv1r_weight, [24 x float]* %conv1r_bias, [24576 x float]* %conv1r_output), !dbg !2271 ; [debug line = 154:2]
  call fastcc void @subconv_3x3_32_strid([24576 x float]* %conv1r_output, [216 x float]* %conv2r_weight, [24 x float]* %conv2r_bias, [6144 x float]* %conv2r_ourput_0), !dbg !2272 ; [debug line = 156:2]
  call fastcc void @subconv_1x1_1612([6144 x float]* %conv2r_ourput_0, [576 x float]* %conv3r_weight, [24 x float]* %conv3r_bias, [6144 x float]* %conv3r_ourput_0), !dbg !2273 ; [debug line = 158:2]
  call fastcc void @subconv_3x3_32_strid([24576 x float]* %input, [216 x float]* %conv1l_weight, [24 x float]* %conv1l_bias, [6144 x float]* %conv1l_output_0), !dbg !2274 ; [debug line = 160:2]
  call fastcc void @subconv_1x1_1612([6144 x float]* %conv1l_output_0, [576 x float]* %conv2l_weight, [24 x float]* %conv2l_bias, [6144 x float]* %conv2l_output_0), !dbg !2275 ; [debug line = 162:2]
  call fastcc void @shuffle_2415([6144 x float]* %conv3r_ourput_0, [6144 x float]* %conv2l_output_0, [12288 x float]* @downsampleunit0_outp), !dbg !2276 ; [debug line = 165:2]
  ret void, !dbg !2277                            ; [debug line = 166:1]
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
!874 = metadata !{i32 786689, metadata !875, metadata !"input", null, i32 419, metadata !897, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!875 = metadata !{i32 786478, i32 0, metadata !876, metadata !"subconv_3x3_8_stride_no_relu", metadata !"subconv_3x3_8_stride_no_relu", metadata !"_Z28subconv_3x3_8_stride_no_reluPA96_A8_A8_fPA1_A3_A3_fPfPA96_A4_A4_f", metadata !876, i32 419, metadata !877, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !895, i32 422} ; [ DW_TAG_subprogram ]
!876 = metadata !{i32 786473, metadata !"accelerator_hls/components.cpp", metadata !"/home/ziyan/ziyan/ece527/shufflenetv2_master/sufflenetv3_vivado", null} ; [ DW_TAG_file_type ]
!877 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !878, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!878 = metadata !{null, metadata !879, metadata !885, metadata !890, metadata !891}
!879 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !880} ; [ DW_TAG_pointer_type ]
!880 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 196608, i64 32, i32 0, i32 0, metadata !881, metadata !882, i32 0, i32 0} ; [ DW_TAG_array_type ]
!881 = metadata !{i32 786468, null, metadata !"float", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ]
!882 = metadata !{metadata !883, metadata !884, metadata !884}
!883 = metadata !{i32 786465, i64 0, i64 95}      ; [ DW_TAG_subrange_type ]
!884 = metadata !{i32 786465, i64 0, i64 7}       ; [ DW_TAG_subrange_type ]
!885 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !886} ; [ DW_TAG_pointer_type ]
!886 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 288, i64 32, i32 0, i32 0, metadata !881, metadata !887, i32 0, i32 0} ; [ DW_TAG_array_type ]
!887 = metadata !{metadata !888, metadata !889, metadata !889}
!888 = metadata !{i32 786465, i64 0, i64 0}       ; [ DW_TAG_subrange_type ]
!889 = metadata !{i32 786465, i64 0, i64 2}       ; [ DW_TAG_subrange_type ]
!890 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !881} ; [ DW_TAG_pointer_type ]
!891 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !892} ; [ DW_TAG_pointer_type ]
!892 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 49152, i64 32, i32 0, i32 0, metadata !881, metadata !893, i32 0, i32 0} ; [ DW_TAG_array_type ]
!893 = metadata !{metadata !883, metadata !894, metadata !894}
!894 = metadata !{i32 786465, i64 0, i64 3}       ; [ DW_TAG_subrange_type ]
!895 = metadata !{metadata !896}
!896 = metadata !{i32 786468}                     ; [ DW_TAG_base_type ]
!897 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 196608, i64 32, i32 0, i32 0, metadata !881, metadata !898, i32 0, i32 0} ; [ DW_TAG_array_type ]
!898 = metadata !{metadata !888, metadata !883, metadata !884, metadata !884}
!899 = metadata !{i32 419, i32 41, metadata !875, null}
!900 = metadata !{i32 786689, metadata !875, metadata !"weight", null, i32 420, metadata !901, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!901 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 27648, i64 32, i32 0, i32 0, metadata !881, metadata !902, i32 0, i32 0} ; [ DW_TAG_array_type ]
!902 = metadata !{metadata !883, metadata !888, metadata !889, metadata !889}
!903 = metadata !{i32 420, i32 8, metadata !875, null}
!904 = metadata !{i32 786689, metadata !875, metadata !"bias", null, i32 421, metadata !905, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!905 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 3072, i64 32, i32 0, i32 0, metadata !881, metadata !906, i32 0, i32 0} ; [ DW_TAG_array_type ]
!906 = metadata !{metadata !883}
!907 = metadata !{i32 421, i32 8, metadata !875, null}
!908 = metadata !{i32 786689, metadata !875, metadata !"output[0]", null, i32 422, metadata !909, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!909 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 49152, i64 32, i32 0, i32 0, metadata !881, metadata !910, i32 0, i32 0} ; [ DW_TAG_array_type ]
!910 = metadata !{metadata !888, metadata !883, metadata !894, metadata !894}
!911 = metadata !{i32 422, i32 8, metadata !875, null}
!912 = metadata !{i32 423, i32 16, metadata !913, null}
!913 = metadata !{i32 786443, metadata !914, i32 423, i32 2, metadata !876, i32 142} ; [ DW_TAG_lexical_block ]
!914 = metadata !{i32 786443, metadata !875, i32 422, i32 28, metadata !876, i32 141} ; [ DW_TAG_lexical_block ]
!915 = metadata !{i32 423, i32 23, metadata !913, null}
!916 = metadata !{i32 786688, metadata !913, metadata !"co", metadata !876, i32 423, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!917 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!918 = metadata !{i32 429, i32 8, metadata !919, null}
!919 = metadata !{i32 786443, metadata !920, i32 428, i32 29, metadata !876, i32 151} ; [ DW_TAG_lexical_block ]
!920 = metadata !{i32 786443, metadata !921, i32 428, i32 7, metadata !876, i32 150} ; [ DW_TAG_lexical_block ]
!921 = metadata !{i32 786443, metadata !922, i32 427, i32 27, metadata !876, i32 149} ; [ DW_TAG_lexical_block ]
!922 = metadata !{i32 786443, metadata !923, i32 427, i32 5, metadata !876, i32 148} ; [ DW_TAG_lexical_block ]
!923 = metadata !{i32 786443, metadata !924, i32 425, i32 26, metadata !876, i32 147} ; [ DW_TAG_lexical_block ]
!924 = metadata !{i32 786443, metadata !925, i32 425, i32 4, metadata !876, i32 146} ; [ DW_TAG_lexical_block ]
!925 = metadata !{i32 786443, metadata !926, i32 424, i32 25, metadata !876, i32 145} ; [ DW_TAG_lexical_block ]
!926 = metadata !{i32 786443, metadata !927, i32 424, i32 3, metadata !876, i32 144} ; [ DW_TAG_lexical_block ]
!927 = metadata !{i32 786443, metadata !913, i32 423, i32 28, metadata !876, i32 143} ; [ DW_TAG_lexical_block ]
!928 = metadata !{i32 432, i32 34, metadata !923, null}
!929 = metadata !{i32 424, i32 16, metadata !926, null}
!930 = metadata !{i32 424, i32 21, metadata !926, null}
!931 = metadata !{i32 786688, metadata !926, metadata !"h", metadata !876, i32 424, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!932 = metadata !{i32 433, i32 5, metadata !923, null}
!933 = metadata !{i32 425, i32 17, metadata !924, null}
!934 = metadata !{i32 425, i32 22, metadata !924, null}
!935 = metadata !{i32 427, i32 18, metadata !922, null}
!936 = metadata !{i32 427, i32 23, metadata !922, null}
!937 = metadata !{i32 786688, metadata !922, metadata !"m", metadata !876, i32 427, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!938 = metadata !{i32 428, i32 20, metadata !920, null}
!939 = metadata !{i32 428, i32 25, metadata !920, null}
!940 = metadata !{i32 786688, metadata !923, metadata !"sum", metadata !876, i32 426, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!941 = metadata !{i32 786688, metadata !920, metadata !"n", metadata !876, i32 428, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!942 = metadata !{i32 786688, metadata !923, metadata !"result", metadata !876, i32 432, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!943 = metadata !{i32 786688, metadata !924, metadata !"w", metadata !876, i32 425, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!944 = metadata !{i32 438, i32 1, metadata !914, null}
!945 = metadata !{i32 786689, metadata !946, metadata !"input[0]", null, i32 272, metadata !953, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!946 = metadata !{i32 786478, i32 0, metadata !876, metadata !"subconv_3x3_8_no_relu", metadata !"subconv_3x3_8_no_relu", metadata !"_Z21subconv_3x3_8_no_reluPA48_A8_A8_fPA1_A3_A3_fPfS2_", metadata !876, i32 272, metadata !947, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !895, i32 275} ; [ DW_TAG_subprogram ]
!947 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !948, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!948 = metadata !{null, metadata !949, metadata !885, metadata !890, metadata !949}
!949 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !950} ; [ DW_TAG_pointer_type ]
!950 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 98304, i64 32, i32 0, i32 0, metadata !881, metadata !951, i32 0, i32 0} ; [ DW_TAG_array_type ]
!951 = metadata !{metadata !952, metadata !884, metadata !884}
!952 = metadata !{i32 786465, i64 0, i64 47}      ; [ DW_TAG_subrange_type ]
!953 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 98304, i64 32, i32 0, i32 0, metadata !881, metadata !954, i32 0, i32 0} ; [ DW_TAG_array_type ]
!954 = metadata !{metadata !888, metadata !952, metadata !884, metadata !884}
!955 = metadata !{i32 272, i32 34, metadata !946, null}
!956 = metadata !{i32 786689, metadata !946, metadata !"weight", null, i32 273, metadata !957, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!957 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 13824, i64 32, i32 0, i32 0, metadata !881, metadata !958, i32 0, i32 0} ; [ DW_TAG_array_type ]
!958 = metadata !{metadata !952, metadata !888, metadata !889, metadata !889}
!959 = metadata !{i32 273, i32 8, metadata !946, null}
!960 = metadata !{i32 786689, metadata !946, metadata !"bias", null, i32 274, metadata !961, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!961 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 1536, i64 32, i32 0, i32 0, metadata !881, metadata !962, i32 0, i32 0} ; [ DW_TAG_array_type ]
!962 = metadata !{metadata !952}
!963 = metadata !{i32 274, i32 8, metadata !946, null}
!964 = metadata !{i32 786689, metadata !946, metadata !"output[0]", null, i32 275, metadata !953, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!965 = metadata !{i32 275, i32 8, metadata !946, null}
!966 = metadata !{i32 276, i32 16, metadata !967, null}
!967 = metadata !{i32 786443, metadata !968, i32 276, i32 2, metadata !876, i32 98} ; [ DW_TAG_lexical_block ]
!968 = metadata !{i32 786443, metadata !946, i32 275, i32 28, metadata !876, i32 97} ; [ DW_TAG_lexical_block ]
!969 = metadata !{i32 276, i32 23, metadata !967, null}
!970 = metadata !{i32 786688, metadata !967, metadata !"co", metadata !876, i32 276, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!971 = metadata !{i32 282, i32 8, metadata !972, null}
!972 = metadata !{i32 786443, metadata !973, i32 281, i32 29, metadata !876, i32 107} ; [ DW_TAG_lexical_block ]
!973 = metadata !{i32 786443, metadata !974, i32 281, i32 7, metadata !876, i32 106} ; [ DW_TAG_lexical_block ]
!974 = metadata !{i32 786443, metadata !975, i32 280, i32 27, metadata !876, i32 105} ; [ DW_TAG_lexical_block ]
!975 = metadata !{i32 786443, metadata !976, i32 280, i32 5, metadata !876, i32 104} ; [ DW_TAG_lexical_block ]
!976 = metadata !{i32 786443, metadata !977, i32 278, i32 26, metadata !876, i32 103} ; [ DW_TAG_lexical_block ]
!977 = metadata !{i32 786443, metadata !978, i32 278, i32 4, metadata !876, i32 102} ; [ DW_TAG_lexical_block ]
!978 = metadata !{i32 786443, metadata !979, i32 277, i32 25, metadata !876, i32 101} ; [ DW_TAG_lexical_block ]
!979 = metadata !{i32 786443, metadata !980, i32 277, i32 3, metadata !876, i32 100} ; [ DW_TAG_lexical_block ]
!980 = metadata !{i32 786443, metadata !967, i32 276, i32 28, metadata !876, i32 99} ; [ DW_TAG_lexical_block ]
!981 = metadata !{i32 285, i32 34, metadata !976, null}
!982 = metadata !{i32 277, i32 16, metadata !979, null}
!983 = metadata !{i32 277, i32 21, metadata !979, null}
!984 = metadata !{i32 786688, metadata !979, metadata !"h", metadata !876, i32 277, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!985 = metadata !{i32 286, i32 5, metadata !976, null}
!986 = metadata !{i32 278, i32 17, metadata !977, null}
!987 = metadata !{i32 278, i32 22, metadata !977, null}
!988 = metadata !{i32 280, i32 18, metadata !975, null}
!989 = metadata !{i32 280, i32 23, metadata !975, null}
!990 = metadata !{i32 786688, metadata !975, metadata !"m", metadata !876, i32 280, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!991 = metadata !{i32 281, i32 20, metadata !973, null}
!992 = metadata !{i32 281, i32 25, metadata !973, null}
!993 = metadata !{i32 786688, metadata !976, metadata !"sum", metadata !876, i32 279, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!994 = metadata !{i32 786688, metadata !973, metadata !"n", metadata !876, i32 281, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!995 = metadata !{i32 786688, metadata !976, metadata !"result", metadata !876, i32 285, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!996 = metadata !{i32 786688, metadata !977, metadata !"w", metadata !876, i32 278, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!997 = metadata !{i32 290, i32 1, metadata !968, null}
!998 = metadata !{i32 786689, metadata !999, metadata !"input[0]", null, i32 441, metadata !909, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!999 = metadata !{i32 786478, i32 0, metadata !876, metadata !"subconv_3x3_4_no_relu", metadata !"subconv_3x3_4_no_relu", metadata !"_Z21subconv_3x3_4_no_reluPA96_A4_A4_fPA1_A3_A3_fPfS2_", metadata !876, i32 441, metadata !1000, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !895, i32 444} ; [ DW_TAG_subprogram ]
!1000 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !1001, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!1001 = metadata !{null, metadata !891, metadata !885, metadata !890, metadata !891}
!1002 = metadata !{i32 441, i32 34, metadata !999, null}
!1003 = metadata !{i32 786689, metadata !999, metadata !"weight", null, i32 442, metadata !901, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1004 = metadata !{i32 442, i32 8, metadata !999, null}
!1005 = metadata !{i32 786689, metadata !999, metadata !"bias", null, i32 443, metadata !905, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1006 = metadata !{i32 443, i32 8, metadata !999, null}
!1007 = metadata !{i32 786689, metadata !999, metadata !"output[0]", null, i32 444, metadata !909, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1008 = metadata !{i32 444, i32 8, metadata !999, null}
!1009 = metadata !{i32 445, i32 16, metadata !1010, null}
!1010 = metadata !{i32 786443, metadata !1011, i32 445, i32 2, metadata !876, i32 153} ; [ DW_TAG_lexical_block ]
!1011 = metadata !{i32 786443, metadata !999, i32 444, i32 28, metadata !876, i32 152} ; [ DW_TAG_lexical_block ]
!1012 = metadata !{i32 445, i32 23, metadata !1010, null}
!1013 = metadata !{i32 786688, metadata !1010, metadata !"co", metadata !876, i32 445, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1014 = metadata !{i32 451, i32 8, metadata !1015, null}
!1015 = metadata !{i32 786443, metadata !1016, i32 450, i32 29, metadata !876, i32 162} ; [ DW_TAG_lexical_block ]
!1016 = metadata !{i32 786443, metadata !1017, i32 450, i32 7, metadata !876, i32 161} ; [ DW_TAG_lexical_block ]
!1017 = metadata !{i32 786443, metadata !1018, i32 449, i32 27, metadata !876, i32 160} ; [ DW_TAG_lexical_block ]
!1018 = metadata !{i32 786443, metadata !1019, i32 449, i32 5, metadata !876, i32 159} ; [ DW_TAG_lexical_block ]
!1019 = metadata !{i32 786443, metadata !1020, i32 447, i32 26, metadata !876, i32 158} ; [ DW_TAG_lexical_block ]
!1020 = metadata !{i32 786443, metadata !1021, i32 447, i32 4, metadata !876, i32 157} ; [ DW_TAG_lexical_block ]
!1021 = metadata !{i32 786443, metadata !1022, i32 446, i32 25, metadata !876, i32 156} ; [ DW_TAG_lexical_block ]
!1022 = metadata !{i32 786443, metadata !1023, i32 446, i32 3, metadata !876, i32 155} ; [ DW_TAG_lexical_block ]
!1023 = metadata !{i32 786443, metadata !1010, i32 445, i32 28, metadata !876, i32 154} ; [ DW_TAG_lexical_block ]
!1024 = metadata !{i32 454, i32 34, metadata !1019, null}
!1025 = metadata !{i32 446, i32 16, metadata !1022, null}
!1026 = metadata !{i32 446, i32 21, metadata !1022, null}
!1027 = metadata !{i32 786688, metadata !1022, metadata !"h", metadata !876, i32 446, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1028 = metadata !{i32 455, i32 5, metadata !1019, null}
!1029 = metadata !{i32 447, i32 17, metadata !1020, null}
!1030 = metadata !{i32 447, i32 22, metadata !1020, null}
!1031 = metadata !{i32 449, i32 18, metadata !1018, null}
!1032 = metadata !{i32 449, i32 23, metadata !1018, null}
!1033 = metadata !{i32 786688, metadata !1018, metadata !"m", metadata !876, i32 449, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1034 = metadata !{i32 450, i32 20, metadata !1016, null}
!1035 = metadata !{i32 450, i32 25, metadata !1016, null}
!1036 = metadata !{i32 786688, metadata !1019, metadata !"sum", metadata !876, i32 448, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1037 = metadata !{i32 786688, metadata !1016, metadata !"n", metadata !876, i32 450, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1038 = metadata !{i32 786688, metadata !1019, metadata !"result", metadata !876, i32 454, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1039 = metadata !{i32 786688, metadata !1020, metadata !"w", metadata !876, i32 447, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1040 = metadata !{i32 459, i32 1, metadata !1011, null}
!1041 = metadata !{i32 786689, metadata !1042, metadata !"input", null, i32 77, metadata !1054, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1042 = metadata !{i32 786478, i32 0, metadata !876, metadata !"subconv_3x3_32_stride_no_relu", metadata !"subconv_3x3_32_stride_no_relu", metadata !"_Z29subconv_3x3_32_stride_no_reluPA24_A32_A32_fPA1_A3_A3_fPfPA24_A16_A16_f", metadata !876, i32 77, metadata !1043, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !895, i32 80} ; [ DW_TAG_subprogram ]
!1043 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !1044, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!1044 = metadata !{null, metadata !1045, metadata !885, metadata !890, metadata !1050}
!1045 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !1046} ; [ DW_TAG_pointer_type ]
!1046 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 786432, i64 32, i32 0, i32 0, metadata !881, metadata !1047, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1047 = metadata !{metadata !1048, metadata !1049, metadata !1049}
!1048 = metadata !{i32 786465, i64 0, i64 23}     ; [ DW_TAG_subrange_type ]
!1049 = metadata !{i32 786465, i64 0, i64 31}     ; [ DW_TAG_subrange_type ]
!1050 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !1051} ; [ DW_TAG_pointer_type ]
!1051 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 196608, i64 32, i32 0, i32 0, metadata !881, metadata !1052, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1052 = metadata !{metadata !1048, metadata !1053, metadata !1053}
!1053 = metadata !{i32 786465, i64 0, i64 15}     ; [ DW_TAG_subrange_type ]
!1054 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 786432, i64 32, i32 0, i32 0, metadata !881, metadata !1055, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1055 = metadata !{metadata !888, metadata !1048, metadata !1049, metadata !1049}
!1056 = metadata !{i32 77, i32 42, metadata !1042, null}
!1057 = metadata !{i32 786689, metadata !1042, metadata !"weight", null, i32 78, metadata !1058, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1058 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 6912, i64 32, i32 0, i32 0, metadata !881, metadata !1059, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1059 = metadata !{metadata !1048, metadata !888, metadata !889, metadata !889}
!1060 = metadata !{i32 78, i32 8, metadata !1042, null}
!1061 = metadata !{i32 786689, metadata !1042, metadata !"bias", null, i32 79, metadata !1062, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1062 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 768, i64 32, i32 0, i32 0, metadata !881, metadata !1063, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1063 = metadata !{metadata !1048}
!1064 = metadata !{i32 79, i32 8, metadata !1042, null}
!1065 = metadata !{i32 786689, metadata !1042, metadata !"output[0]", null, i32 80, metadata !1066, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1066 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 196608, i64 32, i32 0, i32 0, metadata !881, metadata !1067, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1067 = metadata !{metadata !888, metadata !1048, metadata !1053, metadata !1053}
!1068 = metadata !{i32 80, i32 8, metadata !1042, null}
!1069 = metadata !{i32 81, i32 16, metadata !1070, null}
!1070 = metadata !{i32 786443, metadata !1071, i32 81, i32 2, metadata !876, i32 32} ; [ DW_TAG_lexical_block ]
!1071 = metadata !{i32 786443, metadata !1042, i32 80, i32 30, metadata !876, i32 31} ; [ DW_TAG_lexical_block ]
!1072 = metadata !{i32 81, i32 23, metadata !1070, null}
!1073 = metadata !{i32 786688, metadata !1070, metadata !"co", metadata !876, i32 81, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1074 = metadata !{i32 87, i32 8, metadata !1075, null}
!1075 = metadata !{i32 786443, metadata !1076, i32 86, i32 29, metadata !876, i32 41} ; [ DW_TAG_lexical_block ]
!1076 = metadata !{i32 786443, metadata !1077, i32 86, i32 7, metadata !876, i32 40} ; [ DW_TAG_lexical_block ]
!1077 = metadata !{i32 786443, metadata !1078, i32 85, i32 27, metadata !876, i32 39} ; [ DW_TAG_lexical_block ]
!1078 = metadata !{i32 786443, metadata !1079, i32 85, i32 5, metadata !876, i32 38} ; [ DW_TAG_lexical_block ]
!1079 = metadata !{i32 786443, metadata !1080, i32 83, i32 27, metadata !876, i32 37} ; [ DW_TAG_lexical_block ]
!1080 = metadata !{i32 786443, metadata !1081, i32 83, i32 4, metadata !876, i32 36} ; [ DW_TAG_lexical_block ]
!1081 = metadata !{i32 786443, metadata !1082, i32 82, i32 26, metadata !876, i32 35} ; [ DW_TAG_lexical_block ]
!1082 = metadata !{i32 786443, metadata !1083, i32 82, i32 3, metadata !876, i32 34} ; [ DW_TAG_lexical_block ]
!1083 = metadata !{i32 786443, metadata !1070, i32 81, i32 28, metadata !876, i32 33} ; [ DW_TAG_lexical_block ]
!1084 = metadata !{i32 90, i32 34, metadata !1079, null}
!1085 = metadata !{i32 82, i32 16, metadata !1082, null}
!1086 = metadata !{i32 82, i32 22, metadata !1082, null}
!1087 = metadata !{i32 786688, metadata !1082, metadata !"h", metadata !876, i32 82, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1088 = metadata !{i32 91, i32 5, metadata !1079, null}
!1089 = metadata !{i32 83, i32 17, metadata !1080, null}
!1090 = metadata !{i32 83, i32 23, metadata !1080, null}
!1091 = metadata !{i32 85, i32 18, metadata !1078, null}
!1092 = metadata !{i32 85, i32 23, metadata !1078, null}
!1093 = metadata !{i32 786688, metadata !1078, metadata !"m", metadata !876, i32 85, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1094 = metadata !{i32 86, i32 20, metadata !1076, null}
!1095 = metadata !{i32 86, i32 25, metadata !1076, null}
!1096 = metadata !{i32 786688, metadata !1079, metadata !"sum", metadata !876, i32 84, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1097 = metadata !{i32 786688, metadata !1076, metadata !"n", metadata !876, i32 86, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1098 = metadata !{i32 786688, metadata !1079, metadata !"result", metadata !876, i32 90, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1099 = metadata !{i32 786688, metadata !1080, metadata !"w", metadata !876, i32 83, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1100 = metadata !{i32 97, i32 1, metadata !1071, null}
!1101 = metadata !{i32 786689, metadata !1102, metadata !"input", null, i32 250, metadata !1108, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1102 = metadata !{i32 786478, i32 0, metadata !876, metadata !"subconv_3x3_16_stride_no_relu", metadata !"subconv_3x3_16_stride_no_relu", metadata !"_Z29subconv_3x3_16_stride_no_reluPA48_A16_A16_fPA1_A3_A3_fPfPA48_A8_A8_f", metadata !876, i32 250, metadata !1103, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !895, i32 253} ; [ DW_TAG_subprogram ]
!1103 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !1104, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!1104 = metadata !{null, metadata !1105, metadata !885, metadata !890, metadata !949}
!1105 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !1106} ; [ DW_TAG_pointer_type ]
!1106 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 393216, i64 32, i32 0, i32 0, metadata !881, metadata !1107, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1107 = metadata !{metadata !952, metadata !1053, metadata !1053}
!1108 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 393216, i64 32, i32 0, i32 0, metadata !881, metadata !1109, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1109 = metadata !{metadata !888, metadata !952, metadata !1053, metadata !1053}
!1110 = metadata !{i32 250, i32 42, metadata !1102, null}
!1111 = metadata !{i32 786689, metadata !1102, metadata !"weight", null, i32 251, metadata !957, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1112 = metadata !{i32 251, i32 8, metadata !1102, null}
!1113 = metadata !{i32 786689, metadata !1102, metadata !"bias", null, i32 252, metadata !961, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1114 = metadata !{i32 252, i32 8, metadata !1102, null}
!1115 = metadata !{i32 786689, metadata !1102, metadata !"output[0]", null, i32 253, metadata !953, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1116 = metadata !{i32 253, i32 8, metadata !1102, null}
!1117 = metadata !{i32 254, i32 16, metadata !1118, null}
!1118 = metadata !{i32 786443, metadata !1119, i32 254, i32 2, metadata !876, i32 87} ; [ DW_TAG_lexical_block ]
!1119 = metadata !{i32 786443, metadata !1102, i32 253, i32 28, metadata !876, i32 86} ; [ DW_TAG_lexical_block ]
!1120 = metadata !{i32 254, i32 23, metadata !1118, null}
!1121 = metadata !{i32 786688, metadata !1118, metadata !"co", metadata !876, i32 254, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1122 = metadata !{i32 260, i32 8, metadata !1123, null}
!1123 = metadata !{i32 786443, metadata !1124, i32 259, i32 29, metadata !876, i32 96} ; [ DW_TAG_lexical_block ]
!1124 = metadata !{i32 786443, metadata !1125, i32 259, i32 7, metadata !876, i32 95} ; [ DW_TAG_lexical_block ]
!1125 = metadata !{i32 786443, metadata !1126, i32 258, i32 27, metadata !876, i32 94} ; [ DW_TAG_lexical_block ]
!1126 = metadata !{i32 786443, metadata !1127, i32 258, i32 5, metadata !876, i32 93} ; [ DW_TAG_lexical_block ]
!1127 = metadata !{i32 786443, metadata !1128, i32 256, i32 26, metadata !876, i32 92} ; [ DW_TAG_lexical_block ]
!1128 = metadata !{i32 786443, metadata !1129, i32 256, i32 4, metadata !876, i32 91} ; [ DW_TAG_lexical_block ]
!1129 = metadata !{i32 786443, metadata !1130, i32 255, i32 25, metadata !876, i32 90} ; [ DW_TAG_lexical_block ]
!1130 = metadata !{i32 786443, metadata !1131, i32 255, i32 3, metadata !876, i32 89} ; [ DW_TAG_lexical_block ]
!1131 = metadata !{i32 786443, metadata !1118, i32 254, i32 28, metadata !876, i32 88} ; [ DW_TAG_lexical_block ]
!1132 = metadata !{i32 263, i32 34, metadata !1127, null}
!1133 = metadata !{i32 255, i32 16, metadata !1130, null}
!1134 = metadata !{i32 255, i32 21, metadata !1130, null}
!1135 = metadata !{i32 786688, metadata !1130, metadata !"h", metadata !876, i32 255, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1136 = metadata !{i32 264, i32 5, metadata !1127, null}
!1137 = metadata !{i32 256, i32 17, metadata !1128, null}
!1138 = metadata !{i32 256, i32 22, metadata !1128, null}
!1139 = metadata !{i32 258, i32 18, metadata !1126, null}
!1140 = metadata !{i32 258, i32 23, metadata !1126, null}
!1141 = metadata !{i32 786688, metadata !1126, metadata !"m", metadata !876, i32 258, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1142 = metadata !{i32 259, i32 20, metadata !1124, null}
!1143 = metadata !{i32 259, i32 25, metadata !1124, null}
!1144 = metadata !{i32 786688, metadata !1127, metadata !"sum", metadata !876, i32 257, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1145 = metadata !{i32 786688, metadata !1124, metadata !"n", metadata !876, i32 259, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1146 = metadata !{i32 786688, metadata !1127, metadata !"result", metadata !876, i32 263, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1147 = metadata !{i32 786688, metadata !1128, metadata !"w", metadata !876, i32 256, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1148 = metadata !{i32 269, i32 1, metadata !1119, null}
!1149 = metadata !{i32 786689, metadata !1150, metadata !"input[0]", null, i32 100, metadata !1066, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1150 = metadata !{i32 786478, i32 0, metadata !876, metadata !"subconv_3x3_16_no_relu", metadata !"subconv_3x3_16_no_relu", metadata !"_Z22subconv_3x3_16_no_reluPA24_A16_A16_fPA1_A3_A3_fPfS2_", metadata !876, i32 100, metadata !1151, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !895, i32 103} ; [ DW_TAG_subprogram ]
!1151 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !1152, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!1152 = metadata !{null, metadata !1050, metadata !885, metadata !890, metadata !1050}
!1153 = metadata !{i32 100, i32 35, metadata !1150, null}
!1154 = metadata !{i32 786689, metadata !1150, metadata !"weight", null, i32 101, metadata !1058, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1155 = metadata !{i32 101, i32 8, metadata !1150, null}
!1156 = metadata !{i32 786689, metadata !1150, metadata !"bias", null, i32 102, metadata !1062, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1157 = metadata !{i32 102, i32 8, metadata !1150, null}
!1158 = metadata !{i32 786689, metadata !1150, metadata !"output[0]", null, i32 103, metadata !1066, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1159 = metadata !{i32 103, i32 8, metadata !1150, null}
!1160 = metadata !{i32 104, i32 16, metadata !1161, null}
!1161 = metadata !{i32 786443, metadata !1162, i32 104, i32 2, metadata !876, i32 43} ; [ DW_TAG_lexical_block ]
!1162 = metadata !{i32 786443, metadata !1150, i32 103, i32 30, metadata !876, i32 42} ; [ DW_TAG_lexical_block ]
!1163 = metadata !{i32 104, i32 23, metadata !1161, null}
!1164 = metadata !{i32 786688, metadata !1161, metadata !"co", metadata !876, i32 104, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1165 = metadata !{i32 110, i32 8, metadata !1166, null}
!1166 = metadata !{i32 786443, metadata !1167, i32 109, i32 29, metadata !876, i32 52} ; [ DW_TAG_lexical_block ]
!1167 = metadata !{i32 786443, metadata !1168, i32 109, i32 7, metadata !876, i32 51} ; [ DW_TAG_lexical_block ]
!1168 = metadata !{i32 786443, metadata !1169, i32 108, i32 27, metadata !876, i32 50} ; [ DW_TAG_lexical_block ]
!1169 = metadata !{i32 786443, metadata !1170, i32 108, i32 5, metadata !876, i32 49} ; [ DW_TAG_lexical_block ]
!1170 = metadata !{i32 786443, metadata !1171, i32 106, i32 27, metadata !876, i32 48} ; [ DW_TAG_lexical_block ]
!1171 = metadata !{i32 786443, metadata !1172, i32 106, i32 4, metadata !876, i32 47} ; [ DW_TAG_lexical_block ]
!1172 = metadata !{i32 786443, metadata !1173, i32 105, i32 26, metadata !876, i32 46} ; [ DW_TAG_lexical_block ]
!1173 = metadata !{i32 786443, metadata !1174, i32 105, i32 3, metadata !876, i32 45} ; [ DW_TAG_lexical_block ]
!1174 = metadata !{i32 786443, metadata !1161, i32 104, i32 28, metadata !876, i32 44} ; [ DW_TAG_lexical_block ]
!1175 = metadata !{i32 113, i32 34, metadata !1170, null}
!1176 = metadata !{i32 105, i32 16, metadata !1173, null}
!1177 = metadata !{i32 105, i32 22, metadata !1173, null}
!1178 = metadata !{i32 786688, metadata !1173, metadata !"h", metadata !876, i32 105, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1179 = metadata !{i32 114, i32 5, metadata !1170, null}
!1180 = metadata !{i32 106, i32 17, metadata !1171, null}
!1181 = metadata !{i32 106, i32 23, metadata !1171, null}
!1182 = metadata !{i32 108, i32 18, metadata !1169, null}
!1183 = metadata !{i32 108, i32 23, metadata !1169, null}
!1184 = metadata !{i32 786688, metadata !1169, metadata !"m", metadata !876, i32 108, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1185 = metadata !{i32 109, i32 20, metadata !1167, null}
!1186 = metadata !{i32 109, i32 25, metadata !1167, null}
!1187 = metadata !{i32 786688, metadata !1170, metadata !"sum", metadata !876, i32 107, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1188 = metadata !{i32 786688, metadata !1167, metadata !"n", metadata !876, i32 109, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1189 = metadata !{i32 786688, metadata !1170, metadata !"result", metadata !876, i32 113, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1190 = metadata !{i32 786688, metadata !1171, metadata !"w", metadata !876, i32 106, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1191 = metadata !{i32 119, i32 1, metadata !1162, null}
!1192 = metadata !{i32 786689, metadata !1193, metadata !"weight", null, i32 381, metadata !1199, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1193 = metadata !{i32 786478, i32 0, metadata !876, metadata !"subconv_1x1_8p", metadata !"subconv_1x1_8p", metadata !"_Z14subconv_1x1_8pPA96_A8_A8_fPA96_A1_A1_fPfS2_", metadata !876, i32 380, metadata !1194, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !895, i32 383} ; [ DW_TAG_subprogram ]
!1194 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !1195, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!1195 = metadata !{null, metadata !879, metadata !1196, metadata !890, metadata !879}
!1196 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !1197} ; [ DW_TAG_pointer_type ]
!1197 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 3072, i64 32, i32 0, i32 0, metadata !881, metadata !1198, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1198 = metadata !{metadata !883, metadata !888, metadata !888}
!1199 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 294912, i64 32, i32 0, i32 0, metadata !881, metadata !1200, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1200 = metadata !{metadata !883, metadata !883, metadata !888, metadata !888}
!1201 = metadata !{i32 381, i32 8, metadata !1193, null}
!1202 = metadata !{i32 786689, metadata !1193, metadata !"bias", null, i32 382, metadata !905, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1203 = metadata !{i32 382, i32 8, metadata !1193, null}
!1204 = metadata !{i32 786689, metadata !1193, metadata !"output", null, i32 383, metadata !897, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1205 = metadata !{i32 383, i32 8, metadata !1193, null}
!1206 = metadata !{i32 385, i32 16, metadata !1207, null}
!1207 = metadata !{i32 786443, metadata !1208, i32 385, i32 2, metadata !876, i32 124} ; [ DW_TAG_lexical_block ]
!1208 = metadata !{i32 786443, metadata !1193, i32 383, i32 28, metadata !876, i32 123} ; [ DW_TAG_lexical_block ]
!1209 = metadata !{i32 385, i32 23, metadata !1207, null}
!1210 = metadata !{i32 786688, metadata !1207, metadata !"co", metadata !876, i32 385, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1211 = metadata !{i32 390, i32 6, metadata !1212, null}
!1212 = metadata !{i32 786443, metadata !1213, i32 389, i32 31, metadata !876, i32 131} ; [ DW_TAG_lexical_block ]
!1213 = metadata !{i32 786443, metadata !1214, i32 389, i32 5, metadata !876, i32 130} ; [ DW_TAG_lexical_block ]
!1214 = metadata !{i32 786443, metadata !1215, i32 387, i32 26, metadata !876, i32 129} ; [ DW_TAG_lexical_block ]
!1215 = metadata !{i32 786443, metadata !1216, i32 387, i32 4, metadata !876, i32 128} ; [ DW_TAG_lexical_block ]
!1216 = metadata !{i32 786443, metadata !1217, i32 386, i32 25, metadata !876, i32 127} ; [ DW_TAG_lexical_block ]
!1217 = metadata !{i32 786443, metadata !1218, i32 386, i32 3, metadata !876, i32 126} ; [ DW_TAG_lexical_block ]
!1218 = metadata !{i32 786443, metadata !1207, i32 385, i32 28, metadata !876, i32 125} ; [ DW_TAG_lexical_block ]
!1219 = metadata !{i32 392, i32 34, metadata !1214, null}
!1220 = metadata !{i32 386, i32 16, metadata !1217, null}
!1221 = metadata !{i32 386, i32 21, metadata !1217, null}
!1222 = metadata !{i32 786688, metadata !1217, metadata !"h", metadata !876, i32 386, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1223 = metadata !{i32 393, i32 17, metadata !1214, null}
!1224 = metadata !{i32 387, i32 17, metadata !1215, null}
!1225 = metadata !{i32 387, i32 22, metadata !1215, null}
!1226 = metadata !{i32 389, i32 19, metadata !1213, null}
!1227 = metadata !{i32 389, i32 26, metadata !1213, null}
!1228 = metadata !{i32 786688, metadata !1214, metadata !"sum", metadata !876, i32 388, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1229 = metadata !{i32 786688, metadata !1213, metadata !"ci", metadata !876, i32 389, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1230 = metadata !{i32 786688, metadata !1214, metadata !"result", metadata !876, i32 392, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1231 = metadata !{i32 786688, metadata !1215, metadata !"w", metadata !876, i32 387, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1232 = metadata !{i32 397, i32 1, metadata !1208, null}
!1233 = metadata !{i32 786689, metadata !1234, metadata !"input[0]", null, i32 229, metadata !953, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1234 = metadata !{i32 786478, i32 0, metadata !876, metadata !"subconv_1x1_8", metadata !"subconv_1x1_8", metadata !"_Z13subconv_1x1_8PA48_A8_A8_fPA48_A1_A1_fPfS2_", metadata !876, i32 229, metadata !1235, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !895, i32 232} ; [ DW_TAG_subprogram ]
!1235 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !1236, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!1236 = metadata !{null, metadata !949, metadata !1237, metadata !890, metadata !949}
!1237 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !1238} ; [ DW_TAG_pointer_type ]
!1238 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 1536, i64 32, i32 0, i32 0, metadata !881, metadata !1239, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1239 = metadata !{metadata !952, metadata !888, metadata !888}
!1240 = metadata !{i32 229, i32 26, metadata !1234, null}
!1241 = metadata !{i32 786689, metadata !1234, metadata !"weight", null, i32 230, metadata !1242, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1242 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 73728, i64 32, i32 0, i32 0, metadata !881, metadata !1243, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1243 = metadata !{metadata !952, metadata !952, metadata !888, metadata !888}
!1244 = metadata !{i32 230, i32 8, metadata !1234, null}
!1245 = metadata !{i32 786689, metadata !1234, metadata !"bias", null, i32 231, metadata !961, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1246 = metadata !{i32 231, i32 8, metadata !1234, null}
!1247 = metadata !{i32 786689, metadata !1234, metadata !"output[0]", null, i32 232, metadata !953, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1248 = metadata !{i32 232, i32 8, metadata !1234, null}
!1249 = metadata !{i32 235, i32 16, metadata !1250, null}
!1250 = metadata !{i32 786443, metadata !1251, i32 235, i32 2, metadata !876, i32 78} ; [ DW_TAG_lexical_block ]
!1251 = metadata !{i32 786443, metadata !1234, i32 232, i32 28, metadata !876, i32 77} ; [ DW_TAG_lexical_block ]
!1252 = metadata !{i32 235, i32 23, metadata !1250, null}
!1253 = metadata !{i32 786688, metadata !1250, metadata !"co", metadata !876, i32 235, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1254 = metadata !{i32 240, i32 6, metadata !1255, null}
!1255 = metadata !{i32 786443, metadata !1256, i32 239, i32 31, metadata !876, i32 85} ; [ DW_TAG_lexical_block ]
!1256 = metadata !{i32 786443, metadata !1257, i32 239, i32 5, metadata !876, i32 84} ; [ DW_TAG_lexical_block ]
!1257 = metadata !{i32 786443, metadata !1258, i32 237, i32 26, metadata !876, i32 83} ; [ DW_TAG_lexical_block ]
!1258 = metadata !{i32 786443, metadata !1259, i32 237, i32 4, metadata !876, i32 82} ; [ DW_TAG_lexical_block ]
!1259 = metadata !{i32 786443, metadata !1260, i32 236, i32 25, metadata !876, i32 81} ; [ DW_TAG_lexical_block ]
!1260 = metadata !{i32 786443, metadata !1261, i32 236, i32 3, metadata !876, i32 80} ; [ DW_TAG_lexical_block ]
!1261 = metadata !{i32 786443, metadata !1250, i32 235, i32 28, metadata !876, i32 79} ; [ DW_TAG_lexical_block ]
!1262 = metadata !{i32 242, i32 34, metadata !1257, null}
!1263 = metadata !{i32 236, i32 16, metadata !1260, null}
!1264 = metadata !{i32 236, i32 21, metadata !1260, null}
!1265 = metadata !{i32 786688, metadata !1260, metadata !"h", metadata !876, i32 236, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1266 = metadata !{i32 243, i32 17, metadata !1257, null}
!1267 = metadata !{i32 237, i32 17, metadata !1258, null}
!1268 = metadata !{i32 237, i32 22, metadata !1258, null}
!1269 = metadata !{i32 239, i32 19, metadata !1256, null}
!1270 = metadata !{i32 239, i32 26, metadata !1256, null}
!1271 = metadata !{i32 786688, metadata !1257, metadata !"sum", metadata !876, i32 238, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1272 = metadata !{i32 786688, metadata !1256, metadata !"ci", metadata !876, i32 239, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1273 = metadata !{i32 786688, metadata !1257, metadata !"result", metadata !876, i32 242, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1274 = metadata !{i32 786688, metadata !1258, metadata !"w", metadata !876, i32 237, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1275 = metadata !{i32 247, i32 1, metadata !1251, null}
!1276 = metadata !{i32 786689, metadata !1277, metadata !"input[0]", null, i32 399, metadata !909, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1277 = metadata !{i32 786478, i32 0, metadata !876, metadata !"subconv_1x1_4", metadata !"subconv_1x1_4", metadata !"_Z13subconv_1x1_4PA96_A4_A4_fPA96_A1_A1_fPfS2_", metadata !876, i32 399, metadata !1278, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !895, i32 402} ; [ DW_TAG_subprogram ]
!1278 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !1279, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!1279 = metadata !{null, metadata !891, metadata !1196, metadata !890, metadata !891}
!1280 = metadata !{i32 399, i32 26, metadata !1277, null}
!1281 = metadata !{i32 786689, metadata !1277, metadata !"weight", null, i32 400, metadata !1199, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1282 = metadata !{i32 400, i32 8, metadata !1277, null}
!1283 = metadata !{i32 786689, metadata !1277, metadata !"bias", null, i32 401, metadata !905, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1284 = metadata !{i32 401, i32 8, metadata !1277, null}
!1285 = metadata !{i32 786689, metadata !1277, metadata !"output[0]", null, i32 402, metadata !909, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1286 = metadata !{i32 402, i32 8, metadata !1277, null}
!1287 = metadata !{i32 405, i32 16, metadata !1288, null}
!1288 = metadata !{i32 786443, metadata !1289, i32 405, i32 2, metadata !876, i32 133} ; [ DW_TAG_lexical_block ]
!1289 = metadata !{i32 786443, metadata !1277, i32 402, i32 28, metadata !876, i32 132} ; [ DW_TAG_lexical_block ]
!1290 = metadata !{i32 405, i32 23, metadata !1288, null}
!1291 = metadata !{i32 786688, metadata !1288, metadata !"co", metadata !876, i32 405, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1292 = metadata !{i32 410, i32 6, metadata !1293, null}
!1293 = metadata !{i32 786443, metadata !1294, i32 409, i32 31, metadata !876, i32 140} ; [ DW_TAG_lexical_block ]
!1294 = metadata !{i32 786443, metadata !1295, i32 409, i32 5, metadata !876, i32 139} ; [ DW_TAG_lexical_block ]
!1295 = metadata !{i32 786443, metadata !1296, i32 407, i32 26, metadata !876, i32 138} ; [ DW_TAG_lexical_block ]
!1296 = metadata !{i32 786443, metadata !1297, i32 407, i32 4, metadata !876, i32 137} ; [ DW_TAG_lexical_block ]
!1297 = metadata !{i32 786443, metadata !1298, i32 406, i32 25, metadata !876, i32 136} ; [ DW_TAG_lexical_block ]
!1298 = metadata !{i32 786443, metadata !1299, i32 406, i32 3, metadata !876, i32 135} ; [ DW_TAG_lexical_block ]
!1299 = metadata !{i32 786443, metadata !1288, i32 405, i32 28, metadata !876, i32 134} ; [ DW_TAG_lexical_block ]
!1300 = metadata !{i32 412, i32 34, metadata !1295, null}
!1301 = metadata !{i32 406, i32 16, metadata !1298, null}
!1302 = metadata !{i32 406, i32 21, metadata !1298, null}
!1303 = metadata !{i32 786688, metadata !1298, metadata !"h", metadata !876, i32 406, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1304 = metadata !{i32 413, i32 17, metadata !1295, null}
!1305 = metadata !{i32 407, i32 17, metadata !1296, null}
!1306 = metadata !{i32 407, i32 22, metadata !1296, null}
!1307 = metadata !{i32 409, i32 19, metadata !1294, null}
!1308 = metadata !{i32 409, i32 26, metadata !1294, null}
!1309 = metadata !{i32 786688, metadata !1295, metadata !"sum", metadata !876, i32 408, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1310 = metadata !{i32 786688, metadata !1294, metadata !"ci", metadata !876, i32 409, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1311 = metadata !{i32 786688, metadata !1295, metadata !"result", metadata !876, i32 412, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1312 = metadata !{i32 786688, metadata !1296, metadata !"w", metadata !876, i32 407, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1313 = metadata !{i32 417, i32 1, metadata !1289, null}
!1314 = metadata !{i32 786689, metadata !1315, metadata !"input", null, i32 33, metadata !1054, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1315 = metadata !{i32 786478, i32 0, metadata !876, metadata !"subconv_1x1_32", metadata !"subconv_1x1_32", metadata !"_Z14subconv_1x1_32PA24_A32_A32_fPA24_A1_A1_fPfS2_", metadata !876, i32 33, metadata !1316, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !895, i32 36} ; [ DW_TAG_subprogram ]
!1316 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !1317, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!1317 = metadata !{null, metadata !1045, metadata !1318, metadata !890, metadata !1045}
!1318 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !1319} ; [ DW_TAG_pointer_type ]
!1319 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 768, i64 32, i32 0, i32 0, metadata !881, metadata !1320, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1320 = metadata !{metadata !1048, metadata !888, metadata !888}
!1321 = metadata !{i32 33, i32 27, metadata !1315, null}
!1322 = metadata !{i32 786689, metadata !1315, metadata !"weight", null, i32 34, metadata !1323, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1323 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 18432, i64 32, i32 0, i32 0, metadata !881, metadata !1324, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1324 = metadata !{metadata !1048, metadata !1048, metadata !888, metadata !888}
!1325 = metadata !{i32 34, i32 8, metadata !1315, null}
!1326 = metadata !{i32 786689, metadata !1315, metadata !"bias", null, i32 35, metadata !1062, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1327 = metadata !{i32 35, i32 8, metadata !1315, null}
!1328 = metadata !{i32 786689, metadata !1315, metadata !"output", null, i32 36, metadata !1054, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1329 = metadata !{i32 36, i32 8, metadata !1315, null}
!1330 = metadata !{i32 38, i32 16, metadata !1331, null}
!1331 = metadata !{i32 786443, metadata !1332, i32 38, i32 2, metadata !876, i32 14} ; [ DW_TAG_lexical_block ]
!1332 = metadata !{i32 786443, metadata !1315, i32 36, i32 30, metadata !876, i32 13} ; [ DW_TAG_lexical_block ]
!1333 = metadata !{i32 38, i32 23, metadata !1331, null}
!1334 = metadata !{i32 786688, metadata !1331, metadata !"co", metadata !876, i32 38, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1335 = metadata !{i32 43, i32 6, metadata !1336, null}
!1336 = metadata !{i32 786443, metadata !1337, i32 42, i32 31, metadata !876, i32 21} ; [ DW_TAG_lexical_block ]
!1337 = metadata !{i32 786443, metadata !1338, i32 42, i32 5, metadata !876, i32 20} ; [ DW_TAG_lexical_block ]
!1338 = metadata !{i32 786443, metadata !1339, i32 40, i32 27, metadata !876, i32 19} ; [ DW_TAG_lexical_block ]
!1339 = metadata !{i32 786443, metadata !1340, i32 40, i32 4, metadata !876, i32 18} ; [ DW_TAG_lexical_block ]
!1340 = metadata !{i32 786443, metadata !1341, i32 39, i32 26, metadata !876, i32 17} ; [ DW_TAG_lexical_block ]
!1341 = metadata !{i32 786443, metadata !1342, i32 39, i32 3, metadata !876, i32 16} ; [ DW_TAG_lexical_block ]
!1342 = metadata !{i32 786443, metadata !1331, i32 38, i32 28, metadata !876, i32 15} ; [ DW_TAG_lexical_block ]
!1343 = metadata !{i32 45, i32 34, metadata !1338, null}
!1344 = metadata !{i32 39, i32 16, metadata !1341, null}
!1345 = metadata !{i32 39, i32 22, metadata !1341, null}
!1346 = metadata !{i32 786688, metadata !1341, metadata !"h", metadata !876, i32 39, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1347 = metadata !{i32 46, i32 17, metadata !1338, null}
!1348 = metadata !{i32 40, i32 17, metadata !1339, null}
!1349 = metadata !{i32 40, i32 23, metadata !1339, null}
!1350 = metadata !{i32 42, i32 19, metadata !1337, null}
!1351 = metadata !{i32 42, i32 26, metadata !1337, null}
!1352 = metadata !{i32 786688, metadata !1338, metadata !"sum", metadata !876, i32 41, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1353 = metadata !{i32 786688, metadata !1337, metadata !"ci", metadata !876, i32 42, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1354 = metadata !{i32 786688, metadata !1338, metadata !"result", metadata !876, i32 45, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1355 = metadata !{i32 786688, metadata !1339, metadata !"w", metadata !876, i32 40, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1356 = metadata !{i32 51, i32 1, metadata !1332, null}
!1357 = metadata !{i32 786689, metadata !1358, metadata !"weight", null, i32 206, metadata !1242, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1358 = metadata !{i32 786478, i32 0, metadata !876, metadata !"subconv_1x1_16p", metadata !"subconv_1x1_16p", metadata !"_Z15subconv_1x1_16pPA48_A16_A16_fPA48_A1_A1_fPfS2_", metadata !876, i32 205, metadata !1359, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !895, i32 208} ; [ DW_TAG_subprogram ]
!1359 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !1360, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!1360 = metadata !{null, metadata !1105, metadata !1237, metadata !890, metadata !1105}
!1361 = metadata !{i32 206, i32 8, metadata !1358, null}
!1362 = metadata !{i32 786689, metadata !1358, metadata !"bias", null, i32 207, metadata !961, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1363 = metadata !{i32 207, i32 8, metadata !1358, null}
!1364 = metadata !{i32 786689, metadata !1358, metadata !"output", null, i32 208, metadata !1108, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1365 = metadata !{i32 208, i32 8, metadata !1358, null}
!1366 = metadata !{i32 210, i32 16, metadata !1367, null}
!1367 = metadata !{i32 786443, metadata !1368, i32 210, i32 2, metadata !876, i32 69} ; [ DW_TAG_lexical_block ]
!1368 = metadata !{i32 786443, metadata !1358, i32 208, i32 30, metadata !876, i32 68} ; [ DW_TAG_lexical_block ]
!1369 = metadata !{i32 210, i32 23, metadata !1367, null}
!1370 = metadata !{i32 786688, metadata !1367, metadata !"co", metadata !876, i32 210, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1371 = metadata !{i32 215, i32 6, metadata !1372, null}
!1372 = metadata !{i32 786443, metadata !1373, i32 214, i32 31, metadata !876, i32 76} ; [ DW_TAG_lexical_block ]
!1373 = metadata !{i32 786443, metadata !1374, i32 214, i32 5, metadata !876, i32 75} ; [ DW_TAG_lexical_block ]
!1374 = metadata !{i32 786443, metadata !1375, i32 212, i32 27, metadata !876, i32 74} ; [ DW_TAG_lexical_block ]
!1375 = metadata !{i32 786443, metadata !1376, i32 212, i32 4, metadata !876, i32 73} ; [ DW_TAG_lexical_block ]
!1376 = metadata !{i32 786443, metadata !1377, i32 211, i32 26, metadata !876, i32 72} ; [ DW_TAG_lexical_block ]
!1377 = metadata !{i32 786443, metadata !1378, i32 211, i32 3, metadata !876, i32 71} ; [ DW_TAG_lexical_block ]
!1378 = metadata !{i32 786443, metadata !1367, i32 210, i32 28, metadata !876, i32 70} ; [ DW_TAG_lexical_block ]
!1379 = metadata !{i32 221, i32 34, metadata !1374, null}
!1380 = metadata !{i32 211, i32 16, metadata !1377, null}
!1381 = metadata !{i32 211, i32 22, metadata !1377, null}
!1382 = metadata !{i32 786688, metadata !1377, metadata !"h", metadata !876, i32 211, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1383 = metadata !{i32 222, i32 17, metadata !1374, null}
!1384 = metadata !{i32 212, i32 17, metadata !1375, null}
!1385 = metadata !{i32 212, i32 23, metadata !1375, null}
!1386 = metadata !{i32 214, i32 19, metadata !1373, null}
!1387 = metadata !{i32 214, i32 26, metadata !1373, null}
!1388 = metadata !{i32 786688, metadata !1374, metadata !"sum", metadata !876, i32 213, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1389 = metadata !{i32 786688, metadata !1373, metadata !"ci", metadata !876, i32 214, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1390 = metadata !{i32 786688, metadata !1374, metadata !"result", metadata !876, i32 221, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1391 = metadata !{i32 786688, metadata !1375, metadata !"w", metadata !876, i32 212, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1392 = metadata !{i32 227, i32 1, metadata !1368, null}
!1393 = metadata !{i32 786689, metadata !1394, metadata !"input[0]", null, i32 53, metadata !1066, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1394 = metadata !{i32 786478, i32 0, metadata !876, metadata !"subconv_1x1_16", metadata !"subconv_1x1_16", metadata !"_Z14subconv_1x1_16PA24_A16_A16_fPA24_A1_A1_fPfS2_", metadata !876, i32 53, metadata !1395, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !895, i32 56} ; [ DW_TAG_subprogram ]
!1395 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !1396, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!1396 = metadata !{null, metadata !1050, metadata !1318, metadata !890, metadata !1050}
!1397 = metadata !{i32 53, i32 27, metadata !1394, null}
!1398 = metadata !{i32 786689, metadata !1394, metadata !"weight", null, i32 54, metadata !1323, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1399 = metadata !{i32 54, i32 8, metadata !1394, null}
!1400 = metadata !{i32 786689, metadata !1394, metadata !"bias", null, i32 55, metadata !1062, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1401 = metadata !{i32 55, i32 8, metadata !1394, null}
!1402 = metadata !{i32 786689, metadata !1394, metadata !"output[0]", null, i32 56, metadata !1066, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1403 = metadata !{i32 56, i32 8, metadata !1394, null}
!1404 = metadata !{i32 59, i32 16, metadata !1405, null}
!1405 = metadata !{i32 786443, metadata !1406, i32 59, i32 2, metadata !876, i32 23} ; [ DW_TAG_lexical_block ]
!1406 = metadata !{i32 786443, metadata !1394, i32 56, i32 30, metadata !876, i32 22} ; [ DW_TAG_lexical_block ]
!1407 = metadata !{i32 59, i32 23, metadata !1405, null}
!1408 = metadata !{i32 786688, metadata !1405, metadata !"co", metadata !876, i32 59, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1409 = metadata !{i32 64, i32 6, metadata !1410, null}
!1410 = metadata !{i32 786443, metadata !1411, i32 63, i32 31, metadata !876, i32 30} ; [ DW_TAG_lexical_block ]
!1411 = metadata !{i32 786443, metadata !1412, i32 63, i32 5, metadata !876, i32 29} ; [ DW_TAG_lexical_block ]
!1412 = metadata !{i32 786443, metadata !1413, i32 61, i32 27, metadata !876, i32 28} ; [ DW_TAG_lexical_block ]
!1413 = metadata !{i32 786443, metadata !1414, i32 61, i32 4, metadata !876, i32 27} ; [ DW_TAG_lexical_block ]
!1414 = metadata !{i32 786443, metadata !1415, i32 60, i32 26, metadata !876, i32 26} ; [ DW_TAG_lexical_block ]
!1415 = metadata !{i32 786443, metadata !1416, i32 60, i32 3, metadata !876, i32 25} ; [ DW_TAG_lexical_block ]
!1416 = metadata !{i32 786443, metadata !1405, i32 59, i32 28, metadata !876, i32 24} ; [ DW_TAG_lexical_block ]
!1417 = metadata !{i32 70, i32 34, metadata !1412, null}
!1418 = metadata !{i32 60, i32 16, metadata !1415, null}
!1419 = metadata !{i32 60, i32 22, metadata !1415, null}
!1420 = metadata !{i32 786688, metadata !1415, metadata !"h", metadata !876, i32 60, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1421 = metadata !{i32 71, i32 17, metadata !1412, null}
!1422 = metadata !{i32 61, i32 17, metadata !1413, null}
!1423 = metadata !{i32 61, i32 23, metadata !1413, null}
!1424 = metadata !{i32 63, i32 19, metadata !1411, null}
!1425 = metadata !{i32 63, i32 26, metadata !1411, null}
!1426 = metadata !{i32 786688, metadata !1412, metadata !"sum", metadata !876, i32 62, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1427 = metadata !{i32 786688, metadata !1411, metadata !"ci", metadata !876, i32 63, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1428 = metadata !{i32 786688, metadata !1412, metadata !"result", metadata !876, i32 70, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1429 = metadata !{i32 786688, metadata !1413, metadata !"w", metadata !876, i32 61, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1430 = metadata !{i32 75, i32 1, metadata !1406, null}
!1431 = metadata !{i32 786689, metadata !1432, metadata !"left[0]", null, i32 462, metadata !909, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1432 = metadata !{i32 786478, i32 0, metadata !876, metadata !"shuffle_96", metadata !"shuffle_96", metadata !"_Z10shuffle_96PA96_A4_A4_fS2_PA192_S0_", metadata !876, i32 462, metadata !1433, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !895, i32 462} ; [ DW_TAG_subprogram ]
!1433 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !1434, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!1434 = metadata !{null, metadata !891, metadata !891, metadata !1435}
!1435 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !1436} ; [ DW_TAG_pointer_type ]
!1436 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 98304, i64 32, i32 0, i32 0, metadata !881, metadata !1437, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1437 = metadata !{metadata !1438, metadata !894, metadata !894}
!1438 = metadata !{i32 786465, i64 0, i64 191}    ; [ DW_TAG_subrange_type ]
!1439 = metadata !{i32 462, i32 23, metadata !1432, null}
!1440 = metadata !{i32 786689, metadata !1432, metadata !"right[0]", null, i32 462, metadata !909, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1441 = metadata !{i32 462, i32 47, metadata !1432, null}
!1442 = metadata !{i32 786689, metadata !1432, metadata !"output", null, i32 462, metadata !1443, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1443 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 98304, i64 32, i32 0, i32 0, metadata !881, metadata !1444, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1444 = metadata !{metadata !888, metadata !1438, metadata !894, metadata !894}
!1445 = metadata !{i32 462, i32 72, metadata !1432, null}
!1446 = metadata !{i32 463, i32 16, metadata !1447, null}
!1447 = metadata !{i32 786443, metadata !1448, i32 463, i32 2, metadata !876, i32 164} ; [ DW_TAG_lexical_block ]
!1448 = metadata !{i32 786443, metadata !1432, i32 462, i32 93, metadata !876, i32 163} ; [ DW_TAG_lexical_block ]
!1449 = metadata !{i32 463, i32 25, metadata !1447, null}
!1450 = metadata !{i32 786688, metadata !1447, metadata !"co", metadata !876, i32 463, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1451 = metadata !{i32 464, i32 14, metadata !1452, null}
!1452 = metadata !{i32 786443, metadata !1453, i32 464, i32 3, metadata !876, i32 166} ; [ DW_TAG_lexical_block ]
!1453 = metadata !{i32 786443, metadata !1447, i32 463, i32 31, metadata !876, i32 165} ; [ DW_TAG_lexical_block ]
!1454 = metadata !{i32 464, i32 19, metadata !1452, null}
!1455 = metadata !{i32 786688, metadata !1452, metadata !"h", metadata !876, i32 464, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1456 = metadata !{i32 466, i32 19, metadata !1457, null}
!1457 = metadata !{i32 786443, metadata !1458, i32 465, i32 26, metadata !876, i32 169} ; [ DW_TAG_lexical_block ]
!1458 = metadata !{i32 786443, metadata !1459, i32 465, i32 4, metadata !876, i32 168} ; [ DW_TAG_lexical_block ]
!1459 = metadata !{i32 786443, metadata !1452, i32 464, i32 23, metadata !876, i32 167} ; [ DW_TAG_lexical_block ]
!1460 = metadata !{i32 465, i32 17, metadata !1458, null}
!1461 = metadata !{i32 465, i32 22, metadata !1458, null}
!1462 = metadata !{i32 467, i32 10, metadata !1457, null}
!1463 = metadata !{i32 466, i32 5, metadata !1457, null}
!1464 = metadata !{i32 786688, metadata !1458, metadata !"w", metadata !876, i32 465, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1465 = metadata !{i32 471, i32 1, metadata !1448, null}
!1466 = metadata !{i32 786689, metadata !1467, metadata !"left[0]", null, i32 292, metadata !953, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1467 = metadata !{i32 786478, i32 0, metadata !876, metadata !"shuffle_48", metadata !"shuffle_48", metadata !"_Z10shuffle_48PA48_A8_A8_fS2_PA96_S0_", metadata !876, i32 292, metadata !1468, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !895, i32 292} ; [ DW_TAG_subprogram ]
!1468 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !1469, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!1469 = metadata !{null, metadata !949, metadata !949, metadata !879}
!1470 = metadata !{i32 292, i32 23, metadata !1467, null}
!1471 = metadata !{i32 786689, metadata !1467, metadata !"right[0]", null, i32 292, metadata !953, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1472 = metadata !{i32 292, i32 47, metadata !1467, null}
!1473 = metadata !{i32 786689, metadata !1467, metadata !"output", null, i32 292, metadata !897, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1474 = metadata !{i32 292, i32 72, metadata !1467, null}
!1475 = metadata !{i32 293, i32 16, metadata !1476, null}
!1476 = metadata !{i32 786443, metadata !1477, i32 293, i32 2, metadata !876, i32 109} ; [ DW_TAG_lexical_block ]
!1477 = metadata !{i32 786443, metadata !1467, i32 292, i32 92, metadata !876, i32 108} ; [ DW_TAG_lexical_block ]
!1478 = metadata !{i32 293, i32 24, metadata !1476, null}
!1479 = metadata !{i32 786688, metadata !1476, metadata !"co", metadata !876, i32 293, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1480 = metadata !{i32 294, i32 14, metadata !1481, null}
!1481 = metadata !{i32 786443, metadata !1482, i32 294, i32 3, metadata !876, i32 111} ; [ DW_TAG_lexical_block ]
!1482 = metadata !{i32 786443, metadata !1476, i32 293, i32 30, metadata !876, i32 110} ; [ DW_TAG_lexical_block ]
!1483 = metadata !{i32 294, i32 19, metadata !1481, null}
!1484 = metadata !{i32 786688, metadata !1481, metadata !"h", metadata !876, i32 294, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1485 = metadata !{i32 296, i32 19, metadata !1486, null}
!1486 = metadata !{i32 786443, metadata !1487, i32 295, i32 26, metadata !876, i32 114} ; [ DW_TAG_lexical_block ]
!1487 = metadata !{i32 786443, metadata !1488, i32 295, i32 4, metadata !876, i32 113} ; [ DW_TAG_lexical_block ]
!1488 = metadata !{i32 786443, metadata !1481, i32 294, i32 23, metadata !876, i32 112} ; [ DW_TAG_lexical_block ]
!1489 = metadata !{i32 295, i32 17, metadata !1487, null}
!1490 = metadata !{i32 295, i32 22, metadata !1487, null}
!1491 = metadata !{i32 297, i32 10, metadata !1486, null}
!1492 = metadata !{i32 296, i32 5, metadata !1486, null}
!1493 = metadata !{i32 786688, metadata !1487, metadata !"w", metadata !876, i32 295, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1494 = metadata !{i32 301, i32 1, metadata !1477, null}
!1495 = metadata !{i32 786689, metadata !1496, metadata !"left[0]", null, i32 121, metadata !1066, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1496 = metadata !{i32 786478, i32 0, metadata !876, metadata !"shuffle_24", metadata !"shuffle_24", metadata !"_Z10shuffle_24PA24_A16_A16_fS2_PA48_S0_", metadata !876, i32 121, metadata !1497, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !895, i32 121} ; [ DW_TAG_subprogram ]
!1497 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !1498, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!1498 = metadata !{null, metadata !1050, metadata !1050, metadata !1105}
!1499 = metadata !{i32 121, i32 23, metadata !1496, null}
!1500 = metadata !{i32 786689, metadata !1496, metadata !"right[0]", null, i32 121, metadata !1066, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1501 = metadata !{i32 121, i32 49, metadata !1496, null}
!1502 = metadata !{i32 786689, metadata !1496, metadata !"output", null, i32 121, metadata !1108, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1503 = metadata !{i32 121, i32 76, metadata !1496, null}
!1504 = metadata !{i32 122, i32 16, metadata !1505, null}
!1505 = metadata !{i32 786443, metadata !1506, i32 122, i32 2, metadata !876, i32 54} ; [ DW_TAG_lexical_block ]
!1506 = metadata !{i32 786443, metadata !1496, i32 121, i32 98, metadata !876, i32 53} ; [ DW_TAG_lexical_block ]
!1507 = metadata !{i32 122, i32 24, metadata !1505, null}
!1508 = metadata !{i32 786688, metadata !1505, metadata !"co", metadata !876, i32 122, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1509 = metadata !{i32 123, i32 14, metadata !1510, null}
!1510 = metadata !{i32 786443, metadata !1511, i32 123, i32 3, metadata !876, i32 56} ; [ DW_TAG_lexical_block ]
!1511 = metadata !{i32 786443, metadata !1505, i32 122, i32 30, metadata !876, i32 55} ; [ DW_TAG_lexical_block ]
!1512 = metadata !{i32 123, i32 20, metadata !1510, null}
!1513 = metadata !{i32 786688, metadata !1510, metadata !"h", metadata !876, i32 123, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1514 = metadata !{i32 125, i32 19, metadata !1515, null}
!1515 = metadata !{i32 786443, metadata !1516, i32 124, i32 27, metadata !876, i32 59} ; [ DW_TAG_lexical_block ]
!1516 = metadata !{i32 786443, metadata !1517, i32 124, i32 4, metadata !876, i32 58} ; [ DW_TAG_lexical_block ]
!1517 = metadata !{i32 786443, metadata !1510, i32 123, i32 24, metadata !876, i32 57} ; [ DW_TAG_lexical_block ]
!1518 = metadata !{i32 124, i32 17, metadata !1516, null}
!1519 = metadata !{i32 124, i32 23, metadata !1516, null}
!1520 = metadata !{i32 126, i32 10, metadata !1515, null}
!1521 = metadata !{i32 125, i32 5, metadata !1515, null}
!1522 = metadata !{i32 786688, metadata !1516, metadata !"w", metadata !876, i32 124, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1523 = metadata !{i32 130, i32 1, metadata !1506, null}
!1524 = metadata !{i32 786689, metadata !1525, metadata !"weight", null, i32 549, metadata !1535, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1525 = metadata !{i32 786478, i32 0, metadata !876, metadata !"conv_last", metadata !"conv_last", metadata !"_Z9conv_lastPA192_A4_A4_fPA192_A1_A1_fPfPA512_S0_", metadata !876, i32 548, metadata !1526, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !895, i32 551} ; [ DW_TAG_subprogram ]
!1526 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !1527, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!1527 = metadata !{null, metadata !1435, metadata !1528, metadata !890, metadata !1531}
!1528 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !1529} ; [ DW_TAG_pointer_type ]
!1529 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 6144, i64 32, i32 0, i32 0, metadata !881, metadata !1530, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1530 = metadata !{metadata !1438, metadata !888, metadata !888}
!1531 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !1532} ; [ DW_TAG_pointer_type ]
!1532 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 262144, i64 32, i32 0, i32 0, metadata !881, metadata !1533, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1533 = metadata !{metadata !1534, metadata !894, metadata !894}
!1534 = metadata !{i32 786465, i64 0, i64 511}    ; [ DW_TAG_subrange_type ]
!1535 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 3145728, i64 32, i32 0, i32 0, metadata !881, metadata !1536, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1536 = metadata !{metadata !1534, metadata !1438, metadata !888, metadata !888}
!1537 = metadata !{i32 549, i32 8, metadata !1525, null}
!1538 = metadata !{i32 786689, metadata !1525, metadata !"bias", null, i32 550, metadata !1539, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1539 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 16384, i64 32, i32 0, i32 0, metadata !881, metadata !1540, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1540 = metadata !{metadata !1534}
!1541 = metadata !{i32 550, i32 8, metadata !1525, null}
!1542 = metadata !{i32 786689, metadata !1525, metadata !"output", null, i32 551, metadata !1543, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1543 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 262144, i64 32, i32 0, i32 0, metadata !881, metadata !1544, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1544 = metadata !{metadata !888, metadata !1534, metadata !894, metadata !894}
!1545 = metadata !{i32 551, i32 8, metadata !1525, null}
!1546 = metadata !{i32 553, i32 16, metadata !1547, null}
!1547 = metadata !{i32 786443, metadata !1548, i32 553, i32 2, metadata !876, i32 179} ; [ DW_TAG_lexical_block ]
!1548 = metadata !{i32 786443, metadata !1525, i32 551, i32 29, metadata !876, i32 178} ; [ DW_TAG_lexical_block ]
!1549 = metadata !{i32 553, i32 24, metadata !1547, null}
!1550 = metadata !{i32 786688, metadata !1547, metadata !"co", metadata !876, i32 553, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1551 = metadata !{i32 558, i32 6, metadata !1552, null}
!1552 = metadata !{i32 786443, metadata !1553, i32 557, i32 32, metadata !876, i32 186} ; [ DW_TAG_lexical_block ]
!1553 = metadata !{i32 786443, metadata !1554, i32 557, i32 5, metadata !876, i32 185} ; [ DW_TAG_lexical_block ]
!1554 = metadata !{i32 786443, metadata !1555, i32 555, i32 26, metadata !876, i32 184} ; [ DW_TAG_lexical_block ]
!1555 = metadata !{i32 786443, metadata !1556, i32 555, i32 4, metadata !876, i32 183} ; [ DW_TAG_lexical_block ]
!1556 = metadata !{i32 786443, metadata !1557, i32 554, i32 25, metadata !876, i32 182} ; [ DW_TAG_lexical_block ]
!1557 = metadata !{i32 786443, metadata !1558, i32 554, i32 3, metadata !876, i32 181} ; [ DW_TAG_lexical_block ]
!1558 = metadata !{i32 786443, metadata !1547, i32 553, i32 29, metadata !876, i32 180} ; [ DW_TAG_lexical_block ]
!1559 = metadata !{i32 560, i32 34, metadata !1554, null}
!1560 = metadata !{i32 554, i32 16, metadata !1557, null}
!1561 = metadata !{i32 554, i32 21, metadata !1557, null}
!1562 = metadata !{i32 786688, metadata !1557, metadata !"h", metadata !876, i32 554, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1563 = metadata !{i32 561, i32 17, metadata !1554, null}
!1564 = metadata !{i32 555, i32 17, metadata !1555, null}
!1565 = metadata !{i32 555, i32 22, metadata !1555, null}
!1566 = metadata !{i32 557, i32 19, metadata !1553, null}
!1567 = metadata !{i32 557, i32 27, metadata !1553, null}
!1568 = metadata !{i32 786688, metadata !1554, metadata !"sum", metadata !876, i32 556, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1569 = metadata !{i32 786688, metadata !1553, metadata !"ci", metadata !876, i32 557, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1570 = metadata !{i32 786688, metadata !1554, metadata !"result", metadata !876, i32 560, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1571 = metadata !{i32 786688, metadata !1555, metadata !"w", metadata !876, i32 555, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1572 = metadata !{i32 565, i32 1, metadata !1548, null}
!1573 = metadata !{i32 786689, metadata !1574, metadata !"input", null, i32 7, metadata !1583, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1574 = metadata !{i32 786478, i32 0, metadata !876, metadata !"conv1", metadata !"conv1", metadata !"_Z5conv1PA3_A32_A32_fPA3_A3_A3_fPfPA24_S0_", metadata !876, i32 7, metadata !1575, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !895, i32 10} ; [ DW_TAG_subprogram ]
!1575 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !1576, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!1576 = metadata !{null, metadata !1577, metadata !1580, metadata !890, metadata !1045}
!1577 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !1578} ; [ DW_TAG_pointer_type ]
!1578 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 98304, i64 32, i32 0, i32 0, metadata !881, metadata !1579, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1579 = metadata !{metadata !889, metadata !1049, metadata !1049}
!1580 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !1581} ; [ DW_TAG_pointer_type ]
!1581 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 864, i64 32, i32 0, i32 0, metadata !881, metadata !1582, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1582 = metadata !{metadata !889, metadata !889, metadata !889}
!1583 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 98304, i64 32, i32 0, i32 0, metadata !881, metadata !1584, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1584 = metadata !{metadata !888, metadata !889, metadata !1049, metadata !1049}
!1585 = metadata !{i32 7, i32 18, metadata !1574, null}
!1586 = metadata !{i32 786689, metadata !1574, metadata !"weight", null, i32 8, metadata !1587, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1587 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 20736, i64 32, i32 0, i32 0, metadata !881, metadata !1588, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1588 = metadata !{metadata !1048, metadata !889, metadata !889, metadata !889}
!1589 = metadata !{i32 8, i32 8, metadata !1574, null}
!1590 = metadata !{i32 786689, metadata !1574, metadata !"bias", null, i32 9, metadata !1062, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1591 = metadata !{i32 9, i32 8, metadata !1574, null}
!1592 = metadata !{i32 11, i32 16, metadata !1593, null}
!1593 = metadata !{i32 786443, metadata !1594, i32 11, i32 2, metadata !876, i32 1} ; [ DW_TAG_lexical_block ]
!1594 = metadata !{i32 786443, metadata !1574, i32 10, i32 30, metadata !876, i32 0} ; [ DW_TAG_lexical_block ]
!1595 = metadata !{i32 11, i32 23, metadata !1593, null}
!1596 = metadata !{i32 786688, metadata !1593, metadata !"co", metadata !876, i32 11, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1597 = metadata !{i32 18, i32 8, metadata !1598, null}
!1598 = metadata !{i32 786443, metadata !1599, i32 17, i32 29, metadata !876, i32 12} ; [ DW_TAG_lexical_block ]
!1599 = metadata !{i32 786443, metadata !1600, i32 17, i32 7, metadata !876, i32 11} ; [ DW_TAG_lexical_block ]
!1600 = metadata !{i32 786443, metadata !1601, i32 16, i32 28, metadata !876, i32 10} ; [ DW_TAG_lexical_block ]
!1601 = metadata !{i32 786443, metadata !1602, i32 16, i32 6, metadata !876, i32 9} ; [ DW_TAG_lexical_block ]
!1602 = metadata !{i32 786443, metadata !1603, i32 15, i32 30, metadata !876, i32 8} ; [ DW_TAG_lexical_block ]
!1603 = metadata !{i32 786443, metadata !1604, i32 15, i32 5, metadata !876, i32 7} ; [ DW_TAG_lexical_block ]
!1604 = metadata !{i32 786443, metadata !1605, i32 13, i32 27, metadata !876, i32 6} ; [ DW_TAG_lexical_block ]
!1605 = metadata !{i32 786443, metadata !1606, i32 13, i32 4, metadata !876, i32 5} ; [ DW_TAG_lexical_block ]
!1606 = metadata !{i32 786443, metadata !1607, i32 12, i32 26, metadata !876, i32 4} ; [ DW_TAG_lexical_block ]
!1607 = metadata !{i32 786443, metadata !1608, i32 12, i32 3, metadata !876, i32 3} ; [ DW_TAG_lexical_block ]
!1608 = metadata !{i32 786443, metadata !1593, i32 11, i32 28, metadata !876, i32 2} ; [ DW_TAG_lexical_block ]
!1609 = metadata !{i32 22, i32 34, metadata !1604, null}
!1610 = metadata !{i32 12, i32 16, metadata !1607, null}
!1611 = metadata !{i32 12, i32 22, metadata !1607, null}
!1612 = metadata !{i32 786688, metadata !1607, metadata !"h", metadata !876, i32 12, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1613 = metadata !{i32 23, i32 5, metadata !1604, null}
!1614 = metadata !{i32 13, i32 17, metadata !1605, null}
!1615 = metadata !{i32 13, i32 23, metadata !1605, null}
!1616 = metadata !{i32 15, i32 19, metadata !1603, null}
!1617 = metadata !{i32 15, i32 25, metadata !1603, null}
!1618 = metadata !{i32 786688, metadata !1603, metadata !"ci", metadata !876, i32 15, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1619 = metadata !{i32 16, i32 19, metadata !1601, null}
!1620 = metadata !{i32 16, i32 24, metadata !1601, null}
!1621 = metadata !{i32 786688, metadata !1601, metadata !"m", metadata !876, i32 16, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1622 = metadata !{i32 17, i32 20, metadata !1599, null}
!1623 = metadata !{i32 17, i32 25, metadata !1599, null}
!1624 = metadata !{i32 786688, metadata !1604, metadata !"sum", metadata !876, i32 14, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1625 = metadata !{i32 786688, metadata !1599, metadata !"n", metadata !876, i32 17, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1626 = metadata !{i32 786688, metadata !1604, metadata !"result", metadata !876, i32 22, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1627 = metadata !{i32 786688, metadata !1605, metadata !"w", metadata !876, i32 13, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1628 = metadata !{i32 27, i32 1, metadata !1594, null}
!1629 = metadata !{i32 786689, metadata !1630, metadata !"output", null, i32 568, metadata !1539, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1630 = metadata !{i32 786478, i32 0, metadata !876, metadata !"avgpool", metadata !"avgpool", metadata !"_Z7avgpoolPA512_A4_A4_fPf", metadata !876, i32 567, metadata !1631, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !895, i32 568} ; [ DW_TAG_subprogram ]
!1631 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !1632, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!1632 = metadata !{null, metadata !1531, metadata !890}
!1633 = metadata !{i32 568, i32 8, metadata !1630, null}
!1634 = metadata !{i32 570, i32 16, metadata !1635, null}
!1635 = metadata !{i32 786443, metadata !1636, i32 570, i32 2, metadata !876, i32 188} ; [ DW_TAG_lexical_block ]
!1636 = metadata !{i32 786443, metadata !1630, i32 568, i32 20, metadata !876, i32 187} ; [ DW_TAG_lexical_block ]
!1637 = metadata !{i32 570, i32 24, metadata !1635, null}
!1638 = metadata !{i32 574, i32 5, metadata !1639, null}
!1639 = metadata !{i32 786443, metadata !1640, i32 573, i32 24, metadata !876, i32 193} ; [ DW_TAG_lexical_block ]
!1640 = metadata !{i32 786443, metadata !1641, i32 573, i32 4, metadata !876, i32 192} ; [ DW_TAG_lexical_block ]
!1641 = metadata !{i32 786443, metadata !1642, i32 572, i32 25, metadata !876, i32 191} ; [ DW_TAG_lexical_block ]
!1642 = metadata !{i32 786443, metadata !1643, i32 572, i32 3, metadata !876, i32 190} ; [ DW_TAG_lexical_block ]
!1643 = metadata !{i32 786443, metadata !1635, i32 570, i32 29, metadata !876, i32 189} ; [ DW_TAG_lexical_block ]
!1644 = metadata !{i32 572, i32 16, metadata !1642, null}
!1645 = metadata !{i32 572, i32 21, metadata !1642, null}
!1646 = metadata !{i32 786688, metadata !1642, metadata !"h", metadata !876, i32 572, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1647 = metadata !{i32 573, i32 15, metadata !1640, null}
!1648 = metadata !{i32 573, i32 20, metadata !1640, null}
!1649 = metadata !{i32 786688, metadata !1643, metadata !"sum", metadata !876, i32 571, metadata !881, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1650 = metadata !{i32 786688, metadata !1640, metadata !"w", metadata !876, i32 573, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1651 = metadata !{i32 577, i32 3, metadata !1643, null}
!1652 = metadata !{i32 786688, metadata !1635, metadata !"co", metadata !876, i32 570, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1653 = metadata !{i32 579, i32 1, metadata !1636, null}
!1654 = metadata !{i32 786688, metadata !1655, metadata !"right_part[0]", null, i32 521, metadata !909, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1655 = metadata !{i32 786443, metadata !1656, i32 519, i32 3, metadata !876, i32 171} ; [ DW_TAG_lexical_block ]
!1656 = metadata !{i32 786478, i32 0, metadata !876, metadata !"ShuffleUnit2", metadata !"ShuffleUnit2", metadata !"_Z12ShuffleUnit2PA192_A4_A4_fPA96_A1_A1_fPfPA1_A3_A3_fS7_S6_S7_S2_", metadata !876, i32 511, metadata !1657, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !895, i32 519} ; [ DW_TAG_subprogram ]
!1657 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !1658, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!1658 = metadata !{null, metadata !1435, metadata !1196, metadata !890, metadata !885, metadata !890, metadata !1196, metadata !890, metadata !1435}
!1659 = metadata !{i32 521, i32 8, metadata !1655, null}
!1660 = metadata !{i32 786688, metadata !1655, metadata !"conv1_output[0]", null, i32 522, metadata !909, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1661 = metadata !{i32 522, i32 8, metadata !1655, null}
!1662 = metadata !{i32 786688, metadata !1655, metadata !"conv2_output[0]", null, i32 523, metadata !909, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1663 = metadata !{i32 523, i32 8, metadata !1655, null}
!1664 = metadata !{i32 786688, metadata !1655, metadata !"conv3_output[0]", null, i32 524, metadata !909, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1665 = metadata !{i32 524, i32 8, metadata !1655, null}
!1666 = metadata !{i32 786689, metadata !1656, metadata !"input", null, i32 511, metadata !1443, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1667 = metadata !{i32 511, i32 25, metadata !1656, null}
!1668 = metadata !{i32 786689, metadata !1656, metadata !"conv1_weight", null, i32 512, metadata !1199, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1669 = metadata !{i32 512, i32 8, metadata !1656, null}
!1670 = metadata !{i32 786689, metadata !1656, metadata !"conv1_bias", null, i32 513, metadata !905, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1671 = metadata !{i32 513, i32 8, metadata !1656, null}
!1672 = metadata !{i32 786689, metadata !1656, metadata !"conv2_weight", null, i32 514, metadata !901, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1673 = metadata !{i32 514, i32 8, metadata !1656, null}
!1674 = metadata !{i32 786689, metadata !1656, metadata !"conv2_bias", null, i32 515, metadata !905, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1675 = metadata !{i32 515, i32 8, metadata !1656, null}
!1676 = metadata !{i32 786689, metadata !1656, metadata !"conv3_weight", null, i32 516, metadata !1199, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1677 = metadata !{i32 516, i32 8, metadata !1656, null}
!1678 = metadata !{i32 786689, metadata !1656, metadata !"conv3_bias", null, i32 517, metadata !905, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1679 = metadata !{i32 517, i32 8, metadata !1656, null}
!1680 = metadata !{i32 786689, metadata !1656, metadata !"output", null, i32 518, metadata !1443, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1681 = metadata !{i32 518, i32 8, metadata !1656, null}
!1682 = metadata !{i32 786688, metadata !1655, metadata !"left_part[0]", null, i32 520, metadata !909, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1683 = metadata !{i32 520, i32 8, metadata !1655, null}
!1684 = metadata !{i32 520, i32 36, metadata !1655, null}
!1685 = metadata !{i32 521, i32 37, metadata !1655, null}
!1686 = metadata !{i32 522, i32 39, metadata !1655, null}
!1687 = metadata !{i32 523, i32 39, metadata !1655, null}
!1688 = metadata !{i32 524, i32 39, metadata !1655, null}
!1689 = metadata !{i32 527, i32 16, metadata !1690, null}
!1690 = metadata !{i32 786443, metadata !1655, i32 527, i32 2, metadata !876, i32 172} ; [ DW_TAG_lexical_block ]
!1691 = metadata !{i32 527, i32 24, metadata !1690, null}
!1692 = metadata !{i32 786688, metadata !1690, metadata !"co", metadata !876, i32 527, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1693 = metadata !{i32 530, i32 5, metadata !1694, null}
!1694 = metadata !{i32 786443, metadata !1695, i32 529, i32 26, metadata !876, i32 177} ; [ DW_TAG_lexical_block ]
!1695 = metadata !{i32 786443, metadata !1696, i32 529, i32 4, metadata !876, i32 176} ; [ DW_TAG_lexical_block ]
!1696 = metadata !{i32 786443, metadata !1697, i32 528, i32 23, metadata !876, i32 175} ; [ DW_TAG_lexical_block ]
!1697 = metadata !{i32 786443, metadata !1698, i32 528, i32 3, metadata !876, i32 174} ; [ DW_TAG_lexical_block ]
!1698 = metadata !{i32 786443, metadata !1690, i32 527, i32 30, metadata !876, i32 173} ; [ DW_TAG_lexical_block ]
!1699 = metadata !{i32 528, i32 14, metadata !1697, null}
!1700 = metadata !{i32 528, i32 19, metadata !1697, null}
!1701 = metadata !{i32 786688, metadata !1697, metadata !"h", metadata !876, i32 528, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1702 = metadata !{i32 531, i32 5, metadata !1694, null}
!1703 = metadata !{i32 529, i32 17, metadata !1695, null}
!1704 = metadata !{i32 529, i32 22, metadata !1695, null}
!1705 = metadata !{i32 786688, metadata !1695, metadata !"w", metadata !876, i32 529, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1706 = metadata !{i32 536, i32 2, metadata !1655, null}
!1707 = metadata !{i32 540, i32 2, metadata !1655, null}
!1708 = metadata !{i32 542, i32 2, metadata !1655, null}
!1709 = metadata !{i32 544, i32 2, metadata !1655, null}
!1710 = metadata !{i32 545, i32 1, metadata !1655, null}
!1711 = metadata !{i32 786688, metadata !1712, metadata !"right_part[0]", null, i32 352, metadata !953, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1712 = metadata !{i32 786443, metadata !1713, i32 350, i32 3, metadata !876, i32 116} ; [ DW_TAG_lexical_block ]
!1713 = metadata !{i32 786478, i32 0, metadata !876, metadata !"ShuffleUnit1", metadata !"ShuffleUnit1", metadata !"_Z12ShuffleUnit1PA96_A8_A8_fPA48_A1_A1_fPfPA1_A3_A3_fS7_S6_S7_S2_", metadata !876, i32 342, metadata !1714, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !895, i32 350} ; [ DW_TAG_subprogram ]
!1714 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !1715, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!1715 = metadata !{null, metadata !879, metadata !1237, metadata !890, metadata !885, metadata !890, metadata !1237, metadata !890, metadata !879}
!1716 = metadata !{i32 352, i32 8, metadata !1712, null}
!1717 = metadata !{i32 786688, metadata !1712, metadata !"conv1_output[0]", null, i32 353, metadata !953, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1718 = metadata !{i32 353, i32 8, metadata !1712, null}
!1719 = metadata !{i32 786688, metadata !1712, metadata !"conv2_output[0]", null, i32 354, metadata !953, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1720 = metadata !{i32 354, i32 8, metadata !1712, null}
!1721 = metadata !{i32 786688, metadata !1712, metadata !"conv3_output[0]", null, i32 355, metadata !953, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1722 = metadata !{i32 355, i32 8, metadata !1712, null}
!1723 = metadata !{i32 786689, metadata !1713, metadata !"input", null, i32 342, metadata !897, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1724 = metadata !{i32 342, i32 25, metadata !1713, null}
!1725 = metadata !{i32 786689, metadata !1713, metadata !"conv1_weight", null, i32 343, metadata !1242, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1726 = metadata !{i32 343, i32 8, metadata !1713, null}
!1727 = metadata !{i32 786689, metadata !1713, metadata !"conv1_bias", null, i32 344, metadata !961, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1728 = metadata !{i32 344, i32 8, metadata !1713, null}
!1729 = metadata !{i32 786689, metadata !1713, metadata !"conv2_weight", null, i32 345, metadata !957, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1730 = metadata !{i32 345, i32 8, metadata !1713, null}
!1731 = metadata !{i32 786689, metadata !1713, metadata !"conv2_bias", null, i32 346, metadata !961, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1732 = metadata !{i32 346, i32 8, metadata !1713, null}
!1733 = metadata !{i32 786689, metadata !1713, metadata !"conv3_weight", null, i32 347, metadata !1242, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1734 = metadata !{i32 347, i32 8, metadata !1713, null}
!1735 = metadata !{i32 786689, metadata !1713, metadata !"conv3_bias", null, i32 348, metadata !961, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1736 = metadata !{i32 348, i32 8, metadata !1713, null}
!1737 = metadata !{i32 786689, metadata !1713, metadata !"output", null, i32 349, metadata !897, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1738 = metadata !{i32 349, i32 8, metadata !1713, null}
!1739 = metadata !{i32 786688, metadata !1712, metadata !"left_part[0]", null, i32 351, metadata !953, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1740 = metadata !{i32 351, i32 8, metadata !1712, null}
!1741 = metadata !{i32 351, i32 36, metadata !1712, null}
!1742 = metadata !{i32 352, i32 37, metadata !1712, null}
!1743 = metadata !{i32 353, i32 39, metadata !1712, null}
!1744 = metadata !{i32 354, i32 39, metadata !1712, null}
!1745 = metadata !{i32 355, i32 39, metadata !1712, null}
!1746 = metadata !{i32 358, i32 16, metadata !1747, null}
!1747 = metadata !{i32 786443, metadata !1712, i32 358, i32 2, metadata !876, i32 117} ; [ DW_TAG_lexical_block ]
!1748 = metadata !{i32 358, i32 24, metadata !1747, null}
!1749 = metadata !{i32 786688, metadata !1747, metadata !"co", metadata !876, i32 358, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1750 = metadata !{i32 361, i32 5, metadata !1751, null}
!1751 = metadata !{i32 786443, metadata !1752, i32 360, i32 26, metadata !876, i32 122} ; [ DW_TAG_lexical_block ]
!1752 = metadata !{i32 786443, metadata !1753, i32 360, i32 4, metadata !876, i32 121} ; [ DW_TAG_lexical_block ]
!1753 = metadata !{i32 786443, metadata !1754, i32 359, i32 23, metadata !876, i32 120} ; [ DW_TAG_lexical_block ]
!1754 = metadata !{i32 786443, metadata !1755, i32 359, i32 3, metadata !876, i32 119} ; [ DW_TAG_lexical_block ]
!1755 = metadata !{i32 786443, metadata !1747, i32 358, i32 30, metadata !876, i32 118} ; [ DW_TAG_lexical_block ]
!1756 = metadata !{i32 359, i32 14, metadata !1754, null}
!1757 = metadata !{i32 359, i32 19, metadata !1754, null}
!1758 = metadata !{i32 786688, metadata !1754, metadata !"h", metadata !876, i32 359, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1759 = metadata !{i32 362, i32 5, metadata !1751, null}
!1760 = metadata !{i32 360, i32 17, metadata !1752, null}
!1761 = metadata !{i32 360, i32 22, metadata !1752, null}
!1762 = metadata !{i32 786688, metadata !1752, metadata !"w", metadata !876, i32 360, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1763 = metadata !{i32 367, i32 2, metadata !1712, null}
!1764 = metadata !{i32 371, i32 2, metadata !1712, null}
!1765 = metadata !{i32 373, i32 2, metadata !1712, null}
!1766 = metadata !{i32 375, i32 2, metadata !1712, null}
!1767 = metadata !{i32 376, i32 1, metadata !1712, null}
!1768 = metadata !{i32 786688, metadata !1769, metadata !"right_part[0]", null, i32 180, metadata !1066, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1769 = metadata !{i32 786443, metadata !1770, i32 178, i32 3, metadata !876, i32 61} ; [ DW_TAG_lexical_block ]
!1770 = metadata !{i32 786478, i32 0, metadata !876, metadata !"ShuffleUnit0", metadata !"ShuffleUnit0", metadata !"_Z12ShuffleUnit0PA48_A16_A16_fPA24_A1_A1_fPfPA1_A3_A3_fS7_S6_S7_S2_", metadata !876, i32 170, metadata !1771, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !895, i32 178} ; [ DW_TAG_subprogram ]
!1771 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !1772, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!1772 = metadata !{null, metadata !1105, metadata !1318, metadata !890, metadata !885, metadata !890, metadata !1318, metadata !890, metadata !1105}
!1773 = metadata !{i32 180, i32 8, metadata !1769, null}
!1774 = metadata !{i32 786688, metadata !1769, metadata !"conv1_output[0]", null, i32 181, metadata !1066, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1775 = metadata !{i32 181, i32 8, metadata !1769, null}
!1776 = metadata !{i32 786688, metadata !1769, metadata !"conv2_output[0]", null, i32 182, metadata !1066, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1777 = metadata !{i32 182, i32 8, metadata !1769, null}
!1778 = metadata !{i32 786688, metadata !1769, metadata !"conv3_output[0]", null, i32 183, metadata !1066, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1779 = metadata !{i32 183, i32 8, metadata !1769, null}
!1780 = metadata !{i32 786689, metadata !1770, metadata !"input", null, i32 170, metadata !1108, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1781 = metadata !{i32 170, i32 25, metadata !1770, null}
!1782 = metadata !{i32 786689, metadata !1770, metadata !"conv1_weight", null, i32 171, metadata !1323, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1783 = metadata !{i32 171, i32 8, metadata !1770, null}
!1784 = metadata !{i32 786689, metadata !1770, metadata !"conv1_bias", null, i32 172, metadata !1062, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1785 = metadata !{i32 172, i32 8, metadata !1770, null}
!1786 = metadata !{i32 786689, metadata !1770, metadata !"conv2_weight", null, i32 173, metadata !1058, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1787 = metadata !{i32 173, i32 8, metadata !1770, null}
!1788 = metadata !{i32 786689, metadata !1770, metadata !"conv2_bias", null, i32 174, metadata !1062, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1789 = metadata !{i32 174, i32 8, metadata !1770, null}
!1790 = metadata !{i32 786689, metadata !1770, metadata !"conv3_weight", null, i32 175, metadata !1323, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1791 = metadata !{i32 175, i32 8, metadata !1770, null}
!1792 = metadata !{i32 786689, metadata !1770, metadata !"conv3_bias", null, i32 176, metadata !1062, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1793 = metadata !{i32 176, i32 8, metadata !1770, null}
!1794 = metadata !{i32 786689, metadata !1770, metadata !"output", null, i32 177, metadata !1108, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1795 = metadata !{i32 177, i32 8, metadata !1770, null}
!1796 = metadata !{i32 786688, metadata !1769, metadata !"left_part[0]", null, i32 179, metadata !1066, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1797 = metadata !{i32 179, i32 8, metadata !1769, null}
!1798 = metadata !{i32 179, i32 38, metadata !1769, null}
!1799 = metadata !{i32 180, i32 39, metadata !1769, null}
!1800 = metadata !{i32 181, i32 41, metadata !1769, null}
!1801 = metadata !{i32 182, i32 41, metadata !1769, null}
!1802 = metadata !{i32 183, i32 41, metadata !1769, null}
!1803 = metadata !{i32 185, i32 16, metadata !1804, null}
!1804 = metadata !{i32 786443, metadata !1769, i32 185, i32 2, metadata !876, i32 62} ; [ DW_TAG_lexical_block ]
!1805 = metadata !{i32 185, i32 24, metadata !1804, null}
!1806 = metadata !{i32 786688, metadata !1804, metadata !"co", metadata !876, i32 185, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1807 = metadata !{i32 188, i32 5, metadata !1808, null}
!1808 = metadata !{i32 786443, metadata !1809, i32 187, i32 27, metadata !876, i32 67} ; [ DW_TAG_lexical_block ]
!1809 = metadata !{i32 786443, metadata !1810, i32 187, i32 4, metadata !876, i32 66} ; [ DW_TAG_lexical_block ]
!1810 = metadata !{i32 786443, metadata !1811, i32 186, i32 24, metadata !876, i32 65} ; [ DW_TAG_lexical_block ]
!1811 = metadata !{i32 786443, metadata !1812, i32 186, i32 3, metadata !876, i32 64} ; [ DW_TAG_lexical_block ]
!1812 = metadata !{i32 786443, metadata !1804, i32 185, i32 30, metadata !876, i32 63} ; [ DW_TAG_lexical_block ]
!1813 = metadata !{i32 186, i32 14, metadata !1811, null}
!1814 = metadata !{i32 186, i32 20, metadata !1811, null}
!1815 = metadata !{i32 786688, metadata !1811, metadata !"h", metadata !876, i32 186, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1816 = metadata !{i32 189, i32 5, metadata !1808, null}
!1817 = metadata !{i32 187, i32 17, metadata !1809, null}
!1818 = metadata !{i32 187, i32 23, metadata !1809, null}
!1819 = metadata !{i32 786688, metadata !1809, metadata !"w", metadata !876, i32 187, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1820 = metadata !{i32 194, i32 2, metadata !1769, null}
!1821 = metadata !{i32 196, i32 2, metadata !1769, null}
!1822 = metadata !{i32 198, i32 2, metadata !1769, null}
!1823 = metadata !{i32 200, i32 2, metadata !1769, null}
!1824 = metadata !{i32 201, i32 1, metadata !1769, null}
!1825 = metadata !{metadata !1826}
!1826 = metadata !{i32 0, i32 31, metadata !1827}
!1827 = metadata !{metadata !1828}
!1828 = metadata !{metadata !"image", metadata !1829, metadata !"float", i32 0, i32 31}
!1829 = metadata !{metadata !84, metadata !237, metadata !207, metadata !207}
!1830 = metadata !{metadata !1831}
!1831 = metadata !{i32 0, i32 31, metadata !1832}
!1832 = metadata !{metadata !1833}
!1833 = metadata !{metadata !"conv1_weight", metadata !1834, metadata !"float", i32 0, i32 31}
!1834 = metadata !{metadata !206, metadata !237, metadata !237, metadata !237}
!1835 = metadata !{metadata !1836}
!1836 = metadata !{i32 0, i32 31, metadata !1837}
!1837 = metadata !{metadata !1838}
!1838 = metadata !{metadata !"shuffle_conv_3x3", metadata !1839, metadata !"float", i32 0, i32 31}
!1839 = metadata !{metadata !1840, metadata !84, metadata !237, metadata !237}
!1840 = metadata !{i32 0, i32 1079, i32 1}
!1841 = metadata !{metadata !1842}
!1842 = metadata !{i32 0, i32 31, metadata !1843}
!1843 = metadata !{metadata !1844}
!1844 = metadata !{metadata !"shuffle_conv_1x1", metadata !1845, metadata !"float", i32 0, i32 31}
!1845 = metadata !{metadata !1846, metadata !206, metadata !84, metadata !84}
!1846 = metadata !{i32 0, i32 5495, i32 1}
!1847 = metadata !{metadata !1848}
!1848 = metadata !{i32 0, i32 31, metadata !1849}
!1849 = metadata !{metadata !1850}
!1850 = metadata !{metadata !"conv_last_weight", metadata !1851, metadata !"float", i32 0, i32 31}
!1851 = metadata !{metadata !193, metadata !85, metadata !84, metadata !84}
!1852 = metadata !{metadata !1853}
!1853 = metadata !{i32 0, i32 31, metadata !1854}
!1854 = metadata !{metadata !1855}
!1855 = metadata !{metadata !"fc_weight", metadata !1856, metadata !"float", i32 0, i32 31}
!1856 = metadata !{metadata !171, metadata !193}
!1857 = metadata !{metadata !1858}
!1858 = metadata !{i32 0, i32 31, metadata !1859}
!1859 = metadata !{metadata !1860}
!1860 = metadata !{metadata !"bias", metadata !1861, metadata !"float", i32 0, i32 31}
!1861 = metadata !{metadata !1862}
!1862 = metadata !{i32 0, i32 3617, i32 1}
!1863 = metadata !{metadata !1864}
!1864 = metadata !{i32 0, i32 31, metadata !1865}
!1865 = metadata !{metadata !1866}
!1866 = metadata !{metadata !"fc_output", metadata !1867, metadata !"float", i32 0, i32 31}
!1867 = metadata !{metadata !1868}
!1868 = metadata !{i32 0, i32 999, i32 1}
!1869 = metadata !{i32 786689, metadata !1870, metadata !"image", null, i32 143, metadata !1583, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1870 = metadata !{i32 786478, i32 0, metadata !1871, metadata !"ShuffleNetV2", metadata !"ShuffleNetV2", metadata !"_Z12ShuffleNetV2PA3_A32_A32_fPA3_A3_A3_fPA1_S4_PA24_A1_A1_fPA192_SA_PA512_fPfSH_", metadata !1871, i32 143, metadata !1872, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !895, i32 152} ; [ DW_TAG_subprogram ]
!1871 = metadata !{i32 786473, metadata !"accelerator_hls/shufflenet.cpp", metadata !"/home/ziyan/ziyan/ece527/shufflenetv2_master/sufflenetv3_vivado", null} ; [ DW_TAG_file_type ]
!1872 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !1873, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!1873 = metadata !{null, metadata !1577, metadata !1580, metadata !885, metadata !1318, metadata !1528, metadata !1874, metadata !890, metadata !890}
!1874 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !1539} ; [ DW_TAG_pointer_type ]
!1875 = metadata !{i32 143, i32 25, metadata !1870, null}
!1876 = metadata !{i32 786689, metadata !1870, metadata !"conv1_weight", null, i32 144, metadata !1587, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1877 = metadata !{i32 144, i32 9, metadata !1870, null}
!1878 = metadata !{i32 786689, metadata !1870, metadata !"shuffle_conv_3x3", null, i32 145, metadata !1879, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1879 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 311040, i64 32, i32 0, i32 0, metadata !881, metadata !1880, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1880 = metadata !{metadata !1881, metadata !888, metadata !889, metadata !889}
!1881 = metadata !{i32 786465, i64 0, i64 1079}   ; [ DW_TAG_subrange_type ]
!1882 = metadata !{i32 145, i32 9, metadata !1870, null}
!1883 = metadata !{i32 786689, metadata !1870, metadata !"shuffle_conv_1x1", null, i32 146, metadata !1884, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1884 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 4220928, i64 32, i32 0, i32 0, metadata !881, metadata !1885, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1885 = metadata !{metadata !1886, metadata !1048, metadata !888, metadata !888}
!1886 = metadata !{i32 786465, i64 0, i64 5495}   ; [ DW_TAG_subrange_type ]
!1887 = metadata !{i32 146, i32 9, metadata !1870, null}
!1888 = metadata !{i32 786689, metadata !1870, metadata !"conv_last_weight", null, i32 147, metadata !1535, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1889 = metadata !{i32 147, i32 9, metadata !1870, null}
!1890 = metadata !{i32 786689, metadata !1870, metadata !"fc_weight", null, i32 148, metadata !1891, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1891 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 163840, i64 32, i32 0, i32 0, metadata !881, metadata !1892, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1892 = metadata !{metadata !1893, metadata !1534}
!1893 = metadata !{i32 786465, i64 0, i64 9}      ; [ DW_TAG_subrange_type ]
!1894 = metadata !{i32 148, i32 9, metadata !1870, null}
!1895 = metadata !{i32 786689, metadata !1870, metadata !"bias", null, i32 149, metadata !1896, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1896 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 115776, i64 32, i32 0, i32 0, metadata !881, metadata !1897, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1897 = metadata !{metadata !1898}
!1898 = metadata !{i32 786465, i64 0, i64 3617}   ; [ DW_TAG_subrange_type ]
!1899 = metadata !{i32 149, i32 9, metadata !1870, null}
!1900 = metadata !{i32 786689, metadata !1870, metadata !"fc_output", null, i32 150, metadata !1901, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!1901 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 32000, i64 32, i32 0, i32 0, metadata !881, metadata !1902, i32 0, i32 0} ; [ DW_TAG_array_type ]
!1902 = metadata !{metadata !1903}
!1903 = metadata !{i32 786465, i64 0, i64 999}    ; [ DW_TAG_subrange_type ]
!1904 = metadata !{i32 150, i32 9, metadata !1870, null}
!1905 = metadata !{i32 154, i32 20, metadata !1906, null}
!1906 = metadata !{i32 786443, metadata !1907, i32 154, i32 6, metadata !1871, i32 1} ; [ DW_TAG_lexical_block ]
!1907 = metadata !{i32 786443, metadata !1870, i32 152, i32 1, metadata !1871, i32 0} ; [ DW_TAG_lexical_block ]
!1908 = metadata !{i32 154, i32 31, metadata !1906, null}
!1909 = metadata !{i32 786688, metadata !1906, metadata !"co", metadata !1871, i32 154, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1910 = metadata !{i32 202, i32 20, metadata !1911, null}
!1911 = metadata !{i32 786443, metadata !1907, i32 202, i32 6, metadata !1871, i32 9} ; [ DW_TAG_lexical_block ]
!1912 = metadata !{i32 156, i32 14, metadata !1913, null}
!1913 = metadata !{i32 786443, metadata !1914, i32 155, i32 40, metadata !1871, i32 4} ; [ DW_TAG_lexical_block ]
!1914 = metadata !{i32 786443, metadata !1915, i32 155, i32 10, metadata !1871, i32 3} ; [ DW_TAG_lexical_block ]
!1915 = metadata !{i32 786443, metadata !1906, i32 154, i32 37, metadata !1871, i32 2} ; [ DW_TAG_lexical_block ]
!1916 = metadata !{i32 157, i32 14, metadata !1913, null}
!1917 = metadata !{i32 158, i32 14, metadata !1913, null}
!1918 = metadata !{i32 159, i32 14, metadata !1913, null}
!1919 = metadata !{i32 160, i32 14, metadata !1913, null}
!1920 = metadata !{i32 161, i32 14, metadata !1913, null}
!1921 = metadata !{i32 162, i32 14, metadata !1913, null}
!1922 = metadata !{i32 163, i32 14, metadata !1913, null}
!1923 = metadata !{i32 164, i32 14, metadata !1913, null}
!1924 = metadata !{i32 167, i32 14, metadata !1925, null}
!1925 = metadata !{i32 786443, metadata !1926, i32 166, i32 42, metadata !1871, i32 6} ; [ DW_TAG_lexical_block ]
!1926 = metadata !{i32 786443, metadata !1913, i32 166, i32 14, metadata !1871, i32 5} ; [ DW_TAG_lexical_block ]
!1927 = metadata !{i32 189, i32 18, metadata !1928, null}
!1928 = metadata !{i32 786443, metadata !1929, i32 188, i32 40, metadata !1871, i32 8} ; [ DW_TAG_lexical_block ]
!1929 = metadata !{i32 786443, metadata !1913, i32 188, i32 14, metadata !1871, i32 7} ; [ DW_TAG_lexical_block ]
!1930 = metadata !{i32 155, i32 24, metadata !1914, null}
!1931 = metadata !{i32 155, i32 34, metadata !1914, null}
!1932 = metadata !{i32 786688, metadata !1914, metadata !"ci", metadata !1871, i32 155, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1933 = metadata !{i32 166, i32 27, metadata !1926, null}
!1934 = metadata !{i32 166, i32 36, metadata !1926, null}
!1935 = metadata !{i32 188, i32 27, metadata !1929, null}
!1936 = metadata !{i32 185, i32 14, metadata !1925, null}
!1937 = metadata !{i32 174, i32 14, metadata !1925, null}
!1938 = metadata !{i32 173, i32 14, metadata !1925, null}
!1939 = metadata !{i32 176, i32 14, metadata !1925, null}
!1940 = metadata !{i32 175, i32 14, metadata !1925, null}
!1941 = metadata !{i32 181, i32 14, metadata !1925, null}
!1942 = metadata !{i32 182, i32 14, metadata !1925, null}
!1943 = metadata !{i32 178, i32 14, metadata !1925, null}
!1944 = metadata !{i32 177, i32 14, metadata !1925, null}
!1945 = metadata !{i32 171, i32 14, metadata !1925, null}
!1946 = metadata !{i32 172, i32 14, metadata !1925, null}
!1947 = metadata !{i32 168, i32 14, metadata !1925, null}
!1948 = metadata !{i32 170, i32 14, metadata !1925, null}
!1949 = metadata !{i32 180, i32 14, metadata !1925, null}
!1950 = metadata !{i32 184, i32 14, metadata !1925, null}
!1951 = metadata !{i32 183, i32 14, metadata !1925, null}
!1952 = metadata !{i32 169, i32 14, metadata !1925, null}
!1953 = metadata !{i32 179, i32 14, metadata !1925, null}
!1954 = metadata !{i32 786688, metadata !1926, metadata !"i", metadata !1871, i32 166, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1955 = metadata !{i32 188, i32 36, metadata !1929, null}
!1956 = metadata !{i32 196, i32 18, metadata !1928, null}
!1957 = metadata !{i32 192, i32 18, metadata !1928, null}
!1958 = metadata !{i32 190, i32 18, metadata !1928, null}
!1959 = metadata !{i32 194, i32 18, metadata !1928, null}
!1960 = metadata !{i32 191, i32 18, metadata !1928, null}
!1961 = metadata !{i32 197, i32 18, metadata !1928, null}
!1962 = metadata !{i32 193, i32 18, metadata !1928, null}
!1963 = metadata !{i32 195, i32 18, metadata !1928, null}
!1964 = metadata !{i32 786688, metadata !1929, metadata !"i", metadata !1871, i32 188, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1965 = metadata !{i32 202, i32 27, metadata !1911, null}
!1966 = metadata !{i32 786688, metadata !1911, metadata !"co", metadata !1871, i32 202, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1967 = metadata !{i32 238, i32 19, metadata !1968, null}
!1968 = metadata !{i32 786443, metadata !1907, i32 238, i32 6, metadata !1871, i32 19} ; [ DW_TAG_lexical_block ]
!1969 = metadata !{i32 206, i32 18, metadata !1970, null}
!1970 = metadata !{i32 786443, metadata !1971, i32 204, i32 38, metadata !1871, i32 14} ; [ DW_TAG_lexical_block ]
!1971 = metadata !{i32 786443, metadata !1972, i32 204, i32 14, metadata !1871, i32 13} ; [ DW_TAG_lexical_block ]
!1972 = metadata !{i32 786443, metadata !1973, i32 203, i32 35, metadata !1871, i32 12} ; [ DW_TAG_lexical_block ]
!1973 = metadata !{i32 786443, metadata !1974, i32 203, i32 10, metadata !1871, i32 11} ; [ DW_TAG_lexical_block ]
!1974 = metadata !{i32 786443, metadata !1911, i32 202, i32 32, metadata !1871, i32 10} ; [ DW_TAG_lexical_block ]
!1975 = metadata !{i32 207, i32 18, metadata !1970, null}
!1976 = metadata !{i32 208, i32 18, metadata !1970, null}
!1977 = metadata !{i32 209, i32 18, metadata !1970, null}
!1978 = metadata !{i32 210, i32 18, metadata !1970, null}
!1979 = metadata !{i32 203, i32 23, metadata !1973, null}
!1980 = metadata !{i32 203, i32 31, metadata !1973, null}
!1981 = metadata !{i32 786688, metadata !1973, metadata !"w", metadata !1871, i32 203, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1982 = metadata !{i32 204, i32 27, metadata !1971, null}
!1983 = metadata !{i32 204, i32 34, metadata !1971, null}
!1984 = metadata !{i32 786688, metadata !1971, metadata !"h", metadata !1871, i32 204, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!1985 = metadata !{i32 212, i32 31, metadata !1986, null}
!1986 = metadata !{i32 786443, metadata !1970, i32 212, i32 18, metadata !1871, i32 15} ; [ DW_TAG_lexical_block ]
!1987 = metadata !{i32 212, i32 40, metadata !1986, null}
!1988 = metadata !{i32 225, i32 31, metadata !1989, null}
!1989 = metadata !{i32 786443, metadata !1970, i32 225, i32 18, metadata !1871, i32 17} ; [ DW_TAG_lexical_block ]
!1990 = metadata !{i32 213, i32 22, metadata !1991, null}
!1991 = metadata !{i32 786443, metadata !1986, i32 212, i32 44, metadata !1871, i32 16} ; [ DW_TAG_lexical_block ]
!1992 = metadata !{i32 222, i32 22, metadata !1991, null}
!1993 = metadata !{i32 216, i32 22, metadata !1991, null}
!1994 = metadata !{i32 218, i32 22, metadata !1991, null}
!1995 = metadata !{i32 217, i32 22, metadata !1991, null}
!1996 = metadata !{i32 220, i32 22, metadata !1991, null}
!1997 = metadata !{i32 214, i32 22, metadata !1991, null}
!1998 = metadata !{i32 215, i32 22, metadata !1991, null}
!1999 = metadata !{i32 221, i32 22, metadata !1991, null}
!2000 = metadata !{i32 219, i32 22, metadata !1991, null}
!2001 = metadata !{i32 786688, metadata !1986, metadata !"i", metadata !1871, i32 212, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!2002 = metadata !{i32 225, i32 40, metadata !1989, null}
!2003 = metadata !{i32 226, i32 22, metadata !2004, null}
!2004 = metadata !{i32 786443, metadata !1989, i32 225, i32 44, metadata !1871, i32 18} ; [ DW_TAG_lexical_block ]
!2005 = metadata !{i32 227, i32 22, metadata !2004, null}
!2006 = metadata !{i32 228, i32 22, metadata !2004, null}
!2007 = metadata !{i32 230, i32 22, metadata !2004, null}
!2008 = metadata !{i32 229, i32 22, metadata !2004, null}
!2009 = metadata !{i32 786688, metadata !1989, metadata !"i", metadata !1871, i32 225, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!2010 = metadata !{i32 238, i32 27, metadata !1968, null}
!2011 = metadata !{i32 786688, metadata !1968, metadata !"i", metadata !1871, i32 238, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!2012 = metadata !{i32 303, i32 19, metadata !2013, null}
!2013 = metadata !{i32 786443, metadata !1907, i32 303, i32 6, metadata !1871, i32 25} ; [ DW_TAG_lexical_block ]
!2014 = metadata !{i32 239, i32 10, metadata !2015, null}
!2015 = metadata !{i32 786443, metadata !1968, i32 238, i32 31, metadata !1871, i32 20} ; [ DW_TAG_lexical_block ]
!2016 = metadata !{i32 240, i32 10, metadata !2015, null}
!2017 = metadata !{i32 241, i32 10, metadata !2015, null}
!2018 = metadata !{i32 242, i32 10, metadata !2015, null}
!2019 = metadata !{i32 243, i32 10, metadata !2015, null}
!2020 = metadata !{i32 244, i32 10, metadata !2015, null}
!2021 = metadata !{i32 245, i32 10, metadata !2015, null}
!2022 = metadata !{i32 246, i32 10, metadata !2015, null}
!2023 = metadata !{i32 247, i32 10, metadata !2015, null}
!2024 = metadata !{i32 248, i32 10, metadata !2015, null}
!2025 = metadata !{i32 249, i32 10, metadata !2015, null}
!2026 = metadata !{i32 250, i32 10, metadata !2015, null}
!2027 = metadata !{i32 251, i32 10, metadata !2015, null}
!2028 = metadata !{i32 252, i32 10, metadata !2015, null}
!2029 = metadata !{i32 253, i32 10, metadata !2015, null}
!2030 = metadata !{i32 254, i32 23, metadata !2031, null}
!2031 = metadata !{i32 786443, metadata !2015, i32 254, i32 10, metadata !1871, i32 21} ; [ DW_TAG_lexical_block ]
!2032 = metadata !{i32 254, i32 30, metadata !2031, null}
!2033 = metadata !{i32 286, i32 23, metadata !2034, null}
!2034 = metadata !{i32 786443, metadata !2015, i32 286, i32 10, metadata !1871, i32 23} ; [ DW_TAG_lexical_block ]
!2035 = metadata !{i32 255, i32 14, metadata !2036, null}
!2036 = metadata !{i32 786443, metadata !2031, i32 254, i32 34, metadata !1871, i32 22} ; [ DW_TAG_lexical_block ]
!2037 = metadata !{i32 256, i32 14, metadata !2036, null}
!2038 = metadata !{i32 257, i32 14, metadata !2036, null}
!2039 = metadata !{i32 258, i32 14, metadata !2036, null}
!2040 = metadata !{i32 259, i32 14, metadata !2036, null}
!2041 = metadata !{i32 260, i32 14, metadata !2036, null}
!2042 = metadata !{i32 261, i32 14, metadata !2036, null}
!2043 = metadata !{i32 262, i32 14, metadata !2036, null}
!2044 = metadata !{i32 263, i32 14, metadata !2036, null}
!2045 = metadata !{i32 264, i32 14, metadata !2036, null}
!2046 = metadata !{i32 265, i32 14, metadata !2036, null}
!2047 = metadata !{i32 266, i32 14, metadata !2036, null}
!2048 = metadata !{i32 267, i32 14, metadata !2036, null}
!2049 = metadata !{i32 268, i32 14, metadata !2036, null}
!2050 = metadata !{i32 269, i32 14, metadata !2036, null}
!2051 = metadata !{i32 270, i32 14, metadata !2036, null}
!2052 = metadata !{i32 271, i32 14, metadata !2036, null}
!2053 = metadata !{i32 272, i32 14, metadata !2036, null}
!2054 = metadata !{i32 273, i32 14, metadata !2036, null}
!2055 = metadata !{i32 274, i32 14, metadata !2036, null}
!2056 = metadata !{i32 275, i32 14, metadata !2036, null}
!2057 = metadata !{i32 276, i32 14, metadata !2036, null}
!2058 = metadata !{i32 277, i32 14, metadata !2036, null}
!2059 = metadata !{i32 278, i32 14, metadata !2036, null}
!2060 = metadata !{i32 279, i32 14, metadata !2036, null}
!2061 = metadata !{i32 280, i32 14, metadata !2036, null}
!2062 = metadata !{i32 281, i32 14, metadata !2036, null}
!2063 = metadata !{i32 282, i32 14, metadata !2036, null}
!2064 = metadata !{i32 283, i32 14, metadata !2036, null}
!2065 = metadata !{i32 786688, metadata !2031, metadata !"k", metadata !1871, i32 254, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!2066 = metadata !{i32 286, i32 30, metadata !2034, null}
!2067 = metadata !{i32 287, i32 10, metadata !2068, null}
!2068 = metadata !{i32 786443, metadata !2034, i32 286, i32 34, metadata !1871, i32 24} ; [ DW_TAG_lexical_block ]
!2069 = metadata !{i32 288, i32 10, metadata !2068, null}
!2070 = metadata !{i32 289, i32 10, metadata !2068, null}
!2071 = metadata !{i32 290, i32 10, metadata !2068, null}
!2072 = metadata !{i32 291, i32 10, metadata !2068, null}
!2073 = metadata !{i32 292, i32 10, metadata !2068, null}
!2074 = metadata !{i32 293, i32 10, metadata !2068, null}
!2075 = metadata !{i32 294, i32 10, metadata !2068, null}
!2076 = metadata !{i32 295, i32 10, metadata !2068, null}
!2077 = metadata !{i32 296, i32 10, metadata !2068, null}
!2078 = metadata !{i32 297, i32 10, metadata !2068, null}
!2079 = metadata !{i32 298, i32 10, metadata !2068, null}
!2080 = metadata !{i32 299, i32 10, metadata !2068, null}
!2081 = metadata !{i32 300, i32 10, metadata !2068, null}
!2082 = metadata !{i32 786688, metadata !2034, metadata !"k", metadata !1871, i32 286, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!2083 = metadata !{i32 303, i32 31, metadata !2013, null}
!2084 = metadata !{i32 306, i32 19, metadata !2085, null}
!2085 = metadata !{i32 786443, metadata !1907, i32 306, i32 6, metadata !1871, i32 27} ; [ DW_TAG_lexical_block ]
!2086 = metadata !{i32 304, i32 10, metadata !2087, null}
!2087 = metadata !{i32 786443, metadata !2013, i32 303, i32 35, metadata !1871, i32 26} ; [ DW_TAG_lexical_block ]
!2088 = metadata !{i32 786688, metadata !2013, metadata !"i", metadata !1871, i32 303, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!2089 = metadata !{i32 306, i32 25, metadata !2085, null}
!2090 = metadata !{i32 307, i32 10, metadata !2091, null}
!2091 = metadata !{i32 786443, metadata !2085, i32 306, i32 29, metadata !1871, i32 28} ; [ DW_TAG_lexical_block ]
!2092 = metadata !{i32 786688, metadata !2085, metadata !"i", metadata !1871, i32 306, metadata !917, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!2093 = metadata !{i32 313, i32 5, metadata !1907, null}
!2094 = metadata !{i32 315, i32 5, metadata !1907, null}
!2095 = metadata !{i32 328, i32 5, metadata !1907, null}
!2096 = metadata !{i32 338, i32 5, metadata !1907, null}
!2097 = metadata !{i32 348, i32 5, metadata !1907, null}
!2098 = metadata !{i32 358, i32 5, metadata !1907, null}
!2099 = metadata !{i32 371, i32 5, metadata !1907, null}
!2100 = metadata !{i32 380, i32 5, metadata !1907, null}
!2101 = metadata !{i32 389, i32 5, metadata !1907, null}
!2102 = metadata !{i32 398, i32 5, metadata !1907, null}
!2103 = metadata !{i32 407, i32 5, metadata !1907, null}
!2104 = metadata !{i32 416, i32 5, metadata !1907, null}
!2105 = metadata !{i32 425, i32 5, metadata !1907, null}
!2106 = metadata !{i32 434, i32 5, metadata !1907, null}
!2107 = metadata !{i32 443, i32 5, metadata !1907, null}
!2108 = metadata !{i32 456, i32 5, metadata !1907, null}
!2109 = metadata !{i32 465, i32 5, metadata !1907, null}
!2110 = metadata !{i32 474, i32 5, metadata !1907, null}
!2111 = metadata !{i32 485, i32 5, metadata !1907, null}
!2112 = metadata !{i32 491, i32 5, metadata !1907, null}
!2113 = metadata !{i32 786689, metadata !2114, metadata !"weight", null, i32 582, metadata !1891, i32 0, metadata !2117} ; [ DW_TAG_arg_variable ]
!2114 = metadata !{i32 786478, i32 0, metadata !876, metadata !"fc", metadata !"fc", metadata !"_Z2fcPfPA512_fS_S_", metadata !876, i32 581, metadata !2115, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !895, i32 584} ; [ DW_TAG_subprogram ]
!2115 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !2116, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!2116 = metadata !{null, metadata !890, metadata !1874, metadata !890, metadata !890}
!2117 = metadata !{i32 493, i32 5, metadata !1907, null}
!2118 = metadata !{i32 582, i32 8, metadata !2114, metadata !2117}
!2119 = metadata !{i32 786689, metadata !2114, metadata !"output", null, i32 584, metadata !1901, i32 0, metadata !2117} ; [ DW_TAG_arg_variable ]
!2120 = metadata !{i32 584, i32 8, metadata !2114, metadata !2117}
!2121 = metadata !{i32 586, i32 16, metadata !2122, metadata !2117}
!2122 = metadata !{i32 786443, metadata !2123, i32 586, i32 2, metadata !876, i32 195} ; [ DW_TAG_lexical_block ]
!2123 = metadata !{i32 786443, metadata !2114, i32 584, i32 19, metadata !876, i32 194} ; [ DW_TAG_lexical_block ]
!2124 = metadata !{i32 586, i32 23, metadata !2122, metadata !2117}
!2125 = metadata !{i32 515, i32 1, metadata !1907, null}
!2126 = metadata !{i32 589, i32 4, metadata !2127, metadata !2117}
!2127 = metadata !{i32 786443, metadata !2128, i32 588, i32 30, metadata !876, i32 198} ; [ DW_TAG_lexical_block ]
!2128 = metadata !{i32 786443, metadata !2129, i32 588, i32 3, metadata !876, i32 197} ; [ DW_TAG_lexical_block ]
!2129 = metadata !{i32 786443, metadata !2122, i32 586, i32 28, metadata !876, i32 196} ; [ DW_TAG_lexical_block ]
!2130 = metadata !{i32 588, i32 17, metadata !2128, metadata !2117}
!2131 = metadata !{i32 588, i32 25, metadata !2128, metadata !2117}
!2132 = metadata !{i32 786688, metadata !2129, metadata !"sum", metadata !876, i32 587, metadata !881, i32 0, metadata !2117} ; [ DW_TAG_auto_variable ]
!2133 = metadata !{i32 786688, metadata !2128, metadata !"ci", metadata !876, i32 588, metadata !917, i32 0, metadata !2117} ; [ DW_TAG_auto_variable ]
!2134 = metadata !{i32 592, i32 32, metadata !2129, metadata !2117}
!2135 = metadata !{i32 786688, metadata !2129, metadata !"result", metadata !876, i32 592, metadata !881, i32 0, metadata !2117} ; [ DW_TAG_auto_variable ]
!2136 = metadata !{i32 593, i32 3, metadata !2129, metadata !2117}
!2137 = metadata !{i32 786688, metadata !2122, metadata !"co", metadata !876, i32 586, metadata !917, i32 0, metadata !2117} ; [ DW_TAG_auto_variable ]
!2138 = metadata !{i32 786688, metadata !2139, metadata !"conv2r_ourput[0]", null, i32 488, metadata !909, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!2139 = metadata !{i32 786443, metadata !2140, i32 485, i32 29, metadata !876, i32 170} ; [ DW_TAG_lexical_block ]
!2140 = metadata !{i32 786478, i32 0, metadata !876, metadata !"DownsampleUnit2", metadata !"DownsampleUnit2", metadata !"_Z15DownsampleUnit2PA96_A8_A8_fPA96_A1_A1_fPfPA1_A3_A3_fS7_S6_S7_SB_S7_S6_S7_PA192_A4_A4_f", metadata !876, i32 474, metadata !2141, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !895, i32 485} ; [ DW_TAG_subprogram ]
!2141 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !2142, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!2142 = metadata !{null, metadata !879, metadata !1196, metadata !890, metadata !885, metadata !890, metadata !1196, metadata !890, metadata !885, metadata !890, metadata !1196, metadata !890, metadata !1435}
!2143 = metadata !{i32 488, i32 8, metadata !2139, null}
!2144 = metadata !{i32 786688, metadata !2139, metadata !"conv3r_ourput[0]", null, i32 489, metadata !909, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!2145 = metadata !{i32 489, i32 8, metadata !2139, null}
!2146 = metadata !{i32 786688, metadata !2139, metadata !"conv1l_output[0]", null, i32 490, metadata !909, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!2147 = metadata !{i32 490, i32 8, metadata !2139, null}
!2148 = metadata !{i32 786688, metadata !2139, metadata !"conv2l_output[0]", null, i32 491, metadata !909, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!2149 = metadata !{i32 491, i32 8, metadata !2139, null}
!2150 = metadata !{i32 786689, metadata !2140, metadata !"conv1r_weight", null, i32 475, metadata !1199, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2151 = metadata !{i32 475, i32 8, metadata !2140, null}
!2152 = metadata !{i32 786689, metadata !2140, metadata !"conv1r_bias", null, i32 476, metadata !905, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2153 = metadata !{i32 476, i32 8, metadata !2140, null}
!2154 = metadata !{i32 786689, metadata !2140, metadata !"conv2r_weight", null, i32 477, metadata !901, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2155 = metadata !{i32 477, i32 8, metadata !2140, null}
!2156 = metadata !{i32 786689, metadata !2140, metadata !"conv2r_bias", null, i32 478, metadata !905, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2157 = metadata !{i32 478, i32 8, metadata !2140, null}
!2158 = metadata !{i32 786689, metadata !2140, metadata !"conv3r_weight", null, i32 479, metadata !1199, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2159 = metadata !{i32 479, i32 8, metadata !2140, null}
!2160 = metadata !{i32 786689, metadata !2140, metadata !"conv3r_bias", null, i32 480, metadata !905, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2161 = metadata !{i32 480, i32 8, metadata !2140, null}
!2162 = metadata !{i32 786689, metadata !2140, metadata !"conv1l_weight", null, i32 481, metadata !901, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2163 = metadata !{i32 481, i32 8, metadata !2140, null}
!2164 = metadata !{i32 786689, metadata !2140, metadata !"conv1l_bias", null, i32 482, metadata !905, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2165 = metadata !{i32 482, i32 8, metadata !2140, null}
!2166 = metadata !{i32 786689, metadata !2140, metadata !"conv2l_weight", null, i32 483, metadata !1199, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2167 = metadata !{i32 483, i32 8, metadata !2140, null}
!2168 = metadata !{i32 786689, metadata !2140, metadata !"conv2l_bias", null, i32 484, metadata !905, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2169 = metadata !{i32 484, i32 8, metadata !2140, null}
!2170 = metadata !{i32 786688, metadata !2139, metadata !"conv1r_output", metadata !876, i32 487, metadata !897, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!2171 = metadata !{i32 487, i32 8, metadata !2139, null}
!2172 = metadata !{i32 487, i32 38, metadata !2139, null}
!2173 = metadata !{i32 488, i32 38, metadata !2139, null}
!2174 = metadata !{i32 489, i32 38, metadata !2139, null}
!2175 = metadata !{i32 490, i32 38, metadata !2139, null}
!2176 = metadata !{i32 491, i32 38, metadata !2139, null}
!2177 = metadata !{i32 495, i32 2, metadata !2139, null}
!2178 = metadata !{i32 497, i32 2, metadata !2139, null}
!2179 = metadata !{i32 499, i32 2, metadata !2139, null}
!2180 = metadata !{i32 501, i32 2, metadata !2139, null}
!2181 = metadata !{i32 503, i32 2, metadata !2139, null}
!2182 = metadata !{i32 506, i32 2, metadata !2139, null}
!2183 = metadata !{i32 509, i32 1, metadata !2139, null}
!2184 = metadata !{i32 786688, metadata !2185, metadata !"conv2r_ourput[0]", null, i32 318, metadata !953, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!2185 = metadata !{i32 786443, metadata !2186, i32 315, i32 28, metadata !876, i32 115} ; [ DW_TAG_lexical_block ]
!2186 = metadata !{i32 786478, i32 0, metadata !876, metadata !"DownsampleUnit1", metadata !"DownsampleUnit1", metadata !"_Z15DownsampleUnit1PA48_A16_A16_fPA48_A1_A1_fPfPA1_A3_A3_fS7_S6_S7_SB_S7_S6_S7_PA96_A8_A8_f", metadata !876, i32 304, metadata !2187, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !895, i32 315} ; [ DW_TAG_subprogram ]
!2187 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !2188, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!2188 = metadata !{null, metadata !1105, metadata !1237, metadata !890, metadata !885, metadata !890, metadata !1237, metadata !890, metadata !885, metadata !890, metadata !1237, metadata !890, metadata !879}
!2189 = metadata !{i32 318, i32 8, metadata !2185, null}
!2190 = metadata !{i32 786688, metadata !2185, metadata !"conv3r_ourput[0]", null, i32 319, metadata !953, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!2191 = metadata !{i32 319, i32 8, metadata !2185, null}
!2192 = metadata !{i32 786688, metadata !2185, metadata !"conv1l_output[0]", null, i32 320, metadata !953, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!2193 = metadata !{i32 320, i32 8, metadata !2185, null}
!2194 = metadata !{i32 786688, metadata !2185, metadata !"conv2l_output[0]", null, i32 321, metadata !953, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!2195 = metadata !{i32 321, i32 8, metadata !2185, null}
!2196 = metadata !{i32 786689, metadata !2186, metadata !"conv1r_weight", null, i32 305, metadata !1242, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2197 = metadata !{i32 305, i32 8, metadata !2186, null}
!2198 = metadata !{i32 786689, metadata !2186, metadata !"conv1r_bias", null, i32 306, metadata !961, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2199 = metadata !{i32 306, i32 8, metadata !2186, null}
!2200 = metadata !{i32 786689, metadata !2186, metadata !"conv2r_weight", null, i32 307, metadata !957, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2201 = metadata !{i32 307, i32 8, metadata !2186, null}
!2202 = metadata !{i32 786689, metadata !2186, metadata !"conv2r_bias", null, i32 308, metadata !961, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2203 = metadata !{i32 308, i32 8, metadata !2186, null}
!2204 = metadata !{i32 786689, metadata !2186, metadata !"conv3r_weight", null, i32 309, metadata !1242, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2205 = metadata !{i32 309, i32 8, metadata !2186, null}
!2206 = metadata !{i32 786689, metadata !2186, metadata !"conv3r_bias", null, i32 310, metadata !961, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2207 = metadata !{i32 310, i32 8, metadata !2186, null}
!2208 = metadata !{i32 786689, metadata !2186, metadata !"conv1l_weight", null, i32 311, metadata !957, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2209 = metadata !{i32 311, i32 8, metadata !2186, null}
!2210 = metadata !{i32 786689, metadata !2186, metadata !"conv1l_bias", null, i32 312, metadata !961, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2211 = metadata !{i32 312, i32 8, metadata !2186, null}
!2212 = metadata !{i32 786689, metadata !2186, metadata !"conv2l_weight", null, i32 313, metadata !1242, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2213 = metadata !{i32 313, i32 8, metadata !2186, null}
!2214 = metadata !{i32 786689, metadata !2186, metadata !"conv2l_bias", null, i32 314, metadata !961, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2215 = metadata !{i32 314, i32 8, metadata !2186, null}
!2216 = metadata !{i32 786688, metadata !2185, metadata !"conv1r_output", metadata !876, i32 317, metadata !1108, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!2217 = metadata !{i32 317, i32 8, metadata !2185, null}
!2218 = metadata !{i32 317, i32 40, metadata !2185, null}
!2219 = metadata !{i32 318, i32 38, metadata !2185, null}
!2220 = metadata !{i32 319, i32 38, metadata !2185, null}
!2221 = metadata !{i32 320, i32 38, metadata !2185, null}
!2222 = metadata !{i32 321, i32 38, metadata !2185, null}
!2223 = metadata !{i32 325, i32 2, metadata !2185, null}
!2224 = metadata !{i32 327, i32 2, metadata !2185, null}
!2225 = metadata !{i32 329, i32 2, metadata !2185, null}
!2226 = metadata !{i32 331, i32 2, metadata !2185, null}
!2227 = metadata !{i32 333, i32 2, metadata !2185, null}
!2228 = metadata !{i32 336, i32 2, metadata !2185, null}
!2229 = metadata !{i32 339, i32 1, metadata !2185, null}
!2230 = metadata !{i32 786688, metadata !2231, metadata !"conv2r_ourput[0]", null, i32 147, metadata !1066, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!2231 = metadata !{i32 786443, metadata !2232, i32 144, i32 30, metadata !876, i32 60} ; [ DW_TAG_lexical_block ]
!2232 = metadata !{i32 786478, i32 0, metadata !876, metadata !"DownsampleUnit0", metadata !"DownsampleUnit0", metadata !"_Z15DownsampleUnit0PA24_A32_A32_fPA24_A1_A1_fPfPA1_A3_A3_fS7_S6_S7_SB_S7_S6_S7_PA48_A16_A16_f", metadata !876, i32 133, metadata !2233, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !895, i32 144} ; [ DW_TAG_subprogram ]
!2233 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !2234, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!2234 = metadata !{null, metadata !1045, metadata !1318, metadata !890, metadata !885, metadata !890, metadata !1318, metadata !890, metadata !885, metadata !890, metadata !1318, metadata !890, metadata !1105}
!2235 = metadata !{i32 147, i32 8, metadata !2231, null}
!2236 = metadata !{i32 786688, metadata !2231, metadata !"conv3r_ourput[0]", null, i32 148, metadata !1066, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!2237 = metadata !{i32 148, i32 8, metadata !2231, null}
!2238 = metadata !{i32 786688, metadata !2231, metadata !"conv1l_output[0]", null, i32 149, metadata !1066, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!2239 = metadata !{i32 149, i32 8, metadata !2231, null}
!2240 = metadata !{i32 786688, metadata !2231, metadata !"conv2l_output[0]", null, i32 150, metadata !1066, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!2241 = metadata !{i32 150, i32 8, metadata !2231, null}
!2242 = metadata !{i32 786689, metadata !2232, metadata !"input", null, i32 133, metadata !1054, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2243 = metadata !{i32 133, i32 28, metadata !2232, null}
!2244 = metadata !{i32 786689, metadata !2232, metadata !"conv1r_weight", null, i32 134, metadata !1323, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2245 = metadata !{i32 134, i32 8, metadata !2232, null}
!2246 = metadata !{i32 786689, metadata !2232, metadata !"conv1r_bias", null, i32 135, metadata !1062, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2247 = metadata !{i32 135, i32 8, metadata !2232, null}
!2248 = metadata !{i32 786689, metadata !2232, metadata !"conv2r_weight", null, i32 136, metadata !1058, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2249 = metadata !{i32 136, i32 8, metadata !2232, null}
!2250 = metadata !{i32 786689, metadata !2232, metadata !"conv2r_bias", null, i32 137, metadata !1062, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2251 = metadata !{i32 137, i32 8, metadata !2232, null}
!2252 = metadata !{i32 786689, metadata !2232, metadata !"conv3r_weight", null, i32 138, metadata !1323, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2253 = metadata !{i32 138, i32 8, metadata !2232, null}
!2254 = metadata !{i32 786689, metadata !2232, metadata !"conv3r_bias", null, i32 139, metadata !1062, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2255 = metadata !{i32 139, i32 8, metadata !2232, null}
!2256 = metadata !{i32 786689, metadata !2232, metadata !"conv1l_weight", null, i32 140, metadata !1058, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2257 = metadata !{i32 140, i32 8, metadata !2232, null}
!2258 = metadata !{i32 786689, metadata !2232, metadata !"conv1l_bias", null, i32 141, metadata !1062, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2259 = metadata !{i32 141, i32 8, metadata !2232, null}
!2260 = metadata !{i32 786689, metadata !2232, metadata !"conv2l_weight", null, i32 142, metadata !1323, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2261 = metadata !{i32 142, i32 8, metadata !2232, null}
!2262 = metadata !{i32 786689, metadata !2232, metadata !"conv2l_bias", null, i32 143, metadata !1062, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!2263 = metadata !{i32 143, i32 8, metadata !2232, null}
!2264 = metadata !{i32 786688, metadata !2231, metadata !"conv1r_output", metadata !876, i32 146, metadata !1054, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!2265 = metadata !{i32 146, i32 8, metadata !2231, null}
!2266 = metadata !{i32 146, i32 40, metadata !2231, null}
!2267 = metadata !{i32 147, i32 40, metadata !2231, null}
!2268 = metadata !{i32 148, i32 40, metadata !2231, null}
!2269 = metadata !{i32 149, i32 40, metadata !2231, null}
!2270 = metadata !{i32 150, i32 40, metadata !2231, null}
!2271 = metadata !{i32 154, i32 2, metadata !2231, null}
!2272 = metadata !{i32 156, i32 2, metadata !2231, null}
!2273 = metadata !{i32 158, i32 2, metadata !2231, null}
!2274 = metadata !{i32 160, i32 2, metadata !2231, null}
!2275 = metadata !{i32 162, i32 2, metadata !2231, null}
!2276 = metadata !{i32 165, i32 2, metadata !2231, null}
!2277 = metadata !{i32 166, i32 1, metadata !2231, null}

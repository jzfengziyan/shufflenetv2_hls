; ModuleID = 'F:/ECE527/MP4/Tutorial_Files/accelerator_hls/vector_multiplier/.autopilot/db/a.g.bc'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-f80:128:128-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32-S32"
target triple = "i686-pc-mingw32"

@.str = private unnamed_addr constant [6 x i8] c"m_axi\00", align 1 ; [#uses=1 type=[6 x i8]*]
@.str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=1 type=[1 x i8]*]
@.str2 = private unnamed_addr constant [7 x i8] c"DATA_A\00", align 1 ; [#uses=1 type=[7 x i8]*]
@.str3 = private unnamed_addr constant [6 x i8] c"slave\00", align 1 ; [#uses=1 type=[6 x i8]*]
@.str4 = private unnamed_addr constant [7 x i8] c"DATA_B\00", align 1 ; [#uses=1 type=[7 x i8]*]
@.str5 = private unnamed_addr constant [7 x i8] c"DATA_C\00", align 1 ; [#uses=1 type=[7 x i8]*]
@.str6 = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1 ; [#uses=1 type=[10 x i8]*]
@.str7 = private unnamed_addr constant [4 x i8] c"CTL\00", align 1 ; [#uses=1 type=[4 x i8]*]
@.str8 = private unnamed_addr constant [12 x i8] c"hls_label_0\00", align 1 ; [#uses=1 type=[12 x i8]*]

; [#uses=0]
define i32 @_Z17vector_multiplierPViS0_S0_(i32* %a, i32* %b, i32* %c) nounwind {
  %1 = alloca i32*, align 4                       ; [#uses=4 type=i32**]
  %2 = alloca i32*, align 4                       ; [#uses=4 type=i32**]
  %3 = alloca i32*, align 4                       ; [#uses=4 type=i32**]
  %i = alloca i32, align 4                        ; [#uses=7 type=i32*]
  store i32* %a, i32** %1, align 4
  call void @llvm.dbg.declare(metadata !{i32** %1}, metadata !21), !dbg !22 ; [debug line = 1:36] [debug variable = a]
  store i32* %b, i32** %2, align 4
  call void @llvm.dbg.declare(metadata !{i32** %2}, metadata !23), !dbg !24 ; [debug line = 1:56] [debug variable = b]
  store i32* %c, i32** %3, align 4
  call void @llvm.dbg.declare(metadata !{i32** %3}, metadata !25), !dbg !26 ; [debug line = 1:76] [debug variable = c]
  %4 = load i32** %1, align 4, !dbg !27           ; [#uses=1 type=i32*] [debug line = 2:2]
  call void (...)* @_ssdm_SpecArrayDimSize(i32* %4, i32 64) nounwind, !dbg !27 ; [debug line = 2:2]
  %5 = load i32** %2, align 4, !dbg !29           ; [#uses=1 type=i32*] [debug line = 2:31]
  call void (...)* @_ssdm_SpecArrayDimSize(i32* %5, i32 64) nounwind, !dbg !29 ; [debug line = 2:31]
  %6 = load i32** %3, align 4, !dbg !30           ; [#uses=1 type=i32*] [debug line = 2:60]
  call void (...)* @_ssdm_SpecArrayDimSize(i32* %6, i32 64) nounwind, !dbg !30 ; [debug line = 2:60]
  %7 = load i32** %1, align 4, !dbg !31           ; [#uses=1 type=i32*] [debug line = 3:1]
  call void (...)* @_ssdm_op_SpecInterface(i32* %7, i8* getelementptr inbounds ([6 x i8]* @.str, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 64, i8* getelementptr inbounds ([7 x i8]* @.str2, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8]* @.str3, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 16, i32 16, i32 16, i32 16, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !31 ; [debug line = 3:1]
  %8 = load i32** %2, align 4, !dbg !32           ; [#uses=1 type=i32*] [debug line = 4:1]
  call void (...)* @_ssdm_op_SpecInterface(i32* %8, i8* getelementptr inbounds ([6 x i8]* @.str, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 64, i8* getelementptr inbounds ([7 x i8]* @.str4, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8]* @.str3, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 16, i32 16, i32 16, i32 16, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !32 ; [debug line = 4:1]
  %9 = load i32** %3, align 4, !dbg !33           ; [#uses=1 type=i32*] [debug line = 5:1]
  call void (...)* @_ssdm_op_SpecInterface(i32* %9, i8* getelementptr inbounds ([6 x i8]* @.str, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 64, i8* getelementptr inbounds ([7 x i8]* @.str5, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8]* @.str3, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 16, i32 16, i32 16, i32 16, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !33 ; [debug line = 5:1]
  call void (...)* @_ssdm_op_SpecInterface(i32 0, i8* getelementptr inbounds ([10 x i8]* @.str6, i32 0, i32 0), i32 1, i32 1, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([4 x i8]* @.str7, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !34 ; [debug line = 6:1]
  call void @llvm.dbg.declare(metadata !{i32* %i}, metadata !35), !dbg !37 ; [debug line = 7:10] [debug variable = i]
  store i32 0, i32* %i, align 4, !dbg !38         ; [debug line = 7:13]
  br label %10, !dbg !38                          ; [debug line = 7:13]

; <label>:10                                      ; preds = %26, %0
  %11 = load i32* %i, align 4, !dbg !38           ; [#uses=1 type=i32] [debug line = 7:13]
  %12 = icmp slt i32 %11, 64, !dbg !38            ; [#uses=1 type=i1] [debug line = 7:13]
  br i1 %12, label %13, label %29, !dbg !38       ; [debug line = 7:13]

; <label>:13                                      ; preds = %10
  call void (...)* @_ssdm_RegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str8, i32 0, i32 0)) nounwind, !dbg !39 ; [debug line = 9:3]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !41 ; [debug line = 8:1]
  %14 = load i32* %i, align 4, !dbg !42           ; [#uses=1 type=i32] [debug line = 9:2]
  %15 = load i32** %1, align 4, !dbg !42          ; [#uses=1 type=i32*] [debug line = 9:2]
  %16 = getelementptr inbounds i32* %15, i32 %14, !dbg !42 ; [#uses=1 type=i32*] [debug line = 9:2]
  %17 = load volatile i32* %16, align 4, !dbg !42 ; [#uses=1 type=i32] [debug line = 9:2]
  %18 = load i32* %i, align 4, !dbg !42           ; [#uses=1 type=i32] [debug line = 9:2]
  %19 = load i32** %2, align 4, !dbg !42          ; [#uses=1 type=i32*] [debug line = 9:2]
  %20 = getelementptr inbounds i32* %19, i32 %18, !dbg !42 ; [#uses=1 type=i32*] [debug line = 9:2]
  %21 = load volatile i32* %20, align 4, !dbg !42 ; [#uses=1 type=i32] [debug line = 9:2]
  %22 = mul nsw i32 %17, %21, !dbg !42            ; [#uses=1 type=i32] [debug line = 9:2]
  %23 = load i32* %i, align 4, !dbg !42           ; [#uses=1 type=i32] [debug line = 9:2]
  %24 = load i32** %3, align 4, !dbg !42          ; [#uses=1 type=i32*] [debug line = 9:2]
  %25 = getelementptr inbounds i32* %24, i32 %23, !dbg !42 ; [#uses=1 type=i32*] [debug line = 9:2]
  store volatile i32 %22, i32* %25, align 4, !dbg !42 ; [debug line = 9:2]
  call void (...)* @_ssdm_RegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str8, i32 0, i32 0)) nounwind, !dbg !43 ; [debug line = 9:19]
  br label %26, !dbg !43                          ; [debug line = 9:19]

; <label>:26                                      ; preds = %13
  %27 = load i32* %i, align 4, !dbg !44           ; [#uses=1 type=i32] [debug line = 7:21]
  %28 = add nsw i32 %27, 1, !dbg !44              ; [#uses=1 type=i32] [debug line = 7:21]
  store i32 %28, i32* %i, align 4, !dbg !44       ; [debug line = 7:21]
  br label %10, !dbg !44                          ; [debug line = 7:21]

; <label>:29                                      ; preds = %10
  ret i32 0, !dbg !45                             ; [debug line = 11:2]
}

; [#uses=4]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=3]
declare void @_ssdm_SpecArrayDimSize(...) nounwind

; [#uses=4]
declare void @_ssdm_op_SpecInterface(...) nounwind

; [#uses=1]
declare void @_ssdm_RegionBegin(...) nounwind

; [#uses=1]
declare void @_ssdm_op_SpecPipeline(...) nounwind

; [#uses=1]
declare void @_ssdm_RegionEnd(...) nounwind

!llvm.dbg.cu = !{!0}
!opencl.kernels = !{!14}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 4, metadata !"F:/ECE527/MP4/Tutorial_Files/accelerator_hls/vector_multiplier/.autopilot/db/accelerator.pragma.2.cpp", metadata !"F:\5CECE527\5CMP4\5CTutorial_Files", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !1} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"vector_multiplier", metadata !"vector_multiplier", metadata !"_Z17vector_multiplierPViS0_S0_", metadata !6, i32 1, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i32 (i32*, i32*, i32*)* @_Z17vector_multiplierPViS0_S0_, null, null, metadata !12, i32 2} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"accelerator_hls/accelerator.cpp", metadata !"F:\5CECE527\5CMP4\5CTutorial_Files", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{metadata !9, metadata !10, metadata !10, metadata !10}
!9 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!10 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !11} ; [ DW_TAG_pointer_type ]
!11 = metadata !{i32 786485, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !9} ; [ DW_TAG_volatile_type ]
!12 = metadata !{metadata !13}
!13 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!14 = metadata !{i32 (i32*, i32*, i32*)* @_Z17vector_multiplierPViS0_S0_, metadata !15, metadata !16, metadata !17, metadata !18, metadata !19, metadata !20}
!15 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1}
!16 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none"}
!17 = metadata !{metadata !"kernel_arg_type", metadata !"int*", metadata !"int*", metadata !"int*"}
!18 = metadata !{metadata !"kernel_arg_type_qual", metadata !"volatile", metadata !"volatile", metadata !"volatile"}
!19 = metadata !{metadata !"kernel_arg_name", metadata !"a", metadata !"b", metadata !"c"}
!20 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!21 = metadata !{i32 786689, metadata !5, metadata !"a", metadata !6, i32 16777217, metadata !10, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!22 = metadata !{i32 1, i32 36, metadata !5, null}
!23 = metadata !{i32 786689, metadata !5, metadata !"b", metadata !6, i32 33554433, metadata !10, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!24 = metadata !{i32 1, i32 56, metadata !5, null}
!25 = metadata !{i32 786689, metadata !5, metadata !"c", metadata !6, i32 50331649, metadata !10, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!26 = metadata !{i32 1, i32 76, metadata !5, null}
!27 = metadata !{i32 2, i32 2, metadata !28, null}
!28 = metadata !{i32 786443, metadata !5, i32 2, i32 1, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!29 = metadata !{i32 2, i32 31, metadata !28, null}
!30 = metadata !{i32 2, i32 60, metadata !28, null}
!31 = metadata !{i32 3, i32 1, metadata !28, null}
!32 = metadata !{i32 4, i32 1, metadata !28, null}
!33 = metadata !{i32 5, i32 1, metadata !28, null}
!34 = metadata !{i32 6, i32 1, metadata !28, null}
!35 = metadata !{i32 786688, metadata !36, metadata !"i", metadata !6, i32 7, metadata !9, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!36 = metadata !{i32 786443, metadata !28, i32 7, i32 2, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!37 = metadata !{i32 7, i32 10, metadata !36, null}
!38 = metadata !{i32 7, i32 13, metadata !36, null}
!39 = metadata !{i32 9, i32 3, metadata !40, null}
!40 = metadata !{i32 786443, metadata !36, i32 9, i32 2, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!41 = metadata !{i32 8, i32 1, metadata !40, null}
!42 = metadata !{i32 9, i32 2, metadata !40, null}
!43 = metadata !{i32 9, i32 19, metadata !40, null}
!44 = metadata !{i32 7, i32 21, metadata !36, null}
!45 = metadata !{i32 11, i32 2, metadata !28, null}

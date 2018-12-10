; ModuleID = 'F:/ECE527/MP4/Tutorial_Files/accelerator_hls/vector_multiplier/.autopilot/db/a.g.1.bc'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-f80:128:128-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32-S32"
target triple = "i686-pc-mingw32"

@vector_multiplier.str = internal unnamed_addr constant [18 x i8] c"vector_multiplier\00" ; [#uses=1 type=[18 x i8]*]
@.str8 = private unnamed_addr constant [12 x i8] c"hls_label_0\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str7 = private unnamed_addr constant [4 x i8] c"CTL\00", align 1 ; [#uses=1 type=[4 x i8]*]
@.str6 = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1 ; [#uses=1 type=[10 x i8]*]
@.str5 = private unnamed_addr constant [7 x i8] c"DATA_C\00", align 1 ; [#uses=1 type=[7 x i8]*]
@.str4 = private unnamed_addr constant [7 x i8] c"DATA_B\00", align 1 ; [#uses=1 type=[7 x i8]*]
@.str3 = private unnamed_addr constant [6 x i8] c"slave\00", align 1 ; [#uses=1 type=[6 x i8]*]
@.str2 = private unnamed_addr constant [7 x i8] c"DATA_A\00", align 1 ; [#uses=1 type=[7 x i8]*]
@.str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=1 type=[1 x i8]*]
@.str = private unnamed_addr constant [6 x i8] c"m_axi\00", align 1 ; [#uses=1 type=[6 x i8]*]

; [#uses=0]
define i32 @vector_multiplier(i32* %a, i32* %b, i32* %c) nounwind {
  call void (...)* @_ssdm_op_SpecBitsMap(i32 0) nounwind, !map !21
  call void (...)* @_ssdm_op_SpecTopModule([18 x i8]* @vector_multiplier.str) nounwind
  call void @llvm.dbg.value(metadata !{i32* %a}, i64 0, metadata !27), !dbg !28 ; [debug line = 1:36] [debug variable = a]
  call void @llvm.dbg.value(metadata !{i32* %b}, i64 0, metadata !29), !dbg !30 ; [debug line = 1:56] [debug variable = b]
  call void @llvm.dbg.value(metadata !{i32* %c}, i64 0, metadata !31), !dbg !32 ; [debug line = 1:76] [debug variable = c]
  call void (...)* @_ssdm_SpecArrayDimSize(i32* %a, i32 64) nounwind, !dbg !33 ; [debug line = 2:2]
  call void (...)* @_ssdm_SpecArrayDimSize(i32* %b, i32 64) nounwind, !dbg !35 ; [debug line = 2:31]
  call void (...)* @_ssdm_SpecArrayDimSize(i32* %c, i32 64) nounwind, !dbg !36 ; [debug line = 2:60]
  call void (...)* @_ssdm_op_SpecInterface(i32* %a, i8* getelementptr inbounds ([6 x i8]* @.str, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 64, i8* getelementptr inbounds ([7 x i8]* @.str2, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8]* @.str3, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 16, i32 16, i32 16, i32 16, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !37 ; [debug line = 3:1]
  call void (...)* @_ssdm_op_SpecInterface(i32* %b, i8* getelementptr inbounds ([6 x i8]* @.str, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 64, i8* getelementptr inbounds ([7 x i8]* @.str4, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8]* @.str3, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 16, i32 16, i32 16, i32 16, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !38 ; [debug line = 4:1]
  call void (...)* @_ssdm_op_SpecInterface(i32* %c, i8* getelementptr inbounds ([6 x i8]* @.str, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 64, i8* getelementptr inbounds ([7 x i8]* @.str5, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8]* @.str3, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 16, i32 16, i32 16, i32 16, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !39 ; [debug line = 5:1]
  call void (...)* @_ssdm_op_SpecInterface(i32 0, i8* getelementptr inbounds ([10 x i8]* @.str6, i32 0, i32 0), i32 1, i32 1, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([4 x i8]* @.str7, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !40 ; [debug line = 6:1]
  br label %1, !dbg !41                           ; [debug line = 7:13]

; <label>:1                                       ; preds = %2, %0
  %i = phi i32 [ 0, %0 ], [ %i.1, %2 ]            ; [#uses=5 type=i32]
  %exitcond = icmp eq i32 %i, 64, !dbg !41        ; [#uses=1 type=i1] [debug line = 7:13]
  br i1 %exitcond, label %3, label %2, !dbg !41   ; [debug line = 7:13]

; <label>:2                                       ; preds = %1
  %rbegin = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str8, i32 0, i32 0)) nounwind, !dbg !43 ; [#uses=1 type=i32] [debug line = 9:3]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !45 ; [debug line = 8:1]
  %a.addr = getelementptr inbounds i32* %a, i32 %i, !dbg !46 ; [#uses=1 type=i32*] [debug line = 9:2]
  %a.load = load volatile i32* %a.addr, align 4, !dbg !46 ; [#uses=1 type=i32] [debug line = 9:2]
  %b.addr = getelementptr inbounds i32* %b, i32 %i, !dbg !46 ; [#uses=1 type=i32*] [debug line = 9:2]
  %b.load = load volatile i32* %b.addr, align 4, !dbg !46 ; [#uses=1 type=i32] [debug line = 9:2]
  %tmp = mul nsw i32 %b.load, %a.load, !dbg !46   ; [#uses=1 type=i32] [debug line = 9:2]
  %c.addr = getelementptr inbounds i32* %c, i32 %i, !dbg !46 ; [#uses=1 type=i32*] [debug line = 9:2]
  store volatile i32 %tmp, i32* %c.addr, align 4, !dbg !46 ; [debug line = 9:2]
  %rend = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str8, i32 0, i32 0), i32 %rbegin) nounwind, !dbg !47 ; [#uses=0 type=i32] [debug line = 9:19]
  %i.1 = add nsw i32 %i, 1, !dbg !48              ; [#uses=1 type=i32] [debug line = 7:21]
  call void @llvm.dbg.value(metadata !{i32 %i.1}, i64 0, metadata !49), !dbg !48 ; [debug line = 7:21] [debug variable = i]
  br label %1, !dbg !48                           ; [debug line = 7:21]

; <label>:3                                       ; preds = %1
  ret i32 0, !dbg !50                             ; [debug line = 11:2]
}

; [#uses=4]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=1]
declare i32 @_ssdm_op_SpecRegionEnd(...)

; [#uses=1]
declare i32 @_ssdm_op_SpecRegionBegin(...)

; [#uses=1]
declare void @_ssdm_op_SpecPipeline(...) nounwind

; [#uses=4]
declare void @_ssdm_op_SpecInterface(...) nounwind

; [#uses=1]
declare void @_ssdm_op_SpecBitsMap(...)

; [#uses=3]
declare void @_ssdm_SpecArrayDimSize(...) nounwind

!llvm.dbg.cu = !{!0}
!opencl.kernels = !{!14}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 4, metadata !"F:/ECE527/MP4/Tutorial_Files/accelerator_hls/vector_multiplier/.autopilot/db/accelerator.pragma.2.cpp", metadata !"F:\5CECE527\5CMP4\5CTutorial_Files", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !1} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"vector_multiplier", metadata !"vector_multiplier", metadata !"_Z17vector_multiplierPViS0_S0_", metadata !6, i32 1, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i32 (i32*, i32*, i32*)* @vector_multiplier, null, null, metadata !12, i32 2} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"accelerator_hls/accelerator.cpp", metadata !"F:\5CECE527\5CMP4\5CTutorial_Files", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{metadata !9, metadata !10, metadata !10, metadata !10}
!9 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!10 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !11} ; [ DW_TAG_pointer_type ]
!11 = metadata !{i32 786485, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !9} ; [ DW_TAG_volatile_type ]
!12 = metadata !{metadata !13}
!13 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!14 = metadata !{i32 (i32*, i32*, i32*)* @vector_multiplier, metadata !15, metadata !16, metadata !17, metadata !18, metadata !19, metadata !20}
!15 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1}
!16 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none"}
!17 = metadata !{metadata !"kernel_arg_type", metadata !"int*", metadata !"int*", metadata !"int*"}
!18 = metadata !{metadata !"kernel_arg_type_qual", metadata !"volatile", metadata !"volatile", metadata !"volatile"}
!19 = metadata !{metadata !"kernel_arg_name", metadata !"a", metadata !"b", metadata !"c"}
!20 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!21 = metadata !{metadata !22}
!22 = metadata !{i32 0, i32 31, metadata !23}
!23 = metadata !{metadata !24}
!24 = metadata !{metadata !"return", metadata !25, metadata !"int", i32 0, i32 31}
!25 = metadata !{metadata !26}
!26 = metadata !{i32 0, i32 1, i32 0}
!27 = metadata !{i32 786689, metadata !5, metadata !"a", metadata !6, i32 16777217, metadata !10, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!28 = metadata !{i32 1, i32 36, metadata !5, null}
!29 = metadata !{i32 786689, metadata !5, metadata !"b", metadata !6, i32 33554433, metadata !10, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!30 = metadata !{i32 1, i32 56, metadata !5, null}
!31 = metadata !{i32 786689, metadata !5, metadata !"c", metadata !6, i32 50331649, metadata !10, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!32 = metadata !{i32 1, i32 76, metadata !5, null}
!33 = metadata !{i32 2, i32 2, metadata !34, null}
!34 = metadata !{i32 786443, metadata !5, i32 2, i32 1, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!35 = metadata !{i32 2, i32 31, metadata !34, null}
!36 = metadata !{i32 2, i32 60, metadata !34, null}
!37 = metadata !{i32 3, i32 1, metadata !34, null}
!38 = metadata !{i32 4, i32 1, metadata !34, null}
!39 = metadata !{i32 5, i32 1, metadata !34, null}
!40 = metadata !{i32 6, i32 1, metadata !34, null}
!41 = metadata !{i32 7, i32 13, metadata !42, null}
!42 = metadata !{i32 786443, metadata !34, i32 7, i32 2, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!43 = metadata !{i32 9, i32 3, metadata !44, null}
!44 = metadata !{i32 786443, metadata !42, i32 9, i32 2, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!45 = metadata !{i32 8, i32 1, metadata !44, null}
!46 = metadata !{i32 9, i32 2, metadata !44, null}
!47 = metadata !{i32 9, i32 19, metadata !44, null}
!48 = metadata !{i32 7, i32 21, metadata !42, null}
!49 = metadata !{i32 786688, metadata !42, metadata !"i", metadata !6, i32 7, metadata !9, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!50 = metadata !{i32 11, i32 2, metadata !34, null}

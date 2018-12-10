; ModuleID = 'F:/ECE527/MP4/Tutorial_Files/accelerator_hls/vector_multiplier/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-f80:128:128-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32-S32"
target triple = "i686-pc-mingw32"

@vector_multiplier.str = internal unnamed_addr constant [18 x i8] c"vector_multiplier\00" ; [#uses=1 type=[18 x i8]*]
@.str8 = private unnamed_addr constant [12 x i8] c"hls_label_0\00", align 1 ; [#uses=2 type=[12 x i8]*]
@.str7 = private unnamed_addr constant [4 x i8] c"CTL\00", align 1 ; [#uses=1 type=[4 x i8]*]
@.str6 = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1 ; [#uses=1 type=[10 x i8]*]
@.str5 = private unnamed_addr constant [7 x i8] c"DATA_C\00", align 1 ; [#uses=1 type=[7 x i8]*]
@.str4 = private unnamed_addr constant [7 x i8] c"DATA_B\00", align 1 ; [#uses=1 type=[7 x i8]*]
@.str3 = private unnamed_addr constant [6 x i8] c"slave\00", align 1 ; [#uses=3 type=[6 x i8]*]
@.str2 = private unnamed_addr constant [7 x i8] c"DATA_A\00", align 1 ; [#uses=1 type=[7 x i8]*]
@.str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=18 type=[1 x i8]*]
@.str = private unnamed_addr constant [6 x i8] c"m_axi\00", align 1 ; [#uses=3 type=[6 x i8]*]

; [#uses=0]
define i32 @vector_multiplier([64 x i32]* %a, [64 x i32]* %b, [64 x i32]* %c) nounwind {
  call void (...)* @_ssdm_op_SpecBitsMap([64 x i32]* %a) nounwind, !map !21
  call void (...)* @_ssdm_op_SpecBitsMap([64 x i32]* %b) nounwind, !map !27
  call void (...)* @_ssdm_op_SpecBitsMap([64 x i32]* %c) nounwind, !map !31
  call void (...)* @_ssdm_op_SpecBitsMap(i32 0) nounwind, !map !35
  call void (...)* @_ssdm_op_SpecTopModule([18 x i8]* @vector_multiplier.str) nounwind
  call void @llvm.dbg.value(metadata !{[64 x i32]* %a}, i64 0, metadata !41), !dbg !45 ; [debug line = 1:36] [debug variable = a]
  call void @llvm.dbg.value(metadata !{[64 x i32]* %b}, i64 0, metadata !46), !dbg !47 ; [debug line = 1:56] [debug variable = b]
  call void @llvm.dbg.value(metadata !{[64 x i32]* %c}, i64 0, metadata !48), !dbg !49 ; [debug line = 1:76] [debug variable = c]
  call void (...)* @_ssdm_op_SpecInterface([64 x i32]* %a, [6 x i8]* @.str, i32 0, i32 0, [1 x i8]* @.str1, i32 0, i32 64, [7 x i8]* @.str2, [6 x i8]* @.str3, [1 x i8]* @.str1, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @.str1, [1 x i8]* @.str1) nounwind
  call void (...)* @_ssdm_op_SpecInterface([64 x i32]* %b, [6 x i8]* @.str, i32 0, i32 0, [1 x i8]* @.str1, i32 0, i32 64, [7 x i8]* @.str4, [6 x i8]* @.str3, [1 x i8]* @.str1, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @.str1, [1 x i8]* @.str1) nounwind
  call void (...)* @_ssdm_op_SpecInterface([64 x i32]* %c, [6 x i8]* @.str, i32 0, i32 0, [1 x i8]* @.str1, i32 0, i32 64, [7 x i8]* @.str5, [6 x i8]* @.str3, [1 x i8]* @.str1, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @.str1, [1 x i8]* @.str1) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i32 0, [10 x i8]* @.str6, i32 1, i32 1, [1 x i8]* @.str1, i32 0, i32 0, [4 x i8]* @.str7, [1 x i8]* @.str1, [1 x i8]* @.str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @.str1, [1 x i8]* @.str1) nounwind, !dbg !50 ; [debug line = 6:1]
  %tmp.2 = zext i7 0 to i32, !dbg !52             ; [#uses=1 type=i32] [debug line = 7:13]
  %tmp.3 = zext i7 0 to i32, !dbg !52             ; [#uses=1 type=i32] [debug line = 7:13]
  %tmp.4 = zext i7 0 to i32, !dbg !52             ; [#uses=1 type=i32] [debug line = 7:13]
  br label %1, !dbg !52                           ; [debug line = 7:13]

; <label>:1                                       ; preds = %3, %0
  %i = phi i7 [ 0, %0 ], [ %i.1, %3 ]             ; [#uses=3 type=i7]
  %i.cast1 = zext i7 %i to i32, !dbg !52          ; [#uses=3 type=i32] [debug line = 7:13]
  %exitcond = icmp eq i7 %i, -64, !dbg !52        ; [#uses=1 type=i1] [debug line = 7:13]
  %2 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 64, i64 64, i64 64) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond, label %8, label %3, !dbg !52   ; [debug line = 7:13]

; <label>:3                                       ; preds = %1
  %tmp.1 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @.str8) nounwind, !dbg !54 ; [#uses=1 type=i32] [debug line = 9:3]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @.str1) nounwind, !dbg !56 ; [debug line = 8:1]
  %a.addr = getelementptr [64 x i32]* %a, i32 0, i32 %i.cast1, !dbg !57 ; [#uses=1 type=i32*] [debug line = 9:2]
  %a.addr.1 = getelementptr [64 x i32]* %a, i32 0, i32 %tmp.2, !dbg !57 ; [#uses=1 type=i32*] [debug line = 9:2]
  %tmp.5 = zext i7 -64 to i32                     ; [#uses=1 type=i32]
  %4 = call i32 (...)* @_ssdm_op_SpecBurst(i32* %a.addr.1, i32 1, i32 %tmp.5, i32 1) ; [#uses=0 type=i32]
  %a.load = load volatile i32* %a.addr, align 4, !dbg !57 ; [#uses=1 type=i32] [debug line = 9:2]
  %b.addr = getelementptr [64 x i32]* %b, i32 0, i32 %i.cast1, !dbg !57 ; [#uses=1 type=i32*] [debug line = 9:2]
  %b.addr.1 = getelementptr [64 x i32]* %b, i32 0, i32 %tmp.3, !dbg !57 ; [#uses=1 type=i32*] [debug line = 9:2]
  %tmp.6 = zext i7 -64 to i32                     ; [#uses=1 type=i32]
  %5 = call i32 (...)* @_ssdm_op_SpecBurst(i32* %b.addr.1, i32 1, i32 %tmp.6, i32 1) ; [#uses=0 type=i32]
  %b.load = load volatile i32* %b.addr, align 4, !dbg !57 ; [#uses=1 type=i32] [debug line = 9:2]
  %tmp = mul nsw i32 %a.load, %b.load, !dbg !57   ; [#uses=1 type=i32] [debug line = 9:2]
  %c.addr = getelementptr [64 x i32]* %c, i32 0, i32 %i.cast1, !dbg !57 ; [#uses=1 type=i32*] [debug line = 9:2]
  %c.addr.1 = getelementptr [64 x i32]* %c, i32 0, i32 %tmp.4, !dbg !57 ; [#uses=1 type=i32*] [debug line = 9:2]
  %tmp.7 = zext i7 -64 to i32                     ; [#uses=1 type=i32]
  %6 = call i32 (...)* @_ssdm_op_SpecBurst(i32* %c.addr.1, i32 0, i32 %tmp.7, i32 1) ; [#uses=0 type=i32]
  store volatile i32 %tmp, i32* %c.addr, align 4, !dbg !57 ; [debug line = 9:2]
  %7 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @.str8, i32 %tmp.1) nounwind, !dbg !58 ; [#uses=0 type=i32] [debug line = 9:19]
  %i.1 = add i7 %i, 1, !dbg !59                   ; [#uses=1 type=i7] [debug line = 7:21]
  call void @llvm.dbg.value(metadata !{i7 %i.1}, i64 0, metadata !60), !dbg !59 ; [debug line = 7:21] [debug variable = i]
  br label %1, !dbg !59                           ; [debug line = 7:21]

; <label>:8                                       ; preds = %1
  ret i32 0, !dbg !61                             ; [debug line = 11:2]
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

; [#uses=1]
declare i32 @_ssdm_op_SpecLoopTripCount(...)

; [#uses=4]
declare void @_ssdm_op_SpecInterface(...) nounwind

; [#uses=3]
declare i32 @_ssdm_op_SpecBurst(...)

; [#uses=4]
declare void @_ssdm_op_SpecBitsMap(...)

!llvm.dbg.cu = !{!0}
!opencl.kernels = !{!14}
!hls.encrypted.func = !{}
!llvm.map.gv = !{}

!0 = metadata !{i32 786449, i32 0, i32 4, metadata !"F:/ECE527/MP4/Tutorial_Files/accelerator_hls/vector_multiplier/.autopilot/db/accelerator.pragma.2.cpp", metadata !"F:\5CECE527\5CMP4\5CTutorial_Files", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !1} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"vector_multiplier", metadata !"vector_multiplier", metadata !"_Z17vector_multiplierPViS0_S0_", metadata !6, i32 1, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !12, i32 2} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"accelerator_hls/accelerator.cpp", metadata !"F:\5CECE527\5CMP4\5CTutorial_Files", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{metadata !9, metadata !10, metadata !10, metadata !10}
!9 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!10 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !11} ; [ DW_TAG_pointer_type ]
!11 = metadata !{i32 786485, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !9} ; [ DW_TAG_volatile_type ]
!12 = metadata !{metadata !13}
!13 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!14 = metadata !{null, metadata !15, metadata !16, metadata !17, metadata !18, metadata !19, metadata !20}
!15 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1}
!16 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none"}
!17 = metadata !{metadata !"kernel_arg_type", metadata !"int*", metadata !"int*", metadata !"int*"}
!18 = metadata !{metadata !"kernel_arg_type_qual", metadata !"volatile", metadata !"volatile", metadata !"volatile"}
!19 = metadata !{metadata !"kernel_arg_name", metadata !"a", metadata !"b", metadata !"c"}
!20 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!21 = metadata !{metadata !22}
!22 = metadata !{i32 0, i32 31, metadata !23}
!23 = metadata !{metadata !24}
!24 = metadata !{metadata !"a", metadata !25, metadata !"int", i32 0, i32 31}
!25 = metadata !{metadata !26}
!26 = metadata !{i32 0, i32 63, i32 1}
!27 = metadata !{metadata !28}
!28 = metadata !{i32 0, i32 31, metadata !29}
!29 = metadata !{metadata !30}
!30 = metadata !{metadata !"b", metadata !25, metadata !"int", i32 0, i32 31}
!31 = metadata !{metadata !32}
!32 = metadata !{i32 0, i32 31, metadata !33}
!33 = metadata !{metadata !34}
!34 = metadata !{metadata !"c", metadata !25, metadata !"int", i32 0, i32 31}
!35 = metadata !{metadata !36}
!36 = metadata !{i32 0, i32 31, metadata !37}
!37 = metadata !{metadata !38}
!38 = metadata !{metadata !"return", metadata !39, metadata !"int", i32 0, i32 31}
!39 = metadata !{metadata !40}
!40 = metadata !{i32 0, i32 1, i32 0}
!41 = metadata !{i32 786689, metadata !5, metadata !"a", null, i32 1, metadata !42, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!42 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 0, i64 0, i32 0, i32 0, metadata !11, metadata !43, i32 0, i32 0} ; [ DW_TAG_array_type ]
!43 = metadata !{metadata !44}
!44 = metadata !{i32 786465, i64 0, i64 63}       ; [ DW_TAG_subrange_type ]
!45 = metadata !{i32 1, i32 36, metadata !5, null}
!46 = metadata !{i32 786689, metadata !5, metadata !"b", null, i32 1, metadata !42, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!47 = metadata !{i32 1, i32 56, metadata !5, null}
!48 = metadata !{i32 786689, metadata !5, metadata !"c", null, i32 1, metadata !42, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!49 = metadata !{i32 1, i32 76, metadata !5, null}
!50 = metadata !{i32 6, i32 1, metadata !51, null}
!51 = metadata !{i32 786443, metadata !5, i32 2, i32 1, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!52 = metadata !{i32 7, i32 13, metadata !53, null}
!53 = metadata !{i32 786443, metadata !51, i32 7, i32 2, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!54 = metadata !{i32 9, i32 3, metadata !55, null}
!55 = metadata !{i32 786443, metadata !53, i32 9, i32 2, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!56 = metadata !{i32 8, i32 1, metadata !55, null}
!57 = metadata !{i32 9, i32 2, metadata !55, null}
!58 = metadata !{i32 9, i32 19, metadata !55, null}
!59 = metadata !{i32 7, i32 21, metadata !53, null}
!60 = metadata !{i32 786688, metadata !53, metadata !"i", metadata !6, i32 7, metadata !9, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!61 = metadata !{i32 11, i32 2, metadata !51, null}

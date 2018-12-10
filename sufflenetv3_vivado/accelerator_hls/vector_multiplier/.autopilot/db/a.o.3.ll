; ModuleID = 'F:/ECE527/MP4/Tutorial_Files/accelerator_hls/vector_multiplier/.autopilot/db/a.o.3.bc'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-f80:128:128-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32-S32"
target triple = "i686-pc-mingw32"

@vector_multiplier_st = internal unnamed_addr constant [18 x i8] c"vector_multiplier\00" ; [#uses=1 type=[18 x i8]*]
@mode5 = internal constant [10 x i8] c"s_axilite\00" ; [#uses=1 type=[10 x i8]*]
@mode3 = internal constant [10 x i8] c"s_axilite\00" ; [#uses=1 type=[10 x i8]*]
@mode = internal constant [10 x i8] c"s_axilite\00" ; [#uses=1 type=[10 x i8]*]
@bundle6 = internal constant [1 x i8] zeroinitializer ; [#uses=1 type=[1 x i8]*]
@bundle4 = internal constant [1 x i8] zeroinitializer ; [#uses=1 type=[1 x i8]*]
@bundle = internal constant [1 x i8] zeroinitializer ; [#uses=1 type=[1 x i8]*]
@p_str8 = private unnamed_addr constant [12 x i8] c"hls_label_0\00", align 1 ; [#uses=2 type=[12 x i8]*]
@p_str7 = private unnamed_addr constant [4 x i8] c"CTL\00", align 1 ; [#uses=1 type=[4 x i8]*]
@p_str6 = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1 ; [#uses=1 type=[10 x i8]*]
@p_str5 = private unnamed_addr constant [7 x i8] c"DATA_C\00", align 1 ; [#uses=1 type=[7 x i8]*]
@p_str4 = private unnamed_addr constant [7 x i8] c"DATA_B\00", align 1 ; [#uses=1 type=[7 x i8]*]
@p_str3 = private unnamed_addr constant [6 x i8] c"slave\00", align 1 ; [#uses=6 type=[6 x i8]*]
@p_str2 = private unnamed_addr constant [7 x i8] c"DATA_A\00", align 1 ; [#uses=1 type=[7 x i8]*]
@p_str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=30 type=[1 x i8]*]
@p_str = private unnamed_addr constant [6 x i8] c"m_axi\00", align 1 ; [#uses=3 type=[6 x i8]*]

; [#uses=0]
define i32 @vector_multiplier(i32* %DATA_A, i32* %DATA_B, i32* %DATA_C, i32 %a, i32 %b, i32 %c) {
  %c_read = call i32 @_ssdm_op_Read.s_axilite.i32(i32 %c) ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %c_read}, i64 0, metadata !13), !dbg !26 ; [debug line = 1:76] [debug variable = c]
  %b_read = call i32 @_ssdm_op_Read.s_axilite.i32(i32 %b) ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_read}, i64 0, metadata !27), !dbg !28 ; [debug line = 1:56] [debug variable = b]
  %a_read = call i32 @_ssdm_op_Read.s_axilite.i32(i32 %a) ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %a_read}, i64 0, metadata !29), !dbg !30 ; [debug line = 1:36] [debug variable = a]
  %c5 = call i30 @_ssdm_op_PartSelect.i30.i32.i32.i32(i32 %c_read, i32 2, i32 31) ; [#uses=1 type=i30]
  %tmp_2 = zext i30 %c5 to i32                    ; [#uses=1 type=i32]
  %DATA_C_addr = getelementptr i32* %DATA_C, i32 %tmp_2 ; [#uses=3 type=i32*]
  %b3 = call i30 @_ssdm_op_PartSelect.i30.i32.i32.i32(i32 %b_read, i32 2, i32 31) ; [#uses=1 type=i30]
  %tmp_3 = zext i30 %b3 to i32                    ; [#uses=1 type=i32]
  %DATA_B_addr = getelementptr i32* %DATA_B, i32 %tmp_3 ; [#uses=2 type=i32*]
  %a1 = call i30 @_ssdm_op_PartSelect.i30.i32.i32.i32(i32 %a_read, i32 2, i32 31) ; [#uses=1 type=i30]
  %tmp_4 = zext i30 %a1 to i32                    ; [#uses=1 type=i32]
  %DATA_A_addr = getelementptr i32* %DATA_A, i32 %tmp_4 ; [#uses=2 type=i32*]
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %DATA_C), !map !31
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %DATA_B), !map !37
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %DATA_A), !map !41
  call void (...)* @_ssdm_op_SpecBitsMap(i32 0) nounwind, !map !45
  call void (...)* @_ssdm_op_SpecTopModule([18 x i8]* @vector_multiplier_st) nounwind
  call void @llvm.dbg.value(metadata !{i32 %a}, i64 0, metadata !29), !dbg !30 ; [debug line = 1:36] [debug variable = a]
  call void @llvm.dbg.value(metadata !{i32 %b}, i64 0, metadata !27), !dbg !28 ; [debug line = 1:56] [debug variable = b]
  call void @llvm.dbg.value(metadata !{i32 %c}, i64 0, metadata !13), !dbg !26 ; [debug line = 1:76] [debug variable = c]
  call void (...)* @_ssdm_op_SpecInterface(i32* %DATA_A, [6 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 64, [7 x i8]* @p_str2, [6 x i8]* @p_str3, [1 x i8]* @p_str1, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str1, [1 x i8]* @p_str1)
  call void (...)* @_ssdm_op_SpecInterface(i32 %a, [10 x i8]* @mode, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 64, [1 x i8]* @bundle, [6 x i8]* @p_str3, [1 x i8]* @p_str1, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str1, [1 x i8]* @p_str1)
  call void (...)* @_ssdm_op_SpecInterface(i32* %DATA_B, [6 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 64, [7 x i8]* @p_str4, [6 x i8]* @p_str3, [1 x i8]* @p_str1, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str1, [1 x i8]* @p_str1)
  call void (...)* @_ssdm_op_SpecInterface(i32 %b, [10 x i8]* @mode3, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 64, [1 x i8]* @bundle4, [6 x i8]* @p_str3, [1 x i8]* @p_str1, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str1, [1 x i8]* @p_str1)
  call void (...)* @_ssdm_op_SpecInterface(i32* %DATA_C, [6 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 64, [7 x i8]* @p_str5, [6 x i8]* @p_str3, [1 x i8]* @p_str1, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str1, [1 x i8]* @p_str1)
  call void (...)* @_ssdm_op_SpecInterface(i32 %c, [10 x i8]* @mode5, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 64, [1 x i8]* @bundle6, [6 x i8]* @p_str3, [1 x i8]* @p_str1, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str1, [1 x i8]* @p_str1)
  call void (...)* @_ssdm_op_SpecInterface(i32 0, [10 x i8]* @p_str6, i32 1, i32 1, [1 x i8]* @p_str1, i32 0, i32 0, [4 x i8]* @p_str7, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind, !dbg !51 ; [debug line = 6:1]
  %DATA_A_addr_rd_req = call i1 @_ssdm_op_ReadReq.m_axi.i32P(i32* %DATA_A_addr, i32 64), !dbg !53 ; [#uses=0 type=i1] [debug line = 9:2]
  %DATA_B_addr_rd_req = call i1 @_ssdm_op_ReadReq.m_axi.i32P(i32* %DATA_B_addr, i32 64), !dbg !53 ; [#uses=0 type=i1] [debug line = 9:2]
  %DATA_C_addr_wr_req = call i1 @_ssdm_op_WriteReq.m_axi.i32P(i32* %DATA_C_addr, i32 64), !dbg !53 ; [#uses=0 type=i1] [debug line = 9:2]
  br label %1, !dbg !56                           ; [debug line = 7:13]

; <label>:1                                       ; preds = %2, %0
  %i = phi i7 [ 0, %0 ], [ %i_1, %2 ]             ; [#uses=2 type=i7]
  %exitcond = icmp eq i7 %i, -64, !dbg !56        ; [#uses=1 type=i1] [debug line = 7:13]
  %i_1 = add i7 %i, 1, !dbg !57                   ; [#uses=1 type=i7] [debug line = 7:21]
  br i1 %exitcond, label %3, label %2, !dbg !56   ; [debug line = 7:13]

; <label>:2                                       ; preds = %1
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 64, i64 64, i64 64) nounwind ; [#uses=0 type=i32]
  %tmp_1 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str8) nounwind, !dbg !58 ; [#uses=1 type=i32] [debug line = 9:3]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str1) nounwind, !dbg !59 ; [debug line = 8:1]
  %DATA_A_addr_read = call i32 @_ssdm_op_Read.m_axi.i32P(i32* %DATA_A_addr), !dbg !53 ; [#uses=1 type=i32] [debug line = 9:2]
  %DATA_B_addr_read = call i32 @_ssdm_op_Read.m_axi.i32P(i32* %DATA_B_addr), !dbg !53 ; [#uses=1 type=i32] [debug line = 9:2]
  %tmp = mul nsw i32 %DATA_B_addr_read, %DATA_A_addr_read, !dbg !53 ; [#uses=1 type=i32] [debug line = 9:2]
  call void @_ssdm_op_Write.m_axi.i32P(i32* %DATA_C_addr, i32 %tmp, i4 -1), !dbg !53 ; [debug line = 9:2]
  %empty_4 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str8, i32 %tmp_1) nounwind, !dbg !60 ; [#uses=0 type=i32] [debug line = 9:19]
  call void @llvm.dbg.value(metadata !{i7 %i_1}, i64 0, metadata !61), !dbg !57 ; [debug line = 7:21] [debug variable = i]
  br label %1, !dbg !57                           ; [debug line = 7:21]

; <label>:3                                       ; preds = %1
  %DATA_C_addr_wr_resp = call i1 @_ssdm_op_WriteResp.m_axi.i32P(i32* %DATA_C_addr), !dbg !53 ; [#uses=0 type=i1] [debug line = 9:2]
  ret i32 0, !dbg !62                             ; [debug line = 11:2]
}

; [#uses=1]
declare i32 @llvm.part.select.i32(i32, i32, i32) nounwind readnone

; [#uses=7]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=1]
define weak i1 @_ssdm_op_WriteResp.m_axi.i32P(i32*) {
entry:
  ret i1 true
}

; [#uses=1]
define weak i1 @_ssdm_op_WriteReq.m_axi.i32P(i32*, i32) {
entry:
  ret i1 true
}

; [#uses=1]
define weak void @_ssdm_op_Write.m_axi.i32P(i32*, i32, i4) {
entry:
  ret void
}

; [#uses=1]
define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

; [#uses=1]
define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

; [#uses=1]
define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

; [#uses=1]
define weak void @_ssdm_op_SpecPipeline(...) nounwind {
entry:
  ret void
}

; [#uses=1]
define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

; [#uses=7]
define weak void @_ssdm_op_SpecInterface(...) nounwind {
entry:
  ret void
}

; [#uses=4]
define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

; [#uses=2]
define weak i1 @_ssdm_op_ReadReq.m_axi.i32P(i32*, i32) {
entry:
  ret i1 true
}

; [#uses=3]
define weak i32 @_ssdm_op_Read.s_axilite.i32(i32) {
entry:
  ret i32 %0
}

; [#uses=2]
define weak i32 @_ssdm_op_Read.m_axi.i32P(i32*) {
entry:
  %empty = load i32* %0                           ; [#uses=1 type=i32]
  ret i32 %empty
}

; [#uses=3]
define weak i30 @_ssdm_op_PartSelect.i30.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2) ; [#uses=1 type=i32]
  %empty_5 = trunc i32 %empty to i30              ; [#uses=1 type=i30]
  ret i30 %empty_5
}

!opencl.kernels = !{!0}
!hls.encrypted.func = !{}
!llvm.map.gv = !{}
!axi4.master.portmap = !{!7, !8, !9}
!axi4.slave.bundlemap = !{!10, !11, !12}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"int*", metadata !"int*", metadata !"int*"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !"volatile", metadata !"volatile", metadata !"volatile"}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"a", metadata !"b", metadata !"c"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{metadata !"DATA_A", metadata !"a", metadata !"READONLY"}
!8 = metadata !{metadata !"DATA_B", metadata !"b", metadata !"READONLY"}
!9 = metadata !{metadata !"DATA_C", metadata !"c", metadata !"WRITEONLY"}
!10 = metadata !{metadata !"a", metadata !""}
!11 = metadata !{metadata !"b", metadata !""}
!12 = metadata !{metadata !"c", metadata !""}
!13 = metadata !{i32 786689, metadata !14, metadata !"c", null, i32 1, metadata !23, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!14 = metadata !{i32 786478, i32 0, metadata !15, metadata !"vector_multiplier", metadata !"vector_multiplier", metadata !"_Z17vector_multiplierPViS0_S0_", metadata !15, i32 1, metadata !16, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !21, i32 2} ; [ DW_TAG_subprogram ]
!15 = metadata !{i32 786473, metadata !"accelerator_hls/accelerator.cpp", metadata !"F:\5CECE527\5CMP4\5CTutorial_Files", null} ; [ DW_TAG_file_type ]
!16 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !17, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!17 = metadata !{metadata !18, metadata !19, metadata !19, metadata !19}
!18 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!19 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !20} ; [ DW_TAG_pointer_type ]
!20 = metadata !{i32 786485, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !18} ; [ DW_TAG_volatile_type ]
!21 = metadata !{metadata !22}
!22 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!23 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 0, i64 0, i32 0, i32 0, metadata !20, metadata !24, i32 0, i32 0} ; [ DW_TAG_array_type ]
!24 = metadata !{metadata !25}
!25 = metadata !{i32 786465, i64 0, i64 63}       ; [ DW_TAG_subrange_type ]
!26 = metadata !{i32 1, i32 76, metadata !14, null}
!27 = metadata !{i32 786689, metadata !14, metadata !"b", null, i32 1, metadata !23, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!28 = metadata !{i32 1, i32 56, metadata !14, null}
!29 = metadata !{i32 786689, metadata !14, metadata !"a", null, i32 1, metadata !23, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!30 = metadata !{i32 1, i32 36, metadata !14, null}
!31 = metadata !{metadata !32}
!32 = metadata !{i32 0, i32 31, metadata !33}
!33 = metadata !{metadata !34}
!34 = metadata !{metadata !"c", metadata !35, metadata !"int", i32 0, i32 31}
!35 = metadata !{metadata !36}
!36 = metadata !{i32 0, i32 63, i32 1}
!37 = metadata !{metadata !38}
!38 = metadata !{i32 0, i32 31, metadata !39}
!39 = metadata !{metadata !40}
!40 = metadata !{metadata !"b", metadata !35, metadata !"int", i32 0, i32 31}
!41 = metadata !{metadata !42}
!42 = metadata !{i32 0, i32 31, metadata !43}
!43 = metadata !{metadata !44}
!44 = metadata !{metadata !"a", metadata !35, metadata !"int", i32 0, i32 31}
!45 = metadata !{metadata !46}
!46 = metadata !{i32 0, i32 31, metadata !47}
!47 = metadata !{metadata !48}
!48 = metadata !{metadata !"return", metadata !49, metadata !"int", i32 0, i32 31}
!49 = metadata !{metadata !50}
!50 = metadata !{i32 0, i32 1, i32 0}
!51 = metadata !{i32 6, i32 1, metadata !52, null}
!52 = metadata !{i32 786443, metadata !14, i32 2, i32 1, metadata !15, i32 0} ; [ DW_TAG_lexical_block ]
!53 = metadata !{i32 9, i32 2, metadata !54, null}
!54 = metadata !{i32 786443, metadata !55, i32 9, i32 2, metadata !15, i32 2} ; [ DW_TAG_lexical_block ]
!55 = metadata !{i32 786443, metadata !52, i32 7, i32 2, metadata !15, i32 1} ; [ DW_TAG_lexical_block ]
!56 = metadata !{i32 7, i32 13, metadata !55, null}
!57 = metadata !{i32 7, i32 21, metadata !55, null}
!58 = metadata !{i32 9, i32 3, metadata !54, null}
!59 = metadata !{i32 8, i32 1, metadata !54, null}
!60 = metadata !{i32 9, i32 19, metadata !54, null}
!61 = metadata !{i32 786688, metadata !55, metadata !"i", metadata !15, i32 7, metadata !18, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!62 = metadata !{i32 11, i32 2, metadata !52, null}

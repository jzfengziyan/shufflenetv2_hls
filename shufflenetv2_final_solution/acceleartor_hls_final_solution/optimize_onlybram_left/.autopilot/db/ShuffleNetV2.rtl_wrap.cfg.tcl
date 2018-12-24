set lang "C++"
set moduleName "ShuffleNetV2"
set moduleIsExternC "0"
set rawDecl ""
set globalVariable ""
set PortName9 "weights_96_96_1x1"
set BitWidth9 "73728"
set ArrayOpt9 ""
set Const9 "0"
set Volatile9 "0"
set Pointer9 "0"
set Reference9 "0"
set Initializer9 ""
set External9 0
set Dims9 [list  96 96 1 1]
set Interface9 "wire"
set NameSpace9 [list ]
set DataType9 "[list ap_fixed 8 2 0 0 0 ]"
set Port9 [list $PortName9 $Interface9 $DataType9 $Pointer9 $Dims9 $Const9 $Volatile9 $ArrayOpt9 $Initializer9 $External9 $NameSpace9]
lappend globalVariable $Port9
set PortName10 "weights_96_1_3x3"
set BitWidth10 "6912"
set ArrayOpt10 ""
set Const10 "0"
set Volatile10 "0"
set Pointer10 "0"
set Reference10 "0"
set Initializer10 ""
set External10 0
set Dims10 [list  96 1 3 3]
set Interface10 "wire"
set NameSpace10 [list ]
set DataType10 "[list ap_fixed 8 2 0 0 0 ]"
set Port10 [list $PortName10 $Interface10 $DataType10 $Pointer10 $Dims10 $Const10 $Volatile10 $ArrayOpt10 $Initializer10 $External10 $NameSpace10]
lappend globalVariable $Port10
set PortName11 "weights_48_48_1x1"
set BitWidth11 "18432"
set ArrayOpt11 ""
set Const11 "0"
set Volatile11 "0"
set Pointer11 "0"
set Reference11 "0"
set Initializer11 ""
set External11 0
set Dims11 [list  48 48 1 1]
set Interface11 "wire"
set NameSpace11 [list ]
set DataType11 "[list ap_fixed 8 2 0 0 0 ]"
set Port11 [list $PortName11 $Interface11 $DataType11 $Pointer11 $Dims11 $Const11 $Volatile11 $ArrayOpt11 $Initializer11 $External11 $NameSpace11]
lappend globalVariable $Port11
set PortName12 "weights_48_1_3x3"
set BitWidth12 "3456"
set ArrayOpt12 ""
set Const12 "0"
set Volatile12 "0"
set Pointer12 "0"
set Reference12 "0"
set Initializer12 ""
set External12 0
set Dims12 [list  48 1 3 3]
set Interface12 "wire"
set NameSpace12 [list ]
set DataType12 "[list ap_fixed 8 2 0 0 0 ]"
set Port12 [list $PortName12 $Interface12 $DataType12 $Pointer12 $Dims12 $Const12 $Volatile12 $ArrayOpt12 $Initializer12 $External12 $NameSpace12]
lappend globalVariable $Port12
set PortName13 "weights_24_24_1x1"
set BitWidth13 "4608"
set ArrayOpt13 ""
set Const13 "0"
set Volatile13 "0"
set Pointer13 "0"
set Reference13 "0"
set Initializer13 ""
set External13 0
set Dims13 [list  24 24 1 1]
set Interface13 "wire"
set NameSpace13 [list ]
set DataType13 "[list ap_fixed 8 2 0 0 0 ]"
set Port13 [list $PortName13 $Interface13 $DataType13 $Pointer13 $Dims13 $Const13 $Volatile13 $ArrayOpt13 $Initializer13 $External13 $NameSpace13]
lappend globalVariable $Port13
set PortName14 "weights_24_1_3x3"
set BitWidth14 "1728"
set ArrayOpt14 ""
set Const14 "0"
set Volatile14 "0"
set Pointer14 "0"
set Reference14 "0"
set Initializer14 ""
set External14 0
set Dims14 [list  24 1 3 3]
set Interface14 "wire"
set NameSpace14 [list ]
set DataType14 "[list ap_fixed 8 2 0 0 0 ]"
set Port14 [list $PortName14 $Interface14 $DataType14 $Pointer14 $Dims14 $Const14 $Volatile14 $ArrayOpt14 $Initializer14 $External14 $NameSpace14]
lappend globalVariable $Port14
set PortName15 "shuffleunit2_2_output"
set BitWidth15 "24576"
set ArrayOpt15 ""
set Const15 "0"
set Volatile15 "0"
set Pointer15 "0"
set Reference15 "0"
set Initializer15 ""
set External15 0
set Dims15 [list  1 192 4 4]
set Interface15 "wire"
set NameSpace15 [list ]
set DataType15 "[list ap_fixed 8 2 0 0 0 ]"
set Port15 [list $PortName15 $Interface15 $DataType15 $Pointer15 $Dims15 $Const15 $Volatile15 $ArrayOpt15 $Initializer15 $External15 $NameSpace15]
lappend globalVariable $Port15
set PortName16 "image_p"
set BitWidth16 "27744"
set ArrayOpt16 ""
set Const16 "0"
set Volatile16 "0"
set Pointer16 "0"
set Reference16 "0"
set Initializer16 ""
set External16 0
set Dims16 [list  1 3 34 34]
set Interface16 "wire"
set NameSpace16 [list ]
set DataType16 "[list ap_fixed 8 2 0 0 0 ]"
set Port16 [list $PortName16 $Interface16 $DataType16 $Pointer16 $Dims16 $Const16 $Volatile16 $ArrayOpt16 $Initializer16 $External16 $NameSpace16]
lappend globalVariable $Port16
set PortName17 "feature_buffer_96x10x10"
set BitWidth17 "76800"
set ArrayOpt17 ""
set Const17 "0"
set Volatile17 "0"
set Pointer17 "0"
set Reference17 "0"
set Initializer17 ""
set External17 0
set Dims17 [list  1 96 10 10]
set Interface17 "wire"
set NameSpace17 [list ]
set DataType17 "[list ap_fixed 8 2 0 0 0 ]"
set Port17 [list $PortName17 $Interface17 $DataType17 $Pointer17 $Dims17 $Const17 $Volatile17 $ArrayOpt17 $Initializer17 $External17 $NameSpace17]
lappend globalVariable $Port17
set PortName18 "feature_buffer_48x18x18"
set BitWidth18 "124416"
set ArrayOpt18 ""
set Const18 "0"
set Volatile18 "0"
set Pointer18 "0"
set Reference18 "0"
set Initializer18 ""
set External18 0
set Dims18 [list  1 48 18 18]
set Interface18 "wire"
set NameSpace18 [list ]
set DataType18 "[list ap_fixed 8 2 0 0 0 ]"
set Port18 [list $PortName18 $Interface18 $DataType18 $Pointer18 $Dims18 $Const18 $Volatile18 $ArrayOpt18 $Initializer18 $External18 $NameSpace18]
lappend globalVariable $Port18
set PortName19 "feature_buffer_192x6x6"
set BitWidth19 "55296"
set ArrayOpt19 ""
set Const19 "0"
set Volatile19 "0"
set Pointer19 "0"
set Reference19 "0"
set Initializer19 ""
set External19 0
set Dims19 [list  1 192 6 6]
set Interface19 "wire"
set NameSpace19 [list ]
set DataType19 "[list ap_fixed 8 2 0 0 0 ]"
set Port19 [list $PortName19 $Interface19 $DataType19 $Pointer19 $Dims19 $Const19 $Volatile19 $ArrayOpt19 $Initializer19 $External19 $NameSpace19]
lappend globalVariable $Port19
set PortName20 "fc_bias"
set BitWidth20 "80"
set ArrayOpt20 ""
set Const20 "0"
set Volatile20 "0"
set Pointer20 "0"
set Reference20 "0"
set Initializer20 ""
set External20 0
set Dims20 [list  10]
set Interface20 "wire"
set NameSpace20 [list ]
set DataType20 "[list ap_fixed 8 2 0 0 0 ]"
set Port20 [list $PortName20 $Interface20 $DataType20 $Pointer20 $Dims20 $Const20 $Volatile20 $ArrayOpt20 $Initializer20 $External20 $NameSpace20]
lappend globalVariable $Port20
set PortName21 "conv_last_output"
set BitWidth21 "65536"
set ArrayOpt21 ""
set Const21 "0"
set Volatile21 "0"
set Pointer21 "0"
set Reference21 "0"
set Initializer21 ""
set External21 0
set Dims21 [list  1 512 4 4]
set Interface21 "wire"
set NameSpace21 [list ]
set DataType21 "[list ap_fixed 8 2 0 0 0 ]"
set Port21 [list $PortName21 $Interface21 $DataType21 $Pointer21 $Dims21 $Const21 $Volatile21 $ArrayOpt21 $Initializer21 $External21 $NameSpace21]
lappend globalVariable $Port21
set PortName22 "conv_last_bias"
set BitWidth22 "4096"
set ArrayOpt22 ""
set Const22 "0"
set Volatile22 "0"
set Pointer22 "0"
set Reference22 "0"
set Initializer22 ""
set External22 0
set Dims22 [list  512]
set Interface22 "wire"
set NameSpace22 [list ]
set DataType22 "[list ap_fixed 8 2 0 0 0 ]"
set Port22 [list $PortName22 $Interface22 $DataType22 $Pointer22 $Dims22 $Const22 $Volatile22 $ArrayOpt22 $Initializer22 $External22 $NameSpace22]
lappend globalVariable $Port22
set PortName23 "conv1_output_p"
set BitWidth23 "221952"
set ArrayOpt23 ""
set Const23 "0"
set Volatile23 "0"
set Pointer23 "0"
set Reference23 "0"
set Initializer23 ""
set External23 0
set Dims23 [list  1 24 34 34]
set Interface23 "wire"
set NameSpace23 [list ]
set DataType23 "[list ap_fixed 8 2 0 0 0 ]"
set Port23 [list $PortName23 $Interface23 $DataType23 $Pointer23 $Dims23 $Const23 $Volatile23 $ArrayOpt23 $Initializer23 $External23 $NameSpace23]
lappend globalVariable $Port23
set PortName24 "conv1_bias"
set BitWidth24 "192"
set ArrayOpt24 ""
set Const24 "0"
set Volatile24 "0"
set Pointer24 "0"
set Reference24 "0"
set Initializer24 ""
set External24 0
set Dims24 [list  24]
set Interface24 "wire"
set NameSpace24 [list ]
set DataType24 "[list ap_fixed 8 2 0 0 0 ]"
set Port24 [list $PortName24 $Interface24 $DataType24 $Pointer24 $Dims24 $Const24 $Volatile24 $ArrayOpt24 $Initializer24 $External24 $NameSpace24]
lappend globalVariable $Port24
set PortName25 "buffer1_1_96_4x4_p"
set BitWidth25 "27648"
set ArrayOpt25 ""
set Const25 "0"
set Volatile25 "0"
set Pointer25 "0"
set Reference25 "0"
set Initializer25 ""
set External25 0
set Dims25 [list  1 96 6 6]
set Interface25 "wire"
set NameSpace25 [list ]
set DataType25 "[list ap_fixed 8 2 0 0 0 ]"
set Port25 [list $PortName25 $Interface25 $DataType25 $Pointer25 $Dims25 $Const25 $Volatile25 $ArrayOpt25 $Initializer25 $External25 $NameSpace25]
lappend globalVariable $Port25
set PortName26 "buffer1_1_48_8x8_p"
set BitWidth26 "38400"
set ArrayOpt26 ""
set Const26 "0"
set Volatile26 "0"
set Pointer26 "0"
set Reference26 "0"
set Initializer26 ""
set External26 0
set Dims26 [list  1 48 10 10]
set Interface26 "wire"
set NameSpace26 [list ]
set DataType26 "[list ap_fixed 8 2 0 0 0 ]"
set Port26 [list $PortName26 $Interface26 $DataType26 $Pointer26 $Dims26 $Const26 $Volatile26 $ArrayOpt26 $Initializer26 $External26 $NameSpace26]
lappend globalVariable $Port26
set PortName27 "buffer1_1_24_16x16_p"
set BitWidth27 "62208"
set ArrayOpt27 ""
set Const27 "0"
set Volatile27 "0"
set Pointer27 "0"
set Reference27 "0"
set Initializer27 ""
set External27 0
set Dims27 [list  1 24 18 18]
set Interface27 "wire"
set NameSpace27 [list ]
set DataType27 "[list ap_fixed 8 2 0 0 0 ]"
set Port27 [list $PortName27 $Interface27 $DataType27 $Pointer27 $Dims27 $Const27 $Volatile27 $ArrayOpt27 $Initializer27 $External27 $NameSpace27]
lappend globalVariable $Port27
set PortName28 "buffer0_1_96_4x4_p"
set BitWidth28 "27648"
set ArrayOpt28 ""
set Const28 "0"
set Volatile28 "0"
set Pointer28 "0"
set Reference28 "0"
set Initializer28 ""
set External28 0
set Dims28 [list  1 96 6 6]
set Interface28 "wire"
set NameSpace28 [list ]
set DataType28 "[list ap_fixed 8 2 0 0 0 ]"
set Port28 [list $PortName28 $Interface28 $DataType28 $Pointer28 $Dims28 $Const28 $Volatile28 $ArrayOpt28 $Initializer28 $External28 $NameSpace28]
lappend globalVariable $Port28
set PortName29 "buffer0_1_48_8x8_p"
set BitWidth29 "38400"
set ArrayOpt29 ""
set Const29 "0"
set Volatile29 "0"
set Pointer29 "0"
set Reference29 "0"
set Initializer29 ""
set External29 0
set Dims29 [list  1 48 10 10]
set Interface29 "wire"
set NameSpace29 [list ]
set DataType29 "[list ap_fixed 8 2 0 0 0 ]"
set Port29 [list $PortName29 $Interface29 $DataType29 $Pointer29 $Dims29 $Const29 $Volatile29 $ArrayOpt29 $Initializer29 $External29 $NameSpace29]
lappend globalVariable $Port29
set PortName30 "buffer0_1_24_16x16_p"
set BitWidth30 "62208"
set ArrayOpt30 ""
set Const30 "0"
set Volatile30 "0"
set Pointer30 "0"
set Reference30 "0"
set Initializer30 ""
set External30 0
set Dims30 [list  1 24 18 18]
set Interface30 "wire"
set NameSpace30 [list ]
set DataType30 "[list ap_fixed 8 2 0 0 0 ]"
set Port30 [list $PortName30 $Interface30 $DataType30 $Pointer30 $Dims30 $Const30 $Volatile30 $ArrayOpt30 $Initializer30 $External30 $NameSpace30]
lappend globalVariable $Port30
set PortName31 "bias_96"
set BitWidth31 "768"
set ArrayOpt31 ""
set Const31 "0"
set Volatile31 "0"
set Pointer31 "0"
set Reference31 "0"
set Initializer31 ""
set External31 0
set Dims31 [list  96]
set Interface31 "wire"
set NameSpace31 [list ]
set DataType31 "[list ap_fixed 8 2 0 0 0 ]"
set Port31 [list $PortName31 $Interface31 $DataType31 $Pointer31 $Dims31 $Const31 $Volatile31 $ArrayOpt31 $Initializer31 $External31 $NameSpace31]
lappend globalVariable $Port31
set PortName32 "bias_48"
set BitWidth32 "384"
set ArrayOpt32 ""
set Const32 "0"
set Volatile32 "0"
set Pointer32 "0"
set Reference32 "0"
set Initializer32 ""
set External32 0
set Dims32 [list  48]
set Interface32 "wire"
set NameSpace32 [list ]
set DataType32 "[list ap_fixed 8 2 0 0 0 ]"
set Port32 [list $PortName32 $Interface32 $DataType32 $Pointer32 $Dims32 $Const32 $Volatile32 $ArrayOpt32 $Initializer32 $External32 $NameSpace32]
lappend globalVariable $Port32
set PortName33 "bias_24"
set BitWidth33 "192"
set ArrayOpt33 ""
set Const33 "0"
set Volatile33 "0"
set Pointer33 "0"
set Reference33 "0"
set Initializer33 ""
set External33 0
set Dims33 [list  24]
set Interface33 "wire"
set NameSpace33 [list ]
set DataType33 "[list ap_fixed 8 2 0 0 0 ]"
set Port33 [list $PortName33 $Interface33 $DataType33 $Pointer33 $Dims33 $Const33 $Volatile33 $ArrayOpt33 $Initializer33 $External33 $NameSpace33]
lappend globalVariable $Port33
set PortName34 "avgpool_output"
set BitWidth34 "4096"
set ArrayOpt34 ""
set Const34 "0"
set Volatile34 "0"
set Pointer34 "0"
set Reference34 "0"
set Initializer34 ""
set External34 0
set Dims34 [list  512]
set Interface34 "wire"
set NameSpace34 [list ]
set DataType34 "[list ap_fixed 8 2 0 0 0 ]"
set Port34 [list $PortName34 $Interface34 $DataType34 $Pointer34 $Dims34 $Const34 $Volatile34 $ArrayOpt34 $Initializer34 $External34 $NameSpace34]
lappend globalVariable $Port34
set PortName35 "ShuffleConvs_2_DownsampleUnit__conv1r_output_p"
set BitWidth35 "76800"
set ArrayOpt35 ""
set Const35 "0"
set Volatile35 "0"
set Pointer35 "0"
set Reference35 "0"
set Initializer35 ""
set External35 0
set Dims35 [list  1 96 10 10]
set Interface35 "wire"
set NameSpace35 [list ]
set DataType35 "[list ap_fixed 8 2 0 0 0 ]"
set Port35 [list $PortName35 $Interface35 $DataType35 $Pointer35 $Dims35 $Const35 $Volatile35 $ArrayOpt35 $Initializer35 $External35 $NameSpace35]
lappend globalVariable $Port35
set PortName36 "ShuffleConvs_1_DownsampleUnit__conv1r_output_p"
set BitWidth36 "124416"
set ArrayOpt36 ""
set Const36 "0"
set Volatile36 "0"
set Pointer36 "0"
set Reference36 "0"
set Initializer36 ""
set External36 0
set Dims36 [list  1 48 18 18]
set Interface36 "wire"
set NameSpace36 [list ]
set DataType36 "[list ap_fixed 8 2 0 0 0 ]"
set Port36 [list $PortName36 $Interface36 $DataType36 $Pointer36 $Dims36 $Const36 $Volatile36 $ArrayOpt36 $Initializer36 $External36 $NameSpace36]
lappend globalVariable $Port36
set PortName37 "ShuffleConvs_0_DownsampleUnit__conv1r_output_p"
set BitWidth37 "221952"
set ArrayOpt37 ""
set Const37 "0"
set Volatile37 "0"
set Pointer37 "0"
set Reference37 "0"
set Initializer37 ""
set External37 0
set Dims37 [list  1 24 34 34]
set Interface37 "wire"
set NameSpace37 [list ]
set DataType37 "[list ap_fixed 8 2 0 0 0 ]"
set Port37 [list $PortName37 $Interface37 $DataType37 $Pointer37 $Dims37 $Const37 $Volatile37 $ArrayOpt37 $Initializer37 $External37 $NameSpace37]
lappend globalVariable $Port37
set PortList ""
set PortName1 "image"
set BitWidth1 "32"
set ArrayOpt1 ""
set Const1 "0"
set Volatile1 "0"
set Pointer1 "0"
set Reference1 "0"
set Dims1 [list 1 3 32 32]
set Interface1 "wire"
set DataType1 "[list ap_fixed 8 2 0 0 0 ]"
set Port1 [list $PortName1 $Interface1 $DataType1 $Pointer1 $Dims1 $Const1 $Volatile1 $ArrayOpt1]
lappend PortList $Port1
set PortName2 "conv1_weight"
set BitWidth2 "32"
set ArrayOpt2 ""
set Const2 "0"
set Volatile2 "0"
set Pointer2 "0"
set Reference2 "0"
set Dims2 [list 24 3 3 3]
set Interface2 "wire"
set DataType2 "[list ap_fixed 8 2 0 0 0 ]"
set Port2 [list $PortName2 $Interface2 $DataType2 $Pointer2 $Dims2 $Const2 $Volatile2 $ArrayOpt2]
lappend PortList $Port2
set PortName3 "shuffle_conv_3x3"
set BitWidth3 "32"
set ArrayOpt3 ""
set Const3 "0"
set Volatile3 "0"
set Pointer3 "0"
set Reference3 "0"
set Dims3 [list 1080 1 3 3]
set Interface3 "wire"
set DataType3 "[list ap_fixed 8 2 0 0 0 ]"
set Port3 [list $PortName3 $Interface3 $DataType3 $Pointer3 $Dims3 $Const3 $Volatile3 $ArrayOpt3]
lappend PortList $Port3
set PortName4 "shuffle_conv_1x1"
set BitWidth4 "32"
set ArrayOpt4 ""
set Const4 "0"
set Volatile4 "0"
set Pointer4 "0"
set Reference4 "0"
set Dims4 [list 5496 24 1 1]
set Interface4 "wire"
set DataType4 "[list ap_fixed 8 2 0 0 0 ]"
set Port4 [list $PortName4 $Interface4 $DataType4 $Pointer4 $Dims4 $Const4 $Volatile4 $ArrayOpt4]
lappend PortList $Port4
set PortName5 "conv_last_weight"
set BitWidth5 "32"
set ArrayOpt5 ""
set Const5 "0"
set Volatile5 "0"
set Pointer5 "0"
set Reference5 "0"
set Dims5 [list 512 192 1 1]
set Interface5 "wire"
set DataType5 "[list ap_fixed 8 2 0 0 0 ]"
set Port5 [list $PortName5 $Interface5 $DataType5 $Pointer5 $Dims5 $Const5 $Volatile5 $ArrayOpt5]
lappend PortList $Port5
set PortName6 "fc_weight"
set BitWidth6 "32"
set ArrayOpt6 ""
set Const6 "0"
set Volatile6 "0"
set Pointer6 "0"
set Reference6 "0"
set Dims6 [list 10 512]
set Interface6 "wire"
set DataType6 "[list ap_fixed 8 2 0 0 0 ]"
set Port6 [list $PortName6 $Interface6 $DataType6 $Pointer6 $Dims6 $Const6 $Volatile6 $ArrayOpt6]
lappend PortList $Port6
set PortName7 "bias"
set BitWidth7 "32"
set ArrayOpt7 ""
set Const7 "0"
set Volatile7 "0"
set Pointer7 "0"
set Reference7 "0"
set Dims7 [list 3618]
set Interface7 "wire"
set DataType7 "[list ap_fixed 8 2 0 0 0 ]"
set Port7 [list $PortName7 $Interface7 $DataType7 $Pointer7 $Dims7 $Const7 $Volatile7 $ArrayOpt7]
lappend PortList $Port7
set PortName8 "fc_output"
set BitWidth8 "32"
set ArrayOpt8 ""
set Const8 "0"
set Volatile8 "0"
set Pointer8 "0"
set Reference8 "0"
set Dims8 [list 1000]
set Interface8 "wire"
set DataType8 "[list ap_fixed 8 2 0 0 0 ]"
set Port8 [list $PortName8 $Interface8 $DataType8 $Pointer8 $Dims8 $Const8 $Volatile8 $ArrayOpt8]
lappend PortList $Port8
set PortName0 "return"
set BitWidth0 "32"
set ArrayOpt0 ""
set Const0 "0"
set Volatile0 "0"
set Pointer0 "0"
set Reference0 "0"
set Dims0 [list 0]
set Interface0 "wire"
set DataType0 "int"
set Port0 [list $PortName0 $Interface0 $DataType0 $Pointer0 $Dims0 $Const0 $Volatile0 $ArrayOpt0]
lappend PortList $Port0
set globalAPint "" 
set returnAPInt "" 
set hasCPPAPInt 0 
set argAPInt "" 
set hasCPPAPFix 1 
set hasSCFix 0 
set hasCBool 0 
set hasCPPComplex 0 
set isTemplateTop 0
set hasHalf 0 
set dataPackList ""
set module [list $moduleName $PortList $rawDecl $argAPInt $returnAPInt $dataPackList]

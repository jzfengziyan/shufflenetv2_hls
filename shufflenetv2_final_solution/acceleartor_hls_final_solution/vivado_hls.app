<project xmlns="com.autoesl.autopilot.project" name="acceleartor_hls_final_solution" top="ShuffleNetV2">
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow name="csim" csimMode="0" lastCsimMode="0" compiler="true" compilerChoices="clang"/>
    </Simulation>
    <files xmlns="">
        <file name="../test.cpp" sc="0" tb="1" cflags=" "/>
        <file name="bias.bin" sc="0" tb="false" cflags=""/>
        <file name="acceleartor_hls_final_solution/components.cpp" sc="0" tb="false" cflags=""/>
        <file name="acceleartor_hls_final_solution/conv1_weight.bin" sc="0" tb="false" cflags=""/>
        <file name="acceleartor_hls_final_solution/conv_last_weight.bin" sc="0" tb="false" cflags=""/>
        <file name="acceleartor_hls_final_solution/fc_weight.bin" sc="0" tb="false" cflags=""/>
        <file name="acceleartor_hls_final_solution/plane.bin" sc="0" tb="false" cflags=""/>
        <file name="acceleartor_hls_final_solution/shuffle_conv_1x1.bin" sc="0" tb="false" cflags=""/>
        <file name="acceleartor_hls_final_solution/shuffle_conv_3x3.bin" sc="0" tb="false" cflags=""/>
        <file name="acceleartor_hls_final_solution/shufflenet.cpp" sc="0" tb="false" cflags=""/>
        <file name="acceleartor_hls_final_solution/shufflenet.h" sc="0" tb="false" cflags=""/>
        <file name="acceleartor_hls_final_solution/test.cpp" sc="0" tb="false" cflags=""/>
        <file name="acceleartor_hls_final_solution/vivado_hls.app" sc="0" tb="false" cflags=""/>
    </files>
    <solutions xmlns="">
        <solution name="naive" status="inactive"/>
        <solution name="optimize_conv1" status="inactive"/>
        <solution name="add_adding_engine" status="inactive"/>
        <solution name="optimization_sub1x1" status="inactive"/>
        <solution name="optimization_sub_1x1+3x3" status="inactive"/>
        <solution name="optimization_allfactor24_apint8" status="inactive"/>
        <solution name="optimization_allfactor24_FIX8" status="inactive"/>
        <solution name="optimize_onlybram_left" status="inactive"/>
        <solution name="final_solution" status="active"/>
    </solutions>
</project>


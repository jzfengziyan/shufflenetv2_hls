<project xmlns="com.autoesl.autopilot.project" name="acceleartor_hls_padding" top="ShuffleNetV2">
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow name="csim" csimMode="0" lastCsimMode="0" compiler="true" compilerChoices="clang"/>
    </Simulation>
    <files xmlns="">
        <file name="../test.cpp" sc="0" tb="1" cflags=" "/>
        <file name="acceleartor_hls_padding/shufflenet.h" sc="0" tb="false" cflags=""/>
        <file name="acceleartor_hls_padding/shufflenet.cpp" sc="0" tb="false" cflags=""/>
        <file name="acceleartor_hls_padding/shuffle_conv_3x3.bin" sc="0" tb="false" cflags=""/>
        <file name="acceleartor_hls_padding/shuffle_conv_1x1.bin" sc="0" tb="false" cflags=""/>
        <file name="acceleartor_hls_padding/plane.bin" sc="0" tb="false" cflags=""/>
        <file name="acceleartor_hls_padding/fc_weight.bin" sc="0" tb="false" cflags=""/>
        <file name="acceleartor_hls_padding/conv_last_weight.bin" sc="0" tb="false" cflags=""/>
        <file name="acceleartor_hls_padding/conv1_weight.bin" sc="0" tb="false" cflags=""/>
        <file name="acceleartor_hls_padding/components.cpp" sc="0" tb="false" cflags=""/>
        <file name="acceleartor_hls_padding/bias.bin" sc="0" tb="false" cflags=""/>
    </files>
    <solutions xmlns="">
        <solution name="naive" status="active"/>
    </solutions>
</project>


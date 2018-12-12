<project xmlns="com.autoesl.autopilot.project" name="accelerator_hls" top="ShuffleNetV2">
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow name="csim" csimMode="0" lastCsimMode="0" compiler="true" compilerChoices="clang"/>
    </Simulation>
    <files xmlns="">
        <file name="../test.cpp" sc="0" tb="1" cflags=" "/>
        <file name="accelerator_hls/shufflenet.h" sc="0" tb="false" cflags=""/>
        <file name="accelerator_hls/shufflenet.cpp" sc="0" tb="false" cflags=""/>
        <file name="accelerator_hls/components.cpp" sc="0" tb="false" cflags=""/>
        <file name="accelerator_hls/accelerator.cpp" sc="0" tb="false" cflags=""/>
    </files>
    <solutions xmlns="">
        <solution name="naive" status="active"/>
    </solutions>
</project>


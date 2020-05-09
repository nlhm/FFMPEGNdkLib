package kyen.lhm.ffmpeglib;

public class FFMPEGLib {

    native private void Test();
    public void test(){
        Test();
    }
    static {
        System.loadLibrary("ffmpeglib");
    }
}

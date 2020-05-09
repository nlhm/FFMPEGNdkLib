package kyen.lhm.ffmpegndklib;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;

import kyen.lhm.ffmpeglib.FFMPEGLib;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        FFMPEGLib ffmpegLib =  new FFMPEGLib();
        ffmpegLib.test();
    }
}

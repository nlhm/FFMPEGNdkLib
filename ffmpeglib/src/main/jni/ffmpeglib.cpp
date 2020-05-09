//
// Created by KyenW on 2020/5/8.
//
#include "kyen_lhm_ffmpeglib_FFMPEGLib.h"
#include "Log.h"
#include <string>
#ifdef __cplusplus
extern "C" {
#endif
#include "libavutil/opt.h"
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"
/*
 * Class:     kyen_lhm_ffmpeglib_FFMPEGLib
 * Method:    Test
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_kyen_lhm_ffmpeglib_FFMPEGLib_Test
        (JNIEnv *, jobject){
    LOGE("TEST FFMPEG VERSION: %d\r", avcodec_version());
    LOGE("TEST FFMPEG License: %s\r", avcodec_license());
    LOGE("TEST FFMPEG Configuration: %s\r", avcodec_configuration());

}

#ifdef __cplusplus
}
#endif

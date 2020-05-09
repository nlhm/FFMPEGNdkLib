//
// Created by KyenW on 2020/5/8.
//

#ifndef FFMPEGNDKLIB_LOG_H
#define FFMPEGNDKLIB_LOG_H

/**
 * debug输出
 */
#include <android/log.h>

#define LOG_TAG    "hpc -- JNILOG"

#define LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG, __VA_ARGS__)
#define LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG, __VA_ARGS__)
#define LOGW(...)  __android_log_print(ANDROID_LOG_WARN,LOG_TAG, __VA_ARGS__)
#define LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG, __VA_ARGS__)
#define LOGF(...)  __android_log_print(ANDROID_LOG_FATAL,LOG_TAG, __VA_ARGS__)
/**
 * end of debug输出
 */



#endif //FFMPEGNDKLIB_LOG_H

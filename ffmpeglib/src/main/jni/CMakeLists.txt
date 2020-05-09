# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.4.1)
# configure import libs
set(distribution_DIR ${CMAKE_CURRENT_SOURCE_DIR}/distribution)


add_library(avcodec-58
        SHARED
        IMPORTED)
set_target_properties(avcodec-58
        PROPERTIES IMPORTED_LOCATION
        ${distribution_DIR}/lib/${ANDROID_ABI}/libavcodec-58.so)


add_library(avfilter-7
        SHARED
        IMPORTED)
set_target_properties(avfilter-7
        PROPERTIES IMPORTED_LOCATION
        ${distribution_DIR}/lib/${ANDROID_ABI}/libavfilter-7.so)


add_library(avformat-58
        SHARED
        IMPORTED)
set_target_properties(avformat-58
        PROPERTIES IMPORTED_LOCATION
        ${distribution_DIR}/lib/${ANDROID_ABI}/libavformat-58.so)


add_library(swscale-5
        SHARED
        IMPORTED)
set_target_properties(swscale-5
        PROPERTIES IMPORTED_LOCATION
        ${distribution_DIR}/lib/${ANDROID_ABI}/libswscale-5.so)


add_library(avutil-56
        SHARED
        IMPORTED)
set_target_properties(avutil-56
        PROPERTIES IMPORTED_LOCATION
        ${distribution_DIR}/lib/${ANDROID_ABI}/libavutil-56.so)


add_library(swresample-3
        SHARED
        IMPORTED)
set_target_properties(swresample-3
        PROPERTIES IMPORTED_LOCATION
        ${distribution_DIR}/lib/${ANDROID_ABI}/libswresample-3.so)


add_library(avdevice-58
        SHARED
        IMPORTED)
set_target_properties(avdevice-58
        PROPERTIES IMPORTED_LOCATION
        ${distribution_DIR}/lib/${ANDROID_ABI}/libavdevice-58.so)


add_library(postproc-55
        SHARED
        IMPORTED)
set_target_properties(postproc-55
        PROPERTIES IMPORTED_LOCATION
        ${distribution_DIR}/lib/${ANDROID_ABI}/libpostproc-55.so)




include_directories(${distribution_DIR}/include/${ANDROID_ABI}/include)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds them for you.
# Gradle automatically packages shared libraries with your APK.

add_library( # Sets the name of the library.
             ffmpeglib

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
                ffmpeglib.cpp
        )




# Searches for a specified prebuilt library and stores the path as a
# variable. Because CMake includes system libraries in the search path by
# default, you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.

find_library( # Sets the name of the path variable.
              log-lib
              # Specifies the name of the NDK library that
              # you want CMake to locate.
              log )

target_include_directories(
        ffmpeglib
        PRIVATE
        ${distribution_DIR}/include/${ANDROID_ABI}/include
)
# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.

target_link_libraries( # Specifies the target library.
        ffmpeglib

        # Links the target library to the log library
        # included in the NDK.
        #android
        -Wl,--start-group
        avformat-58
        avcodec-58
        avfilter-7
        swscale-5
        avutil-56
        swresample-3
        avdevice-58
        postproc-55
        -Wl,--end-group
       ${log-lib} )

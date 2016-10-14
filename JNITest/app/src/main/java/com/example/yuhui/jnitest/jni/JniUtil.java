package com.example.yuhui.jnitest.jni;

/**
 * Created by yuhui on 2016-10-14.
 */
public class JniUtil {
    static {
        System.loadLibrary("JniTest");
    }

    public native String append(String str1, String str2);
}

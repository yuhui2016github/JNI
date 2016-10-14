//
// Created by yuhui on 2016-10-14.
//

#include <jni.h>
#include <malloc.h>
#include <string.h>
#include <stdio.h>

JNIEXPORT jstring  JNICALL Java_com_example_yuhui_jnitest_jni_JniUtil_append(
        JNIEnv *env, jobject obj, jstring jstr1, jstring jstr2) {
    const char *str1, *str2;
    char *result;
    int len1;
    jstring jresult;
    str1 = (*env)->GetStringUTFChars(env, jstr1, NULL);
    str2 = (*env)->GetStringUTFChars(env, jstr2, NULL);
    len1 = strlen(str1);
    result = malloc((len1+len1)* sizeof(char));
    strcpy(result, str1);
    strcpy(result + len1, str2);
    (*env)->ReleaseStringUTFChars(env, jstr1, str1);
    (*env)->ReleaseStringUTFChars(env, jstr2, str2);
    jresult = (*env)->NewStringUTF(env, result);
    free(result);
    return jresult;
}

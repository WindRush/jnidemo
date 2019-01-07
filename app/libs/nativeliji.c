//
// Created by 杨利海 on 2018/1/30.
//
#include <jni.h>
#include <android/log.h>

#define LOGE(FORMAT, ...) __android_log_print(ANDROID_LOG_ERROR,"huannan",FORMAT,__VA_ARGS__)


JNIEXPORT void JNICALL
Java_com_android_jnidemo_JniManager_logc(JNIEnv *env,jclass jcls,jstring str){
    const char* s_str = (*env)->GetStringUTFChars(env,str,NULL);
    __android_log_print(ANDROID_LOG_ERROR,"ylh","数字是%d",1);
    LOGE("%s",s_str);
    (*env)->ReleaseStringUTFChars(env,str,s_str);
}


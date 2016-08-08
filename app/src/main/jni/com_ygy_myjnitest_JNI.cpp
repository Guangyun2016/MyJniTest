//
// Created by Administrator on 2016/8/8 0008.
//

#include "com_ygy_myjnitest_JNI.h"
/*
 * Class:     io_github_yanbober_ndkapplication_NdkJniUtils
 * Method:    getCLanguageString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_ygy_myjnitest_JNI_Hello(JNIEnv *env, jobject obj) {
//    return (*env)->NewStringUTF(env, "Hello from JNI !");//如果是用C语言格式就用这种方式
    return env->NewStringUTF((char *) "Hello from JNI !");//C++用这种格式
}
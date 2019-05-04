#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_eco_data_m3_net_p2p_test_1jni_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

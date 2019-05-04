#include <jni.h>
#include <string>

#include <rtc_base/ssl_adapter.h>

extern "C" JNIEXPORT jstring JNICALL
Java_eco_data_m3_net_p2p_test_1jni_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";

    rtc::InitializeSSL();
    return env->NewStringUTF(hello.c_str());
}

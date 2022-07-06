#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_securekeyscmake_MainActivity_getAPIKey(
        JNIEnv* env,
        jobject /* this */) {
    std::string api_key = "API KEY";
    return env->NewStringUTF(api_key.c_str());
}
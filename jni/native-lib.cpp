#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_edgedetectionviewer_MainActivity_nativeHello(JNIEnv* env, jobject /* this */) {
    std::string hello = "Hello from native C++ (OpenCV placeholder)";
    return env->NewStringUTF(hello.c_str());
}

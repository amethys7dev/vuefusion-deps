#include <jni.h>

#ifndef _Included_util_CustomByteBuffer
#define _Included_util_CustomByteBuffer
#ifdef __cplusplus
extern "C" {
#endif
JNIEXPORT jobject JNICALL Java_util_CustomByteBuffer_createBuffer(JNIEnv *,
                                                                  jobject,
                                                                  jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif

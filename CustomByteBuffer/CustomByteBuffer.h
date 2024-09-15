#include <jni.h>

#ifndef _Included_helper_CustomByteBuffer
#define _Included_helper_CustomByteBuffer
#ifdef __cplusplus
extern "C" {
#endif
JNIEXPORT jobject JNICALL Java_helper_CustomByteBuffer_createBuffer
  (JNIEnv *, jobject, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif

#include "CustomByteBuffer.h"
#include <jni.h>
#include <stdint.h>
#include <stdlib.h>

JNIEXPORT jobject JNICALL Java_helper_CustomByteBuffer_createBuffer(
    JNIEnv *env, jclass clazz, jlong address, jlong capacity) {
  void *ptr = (void *)(uintptr_t)address;

  return (*env)->NewDirectByteBuffer(env, ptr, capacity);
}
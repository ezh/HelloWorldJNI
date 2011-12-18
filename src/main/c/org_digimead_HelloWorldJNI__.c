#define _GNU_SOURCE

#include <stdio.h>
#include <string.h>
#include <org_digimead_HelloWorldJNI__.h>

/*
 * Class:     org_digimead_HelloWorldJNI__
 * Method:    printOne
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_digimead_HelloWorldJNI_00024_printOne
  (JNIEnv *env, jobject obj)
{
  printf("print One\n");
}

/*
 * Class:     org_digimead_HelloWorldJNI__
 * Method:    printTwo
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_digimead_HelloWorldJNI_00024_printTwo
  (JNIEnv *env, jobject obj)
{
  printf("print Two\n");
}

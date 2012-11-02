/*
 * DesTest.cpp
 *
 *  Created on: 2012-10-19
 *      Author: lzero
 */
#include <iostream>
#include "DesTest.h"

/*
 * Class:     com_test_des_DesTest
 * Method:    GetMiStr
 * Signature: (Lcom/test/des/DesUtil;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_test_des_DesTest_DevOrResStr__Lcom_test_des_DesUtil_2Ljava_lang_String_2Ljava_lang_String_2Ljava_lang_String_2Z(
		JNIEnv * env, jclass desTest, jobject desUtil, jstring methodName,
		jstring mingStr, jstring keyStr, jboolean isEncrypt) {
	jstring result;
	jclass class_DesUtil;
	jmethodID id_des;

	const char * mName = env->GetStringUTFChars(methodName, NULL);
	class_DesUtil = env->GetObjectClass(desUtil);

	id_des = env->GetMethodID(class_DesUtil, mName,
			"(Ljava/lang/String;Ljava/lang/String;Z)Ljava/lang/String;");

	result = (jstring) env->CallObjectMethod(desUtil, id_des, mingStr, keyStr, isEncrypt);
	return result;
}

/*
 * Class:     com_test_des_DesTest
 * Method:    GetMiStr
 * Signature: (Lcom/test/des/DesUtil;Ljava/lang/String;Ljava/security/Key;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_test_des_DesTest_DevOrResStr__Lcom_test_des_DesUtil_2Ljava_lang_String_2Ljava_lang_String_2Ljava_security_Key_2Z(
		JNIEnv * env, jclass desTest, jobject desUtil, jstring methodName,
		jstring mingStr, jobject key, jboolean isEncrypt) {
	jstring result;
	jclass class_DesUtil;
	jmethodID id_des;

	const char * mName = env->GetStringUTFChars(methodName, NULL);
	class_DesUtil = env->GetObjectClass(desUtil);

	id_des = env->GetMethodID(class_DesUtil, mName,
			"(Ljava/lang/String;Ljava/security/Key;Z)Ljava/lang/String;");

	result = (jstring) env->CallObjectMethod(desUtil, id_des, mingStr, key, isEncrypt);
	return result;
}

/*
 * Class:     com_test_des_DesTest
 * Method:    GetMingStr
 * Signature: (Lcom/test/des/DesUtil;Ljava/lang/String;Ljava/lang/String;Ljava/security/Key;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_test_des_DesTest_GetMingStr__Lcom_test_des_ResUtil_2Ljava_lang_String_2Ljava_lang_String_2Ljava_lang_String_2(
		JNIEnv * env, jclass desTest, jobject resUtil, jstring methodName,
		jstring miStr, jstring keyStr) {
	jstring result;
	jclass class_ResUtil;
	jmethodID id_res;

	const char * mName = env->GetStringUTFChars(methodName, NULL);
	class_ResUtil = env->GetObjectClass(resUtil);

	id_res = env->GetMethodID(class_ResUtil, mName,
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");

	result = (jstring) env->CallObjectMethod(resUtil, id_res, miStr, keyStr);
	return result;
}

/*
 * Class:     com_test_des_DesTest
 * Method:    GetMingStr
 * Signature: (Lcom/test/des/DesUtil;Ljava/lang/String;Ljava/security/Key;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_test_des_DesTest_GetMingStr__Lcom_test_des_ResUtil_2Ljava_lang_String_2Ljava_lang_String_2Ljava_security_Key_2(
		JNIEnv * env, jclass desTest, jobject resUtil, jstring methodName,
		jstring miStr, jobject key) {
	jstring result;
	jclass class_ResUtil;
	jmethodID id_res;

	const char * mName = env->GetStringUTFChars(methodName, NULL);
	class_ResUtil = env->GetObjectClass(resUtil);

	id_res = env->GetMethodID(class_ResUtil, mName,
			"(Ljava/lang/String;Ljava/security/Key;)Ljava/lang/String;");

	result = (jstring) env->CallObjectMethod(resUtil, id_res, miStr, key);
	return result;
}


/*******************************************************************************
 * Copyright 2015 Thomson Reuters
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *******************************************************************************/
/* NOTE: This file is autogenerated, do not edit this file directly.*/

#include <TRChartsJNI/FixedRangeCalculator.hpp>
#include <TRChartsJNI/Support/Marshallers.hpp>
#include <TRChartsJNI/Support/Handle.hpp>
#include <TRChartsJNI/Support/Utils.hpp>
#include <TRCharts/FixedRangeCalculator.hpp>

using namespace TRChartsJNI;

JNIEXPORT jlong JNICALL Java_com_thomsonreuters_corptech_charts_FixedRangeCalculator_nativeCreate(JNIEnv *env, jobject obj)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		Charts::FixedRangeCalculator * const nativeObject = new Charts::FixedRangeCalculator();
		Handle * const handle = new Handle(env, nativeObject, obj);
		nativeObject->setHandle(handle);
		return reinterpret_cast<jlong>(handle);
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_FixedRangeCalculator_nativeDestroy(JNIEnv *env, jobject obj, jlong ptr)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		delete handle;
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT jobject JNICALL Java_com_thomsonreuters_corptech_charts_FixedRangeCalculator_nativeGetRange(JNIEnv * env, jobject obj, jlong ptr)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getRangeMarshaller().unmarshall(env, handle->getNativeObject<Charts::FixedRangeCalculator>(env)->getRange());
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_FixedRangeCalculator_nativeSetRange(JNIEnv * env, jobject obj, jlong ptr, jobject value)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		handle->getNativeObject<Charts::FixedRangeCalculator>(env)->setRange(TRChartsJNI::getRangeMarshaller().marshall(env, value));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT jobject JNICALL Java_com_thomsonreuters_corptech_charts_FixedRangeCalculator_nativeCalculateRange(JNIEnv * env, jobject obj, jlong ptr, jobject dataRange)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getRangeMarshaller().unmarshall(env, handle->getNativeObject<Charts::FixedRangeCalculator>(env)->calculateRange(TRChartsJNI::getRangeMarshaller().marshall(env, dataRange)));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}


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

#include <TRChartsJNI/PointSeries.hpp>
#include <TRChartsJNI/Support/Marshallers.hpp>
#include <TRChartsJNI/Support/Handle.hpp>
#include <TRChartsJNI/Support/Utils.hpp>
#include <TRCharts/PointSeries.hpp>

using namespace TRChartsJNI;

JNIEXPORT jlong JNICALL Java_com_thomsonreuters_corptech_charts_PointSeries_nativeCreate(JNIEnv *env, jobject obj)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		Charts::PointSeries * const nativeObject = new Charts::PointSeries();
		Handle * const handle = new Handle(env, nativeObject, obj);
		nativeObject->setHandle(handle);
		return reinterpret_cast<jlong>(handle);
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_PointSeries_nativeDestroy(JNIEnv *env, jobject obj, jlong ptr)
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

JNIEXPORT jobject JNICALL Java_com_thomsonreuters_corptech_charts_PointSeries_nativeGetPointStyle(JNIEnv * env, jobject obj, jlong ptr)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getPointStyleMarshaller().unmarshall(env, handle->getNativeObject<Charts::PointSeries>(env)->getPointStyle());
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_PointSeries_nativeSetPointStyle(JNIEnv * env, jobject obj, jlong ptr, jobject value)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		handle->getNativeObject<Charts::PointSeries>(env)->setPointStyle(TRChartsJNI::getPointStyleMarshaller().marshall(env, value));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}
JNIEXPORT jobject JNICALL Java_com_thomsonreuters_corptech_charts_PointSeries_nativeGetDataSource(JNIEnv * env, jobject obj, jlong ptr)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getContinuousDataSource_ScalarDatumMarshaller().unmarshall(env, handle->getNativeObject<Charts::PointSeries>(env)->getDataSource());
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_PointSeries_nativeSetDataSource(JNIEnv * env, jobject obj, jlong ptr, jobject value)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		handle->getNativeObject<Charts::PointSeries>(env)->setDataSource(TRChartsJNI::getContinuousDataSource_ScalarDatumMarshaller().marshall(env, value));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT jobject JNICALL Java_com_thomsonreuters_corptech_charts_PointSeries_nativeGetDatum(JNIEnv * env, jobject obj, jlong ptr, jlong index)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getScalarDatumMarshaller().unmarshall(env, handle->getNativeObject<Charts::PointSeries>(env)->getDatum(TRChartsJNI::getIntegerMarshaller().marshall(env, index)));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT jobject JNICALL Java_com_thomsonreuters_corptech_charts_PointSeries_nativeInterpolateDatum(JNIEnv * env, jobject obj, jlong ptr, jdouble abscissa)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getScalarDatumMarshaller().unmarshall(env, handle->getNativeObject<Charts::PointSeries>(env)->interpolateDatum(TRChartsJNI::getNumberMarshaller().marshall(env, abscissa)));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}


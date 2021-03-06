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

#ifndef TRChartsJNI_Support_NumberMarshaller_hpp
#define TRChartsJNI_Support_NumberMarshaller_hpp

#include <TRChartsJNI/Support/Marshaller.hpp>
#include <TRChartsJNI/Support/Utils.hpp>

namespace TRChartsJNI
{
	class NumberMarshaller : public Marshaller<double, jdouble>
	{
	public:
		virtual double marshall(JNIEnv * env, const jdouble & in) const;

		virtual jdouble unmarshall(JNIEnv * env, const double & in) const;

		virtual jvalue unmarshallToValue(JNIEnv * env, const double & in) const;

		virtual double getFieldValue(JNIEnv * env, jobject obj, jfieldID fieldID) const;

		virtual void setFieldValue(JNIEnv * env, jobject obj, jfieldID fieldID, const double & value) const;

		virtual double callMethod(JNIEnv * env, jobject obj, jmethodID methodID, jvalue * args) const;

		virtual double marshallBoxed(JNIEnv * env, const jobject & value) const;

		virtual jobject unmarshallBoxed(JNIEnv * env, const double & value) const;
	};

	inline double NumberMarshaller::marshall(JNIEnv * const env, const jdouble & in) const
	{
		return double(in);
	}

	inline jdouble NumberMarshaller::unmarshall(JNIEnv * const env, const double & in) const
	{
		return jdouble(in);
	}

	inline jvalue NumberMarshaller::unmarshallToValue(JNIEnv * env, const double & in) const
	{
		jvalue value{};
		value.d = unmarshall(env, in);
		return value;
	}

	inline double NumberMarshaller::getFieldValue(JNIEnv * const env, const jobject obj, const jfieldID fieldID) const
	{
		return marshall(env, env->GetDoubleField(obj, fieldID));
	}

	inline void NumberMarshaller::setFieldValue(JNIEnv * const env, const jobject obj, const jfieldID fieldID, const double & value) const
	{
		env->SetDoubleField(obj, fieldID, unmarshall(env, value));
	}

	inline double NumberMarshaller::callMethod(JNIEnv * const env, const jobject obj, const jmethodID methodID, jvalue * const args) const
	{
		return marshall(env, env->CallDoubleMethodA(obj, methodID, args));
	}

	inline double NumberMarshaller::marshallBoxed(JNIEnv * const env, const jobject & in) const
	{
		return marshall(env, Utils::unboxDouble(env, in));
	}

	inline jobject NumberMarshaller::unmarshallBoxed(JNIEnv * const env, const double & in) const
	{
		return Utils::boxDouble(env, unmarshall(env, in));
	}
}

#endif
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

#ifndef TRChartsJNI_Support_AxisLayoutInterfaceMarshaller_cpp
#define TRChartsJNI_Support_AxisLayoutInterfaceMarshaller_cpp

#include <TRChartsJNI/Support/AxisLayoutInterfaceMarshaller.hpp>
#include <TRChartsJNI/Support/Marshallers.hpp>
#include <TRChartsJNI/Support/Handle.hpp>

#include <cassert>


bool TRChartsJNI::AxisLayoutInterfaceMarshaller::inited = false;


jclass TRChartsJNI::AxisLayoutInterfaceMarshaller::cls = nullptr;


jmethodID TRChartsJNI::AxisLayoutInterfaceMarshaller::midCalculateTransform = nullptr;


class TRChartsJNI::AxisLayoutInterfaceMarshaller::Proxy : public Charts::AxisLayout
{
public:
	Proxy(JNIEnv * env, const AxisLayoutInterfaceMarshaller & marshaller, jobject hostObject);

	virtual ~Proxy(void);

	jobject getHostObject(JNIEnv * env) const;

	virtual Charts::DataTransform calculateTransform(const std::shared_ptr<Charts::ContinuousAxis> & axis, const Charts::Range & dataRange, double screenLength, const Charts::DataTransform & renderTransform) const;

private:
	const AxisLayoutInterfaceMarshaller & marshaller;
	const jweak weakHostObject;
};



void TRChartsJNI::AxisLayoutInterfaceMarshaller::checkInited(JNIEnv * const env)
{
	if(!inited) {
		inited = true;
		cls = (jclass)env->NewGlobalRef(env->FindClass("com/thomsonreuters/corptech/charts/AxisLayout"));
		midCalculateTransform = env->GetMethodID(cls, "calculateTransform", "(Lcom/thomsonreuters/corptech/charts/ContinuousAxis;Lcom/thomsonreuters/corptech/charts/Range;DLcom/thomsonreuters/corptech/charts/DataTransform;)Lcom/thomsonreuters/corptech/charts/DataTransform;");
	}
}


std::shared_ptr<Charts::AxisLayout> TRChartsJNI::AxisLayoutInterfaceMarshaller::marshall(JNIEnv * const env, const jobject & in) const
{
	checkInited(env);
	if(in) {
		if(Utils::isBaseObjectInstance(env, in)) {
			Handle * const handle = reinterpret_cast<Handle *>(Utils::getBaseObjectHandle(env, in));
			return handle->getNativeObject<Charts::AxisLayout>(env);
		} else {
			Proxy * const impl = new Proxy(env, *this, in);
			const jobject strongRef = env->NewGlobalRef(in);
			return std::shared_ptr<Charts::AxisLayout>(impl, [=](Charts::AxisLayout * const ptr) -> void {
				delete ptr;
				env->DeleteGlobalRef(strongRef);
			});
		}
	}
	return std::shared_ptr<Charts::AxisLayout>();
}


jobject TRChartsJNI::AxisLayoutInterfaceMarshaller::unmarshall(JNIEnv * const env, const std::shared_ptr<Charts::AxisLayout> & in) const
{
	checkInited(env);
	if(in) {
		CodegenSupport::BaseObject * const baseObject = dynamic_cast<CodegenSupport::BaseObject *>(in.get());
		if(baseObject) {
			Handle * const handle = reinterpret_cast<Handle *>(baseObject->getHandle());
			return handle->getHostObject(env);
		} else {
			Proxy * proxy = dynamic_cast<Proxy *>(in.get());
			if(proxy) {
				return proxy->getHostObject(env);
			} else {
				throw new std::logic_error("Cannot unmarshall");
			}
		}
	}
	return nullptr;
}



TRChartsJNI::AxisLayoutInterfaceMarshaller::Proxy::Proxy(JNIEnv * const env, const AxisLayoutInterfaceMarshaller & marshaller, const jobject hostObject)
	:marshaller(marshaller), weakHostObject(env->NewWeakGlobalRef(hostObject))
{
}


TRChartsJNI::AxisLayoutInterfaceMarshaller::Proxy::~Proxy(void)
{
	JNIEnv * const env = Utils::getThreadEnv();
	assert(env);
	env->DeleteWeakGlobalRef(weakHostObject);
}


jobject TRChartsJNI::AxisLayoutInterfaceMarshaller::Proxy::getHostObject(JNIEnv * const env) const
{
	return env->NewLocalRef(weakHostObject);
}


Charts::DataTransform TRChartsJNI::AxisLayoutInterfaceMarshaller::Proxy::calculateTransform(const std::shared_ptr<Charts::ContinuousAxis> & axis, const Charts::Range & dataRange, double screenLength, const Charts::DataTransform & renderTransform) const
{
	JNIEnv * const env = Utils::getThreadEnv();
	assert(env);
	checkInited(env);
	jvalue args[] = {
		TRChartsJNI::getContinuousAxisMarshaller().unmarshallToValue(env, axis),
		TRChartsJNI::getRangeMarshaller().unmarshallToValue(env, dataRange),
		TRChartsJNI::getNumberMarshaller().unmarshallToValue(env, screenLength),
		TRChartsJNI::getDataTransformMarshaller().unmarshallToValue(env, renderTransform)
	};
	const jobject hostObject = getHostObject(env);
	const Charts::DataTransform result = TRChartsJNI::getDataTransformMarshaller().callMethod(env, hostObject, midCalculateTransform, args);
	env->DeleteLocalRef(hostObject);
	return result;
}

#endif
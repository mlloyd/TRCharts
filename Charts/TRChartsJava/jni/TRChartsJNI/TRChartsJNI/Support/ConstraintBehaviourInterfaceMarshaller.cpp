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

#ifndef TRChartsJNI_Support_ConstraintBehaviourInterfaceMarshaller_cpp
#define TRChartsJNI_Support_ConstraintBehaviourInterfaceMarshaller_cpp

#include <TRChartsJNI/Support/ConstraintBehaviourInterfaceMarshaller.hpp>
#include <TRChartsJNI/Support/Marshallers.hpp>
#include <TRChartsJNI/Support/Handle.hpp>

#include <cassert>


bool TRChartsJNI::ConstraintBehaviourInterfaceMarshaller::inited = false;


jclass TRChartsJNI::ConstraintBehaviourInterfaceMarshaller::cls = nullptr;


jmethodID TRChartsJNI::ConstraintBehaviourInterfaceMarshaller::midApply = nullptr;


class TRChartsJNI::ConstraintBehaviourInterfaceMarshaller::Proxy : public Charts::ConstraintBehaviour
{
public:
	Proxy(JNIEnv * env, const ConstraintBehaviourInterfaceMarshaller & marshaller, jobject hostObject);

	virtual ~Proxy(void);

	jobject getHostObject(JNIEnv * env) const;

	virtual Charts::Transform apply(const std::shared_ptr<Charts::Chart> & chart, const Charts::Size & size, const Charts::Transform & transform) const;

private:
	const ConstraintBehaviourInterfaceMarshaller & marshaller;
	const jweak weakHostObject;
};



void TRChartsJNI::ConstraintBehaviourInterfaceMarshaller::checkInited(JNIEnv * const env)
{
	if(!inited) {
		inited = true;
		cls = (jclass)env->NewGlobalRef(env->FindClass("com/thomsonreuters/corptech/charts/ConstraintBehaviour"));
		midApply = env->GetMethodID(cls, "apply", "(Lcom/thomsonreuters/corptech/charts/Chart;Lcom/thomsonreuters/corptech/charts/Size;Lcom/thomsonreuters/corptech/charts/Transform;)Lcom/thomsonreuters/corptech/charts/Transform;");
	}
}


std::shared_ptr<Charts::ConstraintBehaviour> TRChartsJNI::ConstraintBehaviourInterfaceMarshaller::marshall(JNIEnv * const env, const jobject & in) const
{
	checkInited(env);
	if(in) {
		if(Utils::isBaseObjectInstance(env, in)) {
			Handle * const handle = reinterpret_cast<Handle *>(Utils::getBaseObjectHandle(env, in));
			return handle->getNativeObject<Charts::ConstraintBehaviour>(env);
		} else {
			Proxy * const impl = new Proxy(env, *this, in);
			const jobject strongRef = env->NewGlobalRef(in);
			return std::shared_ptr<Charts::ConstraintBehaviour>(impl, [=](Charts::ConstraintBehaviour * const ptr) -> void {
				delete ptr;
				env->DeleteGlobalRef(strongRef);
			});
		}
	}
	return std::shared_ptr<Charts::ConstraintBehaviour>();
}


jobject TRChartsJNI::ConstraintBehaviourInterfaceMarshaller::unmarshall(JNIEnv * const env, const std::shared_ptr<Charts::ConstraintBehaviour> & in) const
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



TRChartsJNI::ConstraintBehaviourInterfaceMarshaller::Proxy::Proxy(JNIEnv * const env, const ConstraintBehaviourInterfaceMarshaller & marshaller, const jobject hostObject)
	:marshaller(marshaller), weakHostObject(env->NewWeakGlobalRef(hostObject))
{
}


TRChartsJNI::ConstraintBehaviourInterfaceMarshaller::Proxy::~Proxy(void)
{
	JNIEnv * const env = Utils::getThreadEnv();
	assert(env);
	env->DeleteWeakGlobalRef(weakHostObject);
}


jobject TRChartsJNI::ConstraintBehaviourInterfaceMarshaller::Proxy::getHostObject(JNIEnv * const env) const
{
	return env->NewLocalRef(weakHostObject);
}


Charts::Transform TRChartsJNI::ConstraintBehaviourInterfaceMarshaller::Proxy::apply(const std::shared_ptr<Charts::Chart> & chart, const Charts::Size & size, const Charts::Transform & transform) const
{
	JNIEnv * const env = Utils::getThreadEnv();
	assert(env);
	checkInited(env);
	jvalue args[] = {
		TRChartsJNI::getChartMarshaller().unmarshallToValue(env, chart),
		TRChartsJNI::getSizeMarshaller().unmarshallToValue(env, size),
		TRChartsJNI::getTransformMarshaller().unmarshallToValue(env, transform)
	};
	const jobject hostObject = getHostObject(env);
	const Charts::Transform result = TRChartsJNI::getTransformMarshaller().callMethod(env, hostObject, midApply, args);
	env->DeleteLocalRef(hostObject);
	return result;
}

#endif
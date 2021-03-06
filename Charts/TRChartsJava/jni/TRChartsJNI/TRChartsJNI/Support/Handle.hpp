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

#ifndef TRChartsJNI_Support_Handle_hpp
#define TRChartsJNI_Support_Handle_hpp

#include <TRChartsJNI/Support/Common.hpp>
#include <TRCodegenSupport/BaseObject.hpp>
#include <TRChartsJNI/Support/Utils.hpp>

#include <cassert>

namespace TRChartsJNI
{
	class Handle
	{
	public:
		Handle(JNIEnv * env, CodegenSupport::BaseObject * nativeObject, jobject hostObject);

		~Handle(void);

		template <typename T>
		std::shared_ptr<T> getNativeObject(JNIEnv * env) const;

		jobject getHostObject(JNIEnv * env) const;

	private:
		CodegenSupport::BaseObject * const nativeObject;
		const jobject weakHostObject;
		mutable std::weak_ptr<CodegenSupport::BaseObject> weakNativeObject;
	};
}

template <typename T>
std::shared_ptr<T> TRChartsJNI::Handle::getNativeObject(JNIEnv * const env) const
{
	std::shared_ptr<CodegenSupport::BaseObject> sharedNativeObject = weakNativeObject.lock();
	if(!sharedNativeObject) {
		const jobject strongRef = env->NewGlobalRef(weakHostObject);
		sharedNativeObject.reset(nativeObject, [=](CodegenSupport::BaseObject * const ptr) -> void {
			JNIEnv * const env = Utils::getThreadEnv();
			assert(env);
			if(env) {
				env->DeleteGlobalRef(strongRef);
			}
		});
		weakNativeObject = sharedNativeObject;
	}
	return std::dynamic_pointer_cast<T>(sharedNativeObject);
}

#endif
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

#ifndef Charts_AutomaticDateTickCalculator_hpp
#define Charts_AutomaticDateTickCalculator_hpp

#include <TRCharts/Common.hpp>
#include <TRCodegenSupport/BaseObject.hpp>
#include <TRCharts/DateTickCalculator.hpp>
#include <TRCharts/DateInterval.hpp>
#include <TRCharts/Range.hpp>

namespace Charts
{
	
	class AutomaticDateTickCalculator;

	
	class GeneratedAutomaticDateTickCalculator : public CodegenSupport::BaseObject, public Charts::DateTickCalculator
	{
	public:
		virtual ~GeneratedAutomaticDateTickCalculator(void);

		std::shared_ptr<AutomaticDateTickCalculator> getSharedPtr(void);

		std::shared_ptr<const AutomaticDateTickCalculator> getSharedPtr(void) const;

		virtual double getTargetScreenInterval(void) const = 0;

		virtual void setTargetScreenInterval(double value) = 0;

		virtual const Charts::DateInterval & getMinInterval(void) const = 0;

		virtual void setMinInterval(const Charts::DateInterval & value) = 0;

		virtual Charts::DateInterval calculateTickInterval(const Charts::Range & dataRange, const Charts::Range & visibleDataRange, double screenLength) const = 0;

	protected:
		GeneratedAutomaticDateTickCalculator(void);

	};
}

#include <TRCharts/Impl/AutomaticDateTickCalculatorImpl.hpp>

#endif
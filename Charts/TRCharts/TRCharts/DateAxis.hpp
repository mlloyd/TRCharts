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

#ifndef Charts_DateAxis_hpp
#define Charts_DateAxis_hpp

#include <TRCharts/Common.hpp>
#include <TRCharts/ContinuousAxis.hpp>
#include <TRCharts/DateInterval.hpp>

namespace Charts
{
	
	class DateAxis;
	class DateFormatter;
	class DateTickCalculator;

	
	class GeneratedDateAxis : public Charts::ContinuousAxis
	{
	public:
		virtual ~GeneratedDateAxis(void);

		std::shared_ptr<DateAxis> getSharedPtr(void);

		std::shared_ptr<const DateAxis> getSharedPtr(void) const;

		virtual double getOffsetSeconds(void) const = 0;

		virtual void setOffsetSeconds(double value) = 0;

		virtual const std::shared_ptr<Charts::DateFormatter> & getTickFormatter(void) const = 0;

		virtual void setTickFormatter(const std::shared_ptr<Charts::DateFormatter> & value) = 0;

		virtual const std::shared_ptr<Charts::DateTickCalculator> & getTickCalculator(void) const = 0;

		virtual void setTickCalculator(const std::shared_ptr<Charts::DateTickCalculator> & value) = 0;

		virtual const Charts::DateInterval & getTickInterval(void) const = 0;

	protected:
		GeneratedDateAxis(void);

	};
}

#include <TRCharts/Impl/DateAxisImpl.hpp>

#endif
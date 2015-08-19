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

#include <TRCharts/RangeDatum.hpp>
#include <TRCharts/RangeDatum.hpp>


Charts::GeneratedRangeDatum::GeneratedRangeDatum(void)
	:Charts::ContinuousDatum(), ordinate(Charts::Range())
{
}


Charts::GeneratedRangeDatum::GeneratedRangeDatum(double abscissa, const Charts::Range & ordinate)
	:Charts::ContinuousDatum(abscissa), ordinate(ordinate)
{
}


bool Charts::GeneratedRangeDatum::operator==(const GeneratedRangeDatum & other) const
{
	bool result = true;
	result = result && (this->ordinate == other.ordinate);
	return result;
}


bool Charts::GeneratedRangeDatum::operator!=(const GeneratedRangeDatum & other) const
{
	return !(*this == other);
}


std::ostream & Charts::operator<<(std::ostream & to, const GeneratedRangeDatum & from)
{
	to << "RangeDatum[";
	const Charts::ContinuousDatum & super = from;
	to << super << ", ";
	to << "ordinate: " << from.ordinate;
	to << "]";
	return to;
}
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

#import <TRChartsObjc/Support/LineStyleStructMarshaller.hh>
#import <TRChartsObjc/Support/Marshallers.hh>



Charts::LineStyle TRChartsObjc::LineStyleStructMarshaller::marshall(const CodegenSupportObjc::StrongAnyPtr & in) const
{
	TRLineStyle * const tmp = (TRLineStyle*)in;
	Charts::LineStyle out;
	out.thickness = TRChartsObjc::getNumberMarshaller().marshall([tmp thickness]);
	out.mode = TRChartsObjc::getLineModeMarshaller().marshall([tmp mode]);
	return out;
}


CodegenSupportObjc::StrongAnyPtr TRChartsObjc::LineStyleStructMarshaller::unmarshall(const Charts::LineStyle & in) const
{
	TRLineStyle * out = [[TRLineStyle alloc] init];
	[out setThickness:TRChartsObjc::getNumberMarshaller().unmarshall(in.thickness)];
	[out setMode:TRChartsObjc::getLineModeMarshaller().unmarshall(in.mode)];
	return out;
}


Charts::LineStyle TRChartsObjc::LineStyleStructMarshaller::marshallBoxed(const id & in) const
{
	return marshall(in);
}


id TRChartsObjc::LineStyleStructMarshaller::unmarshallBoxed(const Charts::LineStyle & in) const
{
	return unmarshall(in);
}

// TODO: temporary hack until we fix static init + threads problems properly

void TRChartsObjc::LineStyleStructMarshaller::init(void) const
{
}


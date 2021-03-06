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

#import <TRChartsObjc/Support/MarginStructMarshaller.hh>
#import <TRChartsObjc/Support/Marshallers.hh>



Charts::Margin TRChartsObjc::MarginStructMarshaller::marshall(const CodegenSupportObjc::StrongAnyPtr & in) const
{
	TRMargin * const tmp = (TRMargin*)in;
	Charts::Margin out;
	out.left = TRChartsObjc::getNumberMarshaller().marshall([tmp left]);
	out.right = TRChartsObjc::getNumberMarshaller().marshall([tmp right]);
	out.bottom = TRChartsObjc::getNumberMarshaller().marshall([tmp bottom]);
	out.top = TRChartsObjc::getNumberMarshaller().marshall([tmp top]);
	return out;
}


CodegenSupportObjc::StrongAnyPtr TRChartsObjc::MarginStructMarshaller::unmarshall(const Charts::Margin & in) const
{
	TRMargin * out = [[TRMargin alloc] init];
	[out setLeft:TRChartsObjc::getNumberMarshaller().unmarshall(in.left)];
	[out setRight:TRChartsObjc::getNumberMarshaller().unmarshall(in.right)];
	[out setBottom:TRChartsObjc::getNumberMarshaller().unmarshall(in.bottom)];
	[out setTop:TRChartsObjc::getNumberMarshaller().unmarshall(in.top)];
	return out;
}


Charts::Margin TRChartsObjc::MarginStructMarshaller::marshallBoxed(const id & in) const
{
	return marshall(in);
}


id TRChartsObjc::MarginStructMarshaller::unmarshallBoxed(const Charts::Margin & in) const
{
	return unmarshall(in);
}

// TODO: temporary hack until we fix static init + threads problems properly

void TRChartsObjc::MarginStructMarshaller::init(void) const
{
}


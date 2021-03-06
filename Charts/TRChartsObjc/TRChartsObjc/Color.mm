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

#import <TRChartsObjc/Color.h>
#import <TRChartsObjc/Support/Marshallers.hh>

@implementation TRColor

-(TRColor *)init
{
	self = [super init];
	if(self) {
		self.red = 0.0;
		self.green = 0.0;
		self.blue = 0.0;
		self.alpha = 0.0;
	}
	return self;
}

+(TRColor *)red:(double)red green:(double)green blue:(double)blue alpha:(double)alpha
{
	TRColor * const result = [[TRColor alloc] init];
	result.red = red;
	result.green = green;
	result.blue = blue;
	result.alpha = alpha;
	return result;
}

-(BOOL)isEqual:(id)anObject
{
	if(anObject == nil || ! [anObject isKindOfClass:[TRColor class]]) {
		return NO;
	}
	TRColor * other = anObject;
	BOOL result = YES;
	result = result && (self.red == other.red);
	result = result && (self.green == other.green);
	result = result && (self.blue == other.blue);
	result = result && (self.alpha == other.alpha);
	return result;
}

-(NSUInteger)hash
{
	NSUInteger result = 7;
    result = 31 * result + (NSUInteger)self.red;
    result = 31 * result + (NSUInteger)self.green;
    result = 31 * result + (NSUInteger)self.blue;
    result = 31 * result + (NSUInteger)self.alpha;
	return result;
}

-(id)copyWithZone:(NSZone *)zone
{
	TRColor * copy = [[self class] allocWithZone:zone];
	copy.red = self.red;
	copy.green = self.green;
	copy.blue = self.blue;
	copy.alpha = self.alpha;
	return copy;
}

-(NSString*)description
{
	return [NSString stringWithFormat:@"TRColor[%f, %f, %f, %f]", self.red, self.green, self.blue, self.alpha];
}

@end
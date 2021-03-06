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

#import <TRChartsObjc/Axis.h>
#import <TRChartsObjc/DataTransform.h>
#import <TRChartsObjc/Range.h>
@protocol TRAxisLayout;
@protocol TRRangeCalculator;

/**
 * A continuous axis 
 *
 * @warning This is an automatically generated wrapper around a native object;
 * overriding methods will not work as expected.
 *
 */
@interface TRContinuousAxis : TRAxis

/** @name Fields */

/**
 * @return The current axis layout.
 * @see setLayout:
 */
-(id<TRAxisLayout>)layout;

/**
 * @param value The new axis layout.
 * @see layout
 */
-(void)setLayout:(id<TRAxisLayout>)value;

/**
 * @return The current range calculator.
 * @see setRangeCalculator:
 */
-(id<TRRangeCalculator>)rangeCalculator;

/**
 * @param value The new range calculator.
 * @see rangeCalculator
 */
-(void)setRangeCalculator:(id<TRRangeCalculator>)value;

/**
 * @return The current value transform.
 * @see setValueTransform:
 */
-(TRDataTransform *)valueTransform;

/**
 * @param value The new value transform.
 * @see valueTransform
 */
-(void)setValueTransform:(TRDataTransform *)value;

/**
 * @return The current dataRange.
 */
-(TRRange *)dataRange;

/**
 * @return The current screenDataRange.
 */
-(TRRange *)screenDataRange;

@end
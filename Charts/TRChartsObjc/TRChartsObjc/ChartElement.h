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

#import <TRChartsObjc/Drawable.h>

/**
 * Base class for all objects that can be attached to a chart
 *
 * @warning This is an automatically generated wrapper around a native object;
 * overriding methods will not work as expected.
 *
 */
@interface TRChartElement : TRDrawable

/** @name Fields */

/**
 * Can be used to control z-ordering (higher values are drawn on top of lower
 * values).
 *
 * @return The current draw order.
 * @see setDrawOrder:
 */
-(long)drawOrder;

/**
 * Can be used to control z-ordering (higher values are drawn on top of lower
 * values).
 *
 * @param value The new draw order.
 * @see drawOrder
 */
-(void)setDrawOrder:(long)value;

@end
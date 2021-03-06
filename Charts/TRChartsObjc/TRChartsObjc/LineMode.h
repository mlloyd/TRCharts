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

#include <Foundation/Foundation.h>

/**
 * Line style mode.
 *
 */

typedef NS_ENUM(NSInteger, TRLineMode)
{
	/**
	 * Draw a solid line
	 */
	TR_LINEMODE_SOLID,

	/**
	 * Draw a dashed line
	 */
	TR_LINEMODE_DASHED

};

typedef enum TRLineMode TRLineMode;

/**
 * Get the size (element count) of the TRLineMode enum.
 *
 * @return The number of elements.
 */

static inline NSInteger TRLineMode_size(void)
{
	return 2;
}

/**
 * Get the name of a given member of the TRLineMode enum.
 *
 * @param value The enum value.
 * @return The name (as per source code), or "?" if an invalid value is provided.
 */

static inline NSString * TRLineMode_name(TRLineMode value)
{
	switch(value) {
	case TR_LINEMODE_SOLID:
		return @"TR_LINEMODE_SOLID";
	case TR_LINEMODE_DASHED:
		return @"TR_LINEMODE_DASHED";
	default:
		return @"?";
	}
}

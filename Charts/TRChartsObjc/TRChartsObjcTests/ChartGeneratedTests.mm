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

#import "ChartGeneratedTests.h"
#import <TRChartsObjc/Chart.h>
#import "TestUtils.hh"

#import <XCTest/XCTestAssertions.h>

@implementation TRChartGeneratedTests

- (void)setUp
{
    [super setUp];
}

- (void)tearDown
{
    [super tearDown];
}

-(id)createInstance
{
	return [[TRChart alloc] init];
}

- (void) testInitializeFieldTitle
{
	TRChart * instance = [self createInstance];
	if(instance) {
		TRLabel * expected = nil;
		TRLabel * actual = [instance title];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testInitializeFieldBackgroundColor
{
	TRChart * instance = [self createInstance];
	if(instance) {
		TRColor * expected = [TRColor red:0.0 green:0.0 blue:0.0 alpha:0.0];
		TRColor * actual = [instance backgroundColor];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testInitializeFieldFillColor
{
	TRChart * instance = [self createInstance];
	if(instance) {
		TRColor * expected = [TRColor red:0.0 green:0.0 blue:0.0 alpha:0.0];
		TRColor * actual = [instance fillColor];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testInitializeFieldMargin
{
	TRChart * instance = [self createInstance];
	if(instance) {
		TRMargin * expected = [TRMargin left:0.0 right:0.0 bottom:0.0 top:0.0];
		TRMargin * actual = [instance margin];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testInitializeFieldAxisList
{
	TRChart * instance = [self createInstance];
	if(instance) {
		NSArray * expected = @[];
		NSArray * actual = [instance axisList];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testInitializeFieldSeriesList
{
	TRChart * instance = [self createInstance];
	if(instance) {
		NSArray * expected = @[];
		NSArray * actual = [instance seriesList];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testInitializeFieldDecorationList
{
	TRChart * instance = [self createInstance];
	if(instance) {
		NSArray * expected = @[];
		NSArray * actual = [instance decorationList];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testInitializeFieldConstraintList
{
	TRChart * instance = [self createInstance];
	if(instance) {
		NSArray * expected = @[];
		NSArray * actual = [instance constraintList];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testInitializeFieldActiveAnimationList
{
	TRChart * instance = [self createInstance];
	if(instance) {
		NSArray * expected = @[];
		NSArray * actual = [instance activeAnimationList];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testInitializeFieldLastTouches
{
	TRChart * instance = [self createInstance];
	if(instance) {
		NSArray * expected = @[];
		NSArray * actual = [instance lastTouches];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testInitializeFieldSize
{
	TRChart * instance = [self createInstance];
	if(instance) {
		TRSize * expected = [TRSize width:0.0 height:0.0];
		TRSize * actual = [instance size];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testInitializeFieldContentScaleFactor
{
	TRChart * instance = [self createInstance];
	if(instance) {
		double expected = 1.0;
		double actual = [instance contentScaleFactor];
		XCTAssertEqual(expected, actual);
	}
}

- (void) testInitializeFieldResizeMode
{
	TRChart * instance = [self createInstance];
	if(instance) {
		TRResizeMode expected = TR_RESIZEMODE_RESCALE;
		TRResizeMode actual = [instance resizeMode];
		XCTAssertEqual(expected, actual);
	}
}

- (void) testInitializeFieldTransform
{
	TRChart * instance = [self createInstance];
	if(instance) {
		TRTransform * expected = [TRTransform offset:[TRPoint x:0.0 y:0.0] scale:[TRPoint x:1.0 y:1.0]];
		TRTransform * actual = [instance transform];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testSetFieldTitle
{
	TRChart * instance = [self createInstance];
	if(instance) {
		TRLabel * original = [instance title];
		TRLabel * expected = TRChartsObjc::getLabelTestValue(original);
		[instance setTitle:expected];
		TRLabel * actual = [instance title];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testSetFieldBackgroundColor
{
	TRChart * instance = [self createInstance];
	if(instance) {
		TRColor * original = [instance backgroundColor];
		TRColor * expected = TRChartsObjc::getColorTestValue(original);
		[instance setBackgroundColor:expected];
		TRColor * actual = [instance backgroundColor];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testSetFieldFillColor
{
	TRChart * instance = [self createInstance];
	if(instance) {
		TRColor * original = [instance fillColor];
		TRColor * expected = TRChartsObjc::getColorTestValue(original);
		[instance setFillColor:expected];
		TRColor * actual = [instance fillColor];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testSetFieldMargin
{
	TRChart * instance = [self createInstance];
	if(instance) {
		TRMargin * original = [instance margin];
		TRMargin * expected = TRChartsObjc::getMarginTestValue(original);
		[instance setMargin:expected];
		TRMargin * actual = [instance margin];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testSetFieldResizeMode
{
	TRChart * instance = [self createInstance];
	if(instance) {
		TRResizeMode original = [instance resizeMode];
		TRResizeMode expected = TRChartsObjc::getResizeModeTestValue(original);
		[instance setResizeMode:expected];
		TRResizeMode actual = [instance resizeMode];
		XCTAssertEqual(expected, actual);
	}
}

- (void) testSetFieldTransform
{
	TRChart * instance = [self createInstance];
	if(instance) {
		TRTransform * original = [instance transform];
		TRTransform * expected = TRChartsObjc::getTransformTestValue(original);
		[instance setTransform:expected];
		TRTransform * actual = [instance transform];
		XCTAssertEqualObjects(expected, actual);
	}
}


@end
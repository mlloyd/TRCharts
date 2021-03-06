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

#ifndef Charts_Chart_hpp
#define Charts_Chart_hpp

#include <TRCharts/Common.hpp>
#include <TRCharts/Drawable.hpp>
#include <TRCharts/Renderable.hpp>
#include <TRCharts/Color.hpp>
#include <TRCharts/Margin.hpp>
#include <TRCharts/Touch.hpp>
#include <TRCharts/Size.hpp>
#include <TRCharts/ResizeMode.hpp>
#include <TRCharts/Transform.hpp>
#include <TRCharts/Point.hpp>

namespace Charts
{
	
	class Chart;
	class Label;
	class Axis;
	class Series;
	class Decoration;
	class Constraint;
	class Animation;

	
	class GeneratedChart : public Charts::Drawable, public Charts::Renderable
	{
	public:
		virtual ~GeneratedChart(void);

		std::shared_ptr<Chart> getSharedPtr(void);

		std::shared_ptr<const Chart> getSharedPtr(void) const;

		virtual const std::shared_ptr<Charts::Label> & getTitle(void) const = 0;

		virtual void setTitle(const std::shared_ptr<Charts::Label> & value) = 0;

		virtual const Charts::Color & getBackgroundColor(void) const = 0;

		virtual void setBackgroundColor(const Charts::Color & value) = 0;

		virtual const Charts::Color & getFillColor(void) const = 0;

		virtual void setFillColor(const Charts::Color & value) = 0;

		virtual const Charts::Margin & getMargin(void) const = 0;

		virtual void setMargin(const Charts::Margin & value) = 0;

		virtual const std::vector<std::shared_ptr<Charts::Axis>> & getAxisList(void) const = 0;

		virtual const std::vector<std::shared_ptr<Charts::Series>> & getSeriesList(void) const = 0;

		virtual const std::vector<std::shared_ptr<Charts::Decoration>> & getDecorationList(void) const = 0;

		virtual const std::vector<std::shared_ptr<Charts::Constraint>> & getConstraintList(void) const = 0;

		virtual const std::vector<std::shared_ptr<Charts::Animation>> & getActiveAnimationList(void) const = 0;

		virtual const std::vector<Charts::Touch> & getLastTouches(void) const = 0;

		virtual const Charts::Size & getSize(void) const = 0;

		virtual double getContentScaleFactor(void) const = 0;

		virtual Charts::ResizeMode getResizeMode(void) const = 0;

		virtual void setResizeMode(Charts::ResizeMode value) = 0;

		virtual Charts::Transform getTransform(void) const = 0;

		virtual void setTransform(const Charts::Transform & value) = 0;

		virtual void resize(const Charts::Size & size, double contentScaleFactor) = 0;

		virtual void relayout(void) = 0;

		virtual void addAxis(const std::shared_ptr<Charts::Axis> & axis) = 0;

		virtual void addSeries(const std::shared_ptr<Charts::Series> & series) = 0;

		virtual void addDecoration(const std::shared_ptr<Charts::Decoration> & decoration) = 0;

		virtual void addConstraint(const std::shared_ptr<Charts::Constraint> & constraint) = 0;

		virtual void removeAxis(const std::shared_ptr<Charts::Axis> & axis) = 0;

		virtual void removeSeries(const std::shared_ptr<Charts::Series> & series) = 0;

		virtual void removeDecoration(const std::shared_ptr<Charts::Decoration> & decoration) = 0;

		virtual void removeConstraint(const std::shared_ptr<Charts::Constraint> & constraint) = 0;

		virtual void applyAnimation(const std::shared_ptr<Charts::Animation> & animation) = 0;

		virtual void preUpdate(void) = 0;

		virtual bool update(void) = 0;

		virtual void preRender(void) const = 0;

		virtual void render(void) const = 0;

		virtual void renderRegion(const Charts::Point & position, const Charts::Size & size, double scale) const = 0;

		virtual void dispose(void) = 0;

		virtual void handleTouches(const std::vector<Charts::Touch> & touches) = 0;

	protected:
		GeneratedChart(void);

	};
}

#include <TRCharts/Impl/ChartImpl.hpp>

#endif
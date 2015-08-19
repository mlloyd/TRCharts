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

package com.thomsonreuters.corptech.charts;

import java.util.List;

/**
 * <p>
 * An animation describes a series of effects that are applied over a
 * duration.
 * </p>
 * <p>
 * To animate elements, create effects targetting those elements and
 * associate them with an animation, then add the animation to a chart.
 * </p>
 * <p>
 * The animation will run until completion, then the (optional) animation
 * delegate will be called, and the animation will be removed from the chart
 * in the next update cycle.
 * </p>
 * <p>
 * <b>WARNING:</b> This is an automatically generated wrapper around a
 * native object; overriding methods will not work as expected.
 * </p>
 */

@SuppressWarnings("all")
public class Animation extends Attachable
{
	/**
	 * Default constructor
	 */

	public Animation()
	{
		this(true);
		setHandle(nativeCreate());
	}

	/**
	 * Get the duration.
	 * <p>
	 * Animation duration (in seconds)
	 * </p>
	 * @return The current duration.
	 */

	public double getDuration()
	{
		return nativeGetDuration(getHandle());
	}

	/**
	 * Set the duration.
	 * <p>
	 * Animation duration (in seconds)
	 * </p>
	 * @param value The new duration.
	 */

	public void setDuration(final double value)
	{
		nativeSetDuration(getHandle(), value);
	}

	/**
	 * Get the position.
	 * <p>
	 * Current position of the animation (in seconds)
	 * </p>
	 * @return The current position.
	 */

	public double getPosition()
	{
		return nativeGetPosition(getHandle());
	}

	/**
	 * Set the position.
	 * <p>
	 * Current position of the animation (in seconds)
	 * </p>
	 * @param value The new position.
	 */

	public void setPosition(final double value)
	{
		nativeSetPosition(getHandle(), value);
	}

	/**
	 * Get the effect list.
	 * <p>
	 * Effects applied by this animation
	 * </p>
	 * @return The current effect list.
	 */

	public List<AnimationEffect> getEffectList()
	{
		return (List<AnimationEffect>)nativeGetEffectList(getHandle());
	}

	/**
	 * Set the effect list.
	 * <p>
	 * Effects applied by this animation
	 * </p>
	 * @param value The new effect list.
	 */

	public void setEffectList(final List<AnimationEffect> value)
	{
		nativeSetEffectList(getHandle(), value);
	}

	/**
	 * Get the delegate.
	 * <p>
	 * The delegate will be called back when the animation is completed (or
	 * cancelled)
	 * </p>
	 * @return The current delegate.
	 */

	public AnimationDelegate getDelegate()
	{
		return (AnimationDelegate)nativeGetDelegate(getHandle());
	}

	/**
	 * Set the delegate.
	 * <p>
	 * The delegate will be called back when the animation is completed (or
	 * cancelled)
	 * </p>
	 * @param value The new delegate.
	 */

	public void setDelegate(final AnimationDelegate value)
	{
		nativeSetDelegate(getHandle(), value);
	}

	/**
	 * <p>
	 * Set animation position to beginning and continue running.
	 * </p>
	 */

	public void restart()
	{
		nativeRestart(getHandle());
	}

	/**
	 * <p>
	 * Set animation position to the end and stop running, flag the animation
	 * for removal.
	 * </p>
	 */

	public void complete()
	{
		nativeComplete(getHandle());
	}

	/**
	 * <p>
	 * Stop running, flag the animation for removal.
	 * </p>
	 */

	public void cancel()
	{
		nativeCancel(getHandle());
	}

	// need this to prevent default constructor in base classes
	/*package*/ Animation(boolean dummy)
	{
		super(dummy);
	}

	protected void onFinalize()
	{
		nativeDestroy(getHandle());
	}

	private final native long nativeCreate();
	private final native void nativeDestroy(long ptr);
	private final native double nativeGetDuration(long ptr);
	private final native void nativeSetDuration(long ptr, double value);
	private final native double nativeGetPosition(long ptr);
	private final native void nativeSetPosition(long ptr, double value);
	private final native Object nativeGetEffectList(long ptr);
	private final native void nativeSetEffectList(long ptr, Object value);
	private final native Object nativeGetDelegate(long ptr);
	private final native void nativeSetDelegate(long ptr, Object value);
	private final native void nativeRestart(long ptr);
	private final native void nativeComplete(long ptr);
	private final native void nativeCancel(long ptr);
}
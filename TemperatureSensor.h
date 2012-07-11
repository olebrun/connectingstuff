/*
 * connectingStuff, Arduino Based Home Automation
 * http://connectingstuff.net/blog/
 *
 * Copyright (C) 2012 olivier.lebrun@gmail.com
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

#ifndef TemperatureSensor_h
#define TemperatureSensor_h

#ifdef ONEWIRE

#include "Arduino.h"
#include "Sensor.h"
#include "Kernel.h"
#include "../DallasTemperature/DallasTemperature.h";

#ifdef XPL
#include "../xPL/xPL.h"
#endif

class TemperatureSensor : public Sensor
{
	public:
		DeviceAddress m_address;

		TemperatureSensor();
	   	TemperatureSensor(int, DeviceAddress);
	   	~TemperatureSensor();

	   	void Action(void*);
		char* ToJson();
		void SendStatus();

		void Update(float);
};

#endif
#endif

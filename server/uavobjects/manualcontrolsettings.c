/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup ManualControlSettings ManualControlSettings
 * @brief Settings to indicate how to decode receiver input by @ref ManualControlModule.
 *
 * Autogenerated files and functions for ManualControlSettings Object
 * @{ 
 *
 * @file       manualcontrolsettings.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the ManualControlSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: manualcontrolsettings.xml. 
 *             This is an automatically generated file.
 *             DO NOT modify manually.
 *
 * @see        The GNU Public License (GPL) Version 3
 *
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#include "openpilot.h"
#include "manualcontrolsettings.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t ManualControlSettingsInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(MANUALCONTROLSETTINGS_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(MANUALCONTROLSETTINGS_OBJID, MANUALCONTROLSETTINGS_NAME, MANUALCONTROLSETTINGS_METANAME, 0,
			MANUALCONTROLSETTINGS_ISSINGLEINST, MANUALCONTROLSETTINGS_ISSETTINGS, MANUALCONTROLSETTINGS_NUMBYTES, &ManualControlSettingsSetDefaults);

	// Done
	if (handle != 0)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

/**
 * Initialize object fields and metadata with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void ManualControlSettingsSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	ManualControlSettingsData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(ManualControlSettingsData));
	data.ChannelMin[0] = 1000;
	data.ChannelMin[1] = 1000;
	data.ChannelMin[2] = 1000;
	data.ChannelMin[3] = 1000;
	data.ChannelMin[4] = 1000;
	data.ChannelMin[5] = 1000;
	data.ChannelMin[6] = 1000;
	data.ChannelMin[7] = 1000;
	data.ChannelMin[8] = 1000;
	data.ChannelNeutral[0] = 1500;
	data.ChannelNeutral[1] = 1500;
	data.ChannelNeutral[2] = 1500;
	data.ChannelNeutral[3] = 1500;
	data.ChannelNeutral[4] = 1500;
	data.ChannelNeutral[5] = 1500;
	data.ChannelNeutral[6] = 1500;
	data.ChannelNeutral[7] = 1500;
	data.ChannelNeutral[8] = 1500;
	data.ChannelMax[0] = 2000;
	data.ChannelMax[1] = 2000;
	data.ChannelMax[2] = 2000;
	data.ChannelMax[3] = 2000;
	data.ChannelMax[4] = 2000;
	data.ChannelMax[5] = 2000;
	data.ChannelMax[6] = 2000;
	data.ChannelMax[7] = 2000;
	data.ChannelMax[8] = 2000;
	data.ArmedTimeout = 30000;
	data.ChannelGroups[0] = 6;
	data.ChannelGroups[1] = 6;
	data.ChannelGroups[2] = 6;
	data.ChannelGroups[3] = 6;
	data.ChannelGroups[4] = 6;
	data.ChannelGroups[5] = 6;
	data.ChannelGroups[6] = 6;
	data.ChannelGroups[7] = 6;
	data.ChannelGroups[8] = 6;
	data.ChannelNumber[0] = 0;
	data.ChannelNumber[1] = 0;
	data.ChannelNumber[2] = 0;
	data.ChannelNumber[3] = 0;
	data.ChannelNumber[4] = 0;
	data.ChannelNumber[5] = 0;
	data.ChannelNumber[6] = 0;
	data.ChannelNumber[7] = 0;
	data.ChannelNumber[8] = 0;
	data.Arming = 0;
	data.Stabilization1Settings[0] = 2;
	data.Stabilization1Settings[1] = 2;
	data.Stabilization1Settings[2] = 1;
	data.Stabilization2Settings[0] = 2;
	data.Stabilization2Settings[1] = 2;
	data.Stabilization2Settings[2] = 1;
	data.Stabilization3Settings[0] = 2;
	data.Stabilization3Settings[1] = 2;
	data.Stabilization3Settings[2] = 1;
	data.FlightModePosition[0] = 0;
	data.FlightModePosition[1] = 1;
	data.FlightModePosition[2] = 2;

	UAVObjSetInstanceData(obj, instId, &data);

	// Initialize object metadata to their default values
	metadata.access = ACCESS_READWRITE;
	metadata.gcsAccess = ACCESS_READWRITE;
	metadata.telemetryAcked = 1;
	metadata.telemetryUpdateMode = UPDATEMODE_ONCHANGE;
	metadata.telemetryUpdatePeriod = 0;
	metadata.gcsTelemetryAcked = 1;
	metadata.gcsTelemetryUpdateMode = UPDATEMODE_ONCHANGE;
	metadata.gcsTelemetryUpdatePeriod = 0;
	metadata.loggingUpdateMode = UPDATEMODE_NEVER;
	metadata.loggingUpdatePeriod = 0;
	UAVObjSetMetadata(obj, &metadata);
}

/**
 * Get object handle
 */
UAVObjHandle ManualControlSettingsHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void ManualControlSettingsChannelMinSet( int16_t *NewChannelMin )
{
	UAVObjSetDataField(ManualControlSettingsHandle(), (void*)NewChannelMin, offsetof( ManualControlSettingsData, ChannelMin), 9*sizeof(int16_t));
}
void ManualControlSettingsChannelMinGet( int16_t *NewChannelMin )
{
	UAVObjGetDataField(ManualControlSettingsHandle(), (void*)NewChannelMin, offsetof( ManualControlSettingsData, ChannelMin), 9*sizeof(int16_t));
}
void ManualControlSettingsChannelNeutralSet( int16_t *NewChannelNeutral )
{
	UAVObjSetDataField(ManualControlSettingsHandle(), (void*)NewChannelNeutral, offsetof( ManualControlSettingsData, ChannelNeutral), 9*sizeof(int16_t));
}
void ManualControlSettingsChannelNeutralGet( int16_t *NewChannelNeutral )
{
	UAVObjGetDataField(ManualControlSettingsHandle(), (void*)NewChannelNeutral, offsetof( ManualControlSettingsData, ChannelNeutral), 9*sizeof(int16_t));
}
void ManualControlSettingsChannelMaxSet( int16_t *NewChannelMax )
{
	UAVObjSetDataField(ManualControlSettingsHandle(), (void*)NewChannelMax, offsetof( ManualControlSettingsData, ChannelMax), 9*sizeof(int16_t));
}
void ManualControlSettingsChannelMaxGet( int16_t *NewChannelMax )
{
	UAVObjGetDataField(ManualControlSettingsHandle(), (void*)NewChannelMax, offsetof( ManualControlSettingsData, ChannelMax), 9*sizeof(int16_t));
}
void ManualControlSettingsArmedTimeoutSet( uint16_t *NewArmedTimeout )
{
	UAVObjSetDataField(ManualControlSettingsHandle(), (void*)NewArmedTimeout, offsetof( ManualControlSettingsData, ArmedTimeout), sizeof(uint16_t));
}
void ManualControlSettingsArmedTimeoutGet( uint16_t *NewArmedTimeout )
{
	UAVObjGetDataField(ManualControlSettingsHandle(), (void*)NewArmedTimeout, offsetof( ManualControlSettingsData, ArmedTimeout), sizeof(uint16_t));
}
void ManualControlSettingsChannelGroupsSet( uint8_t *NewChannelGroups )
{
	UAVObjSetDataField(ManualControlSettingsHandle(), (void*)NewChannelGroups, offsetof( ManualControlSettingsData, ChannelGroups), 9*sizeof(uint8_t));
}
void ManualControlSettingsChannelGroupsGet( uint8_t *NewChannelGroups )
{
	UAVObjGetDataField(ManualControlSettingsHandle(), (void*)NewChannelGroups, offsetof( ManualControlSettingsData, ChannelGroups), 9*sizeof(uint8_t));
}
void ManualControlSettingsChannelNumberSet( uint8_t *NewChannelNumber )
{
	UAVObjSetDataField(ManualControlSettingsHandle(), (void*)NewChannelNumber, offsetof( ManualControlSettingsData, ChannelNumber), 9*sizeof(uint8_t));
}
void ManualControlSettingsChannelNumberGet( uint8_t *NewChannelNumber )
{
	UAVObjGetDataField(ManualControlSettingsHandle(), (void*)NewChannelNumber, offsetof( ManualControlSettingsData, ChannelNumber), 9*sizeof(uint8_t));
}
void ManualControlSettingsArmingSet( uint8_t *NewArming )
{
	UAVObjSetDataField(ManualControlSettingsHandle(), (void*)NewArming, offsetof( ManualControlSettingsData, Arming), sizeof(uint8_t));
}
void ManualControlSettingsArmingGet( uint8_t *NewArming )
{
	UAVObjGetDataField(ManualControlSettingsHandle(), (void*)NewArming, offsetof( ManualControlSettingsData, Arming), sizeof(uint8_t));
}
void ManualControlSettingsStabilization1SettingsSet( uint8_t *NewStabilization1Settings )
{
	UAVObjSetDataField(ManualControlSettingsHandle(), (void*)NewStabilization1Settings, offsetof( ManualControlSettingsData, Stabilization1Settings), 3*sizeof(uint8_t));
}
void ManualControlSettingsStabilization1SettingsGet( uint8_t *NewStabilization1Settings )
{
	UAVObjGetDataField(ManualControlSettingsHandle(), (void*)NewStabilization1Settings, offsetof( ManualControlSettingsData, Stabilization1Settings), 3*sizeof(uint8_t));
}
void ManualControlSettingsStabilization2SettingsSet( uint8_t *NewStabilization2Settings )
{
	UAVObjSetDataField(ManualControlSettingsHandle(), (void*)NewStabilization2Settings, offsetof( ManualControlSettingsData, Stabilization2Settings), 3*sizeof(uint8_t));
}
void ManualControlSettingsStabilization2SettingsGet( uint8_t *NewStabilization2Settings )
{
	UAVObjGetDataField(ManualControlSettingsHandle(), (void*)NewStabilization2Settings, offsetof( ManualControlSettingsData, Stabilization2Settings), 3*sizeof(uint8_t));
}
void ManualControlSettingsStabilization3SettingsSet( uint8_t *NewStabilization3Settings )
{
	UAVObjSetDataField(ManualControlSettingsHandle(), (void*)NewStabilization3Settings, offsetof( ManualControlSettingsData, Stabilization3Settings), 3*sizeof(uint8_t));
}
void ManualControlSettingsStabilization3SettingsGet( uint8_t *NewStabilization3Settings )
{
	UAVObjGetDataField(ManualControlSettingsHandle(), (void*)NewStabilization3Settings, offsetof( ManualControlSettingsData, Stabilization3Settings), 3*sizeof(uint8_t));
}
void ManualControlSettingsFlightModePositionSet( uint8_t *NewFlightModePosition )
{
	UAVObjSetDataField(ManualControlSettingsHandle(), (void*)NewFlightModePosition, offsetof( ManualControlSettingsData, FlightModePosition), 3*sizeof(uint8_t));
}
void ManualControlSettingsFlightModePositionGet( uint8_t *NewFlightModePosition )
{
	UAVObjGetDataField(ManualControlSettingsHandle(), (void*)NewFlightModePosition, offsetof( ManualControlSettingsData, FlightModePosition), 3*sizeof(uint8_t));
}


/**
 * @}
 */


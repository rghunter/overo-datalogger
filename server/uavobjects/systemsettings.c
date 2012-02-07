/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup SystemSettings SystemSettings
 * @brief Select airframe type.  Currently used by @ref ActuatorModule to choose mixing from @ref ActuatorDesired to @ref ActuatorCommand
 *
 * Autogenerated files and functions for SystemSettings Object
 * @{ 
 *
 * @file       systemsettings.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the SystemSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: systemsettings.xml. 
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
#include "systemsettings.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t SystemSettingsInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(SYSTEMSETTINGS_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(SYSTEMSETTINGS_OBJID, SYSTEMSETTINGS_NAME, SYSTEMSETTINGS_METANAME, 0,
			SYSTEMSETTINGS_ISSINGLEINST, SYSTEMSETTINGS_ISSETTINGS, SYSTEMSETTINGS_NUMBYTES, &SystemSettingsSetDefaults);

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
void SystemSettingsSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	SystemSettingsData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(SystemSettingsData));
	data.GUIConfigData[0] = 0;
	data.GUIConfigData[1] = 0;
	data.AirframeType = 0;

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
UAVObjHandle SystemSettingsHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void SystemSettingsGUIConfigDataSet( uint32_t *NewGUIConfigData )
{
	UAVObjSetDataField(SystemSettingsHandle(), (void*)NewGUIConfigData, offsetof( SystemSettingsData, GUIConfigData), 2*sizeof(uint32_t));
}
void SystemSettingsGUIConfigDataGet( uint32_t *NewGUIConfigData )
{
	UAVObjGetDataField(SystemSettingsHandle(), (void*)NewGUIConfigData, offsetof( SystemSettingsData, GUIConfigData), 2*sizeof(uint32_t));
}
void SystemSettingsAirframeTypeSet( uint8_t *NewAirframeType )
{
	UAVObjSetDataField(SystemSettingsHandle(), (void*)NewAirframeType, offsetof( SystemSettingsData, AirframeType), sizeof(uint8_t));
}
void SystemSettingsAirframeTypeGet( uint8_t *NewAirframeType )
{
	UAVObjGetDataField(SystemSettingsHandle(), (void*)NewAirframeType, offsetof( SystemSettingsData, AirframeType), sizeof(uint8_t));
}


/**
 * @}
 */


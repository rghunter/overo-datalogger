/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup Accels Accels
 * @brief The accel data.
 *
 * Autogenerated files and functions for Accels Object
 * @{ 
 *
 * @file       accels.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the Accels object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: accels.xml. 
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
#include "accels.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t AccelsInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(ACCELS_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(ACCELS_OBJID, ACCELS_NAME, ACCELS_METANAME, 0,
			ACCELS_ISSINGLEINST, ACCELS_ISSETTINGS, ACCELS_NUMBYTES, &AccelsSetDefaults);

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
void AccelsSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	AccelsData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(AccelsData));

	UAVObjSetInstanceData(obj, instId, &data);

	// Initialize object metadata to their default values
	metadata.access = ACCESS_READWRITE;
	metadata.gcsAccess = ACCESS_READWRITE;
	metadata.telemetryAcked = 0;
	metadata.telemetryUpdateMode = UPDATEMODE_PERIODIC;
	metadata.telemetryUpdatePeriod = 1000;
	metadata.gcsTelemetryAcked = 0;
	metadata.gcsTelemetryUpdateMode = UPDATEMODE_MANUAL;
	metadata.gcsTelemetryUpdatePeriod = 0;
	metadata.loggingUpdateMode = UPDATEMODE_NEVER;
	metadata.loggingUpdatePeriod = 0;
	UAVObjSetMetadata(obj, &metadata);
}

/**
 * Get object handle
 */
UAVObjHandle AccelsHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void AccelsxSet( float *Newx )
{
	UAVObjSetDataField(AccelsHandle(), (void*)Newx, offsetof( AccelsData, x), sizeof(float));
}
void AccelsxGet( float *Newx )
{
	UAVObjGetDataField(AccelsHandle(), (void*)Newx, offsetof( AccelsData, x), sizeof(float));
}
void AccelsySet( float *Newy )
{
	UAVObjSetDataField(AccelsHandle(), (void*)Newy, offsetof( AccelsData, y), sizeof(float));
}
void AccelsyGet( float *Newy )
{
	UAVObjGetDataField(AccelsHandle(), (void*)Newy, offsetof( AccelsData, y), sizeof(float));
}
void AccelszSet( float *Newz )
{
	UAVObjSetDataField(AccelsHandle(), (void*)Newz, offsetof( AccelsData, z), sizeof(float));
}
void AccelszGet( float *Newz )
{
	UAVObjGetDataField(AccelsHandle(), (void*)Newz, offsetof( AccelsData, z), sizeof(float));
}
void AccelstemperatureSet( float *Newtemperature )
{
	UAVObjSetDataField(AccelsHandle(), (void*)Newtemperature, offsetof( AccelsData, temperature), sizeof(float));
}
void AccelstemperatureGet( float *Newtemperature )
{
	UAVObjGetDataField(AccelsHandle(), (void*)Newtemperature, offsetof( AccelsData, temperature), sizeof(float));
}


/**
 * @}
 */


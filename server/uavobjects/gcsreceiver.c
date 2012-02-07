/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup GCSReceiver GCSReceiver
 * @brief A receiver channel group carried over the telemetry link.
 *
 * Autogenerated files and functions for GCSReceiver Object
 * @{ 
 *
 * @file       gcsreceiver.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the GCSReceiver object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: gcsreceiver.xml. 
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
#include "gcsreceiver.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t GCSReceiverInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(GCSRECEIVER_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(GCSRECEIVER_OBJID, GCSRECEIVER_NAME, GCSRECEIVER_METANAME, 0,
			GCSRECEIVER_ISSINGLEINST, GCSRECEIVER_ISSETTINGS, GCSRECEIVER_NUMBYTES, &GCSReceiverSetDefaults);

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
void GCSReceiverSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	GCSReceiverData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(GCSReceiverData));

	UAVObjSetInstanceData(obj, instId, &data);

	// Initialize object metadata to their default values
	metadata.access = ACCESS_READONLY;
	metadata.gcsAccess = ACCESS_READWRITE;
	metadata.telemetryAcked = 0;
	metadata.telemetryUpdateMode = UPDATEMODE_NEVER;
	metadata.telemetryUpdatePeriod = 0;
	metadata.gcsTelemetryAcked = 0;
	metadata.gcsTelemetryUpdateMode = UPDATEMODE_ONCHANGE;
	metadata.gcsTelemetryUpdatePeriod = 0;
	metadata.loggingUpdateMode = UPDATEMODE_NEVER;
	metadata.loggingUpdatePeriod = 0;
	UAVObjSetMetadata(obj, &metadata);
}

/**
 * Get object handle
 */
UAVObjHandle GCSReceiverHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void GCSReceiverChannelSet( uint16_t *NewChannel )
{
	UAVObjSetDataField(GCSReceiverHandle(), (void*)NewChannel, offsetof( GCSReceiverData, Channel), 6*sizeof(uint16_t));
}
void GCSReceiverChannelGet( uint16_t *NewChannel )
{
	UAVObjGetDataField(GCSReceiverHandle(), (void*)NewChannel, offsetof( GCSReceiverData, Channel), 6*sizeof(uint16_t));
}


/**
 * @}
 */


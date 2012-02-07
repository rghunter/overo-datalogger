/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup AttitudeSettings AttitudeSettings
 * @brief Settings for the @ref Attitude module used on CopterControl
 *
 * Autogenerated files and functions for AttitudeSettings Object
 * @{ 
 *
 * @file       attitudesettings.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the AttitudeSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: attitudesettings.xml. 
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
#include "attitudesettings.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t AttitudeSettingsInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(ATTITUDESETTINGS_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(ATTITUDESETTINGS_OBJID, ATTITUDESETTINGS_NAME, ATTITUDESETTINGS_METANAME, 0,
			ATTITUDESETTINGS_ISSINGLEINST, ATTITUDESETTINGS_ISSETTINGS, ATTITUDESETTINGS_NUMBYTES, &AttitudeSettingsSetDefaults);

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
void AttitudeSettingsSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	AttitudeSettingsData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(AttitudeSettingsData));
	data.GyroGain = 0.42;
	data.AccelKp = 0.05;
	data.AccelKi = 0.0001;
	data.YawBiasRate = 1e-06;
	data.AccelBias[0] = 0;
	data.AccelBias[1] = 0;
	data.AccelBias[2] = 0;
	data.GyroBias[0] = 0;
	data.GyroBias[1] = 0;
	data.GyroBias[2] = 0;
	data.BoardRotation[0] = 0;
	data.BoardRotation[1] = 0;
	data.BoardRotation[2] = 0;
	data.ZeroDuringArming = 1;
	data.BiasCorrectGyro = 1;
	data.TrimFlight = 0;

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
UAVObjHandle AttitudeSettingsHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void AttitudeSettingsGyroGainSet( float *NewGyroGain )
{
	UAVObjSetDataField(AttitudeSettingsHandle(), (void*)NewGyroGain, offsetof( AttitudeSettingsData, GyroGain), sizeof(float));
}
void AttitudeSettingsGyroGainGet( float *NewGyroGain )
{
	UAVObjGetDataField(AttitudeSettingsHandle(), (void*)NewGyroGain, offsetof( AttitudeSettingsData, GyroGain), sizeof(float));
}
void AttitudeSettingsAccelKpSet( float *NewAccelKp )
{
	UAVObjSetDataField(AttitudeSettingsHandle(), (void*)NewAccelKp, offsetof( AttitudeSettingsData, AccelKp), sizeof(float));
}
void AttitudeSettingsAccelKpGet( float *NewAccelKp )
{
	UAVObjGetDataField(AttitudeSettingsHandle(), (void*)NewAccelKp, offsetof( AttitudeSettingsData, AccelKp), sizeof(float));
}
void AttitudeSettingsAccelKiSet( float *NewAccelKi )
{
	UAVObjSetDataField(AttitudeSettingsHandle(), (void*)NewAccelKi, offsetof( AttitudeSettingsData, AccelKi), sizeof(float));
}
void AttitudeSettingsAccelKiGet( float *NewAccelKi )
{
	UAVObjGetDataField(AttitudeSettingsHandle(), (void*)NewAccelKi, offsetof( AttitudeSettingsData, AccelKi), sizeof(float));
}
void AttitudeSettingsYawBiasRateSet( float *NewYawBiasRate )
{
	UAVObjSetDataField(AttitudeSettingsHandle(), (void*)NewYawBiasRate, offsetof( AttitudeSettingsData, YawBiasRate), sizeof(float));
}
void AttitudeSettingsYawBiasRateGet( float *NewYawBiasRate )
{
	UAVObjGetDataField(AttitudeSettingsHandle(), (void*)NewYawBiasRate, offsetof( AttitudeSettingsData, YawBiasRate), sizeof(float));
}
void AttitudeSettingsAccelBiasSet( int16_t *NewAccelBias )
{
	UAVObjSetDataField(AttitudeSettingsHandle(), (void*)NewAccelBias, offsetof( AttitudeSettingsData, AccelBias), 3*sizeof(int16_t));
}
void AttitudeSettingsAccelBiasGet( int16_t *NewAccelBias )
{
	UAVObjGetDataField(AttitudeSettingsHandle(), (void*)NewAccelBias, offsetof( AttitudeSettingsData, AccelBias), 3*sizeof(int16_t));
}
void AttitudeSettingsGyroBiasSet( int16_t *NewGyroBias )
{
	UAVObjSetDataField(AttitudeSettingsHandle(), (void*)NewGyroBias, offsetof( AttitudeSettingsData, GyroBias), 3*sizeof(int16_t));
}
void AttitudeSettingsGyroBiasGet( int16_t *NewGyroBias )
{
	UAVObjGetDataField(AttitudeSettingsHandle(), (void*)NewGyroBias, offsetof( AttitudeSettingsData, GyroBias), 3*sizeof(int16_t));
}
void AttitudeSettingsBoardRotationSet( int16_t *NewBoardRotation )
{
	UAVObjSetDataField(AttitudeSettingsHandle(), (void*)NewBoardRotation, offsetof( AttitudeSettingsData, BoardRotation), 3*sizeof(int16_t));
}
void AttitudeSettingsBoardRotationGet( int16_t *NewBoardRotation )
{
	UAVObjGetDataField(AttitudeSettingsHandle(), (void*)NewBoardRotation, offsetof( AttitudeSettingsData, BoardRotation), 3*sizeof(int16_t));
}
void AttitudeSettingsZeroDuringArmingSet( uint8_t *NewZeroDuringArming )
{
	UAVObjSetDataField(AttitudeSettingsHandle(), (void*)NewZeroDuringArming, offsetof( AttitudeSettingsData, ZeroDuringArming), sizeof(uint8_t));
}
void AttitudeSettingsZeroDuringArmingGet( uint8_t *NewZeroDuringArming )
{
	UAVObjGetDataField(AttitudeSettingsHandle(), (void*)NewZeroDuringArming, offsetof( AttitudeSettingsData, ZeroDuringArming), sizeof(uint8_t));
}
void AttitudeSettingsBiasCorrectGyroSet( uint8_t *NewBiasCorrectGyro )
{
	UAVObjSetDataField(AttitudeSettingsHandle(), (void*)NewBiasCorrectGyro, offsetof( AttitudeSettingsData, BiasCorrectGyro), sizeof(uint8_t));
}
void AttitudeSettingsBiasCorrectGyroGet( uint8_t *NewBiasCorrectGyro )
{
	UAVObjGetDataField(AttitudeSettingsHandle(), (void*)NewBiasCorrectGyro, offsetof( AttitudeSettingsData, BiasCorrectGyro), sizeof(uint8_t));
}
void AttitudeSettingsTrimFlightSet( uint8_t *NewTrimFlight )
{
	UAVObjSetDataField(AttitudeSettingsHandle(), (void*)NewTrimFlight, offsetof( AttitudeSettingsData, TrimFlight), sizeof(uint8_t));
}
void AttitudeSettingsTrimFlightGet( uint8_t *NewTrimFlight )
{
	UAVObjGetDataField(AttitudeSettingsHandle(), (void*)NewTrimFlight, offsetof( AttitudeSettingsData, TrimFlight), sizeof(uint8_t));
}


/**
 * @}
 */


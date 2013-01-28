/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup AirspeedSettings AirspeedSettings 
 * @brief Settings for the @ref BaroAirspeed module used on CopterControl or Revolution
 *
 * Autogenerated files and functions for AirspeedSettings Object
 
 * @{ 
 *
 * @file       airspeedsettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     PhoenixPilot, http://github.com/PhoenixPilot, Copyright (C) 2012
 * @brief      Implementation of the AirspeedSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: airspeedsettings.xml. 
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

#ifndef AIRSPEEDSETTINGS_H
#define AIRSPEEDSETTINGS_H

// Object constants
#define AIRSPEEDSETTINGS_OBJID 0xB9F5B8AE
#define AIRSPEEDSETTINGS_ISSINGLEINST 1
#define AIRSPEEDSETTINGS_ISSETTINGS 1
#define AIRSPEEDSETTINGS_NUMBYTES 8

// Generic interface functions
int32_t AirspeedSettingsInitialize();
UAVObjHandle AirspeedSettingsHandle();
void AirspeedSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    float Scale;
    uint16_t ZeroPoint;
    uint8_t GPSSamplePeriod_ms;
    uint8_t AirspeedSensorType;

} __attribute__((packed)) __attribute__((aligned(4))) AirspeedSettingsData;

// Typesafe Object access functions
/**
 * @function AirspeedSettingsGet(dataOut)
 * @brief Populate a AirspeedSettingsData object
 * @param[out] dataOut 
 */
static inline int32_t AirspeedSettingsGet(AirspeedSettingsData *dataOut) { return UAVObjGetData(AirspeedSettingsHandle(), dataOut); }

static inline int32_t AirspeedSettingsSet(const AirspeedSettingsData *dataIn) { return UAVObjSetData(AirspeedSettingsHandle(), dataIn); }

static inline int32_t AirspeedSettingsInstGet(uint16_t instId, AirspeedSettingsData *dataOut) { return UAVObjGetInstanceData(AirspeedSettingsHandle(), instId, dataOut); }

static inline int32_t AirspeedSettingsInstSet(uint16_t instId, const AirspeedSettingsData *dataIn) { return UAVObjSetInstanceData(AirspeedSettingsHandle(), instId, dataIn); }

static inline int32_t AirspeedSettingsConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(AirspeedSettingsHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t AirspeedSettingsConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(AirspeedSettingsHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t AirspeedSettingsCreateInstance() { return UAVObjCreateInstance(AirspeedSettingsHandle(), &AirspeedSettingsSetDefaults); }

static inline void AirspeedSettingsRequestUpdate() { UAVObjRequestUpdate(AirspeedSettingsHandle()); }

static inline void AirspeedSettingsRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(AirspeedSettingsHandle(), instId); }

static inline void AirspeedSettingsUpdated() { UAVObjUpdated(AirspeedSettingsHandle()); }

static inline void AirspeedSettingsInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(AirspeedSettingsHandle(), instId); }

static inline int32_t AirspeedSettingsGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(AirspeedSettingsHandle(), dataOut); }

static inline int32_t AirspeedSettingsSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(AirspeedSettingsHandle(), dataIn); }

static inline int8_t AirspeedSettingsReadOnly() { return UAVObjReadOnly(AirspeedSettingsHandle()); }

// Field information
// Field Scale information
// Field ZeroPoint information
// Field GPSSamplePeriod_ms information
// Field AirspeedSensorType information
/* Enumeration options for field AirspeedSensorType */
typedef enum { AIRSPEEDSETTINGS_AIRSPEEDSENSORTYPE_EAGLETREEAIRSPEEDV3=0, AIRSPEEDSETTINGS_AIRSPEEDSENSORTYPE_DIYDRONESMPXV5004=1, AIRSPEEDSETTINGS_AIRSPEEDSENSORTYPE_DIYDRONESMPXV7002=2, AIRSPEEDSETTINGS_AIRSPEEDSENSORTYPE_GPSONLY=3 } AirspeedSettingsAirspeedSensorTypeOptions;


// set/Get functions
extern void AirspeedSettingsScaleSet( float *NewScale );
extern void AirspeedSettingsScaleGet( float *NewScale );
extern void AirspeedSettingsZeroPointSet( uint16_t *NewZeroPoint );
extern void AirspeedSettingsZeroPointGet( uint16_t *NewZeroPoint );
extern void AirspeedSettingsGPSSamplePeriod_msSet( uint8_t *NewGPSSamplePeriod_ms );
extern void AirspeedSettingsGPSSamplePeriod_msGet( uint8_t *NewGPSSamplePeriod_ms );
extern void AirspeedSettingsAirspeedSensorTypeSet( uint8_t *NewAirspeedSensorType );
extern void AirspeedSettingsAirspeedSensorTypeGet( uint8_t *NewAirspeedSensorType );


#endif // AIRSPEEDSETTINGS_H

/**
 * @}
 * @}
 */
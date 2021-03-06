/**
 ******************************************************************************
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 * @addtogroup FlightStatus FlightStatus
 * @brief Contains major flight status information for other modules.
 *
 *
 * @file       flightstatus.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2013
 * @brief      Include files for the FlightStatus object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: flightstatus.xml. 
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

#ifndef FLIGHTSTATUS_H
#define FLIGHTSTATUS_H

// Object constants
#define FLIGHTSTATUS_OBJID 0xE033F0EE
#define FLIGHTSTATUS_ISSINGLEINST 1
#define FLIGHTSTATUS_ISSETTINGS 0
#define FLIGHTSTATUS_NUMBYTES 3

// Generic interface functions
int32_t FlightStatusInitialize();
UAVObjHandle FlightStatusHandle();
void FlightStatusSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    uint8_t Armed;
    uint8_t FlightMode;
    uint8_t ControlSource;

} __attribute__((packed)) __attribute__((aligned(4))) FlightStatusData;

// Typesafe Object access functions
/**
 * @function FlightStatusGet(dataOut)
 * @brief Populate a FlightStatusData object
 * @param[out] dataOut 
 */
static inline int32_t FlightStatusGet(FlightStatusData *dataOut) { return UAVObjGetData(FlightStatusHandle(), dataOut); }

static inline int32_t FlightStatusSet(const FlightStatusData *dataIn) { return UAVObjSetData(FlightStatusHandle(), dataIn); }

static inline int32_t FlightStatusInstGet(uint16_t instId, FlightStatusData *dataOut) { return UAVObjGetInstanceData(FlightStatusHandle(), instId, dataOut); }

static inline int32_t FlightStatusInstSet(uint16_t instId, const FlightStatusData *dataIn) { return UAVObjSetInstanceData(FlightStatusHandle(), instId, dataIn); }

static inline int32_t FlightStatusConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(FlightStatusHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t FlightStatusConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(FlightStatusHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t FlightStatusCreateInstance() { return UAVObjCreateInstance(FlightStatusHandle(), &FlightStatusSetDefaults); }

static inline void FlightStatusRequestUpdate() { UAVObjRequestUpdate(FlightStatusHandle()); }

static inline void FlightStatusRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(FlightStatusHandle(), instId); }

static inline void FlightStatusUpdated() { UAVObjUpdated(FlightStatusHandle()); }

static inline void FlightStatusInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(FlightStatusHandle(), instId); }

static inline int32_t FlightStatusGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(FlightStatusHandle(), dataOut); }

static inline int32_t FlightStatusSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(FlightStatusHandle(), dataIn); }

static inline int8_t FlightStatusReadOnly() { return UAVObjReadOnly(FlightStatusHandle()); }

static inline uint16_t FlightStatusGetNumInstances(){ return UAVObjGetNumInstances(FlightStatusHandle()); }

static inline uint32_t FlightStatusGetNumBytes(){ return UAVObjGetNumBytes(FlightStatusHandle()); }

// Field information
// Field Armed information
/* Enumeration options for field Armed */
typedef enum { FLIGHTSTATUS_ARMED_DISARMED=0, FLIGHTSTATUS_ARMED_ARMING=1, FLIGHTSTATUS_ARMED_ARMED=2 }  __attribute__((packed)) FlightStatusArmedOptions;
// Field FlightMode information
/* Enumeration options for field FlightMode */
typedef enum { FLIGHTSTATUS_FLIGHTMODE_MANUAL=0, FLIGHTSTATUS_FLIGHTMODE_STABILIZED1=1, FLIGHTSTATUS_FLIGHTMODE_STABILIZED2=2, FLIGHTSTATUS_FLIGHTMODE_STABILIZED3=3, FLIGHTSTATUS_FLIGHTMODE_AUTOTUNE=4, FLIGHTSTATUS_FLIGHTMODE_ALTITUDEHOLD=5, FLIGHTSTATUS_FLIGHTMODE_VELOCITYCONTROL=6, FLIGHTSTATUS_FLIGHTMODE_POSITIONHOLD=7, FLIGHTSTATUS_FLIGHTMODE_RETURNTOHOME=8, FLIGHTSTATUS_FLIGHTMODE_PATHPLANNER=9, FLIGHTSTATUS_FLIGHTMODE_TABLETCONTROL=10 }  __attribute__((packed)) FlightStatusFlightModeOptions;
// Field ControlSource information
/* Enumeration options for field ControlSource */
typedef enum { FLIGHTSTATUS_CONTROLSOURCE_GEOFENCE=0, FLIGHTSTATUS_CONTROLSOURCE_FAILSAFE=1, FLIGHTSTATUS_CONTROLSOURCE_TRANSMITTER=2, FLIGHTSTATUS_CONTROLSOURCE_TABLET=3 }  __attribute__((packed)) FlightStatusControlSourceOptions;


// set/Get functions
extern void FlightStatusArmedSet( uint8_t *NewArmed );
extern void FlightStatusArmedGet( uint8_t *NewArmed );
extern void FlightStatusFlightModeSet( uint8_t *NewFlightMode );
extern void FlightStatusFlightModeGet( uint8_t *NewFlightMode );
extern void FlightStatusControlSourceSet( uint8_t *NewControlSource );
extern void FlightStatusControlSourceGet( uint8_t *NewControlSource );


#endif // FLIGHTSTATUS_H

/**
 * @}
 * @}
 */

/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup PipXStatus PipXStatus 
 * @brief PipXtreme device status.
 *
 * Autogenerated files and functions for PipXStatus Object
 
 * @{ 
 *
 * @file       pipxstatus.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the PipXStatus object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: pipxstatus.xml. 
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

#ifndef PIPXSTATUS_H
#define PIPXSTATUS_H

// Object constants
#define PIPXSTATUS_OBJID 0x3FC68A86
#define PIPXSTATUS_ISSINGLEINST 1
#define PIPXSTATUS_ISSETTINGS 0
#define PIPXSTATUS_NUMBYTES sizeof(PipXStatusData)

// Object access macros
/**
 * @function PipXStatusGet(dataOut)
 * @brief Populate a PipXStatusData object
 * @param[out] dataOut 
 */
#define PipXStatusGet(dataOut) UAVObjGetData(PipXStatusHandle(), dataOut)
#define PipXStatusSet(dataIn) UAVObjSetData(PipXStatusHandle(), dataIn)
#define PipXStatusInstGet(instId, dataOut) UAVObjGetInstanceData(PipXStatusHandle(), instId, dataOut)
#define PipXStatusInstSet(instId, dataIn) UAVObjSetInstanceData(PipXStatusHandle(), instId, dataIn)
#define PipXStatusConnectQueue(queue) UAVObjConnectQueue(PipXStatusHandle(), queue, EV_MASK_ALL_UPDATES)
#define PipXStatusConnectCallback(cb) UAVObjConnectCallback(PipXStatusHandle(), cb, EV_MASK_ALL_UPDATES)
#define PipXStatusCreateInstance() UAVObjCreateInstance(PipXStatusHandle(),&PipXStatusSetDefaults)
#define PipXStatusRequestUpdate() UAVObjRequestUpdate(PipXStatusHandle())
#define PipXStatusRequestInstUpdate(instId) UAVObjRequestInstanceUpdate(PipXStatusHandle(), instId)
#define PipXStatusUpdated() UAVObjUpdated(PipXStatusHandle())
#define PipXStatusInstUpdated(instId) UAVObjUpdated(PipXStatusHandle(), instId)
#define PipXStatusGetMetadata(dataOut) UAVObjGetMetadata(PipXStatusHandle(), dataOut)
#define PipXStatusSetMetadata(dataIn) UAVObjSetMetadata(PipXStatusHandle(), dataIn)
#define PipXStatusReadOnly() UAVObjReadOnly(PipXStatusHandle())

// Object data
typedef struct {
    uint32_t MinFrequency;
    uint32_t MaxFrequency;
    float FrequencyStepSize;
    uint32_t DeviceID;
    int32_t AFC;
    uint32_t PairIDs[4];
    uint16_t BoardRevision;
    uint16_t Retries;
    uint16_t Errors;
    uint16_t UAVTalkErrors;
    uint16_t Dropped;
    uint16_t Resets;
    uint16_t TXRate;
    uint16_t RXRate;
    uint8_t Description[40];
    uint8_t CPUSerial[12];
    uint8_t BoardType;
    uint8_t FrequencyBand;
    int8_t RSSI;
    uint8_t LinkState;
    int8_t PairSignalStrengths[4];

} __attribute__((packed)) PipXStatusData;

// Field information
// Field MinFrequency information
// Field MaxFrequency information
// Field FrequencyStepSize information
// Field DeviceID information
// Field AFC information
// Field PairIDs information
/* Number of elements for field PairIDs */
#define PIPXSTATUS_PAIRIDS_NUMELEM 4
// Field BoardRevision information
// Field Retries information
// Field Errors information
// Field UAVTalkErrors information
// Field Dropped information
// Field Resets information
// Field TXRate information
// Field RXRate information
// Field Description information
/* Number of elements for field Description */
#define PIPXSTATUS_DESCRIPTION_NUMELEM 40
// Field CPUSerial information
/* Number of elements for field CPUSerial */
#define PIPXSTATUS_CPUSERIAL_NUMELEM 12
// Field BoardType information
// Field FrequencyBand information
// Field RSSI information
// Field LinkState information
/* Enumeration options for field LinkState */
typedef enum { PIPXSTATUS_LINKSTATE_DISCONNECTED=0, PIPXSTATUS_LINKSTATE_CONNECTING=1, PIPXSTATUS_LINKSTATE_CONNECTED=2 } PipXStatusLinkStateOptions;
// Field PairSignalStrengths information
/* Number of elements for field PairSignalStrengths */
#define PIPXSTATUS_PAIRSIGNALSTRENGTHS_NUMELEM 4


// Generic interface functions
int32_t PipXStatusInitialize();
UAVObjHandle PipXStatusHandle();
void PipXStatusSetDefaults(UAVObjHandle obj, uint16_t instId);

// set/Get functions
extern void PipXStatusMinFrequencySet( uint32_t *NewMinFrequency );
extern void PipXStatusMinFrequencyGet( uint32_t *NewMinFrequency );
extern void PipXStatusMaxFrequencySet( uint32_t *NewMaxFrequency );
extern void PipXStatusMaxFrequencyGet( uint32_t *NewMaxFrequency );
extern void PipXStatusFrequencyStepSizeSet( float *NewFrequencyStepSize );
extern void PipXStatusFrequencyStepSizeGet( float *NewFrequencyStepSize );
extern void PipXStatusDeviceIDSet( uint32_t *NewDeviceID );
extern void PipXStatusDeviceIDGet( uint32_t *NewDeviceID );
extern void PipXStatusAFCSet( int32_t *NewAFC );
extern void PipXStatusAFCGet( int32_t *NewAFC );
extern void PipXStatusPairIDsSet( uint32_t *NewPairIDs );
extern void PipXStatusPairIDsGet( uint32_t *NewPairIDs );
extern void PipXStatusBoardRevisionSet( uint16_t *NewBoardRevision );
extern void PipXStatusBoardRevisionGet( uint16_t *NewBoardRevision );
extern void PipXStatusRetriesSet( uint16_t *NewRetries );
extern void PipXStatusRetriesGet( uint16_t *NewRetries );
extern void PipXStatusErrorsSet( uint16_t *NewErrors );
extern void PipXStatusErrorsGet( uint16_t *NewErrors );
extern void PipXStatusUAVTalkErrorsSet( uint16_t *NewUAVTalkErrors );
extern void PipXStatusUAVTalkErrorsGet( uint16_t *NewUAVTalkErrors );
extern void PipXStatusDroppedSet( uint16_t *NewDropped );
extern void PipXStatusDroppedGet( uint16_t *NewDropped );
extern void PipXStatusResetsSet( uint16_t *NewResets );
extern void PipXStatusResetsGet( uint16_t *NewResets );
extern void PipXStatusTXRateSet( uint16_t *NewTXRate );
extern void PipXStatusTXRateGet( uint16_t *NewTXRate );
extern void PipXStatusRXRateSet( uint16_t *NewRXRate );
extern void PipXStatusRXRateGet( uint16_t *NewRXRate );
extern void PipXStatusDescriptionSet( uint8_t *NewDescription );
extern void PipXStatusDescriptionGet( uint8_t *NewDescription );
extern void PipXStatusCPUSerialSet( uint8_t *NewCPUSerial );
extern void PipXStatusCPUSerialGet( uint8_t *NewCPUSerial );
extern void PipXStatusBoardTypeSet( uint8_t *NewBoardType );
extern void PipXStatusBoardTypeGet( uint8_t *NewBoardType );
extern void PipXStatusFrequencyBandSet( uint8_t *NewFrequencyBand );
extern void PipXStatusFrequencyBandGet( uint8_t *NewFrequencyBand );
extern void PipXStatusRSSISet( int8_t *NewRSSI );
extern void PipXStatusRSSIGet( int8_t *NewRSSI );
extern void PipXStatusLinkStateSet( uint8_t *NewLinkState );
extern void PipXStatusLinkStateGet( uint8_t *NewLinkState );
extern void PipXStatusPairSignalStrengthsSet( int8_t *NewPairSignalStrengths );
extern void PipXStatusPairSignalStrengthsGet( int8_t *NewPairSignalStrengths );


#endif // PIPXSTATUS_H

/**
 * @}
 * @}
 */
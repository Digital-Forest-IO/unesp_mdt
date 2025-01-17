//*****************************************************************************
//
// mpu9150.h - Prototypes for the MPU9150 accelerometer, gyroscope, and
//             magnetometer driver.
//
// Copyright (c) 2013 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 2.0.1.11577 of the Tiva Firmware Development Package.
//
//*****************************************************************************

#ifndef __SENSORLIB_MPU9150_H__
#define __SENSORLIB_MPU9150_H__

//*****************************************************************************
//
// If building with a C++ compiler, make all of the definitions in this header
// have a C binding.
//
//*****************************************************************************
#ifdef __cplusplus
extern "C"
{
#endif

//*****************************************************************************
//
// The structure that defines the internal state of the MPU9150 driver.
//
//*****************************************************************************
typedef struct
{
    //
    // The pointer to the I2C master interface instance used to communicate
    // with the MPU9150.
    //
    tI2CMInstance *psI2CInst;

    //
    // The AK8975 inst that used to access the on-chip AK8975 magnetometer
    //
    tAK8975 sAK8975Inst;

    //
    // The I2C address of the MPU9150.
    //
    uint8_t ui8Addr;

    //
    // The state of the state machine used while accessing the MPU9150.
    //
    uint8_t ui8State;

    //
    // The current accelerometer afs_sel setting
    //
    uint8_t ui8AccelAfsSel;

    //
    // The new accelerometer afs_sel setting, which is used when a register
    // write succeeds.
    //
    uint8_t ui8NewAccelAfsSel;

    //
    // The current gyroscope fs_sel setting
    //
    uint8_t ui8GyroFsSel;

    //
    // The new gyroscope fs_sel setting, which is used when a register write
    // succeeds.
    //
    uint8_t ui8NewGyroFsSel;

    //
    // The data buffer used for sending/receiving data to/from the MPU9150.
    //
    uint8_t pui8Data[24];

    //
    // The function that is called when the current request has completed
    // processing.
    //
    tSensorCallback *pfnCallback;

    //
    // The callback data provided to the callback function.
    //
    void *pvCallbackData;

    //
    // A union of structures that are used for read, write and
    // read-modify-write operations.  Since only one operation can be active at
    // a time, it is safe to re-use the memory in this manner.
    //
    union
    {
        //
        // A buffer used to store the write portion of a register read.
        //
        uint8_t pui8Buffer[6];

        //
        // The write state used to write register values.
        //
        tI2CMWrite8 sWriteState;

        //
        // The read-modify-write state used to modify register values.
        //
        tI2CMReadModifyWrite8 sReadModifyWriteState;
    }
    uCommand;
}
tMPU9150;

//*****************************************************************************
//
// Function prototypes.
//
//*****************************************************************************
extern uint_fast8_t MPU9150Init(tMPU9150 *psInst, tI2CMInstance *psI2CInst,
                                uint_fast8_t ui8I2CAddr,
                                tSensorCallback *pfnCallback,
                                void *pvCallbackData);
extern tAK8975 *MPU9150InstAK8975Get(tMPU9150 *psInst);
extern uint_fast8_t MPU9150Read(tMPU9150 *psInst, uint_fast8_t ui8Reg,
                                uint8_t *pui8Data, uint_fast16_t ui16Count,
                                tSensorCallback *pfnCallback,
                                void *pvCallbackData);
extern uint_fast8_t MPU9150Write(tMPU9150 *psInst, uint_fast8_t ui8Reg,
                                 const uint8_t *pui8Data,
                                 uint_fast16_t ui16Count,
                                 tSensorCallback *pfnCallback,
                                 void *pvCallbackData);
extern uint_fast8_t MPU9150ReadModifyWrite(tMPU9150 *psInst,
                                           uint_fast8_t ui8Reg,
                                           uint_fast8_t ui8Mask,
                                           uint_fast8_t ui8Value,
                                           tSensorCallback *pfnCallback,
                                           void *pvCallbackData);
extern uint_fast8_t MPU9150DataRead(tMPU9150 *psInst,
                                    tSensorCallback *pfnCallback,
                                    void *pvCallbackData);
extern void MPU9150DataAccelGetRaw(tMPU9150 *psInst,
                                   uint_fast16_t *pui16AccelX,
                                   uint_fast16_t *pui16AccelY,
                                   uint_fast16_t *pui16AccelZ);
extern void MPU9150DataAccelGetFloat(tMPU9150 *psInst, float *pfAccelX,
                                     float *pfAccelY, float *pfAccelZ);
extern void MPU9150DataGyroGetRaw(tMPU9150 *psInst, uint_fast16_t *pui16GyroX,
                                  uint_fast16_t *pui16GyroY,
                                  uint_fast16_t *pui16GyroZ);
extern void MPU9150DataGyroGetFloat(tMPU9150 *psInst, float *pfGyroX,
                                    float *pfGyroY, float *pfGyroZ);
extern void MPU9150DataMagnetoGetRaw(tMPU9150 *psInst,
                                     uint_fast16_t *pui16MagnetoX,
                                     uint_fast16_t *pui16MagnetoY,
                                     uint_fast16_t *pui16MagnetoZ);
extern void MPU9150DataMagnetoGetFloat(tMPU9150 *psInst, float *pfMagnetoX,
                                       float *pfMagnetoY, float *pfMagnetoZ);

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif // __SENSORLIB_MPU9150_H__

/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name: 

    spbtestioctl.h

Abstract:

    This module contains the public device path names and
    IOCTL definitions for the SpbTestTool.

Environment:

Revision History:

--*/

#ifndef _SPBTESTIOCTL_H_
#define _SPBTESTIOCTL_H_

//
// Device path names
//

#define SPBTESTTOOL_NAME L"SPBTESTTOOL"

#define SPBTESTTOOL_SYMBOLIC_NAME L"\\DosDevices\\" SPBTESTTOOL_NAME
#define SPBTESTTOOL_USERMODE_PATH L"\\\\.\\" SPBTESTTOOL_NAME
#define SPBTESTTOOL_USERMODE_PATH_SIZE sizeof(SPBTESTTOOL_USERMODE_PATH)

//
// Priavte SpbTestTool IOCTLs
//

#define FILE_DEVICE_SPB_PERIPHERAL 0x400

#define IOCTL_SPBTESTTOOL_OPEN              CTL_CODE(FILE_DEVICE_SPB_PERIPHERAL, 0x700, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SPBTESTTOOL_CLOSE             CTL_CODE(FILE_DEVICE_SPB_PERIPHERAL, 0x701, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SPBTESTTOOL_LOCK              CTL_CODE(FILE_DEVICE_SPB_PERIPHERAL, 0x702, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SPBTESTTOOL_UNLOCK            CTL_CODE(FILE_DEVICE_SPB_PERIPHERAL, 0x703, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SPBTESTTOOL_WRITEREAD         CTL_CODE(FILE_DEVICE_SPB_PERIPHERAL, 0x704, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SPBTESTTOOL_LOCK_CONNECTION   CTL_CODE(FILE_DEVICE_SPB_PERIPHERAL, 0x705, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SPBTESTTOOL_UNLOCK_CONNECTION CTL_CODE(FILE_DEVICE_SPB_PERIPHERAL, 0x706, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SPBTESTTOOL_SIGNAL_INTERRUPT  CTL_CODE(FILE_DEVICE_SPB_PERIPHERAL, 0x707, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SPBTESTTOOL_WAIT_ON_INTERRUPT CTL_CODE(FILE_DEVICE_SPB_PERIPHERAL, 0x708, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SPBTESTTOOL_FULL_DUPLEX       CTL_CODE(FILE_DEVICE_SPB_PERIPHERAL, 0x709, METHOD_BUFFERED, FILE_ANY_ACCESS)

#endif _SPBTESTIOCTL_H_
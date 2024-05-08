/***************************************************************************//**
 * @file
 * @brief FTP Example Code
 *******************************************************************************
 * # License
 * <b>Copyright 2018 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc.  Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement.  This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/

/********************************************************************************************************
 ********************************************************************************************************
 *                                               MODULE
 ********************************************************************************************************
 *******************************************************************************************************/

#ifndef  EX_FTP_CLIENT_H_
#define  EX_FTP_CLIENT_H_

/********************************************************************************************************
 ********************************************************************************************************
 *                                           INCLUDE FILES
 ********************************************************************************************************
 *******************************************************************************************************/

#include  <cpu/include/cpu.h>

/********************************************************************************************************
 ********************************************************************************************************
 *                                         FUNCTION PROTOTYPES
 ********************************************************************************************************
 *******************************************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif

void Ex_FTP_ClientSendData(void);
void Ex_FTP_ClientSendFile(void);
void Ex_FTP_ClientReceiveData(void);
void Ex_FTP_ClientReceiveFile(void);

#ifdef __cplusplus
}
#endif

/********************************************************************************************************
 ********************************************************************************************************
 *                                              MODULE END
 ********************************************************************************************************
 *******************************************************************************************************/

#endif // EX_SNTP_CLIENT_H_

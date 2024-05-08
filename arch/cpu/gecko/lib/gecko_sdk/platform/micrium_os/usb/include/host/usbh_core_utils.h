/***************************************************************************//**
 * @file
 * @brief USB Host Util Operations
 *******************************************************************************
 * # License
 * <b>Copyright 2018 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc.  Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement.
 * The software is governed by the sections of the MSLA applicable to Micrium
 * Software.
 *
 ******************************************************************************/

/********************************************************************************************************
 ********************************************************************************************************
 *                                               MODULE
 ********************************************************************************************************
 *******************************************************************************************************/

#ifndef  _USBH_CORE_UTILS_H_
#define  _USBH_CORE_UTILS_H_

/********************************************************************************************************
 ********************************************************************************************************
 *                                               INCLUDE FILES
 ********************************************************************************************************
 *******************************************************************************************************/

#include  <cpu/include/cpu.h>
#include  <common/include/lib_utils.h>

#include  <common/include/rtos_path.h>
#include  <usbh_cfg.h>

/********************************************************************************************************
 ********************************************************************************************************
 *                                               DEFINES
 ********************************************************************************************************
 *******************************************************************************************************/

/********************************************************************************************************
 *                                           FIELD EN MASKS MACROS
 *******************************************************************************************************/

#define  USBH_CFG_FIELD_IS_EN(field)             DEF_BIT_IS_SET(USBH_CFG_FIELD_EN_MASK, (field))

/********************************************************************************************************
 ********************************************************************************************************
 *                                               MODULE END
 ********************************************************************************************************
 *******************************************************************************************************/

#endif

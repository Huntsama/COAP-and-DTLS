/***************************************************************************//**
 * @file app_process.h
 * @brief Top level application functions.
 *******************************************************************************
 * # License
 * <b>Copyright 2020 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/
#ifndef APP_PROCESS_H
#define APP_PROCESS_H

// -----------------------------------------------------------------------------
//                                   Includes
// -----------------------------------------------------------------------------
#include "app_se_manager_macro.h"
#include "app_se_manager_user_data.h"
#include <inttypes.h>
#include <stdio.h>
#include <string.h>

// -----------------------------------------------------------------------------
//                              Macros and Typedefs
// -----------------------------------------------------------------------------
/// State machine states
typedef enum {
  SE_MANAGER_IDLE,
  SE_MANAGER_INIT,
  ERASE_USER_DATA,
  WRITE_USER_DATA,
  SE_MANAGER_EXIT
} state_t;

/// Blank data
#define BLANK_DATA      (0xffffffff)

/// Test data
#define TEST_DATA       (0x55aa55aa)

// -----------------------------------------------------------------------------
//                                Global Variables
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
//                          Public Function Declarations
// -----------------------------------------------------------------------------
/**************************************************************************//**
 * Application state machine, called infinitely.
 *****************************************************************************/
void app_process_action(void);

#endif  // APP_PROCESS_H

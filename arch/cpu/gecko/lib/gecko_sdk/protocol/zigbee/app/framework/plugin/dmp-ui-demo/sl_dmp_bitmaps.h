/***************************************************************************//**
 * @file
 * @brief Bitmap utility file for DMP demo plugin.
 *******************************************************************************
 * # License
 * <b>Copyright 2018 Silicon Laboratories Inc. www.silabs.com</b>
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

#ifndef SILABS_DMP_BITMAPS_H
#define SILABS_DMP_BITMAPS_H

#define SILICONLABS_BITMAP_WIDTH        128
#define SILICONLABS_BITMAP_HEIGHT       45
#define LIGHT_BITMAP_WIDTH              64
#define LIGHT_BITMAP_HEIGHT             64
#define ZIGBEE_BITMAP_WIDTH             16
#define ZIGBEE_BITMAP_HEIGHT            16
#define BLUETOOTH_BITMAP_WIDTH          16
#define BLUETOOTH_BITMAP_HEIGHT         18
#define SILICONLABS_X_POSITION          ((glibContext.pDisplayGeometry->xSize - SILICONLABS_BITMAP_WIDTH) / 2)
#define SILICONLABS_Y_POSITION          0
#define LIGHT_X_POSITION                ((glibContext.pDisplayGeometry->xSize - LIGHT_BITMAP_WIDTH) / 2)
#define LIGHT_Y_POSITION                (glibContext.pDisplayGeometry->ySize - LIGHT_BITMAP_HEIGHT - 5)
#define ZIGBEE_X_POSITION               8
#define ZIGBEE_Y_POSITION               (LIGHT_Y_POSITION + (LIGHT_Y_POSITION / 2)) + 2
#define BLUETOOTH_X_POSITION            104
#define BLUETOOTH_Y_POSITION            (LIGHT_Y_POSITION + (LIGHT_Y_POSITION / 2))

static const uint8_t siliconlabsBitmap[] = {
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0x0f, 0xf0, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xcf, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xff, 0x01, 0x00, 0x00, 0xc0,
  0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xff, 0xff, 0x3f,
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x1f, 0xfc, 0xff, 0xff, 0xff, 0xff,
  0xf3, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0x1f, 0xf8,
  0xff, 0xff, 0xff, 0x7f, 0xfc, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00,
  0xfc, 0xff, 0x1f, 0xf0, 0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 0x7f, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x1f, 0xe0, 0xff, 0xff, 0xff, 0xc3,
  0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x0f, 0xc0,
  0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xff, 0xff, 0x07, 0xc0, 0xff, 0xff, 0x1f, 0xf8, 0xff, 0xff, 0x03, 0x00,
  0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0x01, 0xc0, 0xff, 0xff, 0x07, 0xfc,
  0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x7f, 0x00, 0x80,
  0xff, 0xff, 0x01, 0xfe, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xf8, 0x0f, 0x00, 0x80, 0xff, 0x7f, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x3f, 0x80, 0xff,
  0xff, 0xff, 0x00, 0x00, 0xf0, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xc0,
  0xff, 0x0f, 0x80, 0xff, 0xff, 0xff, 0x00, 0xfc, 0xff, 0xff, 0xff, 0xff,
  0x01, 0x00, 0x00, 0xc0, 0xff, 0x03, 0xc0, 0xff, 0xff, 0xff, 0xe0, 0xff,
  0xff, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x00, 0xe0, 0xff, 0x01, 0xc0, 0xff,
  0xff, 0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xe0,
  0xff, 0x00, 0xc0, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0x01, 0x00, 0xf0, 0x7f, 0x00, 0x80, 0xff, 0xff, 0xff, 0x0f, 0xfc,
  0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0x00, 0xf8, 0x3f, 0x00, 0x80, 0xff,
  0xff, 0xff, 0x3f, 0x00, 0x00, 0xfe, 0xff, 0xff, 0xff, 0x0f, 0x00, 0xfc,
  0x1f, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0xc0, 0xff, 0xff,
  0xff, 0x0f, 0x00, 0xfe, 0x0f, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0xff,
  0xff, 0x0f, 0xff, 0xff, 0xff, 0x1f, 0x00, 0xff, 0x07, 0x00, 0x00, 0xf0,
  0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xfc, 0xff, 0xff, 0x1f, 0x80, 0xff,
  0x07, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xf8, 0xff,
  0xff, 0x1f, 0xc0, 0xff, 0x03, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff,
  0xff, 0x00, 0xf0, 0xff, 0xff, 0x0f, 0xf0, 0xff, 0x03, 0x00, 0x00, 0x00,
  0x00, 0xfe, 0xff, 0x3f, 0x00, 0x00, 0xf0, 0xff, 0xff, 0x0f, 0xfc, 0xff,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff,
  0xff, 0x07, 0xfe, 0xff, 0x01, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xf8, 0xff, 0xff, 0x83, 0xff, 0xff, 0x01, 0x00, 0xc0, 0xff,
  0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xe1, 0xff, 0xff,
  0x03, 0x00, 0xf0, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff,
  0xff, 0xf8, 0xff, 0xff, 0x03, 0x00, 0xf8, 0xff, 0x07, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xff, 0x03, 0x00, 0xfe, 0xff,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff,
  0x07, 0x00, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0x0f, 0x80, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00,
  0x00, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0xc0, 0xff, 0xff,
  0x07, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0x3f, 0xc0, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0x00, 0x00, 0x80,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x81, 0xff, 0xff,
  0xff, 0x1f, 0x00, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

static unsigned char lightOnBitMap[] = {
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xfc, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0x7f, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f,
  0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xfc, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0x7f, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f,
  0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xfc, 0xff, 0xff, 0xff,
  0xff, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xff, 0x8f, 0xff, 0xff,
  0xff, 0xff, 0xf1, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff,
  0xff, 0x1f, 0xfe, 0x07, 0xe0, 0x7f, 0xf8, 0xff, 0xff, 0x3f, 0xfc, 0x00,
  0x00, 0x3f, 0xfc, 0xff, 0xff, 0x7f, 0x3c, 0xe0, 0x07, 0x3c, 0xfe, 0xff,
  0xff, 0xff, 0x1f, 0xfe, 0x7f, 0xf8, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xff,
  0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xc7, 0xff, 0xff, 0xe3, 0xff, 0xff,
  0xff, 0xff, 0xe3, 0xff, 0xff, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xff,
  0xff, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xff, 0x8f, 0xff, 0xff,
  0xff, 0xff, 0xf8, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0x7f, 0xfc, 0xff,
  0xff, 0x3f, 0xfe, 0xff, 0xff, 0x7f, 0xfc, 0xff, 0xff, 0x3f, 0xfe, 0xff,
  0xff, 0x7f, 0xfc, 0xff, 0xff, 0x3f, 0xfe, 0xff, 0xff, 0x7f, 0xfe, 0xff,
  0xff, 0x7f, 0xfe, 0xff, 0xff, 0x3f, 0xfe, 0xff, 0xff, 0x7f, 0xfc, 0xff,
  0xff, 0x3f, 0xfe, 0xff, 0xff, 0x7f, 0xfc, 0xff, 0x0f, 0x38, 0xfe, 0xff,
  0xff, 0x7f, 0x1c, 0xf0, 0x0f, 0x38, 0xfe, 0x03, 0xc0, 0x7f, 0x1c, 0xf0,
  0x0f, 0x38, 0xfe, 0x27, 0xe9, 0x7f, 0x1c, 0xf0, 0xff, 0x3f, 0xfe, 0xff,
  0xff, 0x7f, 0xfc, 0xff, 0xff, 0x3f, 0xfe, 0xff, 0xff, 0x7f, 0xfc, 0xff,
  0xff, 0x3f, 0xfe, 0xe7, 0xe7, 0x7f, 0xfc, 0xff, 0xff, 0x7f, 0xfe, 0xef,
  0xf7, 0x7f, 0xfe, 0xff, 0xff, 0x7f, 0xfc, 0xef, 0xf7, 0x3f, 0xfe, 0xff,
  0xff, 0xff, 0xfc, 0xef, 0xf3, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xcf,
  0xf3, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xdf, 0xfb, 0x1f, 0xff, 0xff,
  0xff, 0xff, 0xf1, 0xdf, 0xfb, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xe3, 0x9f,
  0xf9, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xc3, 0x9f, 0xf9, 0xc3, 0xff, 0xff,
  0xff, 0xff, 0xc7, 0x9f, 0xfd, 0xe3, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xbf,
  0xfd, 0xf1, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x3f, 0xfc, 0xf8, 0xff, 0xff,
  0xff, 0xff, 0x3f, 0x3e, 0x7c, 0xfc, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xfc,
  0x3f, 0xfe, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xfc, 0x3f, 0xfe, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8,
  0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xf1, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01,
  0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x03, 0xc0, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0x3f, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

static unsigned char lightOffBitMap[] = {
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0x07, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xe0, 0x07, 0xfc, 0xff, 0xff,
  0xff, 0xff, 0x1f, 0xfe, 0x7f, 0xf8, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xff,
  0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xc7, 0xff, 0xff, 0xe3, 0xff, 0xff,
  0xff, 0xff, 0xe3, 0xff, 0xff, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xff,
  0xff, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xff, 0x8f, 0xff, 0xff,
  0xff, 0xff, 0xf8, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0x7f, 0xfc, 0xff,
  0xff, 0x3f, 0xfe, 0xff, 0xff, 0x7f, 0xfc, 0xff, 0xff, 0x3f, 0xfe, 0xff,
  0xff, 0x7f, 0xfc, 0xff, 0xff, 0x3f, 0xfe, 0xff, 0xff, 0x7f, 0xfe, 0xff,
  0xff, 0x7f, 0xfe, 0xff, 0xff, 0x3f, 0xfe, 0xff, 0xff, 0x7f, 0xfc, 0xff,
  0xff, 0x3f, 0xfe, 0xff, 0xff, 0x7f, 0xfc, 0xff, 0xff, 0x3f, 0xfe, 0xff,
  0xff, 0x7f, 0xfc, 0xff, 0xff, 0x3f, 0xfe, 0xff, 0xff, 0x7f, 0xfc, 0xff,
  0xff, 0x3f, 0xfe, 0xff, 0xff, 0x7f, 0xfc, 0xff, 0xff, 0x3f, 0xfe, 0xff,
  0xff, 0x7f, 0xfc, 0xff, 0xff, 0x3f, 0xfe, 0xff, 0xff, 0x7f, 0xfc, 0xff,
  0xff, 0x3f, 0xfe, 0xff, 0xff, 0x7f, 0xfc, 0xff, 0xff, 0x7f, 0xfe, 0xff,
  0xff, 0x7f, 0xfe, 0xff, 0xff, 0x7f, 0xfc, 0xff, 0xff, 0x3f, 0xfe, 0xff,
  0xff, 0xff, 0xfc, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff,
  0xff, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0x1f, 0xff, 0xff,
  0xff, 0xff, 0xf1, 0xff, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xff,
  0xff, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xc3, 0xff, 0xff,
  0xff, 0xff, 0xc7, 0xff, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xff,
  0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xf8, 0xff, 0xff,
  0xff, 0xff, 0x3f, 0xfe, 0x7f, 0xfc, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xfc,
  0x3f, 0xfe, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xfc, 0x3f, 0xfe, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8,
  0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xf1, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01,
  0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x03, 0xc0, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0x3f, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

static unsigned char zigbeeBitmap[] = {
  0x3f, 0xfc, 0x07, 0xf0, 0xff, 0xc7, 0xff, 0x9f, 0x01, 0x9c, 0x00, 0x0e,
  0x00, 0x07, 0x80, 0x03, 0xc0, 0x01, 0xe0, 0x00, 0x70, 0x80, 0x39, 0x80,
  0xf9, 0xff, 0xfb, 0xff, 0x07, 0xe0, 0x1f, 0xfc
};

static unsigned char bluetoothBitmap[] = {
  0xff, 0xff, 0x7f, 0xff, 0x7f, 0xfe, 0x7f, 0xf8, 0x7f, 0xf2, 0x73, 0xe6,
  0x67, 0xf2, 0x4f, 0xf8, 0x1f, 0xfe, 0x1f, 0xfe, 0x4f, 0xf8, 0x67, 0xf2,
  0x73, 0xe6, 0x7f, 0xf2, 0x7f, 0xf8, 0x7f, 0xfe, 0x7f, 0xff, 0xff, 0xff
};

static unsigned char bluetoothConnectedBitmap[] = {
  0xff, 0xff, 0x7f, 0xff, 0x7f, 0xfe, 0x7f, 0xf8, 0x7f, 0xf2, 0x73, 0xe6,
  0x67, 0xf2, 0x4d, 0xd8, 0x18, 0x8e, 0x18, 0x8e, 0x4d, 0xd8, 0x67, 0xf2,
  0x73, 0xe6, 0x7f, 0xf2, 0x7f, 0xf8, 0x7f, 0xfe, 0x7f, 0xff, 0xff, 0xff
};

#endif // SILABS_DMP_BITMAPS_H

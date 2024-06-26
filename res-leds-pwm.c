/*
 * Copyright (c) 2013, Institute for Pervasive Computing, ETH Zurich
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the Institute nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE INSTITUTE AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE INSTITUTE OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * This file is part of the Contiki operating system.
 */

/**
 * \file
 *      Example resource
 * \author
 *      Matthias Kovatsch <kovatsch@inf.ethz.ch>
 */

#include "contiki.h"
#include "coap-engine.h"
#include "dev/leds.h"

#include "pwm.h"

#include <string.h>

/* Log configuration */
#include "sys/log.h"
#define LOG_MODULE "Coap led pwm resource"
#define LOG_LEVEL LOG_LEVEL_INFO

static void pwm_post_put_handler(coap_message_t *request, coap_message_t *response, uint8_t *buffer, uint16_t preferred_size, int32_t *offset);
static void pwm_get_handler(coap_message_t *request, coap_message_t *response, uint8_t *buffer, uint16_t preferred_size, int32_t *offset);
void pwm_init_handler( void );

static uint8_t coapdutycycleR; //in percent
static uint8_t coapdutycycleG;
static uint8_t coapdutycycleB;
static pwm_t ledDriverPWMr;
static pwm_t ledDriverPWMg;
static pwm_t ledDriverPWMb;

/* A simple actuator example, depending on the color query parameter and post variable mode, corresponding led is activated or deactivated */
RESOURCE(res_pwm_leds,
         "title=\"LEDs: ?color=r|g|b|w, POST/PUT dutycycle\";rt=\"Control\"",
         pwm_get_handler,
         pwm_post_put_handler,
         pwm_post_put_handler,
         NULL);

static void
pwm_post_put_handler(coap_message_t *request, coap_message_t *response, uint8_t *buffer, uint16_t preferred_size, int32_t *offset)
{
  size_t len = 0;
  const char *color = NULL;

  if((len = coap_get_query_variable(request, "color", &color))) {
    LOG_DBG("color %.*s\n", (int)len, color);
    if(request->payload_len > 0 && request->payload_len <= 3){
      uint8_t newDutycycle = atoi((const char *)request->payload);
      if(newDutycycle <= 100) {
        if(strncmp(color, "r", len) == 0) {
          coapdutycycleR = newDutycycle;
          LOG_DBG("Updating red led duty cycle to %u\n", coapdutycycleR);
          pwm_startdutycycle(&ledDriverPWMr, coapdutycycleR*10);
          return;
        } else if(strncmp(color, "g", len) == 0) {
          coapdutycycleG = newDutycycle;
          LOG_DBG("Updating green led duty cycle to %u\n", coapdutycycleG);
          pwm_startdutycycle(&ledDriverPWMg, coapdutycycleG*10);
          return;
        } else if(strncmp(color, "b", len) == 0) {
          coapdutycycleB = newDutycycle;
          LOG_DBG("Updating blue led duty cycle to %u\n", coapdutycycleB);
          pwm_startdutycycle(&ledDriverPWMb, coapdutycycleB*10);
          return;
        }
        else if(strncmp(color, "p", len) == 0) {
          coapdutycycleB = newDutycycle;
          coapdutycycleR = newDutycycle; 
          LOG_DBG("Updating purple led duty cycle to %u\n", coapdutycycleB);
          pwm_startdutycycle(&ledDriverPWMr, coapdutycycleR*10);
          pwm_startdutycycle(&ledDriverPWMb, coapdutycycleB*10);
          return;
        }
          else if(strncmp(color, "w", len) == 0) {
          coapdutycycleR = newDutycycle; 
          coapdutycycleG = newDutycycle;
          coapdutycycleB = newDutycycle;
          LOG_DBG("Updating all leds duty cycle to %u\n", coapdutycycleR);
          pwm_startdutycycle(&ledDriverPWMr, coapdutycycleR*10);
          pwm_startdutycycle(&ledDriverPWMg, coapdutycycleG*10);
          pwm_startdutycycle(&ledDriverPWMb, coapdutycycleB*10);
          return;
        }
      }
    }
  } 
  coap_set_status_code(response, BAD_REQUEST_4_00);
}

static void
pwm_get_handler(coap_message_t *request, coap_message_t *response, uint8_t *buffer, uint16_t preferred_size, int32_t *offset)
{
  size_t len = 0;
  int length;
  const char *color = NULL;

  if((len = coap_get_query_variable(request, "color", &color))) {
    if(strncmp(color, "r", len) == 0) {
      LOG_DBG("%u\n", coapdutycycleR);
      length = sprintf((char *)buffer, "%u", coapdutycycleR);
    }
    else if(strncmp(color, "g", len) == 0) {
      LOG_DBG("%u\n", coapdutycycleG);
      length = sprintf((char *)buffer, "%u", coapdutycycleG);
    }
    else if(strncmp(color, "b", len) == 0) {
      LOG_DBG("%u\n", coapdutycycleB);
      length = sprintf((char *)buffer, "%u", coapdutycycleB);
    }
    else {
      coap_set_status_code(response, BAD_REQUEST_4_00);
      return;
    }

    coap_set_header_content_format(response, TEXT_PLAIN); /* text/plain is the default, hence this option could be omitted. */
    coap_set_header_etag(response, (uint8_t *)&length, 1);
    coap_set_payload(response, buffer, length);
    return;
  }
  coap_set_status_code(response, BAD_REQUEST_4_00);
}

void pwm_init_handler( void ){

  pwm_configure(&ledDriverPWMr, PWM_TIMER_2, PWM_TIMER_B, 1024, LEDS_ARCH_L1_PORT, LEDS_ARCH_L1_PIN, PWM_ON_WHEN_STOP);
  pwm_configure(&ledDriverPWMg, PWM_TIMER_2, PWM_TIMER_B, 1024, LEDS_ARCH_L2_PORT, LEDS_ARCH_L2_PIN, PWM_ON_WHEN_STOP);
  pwm_configure(&ledDriverPWMb, PWM_TIMER_2, PWM_TIMER_B, 1024, LEDS_ARCH_L3_PORT, LEDS_ARCH_L3_PIN, PWM_ON_WHEN_STOP);
  LOG_DBG("Configuring PWM on timer %u/%d to frequency %lu Hz\n", ledDriverPWMr.timer, ledDriverPWMr.ab, ledDriverPWMr.freq);

}
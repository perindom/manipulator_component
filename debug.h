/*
 * debug.h
 *
 *  Created on: Sep 7, 2021
 *      Author: Charles Hall
 */

#ifndef DEBUG_H_
#define DEBUG_H_

#include <FreeRTOS.h>
#include <task.h>
#include "croutine.h"
#include "semphr.h"

#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

/* Driver Header files */
#include <ti/drivers/GPIO.h>
#include <ti/drivers/Timer.h>

/* Board Header file */
#include "ti_drivers_config.h"

//#include "sensor_thread_queue.h"
//#include "uart_thread_queue.h"

#include <stdio.h>

//extern void *sensor_task(void *arg0);
//extern void *uart_task(void *arg0);

//GPIO_0 corresponds to P03
//GPIO_1 corresponds to P05
//GPIO_2 corresponds to P21
//GPIO_3 corresponds to P50
//GPIO_4 corresponds to P53
//GPIO_5 corresponds to P61
//GPIO_6 corresponds to P62
//GPIO_7 corresponds to P63

//GPIO_8 corresponds to green LED
//P61

//Declare Constants Here


#define HARDWARE_DEBUG
#define MQTT_DEBUG
#define MQTT_TASK_DEBUG
#define TIMER_50_DEBUG
#define CONTROL_DEBUG

#define RESET_HEADER 0x00

#ifdef HARDWARE_DEBUG
#define SET_DETATCH_STATE 0x51
#define SET_SCHEDULE_PARAMS 0x52
#define SET_STACK_SIZE 0x53
#define CREATE_PTHREAD 0x54
#define MALLOC_FAILED_HOOK 0x55
#define STACK_OVERFLOW 0x56
#define SLNETSOC_INIT 0x57
#define OPEN_APP_QUEUE 0x58
#define WIFI_INIT 0x59
#define BEGIN_MAIN_THREAD 0x5A
#endif

#ifdef CONTROL_DEBUG
#define CONTROL_TASK_START 0x11
#define CONTROL_IDLE_BEFORE_RECEIVE 0x12
#define CONTROL_IDLE_AFTER_RECEIVE 0x13
#define CONTROL_MOVING_BEFORE_DELAY 0x14
#define CONTROL_MOVING_AFTER_DELAY 0x15
#define CONTROL_MOVING_BEGIN_OPEN 0x16
#define CONTROL_MOVING_BEGIN_CLOSE 0x17
#endif

#ifdef TIMER_50_DEBUG
#define TIMER_50_CALLBACK_BEGIN 0x40
#define TIMER_50_CALLBACK_END 0x41
#define TIMER_50_CALLBACK_BEFORE_SEND_QUEUE 0x43
#define TIMER_50_CALLBACK_AFTER_SEND_QUEUE 0x44
#endif

#ifdef MQTT_TASK_DEBUG
#define MQTT_TASK_BEGIN 0x21
#define MQTT_TASK_LOOP 0x22
#define MQTT_TASK_BEFORE_SUBSCRIBE 0x23
#define MQTT_TASK_AFTER_SUBSCRIBE 0x24
#define MQTT_TASK_BEFORE_RECEIVE_QUEUE 0x2A
#define MQTT_TASK_AFTER_RECEIVE_QUEUE 0x2B
#define MQTT_IF_SUBSCRIBE_ALLOC_ERROR 0x2C
#endif


#ifdef MQTT_DEBUG
#define CREATE_MQTT_QUEUE 0x71
#define BEGIN_MQTT_OPERATION_EVENT 0x72
#define BEGIN_MQTT_RECV_EVENT 0x73
#define BEGIN_MQTT_DISCONNECT_EVENT 0x74
#define MQTT_INIT 0x76
#define MQTT_SUBSCRIBE_TOPICS 0x77
#define MQTT_CREATE_CLIENT 0x78
#define MQTT_BEFORE_RECEIVE 0x05
#define MQTT_AFTER_RECEIVE 0x0B
#define MQTT_PUBLISH_BEGIN 0x09
#define MQTT_PUBLISH_END 0x0A
#define MQTT_DISCONNECT_EVENT 0x0C
#define MQTT_CONNECT_EVENT 0x0D
#define MQTT_DEINIT_EVENT 0x0E
#define MQTT_BUTTON_SHORT_PRESS 0x0F
#define MQTT_BUTTON_LONG_PRESS 0x10
#define MQTT_BUTTON_SEND 0x11
#define MQTT_END_ITERATION 0x12
#define MQTT_REPEAT_ITERATION 0x13
#endif

void dbgEvent(unsigned int event);

void setGPIOs(unsigned int event);
bool checkGPIOs(unsigned int event);
void fatalError(unsigned int event);
void vFlashCoRoutine( CoRoutineHandle_t xHandle, UBaseType_t uxIndex );
void errorLED(Timer_Handle myHandle, int_fast16_t status);




#endif /* DEBUG_H_ */

/*
 * timer50.c
 *
 *  Created on: Sep 9, 2021
 *      Author: vewake
 */
#include "timer50.h"


void callback50(Timer_Handle myHandle, int_fast16_t status);

#define THREADSTACKSIZE   (768)

void start50(){

    //setup timer
    Timer_Handle timer1;
    Timer_Params params;

    GPIO_init();
    //Timer_init();

    Timer_Params_init(&params);
    params.period = 50000;
    params.periodUnits = Timer_PERIOD_US;
    params.timerMode = Timer_CONTINUOUS_CALLBACK;
    params.timerCallback = callback50;

    timer1 = Timer_open(CONFIG_TIMER_1, &params);

    if (timer1 == NULL) {
        /* Failed to initialized timer */
        fatalError(TIMER_50_CALLBACK_BEGIN);
    }

    if (Timer_start(timer1) == Timer_STATUS_ERROR) {
        /* Failed to start timer */
        fatalError(TIMER_50_CALLBACK_BEGIN);
    }
}

void callback50(Timer_Handle myHandle, int_fast16_t status){
    MQTTMsg_t dummy_message;
    dummy_message.message = DONE;
    int cx = snprintf(dummy_message.topic, MAX_STR_LEN, "Dummy");
    if (cx < 0)
    {
        //Error condition
        fatalError(TIMER_50_CALLBACK_BEGIN);
    }

    add_to_delay_queue(&dummy_message);
}

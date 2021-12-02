#ifndef DELAY_QUEUE_H_
#define DELAY_QUEUE_H_


#include "FreeRTOS.h"
#include "queue.h"
#include "control_queue.h"

void create_delay_queue();

void add_to_delay_queue(MQTTMsg_t *msg);

void retrieve_from_delay_queue(MQTTMsg_t *msg);

static QueueHandle_t delay_queue;


#endif /* DELAY_QUEUE_H_ */

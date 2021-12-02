#ifndef CONTROL_QUEUE_H_
#define CONTROL_QUEUE_H_


#include "FreeRTOS.h"
#include "queue.h"

typedef enum {
    CLAW_OPEN,
    CLAW_CLOSE,
    KICK,
    DONE
} order_t;

typedef struct MQTTMsg{
    int topic;
    order_t message;
} MQTTMsg_t;

void create_control_queue();

void add_to_control_queue(MQTTMsg_t *msg);

void retrieve_from_control_queue(MQTTMsg_t *msg);

static QueueHandle_t control_queue;


#endif /* CONTROL_QUEUE_H_ */

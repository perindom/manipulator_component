#include <delay_queue.h>
#include "debug.h"

#define QUEUE_SIZE 5


void create_delay_queue(){
    //create queue;
    delay_queue = xQueueCreate(QUEUE_SIZE, sizeof(MQTTMsg_t));
    if(delay_queue == NULL)
    {
        fatalError(MQTT_TASK_LOOP);//error
    }
}

void add_to_delay_queue(MQTTMsg_t *msg){
    //add to queue
    xQueueSendToBackFromISR(delay_queue, msg, 0);
}

void retrieve_from_delay_queue(MQTTMsg_t *msg){
    xQueueReceive(delay_queue, msg, portMAX_DELAY);
}

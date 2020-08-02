#ifndef _TENSORFLOW_H_
#define _TENSORFLOW_H_

#include "freertos/FreeRTOS.h"
#include "freertos/queue.h"

#ifdef __cplusplus
extern "C" {
#endif

void tf_setup_init() ;
float* tf_get_input_pointer();
void tf_start_inference(void* params);
void tf_stop_inference();
QueueHandle_t tf_get_prediction_queue_handle();

#ifdef __cplusplus
}
#endif

#endif
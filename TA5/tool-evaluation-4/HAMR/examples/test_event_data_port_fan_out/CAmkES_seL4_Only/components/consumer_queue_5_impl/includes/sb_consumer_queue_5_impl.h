#ifndef SB_CONSUMER_QUEUE_5_IMPL_H
#define SB_CONSUMER_QUEUE_5_IMPL_H

#include <sb_types.h>

bool sb_deq_dequeue(int8_t *);

void test_event_data_port_consumer_s_event_handler(const int8_t *);

void test_event_data_port_consumer_component_init(const int64_t *arg);

#endif // SB_CONSUMER_QUEUE_5_IMPL_H

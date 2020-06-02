#include <camkes.h>
#include <stdio.h>
#include <sb_types.h>
#include <sb_emitter_t_impl.h>

static int8_t _value;

void test_event_data_port_emitter_component_init(const int64_t *in_arg) {
  printf("[%s] test_event_data_port_emitter_component_init called\n", get_instance_name());
  _value = 0;
}

void test_event_data_port_emitter_time_triggered_handler(const int64_t *in_arg) {
  if (sb_write_port_enqueue( &_value ) ) {
    _value = (_value + 1) % 100;
    if(_value == 0){
      //printf("[%s] Back to 0\n", get_instance_name());
    }
  } else {
    printf("[%s] Unable to send\n", get_instance_name());
  }
}

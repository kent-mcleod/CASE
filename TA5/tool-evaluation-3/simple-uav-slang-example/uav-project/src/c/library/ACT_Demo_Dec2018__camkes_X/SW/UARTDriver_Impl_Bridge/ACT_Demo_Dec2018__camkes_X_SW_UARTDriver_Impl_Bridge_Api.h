#ifndef SIREUM_H_ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api
#define SIREUM_H_ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api
#include <types.h>

// ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Bridge.Api

#define ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api_id_(this) ((this)->id)
#define ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api_mission_window_Id_(this) ((this)->mission_window_Id)
#define ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api_tracking_id_Id_(this) ((this)->tracking_id_Id)

B ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api__eq(ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api this, ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api other);
static inline B ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api__ne(ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api this, ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api other) {
  return !ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api__eq(this, other);
};
void ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api_cprint(ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api this, B isOut);
void ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api this);

static inline B ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api__is(STACK_FRAME void* this) {
  return ((ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api) this)->type == TACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api;
}

static inline ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api__as(STACK_FRAME void *this) {
  if (ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api__is(CALLER this)) return (ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api) this;
  fprintf(stderr, "Invalid case from %s to ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Bridge.Api.", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api this, Z id, Z mission_window_Id, Z tracking_id_Id);

Unit ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api_logInfo_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api this, String msg);

Unit ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api_sendtracking_id_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api this, ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64 value);

#endif
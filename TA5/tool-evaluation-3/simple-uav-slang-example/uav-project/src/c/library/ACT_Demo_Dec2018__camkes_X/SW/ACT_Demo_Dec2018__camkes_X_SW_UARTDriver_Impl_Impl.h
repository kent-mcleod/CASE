#ifndef SIREUM_H_ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl
#define SIREUM_H_ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl
#include <types.h>

// ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Impl

#define ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl_api_(this) ((ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api) &(this)->api)
#define ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl_i_(this) ((this)->i)
#define ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl_i_a(this, value) (this)->i = (value)

B ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl__eq(ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl this, ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl other);
static inline B ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl__ne(ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl this, ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl other) {
  return !ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl__eq(this, other);
};
void ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl_cprint(ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl this, B isOut);
void ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl this);

static inline B ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl__is(STACK_FRAME void* this) {
  return ((ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl) this)->type == TACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl;
}

static inline ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl__as(STACK_FRAME void *this) {
  if (ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl__is(CALLER this)) return (ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl) this;
  fprintf(stderr, "Invalid case from %s to ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Impl.", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl this, ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api api);

Unit ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl_handlemission_window_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl this, ACT_Demo_Dec2018__camkes_X_SW_MissionWindow value);

#endif
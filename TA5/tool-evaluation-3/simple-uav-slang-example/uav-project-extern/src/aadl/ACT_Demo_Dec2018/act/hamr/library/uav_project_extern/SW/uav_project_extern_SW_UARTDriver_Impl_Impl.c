#include <all.h>

// uav_project_extern.SW.UARTDriver_Impl_Impl

B uav_project_extern_SW_UARTDriver_Impl_Impl__eq(uav_project_extern_SW_UARTDriver_Impl_Impl this, uav_project_extern_SW_UARTDriver_Impl_Impl other) {
  if (uav_project_extern_SW_UARTDriver_Impl_Bridge_Api__ne((uav_project_extern_SW_UARTDriver_Impl_Bridge_Api) &this->api, (uav_project_extern_SW_UARTDriver_Impl_Bridge_Api) &other->api)) return F;
  return T;
}

B uav_project_extern_SW_UARTDriver_Impl_Impl__ne(uav_project_extern_SW_UARTDriver_Impl_Impl this, uav_project_extern_SW_UARTDriver_Impl_Impl other);

void uav_project_extern_SW_UARTDriver_Impl_Impl_string_(STACK_FRAME String result, uav_project_extern_SW_UARTDriver_Impl_Impl this) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Impl.scala", "uav_project_extern.SW.UARTDriver_Impl_Impl", "string", 0);
  String_string_(SF result, string("UARTDriver_Impl_Impl("));
  uav_project_extern_SW_UARTDriver_Impl_Bridge_Api_string_(SF result, (uav_project_extern_SW_UARTDriver_Impl_Bridge_Api) &this->api);
  String_string_(SF result, string(")"));
}

void uav_project_extern_SW_UARTDriver_Impl_Impl_cprint(uav_project_extern_SW_UARTDriver_Impl_Impl this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("UARTDriver_Impl_Impl("), isOut);
  uav_project_extern_SW_UARTDriver_Impl_Bridge_Api_cprint((uav_project_extern_SW_UARTDriver_Impl_Bridge_Api) &this->api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B uav_project_extern_SW_UARTDriver_Impl_Impl__is(STACK_FRAME void* this);
uav_project_extern_SW_UARTDriver_Impl_Impl uav_project_extern_SW_UARTDriver_Impl_Impl__as(STACK_FRAME void *this);

void uav_project_extern_SW_UARTDriver_Impl_Impl_apply(STACK_FRAME uav_project_extern_SW_UARTDriver_Impl_Impl this, uav_project_extern_SW_UARTDriver_Impl_Bridge_Api api) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Impl.scala", "uav_project_extern.SW.UARTDriver_Impl_Impl", "apply", 0);
  Type_assign(&this->api, api, sizeof(struct uav_project_extern_SW_UARTDriver_Impl_Bridge_Api));
  this->i = S64_C(1);
}
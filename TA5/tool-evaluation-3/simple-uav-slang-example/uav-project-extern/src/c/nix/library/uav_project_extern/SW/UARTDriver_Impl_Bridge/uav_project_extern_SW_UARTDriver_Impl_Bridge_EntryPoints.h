#ifndef SIREUM_H_uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints
#define SIREUM_H_uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints
#include <types.h>

// uav_project_extern.SW.UARTDriver_Impl_Bridge.EntryPoints

#define uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_UARTDriver_Impl_BridgeId_(this) ((this)->UARTDriver_Impl_BridgeId)
#define uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_mission_window_Id_(this) ((this)->mission_window_Id)
#define uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_tracking_id_Id_(this) ((this)->tracking_id_Id)
#define uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_component_(this) ((uav_project_extern_SW_UARTDriver_Impl_Impl) &(this)->component)
#define uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_dataInPortIds_(this) ((IS_82ABD8) &(this)->dataInPortIds)
#define uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_eventInPortIds_(this) ((IS_82ABD8) &(this)->eventInPortIds)
#define uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_dataOutPortIds_(this) ((IS_82ABD8) &(this)->dataOutPortIds)
#define uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_eventOutPortIds_(this) ((IS_82ABD8) &(this)->eventOutPortIds)

B uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints__eq(uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints this, uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints other);
inline B uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints__ne(uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints this, uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints other) {
  return !uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints__eq(this, other);
};
void uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_string_(STACK_FRAME String result, uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints this);
void uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_cprint(uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints this, B isOut);

inline B uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints__is(STACK_FRAME void* this) {
  return ((uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints) this)->type == Tuav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints;
}

inline uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints__as(STACK_FRAME void *this) {
  if (uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints__is(CALLER this)) return (uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints) this;
  fprintf(stderr, "Invalid case from %s to uav_project_extern.SW.UARTDriver_Impl_Bridge.EntryPoints.", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_apply(STACK_FRAME uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints this, Z UARTDriver_Impl_BridgeId, Z mission_window_Id, Z tracking_id_Id, uav_project_extern_SW_UARTDriver_Impl_Impl component);

Unit uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_initialise_(STACK_FRAME uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints this);

Unit uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_compute_(STACK_FRAME uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints this);

Unit uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_finalise_(STACK_FRAME uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints this);

#endif
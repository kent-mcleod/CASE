#ifndef SIREUM_H_uav_project_extern_IPCPorts
#define SIREUM_H_uav_project_extern_IPCPorts
#include <types.h>

void uav_project_extern_IPCPorts_init(STACK_FRAME_ONLY);

Z uav_project_extern_IPCPorts_WaypointManager_Impl_App(STACK_FRAME_ONLY);
Z uav_project_extern_IPCPorts_FlightPlanner_Impl_App(STACK_FRAME_ONLY);
Z uav_project_extern_IPCPorts_UARTDriver_Impl_App(STACK_FRAME_ONLY);
Z uav_project_extern_IPCPorts_RadioDriver_Impl_App(STACK_FRAME_ONLY);
Z uav_project_extern_IPCPorts_Main(STACK_FRAME_ONLY);

#endif
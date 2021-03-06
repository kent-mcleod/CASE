#ifndef SIREUM_H_uav_project_extern_Arch
#define SIREUM_H_uav_project_extern_Arch
#include <types.h>

void uav_project_extern_Arch_init(STACK_FRAME_ONLY);

uav_project_extern_SW_RadioDriver_Impl_Bridge uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO(STACK_FRAME_ONLY);
uav_project_extern_SW_FlightPlanner_Impl_Bridge uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(STACK_FRAME_ONLY);
uav_project_extern_SW_WaypointManager_Impl_Bridge uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(STACK_FRAME_ONLY);
uav_project_extern_SW_UARTDriver_Impl_Bridge uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART(STACK_FRAME_ONLY);
art_ArchitectureDescription uav_project_extern_Arch_ad(STACK_FRAME_ONLY);

#endif
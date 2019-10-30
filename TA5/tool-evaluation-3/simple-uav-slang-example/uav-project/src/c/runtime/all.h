#ifndef SIREUM_ALL_H
#define SIREUM_ALL_H

#include <types.h>
#include <ACT_Demo_Dec2018__camkes_X_Arch.h>
#include <ACT_Demo_Dec2018__camkes_X_ArtNix.h>
#include <ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean.h>
#include <ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload.h>
#include <ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64.h>
#include <ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload.h>
#include <ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App.h>
#include <ACT_Demo_Dec2018__camkes_X_IPCPorts.h>
#include <ACT_Demo_Dec2018__camkes_X_MC_MISSING_TYPE_Impl.h>
#include <ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl.h>
#include <ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge.h>
#include <ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api.h>
#include <ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints.h>
#include <ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl.h>
#include <ACT_Demo_Dec2018__camkes_X_MC_UART_Impl.h>
#include <ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge.h>
#include <ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_Api.h>
#include <ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_EntryPoints.h>
#include <ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl.h>
#include <ACT_Demo_Dec2018__camkes_X_Main.h>
#include <ACT_Demo_Dec2018__camkes_X_PlatformNix.h>
#include <ACT_Demo_Dec2018__camkes_X_Process.h>
#include <ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App.h>
#include <ACT_Demo_Dec2018__camkes_X_Radio_Impl_App.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_Command_Impl.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_FlightPattern.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_EntryPoints.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Impl.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_Mission.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_MissionWindow.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_SW__Map.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints.h>
#include <ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl.h>
#include <ACT_Demo_Dec2018__camkes_X_SharedMemory.h>
#include <ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App.h>
#include <ACT_Demo_Dec2018__camkes_X_UART_Impl_App.h>
#include <ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App.h>
#include <art_ArchitectureDescription.h>
#include <art_Art.h>
#include <art_Bridge.h>
#include <art_Bridge_EntryPoints.h>
#include <art_Bridge_Ports.h>
#include <art_DataContent.h>
#include <art_DispatchPropertyProtocol.h>
#include <art_DispatchPropertyProtocol_Periodic.h>
#include <art_DispatchPropertyProtocol_Sporadic.h>
#include <art_DispatchStatus.h>
#include <art_Empty.h>
#include <art_EventTriggered.h>
#include <art_PortMode.h>
#include <art_TimeTriggered.h>
#include <art_UConnection.h>
#include <art_UPort.h>
#include <art_art_Connection_112F4D.h>
#include <art_art_Connection_2D82C4.h>
#include <art_art_Connection_A24F1E.h>
#include <art_art_Connection_CAF041.h>
#include <art_art_Connection_E82682.h>
#include <art_art_Port_2C63FD.h>
#include <art_art_Port_2D3735.h>
#include <art_art_Port_446859.h>
#include <art_art_Port_695448.h>
#include <art_art_Port_9D6F5D.h>
#include <art_art_Port_D7D05E.h>
#include <art_art_Port_FD6239.h>
#include <org_sireum_IS_08117A.h>
#include <org_sireum_IS_5D0BE7.h>
#include <org_sireum_IS_820232.h>
#include <org_sireum_IS_82ABD8.h>
#include <org_sireum_IS_948B60.h>
#include <org_sireum_IS_AA0F82.h>
#include <org_sireum_MNone_2A2E1D.h>
#include <org_sireum_MOption_EA1D29.h>
#include <org_sireum_MS_2590FE.h>
#include <org_sireum_MS_30A5B4.h>
#include <org_sireum_MS_852149.h>
#include <org_sireum_MS_94FFA9.h>
#include <org_sireum_MS_B5E3E6.h>
#include <org_sireum_MS_E444B2.h>
#include <org_sireum_MS_F55A18.h>
#include <org_sireum_MSome_D3D128.h>
#include <org_sireum_None.h>
#include <org_sireum_None_0CCA05.h>
#include <org_sireum_None_39BC5F.h>
#include <org_sireum_None_76463B.h>
#include <org_sireum_None_93AA2B.h>
#include <org_sireum_None_964667.h>
#include <org_sireum_Nothing.h>
#include <org_sireum_Option_02FA6D.h>
#include <org_sireum_Option_6239DB.h>
#include <org_sireum_Option_6B846D.h>
#include <org_sireum_Option_882048.h>
#include <org_sireum_Option_8E9F45.h>
#include <org_sireum_Some.h>
#include <org_sireum_Some_3B09D7.h>
#include <org_sireum_Some_3E197E.h>
#include <org_sireum_Some_488F47.h>
#include <org_sireum_Some_D29615.h>
#include <org_sireum_Some_E9D1E5.h>
#include <org_sireum_Tuple2_D0E3BB.h>
#include <org_sireum_Tuple2_EC3B57.h>
#include <org_sireum_Z32.h>
#include <org_sireum_Z64.h>
#include <org_sireum_conversions_Z64.h>

void Z_apply(Option_882048 result, String s);

#endif
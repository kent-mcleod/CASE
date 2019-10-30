#ifndef SIREUM_TYPE_H_art_Bridge_EntryPoints
#define SIREUM_TYPE_H_art_Bridge_EntryPoints
#include <misc.h>

// art.Bridge.EntryPoints

#include <type-uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints.h>
#include <type-uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints.h>
#include <type-uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints.h>
#include <type-uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints.h>

typedef union art_Bridge_EntryPoints *art_Bridge_EntryPoints;
union art_Bridge_EntryPoints {
  TYPE type;
  struct uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints;
  struct uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints;
  struct uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints;
  struct uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints;
};

#define DeclNewart_Bridge_EntryPoints(x) union art_Bridge_EntryPoints x = { 0 }

#endif
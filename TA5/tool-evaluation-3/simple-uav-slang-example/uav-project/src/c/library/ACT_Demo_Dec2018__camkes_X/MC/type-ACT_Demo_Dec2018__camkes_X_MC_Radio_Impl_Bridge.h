#ifndef SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge
#define SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge
#include <misc.h>

// ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Bridge
#include <type-art_DispatchPropertyProtocol.h>
#include <type-art_art_Port_2C63FD.h>
#include <type-art_art_Port_695448.h>
#include <type-art_art_Port_FD6239.h>
#include <type-art_art_Port_2C63FD.h>
#include <type-art_Bridge_Ports.h>
#include <type-ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api.h>
#include <type-art_Bridge_EntryPoints.h>

typedef struct ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge *ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge;
struct ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge {
  TYPE type;
  union art_DispatchPropertyProtocol dispatchProtocol;
  union art_Bridge_EntryPoints entryPoints;
  struct StaticString name;
  struct art_Port_2C63FD recv_map_inn;
  struct art_Port_695448 recv_map_out;
  struct art_Port_FD6239 send_status_inn;
  struct art_Port_2C63FD send_status_out;
  struct art_Bridge_Ports ports;
  struct ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api api;
  Z id;
};

#define DeclNewACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge(x) struct ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge x = { .type = TACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge }


#endif
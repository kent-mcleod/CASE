#ifndef SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api
#define SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api
#include <misc.h>

// ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Bridge.Api

typedef struct ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api *ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api;
struct ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api {
  TYPE type;
  Z id;
  Z mission_window_Id;
  Z tracking_id_Id;
};

#define DeclNewACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api(x) struct ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api x = { .type = TACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api }


#endif
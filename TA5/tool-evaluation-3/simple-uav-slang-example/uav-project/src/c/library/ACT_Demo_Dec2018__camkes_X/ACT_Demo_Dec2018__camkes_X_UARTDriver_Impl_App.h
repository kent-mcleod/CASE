#ifndef SIREUM_H_ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App
#define SIREUM_H_ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App
#include <types.h>

void ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_init(STACK_FRAME_LAST);

art_Bridge_EntryPoints ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_entryPoints(STACK_FRAME_LAST);
Z ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_appPortId(STACK_FRAME_LAST);
Option_882048 ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_appPortIdOpt(STACK_FRAME_LAST);
Z ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_mission_windowPortId(STACK_FRAME_LAST);
Option_882048 ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_mission_windowPortIdOpt(STACK_FRAME_LAST);
Z ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_WPM_tracking_idPortId(STACK_FRAME_LAST);

Z ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_main(STACK_FRAME IS_948B60 args);

Unit ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_atExit(STACK_FRAME_LAST);

Unit ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_initialise(STACK_FRAME Z seed);

Unit ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_compute(STACK_FRAME_LAST);

Unit ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_exit(STACK_FRAME_LAST);

#endif
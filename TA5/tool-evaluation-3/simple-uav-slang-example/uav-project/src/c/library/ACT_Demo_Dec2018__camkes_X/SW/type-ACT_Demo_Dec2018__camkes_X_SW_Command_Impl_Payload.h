#ifndef SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload
#define SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload
#include <misc.h>

// ACT_Demo_Dec2018__camkes_X.SW.Command_Impl_Payload
#include <type-ACT_Demo_Dec2018__camkes_X_SW_Command_Impl.h>

typedef struct ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload *ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload;
struct ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload {
  TYPE type;
  struct ACT_Demo_Dec2018__camkes_X_SW_Command_Impl value;
};

#define DeclNewACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload(x) struct ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload x = { .type = TACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload }


#endif
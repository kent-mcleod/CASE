#ifndef SIREUM_TYPE_H_org_sireum_Option_8E9F45
#define SIREUM_TYPE_H_org_sireum_Option_8E9F45
#include <misc.h>

// Option[art.DataContent]

#include <type-org_sireum_None_964667.h>
#include <type-org_sireum_Some_D29615.h>

typedef union Option_8E9F45 *Option_8E9F45;
union Option_8E9F45 {
  TYPE type;
  struct None_964667 None_964667;
  struct Some_D29615 Some_D29615;
};

#define DeclNewOption_8E9F45(x) union Option_8E9F45 x = { 0 }

#endif
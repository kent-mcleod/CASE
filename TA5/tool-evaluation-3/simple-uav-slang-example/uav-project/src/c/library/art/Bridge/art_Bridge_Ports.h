#ifndef SIREUM_H_art_Bridge_Ports
#define SIREUM_H_art_Bridge_Ports
#include <types.h>

// art.Bridge.Ports

#define art_Bridge_Ports_all_(this) ((IS_820232) &(this)->all)
#define art_Bridge_Ports_dataIns_(this) ((IS_820232) &(this)->dataIns)
#define art_Bridge_Ports_dataOuts_(this) ((IS_820232) &(this)->dataOuts)
#define art_Bridge_Ports_eventIns_(this) ((IS_820232) &(this)->eventIns)
#define art_Bridge_Ports_eventOuts_(this) ((IS_820232) &(this)->eventOuts)

B art_Bridge_Ports__eq(art_Bridge_Ports this, art_Bridge_Ports other);
static inline B art_Bridge_Ports__ne(art_Bridge_Ports this, art_Bridge_Ports other) {
  return !art_Bridge_Ports__eq(this, other);
};
void art_Bridge_Ports_cprint(art_Bridge_Ports this, B isOut);
void art_Bridge_Ports_string(STACK_FRAME String result, art_Bridge_Ports this);

static inline B art_Bridge_Ports__is(STACK_FRAME void* this) {
  return ((art_Bridge_Ports) this)->type == Tart_Bridge_Ports;
}

static inline art_Bridge_Ports art_Bridge_Ports__as(STACK_FRAME void *this) {
  if (art_Bridge_Ports__is(CALLER this)) return (art_Bridge_Ports) this;
  fprintf(stderr, "Invalid case from %s to art.Bridge.Ports.", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void art_Bridge_Ports_apply(STACK_FRAME art_Bridge_Ports this, IS_820232 all, IS_820232 dataIns, IS_820232 dataOuts, IS_820232 eventIns, IS_820232 eventOuts);

#endif
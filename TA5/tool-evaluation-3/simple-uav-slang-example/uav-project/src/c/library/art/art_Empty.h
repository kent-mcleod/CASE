#ifndef SIREUM_H_art_Empty
#define SIREUM_H_art_Empty
#include <types.h>

// art.Empty


B art_Empty__eq(art_Empty this, art_Empty other);
static inline B art_Empty__ne(art_Empty this, art_Empty other) {
  return !art_Empty__eq(this, other);
};
void art_Empty_cprint(art_Empty this, B isOut);
void art_Empty_string(STACK_FRAME String result, art_Empty this);

static inline B art_Empty__is(STACK_FRAME void* this) {
  return ((art_Empty) this)->type == Tart_Empty;
}

static inline art_Empty art_Empty__as(STACK_FRAME void *this) {
  if (art_Empty__is(CALLER this)) return (art_Empty) this;
  fprintf(stderr, "Invalid case from %s to art.Empty.", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void art_Empty_apply(STACK_FRAME art_Empty this);

#endif
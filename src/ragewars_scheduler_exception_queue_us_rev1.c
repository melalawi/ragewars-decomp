#include "types.h"
#include "span_1000/code_802BB15C.h"

/* 802BB6C0 dereferences this head slot to compare the queued thread.
 * The external slot is retained as a symbolic pointer relocation.
 * ROM D9EB0..D9EB4. */
extern OSThread_s_func_802BB5F0_de *D_8014FE38;
OSThread_s_func_802BB5F0_de **D_800D5280 = &D_8014FE38;

#include "types.h"
#include "span_1000/code_802BB15C.h"

/* Scheduler's running and faulted thread pointers. Message operations
 * update running->state; exception dispatch installs the faulted thread.
 * ROM D9EA0..D9EA8. */
OSThread_s_func_802BB5F0_de *D_800D5270 = 0;
OSThread_s_func_802BB5F0_de *D_800D92A4 = 0;

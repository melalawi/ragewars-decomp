#include "types.h"
#include "span_1000/code_802BA23C.h"

/* Current and next writable VI-context selectors, matching802BA210.
 * ROM D9040..D9048, VMA800D8440. Real struct pointers48bytes apart. */
extern __OSViContext_func_802BA910_de D_800D43B0[2];
__OSViContext_func_802BA910_de *D_800D8440 = &D_800D43B0[0];
__OSViContext_func_802BA910_de *D_800D4414 = &D_800D43B0[1];

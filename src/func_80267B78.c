/* Forwards a position and extent to func_80266830 with zero flags and priority 0x80, but only when
   the first byte of the given object is 1. Adapted from the matched twin func_80267BD8 with the object
   type test added and the leading flag changed to 0. */
#include "basetypes.h"

typedef struct Triple {
    s32 x;
    s32 y;
    s32 z;
} Triple;

typedef struct Pair {
    s32 x;
    s32 y;
} Pair;

extern void func_80266830(unsigned char *, s32, s32, Triple, Pair, s32, s32, s32);

void func_80267B78(unsigned char *arg0, s32 arg1, s32 arg2, Triple arg3, Pair arg6) {
    if (*arg0 == 1) {
        func_80266830(arg0, arg1, arg2, arg3, arg6, 0, 0, 0x80);
    }
}

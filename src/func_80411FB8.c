#include "basetypes.h"

/* Stores its argument in D_800E2AC4; func_80411FA8, before it, clears D_800E2AC0. */
extern s32 D_800E2AC4;

void func_80411FB8(s32 value) {
    D_800E2AC4 = value;
}

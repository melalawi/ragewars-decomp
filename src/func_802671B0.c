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

typedef void (*Callback)(void *, void *, s32, Triple, Pair);

typedef struct CallbackEntry {
    Callback callback;
    s32 unused;
} CallbackEntry;

extern CallbackEntry D_800D1380[];

void func_802671B0(void *arg0, void *arg1, s32 arg2, Triple arg3, Pair arg6) {
    if (D_800D1380[arg2].callback != 0) {
        D_800D1380[arg2].callback(arg0, arg1, arg2, arg3, arg6);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800CC040_4[] = {0x00, 0x26, 0x72, 0xA4};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D1380_4[] = {0x00, 0x26, 0x73, 0x24};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800CCD10_4[] = {0x00, 0x26, 0x72, 0xC4};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800CD6E0_4[] = {0x00, 0x26, 0x72, 0xF4};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800CC130_4[] = {0x00, 0x26, 0x73, 0x0C};
#endif

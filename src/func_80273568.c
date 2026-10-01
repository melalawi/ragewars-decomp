#include "basetypes.h"

/* Copies a 4x4 float matrix while scaling its first three rows by three per-row factors, zeroing their fourth column and setting the last element to the constant at D_800C99E0 + 4. Adapted from func_8027302C with the row scaling, the zeroed column and the constant corner changed. */
extern char D_800C99E0;

void func_80273568(f32 *arg0, f32 *arg1, f32 sx, f32 sy, f32 sz) {
    arg0[0] = arg1[0] * sx;
    arg0[1] = arg1[1] * sx;
    arg0[2] = arg1[2] * sx;
    arg0[4] = arg1[4] * sy;
    arg0[5] = arg1[5] * sy;
    arg0[6] = arg1[6] * sy;
    arg0[8] = arg1[8] * sz;
    arg0[9] = arg1[9] * sz;
    arg0[10] = arg1[10] * sz;
    arg0[12] = arg1[12];
    arg0[13] = arg1[13];
    arg0[14] = arg1[14];
    arg0[3] = arg0[7] = arg0[11] = 0.0f;
    arg0[15] = *(f32 *) ((char *) &D_800C99E0 + 4);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4824_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C99E4_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4BA4_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4BE4_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C48F4_4 = 1.0f;
#endif

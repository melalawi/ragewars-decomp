#include "basetypes.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} IntTriple;

typedef struct {
    s16 x;
    s16 y;
    s16 z;
    s16 w;
} ShortQuad;

extern s32 func_802394AC(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5, IntTriple arg6);
extern char D_80145088;
extern f32 D_800C9548;

void func_80267E58(s32 arg0, s32 arg1, s32 arg2, IntTriple t, ShortQuad v) {
    func_802394AC(&D_80145088, (f32) v.x, (f32) v.y, (f32) v.z, (f32) v.w * D_800C9548, 0, t);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4388_4 = 10.2399998f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9548_4 = 10.2399998f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4708_4 = 10.2399998f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4748_4 = 10.2399998f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4458_4 = 10.2399998f;
#endif

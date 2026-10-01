#include "basetypes.h"

typedef struct Entry802612C8 {
    s32 x;
    s32 pad4;
    s32 z;
    f32 f0C;
    s32 n10;
    s32 n14;
} Entry802612C8;

extern char *func_8028FD94(s32 *, s32);
extern s32 func_8025F0F4(void *, void *, s32, s32, s32, s32);
extern f32 D_8010EC80;
extern s32 D_8010EC78;
extern s32 D_8010EC74;
extern f32 D_8010EC7C;
extern f32 D_8010EC70;
extern f32 D_800C9288;
extern f32 D_800C928C;
extern f32 D_800C9290;
extern f32 D_800C9294;

s32 func_802612C8(void *arg0, void *arg1) {
    Entry802612C8 *first;
    void *a;
    void *b;
    void *c;
    void *d;
    s32 one;

    first = func_8028FD94(arg0, 0);
    a = func_8028FD94(arg0, 1);
    b = func_8028FD94(arg0, 2);
    c = func_8028FD94(arg1, 1);
    d = func_8028FD94(arg1, 2);

    one = 1;
    D_8010EC78 = one;
    D_8010EC74 = 0;
    D_8010EC7C = D_800C9288;
    D_8010EC80 = D_800C928C;
    D_8010EC70 = first->f0C;
    if (func_8025F0F4(a, c, first->n14, 3, first->x, first->z) == 0) {
        return 0;
    }
    D_8010EC78 = 0;
    D_8010EC74 = one;
    D_8010EC7C = D_800C9290;
    D_8010EC80 = D_800C9294;
    D_8010EC70 = first->f0C;
    return func_8025F0F4(b, d, first->n10, 4, first->x, first->z) != 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C40C8_4 = (-2000.0f);
const float unbake_rodata_800C40CC_4 = 2000.0f;
const float unbake_rodata_800C40D0_4 = (-1.0f);
const float unbake_rodata_800C40D4_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9288_4 = (-2000.0f);
const float unbake_rodata_800C928C_4 = 2000.0f;
const float unbake_rodata_800C9290_4 = (-1.0f);
const float unbake_rodata_800C9294_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4448_4 = (-2000.0f);
const float unbake_rodata_800C444C_4 = 2000.0f;
const float unbake_rodata_800C4450_4 = (-1.0f);
const float unbake_rodata_800C4454_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4488_4 = (-2000.0f);
const float unbake_rodata_800C448C_4 = 2000.0f;
const float unbake_rodata_800C4490_4 = (-1.0f);
const float unbake_rodata_800C4494_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4198_4 = (-2000.0f);
const float unbake_rodata_800C419C_4 = 2000.0f;
const float unbake_rodata_800C41A0_4 = (-1.0f);
const float unbake_rodata_800C41A4_4 = 1.0f;
#endif

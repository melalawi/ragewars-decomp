#include "common/types.h"
#include "span_1000/code_80260D98.h"
#include "span_C76B0/data.h"
#include "types.h"



extern char *func_8028FDB4_de(s32 *, s32);
extern s32 
#if defined(VERSION_EU)
func_8025F094_eu
#elif defined(VERSION_EU_X)
func_8025F0C4_eu_x
#elif defined(VERSION_US)
func_8025F074_us
#elif defined(VERSION_US_REV1)
func_8025F0F4_us_rev1
#else
func_8025F0D4_de
#endif
(void *, void *, s32, s32, s32, s32);
extern f32 D_8010AC80;
extern s32 D_8010AC78;
extern s32 D_8010AC74;






s32 func_802612A8_de(void *arg0, void *arg1) {
    Entry802612C8 *first;
    void *a;
    void *b;
    void *c;
    void *d;
    s32 one;

    first = func_8028FDB4_de(arg0, 0);
    a = func_8028FDB4_de(arg0, 1);
    b = func_8028FDB4_de(arg0, 2);
    c = func_8028FDB4_de(arg1, 1);
    d = func_8028FDB4_de(arg1, 2);

    one = 1;
    D_8010AC78 = one;
    D_8010AC74 = 0;
    D_8010AC7C = D_800C4198_de;
    D_8010AC80 = (2000.0f);
    D_8010AC70 = first->f0C;
    if (
#if defined(VERSION_EU)
func_8025F094_eu
#elif defined(VERSION_EU_X)
func_8025F0C4_eu_x
#elif defined(VERSION_US)
func_8025F074_us
#elif defined(VERSION_US_REV1)
func_8025F0F4_us_rev1
#else
func_8025F0D4_de
#endif
(a, c, first->n14, 3, first->x, first->z) == 0) {
        return 0;
    }
    D_8010AC78 = 0;
    D_8010AC74 = one;
    D_8010AC7C = D_800C41A0_de;
    D_8010AC80 = D_800C41A4_de;
    D_8010AC70 = first->f0C;
    return 
#if defined(VERSION_EU)
func_8025F094_eu
#elif defined(VERSION_EU_X)
func_8025F0C4_eu_x
#elif defined(VERSION_US)
func_8025F074_us
#elif defined(VERSION_US_REV1)
func_8025F0F4_us_rev1
#else
func_8025F0D4_de
#endif
(b, d, first->n10, 4, first->x, first->z) != 0;
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

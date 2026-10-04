#include "common/types.h"
#include "span_1000/code_8025AE3C.h"
#include "span_C76B0/data.h"
#include "types.h"

/* Returns how strongly a listener at 0x128 hears a source at 0x34: one minus the squared distance over the squared range D_800D0D10 (zero beyond it), shaped by the source's curve at 0x44 as the eighth power, the square or the plain value. */




extern f32 D_800C3F98_de[];






f32 func_8025C368_de(char *source, char *listener)
{
    Vec3 *a = &((func_8025C388_S1 *)(source))->unk34;
    Vec3 *b = &((func_8023945C_S1 *)(listener))->unk128;
    f32 dx = a->x - b->x;
    f32 dy;
    f32 dz;
    f32 d;
    f32 t;

    dx *= dx;
    dy = a->y - b->y;
    dy *= dy;
    dz = a->z - b->z;
    dz *= dz;
    d = dx + dy + dz;
    if (d >= D_800CBAD0) {
        t = 0.0f;
    } else {
        t = D_800C3F98_de[1] - d / D_800CBAD0;
    }
    switch (((func_8025C388_S1 *)(source))->unk44) {
    case 2:
        return t;
    case 0:
        t *= t;
        t *= t;
    case 1:
        return t * t;
    default:
        return 0.0f;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3ECC_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C908C_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C424C_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C428C_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3F9C_4 = 1.0f;
#endif

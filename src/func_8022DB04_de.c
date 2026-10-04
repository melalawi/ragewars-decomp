#include "span_1000/code_8022D7A0.h"
#include "span_C76B0/data.h"
#include "types.h"








extern f32 func_802B7130_de(f32);
extern f32 func_802B6560_de(f32);

void func_8022DB04_de(Actor126 *actor, Object126 *arg1) {
    Object126 *object;
    f32 angle;
    f32 object_angle;
    f32 sine;
    f32 cosine;

    actor->flags |= 0x800000;
    actor->value1D4 = D_800C2DC8_de;
    if (actor->state652 == 15) {
        object = arg1;
        object_angle = object->angle;
        angle = D_800C2DCC_de;
        sine = func_802B7130_de(object_angle + angle);
        cosine = func_802B6560_de(object->angle + angle);
        sine *= D_800C2DD0_de;
        cosine *= D_800C2DD0_de;
        object->x += sine;
        object->y += cosine;
        object->angle += actor->offset728;
        actor->offset728 = 0.0f;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2CF8_4 = 18.75f;
const float unbake_rodata_800C2CFC_4 = 6.28318548f;
const float unbake_rodata_800C2D00_4 = 384.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7EB8_4 = 18.75f;
const float unbake_rodata_800C7EBC_4 = 6.28318548f;
const float unbake_rodata_800C7EC0_4 = 384.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C306C_4 = 18.75f;
const float unbake_rodata_800C3070_4 = 6.28318548f;
const float unbake_rodata_800C3074_4 = 384.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C30AC_4 = 18.75f;
const float unbake_rodata_800C30B0_4 = 6.28318548f;
const float unbake_rodata_800C30B4_4 = 384.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2DC8_4 = 18.75f;
const float unbake_rodata_800C2DCC_4 = 6.28318548f;
const float unbake_rodata_800C2DD0_4 = 384.0f;
#endif

#include "basetypes.h"

typedef struct Actor126 {
    u8 pad0[0x100];
    s32 flags;
    u8 pad104[0xD0];
    f32 value1D4;
    u8 pad1D8[0x47A];
    s16 state652;
    u8 pad654[0xD4];
    f32 offset728;
} Actor126;

typedef struct Object126 {
    u8 pad0[0x1C];
    f32 x;
    u8 pad20[4];
    f32 y;
    u8 pad28[0x44];
    f32 angle;
} Object126;

extern f32 D_800C7EB8;
extern f32 D_800C7EBC;
extern f32 D_800C7EC0;
extern f32 func_802BC200(f32);
extern f32 func_802BB630(f32);

void func_8022DAF4(Actor126 *actor, Object126 *arg1) {
    Object126 *object;
    f32 angle;
    f32 object_angle;
    f32 sine;
    f32 cosine;

    actor->flags |= 0x800000;
    actor->value1D4 = D_800C7EB8;
    if (actor->state652 == 15) {
        object = arg1;
        object_angle = object->angle;
        angle = D_800C7EBC;
        sine = func_802BC200(object_angle + angle);
        cosine = func_802BB630(object->angle + angle);
        sine *= D_800C7EC0;
        cosine *= D_800C7EC0;
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

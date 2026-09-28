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

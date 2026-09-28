#include "basetypes.h"

/* Forwards a position read from an object to func_8028FFB0 on the global D_80131600 with a zero offset and a zero trailing weight, returning its result. Adapted from func_8028BFB4 with the base argument, the source vector, the trailing arguments passed as a by-value struct and the return value changed. */
typedef struct Vec3Words {
    s32 x;
    s32 y;
    s32 z;
} Vec3Words;

typedef struct Vec3f {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct Extra {
    s32 id;
    f32 scale;
} Extra;

typedef struct Object {
    s32 pad0;
    s32 pad4;
    Vec3Words pos;
} Object;

extern char D_80131600;
extern s32 func_8028FFB0(s32, s32, s32, Vec3Words, Vec3Words, s32, f32);

s32 func_802686EC(s32 arg0, Object *arg1, s32 arg2, Vec3Words arg3, Extra arg6) {
    Vec3f scale;
    Vec3Words zero;

    zero.x = 0;
    zero.y = 0;
    zero.z = 0;
    scale.x = arg6.scale;
    scale.y = arg6.scale;
    scale.z = arg6.scale;
    return func_8028FFB0((s32)&D_80131600, 0, arg6.id, zero, arg1->pos, 0, 0.0f);
}

#include "basetypes.h"
typedef struct { f32 x, y, z; } Vec3;
typedef struct { unsigned char raw[0x1C8]; } Obj;
typedef struct { unsigned char raw[0x18]; } Info;

extern s32 D_8013B364;
extern f32 D_800C6EA8;
extern void *func_8020CFE0(char *, s32);
extern void *func_8020C994(void *, s32);

#define I(obj, off) (*(s32 *)((char *)(obj) + (off)))
#define F(obj, off) (*(f32 *)((char *)(obj) + (off)))

s32 func_8020D9C0(Obj *obj) {
    Vec3 sum;
    s32 i;
    f32 scale;
    Info *info;
    Vec3 *base;
    void *global;

    sum.x = sum.y = sum.z = 0.0f;
    global = &D_8013B364;
    for (i = 0; i < I(obj, 0x38); i++) {
        sum.x += F(obj, 0x138 + i * 12);
        sum.y += F(obj, 0x13C + i * 12);
        sum.z += F(obj, 0x140 + i * 12);
    }
    if (I(obj, 0x38) == 0)
        return 1;

    scale = D_800C6EA8 / (f32)I(obj, 0x38);
    sum.x *= scale;
    sum.y *= scale;
    sum.z *= scale;
    info = func_8020CFE0(global, I(obj, 0x1C4));
    sum.x *= *(f32 *)((char *)info + 0x14);
    sum.y *= *(f32 *)((char *)info + 0x14);
    sum.z *= *(f32 *)((char *)info + 0x14);
    base = func_8020C994(global, I(obj, 0x1C4));
    F(obj, 0x1B0) = base->x + sum.x;
    F(obj, 0x1B4) = base->y + sum.y;
    F(obj, 0x1B8) = base->z + sum.z;
    return 1;
}

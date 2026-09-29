#include "basetypes.h"
typedef struct { f32 x, y, z; } Vec3;
typedef struct { char pad0[0x38]; s32 count; char pad3C[0x138-0x3C]; Vec3 points[10]; Vec3 result; char pad1BC[0x1C4-0x1BC]; s32 infoIndex; } Obj;
typedef struct { unsigned char raw[0x18]; } Info;

extern s32 D_8013B364;
extern f32 D_800C6EA8;
extern void *func_8020CFE0(char *, s32);
extern void *func_8020C994(void *, s32);

typedef struct func_8020D9C0_S1 func_8020D9C0_S1;
struct func_8020D9C0_S1 {
    char pad0[0x14];
    f32 unk14;
};


s32 func_8020D9C0(Obj *obj) {
    Vec3 sum;
    s32 i;
    f32 scale;
    Info *info;
    Vec3 *base;
    void *global;

    sum.x = sum.y = sum.z = 0.0f;
    global = &D_8013B364;
    for (i = 0; i < obj->count; i++) {
        sum.x += obj->points[i].x;
        sum.y += obj->points[i].y;
        sum.z += obj->points[i].z;
    }
    if (obj->count == 0)
        return 1;

    scale = D_800C6EA8 / (f32)obj->count;
    sum.x *= scale;
    sum.y *= scale;
    sum.z *= scale;
    info = func_8020CFE0(global, obj->infoIndex);
    sum.x *= ((func_8020D9C0_S1 *)(info))->unk14;
    sum.y *= ((func_8020D9C0_S1 *)(info))->unk14;
    sum.z *= ((func_8020D9C0_S1 *)(info))->unk14;
    base = func_8020C994(global, obj->infoIndex);
    obj->result.x = base->x + sum.x;
    obj->result.y = base->y + sum.y;
    obj->result.z = base->z + sum.z;
    return 1;
}

#include "common/types.h"
#include "span_1000/code_8020D328.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"




extern s32 D_801372A4;

extern void *func_8020CFE0_de(char *, s32);
extern void *func_8020C994_de(void *, s32);





s32 func_8020D9C0_de(Obj_func_8020D9C0_de *obj) {
    Vec3 sum;
    s32 i;
    f32 scale;
    Info *info;
    Vec3 *base;
    void *global;

    sum.x = sum.y = sum.z = 0.0f;
    global = &D_801372A4;
    for (i = 0; i < obj->count; i++) {
        sum.x += obj->points[i].x;
        sum.y += obj->points[i].y;
        sum.z += obj->points[i].z;
    }
    if (obj->count == 0)
        return 1;

    scale = D_800C1DB8_de / (f32)obj->count;
    sum.x *= scale;
    sum.y *= scale;
    sum.z *= scale;
    info = func_8020CFE0_de(global, obj->infoIndex);
    sum.x *= ((func_8020D9C0_S1 *)(info))->unk14;
    sum.y *= ((func_8020D9C0_S1 *)(info))->unk14;
    sum.z *= ((func_8020D9C0_S1 *)(info))->unk14;
    base = func_8020C994_de(global, obj->infoIndex);
    obj->result.x = base->x + sum.x;
    obj->result.y = base->y + sum.y;
    obj->result.z = base->z + sum.z;
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1CE8_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6EA8_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2058_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2098_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1DB8_4 = 1.0f;
#endif

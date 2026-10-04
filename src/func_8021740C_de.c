#include "common/types.h"
#include "span_1000/code_80214DD4.h"
#include "span_C76B0/data.h"
#include "types.h"





extern void func_80271F68_de(Vec3 *result, Vec3 *left, Vec3 *right);
extern void func_8027207C_de(f32 *vector);
extern f32 func_8024D398_de(void *arg0);
extern void func_80271F9C_de(void *result, void *vector, f32 scale);
extern void func_80271F34_de(Vec3 *result, Vec3 *left, Vec3 *right);
extern void func_8024E79C_de(void *arg0, Triple value, void *arg4, s32 *arg5,
                          s32 arg6, s32 arg7);







void func_8021740C_de(void *arg0, s32 unused, void *arg2, void *arg3,
                   void *arg4, s32 *arg5) {
    Vec3 offset;
    Vec3 position;
    f32 distance;

    if (arg3 != 0) {
        func_80271F68_de(&offset, &((Player *)(arg2))->pos,
                       &((Player *)(arg3))->pos);
        offset.y = 0.0f;
        func_8027207C_de(&offset.x);
    } else {
        offset.x = 0.0f;
        offset.y = 0.0f;
        offset.z = 0.0f;
    }

    distance = func_8024D398_de(arg2) + func_8024D398_de(arg0) + D_800C21E8_de;
    func_80271F9C_de(&offset, &offset, distance);
    func_80271F34_de(&position, &((Player *)(arg2))->pos, &offset);
    func_8024E79C_de(arg2, *(Triple *)&position, arg4, arg5, 0, 0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2118_4 = 51.1999969f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C72D8_4 = 51.1999969f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2488_4 = 51.1999969f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C24C8_4 = 51.1999969f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C21E8_4 = 51.1999969f;
#endif

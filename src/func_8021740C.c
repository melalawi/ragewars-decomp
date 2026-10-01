#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vector3;

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Triple;

extern void func_80271FD8(Vector3 *result, Vector3 *left, Vector3 *right);
extern void func_802720EC(f32 *vector);
extern f32 func_8024D388(void *arg0);
extern void func_8027200C(void *result, void *vector, f32 scale);
extern void func_80271FA4(Vector3 *result, Vector3 *left, Vector3 *right);
extern void func_8024E78C(void *arg0, Triple value, void *arg4, s32 *arg5,
                          s32 arg6, s32 arg7);
extern f32 D_800C72D8;

typedef struct func_8021740C_S1 func_8021740C_S1;
typedef struct func_8021740C_S2 func_8021740C_S2;
struct func_8021740C_S1 {
    char pad0[0x8];
    Vector3 unk8;
};
struct func_8021740C_S2 {
    char pad0[0x8];
    Vector3 unk8;
};

void func_8021740C(void *arg0, s32 unused, void *arg2, void *arg3,
                   void *arg4, s32 *arg5) {
    Vector3 offset;
    Vector3 position;
    f32 distance;

    if (arg3 != 0) {
        func_80271FD8(&offset, &((func_8021740C_S1 *)(arg2))->unk8,
                       &((func_8021740C_S2 *)(arg3))->unk8);
        offset.y = 0.0f;
        func_802720EC(&offset.x);
    } else {
        offset.x = 0.0f;
        offset.y = 0.0f;
        offset.z = 0.0f;
    }

    distance = func_8024D388(arg2) + func_8024D388(arg0) + D_800C72D8;
    func_8027200C(&offset, &offset, distance);
    func_80271FA4(&position, &((func_8021740C_S1 *)(arg2))->unk8, &offset);
    func_8024E78C(arg2, *(Triple *)&position, arg4, arg5, 0, 0);
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

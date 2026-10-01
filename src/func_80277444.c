#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    char pad0[4];
    f32 value;
    char unk8;
    char pad9[0xB8-9];
    u8 flagB8;
    u8 flagB9;
    char padBA[2];
} Object;
typedef struct { f32 m[16]; } Matrix;

extern f32 D_800C9BC8;
extern void func_80272908(void *, void *, void *);
extern void func_80272BA8(void *arg0, void *arg1, void *arg2);
extern void func_802720EC(f32 *);
extern s32 func_80277198(void *arg0, f32 arg1, f32 arg2, f32 arg3,
                        f32 *arg4, f32 *arg5);
extern void func_8027200C(void *, void *, f32);

typedef struct func_80277444_S1 func_80277444_S1;
struct func_80277444_S1 {
    char pad0[0x8];
    char unk8;
};


s32 func_80277444(Object *arg0, Vec3 arg1, Vec3 arg4, void *arg7,
                  Vec3 *arg8, f32 *arg9) {
    Vec3 second;
    Vec3 first;
    Vec3 normal;
    f32 amount;
    f32 dot;
    f32 value;
    f32 objectValue;

    if (arg0->flagB9 != 0) {
        first.x = arg1.x * ((Matrix *)arg7)->m[0];
        first.y = arg1.y * ((Matrix *)arg7)->m[5];
        first.z = arg1.z * ((Matrix *)arg7)->m[10];
        first.x += ((Matrix *)arg7)->m[12];
        first.y += ((Matrix *)arg7)->m[13];
        first.z += ((Matrix *)arg7)->m[14];
        second.x = arg4.x * ((Matrix *)arg7)->m[0];
        second.y = arg4.y * ((Matrix *)arg7)->m[5];
        second.z = arg4.z * ((Matrix *)arg7)->m[10];
    } else {
        func_80272908(arg7, &arg1.x, &first);
        func_80272BA8(arg7, &arg4.x, &second);
    }
    func_802720EC(&second.x);
    if (func_80277198(arg0, first.x, first.y, first.z,
                     &normal.x, &amount) == 0) {
        return 0;
    }
    {
        dot = -((normal.x * second.x) + (normal.y * second.y) +
                (normal.z * second.z));
        if (dot < 0.0f) {
            dot = 0.0f;
        }
        objectValue = arg0->value;
        value = amount * (objectValue +
                          (dot * (D_800C9BC8 - objectValue)));
        amount = value;
        if (value <= 0.0f) {
            amount = 0.0f;
        }
        if (arg0->flagB8 != 0) {
            amount = -amount;
        }
        if (arg9 != 0) {
            *arg9 = amount;
        }
        func_8027200C(arg8, &((func_80277444_S1 *)(arg0))->unk8, amount);
    }
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4A08_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9BC8_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4D88_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4DC8_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4AD8_4 = 1.0f;
#endif

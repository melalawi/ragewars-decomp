#include "types.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    u16 value;
    u16 pad;
} Arg2;

typedef struct {
    s8 value;
    u8 pad[3];
} Arg3;

extern f32 func_802672D0_de(u8 *arg0);
extern void func_80271F68_de(Vec3 *out, Vec3 *left, Vec3 *right);
extern f32 func_802B72B0_de(f32);
extern void func_8027207C_de(f32 *vector);
extern void func_80271F9C_de(void *out, void *vector, f32 scale);
extern f32 D_800C4430_de[];
extern f32 D_800C46E8_eu;

typedef struct func_802675E0_S1 func_802675E0_S1;
typedef struct func_802675E0_S2 func_802675E0_S2;
struct func_802675E0_S1 {
    char pad0[0x8];
    Vec3 unk8;
};
struct func_802675E0_S2 {
    char pad0[0x8];
    Vec3 unk8;
};

void func_802675C8_de(void *arg0, u8 *arg1, Arg2 arg2, Arg3 arg3, Vec3 *arg4)
{
    char prefix[0x10];
    Vec3 offset;
    char scratch[0x50];
    Vec3 *offsetp;
    f32 radius;
    f32 distance;
    f32 zero;

    radius = (f32)arg2.value * D_800C4430_de[1];
    radius *= func_802672D0_de(arg1);
    zero = 0.0f;
    arg4->z = zero;
    arg4->y = zero;
    arg4->x = zero;
    if (*arg1 == 2) {
        offsetp = &offset;
        func_80271F68_de(offsetp, &((func_802675E0_S1 *)(arg0))->unk8,
                      &((func_802675E0_S2 *)(arg1))->unk8);
        distance = func_802B72B0_de((offset.x * offset.x) +
                                 (offset.y * offset.y) +
                                 (offset.z * offset.z));
        func_8027207C_de(&offsetp->x);
        if (!(radius <= distance)) {
            func_80271F9C_de(arg4, offsetp,
                          (f32)arg3.value * (((radius - distance) / radius) *
                                      D_800C46E8_eu));
        }
    }
}


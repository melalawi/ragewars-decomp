#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern const f32 D_800C7E84;
extern const f32 D_800C7E88;
typedef struct { const f32 first; const f32 second; } D_800C7E88_Pair;

extern void func_8023912C(void *arg0);
extern void func_80218464();
extern s32 func_8025DE74(s16 arg0, Vec3 arg1, s32 arg4, s32 arg5);

typedef struct func_8022CF28_S1 func_8022CF28_S1;
typedef struct func_8022CF28_S2 func_8022CF28_S2;
struct func_8022CF28_S1 {
    char pad0[0x5DC];
    void* unk5DC;
    char pad5DC[0x6C0 - 0x5DC - sizeof(void*)];
    f32 unk6C0;
    char pad6C0[0x6C4 - 0x6C0 - sizeof(f32)];
    f32 unk6C4;
    char pad6C4[0x848 - 0x6C4 - sizeof(f32)];
    s32 unk848;
    char pad84C[0x938 - 0x84C];
    char unk938;
};
struct func_8022CF28_S2 {
    char pad0[0x8];
    Vec3 unk8;
    char pad8[0x20 - 0x8 - sizeof(Vec3)];
    f32 unk20;
    char pad20[0x38 - 0x20 - sizeof(f32)];
    s32 unk38;
};

void func_8022CF28(void *arg0, void *arg1) {
    f32 value;
    f32 minimum;
    ((func_8022CF28_S1 *)(arg0))->unk6C0 *= D_800C7E84;
    ((func_8022CF28_S1 *)(arg0))->unk6C4 *= D_800C7E84;

    value = ((func_8022CF28_S2 *)(arg1))->unk20 * D_800C7E88;
    minimum = ((D_800C7E88_Pair *)&D_800C7E88)->second;
    ((func_8022CF28_S2 *)(arg1))->unk20 = value;
    if (value < minimum) {
        ((func_8022CF28_S2 *)(arg1))->unk20 = minimum;
    }

    ((func_8022CF28_S1 *)(arg0))->unk848 = 0;
    func_8023912C(((func_8022CF28_S1 *)(arg0))->unk5DC);
    func_80218464(&((func_8022CF28_S1 *)arg0)->unk938);

    if (((func_8022CF28_S2 *)(arg1))->unk38 & 0x8000) {
        func_8025DE74(0x2DA, ((func_8022CF28_S2 *)(arg1))->unk8, 0, -1);
    } else {
        func_8025DE74(0x2DC, ((func_8022CF28_S2 *)(arg1))->unk8, 0, -1);
    }
}

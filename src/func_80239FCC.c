#include "basetypes.h"

extern s32 func_80245788(void);
extern s32 func_802866F8(void *arg0, void *arg1);
extern f32 func_80275E44(s32 arg0, f32 arg1, f32 arg2);
extern s32 D_8011FE88;
extern s32 D_800D2B40;
extern f32 D_800C8680;
extern f32 D_800C8684;
extern f32 D_800C8688;

typedef struct func_80239FCC_S1 func_80239FCC_S1;
typedef struct func_80239FCC_S2 func_80239FCC_S2;
struct func_80239FCC_S1 {
    char pad0[0x38];
    f32 unk38;
    char pad38[0x3C - 0x38 - sizeof(f32)];
    f32 unk3C;
    char pad3C[0x40 - 0x3C - sizeof(f32)];
    f32 unk40;
    char pad40[0x44 - 0x40 - sizeof(f32)];
    f32 unk44;
    char pad44[0x58 - 0x44 - sizeof(f32)];
    s32 unk58;
    char pad58[0x5C - 0x58 - sizeof(s32)];
    f32 unk5C;
    char pad5C[0x64 - 0x5C - sizeof(f32)];
    s32 unk64;
};
struct func_80239FCC_S2 {
    char pad0[0x1C];
    s32 unk1C;
};

void func_80239FCC(void *arg0) {
    s32 object;
    f32 value;
    f32 x;
    f32 y;
    f32 z;
    f32 w;

    if (func_80245788() != 0) {
        ((func_80239FCC_S1 *)(arg0))->unk58 = func_802866F8(&D_8011FE88, (char *)arg0 + 0x38);
    }
    object = ((func_80239FCC_S1 *)(arg0))->unk58;
    x = ((func_80239FCC_S1 *)(arg0))->unk38;
    y = ((func_80239FCC_S1 *)(arg0))->unk3C;
    z = ((func_80239FCC_S1 *)(arg0))->unk40;
    w = ((func_80239FCC_S1 *)(arg0))->unk44;
    ((func_80239FCC_S1 *)(arg0))->unk64 = D_800D2B40;
    if (object != 0 && func_80245788() == 0) {
        value = ((y + w) - func_80275E44(object, x, z)) * D_800C8680;
        if (value < D_800C8684 && D_800C8688 < value) {
            ((func_80239FCC_S1 *)(arg0))->unk64 = ((func_80239FCC_S2 *)(object))->unk1C;
        }
    }
    if (func_80245788() != 0) {
        ((func_80239FCC_S1 *)(arg0))->unk64 = D_800D2B40;
    }
    if (((func_80239FCC_S1 *)(arg0))->unk5C > 0.0f) {
        ((func_80239FCC_S1 *)(arg0))->unk64 = D_800D2B40;
    }
}

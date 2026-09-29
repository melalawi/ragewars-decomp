#include "basetypes.h"

extern s32 func_80275B80(void *arg0, f32 arg1, f32 arg2);
extern f32 func_80275E44(s32, s32, s32);
extern f32 func_802752CC(void *arg0, s32 arg1, s32 arg2);
extern s32 func_802866F8(void *, void *);
extern char D_8011FE88[];

typedef struct func_8028C02C_S1 func_8028C02C_S1;
typedef struct func_8028C02C_S2 func_8028C02C_S2;
typedef union func_8028C02C_S1_U0 { f32 v0; s32 v1; } func_8028C02C_S1_U0;
typedef union func_8028C02C_S1_U8 { f32 v0; s32 v1; } func_8028C02C_S1_U8;
struct func_8028C02C_S1 {
    func_8028C02C_S1_U0 unk0;
    char pad0[0x4 - 0x0 - sizeof(func_8028C02C_S1_U0)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    func_8028C02C_S1_U8 unk8;
};
struct func_8028C02C_S2 {
    char pad0[0x2];
    u16 unk2;
};

void *func_8028C02C(void *arg0, void *arg1) {
    f32 lower;
    f32 upper;
    f32 value;

    if (arg0 != 0 &&
        func_80275B80(arg0, ((func_8028C02C_S1 *)(arg1))->unk0.v0,
                          ((func_8028C02C_S1 *)(arg1))->unk8.v0) != 0) {
        if (!(((func_8028C02C_S2 *)(arg0))->unk2 & 0x40)) {
            return arg0;
        }
        lower = func_80275E44(arg0,
            ((func_8028C02C_S1 *)(arg1))->unk0.v1, ((func_8028C02C_S1 *)(arg1))->unk8.v1);
        upper = func_802752CC(arg0,
            ((func_8028C02C_S1 *)(arg1))->unk0.v1, ((func_8028C02C_S1 *)(arg1))->unk8.v1);
        value = ((func_8028C02C_S1 *)(arg1))->unk4;
        if (lower <= value && value <= upper) {
            return arg0;
        }
    }
    return func_802866F8(D_8011FE88, arg1);
}

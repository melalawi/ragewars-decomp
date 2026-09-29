#include "basetypes.h"

extern void func_802B5030(s32 arg0, s16 arg1);
extern void func_802B5060(s32 arg0);
extern f32 D_800C90F0;
extern f32 D_800C90F4;

typedef struct func_8025D948_S1 func_8025D948_S1;
typedef struct func_8025D948_S2 func_8025D948_S2;
struct func_8025D948_S1 {
    char pad0[0x14];
    s32 unk14;
    char pad14[0x1C - 0x14 - sizeof(s32)];
    s32 unk1C;
    char pad1C[0x22 - 0x1C - sizeof(s32)];
    s16 unk22;
    char pad22[0x34 - 0x22 - sizeof(s16)];
    f32 unk34;
    char pad34[0x38 - 0x34 - sizeof(f32)];
    s32 unk38;
    char pad38[0x3C - 0x38 - sizeof(s32)];
    f32 unk3C;
    char pad3C[0x40 - 0x3C - sizeof(f32)];
    f32 unk40;
};
struct func_8025D948_S2 {
    char pad0[0x20];
    s32 unk20;
};

void func_8025D948(void *arg0) {
    char *o = (char *) arg0;
    f32 temp_f1;
    f32 temp_f2;
    f32 var_f0;
    s32 temp_f3;

    if (((func_8025D948_S1 *)(o))->unk1C & 2) {
        func_802B5030(((func_8025D948_S1 *)(o))->unk14, ((func_8025D948_S1 *)(o))->unk22);
        temp_f3 = (s32) ((f32) ((func_8025D948_S2 *)(o))->unk20 - ((func_8025D948_S1 *)(o))->unk34);
        ((func_8025D948_S2 *)(o))->unk20 = temp_f3;
        if (temp_f3 <= 0) {
            ((func_8025D948_S2 *)(o))->unk20 = 0;
            func_802B5060(((func_8025D948_S1 *)(o))->unk14);
            ((func_8025D948_S1 *)(o))->unk1C |= 4;
        }
    } else if (((func_8025D948_S1 *)(o))->unk38 != 0) {
        temp_f1 = ((func_8025D948_S1 *)(o))->unk3C;
        temp_f2 = ((func_8025D948_S1 *)(o))->unk40;
        if (temp_f2 < temp_f1) {
            var_f0 = temp_f1 - D_800C90F0;
            if (temp_f2 <= var_f0) {
                goto store;
            }
            goto clamp;
        }
        if (temp_f1 < temp_f2) {
            var_f0 = temp_f1 + D_800C90F4;
            if (var_f0 <= temp_f2) {
                goto store;
            }
clamp:
            var_f0 = temp_f2;
store:
            ((func_8025D948_S1 *)(o))->unk3C = var_f0;
        }
    }
}

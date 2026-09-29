/* Releases object resources and clears their handles. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct {s32 unk0, unk4, unk8, unkC, unk10, unk14, unk18, unk1C;} Obj;
void func_802537D8(s32, s32);                            typedef struct func_80405CDC_S1 func_80405CDC_S1;
typedef struct func_80405CDC_S2 func_80405CDC_S2;
struct func_80405CDC_S1 {
    char pad0[0x4];
    Obj unk4;
};
struct func_80405CDC_S2 {
    char pad0[0x8];
    Obj unk8;
};

/* extern */

void func_80405CDC(Obj *arg0) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 var_s1;
    s32 var_v1;
    Obj *var_s0;
    Obj *var_v0;

    temp_a1 = arg0->unk4;
    if (temp_a1 != 0) {
        func_802537D8(0, temp_a1);
    }
    temp_a1_2 = arg0->unk8;
    if (temp_a1_2 != 0) {
        func_802537D8(0, temp_a1_2);
    }
    temp_a1_3 = arg0->unk18;
    if (temp_a1_3 != 0) {
        func_802537D8(0, temp_a1_3);
    }
    temp_a1_4 = arg0->unk1C;
    if (temp_a1_4 != 0) {
        func_802537D8(0, temp_a1_4);
    }
    var_s1 = 0;
    var_s0 = arg0;
    do {
        temp_a1_5 = var_s0->unkC;
        if (temp_a1_5 != 0) {
            func_802537D8(0, temp_a1_5);
        }
        var_s1 += 1;
        var_s0 = &((func_80405CDC_S1 *)(var_s0))->unk4;
    } while (var_s1 < 3);
    var_v1 = 2;
    var_v0 = &((func_80405CDC_S2 *)(arg0))->unk8;
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unk18 = 0;
    arg0->unk1C = 0;
    do {
        var_v0->unkC = 0;
        var_v1 -= 1;
        var_v0 = (Obj *)((s32 *)var_v0 - 1);
    } while (var_v1 >= 0);
}

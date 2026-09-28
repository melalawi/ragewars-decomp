/* Steps each channel's fade timer and writes the level its curve currently reaches. */
#include "basetypes.h"
typedef struct { char p0[0x10]; u8 unk10; } Obj;
typedef struct {
    char p0[4];
    s32 unk4;
    char p1[0x24];
    s32 unk2C;
    char p2[0x28];
    s32 unk58;
    char p3[0xAD4];
    s32 unkB30, unkB34;
    Obj *unkB38;
    char p4[0x64];
    s32 unkBA0, unkBA4;
} Blk;
extern Blk *D_800E54A4;
extern f32 func_802BB630(f32);
extern Obj *func_8041B87C(s32, s32);
extern void func_80435010(s32);
extern void func_804350D0(s32);
extern void func_804351A0(s32);

void func_80433574(s32 arg0) {
    f32 temp_f0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_idx;
    Obj *temp_s0;
    s32 var_s1;
    Blk *temp_a0;
    Blk *temp_a0_2;
    Blk *temp_v0_3;
    Blk *temp_v0_4;
    Blk *temp_v0_5;

    var_s1 = 0;
    do {
        temp_a0 = (Blk *)((char *)D_800E54A4 + (var_s1 * 0xB68));
        temp_v1 = temp_a0->unk58;
        switch (temp_v1) {
        case 0:
            func_804351A0(var_s1);
            break;
        case 0xC:
            temp_s0 = func_8041B87C(D_800E54A4->unk4, var_s1);
            temp_v0_4 = (Blk *)((char *)D_800E54A4 + (var_s1 * 4));
            temp_f0 = (func_802BB630((f32)var_s1 + ((f32)temp_v0_4->unk2C * 0.005f)) * 100.0f) + 150.0f;
            temp_s0->unk10 = temp_f0;
            temp_a0_2 = (Blk *)((char *)D_800E54A4 + (var_s1 * 0xB68));
            temp_v1_2 = temp_a0_2->unkBA0;
            switch (temp_v1_2) {
            case 0:
                temp_v0 = temp_a0_2->unkBA4 + 1;
                temp_a0_2->unkBA4 = temp_v0;
                if (temp_v0 >= 6) {
                    func_804350D0(var_s1);
                }
                break;
            case 1:
                temp_v0_2 = temp_a0_2->unkBA4 + 1;
                temp_a0_2->unkBA4 = temp_v0_2;
                if (temp_v0_2 >= 6) {
                    func_80435010(var_s1);
                }
                break;
            case 2:
                break;
            }
            break;
        case 4:
            temp_idx = ((temp_a0->unkB30 - temp_a0->unkB34) * 4) + (var_s1 * 0xB68);
            temp_s0 = ((Blk *)((char *)D_800E54A4 + temp_idx))->unkB38;
            temp_v0_5 = (Blk *)((char *)D_800E54A4 + (var_s1 * 4));
            temp_f0 = (func_802BB630((f32)var_s1 + ((f32)temp_v0_5->unk2C * 0.005f)) * 100.0f) + 150.0f;
            temp_s0->unk10 = temp_f0;
            break;
        }
        temp_v0_3 = (Blk *)((char *)D_800E54A4 + (var_s1 * 4));
        temp_v0_3->unk2C = temp_v0_3->unk2C + arg0;
        var_s1 += 1;
    } while (var_s1 < 4);
}

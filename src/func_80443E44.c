/* Updates display flags and activates the selected resource. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct { char pad58[88]; int unk58; char pad120[196]; int unk120; char pad1c0[156]; int unk1C0; char pad210[76]; int unk210; char pad238[36]; int unk238; char pad260[36]; int unk260; } Flags;
typedef struct {char pad[12]; Flags *unkC; char pad2[12]; int unk1C;} Arg;
s32 func_8022A590(s32 *, s32);                        /* extern */
void func_80264790(s32);                               /* extern */
void func_80404E28(s32);                               /* extern */
extern s32 D_80145040;
extern s32 D_801468F4[];
extern s32 D_8015375C[];
extern s32 D_800E28C0[];                          /* const */

void func_80443E44(Arg *arg0) {
    s32 temp_a1;
    s32 var_s0;
    Flags *temp_a0;
    Flags *temp_v0;
    Flags *temp_v1;
    Flags *temp_v1_2;
    Flags *temp_v1_3;
    Flags *temp_v1_4;
    Flags *temp_v1_5;

    temp_v1 = arg0->unkC;
    temp_v1->unk238 = (s32) (temp_v1->unk238 | 0x01800000);
    temp_v1_2 = arg0->unkC;
    temp_v1_2->unk260 = (s32) (temp_v1_2->unk260 | 0x01800000);
    temp_v1_3 = arg0->unkC;
    temp_v1_3->unk1C0 = (s32) (temp_v1_3->unk1C0 & 0xFE7FFFFF);
    temp_v1_4 = arg0->unkC;
    temp_v1_4->unk58 = (s32) (temp_v1_4->unk58 & 0xFE7FFFFF);
    temp_v1_5 = arg0->unkC;
    temp_v1_5->unk210 = (s32) (temp_v1_5->unk210 & 0xFE7FFFFF);
    D_8015375C[0] = 0;
    D_800E28C0[0] = 0;
    var_s0 = 0;
    if (D_801468F4[0] != 0) {
        temp_v0 = arg0->unkC;
        temp_v0->unk120 = (s32) (temp_v0->unk120 | 0x01000000);
    } else {
        temp_a0 = arg0->unkC;
        temp_a0->unk120 = (s32) (temp_a0->unk120 & 0xFEFFFFFF);
    }
    temp_a1 = arg0->unk1C;
    if (temp_a1 != 0) {
        var_s0 = func_8022A590(&D_80145040, temp_a1);
    }
    func_80264790(var_s0);
    func_80404E28(var_s0);
}

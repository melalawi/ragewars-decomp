/* Updates object display flags and selects the requested resource. */
#include "basetypes.h"
typedef struct { char pad58[88]; int unk58; char pad120[196]; int unk120; char pad1c0[156]; int unk1C0; char pad210[76]; int unk210; char pad238[36]; int unk238; char pad260[36]; int unk260; } Flags;
typedef struct {char pad[12]; Flags *unkC; char pad2[12]; int unk1C;} Arg;
s32 func_8022A590(int *, s32);                        /* extern */
int func_80264790(s32);                               /* extern */
extern int D_80145040;
extern s32 D_801468F4[];
extern s32 D_800E28C0;                          /* const */

void func_80443F40(Arg *arg0) {
    s32 temp_a1;
    s32 var_v0;
    Flags *temp_a0;
    Flags *temp_v0;
    Flags *temp_v1;
    Flags *temp_v1_2;
    Flags *temp_v1_3;
    Flags *temp_v1_4;
    Flags *temp_v1_5;

    temp_a1 = arg0->unk1C;
    D_800E28C0 = 0;
    var_v0 = 0;
    if (temp_a1 != 0) {
        var_v0 = func_8022A590(&D_80145040, temp_a1);
    }
    func_80264790(var_v0);
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
    if (D_801468F4[0] != 0) {
        temp_v0 = arg0->unkC;
        temp_v0->unk120 = (s32) (temp_v0->unk120 | 0x01000000);
        return;
    }
    temp_a0 = arg0->unkC;
    temp_a0->unk120 = (s32) (temp_a0->unk120 & 0xFEFFFFFF);
}

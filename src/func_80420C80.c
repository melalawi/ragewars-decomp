/* Advances a player panel from its ready state and starts its selection. */
#include "basetypes.h"
typedef struct { s32 a, unk4; char p0[8]; s32 unk10, unk14; char p1[0x1320]; s32 unk1338, unk133C; char p2[0x14]; s32 unk1354; } State;
typedef struct { char pad[0x14]; s32 mode; char pad18[8]; char target; char pad21[0x4A7]; } PanelRecord;
extern State *D_800E42D0;
extern u8 D_801462D5;
void func_8029A73C(void);                           /* extern */
void func_8041B834(s32, s32, s32, State *);         /* extern */
void func_8041CE80(void *, s32);                    /* extern */
void func_804204A8(s32);                            typedef struct func_80420C80_S1 func_80420C80_S1;
struct func_80420C80_S1 {
    char pad0[0x20];
    char unk20;
};

/* extern */

s32 func_80420C80(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s1;
    State *temp_a3;

    func_8029A73C();
    temp_s0 = arg2 & 0xFFFF;
    temp_s1 = temp_s0 * 0x4C8;
    temp_a3 = (State *)&((PanelRecord *)D_800E42D0)[temp_s0];
    temp_a0 = temp_a3->unk14;
    switch (temp_a0) {
    case 1:
        if (D_801462D5 != 1) {
            D_800E42D0->unk1338 = 5;
            D_800E42D0->unk133C = 4;
            D_800E42D0->unk1354 = 3;
        }
        break;
    case 3:
        temp_a3->unk14 = 1;
        func_8041B834(D_800E42D0->unk4, temp_s0, 0, temp_a3);
        func_8041CE80(&((func_80420C80_S1 *)((temp_s1 + (s32)D_800E42D0)))->unk20, 1);
        func_804204A8(temp_s0);
        break;
    }
    return 0;
}

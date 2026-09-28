/* Advances menu selection timing and dispatches the selected action. */
#include "basetypes.h"
typedef struct {char pad[0x16]; s16 unk16,unk18,unk1A;} Cell;
typedef struct {char pad[0x44]; Cell *unk44;} Obj;
typedef struct {Obj *unk0; s32 unk4; Cell *unk8; s32 unkC,unk10;} State;
void func_80299368(s32);                               /* extern */
void func_8029A73C();                                  /* extern */
void func_802A3358();                                  /* extern */
void func_802A338C();                                  /* extern */
s32 func_8041A4F0(void *);                          /* extern */
extern s32 D_800E28E0;                          
extern State *D_800E4450;                     

s32 func_80421C1C(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    Cell *temp_a0;
    Cell *temp_v1;

    if (D_800E28E0 >= 2) {
        func_802A338C();
        return 0;
    }
    func_802A3358();
    temp_v0 = func_8041A4F0(D_800E4450->unk0);
    switch (temp_v0) {                              /* irregular */
    case 3:
        temp_v0_2 = D_800E4450->unkC - 1;
        D_800E4450->unkC = temp_v0_2;
        if (temp_v0_2 <= 0) {
            temp_v1 = D_800E4450->unk8;
            temp_v1->unk16 = (u16) (temp_v1->unk16 - 1);
            temp_a0 = D_800E4450->unk8;
            if (((s16) temp_a0->unk16 + temp_a0->unk1A) < 0) {
                temp_a0->unk16 = (u16) D_800E4450->unk0->unk44->unk1A;
            }
            D_800E4450->unkC = temp_v0;
        }
block_12:
        return 0;
    case 4:
        func_8029A73C();
        var_a0 = D_800E4450->unk10;
        if (var_a0 == -1) {
            var_a0 = 3;
        }
        func_80299368(var_a0);
        goto block_12;
    default:
        return 0;
    }
}

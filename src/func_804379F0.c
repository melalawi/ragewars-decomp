/* Advances a menu selection on its countdown and dispatches the exit action. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct { char pad[0x16]; s16 unk16; s16 pad18; s16 unk1A; } Entry;
typedef struct { char pad[0x44]; Entry *unk44; } Root;
typedef struct { Root *unk0; s32 pad4; Entry *unk8; s32 unkC; s32 unk10; } State;
void func_80299368(s32);                               /* extern */
void func_8029A73C();                                  /* extern */
void func_8029A8A8(void);                               /* extern */
s32 func_8041A4F0(void *);                          /* extern */
extern State *D_800E5784;                     /* const */

s32 func_804379F0(void) {
    s32 temp_a0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    Entry *temp_a0;
    Entry *temp_v1;

    temp_v0 = func_8041A4F0(D_800E5784->unk0);
    switch (temp_v0) {                              /* irregular */
    case 3:
        temp_v0_2 = D_800E5784->unkC - 1;
        D_800E5784->unkC = temp_v0_2;
        if (temp_v0_2 <= 0) {
            temp_v1 = D_800E5784->unk8;
            temp_v1->unk16 = (u16) (temp_v1->unk16 - 1);
            temp_a0 = D_800E5784->unk8;
            if (((s16) temp_a0->unk16 + temp_a0->unk1A) < 0) {
                temp_a0->unk16 = (u16) D_800E5784->unk0->unk44->unk1A;
            }
            D_800E5784->unkC = temp_v0;
        }
block_10:
        return 0;
    case 4:
        func_8029A73C();
        temp_a0_2 = D_800E5784->unk10;
        if (temp_a0_2 == -1) {
            func_8029A8A8();
            return 0;
        }
        func_80299368(temp_a0_2);
        goto block_10;
    default:
        return 0;
    }
}

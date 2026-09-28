/* Animates the two menu panels through open, close and countdown states and updates the active team menu. */
#define CLAMP(value, low, high) ((value) < (low) ? (low) : (value) > (high) ? (high) : (value))
#include "basetypes.h"
typedef struct { char pad[0x14]; u16 unk14; } Node;
typedef struct { char pad[0x24]; s32 unk24, unk28; char pad2[0x10]; Node *unk3C; u16 unk40,unk42; Node *unk44; u16 unk48,unk4A; s32 unk4C,unk50; char pad3[0x341C]; s32 unk3470; } State;
extern s32 D_800E28E0;
extern State *D_800E54A4;
extern void func_8025DF54();
extern void func_80299368(s32),func_8029A73C(),func_802A3358(void),func_8040E958(s32,s32),func_80419FA4(s32),func_80419FD8(s32,s32),func_80433574(s32);
extern s32 func_80419FB8(s32);
s32 func_8042FAFC(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 var_v0;
    Node *temp_a0;
    Node *temp_a0_2;
    Node *temp_a1;
    Node *temp_a1_2;

    if (D_800E28E0 < 2) {
        temp_v0 = D_800E54A4->unk4C;
        switch (temp_v0) {
        case 1:
            temp_a1 = D_800E54A4->unk3C;
            temp_a1->unk14 = (u16) (temp_a1->unk14 + D_800E54A4->unk42);
            temp_a1_2 = D_800E54A4->unk44;
            temp_a1_2->unk14 = (u16) (temp_a1_2->unk14 - D_800E54A4->unk4A);
            temp_v0_2 = D_800E54A4->unk50 - 1;
            D_800E54A4->unk50 = temp_v0_2;
            if (temp_v0_2 <= 0) {
                func_8025DF54(0xE79, temp_a1_2);
                func_8040E958(D_800E54A4->unk28, 1);
                func_80419FD8(D_800E54A4->unk24, 4);
                D_800E54A4->unk4C = 4;
                D_800E54A4->unk50 = 4;
            }
            break;
        case 2:
            temp_a0 = D_800E54A4->unk3C;
            temp_a0->unk14 = (u16) (temp_a0->unk14 - D_800E54A4->unk42);
            temp_a0_2 = D_800E54A4->unk44;
            temp_a0_2->unk14 = (u16) (temp_a0_2->unk14 + D_800E54A4->unk4A);
            temp_v0_3 = D_800E54A4->unk50 - 1;
            D_800E54A4->unk50 = temp_v0_3;
            if (temp_v0_3 <= 0) {
                D_800E54A4->unk4C = 3;
                func_8029A73C(temp_a0_2, D_800E54A4);
                func_80299368(D_800E54A4->unk3470);
                return 0;
            }
            break;
        case 3:
            func_802A3358();
            break;
        case 4:
            D_800E54A4->unk50 = CLAMP(D_800E54A4->unk50 - 1, 0, D_800E54A4->unk50);
            if ((D_800E54A4->unk50 <= 0) && (func_80419FB8(D_800E54A4->unk24) != 0)) {
                func_80419FA4(D_800E54A4->unk24);
                D_800E54A4->unk4C = 3;
            }
            break;
        case 5:
            func_8025DF54(0xE78);
            D_800E54A4->unk4C = 2;
            D_800E54A4->unk50 = 4;
            func_8040E958(D_800E54A4->unk28, 0);
            break;
        }
        if (D_800E54A4->unk4C == 3) func_80433574(arg2);
    }
    return 0;
}

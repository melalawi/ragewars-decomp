/* Animates the character-menu panels and hides each player control when the menu closes. */
#define CLAMP(value, low, high) ((value) < (low) ? (low) : (value) > (high) ? (high) : (value))
#include "basetypes.h"
typedef struct { char pad[0x14]; u16 unk14; } Node;
typedef struct {char pad[0x1348]; Node *unk3C; u16 unk40,unk42; Node *unk44; u16 unk48,unk4A; s32 unk4C,unk50,unk24,unk28,unk3470;} State;
extern u16 D_800E5A06[];
extern s32 func_8040ECB0(s32,s32);
extern State *D_800E59E0;
extern void func_8025DF54();
extern void func_80299368(s32),func_8029A73C(),func_802A3358(void),func_8040E958(s32,s32),func_80419FA4(s32),func_80419FD8(s32,s32),func_80433574(s32);
extern s32 func_80419FB8(s32);
s32 func_8043A7D8(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 var_v0;
    s32 i,j,offset,base,screen;
    Node *temp_a0;
    Node *temp_a0_2;
    Node *temp_a1;
    Node *temp_a1_2;

    {
        temp_v0 = D_800E59E0->unk4C;
        switch (temp_v0) {
        case 1:
            temp_a1 = D_800E59E0->unk3C;
            temp_a1->unk14 = (u16) (temp_a1->unk14 + D_800E59E0->unk42);
            temp_a1_2 = D_800E59E0->unk44;
            temp_a1_2->unk14 = (u16) (temp_a1_2->unk14 - D_800E59E0->unk4A);
            temp_v0_2 = D_800E59E0->unk50 - 1;
            D_800E59E0->unk50 = temp_v0_2;
            if (temp_v0_2 <= 0) {
                func_8025DF54(0xE79, temp_a1_2);
                func_8040E958(D_800E59E0->unk28, 1);
                func_80419FD8(D_800E59E0->unk24, 4);
                D_800E59E0->unk4C = 4;
                D_800E59E0->unk50 = 4;
            }
            break;
        case 2:
            temp_a0 = D_800E59E0->unk3C;
            temp_a0->unk14 = (u16) (temp_a0->unk14 - D_800E59E0->unk42);
            temp_a0_2 = D_800E59E0->unk44;
            temp_a0_2->unk14 = (u16) (temp_a0_2->unk14 + D_800E59E0->unk4A);
            temp_v0_3 = D_800E59E0->unk50 - 1;
            D_800E59E0->unk50 = temp_v0_3;
            if (temp_v0_3 <= 0) {
                D_800E59E0->unk4C = 3;
                func_8029A73C(temp_a0_2, D_800E59E0);
                func_80299368(D_800E59E0->unk3470);
                return 0;
            }
            break;
        case 3:
            func_802A3358();
            break;
        case 4:
            D_800E59E0->unk50 = CLAMP(D_800E59E0->unk50 - 1, 0, D_800E59E0->unk50);
            if ((D_800E59E0->unk50 <= 0) && (func_80419FB8(D_800E59E0->unk24) != 0)) {
                func_80419FA4(D_800E59E0->unk24);
                D_800E59E0->unk4C = 3;
            }
            break;
        case 5:
            func_8025DF54(0xE78);
            D_800E59E0->unk4C = 2;
            D_800E59E0->unk50 = 4;
            func_8040E958(D_800E59E0->unk28, 0);
            for(i=0,screen=0,base=0;i<4;base+=76,i++,screen+=0x4D0) {
                j=0;offset=base;
                do {u16 id=*(u16 *)((char *)D_800E5A06+offset);offset+=4;temp_v0=func_8040ECB0(*(s32 *)D_800E59E0,id);j++;func_8040E958(temp_v0,0);}while(j<5);
                func_8040E958(*(s32 *)((char *)D_800E59E0+screen+0x4D0),0);
            }
            break;
        case 6: case 7: break;
        }

    }
    return 0;
}

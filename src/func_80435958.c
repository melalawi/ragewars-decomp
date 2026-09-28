/* Enters the selected menu state and resolves the default destination from the game mode. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct {char pad[0x4C];s32 unk4C,unk50;char pad54[0x341C];s32 unk3470;} State;
extern State *D_800E54A4;
extern u8 D_801462D5;
extern void func_802A338C(void);
void func_80435958(s32 arg0) {
    s32 var_v0;

    func_802A338C();
    D_800E54A4->unk4C = 5;
    D_800E54A4->unk50 = 4;
    D_800E54A4->unk3470 = arg0;
    if (arg0 == -2) {
        switch(D_801462D5) {
        case 0:D_800E54A4->unk3470=7;break;
        case 2:D_800E54A4->unk3470=7;break;
        case 1:D_800E54A4->unk3470=9;break;
        case 3:D_800E54A4->unk3470=7;break;
        case 4:D_800E54A4->unk3470=10;break;
        }
    }
}

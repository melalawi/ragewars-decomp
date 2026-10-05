#include "common/types_8a8189af7b05.h"
#include "span_16E000/code_80405454.h"
#include "span_16E000/code_80405DC0.h"
#include "types.h"
/* Enters pak menu mode 1: sets the mode flags, clears the owner's 0x01000000 flag and, when a
   message is pending (D_800E28C0), shows the player's message at 0x554 through func_80442574_de;
   otherwise probes the Controller Pak on the selected channel, falls back to func_80405F48_de when
   func_80404F04_de reports none, and shows the D_44F67C, D_44F994 or D_44F610 prompt according to
   func_80404F3C_de and func_80405598_de. */















extern s32 D_8014D4CC;
extern s32 D_800DE870;
extern char D_8014155C[];
extern char D_0044FB50[];
extern char D_0044EA2C[];
extern char D_0044ED44[];
extern char D_0044E468[];
extern char D_0044E9C0[];

extern void func_80404E28_de(s32 ch);
extern s32 func_80404F04_de(s32 ch);
extern s32 func_80404F3C_de(s32 ch);
extern s32 func_80405598_de(s32 ch);
extern void func_80405F48_de(Menu_func_804066BC_de *menu);
extern void func_80442574_de(char *, char *, func_8024795C_S2 *, func_80242278_S1 *, char *);

void func_804066BC_de(Menu_func_804066BC_de *menu) {
    s32 ch;

    D_8014D4C0_de = 0;
    D_8014D4DC = 0;
    D_8014D4D0 = 1;
    D_8014D4EC_de = 1;
    D_800DE874 = 1;
    D_8014D4F4 = 0;
    D_8014D4CC = 0;
    menu->owner->flags &= ~0x01000000;
    ch = menu->slot->unk4;
    if (D_800DE870 != 0) {
        D_8014D4F4 = 1;
        func_80442574_de(menu->player->unk5DC + 0x554, D_0044FB50, menu->player, menu->slot, 0);
        return;
    }
    func_80404E28_de(ch);
    if (func_80404F04_de(ch) == 0) {
        func_80405F48_de(menu);
        return;
    }
    D_8014D4F4 = 1;
    if (func_80404F3C_de(ch) != 0) {
        func_80442574_de(D_8014155C, D_0044EA2C, menu->player, menu->slot, D_0044FB50);
    } else if (func_80405598_de(ch) != 0) {
        func_80442574_de(D_8014155C, D_0044ED44, menu->player, menu->slot, D_0044E468);
    } else {
        func_80442574_de(D_8014155C, D_0044E9C0, menu->player, menu->slot, D_0044FB50);
    }
}

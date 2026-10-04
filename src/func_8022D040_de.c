#include "span_1000/code_8022C36C.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Runs a player's landing state: sets state 0xD when the value at 0x6C8 is zero or 0xE otherwise,
   applies the movement tables D_800CE88C and D_800CE8A4, picks animation 0x8A2 for the model
   D_800CE47C or, unless animation 0x1144 is still running with the byte at 0x10E clear, 0x8A2, 0x8A7
   or 0x14 by the stick at 0x6C0 against D_800C7E94 and D_800C7E98, and switches to state 3 once the
   timer at 0x658 passes D_800C7E9C without input bit 0x20000. */

extern void func_802231D4_de(void *, void *, void *);
extern void func_802238E0_de(void *, void *, void *);
extern s32 func_802227F4_de(void *, void *, s32);
extern char D_800C9648;
extern char D_800C9660;










void func_8022D040_de(void *arg0, void *arg1) {
    char *player;
    s32 busy;
    f32 x;

    player = arg0;
    if (((func_8022D030_S1 *)(player))->unk6C8 == 0.0f) {
        ((func_8022D030_S1 *)(player))->unk650 = 0xD;
    } else {
        ((func_8022D030_S1 *)(player))->unk650 = 0xE;
    }
    func_802231D4_de(player, arg1, &D_800C9648);
    func_802238E0_de(player, arg1, &D_800C9660);
    busy = 0;
    if (((func_8022D030_S1 *)(player))->unk86C == 0x1144) {
        busy = ((func_8022D030_S1 *)(player))->unk10E == 0;
    }
    if (((func_8022D030_S1 *)(player))->unkE4 == D_800C922C) {
        ((func_8022D030_S1 *)(player))->unk86C = 0x8A2;
    } else if (!busy) {
        x = ((func_8022D030_S1 *)(player))->unk6C0;
        if (D_800C2DA4_de <= x) {
            ((func_8022D030_S1 *)(player))->unk86C = 0x8A2;
        } else if (x <= D_800C2DA8_de) {
            ((func_8022D030_S1 *)(player))->unk86C = 0x8A7;
        } else {
            ((func_8022D030_S1 *)(player))->unk86C = 0x14;
        }
    }
    if (!(((func_8020D1FC_S1 *)(arg1))->unk38 & 0x20000) && ((func_8022D030_S1 *)(player))->unk658 > D_800C2DAC_de) {
        func_802227F4_de(player, arg1, 3);
    }
}

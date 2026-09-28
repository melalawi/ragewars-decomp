/* Runs a player's landing state: sets state 0xD when the value at 0x6C8 is zero or 0xE otherwise,
   applies the movement tables D_800CE88C and D_800CE8A4, picks animation 0x8A2 for the model
   D_800CE47C or, unless animation 0x1144 is still running with the byte at 0x10E clear, 0x8A2, 0x8A7
   or 0x14 by the stick at 0x6C0 against D_800C7E94 and D_800C7E98, and switches to state 3 once the
   timer at 0x658 passes D_800C7E9C without input bit 0x20000. */
#include "basetypes.h"

extern void func_802231B0(void *, void *, void *);
extern void func_802238BC(void *, void *, void *);
extern s32 func_802227D0(void *, void *, s32);
extern char D_800CE88C;
extern char D_800CE8A4;
extern s32 D_800CE47C;
extern f32 D_800C7E94;
extern f32 D_800C7E98;
extern f32 D_800C7E9C;

void func_8022D030(void *arg0, void *arg1) {
    char *player;
    s32 busy;
    f32 x;

    player = arg0;
    if (*(f32 *) (player + 0x6C8) == 0.0f) {
        *(s16 *) (player + 0x650) = 0xD;
    } else {
        *(s16 *) (player + 0x650) = 0xE;
    }
    func_802231B0(player, arg1, &D_800CE88C);
    func_802238BC(player, arg1, &D_800CE8A4);
    busy = 0;
    if (*(s32 *) (player + 0x86C) == 0x1144) {
        busy = *(s8 *) (player + 0x10E) == 0;
    }
    if (*(u16 *) (player + 0xE4) == D_800CE47C) {
        *(s32 *) (player + 0x86C) = 0x8A2;
    } else if (!busy) {
        x = *(f32 *) (player + 0x6C0);
        if (D_800C7E94 <= x) {
            *(s32 *) (player + 0x86C) = 0x8A2;
        } else if (x <= D_800C7E98) {
            *(s32 *) (player + 0x86C) = 0x8A7;
        } else {
            *(s32 *) (player + 0x86C) = 0x14;
        }
    }
    if (!(*(s32 *) ((char *) arg1 + 0x38) & 0x20000) && *(f32 *) (player + 0x658) > D_800C7E9C) {
        func_802227D0(player, arg1, 3);
    }
}

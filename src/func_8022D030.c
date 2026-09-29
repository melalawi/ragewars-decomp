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

typedef struct func_8022D030_S1 func_8022D030_S1;
typedef struct func_8022D030_S2 func_8022D030_S2;
struct func_8022D030_S1 {
    char pad0[0xE4];
    u16 unkE4;
    char padE4[0x10E - 0xE4 - sizeof(u16)];
    s8 unk10E;
    char pad10E[0x650 - 0x10E - sizeof(s8)];
    s16 unk650;
    char pad650[0x658 - 0x650 - sizeof(s16)];
    f32 unk658;
    char pad658[0x6C0 - 0x658 - sizeof(f32)];
    f32 unk6C0;
    char pad6C0[0x6C8 - 0x6C0 - sizeof(f32)];
    f32 unk6C8;
    char pad6C8[0x86C - 0x6C8 - sizeof(f32)];
    s32 unk86C;
};
struct func_8022D030_S2 {
    char pad0[0x38];
    s32 unk38;
};

void func_8022D030(void *arg0, void *arg1) {
    char *player;
    s32 busy;
    f32 x;

    player = arg0;
    if (((func_8022D030_S1 *)(player))->unk6C8 == 0.0f) {
        ((func_8022D030_S1 *)(player))->unk650 = 0xD;
    } else {
        ((func_8022D030_S1 *)(player))->unk650 = 0xE;
    }
    func_802231B0(player, arg1, &D_800CE88C);
    func_802238BC(player, arg1, &D_800CE8A4);
    busy = 0;
    if (((func_8022D030_S1 *)(player))->unk86C == 0x1144) {
        busy = ((func_8022D030_S1 *)(player))->unk10E == 0;
    }
    if (((func_8022D030_S1 *)(player))->unkE4 == D_800CE47C) {
        ((func_8022D030_S1 *)(player))->unk86C = 0x8A2;
    } else if (!busy) {
        x = ((func_8022D030_S1 *)(player))->unk6C0;
        if (D_800C7E94 <= x) {
            ((func_8022D030_S1 *)(player))->unk86C = 0x8A2;
        } else if (x <= D_800C7E98) {
            ((func_8022D030_S1 *)(player))->unk86C = 0x8A7;
        } else {
            ((func_8022D030_S1 *)(player))->unk86C = 0x14;
        }
    }
    if (!(((func_8022D030_S2 *)(arg1))->unk38 & 0x20000) && ((func_8022D030_S1 *)(player))->unk658 > D_800C7E9C) {
        func_802227D0(player, arg1, 3);
    }
}

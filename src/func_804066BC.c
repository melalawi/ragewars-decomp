/* Enters pak menu mode 1: sets the mode flags, clears the owner's 0x01000000 flag and, when a
   message is pending (D_800E28C0), shows the player's message at 0x554 through func_804426E4;
   otherwise probes the Controller Pak on the selected channel, falls back to func_80405F48 when
   func_80404F04 reports none, and shows the D_44F67C, D_44F994 or D_44F610 prompt according to
   func_80404F3C and func_80405598. */
#include "basetypes.h"

typedef struct {
    char pad0[0x328];
    s32 flags;
} Owner;

typedef struct {
    char pad0[0x5DC];
    char *messages;
} Player;

typedef struct {
    char pad0[4];
    s8 channel;
} Slot;

typedef struct {
    char pad0[0xC];
    Owner *owner;
    char pad10[0xC];
    Player *player;
    Slot *slot;
} Menu;

extern s32 D_80153750;
extern s32 D_8015376C;
extern s32 D_80153760;
extern s32 D_8015377C;
extern s32 D_800E28C4;
extern s32 D_80153784;
extern s32 D_8015375C;
extern s32 D_800E28C0;
extern char D_8014561C[];
extern char D_45077C[];
extern char D_44F67C[];
extern char D_44F994[];
extern char D_44F0B8[];
extern char D_44F610[];

extern void func_80404E28(s32 ch);
extern s32 func_80404F04(s32 ch);
extern s32 func_80404F3C(s32 ch);
extern s32 func_80405598(s32 ch);
extern void func_80405F48(Menu *menu);
extern void func_804426E4(char *, char *, Player *, Slot *, char *);

void func_804066BC(Menu *menu) {
    s32 ch;

    D_80153750 = 0;
    D_8015376C = 0;
    D_80153760 = 1;
    D_8015377C = 1;
    D_800E28C4 = 1;
    D_80153784 = 0;
    D_8015375C = 0;
    menu->owner->flags &= ~0x01000000;
    ch = menu->slot->channel;
    if (D_800E28C0 != 0) {
        D_80153784 = 1;
        func_804426E4(menu->player->messages + 0x554, D_45077C, menu->player, menu->slot, 0);
        return;
    }
    func_80404E28(ch);
    if (func_80404F04(ch) == 0) {
        func_80405F48(menu);
        return;
    }
    D_80153784 = 1;
    if (func_80404F3C(ch) != 0) {
        func_804426E4(D_8014561C, D_44F67C, menu->player, menu->slot, D_45077C);
    } else if (func_80405598(ch) != 0) {
        func_804426E4(D_8014561C, D_44F994, menu->player, menu->slot, D_44F0B8);
    } else {
        func_804426E4(D_8014561C, D_44F610, menu->player, menu->slot, D_45077C);
    }
}

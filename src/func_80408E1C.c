/* Closes the current pak menu prompt by its kind D_80153788: kind 8 is refused (returns 0); kinds
   9 and 5 release the slot's controller through func_80264268 and func_80264808; kind 9 then either
   hands the channel back through func_802647A8 and reopens the player's menu 0x5EC (load menu
   without a pending save) or returns to the main menu D_8011FAC0; kind 5 hands the channel back and
   reopens menu D_8013B2C8; kind 6 in the pak manager sets D_8014ADA0; kinds 4 and 3 recheck the pak
   and show D_44F100 or D_450BD0, or D_44F124, and any other kind shows the menu's pending prompt
   (clearing the placeholder 1) in the player's message box. Returns 1. */
#include "basetypes.h"

typedef struct {
    char pad0[0x554];
} Messages;

typedef struct {
    char pad0[0x5DC];
    Messages *messages;
    char pad5E0[0xC];
    s32 menu;
} Player;

typedef struct {
    char pad0[4];
    s8 channel;
} Slot;

typedef struct {
    char pad0[0x1C];
    Player *player;
    Slot *slot;
    char *prompt;
} Menu;

extern s32 D_80153788;
extern s32 D_80153760;
extern s32 D_8015377C;
extern s32 D_80153758;
extern s32 D_8015375C;
extern s32 D_80153764;
extern s32 D_8014ADA0;
extern s32 D_8013B2C8;
extern s32 D_800E28C8;
extern char D_8011FE88[];
extern char D_8011FAC0[];
extern char D_8014561C[];
extern char D_44F0DC[];
extern char D_44F100[];
extern char D_44F124[];
extern char D_450BD0[];

extern void func_80264268(Slot *slot);
extern void func_80264808(Slot *slot, s32 mode);
extern void func_802647A8(s32 ch);
extern void func_8044E178(char *, s32, s32);
extern void func_8044EA24(char *);
extern void func_80404E28(s32 ch);
extern s32 func_80404F04(s32 ch);
extern s32 func_802645A0(s32 ch);
extern void func_804426E4(char *, char *, Player *, Slot *, s32);

typedef struct func_80408E1C_S1 func_80408E1C_S1;
struct func_80408E1C_S1 {
    char pad0[0x554];
    char unk554;
};

s32 func_80408E1C(void *owner, Menu *menu) {
    s32 ch;
    s32 status;
    s32 connected;

    if (D_80153788 == 8) {
        return 0;
    }
    if (D_80153788 == 9 || D_80153788 == 5) {
        func_80264268(menu->slot);
        func_80264808(menu->slot, 1);
    }
    if (D_80153788 == 9) {
        if (D_80153760 != 0 && D_8015377C == 0 && D_80153758 == 0) {
            if (D_8015375C != 0) {
                ch = D_800E28C8;
            } else {
                ch = menu->slot->channel;
            }
            func_802647A8(ch);
            func_8044E178(D_8011FE88, menu->player->menu, 2);
            return 1;
        }
        func_8044EA24(D_8011FAC0);
        return 1;
    }
    if (D_8015375C != 0) {
        ch = D_800E28C8;
    } else {
        ch = menu->slot->channel;
    }
    if (D_80153788 == 5) {
        func_802647A8(ch);
        func_8044E178(D_8011FE88, D_8013B2C8, 2);
    }
    if (D_8015375C != 0 && D_80153788 == 6) {
        D_8014ADA0 = 1;
    }
    if (D_80153788 == 4 && D_80153760 != 0 && D_8015377C == 0) {
        func_80404E28(ch);
        status = func_80404F04(ch);
        connected = func_802645A0(ch);
        if ((status == 0 || connected != 0) && status != -2 && menu->prompt == (char *)1) {
            func_804426E4(D_8014561C, D_44F100, menu->player, menu->slot, 0);
        } else {
            func_804426E4(D_8014561C, D_450BD0, menu->player, menu->slot, 0);
        }
    } else if (D_80153788 == 3 && D_80153764 != 0) {
        func_80404E28(ch);
        status = func_80404F04(ch);
        connected = func_802645A0(ch);
        if ((status == 0 || connected != 0) && status != -2 && menu->prompt == (char *)1) {
            func_804426E4(D_8014561C, D_44F124, menu->player, menu->slot, 0);
        }
    } else {
        if (menu->prompt == (char *)1) {
            menu->prompt = 0;
        }
        if (menu->prompt != 0) {
            func_804426E4(menu->prompt != D_44F0DC && menu->player != 0 ?
                              &((func_80408E1C_S1 *)(menu->player->messages))->unk554 : D_8014561C,
                          menu->prompt, menu->player, menu->slot, ch);
        }
    }
    return 1;
}

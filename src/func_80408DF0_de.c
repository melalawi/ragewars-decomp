#include "common/types.h"
#include "span_16E000/code_80408E1C.h"
#include "types.h"
/* Closes the current pak menu prompt by its kind D_80153788: kind 8 is refused (returns 0); kinds
   9 and 5 release the slot's controller through func_80264248_de and func_802647E8_de; kind 9 then either
   hands the channel back through func_80264788_de and reopens the player's menu 0x5EC (load menu
   without a pending save) or returns to the main menu D_8011FAC0; kind 5 hands the channel back and
   reopens menu D_8013B2C8; kind 6 in the pak manager sets D_8014ADA0; kinds 4 and 3 recheck the pak
   and show D_44F100 or D_450BD0, or D_44F124, and any other kind shows the menu's pending prompt
   (clearing the placeholder 1) in the player's message box. Returns 1. */









extern s32 D_8014D4F8;
extern s32 D_8014D4D0;
extern s32 D_8014D4EC_de;
extern s32 D_8014D4C8;
extern s32 D_8014D4CC;

extern s32 D_80146CE0;
extern s32 D_80137208;
extern s32 D_800DE878;
extern char D_8011BDC8[];
extern char D_8011BA00[];
extern char D_8014155C[];
extern char D_0044E48C[];
extern char D_0044E4B0[];
extern char D_0044E4D4[];
extern char D_0044FFA4[];

extern void func_80264248_de(func_80242278_S1 *slot);
extern void func_802647E8_de(func_80242278_S1 *slot, s32 mode);
extern void func_80264788_de(s32 ch);
extern void func_8044D528_de(char *, s32, s32);
extern void func_8044DDD4_de(char *);
extern void func_80404E28_de(s32 ch);
extern s32 func_80404F04_de(s32 ch);
extern s32 func_80264580_de(s32 ch);
extern void func_80442574_de(char *, char *, Player_func_80408DF0_de *, func_80242278_S1 *, s32);




s32 func_80408DF0_de(void *owner, Menu_func_80408DF0_de *menu) {
    s32 ch;
    s32 status;
    s32 connected;

    if (D_8014D4F8 == 8) {
        return 0;
    }
    if (D_8014D4F8 == 9 || D_8014D4F8 == 5) {
        func_80264248_de(menu->slot);
        func_802647E8_de(menu->slot, 1);
    }
    if (D_8014D4F8 == 9) {
        if (D_8014D4D0 != 0 && D_8014D4EC_de == 0 && D_8014D4C8 == 0) {
            if (D_8014D4CC != 0) {
                ch = D_800DE878;
            } else {
                ch = menu->slot->unk4;
            }
            func_80264788_de(ch);
            func_8044D528_de(D_8011BDC8, menu->player->menu, 2);
            return 1;
        }
        func_8044DDD4_de(D_8011BA00);
        return 1;
    }
    if (D_8014D4CC != 0) {
        ch = D_800DE878;
    } else {
        ch = menu->slot->unk4;
    }
    if (D_8014D4F8 == 5) {
        func_80264788_de(ch);
        func_8044D528_de(D_8011BDC8, D_80137208, 2);
    }
    if (D_8014D4CC != 0 && D_8014D4F8 == 6) {
        D_80146CE0 = 1;
    }
    if (D_8014D4F8 == 4 && D_8014D4D0 != 0 && D_8014D4EC_de == 0) {
        func_80404E28_de(ch);
        status = func_80404F04_de(ch);
        connected = func_80264580_de(ch);
        if ((status == 0 || connected != 0) && status != -2 && menu->prompt == (char *)1) {
            func_80442574_de(D_8014155C, D_0044E4B0, menu->player, menu->slot, 0);
        } else {
            func_80442574_de(D_8014155C, D_0044FFA4, menu->player, menu->slot, 0);
        }
    } else if (D_8014D4F8 == 3 && D_8014D4D4 != 0) {
        func_80404E28_de(ch);
        status = func_80404F04_de(ch);
        connected = func_80264580_de(ch);
        if ((status == 0 || connected != 0) && status != -2 && menu->prompt == (char *)1) {
            func_80442574_de(D_8014155C, D_0044E4D4, menu->player, menu->slot, 0);
        }
    } else {
        if (menu->prompt == (char *)1) {
            menu->prompt = 0;
        }
        if (menu->prompt != 0) {
            func_80442574_de(menu->prompt != D_0044E48C && menu->player != 0 ?
                              &((func_80408E1C_S1 *)(menu->player->messages))->unk554 : D_8014155C,
                          menu->prompt, menu->player, menu->slot, ch);
        }
    }
    return 1;
}

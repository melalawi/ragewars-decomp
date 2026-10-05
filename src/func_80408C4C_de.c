#include "common/types_8a8189af7b05.h"
#include "span_16E000/code_80405454.h"
#include "span_16E000/code_80405DC0.h"
#include "types.h"




























/* Confirms the selected pak menu entry: marks the menu busy and returns when func_80406178_de takes
   over the selected channel; with a profile loaded (D_80153730) it creates the player through
   func_8022A5C0_de, copies the loaded profile (flags, four words and eight name bytes) into the
   player's profile, applies the loaded team through func_8044A0C4_de and shows the player's message
   through func_804427C4_de; otherwise it deletes the chosen note through func_80404858_de and shows the
   D_44F7C0 or D_44F82C result prompt. Returns 1. */









extern s32 D_8014D4CC;


extern s32 D_8014D4A0;
extern u8 D_8014D4B0_de;
extern struct { u16 value; } D_8014D4A8_de;
extern struct { u16 value; } D_8014D4AA;
extern struct { u16 value; } D_8014D4AC_de;
extern struct { u16 value; } D_8014D4AE;
extern u8 D_8014D4B4[];
extern s8 D_8014D490;

extern char D_80140F80;
extern char D_0044FA6C[];
extern char D_8014155C[];
extern char D_0044EB70[];
extern char D_0044EBDC[];

extern s32 func_80406178_de(Menu_func_80408C4C_de *menu, s32 ch, s32 mode);
extern SharedPlayer_func_80408C4C_de *func_8022A5C0_de(char *pool, func_80242278_S1 *slot);
extern void func_8044A0C4_de(SharedPlayer_func_80408C4C_de *player, s32 team);
extern void func_804427C4_de(char *text, Menu_func_80408C4C_de *menu, char *format);
extern s32 func_80404858_de(s32 ch, s32 index);
extern void func_80442574_de(char *, char *, SharedPlayer_func_80408C4C_de *, func_80242278_S1 *, char *);




s32 func_80408C4C_de(void *unused, Menu_func_80408C4C_de *menu) {
    s32 ch;
    SharedPlayer_func_80408C4C_de *player;
    Profile_func_80408C4C_de *profile;
    s32 i;

    if (D_8014D4CC != 0) {
        ch = D_800DE878;
    } else {
        ch = menu->slot->unk4;
    }
    if (func_80406178_de(menu, ch, 0) != 0) {
        D_8014D4F4 = 1;
        return 1;
    }
    if (D_8014D4A0 != 0) {
        player = func_8022A5C0_de(&D_80140F80, menu->slot);
        menu->player = player;
        profile = player->views5D8.view5D8_6.profile;
        profile->flags = D_8014D4B0_de;
        ((func_80408C78_S1 *)(profile))->unk0 = D_8014D4A8_de.value;
        ((func_80408C78_S1 *)(profile))->unk2 = D_8014D4AA.value;
        ((func_80408C78_S1 *)(profile))->unk4 = D_8014D4AC_de.value;
        ((func_80408C78_S1 *)(profile))->unk6 = D_8014D4AE.value;
        for (i = 0; i < 8; i++) {
            profile->name[i] = D_8014D4B4[i];
        }
        func_8044A0C4_de(player, D_8014D490);
        func_804427C4_de(player->views5DC.view5DC_7.messages + 0x554, menu, D_0044FA6C);
        return 1;
    }
    if (func_80404858_de(ch, D_8014D4FC) == 0) {
        func_80442574_de(D_8014155C, D_0044EB70, menu->player, menu->slot, menu->prompt);
    } else {
        func_80442574_de(D_8014155C, D_0044EBDC, menu->player, menu->slot, menu->prompt);
    }
    return 1;
}

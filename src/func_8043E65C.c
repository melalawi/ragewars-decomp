#include "basetypes.h"
#include "../splat/types/shared/player.h"
typedef SharedPlayer Player;

/* Handles the team option of a menu: unless func_8026439C reports the confirm input, it steps the owner's team byte at 0x80 through func_804425F8 between 1 and 18, applies it with func_8044AD14 and redraws it with func_804422BC, returning zero; on confirm it applies the team, plays the sound D_800E5DFA gives for the player's slot at 0x5E0 and shows the resource D_450698 through func_80442934, returning one. */
typedef struct {
    s16 sound;
    s16 pad2;
} SoundEntry;

typedef struct Settings {
    char pad[0x80];
    s8 team;
} Settings;

typedef struct {
    char pad[0x1C];
    Player *player;
    s32 input;
} Menu;

extern SoundEntry D_800E5DFA[];
extern char D_450698[];

extern s32 func_8026439C(s32);
extern s8 func_804425F8(Menu *, s32, s32, s32, s32, s32);
extern void func_8044AD14(Player *, s32);
extern void func_804422BC(void *, s32, s32);
extern void func_8025DF54(s32);
extern void func_80442934(void *, Menu *, char *);

s32 func_8043E65C(void *arg0, Menu *menu, void *arg2) {
    Player *player = menu->player;
    Settings *settings = player->views5D8.view5D8_7.settings;

    if (func_8026439C(menu->input) != 0) {
        func_8044AD14(player, settings->team);
        func_8025DF54(D_800E5DFA[player->views5DC.view5E0_10.slot].sound);
        func_80442934(arg2, menu, D_450698);
        return 1;
    }
    settings->team = func_804425F8(menu, settings->team, 1, 0, 18, 1);
    func_8044AD14(player, settings->team);
    func_804422BC(arg0, 11, settings->team);
    return 0;
}

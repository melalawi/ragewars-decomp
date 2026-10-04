#include "common/types.h"
#include "span_1000/code_802301E4.h"
#include "span_C76B0/data.h"
/** Check whether a human player in mode 1 may select a weapon; when refused play the refusal sound and post a notice. */




extern SettingsE D_80142208_de;
extern char D_800FEB00[][0x190];

extern int D_800D30BC;
extern int func_8022F55C_de(char *, int);
extern void func_8025DF34_de(int);
extern int func_8022A5A0_de(void *, Player_func_802327F4_de *);
extern void func_80239908_de(void *, void *, int, int, float);

int func_802327F4_de(Player_func_802327F4_de *player) {
    SettingsE *rules;
    int result;

    if (player->shield > 0.0f) {
        return 0;
    }
    if (player->isBot != 0) {
        return 1;
    }
    rules = &D_80142208_de;
    if (rules->players != 1) {
        return 1;
    }
    result = func_8022F55C_de(D_800FEB00[player->character], player->weapon);
    if (result == 0) {
        func_8025DF34_de(0xD4D);
        if (player->hud != 0) {
            func_80239908_de((char *)rules - 0x1240, player->hud, D_800D30BC,
                          func_8022A5A0_de((char *)rules - 0x1288, player), D_800C3010_de);
        }
    }
    return result;
}

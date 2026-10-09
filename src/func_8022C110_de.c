#include "common/types_8fd754e1e915.h"
#include "span_1000/code_8022BA90.h"
/** Set up a player's starting lives from the game mode and character, then reset its respawn state. */








extern Rules_func_8022C110_de D_80142208_de;
extern Course *D_800E0630;
extern char D_800FEB00[][0x190];
extern unsigned char func_8022F454_de(char *, int);

void func_8022C110_de(Player_func_8022C110_de *player) {
    short state;

    if (D_80142208_de.started != 0) {
        if (D_80142208_de.mode == 1 && player->isBot == 0) {
            player->lives = (unsigned char)func_8022F454_de(D_800FEB00[player->character], player->info->unk80) / 2 + 1;
        }
        if (D_80142208_de.mode == 4 && player->isBot == 0 && D_800E0630 != 0) {
            player->lives = D_800E0630->laps;
        }
        state = 1;
    } else {
        state = 3;
    }
    player->state = state;
    player->timer = 0;
}

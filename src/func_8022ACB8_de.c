#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8022A274.h"
/** Return the capacity for an item slot: the player's own value, or in mode 1 the base value plus the character's bonus. */






extern unsigned char D_80142215;
extern int D_800C9198_de[];
extern Profile_func_80229554_de D_800FEB00[];

int func_8022ACB8_de(Player_func_8022ACB8_de *player, int slot) {
    int value;

    if (slot == -1) {
        return 0;
    }
    if (D_80142215 != 1) {
        value = player->loadout->capacity[slot];
    } else {
        value = D_800C9198_de[slot];
        if (player->isBot == 0) {
            if (slot == 0) {
                value += D_800FEB00[player->character].bonus0;
            } else if (slot == 1) {
                value += D_800FEB00[player->character].bonus1;
            } else if (slot == 2) {
                value += D_800FEB00[player->character].bonus2;
            }
        }
    }
    return value;
}

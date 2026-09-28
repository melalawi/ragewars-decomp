#include "basetypes.h"

/* Resets a player's eight pairs of levels at offsets 0x1D0 and 0x1F0 to D_800C70F0, clears the word
   at 0x1CC, sets 0x288 and loads 0x210 with D_800C70F4, when the player exists and is active. */
struct Player {
    s32 active;
    char pad4[0x1CC - 4];
    s32 timer;
    f32 first[8];
    f32 second[8];
    f32 level;
    char pad214[0x288 - 0x214];
    s32 ready;
};

extern f32 D_800C70F0;
extern f32 D_800C70F4;

void func_802110C4(struct Player *player) {
    u32 i;

    if (player != 0 && player->active != 0) {
        for (i = 0; i < 8; i++) {
            player->first[i] = D_800C70F0;
            player->second[i] = D_800C70F0;
        }
        player->timer = 0;
        player->ready = 1;
        player->level = D_800C70F4;
    }
}

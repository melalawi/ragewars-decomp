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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1F30_4 = 100.0f;
const float unbake_rodata_800C1F34_4 = 307.200012f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C70F0_4 = 100.0f;
const float unbake_rodata_800C70F4_4 = 307.200012f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C22A0_4 = 100.0f;
const float unbake_rodata_800C22A4_4 = 307.200012f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C22E0_4 = 100.0f;
const float unbake_rodata_800C22E4_4 = 307.200012f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2000_4 = 100.0f;
const float unbake_rodata_800C2004_4 = 307.200012f;
#endif

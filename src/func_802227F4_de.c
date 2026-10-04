#include "span_1000/code_80219480.h"
#include "types.h"




























/* Switches a player to a new state unless option D_801462E5 is on, func_8022C460_de refuses and the
   state is not 0x13 to 0x15: keeps the previous state and timer, clears flag 0x800000, runs the new
   state's entry handler from the player's state table at 0x13B4, loads the state's timer and its
   nonzero parameter at 0x86C, and returns 1 with the counter at 0x658 cleared when the handler left
   the state in place, otherwise 0. */





extern unsigned char D_801462E5;
extern s32 func_8022C460_de(void);

s32 func_802227F4_de(SharedPlayer_func_802227F4_de *player, void *arg1, s32 state) {
    void (*enter)(void *, void *);
    s32 parameter;

    if (D_801462E5 != 0 && func_8022C460_de() != 0 && state != 0x15 && state != 0x13 && state != 0x14) {
        return 0;
    }
    player->views5E8.view652_20.previous = player->views5E8.view650_16.state;
    player->views5E8.view660_26.previousTimer = player->views5E8.view664_28.timer;
    player->views5E8.view650_16.state = state;
    player->views1C.view100_9.flags &= ~0x800000;
    enter = player->views13B4.view13B4_1.states[state].enter;
    if (enter != 0) {
        enter(player, arg1);
    }
    player->views5E8.view664_28.timer = player->views13B4.view13B4_1.states[player->views5E8.view650_16.state].timer;
    parameter = player->views13B4.view13B4_1.states[player->views5E8.view650_16.state].parameter;
    if (parameter != 0) {
        player->views5E8.view86C_126.parameter = parameter;
    }
    if (player->views5E8.view650_16.state == state) {
        player->views5E8.view658_22.counter = 0;
        return 1;
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5124_4 = 3.40282347e+38f;
const float unbake_rodata_800C5128_4 = 3.14159274f;
const float unbake_rodata_800C512C_4 = 204.799988f;
const float unbake_rodata_800C5130_4 = (-3.14159274f);
const float unbake_rodata_800C5134_4 = 10430.0596f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA2E4_4 = 3.40282347e+38f;
const float unbake_rodata_800CA2E8_4 = 3.14159274f;
const float unbake_rodata_800CA2EC_4 = 204.799988f;
const float unbake_rodata_800CA2F0_4 = (-3.14159274f);
const float unbake_rodata_800CA2F4_4 = 10430.0596f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4E78_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4E3C_4 = 7.0f;
const float unbake_rodata_800C4E40_4 = 102.399994f;
const float unbake_rodata_800C4E44_4 = 1.0f;
const float unbake_rodata_800C4E48_4 = 153.599991f;
const float unbake_rodata_800C4E4C_4 = 1024.0f;
const float unbake_rodata_800C4E50_4 = 204.799988f;
const float unbake_rodata_800C4E54_4 = 0.00122070312f;
const float unbake_rodata_800C4E58_4 = 0.859999955f;
const float unbake_rodata_800C4E5C_4 = 1.0f;
const float unbake_rodata_800C4E60_4 = 0.0399999991f;
const float unbake_rodata_800C4E64_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4EC0_4 = 1.0f;
const float unbake_rodata_800C4EC4_4 = 1.0f;
const float unbake_rodata_800C4EC8_4 = 1.0f;
#endif

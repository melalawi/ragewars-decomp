/* Switches a player to a new state unless option D_801462E5 is on, func_8022C450 refuses and the
   state is not 0x13 to 0x15: keeps the previous state and timer, clears flag 0x800000, runs the new
   state's entry handler from the player's state table at 0x13B4, loads the state's timer and its
   nonzero parameter at 0x86C, and returns 1 with the counter at 0x658 cleared when the handler left
   the state in place, otherwise 0. */
#include "basetypes.h"

typedef struct {
    void (*enter)(void *, void *);
    s32 pad4;
    s32 pad8;
    s32 timer;
    s32 parameter;
    s32 pad14;
} StateInfo;

#define MATCHKIT_KNOWN_StateInfo 1
#include "../splat/types/shared/player.h"
typedef SharedPlayer Player;

extern unsigned char D_801462E5;
extern s32 func_8022C450(void);

s32 func_802227D0(Player *player, void *arg1, s32 state) {
    void (*enter)(void *, void *);
    s32 parameter;

    if (D_801462E5 != 0 && func_8022C450() != 0 && state != 0x15 && state != 0x13 && state != 0x14) {
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

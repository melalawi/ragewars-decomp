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

typedef struct {
    char pad0[0x100];
    s32 flags;
    char pad104[0x650 - 0x104];
    s16 state;
    s16 previous;
    char pad654[4];
    s32 counter;
    char pad65C[4];
    s32 previousTimer;
    s32 timer;
    char pad668[0x86C - 0x668];
    s32 parameter;
    char pad870[0x13B4 - 0x870];
    StateInfo *states;
} Player;

extern unsigned char D_801462E5;
extern s32 func_8022C450(void);

s32 func_802227D0(Player *player, void *arg1, s32 state) {
    void (*enter)(void *, void *);
    s32 parameter;

    if (D_801462E5 != 0 && func_8022C450() != 0 && state != 0x15 && state != 0x13 && state != 0x14) {
        return 0;
    }
    player->previous = player->state;
    player->previousTimer = player->timer;
    player->state = state;
    player->flags &= ~0x800000;
    enter = player->states[state].enter;
    if (enter != 0) {
        enter(player, arg1);
    }
    player->timer = player->states[player->state].timer;
    parameter = player->states[player->state].parameter;
    if (parameter != 0) {
        player->parameter = parameter;
    }
    if (player->state == state) {
        player->counter = 0;
        return 1;
    }
    return 0;
}

#include "basetypes.h"

typedef struct {
    char pad0[0x220];
    s32 unk220;
    char pad224[0xD8];
    s32 unk2FC;
} Brain;

typedef struct {
    char pad0[0x1454];
    Brain *brain;
} Player;

typedef struct {
    char pad0[0x1D8];
    Player *player;
} Actor;

extern void func_80209988(Brain *);

/* Resets a computer player's brain: clears its word at 0x220, runs func_80209988 on it, then clears its word at 0x2FC. */
void func_80212D60(Actor *arg0) {
    Brain *brain = arg0->player->brain;

    brain->unk220 = 0;
    func_80209988(brain);
    brain->unk2FC = 0;
}

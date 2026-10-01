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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4128_4 = 1.0f;
const float unbake_rodata_800C412C_4 = 1.0f;
const double unbake_rodata_800C4130_8 = 4294967296.0;
const double unbake_rodata_800C4138_8 = 4294967296.0;
const double unbake_rodata_800C4140_8 = 4294967296.0;
const double unbake_rodata_800C4148_8 = 4294967296.0;
const double unbake_rodata_800C4150_8 = 4294967296.0;
const float unbake_rodata_800C4158_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800C92B8_8 = 4294967296.0;
const double unbake_rodata_800C92C0_8 = 4294967296.0;
const double unbake_rodata_800C92C8_8 = 4294967296.0;
const double unbake_rodata_800C92D0_8 = 4294967296.0;
const double unbake_rodata_800C92D8_8 = 4294967296.0;
const float unbake_rodata_800C92E0_4 = 9.58767268e-05f;
const float unbake_rodata_800C92E4_4 = 9.58767268e-05f;
#endif

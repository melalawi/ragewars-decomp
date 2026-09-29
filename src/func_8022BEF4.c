/* Drains a player's ammunition over time: unless func_80245774 reports a pause, func_8022C450 blocks
   the player, D_8013B29C is set, bit 1 of D_801462C8 is set or the player's state is below 2, it
   advances the tick counter at 0x84C modulo the period (a fifth of it while 0x80C is set), counting
   only kind 0x20 while the value at 0x670 is positive, and on each wrap takes one from each of the
   three slot counts at 0x5F4 without going below zero. Written from its own assembly with early
   returns and a clamp-at-zero decrement. */
#include "basetypes.h"

extern s32 D_8013B29C;
extern s32 D_801462C8;
extern s32 func_80245774(void);
extern s32 func_8022C450(void *);

typedef struct func_8022BEF4_S1 func_8022BEF4_S1;
struct func_8022BEF4_S1 {
    char pad0[0x5F4];
    s16 unk5F4;
    char pad5F4[0x5F6 - 0x5F4 - sizeof(s16)];
    s16 unk5F6;
    char pad5F6[0x5F8 - 0x5F6 - sizeof(s16)];
    s16 unk5F8;
    char pad5F8[0x650 - 0x5F8 - sizeof(s16)];
    u16 unk650;
    char pad650[0x670 - 0x650 - sizeof(u16)];
    f32 unk670;
    char pad670[0x80C - 0x670 - sizeof(f32)];
    s32 unk80C;
    char pad80C[0x84C - 0x80C - sizeof(s32)];
    s32 unk84C;
};

#define DRAIN(x) ((x) = ((x) - 1 < 0) ? 0 : (x) - 1)

void func_8022BEF4(void *arg0, s32 unused, s32 period, s32 kind) {
    s32 tick;

    if (func_80245774() != 0) {
        return;
    }
    if (func_8022C450(arg0) != 0) {
        return;
    }
    if (D_8013B29C != 0) {
        return;
    }
    if (D_801462C8 & 1) {
        return;
    }
    if (((func_8022BEF4_S1 *)(arg0))->unk650 < 2) {
        return;
    }
    if (((func_8022BEF4_S1 *)(arg0))->unk80C != 0) {
        period /= 5;
    }
    if (((func_8022BEF4_S1 *)(arg0))->unk670 > 0.0f && kind != 0x20) {
        return;
    }
    tick = (((func_8022BEF4_S1 *)(arg0))->unk84C + 1) % period;
    ((func_8022BEF4_S1 *)(arg0))->unk84C = tick;
    if (tick != 0) {
        return;
    }
    DRAIN(((func_8022BEF4_S1 *)(arg0))->unk5F4);
    DRAIN(((func_8022BEF4_S1 *)(arg0))->unk5F6);
    DRAIN(((func_8022BEF4_S1 *)(arg0))->unk5F8);
}

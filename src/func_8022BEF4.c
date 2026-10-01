/* Drains a player's ammunition over time: unless func_80245774 reports a pause, func_8022C450 blocks
   the player, D_8013B29C is set, bit 1 of D_801462C8 is set or the player's state is below 2, it
   advances the tick counter at 0x84C modulo the period (a fifth of it while 0x80C is set), counting
   only kind 0x20 while the value at 0x670 is positive, and on each wrap takes one from each of the
   three slot counts at 0x5F4 without going below zero. Written from its own assembly with early
   returns and a clamp-at-zero decrement. */
#include "basetypes.h"
#include "shared/player.h"

extern s32 D_8013B29C;
extern s32 D_801462C8;
extern s32 func_80245774(void);
extern s32 func_8022C450(void *);

typedef SharedPlayer func_8022BEF4_S1;


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
    if ((u16)(((func_8022BEF4_S1 *)(arg0))->views5E8.view650_15.unk650) < 2) {
        return;
    }
    if (((func_8022BEF4_S1 *)(arg0))->views5E8.view80C_107.unk80C != 0) {
        period /= 5;
    }
    if (((func_8022BEF4_S1 *)(arg0))->views5E8.view670_30.unk670 > 0.0f && kind != 0x20) {
        return;
    }
    tick = (((func_8022BEF4_S1 *)(arg0))->views5E8.view84C_149.unk84C + 1) % period;
    ((func_8022BEF4_S1 *)(arg0))->views5E8.view84C_149.unk84C = tick;
    if (tick != 0) {
        return;
    }
    DRAIN(((func_8022BEF4_S1 *)(arg0))->views5E8.view5F4_11.unk5F4[0]);
    DRAIN(((func_8022BEF4_S1 *)(arg0))->views5E8.view5F4_11.unk5F4[1]);
    DRAIN(((func_8022BEF4_S1 *)(arg0))->views5E8.view5F4_11.unk5F4[2]);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C6178_8 = 4294967296.0;
const float unbake_rodata_800C6180_4 = 1.0f;
const float unbake_rodata_800C6184_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CC548_4 = 1.0f;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C6258_1C[] = {0x002A8BDCU, 0x002A8BE4U, 0x002A8BF0U, 0x002A8BF0U, 0x002A8BF8U, 0x002A8BF8U, 0x002A8C00U};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C6200_4 = 1.0f;
const float unbake_rodata_800C6204_4 = 0.75f;
const float unbake_rodata_800C6208_4 = 9.0f;
const float unbake_rodata_800C620C_4 = 15.0f;
const float unbake_rodata_800C6210_4 = 27.0f;
const float unbake_rodata_800C6214_4 = 1.5f;
const float unbake_rodata_800C6218_4 = 1.0f;
const float unbake_rodata_800C621C_4 = 0.400000006f;
const float unbake_rodata_800C6220_4 = 0.400000006f;
const float unbake_rodata_800C6224_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C61C0_4 = 1.0f;
#endif

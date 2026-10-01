/* Builds a player's target list: clears the ten target/score/distance slots, then records every
   other present player on another team (when team play is on) with health above one unit, along
   with its distance and score, and stores the final count. */
#include "basetypes.h"
#include "shared/player.h"
typedef SharedPlayer Player;

typedef struct TeamInfo {
    char pad[0x92];
    u8 team;
} TeamInfo;


typedef struct {
    char pad[0x24];
    s32 teamPlay;
} Settings;

typedef struct {
    Player *self;
    char pad[0x38 - 4];
    s32 count;
    Player *targets[10];
    char pad2[0x6C - 0x64];
    s32 scores[10];
    s32 distances[10];
} TargetList;

extern u8 D_80145040[];
extern void *func_8022A5E4(void *, s32);
extern f32 func_80272768(void *, void *);
extern s32 func_8021035C(void *, s32);

typedef struct func_80210230_S1 func_80210230_S1;
typedef struct func_80210230_S2 func_80210230_S2;
struct func_80210230_S1 {
    char pad0[0x1860];
    Settings unk1860;
};
struct func_80210230_S2 {
    char pad0[0x8];
    char unk8;
};

s32 func_80210230(TargetList *self) {
    s32 i;
    s32 count;
    u8 *base;
    Settings *settings;
    Player *candidate;

    for (i = 0; i < 10; i++) {
        self->targets[i] = 0;
        self->scores[i] = 0;
        self->distances[i] = -1;
    }

    count = 0;
    i = 0;
    base = D_80145040;
    settings = &((func_80210230_S1 *)(base))->unk1860;

    for (; i < 8; i++) {
        candidate = func_8022A5E4(base, i);
        if (candidate == 0) {
            continue;
        }
        if (candidate == self->self) {
            continue;
        }
        if (settings->teamPlay) {
            if (candidate->views5D8.view5D8_3.teamInfo->team == self->self->views5D8.view5D8_3.teamInfo->team) {
                continue;
            }
        }
        if ((candidate->views5E4.view5E4_2.health >> 8) <= 0) {
            continue;
        }

        self->targets[count] = candidate;
        self->distances[count] = (s32)func_80272768(&((func_80210230_S2 *)(self->self))->unk8, (u8 *)candidate + 8);
        self->scores[count] = func_8021035C(self, count);
        count++;
    }

    self->count = count;
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US_REV1)
const float unbake_rodata_800C905C_4 = 1.26999998f;
const float unbake_rodata_800C9060_4 = 2.14748365e+09f;
const float unbake_rodata_800C9064_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3F54_4 = 1.0f;
const float unbake_rodata_800C3F58_4 = 0.436332345f;
const float unbake_rodata_800C3F5C_4 = 0.163624629f;
const float unbake_rodata_800C3F60_4 = 0.375f;
const float unbake_rodata_800C3F64_4 = 0.436332345f;
const float unbake_rodata_800C3F68_4 = 0.163624629f;
const float unbake_rodata_800C3F6C_4 = 0.375f;
const float unbake_rodata_800C3F70_4 = 25.0f;
const float unbake_rodata_800C3F74_4 = 18.75f;
const float unbake_rodata_800C3F78_4 = 0.75f;
const float unbake_rodata_800C3F7C_4 = 0.5f;
const float unbake_rodata_800C3F80_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3F74_4 = 1.0f;
const float unbake_rodata_800C3F78_4 = 1.0f;
const float unbake_rodata_800C3F7C_4 = 1.0f;
const float unbake_rodata_800C3F80_4 = 0.75f;
const float unbake_rodata_800C3F84_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3F38_4 = 3072.0f;
const float unbake_rodata_800C3F3C_4 = 0.5f;
const float unbake_rodata_800C3F40_4 = 0.25f;
const float unbake_rodata_800C3F44_4 = 0.5f;
const float unbake_rodata_800C3F48_4 = 1.0f;
const float unbake_rodata_800C3F4C_4 = 1.0f;
#endif

/* Runs a computer player's think step: when it has reached its goal node or the goal at 0x22C is past
   the node count D_8013B368, it picks a new goal as func_802136EC does (func_80213340 for a player
   flagged at 0x94 in mode 12, otherwise up to ten random nodes of D_8013B364 not flagged 0x400); then
   it counts down the jump timer at 0x320 and on expiry makes its player jump (bit 0x10 at 0x6B0)
   unless the player is in state 0xF, holds input bits 0x3000 or the bot is busy at 0x314, rerolls an
   expired timer to 15 times 3 to 9 frames, and runs func_80211020, func_80208410 and func_80208AAC. */
#include "basetypes.h"

extern s32 D_8013B364;
extern s32 D_8013B368;
extern void func_80213340(void *);
extern s32 func_80274544(void);
extern void *func_8020C994(void *, s32);
extern void func_80211020(void *);
extern void func_80208410(void *);
extern void func_80208AAC(void *);

typedef struct func_80213500_S1 func_80213500_S1;
typedef struct func_80213500_S2 func_80213500_S2;
typedef struct func_80213500_S3 func_80213500_S3;
typedef struct func_80213500_S4 func_80213500_S4;
typedef struct func_80213500_S5 func_80213500_S5;
typedef struct func_80213500_S6 func_80213500_S6;
typedef struct func_80213500_S7 func_80213500_S7;
struct func_80213500_S1 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_80213500_S2 {
    char pad0[0x1454];
    void* unk1454;
};
struct func_80213500_S3 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0xC - 0x4 - sizeof(s32)];
    s32 unkC;
    char padC[0x22C - 0xC - sizeof(s32)];
    s32 unk22C;
    char pad22C[0x314 - 0x22C - sizeof(s32)];
    s32 unk314;
    char pad314[0x320 - 0x314 - sizeof(s32)];
    s32 unk320;
};
struct func_80213500_S4 {
    char pad0[0x5D8];
    void* unk5D8;
};
struct func_80213500_S5 {
    char pad0[0x80];
    s8 unk80;
    char pad80[0x94 - 0x80 - sizeof(s8)];
    u8 unk94;
};
struct func_80213500_S6 {
    char pad0[0xC];
    u16 unkC;
};
struct func_80213500_S7 {
    char pad0[0x38];
    s32 unk38;
    char pad38[0x650 - 0x38 - sizeof(s32)];
    s16 unk650;
    char pad650[0x6B0 - 0x650 - sizeof(s16)];
    s32 unk6B0;
};

void func_80213500(void *arg0) {
    void *actor = ((func_80213500_S2 *)(((func_80213500_S1 *)(arg0))->unk1D8))->unk1454;
    void *player;
    s32 busy;
    s32 held;
    s32 state;

    if (((func_80213500_S3 *)(actor))->unk4 == ((func_80213500_S3 *)(actor))->unk22C
        || !(((func_80213500_S3 *)(actor))->unk22C < D_8013B368)) {
        void *data = ((func_80213500_S4 *)(*(void **) actor))->unk5D8;
        if (((func_80213500_S5 *)(data))->unk94 && ((func_80213500_S5 *)(data))->unk80 == 12) {
            func_80213340(actor);
        } else {
            s32 global_count = D_8013B368;
            s32 *table = &D_8013B364;
            s32 tries = 0;
            s32 candidate;

            if (global_count >= 2) {
                candidate = ((func_80213500_S3 *)(actor))->unk22C;
loop:
                if (tries < 10) {
                    candidate = func_80274544() % table[1];
                    if (((func_80213500_S6 *)(func_8020C994(table, candidate)))->unkC & 0x400) {
                        candidate = ((func_80213500_S3 *)(actor))->unk22C;
                    }
                    tries++;
                    if (candidate != ((func_80213500_S3 *)(actor))->unk22C) {
                        goto store_both;
                    }
                    goto loop;
                } else {
                    ((func_80213500_S3 *)(actor))->unk22C = candidate;
                    goto store_c;
                }
            } else {
                candidate = 1;
            }
store_both:
            ((func_80213500_S3 *)(actor))->unk22C = candidate;
store_c:
            ((func_80213500_S3 *)(actor))->unkC = candidate;
        }
    }
    if (--((func_80213500_S3 *)(actor))->unk320 == 0) {
        player = *(void **) actor;
        state = ((func_80213500_S7 *)(player))->unk650 != 0xF;
        busy = ((func_80213500_S3 *)(actor))->unk314 != 0;
        held = (((func_80213500_S7 *)(player))->unk38 & 0x3000) != 0;
        if (state && !held && !busy) {
            ((func_80213500_S7 *)(player))->unk6B0 |= 0x10;
        }
    }
    if (((func_80213500_S3 *)(actor))->unk320 < 0) {
        ((func_80213500_S3 *)(actor))->unk320 = (func_80274544() % 7 + 3) * 15;
    }
    func_80211020(actor);
    func_80208410(actor);
    func_80208AAC(actor);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C424C_4 = 16.0f;
const float unbake_rodata_800C4250_4 = 0.00392156886f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C940C_4 = 16.0f;
const float unbake_rodata_800C9410_4 = 0.00392156886f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C43CC_4 = 1.0f;
const float unbake_rodata_800C43D0_4 = (-2000.0f);
const float unbake_rodata_800C43D4_4 = 2000.0f;
const float unbake_rodata_800C43D8_4 = (-1.0f);
const float unbake_rodata_800C43DC_4 = 1.0f;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C43C0_8 = 4294967296.0;
const double unbake_rodata_800C43C8_8 = 4294967296.0;
const double unbake_rodata_800C43D0_8 = 4294967296.0;
const double unbake_rodata_800C43D8_8 = 4294967296.0;
const double unbake_rodata_800C43E0_8 = 4294967296.0;
#elif defined(VERSION_DE)
const float unbake_rodata_800C42F0_4 = 0.25f;
#endif

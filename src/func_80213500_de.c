#include "common/types.h"
#include "span_1000/code_80212D78.h"
#include "span_1000/types.h"
#include "types.h"
/* Runs a computer player's think step: when it has reached its goal node or the goal at 0x22C is past
   the node count D_8013B368, it picks a new goal as func_802136EC_de does (func_80213340_de for a player
   flagged at 0x94 in mode 12, otherwise up to ten random nodes of D_8013B364 not flagged 0x400); then
   it counts down the jump timer at 0x320 and on expiry makes its player jump (bit 0x10 at 0x6B0)
   unless the player is in state 0xF, holds input bits 0x3000 or the bot is busy at 0x314, rerolls an
   expired timer to 15 times 3 to 9 frames, and runs func_80211020_de, func_80208410_de and func_80208AAC_de. */

extern s32 D_801372A4;

extern void func_80213340_de(void *);
extern s32 func_802744D4_de(void);
extern void *func_8020C994_de(void *, s32);
extern void func_80211020_de(void *);
extern void func_80208410_de(void *);
extern void func_80208AAC_de(void *);
















void func_80213500_de(void *arg0) {
    void *actor = ((func_80212828_S2 *)(((func_8020A028_S3 *)(arg0))->unk1D8))->unk1454;
    void *player;
    s32 busy;
    s32 held;
    s32 state;

    if (((func_80213500_S3 *)(actor))->unk4 == ((func_80213500_S3 *)(actor))->unk22C
        || !(((func_80213500_S3 *)(actor))->unk22C < D_801372A8)) {
        void *data = ((func_80209B64_S4 *)(*(void **) actor))->unk5D8;
        if (((Record_func_80208158_de *)(data))->display && ((Record_func_80208158_de *)(data))->kind == 12) {
            func_80213340_de(actor);
        } else {
            s32 global_count = D_801372A8;
            s32 *table = &D_801372A4;
            s32 tries = 0;
            s32 candidate;

            if (global_count >= 2) {
                candidate = ((func_80213500_S3 *)(actor))->unk22C;
loop:
                if (tries < 10) {
                    candidate = func_802744D4_de() % table[1];
                    if (((func_8020CA10_S2 *)(func_8020C994_de(table, candidate)))->unkC & 0x400) {
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
        ((func_80213500_S3 *)(actor))->unk320 = (func_802744D4_de() % 7 + 3) * 15;
    }
    func_80211020_de(actor);
    func_80208410_de(actor);
    func_80208AAC_de(actor);
}

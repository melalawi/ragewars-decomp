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

void func_80213500(void *arg0) {
    void *actor = *(void **) ((char *) *(void **) ((char *) arg0 + 0x1D8) + 0x1454);
    void *player;
    s32 busy;
    s32 held;
    s32 state;

    if (*(s32 *) ((char *) actor + 0x4) == *(s32 *) ((char *) actor + 0x22C)
        || !(*(s32 *) ((char *) actor + 0x22C) < D_8013B368)) {
        void *data = *(void **) ((char *) *(void **) actor + 0x5D8);
        if (*(u8 *) ((char *) data + 0x94) && *(s8 *) ((char *) data + 0x80) == 12) {
            func_80213340(actor);
        } else {
            s32 global_count = D_8013B368;
            s32 *table = &D_8013B364;
            s32 tries = 0;
            s32 candidate;

            if (global_count >= 2) {
                candidate = *(s32 *) ((char *) actor + 0x22C);
loop:
                if (tries < 10) {
                    candidate = func_80274544() % table[1];
                    if (*(u16 *) ((char *) func_8020C994(table, candidate) + 0xC) & 0x400) {
                        candidate = *(s32 *) ((char *) actor + 0x22C);
                    }
                    tries++;
                    if (candidate != *(s32 *) ((char *) actor + 0x22C)) {
                        goto store_both;
                    }
                    goto loop;
                } else {
                    *(s32 *) ((char *) actor + 0x22C) = candidate;
                    goto store_c;
                }
            } else {
                candidate = 1;
            }
store_both:
            *(s32 *) ((char *) actor + 0x22C) = candidate;
store_c:
            *(s32 *) ((char *) actor + 0xC) = candidate;
        }
    }
    if (--*(s32 *) ((char *) actor + 0x320) == 0) {
        player = *(void **) actor;
        state = *(s16 *) ((char *) player + 0x650) != 0xF;
        busy = *(s32 *) ((char *) actor + 0x314) != 0;
        held = (*(s32 *) ((char *) player + 0x38) & 0x3000) != 0;
        if (state && !held && !busy) {
            *(s32 *) ((char *) player + 0x6B0) |= 0x10;
        }
    }
    if (*(s32 *) ((char *) actor + 0x320) < 0) {
        *(s32 *) ((char *) actor + 0x320) = (func_80274544() % 7 + 3) * 15;
    }
    func_80211020(actor);
    func_80208410(actor);
    func_80208AAC(actor);
}

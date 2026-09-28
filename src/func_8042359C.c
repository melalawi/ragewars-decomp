#include "basetypes.h"

/* Dispatches event arg1 through this file's 12-byte handler table, whose rows hold an event at D_800E451C, an actor kind at D_800E4520 and a handler at D_800E4524: the first row whose event equals arg1 and whose kind equals the actor's halfword kind at 0xC, or is the wildcard 0x7530, receives all five arguments and its result is returned; with no such row, or an empty table, the result is zero. Adapted from func_802A2B50. */

typedef s32 (*Handler8042359C)(void *, s32, s32, s32, s32);

extern s32 D_800E451C;
extern s32 D_800E4520;
extern Handler8042359C D_800E4524;

s32 func_8042359C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    char *entry;
    s32 offset;
    s32 wildcard;
    s32 actor_kind;
    s32 table_kind;

    if (D_800E4524 != 0) {
        wildcard = 0x7530;
        entry = (char *)&D_800E4524;
        offset = 0;
        do {
            if (*(s32 *)((char *)&D_800E451C + offset) == arg1) {
                actor_kind = *(s16 *)((char *)arg0 + 0xC);
                table_kind = *(s32 *)((char *)&D_800E4520 + offset);
                if ((table_kind == actor_kind) || (table_kind == wildcard)) {
                    return (*(Handler8042359C *)entry)(arg0, arg1, arg2, arg3, arg4);
                }
            }
            entry += 0xC;
            offset += 0xC;
        } while (*(Handler8042359C *)entry != 0);
    }
    return 0;
}

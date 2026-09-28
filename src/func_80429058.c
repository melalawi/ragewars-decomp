#include "basetypes.h"

/* Dispatches event arg1 through this file's 12-byte handler table, whose rows hold an event at D_800E4D84, an actor kind at D_800E4D88 and a handler at D_800E4D8C: the first row whose event equals arg1 and whose kind equals the actor's halfword kind at 0xC, or is the wildcard 0x7530, receives all five arguments and its result is returned; with no such row, or an empty table, the result is zero. Adapted from func_802A2B50. */

typedef s32 (*Handler80429058)(void *, s32, s32, s32, s32);

extern s32 D_800E4D84;
extern s32 D_800E4D88;
extern Handler80429058 D_800E4D8C;

s32 func_80429058(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    char *entry;
    s32 offset;
    s32 wildcard;
    s32 actor_kind;
    s32 table_kind;

    if (D_800E4D8C != 0) {
        wildcard = 0x7530;
        entry = (char *)&D_800E4D8C;
        offset = 0;
        do {
            if (*(s32 *)((char *)&D_800E4D84 + offset) == arg1) {
                actor_kind = *(s16 *)((char *)arg0 + 0xC);
                table_kind = *(s32 *)((char *)&D_800E4D88 + offset);
                if ((table_kind == actor_kind) || (table_kind == wildcard)) {
                    return (*(Handler80429058 *)entry)(arg0, arg1, arg2, arg3, arg4);
                }
            }
            entry += 0xC;
            offset += 0xC;
        } while (*(Handler80429058 *)entry != 0);
    }
    return 0;
}

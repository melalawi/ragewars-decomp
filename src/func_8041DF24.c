#include "basetypes.h"

/* Dispatches event arg1 through this file's 12-byte handler table, whose rows hold an event at D_800E3724, an actor kind at D_800E3728 and a handler at D_800E372C: the first row whose event equals arg1 and whose kind equals the actor's halfword kind at 0xC, or is the wildcard 0x7530, receives all five arguments and its result is returned; with no such row, or an empty table, the result is zero. Adapted from func_802A2B50. */

typedef s32 (*Handler8041DF24)(void *, s32, s32, s32, s32);

extern s32 D_800E3724;
extern s32 D_800E3728;
extern Handler8041DF24 D_800E372C;

s32 func_8041DF24(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    char *entry;
    s32 offset;
    s32 wildcard;
    s32 actor_kind;
    s32 table_kind;

    if (D_800E372C != 0) {
        wildcard = 0x7530;
        entry = (char *)&D_800E372C;
        offset = 0;
        do {
            if (*(s32 *)((char *)&D_800E3724 + offset) == arg1) {
                actor_kind = *(s16 *)((char *)arg0 + 0xC);
                table_kind = *(s32 *)((char *)&D_800E3728 + offset);
                if ((table_kind == actor_kind) || (table_kind == wildcard)) {
                    return (*(Handler8041DF24 *)entry)(arg0, arg1, arg2, arg3, arg4);
                }
            }
            entry += 0xC;
            offset += 0xC;
        } while (*(Handler8041DF24 *)entry != 0);
    }
    return 0;
}

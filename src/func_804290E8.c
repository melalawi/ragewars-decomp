#include "basetypes.h"

/* Dispatches event arg1 through this file's 12-byte handler table, whose rows hold an event at D_800E4E20, an actor kind at D_800E4E24 and a handler at D_800E4E28: the first row whose event equals arg1 and whose kind equals the actor's halfword kind at 0xC, or is the wildcard 0x7530, receives all five arguments and its result is returned; with no such row, or an empty table, the result is zero. Adapted from func_802A2B50. */

typedef s32 (*Handler804290E8)(void *, s32, s32, s32, s32);

typedef struct { s32 value; char pad[8]; } FieldRow;
extern FieldRow D_800E4E20[];
extern FieldRow D_800E4E24[];
extern Handler804290E8 D_800E4E28;

typedef struct func_804290E8_S1 func_804290E8_S1;
struct func_804290E8_S1 {
    char pad0[0xC];
    s16 unkC;
};

s32 func_804290E8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    char *entry;
    s32 index;
    s32 wildcard;
    s32 actor_kind;
    s32 table_kind;

    if (D_800E4E28 != 0) {
        wildcard = 0x7530;
        entry = (char *)&D_800E4E28;
        index = 0;
        do {
            if (D_800E4E20[index].value == arg1) {
                actor_kind = ((func_804290E8_S1 *)(arg0))->unkC;
                table_kind = D_800E4E24[index].value;
                if ((table_kind == actor_kind) || (table_kind == wildcard)) {
                    return (*(Handler804290E8 *)entry)(arg0, arg1, arg2, arg3, arg4);
                }
            }
            entry += 0xC;
            index++;
        } while (*(Handler804290E8 *)entry != 0);
    }
    return 0;
}

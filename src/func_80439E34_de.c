#include "common/types.h"
#include "span_16E000/code_80439930.h"
#include "types.h"

/* Dispatches event arg1 through this file's 12-byte handler table, whose rows hold an event at D_800E59B0, an actor kind at D_800E59B4 and a handler at D_800E59B8: the first row whose event equals arg1 and whose kind equals the actor's halfword kind at 0xC, or is the wildcard 0x7530, receives all five arguments and its result is returned; with no such row, or an empty table, the result is zero. Adapted from func_802A1B50_de. */

typedef s32 (*Handler8043A014)(void *, s32, s32, s32, s32);


extern FieldRow D_800E1960[];
extern FieldRow D_800E1964[];
extern Handler8043A014 D_800E1968;




s32 func_80439E34_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    char *entry;
    s32 index;
    s32 wildcard;
    s32 actor_kind;
    s32 table_kind;

    if (D_800E1968 != 0) {
        wildcard = 0x7530;
        entry = (char *)&D_800E1968;
        index = 0;
        do {
            if (D_800E1960[index].value == arg1) {
                actor_kind = ((func_8021C9B4_S3 *)(arg0))->unkC;
                table_kind = D_800E1964[index].value;
                if ((table_kind == actor_kind) || (table_kind == wildcard)) {
                    return (*(Handler8043A014 *)entry)(arg0, arg1, arg2, arg3, arg4);
                }
            }
            entry += 0xC;
            index++;
        } while (*(Handler8043A014 *)entry != 0);
    }
    return 0;
}

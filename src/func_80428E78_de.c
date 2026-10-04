#include "common/types.h"
#include "span_16E000/code_804288E0.h"
#include "types.h"

/* Dispatches event arg1 through this file's 12-byte handler table, whose rows hold an event at D_800E4D84, an actor kind at D_800E4D88 and a handler at D_800E4D8C: the first row whose event equals arg1 and whose kind equals the actor's halfword kind at 0xC, or is the wildcard 0x7530, receives all five arguments and its result is returned; with no such row, or an empty table, the result is zero. Adapted from func_802A1B50_de. */

typedef s32 (*Handler80429058)(void *, s32, s32, s32, s32);


extern FieldRow D_800E0D34[];
extern FieldRow D_800E0D38[];
extern Handler80429058 D_800E0D3C_de;




s32 func_80428E78_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    char *entry;
    s32 index;
    s32 wildcard;
    s32 actor_kind;
    s32 table_kind;

    if (D_800E0D3C_de != 0) {
        wildcard = 0x7530;
        entry = (char *)&D_800E0D3C_de;
        index = 0;
        do {
            if (D_800E0D34[index].value == arg1) {
                actor_kind = ((func_8021C9B4_S3 *)(arg0))->unkC;
                table_kind = D_800E0D38[index].value;
                if ((table_kind == actor_kind) || (table_kind == wildcard)) {
                    return (*(Handler80429058 *)entry)(arg0, arg1, arg2, arg3, arg4);
                }
            }
            entry += 0xC;
            index++;
        } while (*(Handler80429058 *)entry != 0);
    }
    return 0;
}

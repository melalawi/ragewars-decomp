#include "common/types_1dc8418c21db.h"
#include "common/types_8fd754e1e915.h"
#include "span_16E000/code_804379C8.h"
#include "types.h"

/* Calls func_8029973C_de with the arguments it was given and returns zero. */
extern void func_8029973C_de();

s32 func_80438E5C_de(void) {
    func_8029973C_de();
    return 0;
}

/* Dispatches event arg1 through this file's 12-byte handler table, whose rows hold an event at D_800E5834, an actor kind at D_800E5838 and a handler at D_800E583C: the first row whose event equals arg1 and whose kind equals the actor's halfword kind at 0xC, or is the wildcard 0x7530, receives all five arguments and its result is returned; with no such row, or an empty table, the result is zero. Adapted from func_802A1B50_de. */

typedef s32 (*Handler8043905C)(void *, s32, s32, s32, s32);


extern FieldRow D_800E17E4_de[];
extern FieldRow D_800E17E8[];
extern Handler8043905C D_800E17EC;




s32 func_80438E7C_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    char *entry;
    s32 index;
    s32 wildcard;
    s32 actor_kind;
    s32 table_kind;

    if (D_800E17EC != 0) {
        wildcard = 0x7530;
        entry = (char *)&D_800E17EC;
        index = 0;
        do {
            if (D_800E17E4_de[index].value == arg1) {
                actor_kind = ((func_8021C9B4_S3 *)(arg0))->unkC;
                table_kind = D_800E17E8[index].value;
                if ((table_kind == actor_kind) || (table_kind == wildcard)) {
                    return (*(Handler8043905C *)entry)(arg0, arg1, arg2, arg3, arg4);
                }
            }
            entry += 0xC;
            index++;
        } while (*(Handler8043905C *)entry != 0);
    }
    return 0;
}

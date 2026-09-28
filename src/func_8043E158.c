#include "basetypes.h"

/** Count how many of the 4 flagged entries in D_8010F328 also have a nonzero unk148 in the
 *  matching D_801462C8 record, returning 0 early on the first flagged entry that does not. */
extern s32 D_8010F328[];
extern char D_801462C8[];

s32 func_8043E158(void) {
    char *var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_v1;

    var_a2 = 0;
    var_a1 = 0;
    var_a0 = D_801462C8;
    var_v1 = 0;
loop_1:
    if (*(s32 *) ((char *) D_8010F328 + var_v1) != 0) {
        var_a2 += 1;
        if (*(u8 *) (var_a0 + 0x148) == 0) {
            return 0;
        }
    }
    var_a0 += 0x96;
    var_a1 += 1;
    var_v1 += 0x224;
    if (var_a1 >= 4) {
        return var_a2;
    }
    goto loop_1;
}

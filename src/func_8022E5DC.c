#include "basetypes.h"

typedef struct func_8022E5DC_S1 func_8022E5DC_S1;
struct func_8022E5DC_S1 {
    char pad0[0x650];
    s16 unk650;
    char pad650[0x86C - 0x650 - sizeof(s16)];
    s32 unk86C;
};

/* Returns whether a record in state 3 carries type 0x5E2A or 0x5E5A, or a type in the range 0x7DF to 0x7E3. */

s32 func_8022E5DC(void *arg0) {
    s32 type;

    if (((func_8022E5DC_S1 *)(arg0))->unk650 == 3) {
        type = ((func_8022E5DC_S1 *)(arg0))->unk86C;
        if (type == 0x5E2A || type == 0x5E5A) {
            return 1;
        }
    }
    return ((func_8022E5DC_S1 *)(arg0))->unk650 == 3 && ((func_8022E5DC_S1 *)(arg0))->unk86C >= 0x7DF && ((func_8022E5DC_S1 *)(arg0))->unk86C < 0x7E4;
}

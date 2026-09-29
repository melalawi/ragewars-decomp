#include "basetypes.h"

typedef struct func_8022E630_S1 func_8022E630_S1;
struct func_8022E630_S1 {
    char pad0[0x650];
    s16 unk650;
    char pad650[0x86C - 0x650 - sizeof(s16)];
    s32 unk86C;
};

/* Returns whether a record in state 3 carries type 0x5E29 or 0x5E59, or a type in the range 0x7DA to 0x7DE. Adapted from func_8022E5DC with the type constants changed. */

s32 func_8022E630(void *arg0) {
    s32 type;

    if (((func_8022E630_S1 *)(arg0))->unk650 == 3) {
        type = ((func_8022E630_S1 *)(arg0))->unk86C;
        if (type == 0x5E29 || type == 0x5E59) {
            return 1;
        }
    }
    return ((func_8022E630_S1 *)(arg0))->unk650 == 3 && ((func_8022E630_S1 *)(arg0))->unk86C >= 0x7DA && ((func_8022E630_S1 *)(arg0))->unk86C < 0x7DF;
}

#include "basetypes.h"

/* Returns whether a record in state 3 carries type 0x5E2A or 0x5E5A, or a type in the range 0x7DF to 0x7E3. */

s32 func_8022E5DC(void *arg0) {
    s32 type;

    if (*(s16 *)((char *)arg0 + 0x650) == 3) {
        type = *(s32 *)((char *)arg0 + 0x86C);
        if (type == 0x5E2A || type == 0x5E5A) {
            return 1;
        }
    }
    return *(s16 *)((char *)arg0 + 0x650) == 3 && *(s32 *)((char *)arg0 + 0x86C) >= 0x7DF && *(s32 *)((char *)arg0 + 0x86C) < 0x7E4;
}

#include "basetypes.h"

/* Returns whether a record in state 3 carries type 0x5E29 or 0x5E59, or a type in the range 0x7DA to 0x7DE. Adapted from func_8022E5DC with the type constants changed. */

s32 func_8022E630(void *arg0) {
    s32 type;

    if (*(s16 *)((char *)arg0 + 0x650) == 3) {
        type = *(s32 *)((char *)arg0 + 0x86C);
        if (type == 0x5E29 || type == 0x5E59) {
            return 1;
        }
    }
    return *(s16 *)((char *)arg0 + 0x650) == 3 && *(s32 *)((char *)arg0 + 0x86C) >= 0x7DA && *(s32 *)((char *)arg0 + 0x86C) < 0x7DF;
}

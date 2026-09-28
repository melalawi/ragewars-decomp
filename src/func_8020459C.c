#include "basetypes.h"

s32 func_8020459C(void *arg0) {
    s32 val;

    val = *(s16 *) ((char *) (*(void **) ((char *) arg0 + 0x18)) + 0x20);
    if (val != 0) {
        *(s32 *) ((char *) arg0 + 0x100) = *(s32 *) ((char *) arg0 + 0x100) | 0x2000;
    } else {
        *(s32 *) ((char *) arg0 + 0x100) = *(s32 *) ((char *) arg0 + 0x100) & ~0x2000;
    }
    return val;
}

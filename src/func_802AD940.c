#include "basetypes.h"

extern char D_800D3230;

void *func_802AD940(s32 arg0) {
    char *v1;
    s32 i;

    v1 = &D_800D3230;
    i = 5;
    do {
        i -= 1;
        if (*(s16 *)(v1 + 4) != arg0) {
            v1 += 0x14;
        } else {
            return v1;
        }
    } while (i != -1);
    return 0;
}

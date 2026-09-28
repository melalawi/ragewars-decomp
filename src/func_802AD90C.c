#include "basetypes.h"

extern char D_800D31D0;

void *func_802AD90C(s32 arg0) {
    char *v1;
    s32 i;

    v1 = &D_800D31D0;
    i = 3;
    do {
        i -= 1;
        if (*(s16 *)(v1 + 4) != arg0) {
            v1 += 0x18;
        } else {
            return v1;
        }
    } while (i != -1);
    return 0;
}

#include "basetypes.h"

extern int D_206018;
extern int D_800CD79C;

void func_80205EC4(void *arg0, void *arg1) {
    void *inner = *(void **) ((char *) arg0 + 0x18);

    *(void **) ((char *) arg1 + 0x2C) = &D_800CD79C;
    *(void **) ((char *) arg1 + 0x108) = &D_206018;
    if ((*(u16 *) ((char *) arg0 + 0xE4) == 0x644) ||
        (*(s32 *) ((char *) inner + 0x14) & 8)) {
        *(s32 *) ((char *) arg0 + 0x100) &= ~0x2000;
    }
}

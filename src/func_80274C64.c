#include "basetypes.h"

extern f32 func_802BC380(f32);
extern char D_800C9A90;

void func_80274C64(void *arg0)
{
    char *o = (char *)arg0;
    f32 magSq;
    f32 mag;
    f32 zOut;

    magSq = (*(f32 *)(o + 0x18) * *(f32 *)(o + 0x18)) +
            (*(f32 *)(o + 0x20) * *(f32 *)(o + 0x20));
    zOut = 0.0f;
    if (magSq != 0.0f) {
        mag = func_802BC380(magSq);
        magSq = *(f32 *)&D_800C9A90 / mag;
        *(f32 *)(o + 0x24) = *(f32 *)(o + 0x18) * magSq;
        *(f32 *)(o + 0x28) = *(f32 *)(o + 0x1C) * magSq;
        zOut = *(f32 *)(o + 0x20) * magSq;
    } else {
        *(f32 *)(o + 0x24) = 0.0f;
        *(f32 *)(o + 0x28) = 0.0f;
    }
    *(f32 *)(o + 0x2C) = zOut;
}

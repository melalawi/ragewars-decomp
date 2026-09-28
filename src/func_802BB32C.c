#include "basetypes.h"

extern s32 func_802C0CB0(s32);

void *func_802BB32C(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    char *o = (char *) arg0;
    char *d = (char *) arg3;
    void *ret;
    s32 a1;

    a1 = arg1 & 0xFFFF;
    *(s32 *) (d + 0x0) = a1 | 0x08000000;
    *(s32 *) (d + 0x4) = (a1 << 0x10) | ((arg2 * 2) & 0xFFFF);
    *(s32 *) (d + 0x8) = 0x0B000020;
    *(s32 *) (d + 0xC) = func_802C0CB0((s32) (o + 8));
    {
        s32 c2 = 0x0E000000;
        s32 b2f = *(u8 *) (o + 0x2F);
        s32 h2 = *(u16 *) (o + 2);
        *(s32 *) (d + 0x10) = (b2f << 0x10) | (h2 | c2);
    }
    ret = d + 0x18;
    *(s32 *) (d + 0x14) = func_802C0CB0(*(s32 *) (o + 0x28));
    *(s32 *) (o + 0x2C) = 0;
    return ret;
}

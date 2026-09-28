#include "basetypes.h"

extern void func_802720EC(void *arg0, void *arg1, s32 arg2);

void func_802909F4(void *arg0, void *arg1) {
    s32 *src = (s32 *)arg1;
    s32 a = src[0];
    s32 b = src[1];
    s32 c = src[2];
    *(s32 *)((char *)arg0 + 0x14) = a;
    *(s32 *)((char *)arg0 + 0x18) = b;
    *(s32 *)((char *)arg0 + 0x1C) = c;
    func_802720EC((char *)arg0 + 0x14, arg1, c);
}

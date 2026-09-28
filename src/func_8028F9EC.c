#include "basetypes.h"

extern void func_802BF9B0(s32 arg0);

s32 func_8028F9EC(void *arg0, void *arg1) {
    if ((*(s32 *)((char *)arg1 + 4)) & 3) {
        return 0;
    }
    if ((*(s32 *)((char *)arg1 + 0x10)) != 1) {
        return 1;
    }
    if (((*(s32 *)((char *)arg1 + 8)) & 0x60) != 0x60) {
        return 1;
    }
    func_802BF9B0(*(s32 *)((char *)arg1 + 0xC));
    return 1;
}

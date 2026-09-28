#include "basetypes.h"

extern s32 func_8025DF54(s32);

s32 func_802A2E5C(void *arg0) {
    void *p;

    *(s32 *)((char *)arg0 + 0x5C) = 2;
    *(s32 *)((char *)arg0 + 0x48) = 0;
    func_8025DF54(0xE74);
    p = *(void **)((char *)arg0 + 8);
    if (p != 0) {
        do {
            if (*(u16 *)((char *)p + 0xE) != 8) {
                *(s8 *)((char *)p + 0x10) = 0x64;
            }
            p = *(void **)((char *)p + 4);
        } while (p != 0);
    }
    return 0;
}

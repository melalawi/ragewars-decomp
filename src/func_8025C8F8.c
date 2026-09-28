#include "basetypes.h"

extern void func_80255C40(s32 *, s32, s32);
extern s32 func_80255CB4(void *, s32);

void func_8025C8F8(void *arg0, void *arg1, s32 arg2) {
    s32 i;

    func_80255C40(arg0, 0, 4);
    func_80255C40((char *) arg0 + 0x14, 0, 4);
    i = 0;
    if (arg2 > 0) {
        do {
            func_80255CB4(arg0, arg1);
            i += 1;
            arg1 = (char *) arg1 + 0x20;
        } while (i < arg2);
    }
    *(s32 *) ((char *) arg0 + 0x28) = 0;
}

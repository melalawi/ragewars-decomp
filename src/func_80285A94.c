#include "basetypes.h"

extern u32 func_802C2020(void);
extern void func_80255C40(s32 *, s32, s32);
extern s32 func_80255CB4(void *, s32);
extern void func_802C2040(u32);

void func_80285A94(void *arg0, void *arg1, s32 arg2) {
    s32 i;
    void *p;
    u32 saved;

    p = arg1;
    saved = func_802C2020();
    func_80255C40(arg0, 0, 4);
    func_80255C40((char *) arg0 + 0x14, 0, 4);
    i = 0;
    if (arg2 > 0) {
        do {
            func_80255CB4(arg0, p);
            i += 1;
            p = (char *) p + 0x3C;
        } while (i < arg2);
    }
    *(s32 *) ((char *) arg0 + 0x28) = 0;
    func_802C2040(saved);
}

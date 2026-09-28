#include "basetypes.h"

extern void func_80255E78(void *, s32);
extern s32 func_80255C58(void *, s32);
extern char D_8010510C;

void func_80254E28(s32 arg0, void *arg1) {
    func_80255E78(&D_8010510C, arg1);
    *(s32 *)((char *)arg1 + 0x10) = 0;
    func_80255C58((char *)&D_8010510C - 0x14, (s32) arg1);
}

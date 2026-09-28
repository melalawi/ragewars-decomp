#include "basetypes.h"

extern void func_80255E78(void *, s32);
extern s32 func_80255CB4(void *, s32);
extern s32 D_8013B124;
extern s32 D_8013B110;

s32 func_80262CA8(void *arg0) {
    s32 *counter;

    counter = *(s32 **)((char *)arg0 + 0x2F0);
    *(s32 *)((char *)arg0 + 0x174) = 0;
    if (counter != 0) {
        *counter -= 1;
    }
    func_80255E78(&D_8013B124, arg0);
    return func_80255CB4(&D_8013B110, (s32)arg0);
}

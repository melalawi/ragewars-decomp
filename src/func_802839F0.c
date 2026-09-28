#include "basetypes.h"

extern char D_8013BA80;
extern char D_8013B1A8;

extern void func_8028414C(void);
extern void func_802A52E4(void *arg0, void *arg1);
extern void func_80268C7C(void *arg0, s32 arg1);

void func_802839F0(void *arg0) {
    s32 temp;

    if (*(u8 *)((s8 *)arg0 + 0x1D9) != 0) {
        func_8028414C();
        func_802A52E4(&D_8013BA80, arg0);
    }
    temp = *(s32 *)((s8 *)arg0 + 0x138);
    if (temp != 0) {
        func_80268C7C(&D_8013B1A8, temp);
        *(s32 *)((s8 *)arg0 + 0x138) = 0;
    }
}

#include "basetypes.h"
typedef void (*FuncPtr)(void);

extern char D_800D05C0[];

void func_802390E4(void *arg0, s16 arg1) {
    FuncPtr fn;

    *(s16 *)((char *)arg0 + 0x14) = arg1;
    *(s32 *)((char *)arg0 + 0x18) = 0;
    *(s16 *)((char *)arg0 + 0x1C) = 0;
    *(s32 *)((char *)arg0 + 0x20) = 0;
    fn = *(FuncPtr *)(D_800D05C0 + (*(s16 *)((char *)arg0 + 0x14) * 8));
    if (fn != 0) {
        fn();
    }
}

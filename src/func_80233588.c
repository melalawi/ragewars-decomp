#include "basetypes.h"

extern s32 func_802301E4(void);
extern void func_8022AFFC(void *arg0);

void func_80233588(void *arg0, void *arg1) {
    void *temp_s1;

    temp_s1 = *(void **)((char *)arg0 + 0x1D8);
    if (*(s8 *)((char *)arg1 + 0xCB) != 0) {
        *(s32 *)((char *)arg1 + 0x13C) = 2;
        if (func_802301E4() != 0) {
            *(s32 *)((char *)arg1 + 0x13C) = 1;
            func_8022AFFC(temp_s1);
        }
    }
}

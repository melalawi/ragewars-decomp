#include "basetypes.h"

extern void func_8022BE10(void *arg0, void *arg1);
extern void func_8022BEEC(void *arg0, void *arg1);
extern void func_8022C050(void *arg0, void *arg1);

void func_8022BD84(void *arg0, void *arg1, s32 arg2) {
    s32 flags;
    s32 flag_1000;
    s32 flag_8000;
    s32 flag_10000;

    if (arg2 != 0) {
        flags = *(s32 *)((char *)arg1 + 0x38);
        flag_1000 = flags & 0x1000;
        flag_8000 = flags & 0x8000;
        flag_10000 = flags & 0x10000;
        if (flag_1000 == 0) {
            *(s32 *)((char *)arg0 + 0x840) = 0;
        } else {
            func_8022BE10(arg0, arg1);
        }
        if (flag_8000) {
            func_8022BEEC(arg0, arg1);
        }
        if (flag_10000) {
            func_8022C050(arg0, arg1);
        }
    }
}

#include "basetypes.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Triple;

extern void func_802165F8(void *arg0, void *arg1, void *arg2);

void func_8024E6C8(u8 *arg0, void *arg1) {
    Triple buf;
    char pad[0x30];

    if (*arg0 == 1) {
        func_802165F8(arg0, arg0 + 0x170, &buf);
        *(Triple *)arg1 = buf;
        return;
    }
    *(s32 *)arg1 = 0;
    *(s32 *)((char *)arg1 + 4) = 0;
    *(s32 *)((char *)arg1 + 8) = 0;
}

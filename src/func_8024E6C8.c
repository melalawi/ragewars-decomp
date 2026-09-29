#include "basetypes.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Triple;

extern void func_802165F8(void *arg0, void *arg1, void *arg2);

typedef struct func_8024E6C8_S1 func_8024E6C8_S1;
struct func_8024E6C8_S1 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
};

void func_8024E6C8(u8 *arg0, void *arg1) {
    Triple buf;
    char pad[0x30];

    if (*arg0 == 1) {
        func_802165F8(arg0, arg0 + 0x170, &buf);
        *(Triple *)arg1 = buf;
        return;
    }
    *(s32 *)arg1 = 0;
    ((func_8024E6C8_S1 *)(arg1))->unk4 = 0;
    ((func_8024E6C8_S1 *)(arg1))->unk8 = 0;
}

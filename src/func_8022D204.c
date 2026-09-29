#include "basetypes.h"

extern void func_8044ACCC(s32 arg0);

typedef struct func_8022D204_S1 func_8022D204_S1;
struct func_8022D204_S1 {
    char pad0[0x100];
    s32 unk100;
    char pad100[0x11D8 - 0x100 - sizeof(s32)];
    s32 unk11D8;
    char pad11D8[0x11FC - 0x11D8 - sizeof(s32)];
    s32 unk11FC;
};

void func_8022D204(void *arg0) {
    ((func_8022D204_S1 *)(arg0))->unk100 &= 0xFF7FFFFF;
    ((func_8022D204_S1 *)(arg0))->unk11D8 = 0;
    ((func_8022D204_S1 *)(arg0))->unk11FC = 0;
    ((func_8022D204_S1 *)(arg0))->unk100 |= 0x01000000;
    func_8044ACCC((s32) arg0);
}

#include "basetypes.h"

extern u8 D_801462E5;

typedef struct func_8022E938_S1 func_8022E938_S1;
struct func_8022E938_S1 {
    char pad0[0x6AC];
    s32 unk6AC;
    char pad6AC[0x6B0 - 0x6AC - sizeof(s32)];
    s32 unk6B0;
    char pad6B0[0x13D4 - 0x6B0 - sizeof(s32)];
    s32 unk13D4;
};

void func_8022E938(void *arg0) {
    u8 *ptr;

    ptr = &D_801462E5;
    if (*ptr != 0) {
        return;
    }
    if (*(s32 *)(ptr - 0x55) != 0) {
        if (((func_8022E938_S1 *)(arg0))->unk6AC & 0x20) {
            return;
        }
    }
    if (!(((func_8022E938_S1 *)(arg0))->unk6B0 & 0x800)) {
        return;
    }
    if (((func_8022E938_S1 *)(arg0))->unk13D4 != 0) {
        ((func_8022E938_S1 *)(arg0))->unk13D4 = 0;
        return;
    }
    ((func_8022E938_S1 *)(arg0))->unk13D4 = 1;
}

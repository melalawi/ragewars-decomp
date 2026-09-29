#include "basetypes.h"

extern void func_802227D0(void *, void *, s32);

typedef struct func_8022C6D4_S1 func_8022C6D4_S1;
typedef struct func_8022C6D4_S2 func_8022C6D4_S2;
struct func_8022C6D4_S1 {
    char pad0[0x650];
    s16 unk650;
};
struct func_8022C6D4_S2 {
    char pad0[0x38];
    s32 unk38;
};

s32 func_8022C6D4(void *arg0, void *arg1) {
    s16 state = ((func_8022C6D4_S1 *)(arg0))->unk650;
    s32 blocked;

    if ((state == 0x15) || (state == 0x13) || (state == 0x14)) {
        blocked = 1;
    } else {
        blocked = 0;
    }
    if (blocked == 0) {
        if ((((func_8022C6D4_S2 *)(arg1))->unk38 & 0x20000) == 0) {
            return 0;
        }
        if (((func_8022C6D4_S1 *)(arg0))->unk650 == 0xD) {
            return 0;
        }
        if (((func_8022C6D4_S1 *)(arg0))->unk650 == 0xE) {
            return 0;
        }
        func_802227D0(arg0, arg1, 0xD);
        return 1;
    }
    return 0;
}

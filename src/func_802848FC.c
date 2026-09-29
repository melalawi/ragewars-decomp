#include "basetypes.h"

typedef struct func_802848FC_S1 func_802848FC_S1;
struct func_802848FC_S1 {
    char pad0[0x4];
    u16 unk4;
};

s32 func_802848FC(void *arg0) {
    u16 temp_v1;
    s32 val;

    temp_v1 = ((func_802848FC_S1 *)(arg0))->unk4;
    val = temp_v1;
    if (val == 0x11) {
        goto ret1;
    }
    if (val >= 0x12) {
        goto ge_12;
    }
    if (val < 5) {
        goto ret0;
    }
    if (val < 8) {
        goto ret1;
    }
    if (val == 9) {
        goto ret1;
    }
    goto ret0;
ge_12:
    if (val == 0x1A) {
        goto ret1;
    }
    if (val >= 0x1B) {
        goto ge_1b;
    }
    if (val == 0x13) {
        goto ret1;
    }
    goto ret0;
ge_1b:
    if (val == 0x101) {
        goto ret1;
    }
    if (val != 0x110) {
        goto ret0;
    }
ret1:
    return 1;
ret0:
    return 0;
}

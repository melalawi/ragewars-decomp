#include "basetypes.h"

typedef struct func_802848B0_S1 func_802848B0_S1;
struct func_802848B0_S1 {
    char pad0[0x4];
    u16 unk4;
};

s32 func_802848B0(void *arg0) {
    u16 temp_v1;
    s32 val;

    temp_v1 = ((func_802848B0_S1 *)(arg0))->unk4;
    val = temp_v1;
    if (val == 0x56) {
        goto ret1;
    }
    if (val >= 0x57) {
        goto ge_e;
    }
    if (val == 2) {
        goto ret1;
    }
    goto ret0;
ge_e:
    if (val == 0x111) {
        goto ret1;
    }
    if (val != 0x126) {
        goto ret0;
    }
ret1:
    return 1;
ret0:
    return 0;
}

#include "basetypes.h"

typedef struct func_80204620_S1 func_80204620_S1;
typedef struct func_80204620_S2 func_80204620_S2;
struct func_80204620_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x100 - 0x18 - sizeof(void*)];
    s32 unk100;
};
struct func_80204620_S2 {
    char pad0[0x28];
    s16 unk28;
};

s32 func_80204620(void *arg0) {
    s32 val;

    val = ((func_80204620_S2 *)((((func_80204620_S1 *)(arg0))->unk18)))->unk28;
    if (val != 0) {
        ((func_80204620_S1 *)(arg0))->unk100 = ((func_80204620_S1 *)(arg0))->unk100 | 0x2000;
    } else {
        s32 flags = ((func_80204620_S1 *)(arg0))->unk100 & ~0x2000;
        flags &= ~0x100;
        ((func_80204620_S1 *)(arg0))->unk100 = flags;
    }
    return val;
}

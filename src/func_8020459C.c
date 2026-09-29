#include "basetypes.h"

typedef struct func_8020459C_S1 func_8020459C_S1;
typedef struct func_8020459C_S2 func_8020459C_S2;
struct func_8020459C_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x100 - 0x18 - sizeof(void*)];
    s32 unk100;
};
struct func_8020459C_S2 {
    char pad0[0x20];
    s16 unk20;
};

s32 func_8020459C(void *arg0) {
    s32 val;

    val = ((func_8020459C_S2 *)((((func_8020459C_S1 *)(arg0))->unk18)))->unk20;
    if (val != 0) {
        ((func_8020459C_S1 *)(arg0))->unk100 = ((func_8020459C_S1 *)(arg0))->unk100 | 0x2000;
    } else {
        ((func_8020459C_S1 *)(arg0))->unk100 = ((func_8020459C_S1 *)(arg0))->unk100 & ~0x2000;
    }
    return val;
}

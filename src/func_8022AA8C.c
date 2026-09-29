#include "basetypes.h"

extern void *D_800D052C[];

typedef struct func_8022AA8C_S1 func_8022AA8C_S1;
typedef struct func_8022AA8C_S2 func_8022AA8C_S2;
struct func_8022AA8C_S1 {
    char pad0[0x594];
    s32 unk594;
};
struct func_8022AA8C_S2 {
    char pad0[0x20];
    s32 unk20;
    char pad20[0x24 - 0x20 - sizeof(s32)];
    s32 unk24;
};

s32 func_8022AA8C(void *arg0, s32 arg1) {
    void *p = D_800D052C[arg1];
    if (((func_8022AA8C_S1 *)(arg0))->unk594 == 1) {
        return ((func_8022AA8C_S2 *)(p))->unk20;
    }
    return ((func_8022AA8C_S2 *)(p))->unk24;
}

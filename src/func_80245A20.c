extern void *D_800E2830;

#include "basetypes.h"

extern s32 D_800E28D0;
extern int D_800E28D4;

typedef struct func_80245A20_S1 func_80245A20_S1;
struct func_80245A20_S1 {
    char pad0[0x108];
    int unk108;
    char pad108[0x10C - 0x108 - sizeof(int)];
    int unk10C;
    char pad10C[0x110 - 0x10C - sizeof(int)];
    int unk110;
    char pad110[0x114 - 0x110 - sizeof(int)];
    int unk114;
};

/** Copy a two-word record into the global record and clear two trailing fields. */
void func_80245A20(void) {
    char *record = (char *)D_800E2830;
    int hi = D_800E28D4;
    int lo = D_800E28D0;
    ((func_80245A20_S1 *)(record))->unk10C = hi;
    ((func_80245A20_S1 *)(record))->unk108 = lo;
    ((func_80245A20_S1 *)(record))->unk110 = 0;
    ((func_80245A20_S1 *)(record))->unk114 = 0;
}

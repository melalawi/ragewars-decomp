#include "basetypes.h"

typedef struct func_802B4ECC_S1 func_802B4ECC_S1;
typedef struct func_802B4ECC_S2 func_802B4ECC_S2;
struct func_802B4ECC_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x24 - 0x18 - sizeof(void*)];
    s32 unk24;
};
struct func_802B4ECC_S2 {
    char pad0[0x8];
    f32 unk8;
};

void func_802B4ECC(void *arg0, f32 arg1) {
    void *temp_v0;

    temp_v0 = ((func_802B4ECC_S1 *)(arg0))->unk18;
    if (temp_v0 != 0) {
        ((func_802B4ECC_S1 *)(arg0))->unk24 = (s32)(arg1 * ((func_802B4ECC_S2 *)(temp_v0))->unk8);
        return;
    }
    ((func_802B4ECC_S1 *)(arg0))->unk24 = 0x1E8;
}

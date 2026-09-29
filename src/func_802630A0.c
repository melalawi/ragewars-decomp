#include "basetypes.h"

extern void func_80255E78(void *, s32);
extern s32 func_80255CB4(void *, s32);

typedef struct func_802630A0_S1 func_802630A0_S1;
struct func_802630A0_S1 {
    char pad0[0x174];
    s32 unk174;
    char pad174[0x2F0 - 0x174 - sizeof(s32)];
    s32* unk2F0;
};

void func_802630A0(s32 arg0, void *arg1) {
    s32 *temp_v1;

    temp_v1 = ((func_802630A0_S1 *)(arg1))->unk2F0;
    ((func_802630A0_S1 *)(arg1))->unk174 = 0;
    if (temp_v1 != 0) {
        *temp_v1 -= 1;
    }
    func_80255E78((void *)(arg0 + 0x5F14), arg1);
    func_80255CB4((void *)(arg0 + 0x5F00), (s32)arg1);
}

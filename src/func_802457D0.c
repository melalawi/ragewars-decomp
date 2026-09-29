#include "basetypes.h"

typedef struct func_802457D0_S1 func_802457D0_S1;
struct func_802457D0_S1 {
    char pad0[0x1C];
    f32 unk1C;
    char pad1C[0x34 - 0x1C - sizeof(f32)];
    f32 unk34;
    char pad34[0x38 - 0x34 - sizeof(f32)];
    s32 unk38;
};

extern func_802457D0_S1 *D_800E2830;

s32 func_802457D0(void) {
    if (D_800E2830->unk38 != 0) {
        if (D_800E2830->unk1C > D_800E2830->unk34) {
            return 1;
        }
        return 0;
    }
    return 1;
}

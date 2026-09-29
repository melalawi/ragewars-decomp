#include "basetypes.h"

extern int func_80245774(void);
extern int func_80245754(void);
typedef struct func_802456FC_S1 func_802456FC_S1;
struct func_802456FC_S1 {
    char pad0[0x60];
    s32 unk60;
    char pad60[0x64 - 0x60 - sizeof(s32)];
    f32 unk64;
};

extern func_802456FC_S1 *D_800E2830;
extern f32 D_800C88C0;

void func_802456FC(void) {
    if (func_80245774() != 0 && func_80245754() != 0 && D_800E2830->unk60 == 0) {
        f32 temp = D_800C88C0;
        D_800E2830->unk60 = 1;
        D_800E2830->unk64 = temp;
    }
}

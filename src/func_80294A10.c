#include "basetypes.h"

extern void func_80293A04(s32 arg0, s32 arg1, s32 arg2);

extern s32 D_800D29D0;
extern s32 D_8010F194;
extern s32 D_80146958;
extern f32 D_800CA5CC;
extern f32 D_80146D74;

void func_80294A10(s32 arg0) {
    if (D_800D29D0 != 0) {
        func_80293A04(arg0, 1, 1);
        return;
    }
    if ((D_8010F194 & 0x1000) && (D_80146958 == 0)) {
        D_80146958 = 1;
        D_8010F194 = 0;
        D_80146D74 = D_800CA5CC;
    }
}

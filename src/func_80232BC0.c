#include "basetypes.h"

extern s32 func_80222A80(void *arg0, s16 arg1);
extern f32 D_800C810C;

s32 func_80232BC0(void *arg0, void *arg1, void *arg2) {
    s32 temp_v0;
    void *temp_v1;

    {
        f32 field = *(f32 *)((char *)arg2 + 0x11D8);
        if (D_800C810C < field) {
            return 1;
        }
    }
    if ((*(s32 *)((char *)arg0 + 0x100) & 0x300000) && (*(s32 *)((char *)arg2 + 0x1450) != 0)) {
        temp_v1 = *(void **)((char *)arg2 + 0x1454);
        temp_v0 = *(s32 *)((char *)temp_v1 + 0x23C);
        *(s32 *)((char *)temp_v1 + 0x23C) = 0;
        return temp_v0 == 0;
    }
    if (*(s32 *)((char *)arg2 + 0x6AC) & 0x2000) {
        if (*(s32 *)((char *)arg2 + 0x11B4) != 0) {
            return 1;
        }
        return func_80222A80(arg2, *(s16 *)((char *)arg2 + 0x62E)) == 0;
    }
    return 1;
}

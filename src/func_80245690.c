#include "basetypes.h"

extern int func_80245774(void);
extern void func_80245B64(s32 arg0);
extern void func_80245BB0(void);
extern void func_802537D8(void *, void *);
extern void *D_800E2830;

void func_80245690(void) {
    if (func_80245774() != 0) {
        s32 temp_a1;
        void *record;

        func_80245B64(1);
        func_80245BB0();
        temp_a1 = *(s32 *)D_800E2830;
        if (temp_a1 != 0) {
            func_802537D8(0, temp_a1);
        }
        record = D_800E2830;
        *(s32 *)((char *)record + 0x0) = 0;
        *(s32 *)((char *)record + 0x4) = 0;
        *(s32 *)((char *)record + 0x38) = 0;
        *(s32 *)((char *)record + 0x3C) = 0;
        *(s32 *)((char *)record + 0x60) = 0;
    }
}

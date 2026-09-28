#include "basetypes.h"

extern float D_800C8140;
extern s32 func_80214178(void *, void *, s32);

void func_8023330C(void *arg0, void *arg1) {
    *(float *)((char *)arg1 + 0x148) = D_800C8140;
    func_80214178(arg0, arg1, 8);
}

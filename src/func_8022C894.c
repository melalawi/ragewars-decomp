#include "basetypes.h"

extern void func_802227D0(void *, void *, s32);

void func_8022C894(void *arg0, void *arg1) {
    if ((*(f32 *)((char *)arg0 + 0x6C0) != 0.0f) || (*(f32 *)((char *)arg0 + 0x6C4) != 0.0f)) {
        func_802227D0(arg0, arg1, 3);
    }
}

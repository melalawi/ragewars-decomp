#include "span_1000/code_802C0384.h"
#include "span_C76B0/data.h"
#include "types.h"


extern u32 func_802BCF30_de(void);
extern void func_802BCF50_de(u32);

void func_802BB3D0_de(s32 arg0) {
    u32 temp_v0;
    s32 *p;

    temp_v0 = func_802BCF30_de();
    p = &D_800D5258;
    *p &= ~arg0 | 0x401;
    func_802BCF50_de(temp_v0);
}

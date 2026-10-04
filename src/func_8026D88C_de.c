#include "span_1000/code_8026D4F0.h"
#include "span_C76B0/data.h"
#include "types.h"

extern s32 D_800CC380;
extern s32 D_8010C560;
extern s32 D_800CC384;



void func_8026D88C_de(void) {
    if (D_800CC380 != 0 || D_8010C560 != 0) {
        D_800CC384 = 0x10000;
        D_800CC388 = 0xC4000000;
        D_800CC38C = 0xC8000000;
        return;
    }
    D_800CC384 = 0;
    D_800CC388 = 0x0C080000;
    D_800CC38C = 0x0C080000;
}

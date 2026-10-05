#include "common/types_8a8189af7b05.h"
#include "span_16E000/code_804143D8.h"
#include "types.h"
/* Selects render mode 11 or 12 (always 11 while D_80153F60's enable word is clear) when it differs
   from the cached mode D_800E32CC: flushes through func_80418F8C_de and applies the mode word built
   from the mode's base bits (0x53 or 0x33, with bit 2 when the first switch is set), then 0x300 or
   0x500, 0x3000 or 0x5000 and 0x30000 or 0x50000 chosen by the three further switches, through
   func_80417138_de. */



extern Triple D_8014DCD0;
extern s32 D_8014DCDC;

extern s32 D_800DF27C;




void func_80417034_de(s32 mode) {
    s32 bits;

    if (D_8014DCD0.y == 0) {
        mode = 11;
    }
    if (mode == D_800DF27C) {
        return;
    }
    D_800DF27C = mode;
    if (mode == 11) {
        func_80418F8C_de();
        bits = D_8014DCD0.x ? 0x55 : 0x53;
        bits |= D_8014DCD0.z ? 0x300 : 0x500;
        func_80417138_de(bits | (D_8014DCDC ? 0x3000 : 0x5000) | (D_8014DCE0 ? 0x30000 : 0x50000));
    } else if (mode == 12) {
        func_80418F8C_de();
        bits = D_8014DCD0.x ? 0x35 : 0x33;
        bits |= D_8014DCD0.z ? 0x300 : 0x500;
        func_80417138_de(bits | (D_8014DCDC ? 0x3000 : 0x5000) | (D_8014DCE0 ? 0x30000 : 0x50000));
    }
}

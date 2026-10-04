#include "span_16E000/code_80421A88.h"
#include "types.h"

/* Calls func_80245A20_de with 1, func_80245A00_de with the pooled constant D_800E1648 and
   func_80245A5C_de with 0x43, 0x4F, 0x12 and 0x80. */
extern void func_80245A20_de(s32);
extern void func_80245A00_de(f32);
extern void func_80245A5C_de(s32, s32, s32, s32);

void func_804221E8_de(void) {
    func_80245A20_de(1);
    func_80245A00_de((45.0f));
    func_80245A5C_de(0x43, 0x4F, 0x12, 0x80);
}

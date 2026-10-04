#include "span_1000/code_8022D1FC.h"
#include "span_C76B0/data.h"
#include "types.h"

extern void func_80274870_de(f32 *, f32, f32);
extern void func_80449870_de(void *);





void func_8022D57C_de(void *arg0) {
    f32 value;

    if (((func_8022D418_S1 *)(arg0))->unk850 != 0) {
        return;
    }
    if ((((func_8022D418_S1 *)(arg0))->unk664 & 0x8000) == 0) {
        func_80274870_de(&((func_8022D418_S1 *)(arg0))->unk72C, 1.308997f, 0.25f);
    }
    value = ((func_8022D418_S1 *)(arg0))->unk658;
    if (D_800C2DC4_de < value) {
        func_80449870_de(arg0);
    }
}

#include "span_1000/code_8022D1FC.h"
#include "span_C76B0/data.h"
#include "types.h"



extern void func_80274870_de(f32 *, f32, f32);
extern void func_80449870_de(void *);




void func_8022D428_de(void *arg0) {
    if (((func_8022D418_S1 *)(arg0))->unk850 == 0) {
        if ((((func_8022D418_S1 *)(arg0))->unk664 & 0x8000) == 0) {
            func_80274870_de(&((func_8022D418_S1 *)(arg0))->unk72C, 1.308997f, 0.25f);
        }
        if (((func_8022D418_S1 *)(arg0))->unk658 > D_800C2DB8_de) {
            func_80449870_de(arg0);
        }
    }
}

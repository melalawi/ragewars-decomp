#include "span_1000/code_8022AE90.h"
#include "types.h"
/** Adds the argument scaled by D_800C7E08 to the object's float at 0x11DC and sets bit 0x2000 in its word at 0x122C. */






void func_8022B730_de(void *arg0, f32 arg1) {
    ((func_8022B720_S1 *)(arg0))->unk11DC = ((func_8022B720_S1 *)(arg0))->unk11DC + arg1 * D_800C2D18_de;
    ((func_8022B720_S1 *)(arg0))->unk122C = ((func_8022B720_S1 *)(arg0))->unk122C | 0x2000;
}

#include "span_1000/code_8022AE90.h"
#include "types.h"

extern u8 *func_802A025C_de(u8 *, u8 *);
extern void func_80239770_de(void *, s32, void *, f32);
extern char D_80140FC8;




void func_8022B75C_de(void *arg0, u8 *arg1, f32 arg2) {
    s32 count;
    s32 temp;

    count = ((func_8022B74C_S1 *)(arg0))->unk13B0 + 1;
    ((func_8022B74C_S1 *)(arg0))->unk13B0 = count;
    if (count == 5) {
        ((func_8022B74C_S1 *)(arg0))->unk13B0 = 0;
    }
    func_802A025C_de((u8 *)((((func_8022B74C_S1 *)(arg0))->unk13B0 * 0x15) + 0x1344 + (char *)arg0), arg1);
    temp = ((func_8022B74C_S1 *)(arg0))->unk5DC;
    if (temp != 0) {
        func_80239770_de(&D_80140FC8, temp,
                      (((func_8022B74C_S1 *)(arg0))->unk13B0 * 0x15) + 0x1344 + (char *)arg0,
                      arg2);
    }
}

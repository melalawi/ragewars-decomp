#include "span_1000/code_8024F944.h"
#include "span_C76B0/data.h"
#include "types.h"

extern s32 D_800CD3F0;

extern void func_80253F8C_de(s32 arg0, s32 arg1);




void func_80250AD4_de(void *arg0) {
    if (!(((func_80250A7C_S1 *)(arg0))->unkD8 & 0x40) && (((func_80250A7C_S1 *)(arg0))->unkDA != D_800CD72B)) {
        func_80253F8C_de(0, ((func_80250A7C_S1 *)(arg0))->unkD0 | D_800CD3F0);
    }
}

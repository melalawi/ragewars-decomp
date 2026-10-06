#include "span_1000/code_802BB15C.h"
#include "types.h"
#include "span_1000/code_802BB15C.h"

extern void func_802BAC50_de(void *arg0, void *arg1, s32 arg2);
extern int func_802B9D70_de(void);
extern s32 D_800C7A00_de;
extern s32 D_800C7A04_de;

int func_802BB0F0_de(u32 arg0, u32 arg1) {
    if (arg0 & 3) {
        func_802BAC50_de(&D_800C7A00_de, &D_800C7A04_de, 0x34);
    }
    if (func_802B9D70_de() != 0) {
        return -1;
    }
    *(u32 *)(arg0 | 0xA0000000) = arg1;
    return 0;
}

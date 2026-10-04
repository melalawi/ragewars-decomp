#include "span_1000/code_8025477C.h"
#include "types.h"

extern void func_802BAC60_de(void *arg0, s32 arg1, s32 arg2);
extern void func_802A001C_de(void *arg0, s32 arg1, s32 arg2);
extern void func_802BAC90_de(s32 arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4, s32 arg5);
extern void func_802BB750_de(s32 arg0);
extern s32 D_800CD8AC_de;
extern s32 D_00255280;

void func_802550F0_de(s32 arg0, s32 arg1) {
    func_802BAC60_de((void *)(arg0 + 0x230), arg0 + 0x248, 0x80);
    func_802A001C_de((void *)(arg0 + 0x448), arg1, 0x1000);
    func_802BAC90_de(arg0, arg1, &D_00255280, arg0, arg0 + 0x1448, D_800CD8AC_de);
    func_802BB750_de(arg0);
}

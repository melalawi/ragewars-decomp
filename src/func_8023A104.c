#include "basetypes.h"

extern void *func_802533DC(int a, int b, int c, void *d);
extern void *func_802A101C(void *, s32, u32);

extern int D_800C83C0;

void func_8023A104(void *arg0, s32 arg1) {
    void *ret;
    s32 scaled;
    s32 first;

    scaled = arg1 * 0xED8;
    *(s32 *)((char *)arg0 + 8) = arg1;
    ret = func_802533DC(0, scaled, 0x23, (char *)&D_800C83C0 + 4);
    *(void **)((char *)arg0 + 0) = ret;
    first = *(s32 *)ret;
    *(s32 *)((char *)arg0 + 4) = first;
    func_802A101C(first, 0, scaled);
}

#include "basetypes.h"

extern u8 *func_802A125C(u8 *, u8 *);
extern void func_80239760(void *, s32, void *, f32);
extern char D_80145088;

void func_8022B74C(void *arg0, u8 *arg1, f32 arg2) {
    s32 count;
    s32 temp;

    count = *(s32 *)((char *)arg0 + 0x13B0) + 1;
    *(s32 *)((char *)arg0 + 0x13B0) = count;
    if (count == 5) {
        *(s32 *)((char *)arg0 + 0x13B0) = 0;
    }
    func_802A125C((u8 *)((*(s32 *)((char *)arg0 + 0x13B0) * 0x15) + 0x1344 + (char *)arg0), arg1);
    temp = *(s32 *)((char *)arg0 + 0x5DC);
    if (temp != 0) {
        func_80239760(&D_80145088, temp,
                      (*(s32 *)((char *)arg0 + 0x13B0) * 0x15) + 0x1344 + (char *)arg0,
                      arg2);
    }
}

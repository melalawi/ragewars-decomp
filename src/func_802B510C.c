#include "basetypes.h"

extern s32 func_802C2260(s32);
extern void func_802B7520(void *arg0);
extern void func_802B53E0(void *src, void *dst, s32 count);
extern void func_802B7550(void *arg0, void *arg1);

s32 func_802B510C(void *arg0, s16 *arg1) {
    void *node;
    s32 saved;
    s32 result;

    saved = func_802C2260(1);
    node = *(void **)((char *)arg0 + 8);
    if (node != 0) {
        func_802B7520(node);
        func_802B53E0((char *)node + 0xC, arg1, 0x10);
        func_802B7550(node, arg0);
        result = *(s32 *)((char *)node + 8);
    } else {
        *arg1 = -1;
        result = 0;
    }
    func_802C2260(saved);
    return result;
}

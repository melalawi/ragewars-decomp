#include "basetypes.h"

extern s32 func_802C2260(s32);
extern void func_802B7520(void *arg0);
extern void func_802B53E0(void *src, void *dst, s32 count);
extern void func_802B7550(void *arg0, void *arg1);

typedef struct func_802B510C_S1 func_802B510C_S1;
typedef struct func_802B510C_S2 func_802B510C_S2;
struct func_802B510C_S1 {
    char pad0[0x8];
    void* unk8;
};
struct func_802B510C_S2 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    char unkC;
};

s32 func_802B510C(void *arg0, s16 *arg1) {
    void *node;
    s32 saved;
    s32 result;

    saved = func_802C2260(1);
    node = ((func_802B510C_S1 *)(arg0))->unk8;
    if (node != 0) {
        func_802B7520(node);
        func_802B53E0(&((func_802B510C_S2 *)(node))->unkC, arg1, 0x10);
        func_802B7550(node, arg0);
        result = ((func_802B510C_S2 *)(node))->unk8;
    } else {
        *arg1 = -1;
        result = 0;
    }
    func_802C2260(saved);
    return result;
}

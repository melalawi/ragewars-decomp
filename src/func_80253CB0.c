#include "basetypes.h"

typedef struct Node80253CB0 {
    s32 value;
    s32 unk4;
    s32 count;
    s32 flags;
} Node80253CB0;

extern u32 func_802C2020(void);
extern void func_802C2040(u32 arg0);
extern void func_802C0390(s32 arg0, s32 arg1, s32 arg2);
extern void func_802C0510(void *arg0, s32 arg1, s32 arg2);
extern void func_80254D70(void *arg0, void *arg1);
extern void func_80255ACC(void *arg0, s32 arg1);
extern void func_80254A70(s32 arg0, void *arg1);

extern s32 D_80105140;
extern s32 D_8010515C;
extern char D_801051A0;

void func_80253CB0(s32 unused, Node80253CB0 **arg1, Node80253CB0 *arg2) {
    s32 counter;
    s32 counter2;
    s32 count;
    Node80253CB0 *node;
    u32 token;
    u32 token2;

    token = func_802C2020();
    counter = D_8010515C + 1;
    D_8010515C = counter;
    if (counter != 1) {
        func_802C2040(token);
        func_802C0390((s32)&D_80105140, 0, 1);
    } else {
        func_802C2040(token);
    }

    node = *arg1;
    node->flags &= ~2;
    if (node->count != 0) {
    loop_1:
        do {
            count = node->count - 1;
            node->count = count;
            if (count != 0) {
                goto loop_1;
            }
            node->flags &= ~0x100;
        } while (node->count != 0);
    }
    if (!(node->flags & 0x702)) {
        func_80254D70(0, node);
        func_80255ACC(&D_801051A0, node->value);
        func_80254A70(0, node);
    }
    *arg1 = arg2;

    token2 = func_802C2020();
    counter2 = D_8010515C - 1;
    D_8010515C = counter2;
    if (counter2 != 0) {
        func_802C2040(token2);
        func_802C0510(&D_80105140, 0, 1);
        return;
    }
    func_802C2040(token2);
}

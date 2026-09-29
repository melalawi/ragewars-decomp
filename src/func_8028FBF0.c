#include "basetypes.h"

typedef struct Node {
    char pad0[8];
    u32 flags;
    char padC[4];
    s32 type;
} Node;

extern s32 func_802C0390(void *arg0, void *arg1, s32 arg2);
extern void func_802C06E0(void *arg0, s32 arg1);
extern void func_8028F934(void *arg0, void *arg1);
extern void func_8028FBB8(void *arg0);
extern s32 func_8028F524(void *arg0, s32 *arg1, s32 *arg2, s32 arg3);
extern void func_8028FA40(void *arg0, s32 arg1, s32 arg2);

extern s32 D_800D2954;
extern s32 D_800D2B28;
extern s32 D_8010A248;

typedef struct func_8028FBF0_S1 func_8028FBF0_S1;
struct func_8028FBF0_S1 {
    char pad0[0x78];
    char unk78;
    char pad78[0x2F4 - 0x78 - sizeof(char)];
    s32 unk2F4;
    char pad2F4[0x2F8 - 0x2F4 - sizeof(s32)];
    s32 unk2F8;
    char pad2F8[0x300 - 0x2F8 - sizeof(s32)];
    s32 unk300;
};

void func_8028FBF0(void *arg0) {
    Node *node = 0;
    s32 value1 = 0;
    s32 value2 = 0;
    s32 flags;

    while (func_802C0390(&((func_8028FBF0_S1 *)(arg0))->unk78, &node, 0) != -1) {
        if (node->type == 1 && (node->flags & 0x20) && D_800D2954 == 0) {
            D_800D2954 = 2;
            func_802C06E0(&D_8010A248, D_800D2B28);
        }
        func_8028F934(arg0, node);
    }

    if (((func_8028FBF0_S1 *)(arg0))->unk300 != 0 &&
        ((func_8028FBF0_S1 *)(arg0))->unk2F4 != 0) {
        func_8028FBB8(arg0);
        return;
    }

    flags = (((func_8028FBF0_S1 *)(arg0))->unk2F4 == 0) * 2 |
            (((func_8028FBF0_S1 *)(arg0))->unk2F8 == 0);
    if (func_8028F524(arg0, &value1, &value2, flags) != flags) {
        func_8028FA40(arg0, value1, value2);
    }
}

#include "basetypes.h"

typedef struct Node {
    s32 unk0;
    struct Node *left;
    struct Node *right;
    s16 value;
    u16 type;
    u16 unk10;
    u16 flags;
} Node;

typedef struct Context {
    char pad[0x520];
    s32 value;
} Context;

extern s32 D_8014D080;
extern s32 func_8029A958(void);
extern s32 func_8029A5D4(s32, s32, s32, s32, s32);

void func_8029ACF0(Node *node, s32 arg1, s32 arg2, s32 arg3, s32 arg4,
                   s32 depth) {
    Context *context;
    s32 saved;
    s32 valid;
    s32 *value;

    if (node != 0) {
        context = D_8014D080;
        saved = context->value;
        context->value = 0;
        value = &context->value;
        if (node->left != 0) {
            func_8029ACF0(node->left, arg1, arg2, arg3, arg4, depth + 1);
        }
        if (context->value == 0) {
            if (node->right != 0) {
                func_8029ACF0(node->right, arg1, arg2, arg3, arg4, depth + 1);
            }
            if ((context->value == 0) && (depth > 0) && (node->value != -1) &&
                (node->type >= 9U)) {
                valid = 1;
                if (((arg1 == 0xE08) && ((node->flags | 2) == 0)) ||
                    ((arg1 == 0xE09) && ((node->flags | 4) == 0))) {
                    valid = 0;
                }
                if (valid != 0) {
                    func_8029A958();
                    func_8029A5D4(node->value, arg1, arg2, arg3, arg4);
                }
            }
        }
        *value = saved;
    }
}

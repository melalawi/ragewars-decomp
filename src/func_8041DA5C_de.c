#include "common/types_1dc8418c21db.h"
#include "span_16E000/code_8041BEA8.h"
#include "types.h"
/* Updates every node of the 50-entry id table: nodes whose unlock bit the current player has set are enabled through func_8040E8D8_de and given the style byte, the rest are disabled. */









extern Menu_func_8041DA5C_de *D_800DF540;
extern TextEntry D_800DF544[];
extern PlayerRecord D_800FEB4A[];
extern Node_func_8041DA5C_de *func_8040EC30_de(void *root, u16 id);
extern void func_8040E8D8_de(Node_func_8041DA5C_de *node, s32 enabled);
extern s32 func_80265650_de(PlayerRecord *bits, s32 bit);

void func_8041DA5C_de(s32 style) {
    s32 i;
    Node_func_8041DA5C_de *node;

    for (i = 0; i < 50; i++) {
        node = func_8040EC30_de(D_800DF540->root, D_800DF544[i].id);
        if (func_80265650_de(&D_800FEB4A[D_800DF540->player], i) == 1) {
            func_8040E8D8_de(node, 1);
            node->style = style;
        } else {
            func_8040E8D8_de(node, 0);
        }
    }
}

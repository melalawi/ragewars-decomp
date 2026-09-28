/* Updates every node of the 50-entry id table: nodes whose unlock bit the current player has set are enabled through func_8040E958 and given the style byte, the rest are disabled. */
#include "basetypes.h"

typedef struct {
    char pad0[0x10];
    s8 style;
} Node;

typedef struct {
    void *root;
    char pad4[0x108];
    s32 player;
} Menu;

typedef struct {
    s32 id;
    char **text;
} TextEntry;

typedef struct {
    char data[0x190];
} PlayerRecord;

extern Menu *D_800E3590;
extern TextEntry D_800E3594[];
extern PlayerRecord D_80102B4A[];
extern Node *func_8040ECB0(void *root, u16 id);
extern void func_8040E958(Node *node, s32 enabled);
extern s32 func_80265670(PlayerRecord *bits, s32 bit);

void func_8041DACC(s32 style) {
    s32 i;
    Node *node;

    for (i = 0; i < 50; i++) {
        node = func_8040ECB0(D_800E3590->root, D_800E3594[i].id);
        if (func_80265670(&D_80102B4A[D_800E3590->player], i) == 1) {
            func_8040E958(node, 1);
            node->style = style;
        } else {
            func_8040E958(node, 0);
        }
    }
}

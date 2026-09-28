/* Allocates and zeroes a 0x70-byte overlay node, copies the 0x2C-byte header of the owner's tree root into it, tags it 0x7A51 with kind 0x7D5 and flags 8, links it to its owner and the given value, inserts it under the root through func_8040EE64 and records it as the owner's overlay. */
#include "basetypes.h"

typedef struct {
    s32 words[11];
} Header2C;

typedef struct Node Node;

struct Node {
    s32 words_00[3];
    s16 tag;
    s16 kind;
    s16 pad10;
    s16 flags;
    s32 words_14[12];
    struct Owner *owner;
    s32 value;
    s32 words_4C[8];
    s32 field_6C;
};

typedef struct Owner {
    s32 words_00[2];
    Node *root;
    s32 words_0C[14];
    Node *overlay;
} Owner;

extern Node *func_80252FFC(s32 size);
extern void func_802A1748(Node *node, s32 value, s32 size);
extern void func_8040EE64(Node *parent, Node *node);

Node *func_8041B690(Owner *owner, s32 value) {
    Node *node;

    node = func_80252FFC(0x70);
    func_802A1748(node, 0, 0x70);
    *(Header2C *)node = *(Header2C *)owner->root;
    node->kind = 0x7D5;
    node->flags = 8;
    node->value = value;
    node->owner = owner;
    node->tag = 0x7A51;
    node->field_6C = 0;
    func_8040EE64(owner->root, node);
    return owner->overlay = node;
}

/* Releases the resource node whose id matches the handle's upper bits: unlinks it from the D_80103F88
 * list, frees each slot it holds through func_8023C074 and marks the slot unused, then posts the node
 * back to the handle's message queue. */
#include "basetypes.h"

typedef struct Node {
    struct Node *next;
    u16 id;
    u16 count;
    s32 unk8;
    s32 unkC;
    u8 *slots;
} Node;

typedef struct {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    u16 id;
    u16 unkA;
    s32 unkC;
} Slot;

typedef struct {
    s32 unk0;
    u32 handle;
    s32 queue;
} Owner;

extern Node D_80103F88;
extern Slot D_80103B50[];
extern void func_8023C074(Slot *);
extern s32 func_802C0510(s32, Node *, s32);

void func_8023CCC4(Owner *arg0) {
    Node *node;
    Node *prev;
    u8 *slot;
    s32 i;
    u32 key;

    node = &D_80103F88;
    key = arg0->handle >> 12;
    prev = 0;
    while (node != 0) {
        if (node->id == key) {
            break;
        }
        prev = node;
        node = node->next;
    }
    prev->next = node->next;
    slot = node->slots;
    for (i = 0; i < node->count; i++) {
        if (*slot != 0xFF) {
            func_8023C074(&D_80103B50[*slot]);
            D_80103B50[*slot].id = 0xFFFF;
        }
        slot++;
    }
    func_802C0510(arg0->queue, node, 1);
}

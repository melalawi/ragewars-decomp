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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DC688_14[] = {0x00428760U, 0x00428770U, 0x00428780U, 0x00428790U, 0x004287A0U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E1690_20[] = {0x00424170U, 0x00424200U, 0x00424254U, 0x0042427CU, 0x00424190U, 0x004242ECU, 0x00424240U, 0x00424268U};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E27C4_10[] = {0x80, 0x0D, 0x0C, 0xC0, 0x80, 0x0D, 0x63, 0x0C, 0x80, 0x0D, 0xB0, 0x48, 0x80, 0x0D, 0xEE, 0x04};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DDEB0_C[] = {0x80, 0x0D, 0x15, 0xFC, 0x80, 0x0D, 0x68, 0xE8, 0x80, 0x0D, 0xAD, 0x20};
#elif defined(VERSION_DE)
const float unbake_rodata_800DCC24_4 = 2.14748365e+09f;
const float unbake_rodata_800DCC28_4 = 2.14748365e+09f;
#endif

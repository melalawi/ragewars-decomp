#include "span_1000/code_8023CBB0.h"
#include "types.h"
/* Releases the resource node whose id matches the handle's upper bits: unlinks it from the D_80103F88
 * list, frees each slot it holds through func_8023C084_de and marks the slot unused, then posts the node
 * back to the handle's message queue. */







extern Node_func_8023CCD4_de D_800FFF88;
extern Slot_func_8023CCD4_de D_800FFB50[];
extern void func_8023C084_de(Slot_func_8023CCD4_de *);
extern s32 func_802BB420_de(s32, Node_func_8023CCD4_de *, s32);

void func_8023CCD4_de(Owner_func_8023CCD4_de *arg0) {
    Node_func_8023CCD4_de *node;
    Node_func_8023CCD4_de *prev;
    u8 *slot;
    s32 i;
    u32 key;

    node = &D_800FFF88;
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
            func_8023C084_de(&D_800FFB50[*slot]);
            D_800FFB50[*slot].id = 0xFFFF;
        }
        slot++;
    }
    func_802BB420_de(arg0->queue, node, 1);
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

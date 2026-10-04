#include "common/types.h"
#include "span_1000/code_80228934.h"
#include "types.h"







extern GlobalState D_801427E0;

extern struct Shape_func_8021A2D4_de_2 D_801427FC;
extern void func_80264854_de(s32 arg0);
extern void func_802227F4_de(Node_func_8022A748_de *arg0, Node_func_8022A748_de *arg1, s32 arg2);




void func_8022A748_de(void *arg0) {
    GlobalState *state;
    Node_func_8022A748_de *node;

    state = &D_801427E0;
    if ((state->field1C != 0) || (state->field20 != 0)) {
        return;
    }

    func_80264854_de(0);
    if (state->field24 != 0) {
        if (state->field28 == 0) {
            state->field28 = 1;
            node = ((func_8022A738_S1 *)(arg0))->unk20;
            while (node != 0) {
                func_802227F4_de(node, node, 0x15);
                node = node->next;
            }
        }
    } else {
        state->field1C = 1;
        node = ((func_8022A738_S1 *)(arg0))->unk20;
        while (node != 0) {
            func_802227F4_de(node, node, 0x15);
            node = node->next;
        }
    }

    D_801427FC.field_0 = 1;
    node = ((func_8022A738_S1 *)(arg0))->unk20;
    while (node != 0) {
        node->field85C = 0;
        node->state[0x8E] = 1;
        node = node->next;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C5510_40[] = {0x00297890U, 0x002978C8U, 0x0029791CU, 0x0029791CU, 0x00297870U, 0x00297870U, 0x00297870U, 0x00297870U, 0x0029791CU, 0x0029791CU, 0x0029791CU, 0x0029791CU, 0x0029791CU, 0x0029791CU, 0x002978ECU, 0x00297904U};
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CA810_8 = 1000.0;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5670_4 = 255.0f;
const float unbake_rodata_800C5674_4 = 0.17453295f;
const float unbake_rodata_800C5678_4 = 0.400000006f;
const float unbake_rodata_800C567C_4 = 0.699999988f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5684_4 = 10.2399998f;
const float unbake_rodata_800C5688_4 = 1.0f;
const float unbake_rodata_800C568C_4 = 81.9199982f;
const float unbake_rodata_800C5690_4 = 0.5f;
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800C54F0_8[] = {0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00};
#endif

#include "span_1000/code_8020D328.h"
#include "span_1000/types.h"
#include "types.h"
/* Selects the nodes of D_8013B364's list whose flagged record matches one of thirty ids: every match
   whose owner at 0x34 is active at 0x294 is selected through func_8020D220_de, and when none was, every
   matching node is selected regardless of owner. Returns the number of selections. Written from its
   own assembly in the style of func_8020EEA4_de. */



extern s32 D_801372A4;
extern void *func_8020C994_de(s32 *, s32);
extern void func_8020D220_de(s32 *, s32);







s32 func_8020F150_de(s32 *ids) {
    s32 *base;
    Node_func_8020F150_de *node;
    void *record;
    s32 count;
    s32 i;

    base = &D_801372A4;
    count = 0;
    for (node = ((func_8020F150_S1 *)(base))->unk24; node != 0; node = node->next) {
        record = func_8020C994_de(base, node->id);
        if (((func_8020EEA4_S2 *)(record))->unkC & 1) {
            for (i = 0; i < 30; i++) {
                if (((func_8020EEA4_S2 *)(record))->unkE == ids[i] && node->owner != 0
                    && ((Owner8020F150 *)node->owner)->active != 0) {
                    func_8020D220_de(base, node->id);
                    count++;
                }
            }
        }
    }
    if (count == 0) {
        for (node = ((func_8020F150_S1 *)(base))->unk24; node != 0; node = node->next) {
            record = func_8020C994_de(base, node->id);
            if (((func_8020EEA4_S2 *)(record))->unkC & 1) {
                for (i = 0; i < 30; i++) {
                    if (((func_8020EEA4_S2 *)(record))->unkE == ids[i]) {
                        func_8020D220_de(base, node->id);
                        count++;
                    }
                }
            }
        }
    }
    return count;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C3B28_3C[] = {0x0024D358U, 0x0024D300U, 0x0024D368U, 0x0024D368U, 0x0024D300U, 0x0024D358U, 0x0024D348U, 0x0024D338U, 0x0024D310U, 0x0024D368U, 0x0024D358U, 0x0024D2C0U, 0x0024D358U, 0x0024D358U, 0x0024D358U};
const float unbake_rodata_800C3B64_4 = 122.879997f;
const float unbake_rodata_800C3B68_4 = 102.399994f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8BA8_4 = 0.100000001f;
const float unbake_rodata_800C8BAC_4 = 0.5f;
const float unbake_rodata_800C8BB0_4 = 15.3599997f;
const float unbake_rodata_800C8BB4_4 = 0.699999988f;
const float unbake_rodata_800C8BB8_4 = 1.22070312f;
const float unbake_rodata_800C8BBC_4 = 200.0f;
const float unbake_rodata_800C8BC0_4 = 255.0f;
const float unbake_rodata_800C8BC4_4 = 2.14748365e+09f;
const float unbake_rodata_800C8BC8_4 = 0.5f;
const float unbake_rodata_800C8BCC_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3A00_4 = 0.5f;
const float unbake_rodata_800C3A04_4 = 0.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3A20_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3A7C_4 = 512.0f;
const float unbake_rodata_800C3A80_4 = 0.00787401572f;
const float unbake_rodata_800C3A84_4 = (-0.000904977438f);
const float unbake_rodata_800C3A88_4 = (-1.0f);
const float unbake_rodata_800C3A8C_4 = 56.0f;
const float unbake_rodata_800C3A90_4 = 128.0f;
const float unbake_rodata_800C3A94_4 = 0.00392156886f;
const float unbake_rodata_800C3A98_4 = 1.0f;
const float unbake_rodata_800C3A9C_4 = 0.150000006f;
const float unbake_rodata_800C3AA0_4 = 0.150000006f;
const float unbake_rodata_800C3AA4_4 = 0.150000006f;
const float unbake_rodata_800C3AA8_4 = (-0.150000006f);
const float unbake_rodata_800C3AAC_4 = 0.899999976f;
const float unbake_rodata_800C3AB0_4 = 0.00300000003f;
const float unbake_rodata_800C3AB4_4 = 1.0f;
#endif

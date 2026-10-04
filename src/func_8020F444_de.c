#include "span_1000/code_8020F2A8.h"
#include "span_1000/types.h"
#include "types.h"

extern s32 D_801372A4;
extern void *D_801372C8;

extern void func_8020D014_de(void *arg0);
extern void func_8020D1FC_de(s32);
extern void *func_8020C994_de(void *, s32);
extern void func_8020D220_de(void *, s32);
extern void func_8020D0CC_de(void *arg0, s32 arg1);
extern void func_8020D114_de(void *arg0, void *arg1, s32 arg2);












s32 func_8020F444_de(void *arg0) {
    char *global;
    char *scanbase;
    void *node;
    void *result;
    s32 count;
    s32 type;
    s32 value;
    s32 current;

    global = &D_801372A4;
    func_8020D014_de(global);
    func_8020D1FC_de((s32)global);
    count = 0;
    node = D_801372C8;
    scanbase = global;
    if (node != 0) {
        type = 0x64E;
        do {
            result = func_8020C994_de(scanbase, *(s32 *)node);
            if ((((func_8020EEA4_S2 *)(result))->unkC & 1) &&
                ((func_8020EEA4_S2 *)(result))->unkE == type &&
                ((func_8020F444_S3 *)((((func_8020F444_S2 *)(node))->unk34)))->unk1A4 == 0) {
                func_8020D220_de(scanbase, *(s32 *)node);
                count += 1;
            }
            node = ((func_8020F444_S2 *)(node))->unk10;
        } while (node != 0);
    }
    if (count == 0) {
        ((func_8020F2A8_S1 *)(arg0))->unk68 = 0;
        ((func_8020F2A8_S1 *)(arg0))->unkBC = -1;
        return 1;
    }
    value = -1;
    ((func_802066A4_S3 *)(global))->unk18 = value;
    func_8020D0CC_de(global, ((func_8020F2A8_S1 *)(arg0))->unk4);
    current = ((func_802066A4_S3 *)(global))->unk18;
    if (current != value) {
        ((func_8020F2A8_S1 *)(arg0))->unkC = current;
        func_8020D114_de(global, &((func_8020F2A8_S1 *)(arg0))->unk14, 4);
    }
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C3C30_3C[] = {0x0024E2CCU, 0x0024E2D4U, 0x0024E2CCU, 0x0024E2CCU, 0x0024E2D4U, 0x0024E2CCU, 0x0024E2CCU, 0x0024E2CCU, 0x0024E2CCU, 0x0024E2D4U, 0x0024E2CCU, 0x0024E2D4U, 0x0024E2CCU, 0x0024E2CCU, 0x0024E2CCU};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800C8CE8_3C[] = {0x0024D368U, 0x0024D310U, 0x0024D378U, 0x0024D378U, 0x0024D310U, 0x0024D368U, 0x0024D358U, 0x0024D348U, 0x0024D320U, 0x0024D378U, 0x0024D368U, 0x0024D2D0U, 0x0024D368U, 0x0024D368U, 0x0024D368U};
const float unbake_rodata_800C8D24_4 = 122.879997f;
const float unbake_rodata_800C8D28_4 = 102.399994f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3A40_4 = (-0.449999988f);
const float unbake_rodata_800C3A44_4 = (-0.707099974f);
const float unbake_rodata_800C3A48_4 = 204.799988f;
const float unbake_rodata_800C3A4C_4 = 1.0f;
const float unbake_rodata_800C3A50_4 = 51.1999969f;
const float unbake_rodata_800C3A54_4 = 1.02400005f;
const float unbake_rodata_800C3A58_4 = 51.1999969f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3A60_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3B68_4 = 0.5f;
const float unbake_rodata_800C3B6C_4 = 0.300000012f;
const float unbake_rodata_800C3B70_4 = (-2.0f);
const float unbake_rodata_800C3B74_4 = (-1.0f);
#endif

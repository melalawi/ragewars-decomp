#include "span_1000/code_8020F2A8.h"
#include "span_1000/types.h"
#include "types.h"

extern s32 D_801372A4;

extern void func_8020D014_de(void *arg0);
extern void func_8020D1FC_de(s32);
extern s32 func_8020F150_de(void *arg0);
extern void func_8020D0CC_de(void *arg0, s32 arg1);
extern void func_8020D114_de(void *arg0, void *arg1, s32 arg2);






s32 func_8020F388_de(void *arg0) {
    s32 data[30];
    s32 *cursor;
    s32 count;
    char *global;
    s32 value;
    s32 current;

    global = &D_801372A4;
    func_8020D014_de(global);
    func_8020D1FC_de((s32)global);
    count = 29;
    cursor = &data[29];
    do {
        *cursor = 0;
        count--;
        cursor--;
    } while (count >= 0);
    data[0] = 0x653;
    if (func_8020F150_de(data) == 0) {
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
const float unbake_rodata_800C3BD4_4 = 1.0f;
const float unbake_rodata_800C3BD8_4 = 0.436332345f;
const float unbake_rodata_800C3BDC_4 = 0.163624629f;
const float unbake_rodata_800C3BE0_4 = 0.375f;
const float unbake_rodata_800C3BE4_4 = 0.436332345f;
const float unbake_rodata_800C3BE8_4 = 0.163624629f;
const float unbake_rodata_800C3BEC_4 = 0.375f;
const float unbake_rodata_800C3BF0_4 = 25.0f;
const float unbake_rodata_800C3BF4_4 = 18.75f;
const float unbake_rodata_800C3BF8_4 = 0.75f;
const float unbake_rodata_800C3BFC_4 = 0.5f;
const float unbake_rodata_800C3C00_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8C58_4 = 0.5f;
const float unbake_rodata_800C8C5C_4 = 0.300000012f;
const float unbake_rodata_800C8C60_4 = (-2.0f);
const float unbake_rodata_800C8C64_4 = (-1.0f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C3A24_4 = 0.699999988f;
const float unbake_rodata_800C3A28_4 = 0.699999988f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3A40_4 = 0.5f;
const float unbake_rodata_800C3A44_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3AE0_4 = 3.40282347e+38f;
const float unbake_rodata_800C3AE4_4 = 1.0f;
#endif

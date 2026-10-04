#include "common/types.h"
#include "span_1000/code_8020F2A8.h"
#include "span_1000/types.h"
#include "types.h"

extern s32 D_801372A4;

extern void func_8020D014_de(void *arg0);
extern void func_8020D1FC_de(s32);
extern s32 func_8020F150_de(void *arg0);
extern void func_8020D0CC_de(void *arg0, s32 arg1);
extern void *func_8020CFE0_de(char *, s32);
extern void func_8020D114_de(void *arg0, void *arg1, s32 arg2);








s32 func_8020F2A8_de(void *arg0) {
    s32 data[30];
    s32 *cursor;
    s32 count;
    char *global;
    s32 value;
    s32 current;
    void *entry;

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
    data[0] = 0xBD7;
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
        entry = func_8020CFE0_de(global, current);
        ((func_8020F2A8_S1 *)(arg0))->unkC = ((func_802066A4_S3 *)(global))->unk18;
        ((func_8020F2A8_S1 *)(arg0))->unk68 = ((func_8020F2A8_S3 *)(entry))->unk34;
        func_8020D114_de(global, &((func_8020F2A8_S1 *)(arg0))->unk14, 4);
    } else {
        ((func_8020F2A8_S1 *)(arg0))->unk68 = 0;
        ((func_8020F2A8_S1 *)(arg0))->unkBC = current;
    }
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3BB4_4 = 1.0f;
const float unbake_rodata_800C3BB8_4 = 1.0f;
const float unbake_rodata_800C3BBC_4 = 1.0f;
const float unbake_rodata_800C3BC0_4 = 0.75f;
const float unbake_rodata_800C3BC4_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8BD0_4 = 3.40282347e+38f;
const float unbake_rodata_800C8BD4_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3A20_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3A24_4 = 1.0f;
const float unbake_rodata_800C3A28_4 = (-1.0f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C3AB8_4 = 0.100000001f;
const float unbake_rodata_800C3ABC_4 = 0.5f;
const float unbake_rodata_800C3AC0_4 = 15.3599997f;
const float unbake_rodata_800C3AC4_4 = 0.699999988f;
const float unbake_rodata_800C3AC8_4 = 1.22070312f;
const float unbake_rodata_800C3ACC_4 = 200.0f;
const float unbake_rodata_800C3AD0_4 = 255.0f;
const float unbake_rodata_800C3AD4_4 = 2.14748365e+09f;
const float unbake_rodata_800C3AD8_4 = 0.5f;
const float unbake_rodata_800C3ADC_4 = 2.14748365e+09f;
#endif

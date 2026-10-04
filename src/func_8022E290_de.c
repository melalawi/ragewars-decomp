#include "span_1000/code_8022E120.h"
#include "types.h"



extern char D_8010AEB8[];
extern char D_8010B328[];
extern f32 D_800C2E10_de;
extern void func_8026367C_de(void *arg0, void *arg1);
extern f32 func_8022ADBC_de(void *arg0);





void func_8022E290_de(void *arg0) {
    char *object = arg0;
    void *attributes;
    void *state = object + 0x688;
    f32 zero;

    if (((func_8022E280_S1 *)(object))->unk1450 != 0) {
        attributes = D_8010AEB8;
    } else {
        s32 index = ((func_8022E280_S1 *)(object))->unk5D4;
        attributes = (void *)(index << 4);
        attributes = (char *)attributes + index;
        attributes = (void *)((s32)attributes << 3);
        attributes = (char *)attributes + index;
        attributes = (void *)((s32)attributes << 2);
        attributes = D_8010B328 + (s32)attributes;
    }
    func_8026367C_de(state, attributes);

    ((func_8022E280_S1 *)(object))->unk6C0 = 0;
    ((func_8022E280_S1 *)(object))->unk6C4 = 0;
    ((func_8022E280_S1 *)(object))->unk6C8 = 0;
    ((func_8022E280_S1 *)(object))->unk6CC = 0;
    ((func_8022E280_S1 *)(object))->unk6D0 = 1;
    ((func_8022E280_S1 *)(object))->unk6D4 = 0;
    ((func_8022E280_S1 *)(object))->unk6D8 = 0;
    ((func_8022E280_S1 *)(object))->unk6DC = 0;
    ((func_8022E280_S1 *)(object))->unk6E4 = 0;
    ((func_8022E280_S1 *)(object))->unk758 = 0;
    ((func_8022E280_S1 *)(object))->unk75C = 0;
    ((func_8022E280_S1 *)(object))->unk11B4 = 0;
    ((func_8022E280_S1 *)(object))->unk11B8 = 0;
    ((func_8022E280_S1 *)(object))->unk708 = 0;
    ((func_8022E280_S1 *)(object))->unk70C = 0;
    ((func_8022E280_S1 *)(object))->unk710 = 0;
    ((func_8022E280_S1 *)(object))->unk714 = 0;
    ((func_8022E280_S1 *)(object))->unk724 = 0;
    ((func_8022E280_S1 *)(object))->unk728 = 0;
    ((func_8022E280_S1 *)(object))->unk72C = 0;
    ((func_8022E280_S1 *)(object))->unk730 = 0;
    ((func_8022E280_S1 *)(object))->unk734 = 0;
    ((func_8022E280_S1 *)(object))->unk738 = 0;
    ((func_8022E280_S1 *)(object))->unk73C = 0;
    ((func_8022E280_S1 *)(object))->unk740 = func_8022ADBC_de(object);
    ((func_8022E280_S1 *)(object))->unk744.v0 = 0;
    zero = ((func_8022E280_S1 *)(object))->unk744.v1;
    (&((func_8022E280_S1 *)(object))->unk748)->x = (&((func_8022E280_S1 *)(object))->unk748)->y = (&((func_8022E280_S1 *)(object))->unk748)->z = zero;
    ((func_8022E280_S1 *)(object))->unk754 = D_800C2E10_de;
    ((func_8022E280_S1 *)(object))->unk780 = zero;
    ((func_8022E280_S1 *)(object))->unk784 = D_800C2E10_de;
    ((func_8022E280_S1 *)(object))->unk6E8 = ((func_8022E280_S1 *)(object))->unk8;
    ((func_8022E280_S1 *)(object))->unk6F8 = ((func_8022E280_S1 *)(object))->unk8;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2D40_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7F00_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C30B4_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C30F4_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2E10_4 = 1.0f;
#endif

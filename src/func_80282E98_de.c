#include "common/types.h"
#include "span_1000/code_8027ED40.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"







extern s32 D_8011BDC8;
extern char D_8011D8D0;
extern f32 D_800C4E58_de[];



extern void *func_802A001C_de(void *, s32, u32);
extern s32 func_8025DE54_de(s16, Vec3, s32, s32);
extern void func_8022B550_de(void *, f32, f32, void *, s32);
extern void func_8028CE94_de(void *, void *, s32, Triple, f32, f32);
extern s32 func_80284068_de(void *);
extern void func_80265E10_de(void *, void *, s32, s32, Triple, struct Shape_func_802764D4_de_2);
extern void func_80279B40_de(void *, s32, s8, s32);
extern void func_80284570_de(void *, void *);
extern s32 func_80284434_de(void *);














void func_80282E98_de(void *arg0, void *arg1) {
    Triple scratch;
    struct Shape_func_802764D4_de_2 pair;
    s32 temp_a1;
    s32 temp_v0;
    s32 var_a0;
    s32 temp_a2;
    s32 temp_s2;
    s32 temp_s3;
    void *temp_s1;
    void *temp_v0_2;
    void *temp_v1;

    func_802A001C_de(&scratch, 0, 0xC);
    if (((func_80282E6C_S1 *)(arg0))->unk4 == 0x40F) {
        func_8025DE54_de(0xCDA, ((func_80282E6C_S2 *)(arg1))->unk8,
                      (s32)&((func_80282E6C_S2 *)arg1)->unk8, -1);
        func_8022B550_de(arg1, 30.0f, 3.0f,
                     ((func_80282E6C_S1 *)(arg0))->unk12C, 0);
        func_8028CE94_de(&D_8011BDC8,
                      &((func_80282E6C_S3 *)(((func_80282E6C_S2 *)(arg1))->unk698))->unk140,
                      0x14, scratch, D_800C4E58_de[1], D_800C4E60_de);
        ((func_80282E6C_S2 *)(arg1))->unk11EC = (&D_800C4E60_de)[1];
    }

    temp_s1 = ((func_80282E6C_S1 *)(arg0))->unk118;
    if (func_80284068_de(arg0) != 0) {
        var_a0 = 0xC;
    } else {
        var_a0 = 0xA;
    }
    temp_a1 = var_a0 * 2;
    temp_v0 = ((func_802066A4_S3 *)(temp_s1))->unk18;
    temp_v1 = (char *)temp_v0 + temp_a1;
    temp_s2 = ((func_80282E6C_S5 *)(temp_v1))->unk70;
    temp_a2 = ((func_80282E6C_S5 *)(temp_v1))->unk8C;
    temp_v0_2 = (char *)temp_v0 + (var_a0 * 8);
    pair = *(struct Shape_func_802764D4_de_2 *)temp_v0_2;
    temp_s3 = ((func_80282E6C_Table *)(((func_802066A4_S3 *)temp_s1)->unk18 + temp_a1))->unkA8;
    if (temp_a2 != 0xFFFF) {
        func_80265E10_de(arg0, arg0, temp_a2, -1,
                     ((func_80282E6C_S1 *)(arg0))->unk8.v0, pair);
    }
    if (temp_s2 != 0xFFFF) {
        func_80279B40_de(arg0, temp_s2, ((func_80282E6C_S1 *)(arg0))->unk1D0, 1);
    }
    if (temp_s3 != 0xFFFF) {
        func_8025DE54_de((s16)temp_s3, ((func_80282E6C_S1 *)(arg0))->unk8.v1, 0, -1);
    }
    func_80284570_de(&D_8011D8D0, arg0);
    func_80284434_de(arg0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4D8C_4 = 10.2399998f;
const float unbake_rodata_800C4D90_4 = 1.0f;
const float unbake_rodata_800C4D94_4 = 45.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9F4C_4 = 10.2399998f;
const float unbake_rodata_800C9F50_4 = 1.0f;
const float unbake_rodata_800C9F54_4 = 45.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C510C_4 = 10.2399998f;
const float unbake_rodata_800C5110_4 = 1.0f;
const float unbake_rodata_800C5114_4 = 45.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C514C_4 = 10.2399998f;
const float unbake_rodata_800C5150_4 = 1.0f;
const float unbake_rodata_800C5154_4 = 45.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4E5C_4 = 10.2399998f;
const float unbake_rodata_800C4E60_4 = 1.0f;
const float unbake_rodata_800C4E64_4 = 45.0f;
#endif

#include "span_1000/code_8022B500.h"
#include "types.h"





void func_8022B510_de(s32 arg0) {
    s32 var_v0;
    void *var_a0;
    var_v0 = 4;
    var_a0 = arg0 + 0x60;
    do {
        (((struct IntegerState1250 *) ((s8 *) var_a0))->unk_124C) = 0;
        var_v0 -= 1;
        var_a0 -= 0x18;
    } while (var_v0 >= 0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5E78_4 = 1.52587891e-05f;
const float unbake_rodata_800C5E7C_4 = 0.25f;
const float unbake_rodata_800C5E80_4 = (-90.0f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CB120_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5D94_4 = 1.0f;
const float unbake_rodata_800C5D98_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5D64_4 = 0.00100000005f;
const float unbake_rodata_800C5D68_4 = (-0.00100000005f);
const float unbake_rodata_800C5D6C_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5E38_4 = 1.0f;
const float unbake_rodata_800C5E3C_4 = 1.0f;
const unsigned int unbake_rodata_800C5E40_24[] = {0x002A4C44U, 0x002A4C50U, 0x002A4C68U, 0x002A4C98U, 0x002A4CB4U, 0x002A4CE8U, 0x002A4D34U, 0x002A4DB0U, 0x002A4DC0U};
#endif

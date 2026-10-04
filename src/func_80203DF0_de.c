#include "span_1000/code_80203B1C.h"
#include "span_1000/types.h"
#include "types.h"

extern void func_802738C0_de(void *arg0, f32 arg1);
extern void func_80273C68_de(void *arg0, f32 arg1);










void func_80203DF0_de(void *arg0, void *arg1) {
    void *temp_a0;
    char *temp_s1;
    void *temp_v0;

    temp_a0 = ((func_80203DF0_S1 *)(arg1))->unk8;
    temp_s1 = ((func_80203DF0_S2 *)(temp_a0))->unk18 + 0x14;
    if (((func_80203DF0_S1 *)(arg1))->unk4 == ((func_80203DF0_S3 *)(temp_s1))->unk3C) {
        func_802738C0_de(arg0, ((func_80203DF0_S2 *)(temp_a0))->unk294);
    }
    if (((func_80203DF0_S1 *)(arg1))->unk4 == ((func_80203DF0_S3 *)(temp_s1))->unk40) {
        temp_v0 = ((func_80203DF0_S1 *)(arg1))->unk8;
        func_80273C68_de(arg0,
                      ((func_80203DF0_S4 *)(temp_v0))->unk20C -
                          ((func_80203DF0_S4 *)(temp_v0))->unk6C);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1B0C_4 = 10.0f;
const float unbake_rodata_800C1B10_4 = 0.261799425f;
const float unbake_rodata_800C1B14_4 = 0.261799425f;
const float unbake_rodata_800C1B18_4 = 0.5f;
const float unbake_rodata_800C1B1C_4 = 1.0f;
const float unbake_rodata_800C1B20_4 = 3.14159274f;
const float unbake_rodata_800C1B24_4 = 1.0f;
const float unbake_rodata_800C1B28_4 = (-1.0f);
const float unbake_rodata_800C1B2C_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6CA8_4 = 50.0f;
const float unbake_rodata_800C6CAC_4 = 0.261799425f;
const float unbake_rodata_800C6CB0_4 = 0.261799425f;
const float unbake_rodata_800C6CB4_4 = 50.0f;
const float unbake_rodata_800C6CB8_4 = 50.0f;
const float unbake_rodata_800C6CBC_4 = 50.0f;
const float unbake_rodata_800C6CC0_4 = 50.0f;
const float unbake_rodata_800C6CC4_4 = 100.0f;
const float unbake_rodata_800C6CC8_4 = 30.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1E50_4 = 100.0f;
const float unbake_rodata_800C1E54_4 = 0.333333343f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1E90_4 = 100.0f;
const float unbake_rodata_800C1E94_4 = 0.333333343f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1BB0_4 = 100.0f;
const float unbake_rodata_800C1BB4_4 = 0.333333343f;
#endif

typedef struct func_8022ADA0_S1 func_8022ADA0_S1;
struct func_8022ADA0_S1 {
    char pad0[0x5E4];
    int unk5E4;
};

/** Report whether the signed word at byte offset 0x5E4 is below 0x6400. */
int func_8022ADA0(void *object) {
    return ((func_8022ADA0_S1 *)(object))->unk5E4 < 0x6400;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C59D4_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAC94_4 = 1.0f;
const float unbake_rodata_800CAC98_4 = 1.0f;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C5798_18[] = {0x0029535CU, 0x002955C0U, 0x00295B04U, 0x00295810U, 0x00295D58U, 0x00295E70U};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C57C0_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5A10_4 = (-9.99999997e-07f);
const float unbake_rodata_800C5A14_4 = 9.99999997e-07f;
const float unbake_rodata_800C5A18_4 = (-9.99999997e-07f);
const float unbake_rodata_800C5A1C_4 = 9.99999997e-07f;
const float unbake_rodata_800C5A20_4 = 1.57079637f;
const float unbake_rodata_800C5A24_4 = (-1.57079637f);
const float unbake_rodata_800C5A28_4 = 3.14159274f;
const float unbake_rodata_800C5A2C_4 = 9.99999997e-07f;
const float unbake_rodata_800C5A30_4 = 1.0f;
const float unbake_rodata_800C5A34_4 = (-0.00405405788f);
const float unbake_rodata_800C5A38_4 = 0.0218612291f;
const float unbake_rodata_800C5A3C_4 = 0.055909887f;
const float unbake_rodata_800C5A40_4 = 0.0964200422f;
const float unbake_rodata_800C5A44_4 = 0.139085338f;
const float unbake_rodata_800C5A48_4 = 0.199465364f;
const float unbake_rodata_800C5A4C_4 = 0.333298564f;
const float unbake_rodata_800C5A50_4 = 0.999999344f;
const float unbake_rodata_800C5A54_4 = 0.785398185f;
#endif

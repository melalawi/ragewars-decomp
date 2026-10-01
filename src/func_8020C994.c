/** Return an indexed record from the table referenced by the input. */
void *func_8020C994(void *table, int index) {
    char *base = *(char **)table;
    int stride = *(int *)base;
    return base + (index * stride + 8);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C34E0_4 = 768.0f;
const float unbake_rodata_800C34E4_4 = 5120.0f;
const float unbake_rodata_800C34E8_4 = 10240.0f;
const float unbake_rodata_800C34EC_4 = 0.25f;
const float unbake_rodata_800C34F0_4 = 0.75f;
const float unbake_rodata_800C34F4_4 = 1.0f;
const float unbake_rodata_800C34F8_4 = 0.5f;
const float unbake_rodata_800C34FC_4 = 16384.0f;
const float unbake_rodata_800C3500_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8608_4 = 1.0f;
const float unbake_rodata_800C860C_4 = 0.17453295f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C34BC_4 = 1.0f;
const float unbake_rodata_800C34C0_4 = 0.5f;
const float unbake_rodata_800C34C4_4 = 1.0f;
const float unbake_rodata_800C34C8_4 = 0.800000012f;
const float unbake_rodata_800C34CC_4 = 0.5f;
const float unbake_rodata_800C34D0_4 = 1.0f;
const float unbake_rodata_800C34D4_4 = 0.899999976f;
const float unbake_rodata_800C34D8_4 = 2.5f;
const float unbake_rodata_800C34DC_4 = 1.0f;
const float unbake_rodata_800C34E0_4 = 0.5f;
const float unbake_rodata_800C34E4_4 = 0.104719765f;
const float unbake_rodata_800C34E8_4 = 1.0f;
const float unbake_rodata_800C34EC_4 = 0.069813177f;
const float unbake_rodata_800C34F0_4 = 0.166666672f;
const float unbake_rodata_800C34F4_4 = 0.087266475f;
const float unbake_rodata_800C34F8_4 = 0.0349065885f;
const float unbake_rodata_800C34FC_4 = 1.0f;
const float unbake_rodata_800C3500_4 = 0.0799999982f;
const float unbake_rodata_800C3504_4 = 10.0f;
const float unbake_rodata_800C3508_4 = 1.0f;
const float unbake_rodata_800C350C_4 = 2.14748365e+09f;
const float unbake_rodata_800C3510_4 = 45.0f;
const float unbake_rodata_800C3514_4 = 75.0f;
const float unbake_rodata_800C3518_4 = 75.0f;
const float unbake_rodata_800C351C_4 = 0.666666687f;
const float unbake_rodata_800C3520_4 = 2.66666603f;
const float unbake_rodata_800C3524_4 = 1.33333302f;
const float unbake_rodata_800C3528_4 = 0.0174532942f;
const float unbake_rodata_800C352C_4 = 1.27927935f;
const float unbake_rodata_800C3530_4 = 1.0f;
const float unbake_rodata_800C3534_4 = 57.2957764f;
const float unbake_rodata_800C3538_4 = 0.949999988f;
const float unbake_rodata_800C353C_4 = 16.0f;
const float unbake_rodata_800C3540_4 = 1.0f;
const float unbake_rodata_800C3544_4 = (-1.0f);
const float unbake_rodata_800C3548_4 = 0.0109083094f;
const float unbake_rodata_800C354C_4 = 0.00872664712f;
const float unbake_rodata_800C3550_4 = 128.0f;
const float unbake_rodata_800C3554_4 = 127.0f;
const float unbake_rodata_800C3558_4 = 7168.0f;
const float unbake_rodata_800C355C_4 = 0.09765625f;
const float unbake_rodata_800C3560_4 = 11.0f;
const float unbake_rodata_800C3564_4 = 5.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C34E8_4 = 0.5f;
const float unbake_rodata_800C34EC_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3518_4 = 1.0f;
const float unbake_rodata_800C351C_4 = 0.17453295f;
#endif

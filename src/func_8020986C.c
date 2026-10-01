typedef struct func_8020986C_S1 func_8020986C_S1;
struct func_8020986C_S1 {
    char pad0[0x214];
    int unk214;
};

/** Store the second argument at byte offset 0x214 in the first argument. */
void func_8020986C(void *object, int value) {
    ((func_8020986C_S1 *)(object))->unk214 = value;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3220_4 = 16.0f;
const float unbake_rodata_800C3224_4 = 30.0f;
const float unbake_rodata_800C3228_4 = 30.0f;
const float unbake_rodata_800C322C_4 = 16.0f;
const float unbake_rodata_800C3230_4 = 30.0f;
const float unbake_rodata_800C3234_4 = 30.0f;
const float unbake_rodata_800C3238_4 = 16.0f;
const float unbake_rodata_800C323C_4 = 30.0f;
const float unbake_rodata_800C3240_4 = 30.0f;
const float unbake_rodata_800C3244_4 = 16.0f;
const float unbake_rodata_800C3248_4 = 30.0f;
const float unbake_rodata_800C324C_4 = 30.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C82FC_4 = 1.0f;
const float unbake_rodata_800C8300_4 = 0.5f;
const float unbake_rodata_800C8304_4 = 1.0f;
const float unbake_rodata_800C8308_4 = 0.800000012f;
const float unbake_rodata_800C830C_4 = 0.5f;
const float unbake_rodata_800C8310_4 = 1.0f;
const float unbake_rodata_800C8314_4 = 0.899999976f;
const float unbake_rodata_800C8318_4 = 2.5f;
const float unbake_rodata_800C831C_4 = 1.0f;
const float unbake_rodata_800C8320_4 = 0.5f;
const float unbake_rodata_800C8324_4 = 0.104719765f;
const float unbake_rodata_800C8328_4 = 1.0f;
const float unbake_rodata_800C832C_4 = 0.069813177f;
const float unbake_rodata_800C8330_4 = 0.166666672f;
const float unbake_rodata_800C8334_4 = 0.087266475f;
const float unbake_rodata_800C8338_4 = 0.0349065885f;
const float unbake_rodata_800C833C_4 = 1.0f;
const float unbake_rodata_800C8340_4 = 0.0799999982f;
const float unbake_rodata_800C8344_4 = 10.0f;
const float unbake_rodata_800C8348_4 = 1.0f;
const float unbake_rodata_800C834C_4 = 2.14748365e+09f;
const float unbake_rodata_800C8350_4 = 45.0f;
const float unbake_rodata_800C8354_4 = 75.0f;
const float unbake_rodata_800C8358_4 = 75.0f;
const float unbake_rodata_800C835C_4 = 0.666666687f;
const float unbake_rodata_800C8360_4 = 2.66666603f;
const float unbake_rodata_800C8364_4 = 1.33333302f;
const float unbake_rodata_800C8368_4 = 0.0174532942f;
const float unbake_rodata_800C836C_4 = 1.27927935f;
const float unbake_rodata_800C8370_4 = 1.0f;
const float unbake_rodata_800C8374_4 = 57.2957764f;
const float unbake_rodata_800C8378_4 = 0.949999988f;
const float unbake_rodata_800C837C_4 = 16.0f;
const float unbake_rodata_800C8380_4 = 1.0f;
const float unbake_rodata_800C8384_4 = (-1.0f);
const float unbake_rodata_800C8388_4 = 0.0109083094f;
const float unbake_rodata_800C838C_4 = 0.00872664712f;
const float unbake_rodata_800C8390_4 = 128.0f;
const float unbake_rodata_800C8394_4 = 127.0f;
const float unbake_rodata_800C8398_4 = 7168.0f;
const float unbake_rodata_800C839C_4 = 0.09765625f;
const float unbake_rodata_800C83A0_4 = 11.0f;
const float unbake_rodata_800C83A4_4 = 5.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C327C_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C32B4_4 = 1.0f;
const float unbake_rodata_800C32B8_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C320C_4 = 1.0f;
const float unbake_rodata_800C3210_4 = 0.5f;
const float unbake_rodata_800C3214_4 = 1.0f;
const float unbake_rodata_800C3218_4 = 0.800000012f;
const float unbake_rodata_800C321C_4 = 0.5f;
const float unbake_rodata_800C3220_4 = 1.0f;
const float unbake_rodata_800C3224_4 = 0.899999976f;
const float unbake_rodata_800C3228_4 = 2.5f;
const float unbake_rodata_800C322C_4 = 1.0f;
const float unbake_rodata_800C3230_4 = 0.5f;
const float unbake_rodata_800C3234_4 = 0.104719765f;
const float unbake_rodata_800C3238_4 = 1.0f;
const float unbake_rodata_800C323C_4 = 0.069813177f;
const float unbake_rodata_800C3240_4 = 0.166666672f;
const float unbake_rodata_800C3244_4 = 0.087266475f;
const float unbake_rodata_800C3248_4 = 0.0349065885f;
const float unbake_rodata_800C324C_4 = 1.0f;
const float unbake_rodata_800C3250_4 = 0.0799999982f;
const float unbake_rodata_800C3254_4 = 10.0f;
const float unbake_rodata_800C3258_4 = 1.0f;
const float unbake_rodata_800C325C_4 = 2.14748365e+09f;
const float unbake_rodata_800C3260_4 = 45.0f;
const float unbake_rodata_800C3264_4 = 75.0f;
const float unbake_rodata_800C3268_4 = 75.0f;
const float unbake_rodata_800C326C_4 = 0.666666687f;
const float unbake_rodata_800C3270_4 = 2.66666603f;
const float unbake_rodata_800C3274_4 = 1.33333302f;
const float unbake_rodata_800C3278_4 = 0.0174532942f;
const float unbake_rodata_800C327C_4 = 1.27927935f;
const float unbake_rodata_800C3280_4 = 1.0f;
const float unbake_rodata_800C3284_4 = 57.2957764f;
const float unbake_rodata_800C3288_4 = 0.949999988f;
const float unbake_rodata_800C328C_4 = 16.0f;
const float unbake_rodata_800C3290_4 = 1.0f;
const float unbake_rodata_800C3294_4 = (-1.0f);
const float unbake_rodata_800C3298_4 = 0.0109083094f;
const float unbake_rodata_800C329C_4 = 0.00872664712f;
const float unbake_rodata_800C32A0_4 = 128.0f;
const float unbake_rodata_800C32A4_4 = 127.0f;
const float unbake_rodata_800C32A8_4 = 7168.0f;
const float unbake_rodata_800C32AC_4 = 0.09765625f;
const float unbake_rodata_800C32B0_4 = 11.0f;
const float unbake_rodata_800C32B4_4 = 5.0f;
#endif

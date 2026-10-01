typedef struct func_8020D1CC_S1 func_8020D1CC_S1;
struct func_8020D1CC_S1 {
    char pad0[0x4];
    int unk4;
    char pad4[0x10 - 0x4 - sizeof(int)];
    char* unk10;
};

/** Look up a byte in a strided grid addressed via a base-record pointer. */
unsigned char func_8020D1CC(void *arg0, int arg1, int arg2) {
    int stride = ((func_8020D1CC_S1 *)(arg0))->unk4;
    char *base = ((func_8020D1CC_S1 *)(arg0))->unk10;
    int span = *(int *)base;
    int index = (arg1 * stride + arg2) * span;
    return *(unsigned char *)(index + (int)base + 8);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3660_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C87B8_4 = 10.2399998f;
const float unbake_rodata_800C87BC_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C36C4_4 = 1.0f;
const float unbake_rodata_800C36C8_4 = 0.5f;
const float unbake_rodata_800C36CC_4 = 18.0f;
const float unbake_rodata_800C36D0_4 = 0.800000012f;
const float unbake_rodata_800C36D4_4 = 0.600000024f;
const float unbake_rodata_800C36D8_4 = 0.5f;
const float unbake_rodata_800C36DC_4 = 0.800000012f;
const float unbake_rodata_800C36E0_4 = 0.400000006f;
const float unbake_rodata_800C36E4_4 = 0.0061599859f;
const float unbake_rodata_800C36E8_4 = 1.0f;
const float unbake_rodata_800C36EC_4 = 0.0123199718f;
const float unbake_rodata_800C36F0_4 = 255.0f;
const float unbake_rodata_800C36F4_4 = 0.333333343f;
const float unbake_rodata_800C36F8_4 = 9.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C36E8_4 = 9.0f;
const float unbake_rodata_800C36EC_4 = 0.810000002f;
const float unbake_rodata_800C36F0_4 = 1.0f;
const float unbake_rodata_800C36F4_4 = 1.57079637f;
const float unbake_rodata_800C36F8_4 = 255.0f;
const float unbake_rodata_800C36FC_4 = 1.0f;
const float unbake_rodata_800C3700_4 = 0.0666666701f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C36C8_4 = 10.2399998f;
const float unbake_rodata_800C36CC_4 = 1.0f;
#endif

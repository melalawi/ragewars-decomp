typedef struct func_80218F84_S1 func_80218F84_S1;
struct func_80218F84_S1 {
    unsigned int unk0;
    char pad0[0x4 - 0x0 - sizeof(unsigned int)];
    unsigned int unk4;
    char pad4[0x8 - 0x4 - sizeof(unsigned int)];
    unsigned int unk8;
    char pad8[0x6C - 0x8 - sizeof(unsigned int)];
    int unk6C;
};

/** Reset a record and mark its word at offset 0x6C as invalid. */
void func_80218F84(void *record) {
    ((func_80218F84_S1 *)(record))->unk0 = 0;
    ((func_80218F84_S1 *)(record))->unk4 = 0;
    ((func_80218F84_S1 *)(record))->unk6C = -1;
    ((func_80218F84_S1 *)(record))->unk8 = 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4C40_4 = 10.2399998f;
const float unbake_rodata_800C4C44_4 = 102400.0f;
const float unbake_rodata_800C4C48_4 = 0.785398245f;
const float unbake_rodata_800C4C4C_4 = 0.305175781f;
const float unbake_rodata_800C4C50_4 = 200.0f;
const float unbake_rodata_800C4C54_4 = 255.0f;
const float unbake_rodata_800C4C58_4 = 7.67999983f;
const float unbake_rodata_800C4C5C_4 = 8.0f;
const float unbake_rodata_800C4C60_4 = 0.100000001f;
const float unbake_rodata_800C4C64_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9E00_4 = 10.2399998f;
const float unbake_rodata_800C9E04_4 = 102400.0f;
const float unbake_rodata_800C9E08_4 = 0.785398245f;
const float unbake_rodata_800C9E0C_4 = 0.305175781f;
const float unbake_rodata_800C9E10_4 = 200.0f;
const float unbake_rodata_800C9E14_4 = 255.0f;
const float unbake_rodata_800C9E18_4 = 7.67999983f;
const float unbake_rodata_800C9E1C_4 = 8.0f;
const float unbake_rodata_800C9E20_4 = 0.100000001f;
const float unbake_rodata_800C9E24_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4CD8_4 = 0.00999999978f;
const float unbake_rodata_800C4CDC_4 = 2.14748365e+09f;
const float unbake_rodata_800C4CE0_4 = 0.00999999978f;
const float unbake_rodata_800C4CE4_4 = 2.14748365e+09f;
const float unbake_rodata_800C4CE8_4 = 0.00999999978f;
const float unbake_rodata_800C4CEC_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4CBC_4 = 1.0f;
const float unbake_rodata_800C4CC0_4 = 1.0f;
const float unbake_rodata_800C4CC4_4 = 1.0f;
const float unbake_rodata_800C4CC8_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4BC8_4 = 1.0f;
#endif

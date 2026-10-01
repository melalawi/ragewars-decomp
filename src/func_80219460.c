typedef struct func_80219460_S1 func_80219460_S1;
struct func_80219460_S1 {
    char pad0[0x4];
    int unk4;
    char pad4[0xC - 0x4 - sizeof(int)];
    short unkC;
    char padC[0xE - 0xC - sizeof(short)];
    char unkE;
    char padE[0x12 - 0xE - sizeof(char)];
    char unk12;
};

/** Initialize the compact state record to its default values. */
void func_80219460(void *record) {
    ((func_80219460_S1 *)(record))->unk4 = 1;
    *(int *)record = 0;
    ((func_80219460_S1 *)(record))->unkC = 0;
    ((func_80219460_S1 *)(record))->unkE = 0;
    ((func_80219460_S1 *)(record))->unk12 = -1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4D98_4 = 16.0f;
const float unbake_rodata_800C4D9C_4 = 0.000492125982f;
const float unbake_rodata_800C4DA0_4 = 1.0f;
const float unbake_rodata_800C4DA4_4 = 0.000492125982f;
const float unbake_rodata_800C4DA8_4 = 0.00100000005f;
const float unbake_rodata_800C4DAC_4 = 1.0f;
const float unbake_rodata_800C4DB0_4 = 47.5f;
const float unbake_rodata_800C4DB4_4 = 0.25f;
const float unbake_rodata_800C4DB8_4 = 0.0210526325f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9F58_4 = 16.0f;
const float unbake_rodata_800C9F5C_4 = 0.000492125982f;
const float unbake_rodata_800C9F60_4 = 1.0f;
const float unbake_rodata_800C9F64_4 = 0.000492125982f;
const float unbake_rodata_800C9F68_4 = 0.00100000005f;
const float unbake_rodata_800C9F6C_4 = 1.0f;
const float unbake_rodata_800C9F70_4 = 47.5f;
const float unbake_rodata_800C9F74_4 = 0.25f;
const float unbake_rodata_800C9F78_4 = 0.0210526325f;
#elif defined(VERSION_EU)
const double unbake_rodata_800C4DA8_8 = 4294967296.0;
const float unbake_rodata_800C4DB0_4 = 0.00392156886f;
const float unbake_rodata_800C4DB4_4 = 1.0f;
const double unbake_rodata_800C4DB8_8 = 4294967296.0;
const float unbake_rodata_800C4DC0_4 = 255.0f;
const float unbake_rodata_800C4DC4_4 = 5.0f;
const float unbake_rodata_800C4DC8_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4DCC_4 = 2.14748365e+09f;
const float unbake_rodata_800C4DD0_4 = 0.600000024f;
const float unbake_rodata_800C4DD4_4 = 0.300000012f;
const float unbake_rodata_800C4DD8_4 = 0.100000001f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4E40_4 = 65536.0f;
const float unbake_rodata_800C4E44_4 = 65536.0f;
const float unbake_rodata_800C4E48_4 = 262144.0f;
#endif

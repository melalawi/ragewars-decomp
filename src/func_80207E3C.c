extern void func_80214178(void *a, void *b, int c);

typedef struct func_80207E3C_S1 func_80207E3C_S1;
struct func_80207E3C_S1 {
    char pad0[0x100];
    int unk100;
};

void func_80207E3C(void *arg0, int *arg1) {
    ((func_80207E3C_S1 *)(arg0))->unk100 |= 0x2100;
    *arg1 |= 0x10000;
    func_80214178(arg0, arg1, 1);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2FD0_4 = 1.0f;
const float unbake_rodata_800C2FD4_4 = 1024.0f;
const float unbake_rodata_800C2FD8_4 = 47.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8018_4 = 0.0136135686f;
const float unbake_rodata_800C801C_4 = 1.79049289f;
const float unbake_rodata_800C8020_4 = 1.0f;
const float unbake_rodata_800C8024_4 = 1.79049289f;
const float unbake_rodata_800C8028_4 = 1.0f;
const float unbake_rodata_800C802C_4 = 1.79049289f;
const float unbake_rodata_800C8030_4 = 1.79049289f;
const float unbake_rodata_800C8034_4 = 1.0f;
const float unbake_rodata_800C8038_4 = 1.0f;
const float unbake_rodata_800C803C_4 = 25.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2F94_4 = 285.0f;
const float unbake_rodata_800C2F98_4 = 0.0666666701f;
const float unbake_rodata_800C2F9C_4 = 1.0f;
const float unbake_rodata_800C2FA0_4 = 1.0f;
const float unbake_rodata_800C2FA4_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2FAC_4 = 0.00390625f;
const float unbake_rodata_800C2FB0_4 = 0.25f;
const float unbake_rodata_800C2FB4_4 = 256.0f;
const float unbake_rodata_800C2FB8_4 = 0.00390625f;
const float unbake_rodata_800C2FBC_4 = 0.600000024f;
const float unbake_rodata_800C2FC0_4 = 0.00390625f;
const float unbake_rodata_800C2FC4_4 = 0.800000012f;
const float unbake_rodata_800C2FC8_4 = 256.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2F28_4 = 0.0136135686f;
const float unbake_rodata_800C2F2C_4 = 1.79049289f;
const float unbake_rodata_800C2F30_4 = 1.0f;
const float unbake_rodata_800C2F34_4 = 1.79049289f;
const float unbake_rodata_800C2F38_4 = 1.0f;
const float unbake_rodata_800C2F3C_4 = 1.79049289f;
const float unbake_rodata_800C2F40_4 = 1.79049289f;
const float unbake_rodata_800C2F44_4 = 1.0f;
const float unbake_rodata_800C2F48_4 = 1.0f;
const float unbake_rodata_800C2F4C_4 = 25.0f;
#endif

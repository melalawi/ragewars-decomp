typedef struct func_8022C884_S1 func_8022C884_S1;
struct func_8022C884_S1 {
    char pad0[0x1C];
    int unk1C;
    char pad1C[0x20 - 0x1C - sizeof(int)];
    int unk20;
    char pad20[0x24 - 0x20 - sizeof(int)];
    int unk24;
};

void func_8022C884(void *arg0, void *arg1) {
    ((func_8022C884_S1 *)(arg1))->unk1C = 0;
    ((func_8022C884_S1 *)(arg1))->unk20 = 0;
    ((func_8022C884_S1 *)(arg1))->unk24 = 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C7778_8 = 0.5;
const double unbake_rodata_800C7780_8 = 0.0;
const double unbake_rodata_800C7788_8 = 0.5;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CCAA8_8 = 0.5;
const double unbake_rodata_800CCAB0_8 = 0.0;
const double unbake_rodata_800CCAB8_8 = 0.5;
#elif defined(VERSION_EU)
const double unbake_rodata_800C6480_8 = 4294967296.0;
const float unbake_rodata_800C6488_4 = 1.0f;
const float unbake_rodata_800C648C_4 = 1.0f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C6428_1C[] = {0x002A90F8U, 0x002A9108U, 0x002A9138U, 0x002A9118U, 0x002A9128U, 0x002A9128U, 0x002A9138U};
const float unbake_rodata_800C6444_4 = 24.0f;
const float unbake_rodata_800C6448_4 = 12.0f;
const float unbake_rodata_800C644C_4 = 6.0f;
const float unbake_rodata_800C6450_4 = 16.0f;
const float unbake_rodata_800C6454_4 = 8.0f;
const float unbake_rodata_800C6458_4 = 1.0f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C7610_44[] = {0x002B4B6CU, 0x002B4B94U, 0x002B4B94U, 0x002B4B94U, 0x002B4B94U, 0x002B4B94U, 0x002B4B94U, 0x002B4B94U, 0x002B4B94U, 0x002B4B94U, 0x002B4B94U, 0x002B4940U, 0x002B4940U, 0x002B4814U, 0x002B4AECU, 0x002B4B34U, 0x002B4940U};
#endif

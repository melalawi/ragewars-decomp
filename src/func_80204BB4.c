extern char D_800CD5D0;
extern char D_204C34;

typedef struct func_80204BB4_S1 func_80204BB4_S1;
struct func_80204BB4_S1 {
    char pad0[0x2C];
    void* unk2C;
    char pad2C[0x108 - 0x2C - sizeof(void*)];
    void* unk108;
};

void func_80204BB4(void *arg0, void *arg1) {
    ((func_80204BB4_S1 *)(arg1))->unk2C = &D_800CD5D0;
    ((func_80204BB4_S1 *)(arg1))->unk108 = &D_204C34;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1E50_4 = 100.0f;
const float unbake_rodata_800C1E54_4 = 100.0f;
const float unbake_rodata_800C1E58_4 = 1.0f;
const float unbake_rodata_800C1E5C_4 = 80.0f;
const float unbake_rodata_800C1E60_4 = 10.0f;
const float unbake_rodata_800C1E64_4 = 10.0f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800C6F58_74[] = {0x0020ECE4U, 0x0020ED00U, 0x0020ECE4U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ECE4U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ECE4U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ECB0U};
#elif defined(VERSION_EU)
const float unbake_rodata_800C2100_4 = 51200.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2140_4 = 51200.0f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C1E68_74[] = {0x0020ECE4U, 0x0020ED00U, 0x0020ECE4U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ECE4U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ECE4U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ED00U, 0x0020ECB0U};
#endif

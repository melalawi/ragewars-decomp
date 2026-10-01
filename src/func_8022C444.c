typedef struct func_8022C444_S1 func_8022C444_S1;
typedef struct func_8022C444_S2 func_8022C444_S2;
struct func_8022C444_S1 {
    char pad0[0x5D8];
    void* unk5D8;
};
struct func_8022C444_S2 {
    char pad0[0x90];
    char unk90;
};

void *func_8022C444(void *arg0) {
    void *p = ((func_8022C444_S1 *)(arg0))->unk5D8;
    ((func_8022C444_S2 *)(p))->unk90 = 0;
    return p;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C7378_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CC6A8_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C6308_1C[] = {0x002A8EE4U, 0x002A8EF4U, 0x002A8F24U, 0x002A8F04U, 0x002A8F14U, 0x002A8F14U, 0x002A8F24U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C6298_1C[] = {0x002A8C1CU, 0x002A8C24U, 0x002A8C30U, 0x002A8C30U, 0x002A8C38U, 0x002A8C38U, 0x002A8C40U};
#elif defined(VERSION_DE)
const float unbake_rodata_800C6240_4 = 1.0f;
#endif

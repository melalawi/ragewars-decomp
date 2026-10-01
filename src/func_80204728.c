extern char D_204808;
typedef struct func_80204728_S1 func_80204728_S1;
struct func_80204728_S1 {
    char pad0[0x10C];
    void* unk10C;
};

void func_80204728(void *arg0, void *arg1) {
    ((func_80204728_S1 *)(arg1))->unk10C = &D_204808;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1CE0_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6E70_4 = (-1.0f);
const float unbake_rodata_800C6E74_4 = (-1.0f);
const float unbake_rodata_800C6E78_4 = 51200.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2018_4 = (-1.0f);
const float unbake_rodata_800C201C_4 = (-1.0f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2058_4 = (-1.0f);
const float unbake_rodata_800C205C_4 = (-1.0f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C1D78_4 = (-1.0f);
const float unbake_rodata_800C1D7C_4 = (-1.0f);
#endif

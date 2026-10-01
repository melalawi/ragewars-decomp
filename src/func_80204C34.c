typedef void (*FuncPtr)(void);

typedef struct func_80204C34_S1 func_80204C34_S1;
typedef struct func_80204C34_S2 func_80204C34_S2;
struct func_80204C34_S1 {
    char pad0[0x30];
    void* unk30;
};
struct func_80204C34_S2 {
    char pad0[0x8];
    FuncPtr unk8;
};

void func_80204C34(void *arg0, void *arg1) {
    void *obj = ((func_80204C34_S1 *)(arg1))->unk30;
    if (obj != 0) {
        FuncPtr fn = ((func_80204C34_S2 *)(obj))->unk8;
        if (fn != 0) {
            fn();
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1EC0_4 = 61.4399986f;
const float unbake_rodata_800C1EC4_4 = 0.707106769f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7010_4 = 100.0f;
const float unbake_rodata_800C7014_4 = 100.0f;
const float unbake_rodata_800C7018_4 = 1.0f;
const float unbake_rodata_800C701C_4 = 80.0f;
const float unbake_rodata_800C7020_4 = 10.0f;
const float unbake_rodata_800C7024_4 = 10.0f;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C2190_20[] = {0x0020EFE8U, 0x0020F02CU, 0x0020F03CU, 0x0020F048U, 0x0020F054U, 0x0020F088U, 0x0020F098U, 0x0020F0A8U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C21D0_20[] = {0x0020EFE8U, 0x0020F02CU, 0x0020F03CU, 0x0020F048U, 0x0020F054U, 0x0020F088U, 0x0020F098U, 0x0020F0A8U};
#elif defined(VERSION_DE)
const float unbake_rodata_800C1F20_4 = 100.0f;
const float unbake_rodata_800C1F24_4 = 100.0f;
const float unbake_rodata_800C1F28_4 = 1.0f;
const float unbake_rodata_800C1F2C_4 = 80.0f;
const float unbake_rodata_800C1F30_4 = 10.0f;
const float unbake_rodata_800C1F34_4 = 10.0f;
#endif

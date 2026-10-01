extern float D_800C6D78;

typedef struct func_80209910_S1 func_80209910_S1;
struct func_80209910_S1 {
    char pad0[0x6A0];
    float unk6A0;
};

void func_80209910(void **arg0, float arg1) {
    float result = arg1 * D_800C6D78;
    if (arg0 != 0) {
        ((func_80209910_S1 *)((*arg0)))->unk6A0 = -result;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1BB8_4 = 0.636619687f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6D78_4 = 0.636619687f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1F28_4 = 0.636619687f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1F68_4 = 0.636619687f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1C88_4 = 0.636619687f;
#endif

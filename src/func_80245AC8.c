/* Returns the globally selected record's float at 0xA0 scaled by D_800C88CC. */
extern void *D_800E2830;
extern float D_800C88CC;

typedef struct func_80245AC8_S1 func_80245AC8_S1;
struct func_80245AC8_S1 {
    char pad0[0xA0];
    float unkA0;
};

float func_80245AC8(void) {
    void *record = D_800E2830;
    return (((func_80245AC8_S1 *)(record))->unkA0) * (D_800C88CC);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C370C_4 = 10.2399998f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C88CC_4 = 10.2399998f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3A8C_4 = 10.2399998f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3ACC_4 = 10.2399998f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C37DC_4 = 10.2399998f;
#endif

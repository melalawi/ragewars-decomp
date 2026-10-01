extern float D_800E1440;
extern void func_80417BA0(void *, int, int, int, float, int, int, float, float, int);

void func_80418E20(void *a, int b, int c, int d, float e, int f) {
    func_80417BA0(a, b, c, d, e, 0, 0, D_800E1440, D_800E1440, f);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DC0C0_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E1440_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800EDA90_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E8C50_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800DD410_4 = 1.0f;
#endif

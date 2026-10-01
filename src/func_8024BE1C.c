/** Return the global float at D_800C8C44. */
extern float D_800C8C44;

float func_8024BE1C(void) {
    return D_800C8C44;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3A84_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8C44_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3E04_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3E44_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3B54_4 = 1.0f;
#endif

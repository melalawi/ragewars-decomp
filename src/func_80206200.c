extern int func_80285F28(char *a, int b);
extern char D_8011FE88;

int func_80206200(int arg0) {
    return func_80285F28(&D_8011FE88, arg0) == 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2304_4 = 0.5f;
const float unbake_rodata_800C2308_4 = (-64.0f);
const float unbake_rodata_800C230C_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7430_4 = 9999999.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C25A0_4 = 437.5f;
const float unbake_rodata_800C25A4_4 = (-675.0f);
const float unbake_rodata_800C25A8_4 = 0.25f;
const float unbake_rodata_800C25AC_4 = 0.1875f;
const float unbake_rodata_800C25B0_4 = 1.57079649f;
const float unbake_rodata_800C25B4_4 = 255.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C25D4_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2378_4 = 0.0666666701f;
const float unbake_rodata_800C237C_4 = 1.0f;
const float unbake_rodata_800C2380_4 = 51.1999969f;
#endif

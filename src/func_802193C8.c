#include "basetypes.h"

typedef struct {
    s8 field0;
    s8 field1;
    s16 field2;
    s16 field4;
} Struct802193C8;

extern s16 func_8028D268(char *arg0);
extern char D_8011FE88;

void func_802193C8(Struct802193C8 *arg0, s8 arg1) {
    arg0->field0 = 1;
    arg0->field1 = arg1;
    arg0->field2 = func_8028D268(&D_8011FE88);
    arg0->field4 = 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4D70_4 = 65536.0f;
const float unbake_rodata_800C4D74_4 = 65536.0f;
const float unbake_rodata_800C4D78_4 = 262144.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9F30_4 = 65536.0f;
const float unbake_rodata_800C9F34_4 = 65536.0f;
const float unbake_rodata_800C9F38_4 = 262144.0f;
#elif defined(VERSION_EU)
const double unbake_rodata_800C4D50_8 = 4294967296.0;
const double unbake_rodata_800C4D58_8 = 4294967296.0;
const float unbake_rodata_800C4D60_4 = 1.0f;
const float unbake_rodata_800C4D64_4 = (-1.0f);
const float unbake_rodata_800C4D68_4 = (-1.0f);
const float unbake_rodata_800C4D6C_4 = (-1.0f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4D30_4 = 0.00999999978f;
const float unbake_rodata_800C4D34_4 = 2.14748365e+09f;
const float unbake_rodata_800C4D38_4 = 0.00999999978f;
const float unbake_rodata_800C4D3C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4D40_4 = 0.00999999978f;
const float unbake_rodata_800C4D44_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4D10_4 = 10.2399998f;
const float unbake_rodata_800C4D14_4 = 102400.0f;
const float unbake_rodata_800C4D18_4 = 0.785398245f;
const float unbake_rodata_800C4D1C_4 = 0.305175781f;
const float unbake_rodata_800C4D20_4 = 200.0f;
const float unbake_rodata_800C4D24_4 = 255.0f;
const float unbake_rodata_800C4D28_4 = 7.67999983f;
const float unbake_rodata_800C4D2C_4 = 8.0f;
const float unbake_rodata_800C4D30_4 = 0.100000001f;
const float unbake_rodata_800C4D34_4 = 2.14748365e+09f;
#endif

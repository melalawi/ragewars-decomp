#include "common/types.h"
#include "span_1000/code_80203B1C.h"
#include "span_1000/types.h"
typedef struct Owner Owner;
/** Run the object's optional update hook, then copy one of two byte pairs into the record header. */







void func_802043E0_de(char *arg0, char *arg1) {
    char *base = ((Owner *)(arg0))->track + 0x14;
    Hook *hook = ((func_802043E0_S2 *)(arg1))->unk30;

    if (hook != 0 && hook->fn != 0) {
        hook->fn(arg0, arg1);
    }
    if (arg1[0x34] == 0) {
        arg0[1] = base[0xE];
        arg0[3] = base[0xF];
    } else {
        arg0[1] = base[0x1A];
        arg0[3] = base[0x1B];
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1BA4_4 = 0.899999976f;
const float unbake_rodata_800C1BA8_4 = 0.699999988f;
const float unbake_rodata_800C1BAC_4 = (-90.0f);
const float unbake_rodata_800C1BB0_4 = 90.0f;
const float unbake_rodata_800C1BB4_4 = 57.2957764f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6D14_4 = 3.14159298f;
const float unbake_rodata_800C6D18_4 = 6.28318596f;
const float unbake_rodata_800C6D1C_4 = (-3.14159298f);
const float unbake_rodata_800C6D20_4 = 6.28318596f;
const float unbake_rodata_800C6D24_4 = (-1.0f);
const float unbake_rodata_800C6D28_4 = 1.0f;
const float unbake_rodata_800C6D2C_4 = 0.0174532942f;
const float unbake_rodata_800C6D30_4 = 1.0471977f;
const float unbake_rodata_800C6D34_4 = 1.0471977f;
const float unbake_rodata_800C6D38_4 = 0.52359885f;
const float unbake_rodata_800C6D3C_4 = 0.52359885f;
const float unbake_rodata_800C6D40_4 = 0.5f;
const float unbake_rodata_800C6D44_4 = 0.17453295f;
const float unbake_rodata_800C6D48_4 = 0.17453295f;
const float unbake_rodata_800C6D4C_4 = 0.25f;
const float unbake_rodata_800C6D50_4 = 0.069813177f;
const float unbake_rodata_800C6D54_4 = 0.069813177f;
const float unbake_rodata_800C6D58_4 = 0.125f;
const float unbake_rodata_800C6D5C_4 = 0.100000001f;
const float unbake_rodata_800C6D60_4 = 0.0174532942f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1EA0_4 = 10.0f;
const float unbake_rodata_800C1EA4_4 = 0.261799425f;
const float unbake_rodata_800C1EA8_4 = 0.261799425f;
const float unbake_rodata_800C1EAC_4 = 0.5f;
const float unbake_rodata_800C1EB0_4 = 1.0f;
const float unbake_rodata_800C1EB4_4 = 3.14159274f;
const float unbake_rodata_800C1EB8_4 = 1.0f;
const float unbake_rodata_800C1EBC_4 = (-1.0f);
const float unbake_rodata_800C1EC0_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1EE0_4 = 10.0f;
const float unbake_rodata_800C1EE4_4 = 0.261799425f;
const float unbake_rodata_800C1EE8_4 = 0.261799425f;
const float unbake_rodata_800C1EEC_4 = 0.5f;
const float unbake_rodata_800C1EF0_4 = 1.0f;
const float unbake_rodata_800C1EF4_4 = 3.14159274f;
const float unbake_rodata_800C1EF8_4 = 1.0f;
const float unbake_rodata_800C1EFC_4 = (-1.0f);
const float unbake_rodata_800C1F00_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1C00_4 = 10.0f;
const float unbake_rodata_800C1C04_4 = 0.261799425f;
const float unbake_rodata_800C1C08_4 = 0.261799425f;
const float unbake_rodata_800C1C0C_4 = 0.5f;
const float unbake_rodata_800C1C10_4 = 1.0f;
const float unbake_rodata_800C1C14_4 = 3.14159274f;
const float unbake_rodata_800C1C18_4 = 1.0f;
const float unbake_rodata_800C1C1C_4 = (-1.0f);
const float unbake_rodata_800C1C20_4 = 1.0f;
#endif

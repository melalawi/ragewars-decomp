#include "span_16E000/code_80435010.h"
#include "span_16E000/types.h"
#include "span_C76B0/data.h"
#include "types.h"

/* Pulses entry i of the 2920-byte records D_800E54A4 points to: takes the sine of i plus the
   entry's phase word at 0x2C + 4i scaled by D_800E1EF8, maps it through the next two constants,
   and stores the unsigned result as the alpha byte at 0x10 of items 0x2C2 and 0x2C3 of the
   entry's window. */

#if defined(VERSION_DE)
#define VALUE_2C2 0x2E4
#define VALUE_2C3 0x2E5
#elif defined(VERSION_EU_X)
#define VALUE_2C2 0x2D5
#define VALUE_2C3 0x2D4
#else
#define VALUE_2C2 0x2C2
#define VALUE_2C3 0x2C3
#endif





extern struct Entry_func_80434FC4_de *D_800E1454_de;


#define SCALE (*(&D_800DDEC8_de + 1))
#define TWO_31 (*(&D_800DDED0 + 1))
extern float func_802B6560_de(float);
extern struct Resource_func_80419E54_de *func_8040EC30_de(void *, s32);

void func_80434FC4_de(s32 index) {
    float f;
    u32 alpha;
    struct Entry_func_80434FC4_de *entry;

    f = func_802B6560_de((float)index + (float)D_800E1454_de->phases[index] * D_800DDEC8_de)
        * SCALE + D_800DDED0;
    if (f >= TWO_31) {
        goto large;
    }
    alpha = (s32)f;
    goto converted;
large:
    alpha = (s32)(f - TWO_31);
    alpha |= 0x80000000;
converted:
    entry = &D_800E1454_de[index];
    func_8040EC30_de(entry->window, VALUE_2C2)->value = alpha;
    entry = &D_800E1454_de[index];
    func_8040EC30_de(entry->window, VALUE_2C3)->value = alpha;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DCB78_4 = 0.00333333341f;
const float unbake_rodata_800DCB7C_4 = 100.0f;
const float unbake_rodata_800DCB80_4 = 150.0f;
const float unbake_rodata_800DCB84_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E1EF8_4 = 0.00333333341f;
const float unbake_rodata_800E1EFC_4 = 100.0f;
const float unbake_rodata_800E1F00_4 = 150.0f;
const float unbake_rodata_800E1F04_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const float unbake_rodata_800EE548_4 = 0.00333333341f;
const float unbake_rodata_800EE54C_4 = 100.0f;
const float unbake_rodata_800EE550_4 = 150.0f;
const float unbake_rodata_800EE554_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E9708_4 = 0.00333333341f;
const float unbake_rodata_800E970C_4 = 100.0f;
const float unbake_rodata_800E9710_4 = 150.0f;
const float unbake_rodata_800E9714_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800DDEC8_4 = 0.00333333341f;
const float unbake_rodata_800DDECC_4 = 100.0f;
const float unbake_rodata_800DDED0_4 = 150.0f;
const float unbake_rodata_800DDED4_4 = 2.14748365e+09f;
#endif

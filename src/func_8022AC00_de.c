#include "span_1000/code_8022A8E0.h"
#include "span_1000/types.h"
#include "types.h"



extern s32 D_80142878;
extern u8 D_80142215;
extern Entry190 D_800FEB10[];






s32 func_8022AC00_de(void *arg0) {
    char *o = (char *)arg0;
    s32 value;
    s8 type;

    if (D_80142878 != 0 && ((struct Record_func_80208158_de *) ((ObjectLinks1454_3 *) o)->unk_5D8)->display != 0) {
        type = ((struct Record_func_80208158_de *) ((ObjectLinks1454_3 *) o)->unk_5D8)->kind;
        if (type == 0xB) {
            value = 0x19000;
        } else if (type == 0xC) {
            value = 0x19000;
        } else if (type == 0xE) {
            value = 0x12C00;
        } else if (type == 0xD) {
            value = 0x12C00;
        } else {
            value = ((func_802066A4_S3 *)(((ObjectLinks1454_3 *)(o))->unk_18))->unk18 << 8;
        }
    } else {
        value = ((func_802066A4_S3 *)(((ObjectLinks1454_3 *)(o))->unk_18))->unk18 << 8;
    }
    if (D_80142215 == 1 && ((ObjectLinks1454_3 *)(o))->unk_1450 == 0) {
        value += D_800FEB10[((ObjectLinks1454_3 *)(o))->unk_5D4].value;
    }
    return value;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C59B4_4 = 0.00100000005f;
const float unbake_rodata_800C59B8_4 = (-0.00100000005f);
const float unbake_rodata_800C59BC_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAC34_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5784_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C57A4_4 = 30.0f;
const float unbake_rodata_800C57A8_4 = 675.0f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C5848_8 = 0.0;
const double unbake_rodata_800C5850_8 = 4503599627370496.0;
const double unbake_rodata_800C5858_8 = 1.0;
const double unbake_rodata_800C5860_8 = 1.0;
const double unbake_rodata_800C5868_8 = 4503599627370496.0;
const double unbake_rodata_800C5870_8 = 1.0;
#endif

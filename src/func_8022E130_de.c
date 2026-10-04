#include "common/types.h"
#include "span_1000/code_8022E120.h"
#include "types.h"

/* Returns whether the entry func_8028B2F8_de finds in D_8011FE88 for an object's key at 0x14 exists
   and has bit 6 of its flags at 0x52 set. */




extern char D_8011BDC8[];
extern struct Entry_func_8022E130_de *func_8028B2F8_de(void *, s32);

s32 func_8022E130_de(struct func_80204468_S3 *object) {
    struct Entry_func_8022E130_de *entry;

    if (object->unk14 != 0) {
        entry = func_8028B2F8_de(D_8011BDC8, object->unk14);
        if (entry != 0 && (entry->flags & 0x40)) {
            return 1;
        }
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800CB298_4 = 3.0f;
const float unbake_rodata_800CB29C_4 = 0.0f;
const float unbake_rodata_800CB2A0_4 = 0.0f;
const float unbake_rodata_800CB2A4_4 = 0.0f;
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D05C4_4[] = {0x00, 0x23, 0x9F, 0xBC};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800CA088_2C[] = {0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xAE, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xAE, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800CA7EC_4[] = {0x00, 0x00, 0x04, 0x63};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800C9F54_10[] = {0x00, 0x00, 0x01, 0x2B, 0x01, 0x2B, 0x01, 0x2B, 0x01, 0x2B, 0x01, 0x2B, 0x01, 0x2B, 0x01, 0x2B};
#endif

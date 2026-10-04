#include "common/types.h"
#include "span_16E000/code_8041DBA0.h"
#include "types.h"

/* Returns the column of the first of the seventeen eight-byte entries in row r of D_800E381C whose
   identifier matches, or zero when none does. */


extern struct Shape_func_802764D4_de_2 D_800DF7CC[][17];

s32 func_8041EC44_de(s32 row, s32 id) {
    s32 i;

    for (i = 0; i < 0x11; i++) {
        if (D_800DF7CC[row][i].field_0 == id) {
            return i;
        }
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800DE47C_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E381C_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800EFE3C_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800EAFFC_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800DF7CC_4[] = {0x00, 0x00, 0x00, 0x00};
#endif

#include "basetypes.h"

/* Returns the index of the entry among the 0x24 28-byte entries of D_800E4694 whose identifier
   matches, or zero when none does. */
struct Entry {
    s32 id;
    char pad[28 - 4];
};

extern struct Entry D_800E4694[];

s32 func_80428300(s32 id) {
    s32 i;

    for (i = 0; i < 0x24; i++) {
        if (D_800E4694[i].id == id) {
            return i;
        }
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800DF2F4_2[] = {0x00, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E4694_2[] = {0x00, 0x00};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800F0CB4_2[] = {0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800EBE94_2[] = {0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800E0644_2[] = {0x00, 0x00};
#endif

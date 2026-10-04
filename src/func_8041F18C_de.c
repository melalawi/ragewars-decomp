#include "span_16E000/code_8041DBA0.h"
#include "types.h"

/* Returns the index of the first of the seventeen 0x70-byte slots of D_800E3A50 whose leading word equals the argument, or zero when none does. Adapted from func_8041F140_de with the slot word D_800E3A50 changed. */



extern struct Slot_func_8041F140_de D_800DFA00_de[];

s32 func_8041F18C_de(s32 key) {
    s32 index = 0;
    s32 found = 0;
    s32 i;

    for (i = 0; i < 17 && !found; i++) {
        if (D_800DFA00_de[i].key == key) {
            found = 1;
            index = i;
        }
    }
    return index;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800DE6B0_2[] = {0x00, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E3A50_2[] = {0x00, 0x00};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800F0070_2[] = {0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800EB230_2[] = {0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800DFA00_2[] = {0x00, 0x00};
#endif

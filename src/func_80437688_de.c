#include "common/types.h"
#include "span_166000/code_80426234.h"
#include "types.h"

#if defined(VERSION_DE)
/* Dispatches event arg1 through this file's 12-byte handler table, whose rows hold an event at D_800E1738, an actor kind at D_800E173C and a handler at D_800F1DB0_de: the first row whose event equals arg1 and whose kind equals the actor's halfword kind at 0xC, or is the wildcard 0x7530, receives all five arguments and its result is returned; with no such row, or an empty table, the result is zero. Adapted from func_802A1B50_de. */
#else
/* Dispatches event arg1 through this file's 12-byte handler table, whose rows hold an event at D_800F1DA8, an actor kind at D_800F1DAC and a handler at D_800F1DB0_de: the first row whose event equals arg1 and whose kind equals the actor's halfword kind at 0xC, or is the wildcard 0x7530, receives all five arguments and its result is returned; with no such row, or an empty table, the result is zero. Adapted from func_802A1B50_de. */
#endif




#if defined(VERSION_DE)
extern FieldRow D_800E1738[];
#else
extern FieldRow D_800F1DA8[];
#endif
#if defined(VERSION_DE)
extern FieldRow D_800E173C[];
#else
extern FieldRow D_800F1DAC[];
#endif
extern Handler80437868 D_800F1DB0_de;




s32 func_80437688_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    char *entry;
    s32 index;
    s32 wildcard;
    s32 actor_kind;
    s32 table_kind;

    if (D_800F1DB0_de != 0) {
        wildcard = 0x7530;
        entry = (char *)&D_800F1DB0_de;
        index = 0;
        do {
#if defined(VERSION_DE)
            if (D_800E1738[index].value == arg1) {
#else
            if (D_800F1DA8[index].value == arg1) {
#endif
                actor_kind = ((func_8021C9B4_S3 *)(arg0))->unkC;
#if defined(VERSION_DE)
                table_kind = D_800E173C[index].value;
#else
                table_kind = D_800F1DAC[index].value;
#endif
                if ((table_kind == actor_kind) || (table_kind == wildcard)) {
                    return (*(Handler80437868 *)entry)(arg0, arg1, arg2, arg3, arg4);
                }
            }
            entry += 0xC;
            index++;
        } while (*(Handler80437868 *)entry != 0);
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800E03E8_4[] = {0x00, 0x00, 0x0E, 0x08};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E5788_4[] = {0x00, 0x00, 0x0E, 0x08};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800F1DA8_4[] = {0x00, 0x00, 0x0E, 0x08};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800ECF88_4[] = {0x00, 0x00, 0x0E, 0x08};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800E1738_4[] = {0x00, 0x00, 0x0E, 0x08};
#endif

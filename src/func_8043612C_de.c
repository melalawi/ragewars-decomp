#include "common/types.h"
#include "span_16E000/code_80435CF0.h"
#include "types.h"

/* Dispatches event arg1 through this file's 12-byte handler table, whose rows hold an event at D_800E55C8, an actor kind at D_800E55CC and a handler at D_800E55D0: the first row whose event equals arg1 and whose kind equals the actor's halfword kind at 0xC, or is the wildcard 0x7530, receives all five arguments and its result is returned; with no such row, or an empty table, the result is zero. Adapted from func_802A1B50_de. */

typedef s32 (*Handler8043630C)(void *, s32, s32, s32, s32);


extern FieldRow D_800E1578[];
extern FieldRow D_800E157C[];
extern Handler8043630C D_800E1580;




s32 func_8043612C_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    char *entry;
    s32 index;
    s32 wildcard;
    s32 actor_kind;
    s32 table_kind;

    if (D_800E1580 != 0) {
        wildcard = 0x7530;
        entry = (char *)&D_800E1580;
        index = 0;
        do {
            if (D_800E1578[index].value == arg1) {
                actor_kind = ((func_8021C9B4_S3 *)(arg0))->unkC;
                table_kind = D_800E157C[index].value;
                if ((table_kind == actor_kind) || (table_kind == wildcard)) {
                    return (*(Handler8043630C *)entry)(arg0, arg1, arg2, arg3, arg4);
                }
            }
            entry += 0xC;
            index++;
        } while (*(Handler8043630C *)entry != 0);
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800E0228_4[] = {0x00, 0x00, 0x0E, 0x07};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E55C8_4[] = {0x00, 0x00, 0x0E, 0x07};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800F1BE8_4[] = {0x00, 0x00, 0x0E, 0x07};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800ECDC8_4[] = {0x00, 0x00, 0x0E, 0x07};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800E1578_4[] = {0x00, 0x00, 0x0E, 0x07};
#endif

#include "basetypes.h"

/* Dispatches event arg1 through this file's 12-byte handler table, whose rows hold an event at D_800E57DC, an actor kind at D_800E57E0 and a handler at D_800E57E4: the first row whose event equals arg1 and whose kind equals the actor's halfword kind at 0xC, or is the wildcard 0x7530, receives all five arguments and its result is returned; with no such row, or an empty table, the result is zero. Adapted from func_802A2B50. */

typedef s32 (*Handler80437B98)(void *, s32, s32, s32, s32);

typedef struct { s32 value; char pad[8]; } FieldRow;
extern FieldRow D_800E57DC[];
extern FieldRow D_800E57E0[];
extern Handler80437B98 D_800E57E4;

typedef struct func_80437B98_S1 func_80437B98_S1;
struct func_80437B98_S1 {
    char pad0[0xC];
    s16 unkC;
};

s32 func_80437B98(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    char *entry;
    s32 index;
    s32 wildcard;
    s32 actor_kind;
    s32 table_kind;

    if (D_800E57E4 != 0) {
        wildcard = 0x7530;
        entry = (char *)&D_800E57E4;
        index = 0;
        do {
            if (D_800E57DC[index].value == arg1) {
                actor_kind = ((func_80437B98_S1 *)(arg0))->unkC;
                table_kind = D_800E57E0[index].value;
                if ((table_kind == actor_kind) || (table_kind == wildcard)) {
                    return (*(Handler80437B98 *)entry)(arg0, arg1, arg2, arg3, arg4);
                }
            }
            entry += 0xC;
            index++;
        } while (*(Handler80437B98 *)entry != 0);
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800E043C_4[] = {0x00, 0x00, 0x0E, 0x08};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E57DC_4[] = {0x00, 0x00, 0x0E, 0x08};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800F1DFC_4[] = {0x00, 0x00, 0x0E, 0x08};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800ECFDC_4[] = {0x00, 0x00, 0x0E, 0x08};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800E178C_4[] = {0x00, 0x00, 0x0E, 0x08};
#endif

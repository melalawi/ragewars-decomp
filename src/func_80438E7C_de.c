#include "common/types.h"
#include "span_16E000/code_8043847C.h"
#include "types.h"

/* Dispatches event arg1 through this file's 12-byte handler table, whose rows hold an event at D_800E5834, an actor kind at D_800E5838 and a handler at D_800E583C: the first row whose event equals arg1 and whose kind equals the actor's halfword kind at 0xC, or is the wildcard 0x7530, receives all five arguments and its result is returned; with no such row, or an empty table, the result is zero. Adapted from func_802A1B50_de. */

typedef s32 (*Handler8043905C)(void *, s32, s32, s32, s32);


extern FieldRow D_800E17E4_de[];
extern FieldRow D_800E17E8[];
extern Handler8043905C D_800E17EC;




s32 func_80438E7C_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    char *entry;
    s32 index;
    s32 wildcard;
    s32 actor_kind;
    s32 table_kind;

    if (D_800E17EC != 0) {
        wildcard = 0x7530;
        entry = (char *)&D_800E17EC;
        index = 0;
        do {
            if (D_800E17E4_de[index].value == arg1) {
                actor_kind = ((func_8021C9B4_S3 *)(arg0))->unkC;
                table_kind = D_800E17E8[index].value;
                if ((table_kind == actor_kind) || (table_kind == wildcard)) {
                    return (*(Handler8043905C *)entry)(arg0, arg1, arg2, arg3, arg4);
                }
            }
            entry += 0xC;
            index++;
        } while (*(Handler8043905C *)entry != 0);
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800E0494_4[] = {0x00, 0x00, 0x0E, 0x08};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E5834_4[] = {0x00, 0x00, 0x0E, 0x08};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800F1E54_4[] = {0x00, 0x00, 0x0E, 0x08};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800ED034_4[] = {0x00, 0x00, 0x0E, 0x08};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800E17E4_4[] = {0x00, 0x00, 0x0E, 0x08};
#endif

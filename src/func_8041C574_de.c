#include "common/types.h"
#include "span_16E000/code_8041BC50.h"
#include "types.h"

/* Dispatches event arg1 through this file's 12-byte handler table, whose rows hold an event at D_800E351C, an actor kind at D_800E3520 and a handler at D_800E3524: the first row whose event equals arg1 and whose kind equals the actor's halfword kind at 0xC, or is the wildcard 0x7530, receives all five arguments and its result is returned; with no such row, or an empty table, the result is zero. Adapted from func_802A1B50_de. */



extern s32 D_800DF4CC;
extern s32 D_800DF4D0;
extern Handler802A2B50 D_800DF4D4;

s32 func_8041C574_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    char *entry;
    s32 offset;
    s32 wildcard;
    s32 actor_kind;
    s32 table_kind;

    if (D_800DF4D4 != 0) {
        wildcard = 0x7530;
        entry = (char *)&D_800DF4D4;
        offset = 0;
        do {
            if (((struct Shape_typemap_3 *) (((char *) (&D_800DF4CC)) + offset))->field_0 == arg1) {
                actor_kind = ((struct func_8021C9B4_S3 *) ((char *) arg0))->unkC;
                table_kind = ((struct Shape_typemap_3 *) (((char *) (&D_800DF4D0)) + offset))->field_0;
                if ((table_kind == actor_kind) || (table_kind == wildcard)) {
                    return (*(Handler802A2B50 *)entry)(arg0, arg1, arg2, arg3, arg4);
                }
            }
            entry += 0xC;
            offset += 0xC;
        } while (*(Handler802A2B50 *)entry != 0);
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800DE17C_4[] = {0x00, 0x00, 0x0E, 0x08};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E351C_4[] = {0x00, 0x00, 0x0E, 0x08};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800EFB3C_4[] = {0x00, 0x00, 0x0E, 0x08};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800EACFC_4[] = {0x00, 0x00, 0x0E, 0x08};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800DF4CC_4[] = {0x00, 0x00, 0x0E, 0x08};
#endif

#include "common/types.h"
#include "span_1000/code_802A26F8.h"
#include "types.h"



extern s32 D_800CD9B0;
extern s32 D_800CD9B4;
extern Handler802A2B50 D_800CD9B8;

s32 func_802A1B50_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    char *entry;
    s32 offset;
    s32 wildcard;
    s32 actor_kind;
    s32 table_kind;

    if (D_800CD9B8 != 0) {
        wildcard = 0x7530;
        entry = (char *)&D_800CD9B8;
        offset = 0;
        do {
            if (((struct Shape_typemap_3 *) (((char *) (&D_800CD9B0)) + offset))->field_0 == arg1) {
                actor_kind = ((struct func_8021C9B4_S3 *) ((char *) arg0))->unkC;
                table_kind = ((struct Shape_typemap_3 *) (((char *) (&D_800CD9B4)) + offset))->field_0;
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
const unsigned char unbake_rodata_800CD8C0_4[] = {0x00, 0x00, 0x0E, 0x07};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D2C20_4[] = {0x00, 0x00, 0x0E, 0x07};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800CE590_4[] = {0x00, 0x00, 0x0E, 0x07};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800CEF60_4[] = {0x00, 0x00, 0x0E, 0x07};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800CD9B0_4[] = {0x00, 0x00, 0x0E, 0x07};
#endif

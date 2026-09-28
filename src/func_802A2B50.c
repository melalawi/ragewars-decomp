#include "basetypes.h"

typedef s32 (*Handler802A2B50)(void *, s32, s32, s32, s32);

extern s32 D_800D2C20;
extern s32 D_800D2C24;
extern Handler802A2B50 D_800D2C28;

s32 func_802A2B50(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    char *entry;
    s32 offset;
    s32 wildcard;
    s32 actor_kind;
    s32 table_kind;

    if (D_800D2C28 != 0) {
        wildcard = 0x7530;
        entry = (char *)&D_800D2C28;
        offset = 0;
        do {
            if (*(s32 *)((char *)&D_800D2C20 + offset) == arg1) {
                actor_kind = *(s16 *)((char *)arg0 + 0xC);
                table_kind = *(s32 *)((char *)&D_800D2C24 + offset);
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

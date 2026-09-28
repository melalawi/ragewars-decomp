#include "basetypes.h"

extern s32 func_8022EAFC(void *arg0, s32 arg1);

s32 func_8022F95C(void *arg0)
{
    s32 slot;
    s32 category;
    s32 special;
    char *actor;
    char *indexed;
    char *scan;

    actor = arg0;
    indexed = actor;
    indexed += *(s16 *)(actor + 0x62E) * 2;
    category = *(s8 *)(indexed + 0x603);
    if (category < 0) {
        category = 0;
    }
    if (category >= 8) {
        category = 0;
    }

    category++;
    if (category < 8) {
        special = 6;
        do {
            for (slot = 0, scan = actor; slot < 22; slot++, scan += 2) {
                if (category == *(s8 *)(scan + 0x603)) {
                    break;
                }
            }
            if ((slot < 22) && func_8022EAFC(actor, slot)) {
                if ((slot != special) || (*(s16 *)(actor + 0x5F4) >= 11)) {
                    if ((*(s32 *)(actor + 0x1450) == 0) || (slot < 18)) {
                        return slot;
                    }
                }
            }
            category++;
            slot = 0;
        } while (category < 8);
    }

    indexed = actor;
    indexed += *(s16 *)(actor + 0x62E) * 2;
    category = *(s8 *)(indexed + 0x603);
    if (category < 0) {
        category = 0;
    }
    if (category >= 8) {
        category = 0;
    }

    category--;
    if (category > 0) {
        special = 6;
        do {
            for (slot = 0, scan = actor; slot < 22; slot++, scan += 2) {
                if (category == *(s8 *)(scan + 0x603)) {
                    break;
                }
            }
            if ((slot < 22) && func_8022EAFC(actor, slot)) {
                if ((slot != special) || (*(s16 *)(actor + 0x5F4) >= 11)) {
                    return slot;
                }
            }
            category--;
            slot = 0;
        } while (category > 0);
    }
    return 0;
}

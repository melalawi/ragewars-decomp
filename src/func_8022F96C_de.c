#include "span_1000/code_8022F054.h"
#include "types.h"

extern s32 func_8022EB0C_de(void *arg0, s32 arg1);








s32 func_8022F96C_de(void *arg0)
{
    s32 slot;
    s32 category;
    s32 special;
    char *actor;
    char *indexed;
    char *scan;

    actor = arg0;
    indexed = actor;
    indexed += ((func_8022F95C_S1 *)(actor))->unk62E * 2;
    category = ((func_8022F95C_S2 *)(indexed))->unk603;
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
                if (category == ((func_8022F95C_S2 *)(scan))->unk603) {
                    break;
                }
            }
            if ((slot < 22) && func_8022EB0C_de(actor, slot)) {
                if ((slot != special) || (((func_8022F95C_S1 *)(actor))->unk5F4 >= 11)) {
                    if ((((func_8022F95C_S1 *)(actor))->unk1450 == 0) || (slot < 18)) {
                        return slot;
                    }
                }
            }
            category++;
            slot = 0;
        } while (category < 8);
    }

    indexed = actor;
    indexed += ((func_8022F95C_S1 *)(actor))->unk62E * 2;
    category = ((func_8022F95C_S2 *)(indexed))->unk603;
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
                if (category == ((func_8022F95C_S2 *)(scan))->unk603) {
                    break;
                }
            }
            if ((slot < 22) && func_8022EB0C_de(actor, slot)) {
                if ((slot != special) || (((func_8022F95C_S1 *)(actor))->unk5F4 >= 11)) {
                    return slot;
                }
            }
            category--;
            slot = 0;
        } while (category > 0);
    }
    return 0;
}

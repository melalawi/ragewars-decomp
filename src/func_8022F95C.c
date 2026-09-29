#include "basetypes.h"

extern s32 func_8022EAFC(void *arg0, s32 arg1);

typedef struct func_8022F95C_S1 func_8022F95C_S1;
typedef struct func_8022F95C_S2 func_8022F95C_S2;
typedef struct func_8022F95C_S3 func_8022F95C_S3;
struct func_8022F95C_S1 {
    char pad0[0x5F4];
    s16 unk5F4;
    char pad5F4[0x62E - 0x5F4 - sizeof(s16)];
    s16 unk62E;
    char pad62E[0x1450 - 0x62E - sizeof(s16)];
    s32 unk1450;
};
struct func_8022F95C_S2 {
    char pad0[0x603];
    s8 unk603;
};
struct func_8022F95C_S3 {
    char pad0[0x603];
    s8 unk603;
};

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
                if (category == ((func_8022F95C_S3 *)(scan))->unk603) {
                    break;
                }
            }
            if ((slot < 22) && func_8022EAFC(actor, slot)) {
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
                if (category == ((func_8022F95C_S3 *)(scan))->unk603) {
                    break;
                }
            }
            if ((slot < 22) && func_8022EAFC(actor, slot)) {
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

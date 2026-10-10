#include "common/types_1dc8418c21db.h"
#include "resident_event_handler.h"
#include "shared/func_8044DA54_de_closed.h"
#include "stddef.h"
#include "types.h"
s32 func_80277C54_de(void *arg0, void **arg1, s32 *arg2);
s32 func_80250938_de(void *arg0, void *arg1);

typedef struct HitBox {
    char pad0[0xA0];
    f32 minX;
    f32 minY;
    f32 minZ;
    f32 maxX;
    f32 maxY;
    f32 maxZ;
    char padB8[2];
    u8 flagBA;
    char padBB[2];
    u8 flagBD;
    char padBE[2];
} HitBox;

typedef struct HitBoxTable {
    s32 unk0;
    s32 count;
    HitBox boxes[1];
} HitBoxTable;

typedef struct IdList {
    u16 count;
    s16 ids[1];
} IdList;

typedef struct Bounds {
    f32 minX;
    f32 minY;
    f32 minZ;
    f32 maxX;
    f32 maxY;
    f32 maxZ;
} Bounds;

s32 func_80278020_de(Bounds *arg0, void *arg1, void **arg2, s32 *arg3, u8 *arg4) {
    s32 result;
    s32 count;
    s32 idx;
    s32 found;
    s32 n;
    s32 *flagTable;
    s32 key;
    s32 v;
    s16 *p;
    s16 len;
    IdList *list;
    HitBoxTable *table;
    HitBox *box;
    void **out;

    count = 0;
    result = 0;
    if (arg1 == NULL) {
        return func_80277C54_de(arg0, arg2, arg3);
    }
    table = func_8028FDB4_de(arg1, 2);
    idx = table->count - 1;
    box = table->boxes;
    out = arg2;
    for (; idx != -1; idx--, box++) {
        {
            if (arg0->maxX > box->minX && arg0->minX < box->maxX
                && arg0->maxZ > box->minZ && arg0->minZ < box->maxZ
                && arg0->maxY > box->minY && arg0->minY < box->maxY) {
                if (box->flagBD != 0 && *arg4 != 1) {
                    found = 0;
                    flagTable = func_8028FDB4_de(arg1, 3);
                    if (*flagTable > 0) {
                        list = func_8028FDB4_de(flagTable, idx);
                        len = list->count;
                        p = list->ids;
                        key = func_80250938_de(arg4, arg1);
                        n = 0;
                        if (found < len) {
                            do {
                                v = *p;
                                if (v >= 0x1770) {
                                    v -= 0x1770;
                                } else if (v >= 0xFA0) {
                                    v -= 0xFA0;
                                } else if (v >= 0x7D0) {
                                    v -= 0x7D0;
                                }
                                n++;
                                if (v == key) {
                                    found = 1;
                                    break;
                                }
                                p++;
                            } while (n < len);
                        }
                    }
                } else {
                    found = 1;
                }
                if (found != 0) {
                    *out = box;
                    out++;
                    count++;
                    if (box->flagBA != 0) {
                        result = 1;
                    }
                    if (count == 0x40) {
                        break;
                    }
                }
            }
        }
    }
    *arg3 = count;
    return result;
}

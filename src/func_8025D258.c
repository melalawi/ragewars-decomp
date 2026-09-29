/* Picks a random entry from the range func_80265570 finds for an id in the owner's table: returns -1
 * when there is none and the single entry when the range has one; otherwise every entry weighs 100, a
 * random draw selects one, and when it equals the entry to avoid it steps to the next entry (or back
 * from the last). */
#include "basetypes.h"

extern s32 func_80265570(s32, s32, s32, s32 *, s32 *);
extern s32 func_80274544(void);

typedef struct func_8025D258_S1 func_8025D258_S1;
struct func_8025D258_S1 {
    char pad0[0x2B60];
    s32 unk2B60;
    char pad2B60[0x2B64 - 0x2B60 - sizeof(s32)];
    s32 unk2B64;
};

s32 func_8025D258(void **arg0, s16 id, s16 avoid) {
    s32 first;
    s32 last;
    s32 total;
    s32 entry;
    s32 draw;
    char *table;
    s32 result;

    total = 0;
    table = *arg0;
    if (func_80265570(((func_8025D258_S1 *)(table))->unk2B60, ((func_8025D258_S1 *)(table))->unk2B64, id, &first, &last) == 0) {
        return -1;
    }
    result = first;
    if (result != last) {
        for (entry = first; entry <= last; entry++) {
            total += 100;
        }
        draw = func_80274544() % total;
        total = 0;
        for (entry = first; entry < last; entry++) {
            total += 100;
            if (total >= draw) {
                break;
            }
        }
        if (avoid != 0 && entry == avoid) {
            if (entry == last) {
                entry--;
            } else {
                entry++;
            }
        }
        result = entry;
    }
    return result;
}

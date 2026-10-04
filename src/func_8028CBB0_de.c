#include "span_1000/code_8028B64C.h"
#include "types.h"

/* Returns the entry in an object's pointer list at 0x1024, counted at 0x10A4, whose position lies nearest a given position, or null when none lies closer than D_800CA3E0. Adapted from func_8022A480_de with the linked list walk replaced by a do-while loop, guarded by the zero index against the count, over a counted array of entry pointers read before the guard, the position read from a record at offset 8, and the differences taken from the position. */





struct Entry_func_8028CBB0_de *func_8028CBB0_de(struct Owner_func_8028CBB0_de *owner, struct Entry_func_8028CBB0_de *pos) {
    s32 i;
    struct Entry_func_8028CBB0_de *best;
    f32 min;
    struct Entry_func_8028CBB0_de **entries;
    f32 dx, dy, dz, distSq;
    struct Entry_func_8028CBB0_de *e;
    s32 n;
    struct Entry_func_8028CBB0_de **p;

    i = 0;
    best = 0;
    min = (3.4028234663852886e+38f);
    n = owner->count;
    entries = owner->entries;
    if (i < n) {
        p = entries;
        do {
            e = *p;
            dx = pos->x - e->x;
            dx = dx * dx;
            dy = pos->y - e->y;
            dy = dy * dy;
            dz = pos->z - e->z;
            dz = dz * dz;
            distSq = (dx + dy) + dz;
            if (distSq < min) {
                min = distSq;
                best = e;
            }
            i++;
            p++;
        } while (i < n);
    }
    return best;
}

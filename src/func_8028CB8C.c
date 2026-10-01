#include "basetypes.h"

/* Returns the entry in an object's pointer list at 0x1024, counted at 0x10A4, whose position lies nearest a given position, or null when none lies closer than D_800CA3E0. Adapted from func_8022A470 with the linked list walk replaced by a do-while loop, guarded by the zero index against the count, over a counted array of entry pointers read before the guard, the position read from a record at offset 8, and the differences taken from the position. */
struct Entry {
    char pad[8];
    f32 x;
    f32 y;
    f32 z;
};

struct Owner {
    char pad[0x1024];
    struct Entry *entries[0x20];
    s32 count;
};

extern f32 D_800CA3E0;

struct Entry *func_8028CB8C(struct Owner *owner, struct Entry *pos) {
    s32 i;
    struct Entry *best;
    f32 min;
    struct Entry **entries;
    f32 dx, dy, dz, distSq;
    struct Entry *e;
    s32 n;
    struct Entry **p;

    i = 0;
    best = 0;
    min = D_800CA3E0;
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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5220_4 = 3.40282347e+38f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA3E0_4 = 3.40282347e+38f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C55A0_4 = 3.40282347e+38f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C55E0_4 = 3.40282347e+38f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C52F0_4 = 3.40282347e+38f;
#endif

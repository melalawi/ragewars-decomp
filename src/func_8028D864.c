/* Releases the resource of each of the owner's listed entries through func_802536F4, then clears the counters at 0x944, 0xC4C and 0x10BC, and moves the entry count to 0x1500 and zeroes it. */
#include "basetypes.h"

typedef struct {
    s32 resource;
    s32 unk4;
    s32 unk8;
} Entry;

typedef struct {
    char pad0[0x944];
    s32 unk944;
    char pad948[0xC4C - 0x948];
    s32 unkC4C;
    char padC50[0x10BC - 0xC50];
    s32 unk10BC;
    char pad10C0[0x1500 - 0x10C0];
    s32 prevCount;
    s32 count;
    Entry entries[1];
} Owner;

extern void func_802536F4(s32, s32);

void func_8028D864(Owner *owner) {
    s32 i;
    s32 n;
    s32 count;
    Entry *entries;

    n = owner->count;
    entries = owner->entries;
    for (i = 0; i < n; i++) {
        func_802536F4(0, entries[i].resource);
    }
    count = owner->count;
    owner->unk944 = 0;
    owner->unkC4C = 0;
    owner->unk10BC = 0;
    owner->count = 0;
    owner->prevCount = count;
}

#include "basetypes.h"

/* Records an array of 0x40-byte entries and half its count in a list header, runs func_802BBC50 on every entry, then passes the header to func_80279A00. Adapted from func_802B5090 with the five zero stores replaced by the array pointer and half count, the per-entry call taking only the entry, the stride 0x40, and a trailing call on the header added. */
struct Header {
    void *entries;
    s32 half;
};

extern void func_802BBC50(void *entry);
extern void func_80279A00(struct Header *header);

void func_8044BFD0(struct Header *header, void *entries, s32 count) {
    s32 i;
    char *p;

    i = 0;
    header->entries = entries;
    header->half = count / 2;
    if (count > 0) {
        p = (char *)entries;
        do {
            func_802BBC50(p);
            i += 1;
            p += 0x40;
        } while (i < count);
    }
    func_80279A00(header);
}

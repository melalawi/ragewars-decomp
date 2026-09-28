/* Releases one page of a resource's TLB slot: clears the odd (flag 1) or even page of the slot's entry in
 * D_80103F28 and, when the other page is still in use, remaps the slot with only that page through
 * func_802B2440; otherwise it unmaps the slot through func_802B24C0 and frees its virtual page. The
 * resource then has no slot. */
#include "basetypes.h"

typedef struct {
    u16 page;
    u8 even;
    u8 odd;
} TlbSlot;

typedef struct {
    char pad0[8];
    u16 flags;
    char padA;
    u8 slot;
} Mapping;

extern TlbSlot D_80103F28[];
extern char D_80156000;
extern void func_802B2440(s32, s32, s32, s32, s32, s32);
extern void func_802B24C0(s32);

void func_8023C074(Mapping *mapping) {
    s32 slot;

    if (mapping->slot == 0xFF) {
        return;
    }
    if (mapping->flags & 1) {
        D_80103F28[mapping->slot].odd = 0xFF;
        slot = mapping->slot;
        if (D_80103F28[slot].even == 0xFF) {
            goto unmap;
        }
        func_802B2440(slot, 0, D_80103F28[slot].page << 12,
                      ((s32)&D_80156000 & 0x3FFFFFF) + (D_80103F28[slot].even << 12), -1, 7);
    } else {
        D_80103F28[mapping->slot].even = 0xFF;
        slot = mapping->slot;
        if (D_80103F28[slot].odd == 0xFF) {
        unmap:
            func_802B24C0(slot);
            D_80103F28[mapping->slot].page = 0xFFFF;
        } else {
            func_802B2440(slot, 0, D_80103F28[slot].page << 12, -1,
                          ((s32)&D_80156000 & 0x3FFFFFF) + (D_80103F28[slot].odd << 12), 7);
        }
    }
    mapping->slot = 0xFF;
}

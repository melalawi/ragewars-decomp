#include "basetypes.h"

/* Creates the address hash table: rounds the requested capacity up to a power of two, allocates twice that many 16-byte slots from pool D_801051A0 (keeping the half size, slot count and both index masks in globals), and clears every slot, numbering each with its index. */

typedef struct Slot {
    s32 key;
    s32 value;
    u32 index;
    struct Slot *next;
} Slot;

extern s32 D_800D0930;
extern u32 D_800D0934;
extern s32 D_80105190;
extern Slot *D_80105194;
extern s32 D_80105198;
extern char D_801051A0;
extern Slot *func_802558C0(void *, s32);

void func_80255280(s32 capacity)
{
    s32 bits = 0;
    s32 top = 0;
    s32 i;
    s32 half;
    u32 n;

    for (i = 0; i < 32; i++) {
        s32 bit = 1 << i;
        if (capacity & bit) {
            bits++;
            top = i;
        }
    }
    if (bits != 1) {
        top++;
    }
    half = 1 << top;
    D_800D0934 = half * 2;
    D_800D0930 = half;
    D_80105190 = D_800D0934 - 2;
    D_80105198 = D_800D0934 - 1;
    D_80105194 = func_802558C0(&D_801051A0, half << 5);
    for (n = 0; n < D_800D0934; n++) {
        D_80105194[n].value = 0;
        D_80105194[n].key = 0;
        D_80105194[n].next = 0;
        D_80105194[n].index = n;
    }
}

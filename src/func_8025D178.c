#include "basetypes.h"

/* Initialises a resource record with the resource, -1 at 4 and 0xC, zero at 8 and 0x14, 0x40 at 0x18, and at 0x1C the halfword func_802B75E0 returns for func_80258D60's result on the stored resource and D_800D0D78. Adapted from func_80205694 with the two calls replaced by field stores and a nested call pair whose first argument is read back from the record. */
struct Record {
    s32 resource;
    s32 a;
    s32 b;
    s32 c;
    s32 pad10;
    s32 d;
    s32 size;
    s32 value;
};

extern char D_800D0D78[];
extern void *func_80258D60(s32);
extern s16 func_802B75E0(void *, void *);

void func_8025D178(struct Record *record, s32 resource) {
    record->resource = resource;
    record->a = -1;
    record->c = -1;
    record->b = 0;
    record->d = 0;
    record->size = 0x40;
    record->value = func_802B75E0(func_80258D60(record->resource), D_800D0D78);
}

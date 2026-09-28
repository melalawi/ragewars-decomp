#include "basetypes.h"

/* Passes func_80404E28 D_800E28C8 when D_8015375C is set, otherwise the signed byte at offset 4 of
   the object at offset 0x20 of a record. */
struct Inner {
    char pad[4];
    signed char value;
};

struct Record {
    char pad[0x20];
    struct Inner *inner;
};

extern s32 D_8015375C;
extern s32 D_800E28C8;
extern void func_80404E28(s32);

void func_80409F58(struct Record *record) {
    s32 value;

    if (D_8015375C != 0) {
        value = D_800E28C8;
    } else {
        value = record->inner->value;
    }
    func_80404E28(value);
}

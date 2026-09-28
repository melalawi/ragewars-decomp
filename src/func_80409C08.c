#include "basetypes.h"

/* Returns D_800E28C8 when D_8015375C is set, otherwise the signed byte at offset 4 of the object
   at offset 0x20 of a record. */
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

s32 func_80409C08(struct Record *record) {
    if (D_8015375C != 0) {
        return D_800E28C8;
    }
    return record->inner->value;
}

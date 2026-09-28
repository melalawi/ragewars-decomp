#include "basetypes.h"

/* Reports a value through the second argument and returns a word: D_800E28C8 and zero when
   D_8015375C is set, otherwise the signed byte at offset 4 of the object at 0x20 of a record and
   the record's word at 0x1C. */
struct Inner {
    char pad[4];
    signed char value;
};

struct Record {
    char pad[0x1C];
    s32 result;
    struct Inner *inner;
};

extern s32 D_8015375C;
extern s32 D_800E28C8;

s32 func_80409F20(struct Record *record, s32 *out) {
    s32 value;
    s32 result;

    if (D_8015375C != 0) {
        value = D_800E28C8;
        result = 0;
    } else {
        value = record->inner->value;
        result = record->result;
    }
    *out = value;
    return result;
}

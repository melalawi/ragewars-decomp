#include "basetypes.h"

/* Stores four values into the consecutive words at offsets 0x2C to 0x38 of a record. */
struct Quad {
    char pad[0x2C];
    s32 values[4];
};

void func_8040F298(struct Quad *record, s32 first, s32 second, s32 third, s32 fourth) {
    record->values[0] = first;
    record->values[1] = second;
    record->values[2] = third;
    record->values[3] = fourth;
}

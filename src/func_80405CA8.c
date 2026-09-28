#include "basetypes.h"

/* Clears a record: the words at offsets 0, 4, 8, 0x18 and 0x1C, and the three-word array at 0xC
   from its last entry down. */
struct Record {
    s32 a;
    s32 b;
    s32 c;
    s32 values[3];
    s32 d;
    s32 e;
};

void func_80405CA8(struct Record *record) {
    s32 i;

    record->a = 0;
    record->b = 0;
    record->c = 0;
    record->d = 0;
    record->e = 0;
    for (i = 2; i >= 0; i--) {
        record->values[i] = 0;
    }
}

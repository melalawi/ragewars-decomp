#include "basetypes.h"

/* Resets a five-word record: clears the first three words, stores a value in the fourth and one
   in the fifth, then calls func_802A338C. */
struct Record {
    s32 a;
    s32 b;
    s32 c;
    s32 value;
    s32 active;
};

extern void func_802A338C();

void func_8042201C(struct Record *record, s32 value) {
    record->b = 0;
    record->a = 0;
    record->c = 0;
    record->value = value;
    record->active = 1;
    func_802A338C();
}

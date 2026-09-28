#include "basetypes.h"

/* Stores a count in a record and, when it is positive, the handle func_8028B1F8 returns for
   D_8011FE88 and that count at offset 0x34; otherwise the handle is -1. Returns the handle. */
struct Record {
    s32 count;
    char pad4[0x34 - 4];
    s32 handle;
};

extern char D_8011FE88[];
extern s32 func_8028B1F8(void *, s32);

s32 func_80439E60(struct Record *record, s32 count) {
    record->count = count;
    record->handle = -1;
    if (count > 0) {
        record->handle = func_8028B1F8(D_8011FE88, count);
    }
    return record->handle;
}

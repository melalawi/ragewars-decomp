#include "basetypes.h"

/* Returns whether the entry func_8028B2D4 finds in D_8011FE88 for an object's key at 0x14 exists
   and has bit 6 of its flags at 0x52 set. */
struct Entry {
    char pad[0x52];
    u16 flags;
};

struct Object {
    char pad[0x14];
    s32 key;
};

extern char D_8011FE88[];
extern struct Entry *func_8028B2D4(void *, s32);

s32 func_8022E120(struct Object *object) {
    struct Entry *entry;

    if (object->key != 0) {
        entry = func_8028B2D4(D_8011FE88, object->key);
        if (entry != 0 && (entry->flags & 0x40)) {
            return 1;
        }
    }
    return 0;
}

#include "basetypes.h"

/* Returns the float at offset 0x20 of the entry func_8028B2D4 finds in D_8011FE88 for an object's
   key at 0x14, when the key's flag halfword at 2 has bit 0 set; zero otherwise. */
struct Key {
    u16 pad0;
    u16 flags;
};

struct Entry {
    char pad[0x20];
    f32 value;
};

struct Object {
    char pad[0x14];
    struct Key *key;
};

extern char D_8011FE88[];
extern struct Entry *func_8028B2D4(void *, struct Key *);

f32 func_8024E7FC(struct Object *object) {
    struct Entry *entry;

    if (object->key != 0 && (object->key->flags & 1)) {
        entry = func_8028B2D4(D_8011FE88, object->key);
        if (entry != 0) {
            return entry->value;
        }
    }
    return 0.0f;
}

#include "basetypes.h"

/* Releases an object through func_80254784, first releasing the object it holds at offset 0x44
   when there is one, and returns zero. */
struct Object {
    char pad[0x44];
    void *child;
};

extern void func_80254784(void *);

s32 func_80412D20(struct Object *object) {
    struct Object *self = object;

    if (object->child != 0) {
        func_80254784(object->child);
    }
    func_80254784(self);
    return 0;
}

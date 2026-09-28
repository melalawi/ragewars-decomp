#include "basetypes.h"

/* Releases the two handles at offsets 0x11BC and 0x11C0 of an object: each goes to func_8025CA44
   with what func_8025CC8C returns, and each is then cleared. */
struct Object {
    char pad[0x11BC];
    s32 first;
    s32 second;
};

extern void *func_8025CC8C();
extern void func_8025CA44(void *, s32);

void func_8044ACCC(struct Object *object) {
    func_8025CA44(func_8025CC8C(), object->first);
    object->first = 0;
    func_8025CA44(func_8025CC8C(), object->second);
    object->second = 0;
}

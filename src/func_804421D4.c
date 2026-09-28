#include "basetypes.h"

/* Forwards its four arguments to func_8043FFAC, adding the word the object's pointer at offset
   0x14 addresses and a zero as the fifth and sixth. func_804421D4 and func_804421FC are the
   same function. */
struct Object {
    char pad[0x14];
    s32 *source;
};

extern void func_8043FFAC(struct Object *, s32, s32, s32, s32, s32);

void func_804421D4(struct Object *object, s32 second, s32 third, s32 fourth) {
    func_8043FFAC(object, second, third, fourth, *object->source, 0);
}

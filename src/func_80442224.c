#include "basetypes.h"

/* Forwards its four arguments to func_8043FFAC with, as the fifth, a one-character string made
   of the byte at offset 0x17 of the object, and a zero as the sixth. */
struct Object {
    char pad[0x17];
    u8 character;
};

extern void func_8043FFAC(struct Object *, s32, s32, s32, u8 *, s32);

void func_80442224(struct Object *object, s32 second, s32 third, s32 fourth) {
    u8 text[2];

    text[0] = object->character;
    text[1] = 0;
    func_8043FFAC(object, second, third, fourth, text, 0);
}

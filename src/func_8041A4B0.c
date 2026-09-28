#include "basetypes.h"

/* Stores a mode at offset 0x58 of an object and plays sound 0xE77 for mode 1 or 0xE76 for mode 2
   through func_8025DF54. */
struct Object {
    char pad[0x58];
    s32 mode;
};

extern void func_8025DF54(s32);

void func_8041A4B0(struct Object *object, s32 mode) {
    object->mode = mode;
    switch (mode) {
    case 1:
        func_8025DF54(0xE77);
        break;
    case 2:
        func_8025DF54(0xE76);
        break;
    }
}

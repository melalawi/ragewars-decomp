#include "basetypes.h"

/* Clears the two words at offsets 0x1C8 and 0x1CC of an object; func_80442CB0, which follows it,
   tests the word at 0x1CC. */
struct Object1C8 {
    char pad[0x1C8];
    s32 first;
    s32 second;
};

void func_80442CA4(struct Object1C8 *object) {
    object->second = 0;
    object->first = 0;
}

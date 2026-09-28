#include "basetypes.h"

/* Sets the word at offset 0x478 of the second argument when the halfword the first starts with
   is 3. */
struct Object {
    char pad[0x478];
    s32 flag;
};

void func_80442E64(s16 *record, struct Object *object) {
    if (*record == 3) {
        object->flag = 1;
    }
}

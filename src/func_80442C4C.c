#include "basetypes.h"

/* Hands func_80442460 a target and the scale twice: the target is what func_8043F290 returns for
   an object of kind 5, otherwise the word the pointer at offset 0x14 addresses. */
struct Object {
    s32 pad0;
    s16 kind;
    char pad6[0x14 - 6];
    void **target;
};

extern void *func_8043F290(struct Object *);
extern void func_80442460(void *, f32, f32);

void func_80442C4C(struct Object *object, f32 scale) {
    void *target;

    if (object->kind == 5) {
        target = func_8043F290(object);
    } else {
        target = *object->target;
    }
    func_80442460(target, scale, scale);
}

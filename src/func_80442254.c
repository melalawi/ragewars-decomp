#include "basetypes.h"

/* Forwards its four arguments to func_8043FFAC with what func_8043F290 returns for the object as the fifth and a one as the sixth. Adapted from func_804421FC with the fifth argument taken from func_8043F290 and a one as the sixth changed. */
struct Object {
    char pad[0x14];
};

extern s32 func_8043F290(struct Object *);
extern void func_8043FFAC(struct Object *, s32, s32, s32, s32, s32);

void func_80442254(struct Object *object, s32 second, s32 third, s32 fourth) {
    func_8043FFAC(object, second, third, fourth, func_8043F290(object), 1);
}

#include "basetypes.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Triple;

typedef struct {
    f32 first[4];
    f32 second[4];
    f32 in[4];
    f32 out[4];
    f32 position[4];
    char matrix[0x40];
} Scratch;

extern void func_8025E5D0(s32 *, s32, f32, f32 *);
extern void func_80273744(void *, s32);
extern void func_80272908(void *arg0, void *arg1, void *arg2);
extern void func_8024E78C(void *arg0, Triple arg1, void *arg2, s32 *arg3,
                          s32 arg4, s32 arg5);

void func_8024C33C(void *arg0, s32 *arg1) {
    Scratch scratch;
    f32 zero;

    zero = 0.0f;
    func_8025E5D0(arg1, 0, zero, scratch.first);
    func_8025E5D0(arg1, 0, *(f32 *)arg1, scratch.second);
    scratch.in[0] = scratch.second[0] - scratch.first[0];
    scratch.in[1] = zero;
    scratch.in[2] = scratch.second[1] - scratch.first[1];
    func_80273744(scratch.matrix, *(s32 *)((char *)arg0 + 0x6C));
    func_80272908(scratch.matrix, scratch.in, scratch.out);
    scratch.position[0] = *(f32 *)((char *)arg0 + 8) +
                          (scratch.out[0] * *(f32 *)((char *)arg0 + 0x50));
    scratch.position[1] = *(f32 *)((char *)arg0 + 0xC);
    scratch.position[2] = *(f32 *)((char *)arg0 + 0x10) +
                          (scratch.out[2] * *(f32 *)((char *)arg0 + 0x58));
    func_8024E78C(arg0, *(Triple *)scratch.position, (char *)arg0 + 8,
                  (s32 *)((char *)arg0 + 0x14), 0, 0);
}

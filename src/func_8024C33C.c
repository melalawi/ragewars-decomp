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

typedef struct func_8024C33C_S1 func_8024C33C_S1;
typedef union func_8024C33C_S1_U8 { f32 v0; char v1; } func_8024C33C_S1_U8;
struct func_8024C33C_S1 {
    char pad0[0x8];
    func_8024C33C_S1_U8 unk8;
    char pad8[0xC - 0x8 - sizeof(func_8024C33C_S1_U8)];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    f32 unk10;
    char pad10[0x14 - 0x10 - sizeof(f32)];
    s32 unk14;
    char pad14[0x50 - 0x14 - sizeof(s32)];
    f32 unk50;
    char pad50[0x58 - 0x50 - sizeof(f32)];
    f32 unk58;
    char pad58[0x6C - 0x58 - sizeof(f32)];
    s32 unk6C;
};

void func_8024C33C(void *arg0, s32 *arg1) {
    Scratch scratch;
    f32 zero;

    zero = 0.0f;
    func_8025E5D0(arg1, 0, zero, scratch.first);
    func_8025E5D0(arg1, 0, *(f32 *)arg1, scratch.second);
    scratch.in[0] = scratch.second[0] - scratch.first[0];
    scratch.in[1] = zero;
    scratch.in[2] = scratch.second[1] - scratch.first[1];
    func_80273744(scratch.matrix, ((func_8024C33C_S1 *)(arg0))->unk6C);
    func_80272908(scratch.matrix, scratch.in, scratch.out);
    scratch.position[0] = ((func_8024C33C_S1 *)(arg0))->unk8.v0 +
                          (scratch.out[0] * ((func_8024C33C_S1 *)(arg0))->unk50);
    scratch.position[1] = ((func_8024C33C_S1 *)(arg0))->unkC;
    scratch.position[2] = ((func_8024C33C_S1 *)(arg0))->unk10 +
                          (scratch.out[2] * ((func_8024C33C_S1 *)(arg0))->unk58);
    func_8024E78C(arg0, *(Triple *)scratch.position, &((func_8024C33C_S1 *)(arg0))->unk8.v1,
                  &((func_8024C33C_S1 *)(arg0))->unk14, 0, 0);
}

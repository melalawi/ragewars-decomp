#include "basetypes.h"

extern void func_80255D10(void *, s32, s32);
extern s32 func_80255C58(void *, s32);
extern s32 func_80255CB4(void *, s32);

typedef struct func_8028472C_S1 func_8028472C_S1;
typedef struct func_8028472C_S2 func_8028472C_S2;
typedef struct func_8028472C_S3 func_8028472C_S3;
typedef union func_8028472C_S1_UFC14 { void* v0; char v1; } func_8028472C_S1_UFC14;
typedef union func_8028472C_S2_U118 { s32 v0; s32* v1; } func_8028472C_S2_U118;
struct func_8028472C_S1 {
    char pad0[0xFC14];
    func_8028472C_S1_UFC14 unkFC14;
};
struct func_8028472C_S2 {
    char pad0[0x5C];
    s32 unk5C;
    char pad5C[0x118 - 0x5C - sizeof(s32)];
    func_8028472C_S2_U118 unk118;
};
struct func_8028472C_S3 {
    char pad0[0x118];
    s32 unk118;
    char pad118[0x1F4 - 0x118 - sizeof(s32)];
    void* unk1F4;
};

void func_8028472C(void *arg0, void *arg1)
{
    void *current;
    s32 key;

    current = ((func_8028472C_S1 *)(arg0))->unkFC14.v0;
    if (current != 0) {
        key = ((func_8028472C_S2 *)(arg1))->unk118.v0;
loop:
        if (((func_8028472C_S3 *)(current))->unk118 != key) {
            current = ((func_8028472C_S3 *)(current))->unk1F4;
            if (current != 0) {
                goto loop;
            }
        }
    }

    if (current != 0) {
        func_80255D10(&((func_8028472C_S1 *)(arg0))->unkFC14.v1, current, arg1);
    } else if (*((func_8028472C_S2 *)(arg1))->unk118.v1 & 0x2000) {
        func_80255C58(&((func_8028472C_S1 *)(arg0))->unkFC14.v1, arg1);
    } else {
        func_80255CB4(&((func_8028472C_S1 *)(arg0))->unkFC14.v1, arg1);
    }

    ((func_8028472C_S2 *)(arg1))->unk5C |= 0x01000000;
}

#include "basetypes.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vector3i;

extern s32 D_8011FE88;
extern void *func_8028CE54(void *object, int index);
extern void func_80264E00(unsigned int *record, unsigned int value);

typedef struct func_80285880_S1 func_80285880_S1;
typedef struct func_80285880_S2 func_80285880_S2;
struct func_80285880_S1 {
    char pad0[0x8];
    void* unk8;
    char pad8[0xC - 0x8 - sizeof(void*)];
    Vector3i unkC;
    char padC[0x18 - 0xC - sizeof(Vector3i)];
    f32 unk18;
    char pad18[0x1C - 0x18 - sizeof(f32)];
    f32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(f32)];
    unsigned int unk20;
    char pad20[0x2C - 0x20 - sizeof(unsigned int)];
    unsigned int unk2C;
    char pad2C[0x38 - 0x2C - sizeof(unsigned int)];
    void** unk38;
};
struct func_80285880_S2 {
    char pad0[0x2];
    s16 unk2;
};

void func_80285880(void *arg0, void *arg1, Vector3i arg2,
                   f32 arg5, f32 arg6, void **arg7) {
    ((func_80285880_S1 *)(arg0))->unk8 = arg1;
    ((func_80285880_S1 *)(arg0))->unkC = arg2;
    ((func_80285880_S1 *)(arg0))->unk18 = arg5;
    ((func_80285880_S1 *)(arg0))->unk1C = arg6;
    ((func_80285880_S1 *)(arg0))->unk38 = arg7;
    if (arg7 != 0) {
        *arg7 = arg0;
    }
    func_80264E00(&((func_80285880_S1 *)(arg0))->unk20,
                  (unsigned int)func_8028CE54(&D_8011FE88, *(s16 *)arg1));
    func_80264E00(&((func_80285880_S1 *)(arg0))->unk2C,
                  (unsigned int)func_8028CE54(&D_8011FE88, ((func_80285880_S2 *)(arg1))->unk2));
}

#include "basetypes.h"

extern s32 D_8011FE88;
extern f32 D_800C6B30[];

extern s32 func_80285F28(void *, void *);
extern s32 func_80214178(void *, void *, s32);

typedef struct func_80203908_S1 func_80203908_S1;
typedef struct func_80203908_S2 func_80203908_S2;
typedef struct func_80203908_S3 func_80203908_S3;
typedef struct func_80203908_S4 func_80203908_S4;
typedef union func_80203908_S3_U124 { f32 v0; s32 v1; } func_80203908_S3_U124;
struct func_80203908_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0xE4 - 0x18 - sizeof(void*)];
    u16 unkE4;
    char padE4[0x100 - 0xE4 - sizeof(u16)];
    s32 unk100;
};
struct func_80203908_S2 {
    char pad0[0x14];
    char unk14;
};
struct func_80203908_S3 {
    char pad0[0x37];
    s8 unk37;
    char pad37[0x64 - 0x37 - sizeof(s8)];
    f32 unk64;
    char pad64[0x124 - 0x64 - sizeof(f32)];
    func_80203908_S3_U124 unk124;
    char pad124[0x128 - 0x124 - sizeof(func_80203908_S3_U124)];
    s32 unk128;
};
struct func_80203908_S4 {
    char pad0[0x6C];
    f32 unk6C;
};

void func_80203908(void *arg0, void *arg1) {
    s32 flags;
    void *record;

    record = &((func_80203908_S2 *)(((func_80203908_S1 *)(arg0))->unk18))->unk14;
    if (((func_80203908_S1 *)(arg0))->unkE4 == 0x40C) {
        ((func_80203908_S3 *)(arg1))->unk124.v0 = D_800C6B30[1];
    } else {
        ((func_80203908_S3 *)(arg1))->unk124.v1 = 0;
    }
    ((func_80203908_S3 *)(arg1))->unk128 = 0;
    ((func_80203908_S3 *)(arg1))->unk64 = ((func_80203908_S4 *)(record))->unk6C;

    if (func_80285F28(&D_8011FE88, arg0) == 0) {
        if (*(s32 *)record & 0x1000) {
            flags = ((func_80203908_S1 *)(arg0))->unk100 & ~0x2000;
            flags = flags & ~0x100;
            ((func_80203908_S1 *)(arg0))->unk100 = flags;
        }
        if (*(s32 *)record & 0x800) {
            ((func_80203908_S1 *)(arg0))->unk100 =
                ((func_80203908_S1 *)(arg0))->unk100 & ~0x100;
            func_80214178(arg0, arg1, 0);
        } else {
            func_80214178(arg0, arg1, 1);
        }
    } else {
        func_80214178(arg0, arg1, 0x40);
    }
    ((func_80203908_S3 *)(arg1))->unk37 = 0;
}

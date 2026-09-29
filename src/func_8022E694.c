#include "basetypes.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Triple;

extern s32 func_8024E7CC(void *);
extern s32 func_8024E61C(void *arg0);
extern void func_8021B1E4(void *, s32, s32, s32);
extern f32 D_800C7F08;
extern f32 D_8013B184;

typedef struct func_8022E694_S1 func_8022E694_S1;
typedef struct func_8022E694_S2 func_8022E694_S2;
typedef struct func_8022E694_S3 func_8022E694_S3;
typedef struct func_8022E694_S4 func_8022E694_S4;
struct func_8022E694_S1 {
    char pad0[0x44];
    s32 unk44;
};
struct func_8022E694_S2 {
    char pad0[0xC];
    f32 unkC;
    char padC[0x20 - 0xC - sizeof(f32)];
    s32 unk20;
};
struct func_8022E694_S3 {
    char pad0[0x5EC];
    s32 unk5EC;
    char pad5EC[0x6F8 - 0x5EC - sizeof(s32)];
    Triple unk6F8;
};
struct func_8022E694_S4 {
    char pad0[0x8];
    Triple unk8;
};

void func_8022E694(void *arg0, void *arg1) {
    void *temp_v0;

    temp_v0 = func_8024E7CC(arg1);
    if ((temp_v0 != 0) && (((func_8022E694_S1 *)(temp_v0))->unk44 & 0x4000)) {
        ((func_8022E694_S2 *)(arg1))->unk20 = 0;
    } else if (((func_8022E694_S2 *)(arg1))->unkC < (D_8013B184 - D_800C7F08)) {
        func_8021B1E4(arg0, ((func_8022E694_S3 *)(arg0))->unk5EC, 0, 0);
    }
    if (func_8024E61C(arg1) != 0) {
        ((func_8022E694_S3 *)(arg0))->unk6F8 = ((func_8022E694_S4 *)(arg1))->unk8;
    }
}

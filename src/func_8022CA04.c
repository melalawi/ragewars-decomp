#include "basetypes.h"

typedef struct Vector3 {
    f32 x;
    f32 y;
    f32 z;
} Vector3;

typedef struct AudioState {
    char pad0[0x54];
    s32 active;
    char pad58[0x18];
    s32 mode;
} AudioState;

extern f32 D_800C7E50;
extern s32 D_8013B2BC;
extern AudioState D_801468A0;

extern u8 *func_8024E690(void *arg0);
extern void func_8024E6C8(u8 *arg0, Vector3 *arg1);
extern void func_80271FA4(Vector3 *result, Vector3 *left, Vector3 *right);
extern s32 func_8025DE74(s16 arg0, s32 arg1, s32 arg2, s32 arg3,
                         s32 arg4, s32 arg5);

typedef struct func_8022CA04_S1 func_8022CA04_S1;
typedef struct func_8022CA04_S2 func_8022CA04_S2;
typedef struct func_8022CA04_S3 func_8022CA04_S3;
typedef struct func_8022CA04_S4 func_8022CA04_S4;
typedef struct func_8022CA04_S5 func_8022CA04_S5;
typedef struct func_8022CA04_S6 func_8022CA04_S6;
struct func_8022CA04_S1 {
    char pad0[0x4];
    f32 unk4;
};
struct func_8022CA04_S2 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x20 - 0x18 - sizeof(void*)];
    f32 unk20;
};
struct func_8022CA04_S3 {
    char pad0[0x20];
    f32 unk20;
};
struct func_8022CA04_S4 {
    char pad0[0x1C];
    Vector3 unk1C;
};
struct func_8022CA04_S5 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x5D8 - 0x10 - sizeof(s32)];
    void* unk5D8;
};
struct func_8022CA04_S6 {
    char pad0[0x8F];
    u8 unk8F;
};

void func_8022CA04(void *arg0, void *arg1) {
    Vector3 vector;
    f32 scale;
    u8 *result;
    u8 state;
    s32 mode;
    AudioState *audio;

    scale = D_800C7E50;
    if (D_8013B2BC == 0x1DB1) {
        scale = ((func_8022CA04_S1 *)(&D_800C7E50))->unk4;
    }
    ((func_8022CA04_S2 *)(arg1))->unk20 =
        scale * ((func_8022CA04_S3 *)(((func_8022CA04_S2 *)(arg1))->unk18))->unk20;
    result = func_8024E690(arg1);
    if (result != 0) {
        func_8024E6C8(result, &vector);
        func_80271FA4(&((func_8022CA04_S4 *)(arg1))->unk1C,
                      &((func_8022CA04_S4 *)(arg1))->unk1C, &vector);
    }

    state = ((func_8022CA04_S6 *)(((func_8022CA04_S5 *)(arg0))->unk5D8))->unk8F;
    if (state == 1) {
        audio = &D_801468A0;
        if (audio->active != 0) {
            mode = audio->mode;
            switch (mode) {
        case 0:
            func_8025DE74(0x18A1,
                          ((func_8022CA04_S5 *)(arg0))->unk8,
                          ((func_8022CA04_S5 *)(arg0))->unkC,
                          ((func_8022CA04_S5 *)(arg0))->unk10,
                          (s32)((char *)arg0 + 8), -1);
            break;
        case 1:
            func_8025DE74(0x1969,
                          ((func_8022CA04_S5 *)(arg0))->unk8,
                          ((func_8022CA04_S5 *)(arg0))->unkC,
                          ((func_8022CA04_S5 *)(arg0))->unk10,
                          (s32)((char *)arg0 + 8), -1);
            break;
        case 2:
            func_8025DE74(0x1905,
                          ((func_8022CA04_S5 *)(arg0))->unk8,
                          ((func_8022CA04_S5 *)(arg0))->unkC,
                          ((func_8022CA04_S5 *)(arg0))->unk10,
                          (s32)((char *)arg0 + 8), -1);
            break;
            }
        }
    }
}

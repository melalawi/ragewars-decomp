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

void func_8022CA04(void *arg0, void *arg1) {
    Vector3 vector;
    f32 scale;
    u8 *result;
    u8 state;
    s32 mode;
    AudioState *audio;

    scale = D_800C7E50;
    if (D_8013B2BC == 0x1DB1) {
        scale = *(f32 *)((char *)&D_800C7E50 + 4);
    }
    *(f32 *)((char *)arg1 + 0x20) =
        scale * *(f32 *)((char *)*(void **)((char *)arg1 + 0x18) + 0x20);
    result = func_8024E690(arg1);
    if (result != 0) {
        func_8024E6C8(result, &vector);
        func_80271FA4((Vector3 *)((char *)arg1 + 0x1C),
                      (Vector3 *)((char *)arg1 + 0x1C), &vector);
    }

    state = *(u8 *)((char *)*(void **)((char *)arg0 + 0x5D8) + 0x8F);
    if (state == 1) {
        audio = &D_801468A0;
        if (audio->active != 0) {
            mode = audio->mode;
            switch (mode) {
        case 0:
            func_8025DE74(0x18A1,
                          *(s32 *)((char *)arg0 + 8),
                          *(s32 *)((char *)arg0 + 0xC),
                          *(s32 *)((char *)arg0 + 0x10),
                          (s32)((char *)arg0 + 8), -1);
            break;
        case 1:
            func_8025DE74(0x1969,
                          *(s32 *)((char *)arg0 + 8),
                          *(s32 *)((char *)arg0 + 0xC),
                          *(s32 *)((char *)arg0 + 0x10),
                          (s32)((char *)arg0 + 8), -1);
            break;
        case 2:
            func_8025DE74(0x1905,
                          *(s32 *)((char *)arg0 + 8),
                          *(s32 *)((char *)arg0 + 0xC),
                          *(s32 *)((char *)arg0 + 0x10),
                          (s32)((char *)arg0 + 8), -1);
            break;
            }
        }
    }
}

#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern s32 func_802301E4(void *, void *);
extern s32 func_8025DE74(s16, Vec3, s32, s32);
extern void func_8022AFFC(void *arg0);
extern s32 func_80214178(void *, void *, s32);
extern void func_8022B180(s32);

typedef struct func_80232CDC_S1 func_80232CDC_S1;
typedef struct func_80232CDC_S2 func_80232CDC_S2;
typedef struct func_80232CDC_S3 func_80232CDC_S3;
struct func_80232CDC_S1 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_80232CDC_S2 {
    char pad0[0x35];
    s8 unk35;
    char pad35[0xCB - 0x35 - sizeof(s8)];
    s8 unkCB;
};
struct func_80232CDC_S3 {
    char pad0[0x8];
    Vec3 unk8;
    char pad8[0x62E - 0x8 - sizeof(Vec3)];
    s16 unk62E;
    char pad62E[0x6AC - 0x62E - sizeof(s16)];
    s32 unk6AC;
    char pad6AC[0x788 - 0x6AC - sizeof(s32)];
    s32 unk788;
    char pad788[0x78C - 0x788 - sizeof(s32)];
    s32 unk78C;
};

void func_80232CDC(void *arg0, void *arg1) {
    void *state;

    state = ((func_80232CDC_S1 *)(arg0))->unk1D8;
    if (((func_80232CDC_S2 *)(arg1))->unkCB != 0) {
        if (func_802301E4(arg0, arg1) != 0) {
            ((func_80232CDC_S2 *)(arg1))->unkCB = 0;
            ((func_80232CDC_S2 *)(arg1))->unk35 = -1;
        } else {
            switch (((func_80232CDC_S3 *)(state))->unk62E) {
            case 8:
                func_8025DE74(0xA3E, ((func_80232CDC_S3 *)(state))->unk8,
                              (s32)((char *)state + 8), -1);
            case 0:
            case 14:
                func_8022AFFC(state);
                func_80214178(arg0, arg1, 2);
                break;
            default:
                func_80214178(arg0, arg1, 2);
                break;
            }
        }
        ((func_80232CDC_S3 *)(state))->unk788 = 1;
        ((func_80232CDC_S3 *)(state))->unk78C = 0;
    } else if ((((func_80232CDC_S3 *)(state))->unk62E == 12) &&
               ((((func_80232CDC_S3 *)(state))->unk6AC & 0x4000) != 0)) {
        func_8022B180((s32)state);
    }
}

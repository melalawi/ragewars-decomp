#include "basetypes.h"

extern void func_802227D0(void *, void *, s32);
extern void func_8022CC24(void *arg0, void *arg1);
extern f32 D_800C7E58;
extern f32 D_800C7E5C;
extern f32 D_800C7E60;
extern f32 D_800C7E64;
extern s32 D_8013B2BC;

typedef struct func_8022CB4C_S1 func_8022CB4C_S1;
typedef struct func_8022CB4C_S2 func_8022CB4C_S2;
typedef struct func_8022CB4C_S3 func_8022CB4C_S3;
struct func_8022CB4C_S1 {
    char pad0[0x658];
    volatile f32 unk658;
    char pad658[0x6AC - 0x658 - sizeof(volatile f32)];
    s32 unk6AC;
    char pad6AC[0x1450 - 0x6AC - sizeof(s32)];
    s32 unk1450;
};
struct func_8022CB4C_S2 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x20 - 0x18 - sizeof(void*)];
    f32 unk20;
};
struct func_8022CB4C_S3 {
    char pad0[0x20];
    f32 unk20;
};

void func_8022CB4C(void *arg0, void *arg1) {
    f32 scale;

    scale = D_800C7E58;
    if (D_8013B2BC == 0x1DB1) {
        scale = D_800C7E5C;
    }
    if (((func_8022CB4C_S1 *)(arg0))->unk1450 != 0) {
        f32 current;

        current = ((func_8022CB4C_S1 *)(arg0))->unk658;
        if (D_800C7E60 <= current) {
            goto transition;
        }
        goto scale_value;
    }
    if (!(((func_8022CB4C_S1 *)(arg0))->unk6AC & 0x10)) {
        goto transition;
    } else {
        f32 current;

        current = ((func_8022CB4C_S1 *)(arg0))->unk658;
        if (!(D_800C7E64 <= current)) {
            goto scale_value;
        }
    }
transition:
    func_802227D0(arg0, arg1, 6);
    goto finish;
scale_value:
    ((func_8022CB4C_S2 *)(arg1))->unk20 =
        scale * ((func_8022CB4C_S3 *)(((func_8022CB4C_S2 *)(arg1))->unk18))->unk20;
finish:
    func_8022CC24(arg0, arg1);
}

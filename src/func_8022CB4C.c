#include "basetypes.h"

extern void func_802227D0(void *, void *, s32);
extern void func_8022CC24(void *arg0, void *arg1);
extern f32 D_800C7E58;
extern f32 D_800C7E5C;
extern f32 D_800C7E60;
extern f32 D_800C7E64;
extern s32 D_8013B2BC;

void func_8022CB4C(void *arg0, void *arg1) {
    f32 scale;

    scale = D_800C7E58;
    if (D_8013B2BC == 0x1DB1) {
        scale = D_800C7E5C;
    }
    if (*(s32 *)((char *)arg0 + 0x1450) != 0) {
        f32 current;

        current = *(volatile f32 *)((char *)arg0 + 0x658);
        if (D_800C7E60 <= current) {
            goto transition;
        }
        goto scale_value;
    }
    if (!(*(s32 *)((char *)arg0 + 0x6AC) & 0x10)) {
        goto transition;
    } else {
        f32 current;

        current = *(volatile f32 *)((char *)arg0 + 0x658);
        if (!(D_800C7E64 <= current)) {
            goto scale_value;
        }
    }
transition:
    func_802227D0(arg0, arg1, 6);
    goto finish;
scale_value:
    *(f32 *)((char *)arg1 + 0x20) =
        scale * *(f32 *)((char *)*(void **)((char *)arg1 + 0x18) + 0x20);
finish:
    func_8022CC24(arg0, arg1);
}

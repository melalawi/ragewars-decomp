#include "basetypes.h"

extern f32 func_802745D4(f32 arg0);
extern f32 func_80216F44(s32 a0, s32 a1, s32 a2, s32 a3);

extern f32 D_800C6DE4;
extern f32 D_800C6DE8;
extern f32 D_800C6DEC;
extern f32 D_800C6DF0;
extern f32 D_800C6DF4;
extern f32 D_800C6DF8;
extern f32 D_800C6DFC;

void func_8020A028(void *arg0, void *arg1)
{
    s32 v0;
    f32 f20;
    f32 f1;
    f32 new_var;
    s32 s1;

    v0 = *(s32 *)((char *)arg0 + 0x2EC);
    if (v0 > 0) {
        v0 = v0 - 1;
        *(s32 *)((char *)arg0 + 0x2EC) = v0;
        if (v0 == 0) {
            f20 = D_800C6DE4;
            if (func_802745D4(f20) < D_800C6DE8) {
                *(s32 *)((char *)arg0 + 0x2EC) = -1;
                *(s32 *)((char *)arg0 + 0x2E4) = *(s32 *)((char *)arg1 + 0x1C);
                *(s32 *)((char *)arg0 + 0x2E4) = (s32) ((f32) *(s32 *)((char *)arg0 + 0x2E4)
                    + (func_802745D4(f20) * (f32) *(s32 *)((char *)arg1 + 0x20)));
                *(s32 *)((char *)arg0 + 0x2E8) = *(s32 *)((char *)arg1 + 0x24);
                *(s32 *)((char *)arg0 + 0x2E8) = (s32) ((f32) *(s32 *)((char *)arg0 + 0x2E8)
                    + (func_802745D4(f20) * (f32) *(s32 *)((char *)arg1 + 0x28)));
            } else {
                *(s32 *)((char *)arg0 + 0x2EC) = *(s32 *)((char *)arg1 + 0x10);
                *(s32 *)((char *)arg0 + 0x2EC) = (s32) ((f32) *(s32 *)((char *)arg0 + 0x2EC)
                    + (func_802745D4(f20) * (f32) *(s32 *)((char *)arg1 + 0x14)));
            }
        }
    }
    if (*(s32 *)((char *)arg0 + 0x2EC) == -1) {
        v0 = *(s32 *)((char *)arg0 + 0x2E8) - 1;
        *(s32 *)((char *)arg0 + 0x2E8) = v0;
        if (v0 == 0) {
            f20 = D_800C6DEC;
            *(s32 *)((char *)arg0 + 0x2EC) = *(s32 *)((char *)arg1 + 0x10);
            *(s32 *)((char *)arg0 + 0x2EC) = (s32) ((f32) *(s32 *)((char *)arg0 + 0x2EC)
                + (func_802745D4(f20) * (f32) *(s32 *)((char *)arg1 + 0x14)));
            *(s32 *)((char *)arg0 + 0x2E4) = *(s32 *)((char *)arg1 + 0x0);
            *(s32 *)((char *)arg0 + 0x2E4) = (s32) ((f32) *(s32 *)((char *)arg0 + 0x2E4)
                + (func_802745D4(f20) * (f32) *(s32 *)((char *)arg1 + 0x4)));
            *(s32 *)((char *)arg0 + 0x2E8) = *(s32 *)((char *)arg1 + 0x8);
            f1 = (f32) *(s32 *)((char *)arg0 + 0x2E8)
                + (func_802745D4(f20) * (f32) *(s32 *)((char *)arg1 + 0xC));
            *(s32 *)((char *)arg0 + 0x240) = 0;
            *(s32 *)((char *)arg0 + 0x2E8) = (s32) f1;
        } else {
            *(s32 *)((char *)arg0 + 0x240) = 1;
        }
    }
    v0 = *(s32 *)((char *)arg0 + 0x2E4);
    if (v0 > 0) {
        *(s32 *)((char *)arg0 + 0x2E4) = v0 - 1;
        return;
    }
    if (*(s32 *)((char *)arg0 + 0x240) > 0) {
        s1 = *(s32 *)((char *)arg1 + 0x1C);
        new_var = func_802745D4(D_800C6DF0);
        if (1) {
            f20 = D_800C6DF4;
            s1 = (s32) ((f32) s1 + (new_var * (f32) *(s32 *)((char *)arg1 + 0x20)));
        }
    } else {
        s1 = *(s32 *)((char *)arg1 + 0x0);
        s1 = (s32) ((f32) s1 + (func_802745D4(D_800C6DF8) * (f32) *(s32 *)((char *)arg1 + 0x4)));
        f20 = D_800C6DFC;
    }
    {
        void *p = *(void **)((char *)arg0 + 0x64);
        void *q = *(void **)((char *)p + 0x1D8);
        if (!(f20 < func_80216F44(*(s32 *)((char *)arg0 + 0x0),
                                    *(s32 *)((char *)q + 0x8),
                                    *(s32 *)((char *)q + 0xC),
                                    *(s32 *)((char *)q + 0x10)))) {
            *(s32 *)((char *)arg0 + 0x23C) = 1;
            *(s32 *)((char *)arg0 + 0x2E4) = s1;
        }
    }
}

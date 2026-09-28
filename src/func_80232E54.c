#include "basetypes.h"

extern f32 D_800C8110;
extern f32 D_800C8118;
extern f32 D_800C811C;
extern f32 D_800C8120[];
extern f32 D_800C8128;
extern f32 D_800C812C;
extern f32 D_800D2988;

extern s32 func_802301E4(void *, void *);
extern void func_8022AFFC(void *arg0);

#define FIELD(p, t, o) (*(t *)((s8 *)(p) + (o)))

void func_80232E54(void *arg0, void *arg1) {
    f32 temp_f1;
    f32 temp_f2;
    void *temp_s1;
    void *temp_v0;

    temp_s1 = FIELD(arg0, void *, 0x1D8);
    FIELD(arg1, f32, 0x124) += (FIELD(arg1, f32, 0x128) * D_800D2988) * 2.0f;
    temp_f1 = FIELD(arg1, f32, 0x128);
    temp_v0 = FIELD(temp_s1, void *, 0x698);
    if (!(temp_f1 < 0.0f
              ? D_800C8118 < (-temp_f1 * *(&D_800C8110 + 1))
              : D_800C8120[0] < (temp_f1 * D_800C811C))) {
        temp_f2 = FIELD(arg1, f32, 0x128);
        if (temp_f2 < 0.0f) {
            FIELD(temp_v0, f32, 0x168) = (f32) (-temp_f2 * D_800C8120[1]);
        } else {
            FIELD(temp_v0, f32, 0x168) = (f32) (temp_f2 * D_800C8128);
        }
    } else {
        FIELD(temp_v0, f32, 0x168) = (f32) D_800C812C;
    }

    if (FIELD(arg1, s8, 0xCB) != 0) {
        FIELD(arg1, s32, 0x13C) = 2;
        if (func_802301E4(arg0, arg1) != 0) {
            FIELD(arg1, s32, 0x13C) = 1;
            func_8022AFFC(temp_s1);
        }
    }
}

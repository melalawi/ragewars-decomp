#include "basetypes.h"

extern f32 D_800C8148;
extern f32 D_800C814C;
extern f32 D_800C8150;
extern f32 D_800C8154;
extern f32 D_800C8158[];
extern f32 D_800C8160;
extern f32 D_800C8164;
extern s32 D_800CF518;
extern void func_802748E0(f32 *, f32, f32);

#define FIELD(p, t, o) (*(t *)((s8 *)(p) + (o)))

void func_802335DC(void *arg0, void *arg1) {
    f32 temp_f1;
    f32 temp_f2;
    void *temp_s1;
    void *temp_v0;

    temp_s1 = FIELD(arg0, void *, 0x1D8);
    if (FIELD(arg1, s8, 0x34) == 5) {
        func_802748E0(arg1 + 0x128, (f32) D_800CF518 * D_800C8148, 0.4f);
    } else {
        func_802748E0(arg1 + 0x128, 0.0f, 0.4f);
    }
    temp_f1 = FIELD(arg1, f32, 0x128);
    temp_v0 = FIELD(temp_s1, void *, 0x698);
    if (!(temp_f1 < 0.0f
              ? D_800C8150 < (-temp_f1 * D_800C814C)
              : D_800C8158[0] < (temp_f1 * D_800C8154))) {
        temp_f2 = FIELD(arg1, f32, 0x128);
        if (temp_f2 < 0.0f) {
            FIELD(temp_v0, f32, 0x168) = (f32) (-temp_f2 * D_800C8158[1]);
            return;
        }
        FIELD(temp_v0, f32, 0x168) = (f32) (temp_f2 * D_800C8160);
        return;
    }
    FIELD(temp_v0, f32, 0x168) = (f32) D_800C8164;
}

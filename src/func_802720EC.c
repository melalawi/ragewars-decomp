#include "basetypes.h"

extern f32 func_802BC380(f32);
extern char D_800C9998;

void func_802720EC(f32 *arg0) {
    f32 mag;
    f32 scale;

    mag = func_802BC380((arg0[0] * arg0[0]) + (arg0[1] * arg0[1]) + (arg0[2] * arg0[2]));
    if (mag != 0.0f) {
        scale = *(f32 *) ((char *) &D_800C9998 + 4) / mag;
        arg0[0] = arg0[0] * scale;
        arg0[1] = arg0[1] * scale;
        arg0[2] = arg0[2] * scale;
    }
}

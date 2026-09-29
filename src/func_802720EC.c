#include "basetypes.h"

extern f32 func_802BC380(f32);
extern char D_800C9998;

typedef struct func_802720EC_S1 func_802720EC_S1;
struct func_802720EC_S1 {
    char pad0[0x4];
    f32 unk4;
};

void func_802720EC(f32 *arg0) {
    f32 mag;
    f32 scale;

    mag = func_802BC380((arg0[0] * arg0[0]) + (arg0[1] * arg0[1]) + (arg0[2] * arg0[2]));
    if (mag != 0.0f) {
        scale = ((func_802720EC_S1 *)(&D_800C9998))->unk4 / mag;
        arg0[0] = arg0[0] * scale;
        arg0[1] = arg0[1] * scale;
        arg0[2] = arg0[2] * scale;
    }
}

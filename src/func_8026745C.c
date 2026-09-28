#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern f32 D_800C9520;
extern void func_80272038(void *arg0, f32 t, void *a, void *b);
extern f32 func_8024D274(void *arg0);

s32 func_8026745C(void *arg0, Vec3 *arg1) {
    Vec3 first;
    Vec3 second;
    char *actor;
    s16 state;
    s32 result;

    result = 0;
    if ((*(u8 *)arg0 == 1) &&
        ((*(s32 *)((char *)arg0 + 0x100) & 0x300000) != 0)) {
        actor = *(char **)((char *)arg0 + 0x1D8);
        if (arg0 == actor + 0x2E8) {
            state = *(s16 *)(actor + 0x62E);
            if ((state == 0) || (state == 0x11) || (state == 0x10)) {
                first = *arg1;
                second = *(Vec3 *)(actor + 8);
                func_80272038(arg1, 0.75f, &first, &second);
                arg1->y += func_8024D274(actor) * D_800C9520;
                result = 1;
            }
        }
    }
    return result;
}

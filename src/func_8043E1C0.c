/* Advances the frame timer D_8015404C by D_800D2988 and, once it reaches
   threshold D_800E2358, clears a flag at D_801468A0+0x24 and reports the
   round over through func_8022A738 on the world 0x1860 bytes before it. */
#include "basetypes.h"

extern f32 D_8015404C;
extern f32 D_800D2988;
extern f32 D_800E2358;
extern s32 D_801468A0;

void func_8022A738(void *arg0);

s32 func_8043E1C0(void) {
    f32 time;
    s32 *base;

    time = D_8015404C + D_800D2988;
    D_8015404C = time;
    if (D_800E2358 <= time) {
        base = (s32 *) &D_801468A0;
        base[9] = 0;
        func_8022A738((void *) ((char *) base - 0x1860));
        return 1;
    }
    return 0;
}

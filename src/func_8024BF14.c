#include "basetypes.h"

extern char D_800C8BD8;
extern f32 D_800C8C4C;

extern void * *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern void *func_8028FD94(void *arg0, s32 arg1);
extern f32 func_802B2350(s32 arg0);
extern void func_802536F4(s32 arg0, s32 arg1);

f32 func_8024BF14(void *arg0) {
    f32 var_f20;
    void *temp_s0;

    var_f20 = D_800C8C4C;
    if (*(s32 *) ((char *) arg0 + 0x100) & 0x40000) {
        temp_s0 = func_802518DC(0, *(s32 *) ((char *) arg0 + 0xC4), *(s32 *) ((char *) arg0 + 0xC4), *(s32 *) ((char *) arg0 + 0xD0), 4, 0, 0, &D_800C8BD8, 1);
        if (temp_s0 != 0) {
            var_f20 = func_802B2350((s32) *(u16 *) ((char *) func_8028FD94(*(void **) temp_s0, 0) + 0x1E));
            func_802536F4(0, (s32) temp_s0);
        }
    }
    return var_f20;
}

#include "basetypes.h"

extern char D_800C8920;

extern void * *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern void *func_8028FD94(void *arg0, s32 arg1);
extern void func_802536F4(s32 arg0, s32 arg1);

s32 func_8024C284(void *arg0, s32 arg1) {
    void *temp_v0;
    char *temp_v1;
    s32 temp_s0;

    if (*(s32 *) ((char *) arg0 + 0x100) & 0x40000) {
        temp_v0 = func_802518DC(0, *(s32 *) ((char *) arg0 + 0xC4), *(s32 *) ((char *) arg0 + 0xC4), *(s32 *) ((char *) arg0 + 0xD0), 4, 0, 0, &D_800C8920, 1);
        if (temp_v0 != 0) {
            temp_v1 = (char *) func_8028FD94(*(void **) temp_v0, 1);
            temp_v1 += arg1 * 4;
            temp_s0 = *(s32 *) (temp_v1 + 8);
            func_802536F4(0, (s32) temp_v0);
            return temp_s0;
        }
    }
    return -1;
}

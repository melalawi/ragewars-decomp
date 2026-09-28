#include "basetypes.h"

extern void **func_8024BFC4(void *arg0, s32 arg1);
extern char *func_8028FD94(int *arg0, int arg1);
extern void func_802536F4(void *arg0, void *arg1);

s32 func_8024BE70(void *arg0) {
    void **temp_s0;
    char *temp_v0;
    s32 result;

    result = -1;
    temp_s0 = func_8024BFC4(arg0, *(s8 *)((char *)arg0 + 1));
    if (temp_s0 != 0) {
        temp_v0 = func_8028FD94((int *)*temp_s0, 5);
        result = *(u8 *)(temp_v0 + 0x6E);
        func_802536F4(0, temp_s0);
    }
    return result;
}

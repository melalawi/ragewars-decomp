#include "basetypes.h"

extern void *func_8028FD94(void *arg0, s32 arg1);
extern void **func_80296E04(void *arg0, s32 arg1);
extern void func_802536F4(s32 arg0, s32 arg1);

void func_8026E158(void **arg0) {
    void *temp_v0;
    s32 count;
    s32 i;
    void *rec;
    s32 result;

    temp_v0 = func_8028FD94(*arg0, 2);
    count = *(s32 *)temp_v0;
    for (i = 0; i < count; i++) {
        rec = func_8028FD94(func_8028FD94(temp_v0, i), 0);
        if (*(s32 *)((char *)rec + 8) == 0) {
            continue;
        }
        result = func_80296E04((char *)rec + 8, -1);
        if (result == 0) {
            continue;
        }
        func_802536F4(0, result);
    }
}

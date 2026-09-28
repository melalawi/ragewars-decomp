#include "basetypes.h"

extern void *func_80258D60(void *arg0);
extern void func_802B7FD0(void *arg0, s16 arg1);
extern void func_802B8030(void *arg0);

void func_8025D404(void *arg0) {
    void *temp_v0_2;
    s32 temp_v0;

    temp_v0 = *(s32 *)((char *)arg0 + 8);
    if (temp_v0 != 2 && temp_v0 != 0) {
        *(s32 *)((char *)arg0 + 8) = 2;
        temp_v0_2 = func_80258D60(*(void **)arg0);
        func_802B7FD0(temp_v0_2, *(s16 *)((char *)arg0 + 0x1E));
        func_802B8030(temp_v0_2);
    }
}

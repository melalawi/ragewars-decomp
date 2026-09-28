#include "basetypes.h"

extern u8 D_801462E5;
extern void *D_800D052C[];

void func_8022E998(void *arg0) {
    u8 *ptr;
    void *temp_v0;
    s16 temp_a1;
    u16 temp_a1u;
    char *p;

    ptr = &D_801462E5;
    if (*ptr != 0) {
        return;
    }
    if (*(s32 *)((char *)arg0 + 0xCB8) != 0) {
        if (*(s32 *)((char *)arg0 + 0x938) != 0) {
            return;
        }
    }
    if (*(s32 *)(ptr - 0x55) != 0) {
        if (*(s32 *)((char *)arg0 + 0x6AC) & 0x20) {
            return;
        }
    }
    if (!(*(s32 *)((char *)arg0 + 0x6B0) & 0x200)) {
        return;
    }
    temp_v0 = D_800D052C[*(s16 *)((char *)arg0 + 0x770)];
    temp_a1 = *(s16 *)((char *)temp_v0 + 0xC);
    temp_a1u = *(u16 *)((char *)temp_v0 + 0xC);
    if (temp_a1 == -1) {
        return;
    }
    p = (char *)arg0 + (s32)temp_a1 * 2;
    if (*(s8 *)(p + 0x602) != 0) {
        *(s16 *)((char *)arg0 + 0x770) = (s16)temp_a1u;
    }
}

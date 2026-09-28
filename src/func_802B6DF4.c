#include "basetypes.h"

typedef struct {
    s16 f0;
    char pad[14];
} Buf16;

extern s32 func_802B73C4(void *arg0, s32 *arg1);
extern s32 func_802B7198(void *arg0);
extern void func_802B738C(void *arg0, void *arg1);
extern s32 func_802B51A4(void *, s16 *, s32);

void func_802B6DF4(void *arg0) {
    Buf16 sp10;
    s32 sp20;
    s32 temp_v1;
    void *temp_s0;

    temp_s0 = *(void **)((char *)arg0 + 0x18);
    if ((*(s32 *)((char *)arg0 + 0x2C) == 1) && (temp_s0 != 0) &&
        (func_802B73C4(temp_s0, &sp20) & 0xFF)) {
        if ((*(s32 *)((char *)arg0 + 0x84) != 0) &&
            ((func_802B7198(temp_s0) + sp20) >=
             *(s32 *)(*(char **)((char *)arg0 + 0x80) + 8))) {
            func_802B738C(temp_s0, *(void **)((char *)arg0 + 0x7C));
            temp_v1 = *(s32 *)((char *)arg0 + 0x84);
            if (temp_v1 != -1) {
                *(s32 *)((char *)arg0 + 0x84) = temp_v1 - 1;
            }
        }
        sp10.f0 = 0;
        func_802B51A4((char *)arg0 + 0x48, &sp10,
                      sp20 * *(s32 *)((char *)arg0 + 0x24));
    }
}

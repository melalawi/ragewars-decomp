#include "basetypes.h"

extern char D_800CA580[];
extern int func_80264B8C(void);

void func_80293774(void *arg0, s32 arg1) {
    s32 saved;

    saved = *(s32 *)((char *)arg0 + 0x26DB8);
    *(s8 *)((char *)arg0 + 0x26DC1) = 1;
    *(s32 *)((char *)arg0 + 0x26DC4) = 0;
    *(s32 *)((char *)arg0 + 0x26DB8) = 0x14;
    *(s32 *)((char *)arg0 + 0x26DBC) = arg1;
    *(s32 *)((char *)arg0 + 0x26DB4) = saved;
    if (func_80264B8C() != 0) {
        *(f32 *)((char *)arg0 + 0x26DC4) = *(f32 *)(D_800CA580 + 4);
    }
}

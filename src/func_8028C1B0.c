#include "basetypes.h"

extern s32 func_80265570(s32, s32, u16, s32 *, s32 *);

s32 func_8028C1B0(char *arg0, u16 *arg1, s32 *arg2, s32 *arg3) {
    s32 sp18;
    s32 sp1C;
    s32 temp_v0_2;
    s32 field_cc;
    s32 field_c4;

    temp_v0_2 = func_80265570(field_cc, field_c4, *arg1,
        (field_cc = *(s32 *)(arg0 + 0x11CC),
         field_c4 = *(s32 *)(arg0 + 0x11C4), &sp18), &sp1C);
    if (temp_v0_2 != 0) {
        *arg2 = *(s32 *)(arg0 + 0x11D4) + (sp18 * 0x14);
        temp_v0_2 = (sp1C - sp18) + 1;
        *arg3 = temp_v0_2;
    } else {
        *arg2 = 0;
        *arg3 = 0;
    }
    return temp_v0_2;
}

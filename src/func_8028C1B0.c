#include "basetypes.h"

extern s32 func_80265570(s32, s32, u16, s32 *, s32 *);

typedef struct func_8028C1B0_S1 func_8028C1B0_S1;
struct func_8028C1B0_S1 {
    char pad0[0x11C4];
    s32 unk11C4;
    char pad11C4[0x11CC - 0x11C4 - sizeof(s32)];
    s32 unk11CC;
    char pad11CC[0x11D4 - 0x11CC - sizeof(s32)];
    s32 unk11D4;
};

s32 func_8028C1B0(char *arg0, u16 *arg1, s32 *arg2, s32 *arg3) {
    s32 sp18;
    s32 sp1C;
    s32 temp_v0_2;
    s32 field_cc;
    s32 field_c4;

    temp_v0_2 = func_80265570(field_cc, field_c4, *arg1,
        (field_cc = ((func_8028C1B0_S1 *)(arg0))->unk11CC,
         field_c4 = ((func_8028C1B0_S1 *)(arg0))->unk11C4, &sp18), &sp1C);
    if (temp_v0_2 != 0) {
        *arg2 = ((func_8028C1B0_S1 *)(arg0))->unk11D4 + (sp18 * 0x14);
        temp_v0_2 = (sp1C - sp18) + 1;
        *arg3 = temp_v0_2;
    } else {
        *arg2 = 0;
        *arg3 = 0;
    }
    return temp_v0_2;
}

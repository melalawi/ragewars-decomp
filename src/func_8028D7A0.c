#include "basetypes.h"

extern s32 func_80265570(s32, s32, s32, s32 *, s32 *);

typedef struct func_8028D7A0_S1 func_8028D7A0_S1;
struct func_8028D7A0_S1 {
    char pad0[0x11C0];
    s32 unk11C0;
    char pad11C0[0x11C4 - 0x11C0 - sizeof(s32)];
    s32 unk11C4;
    char pad11C4[0x11C8 - 0x11C4 - sizeof(s32)];
    s32 unk11C8;
    char pad11C8[0x11CC - 0x11C8 - sizeof(s32)];
    s32 unk11CC;
    char pad11CC[0x11D0 - 0x11CC - sizeof(s32)];
    s32 unk11D0;
    char pad11D0[0x11D4 - 0x11D0 - sizeof(s32)];
    s32 unk11D4;
};

void func_8028D7A0(char *arg0, s32 arg1, s32 arg2, s32 *arg3, s32 *arg4) {
    s32 sp18;
    s32 sp1C;
    s32 field0;
    s32 field1;
    s32 offset;

    if (arg1 != 0) {
        field0 = ((func_8028D7A0_S1 *)(arg0))->unk11CC;
        field1 = ((func_8028D7A0_S1 *)(arg0))->unk11C4;
    } else {
        field0 = ((func_8028D7A0_S1 *)(arg0))->unk11C8;
        field1 = ((func_8028D7A0_S1 *)(arg0))->unk11C0;
    }
    if (func_80265570(field0, field1, arg2, &sp18, &sp1C) != 0) {
        offset = sp18 * 0x14;
        if (arg1 != 0) {
            *arg3 = ((func_8028D7A0_S1 *)(arg0))->unk11D4 + offset;
        } else {
            *arg3 = ((func_8028D7A0_S1 *)(arg0))->unk11D0 + offset;
        }
        *arg4 = (sp1C - sp18) + 1;
    } else {
        *arg3 = 0;
        *arg4 = 0;
    }
}

#include "span_1000/code_8025A3EC.h"
#include "common/unused.h"
#include "shared/func_80286080_de_closed.h"
#include "span_1000/code_8022E938.h"
/* FAKEMATCH: retains inherited numeric field accesses because a verified live shared layout for those accesses is not available; the old access widths and evaluation order are preserved. */
#include "types.h"
#include "shared/func_8021E2A0_de_closed.h"




void func_8022E948_de(void *arg0) {
    u8 *ptr;

    ptr = &D_801462E5;
    if (*ptr != 0) {
        return;
    }
    if (*(s32 *)(ptr - 0x55) != 0) {
        if (((func_8022E938_S1 *)(arg0))->unk6AC & 0x20) {
            return;
        }
    }
    if (!(((func_8022E938_S1 *)(arg0))->unk6B0 & 0x800)) {
        return;
    }
    if (((func_8022E938_S1 *)(arg0))->unk13D4 != 0) {
        ((func_8022E938_S1 *)(arg0))->unk13D4 = 0;
        return;
    }
    ((func_8022E938_S1 *)(arg0))->unk13D4 = 1;
}

void func_8022E9A8_de(void *arg0) {
    u8 *ptr;
    void *temp_v0;
    s16 temp_a1;
    u16 temp_a1u;
    char *p;

    ptr = &D_801462E5;
    if (*ptr != 0) {
        return;
    }
    if (((func_8022E998_S1 *)(arg0))->unkCB8 != 0) {
        if (((func_8022E998_S1 *)(arg0))->unk938 != 0) {
            return;
        }
    }
    if (*(s32 *)(ptr - 0x55) != 0) {
        if (((func_8022E998_S1 *)(arg0))->unk6AC & 0x20) {
            return;
        }
    }
    if (!(((func_8022E998_S1 *)(arg0))->unk6B0 & 0x200)) {
        return;
    }
    temp_v0 = D_800D052C[((func_8022E998_S1 *)(arg0))->unk770];
    temp_a1 = ((func_8022E998_S2 *)(temp_v0))->unkC.v0;
    temp_a1u = ((func_8022E998_S2 *)(temp_v0))->unkC.v1;
    if (temp_a1 == -1) {
        return;
    }
    p = (char *)arg0 + (s32)temp_a1 * 2;
    if (((func_8022E998_S3 *)(p))->unk602 != 0) {
        ((func_8022E998_S1 *)(arg0))->unk770 = (s16)temp_a1u;
    }
}

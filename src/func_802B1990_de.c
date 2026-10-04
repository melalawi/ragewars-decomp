#include "span_1000/code_802B6958.h"
#include "span_C76B0/data.h"
/* FAKEMATCH: retains inherited numeric field accesses because a verified live shared layout for those accesses is not available; the old access widths and evaluation order are preserved. */
#include "types.h"






void func_802B1990_de(void *arg0) {
    s32 i;
    s32 off;
    s32 c40, c7f, c5, cc8;
    f32 val;

    i = 0;
    if (((func_802B6A60_S1 *)(arg0))->unk34 != 0) {
        c40 = 0x40;
        c7f = 0x7F;
        c5 = 5;
        cc8 = 0xC8;
        val = D_800C74CC_de;
        do {
            off = i << 4;
            *(s32 *) (off + ((func_802B6A60_S1 *)(arg0))->unk60.v0) = 0;
            ((u8 *) (((func_802B6A60_S1 *)(arg0))->unk60.v1))[off + 0x6] = 0;
            ((u8 *) (((func_802B6A60_S1 *)(arg0))->unk60.v1))[off + 0xA] = 0;
            ((u8 *) (((func_802B6A60_S1 *)(arg0))->unk60.v1))[off + 0x7] = (u8) c40;
            ((u8 *) (((func_802B6A60_S1 *)(arg0))->unk60.v1))[off + 0x9] = (u8) c7f;
            ((u8 *) (((func_802B6A60_S1 *)(arg0))->unk60.v1))[off + 0x8] = (u8) c5;
            ((u8 *) (((func_802B6A60_S1 *)(arg0))->unk60.v1))[off + 0xB] = 0;
            *(u16 *) &((u8 *) (((func_802B6A60_S1 *)(arg0))->unk60.v1))[off + 0x4] = (u16) cc8;
            *(f32 *) &((u8 *) (((func_802B6A60_S1 *)(arg0))->unk60.v1))[off + 0xC] = val;
            i += 1;
        } while (i < (s32) ((func_802B6A60_S1 *)(arg0))->unk34);
    }
}

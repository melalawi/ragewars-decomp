#include "common/types_06e4f7ef1f9e.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_8022BA90.h"
#include "types.h"
#include "common/types_8a8189af7b05.h"

extern void func_802227F4_de(void *, void *, s32);






s32 func_8022C6E4_de(void *arg0, void *arg1) {
    s16 state = ((func_8022C6D4_S1 *)(arg0))->unk650;
    s32 blocked;

    if ((state == 0x15) || (state == 0x13) || (state == 0x14)) {
        blocked = 1;
    } else {
        blocked = 0;
    }
    if (blocked == 0) {
        if ((((func_8020D1FC_S1 *)(arg1))->unk38 & 0x20000) == 0) {
            return 0;
        }
        if (((func_8022C6D4_S1 *)(arg0))->unk650 == 0xD) {
            return 0;
        }
        if (((func_8022C6D4_S1 *)(arg0))->unk650 == 0xE) {
            return 0;
        }
        func_802227F4_de(arg0, arg1, 0xD);
        return 1;
    }
    return 0;
}

/* Sets flag 0x100 on the second object and triggers event 0xF on the first when the first is not in states 0x13 to 0x15 or 0x26, is not flagged 0x8000, and the second object's descriptor bit 1 and flag 0x80 are set, returning whether it fired. Adapted from func_8022C6E4_de with the flag tests, the excluded state and the event number changed. */
extern void func_802227F4_de(void *, void *, s32);






s32 func_8022C760_de(void *arg0, void *arg1) {
    s16 state = ((ObjectState668 *)(arg0))->unk_650;
    s32 blocked;
    s32 flags;

    if ((state == 0x15) || (state == 0x13) || (state == 0x14)) {
        blocked = 1;
    } else {
        blocked = 0;
    }
    if (blocked == 0) {
        if (((struct func_80204468_S3 *) ((ObjectLinks3C *) arg1)->unk_18)->unk14 & 1) {
            if (((ObjectState668 *)(arg0))->unk_650 == 0x26) {
                return 0;
            }
            if (((ObjectState668 *)(arg0))->unk_664 & 0x8000) {
                return 0;
            }
            flags = ((ObjectLinks3C *)(arg1))->unk_38;
            if (flags & 0x80) {
                goto fire;
            }
        }
        return 0;
    }
    return 0;
fire:
    ((ObjectLinks3C *)(arg1))->unk_38 = flags | 0x100;
    func_802227F4_de(arg0, arg1, 0xF);
    return 1;
}

extern void func_802227F4_de(void *, void *, s32);









s32 func_8022C7F8_de(void *arg0, void *arg1) {
    f32 field6E4;

    if (((func_8022C7E8_S1 *)(arg0))->unk7E8 == 0) {
        field6E4 = ((func_8022C7E8_S1 *)(arg0))->unk6E4;
        if (!(D_800C2D5C_de < field6E4)) {
            if (!(((func_80207ABC_S1 *)(arg1))->unk38 & 0xC0000)) {
                if (((func_80204468_S3 *)(((func_80207ABC_S1 *)(arg1))->unk18))->unk14 & 2) {
                    if ((((func_8022C7E8_S1 *)(arg0))->unk6B0 & 0x10) && (((func_8022C7E8_S1 *)(arg0))->unk11D8 <= 0.0f)) {
                        func_802227F4_de(arg0, arg1, 5);
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

/** Return zero. */
int func_8022C88C_de(void) {
    return 0;
}

void func_8022C894_de(void *arg0, void *arg1) {
    ((func_8022C884_S1 *)(arg1))->unk1C = 0;
    ((func_8022C884_S1 *)(arg1))->unk20 = 0;
    ((func_8022C884_S1 *)(arg1))->unk24 = 0;
}

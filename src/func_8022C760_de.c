#include "common/types.h"
#include "span_1000/code_8022C36C.h"
#include "span_1000/types.h"
#include "types.h"

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

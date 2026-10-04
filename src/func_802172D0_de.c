#include "common/types.h"
#include "span_1000/code_80214DD4.h"
#include "types.h"

extern void *func_8025CC6C_de(void);
extern s32 func_8025CA24_de(void *, void *);
extern void *func_8025C95C_de(void *, s32, void *, void *, s32);








void func_802172D0_de(void *arg0, void *arg1, s32 arg2) {
    void *node;
    void *fallback;
    s32 kind;

    node = ((func_802172D0_S1 *)(arg1))->unkFC;
    fallback = (void *)-1;
    if (node != 0) {
        if (((func_80205628_S3 *)(node))->unkC == arg2) {
            return;
        }
        func_8025CA24_de(func_8025CC6C_de(), ((func_802172D0_S1 *)(arg1))->unkFC);
    }

    kind = *(u8 *)arg0;
    if (kind != 0) {
        if (kind >= 0) {
            if (kind < 3) {
                fallback = arg0;
            }
        }
    } else {
        fallback = ((func_802172D0_S3 *)(arg0))->unkD0;
    }

    ((func_802172D0_S1 *)(arg1))->unkFC =
        func_8025C95C_de(func_8025CC6C_de(), arg2, &((func_802172D0_S3 *)(arg0))->unk8,
                      &((func_802172D0_S3 *)(arg0))->unk8, (s32)fallback);
}

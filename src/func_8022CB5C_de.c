#include "common/unused.h"
#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8022C894.h"
#include "span_C76B0/data.h"
/* Phase1 source candidate; contract holds and immutable inputs in per-function JSON. */
#include "types.h"

extern void func_802227F4_de(void *, void *, s32);
extern void func_8022CC34_de(void *arg0, void *arg1);








extern s32 D_801371FC;













void func_8022CB5C_de(void *arg0, void *arg1) {
    f32 scale;

    scale = D_800C2D68_de;
    if (D_801371FC == 0x1DB1) {
        scale = D_800C2D6C_de;
    }
    if (((struct ObjectState1454 *)(arg0))->unk_1450 != 0) {
        f32 current;

        current = ((struct ObjectState1454 *)(arg0))->unk_658;
        if (D_800C2D70_de <= current) {
            goto transition;
        }
        goto scale_value;
    }
    if (!(((struct ObjectState1454 *)(arg0))->unk_6AC & 0x10)) {
        goto transition;
    } else {
        f32 current;

        current = ((struct ObjectState1454 *)(arg0))->unk_658;
        if (!(D_800C2D74_de <= current)) {
            goto scale_value;
        }
    }
transition:
    func_802227F4_de(arg0, arg1, 6);
    goto finish;
scale_value:
    ((struct func_8022CA04_S2 *)(arg1))->unk20 =
        scale * ((struct func_8022CA04_S3 *)(((struct func_8022CA04_S2 *)(arg1))->unk18))->unk20;
finish:
    func_8022CC34_de(arg0, arg1);
}


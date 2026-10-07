#include "span_1000/code_80213ED4.h"
#include "types.h"
#include "shared/func_802171FC_de_closed.h"
#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "common/types_06e4f7ef1f9e.h"

/** Read the next u16 from the cursor stream, wrapping back to base on the -1 sentinel. */
s16 func_802171C8_de(Cursor802171C8 *arg0) {
    u16 *cur;
    u16 value;

    cur = arg0->cur;
    value = *cur;
    cur += 1;
    arg0->cur = cur;
    if (*(s16 *) cur == -1) {
        arg0->cur = arg0->base;
    }
    return (s16) value;
}

void func_802171FC_de(void *arg0, void *arg1) {
    FuncPtr fn = ((struct CallbackState114 *)(arg1))->callback;
    if (fn != 0) {
        fn();
    }
}

extern void func_80271F68_de(Vec3 *, Vec3 *, Vec3 *);




/** Subtract obj->y from arg2 in-place via func_80271F68_de, then return the squared length of (arg1, arg2', arg3). */
f32 func_80217224_de(void *arg0, Vec3 v) {
    f32 temp_f1;

    func_80271F68_de(&v, &v, &((Actor_func_80214310_de *)(arg0))->position);
    temp_f1 = v.y - ((Actor_func_80214310_de *)(arg0))->eye;
    v.y = temp_f1;
    return (v.x * v.x) + (temp_f1 * temp_f1) + (v.z * v.z);
}

/* Squared XZ distance to a point using the existing by-value vector ABI. */
f32 func_80217290_de(void *arg0, Vec3 point)
{
    f32 dx = point.x - ((SharedPlayer *)arg0)->views0.view8_3.pos.x;
    f32 dz = point.z - ((SharedPlayer *)arg0)->views0.view8_3.pos.z;
    return dx * dx + dz * dz;
}

void func_802172C4_de(void *arg0, void *arg1, Func802172C4Value arg2) {
}

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

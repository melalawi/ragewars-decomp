#include "span_1000/code_80213ED4.h"
#include "types.h"
#include "shared/func_802171FC_de_closed.h"
#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"

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

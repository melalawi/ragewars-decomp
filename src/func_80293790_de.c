#include "common/types_06e4f7ef1f9e.h"
#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802646F4.h"
#include "span_1000/code_80291054.h"
#include "types.h"
#include "common/unused.h"
#include "span_C76B0/data.h"

extern func_802077F4_S2 D_800C5494;
extern int func_80264B6C_de(void);

void func_80293790_de(void *arg0, s32 arg1) {
    s32 saved;

    saved = ((func_80293774_S1 *)(arg0))->unk26DB8;
    ((func_80293774_S1 *)(arg0))->unk26DC1 = 1;
    ((func_80293774_S1 *)(arg0))->unk26DC4.v0 = 0;
    ((func_80293774_S1 *)(arg0))->unk26DB8 = 0x14;
    ((func_80293774_S1 *)(arg0))->unk26DBC = arg1;
    ((func_80293774_S1 *)(arg0))->unk26DB4 = saved;
    if (func_80264B6C_de() != 0) {
        ((func_80293774_S1 *)(arg0))->unk26DC4.v1 = D_800C5494.unk4;
    }
}

/** Set the state byte and linked value in a large object. */
void func_80293824_de(void *object, int value) {
    ((func_80293808_S1 *)(object))->unk26DC1 = 2;
    ((func_80293808_S1 *)(object))->unk26DBC = value;
}

typedef void (*Handler8029382C)(void *);


extern void func_80292900_de(void *arg0);
extern s32 D_800CD724;

extern char D_800CD78C[];





void func_80293848_de(void *arg0) {
    s32 field;
    Handler8029382C fn;

    if (D_800CD724 != 0) {
        D_800CD724 = 0;
    }
    func_80264CB8_de();
    field = ((func_8029382C_S1 *)(arg0))->unk26DB8;
    fn = *(Handler8029382C *)(D_800CD78C + field * 0xC);
    if (fn != 0) {
        fn(arg0);
        field = ((func_8029382C_S1 *)(arg0))->unk26DB8;
    }
    if (field != 0x14 && D_80142CA8 != 0) {
        D_80142CA8 -= 1;
        func_80292900_de(arg0);
    }
    D_800CD734 += 1;
}

s32 func_80293904_de(func_80293904_S1 *arg0, f32 arg1, s32 arg2, s32 arg3) {
    s32 *flag = &D_8010B194_de;

    if ((*flag != 0) && (arg3 != -1)) {
        arg0->unk26DC1 = 2;
        arg0->unk26DBC = arg3;
        *flag = 0;
        return 1;
    }
    if ((arg1 * D_800C549C) < arg0->unk26DB0) {
        arg0->unk26DC1 = 2;
        arg0->unk26DBC = arg2;
        return 1;
    }
    return 0;
}

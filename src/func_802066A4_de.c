#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "span_1000/code_80206258.h"
#include "types.h"
#include "shared/func_80206724_de_closed.h"

extern s32 func_80214178_de(void *, void *, s32);
extern s32 func_80285F58_de(void *, void *);
extern s32 D_8011FE88;









void func_802066A4_de(void *arg0, void *arg1) {
    ((func_802066A4_S1 *)(arg1))->unk124 = ((func_802066A4_S3 *)(((func_80204468_S2 *)(arg0))->unk18))->unk18;
    func_80214178_de(arg0, arg1, 0);
    ((func_802066A4_S1 *)(arg1))->unk128 = D_800C1AE0_de;
    ((func_802066A4_S1 *)(arg1))->unk12C = D_800C1AE0_de;
    if (func_80285F58_de(&D_8011FE88, arg0) == 1) {
        ((func_80204468_S2 *)(arg0))->unk100 &= ~0x2000;
        ((func_80204468_S2 *)(arg0))->unk100 &= ~0x100;
    }
}

void func_80206724_de(void *arg0, void *arg1) {
    Shared_CallbackHook *obj = ((Shared_CallbackOwner *)arg1)->hook;
    if (obj != 0) {
        Shared_VoidCallback fn = obj->callback;
        if (fn != 0) {
            fn();
        }
    }
}

int func_80206758_de(void *arg0, void *arg1) {
    return ((func_80206758_S1 *)(arg1))->unk124;
}

void func_80206764_de(void) {
}

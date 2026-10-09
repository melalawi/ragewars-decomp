#include "common/types_06e4f7ef1f9e.h"
#include "span_1000/code_80206258.h"
#include "types.h"

extern s32 func_80214178_de(void *, void *, s32);
extern s32 func_80285F58_de(void *, void *);
extern s32 D_8011FE88;






void func_80207890_de(void *arg0, void *arg1) {
    ((func_80207890_S1 *)(arg1))->unk37 = 0;
    func_80214178_de(arg0, arg1, 0);
    if (((func_80207890_S1 *)(arg1))->unk94 == 1) {
        ((func_80207890_S1 *)(arg1))->unk98 = ((func_80207890_S1 *)(arg1))->unk96;
        func_80214178_de(arg0, arg1, 4);
    }
    if (func_80285F58_de(&D_8011FE88, arg0) == 0) {
        ((func_80203C40_S1 *)(arg0))->unk100 &= ~0x100;
    }
}

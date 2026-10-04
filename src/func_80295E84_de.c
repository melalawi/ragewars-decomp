#include "span_1000/code_802953FC.h"
#include "types.h"

extern void func_8028C15C_de(void *arg0, s32 arg1, s32 *arg2, s32 *arg3);
extern s32 D_8011BDC8;

void func_80295E84_de(s32 *arg0, s32 arg1) {
    func_8028C15C_de(&D_8011BDC8, arg1, arg0, arg0 + 1);
}

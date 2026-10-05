#include "span_16E000/code_80420E90.h"
#include "types.h"

/* Tears down the match display: calls func_80245B28_de, stops the objects at D_80140FC8 and 0x48 bytes
   before it through func_8044A370_de and func_804499B0_de, releases resource 0x24 of D_8011BDC8 through
   func_80286AA8_de, calls func_8025476C_de with one when func_8025477C_de reports nothing, then calls
   func_80245A10_de, func_80245A20_de with zero and func_80245A30_de. */
extern char D_80140FC8[];
extern char D_8011BDC8[];
extern void func_80245B28_de();
extern void func_8044A370_de(void *, s32);
extern void func_804499B0_de(void *, s32, s32);
extern void func_80286AA8_de(void *, s32, s32);
extern s32 func_8025477C_de();
extern void func_8025476C_de(s32);
extern void func_80245A10_de();
extern void func_80245A20_de(s32);
extern void func_80245A30_de();

void func_80422020_de(void) {
    char *object;

    func_80245B28_de();
    object = D_80140FC8;
    func_8044A370_de(object, 0);
    func_804499B0_de(object - 0x48, 0, 0);
    func_80286AA8_de(D_8011BDC8, 0x24, 0);
    if (func_8025477C_de() == 0) {
        func_8025476C_de(1);
    }
    func_80245A10_de();
    func_80245A20_de(0);
    func_80245A30_de();
}

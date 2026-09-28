#include "basetypes.h"

/* Tears down the match display: calls func_80245B18, stops the objects at D_80145088 and 0x48 bytes
   before it through func_8044AFC0 and func_8044A600, releases resource 0x24 of D_8011FE88 through
   func_80286A78, calls func_8025470C with one when func_8025471C reports nothing, then calls
   func_80245A00, func_80245A10 with zero and func_80245A20. */
extern char D_80145088[];
extern char D_8011FE88[];
extern void func_80245B18();
extern void func_8044AFC0(void *, s32);
extern void func_8044A600(void *, s32, s32);
extern void func_80286A78(void *, s32, s32);
extern s32 func_8025471C();
extern void func_8025470C(s32);
extern void func_80245A00();
extern void func_80245A10(s32);
extern void func_80245A20();

void func_80422050(void) {
    char *object;

    func_80245B18();
    object = D_80145088;
    func_8044AFC0(object, 0);
    func_8044A600(object - 0x48, 0, 0);
    func_80286A78(D_8011FE88, 0x24, 0);
    if (func_8025471C() == 0) {
        func_8025470C(1);
    }
    func_80245A00();
    func_80245A10(0);
    func_80245A20();
}

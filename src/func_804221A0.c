#include "basetypes.h"

/* Sets up the match display: calls func_80422218, starts the objects at D_80145088 and 0x48 bytes
   before it through func_8044AFC0 and func_8044A600, loads the resource func_804030E0 names for
   0x27D into D_8011FE88 through func_8044E178, and calls func_8025470C with one when func_8025471C
   reports nothing. */
extern char D_80145088[];
extern char D_8011FE88[];
extern void func_80422218();
extern void func_8044AFC0(void *, s32);
extern void func_8044A600(void *, s32, s32);
extern s32 func_804030E0(s32);
extern void func_8044E178(void *, s32, s32);
extern s32 func_8025471C();
extern void func_8025470C(s32);

void func_804221A0(void) {
    char *object;

    func_80422218();
    object = D_80145088;
    func_8044AFC0(object, 1);
    func_8044A600(object - 0x48, 1, 0);
    func_8044E178(D_8011FE88, ~func_804030E0(0x27D), 0);
    if (func_8025471C() == 0) {
        func_8025470C(1);
    }
}

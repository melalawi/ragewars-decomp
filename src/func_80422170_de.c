#include "span_16E000/code_80421A88.h"
#include "types.h"

/* Sets up the match display: calls func_804221E8_de, starts the objects at D_80145088 and 0x48 bytes
   before it through func_8044A370_de and func_804499B0_de, loads the resource func_804030E0_de names for
   0x27D into D_8011FE88 through func_8044D528_de, and calls func_8025476C_de with one when func_8025477C_de
   reports nothing. */
extern char D_80140FC8[];
extern char D_8011BDC8[];
extern void func_804221E8_de();
extern void func_8044A370_de(void *, s32);
extern void func_804499B0_de(void *, s32, s32);
extern s32 func_804030E0_de(s32);
extern void func_8044D528_de(void *, s32, s32);
extern s32 func_8025477C_de();
extern void func_8025476C_de(s32);

void func_80422170_de(void) {
    char *object;

    func_804221E8_de();
    object = D_80140FC8;
    func_8044A370_de(object, 1);
    func_804499B0_de(object - 0x48, 1, 0);
    func_8044D528_de(D_8011BDC8, ~func_804030E0_de(0x27D), 0);
    if (func_8025477C_de() == 0) {
        func_8025476C_de(1);
    }
}

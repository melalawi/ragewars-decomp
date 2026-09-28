#include "basetypes.h"

/* Calls func_8025E2F4 with -1, func_8025E3A4, func_8025E35C and func_8044E9A0 on D_8011FAC0, and
   returns one. */
extern char D_8011FAC0[];
extern void func_8025E2F4(s32);
extern void func_8025E3A4();
extern void func_8025E35C();
extern void func_8044E9A0(void *);

s32 func_80445200(void) {
    func_8025E2F4(-1);
    func_8025E3A4();
    func_8025E35C();
    func_8044E9A0(D_8011FAC0);
    return 1;
}

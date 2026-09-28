#include "basetypes.h"

/* Calls func_802647A8 on its second argument, then func_8044E178 on D_8011FE88 with D_8013B2C8
   and 2. */
extern char D_8011FE88[];
extern s32 D_8013B2C8;
extern void func_802647A8(void *);
extern void func_8044E178(void *, s32, s32);

void func_80409F98(void *unused, void *object) {
    func_802647A8(object);
    func_8044E178(D_8011FE88, D_8013B2C8, 2);
}

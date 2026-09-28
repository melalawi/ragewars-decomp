#include "basetypes.h"

extern void func_8044AFC0(void *arg0, s32 arg1);
extern void func_8044A600(void *arg0, void *arg1, void *arg2);
extern s32 func_804030E0(s32);
extern void func_8044E178(void *arg0, s32 arg1, s32 arg2);
extern void func_8044DCA4(void *arg0);
extern void func_8044DD40(void *arg0);
extern s32 D_8011FE88;

void func_8029397C(s32 arg0, s32 arg1) {
    func_8044AFC0((char *)arg0 + 0x255C8, 1);
    func_8044A600((char *)arg0 + 0x25580, (void *)1, 0);
    func_8044E178(&D_8011FE88, ~func_804030E0(arg1), 0);
    func_8044DCA4(&D_8011FE88);
    func_8044DD40(&D_8011FE88);
}

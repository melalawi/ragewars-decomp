#include "basetypes.h"

extern void func_8029D6A8(void *);
extern void func_8029DE3C(s32, s32, s32);

void func_8029FDA0(s32 arg0) {
    char buf[0x40];
    func_8029D6A8(buf);
    func_8029DE3C(arg0, buf, arg0);
}

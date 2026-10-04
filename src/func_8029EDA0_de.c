#include "span_1000/code_8029F304.h"
#include "types.h"

extern void func_8029C6A8_de(void *);
extern void func_8029CE3C_de(s32, s32, s32);

void func_8029EDA0_de(s32 arg0) {
    char buf[0x40];
    func_8029C6A8_de(buf);
    func_8029CE3C_de(arg0, buf, arg0);
}

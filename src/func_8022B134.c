#include "basetypes.h"

extern void func_80226DAC(void *arg0, s8 *arg1);
extern void func_80273340(char *, f32 *);

void func_8022B134(void *arg0, f32 *arg1) {
    s8 sp10[0x40];
    func_80226DAC(arg0, sp10);
    func_80273340(sp10, arg1);
}

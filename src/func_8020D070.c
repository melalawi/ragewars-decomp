#include "basetypes.h"

extern void func_8020D014(void *arg0);
extern void func_8020D1FC(s32);
extern void func_8020D220(void *, s32);
extern void func_8020D0CC(void *arg0, s32 arg1);

void func_8020D070(void *arg0, s32 arg1, s32 arg2) {
    func_8020D014(arg0);
    func_8020D1FC((s32) arg0);
    func_8020D220(arg0, arg2);
    func_8020D0CC(arg0, arg1);
}

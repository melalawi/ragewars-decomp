#include "basetypes.h"

extern void func_80225F20(void);
extern void func_802227D0(void *arg0, void *arg1, int arg2);

void func_8022DAA0(void *arg0, void *arg1) {
    void *a0 = arg0;
    void *a1 = arg1;

    func_80225F20();
    if (*(f32 *)((char *)a0 + 0x6C0) == 0.0f) {
        func_802227D0(a0, a1, 0x24);
    }
}

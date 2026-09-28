#include "basetypes.h"

extern void func_802165F8(void *arg0, void *arg1, void *arg2);

f32 func_8024E72C(u8 *arg0) {
    char buf[0x40];
    if (*arg0 == 1) {
        func_802165F8(arg0, arg0 + 0x170, buf);
        return *(f32 *)(buf + 0x38);
    }
    return 0.0f;
}

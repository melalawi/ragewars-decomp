#include "basetypes.h"

extern void func_8025E13C(s32 arg0);
extern void func_8025E2F4(s32 arg0);

void func_802790EC(s32 arg0, s32 arg1, void *arg2) {
    if (*(u16 *)((char *)arg2 + 6) >= 0x100) {
        func_8025E13C(*(u16 *)((char *)arg2 + 6));
        return;
    }
    func_8025E2F4(*(u16 *)((char *)arg2 + 6));
}

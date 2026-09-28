#include "basetypes.h"

extern void func_80276284(void *arg0, u16 arg1);

void func_802761F4(void *arg0) {
    if ((arg0 != 0) && (*(u16 *)((char *)arg0 + 2) & 2)) {
        func_80276284(arg0, *(u16 *)arg0);
    }
}

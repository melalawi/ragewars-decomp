#include "basetypes.h"

extern void func_80276308(void *arg0, u16 arg1);

void func_80276228(void *arg0) {
    if ((arg0 != 0) && (*(u16 *)((char *)arg0 + 2) & 2)) {
        func_80276308(arg0, *(u16 *)arg0);
    }
}

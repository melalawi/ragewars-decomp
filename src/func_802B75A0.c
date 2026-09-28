#include "basetypes.h"

extern void *D_800D80A0;
extern void func_802B82C0(s32 *arg0);

void func_802B75A0(s32 *arg0) {
    void **p;

    p = &D_800D80A0;
    if (*p != 0) {
        func_802B82C0(arg0);
        *p = 0;
    }
}

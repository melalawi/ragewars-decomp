#include "basetypes.h"

extern s32 D_80146CF0;
extern s32 D_80146CF8;
extern void *func_802BF400(void);

void *func_8028F98C(void *arg0) {
    s32 f1a;
    s32 f1b;
    void *v2;

    if (arg0 == 0) {
        return 0;
    }
    f1a = *(s32 *)((char *)arg0 + 0xC);
    if (f1a == D_80146CF8) {
        return 0;
    }
    v2 = func_802BF400();
    f1b = *(s32 *)((char *)arg0 + 0xC);
    if (f1b == (s32)v2) {
        return 0;
    }
    if (f1b != D_80146CF0) {
        return arg0;
    }
    return 0;
}

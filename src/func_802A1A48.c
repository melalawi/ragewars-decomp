#include "basetypes.h"

extern void func_802BFD50(void *arg0, void *arg1, s32 arg2);
extern void func_802C0510(void *arg0, s32 arg1, s32 arg2);

void func_802A1A48(void *arg0) {
    func_802BFD50(arg0, (char *)arg0 + 0x18, 1);
    func_802C0510(arg0, 1, 1);
}

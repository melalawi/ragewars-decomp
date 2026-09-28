#include "basetypes.h"

extern int func_80253294(void *arg0);

s32 func_802624F8(void *arg0) {
    void *temp = *(void **)((char *)arg0 + 0x10);
    if (temp == 0) {
        return 0;
    }
    return func_80253294(temp) != 0;
}

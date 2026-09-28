#include "basetypes.h"

extern void *D_800D052C[];

s32 func_8022AA8C(void *arg0, s32 arg1) {
    void *p = D_800D052C[arg1];
    if (*(s32 *)((char *)arg0 + 0x594) == 1) {
        return *(s32 *)((char *)p + 0x20);
    }
    return *(s32 *)((char *)p + 0x24);
}

#include "basetypes.h"

extern void func_802537D8(void *, void *);

void func_8028DA50(void *arg0) {
    s32 temp;

    temp = *(s32 *)((char *)arg0 + 0x14);
    if (temp != 0) {
        func_802537D8(0, temp);
        *(s32 *)((char *)arg0 + 0x14) = 0;
        *(s32 *)((char *)arg0 + 0x18) = -1;
    }
}

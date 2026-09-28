#include "basetypes.h"

void func_8022A930(void *arg0) {
    s32 val = *(s32 *)((char *)arg0 + 0xB4);
    if (val != 0 && val != 3) {
        *(s32 *)((char *)arg0 + 0xB4) = 3;
    }
}

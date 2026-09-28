#include "basetypes.h"

extern u8 D_801462E5;

s8 func_80250DBC(void *arg0) {
    void *temp_a1;

    if (D_801462E5 != 0) {
        return *(s8 *)((char *)(*(void **)((char *)arg0 + 0x18)) + 0xE);
    }
    temp_a1 = *(void **)((char *)arg0 + 0x18);
    if (*(u32 *)((char *)arg0 + 0xDC) < *(u32 *)((char *)temp_a1 + 0x24) * 2) {
        return *(s8 *)((char *)temp_a1 + 0xE);
    }
    return *(s8 *)((char *)temp_a1 + 0xF);
}

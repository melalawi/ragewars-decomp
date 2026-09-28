#include "basetypes.h"

s32 func_80255CB4(void *arg0, s32 arg1) {
    s32 temp_v1;
    s32 temp_v0;

    temp_v1 = *(s32 *)((char *)arg0 + 4);
    if (temp_v1 != 0) {
        *(s32 *)(arg1 + *(s32 *)((char *)arg0 + 8)) = temp_v1;
        *(s32 *)(*(s32 *)((char *)arg0 + 4) + *(s32 *)((char *)arg0 + 0xC)) = arg1;
    } else {
        *(s32 *)(arg1 + *(s32 *)((char *)arg0 + 8)) = 0;
        *(s32 *)arg0 = arg1;
    }
    *(s32 *)(arg1 + *(s32 *)((char *)arg0 + 0xC)) = 0;
    *(s32 *)((char *)arg0 + 4) = arg1;
    temp_v0 = *(s32 *)((char *)arg0 + 0x10) + 1;
    *(s32 *)((char *)arg0 + 0x10) = temp_v0;
    return temp_v0;
}

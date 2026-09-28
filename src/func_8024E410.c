#include "basetypes.h"

f32 func_8024E410(void *arg0) {
    void *nested;
    if (*(u8 *)arg0 == 1) {
        return *(f32 *)((char *)arg0 + 0x70);
    }
    nested = *(void **)((char *)arg0 + 0x18);
    if (*(s32 *)nested == 0) {
        return *(f32 *)((char *)nested + 0x20);
    }
    return 0.0f;
}

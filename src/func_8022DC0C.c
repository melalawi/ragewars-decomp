/* Reports whether the object's float at 0x718 is above the constant after D_800C7EC8. */
#include "basetypes.h"

extern f32 D_800C7EC8;

s32 func_8022DC0C(void *arg0) {
    f32 field = *(f32 *)((char *)arg0 + 0x718);
    f32 konst = *(f32 *)((char *)&D_800C7EC8 + 4);
    s32 result = 1;
    if (!(konst < field)) {
        result = 0;
    }
    return result;
}

#include "basetypes.h"

s32 func_80275B80(void **arg0, f32 arg1, f32 arg2) {
    s32 i;
    s32 address1;
    s32 address2;
    void *point1;
    void *point2;

    if (arg0 == 0) {
        return 1;
    }

    for (i = 0; i < 3; i++) {
        address1 = (s32)arg0 + i * 4 + 4;
        address2 = (s32)arg0 + ((i + 1) % 3) * 4 + 4;
        point1 = *(void **)address1;
        point2 = *(void **)address2;
        if (((*(f32 *)((char *)point2 + 8) -
              *(f32 *)((char *)point1 + 8)) *
             (arg1 - *(f32 *)point1)) +
                ((*(f32 *)point1 - *(f32 *)point2) *
                 (arg2 - *(f32 *)((char *)point1 + 8))) <
            0.0f) {
            return 0;
        }
    }

    return 1;
}

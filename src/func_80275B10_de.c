#include "common/types_8a8189af7b05.h"
#include "span_1000/code_8027451C.h"
#include "types.h"






s32 func_80275B10_de(void **arg0, f32 arg1, f32 arg2) {
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
        if (((((func_80212828_S7 *)(point2))->unk8 -
              ((func_80212828_S7 *)(point1))->unk8) *
             (arg1 - *(f32 *)point1)) +
                ((*(f32 *)point1 - *(f32 *)point2) *
                 (arg2 - ((func_80212828_S7 *)(point1))->unk8)) <
            0.0f) {
            return 0;
        }
    }

    return 1;
}

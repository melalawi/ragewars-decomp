#include "span_1000/code_8024DF4C.h"
#include "span_1000/types.h"
#include "types.h"






f32 func_8024E420_de(void *arg0) {
    void *nested;
    if (*(u8 *)arg0 == 1) {
        return ((func_8024E410_S1 *)(arg0))->unk70;
    }
    nested = ((func_8024E410_S1 *)(arg0))->unk18;
    if (*(s32 *)nested == 0) {
        return ((func_8022CA04_S3 *)(nested))->unk20;
    }
    return 0.0f;
}

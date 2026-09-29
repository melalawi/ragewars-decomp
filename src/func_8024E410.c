#include "basetypes.h"

typedef struct func_8024E410_S1 func_8024E410_S1;
typedef struct func_8024E410_S2 func_8024E410_S2;
struct func_8024E410_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x70 - 0x18 - sizeof(void*)];
    f32 unk70;
};
struct func_8024E410_S2 {
    char pad0[0x20];
    f32 unk20;
};

f32 func_8024E410(void *arg0) {
    void *nested;
    if (*(u8 *)arg0 == 1) {
        return ((func_8024E410_S1 *)(arg0))->unk70;
    }
    nested = ((func_8024E410_S1 *)(arg0))->unk18;
    if (*(s32 *)nested == 0) {
        return ((func_8024E410_S2 *)(nested))->unk20;
    }
    return 0.0f;
}

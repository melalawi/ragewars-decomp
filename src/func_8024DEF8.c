#include "basetypes.h"

typedef struct func_8024DEF8_S1 func_8024DEF8_S1;
typedef struct func_8024DEF8_S2 func_8024DEF8_S2;
struct func_8024DEF8_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x174 - 0x18 - sizeof(void*)];
    s32 unk174;
};
struct func_8024DEF8_S2 {
    char pad0[0x4C];
    s32 unk4C;
};

s32 func_8024DEF8(void *arg0) {
    void *temp_a1 = ((func_8024DEF8_S1 *)(arg0))->unk18;
    s32 temp_v1 = *(s32 *)temp_a1;

    if (temp_v1 != 1) {
        if (temp_v1 != 0xB) {
            goto ret0;
        }
        return 1;
    }
    {
        s32 var_v1 = 0;
        if (((func_8024DEF8_S1 *)(arg0))->unk174 <= 0 || (((func_8024DEF8_S2 *)(temp_a1))->unk4C & 2)) {
            var_v1 = 1;
        }
        return var_v1;
    }
ret0:
    return 0;
}

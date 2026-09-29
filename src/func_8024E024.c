#include "basetypes.h"

typedef struct func_8024E024_S1 func_8024E024_S1;
typedef struct func_8024E024_S2 func_8024E024_S2;
struct func_8024E024_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x174 - 0x18 - sizeof(void*)];
    s32 unk174;
};
struct func_8024E024_S2 {
    char pad0[0x4C];
    s32 unk4C;
};

s32 func_8024E024(void *arg0) {
    void *temp_a1;
    s32 var_v1;

    temp_a1 = ((func_8024E024_S1 *)(arg0))->unk18;
    if (*(s32 *)temp_a1 == 1) {
        var_v1 = 0;
        if (((func_8024E024_S1 *)(arg0))->unk174 <= 0 || (((func_8024E024_S2 *)(temp_a1))->unk4C & 0x10)) {
            var_v1 = 1;
        }
        return var_v1;
    }
    return 0;
}

#include "basetypes.h"

typedef struct func_8022A930_S1 func_8022A930_S1;
struct func_8022A930_S1 {
    char pad0[0xB4];
    s32 unkB4;
};

void func_8022A930(void *arg0) {
    s32 val = ((func_8022A930_S1 *)(arg0))->unkB4;
    if (val != 0 && val != 3) {
        ((func_8022A930_S1 *)(arg0))->unkB4 = 3;
    }
}

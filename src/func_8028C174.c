#include "basetypes.h"

extern int func_8028FE08(int *arg0, int arg1, int arg2);

typedef struct func_8028C174_S1 func_8028C174_S1;
struct func_8028C174_S1 {
    char pad0[0x24];
    s32 unk24;
    char pad24[0x54 - 0x24 - sizeof(s32)];
    s32* unk54;
};

s32 func_8028C174(void *arg0, s32 arg1) {
    s32 *temp_a0 = ((func_8028C174_S1 *)(arg0))->unk54;

    if (arg1 < *temp_a0) {
        return func_8028FE08(temp_a0, ((func_8028C174_S1 *)(arg0))->unk24, arg1);
    }
    return 0;
}

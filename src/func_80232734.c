#include "basetypes.h"

extern void func_8021A9A4(void *arg0, s32 arg1);

typedef struct func_80232734_S1 func_80232734_S1;
struct func_80232734_S1 {
    char pad0[0x1D8];
    void* unk1D8;
};

void func_80232734(void *arg0, s32 arg1, s32 arg2) {
    func_8021A9A4(((func_80232734_S1 *)(arg0))->unk1D8, arg2);
}

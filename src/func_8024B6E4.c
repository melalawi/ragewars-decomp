#include "basetypes.h"

extern void func_8024B64C(void *arg0, u32 arg1);

typedef struct func_8024B6E4_S1 func_8024B6E4_S1;
struct func_8024B6E4_S1 {
    char pad0[0x100];
    s32 unk100;
};

s32 func_8024B6E4(void *arg0, s32 arg1, s32 arg2) {
    if (arg1 < 0 || (arg2 == 0 && (((func_8024B6E4_S1 *)(arg0))->unk100 & 0x400))) {
        return 0;
    }
    func_8024B64C(arg0, (u32) arg1);
    return 1;
}

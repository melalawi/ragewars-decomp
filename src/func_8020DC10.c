#include "basetypes.h"

extern void func_8020DCA0(void);
extern void func_8020DC60(void *arg0);

typedef struct func_8020DC10_S1 func_8020DC10_S1;
struct func_8020DC10_S1 {
    char pad0[0x64];
    s32 unk64;
    char pad64[0x21C - 0x64 - sizeof(s32)];
    s32 unk21C;
};

s32 func_8020DC10(void *arg0) {
    if (((func_8020DC10_S1 *)(arg0))->unk64 != 0) {
        if ((u32) (((func_8020DC10_S1 *)(arg0))->unk21C - 3) < 3U) {
            func_8020DCA0();
            return 1;
        }
        func_8020DC60(arg0);
        return 1;
    }
    return 1;
}

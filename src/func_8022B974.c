#include "basetypes.h"

extern void func_802227D0(void *, void *, s32);

typedef struct func_8022B974_S1 func_8022B974_S1;
struct func_8022B974_S1 {
    char pad0[0x1210];
    s32 unk1210;
    char pad1210[0x1214 - 0x1210 - sizeof(s32)];
    s32 unk1214;
};

void func_8022B974(void *arg0) {
    if (((func_8022B974_S1 *)(arg0))->unk1210 == 0) {
        func_802227D0(arg0, arg0, 0x27);
        ((func_8022B974_S1 *)(arg0))->unk1210 = 1;
        ((func_8022B974_S1 *)(arg0))->unk1214 = 0;
    }
}

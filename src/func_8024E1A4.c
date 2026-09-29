#include "basetypes.h"

typedef struct func_8024E1A4_S1 func_8024E1A4_S1;
struct func_8024E1A4_S1 {
    char pad0[0x1C];
    s32 unk1C;
    char pad1C[0x100 - 0x1C - sizeof(s32)];
    s32 unk100;
    char pad100[0x1A0 - 0x100 - sizeof(s32)];
    void* unk1A0;
};

s32 func_8024E1A4(void *arg0) {
    if (*(u8 *)arg0 != 1) {
        return 0;
    }
    if (!(((func_8024E1A4_S1 *)(arg0))->unk100 & 0x2000)) {
        return 0;
    }
    arg0 = ((func_8024E1A4_S1 *)(arg0))->unk1A0;
    if (arg0 == 0) {
        goto ret1;
    }
    if (((func_8024E1A4_S1 *)(arg0))->unk1C & 0x10000) {
        return 0;
    }
ret1:
    return 1;
}

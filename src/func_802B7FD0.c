#include "basetypes.h"

typedef struct func_802B7FD0_S1 func_802B7FD0_S1;
struct func_802B7FD0_S1 {
    char pad0[0x3C];
    s32 unk3C;
};

void func_802B7FD0(void *arg0, s16 arg1) {
    ((func_802B7FD0_S1 *)(arg0))->unk3C = (s32) arg1;
}

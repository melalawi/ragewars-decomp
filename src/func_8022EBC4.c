#include "basetypes.h"

extern s32 func_8024E61C(void *arg0);
extern void func_802227D0(void *, void *, s32);

typedef struct func_8022EBC4_S1 func_8022EBC4_S1;
struct func_8022EBC4_S1 {
    char pad0[0x20];
    f32 unk20;
};

s32 func_8022EBC4(void *arg0, void *arg1) {
    if (((func_8022EBC4_S1 *)(arg1))->unk20 <= 0.0f && func_8024E61C(arg1) != 0) {
        func_802227D0(arg0, arg1, 2);
        return 1;
    }
    return 0;
}

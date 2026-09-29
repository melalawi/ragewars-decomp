#include "basetypes.h"

extern u8 *func_802A125C(u8 *, u8 *);
extern void func_80239760(void *, s32, void *, f32);
extern char D_80145088;

typedef struct func_8022B74C_S1 func_8022B74C_S1;
struct func_8022B74C_S1 {
    char pad0[0x5DC];
    s32 unk5DC;
    char pad5DC[0x13B0 - 0x5DC - sizeof(s32)];
    s32 unk13B0;
};

void func_8022B74C(void *arg0, u8 *arg1, f32 arg2) {
    s32 count;
    s32 temp;

    count = ((func_8022B74C_S1 *)(arg0))->unk13B0 + 1;
    ((func_8022B74C_S1 *)(arg0))->unk13B0 = count;
    if (count == 5) {
        ((func_8022B74C_S1 *)(arg0))->unk13B0 = 0;
    }
    func_802A125C((u8 *)((((func_8022B74C_S1 *)(arg0))->unk13B0 * 0x15) + 0x1344 + (char *)arg0), arg1);
    temp = ((func_8022B74C_S1 *)(arg0))->unk5DC;
    if (temp != 0) {
        func_80239760(&D_80145088, temp,
                      (((func_8022B74C_S1 *)(arg0))->unk13B0 * 0x15) + 0x1344 + (char *)arg0,
                      arg2);
    }
}

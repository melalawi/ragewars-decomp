#include "basetypes.h"

extern void *func_802533DC(int a, int b, int c, void *d);
extern void *func_802A101C(void *, s32, u32);

extern int D_800C83C0;

typedef struct func_8023A104_S1 func_8023A104_S1;
struct func_8023A104_S1 {
    void* unk0;
    char pad0[0x4 - 0x0 - sizeof(void*)];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
};

void func_8023A104(void *arg0, s32 arg1) {
    void *ret;
    s32 scaled;
    s32 first;

    scaled = arg1 * 0xED8;
    ((func_8023A104_S1 *)(arg0))->unk8 = arg1;
    ret = func_802533DC(0, scaled, 0x23, (char *)&D_800C83C0 + 4);
    ((func_8023A104_S1 *)(arg0))->unk0 = ret;
    first = *(s32 *)ret;
    ((func_8023A104_S1 *)(arg0))->unk4 = first;
    func_802A101C(first, 0, scaled);
}

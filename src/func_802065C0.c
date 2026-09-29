#include "basetypes.h"

extern void func_8024B690(void *a, s32 c, s32 flag);
extern void func_802472E0(void *arg0);

typedef struct func_802065C0_S1 func_802065C0_S1;
struct func_802065C0_S1 {
    char pad0[0x35];
    s8 unk35;
    char pad35[0xCB - 0x35 - sizeof(s8)];
    s8 unkCB;
    char padCB[0x124 - 0xCB - sizeof(s8)];
    s32 unk124;
};

void func_802065C0(void *a, void *b, s32 c) {
    ((func_802065C0_S1 *)(b))->unk35 = -1;
    ((func_802065C0_S1 *)(b))->unkCB = 0;
    ((func_802065C0_S1 *)(b))->unk124 = c;
    func_8024B690(a, c, 1);
    func_802472E0(a);
}

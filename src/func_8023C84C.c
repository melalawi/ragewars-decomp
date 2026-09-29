#include "basetypes.h"

extern s32 D_80103254;

extern void func_802BFD50(void *arg0, s32 arg1, s32 arg2);
extern void func_802C0510(void *arg0, void *arg1, s32 arg2);
extern void func_802C0390(s32, s32, s32);
extern void func_802537D8(s32 arg0, void *arg1);

typedef struct Block {
    s16 type;
    s16 pad;
    s32 value;
    void *data;
} Block;

typedef struct func_8023C84C_S1 func_8023C84C_S1;
struct func_8023C84C_S1 {
    char pad0[0xC];
    void* unkC;
};

void func_8023C84C(s32 arg0) {
    char sp10[0x18];
    Block block;
    s32 sp38;
    void *sp3C;

    func_802BFD50(sp10, (s32)&sp38, 1);
    block.type = 2;
    block.value = arg0;
    block.data = sp10;
    func_802C0510(&D_80103254, &block, 1);
    func_802C0390(sp10, &sp3C, 1);
    func_802537D8(0, ((func_8023C84C_S1 *)(sp3C))->unkC);
}

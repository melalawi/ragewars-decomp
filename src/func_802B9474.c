#include "basetypes.h"

typedef s32 (*FuncPtr)(void *);

extern void func_802BA4B0(void *arg0, void *a, void *b, s32 c);
extern s32 func_802B5410(s32, s32, void *, s32, s32);

extern char D_2C31C0;
extern char D_2C3B94;

typedef struct func_802B9474_S1 func_802B9474_S1;
struct func_802B9474_S1 {
    char pad0[0x14];
    s32 unk14;
    char pad14[0x18 - 0x14 - sizeof(s32)];
    s32 unk18;
    char pad18[0x30 - 0x18 - sizeof(s32)];
    s32 unk30;
    char pad30[0x3C - 0x30 - sizeof(s32)];
    s32 unk3C;
    char pad3C[0x40 - 0x3C - sizeof(s32)];
    s32 unk40;
    char pad40[0x44 - 0x40 - sizeof(s32)];
    s32 unk44;
};

void func_802B9474(void *arg0, FuncPtr arg1, s32 arg2) {
    func_802BA4B0(arg0, &D_2C31C0, &D_2C3B94, 0);
    ((func_802B9474_S1 *)(arg0))->unk14 = func_802B5410(0, 0, arg2, 1, 0x20);
    ((func_802B9474_S1 *)(arg0))->unk18 = func_802B5410(0, 0, arg2, 1, 0x20);
    ((func_802B9474_S1 *)(arg0))->unk30 = arg1((char *)arg0 + 0x34);
    ((func_802B9474_S1 *)(arg0))->unk3C = 0;
    ((func_802B9474_S1 *)(arg0))->unk40 = 1;
    ((func_802B9474_S1 *)(arg0))->unk44 = 0;
}

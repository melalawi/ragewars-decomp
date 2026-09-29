#include "basetypes.h"

extern s32 func_80252FFC(s32 arg0);
extern s32 func_802A1724(s32 arg0, s32 unused1, s32 arg2);

typedef struct func_8029AB74_S1 func_8029AB74_S1;
struct func_8029AB74_S1 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
    char pad4[0xC - 0x4 - sizeof(s32)];
    s32 unkC;
};

void func_8029AB74(void *arg0, s32 arg1, s32 arg2) {
    if ((((func_8029AB74_S1 *)(arg0))->unk0) == 0) {
        ((func_8029AB74_S1 *)(arg0))->unk0 = func_80252FFC(arg2);
        ((func_8029AB74_S1 *)(arg0))->unkC = 0;
        ((func_8029AB74_S1 *)(arg0))->unk4 = arg2;
    }
    {
        s32 t_c = ((func_8029AB74_S1 *)(arg0))->unkC;
        s32 t_0 = ((func_8029AB74_S1 *)(arg0))->unk0;
        func_802A1724(t_0 + t_c, arg1, arg2);
    }
    ((func_8029AB74_S1 *)(arg0))->unkC = (((func_8029AB74_S1 *)(arg0))->unkC) + arg2;
}

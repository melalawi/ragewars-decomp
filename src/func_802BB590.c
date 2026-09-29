#include "basetypes.h"

extern void func_802B8FE0(s32 arg0, s32 arg1, s32 arg2);
extern int func_802BB1A8(int *arg0, int arg1, int arg2);
extern s32 func_802BA610(void *arg0, s32 arg1, s32 arg2);

typedef struct func_802BB590_S1 func_802BB590_S1;
struct func_802BB590_S1 {
    char pad0[0x30];
    void* unk30;
    char pad30[0x34 - 0x30 - sizeof(void*)];
    s32 unk34;
};

s32 func_802BB590(void *arg0, s16 arg1, s32 arg2, s32 arg3) {
    s32 scaled = arg1 * 0x4C;
    s32 temp_a2;

    func_802B8FE0(((func_802BB590_S1 *)(arg0))->unk34 + scaled + 0x20, arg2, arg3);
    temp_a2 = ((func_802BB590_S1 *)(arg0))->unk34 + scaled;
    func_802BB1A8((int *)(temp_a2 + 0x20), 1, temp_a2);
    func_802BA610(((func_802BB590_S1 *)(arg0))->unk30, 2, ((func_802BB590_S1 *)(arg0))->unk34 + scaled + 0x20);
    return ((func_802BB590_S1 *)(arg0))->unk34 + scaled + 0x20;
}

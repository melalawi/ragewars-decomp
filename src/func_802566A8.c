#include "basetypes.h"

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_80255E78(void *, s32);
extern s32 func_80255C58(void *, s32);

typedef struct func_802566A8_S1 func_802566A8_S1;
typedef struct func_802566A8_S2 func_802566A8_S2;
struct func_802566A8_S1 {
    char pad0[0x5068];
    char unk5068;
    char pad5068[0x507C - 0x5068 - sizeof(char)];
    char unk507C;
};
struct func_802566A8_S2 {
    char pad0[0x14];
    s32 unk14;
};

void func_802566A8(s32 arg0, void *arg1) {
    u32 temp_s2;

    temp_s2 = func_802C2020();
    func_80255E78(&((func_802566A8_S1 *)(arg0))->unk507C, arg1);
    ((func_802566A8_S2 *)(arg1))->unk14 = 0;
    func_80255C58(&((func_802566A8_S1 *)(arg0))->unk5068, (s32) arg1);
    func_802C2040(temp_s2);
}

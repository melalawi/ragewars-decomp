#include "basetypes.h"

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_80255E78(void *, s32);
extern s32 func_80255C58(void *, s32);

typedef struct func_8025663C_S1 func_8025663C_S1;
typedef struct func_8025663C_S2 func_8025663C_S2;
typedef union func_8025663C_S1_U5068 { void* v0; char v1; } func_8025663C_S1_U5068;
struct func_8025663C_S1 {
    char pad0[0x5068];
    func_8025663C_S1_U5068 unk5068;
    char pad5068[0x507C - 0x5068 - sizeof(func_8025663C_S1_U5068)];
    char unk507C;
};
struct func_8025663C_S2 {
    char pad0[0x14];
    s32 unk14;
};

void *func_8025663C(void *arg0) {
    u32 temp_s2;
    void *temp_s0;

    temp_s2 = func_802C2020();
    temp_s0 = ((func_8025663C_S1 *)(arg0))->unk5068.v0;
    if (temp_s0 != 0) {
        func_80255E78(&((func_8025663C_S1 *)(arg0))->unk5068.v1, (s32) temp_s0);
        ((func_8025663C_S2 *)(temp_s0))->unk14 = 1;
        func_80255C58(&((func_8025663C_S1 *)(arg0))->unk507C, (s32) temp_s0);
    }
    func_802C2040(temp_s2);
    return temp_s0;
}

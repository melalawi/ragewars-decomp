#include "basetypes.h"

extern s32 func_80265508(void *arg0, s32 arg1, s32 arg2);
extern s32 func_8028FE1C(s32 arg0, s32 arg1, s32 arg2, s32 *arg3);
extern void * *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);

extern s32 D_285130;
extern s32 D_800CA2C8;

typedef struct func_8028BDE4_S1 func_8028BDE4_S1;
typedef struct func_8028BDE4_S2 func_8028BDE4_S2;
struct func_8028BDE4_S1 {
    char pad0[0x28];
    s32 unk28;
    char pad28[0x58 - 0x28 - sizeof(s32)];
    s32 unk58;
    char pad58[0x98 - 0x58 - sizeof(s32)];
    void* unk98;
};
struct func_8028BDE4_S2 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    char unk8;
};

s32 func_8028BDE4(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    char *o = (char *) arg0;
    void *p;
    s32 idx;
    s32 sp28;
    s32 result;

    p = ((func_8028BDE4_S1 *)(o))->unk98;
    idx = func_80265508(&((func_8028BDE4_S2 *)(p))->unk8, ((func_8028BDE4_S2 *)(p))->unk4, arg1);
    if (idx == -1) {
        return 0;
    }
    result = func_8028FE1C(((func_8028BDE4_S1 *)(o))->unk58, ((func_8028BDE4_S1 *)(o))->unk28, idx, &sp28);
    return func_802518DC(0, result, result, sp28, arg2, 0, (s32) &D_285130, &D_800CA2C8, arg3);
}

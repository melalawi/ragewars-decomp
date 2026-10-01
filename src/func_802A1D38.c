/* Runs once (guarded by D_800D2B80), tags D_800D2B84 with a marker, and if D_800D2BC0 is not 1 sets up a resource through func_80252FFC/func_8025631C before always calling func_802A2050 with a fixed set of data addresses. */
#include "basetypes.h"

extern s32 D_800D2B80;
extern s32 D_800D2B84;
extern s32 D_800D2BC0;
extern s32 D_800D2BB8;
extern s32 D_800D2BB0;
extern s32 D_800D2BBC;
extern s32 D_801051B8;

extern s32 func_80252FFC(s32 arg0);
extern s32 func_8025631C(s32 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_802A2050(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);

extern s32 D_2A2158;
extern s32 D_2A2188;
extern s32 D_2A2198;
extern s32 D_2A21EC;
extern s32 D_2A21F4;
extern s32 D_2A2220;
extern s32 D_2A2230;

typedef struct func_802A1D38_S1 func_802A1D38_S1;
struct func_802A1D38_S1 {
    char pad0[0x8];
    s32 unk8;
};

void func_802A1D38(void) {
    s32 v0;
    s32 one;
    s32 *p;

    if (D_800D2B80++ != 0) {
        return;
    }
    D_800D2B84 = 0x12345678;
    one = 1;
    if (D_800D2BC0 != one) {
        p = &D_800D2BB8;
#ifdef VERSION_EU_X
        *p = 0x90385;
#else
        *p = 0x8B245;
#endif
        v0 = func_80252FFC(D_800D2BB8);
        D_800D2BB0 = v0;
        func_8025631C(&D_801051B8, 0x200000, D_800D2BB8, v0);
        D_800D2BBC = 0;
        ((func_802A1D38_S1 *)(p))->unk8 = one;
    }
    func_802A2050((s32) &D_2A2158, (s32) &D_2A2188, (s32) &D_2A2198, (s32) &D_2A21EC, (s32) &D_2A21F4, (s32) &D_2A2220, (s32) &D_2A2230);
}

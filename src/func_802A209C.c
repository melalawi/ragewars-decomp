#include "basetypes.h"

/* Runs once (guarded by D_800D2B80), tags D_800D2B84 with a marker, and if D_800D2BC0 is not 1 sets up a resource through func_80252FFC/func_8025631C before always calling func_802A2050 with a fixed set of data addresses. */

#if defined(VERSION_DE)
#define VV_8B245 0x8BB01
#elif defined(VERSION_EU_MUL)
#define VV_8B245 0x90385
#else
#define VV_8B245 0x8B245
#endif

extern s32 D_800D2BC0;
typedef struct { s32 value; s32 unused; } GlobalPair;
extern s32 D_801051B8;

extern s32 func_80252FFC(s32 arg0);
extern s32 func_8025631C(s32 *arg0, s32 arg1, s32 arg2, s32 arg3);

typedef struct func_802A209C_S1 func_802A209C_S1;
typedef struct func_802A209C_S2 func_802A209C_S2;
struct func_802A209C_S1 {
    s32 unk0;
};
struct func_802A209C_S2 {
    char pad0[0xC];
    s32 unkC;
};

void func_802A209C(void) {
    s32 temp_v0;
    s32 *p2;

    if (((func_802A209C_S1 *)(&D_800D2BC0))->unk0 != 1) {
        ((GlobalPair *)&D_800D2BC0)[-1].value = VV_8B245;
        temp_v0 = func_80252FFC(VV_8B245);
        ((GlobalPair *)&D_800D2BC0)[-2].value = temp_v0;
        func_8025631C(&D_801051B8, 0x200000, ((GlobalPair *)&D_800D2BC0)[-1].value, temp_v0);
        p2 = &((GlobalPair *)&D_800D2BC0)[-2].value;
        ((func_802A209C_S2 *)(p2))->unkC = 0;
        ((func_802A209C_S1 *)(&D_800D2BC0))->unk0 = 1;
    }
}

#include "basetypes.h"

extern void func_8025E194(s32 arg0);
extern void func_80255E78(void *, s32);
extern s32 func_80255CB4(void *, s32);
extern s32 D_800D0D54;

typedef struct func_8025CA44_S1 func_8025CA44_S1;
typedef struct func_8025CA44_S2 func_8025CA44_S2;
typedef union func_8025CA44_S1_U14 { void* v0; char v1; } func_8025CA44_S1_U14;
struct func_8025CA44_S1 {
    char pad0[0x14];
    func_8025CA44_S1_U14 unk14;
};
struct func_8025CA44_S2 {
    char pad0[0x4];
    void* unk4;
    char pad4[0x8 - 0x4 - sizeof(void*)];
    s32 unk8;
};

s32 func_8025CA44(void *arg0, void *arg1) {
    void *var_s0;

    if (arg1 == 0) {
        return 0;
    }

    var_s0 = ((func_8025CA44_S1 *)(arg0))->unk14.v0;
    if (var_s0 != 0) {
        do {
            if (var_s0 == arg1) {
                func_8025E194(((func_8025CA44_S2 *)(var_s0))->unk8);
                D_800D0D54 = ((func_8025CA44_S2 *)(var_s0))->unk8;
                func_80255E78(&((func_8025CA44_S1 *)(arg0))->unk14.v1, (s32)var_s0);
                func_80255CB4(arg0, (s32)var_s0);
                return 1;
            }
            var_s0 = ((func_8025CA44_S2 *)(var_s0))->unk4;
        } while (var_s0 != 0);
    }
    return 0;
}

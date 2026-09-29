#include "basetypes.h"

extern s32 D_800D0D3C;
extern s32 D_800D0D40;

extern void func_8025AE3C(void *arg0);

typedef struct func_8025BD20_S1 func_8025BD20_S1;
typedef struct func_8025BD20_S2 func_8025BD20_S2;
typedef struct func_8025BD20_S3 func_8025BD20_S3;
struct func_8025BD20_S1 {
    char pad0[0x4];
    char unk4;
};
struct func_8025BD20_S2 {
    char pad0[0x8];
    s32 unk8;
};
struct func_8025BD20_S3 {
    char pad0[0x102];
    s16 unk102;
};

void func_8025BD20(void **arg0) {
    s32 var_s0;
    s32 var_s2;
    char *var_s1;

    var_s2 = 0;
    var_s1 = &((func_8025BD20_S1 *)(arg0))->unk4;
    var_s0 = 0;
    do {
        if (((func_8025BD20_S2 *)(var_s1))->unk8 != -1 && ((func_8025BD20_S3 *)(*arg0))->unk102 != var_s0) {
            func_8025AE3C(var_s1);
            var_s2 += 1;
        }
        var_s0 += 1;
        var_s1 += 0xCC;
    } while (var_s0 < 0x10);
    D_800D0D3C = var_s2;
    if (D_800D0D40 < var_s2) {
        D_800D0D40 = var_s2;
    }
}

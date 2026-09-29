#include "basetypes.h"

extern void *func_8028CF7C(void *arg0, s32 arg1, s32 arg2);
extern s32 D_801468F4;
extern s32 D_8011FE88;

typedef struct func_8022BAC0_S1 func_8022BAC0_S1;
typedef struct func_8022BAC0_S2 func_8022BAC0_S2;
typedef struct func_8022BAC0_S3 func_8022BAC0_S3;
struct func_8022BAC0_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x50 - 0x18 - sizeof(void*)];
    f32 unk50;
    char pad50[0x54 - 0x50 - sizeof(f32)];
    f32 unk54;
    char pad54[0x58 - 0x54 - sizeof(f32)];
    f32 unk58;
    char pad58[0x5D8 - 0x58 - sizeof(f32)];
    void* unk5D8;
    char pad5D8[0x5E0 - 0x5D8 - sizeof(void*)];
    s32 unk5E0;
};
struct func_8022BAC0_S2 {
    char pad0[0x8F];
    u8 unk8F;
};
struct func_8022BAC0_S3 {
    char pad0[0xFC];
    f32 unkFC;
    char padFC[0x100 - 0xFC - sizeof(f32)];
    f32 unk100;
    char pad100[0x104 - 0x100 - sizeof(f32)];
    f32 unk104;
};

void func_8022BAC0(void *arg0) {
    s32 var_a2;
    void *result;

    var_a2 = ((func_8022BAC0_S1 *)(arg0))->unk5E0;
    if (D_801468F4 != 0 && ((func_8022BAC0_S2 *)((((func_8022BAC0_S1 *)(arg0))->unk5D8)))->unk8F == 1) {
        var_a2 = 0x13;
    }
    result = func_8028CF7C(&D_8011FE88, 0xB, var_a2);
    if (result != 0) {
        ((func_8022BAC0_S1 *)(arg0))->unk18 = result;
    } else {
        result = func_8028CF7C(&D_8011FE88, 0xB, -1);
        if (result != 0) {
            ((func_8022BAC0_S1 *)(arg0))->unk18 = result;
        } else {
            result = func_8028CF7C(&D_8011FE88, -1, -1);
            ((func_8022BAC0_S1 *)(arg0))->unk18 = result;
        }
    }
    ((func_8022BAC0_S1 *)(arg0))->unk50 = ((func_8022BAC0_S3 *)(result))->unkFC;
    ((func_8022BAC0_S1 *)(arg0))->unk54 = ((func_8022BAC0_S3 *)(result))->unk100;
    ((func_8022BAC0_S1 *)(arg0))->unk58 = ((func_8022BAC0_S3 *)(result))->unk104;
}

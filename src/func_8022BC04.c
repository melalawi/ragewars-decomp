#include "basetypes.h"

extern void func_8028B250(void *arg0, void *arg1, s32 arg2, s32 arg3);
extern s32 D_801450B8;
extern s32 D_8014694C;
extern void *D_800D052C[];
extern s32 D_8011FE88;

typedef struct func_8022BC04_S1 func_8022BC04_S1;
typedef struct func_8022BC04_S2 func_8022BC04_S2;
typedef struct func_8022BC04_S3 func_8022BC04_S3;
struct func_8022BC04_S1 {
    char pad0[0x2E8];
    char unk2E8;
    char pad2E8[0x484 - 0x2E8 - sizeof(char)];
    void* unk484;
    char pad484[0x62E - 0x484 - sizeof(void*)];
    s16 unk62E;
    char pad62E[0x1450 - 0x62E - sizeof(s16)];
    s32 unk1450;
};
struct func_8022BC04_S2 {
    char pad0[0x4];
    u16 unk4;
};
struct func_8022BC04_S3 {
    char pad0[0x10];
    s32 unk10;
};

void func_8022BC04(void *arg0) {
    s32 var_t0;

    if (((func_8022BC04_S1 *)(arg0))->unk1450 != 0) {
        if (D_8014694C == 0) {
            var_t0 = 0x17;
            goto after;
        }
    }
    var_t0 = (D_801450B8 == 1) ? 0 : 0x17;
after:
    func_8028B250(&D_8011FE88, &((func_8022BC04_S1 *)(arg0))->unk2E8,
        ((func_8022BC04_S2 *)(D_800D052C[((func_8022BC04_S1 *)(arg0))->unk62E]))->unk4 + var_t0,
        ((func_8022BC04_S3 *)(((func_8022BC04_S1 *)(arg0))->unk484))->unk10);
}

#include "basetypes.h"

extern void func_8028B250(void *arg0, void *arg1, s32 arg2, s32 arg3);
extern u8 D_801462C8[];
extern s32 D_800CE47C;
extern s32 D_800CE430[];
extern char D_8011FE88;

typedef struct func_8022BB70_S1 func_8022BB70_S1;
typedef struct func_8022BB70_S2 func_8022BB70_S2;
typedef struct func_8022BB70_S3 func_8022BB70_S3;
typedef struct func_8022BB70_S4 func_8022BB70_S4;
struct func_8022BB70_S1 {
    char pad0[0x62C];
    s32 unk62C;
};
struct func_8022BB70_S2 {
    char pad0[0x3];
    u8 unk3;
    char pad3[0x18 - 0x3 - sizeof(u8)];
    void* unk18;
    char pad18[0x5D8 - 0x18 - sizeof(void*)];
    void* unk5D8;
    char pad5D8[0x86C - 0x5D8 - sizeof(void*)];
    s32 unk86C;
};
struct func_8022BB70_S3 {
    char pad0[0x81];
    u8 unk81;
    char pad81[0x8F - 0x81 - sizeof(u8)];
    u8 unk8F;
};
struct func_8022BB70_S4 {
    char pad0[0xC];
    s16 unkC;
};

void func_8022BB70(void *arg0) {
    s32 var_a2;
    u8 *base;

    base = D_801462C8;
    if (base[0x1D] == 0) {
        var_a2 = 0x66;
    } else if (((func_8022BB70_S1 *)(base))->unk62C != 0 && ((func_8022BB70_S3 *)(((func_8022BB70_S2 *)(arg0))->unk5D8))->unk8F != 0) {
        var_a2 = D_800CE47C;
    } else {
        var_a2 = D_800CE430[((func_8022BB70_S4 *)(((func_8022BB70_S2 *)(arg0))->unk18))->unkC];
        ((func_8022BB70_S2 *)(arg0))->unk3 = ((func_8022BB70_S3 *)(((func_8022BB70_S2 *)(arg0))->unk5D8))->unk81;
    }
    func_8028B250(&D_8011FE88, arg0, var_a2, ((func_8022BB70_S2 *)(arg0))->unk86C);
}

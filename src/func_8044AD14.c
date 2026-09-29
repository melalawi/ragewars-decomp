#include "basetypes.h"

/* Stores the second argument at 0x5E0 of the actor, calls func_802266E4 and func_8021AF6C on it, then starts sound D_8011FE88 for it through func_8028B250 with 0x66, D_800CE47C or its type's entry of D_800CE430 chosen by the options D_801462E5 and D_801468F4.
   Adapted from func_8022BB70 with a leading field store and two calls added and the D_801462C8 offsets changed to the symbols D_801462E5 and D_801468F4. */

extern void func_8028B250(void *arg0, void *arg1, s32 arg2, s32 arg3);
extern void func_802266E4();
extern void func_8021AF6C(void *);
extern u8 D_801462E5;
extern s32 D_801468F4;
extern s32 D_800CE47C;
extern s32 D_800CE430[];
extern char D_8011FE88;

typedef struct func_8044AD14_S1 func_8044AD14_S1;
typedef struct func_8044AD14_S2 func_8044AD14_S2;
typedef struct func_8044AD14_S3 func_8044AD14_S3;
struct func_8044AD14_S1 {
    char pad0[0x3];
    u8 unk3;
    char pad3[0x18 - 0x3 - sizeof(u8)];
    void* unk18;
    char pad18[0x5D8 - 0x18 - sizeof(void*)];
    void* unk5D8;
    char pad5D8[0x5E0 - 0x5D8 - sizeof(void*)];
    s32 unk5E0;
    char pad5E0[0x86C - 0x5E0 - sizeof(s32)];
    s32 unk86C;
};
struct func_8044AD14_S2 {
    char pad0[0x81];
    u8 unk81;
    char pad81[0x8F - 0x81 - sizeof(u8)];
    u8 unk8F;
};
struct func_8044AD14_S3 {
    char pad0[0xC];
    s16 unkC;
};

void func_8044AD14(void *arg0, s32 arg1) {
    s32 var_a2;

    ((func_8044AD14_S1 *)(arg0))->unk5E0 = arg1;
    func_802266E4();
    func_8021AF6C(arg0);
    if (D_801462E5 == 0) {
        var_a2 = 0x66;
    } else if (D_801468F4 != 0 && ((func_8044AD14_S2 *)(((func_8044AD14_S1 *)(arg0))->unk5D8))->unk8F != 0) {
        var_a2 = D_800CE47C;
    } else {
        var_a2 = D_800CE430[((func_8044AD14_S3 *)(((func_8044AD14_S1 *)(arg0))->unk18))->unkC];
        ((func_8044AD14_S1 *)(arg0))->unk3 = ((func_8044AD14_S2 *)(((func_8044AD14_S1 *)(arg0))->unk5D8))->unk81;
    }
    func_8028B250(&D_8011FE88, arg0, var_a2, ((func_8044AD14_S1 *)(arg0))->unk86C);
}

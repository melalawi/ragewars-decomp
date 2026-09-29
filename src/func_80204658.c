#include "basetypes.h"

extern void func_80285D80(void *, void *, s32);
extern void func_80278DE8(void *arg0, s32 arg1, void *arg2);
extern void func_802A6D28(void *, s32);
extern s32 D_8011FE88;
extern s32 D_800CD4C0;
extern char D_8013BA80;

typedef struct func_80204658_S1 func_80204658_S1;
typedef struct func_80204658_S2 func_80204658_S2;
typedef struct func_80204658_S3 func_80204658_S3;
struct func_80204658_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x100 - 0x18 - sizeof(void*)];
    s32 unk100;
};
struct func_80204658_S2 {
    char pad0[0x14];
    s32 unk14;
};
struct func_80204658_S3 {
    char pad0[0x28];
    s16 unk28;
};

void func_80204658(void *arg0) {
    void *temp_s1;
    s32 temp_v1;
    s32 masked;
    s32 *pFlag;

    temp_s1 = ((func_80204658_S1 *)(arg0))->unk18;
    pFlag = &D_8011FE88;
    func_80285D80(pFlag, arg0, 1);
    if (D_800CD4C0 == 0) {
        func_80278DE8(arg0, 0x80000, arg0);
    }
    func_802A6D28(&D_8013BA80, arg0);
    if (*pFlag != 4) {
        temp_v1 = ((func_80204658_S1 *)(arg0))->unk100 | 0x08000000;
        ((func_80204658_S1 *)(arg0))->unk100 = temp_v1;
        if (((func_80204658_S2 *)(temp_s1))->unk14 & 2) {
            masked = temp_v1 & ~0x2000;
            masked = masked & ~0x100;
            ((func_80204658_S1 *)(arg0))->unk100 = masked;
        }
        if (((func_80204658_S3 *)(((func_80204658_S1 *)(arg0))->unk18))->unk28 == 0) {
            ((func_80204658_S1 *)(arg0))->unk100 = ((func_80204658_S1 *)(arg0))->unk100 & ~0x100;
        }
    }
}

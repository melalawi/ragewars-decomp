#include "basetypes.h"

extern s32 func_802170A0(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_80285D80(void *, void *, s32);
extern void func_80278DE8(void *arg0, s32 arg1, void *arg2);

extern s32 D_8011FE88;

typedef struct func_80203B60_S1 func_80203B60_S1;
typedef struct func_80203B60_S2 func_80203B60_S2;
typedef struct func_80203B60_S3 func_80203B60_S3;
struct func_80203B60_S1 {
    char pad0[0x18];
    char* unk18;
    char pad18[0x100 - 0x18 - sizeof(char*)];
    s32 unk100;
};
struct func_80203B60_S2 {
    char pad0[0xC];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
};
struct func_80203B60_S3 {
    char pad0[0x110];
    s32 unk110;
};

void func_80203B60(void *arg0, void *arg1) {
    char *o0 = (char *) arg0;
    char *o1 = (char *) arg1;
    char *tmp;
    s32 masked;
    s32 *pFlag;

    tmp = ((func_80203B60_S1 *)(o0))->unk18 + 0x14;
    func_802170A0(arg0, arg1, 4, ((func_80203B60_S2 *)(tmp))->unkC, ((func_80203B60_S2 *)(tmp))->unk10);
    pFlag = &D_8011FE88;
    ((func_80203B60_S3 *)(o1))->unk110 = 0;
    func_80285D80(pFlag, arg0, 1);
    func_80278DE8(arg0, 1, arg0);
    masked = ((func_80203B60_S1 *)(o0))->unk100 & 0xFFFEFFFF;
    ((func_80203B60_S1 *)(o0))->unk100 = masked;
    if (*pFlag != 4) {
        ((func_80203B60_S1 *)(o0))->unk100 = masked | 0x08000000;
    }
}

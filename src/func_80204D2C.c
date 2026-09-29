#include "basetypes.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Triple;

typedef struct {
    s32 a;
    s32 b;
} Pair;

extern s32 D_8011FE88;
extern char D_8013BA80;

extern void func_80285D80(void *arg0, void *arg1, s32 arg2);
extern void func_80278DE8(void *arg0, s32 arg1, void *arg2);
extern void func_802A6D28(void *arg0, void *arg1);
extern void func_802671B0(void *arg0, void *arg1, s32 arg2,
                          Triple arg3, Pair arg4);

typedef struct func_80204D2C_S1 func_80204D2C_S1;
struct func_80204D2C_S1 {
    char pad0[0x8];
    Triple unk8;
    char pad8[0x100 - 0x8 - sizeof(Triple)];
    s32 unk100;
};

void func_80204D2C(void *arg0) {
    Pair local;
    s32 *flag;

    local.a = 0;
    flag = &D_8011FE88;
    func_80285D80(flag, arg0, 0);
    func_80278DE8(arg0, 0x8000, arg0);
    func_802A6D28(&D_8013BA80, arg0);
    if (*flag != 4) {
        func_802671B0(arg0, arg0, 7,
                      ((func_80204D2C_S1 *)(arg0))->unk8, local);
        ((func_80204D2C_S1 *)(arg0))->unk100 |= 0x08000000;
    }
}

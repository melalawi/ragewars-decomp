#include "basetypes.h"

extern s32 func_8028BAF8(s8 *arg0, void *arg1, s32 arg2);
extern s32 func_8028C544(s8 *arg0, void *arg1);
extern s32 func_80278C80(void *arg0);
extern s8 D_8011FE88[];

typedef struct func_80278EEC_S1 func_80278EEC_S1;
struct func_80278EEC_S1 {
    char pad0[0xE];
    char unkE;
};

void func_80278EEC(void *arg0) {
    ((func_80278EEC_S1 *)(arg0))->unkE |= 0x10;
    func_8028BAF8(D_8011FE88, arg0, 1);
    if ((*(s32 *)D_8011FE88 == 4) && (((func_80278EEC_S1 *)(arg0))->unkE & 2)) {
        func_8028C544(D_8011FE88, arg0);
        return;
    }
    func_80278C80(arg0);
}

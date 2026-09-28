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

extern void func_80285D80(void *, void *, s32);
extern void func_80278DE8(void *arg0, s32 arg1, void *arg2);
extern void func_802A6D28(void *, s32);
extern void func_802671B0(void *, void *, s32, Triple, Pair);

void func_80204C68(void *arg0, void *arg1) {
    Pair local;
    s32 *flag;

    local.a = 0;
    flag = &D_8011FE88;
    func_80285D80(flag, arg0, 1);
    func_80278DE8(arg0, 0x4000, arg0);
    *(s32 *)((char *)arg1 + 0x64) = 0;
    func_802A6D28(&D_8013BA80, arg0);
    if (*flag != 4) {
        func_802671B0(arg0, arg0, 6,
                      *(Triple *)((char *)arg0 + 8), local);
        *(s32 *)((char *)arg0 + 0x100) |= 0x08000000;
    }
}

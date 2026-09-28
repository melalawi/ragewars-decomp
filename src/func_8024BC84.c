#include "basetypes.h"

typedef struct { s32 x, y; } Pair;
typedef struct { s32 a, b, c; } Triple;

extern void func_8024795C(void *arg0);
extern void func_802742B4(void *arg0, void *arg1);
extern void func_80272908(void *, void *, void *);

void *func_8024BC84(void *arg0, s32 unused1, Pair arg2) {
    s32 sp10[4];
    s32 sp20[16];
    Triple sp60;

    func_8024795C(sp10);
    func_802742B4(sp10, sp20);
    func_80272908(sp20, &arg2, &sp60);
    *(Triple *)arg0 = sp60;
    return arg0;
}

#include "basetypes.h"

typedef struct {
    s16 f0;
    s16 f2;
    s16 f4;
    s16 f6;
    s32 f8;
    s16 fC;
    s16 fE;
    s16 f10;
    s16 f12;
} Msg;

extern void func_8029B558(s16 *arg0);

void func_8029BAD8(s16 arg0, s16 arg1, s32 arg2) {
    Msg m;

    m.f0 = 4;
    m.f2 = arg0;
    m.f4 = 1;
    m.f6 = arg1;
    m.f8 = 0;
    m.fC = arg2 != 0;
    m.fE = 0;
    m.f10 = 0;
    m.f12 = 0;
    func_8029B558((s16 *) &m);
}

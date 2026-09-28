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

void func_8029BB24(s16 arg0, s32 arg1, s32 arg2) {
    Msg m;

    m.f0 = 4;
    m.f4 = 3;
    m.f6 = 0x162;
    m.fE = arg1 * 0x64;
    m.f2 = arg0;
    m.f8 = 0;
    m.fC = 0;
    m.f10 = arg2 * 0x64;
    m.f12 = 0;
    func_8029B558((s16 *) &m);
}

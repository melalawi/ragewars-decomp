#include "basetypes.h"

typedef struct S802C50FC {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
} S802C50FC;

extern void func_802C4A18(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);

void func_802C50FC(s32 unused0, S802C50FC *arg1, s32 unused2) {
    func_802C4A18(unused0, arg1->fC, unused2, arg1->f0, arg1->f4, arg1->f8);
}

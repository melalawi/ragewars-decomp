#include "basetypes.h"

typedef struct Triple {
    s32 a;
    s32 b;
    s32 c;
} Triple;

extern s32 func_802979E8(s32 arg0, Triple *arg1);

s32 func_8023939C(s32 arg0, Triple arg1) {
    func_802979E8(arg0 + 0x2F0, &arg1);
}

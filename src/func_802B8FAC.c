#include "basetypes.h"

typedef struct {
    char pad14[0x14];
    s32 count;
    char pad18[0x4];
    s32 *base;
} Obj;

s32 func_802B8FAC(Obj *arg0, s32 arg1, s32 arg2) {
    int new_var;
    s32 *base;
    s32 count;

    base = arg0->base;
    if (arg1 == 2) {
        new_var = arg0->count;
        count = new_var;
        base[count] = arg2;
        new_var = count + 1;
        arg0->count = new_var;
    }
    return 0;
}

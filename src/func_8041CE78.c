/* Stores arg1 into the word at 0x498 of the object arg0. */
#include "basetypes.h"

typedef struct {
    char pad[0x498];
    s32 unk498;
} Obj;

void func_8041CE78(Obj *arg0, s32 arg1) {
    arg0->unk498 = arg1;
}

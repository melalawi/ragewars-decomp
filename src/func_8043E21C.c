/* Sets arg0's unk14 field to the address of D_800D76C8 and returns 0. */
#include "basetypes.h"

typedef struct {
    char pad[0x14];
    void *unk14;
} Obj;

extern char D_800D76C8;

s32 func_8043E21C(Obj *arg0) {
    arg0->unk14 = &D_800D76C8;
    return 0;
}

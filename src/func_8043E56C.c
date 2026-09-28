#include "basetypes.h"

extern void func_80264790(s32 arg0);

typedef struct {
    u8 pad0[4];
    s8 unk4;
} Inner8043E56C;

typedef struct {
    u8 pad0[0x20];
    Inner8043E56C *unk20;
} Outer8043E56C;

/** Forwards the pointed-to inner byte field on to func_80264790. */
void func_8043E56C(Outer8043E56C *arg0) {
    func_80264790(arg0->unk20->unk4);
}

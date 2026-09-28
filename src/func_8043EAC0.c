/* Reads an object's sub-record kind byte and forwards it to two per-kind setup routines. */
#include "basetypes.h"

typedef struct Sub {
    char pad0[4];
    s8 kind;
} Sub;

typedef struct Obj {
    char pad0[0x20];
    Sub *sub;
} Obj;

extern void func_80264790(s32 kind);
extern void func_80404E28(s32 kind);

void func_8043EAC0(Obj *arg0)
{
    s32 kind = arg0->sub->kind;

    func_80264790(kind);
    func_80404E28(kind);
}

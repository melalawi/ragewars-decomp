#include "span_16E000/code_8043E364.h"
#include "span_16E000/types.h"
#include "types.h"
/* Reads an object's sub-record kind byte and forwards it to two per-kind setup routines. */





extern void func_80264770_de(s32 kind);
extern void func_80404E28_de(s32 kind);

void func_8043E948_de(struct Record_func_80409BDC_de *arg0)
{
    s32 kind = arg0->inner->unk4;

    func_80264770_de(kind);
    func_80404E28_de(kind);
}

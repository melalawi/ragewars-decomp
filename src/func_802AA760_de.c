#include "span_1000/code_802AB720.h"
#include "types.h"
typedef s32 M2C_UNK;





M2C_UNK func_802AA70C_de(void *, M2C_UNK *);
extern M2C_UNK D_800CDEC8;
void func_802AA760_de(void *arg0, s32 arg1, s32 arg2) {
    (((struct IntegerState90 *) ((s8 *) arg0))->unk_88) = arg1;
    (((struct IntegerState90 *) ((s8 *) arg0))->unk_84) = arg2;
    (((struct IntegerState90 *) ((s8 *) arg0))->unk_8C) = 0x64;
    func_802AA70C_de(arg0 + 0x48, &D_800CDEC8);
}

#include "span_16E000/code_8043E364.h"
#include "types.h"
/* Clears arg1->unk1C's unk858 flag and its unk5D8's unk80, then forwards to func_80442574_de. */

extern void func_80442574_de(s32 arg0, void *arg1, void *arg2, s32 arg3, s32 arg4);
extern s32 D_0044FB2C;







s32 func_8043E610_de(void *arg0, Handle8043E788 *arg1) {
    Obj1C *temp_a2;

    temp_a2 = arg1->unk1C;
    temp_a2->unk858 = 0;
    temp_a2->unk5D8->unk80 = 0;
    func_80442574_de(temp_a2->unk5DC + 0x554, &D_0044FB2C, temp_a2, temp_a2->unk698, temp_a2->unk5D4);
    return 1;
}

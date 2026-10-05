#include "span_1000/code_8028308C.h"
#include "types.h"

void func_80283BA0_de(void *arg0, s32 arg1) {
    if (((((struct ObjectState60 *) ((s8 *) arg0))->unk_4) == 0x56) && (arg1 == 2)) {
        (((struct ObjectState60 *) ((s8 *) arg0))->unk_5C) = (s32) ((((struct ObjectState60 *) ((s8 *) arg0))->unk_5C) | 0x04000000);
    }
}

extern D801041F8_Layout D_801001F8;




void func_80283BCC_de(void *arg0) {
    ((func_80283BA0_S1 *)(arg0))->unk5C |= 0x20000;
    ((func_80283BA0_S1 *)(arg0))->unk8 = D_801001F8.first;
    ((func_80283BA0_S1 *)(arg0))->unk1C = D_801001F8.second;
}

#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802B53FC.h"
#include "types.h"

extern s32 func_802BBBC0_de(s32);








void *func_802B625C_de(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    char *o = (char *) arg0;
    char *d = (char *) arg3;
    void *ret;
    s32 a1;

    a1 = arg1 & 0xFFFF;
    ((func_802BB32C_S1 *)(d))->unk0 = a1 | 0x08000000;
    ((func_802BB32C_S1 *)(d))->unk4 = (a1 << 0x10) | ((arg2 * 2) & 0xFFFF);
    ((func_802BB32C_S1 *)(d))->unk8 = 0x0B000020;
    ((func_802BB32C_S1 *)(d))->unkC = func_802BBBC0_de((s32) ((char *)o + 8));
    {
        s32 c2 = 0x0E000000;
        s32 b2f = ((func_802BB32C_S2 *)(o))->unk2F;
        s32 h2 = ((func_802BB32C_S2 *)(o))->unk2;
        ((func_802BB32C_S1 *)(d))->unk10 = (b2f << 0x10) | (h2 | c2);
    }
    ret = d + 0x18;
    ((func_802BB32C_S1 *)(d))->unk14 = func_802BBBC0_de(((func_802BB32C_S2 *)(o))->unk28);
    ((func_80205314_S2 *)(o))->unk2C = 0;
    return ret;
}

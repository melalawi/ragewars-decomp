#include "span_1000/code_80263754.h"
#include "types.h"

extern u8 D_8010BBE3[];
extern s32 func_80285AC4_de(void *arg0, void *arg1, s32 arg2);




void func_80263CF0_de(void *arg0) {
    char *o = (char *) arg0;
    s32 type;
    s32 bit;
    s32 bit2;
    s32 i;

    type = ((ObjectState224 *)(o))->unk_4;
    bit = ((D_8010BBE3[type * 4] >> 3) ^ 1) & 1;
    if (bit != 0 && ((ObjectState224 *)(o))->unk_0 == 0) {
        i = 0;
        ((ObjectState224 *)(o))->unk_4 = type;
        ((ObjectState224 *)(o))->unk_0 = 0;
        ((ObjectState224 *)(o))->unk_C8 = 0;
        ((ObjectState224 *)(o))->unk_CC = 0;
        ((ObjectState224 *)(o))->unk_220 = 0;
        ((ObjectState224 *)(o))->unk_8 = 0;
        ((ObjectState224 *)(o))->unk_C = 0;
        ((ObjectState224 *)(o))->unk_10 = 0;
        ((ObjectState224 *)(o))->unk_C4 = 0;
        ((ObjectState224 *)(o))->unk_C5 = 0;
        ((ObjectState224 *)(o))->unk_C6 = 0;
        ((ObjectState224 *)(o))->unk_C7 = 0;
        ((ObjectState224 *)(o))->unk_14 = 0;
        ((ObjectState224 *)(o))->unk_18 = 0;
        ((ObjectState224 *)(o))->unk_1C = 0;
        ((ObjectState224 *)(o))->unk_20 = 0;
        ((ObjectState224 *)(o))->unk_24 = 0;
        ((ObjectState224 *)(o))->unk_28 = 0;
        do {
            ((struct ObjectState30 *) (o + (i * 4)))->unk_2C = 0;
            ((struct ObjectState30 *) (o + (i * 4)))->unk_2D = 0;
            ((struct ObjectState30 *) (o + (i * 4)))->unk_2E = 0x30;
            ((struct ObjectState30 *) (o + (i * 4)))->unk_2F = 0;
            i += 1;
        } while (i < 0x20);
        bit2 = ((D_8010BBE3[type * 4] >> 3) ^ 1) & 1;
        ((ObjectState224 *)(o))->unk_D0 = 0;
        ((ObjectState224 *)(o))->unk_D4 = 0;
        ((ObjectState224 *)(o))->unk_0 = bit2;
        func_80285AC4_de(o + 0x140, o + 0x16C, 3);
    }
    ((ObjectState224 *)(o))->unk_0 = bit;
}

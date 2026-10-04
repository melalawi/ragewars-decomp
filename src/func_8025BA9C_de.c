#include "span_1000/code_8025AE3C.h"
#include "span_1000/types.h"
#include "types.h"

extern void func_802B2F00_de(void *arg0, s16 arg1);
extern s32 func_802B2620_de(void *arg0);
extern void func_802B2F60_de(void *arg0);

void func_8025BA9C_de(s32 arg0, s16 arg1) {
    s32 base;
    s32 a0;
    void *s1;

    base = (arg1 * 0xCC) + arg0;
    base = base + 4;
    a0 = ((struct IntegerStateB4 *) base)->unk_B0;
    ((struct IntegerStateB4 *) base)->unk_AC = 1;
    ((struct IntegerStateB4 *) base)->unk_50 = 0;
    s1 = (void *)(a0 + 0x84);
    if (((struct IntegerStateB4 *) base)->unk_10 != ((struct func_80245A10_S1 *) a0)->unk104) {
        s32 idx = ((struct IntegerStateB4 *) base)->unk_0;
        s32 addr = a0 + idx * 2;
        func_802B2F00_de(s1, ((struct func_8025C458_S3 *) addr)->unkDC);
        if (func_802B2620_de(s1) != 0) {
            func_802B2F60_de(s1);
        }
        ((struct IntegerStateB4 *) base)->unk_4 = -1;
    }
}

#include "span_1000/code_8025AE3C.h"
#include "span_1000/types.h"
#include "types.h"

extern void func_802B2F00_de(void *arg0, s16 arg1);
extern s32 func_802B2620_de(void *arg0);
extern void func_802B2F60_de(void *arg0);




void func_8025C5DC_de(void *arg0) {
    s32 a0;
    void *s1;

    a0 = ((IntegerStateB4_2 *)(arg0))->unk_B0;
    ((IntegerStateB4_2 *)(arg0))->unk_AC = 1;
    ((IntegerStateB4_2 *)(arg0))->unk_50 = 0;
    s1 = (void *)(a0 + 0x84);
    if (((IntegerStateB4_2 *)(arg0))->unk_10 != ((struct func_80245A10_S1 *) a0)->unk104) {
        s32 idx = *(s32 *)arg0;
        s32 addr = a0 + idx * 2;
        func_802B2F00_de(s1, ((struct func_8025C458_S3 *) addr)->unkDC);
        if (func_802B2620_de(s1) != 0) {
            func_802B2F60_de(s1);
        }
        ((IntegerStateB4_2 *)(arg0))->unk_4 = -1;
    }
}

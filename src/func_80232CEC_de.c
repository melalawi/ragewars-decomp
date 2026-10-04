#include "common/types.h"
#include "span_1000/code_80232B44.h"
#include "span_1000/types.h"
#include "types.h"



extern s32 func_802301F4_de(void *, void *);
extern s32 func_8025DE54_de(s16, Vec3, s32, s32);
extern void func_8022B00C_de(void *arg0);
extern s32 func_80214178_de(void *, void *, s32);
extern void func_8022B190_de(s32);








void func_80232CEC_de(void *arg0, void *arg1) {
    void *state;

    state = ((func_8020A028_S3 *)(arg0))->unk1D8;
    if (((func_80232CDC_S2 *)(arg1))->unkCB != 0) {
        if (func_802301F4_de(arg0, arg1) != 0) {
            ((func_80232CDC_S2 *)(arg1))->unkCB = 0;
            ((func_80232CDC_S2 *)(arg1))->unk35 = -1;
        } else {
            switch (((func_80232CDC_S3 *)(state))->unk62E) {
            case 8:
                func_8025DE54_de(0xA3E, ((func_80232CDC_S3 *)(state))->unk8,
                              (s32)((char *)state + 8), -1);
            case 0:
            case 14:
                func_8022B00C_de(state);
                func_80214178_de(arg0, arg1, 2);
                break;
            default:
                func_80214178_de(arg0, arg1, 2);
                break;
            }
        }
        ((func_80232CDC_S3 *)(state))->unk788 = 1;
        ((func_80232CDC_S3 *)(state))->unk78C = 0;
    } else if ((((func_80232CDC_S3 *)(state))->unk62E == 12) &&
               ((((func_80232CDC_S3 *)(state))->unk6AC & 0x4000) != 0)) {
        func_8022B190_de((s32)state);
    }
}

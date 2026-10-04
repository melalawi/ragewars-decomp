#include "common/types.h"
#include "span_1000/code_802301E4.h"
#include "types.h"

extern s32 D_800CD72C;
extern u8 D_801462E5;

extern s32 func_80442A28_de(void *arg0);
extern s32 func_8022AB20_de(void *arg0, s16 arg1);
extern void func_8026DA4C_de();










void func_8023293C_de(void *arg0, void *arg1, void *arg2) {
    void *actor;
    void *resource;
    s32 result;
    s32 one;
    s16 state;

    actor = ((func_8023292C_S1 *)(arg0))->unk1D8;
    resource = ((func_8023292C_S2 *)(actor))->unk5DC;
    result = -1;
    if (resource == 0) {
        return;
    }
    if (D_801462E5 != 0) {
        if (func_80442A28_de((char *)resource + 0x554) != 0) {
            return;
        }
    }
    state = ((func_8023292C_S2 *)(actor))->unk62E;
    one = 1;
    if ((state == one) && (((func_8023292C_S3 *)(arg1))->unk144 == 0)) {
        return;
    }
    if ((state >= 0x12) && (func_8022AB20_de(actor, state) <= 0)) {
        return;
    }
    state = ((func_8023292C_S2 *)(actor))->unk62E;
    if ((state == 0xE) || (state == one) || (state == 0)) {
        result = ((func_8023292C_S2 *)(actor))->unk11F8;
    }
    func_8026DA4C_de(((func_80205628_S3 *)(arg2))->unkC,
                  ((func_8023292C_S1 *)(arg0))->unkB4, 1,
                  (char *)arg0 + (D_800CD72C * 0x18 + 0x140), 0, result);
}

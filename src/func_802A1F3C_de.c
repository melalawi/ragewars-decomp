#include "span_1000/code_8029D984.h"
#include "span_1000/code_802A26F8.h"
#include "types.h"


extern unsigned int func_80299B4C_de(void);
extern void func_802A1D14_de(void *arg0);
extern s32 func_8025DF34_de(s32);




s32 func_802A1F3C_de(void *arg0, s32 unused1, s32 unused2, s32 arg3, s32 arg4) {
    s32 temp_s0;

    temp_s0 = func_8029DB58_de(arg4);
    if (temp_s0 < (s32)func_80299B4C_de()) {
        ((func_802A2EC0_S1 *)(arg0))->unk5C = 2;
        ((func_802A2EC0_S1 *)(arg0))->unk48 = 0;
    }
    if (arg3 != 1) {
        return 0;
    }
    ((func_802A2EC0_S1 *)(arg0))->unk5C = 0;
    func_802A1D14_de(arg0);
    func_8025DF34_de(0xE81);
    return 0;
}

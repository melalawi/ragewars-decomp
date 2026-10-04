#include "common/types.h"
#include "span_1000/code_802A6488.h"
#include "types.h"








extern func_802A6AC0_S2 D_800CC390;
extern func_802077F4_S2 D_800CC3A0;

void func_802A5AD0_de(void *arg0) {
    if (((func_802A6A54_S1 *)(arg0))->unk24 != 0.0f) {
        D_800CC390.unk4 += ((func_802A6A54_S1 *)(arg0))->unk34;
        D_800CC390.unk8 += ((func_802A6A54_S1 *)(arg0))->unk38;
        D_800CC390.unkC += ((func_802A6A54_S1 *)(arg0))->unk3C;
        D_800CC390.unk10 += ((func_802A6A54_S1 *)(arg0))->unk24;
    }
    D_800CC3A0.unk4 += ((func_802A6A54_S1 *)(arg0))->unk14;
}

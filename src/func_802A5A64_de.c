#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802A25C4.h"
#include "types.h"








extern func_802A6A54_S2 D_800CC390;
extern func_802A6A54_S3 D_800CC3A0;

void func_802A5A64_de(void *arg0) {
    if (((func_802A6A54_S1 *)(arg0))->unk24 != 0.0f) {
        D_800CC390.unk4 = ((func_802A6A54_S1 *)(arg0))->unk34;
        D_800CC390.unk8 = ((func_802A6A54_S1 *)(arg0))->unk38;
        D_800CC390.unkC = ((func_802A6A54_S1 *)(arg0))->unk3C;
    } else {
        D_800CC390.unk4 = 0.0f;
        D_800CC390.unk8 = 0.0f;
        D_800CC390.unkC = 0.0f;
    }
    D_800CC3A0.unk0 = ((func_802A6A54_S1 *)(arg0))->unk24;
    D_800CC3A0.unk4 = ((func_802A6A54_S1 *)(arg0))->unk14;
}

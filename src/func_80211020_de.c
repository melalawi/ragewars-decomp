#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802106E0.h"
#include "types.h"

typedef s32 (*Handler)(void *arg0);

extern Handler *D_800C8DB0_de[];




void func_80211020_de(void *arg0) {
    s32 origIdx;
    s32 idx;
    s32 idx2;
    Handler *table;
    Handler fn;
    s32 result;

    origIdx = ((func_80211020_S1 *)(arg0))->unk21C;
    if ((u32)origIdx >= 0xE) {
        ((func_80211020_S1 *)(arg0))->unk21C = 0;
    }
    idx = ((func_80211020_S1 *)(arg0))->unk21C;
    table = D_800C8DB0_de[idx];
    if (table != 0) {
        idx2 = ((func_80211020_S1 *)(arg0))->unk220;
        fn = table[idx2];
        if (fn == 0) {
            ((func_80211020_S1 *)(arg0))->unk220 = 0;
            fn = table[0];
        }
        if (fn != 0) {
            result = fn(arg0);
            if (result != 0) {
                ((func_80211020_S1 *)(arg0))->unk220 = ((func_80211020_S1 *)(arg0))->unk220 + 1;
            }
            if (((func_80211020_S1 *)(arg0))->unk21C != origIdx) {
                ((func_80211020_S1 *)(arg0))->unk220 = 0;
            }
        }
    }
}

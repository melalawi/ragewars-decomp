#include "common/types_06e4f7ef1f9e.h"
#include "common/types_1dc8418c21db.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_80212C90.h"
#include "types.h"

extern void func_80211020_de(void *);
extern void func_80208410_de(void *);
extern void func_80208AAC_de(void *arg0);














void func_80212D94_de(void *arg0)
{
    void *state;
    void *peer;
    void *peer_state;
    s32 value;

    state = ((func_80212828_S2 *)(((func_8020A028_S3 *)(arg0))->unk1D8))->unk1454;
    peer = ((func_80212D94_S3 *)(state))->unk64;
    if (peer == 0) {
        func_80211020_de(state);
        return;
    }
    peer_state = ((func_80212828_S2 *)(((func_8020A028_S3 *)(peer))->unk1D8))->unk1454;
    value = ((func_80203E78_S1 *)(peer_state))->unk4;
    if (value != ((func_80212D94_S3 *)(state))->unk10) {
        ((func_80212D94_S3 *)(state))->unk10 = value;
    }
    func_80208410_de(state);
    func_80211020_de(state);
    func_80208AAC_de(state);
}

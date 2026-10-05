#include "common/types_06e4f7ef1f9e.h"
#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_802106E0.h"
#include "types.h"

extern f32 D_800C20C0_de[];
extern char D_801372A4[];

extern void func_80211020_de(void *);
extern s32 func_8020D1CC_de(void *, s32, s32);
extern void func_80209874_de(void *, s32);
extern f32 func_802726BC_de(f32 *, f32 *);
extern void func_80208410_de(void *);
extern void func_80208EB0_de(void *);
















void func_80212828_de(void *arg0)
{
    void *state;
    void *peer;
    void *peer_actor;
    void *peer_state;
    s32 value;

    state = ((func_80212828_S2 *)(((func_8020A028_S3 *)(arg0))->unk1D8))->unk1454;
    peer = ((func_80212828_S3 *)(state))->unk64;
    if (peer == 0) {
        func_80211020_de(state);
        return;
    }

    peer_actor = ((func_8020A028_S3 *)(peer))->unk1D8;
    peer_state = ((func_80212828_S5 *)(peer_actor))->unk1454;
    value = ((func_80203E78_S1 *)(peer_state))->unk4;
    ((func_80212828_S3 *)(state))->unkC = value;
    if (value != ((func_80212828_S3 *)(state))->unk10) {
        ((func_80212828_S3 *)(state))->unk10 = value;
        if (!func_8020D1CC_de(D_801372A4, ((func_80212828_S3 *)(state))->unk4, value)) {
            func_80209874_de(state, 1);
            return;
        }
    }

    func_80211020_de(state);
    func_80208410_de(state);
    func_80208EB0_de(state);
    if (func_802726BC_de(&((func_80212828_S5 *)(peer_actor))->unk8,
                       &((func_80212828_S7 *)(*(void **)state))->unk8) < D_800C20C0_de[1] ||
        ((func_80212828_S3 *)(state))->unk4 == ((func_80212828_S3 *)(state))->unkC) {
        func_80209874_de(state, ((func_80212828_S3 *)(state))->unk230);
    }
}

#include "common/types_06e4f7ef1f9e.h"
#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "span_1000/code_802106E0.h"
#include "types.h"

extern f32 D_800C20C8_de;

extern void func_80211020_de(void *);
extern void func_80212670_de(void *arg0);
extern s32 func_80209874_de(void *, s32);
extern f32 func_802726BC_de(f32 *arg0, f32 *arg1);
extern void func_80208410_de(void *);
extern void func_80208EB0_de(s32 *);














void func_80212948_de(void *arg0)
{
    void *state;
    s32 old_state;

    state = ((func_80212828_S2 *)(((func_8020A028_S3 *)(arg0))->unk1D8))->unk1454;
    if (((func_80212948_S3 *)(state))->unk64 == 0) {
        func_80211020_de(state);
        return;
    }

    old_state = ((func_80212948_S3 *)(state))->unkC;
    if (old_state == -1) {
        func_80212670_de(state);
        if (((func_80212948_S3 *)(state))->unkC == old_state ||
            ((func_80212948_S3 *)(state))->unkC == ((func_80212948_S3 *)(state))->unk4) {
            func_80209874_de(state, 4);
            return;
        }
    }

    if (D_800C20C8_de < func_802726BC_de(
            &((func_80212828_S7 *)(((func_8020A028_S3 *)(((func_80212948_S3 *)(state))->unk64))->unk1D8))->unk8,
            &((func_80212828_S7 *)(*(void **)state))->unk8)) {
        func_80209874_de(state, ((func_80212948_S3 *)(state))->unk230);
        return;
    }

    func_80211020_de(state);
    func_80208410_de(state);
    func_80208EB0_de(state);
    if (((func_80212948_S3 *)(state))->unk4 == ((func_80212948_S3 *)(state))->unkC) {
        ((func_80212948_S3 *)(state))->unkC = -1;
    }
}

#include "span_1000/code_80212C90.h"
#include "shared/func_802131E0_de_closed.h"
#include "common/types_06e4f7ef1f9e.h"
#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "types.h"

void func_802131E0_de(Root802131E0 *arg0) {
    Target802131E0 *inner;

    inner = arg0->unk1D8->unk1454;
    inner->unk220 = 0;
    func_80209988_de(inner);
    inner->unk320 = -1;
    inner->unk2FC = 0;
}

extern void func_80209874_de(void *arg0, s32 arg1);
extern void func_80211020_de(void *arg0);
extern s32 func_802744D4_de(void);
extern f32 func_80209948_de(void *arg0, s32 arg1);
extern void func_80208410_de(void *);
extern void func_80208AAC_de(void *arg0);












void func_8021321C_de(void *arg0)
{
    void *state;
    s32 random;
    s32 actor_state;
    u32 flags;

    state = ((func_80212828_S2 *)(((func_8020A028_S3 *)(arg0))->unk1D8))->unk1454;
    if (((func_8020EA10_S3 *)(((func_8021321C_S3 *)(*(void **)state))->unk5D8))->unk8F == 0) {
        func_80209874_de(state, 2);
        return;
    }

    func_80211020_de(state);
    if (--((func_8021321C_S5 *)(state))->unk320 == 0) {
        actor_state = ((func_8021321C_S3 *)(*(void **)state))->unk650;
        flags = ((func_8021321C_S3 *)(*(void **)state))->unk38;
        actor_state ^= 15;
        flags = (flags & 0x3000) != 0;
        if (actor_state != 0 && !flags) {
            ((func_8021321C_S3 *)(*(void **)state))->unk6B0 |= 0x10;
        }
    }

    if (((func_8021321C_S5 *)(state))->unk320 < 0) {
        random = func_802744D4_de();
        ((func_8021321C_S5 *)(state))->unk320 = ((random % 5) + 3) * 15;
    }

    if (func_80209948_de(state, ((func_8021321C_S5 *)(state))->unkC) < D_800C20F0_de) {
        ((func_8021321C_S3 *)(*(void **)state))->unk6B0 |= 0x10;
    }
    func_80208410_de(state);
    func_80208AAC_de(state);
}

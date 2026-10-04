#include "span_1000/code_80208410.h"
#include "types.h"


extern s32 D_800C87F0;
extern char D_800F3D20;
extern void *jtbl_800C1CD0[];












void func_80209E80_de(void *arg0)
{
    /* Dispatch the current actor mode through its per-type behavior table. */
    void *state;
    s32 mode;
    s32 type;
    func_80209E80_S1 *actor;

    state = arg0;
    if (state == 0) {
        return;
    }
    actor = *(func_80209E80_S1 **)state;
    if (0.0f < actor->unk11D8) {
        return;
    }

    mode = actor->unk594;
    type = actor->unk62E;
    mode -= 1;
    {
        static void *keep_labels[0] __attribute__((section(".sdata"))) = {
            &&case_0, &&case_1, &&case_2, &&case_3, &&case_4,
            &&case_5, &&case_6, &&case_7, &&case_8
        };
    }
    {
        u32 dispatch = *(&D_800C87F0 + mode + type * 2);
        if (dispatch >= 9) {
            return;
        }
        goto *jtbl_800C1CD0[dispatch];
    }
case_0:
        func_8020A6D8_de(state, &D_800F3D20 + type * 0x38 + mode * 0x1C);
        goto dispatched;
case_1:
        func_8020A7B0_de(state, &D_800F3D20 + type * 0x38 + mode * 0x1C);
        goto dispatched;
case_2:
        ((func_80209E80_S2 *)(state))->unk240 = 1;
        goto dispatched;
case_3:
        func_8020A028_de(state, &D_800F3D20 + type * 0x38);
        goto dispatched;
case_4:
        func_8020A2D4_de(state, &D_800F3D20 + type * 0x38);
        goto dispatched;
case_5:
        func_8020A458_de(state, &D_800F3D20 + type * 0x38);
case_6:
case_7:
case_8:
dispatched:

    if (((func_80209E80_S2 *)(state))->unk240 > 0) {
        ((func_80209E80_S1 *)(*(void **)state))->unk6B0 |= 0x4000;
        ((func_80209E80_S1 *)(*(void **)state))->unk6AC |= 0x4000;
        ((func_80209E80_S2 *)(state))->unk240 -= 1;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C1C00_24[] = {0x00209EF4U, 0x00209EF4U, 0x00209EF4U, 0x00209EF4U, 0x00209F2CU, 0x00209F70U, 0x00209FC0U, 0x00209F98U, 0x00209F64U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800C6DC0_24[] = {0x00209EF4U, 0x00209EF4U, 0x00209EF4U, 0x00209EF4U, 0x00209F2CU, 0x00209F70U, 0x00209FC0U, 0x00209F98U, 0x00209F64U};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C1F70_24[] = {0x00209F14U, 0x00209F14U, 0x00209F14U, 0x00209F14U, 0x00209F4CU, 0x00209F90U, 0x00209FE0U, 0x00209FB8U, 0x00209F84U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C1FB0_24[] = {0x00209F14U, 0x00209F14U, 0x00209F14U, 0x00209F14U, 0x00209F4CU, 0x00209F90U, 0x00209FE0U, 0x00209FB8U, 0x00209F84U};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C1CD0_24[] = {0x00209EF4U, 0x00209EF4U, 0x00209EF4U, 0x00209EF4U, 0x00209F2CU, 0x00209F70U, 0x00209FC0U, 0x00209F98U, 0x00209F64U};
#endif

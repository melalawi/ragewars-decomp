#include "basetypes.h"

extern s32 D_800CDA40;
extern char D_800F7D20;
extern void *jtbl_800C6DC0[];

extern void func_8020A6D8(void *arg0, void *arg1);
extern void func_8020A7B0(void *arg0, void *arg1);
extern void func_8020A028(void *arg0, void *arg1);
extern void func_8020A2D4(void *arg0, void *arg1);
extern void func_8020A458(void *arg0, void *arg1);

void func_80209E80(void *arg0)
{
    /* Dispatch the current actor mode through its per-type behavior table. */
    void *state;
    s32 mode;
    s32 type;

    state = arg0;
    if (state == 0) {
        return;
    }
    if (0.0f < *(f32 *)((char *)*(void **)state + 0x11D8)) {
        return;
    }

    mode = *(s32 *)((char *)*(void **)state + 0x594);
    type = *(s16 *)((char *)*(void **)state + 0x62E);
    mode -= 1;
    {
        static void *keep_labels[0] __attribute__((section(".sdata"))) = {
            &&case_0, &&case_1, &&case_2, &&case_3, &&case_4,
            &&case_5, &&case_6, &&case_7, &&case_8
        };
    }
    {
        u32 dispatch = *(&D_800CDA40 + mode + type * 2);
        if (dispatch >= 9) {
            return;
        }
        goto *jtbl_800C6DC0[dispatch];
    }
case_0:
        func_8020A6D8(state, &D_800F7D20 + type * 0x38 + mode * 0x1C);
        goto dispatched;
case_1:
        func_8020A7B0(state, &D_800F7D20 + type * 0x38 + mode * 0x1C);
        goto dispatched;
case_2:
        *(s32 *)((char *)state + 0x240) = 1;
        goto dispatched;
case_3:
        func_8020A028(state, &D_800F7D20 + type * 0x38);
        goto dispatched;
case_4:
        func_8020A2D4(state, &D_800F7D20 + type * 0x38);
        goto dispatched;
case_5:
        func_8020A458(state, &D_800F7D20 + type * 0x38);
case_6:
case_7:
case_8:
dispatched:

    if (*(s32 *)((char *)state + 0x240) > 0) {
        *(u32 *)((char *)*(void **)state + 0x6B0) |= 0x4000;
        *(u32 *)((char *)*(void **)state + 0x6AC) |= 0x4000;
        *(s32 *)((char *)state + 0x240) -= 1;
    }
}

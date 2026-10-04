#include "common/types.h"
#include "span_1000/code_8022F054.h"
#include "span_1000/code_802301E4.h"
#include "span_1000/types.h"
#include "types.h"

extern void *D_800CB2EC[];
extern s32 D_800CD730;
extern s32 D_8011BDC8;
extern char D_80140FC8;

extern s32 func_80214178_de(void *, void *, s32);

extern s32 func_802327A0_de(s32);

extern void func_80237E80_de(void *, void *, void *);












void func_8022FDAC_de(void *arg0, void *arg1) {
    s16 index;
    u16 unsigned_index;
    void *owner;
    void *state;

    state = ((func_8022FD9C_S1 *)(arg0))->unk1D8;
    index = ((func_8022FD9C_S2 *)(state))->unk770.v0;
    unsigned_index = ((func_8022FD9C_S2 *)(state))->unk770.v1;
    if ((((func_8022FD9C_S2 *)(state))->unk62E != index) || (D_8011BDC8 != 4)) {
        if (func_80232780_de(index) != 0) {
            ((func_8022FD9C_S2 *)(state))->unk13B8 = 1;
        } else if (func_802327A0_de(index) != 0) {
            ((func_8022FD9C_S2 *)(state))->unk13BC = 1;
        } else if (func_802327D4_de(index) != 0) {
            ((func_8022FD9C_S2 *)(state))->unk13C0 = 1;
        }
        ((func_8022FD9C_S2 *)(state))->unk62E = unsigned_index;
        ((func_8022FD9C_S3 *)(arg1))->unk2C = ((func_8022FD9C_Record *)D_800CB2EC[(s16)unsigned_index])->unk54;
        ((func_8022FD9C_S3 *)(arg1))->unk120 = ((func_8022FD9C_S4 *)(D_800CB2EC[((func_8022FD9C_S2 *)(state))->unk62E]))->unk58;
        owner = ((func_8022FD9C_S2 *)(state))->unk5DC;
        if ((owner != 0) && ((u32)D_800CD730 >= 5U)) {
            func_80237E80_de(&D_80140FC8, owner,
                *(void **)*(void **)D_800CB2EC[((func_8022FD9C_S2 *)(state))->unk62E]);
        }
        ((func_8022FD9C_S3 *)(arg1))->unk124 = 0;
        ((func_8022FD9C_S3 *)(arg1))->unk128 = 0;
        ((func_8022FD9C_S1 *)(arg0))->unk1 = 0;
        ((func_8022FD9C_S3 *)(arg1))->unk130 = 0;
    }
    func_80214178_de(arg0, arg1, 0);
}

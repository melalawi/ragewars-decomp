/* Opens the idle-time prompt when allowed and reports whether the pause input remains active. */
#include "basetypes.h"
typedef struct {char pad[0x26DD4];s32 unk26DD4;} Owner;
typedef struct {char pad[0x88];s32 unk88;} Prompt;
s32 func_80245788();                                /* extern */
s32 func_80245840();                                /* extern */
s32 func_80245AFC();                                /* extern */
void func_804037D4(void *);                            /* extern */
s32 func_80442B98(void *);                             typedef struct func_80294BB0_S1 func_80294BB0_S1;
struct func_80294BB0_S1 {
    char pad0[0x1284];
    Prompt unk1284;
};

extern func_80294BB0_S1 D_8014561C;
extern s32 D_80146928;

s32 func_80294BB0(Owner *arg0) {
    s32 var_v0;
    Prompt *temp_a0;

    if ((func_80442B98(&D_8014561C) == 0) && (func_80245788() != 0)) {
        if (func_80245AFC() == 0x78) {
            temp_a0 = &D_8014561C.unk1284;
            if (temp_a0->unk88 == 0) {
                if (arg0->unk26DD4 == 0) {
                    temp_a0->unk88 = 1;
                    func_804037D4(temp_a0);
                }
                goto block_6;
            }
            goto block_7;
        }
    }
block_6:
    if (D_80146928 != 0) {
block_7:
        if (func_80245840() != 0) return 1;
    }
    return 0;
}

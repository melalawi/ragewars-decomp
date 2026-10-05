#include "common/types_06e4f7ef1f9e.h"
#include "span_1000/code_80231F5C.h"
#include "types.h"

extern s32 D_800CD72C;
extern u8 D_801462E5;

extern s32 func_80442A28_de(void *arg0);
extern s32 func_8022AB20_de(void *arg0, s16 arg1);
extern void func_8026DA4C_de();










void func_8023293C_de(void *arg0, void *arg1, void *arg2) {
    void *actor;
    void *resource;
    s32 result;
    s32 one;
    s16 state;

    actor = ((func_8023292C_S1 *)(arg0))->unk1D8;
    resource = ((func_8023292C_S2 *)(actor))->unk5DC;
    result = -1;
    if (resource == 0) {
        return;
    }
    if (D_801462E5 != 0) {
        if (func_80442A28_de((char *)resource + 0x554) != 0) {
            return;
        }
    }
    state = ((func_8023292C_S2 *)(actor))->unk62E;
    one = 1;
    if ((state == one) && (((func_8023292C_S3 *)(arg1))->unk144 == 0)) {
        return;
    }
    if ((state >= 0x12) && (func_8022AB20_de(actor, state) <= 0)) {
        return;
    }
    state = ((func_8023292C_S2 *)(actor))->unk62E;
    if ((state == 0xE) || (state == one) || (state == 0)) {
        result = ((func_8023292C_S2 *)(actor))->unk11F8;
    }
    func_8026DA4C_de(((func_80205628_S3 *)(arg2))->unkC,
                  ((func_8023292C_S1 *)(arg0))->unkB4, 1,
                  (char *)arg0 + (D_800CD72C * 0x18 + 0x140), 0, result);
}

extern void 
#if defined(VERSION_EU) || defined(VERSION_EU_X)
func_80232878_eu
#else
func_8022FDAC_de
#endif
(void *arg0, void *arg1);
extern char D_0022FC20;
extern char D_0023293C;

extern char D_800CA058;






void func_80232A48_de(void *arg0, void *arg1) {
    f32 k = D_800C3018_de;

    ((func_80232A38_S1 *)(arg1))->unk2C = &D_800CA058;
    ((func_80232A38_S1 *)(arg1))->unk108 = &D_0022FC20;
    ((func_80232A38_S1 *)(arg1))->unk10C = &D_0023293C;
    ((func_80232A38_S1 *)(arg1))->unk124 = 0;
    ((func_80232A38_S1 *)(arg1))->unk128 = 0;
    ((func_80232A38_S1 *)(arg1))->unk130 = 0;
    ((func_80232A38_S1 *)(arg1))->unk138 = 0;
    ((func_80232A38_S1 *)(arg1))->unk13C = 1;
    ((func_80232A38_S1 *)(arg1))->unk12C = k;
    ((func_8024BE70_S1 *)(arg0))->unk1 = 0;
    ((func_80232A38_S1 *)(arg1))->unk148 = 0;
    ((func_80232A38_S1 *)(arg1))->unk144 = 1;
    ((func_80232A38_S1 *)(arg1))->unk14C = 0;
    ((func_80232A38_S1 *)(arg1))->unk150 = 0;
    
#if defined(VERSION_EU) || defined(VERSION_EU_X)
func_80232878_eu
#else
func_8022FDAC_de
#endif
(arg0, arg1);
}

extern s32 func_802744D4_de(void);
extern s32 func_8022EB0C_de(void *arg0, s32 arg1);




s32 func_80232ABC_de(void *arg0) {
    s32 var_s1;
    s32 var_s0;

    var_s1 = ((func_8022BECC_S1 *)(arg0))->unk62E;
    var_s0 = func_802744D4_de() % 22;
    if (var_s0 >= 0) {
        do {
            var_s1 += 1;
            if (var_s1 >= 0x10) {
                var_s1 = 0;
            }
            if (func_8022EB0C_de(arg0, var_s1) != 0) {
                var_s0 -= 1;
            }
        } while (var_s0 >= 0);
    }
    return var_s1;
}

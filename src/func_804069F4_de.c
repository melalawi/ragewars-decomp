#include "common/types_8a8189af7b05.h"
#include "common/unused.h"
#include "span_16E000/code_80405454.h"
#include "span_16E000/code_80405DC0.h"
#include "types.h"








/* Selects a usable Controller Pak, checks its notes and free space, and opens the appropriate prompt. */
#define NULL ((void *)0)
#if defined(VERSION_US)
#define D_0044F6C4 D_0044EBE4
#define D_0044F70C D_0044EC2C
#define D_0044FAFC D_0044F01C
#define D_0044FB20 D_0044F040
#elif defined(VERSION_DE)
#define D_0044F6C4 D_0044EA74
#define D_0044F70C D_0044EABC
#define D_0044FAFC D_0044EEAC
#define D_0044FB20 D_0044EED0
#endif
s32 func_8026464C_de(void);
void func_80293268_de(s32);
void func_80404E28_de(s32);
s32 func_80404F04_de(s32);
s32 func_804050CC_de(s32, s32 *);
int func_80405160_de(int, int *);
s32 func_80405338_de(s32, s32, char **);
s32 func_80405598_de(s32);
void func_80405648_de(u8 *, u8 *, s32);
u32 func_804057EC_de(u32);
void func_80405F48_de(void *);
s32 func_80406858_de(void *, s32, s32 *, s32 *);
void * func_80442574_de(void *, void *, s32, s32, s32);
s32 func_802A037C_de();                       /* extern */





extern s32 D_0044E4F8;
extern s32 D_0044F6C4;
extern s32 D_0044F70C;
extern s32 D_0044ED44;
extern s32 D_0044FAFC;
extern s32 D_0044FB20;
extern s32 D_8011BE0C;
extern s32 D_8011BA00;
extern s32 D_8014155C;





extern s32 D_8014D4CC;










void func_804069F4_de(Shared_func_804069F4_S1 *arg0) {
    u8 sp18[16];
    s32 sp28;
    s32 sp2C;
    s8 *sp30;
    s8 *sp34;
    s32 sp38;
    s32 sp3C;
    s32 *var_a1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4; /* FAKEMATCH: reuse the dead second note cursor for the Pak error status. */
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2; /* FAKEMATCH: reuse the completed retry count for the second note name. */
    s32 regpart_var_s2; /* FAKEMATCH: split the second note flag from the dead retry counter. */
    s32 var_s3;
    s32 var_s3_2;
    /* FAKEMATCH: keep the absent-channel sentinel live across the retry scan. */
    s32 var_s5;
    s32 var_s6;
    u32 temp_a0_3;
    u32 temp_s1_3;

    D_8014D4C0_de = 0;
    D_8014D4DC = 1;
    D_8014D4D0 = 0;
    D_8014D4EC_de = 0;
    D_800DE874 = 0;
    D_8014D4F4 = 0;
    D_8014D4CC = 1;
    if (func_8026464C_de() == 0) {
        D_8014D4F4 = 1;
        D_80146CDC = 0;
        func_80442574_de(&D_8014155C, &D_0044F70C, arg0->first, (s32) arg0->second, 0);
        D_800DE87C_de = 1;
        D_80146CD4_de = 0;
        return;
    }
    var_s0 = 0;
    if (D_800DE878 == -1) {
        var_s1 = 0;
        do {
        func_80404E28_de(var_s0);
        if (func_80404F04_de(var_s0) == -2) {
            var_s0 += 1;
            if (var_s0 >= 4) {
                var_s0 = 0;
            }
            var_s1 += 1;
        } else {
            break;
        }
        } while (var_s1 < 4);
        if (var_s1 == 4) {
            var_s0 = -1;
        }
        D_800DE878 = var_s0;
        if (var_s0 != -1) {
            goto block_11;
        }
        goto block_35;
    }
block_11:
    if (func_80405598_de(D_800DE878) == 0) {
        func_80293268_de((s32) &D_8011BA00);
        if ((arg0->second->unkB0 & 0x1000) && (D_800DE87C_de == 0)) {
            D_80142CA0_de = 1;
            D_800DE87C_de = 1;
        }
        var_s0 = 1;
        D_800DE87C_de = var_s0;
        if ((D_80142CAC != 0) || (var_s3 = 0, (D_80142CA0_de != 0))) {
            func_80404E28_de(D_800DE878);
            if (func_80404F04_de(D_800DE878) == -2) {
                D_8014D4F4 = 1;
                D_80146CDC = 0;
                func_80442574_de(&D_8014155C, &D_0044F6C4, arg0->first, (s32) arg0->second, 0);
                D_80146CD4_de = 0;
                D_800DE87C_de = 1;
                return;
            }
            goto block_60;
        }
        /* FAKEMATCH: preserve the status-to-counter copy across a compiler loop boundary. */
        do {} while (0);
        /* FAKEMATCH: redundant copies preserve the status-to-counter register move. */
        temp_s1_2 = var_s3;
        var_s3 = temp_s1_2;
        var_s2 = var_s3;
        sp2C = -1;
        var_s5 = -1;
        sp28 = D_800DE878;
        var_s6 = -2;
loop_20:
        if ((D_800DE878 == var_s5) || (var_s3 = func_80406858_de(arg0, D_800DE878, &sp28, &sp2C), var_s0_2 = 0, (var_s3 == 0))) {
            var_s0_3 = 0;
            if (D_800DE878 != var_s5) {
                var_s0_3 = D_800DE878 + 1;
                if (var_s0_3 >= 4) {
                    var_s0_3 = 0;
                }
            }
            var_s1_2 = 0;
loop_26:
            func_80404E28_de(var_s0_3);
            if (func_80404F04_de(var_s0_3) == var_s6) {
                var_s0_3 += 1;
                if (var_s0_3 >= 4) {
                    var_s0_3 = 0;
                }
                var_s1_2 += 1;
                if (var_s1_2 < 4) {
                    goto loop_26;
                }
            }
            if (var_s1_2 == 4) {
                var_s0_3 = -1;
            }
            D_800DE878 = var_s0_3;
            var_s2 += 1;
            if (var_s2 >= 4) {
                var_s0_2 = 0;
                if (var_s3 == 0) {
                    D_800DE878 = sp28;
                    func_80404E28_de(sp28);
                    if (func_80404F04_de(D_800DE878) == -2) {
block_35:
block_36:
                        D_8014D4F4 = 1;
                        D_80146CDC = 0;
                        func_80442574_de(&D_8014155C, &D_0044F6C4, arg0->first, (s32) arg0->second, 0);
                        D_80146CD4_de = 0;
                        D_800DE87C_de = 1;
                        return;
                    }
                }
                goto block_39;
            }
            goto loop_20;
        }
        goto block_39;
/* FAKEMATCH: place found-note exits before the loops to preserve branch layout. */
first_note_found:
        var_s3_2 = 1;
        goto second_note_search;
second_note_found:
        regpart_var_s2 = 1;
        goto notes_checked;
block_39:
        temp_s2 = D_800D36D4;
        temp_s1 = D_800DE878;
        temp_a0 = temp_s1;
loop_40:
        func_80405338_de(temp_a0, var_s0_2, &sp30);
        func_80405648_de((u8 *) sp30, sp18, 0x10);
        if (func_802A037C_de(sp18, temp_s2) == 0) {
            goto first_note_found;
        }
        var_s0_2 += 1;
        if (var_s0_2 < 0x10) {
            goto loop_40;
        }
        var_s3_2 = 0;
second_note_search:
        var_s0_4 = 0;
        var_s2 = D_800D36D8;
        temp_s1_2 = D_800DE878;
        temp_a0_2 = temp_s1_2;
loop_44:
        func_80405338_de(temp_a0_2, var_s0_4, &sp34);
        func_80405648_de((u8 *) sp34, sp18, 0x10);
        if (func_802A037C_de(sp18, var_s2) == 0) {
            goto second_note_found;
        }
        var_s0_4 += 1;
        if (var_s0_4 < 0x10) {
            goto loop_44;
        }
        regpart_var_s2 = 0;
notes_checked:
        if ((var_s3_2 == 0) && (regpart_var_s2 == 0)) {
            if ((func_80405160_de(D_800DE878, &sp38) == 0) && (var_s0_4 = func_804050CC_de(D_800DE878, &sp3C), (var_s0_4 == 0))) {
                temp_s1_3 = func_804057EC_de(D_8011BE0C + 0x610);
                temp_a0_3 = func_804057EC_de(0x18U);
                if ((sp3C != 0) && (sp38 >= (s32) temp_a0_3)) {
                    if (sp38 < (s32) temp_s1_3) {
                        D_8014D4F4 = 1;
                        D_80142CA0_de = 1;
                        func_80442574_de(&D_8014155C, &D_0044FB20, arg0->first, (s32) arg0->second, (s32) &D_0044E4F8);
                        goto prompt_checked;
                    }
                    /* FAKEMATCH: retain the repeated minimum-size test and its target branch. */
                    if (sp38 < (s32) temp_a0_3) {
                        goto block_56;
                    }
                } else {
block_56:
                    D_8014D4F4 = 1;
                    D_80142CA0_de = 1;
                    func_80442574_de(&D_8014155C, &D_0044FAFC, arg0->first, (s32) arg0->second, (s32) &D_0044E4F8);
                }
prompt_checked:
                if (var_s0_4 != 0) {
                    goto block_59;
                }
            } else {
                goto block_59;
            }
        }
        goto block_60;
    }
block_59:
    D_8014D4F4 = 1;
    D_80142CA0_de = 1;
    func_80442574_de(&D_8014155C, &D_0044ED44, arg0->first, (s32) arg0->second, (s32) &D_0044E4F8);
block_60:
    if (D_8014D4F4 == 0) {
        func_80405F48_de(arg0);
    }
    D_80146CD4_de = 0;
    D_800DE87C_de = 1;
}

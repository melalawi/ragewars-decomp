#include "shared/func_804069f4_s2.h"
#include "shared/func_804069f4_s1.h"
/* Selects a usable Controller Pak, checks its notes and free space, and opens the appropriate prompt. */
#define NULL ((void *)0)
#if defined(VERSION_US)
#define D_44F6C4 D_44EBE4
#define D_44F70C D_44EC2C
#define D_44FAFC D_44F01C
#define D_44FB20 D_44F040
#elif defined(VERSION_DE)
#define D_44F6C4 D_44EA74
#define D_44F70C D_44EABC
#define D_44FAFC D_44EEAC
#define D_44FB20 D_44EED0
#endif
s32 func_8026466C(void);
void func_8029324C(s32);
void func_80404E28(s32);
s32 func_80404F04(s32);
s32 func_804050CC(s32, s32 *);
int func_80405160(int, int *);
s32 func_80405338(s32, s32, char **);
s32 func_80405598(s32);
void func_80405648(u8 *, u8 *, s32);
u32 func_804057EC(u32);
void func_80405F48(void *);
s32 func_80406858(void *, s32, s32 *, s32 *);
void * func_804426E4(void *, void *, s32, s32, s32);
s32 func_802A137C();                       /* extern */

typedef Shared_func_804069F4_S2 func_804069F4_S2;

typedef Shared_func_804069F4_S1 func_804069F4_S1;

extern s32 D_44F148;
extern s32 D_44F6C4;
extern s32 D_44F70C;
extern s32 D_44F994;
extern s32 D_44FAFC;
extern s32 D_44FB20;
extern s32 D_8011FECC;
extern s32 D_8011FAC0;
extern s32 D_8014561C;
extern s32 D_80146D60;
extern s32 D_80146D6C;
extern s32 D_8014AD94;
extern s32 D_8014AD9C;
extern s32 D_80153750;
extern s32 D_8015375C;
extern s32 D_80153760;
extern s32 D_8015376C;
extern s32 D_8015377C;
extern s32 D_80153784;
extern s32 D_800D7700;
extern s32 D_800D7704;
extern s32 D_800E28C4;
extern s32 D_800E28C8;
extern s32 D_800E28CC;

void func_804069F4(func_804069F4_S1 *arg0) {
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

    D_80153750 = 0;
    D_8015376C = 1;
    D_80153760 = 0;
    D_8015377C = 0;
    D_800E28C4 = 0;
    D_80153784 = 0;
    D_8015375C = 1;
    if (func_8026466C() == 0) {
        D_80153784 = 1;
        D_8014AD9C = 0;
        func_804426E4(&D_8014561C, &D_44F70C, arg0->first, (s32) arg0->second, 0);
        D_800E28CC = 1;
        D_8014AD94 = 0;
        return;
    }
    var_s0 = 0;
    if (D_800E28C8 == -1) {
        var_s1 = 0;
        do {
        func_80404E28(var_s0);
        if (func_80404F04(var_s0) == -2) {
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
        D_800E28C8 = var_s0;
        if (var_s0 != -1) {
            goto block_11;
        }
        goto block_35;
    }
block_11:
    if (func_80405598(D_800E28C8) == 0) {
        func_8029324C((s32) &D_8011FAC0);
        if ((arg0->second->flags & 0x1000) && (D_800E28CC == 0)) {
            D_80146D60 = 1;
            D_800E28CC = 1;
        }
        var_s0 = 1;
        D_800E28CC = var_s0;
        if ((D_80146D6C != 0) || (var_s3 = 0, (D_80146D60 != 0))) {
            func_80404E28(D_800E28C8);
            if (func_80404F04(D_800E28C8) == -2) {
                D_80153784 = 1;
                D_8014AD9C = 0;
                func_804426E4(&D_8014561C, &D_44F6C4, arg0->first, (s32) arg0->second, 0);
                D_8014AD94 = 0;
                D_800E28CC = 1;
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
        sp28 = D_800E28C8;
        var_s6 = -2;
loop_20:
        if ((D_800E28C8 == var_s5) || (var_s3 = func_80406858(arg0, D_800E28C8, &sp28, &sp2C), var_s0_2 = 0, (var_s3 == 0))) {
            var_s0_3 = 0;
            if (D_800E28C8 != var_s5) {
                var_s0_3 = D_800E28C8 + 1;
                if (var_s0_3 >= 4) {
                    var_s0_3 = 0;
                }
            }
            var_s1_2 = 0;
loop_26:
            func_80404E28(var_s0_3);
            if (func_80404F04(var_s0_3) == var_s6) {
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
            D_800E28C8 = var_s0_3;
            var_s2 += 1;
            if (var_s2 >= 4) {
                var_s0_2 = 0;
                if (var_s3 == 0) {
                    D_800E28C8 = sp28;
                    func_80404E28(sp28);
                    if (func_80404F04(D_800E28C8) == -2) {
block_35:
block_36:
                        D_80153784 = 1;
                        D_8014AD9C = 0;
                        func_804426E4(&D_8014561C, &D_44F6C4, arg0->first, (s32) arg0->second, 0);
                        D_8014AD94 = 0;
                        D_800E28CC = 1;
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
        temp_s2 = D_800D7700;
        temp_s1 = D_800E28C8;
        temp_a0 = temp_s1;
loop_40:
        func_80405338(temp_a0, var_s0_2, &sp30);
        func_80405648((u8 *) sp30, sp18, 0x10);
        if (func_802A137C(sp18, temp_s2) == 0) {
            goto first_note_found;
        }
        var_s0_2 += 1;
        if (var_s0_2 < 0x10) {
            goto loop_40;
        }
        var_s3_2 = 0;
second_note_search:
        var_s0_4 = 0;
        var_s2 = D_800D7704;
        temp_s1_2 = D_800E28C8;
        temp_a0_2 = temp_s1_2;
loop_44:
        func_80405338(temp_a0_2, var_s0_4, &sp34);
        func_80405648((u8 *) sp34, sp18, 0x10);
        if (func_802A137C(sp18, var_s2) == 0) {
            goto second_note_found;
        }
        var_s0_4 += 1;
        if (var_s0_4 < 0x10) {
            goto loop_44;
        }
        regpart_var_s2 = 0;
notes_checked:
        if ((var_s3_2 == 0) && (regpart_var_s2 == 0)) {
            if ((func_80405160(D_800E28C8, &sp38) == 0) && (var_s0_4 = func_804050CC(D_800E28C8, &sp3C), (var_s0_4 == 0))) {
                temp_s1_3 = func_804057EC(D_8011FECC + 0x610);
                temp_a0_3 = func_804057EC(0x18U);
                if ((sp3C != 0) && (sp38 >= (s32) temp_a0_3)) {
                    if (sp38 < (s32) temp_s1_3) {
                        D_80153784 = 1;
                        D_80146D60 = 1;
                        func_804426E4(&D_8014561C, &D_44FB20, arg0->first, (s32) arg0->second, (s32) &D_44F148);
                        goto prompt_checked;
                    }
                    /* FAKEMATCH: retain the repeated minimum-size test and its target branch. */
                    if (sp38 < (s32) temp_a0_3) {
                        goto block_56;
                    }
                } else {
block_56:
                    D_80153784 = 1;
                    D_80146D60 = 1;
                    func_804426E4(&D_8014561C, &D_44FAFC, arg0->first, (s32) arg0->second, (s32) &D_44F148);
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
    D_80153784 = 1;
    D_80146D60 = 1;
    func_804426E4(&D_8014561C, &D_44F994, arg0->first, (s32) arg0->second, (s32) &D_44F148);
block_60:
    if (D_80153784 == 0) {
        func_80405F48(arg0);
    }
    D_8014AD94 = 0;
    D_800E28CC = 1;
}

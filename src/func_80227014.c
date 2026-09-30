#include "../splat/types/shared/entry190.h"
#include "../splat/types/shared/func_80227014_s1.h"
#include "../splat/types/shared/func_80227014_s2.h"
#include "../splat/types/shared/func_80227014_s3.h"
#include "../splat/types/shared/func_80227014_s4.h"
#include "../splat/types/shared/func_80227014_s5.h"
#include "../splat/types/shared/func_80227014_s6.h"
#include "../splat/types/shared/func_80227014_s7.h"
#include "../splat/types/shared/func_80227014_s8.h"
#include "../splat/types/shared/func_80227014_s9.h"
#include "../splat/types/shared/func_80227014_s10.h"
#include "../splat/types/shared/func_80227014_s11.h"
#include "../splat/types/shared/func_80227014_s12.h"
#include "../splat/types/shared/func_80227014_s13.h"
#include "../splat/types/shared/func_80227014_s14.h"
#include "../splat/types/shared/func_80227014_s15.h"
#include "../splat/types/shared/func_80227014_s16.h"
#include "../splat/types/shared/func_80227014_s17.h"
#include "../splat/types/shared/func_80227014_s18.h"
#include "../splat/types/shared/func_80227014_s19.h"
#include "../splat/types/shared/func_80227014_s20.h"
#include "../splat/types/shared/func_80227014_s21.h"
#include "../splat/types/shared/func_80227014_s22.h"
#include "../splat/types/shared/func_80227014_s23.h"
/* Updates the battle presentation and character banners for the active world. */
#define NULL ((void *)0)
/* The values func_80227014 loads by address:
 * 0x800C7C90 = 0.5 (float, D_800C7C90 in this cartridge's tables)
 * 0x800C7C94 = 32.0 (float, unnamed in this cartridge's tables)
 * 0x800E28D0 = 4.48e-43 (float, D_800E28D0 in this cartridge's tables; not a literal: a variable, its value in the image, since D_800E28D0: `sw` at %lo(D_800E28D0) in func_8040BC30.s)
 * 0x800E28D4 = 3.36e-43 (float, D_800E28D4 in this cartridge's tables)
 * 0x800C7C98 = 0.5 (float, D_800C7C98 in this cartridge's tables)
 * 0x800C7C9C = 32.0 (float, unnamed in this cartridge's tables)
 * 0x800C7CA0 = 0.5 (float, D_800C7CA0 in this cartridge's tables)
 * 0x800C7CA4 = 32.0 (float, unnamed in this cartridge's tables)
 * 0x800C7CA8 = 0.5 (float, D_800C7CA8 in this cartridge's tables)
 * 0x800C7CAC = 32.0 (float, unnamed in this cartridge's tables)
 */
s32 func_80214178(void *, void *, s32);
void func_80218464(void *);
void func_802266E4(void *);
s32 func_802281CC(void *);
void * func_8022A5E4(void *, u32);
void func_8022A738(void *);
void * func_8022C54C(void *, u32);
void func_8022C59C(char *);
void func_8022C5CC(void *);
s32 func_8022C610(char *);
int func_80245774(void);
int func_80245788(void);
void func_8025E2F4(s32);
s32 func_80274544(void);
void func_802AA224(s32);
s32 func_802ABC18(s32, s32, s16, s16, f32, f32, s32);
s32 func_8021B1E4(); /* extern */
s32 func_8025DE74(s32, s32, s32, s32, void *, s32);      /* extern */
typedef Shared_Entry190 Entry190;
extern Entry190 D_80102B10[];
extern volatile u8 D_801462D5; /* FAKEMATCH: preserve late modifier-load order. */
extern u8 D_801462DE;
extern s32 D_80146910;
extern u32 D_80146914;
extern volatile s32 D_80146938; /* FAKEMATCH: preserve score-branch load order. */
#if defined(VERSION_US_REV1)
extern s32 D_80146908;
extern s32 D_8014690C;
extern s32 D_800CE408;
#elif defined(VERSION_US)
#define D_80146908 D_80140848
extern s32 D_80140848;
#define D_8014690C D_8014084C
extern s32 D_8014084C;
#define D_800CE408 us_D_800C90D8
extern s32 us_D_800C90D8;
#elif defined(VERSION_EU)
#define D_80146908 D_80152848
extern s32 D_80152848;
#define D_8014690C D_8015284C
extern s32 D_8015284C;
#define D_800CE408 D_800C9DA8
extern s32 D_800C9DA8;
#elif defined(VERSION_EU_MUL)
#define D_80146908 D_8014C848
extern s32 D_8014C848;
#define D_8014690C D_8014C84C
extern s32 D_8014C84C;
#define D_800CE408 D_800CA778
extern s32 D_800CA778;
#elif defined(VERSION_DE)
#define D_80146908 D_80142848
extern s32 D_80142848;
#define D_8014690C D_8014284C
extern s32 D_8014284C;
#define D_800CE408 D_800C91B8
extern s32 D_800C91B8;
#endif
#if defined(VERSION_US_REV1)
extern void *jtbl_800C7C70[];
#elif defined(VERSION_US)
#define jtbl_800C7C70 jtbl_800C2AB0
extern void *jtbl_800C2AB0[];
#elif defined(VERSION_EU)
#define jtbl_800C7C70 jtbl_800C2E20
extern void *jtbl_800C2E20[];
#elif defined(VERSION_EU_MUL)
#define jtbl_800C7C70 jtbl_800C2E60
extern void *jtbl_800C2E60[];
#elif defined(VERSION_DE)
#define jtbl_800C7C70 jtbl_800C2B80
extern void *jtbl_800C2B80[];
#endif
typedef Shared_func_80227014_S5 func_80227014_S5;
extern s32 D_800E28D0;
extern s32 D_800E28D4;
#if defined(VERSION_US_REV1)
extern f32 D_800C7C90;
extern f32 D_800C7C94;
extern f32 D_800C7C98;
extern f32 D_800C7C9C;
extern f32 D_800C7CA0;
extern f32 D_800C7CA4;
extern f32 D_800C7CA8;
extern f32 D_800C7CAC;
#elif defined(VERSION_US)
#define D_800C7C90 D_800C2AD0
extern f32 D_800C2AD0;
#define D_800C7C94 D_800C2AD4
extern f32 D_800C2AD4;
#define D_800C7C98 D_800C2AD8
extern f32 D_800C2AD8;
#define D_800C7C9C D_800C2ADC
extern f32 D_800C2ADC;
#define D_800C7CA0 D_800C2AE0
extern f32 D_800C2AE0;
#define D_800C7CA4 D_800C2AE4
extern f32 D_800C2AE4;
#define D_800C7CA8 D_800C2AE8
extern f32 D_800C2AE8;
#define D_800C7CAC D_800C2AEC
extern f32 D_800C2AEC;
#elif defined(VERSION_EU)
#define D_800C7C90 D_800C2E40
extern f32 D_800C2E40;
#define D_800C7C94 D_800C2E44
extern f32 D_800C2E44;
#define D_800C7C98 D_800C2E48
extern f32 D_800C2E48;
#define D_800C7C9C D_800C2E4C
extern f32 D_800C2E4C;
#define D_800C7CA0 D_800C2E50
extern f32 D_800C2E50;
#define D_800C7CA4 D_800C2E54
extern f32 D_800C2E54;
#define D_800C7CA8 D_800C2E58
extern f32 D_800C2E58;
#define D_800C7CAC D_800C2E5C
extern f32 D_800C2E5C;
#elif defined(VERSION_EU_MUL)
#define D_800C7C90 D_800C2E80
extern f32 D_800C2E80;
#define D_800C7C94 D_800C2E84
extern f32 D_800C2E84;
#define D_800C7C98 D_800C2E88
extern f32 D_800C2E88;
#define D_800C7C9C D_800C2E8C
extern f32 D_800C2E8C;
#define D_800C7CA0 D_800C2E90
extern f32 D_800C2E90;
#define D_800C7CA4 D_800C2E94
extern f32 D_800C2E94;
#define D_800C7CA8 D_800C2E98
extern f32 D_800C2E98;
#define D_800C7CAC D_800C2E9C
extern f32 D_800C2E9C;
#elif defined(VERSION_DE)
#define D_800C7C90 D_800C2BA0
extern f32 D_800C2BA0;
#define D_800C7C94 D_800C2BA4
extern f32 D_800C2BA4;
#define D_800C7C98 D_800C2BA8
extern f32 D_800C2BA8;
#define D_800C7C9C D_800C2BAC
extern f32 D_800C2BAC;
#define D_800C7CA0 D_800C2BB0
extern f32 D_800C2BB0;
#define D_800C7CA4 D_800C2BB4
extern f32 D_800C2BB4;
#define D_800C7CA8 D_800C2BB8
extern f32 D_800C2BB8;
#define D_800C7CAC D_800C2BBC
extern f32 D_800C2BBC;
#endif
typedef Shared_func_80227014_S1 func_80227014_S1;
extern func_80227014_S1 D_801468A0;
typedef Shared_func_80227014_S2 func_80227014_S2;
typedef Shared_func_80227014_S3 func_80227014_S3;
typedef Shared_func_80227014_S4 func_80227014_S4;
typedef Shared_func_80227014_S6 func_80227014_S6;
typedef Shared_func_80227014_S7 func_80227014_S7;
typedef Shared_func_80227014_S8 func_80227014_S8;
typedef Shared_func_80227014_S9 func_80227014_S9;
typedef Shared_func_80227014_S10 func_80227014_S10;
typedef Shared_func_80227014_S11 func_80227014_S11;
typedef Shared_func_80227014_S12 func_80227014_S12;
typedef Shared_func_80227014_S13 func_80227014_S13;
typedef Shared_func_80227014_S14 func_80227014_S14;
typedef Shared_func_80227014_S15 func_80227014_S15;
typedef Shared_func_80227014_S16 func_80227014_S16;
typedef Shared_func_80227014_S17 func_80227014_S17;
typedef Shared_func_80227014_S18 func_80227014_S18;
typedef Shared_func_80227014_S19 func_80227014_S19;
typedef Shared_func_80227014_S20 func_80227014_S20;
typedef Shared_func_80227014_S21 func_80227014_S21;
typedef Shared_func_80227014_S22 func_80227014_S22;
typedef Shared_func_80227014_S23 func_80227014_S23;
























/* unable to generate initializer: unknown type */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x48, 0x4c], gap at: 0x40. */
void func_80227014(s8 *arg0) {
    static void *dispatch_labels[0] __attribute__((section(".sdata"))) = {&&state_0, &&state_1, &&state_2, &&state_3, &&state_4, &&state_5, &&state_6, &&state_7};
    func_80227014_S1 *initial_rules; /* FAKEMATCH: split early rules pointer lifetime. */
    func_80227014_S1 *select_rules; /* FAKEMATCH: isolate selector rules pointer. */
    func_80227014_S1 *case2_rules; /* FAKEMATCH: keep short case-2 address in caller register. */
    func_80227014_S1 *case3_entry; /* FAKEMATCH: end entry address lifetime at actor lookup. */
    func_80227014_S1 *case3_loop; /* FAKEMATCH: short rules pointer inside third state loop. */
    func_80227014_S1 *case4_entry; /* FAKEMATCH: end entry address lifetime at actor lookup. */
    func_80227014_S1 *case6_entry; /* FAKEMATCH: short countdown rules pointer. */
    func_80227014_S1 *case4_loop; /* FAKEMATCH: short rules address in fourth state loop. */
    func_80227014_S1 *case6_active_rules; /* FAKEMATCH: short active-score address lifetime. */
    func_80227014_S1 *rules;
    u32 state;
    s32 var_a0;
    s32 var_a0_3;
    s32 var_a0_5;
    s32 var_a0_7;
    f32 scaled6x;
    f32 scaled6y;
    f32 scaled5x;
    f32 scaled5y;
    f32 scaled_x4;
    f32 scaled_y4;
    f32 scaled_x;
    f32 scaled_y;
    f32 banner_half;
    f32 banner_size;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
    f32 temp_f2_7;
    f32 temp_f2_8;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f3_4;
    f32 temp_f3_5;
    f32 temp_f3_6;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_10;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_v1;
    s8 temp_v0_7;
    s8 temp_v0_9;
    s8 temp_v1_2;
    s8 temp_v1_5;
    s32 var_s2;
    func_80227014_S11 *temp_a1;
    func_80227014_S16 *temp_a1_2;
    func_80227014_S4 *temp_s1_2;
    func_80227014_S9 *temp_s1_3;
    func_80227014_S14 *temp_s1_4;
    func_80227014_S20 *temp_s1_5;
    func_80227014_S18 *temp_v0_11;
    func_80227014_S2 *temp_v0_5;
    func_80227014_S8 *temp_v0_6;
    func_80227014_S13 *temp_v0_8;
    func_80227014_S3 *temp_v1;
    func_80227014_S19 *temp_v1_3;
    func_80227014_S22 *temp_v1_4;

    if ((func_80245774() == 0) && (func_80245788() == 0) && ((initial_rules = &D_801468A0)->unk54 != 0)) {
        if ((func_802281CC(arg0) != 0) && (initial_rules->unk1C == 0)) {
            func_8022A738(arg0);
            return;
        }
        temp_v0 = func_8022C610(arg0);
        if (temp_v0 > 0) {
            state = D_80146914;
            if (state >= 8) goto state_default;
            goto *jtbl_800C7C70[state];
            {
            state_0:
            state_default:
                func_8022C59C(arg0);
                func_8022C5CC(arg0);
                D_80146914 = 1;
                return;
            state_1:
                func_8022C5CC(arg0);
                if (temp_v0 > 0) {
                    temp_s1 = (select_rules = &D_801468A0)->unk64;
                    if (temp_s1 == 3) {
                        temp_v0_2 = func_80274544();
                        temp_v0_3 = temp_v0_2 / temp_v0;
                        if (temp_v0 == 0) {

                        }
                        if ((temp_v0 == -1) && (temp_v0_3 == 0x80000000)) {

                        }
                        var_v1 = temp_v0_2 % temp_v0;
                        select_rules->unk74 = temp_s1;
                        select_rules->unk60 = var_v1;
                        select_rules->unk5C = var_v1;
                        return;
                    } else {
                        temp_v0_4 = select_rules->unk60 + 1;
                        if (temp_v0 == 0) {

                        }
                        if ((temp_v0 == -1) && ((temp_v0_4 / temp_v0) == 0x80000000)) {

                        }
                        var_v1 = temp_v0_4 % temp_v0;
                        select_rules->unk74 = 4;
                        select_rules->unk60 = var_v1;
                        select_rules->unk5C = var_v1;
                        return;
                    }
                }
                goto state_end;
            state_2:
                if (temp_v0 > 0) {
                    (case2_rules = &D_801468A0)->unk74 = 5;
                    case2_rules->unk68 = 0xE1;
                    case2_rules->unk5C = (s32) case2_rules->unk60;
                }
                func_8022C5CC(arg0);
                return;
            state_5:                                 /* switch 1 */
                var_s2 = 0;
                if (temp_v0 >= 0) {
                    banner_half = D_800C7C90;
                    banner_size = D_800C7C94;
                    do {
                        temp_v0_5 = func_8022A5E4(arg0, var_s2);
                        if (temp_v0_5 != NULL) {
                            temp_v1 = temp_v0_5->unk5D8;
                            if (temp_v1->unk90 == 0) {
                                temp_s1_2 = temp_v0_5->unk5DC;
                                if ((temp_s1_2 != NULL) && (temp_s1_2->unk564 == 0)) {
                                    func_802AA224((s32) D_801462DE);
                                    temp_f2 = temp_s1_2->unk29C;
                                    temp_f3 = temp_s1_2->unk2A0;
                                    scaled5x = temp_f2 * banner_half;
                                    scaled5y = temp_f3 * banner_half;
                                    temp_f2_2 = temp_f2 / (f32) D_800E28D0;
                                    temp_f3_2 = temp_f3 / (f32) D_800E28D4;
                                    func_802ABC18(0x1FB, 0, (s16) (s32) ((temp_s1_2->unk2A4 + scaled5x) - (temp_f2_2 * banner_size)), (s16) (s32) ((temp_s1_2->unk2A8 + scaled5y) - (temp_f3_2 * banner_size)), temp_f2_2, temp_f3_2, 1);
                                }
                                temp_v0_5->unk5D8->unk8F = 1;
                                switch (D_80146910) {
                                case 0:
                                    func_8025DE74(0x18A1, temp_v0_5->unk8, temp_v0_5->unkC, temp_v0_5->unk10, &temp_v0_5->unk8, -1);
                                    break;
                                case 1:
                                    func_8025DE74(0x1969, temp_v0_5->unk8, temp_v0_5->unkC, temp_v0_5->unk10, &temp_v0_5->unk8, -1);
                                    break;
                                case 2:
                                    func_8025DE74(0x1905, temp_v0_5->unk8, temp_v0_5->unkC, temp_v0_5->unk10, &temp_v0_5->unk8, -1);
                                    break;
                                }
                                func_80218464(&temp_v0_5->unk938);
                                temp_v0_5->unk11B4 = 0;
                                func_80214178(&temp_v0_5->unk2E8, &temp_v0_5->unk458, 1);
                                func_8021B1E4(temp_v0_5, temp_v0_5->unk5EC, 0, 1);
                                func_802266E4(temp_v0_5);
                                temp_v0_5->unk5E4 = (s32) D_8014690C;
                            } else {
                                if ((D_80146938 != 0) && (temp_v1->unk94 != 0)) {
                                    temp_v1_2 = temp_v1->unk80;
                                    if (temp_v1_2 == 11) {
                                    var_a0 = 0x19000;
                                    } else if (temp_v1_2 == 12) {
                                    var_a0 = 0x19000;
                                    } else if (temp_v1_2 == 14) {
                                    var_a0 = 0x12C00;
                                    } else if (temp_v1_2 == 13) {
                                    var_a0 = 0x12C00;
                                    } else {
                                        var_a0 = temp_v0_5->unk18->unk18 << 8;
                                    }
                                } else {
                                    var_a0 = temp_v0_5->unk18->unk18 << 8;
                                }
                                if ((D_801462D5 == 1) && (temp_v0_5->unk1450 == 0)) {
                                    var_a0 += D_80102B10[temp_v0_5->unk5D4].value;
                                }
                                temp_v0_5->unk5E4 = var_a0;
                                temp_v0_5->unk174 = var_a0;
                            }
                        }
                        var_s2 += 1;
                    } while (temp_v0 >= (s32) var_s2);
                }
                func_8022C59C(arg0);
                D_80146914 = 6;
                return;
            state_3:
                case3_entry = &D_801468A0;
                if (temp_v0 == 0) {

                }
                if ((temp_v0 == -1) && (((s32) case3_entry->unk5C / temp_v0) == 0x80000000)) {

                }
                case3_entry->unk68 = 0;
                temp_v0_6 = func_8022C54C(arg0, (u32) ((s32) case3_entry->unk5C % temp_v0));
                temp_s1_3 = temp_v0_6->unk5DC;
                if ((temp_s1_3 != NULL) && (temp_s1_3->unk564 == 0)) {
                    func_802AA224((s32) D_801462DE);
                    temp_f3_3 = temp_s1_3->unk29C;
                    temp_f2_3 = temp_s1_3->unk2A0;
                    scaled_x = temp_f3_3 * D_800C7C98;
                    scaled_y = temp_f2_3 * D_800C7C98;
                    temp_f2_4 = temp_f2_3 / (f32) D_800E28D4;
                    func_802ABC18(0x1FB, 0, (s16) (s32) ((temp_s1_3->unk2A4 + scaled_x) - ((temp_f3_3 / (f32) D_800E28D0) * D_800C7C9C)), (s16) (s32) ((temp_s1_3->unk2A8 + scaled_y) - (temp_f2_4 * D_800C7C9C)), (temp_f3_3 / (f32) D_800E28D0), temp_f2_4, 1);
                }
                rules = &D_801468A0;
                temp_a0 = rules->unk5C + 1;
                rules->unk5C = temp_a0;
                if (temp_a0 >= (((5 - temp_v0) * 0x14) - rules->unk60)) {
                    func_8022C59C(arg0);
                    rules->unk74 = 7;
                    temp_v0_6->unk5D8->unk8F = 1U;
                    switch (D_80146910) {
                    case 0:
                        func_8025DE74(0x18A1, temp_v0_6->unk8, temp_v0_6->unkC, temp_v0_6->unk10, &temp_v0_6->unk8, -1);
                        break;
                    case 1:
                        func_8025DE74(0x1969, temp_v0_6->unk8, temp_v0_6->unkC, temp_v0_6->unk10, &temp_v0_6->unk8, -1);
                        break;
                    case 2:
                        func_8025DE74(0x1905, temp_v0_6->unk8, temp_v0_6->unkC, temp_v0_6->unk10, &temp_v0_6->unk8, -1);
                        break;
                    }
                    func_80218464(&temp_v0_6->unk938);
                    temp_v0_6->unk11B4 = 0;
                    func_80214178(&temp_v0_6->unk2E8, &temp_v0_6->unk458, 1);
                    func_8021B1E4(temp_v0_6, temp_v0_6->unk5EC, 0, 1);
                    func_802266E4(temp_v0_6);
                }
                var_s2 = 0;
                if (temp_v0 >= 0) {
                    temp_a1 = temp_v0_6->unk5D8;
                    case3_loop = &D_801468A0;
                    do {
                        if (temp_a1->unk8F != 0) {
                            temp_v0_6->unk5E4 = (s32) case3_loop->unk6C;
                        } else {
                            if ((D_80146938 != 0) && (temp_a1->unk94 != 0)) {
                                temp_v0_7 = temp_a1->unk80;
                                if (temp_v0_7 == 11) {
                                    var_a0 = 0x19000;
                                    } else if (temp_v0_7 == 12) {
                                    var_a0 = 0x19000;
                                    } else if (temp_v0_7 == 14) {
                                    var_a0 = 0x12C00;
                                    } else if (temp_v0_7 == 13) {
                                    var_a0 = 0x12C00;
                                    } else {
                                        var_a0 = temp_v0_6->unk18->unk18 << 8;
                                    }
                            } else {
                                var_a0 = temp_v0_6->unk18->unk18 << 8;
                            }
                            if ((D_801462D5 == 1) && (temp_v0_6->unk1450 == 0)) {
                                var_a0 += D_80102B10[temp_v0_6->unk5D4].value;
                            }
                            temp_v0_6->unk5E4 = var_a0;
                            temp_v0_6->unk174 = var_a0;
                        }
                        var_s2 += 1;
                    } while (temp_v0 >= var_s2);
                    return;
                }
                goto state_end;
            state_4:
                case4_entry = &D_801468A0;
                if (temp_v0 == 0) {

                }
                if ((temp_v0 == -1) && (((s32) case4_entry->unk5C / temp_v0) == 0x80000000)) {

                }
                case4_entry->unk68 = 0;
                temp_v0_8 = func_8022C54C(arg0, (u32) ((s32) case4_entry->unk5C % temp_v0));
                temp_s1_4 = temp_v0_8->unk5DC;
                if ((temp_s1_4 != NULL) && (temp_s1_4->unk564 == 0)) {
                    func_802AA224((s32) D_801462DE);
                    temp_f3_4 = temp_s1_4->unk29C;
                    temp_f2_5 = temp_s1_4->unk2A0;
                    scaled_x4 = temp_f3_4 * D_800C7CA0;
                    scaled_y4 = temp_f2_5 * D_800C7CA0;
                    temp_f2_6 = temp_f2_5 / (f32) D_800E28D4;
                    func_802ABC18(0x1FB, 0, (s16) (s32) ((temp_s1_4->unk2A4 + scaled_x4) - ((temp_f3_4 / (f32) D_800E28D0) * D_800C7CA4)), (s16) (s32) ((temp_s1_4->unk2A8 + scaled_y4) - (temp_f2_6 * D_800C7CA4)), (temp_f3_4 / (f32) D_800E28D0), temp_f2_6, 1);
                }
                rules = &D_801468A0;
                temp_a0_2 = rules->unk5C + 1;
                rules->unk5C = temp_a0_2;
                if (temp_a0_2 >= (((5 - temp_v0) * 0x14) - rules->unk60)) {
                    func_8022C59C(arg0);
                    rules->unk74 = 7;
                    temp_v0_8->unk5D8->unk8F = 1U;
                    switch (D_80146910) {
                    case 0:
                        func_8025DE74(0x18A1, temp_v0_8->unk8, temp_v0_8->unkC, temp_v0_8->unk10, &temp_v0_8->unk8, -1);
                        break;
                    case 1:
                        func_8025DE74(0x1969, temp_v0_8->unk8, temp_v0_8->unkC, temp_v0_8->unk10, &temp_v0_8->unk8, -1);
                        break;
                    case 2:
                        func_8025DE74(0x1905, temp_v0_8->unk8, temp_v0_8->unkC, temp_v0_8->unk10, &temp_v0_8->unk8, -1);
                        break;
                    }
                    func_80218464(&temp_v0_8->unk938);
                    temp_v0_8->unk11B4 = 0;
                    func_80214178(&temp_v0_8->unk2E8, &temp_v0_8->unk458, 1);
                    func_8021B1E4(temp_v0_8, temp_v0_8->unk5EC, 0, 1);
                    func_802266E4(temp_v0_8);
                }
                var_s2 = 0;
                if (temp_v0 >= 0) {
                    temp_a1_2 = temp_v0_8->unk5D8;
                    case4_loop = &D_801468A0;
                    do {
                        if (temp_a1_2->unk8F != 0) {
                            temp_v0_8->unk5E4 = (s32) case4_loop->unk6C;
                        } else {
                            if ((D_80146938 != 0) && (temp_a1_2->unk94 != 0)) {
                                temp_v0_9 = temp_a1_2->unk80;
                                if (temp_v0_9 == 11) {
                                    var_a0 = 0x19000;
                                    } else if (temp_v0_9 == 12) {
                                    var_a0 = 0x19000;
                                    } else if (temp_v0_9 == 14) {
                                    var_a0 = 0x12C00;
                                    } else if (temp_v0_9 == 13) {
                                    var_a0 = 0x12C00;
                                    } else {
                                        var_a0 = temp_v0_8->unk18->unk18 << 8;
                                    }
                            } else {
                                var_a0 = temp_v0_8->unk18->unk18 << 8;
                            }
                            if ((D_801462D5 == 1) && (temp_v0_8->unk1450 == 0)) {
                                var_a0 += D_80102B10[temp_v0_8->unk5D4].value;
                            }
                            temp_v0_8->unk5E4 = var_a0;
                            temp_v0_8->unk174 = var_a0;
                        }
                        var_s2 += 1;
                    } while (temp_v0 >= var_s2);
                    return;
                }
                goto state_end;
            state_6:
                case6_entry = &D_801468A0;
                temp_v0_10 = case6_entry->unk68 - 1;
                case6_entry->unk68 = temp_v0_10;
                if (temp_v0_10 <= 0) {
                    case6_entry->unk68 = 0;
                    if (D_800CE408 != 0) {
                        func_8025E2F4(D_800CE408);
                    }
                    var_s2 = 0;
                    banner_half = D_800C7CA8;
                    banner_size = D_800C7CAC;
                    do {
                        temp_v0_11 = func_8022A5E4(arg0, var_s2);
                        if (temp_v0_11 != NULL) {
                            temp_v1_3 = temp_v0_11->unk5D8;
                            if (temp_v1_3->unk8F == 0) {
                                temp_s1_5 = temp_v0_11->unk5DC;
                                if ((temp_s1_5 != NULL) && (temp_s1_5->unk564 == 0)) {
                                    func_802AA224((s32) D_801462DE);
                                    temp_f2_7 = temp_s1_5->unk29C;
                                    temp_f3_5 = temp_s1_5->unk2A0;
                                    scaled6x = temp_f2_7 * banner_half;
                                    scaled6y = temp_f3_5 * banner_half;
                                    temp_f2_8 = temp_f2_7 / (f32) D_800E28D0;
                                    temp_f3_6 = temp_f3_5 / (f32) D_800E28D4;
                                    func_802ABC18(0x1FB, 0, (s16) (s32) ((temp_s1_5->unk2A4 + scaled6x) - (temp_f2_8 * banner_size)), (s16) (s32) ((temp_s1_5->unk2A8 + scaled6y) - (temp_f3_6 * banner_size)), temp_f2_8, temp_f3_6, 1);
                                }
                                temp_v0_11->unk5D8->unk8F = 1U;
                                switch (D_80146910) {
                                case 0:
                                    func_8025DE74(0x18A1, temp_v0_11->unk8, temp_v0_11->unkC, temp_v0_11->unk10, &temp_v0_11->unk8, -1);
                                    break;
                                case 1:
                                    func_8025DE74(0x1969, temp_v0_11->unk8, temp_v0_11->unkC, temp_v0_11->unk10, &temp_v0_11->unk8, -1);
                                    break;
                                case 2:
                                    func_8025DE74(0x1905, temp_v0_11->unk8, temp_v0_11->unkC, temp_v0_11->unk10, &temp_v0_11->unk8, -1);
                                    break;
                                }
                                func_80218464(&temp_v0_11->unk938);
                                temp_v0_11->unk11B4 = 0;
                                func_80214178(&temp_v0_11->unk2E8, &temp_v0_11->unk458, 1);
                                func_8021B1E4(temp_v0_11, temp_v0_11->unk5EC, 0, 1);
                                func_802266E4(temp_v0_11);
                            } else {
                                temp_v1_3->unk90 = 0;
                                temp_v0_11->unk5D8->unk8F = 0U;
                                func_8021B1E4(temp_v0_11, temp_v0_11->unk5EC, 0, 1);
                            }
                            temp_v1_4 = temp_v0_11->unk5D8;
                            if (temp_v1_4->unk8F != 0) {
                                case6_active_rules = &D_801468A0;
                                temp_v0_11->unk5E4 = (s32) case6_active_rules->unk6C;
                                temp_v0_11->unk174 = (s32) case6_active_rules->unk6C;
                            } else {
                                if ((D_80146938 != 0) && (temp_v1_4->unk94 != 0)) {
                                    temp_v1_5 = temp_v1_4->unk80;
                                    if (temp_v1_5 == 11) {
                                    var_a0 = 0x19000;
                                    } else if (temp_v1_5 == 12) {
                                    var_a0 = 0x19000;
                                    } else if (temp_v1_5 == 14) {
                                    var_a0 = 0x12C00;
                                    } else if (temp_v1_5 == 13) {
                                    var_a0 = 0x12C00;
                                    } else {
                                        var_a0 = temp_v0_11->unk18->unk18 << 8;
                                    }
                                } else {
                                    var_a0 = temp_v0_11->unk18->unk18 << 8;
                                }
                                if ((D_801462D5 == 1) && (temp_v0_11->unk1450 == 0)) {
                                    var_a0 += D_80102B10[temp_v0_11->unk5D4].value;
                                }
                                temp_v0_11->unk5E4 = var_a0;
                                temp_v0_11->unk174 = var_a0;
                            }
                        }
                        var_s2 += 1;
                    } while ((s32) var_s2 < 8);
                    D_80146914 = 7;
                    return;
                }
                goto state_end;
            state_7:
                D_80146908 = 0;
                goto state_end;
            }
state_end:;
        }
    }
}

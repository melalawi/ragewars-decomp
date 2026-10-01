#include "../include/shared/playermenudata.h"
#include "../include/shared/menubonuscolumn.h"
#include "../include/shared/menuamountcolumn.h"
#include "../include/shared/func_802acbcc_s1.h"
#include "../include/shared/func_802acbcc_s2.h"
#include "../include/shared/func_802acbcc_s3.h"
#include "../include/shared/func_802acbcc_s4.h"
#include "../include/shared/func_802acbcc_s5.h"
#include "../include/shared/func_802acbcc_s6.h"
#include "../include/shared/func_802acbcc_s7.h"
#include "../include/shared/func_802acbcc_s8.h"
#include "../include/shared/func_802acbcc_s9.h"
#include "../include/shared/playerlistmenuglobals.h"
#include "../include/shared/playermenuglobals.h"
#include "../include/shared/fullplayermenuglobals.h"
#define NULL ((void *)0)
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */

#ifndef M2C_MACROS_H
#define M2C_MACROS_H

/* Unknown types */
typedef s32 M2C_UNK;
typedef s8  M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;

/* Unknown field access, like `*(type_ptr) &expr->unk_offset` */

/* Bitwise (reinterpret) cast */
#define M2C_BITWISE(type, expr) ((type)(expr))

/* Unaligned reads */
#define M2C_LWL(expr) (expr)
#define M2C_FIRST3BYTES(expr) (expr)
#define M2C_UNALIGNED32(expr) (expr)

/* Unhandled instructions */
#define M2C_ERROR(desc) (0)
#define M2C_TRAP_IF(cond) (0)
#define M2C_BREAK() (0)
#define M2C_SYNC() (0)
#define M2C_DCACHE_CLEAN(addr) (0)
#define M2C_DCACHE_INVALIDATE(addr) (0)
#define M2C_DCACHE_CLEAN_INVALIDATE(addr) (0)
#define M2C_DCACHE_BLOCK_SETZERO(addr) (0)
#define M2C_DCACHE_BLOCK_SETZERO_LOCKED(addr) (0)
#define M2C_ICACHE_INVALIDATE(addr) (0)
#define M2C_PREFETCH(addr) (0)
#define M2C_PREFETCH_STORE(addr) (0)

#define GLUE_F64(a, b) (0.0)
#define MULT_HI(a, b) (0)
#define MULTU_HI(a, b) (0)
#define DMULT_HI(a, b) (0)
#define DMULTU_HI(a, b) (0)
#define CLZ(x) (0)
#define REVERSE_BITS(x) (0)
#define ROTATE_RIGHT(x, shift) (0)
#define ARM_RRX(x, carry) (0)
#define BSWAP32(x) (0)
#define BSWAP16(x) (0)
#define BSWAP16X2(x) (0)

/* Carry/overflow bits from partially-implemented instructions */
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)

/* Memcpy patterns */
#define M2C_MEMCPY_ALIGNED memcpy
#define M2C_MEMCPY_UNALIGNED memcpy
#define M2C_STRUCT_COPY memcpy

/* Sh2 control register loads/stores */
#define M2C_LOAD_SR() (0)
#define M2C_LOAD_GBR() (0)
#define M2C_LOAD_VBR() (0)
#define M2C_STORE_SR(a)
#define M2C_STORE_GBR(a)
#define M2C_STORE_VBR(a)

#define M2C_CMP_STR(a, b) (0)
#define M2C_TAS_B(a) (0)

#endif
/* The values func_802ACBCC loads by address:
 * 0x800CB3F0 = 105.0 (float, D_800CB3F0 in this cartridge's tables)
 * 0x800CB3F4 = 195.0 (float, D_800CB3F4 in this cartridge's tables)
 * 0x800CB3F8 = 300.0 (float, D_800CB3F8 in this cartridge's tables)
 * 0x800CB3FC = 255.0 (float, D_800CB3FC in this cartridge's tables)
 * 0x800CB400 = 225.0 (float, D_800CB400 in this cartridge's tables)
 * 0x800CB404 = 150.0 (float, D_800CB404 in this cartridge's tables)
 * 0x800CB408 = 255.0 (float, D_800CB408 in this cartridge's tables)
 * 0x800CB40C = 150.0 (float, D_800CB40C in this cartridge's tables)
 * 0x800CB410 = 255.0 (float, D_800CB410 in this cartridge's tables)
 * 0x800CB414 = 180.0 (float, D_800CB414 in this cartridge's tables)
 * 0x800CB418 = 225.0 (float, D_800CB418 in this cartridge's tables)
 * 0x800CB41C = 225.0 (float, D_800CB41C in this cartridge's tables)
 * 0x800CB420 = 450.0 (float, D_800CB420 in this cartridge's tables)
 * 0x800CB424 = 270.0 (float, D_800CB424 in this cartridge's tables)
 * 0x800CB428 = 255.0 (float, D_800CB428 in this cartridge's tables)
 * 0x800CB42C = 180.0 (float, D_800CB42C in this cartridge's tables)
 * 0x800CB430 = 255.0 (float, D_800CB430 in this cartridge's tables)
 * 0x800CB434 = 300.0 (float, D_800CB434 in this cartridge's tables)
 * 0x800CB438 = 255.0 (float, D_800CB438 in this cartridge's tables)
 * 0x800CB43C = 300.0 (float, D_800CB43C in this cartridge's tables)
 * 0x800CB440 = 255.0 (float, D_800CB440 in this cartridge's tables)
 */
void func_8022F3E8(void *, int);
void * func_80237E70(void *, void *, u8 *);
void func_8023919C(void *, u8, s8, s8, s32, s32, s32, s32);
void func_8025E13C(s32);
int func_8025E2E4(void);
void func_8025E2F4(s32);
s32 func_802A11E8(void);
s32 func_804030E0(s32);
M2C_UNK func_8025DE74(); /* extern */
typedef Shared_PlayerMenuData PlayerMenuData;
extern PlayerMenuData D_80102B00[];
typedef Shared_MenuBonusColumn MenuBonusColumn;
extern MenuBonusColumn D_80102B14[];
#if defined(VERSION_US) && !defined(VERSION_US_REV1)
#define D_80102B15 D_800FCB15
#elif defined(VERSION_DE)
#define D_80102B15 D_800FEB15
#endif
extern MenuBonusColumn D_80102B15[];
#if defined(VERSION_US) && !defined(VERSION_US_REV1)
#define D_80102B16 D_800FCB16
#define D_80102B17 D_800FCB17
#elif defined(VERSION_DE)
#define D_80102B16 D_800FEB16
#define D_80102B17 D_800FEB17
#endif
extern MenuBonusColumn D_80102B16[];
extern MenuBonusColumn D_80102B17[];
typedef Shared_MenuAmountColumn MenuAmountColumn;
extern MenuAmountColumn D_80102B10[];

extern M2C_UNK D_80145088;

#if defined(VERSION_US) && !defined(VERSION_US_REV1)
#define D_800CE408 us_D_800C90D8
#define D_800D70D8 D_800D1D58
#define D_800D71E4 D_800D1E64
#define D_800D7154 D_800D1DD4
#define D_800D7158 D_800D1DD8
#define D_800D715C D_800D1DDC
#define D_800D7160 D_800D1DE0
#define D_800D7164 D_800D1DE4
#define D_800D7168 D_800D1DE8
#define D_800D716C D_800D1DEC
#define D_800D7170 D_800D1DF0
#define D_800D7174 D_800D1DF4
#define D_800D717C D_800D1DFC
#define D_800D7180 D_800D1E00
#define D_800D7184 D_800D1E04
#define D_800D7188 D_800D1E08
#define D_800D718C D_800D1E0C
#elif defined(VERSION_DE)
#define D_800CE408 D_800C91B8
#define D_800D70D8 D_800D30AC
#define D_800D71E4 D_800D31B8
#define D_800D7154 D_800D3128
#define D_800D7158 D_800D312C
#define D_800D715C D_800D3130
#define D_800D7160 D_800D3134
#define D_800D7164 D_800D3138
#define D_800D7168 D_800D313C
#define D_800D716C D_800D3140
#define D_800D7170 D_800D3144
#define D_800D7174 D_800D3148
#define D_800D717C D_800D3150
#define D_800D7180 D_800D3154
#define D_800D7184 D_800D3158
#define D_800D7188 D_800D315C
#define D_800D718C D_800D3160
#endif
extern s32 D_800CE408;
#if defined(VERSION_US) && !defined(VERSION_US_REV1)
#define D_800CB3F0 D_800C6190
#define D_800CB3F4 D_800C6194
#define D_800CB3F8 D_800C6198
#define D_800CB3FC D_800C619C
#define D_800CB400 D_800C61A0
#define D_800CB404 D_800C61A4
#define D_800CB408 D_800C61A8
#define D_800CB40C D_800C61AC
#define D_800CB410 D_800C61B0
#define D_800CB414 D_800C61B4
#define D_800CB418 D_800C61B8
#define D_800CB41C D_800C61BC
#define D_800CB420 D_800C61C0
#define D_800CB424 D_800C61C4
#define D_800CB428 D_800C61C8
#define D_800CB42C D_800C61CC
#define D_800CB430 D_800C61D0
#define D_800CB434 D_800C61D4
#define D_800CB438 D_800C61D8
#define D_800CB43C D_800C61DC
#define D_800CB440 D_800C61E0
#elif defined(VERSION_DE)
#define D_800CB3F0 D_800C6260
#define D_800CB3F4 D_800C6264
#define D_800CB3F8 D_800C6268
#define D_800CB3FC D_800C626C
#define D_800CB400 D_800C6270
#define D_800CB404 D_800C6274
#define D_800CB408 D_800C6278
#define D_800CB40C D_800C627C
#define D_800CB410 D_800C6280
#define D_800CB414 D_800C6284
#define D_800CB418 D_800C6288
#define D_800CB41C D_800C628C
#define D_800CB420 D_800C6290
#define D_800CB424 D_800C6294
#define D_800CB428 D_800C6298
#define D_800CB42C D_800C629C
#define D_800CB430 D_800C62A0
#define D_800CB434 D_800C62A4
#define D_800CB438 D_800C62A8
#define D_800CB43C D_800C62AC
#define D_800CB440 D_800C62B0
#endif
extern f32 D_800CB3F0;
extern const f32 D_800CB3F4;
extern f32 D_800CB3F8;
extern f32 D_800CB3FC;
extern f32 D_800CB400;
extern f32 D_800CB404;
extern f32 D_800CB408;
extern f32 D_800CB40C;
extern f32 D_800CB410;
extern f32 D_800CB414;
extern f32 D_800CB418;
extern f32 D_800CB41C;
extern f32 D_800CB420;
extern f32 D_800CB424;
extern f32 D_800CB428;
extern f32 D_800CB42C;
extern f32 D_800CB430;
extern f32 D_800CB434;
extern f32 D_800CB438;
extern f32 D_800CB43C;
extern f32 D_800CB440;
extern u8 *D_800D70D8;           /* const */
extern u8 *D_800D7154;           /* const */
extern u8 *D_800D7158;           /* const */
extern u8 *D_800D715C;           /* const */
extern u8 *D_800D7160;           /* const */
extern u8 *D_800D7164;           /* const */
extern u8 *D_800D7168;           /* const */
extern u8 *D_800D716C;           /* const */
extern u8 *D_800D7170;           /* const */
extern u8 *D_800D7174[2]; /* const */
extern u8 *D_800D717C;           /* const */
extern u8 *D_800D7180;           /* const */
extern u8 *D_800D7184;           /* const */
extern u8 *D_800D7188;           /* const */
extern u8 *D_800D718C;           /* const */
extern u8 *D_800D71E4;           
typedef Shared_func_802ACBCC_S1 func_802ACBCC_S1;
typedef Shared_func_802ACBCC_S2 func_802ACBCC_S2;
typedef Shared_func_802ACBCC_S3 func_802ACBCC_S3;
typedef Shared_func_802ACBCC_S4 func_802ACBCC_S4;
typedef Shared_func_802ACBCC_S5 func_802ACBCC_S5;
typedef Shared_func_802ACBCC_S6 func_802ACBCC_S6;
typedef Shared_func_802ACBCC_S7 func_802ACBCC_S7;
typedef Shared_func_802ACBCC_S8 func_802ACBCC_S8;
typedef Shared_func_802ACBCC_S9 func_802ACBCC_S9;









typedef Shared_PlayerListMenuGlobals PlayerListMenuGlobals;
typedef Shared_PlayerMenuGlobals PlayerMenuGlobals;
typedef Shared_FullPlayerMenuGlobals FullPlayerMenuGlobals;
extern FullPlayerMenuGlobals D_80145044;

/* Handles player menu commands and updates selection and game mode state. */

s32 func_802ACBCC(func_802ACBCC_S1 *arg0, func_802ACBCC_S2 *arg1) {
    f32 temp_f20;
    f32 loopBonus; /* FAKEMATCH: retain the bonus constant across player callbacks. */
    f32 old_unk11E4;
    f32 temp_alpha; /* FAKEMATCH: preserve the case-specific 255.0f load. */
    f32 temp_duration; /* FAKEMATCH: order the divisor load before the shared tail. */
    s32 temp_s1;
    s32 temp_s3;
    s16 temp_v1;
    s32 temp_fp; /* FAKEMATCH: preserve unsigned flag bits across the switch. */
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_s1;
    s32 var_s3;
    s32 var_s4;
    u8 **temp_s0_2;
    u8 *var_a2;
    u8 temp_a0;
    void *temp_a1;
    void *temp_a1_10;
    void *temp_a1_11; /* FAKEMATCH: carry the checked attachment into the shared callback. */
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a1_4;
    void *temp_a1_5;
    void *temp_a1_6;
    void *temp_a1_7;
    void *temp_a1_8;
    void *temp_a1_9;
    func_802ACBCC_S8 *temp_s0;
    func_802ACBCC_S8 **loopEntries;
    FullPlayerMenuGlobals *menuGlobals;
    func_802ACBCC_S5 *loopMenuData;
    func_802ACBCC_S5 *commandMenuData;
    func_802ACBCC_S4 *temp_v1_2;

    var_s4 = 0;
    if (arg0->unk5E4 > 0) {
        temp_v1 = arg1->unk4;
        {
            if (temp_v1 < 0x139F) {
                if (temp_v1 < 0x1399) {
                    if (temp_v1 == 0x1389) goto case_1389;
                    if (temp_v1 < 0x138A) {
                        if (temp_v1 == 0xBD7) goto case_BD7;
                        if (temp_v1 < 0xBD8) {
                            if (temp_v1 == 0xBD6) goto case_BD6;
                            goto command_done;
                        }
                        if (temp_v1 == 0xBD8) goto case_BD8;
                        if (temp_v1 == 0x1388) goto mark_handled;
                        goto command_done;
                    }
                    if (temp_v1 < 0x1398) {
                        var_s4 = 1;
                        if (temp_v1 >= 0x138B) goto mark_handled;
                        goto block_126;
                    }
                    goto case_1398;
                }
                var_s4 = 1;
                goto command_done;
            }
            if (temp_v1 < 0x13AB) {
                if (temp_v1 < 0x13A9) {
                    if (temp_v1 == 0x13A0) goto case_13A0;
                    if (temp_v1 < 0x13A0) goto case_139F;
                    if (temp_v1 < 0x13A8) var_s4 = 1;
                    goto command_done;
                }
                goto mark_handled;
            }
            if (temp_v1 == 0x13BC) { var_s4 = 1; goto command_done; }
            if (temp_v1 < 0x13BD) {
                if (temp_v1 == 0x13AD) goto mark_handled;
                goto command_done;
            }
            if (temp_v1 == 0x13BD) goto case_13BD;
            if (temp_v1 == 0x13C1) goto case_13C1;
            goto command_done;
case_BD6:
                temp_v1_2 = arg0->unk5D8;
                temp_a0 = temp_v1_2->unk8F;
                if ((temp_a0 == 1) && ((commandMenuData = &D_80145044.tail.list.menu)->unk54 != 0)) {
                    temp_v1_2->unk8F = 0U;
                    arg0->unk5D8->unk90 = temp_a0;
                    commandMenuData->unk74 = 2;
                    D_800CE408 = func_8025E2E4();
                    if (func_8025E2E4() != 0) {
                        func_8025E2F4(0x3D);
                    }
                    var_s4 = 1;
                }
                goto command_done;
case_BD7:
            {
                func_802ACBCC_S5 *listMenuData = &D_80145044.tail.list.menu;
                listMenuData->unk84 = 0;
                listMenuData->unk80 = 1;
                arg0->unk5D8->unk8F = 1U;
                temp_s0 = D_80145044.tail.list.players;
                var_s4 = 1;
                if (temp_s0 != NULL) {
loop_37:
                    if (temp_s0 != arg0) {
                        temp_a1 = temp_s0->unk5DC;
                        if (temp_a1 != NULL) {
                            func_80237E70(&D_80145088, temp_a1, D_800D70D8);
                        }
                    }
                    temp_s0 = temp_s0->unk16E0;
                    if (temp_s0 != NULL) {
                        goto loop_37;
                    }
                }
                goto command_done;
            }
case_BD8:
                old_unk11E4 = arg0->unk11E4;
                arg0->unk1240 = 0.0f;
                temp_f20 = arg0->unk1240;
                var_s4 = 1;
                arg0->unk123C = 0;
                arg0->unk123D = 0;
                arg0->unk123E = 0;
                if (old_unk11E4 != temp_f20) {
                    temp_a1_2 = arg0->unk5DC;
                    arg0->unk11E4 = temp_f20;
                    arg0->unk13E0 = 0;
                    if (temp_a1_2 != NULL) {
                        func_80237E70(&D_80145088, temp_a1_2, D_800D71E4);
                    }
                } else {
                    temp_fp = arg0->unk122C & 0x6000;
                    temp_v0 = 1 << (func_802A11E8() % 13);
                    arg0->unk122C = temp_v0;
                    if (temp_v0 & 0x20) {
                        arg0->unk1238 = -1;
                        arg0->unk1230 = temp_f20;
                    } else {
                        arg0->unk1230 = D_800CB3F0;
                    }
                    temp_v1_3 = arg0->unk122C;
                    switch (temp_v1_3) {            /* switch 3; irregular */
                    case 0x1:                       /* switch 3 */
                        func_8025E13C(0x15E);
                        var_s1 = 0;
                        if (D_80145044.tail.count > 0) {
                            menuGlobals = &D_80145044;
                            loopEntries = &menuGlobals->entries;
                            loopMenuData = &menuGlobals->tail.list.menu;
                            loopBonus = D_800CB3F4;
                            do {
                                /* FAKEMATCH: equivalent address paths retain counter uses and
                                 * widen the derived cursor's live length. The counter ranks
                                 * above the actor and the cursor below it; this predicate
                                 * and both redundant paths disappear from the emitted code. */
                                if ((u32)loopMenuData->unk24 ^ (u32)var_s1
                                    ^ ((u32)var_s1 >> 1) ^ ((u32)var_s1 >> 3)
                                    ^ ((u32)var_s1 >> 5) ^ ((u32)var_s1 >> 7)
                                    ^ ((u32)var_s1 >> 9) ^ ((u32)var_s1 >> 11)
                                    ^ ((u32)var_s1 >> 13) ^ ((u32)var_s1 >> 15)
                                    ^ ((u32)var_s1 >> 17)) {
                                    temp_s0 = &(*loopEntries)[var_s1];
                                } else {
                                    temp_s0 = &(*loopEntries)[var_s1];
                                }
                                if ((temp_s0 != NULL) && (temp_s0 != arg0) && (((loopMenuData->unk24) == 0) || (temp_s0->unk5D8->unk92 != arg0->unk5D8->unk92))) {
                                    temp_s0->unk122C = (s32) (temp_s0->unk122C | 0x2000);
                                    temp_s0->unk11DC = (f32) (temp_s0->unk11DC + loopBonus);
                                }
                                temp_a1_3 = temp_s0->unk5DC;
                                if (temp_a1_3 != NULL) {
                                    func_80237E70(&D_80145088, temp_a1_3, D_800D7154);
                                }
                            } while (D_80145044.tail.count > ++var_s1);
                        }
                        break;
                    case 0x2:                       /* switch 3 */
                        arg0->unk1230 = D_800CB3F8;
                        func_8025E13C(0x164);
                        temp_a1_4 = arg0->unk5DC;
                        if (temp_a1_4 != NULL) {
                            func_80237E70(&D_80145088, temp_a1_4, D_800D7158);
                        }
                        temp_alpha = D_800CB3FC;
                        temp_duration = arg0->unk1230;
                        arg0->unk123C = 0xFF;
                        goto block_115;
                    case 0x4:                       /* switch 3 */
                        arg0->unk1230 = D_800CB400;
                        func_8025E13C(0x15F);
                        temp_a1_11 = arg0->unk5DC;
                        if (temp_a1_11 != NULL) {
                            var_a2 = D_800D715C;
block_119:
                            func_80237E70(&D_80145088, temp_a1_11, var_a2);
                        }
                        break;
                    case 0x8:                       /* switch 3 */
                        arg0->unk1230 = D_800CB404;
                        func_8025E13C(0x165);
                        temp_a1_5 = arg0->unk5DC;
                        if (temp_a1_5 != NULL) {
                            func_80237E70(&D_80145088, temp_a1_5, D_800D7160);
                        }
                        temp_alpha = D_800CB408;
                        temp_duration = arg0->unk1230;
                        arg0->unk123C = 0xFF;
block_114:
                        arg0->unk123D = 0xFF;
                        goto block_115;
                    case 0x10:                      /* switch 3 */
                        arg0->unk1230 = D_800CB40C;
                        func_8025E13C(0x160);
                        temp_a1_6 = arg0->unk5DC;
                        if (temp_a1_6 != NULL) {
                            func_80237E70(&D_80145088, temp_a1_6, D_800D7164);
                        }
                        temp_alpha = D_800CB410;
                        temp_duration = arg0->unk1230;
                        arg0->unk123C = 0xFF;
                        arg0->unk123E = 0xFF;
                        goto block_115;
                    case 0x20:                      /* switch 3 */
                        arg0->unk1230 = D_800CB414;
                        func_8025E13C(0x166);
                        temp_a1_11 = arg0->unk5DC;
                        if (temp_a1_11 != NULL) {
                            var_a2 = D_800D7168;
                            goto block_119;
                        }
                        break;
                    case 0x40:                      /* switch 3 */
                        arg0->unk1230 = D_800CB418;
                        func_8025E13C(0x161);
                        temp_a1_11 = arg0->unk5DC;
                        if (temp_a1_11 != NULL) {
                            var_a2 = D_800D716C;
                            goto block_119;
                        }
                        break;
                    case 0x80:                      /* switch 3 */
                        arg0->unk1230 = D_800CB41C;
                        func_8025E13C(0x169);
                        temp_a1_11 = arg0->unk5DC;
                        if (temp_a1_11 != NULL) {
                            var_a2 = D_800D7170;
                            goto block_119;
                        }
                        break;
                    case 0x100:                     /* switch 3 */
                        arg0->unk1230 = D_800CB420;
                        func_8025E13C(0x162);
                        temp_a1_11 = arg0->unk5DC;
                        if (temp_a1_11 != NULL) {
                            var_a2 = *D_800D7174;
                            goto block_119;
                        }
                        break;
                    case 0x200:                     /* switch 3 */
                        arg0->unk1230 = D_800CB424;
                        func_8025E13C(0x16A);
                        temp_a1_7 = arg0->unk5DC;
                        if (temp_a1_7 != NULL) {
                            func_80237E70(&D_80145088, temp_a1_7, D_800D717C);
                        }
                        temp_alpha = D_800CB428;
                        temp_duration = arg0->unk1230;
                        arg0->unk1240 = temp_alpha;
                        goto block_116;
                    case 0x400:                     /* switch 3 */
                        arg0->unk1230 = D_800CB42C;
                        func_8025E13C(0x163);
                        temp_a1_8 = arg0->unk5DC;
                        if (temp_a1_8 != NULL) {
                            func_80237E70(&D_80145088, temp_a1_8, D_800D7180);
                        }
                        temp_alpha = D_800CB430;
                        temp_duration = arg0->unk1230;
                        arg0->unk123C = 0xFF;
                        arg0->unk123D = 0xFF;
                        arg0->unk123E = 0xFF;
                        goto block_115;
                    case 0x800:                     /* switch 3 */
                        arg0->unk1230 = D_800CB434;
                        func_8025E13C(0x168);
                        temp_a1_9 = arg0->unk5DC;
                        if (temp_a1_9 != NULL) {
                            func_80237E70(&D_80145088, temp_a1_9, D_800D7184);
                        }
                        temp_alpha = D_800CB438;
                        temp_duration = arg0->unk1230;
                        arg0->unk123E = 0xFF;
                        goto block_115;
                    case 0x1000:                    /* switch 3 */
                        arg0->unk1230 = D_800CB43C;
                        func_8025E13C(0x15F);
                        temp_a1_10 = arg0->unk5DC;
                        if (temp_a1_10 != NULL) {
                            func_80237E70(&D_80145088, temp_a1_10, D_800D7188);
                        }
                        temp_alpha = D_800CB440;
                        temp_duration = arg0->unk1230;
                        arg0->unk123D = 0xFF;
                        goto block_115;
                    default:                        /* switch 3 */
                        goto block_default;
                    }
                    goto block_after_alpha;
block_115:
                    arg0->unk1240 = temp_alpha;
block_116:
                    arg0->unk1244 = (f32) (temp_alpha / temp_duration);
                    goto block_after_alpha;
block_default:
                    temp_a1_11 = arg0->unk5DC;
                    if (temp_a1_11 != NULL) {
                        func_80237E70(&D_80145088, temp_a1_11, D_800D718C);
                    }
block_after_alpha:
                    arg0->unk122C = (s32) (arg0->unk122C | temp_fp);
                }
                goto command_done;
case_1398:
                temp_v0_2 = arg0->unk5D4 * 0x190;
                var_s4 = 1;
                D_80102B14[arg0->unk5D4].value += 0xA;
                arg0->unk5F8 = (u16) (arg0->unk5F8 + 0xA);
                func_804030E0(0x1F5);
                goto command_done;
case_13A0:
            temp_v0_4 = arg0->unk5D4 * 0x190;
            var_s4 = 1;
            D_80102B15[arg0->unk5D4].value += 0x32;
            arg0->unk5F4 = (u16) (arg0->unk5F4 + 0x32);
            func_804030E0(0x1F7);
            goto command_done;
case_139F:
            var_s4 = 1;
            temp_v0_3 = arg0->unk5D4 * 0x190;
            D_80102B16[arg0->unk5D4].value += 0x32;
            arg0->unk5F6 = (u16) (arg0->unk5F6 + 0x32);
            func_804030E0(0x1F6);
            goto command_done;
case_13C1:
            var_s4 = 1;
            temp_v0_5 = arg0->unk5D4 * 0x190;
            D_80102B10[arg0->unk5D4].value += 0x500;
            arg0->unk5E4 = (s32) (arg0->unk5E4 + 0x500);
            func_804030E0(0x1F8);
            goto command_done;
case_1389:
                func_8022F3E8(&D_80102B00[arg0->unk5D4], (s32) arg0->unk18->unkC);
block_126:
                var_s4 = 1;
                func_8022F3E8(&D_80102B00[arg0->unk5D4], (s32) arg0->unk18->unkC);
                func_804030E0(0x1F4);
                goto command_done;
case_13BD:
            temp_v1_4 = arg0->unk5D4 * 0x190;
            var_s4 = 1;
            D_80102B17[arg0->unk5D4].value += 1;
            goto command_done;
mark_handled:
            var_s4 = 1;
            goto command_done;
        }
command_done:
        ;
    }
    if (var_s4 != 0) {
        temp_s0_2 = arg1->unk0;
        temp_s1 = arg1->unk6;
        temp_s3 = arg1->unk8;
        if (arg0->unk5DC != NULL) {
            func_8023919C(arg0->unk5DC, 0x80, 0x32, 0x32, 0x4B, 0, 0, 2);
            if (temp_s0_2 != NULL) {
                func_80237E70(&D_80145088, arg0->unk5DC, *temp_s0_2);
            }
        }
        if (temp_s1 != 0) {
            func_8025DE74(temp_s1, arg0->unk8, arg0->unkC, arg0->unk10, 0, -1);
        }
        if (temp_s3 != 0) {
            func_8025E13C((s32) temp_s3);
        }
    }
    return var_s4;
}

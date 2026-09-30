#include "../splat/types/shared/sceneactorstride.h"
#include "../splat/types/shared/sceneglobal.h"
#include "../splat/types/shared/scenefontresources.h"
#include "../splat/types/shared/sceneactorresources.h"
#include "../splat/types/shared/sceneresources.h"
#include "../splat/types/shared/sceneprimaryactors.h"
#include "../splat/types/shared/sceneactorprefix.h"
#include "../splat/types/shared/sceneactorkind.h"
#include "../splat/types/shared/sceneactortables.h"
#include "../splat/types/shared/func_80286a78_s1.h"
#include "../splat/types/shared/func_80286a78_s2.h"
#include "../splat/types/shared/func_80286a78_s3.h"
#include "../splat/types/shared/func_80286a78_s4.h"
#include "../splat/types/shared/func_80286a78_s5.h"
#include "../splat/types/shared/func_80286a78_s6.h"
#include "../splat/types/shared/func_80286a78_s7.h"
#include "../splat/types/shared/func_80286a78_s8.h"
#include "../splat/types/shared/func_80286a78_s9.h"
#include "../splat/types/shared/func_80286a78_s10.h"
#include "../splat/types/shared/func_80286a78_s11.h"
#include "../splat/types/shared/func_80286a78_s12.h"
#include "../splat/types/shared/func_80286a78_s13.h"
#include "../splat/types/shared/func_80286a78_s14.h"
#include "../splat/types/shared/func_80286a78_s15.h"
#include "../splat/types/shared/func_80286a78_s16.h"
#include "../splat/types/shared/func_80286a78_s17.h"
#include "../splat/types/shared/func_80286a78_s18.h"
#include "../splat/types/shared/func_80286a78_s19.h"
#include "../splat/types/shared/func_80286a78_s20.h"
#include "../splat/types/shared/func_80286a78_s21.h"
#define NULL ((void *)0)
typedef Shared_SceneActorStride SceneActorStride;
typedef Shared_SceneGlobal SceneGlobal;
typedef Shared_SceneFontResources SceneFontResources;
typedef Shared_SceneActorResources SceneActorResources;
typedef Shared_SceneResources SceneResources;
typedef Shared_ScenePrimaryActors ScenePrimaryActors;
typedef Shared_SceneActorPrefix SceneActorPrefix;
typedef Shared_SceneActorKind SceneActorKind;
typedef Shared_SceneActorTables SceneActorTables;
#define NEXT_SCENE_ACTOR(ptr) ((void *)(((SceneActorStride *)(ptr)) + 1))
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
#if defined(VERSION_US)
#define func_8044E7C0 func_8044DCE0
#define func_8044ED24 func_8044E244
#elif defined(VERSION_EU)
#define func_8044BA40 func_8044C0C0
#define func_8044E7C0 func_8044DCE0
#define func_8044BFD0 func_8044C650
#define func_8044ED24 func_8044E244
#elif defined(VERSION_EU_MUL)
#define func_8044BA40 func_8044C1F0
#define func_8044E7C0 func_8044DCE0
#define func_8044ED24 func_8044F4D4
#elif defined(VERSION_DE)
#define func_8044BA40 func_8044ADF0
#define func_8044E7C0 func_8044DCE0
#define func_8044ED24 func_8044E244
#endif
M2C_UNK func_80208000();                         /* extern */
M2C_UNK func_8020AA40();                      /* extern */
M2C_UNK func_8020ABF0();                      /* extern */
M2C_UNK func_8020CA10();                    /* extern */
s32 func_8020CB3C();                  /* extern */
void *func_8022A5E4();                /* extern */
M2C_UNK func_80236864();                      /* extern */
M2C_UNK func_8023EDF0();                            /* extern */
s32 func_80245774();                                /* extern */
M2C_UNK func_80246E34();                      /* extern */
M2C_UNK func_8024B2C0();                      /* extern */
M2C_UNK func_8024BE2C();                      /* extern */
s32 func_80252FFC();                             /* extern */
s32 *func_802533DC(); /* extern */
M2C_UNK func_802537D8();            /* extern */
M2C_UNK func_802538A8();                     /* extern */
s32 func_80254224(); /* extern */
void **func_802543A8(); /* extern */
M2C_UNK func_8025470C();                     /* extern */
M2C_UNK func_802551C8();                   /* extern */
M2C_UNK func_80255C40();    /* extern */
M2C_UNK func_80255CB4();                 /* extern */
M2C_UNK func_8025C8F8(); /* extern */
M2C_UNK func_80286920();                      /* extern */
M2C_UNK func_8028A924();                            /* extern */
s32 func_8028B238();                  /* extern */
M2C_UNK func_8028D35C(); /* extern */
M2C_UNK func_8028D628();                      /* extern */
M2C_UNK func_8028D864();                      /* extern */
M2C_UNK func_8028D8E8();                            /* extern */
M2C_UNK func_8028DA50();                      /* extern */
s32 func_8028FE08();                 /* extern */
s32 func_802A11E8();                             /* extern */
M2C_UNK func_802AB720();   /* extern */
M2C_UNK func_802AB750();   /* extern */
M2C_UNK func_804037E8();                         /* extern */
M2C_UNK func_8044AA68();                   /* extern */
M2C_UNK func_8044B31C();                      /* extern */
M2C_UNK func_8044BA40();                      /* extern */
M2C_UNK func_8044BD30();                      /* extern */
M2C_UNK func_8044BFD0();            /* extern */
M2C_UNK func_8044C050();                 /* extern */
M2C_UNK func_8044CA54();                      /* extern */
M2C_UNK func_8044CBE0();                      /* extern */
M2C_UNK func_8044E214();                      /* extern */
M2C_UNK func_8044E2B8();                      /* extern */
M2C_UNK func_8044E3E4();                            /* extern */
M2C_UNK func_8044E7C0();                      /* extern */
M2C_UNK func_8044EBB0();                   /* extern */
M2C_UNK func_8044ED24();                      /* extern */
#if defined(VERSION_US)
#define D_44CD58 D_44C278
#define D_44D024 D_44C544
#define D_44D408 D_44C928
#define D_44E6A4 D_44DBC4
#define D_800CA1F4 D_800C5034
#define D_800CA20C D_800C504C
#define D_800CA218 D_800C5058
#define D_800CA224 D_800C5064
#define D_800CA238 D_800C5078
#define D_800CA244 D_800C5084
#define D_800CA250 D_800C5090
#define D_800CA258 D_800C5098
#define D_800CA264 D_800C50A4
#define D_800CA270 D_800C50B0
#define D_800CA280 D_800C50C0
#define D_800CA290 D_800C50D0
#define D_800CA2A4 D_800C50E4
#define D_800CA2B0 D_800C50F0
#define D_800CA2C4 D_800C5104
#define D_800D7190 D_800D1E10
#define D_8011F080 D_80118FC0
#elif defined(VERSION_EU)
#define D_44CD58 D_44D3D8
#define D_44D024 D_44D6A4
#define D_44D408 D_44DA88
#define D_44E6A4 D_44ED24
#define D_800CA1F4 D_800C53B4
#define D_800CA20C D_800C53CC
#define D_800CA218 D_800C53D8
#define D_800CA224 D_800C53E4
#define D_800CA238 D_800C53F8
#define D_800CA244 D_800C5404
#define D_800CA250 D_800C5410
#define D_800CA258 D_800C5418
#define D_800CA264 D_800C5424
#define D_800CA270 D_800C5430
#define D_800CA280 D_800C5440
#define D_800CA290 D_800C5450
#define D_800CA2A4 D_800C5464
#define D_800CA2B0 D_800C5470
#define D_800CA2C4 D_800C5484
#define D_800D7190 D_800E0FE4
#define D_8011F080 D_8012AFC0
#elif defined(VERSION_EU_MUL)
#define D_44CD58 D_44D508
#define D_44D024 D_44D7D4
#define D_44D408 D_44DBB8
#define D_44E6A4 D_44EE54
#define D_800CA1F4 D_800C53F4
#define D_800CA20C D_800C540C
#define D_800CA218 D_800C5418
#define D_800CA224 D_800C5424
#define D_800CA238 D_800C5438
#define D_800CA244 D_800C5444
#define D_800CA250 D_800C5450
#define D_800CA258 D_800C5458
#define D_800CA264 D_800C5464
#define D_800CA270 D_800C5470
#define D_800CA280 D_800C5480
#define D_800CA290 D_800C5490
#define D_800CA2A4 D_800C54A4
#define D_800CA2B0 D_800C54B0
#define D_800CA2C4 D_800C54C4
#define D_800D7190 D_800DCE60
#define D_8011F080 D_80124FC0
#elif defined(VERSION_DE)
#define D_44CD58 D_44C108
#define D_44D024 D_44C3D4
#define D_44D408 D_44C7B8
#define D_44E6A4 D_44DA54
#define D_800CA1F4 D_800C5104
#define D_800CA20C D_800C511C
#define D_800CA218 D_800C5128
#define D_800CA224 D_800C5134
#define D_800CA238 D_800C5148
#define D_800CA244 D_800C5154
#define D_800CA250 D_800C5160
#define D_800CA258 D_800C5168
#define D_800CA264 D_800C5174
#define D_800CA270 D_800C5180
#define D_800CA280 D_800C5190
#define D_800CA290 D_800C51A0
#define D_800CA2A4 D_800C51B4
#define D_800CA2B0 D_800C51C0
#define D_800CA2C4 D_800C51D4
#define D_800D7190 D_800D3164
#define D_8011F080 D_8011AFC0
#endif

extern M2C_UNK D_285130;
extern M2C_UNK D_44CD58;
extern M2C_UNK D_44D024;
extern M2C_UNK D_44D408;
extern M2C_UNK D_44E6A4;
extern M2C_UNK D_8010A248;
extern M2C_UNK D_8011F080;
extern M2C_UNK D_8011F260;
extern M2C_UNK D_8011FE88;
extern SceneResources D_8013B7B8;
extern SceneGlobal D_80145040;
extern void *D_80145060;
extern u8 D_801462E5;
extern M2C_UNK D_801468A0;
extern s32 D_80146910;
extern s32 D_8014694C;
extern f32 D_800CA2C4;
extern M2C_UNK D_800CA1F4;                          /* unable to generate initializer: unknown type; const */
extern M2C_UNK D_800CA200;                          /* unable to generate initializer: unknown type; const */
extern M2C_UNK D_800CA20C;                          /* unable to generate initializer: unknown type; const */
extern M2C_UNK D_800CA218;                          /* unable to generate initializer: unknown type; const */
extern M2C_UNK D_800CA224;                          /* unable to generate initializer: unknown type; const */
extern M2C_UNK D_800CA238;                          /* unable to generate initializer: unknown type; const */
extern M2C_UNK D_800CA244;                          /* unable to generate initializer: unknown type; const */
extern M2C_UNK D_800CA250;                          /* unable to generate initializer: unknown type; const */
extern M2C_UNK D_800CA258;                          /* unable to generate initializer: unknown type; const */
extern M2C_UNK D_800CA264;                          /* unable to generate initializer: unknown type; const */
extern M2C_UNK D_800CA270;                          /* unable to generate initializer: unknown type; const */
extern M2C_UNK D_800CA280;                          /* unable to generate initializer: unknown type; const */
extern M2C_UNK D_800CA290;                          /* unable to generate initializer: unknown type; const */
extern M2C_UNK D_800CA2A4;                          /* unable to generate initializer: unknown type; const */
extern M2C_UNK D_800CA2B0;                          /* unable to generate initializer: unknown type; const */
extern s32 D_800D15D0;                          /* const */
extern s32 D_800D2980;                          /* const */
extern void *D_800D7190;       /* const */
extern SceneActorTables D_800F7CD0; /* const */
typedef Shared_func_80286A78_S1 func_80286A78_S1;
typedef Shared_func_80286A78_S2 func_80286A78_S2;
typedef Shared_func_80286A78_S3 func_80286A78_S3;
typedef Shared_func_80286A78_S4 func_80286A78_S4;
typedef Shared_func_80286A78_S5 func_80286A78_S5;
typedef Shared_func_80286A78_S6 func_80286A78_S6;
typedef Shared_func_80286A78_S7 func_80286A78_S7;
typedef Shared_func_80286A78_S8 func_80286A78_S8;
typedef Shared_func_80286A78_S9 func_80286A78_S9;
typedef Shared_func_80286A78_S10 func_80286A78_S10;
typedef Shared_func_80286A78_S11 func_80286A78_S11;
typedef Shared_func_80286A78_S12 func_80286A78_S12;
typedef Shared_func_80286A78_S13 func_80286A78_S13;
typedef Shared_func_80286A78_S14 func_80286A78_S14;
typedef Shared_func_80286A78_S15 func_80286A78_S15;
typedef Shared_func_80286A78_S16 func_80286A78_S16;
typedef Shared_func_80286A78_S17 func_80286A78_S17;
typedef Shared_func_80286A78_S18 func_80286A78_S18;
typedef Shared_func_80286A78_S19 func_80286A78_S19;
typedef Shared_func_80286A78_S20 func_80286A78_S20;
typedef Shared_func_80286A78_S21 func_80286A78_S21;






















/* const */

/* Initializes scene resources, actors, and game mode state. */
void func_80286A78(void *arg0, s32 arg1, s32 arg2) {
    s32 *temp_a0;
    s32 *temp_v0_4;
    s32 temp_s4; /* FAKEMATCH: share cleanup bounds; conflicts with both stride registers retain s4. */
    s32 temp_s4_2;
    s32 temp_v0;
    s32 resource_count; /* FAKEMATCH: stage resource count across state byte store */
    s32 temp_v0_16;
    s32 temp_v0_20;
    s32 temp_v0_21;
    s32 temp_v0_5;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a2;
    s32 var_a3;
    s32 var_s0;
    s32 kind_actor; /* FAKEMATCH: retain loop IDs across the actor lookup call */
    s32 kind_654;
    s32 kind_653;
    s32 kind_655;
    s32 second_type3; /* FAKEMATCH: retain actor IDs in the second scan */
    s32 second_type10;
    s32 second_kind_bd6;
    s32 second_kind_64e;
    s32 header_copy0; /* FAKEMATCH: stage the six header words before their stores */
    s32 header_copy1;
    s32 header_copy2;
    s32 header_copy3;
    s32 header_copy4;
    s32 header_copy5;
    s32 var_s0_2;
    s32 loop_buffer; /* FAKEMATCH: split buffer pointer live range in resource loop */
    s32 var_s0_4;
    s32 var_s1_3;
    s32 var_s1_5;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_4;
    s32 var_s5;
    s32 var_s6;
    s32 kind_656; /* FAKEMATCH: separate entry index (priority 941) from kind constant so its priority falls below arg2 (640). */
    s32 var_v0_2;
    void **var_v0_3;
    void **var_v0_4;
    s32 var_v0_5;
    s32 var_v1;
    s32 actor_kind_bd7; /* FAKEMATCH: stage the post-call ID comparison for constant rematerialization in t6. */
    s32 first_actor_kind; /* FAKEMATCH: isolate the first category from the later tally priority. */
    s32 actor_type3; /* FAKEMATCH: stage the actor type constant before the clear loop to match its rematerialized register. */
    s32 var_v1_2;
    s32 temp_v1_8;
    u8 temp_v0_3;
    void **temp_v0_10;
    void **temp_v0_11;
    void **temp_v0_12;
    void **temp_v0_14;
    void **temp_v0_17;
    void **temp_v0_19;
    void **temp_v0_6;
    void **temp_v0_7;
    void *temp_a2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    func_80286A78_S9 *temp_v0_13;
    func_80286A78_S10 *temp_v0_15;
    func_80286A78_S11 *temp_v0_18;
    SceneActorKind *var_s2_3;
    func_80286A78_S2 *temp_v0_2;
    func_80286A78_S2 *scene_actor_ptr;
    func_80286A78_S3 *temp_v1;
    func_80286A78_S7 *temp_v1_5;
    void *temp_v1_6;
    func_80286A78_S17 *temp_v1_7;
    func_80286A78_S19 *temp_v1_9;
    void *var_a0;
    void *var_a1;
    SceneActorKind *var_a1_2;
    void *var_a2_2;
    void *var_s0_5;
    func_80286A78_S2 *var_s1_4; /* FAKEMATCH: share the early actor pointer with the linked cleanup cursor; 18/32 and 9/18 priority. */
    void *var_v0;

    var_s6 = arg1;
    (((func_80286A78_S1 *)(arg0))->unk1B2FC) = D_800CA2C4;
    var_s5 = arg2;
    if ((((func_80286A78_S1 *)(arg0))->unk1B40C) != -1) {
        func_8044E3E4();
    }
    (((func_80286A78_S1 *)(arg0))->unk1B6AC) = 0;
    if ((func_80245774() == 0) && (var_s5 != 0) && ((((func_80286A78_S1 *)(arg0))->unk1B41C) != 0) && (D_8014694C == 0)) {
        func_8028D8E8();
        temp_v0 = (((func_80286A78_S1 *)(arg0))->unk1B434);
        if ((u32) (temp_v0 - 0xBC2) < 0x15FU) {
            func_804037E8(((temp_v0 - 0xBC2) / 10) + 0x259);
        }
        func_8028A924();
    }
    func_8028D864(arg0);
    (((func_80286A78_S1 *)(arg0))->unk0) = 0;
    func_802551C8(&D_8010A248);
    func_8028DA50(arg0);
    func_802538A8(0);
    if ((((func_80286A78_S1 *)(arg0))->unk1B40C) != -1) {
        func_8044CBE0(arg0);
    }
    func_802538A8(0);
    D_800D2980 = 0;
    func_8025470C(8);
    func_8028D628(arg0);
    func_8044C050(&((func_80286A78_S1 *)arg0)->address1B08, *(((func_80286A78_S1 *)(arg0))->unkB4));
    var_s2 = 0;
    func_8044E7C0(&((func_80286A78_S1 *)arg0)->address11778);
    func_8044BA40(&((func_80286A78_S1 *)arg0)->address15388);
    func_8044EBB0(&D_8013B7B8.actors);
    func_8023EDF0();
    func_8044BD30(&((func_80286A78_S1 *)arg0)->address1B320);
    func_8025C8F8(&D_8011F260, &D_8011F080, 0xF);
    func_8044ED24(&D_8013B7B8);
    do {
        var_s1_4 = func_8022A5E4(&D_80145040, var_s2);
        if (var_s1_4 != NULL) {
            temp_v1 = var_s1_4->unk5D8;
            if ((temp_v1->unk78 == 1) && (temp_v1->unk91 == 1)) {
                func_80208000(var_s1_4->unk1454);
            }
            if ((((func_80286A78_S4 *)(&D_801468A0))->unk98) != 0) {
                temp_a2 = var_s1_4->unk5D8;
                temp_v0_3 = (((func_80286A78_S5 *)(temp_a2))->unk94);
                if (temp_v0_3 != 0) {
                    if (temp_v0_3 == 1) {
                        func_802AB720(&D_8013B7B8, var_s1_4, &((func_80286A78_S5 *)temp_a2)->address84);
                    } else if (temp_v0_3 == 2) {
                        func_802AB750(&D_8013B7B8, var_s1_4, &((func_80286A78_S5 *)temp_a2)->address84);
                    }
                    if (var_s1_4->unk5D8->unk80 == 0xB) {
                        func_802AB720(&D_8013B7B8, var_s1_4, D_800D7190);
                    }
                }
            }
        }
        var_s2 += 1;
    } while (var_s2 < 8);
    temp_v1_2 = *(((func_80286A78_S1 *)(arg0))->unk4C);
    if (temp_v1_2 < var_s6) {
        var_s6 = temp_v1_2 - 1;
        var_s5 = 0;
    }
    (((func_80286A78_S1 *)(arg0))->unk1B40C) = var_s6;
    if (var_s5 == 0) {
        (((func_80286A78_S1 *)(arg0))->unk1B41C) = 0;
    }
    func_8028D35C(arg0, var_s6, &((func_80286A78_S1 *)arg0)->address1B2BC, 0x3F);
    temp_v1_3 = (((func_80286A78_S1 *)(arg0))->unk1B434);
    if (temp_v1_3 < 0x1CEA) {
        if (temp_v1_3 < 0x1CE8) {
            if (temp_v1_3 != 0x1BBC) {
                if (temp_v1_3 < 0x1BBD) {
                    if (temp_v1_3 == 0x123A) {
                        goto scene_flag_on;
                    }
                    goto scene_flag_off;
                } else if (temp_v1_3 != 0x1C20) {
                    if (temp_v1_3 == 0x1C84) {
                        goto scene_flag_on;
                    }
                    goto scene_flag_off;
                }
            }
        }
    } else {
        if (temp_v1_3 < 0x1D4C) {
            goto scene_flag_off;
        }
        if (temp_v1_3 >= 0x1D4E) {
            if (temp_v1_3 >= 0x1DB3) {
                goto scene_flag_off;
            }
            if (temp_v1_3 < 0x1DB1) {
                goto scene_flag_off;
            }
        }
    }
scene_flag_on:
    (((func_80286A78_S1 *)(arg0))->unk1B408) = 1;
    goto scene_flag_done;
scene_flag_off:
    (((func_80286A78_S1 *)(arg0))->unk1B408) = 0;
scene_flag_done:
    temp_v1_4 = (((func_80286A78_S1 *)(arg0))->unk1B434);
    if (temp_v1_4 < 0x1CEA) {
        if (temp_v1_4 < 0x1CE8) {
            if (temp_v1_4 != 0x1BBC) {
                if (temp_v1_4 < 0x1BBD) {
                    var_s0 = 0x320;
                    if (temp_v1_4 == 0x123A) {
                        goto scene_size_c80;
                    }
                    goto scene_size_done;
                }
                if (temp_v1_4 == 0x1C20) {
                    goto scene_size_c80;
                }
                var_s0 = 0x320;
                if (temp_v1_4 == 0x1C84) {
                    goto scene_size_c80;
                }
                goto scene_size_done;
            }
        }
        goto scene_size_c80;
    }
    if (temp_v1_4 == 0x1DB1) {
        goto scene_size_4b0;
    }
    if (temp_v1_4 < 0x1DB2) {
        if (temp_v1_4 < 0x1D4E) {
            var_s0 = 0x320;
            if (temp_v1_4 < 0x1D4C) {
                goto scene_size_done;
            }
            goto scene_size_c80;
        }
        goto scene_size_320;
    }
    var_s0 = 0x320;
    if (temp_v1_4 == 0x1DB2) {
        goto scene_size_c80;
    }
    goto scene_size_done;
scene_size_c80:
    var_s0 = 0xC80;
    goto scene_size_done;
scene_size_4b0:
    var_s0 = 0x4B0;
    goto scene_size_done;
scene_size_320:
    var_s0 = 0x320;
scene_size_done:
    if (D_801462E5 != 0) {
        var_s0 += 0x200;
    }
    func_802538A8(0);
    temp_v0_4 = func_802533DC(0, var_s0 << 6, 3, &D_800CA1F4);
    (((func_80286A78_S1 *)(arg0))->unkE8) = temp_v0_4;
    func_8044BFD0(&((func_80286A78_S1 *)arg0)->address128, *temp_v0_4, var_s0);
    temp_v0_5 = func_8028FE08((((func_80286A78_S1 *)(arg0))->unk4C), (((func_80286A78_S1 *)(arg0))->unk1C), var_s6);
    (((func_80286A78_S1 *)(arg0))->unkB8) = func_80254224(0, &((func_80286A78_S1 *)arg0)->unk60, temp_v0_5, &D_800CA200);
    temp_v0_6 = func_802543A8(0, (((func_80286A78_S1 *)(arg0))->unk60), 1, temp_v0_5, arg0, &D_44D024, &D_800CA20C);
    (((func_80286A78_S1 *)(arg0))->unkBC) = temp_v0_6;
    (((func_80286A78_S1 *)(arg0))->unk6C) = (void *) *temp_v0_6;
    temp_v0_7 = func_802543A8(0, (((func_80286A78_S1 *)(arg0))->unk60), 4, temp_v0_5, arg0, &D_285130, &D_800CA218);
    (((func_80286A78_S1 *)(arg0))->unkC0) = temp_v0_7;
    (((func_80286A78_S1 *)(arg0))->unk68) = (void *) *temp_v0_7;
    temp_v0_8 = func_8028FE08((((func_80286A78_S1 *)(arg0))->unk60), temp_v0_5, 5);
    (((func_80286A78_S1 *)(arg0))->unk30) = temp_v0_8;
    (((func_80286A78_S1 *)(arg0))->unkC4) = func_80254224(0, &((func_80286A78_S1 *)arg0)->address64, temp_v0_8, &D_800CA224);
    if (*(((func_80286A78_S1 *)(arg0))->unk60) >= 0xD) {
        temp_v0_9 = func_8028FE08((((func_80286A78_S1 *)(arg0))->unk60), temp_v0_5, 0xC);
        (((func_80286A78_S1 *)(arg0))->unk40) = temp_v0_9;
        (((func_80286A78_S1 *)(arg0))->unk100) = func_80254224(0, &((func_80286A78_S1 *)arg0)->unk8C, temp_v0_9, &D_800CA238);
        temp_v0_10 = func_802543A8(0, (((func_80286A78_S1 *)(arg0))->unk8C), 0, (((func_80286A78_S1 *)(arg0))->unk40), arg0, NULL, &D_800CA244);
        temp_v1_5 = *temp_v0_10;
        *(func_80286A78_S7 *)&((func_80286A78_S1 *)arg0)->unk1B910 = *temp_v1_5;
        func_802537D8(0, temp_v0_10);
        if ((((func_80286A78_S1 *)(arg0))->unk1B920) != 0 || (((func_80286A78_S1 *)(arg0))->unk1B924) != 0) {
            (((func_80286A78_S1 *)(arg0))->unk1B92C) = 1;
        } else {
            (((func_80286A78_S1 *)(arg0))->unk1B92C) = 0;
        }
    } else {
        (((func_80286A78_S1 *)(arg0))->unk1B92C) = 0;
    }
    (((func_80286A78_S1 *)(arg0))->unkD4) = func_802543A8(0, (((func_80286A78_S1 *)(arg0))->unk60), 7, temp_v0_5, arg0, &D_44CD58, &D_800CA250);
    (((func_80286A78_S1 *)(arg0))->unkEC) = func_802543A8(0, (((func_80286A78_S1 *)(arg0))->unk60), 2, temp_v0_5, arg0, &D_44E6A4, &D_800CA258);
    temp_v0_11 = func_802543A8(0, (((func_80286A78_S1 *)(arg0))->unk60), 0, temp_v0_5, arg0, NULL, &D_800CA264);
    (((func_80286A78_S1 *)(arg0))->unkC8) = temp_v0_11;
    (((func_80286A78_S1 *)(arg0))->unk1B2B0) = (void *) *temp_v0_11;
    func_8044CA54(arg0);
    resource_count = *(((func_80286A78_S1 *)(arg0))->unk60);
    D_800D15D0 = ((u8) (((func_80286A78_S8 *)(((func_80286A78_S1 *)(arg0))->unk1B2B0))->unk10) >> 2) & 1;
    if (resource_count >= 9) {
        temp_v0_12 = func_802543A8(0, (((func_80286A78_S1 *)(arg0))->unk60), 9, temp_v0_5, arg0, &D_285130, &D_800CA270);
        (((func_80286A78_S1 *)(arg0))->unkF0) = temp_v0_12;
        temp_v0_13 = *temp_v0_12;
        (((func_80286A78_S1 *)(arg0))->unk1B4DC) = temp_v0_13;
        (((func_80286A78_S1 *)(arg0))->unk1B4E0) = (s32) temp_v0_13->unk4;
        temp_v0_14 = func_802543A8(0, (((func_80286A78_S1 *)(arg0))->unk60), 0xA, temp_v0_5, arg0, &D_285130, &D_800CA280);
        (((func_80286A78_S1 *)(arg0))->unkF4) = temp_v0_14;
        temp_v0_15 = *temp_v0_14;
        (((func_80286A78_S1 *)(arg0))->unk1B4E4) = temp_v0_15;
        (((func_80286A78_S1 *)(arg0))->unk1B4E8) = (s32) temp_v0_15->unk4;
        func_80255C40(&((func_80286A78_S1 *)arg0)->address1B500, 0xC, 0x10);
        temp_v0_16 = (((func_80286A78_S1 *)(arg0))->unk1B4E0);
        if (temp_v0_16 > 0) {
            var_s0_2 = func_80252FFC(temp_v0_16 * 0x50);
            /* FAKEMATCH: share the resource counter with the early scan to lower its allocator priority. */
            var_s2 = 0;
            if ((((func_80286A78_S1 *)(arg0))->unk1B4E0) > 0) {
                do {
                    func_8020CA10(var_s0_2, var_s2);
                    func_80255CB4(&((func_80286A78_S1 *)arg0)->address1B500, var_s0_2);
                    var_s0_2 += 0x50;
                } while ((((func_80286A78_S1 *)arg0)->unk1B4E0) > ++var_s2);
            }
        }
    }
    if (*(((func_80286A78_S1 *)(arg0))->unk60) >= 0xC) {
        temp_v0_17 = func_802543A8(0, (((func_80286A78_S1 *)(arg0))->unk60), 0xB, temp_v0_5, arg0, &D_285130, &D_800CA290);
        (((func_80286A78_S1 *)(arg0))->unkFC) = temp_v0_17;
        temp_v0_18 = *temp_v0_17;
        (((func_80286A78_S1 *)(arg0))->unk1B4EC) = temp_v0_18;
        (((func_80286A78_S1 *)(arg0))->unk1B4F0) = (s32) temp_v0_18->unk4;
    }
    temp_v0_19 = func_802543A8(0, (((func_80286A78_S1 *)(arg0))->unk60), 6, temp_v0_5, arg0, &D_285130, &D_800CA2A4);
    (((func_80286A78_S1 *)(arg0))->unkCC) = temp_v0_19;
    temp_v1_6 = *temp_v0_19;
    (((func_80286A78_S1 *)(arg0))->unk1B300) = (void *) (&((func_80286A78_S12 *)temp_v1_6)->address8);
    (((func_80286A78_S1 *)(arg0))->unk1B304) = (s32) (((func_80286A78_S12 *)(temp_v1_6))->unk4);
    (((func_80286A78_S1 *)(arg0))->unk0) = 1;
    (((func_80286A78_S1 *)(arg0))->unk138) = NULL;
    (((func_80286A78_S1 *)(arg0))->unk140) = 0;
    (((func_80286A78_S1 *)(arg0))->unkD0) = func_802543A8(0, (((func_80286A78_S1 *)(arg0))->unk60), 3, temp_v0_5, arg0, &D_44D408, &D_800CA2B0);
    func_80286920(arg0);
    /* FAKEMATCH: use a separate tally to rank below the a0 cursor and a1 table. */
    var_a2 = 0;
    var_v1 = 0xF;
    /* FAKEMATCH: reuse the later call index for the first cursor, raising priority and retaining its a0 preference. */
    var_a0_3 = (s32)(((func_80286A78_S1 *)(arg0))->unk138);
    var_v0 = &((func_80286A78_S1 *)arg0)->address3C;
    (((func_80286A78_S1 *)(arg0))->unk1B6A4) = 0;
    do {
        (((func_80286A78_S13 *)(var_v0))->unk1B664) = 0;
        var_v1 -= 1;
        var_v0 -= 4;
    } while (var_v1 >= 0);
    /* FAKEMATCH: reuse the clear-loop counter; its higher priority retains v1 for the scan. */
    var_v1 = 0;
    /* FAKEMATCH: share the actor category with the later actor tally. */
    if ((((func_80286A78_S1 *)(arg0))->unk140) > 0) {
        first_actor_kind = 0xE;
        var_a1 = (void *)((var_a2 * 4) + (u32)arg0);
loop_81:
        if (*(((func_80286A78_S14 *)((void *)var_a0_3))->unk18) == first_actor_kind) {
            (((func_80286A78_S15 *)(var_a1))->unk1B664) = (void *)var_a0_3;
            var_a1 += 4;
            var_a2 += 1;
            var_v0_2 = var_a2 < 0x10;
        } else {
            var_v0_2 = var_a2 < 0x10;
        }
        if (var_v0_2 != 0) {
            var_a0_3 = (s32)NEXT_SCENE_ACTOR((void *)var_a0_3);
            var_v1 += 1;
            if (var_v1 < (((func_80286A78_S1 *)(arg0))->unk140)) {
                goto loop_81;
            }
        }
    }
    /* FAKEMATCH: share actor counters with the cleanup index, whose stride conflict retains s1. */
    var_s1_3 = 3;
    scene_actor_ptr = (((func_80286A78_S1 *)(arg0))->unk138);
    actor_type3 = 3;
    actor_kind_bd7 = 0xBD7;
    /* FAKEMATCH: stage the array member displacement as a pointer, retaining the byte-stride clear cursor. */
    var_v0_3 = &((ScenePrimaryActors *)0)->actors[3];
    (((func_80286A78_S1 *)(arg0))->unk1B6A4) = var_a2;
    D_800F7CD0.primary.kindBd7 = NULL;
    do {
        D_800F7CD0.primary.actors[var_v0_3 - (void **)0] = NULL;
        var_s1_3 -= 1;
        var_v0_3 -= 1;
    } while (var_s1_3 >= 0);
    var_s1_3 = 0;
    if ((((func_80286A78_S1 *)(arg0))->unk140) > 0) {
        kind_actor = 0xA;
        kind_654 = 0x654;
        kind_653 = 0x653;
        kind_655 = 0x655;
        kind_656 = 0x656;
        var_s2_3 = &((func_80286A78_S16 *)scene_actor_ptr)->kind;
loop_89:
        temp_v1_7 = ((SceneActorPrefix *)var_s2_3)[-1].definition;
        temp_v0_20 = temp_v1_7->unk0;
        if (temp_v0_20 == actor_type3) {
            if (func_8028B238(&D_8011FE88, temp_v1_7->unk28) != actor_kind_bd7) {
                goto block_108;
            }
            D_800F7CD0.primary.kindBd7 = scene_actor_ptr;
            goto block_109;
        } else {
            if (temp_v0_20 == kind_actor) {
                temp_v1_8 = var_s2_3->kind;
                if (temp_v1_8 == kind_654) {
                    goto actor_kind_654;
                }
                if (temp_v1_8 < 0x655) {
                    if (temp_v1_8 == kind_653) {
                        goto actor_kind_653;
                    }
                        goto block_108;
                }
                if (temp_v1_8 == kind_655) {
                    goto actor_kind_655;
                }
                if (temp_v1_8 == kind_656) {
                        goto actor_kind_656;
                }
                goto block_108;
actor_kind_653:
                D_800F7CD0.primary.actors[0] = scene_actor_ptr;
                goto block_108;
actor_kind_654:
                D_800F7CD0.primary.actors[1] = scene_actor_ptr;
                goto block_108;
actor_kind_655:
                D_800F7CD0.primary.actors[2] = scene_actor_ptr;
                goto block_108;
actor_kind_656:
                D_800F7CD0.primary.actors[3] = scene_actor_ptr;
            }
block_108:
            var_s2_3 = NEXT_SCENE_ACTOR(var_s2_3);
            scene_actor_ptr = NEXT_SCENE_ACTOR(scene_actor_ptr);
            var_s1_3 += 1;
            if (var_s1_3 >= (((func_80286A78_S1 *)(arg0))->unk140)) {
                goto block_109;
            }
            goto loop_89;
        }
    } else {
block_109:
        var_a3 = 0;
    }
    /* FAKEMATCH: reuse the second scan index; its call-argument preference retains a0 in the clear loop. */
    var_a0_3 = 9;
    var_a2_2 = (((func_80286A78_S1 *)(arg0))->unk138);
    /* FAKEMATCH: stage this array member displacement as a pointer for the second byte-stride clear cursor. */
    var_v0_4 = &((SceneActorTables *)0)->kind64e[9];
    D_800F7CD0.kindBd6 = NULL;
    do {
        D_800F7CD0.kind64e[var_v0_4 - (void **)0] = NULL;
        var_a0_3 -= 1;
        var_v0_4 -= 1;
    } while (var_a0_3 >= 0);
    var_a0_3 = 0;
    if ((((func_80286A78_S1 *)(arg0))->unk140) > 0) {
        second_type3 = 3;
        second_kind_bd6 = 0xBD6;
        second_type10 = 0xA;
        second_kind_64e = 0x64E;
        var_a1_2 = &((func_80286A78_S18 *)var_a2_2)->kind;
loop_114:
        temp_v1_9 = ((SceneActorPrefix *)var_a1_2)[-1].definition;
        temp_v0_21 = temp_v1_9->unk0;
        if (temp_v0_21 == second_type3) {
            if (temp_v1_9->unk28 == second_kind_bd6) {
                D_800F7CD0.kindBd6 = var_a2_2;
            }
        } else if (temp_v0_21 == second_type10) {
            if (var_a1_2->kind == second_kind_64e) {
                D_800F7CD0.kind64e[var_a3] = var_a2_2;
                var_a3 += 1;
            }
        }
        var_v0_5 = var_a3 < 0xA;
        if (var_v0_5 != 0) {
            var_a1_2 = NEXT_SCENE_ACTOR(var_a1_2);
            var_a2_2 = NEXT_SCENE_ACTOR(var_a2_2);
            var_a0_3 += 1;
            if (var_a0_3 >= (((func_80286A78_S1 *)(arg0))->unk140)) {
                goto block_122;
            }
            goto loop_114;
        }
    } else {
block_122:
        D_80146910 = func_802A11E8(var_a0_3) % 3;
    }
    (((func_80286A78_S1 *)(arg0))->unk0) = 2;
    func_8044E214(arg0);
    temp_s4 = (((func_80286A78_S1 *)(arg0))->unk140);
    var_s1_3 = (((func_80286A78_S1 *)(arg0))->unk13C);
    (((func_80286A78_S1 *)(arg0))->unk0) = 3;
    if (var_s1_3 < temp_s4) {
        var_s0_4 = var_s1_3 * sizeof(SceneActorStride);
        do {
            var_s1_3 += 1;
            func_8024B2C0((((func_80286A78_S1 *)(arg0))->unk138) + var_s0_4);
            var_s0_4 += sizeof(SceneActorStride);
        } while (var_s1_3 < temp_s4);
    }
    var_s1_4 = D_80145060;
    if (var_s1_4 != NULL) {
        /* FAKEMATCH: stage the cleanup alias after the null test, retaining the s1 cursor load. */
        temp_v0_2 = var_s1_4;
        do {
            func_8024B2C0(temp_v0_2);
            func_8024B2C0(NEXT_SCENE_ACTOR(temp_v0_2));
            (((func_80286A78_S21 *)(((func_80286A78_S20 *)(var_s1_4))->unk1454))->unk4) = func_8020CB3C(&((func_80286A78_S1 *)arg0)->unk1B4DC, &((func_80286A78_S20 *)var_s1_4)->address8);
            var_s1_4 = (((func_80286A78_S20 *)(var_s1_4))->unk16E0);
            if (var_s1_4 == NULL) {
                break;
            }
            temp_v0_2 = var_s1_4;
        } while (1);
    }
    func_8044E2B8(arg0);
    temp_s4 = (((func_80286A78_S1 *)(arg0))->unk140);
    var_s1_5 = (((func_80286A78_S1 *)(arg0))->unk13C);
    if (var_s1_5 < temp_s4) {
        var_s2_4 = var_s1_5 * sizeof(SceneActorStride);
        do {
            var_s1_5 += 1;
            /* FAKEMATCH: continue reusing early actor pointer in final cleanup. */
            temp_v0_2 = (((func_80286A78_S1 *)(arg0))->unk138) + var_s2_4;
            func_8024BE2C(temp_v0_2);
            func_80246E34(temp_v0_2);
            var_s2_4 += sizeof(SceneActorStride);
        } while (var_s1_5 < temp_s4);
    }
    /* FAKEMATCH: reuse the s0 cleanup alias for the final paired address calls to restore allocator priority. */
    /* FAKEMATCH: stage the typed member displacement in the alias so its constant load also uses s0. */
    temp_v0_2 = (func_80286A78_S2 *)&((func_80286A78_S1 *)0)->unk1B4DC;
    temp_v0_2 = (func_80286A78_S2 *)((u32)arg0 + (u32)temp_v0_2);
    func_8020AA40(temp_v0_2);
    func_8020ABF0(temp_v0_2);
    (((func_80286A78_S1 *)(arg0))->unk0) = 4;
    func_8044AA68(&D_80145040);
    temp_s0_3 = &D_80145040.address48;
    func_8044B31C(temp_s0_3);
    func_80236864(temp_s0_3);
}

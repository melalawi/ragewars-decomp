#ifdef NON_MATCHING
/* Switches menu screens and dispatches lifecycle events for the active screen. */
typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
#define NULL ((void *)0)


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
/* The values func_80299368 loads by address:
 * 0x800CA800 = 1000.0 (double, D_800CA800 in this cartridge's tables)
 */
void func_80298DBC(void);
void func_80299ECC(void);
s32 func_8029A958(void);
void func_8029AC80(void *);
void func_8029ACC4(void);
f64 func_802A28CC(void);
void func_8041174C(s32);
void * func_80411E4C(s32);
s32 func_80411E70(s32);
void func_80411E98(s32);
M2C_UNK func_80297E3C(); /* extern */
M2C_UNK func_80298310(); /* extern */
M2C_UNK func_80298A34(); 
typedef struct func_80299368_S1 func_80299368_S1;
typedef struct func_80299368_S2 func_80299368_S2;
typedef struct func_80299368_S3 func_80299368_S3;
typedef struct func_80299368_S4 func_80299368_S4;
typedef struct func_80299368_S5 func_80299368_S5;
typedef struct func_80299368_S6 func_80299368_S6;
typedef struct func_80299368_S7 func_80299368_S7;
typedef struct func_80299368_S8 func_80299368_S8;
typedef struct func_80299368_S9 func_80299368_S9;
typedef struct func_80299368_S10 func_80299368_S10;
typedef struct func_80299368_S11 func_80299368_S11;
typedef struct func_80299368_S12 func_80299368_S12;
typedef struct func_80299368_S13 func_80299368_S13;
typedef struct func_80299368_S14 func_80299368_S14;
typedef struct func_80299368_S15 func_80299368_S15;
typedef struct func_80299368_S16 func_80299368_S16;
typedef struct func_80299368_S17 func_80299368_S17;
typedef struct MenuEntry {
    void *object;
    s32 id;
    void *focus;
    s32 data;
    s32 data10;
    s32 data14;
    s32 data18;
} MenuEntry;
typedef union func_80299368_S1_UC { void* v0; s32 v1; } func_80299368_S1_UC;
struct func_80299368_S1 {
    s32 (*callback)(s32, s32, s32, s32);
    s32 unk4;
    s32 unk8;
    MenuEntry *unkC;
    s32 (*callback2)(s32);
    char pad14[0x8];
    u8 unk1C;
    char pad1D[0x503];
    s32 unk520;
    s32 unk524;
    s32 unk528;
    char pad528[0x4];
    s32 unk530;
    char pad530[0xC];
    s32 unk540;
};
struct func_80299368_S2 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x14];
    u8 unk1C;
};
struct func_80299368_S3 {
    char unk0[1];
};
struct func_80299368_S4 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x14];
    u8 unk1C;
};
struct func_80299368_S5 {
    void* unk0;
    s32 unk4;
    s32 unk8;
};
struct func_80299368_S6 {
    char pad0[0x12];
    u16 unk12;
    char pad12[0x30];
    s32 unk44;
};
struct func_80299368_S7 {
    void* unk0;
    s32 unk4;
    s32 unk8;
};
struct func_80299368_S8 {
    char pad0[0x12];
    u16 unk12;
};
struct func_80299368_S9 {
    char pad0[0xC];
    s16 unkC;
};
struct func_80299368_S10 {
    char pad0[0xC];
    s16 unkC;
    char padC[0x32];
    s32 unk40;
};
struct func_80299368_S11 {
    void* unk0;
    s32 unk4;
    s32 unk8;
};
struct func_80299368_S12 {
    char pad0[0x4];
    s32 unk4;
};
struct func_80299368_S13 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0x8];
    u8 unk14;
};
struct func_80299368_S14 {
    char unk0[1];
};
struct func_80299368_S15 {
    void* unk0;
    s32 unk4;
    s32 unk8;
};
struct func_80299368_S16 {
    char pad0[0xC];
    s16 unkC;
    char padC[0x32];
    s32 unk40;
};
struct func_80299368_S17 {
    char pad0[0xC];
    s16 unkC;
};

/* extern */
extern func_80299368_S1 *D_8014D080;
#if defined(VERSION_US_REV1)
extern s32 D_8014D090;
extern f64 D_800CA800;
#define MENU_LAST_DATA D_8014D090
#define MENU_TIME_SCALE D_800CA800
#elif defined(VERSION_US)
extern s32 D_80144E10;
extern f64 D_800C55A0;
#define MENU_LAST_DATA D_80144E10
#define MENU_TIME_SCALE D_800C55A0
#elif defined(VERSION_EU)
extern s32 D_80156E10;
extern f64 D_800C5910;
#define MENU_LAST_DATA D_80156E10
#define MENU_TIME_SCALE D_800C5910
#elif defined(VERSION_EU_X)
extern s32 D_80150E10;
extern f64 D_800C5950;
#define MENU_LAST_DATA D_80150E10
#define MENU_TIME_SCALE D_800C5950
#elif defined(VERSION_DE)
extern s32 D_80146E10;
extern f64 D_800C5670;
#define MENU_LAST_DATA D_80146E10
#define MENU_TIME_SCALE D_800C5670
#endif

void func_80299368(s32 arg0) {
    M2C_UNK (*temp_v0_10)(M2C_UNK, s32, M2C_UNK, M2C_UNK);
    M2C_UNK (*temp_v0_11)(M2C_UNK, s32, M2C_UNK, M2C_UNK);
    M2C_UNK (*temp_v0_14)(M2C_UNK, s32, M2C_UNK, M2C_UNK);
    M2C_UNK (*temp_v0_15)(M2C_UNK, s32, M2C_UNK, M2C_UNK);
    M2C_UNK (*temp_v0_16)(M2C_UNK, s32, M2C_UNK, M2C_UNK);
    M2C_UNK (*temp_v0_17)(M2C_UNK, s32, M2C_UNK, M2C_UNK);
    M2C_UNK (*temp_v0_4)(M2C_UNK, s32, M2C_UNK, M2C_UNK);
    M2C_UNK (*temp_v0_5)(M2C_UNK, s32, M2C_UNK, M2C_UNK);
    M2C_UNK (*temp_v0_8)(M2C_UNK, s32, M2C_UNK, M2C_UNK);
    M2C_UNK (*temp_v0_9)(M2C_UNK, s32, M2C_UNK, M2C_UNK);
    s32 temp_s1;
    s32 temp_s1_2;
    s32 (*temp_a2)(s32);
    s32 (*temp_v0_7)(s32);
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_f2;
    s32 e03_arg_copy; /* FAKEMATCH: retain the argument for the E03 fallback after the callback. */
    s32 focus_index_final; /* FAKEMATCH: preload the final focus index. */
    s32 focus_index; /* FAKEMATCH: preload the focus index before the callback guard. */
    s32 callback_status; /* FAKEMATCH: capture callback result before restoring the menu flag. */
    s32 callback_status_5; /* FAKEMATCH: keep this callback result local to its event. */
    s32 temp_s0_10;
    s32 temp_s0_11;
    s32 temp_s0_12;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_s0_7;
    s32 temp_s0_8;
    s32 temp_s0_9;
    s32 temp_s2;
    s32 temp_s4;
    s32 temp_v0_2;
    s32 regpart_temp_v0_2; /* FAKEMATCH: split the final data read from the cleanup index to preserve its register. */
    s32 temp_v1;
    s32 search_bound; /* FAKEMATCH: retain the first search bound while reusing its register for the cursor. */
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s5;
    s32 var_v0;
    s32 var_v1_3;
    func_80299368_S1 *temp_a0;
    func_80299368_S5 *temp_a0_2;
    func_80299368_S7 *temp_a0_3;
    func_80299368_S9 *temp_a0_4;
    func_80299368_S11 *temp_a0_5;
    func_80299368_S15 *temp_a0_6;
    func_80299368_S17 *temp_a0_7;
    void *temp_s0;
    func_80299368_S6 *temp_v0;
    func_80299368_S6 *temp_v0_13;
    func_80299368_S6 *temp_v0_3;
    func_80299368_S6 *temp_v0_6;
    func_80299368_S1 *temp_v1_2;
    func_80299368_S6 *var_s1;
    func_80299368_S13 *var_v0_2;
    func_80299368_S2 *var_v1;
    func_80299368_S4 *var_v1_2;

    func_8029ACC4();
    var_s2 = 0;
    var_s5 = 1;
    if (D_8014D080->unk4 >= 0) {
        func_8029A958();
    }
    temp_v1 = D_8014D080->unk4;
    temp_s0 = D_8014D080->unkC;
    var_a0 = 0;
    if (temp_v1 >= 0) {
        search_bound = temp_v1;
        var_v1 = (void *)temp_s0;
loop_4:
        var_a0 += 1;
        if (var_v1->unk4 == arg0) {
            goto block_found_trampoline;
        }
        var_v1 = (void *)&var_v1->unk1C;
        if (search_bound >= var_a0) {
            goto loop_4;
        }
    }
    var_v0 = 0;
block_search_check:
    if (var_v0 == 0) {
        goto block_not_found;
    }
    {
        temp_s4 = func_8029A958();
        var_a0_2 = D_8014D080->unk8;
        temp_a1 = D_8014D080->unk4;
        if (temp_a1 >= var_a0_2) {
            var_v1_2 = ((void *)&D_8014D080->unkC[var_a0_2]);
            do {
                if (var_v1_2->unk4 == arg0) {
                    var_s2 = 1;
                }
                var_a0_2 += 1;
                var_v1_2 = (void *)&var_v1_2->unk1C;
            } while (temp_a1 >= var_a0_2);
        }
        temp_a0 = D_8014D080;
        if (((MenuEntry *)temp_s0)[temp_a0->unk4].id != arg0) {
            do {
                temp_a0->unk530 = 1;
                func_80299ECC();
                /* FAKEMATCH: refresh the menu pointer after the callback. */
                temp_a0 = D_8014D080;
            } while (((MenuEntry *)temp_s0)[D_8014D080->unk4].id != arg0);
        }
        D_8014D080->unk540 = 0;
        D_8014D080->unk528 = temp_s4;
        if (var_s2 == 0) {
            func_8041174C(arg0);
            temp_v0 = func_80411E4C(arg0);
            temp_a0_2 = ((void *)&D_8014D080->unkC[D_8014D080->unk4]);
            temp_a0_2->unk0 = temp_v0;
            temp_a0_2->unk4 = arg0;
            temp_a0_2->unk8 = (s32) temp_v0->unk44;
            MENU_LAST_DATA = temp_v0->unk44;
            var_s1 = temp_v0;
            func_80298DBC();
            if (((u16) var_s1->unk12 >> 0xC) & 1) {
                /* FAKEMATCH: reuse arg0 for the repeated header bit test. */
                arg0 = 1;
                temp_s2 = D_8014D080->unk4;
loop_18:
                if ((((u16) var_s1->unk12 >> 0xC) & 1) == arg0) {
                    temp_v0_2 = --D_8014D080->unk4;
                    D_8014D080->unk8 = temp_v0_2;
                    /* FAKEMATCH: stage the decremented entry index for the lookup. */
                    temp_a1 = temp_v0_2;
                    func_8041174C(D_8014D080->unkC[temp_a1].id);
                    temp_s0_2 = D_8014D080->unkC[D_8014D080->unk4].id;
                    temp_v0_3 = func_80411E4C(temp_s0_2);
                    temp_a0_3 = ((void *)&D_8014D080->unkC[D_8014D080->unk4]);
                    temp_a0_3->unk0 = temp_v0_3;
                    temp_a0_3->unk4 = temp_s0_2;
                    temp_a0_3->unk8 = (s32) temp_v0_3->unk44;
                    MENU_LAST_DATA = temp_v0_3->unk44;
                    D_8014D080->unk540 = 0;
                    var_s1 = temp_v0_3;
                    func_80298DBC();
                    goto loop_18;
                }
                D_8014D080->unk4 = temp_s2;
            }
            goto block_78;
block_found_trampoline:
            var_v0 = 1;
            goto block_search_check;
        } else {
            var_s1 = D_8014D080->unkC[D_8014D080->unk4].object;
            D_8014D080->unk540 = 0;
            if (((volatile func_80299368_S1 *)D_8014D080)->unk4 != -1) {
                temp_v0_4 = D_8014D080->callback;
                if (temp_v0_4 != NULL) {
                    temp_s0_3 = D_8014D080->unk520;
                    D_8014D080->unk520 = 0;
                    temp_v0_4(0xE07, 0, 0, 0);
                    callback_status = D_8014D080->unk520;
                    if (callback_status == 1) {
                        var_s5 = 0;
                        D_8014D080->unk520 = temp_s0_3;
                        goto after_found_callback;
                    }
                    D_8014D080->unk520 = temp_s0_3;
                }
                func_80298310(1, 0xE07, 0, 0, 0);
                goto block_27;
            } else {
block_27:
                var_s5 = 0;
            }
        }
after_found_callback:
        goto block_78;
    }
block_not_found:
    func_8041174C(arg0);
    if (((u16) (((func_80299368_S8 *)(func_80411E4C(arg0)))->unk12) >> 0xC) & 1) {
        temp_a0_4 = D_8014D080->unkC[D_8014D080->unk4].focus;
        if ((temp_a0_4 != NULL) && ((temp_s1 = temp_a0_4->unkC, (func_80411E70((s32) temp_s1) == 0)) || (temp_s1 == D_8014D080->unkC[D_8014D080->unk4].id)) && ((focus_index = D_8014D080->unk4), (temp_s1 != D_8014D080->unk528)) && (focus_index != -1)) {
            temp_v0_5 = D_8014D080->callback;
            if (temp_v0_5 != NULL) {
                temp_s0_4 = D_8014D080->unk520;
                D_8014D080->unk520 = 0;
                temp_v0_5(0x10, 0, 0, 0);
                callback_status = D_8014D080->unk520;
                if (callback_status == 1) {
                    D_8014D080->unk520 = temp_s0_4;
                    goto after_focus10;
                }
                D_8014D080->unk520 = temp_s0_4;
            }
            if (temp_s1 == (((func_80299368_S10 *)(D_8014D080->unkC[D_8014D080->unk4].object))->unkC)) {
                func_80298A34(0x10, 0, 0, 0);
            } else {
                func_80297E3C(temp_s1, 0x10, 0, 0, 0);
            }
        }
after_focus10:
        D_8014D080->unk528 = func_8029A958();
        D_8014D080->unk4 = (s32) (D_8014D080->unk4 + 1);
        temp_v0_6 = func_80411E4C(arg0);
        temp_a0_5 = ((void *)&D_8014D080->unkC[D_8014D080->unk4]);
        temp_a0_5->unk0 = temp_v0_6;
        temp_a0_5->unk4 = arg0;
        temp_a0_5->unk8 = (s32) temp_v0_6->unk44;
        var_s1 = temp_v0_6;
        MENU_LAST_DATA = var_s1->unk44;
        func_8029AC80((void *)&D_8014D080->unkC[D_8014D080->unk4].data);
        temp_v0_7 = D_8014D080->callback2;
        if (temp_v0_7 != NULL) {
            (((func_80299368_S10 *)(D_8014D080->unkC[D_8014D080->unk4].object))->unk40) = temp_v0_7(arg0);
        }
        D_8014D080->unk540 = 0;
        if (D_8014D080->unk4 != -1) {
            temp_v0_8 = D_8014D080->callback;
            if (temp_v0_8 != NULL) {
                temp_s0_5 = D_8014D080->unk520;
                D_8014D080->unk520 = 0;
                temp_v0_8(0xE06, 0, 0, 0);
                callback_status_5 = D_8014D080->unk520;
                if (callback_status_5 == 1) {
                    D_8014D080->unk520 = temp_s0_5;
                    goto after_e06;
                }
                D_8014D080->unk520 = temp_s0_5;
            }
            func_80298310(1, 0xE06, 0, 0, 0);
        }
after_e06:
        if (((volatile func_80299368_S1 *)D_8014D080)->unk4 != -1) {
            temp_v0_9 = D_8014D080->callback;
            if (temp_v0_9 != NULL) {
                temp_s0_6 = D_8014D080->unk520;
                D_8014D080->unk520 = 0;
                temp_v0_9(0xE07, 0, 0, 0);
                callback_status = D_8014D080->unk520;
                if (callback_status == 1) {
                    D_8014D080->unk520 = temp_s0_6;
                    goto block_78;
                }
                D_8014D080->unk520 = temp_s0_6;
            }
            func_80298310(1, 0xE07, 0, 0, 0);
        }
        goto block_78;
    }
    if (D_8014D080->unk4 != -1) {
        temp_v0_10 = D_8014D080->callback;
        if (temp_v0_10 != NULL) {
            temp_s0_7 = D_8014D080->unk520;
            D_8014D080->unk520 = 0;
            temp_v0_10(0xE01, 0, 0, 0);
            callback_status = D_8014D080->unk520;
            if (callback_status == 1) {
                D_8014D080->unk520 = temp_s0_7;
                goto after_e01;
            }
            D_8014D080->unk520 = temp_s0_7;
        }
        func_80298A34(0xE01, 0, 0, 0);
    }
after_e01:
    func_8029ACC4();
    e03_arg_copy = arg0;
    if (D_8014D080->unk4 != -1) {
        temp_v0_11 = D_8014D080->callback;
        if (temp_v0_11 != NULL) {
            temp_s0_8 = D_8014D080->unk520;
            D_8014D080->unk520 = 0;
            temp_v0_11(0xE03, arg0, 0, 0);
            callback_status = D_8014D080->unk520;
            if (callback_status == 1) {
                D_8014D080->unk520 = temp_s0_8;
                goto after_e03;
            }
            D_8014D080->unk520 = temp_s0_8;
        }
        func_80298A34(0xE03, e03_arg_copy, 0, 0);
    }
after_e03:
    temp_v1_2 = D_8014D080;
    temp_v0_2 = temp_v1_2->unk4;
    var_s1_2 = temp_v1_2->unk8;
    if (temp_v0_2 >= 0) {
        if (temp_v0_2 >= var_s1_2) {
            var_s0 = var_s1_2;
            do {
                var_s1_2 += 1;
                func_80411E98(temp_v1_2->unkC[var_s0].id);
                D_8014D080->unkC[var_s0].object = 0;
                D_8014D080->unkC[var_s0].focus = 0;
                var_s0 += 1;
            } while (D_8014D080->unk4 >= var_s1_2);
        }
        var_v1_3 = 0x3F;
        var_v0_2 = (void *)&D_8014D080->unk1C;
        do {
            var_v0_2->unk8 = 0;
            var_v1_3 -= 1;
            var_v0_2 = (void *)&var_v0_2->unk14;
        } while (var_v1_3 >= 0);
        /* FAKEMATCH: refresh at the join while preserving the cached pointer on the negative-index path. */
        temp_v1_2 = D_8014D080;
    }
    temp_v1_2->unk8 = temp_v1_2->unk4;
    D_8014D080->unk528 = func_8029A958();
    D_8014D080->unk4 = (s32) (D_8014D080->unk4 + 1);
    temp_v0_13 = func_80411E4C(arg0);
    temp_a0_6 = ((void *)&D_8014D080->unkC[D_8014D080->unk4]);
    temp_a0_6->unk0 = temp_v0_13;
    temp_a0_6->unk4 = arg0;
    temp_a0_6->unk8 = (s32) temp_v0_13->unk44;
    MENU_LAST_DATA = temp_v0_13->unk44;
    D_8014D080->unk8 = (s32) D_8014D080->unk4;
    temp_a2 = D_8014D080->callback2;
    var_s1 = temp_v0_13;
    if (temp_a2 != NULL) {
        (((func_80299368_S16 *)(D_8014D080->unkC[D_8014D080->unk4].object))->unk40) = temp_a2(arg0);
    }
    D_8014D080->unk540 = 0;
    if (D_8014D080->unk4 != -1) {
        temp_v0_14 = D_8014D080->callback;
        if (temp_v0_14 != NULL) {
            temp_s0_9 = D_8014D080->unk520;
            D_8014D080->unk520 = 0;
            temp_v0_14(0xE06, 0, 0, 0);
            callback_status = D_8014D080->unk520;
            if (callback_status == 1) {
                D_8014D080->unk520 = temp_s0_9;
                goto after_e06_second;
            }
            D_8014D080->unk520 = temp_s0_9;
        }
        func_80298310(1, 0xE06, 0, 0, 0);
    }
after_e06_second:
    if (((volatile func_80299368_S1 *)D_8014D080)->unk4 != -1) {
        temp_v0_15 = D_8014D080->callback;
        if (temp_v0_15 != NULL) {
            temp_s0_10 = D_8014D080->unk520;
            D_8014D080->unk520 = 0;
            temp_v0_15(0xE07, 0, 0, 0);
            callback_status = D_8014D080->unk520;
            if (callback_status == 1) {
                D_8014D080->unk520 = temp_s0_10;
                goto after_e07_second;
            }
            D_8014D080->unk520 = temp_s0_10;
        }
        func_80298310(1, 0xE07, 0, 0, 0);
    }
after_e07_second:
    if (func_8029A958() != arg0) {
        D_8014D080->unk540 = 0;
        return;
    }
block_78:
    D_8014D080->unk530 = 1;
    if (var_s5 != 0) {
        regpart_temp_v0_2 = MENU_LAST_DATA;
        temp_a1_2 = var_s1->unk44;
        if (regpart_temp_v0_2 != temp_a1_2) {
            /* FAKEMATCH: keep this pointer assignment explicit for the remaining allocation search. */
            temp_a0 = D_8014D080;
            temp_a0->unkC[temp_a0->unk4].focus = temp_a1_2;
        }
    }
    temp_a0_7 = D_8014D080->unkC[D_8014D080->unk4].focus;
    if ((temp_a0_7 != NULL) && ((temp_s1_2 = temp_a0_7->unkC, (func_80411E70((s32) temp_s1_2) == 0)) || (temp_s1_2 == D_8014D080->unkC[D_8014D080->unk4].id)) && ((focus_index_final = D_8014D080->unk4), (temp_s1_2 != D_8014D080->unk528)) && (focus_index_final != -1)) {
        temp_v0_16 = D_8014D080->callback;
        if (temp_v0_16 != NULL) {
            temp_s0_11 = D_8014D080->unk520;
            D_8014D080->unk520 = 0;
            temp_v0_16(0xF, 0, 0, 0);
            callback_status = D_8014D080->unk520;
            if (callback_status == 1) {
                D_8014D080->unk520 = temp_s0_11;
                goto after_focus;
            }
            D_8014D080->unk520 = temp_s0_11;
        }
        if (temp_s1_2 == (((func_80299368_S16 *)(D_8014D080->unkC[D_8014D080->unk4].object))->unkC)) {
            func_80298A34(0xF, 0, 0, 0);
        } else {
            func_80297E3C(temp_s1_2, 0xF, 0, 0, 0);
        }
    }
after_focus:
    if (D_8014D080->unk4 != -1) {
        temp_v0_17 = D_8014D080->callback;
        if (temp_v0_17 != NULL) {
            temp_s0_12 = D_8014D080->unk520;
            D_8014D080->unk520 = 0;
            temp_v0_17(0xE08, 0, 0, 0);
            callback_status = D_8014D080->unk520;
            if (callback_status == 1) {
                D_8014D080->unk520 = temp_s0_12;
                goto after_e08;
            }
            D_8014D080->unk520 = temp_s0_12;
        }
        temp_f2 = (s32)(func_802A28CC() * MENU_TIME_SCALE);
        func_80298310(1, 0xE08, temp_f2 - D_8014D080->unk524, temp_f2, 0);
    }
after_e08:
}

#endif

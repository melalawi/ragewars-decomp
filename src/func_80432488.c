#ifdef NON_MATCHING
/* Updates the selected player's setup panel and its linked controls. */
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
int func_80264634(int);
u8 * func_802A125C(u8 *, u8 *);
void func_802A338C(void);
void func_8040E958(void *, int);
void func_8040E9A8(void *, int);
void * func_8040ECB0(void *, unsigned short);
char * func_80411DF8(s32);
void func_8041B768(void *, s32, s32);
void func_8041B834(void *, s32, s32);
s32 func_8041B87C(void *, s32);
void func_8041B95C(void *, s32, void *);
void func_8042EB94(char *, char *, char *);
void func_80433AF0(s32);
void func_80433DA8(s32);
void func_8043407C(s32);
void func_80434E08(s32);
s32 func_80435704(void);
void func_80435958(s32);
void func_8043C458(s32 *);
M2C_UNK func_80433F14();                         /* extern */
#if defined(VERSION_US)
extern int jtbl_800DCA80;
extern int jtbl_800DCAF8;
extern s8 D_800DCA78[8];
#define PANEL_FORMAT D_800DCA78
#elif defined(VERSION_EU)
extern int jtbl_800EE450;
extern int jtbl_800EE4C8;
extern s8 D_800EE448[8];
#define PANEL_FORMAT D_800EE448
#elif defined(VERSION_EU_X)
extern int jtbl_800E9610;
extern int jtbl_800E9688;
extern s8 D_800E9608[8];
#define PANEL_FORMAT D_800E9608
#elif defined(VERSION_DE)
extern int jtbl_800DDDD0;
extern int jtbl_800DDE48;
extern s8 D_800DDDC8[8];
#define PANEL_FORMAT D_800DDDC8
#else
extern int jtbl_800E1E00;
extern int jtbl_800E1E78;
extern s8 D_800E1DF8[8];
#define PANEL_FORMAT D_800E1DF8
#endif
extern s32 D_800E3510;
extern s32 D_800E3514;
#if defined(VERSION_DE)
#define SETUP_LABEL_ID 0x281
#define PANEL_ROOT_ID 0x2E1
#define PANEL_TEXT_ID 0x2E3
#define MODE_DEFAULT_ID 0x35E
#define MODE_17_ID 0x362
#define MODE_2_ID 0x360
#define MODE_3_ID 0x361
#define MODE_46_ID 0x363
#define MODE_5_ID 0x35F
#define MODE_HIDE_ID 0x2E2
#define SLOT_DEFAULT_ID 0x28C
#define SLOT_1_ID 0x28E
#define SLOT_2_ID 0x290
#define SLOT_3_ID 0x292
#define CHECK_0_ID 0x296
#define CHECK_1_ID 0x298
#define CHECK_2_ID 0x29A
#define CHECK_DEFAULT_ID 0x29C
#elif defined(VERSION_EU_X)
#define SETUP_LABEL_ID 0x28A
#define PANEL_ROOT_ID 0x2D1
#define PANEL_TEXT_ID 0x2D3
#define MODE_DEFAULT_ID 0x36D
#define MODE_17_ID 0x371
#define MODE_2_ID 0x36F
#define MODE_3_ID 0x370
#define MODE_46_ID 0x372
#define MODE_5_ID 0x36E
#define MODE_HIDE_ID 0x2D2
#define SLOT_DEFAULT_ID 0x294
#define SLOT_1_ID 0x296
#define SLOT_2_ID 0x298
#define SLOT_3_ID 0x29A
#define CHECK_0_ID 0x29F
#define CHECK_1_ID 0x2A1
#define CHECK_2_ID 0x2A3
#define CHECK_DEFAULT_ID 0x2A5
#else
#define SETUP_LABEL_ID 0x285
#define PANEL_ROOT_ID 0x2C1
#define PANEL_TEXT_ID 0x2C5
#define MODE_DEFAULT_ID 0x344
#define MODE_17_ID 0x348
#define MODE_2_ID 0x346
#define MODE_3_ID 0x347
#define MODE_46_ID 0x349
#define MODE_5_ID 0x345
#define MODE_HIDE_ID 0x2C4
#define SLOT_DEFAULT_ID 0x28B
#define SLOT_1_ID 0x28D
#define SLOT_2_ID 0x28F
#define SLOT_3_ID 0x291
#define CHECK_0_ID 0x299
#define CHECK_1_ID 0x29B
#define CHECK_2_ID 0x29D
#define CHECK_DEFAULT_ID 0x29F
#endif
typedef struct func_80432488_S1 func_80432488_S1;
typedef struct func_80432488_S2 func_80432488_S2;
typedef struct func_80432488_S3 func_80432488_S3;
typedef struct func_80432488_S4 func_80432488_S4;
typedef struct func_80432488_S5 func_80432488_S5;
typedef struct func_80432488_S6 func_80432488_S6;
typedef struct func_80432488_S7 func_80432488_S7;
typedef struct func_80432488_S8 func_80432488_S8;
typedef struct func_80432488_S9 func_80432488_S9;
typedef struct func_80432488_S10 func_80432488_S10;
typedef struct func_80432488_S11 func_80432488_S11;
typedef struct {
    u32 state;
    char pad4[0x8];
    void *panel;
    void *root;
    char pad14[0x4];
    char rosterNames[0x668];
    char rosterDetails[0xB34 - 0x680];
    char chars[0x10];
    s32 valueB44;
    s32 valueB48;
    s32 valueB4C;
    char textB50[0xB68 - 0xB50];
} PanelRecordView;
struct func_80432488_S1 {
    union {
        struct {
            void* unk0;
            void* unk4;
            s32 unk8;
            u8 unkC;
            char padC[0x47];
            u32 unk54;
            char pad54[0x2DA0];
            s32 unk2DF8;
            s32 unk2DFC;
            s32 unk2E00;
        } f;
        u8 bytes[0x2E04];
        struct {
            char pad0[0x58];
            PanelRecordView players[4];
        } panelView;
    } v;
};
struct func_80432488_S2 {
    char pad0[0x34];
    s32 unk34;
    void* unk38;
};
struct func_80432488_S3 {
    char unk0[1];
};
struct func_80432488_S4 {
    char pad0[0x64];
    void* unk64;
    char pad64[0xADC];
    s32 unkB44;
};
struct func_80432488_S5 {
    char pad0[0x38];
    void* unk38;
};
struct func_80432488_S6 {
    char pad0[0x64];
    void* unk64;
    char pad64[0xAC8];
    s32 unkB30;
};
struct func_80432488_S7 {
    char pad0[0x38];
    void* unk38;
};
struct func_80432488_S8 {
    char pad0[0xBA0];
    s32 unkBA0;
    s32 unkBA4;
};
struct func_80432488_S9 {
    char pad0[0x8];
    func_80432488_S10 * unk8;
    char pad8[0x4];
    u8 unk10;
    char pad10[0x27];
    void* unk38;
};
struct func_80432488_S10 {
    char pad0[0x38];
    void* unk38;
};
struct func_80432488_S11 {
    char pad0[0x64];
    void* unk64;
    char pad64[0xB1C];
    s32 unkB84;
};

typedef struct {
    char pad0[0x58];
    u32 state;
    char pad5C[0x8];
    void *panel;
    void *root;
    char pad6C[0x4];
    char slot70[0x668];
    char slot6D8[0x4B4];
    s8 chars[2];
    char padB8E[0xE];
    s32 valueB9C;
    char padBA0[0x8];
    char textBA8[1];
} PlayerPanel;

extern func_80432488_S1 *D_800E54A4;

#if defined(VERSION_DE)
#define UI_CASE_1_2EC 0x2CF
#define UI_CASE_1_2EE 0x2D1
#elif defined(VERSION_EU_X)
#define UI_CASE_1_2EC 0x2E8
#define UI_CASE_1_2EE 0x2EA
#else
#define UI_CASE_1_2EC 0x2EC
#define UI_CASE_1_2EE 0x2EE
#endif

#if defined(VERSION_DE)
#define UI_CASE_2_2D4 0x2A0
#elif defined(VERSION_EU_X)
#define UI_CASE_2_2D4 0x2D0
#else
#define UI_CASE_2_2D4 0x2D4
#endif

#if defined(VERSION_DE)
#define UI_CASE_3_2BB 0x2D5
#define UI_CASE_3_2BC 0x2D7
#elif defined(VERSION_EU_X)
#define UI_CASE_3_2BB 0x2DC
#define UI_CASE_3_2BC 0x2DD
#else
#define UI_CASE_3_2BB 0x2BB
#define UI_CASE_3_2BC 0x2BC
#endif

#if defined(VERSION_DE)
#define UI_CASE_4_2D5 0x2E6
#define UI_CASE_4_2DA 0x2E8
#elif defined(VERSION_EU_X)
#define UI_CASE_4_2D5 0x2EE
#define UI_CASE_4_2DA 0x2F5
#else
#define UI_CASE_4_2D5 0x2D5
#define UI_CASE_4_2DA 0x2DA
#endif

#if defined(VERSION_DE)
#define UI_CASE_6_2E4 0x2A9
#define UI_CASE_6_2E8 0x2AF
#elif defined(VERSION_EU_X)
#define UI_CASE_6_2E4 0x2C5
#define UI_CASE_6_2E8 0x2C9
#else
#define UI_CASE_6_2E4 0x2E4
#define UI_CASE_6_2E8 0x2E8
#endif

#if defined(VERSION_DE)
#define UI_CASE_7_2CA 0x2EF
#define UI_CASE_7_2CC 0x2F1
#define UI_CASE_7_2CB 0x2F2
#elif defined(VERSION_EU_X)
#define UI_CASE_7_2CA 0x2E4
#define UI_CASE_7_2CC 0x2E5
#define UI_CASE_7_2CB 0x2E3
#else
#define UI_CASE_7_2CA 0x2CA
#define UI_CASE_7_2CC 0x2CC
#define UI_CASE_7_2CB 0x2CB
#endif

#if defined(VERSION_DE)
#define UI_CASE_8_2CE 0x2F3
#define UI_CASE_8_2CF 0x2F5
#define UI_CASE_8_2CB 0x2F2
#elif defined(VERSION_EU_X)
#define UI_CASE_8_2CE 0x2E0
#define UI_CASE_8_2CF 0x2E1
#define UI_CASE_8_2CB 0x2E3
#else
#define UI_CASE_8_2CE 0x2CE
#define UI_CASE_8_2CF 0x2CF
#define UI_CASE_8_2CB 0x2CB
#endif

#if defined(VERSION_DE)
#define UI_CASE_9_2C6 0x2B0
#define UI_CASE_9_2C8 0x2B2
#define UI_CASE_9_2C7 0x2B3
#elif defined(VERSION_EU_X)
#define UI_CASE_9_2C6 0x2A9
#define UI_CASE_9_2C8 0x2AC
#define UI_CASE_9_2C7 0x2AA
#else
#define UI_CASE_9_2C6 0x2C6
#define UI_CASE_9_2C8 0x2C8
#define UI_CASE_9_2C7 0x2C7
#endif

#if defined(VERSION_DE)
#define UI_CASE_10_2A4 0x2C6
#elif defined(VERSION_EU_X)
#define UI_CASE_10_2A4 0x2AD
#else
#define UI_CASE_10_2A4 0x2A4
#endif

#if defined(VERSION_DE)
#define UI_CASE_11_2D1 0x2D2
#define UI_CASE_11_2D2 0x2D3
#elif defined(VERSION_EU_X)
#define UI_CASE_11_2D1 0x2D6
#define UI_CASE_11_2D2 0x2D8
#else
#define UI_CASE_11_2D1 0x2D1
#define UI_CASE_11_2D2 0x2D2
#endif

#if defined(VERSION_DE)
#define UI_CASE_12_2F2 0x2D9
#define UI_CASE_12_2F3 0x2DA
#elif defined(VERSION_EU_X)
#define UI_CASE_12_2F2 0x2B1
#define UI_CASE_12_2F3 0x2B2
#else
#define UI_CASE_12_2F2 0x2F2
#define UI_CASE_12_2F3 0x2F3
#endif

#if defined(VERSION_DE)
#define UI_CASE_13_2AF 0x2C7
#define UI_CASE_13_2B6 0x2CE
#elif defined(VERSION_EU_X)
#define UI_CASE_13_2AF 0x2F7
#define UI_CASE_13_2B6 0x2FE
#else
#define UI_CASE_13_2AF 0x2AF
#define UI_CASE_13_2B6 0x2B6
#endif

#if defined(VERSION_DE)
#define UI_CASE_17_2A5 0x2C2
#elif defined(VERSION_EU_X)
#define UI_CASE_17_2A5 0x2E7
#else
#define UI_CASE_17_2A5 0x2A5
#endif

#if defined(VERSION_DE)
#define UI_CASE_15_2EF 0x2C3
#define UI_CASE_15_2F1 0x2C5
#elif defined(VERSION_EU_X)
#define UI_CASE_15_2EF 0x2EB
#define UI_CASE_15_2F1 0x2ED
#else
#define UI_CASE_15_2EF 0x2EF
#define UI_CASE_15_2F1 0x2F1
#endif

#if defined(VERSION_DE)
#define UI_CASE_16_2B7 0x2B4
#define UI_CASE_16_2B9 0x2B5
#define UI_CASE_16_2BA 0x2AA
#elif defined(VERSION_EU_X)
#define UI_CASE_16_2B7 0x2C1
#define UI_CASE_16_2B9 0x2C3
#define UI_CASE_16_2BA 0x2C2
#else
#define UI_CASE_16_2B7 0x2B7
#define UI_CASE_16_2B9 0x2B9
#define UI_CASE_16_2BA 0x2BA
#endif

#if defined(VERSION_DE)
#define UI_CASE_21_2E1 0x2A6
#define UI_CASE_21_2E2 0x2A8
#elif defined(VERSION_EU_X)
#define UI_CASE_21_2E1 0x2D9
#define UI_CASE_21_2E2 0x2DB
#else
#define UI_CASE_21_2E1 0x2E1
#define UI_CASE_21_2E2 0x2E2
#endif

#if defined(VERSION_DE)
#define UI_CASE_23_2AC 0x2B7
#define UI_CASE_23_2AE 0x2B9
#elif defined(VERSION_EU_X)
#define UI_CASE_23_2AC 0x2BE
#define UI_CASE_23_2AE 0x2C0
#else
#define UI_CASE_23_2AC 0x2AC
#define UI_CASE_23_2AE 0x2AE
#endif

#if defined(VERSION_DE)
#define UI_CASE_24_2A9 0x2BC
#define UI_CASE_24_2AA 0x2BD
#elif defined(VERSION_EU_X)
#define UI_CASE_24_2A9 0x2AE
#define UI_CASE_24_2AA 0x2AF
#else
#define UI_CASE_24_2A9 0x2A9
#define UI_CASE_24_2AA 0x2AA
#endif

#if defined(VERSION_DE)
#define UI_CASE_25_2EA 0x2BA
#define UI_CASE_25_2EB 0x2BB
#elif defined(VERSION_EU_X)
#define UI_CASE_25_2EA 0x2BC
#define UI_CASE_25_2EB 0x2BD
#else
#define UI_CASE_25_2EA 0x2EA
#define UI_CASE_25_2EB 0x2EB
#endif

#if defined(VERSION_DE)
#define UI_CASE_26_2A6 0x2BF
#define UI_CASE_26_2A7 0x2C0
#elif defined(VERSION_EU_X)
#define UI_CASE_26_2A6 0x2B9
#define UI_CASE_26_2A7 0x2BA
#else
#define UI_CASE_26_2A6 0x2A6
#define UI_CASE_26_2A7 0x2A7
#endif

#if defined(VERSION_DE)
#define UI_CASE_28_2DE 0x2A1
#define UI_CASE_28_2DF 0x2A2
#elif defined(VERSION_EU_X)
#define UI_CASE_28_2DE 0x2CD
#define UI_CASE_28_2DF 0x2CF
#else
#define UI_CASE_28_2DE 0x2DE
#define UI_CASE_28_2DF 0x2DF
#endif

#if defined(VERSION_DE)
#define UI_CASE_29_2BF 0x2A4
#define UI_CASE_29_2C0 0x2A5
#elif defined(VERSION_EU_X)
#define UI_CASE_29_2BF 0x2CB
#define UI_CASE_29_2C0 0x2CC
#else
#define UI_CASE_29_2BF 0x2BF
#define UI_CASE_29_2C0 0x2C0
#endif

#define FIELD_OFFSET(type, field) ((s32)&((type *)0)->field)

void func_80432488(s32 arg0) {
    s32 temp_s0;
    s32 temp_s0_10;
    /* FAKEMATCH: the character editor reuses the shared panel offset to raise its allocation priority. */
    s32 character_initial_offset; /* FAKEMATCH: split character panel construction from the later loop lifetime. */
    s32 temp_s0_12;
    s32 temp_s0_13;
    s32 temp_s0_14;
    s32 temp_s0_15;
    s32 temp_s0_16;
    s32 temp_s0_17;
    s32 temp_s0_18;
    s32 temp_s0_19;
    s32 temp_s0_20;
    s32 temp_s0_21;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_s0_7;
    s32 temp_s0_8;
    s32 temp_s0_9;
    s32 temp_s1_2;
    s32 temp_s2; /* FAKEMATCH: share the case-0 text node and offset with both later counters; case-0 local conflicts reserve their target s2. */
    s32 temp_v0_15;
    s32 slot_active;
    s32 character_panel_cursor; /* FAKEMATCH: separate the character-control offset live range from formatting. */
    s32 character_sentinel; /* FAKEMATCH: stage the linked-control flag before its cursor arithmetic. */
    s32 first_letter; /* FAKEMATCH: stage the initial character before resetting its cursor. */
    s32 var_a0;
    s32 var_a0_5;
    s32 var_s0;
    s32 case2_offset; /* FAKEMATCH: isolate the case-2 offset in a local allocation quantity. */
    s32 case7_offset; /* FAKEMATCH: split the roster offset lifetime at the switch arm. */
    s32 case16_offset; /* FAKEMATCH: keep the second roster arm offset in its own local allocation quantity. */
    s32 var_s0_2; /* FAKEMATCH: isolate the shared panel-only tail from the roster and character loops. */
    /* FAKEMATCH: reuse the character offset for both slot labels; the shared s2 counter now excludes s0, so this raises the offset priority safely. */
    s32 var_s1;
    s32 var_s1_2;
    s32 var_v0;
    s32 var_v1_2;
    s8 *temp_s1;
    s8 *temp_copy_source;
    u16 var_a1;
    u16 var_a1_2;
    u16 var_a1_3;
    u32 temp_v1;
    u32 temp_v1_2;
    u32 temp_v1_4;
    void *temp_a0;
    void *temp_v0;
    void *temp_v0_10;
    func_80432488_S6 *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_13;
    void *temp_v0_14;
    void *temp_v0_16;
    void *temp_v0_17;
    void *temp_v0_18;
    void *temp_v0_19;
    func_80432488_S11 *temp_v0_20;
    void *temp_v0_21;
    void *temp_v0_22;
    void *temp_v0_23;
    void *temp_v0_24;
    void *temp_v0_25;
    void *temp_v0_26;
    void *temp_v0_27;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    func_80432488_S4 *temp_v0_9;
    func_80432488_S8 *temp_v1_3;
    void *var_a0_2;
    void *var_a0_3;
    void *var_a0_4;
    func_80432488_S9 *var_s1_3;
    func_80432488_S1 *var_v1;

    temp_s0 = arg0 * 0xB68;
    temp_a0 = D_800E54A4->v.panelView.players[arg0].panel;
    if (temp_a0 != NULL) {
        func_8040E958(temp_a0, 0);
    }
    func_8040E9A8(func_8041B87C(D_800E54A4->v.f.unk4, arg0), 0);
    func_8041B768(D_800E54A4->v.f.unk0, arg0, SETUP_LABEL_ID);
    temp_v1 = D_800E54A4->v.panelView.players[arg0].state;
    switch (temp_v1) {                              /* switch 1 */
    case 0:                                         /* switch 1 */
        temp_s0_2 = arg0 * 0xB68;
        temp_v0 = func_8040ECB0(D_800E54A4->v.panelView.players[arg0].root, PANEL_ROOT_ID);
        D_800E54A4->v.panelView.players[arg0].panel = temp_v0;
        func_8040E958(temp_v0, 1);
        temp_s2 = (s32)func_8040ECB0(D_800E54A4->v.panelView.players[arg0].panel, PANEL_TEXT_ID);
        ((func_80432488_S2 *)temp_s2)->unk38 = D_800E54A4->v.panelView.players[arg0].textB50;
        temp_v1_2 = D_800E54A4->v.f.unk54;
        switch (temp_v1_2) {                        /* switch 2 */
        case 1:                                     /* switch 2 */
        case 7:                                     /* switch 2 */
            var_a0 = MODE_17_ID;
            break;
        case 2:                                     /* switch 2 */
            var_a0 = MODE_2_ID;
            break;
        case 3:                                     /* switch 2 */
            var_a0 = MODE_3_ID;
            break;
        case 4:                                     /* switch 2 */
        case 6:                                     /* switch 2 */
            var_a0 = MODE_46_ID;
            break;
        case 5:                                     /* switch 2 */
            var_a0 = MODE_5_ID;
            break;
        case 0:                                     /* switch 2 */
        default:                                    /* switch 2 */
            var_a0 = MODE_DEFAULT_ID;
            break;
        }
        temp_s1 = func_80411DF8(var_a0);
        temp_copy_source = func_80411DF8(((func_80432488_S2 *)temp_s2)->unk34);
        temp_s2 = arg0 * 0xB68;
        temp_s0_3 = temp_s2 + FIELD_OFFSET(PlayerPanel, state);
        func_802A125C(((PanelRecordView *)&D_800E54A4->v.bytes[temp_s0_3])->textB50, temp_copy_source);
        func_8042EB94(((PanelRecordView *)&D_800E54A4->v.bytes[temp_s0_3])->textB50, PANEL_FORMAT, temp_s1);
        var_v0 = arg0 * 8;
        if (D_800E54A4->v.f.unk54 == 6) {
            func_8040E958(func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s2])->panel, MODE_HIDE_ID), 0);
            var_v0 = arg0 * 8;
        }
        break;
    case 1:                                         /* switch 1 */
        temp_s0_4 = arg0 * 0xB68;
        temp_v0_3 = func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_4])->root, UI_CASE_1_2EC);
        ((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_4])->panel = temp_v0_3;
        func_8040E958(temp_v0_3, 1);
        func_8041B95C(D_800E54A4->v.f.unk4, arg0, func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_4])->panel, UI_CASE_1_2EE));
        var_v0 = arg0 * 8;
        break;
    case 2:                                         /* switch 1 */
        case2_offset = arg0 * 0xB68;
        var_a0_3 = ((PlayerPanel *)&D_800E54A4->v.bytes[case2_offset])->root;
        var_a1_2 = UI_CASE_2_2D4;
block_36:
        temp_v0_4 = func_8040ECB0(var_a0_3, var_a1_2);
        ((PlayerPanel *)&D_800E54A4->v.bytes[case2_offset])->panel = temp_v0_4;
        func_8040E958(temp_v0_4, 1);
        var_v0 = arg0 * 8;
        break;
    case 3:                                         /* switch 1 */
        temp_s0_5 = arg0 * 0xB68;
        temp_v0_5 = func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_5])->root, UI_CASE_3_2BB);
        ((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_5])->panel = temp_v0_5;
        func_8040E958(temp_v0_5, 1);
        func_8041B95C(D_800E54A4->v.f.unk4, arg0, func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_5])->panel, UI_CASE_3_2BC));
        break;
    case 4:                                         /* switch 1 */
        temp_s0_6 = arg0 * 0xB68;
        temp_v0_6 = func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_6])->root, UI_CASE_4_2D5);
        ((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_6])->panel = temp_v0_6;
        func_8040E958(temp_v0_6, 1);
        func_8041B95C(D_800E54A4->v.f.unk4, arg0, func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_6])->panel, UI_CASE_4_2DA));
        func_8043407C(arg0);
        var_v0 = arg0 * 8;
        break;
    case 22:                                        /* switch 1 */
        func_8040E958(D_800E54A4->v.panelView.players[arg0].panel, 1);
        var_v1 = D_800E54A4;
        var_s1 = 0;
        if (var_v1->v.f.unk2E00 == 0) {
            do {
                var_v1 = (void *)&var_v1->v.f.unkC;
                var_s1 += 1;
            } while (var_v1->v.f.unk2E00 == 0);
        }
        var_s0 = SLOT_DEFAULT_ID;
        if (var_s1 == 1) {
            goto case22_one;
        }
        if (var_s1 >= 2) {
            goto case22_check_two;
        }
        if (var_s1 == 0) {
            goto case22_selected;
        }
        goto case22_default;
case22_check_two:
        if (var_s1 == 2) {
            goto case22_two;
        }
case22_check_three:
        if (var_s1 == 3) {
            goto case22_three;
        }
case22_default:
        var_s0 = SLOT_DEFAULT_ID;
        goto case22_selected;
case22_one:
        var_s0 = SLOT_1_ID;
        goto case22_selected;
case22_two:
        var_s0 = SLOT_2_ID;
        goto case22_selected;
case22_three:
        var_s0 = SLOT_3_ID;
case22_selected:
        func_8041B768(D_800E54A4->v.f.unk0, arg0, var_s0);
        func_80433DA8(arg0);
        var_v0 = arg0 * 8;
        break;
    case 6:                                         /* switch 1 */
        temp_s0_7 = arg0 * 0xB68;
        temp_v0_7 = func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_7])->root, UI_CASE_6_2E4);
        ((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_7])->panel = temp_v0_7;
        func_8040E958(temp_v0_7, 1);
        func_8041B95C(D_800E54A4->v.f.unk4, arg0, func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_7])->panel, UI_CASE_6_2E8));
        func_80434E08(arg0);
        var_v0 = arg0 * 8;
        break;
    case 7:                                         /* switch 1 */
        case7_offset = arg0 * 0xB68;
        temp_v0_8 = func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[case7_offset])->root, UI_CASE_7_2CA);
        ((PlayerPanel *)&D_800E54A4->v.bytes[case7_offset])->panel = temp_v0_8;
        func_8040E958(temp_v0_8, 1);
        func_8041B95C(D_800E54A4->v.f.unk4, arg0, func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[case7_offset])->panel, UI_CASE_7_2CC));
        temp_v0_9 = ((void *)&D_800E54A4->v.bytes[case7_offset]);
        var_a0_4 = temp_v0_9->unk64;
        var_s1_2 = temp_v0_9->unkB44;
        var_a1_3 = UI_CASE_7_2CB;
        /* FAKEMATCH: keep the case-7 offset local through its own tail; the compiler merges the common code. */
        case7_offset += FIELD_OFFSET(PlayerPanel, state);
        (((func_80432488_S5 *)(func_8040ECB0(var_a0_4, var_a1_3)))->unk38) = &((PanelRecordView *)&D_800E54A4->v.bytes[case7_offset])->rosterNames[var_s1_2 * 0x190];
        goto block_84;
    case 8:                                         /* switch 1 */
        temp_s0_8 = arg0 * 0xB68;
        temp_v0_10 = func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_8])->root, UI_CASE_8_2CE);
        ((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_8])->panel = temp_v0_10;
        func_8040E958(temp_v0_10, 1);
        func_8041B95C(D_800E54A4->v.f.unk4, arg0, func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_8])->panel, UI_CASE_8_2CF));
        temp_v0_11 = ((void *)&D_800E54A4->v.bytes[temp_s0_8]);
        temp_s1_2 = temp_v0_11->unkB30;
        temp_v0_10 = func_8040ECB0(temp_v0_11->unk64, UI_CASE_8_2CB);
        temp_s0_8 += FIELD_OFFSET(PlayerPanel, state);
        ((func_80432488_S7 *)temp_v0_10)->unk38 = (void *)(temp_s1_2 * 0x46 + (s32)((PanelRecordView *)&D_800E54A4->v.bytes[temp_s0_8]) + FIELD_OFFSET(PanelRecordView, rosterDetails));
        goto block_84;
    case 9:                                         /* switch 1 */
        temp_s0_9 = arg0 * 0xB68;
        temp_v0_12 = func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_9])->root, UI_CASE_9_2C6);
        ((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_9])->panel = temp_v0_12;
        func_8040E958(temp_v0_12, 1);
        func_8041B95C(D_800E54A4->v.f.unk4, arg0, func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_9])->panel, UI_CASE_9_2C8));
        ((func_80432488_S5 *)func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_9])->panel, UI_CASE_9_2C7))->unk38 = &D_800E54A4->v.panelView.players[D_800E54A4->v.f.unk2DF8].rosterNames[D_800E54A4->v.f.unk2DFC * 0x190];
        goto block_84;
    case 10:                                        /* switch 1 */
        var_s0_2 = arg0 * 0xB68;
        temp_v0_4 = func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[var_s0_2])->root, UI_CASE_10_2A4);
        ((PlayerPanel *)&D_800E54A4->v.bytes[var_s0_2])->panel = temp_v0_4;
        func_8040E958(temp_v0_4, 1);
        var_v0 = arg0 * 8;
        break;
    case 11:                                        /* switch 1 */
        temp_s0_10 = arg0 * 0xB68;
        temp_v0_13 = func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_10])->root, UI_CASE_11_2D1);
        ((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_10])->panel = temp_v0_13;
        func_8040E958(temp_v0_13, 1);
        func_8041B95C(D_800E54A4->v.f.unk4, arg0, func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_10])->panel, UI_CASE_11_2D2));
        break;
    case 12:                                        /* switch 1 */
        character_initial_offset = arg0 * 0xB68;
        temp_v0_14 = func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[character_initial_offset])->root, UI_CASE_12_2F2);
        ((PlayerPanel *)&D_800E54A4->v.bytes[character_initial_offset])->panel = temp_v0_14;
        func_8040E958(temp_v0_14, 1);
        temp_s2 = 0;
        var_s1_3 = func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[character_initial_offset])->panel, UI_CASE_12_2F3);
        func_8041B95C(D_800E54A4->v.f.unk4, arg0, var_s1_3);
        var_s0 = character_initial_offset; /* FAKEMATCH: hand the local construction offset to the shared loop offset after the calls. */
        first_letter = 0x41;
        D_800E54A4->v.panelView.players[arg0].valueB44 = 0;
        var_v1_2 = var_s0;
        do {
            if (temp_s2 == 0) {
                ((PlayerPanel *)&D_800E54A4->v.bytes[var_s0])->chars[0] = first_letter;
            } else {
                ((PlayerPanel *)&D_800E54A4->v.bytes[var_v1_2])->chars[0] = 0;
            }
            temp_s2 += 1;
            ((PlayerPanel *)&D_800E54A4->v.bytes[var_v1_2])->chars[1] = 0;
            var_v1_2 += 2;
        } while (temp_s2 < 7);
        character_sentinel = 0xFF;
        temp_v0_15 = arg0 * 0xB68;
        character_panel_cursor = temp_v0_15 + FIELD_OFFSET(PlayerPanel, state);
        temp_v1_3 = ((void *)&D_800E54A4->v.bytes[temp_v0_15]);
        D_800E54A4->v.panelView.players[arg0].valueB4C = 0;
        D_800E54A4->v.panelView.players[arg0].valueB48 = 2;
        var_a0_5 = FIELD_OFFSET(PanelRecordView, chars);
        do {
            var_s1_3->unk10 = character_sentinel;
            temp_s2 = (s32)var_s1_3->unk8; /* FAKEMATCH: reuse the dead s2 loop counter for the linked text node, matching the target node load. */
            ((func_80432488_S10 *)temp_s2)->unk38 = &((PanelRecordView *)&D_800E54A4->v.bytes[character_panel_cursor])->chars[var_a0_5 - FIELD_OFFSET(PanelRecordView, chars)];
            var_s1_3 = var_s1_3->unk38;
            var_a0_5 += 2;
        } while (var_s1_3 != NULL);
        var_v0 = arg0 * 8;
        break;
    case 13:                                        /* switch 1 */
        temp_s0_12 = arg0 * 0xB68;
        temp_v0_16 = func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_12])->root, UI_CASE_13_2AF);
        ((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_12])->panel = temp_v0_16;
        func_8040E958(temp_v0_16, 1);
        func_8041B95C(D_800E54A4->v.f.unk4, arg0, func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_12])->panel, UI_CASE_13_2B6));
        func_80433AF0(arg0);
        var_v0 = arg0 * 8;
        break;
    case 14:                                        /* switch 1 */
    case 17:                                        /* switch 1 */
        func_8041B768(D_800E54A4->v.f.unk0, arg0, SETUP_LABEL_ID);
        func_8041B834(D_800E54A4->v.f.unk4, arg0, 1);
        temp_s0_13 = arg0 * 0xB68;
        temp_v0_17 = func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_13])->root, UI_CASE_17_2A5);
        ((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_13])->panel = temp_v0_17;
        func_8040E958(temp_v0_17, 1);
        if (func_80435704() == 0) {
            temp_v1_4 = D_800E54A4->v.f.unk54;
            if (temp_v1_4 == 4) {
                goto mode_default;
            }
            if ((s32)temp_v1_4 < 5) {
                goto mode_default;
            }
            if (temp_v1_4 == 5) {
                goto mode_five;
            }
            if (temp_v1_4 == 6) {
                goto mode_six;
            }
            goto mode_default;
mode_five:
            func_802A338C();
            func_8043C458(&D_800E54A4->v.f.unk8);
            goto mode_end;
mode_six:
            {
                func_80435958(0x1D);
                if (D_800E3514 == 1) {
                    D_800E3510 -= 1;
                }
                if (D_800E3514 == 0) {
                    D_800E3510 = -1;
                }
                goto mode_end;
            }
mode_default:
            func_80435958(0x1B);
mode_end:;
        }
        var_v0 = arg0 * 8;
        break;
    case 15:                                        /* switch 1 */
        temp_s0_14 = arg0 * 0xB68;
        temp_v0_18 = func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_14])->root, UI_CASE_15_2EF);
        ((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_14])->panel = temp_v0_18;
        func_8040E958(temp_v0_18, 1);
        func_8041B95C(D_800E54A4->v.f.unk4, arg0, func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_14])->panel, UI_CASE_15_2F1));
        break;
    case 16:                                        /* switch 1 */
        case16_offset = arg0 * 0xB68;
        temp_v0_19 = func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[case16_offset])->root, UI_CASE_16_2B7);
        ((PlayerPanel *)&D_800E54A4->v.bytes[case16_offset])->panel = temp_v0_19;
        func_8040E958(temp_v0_19, 1);
        func_8041B95C(D_800E54A4->v.f.unk4, arg0, func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[case16_offset])->panel, UI_CASE_16_2B9));
        var_a1_3 = UI_CASE_16_2BA;
        temp_v0_20 = ((void *)&D_800E54A4->v.bytes[case16_offset]);
        var_a0_4 = temp_v0_20->unk64;
        var_s1_2 = temp_v0_20->unkB84;
block_61:
        case16_offset += FIELD_OFFSET(PlayerPanel, state);
        (((func_80432488_S5 *)(func_8040ECB0(var_a0_4, var_a1_3)))->unk38) = &((PanelRecordView *)&D_800E54A4->v.bytes[case16_offset])->rosterNames[var_s1_2 * 0x190];
        goto block_84;
    case 21:                                        /* switch 1 */
        temp_s0_15 = arg0 * 0xB68;
        temp_v0_21 = func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_15])->root, UI_CASE_21_2E1);
        ((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_15])->panel = temp_v0_21;
        func_8040E958(temp_v0_21, 1);
        func_8041B95C(D_800E54A4->v.f.unk4, arg0, func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_15])->panel, UI_CASE_21_2E2));
        break;
    case 23:                                        /* switch 1 */
        temp_s0_16 = arg0 * 0xB68;
        temp_v0_22 = func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_16])->root, UI_CASE_23_2AC);
        ((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_16])->panel = temp_v0_22;
        func_8040E958(temp_v0_22, 1);
        func_8041B95C(D_800E54A4->v.f.unk4, arg0, func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_16])->panel, UI_CASE_23_2AE));
        break;
    case 24:                                        /* switch 1 */
        temp_s0_17 = arg0 * 0xB68;
        temp_v0_23 = func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_17])->root, UI_CASE_24_2A9);
        ((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_17])->panel = temp_v0_23;
        func_8040E958(temp_v0_23, 1);
        func_8041B95C(D_800E54A4->v.f.unk4, arg0, func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_17])->panel, UI_CASE_24_2AA));
        break;
    case 25:                                        /* switch 1 */
        temp_s0_18 = arg0 * 0xB68;
        temp_v0_24 = func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_18])->root, UI_CASE_25_2EA);
        ((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_18])->panel = temp_v0_24;
        func_8040E958(temp_v0_24, 1);
        func_8041B95C(D_800E54A4->v.f.unk4, arg0, func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_18])->panel, UI_CASE_25_2EB));
        break;
    case 26:                                        /* switch 1 */
        temp_s0_19 = arg0 * 0xB68;
        temp_v0_25 = func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_19])->root, UI_CASE_26_2A6);
        ((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_19])->panel = temp_v0_25;
        func_8040E958(temp_v0_25, 1);
        func_8041B95C(D_800E54A4->v.f.unk4, arg0, func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_19])->panel, UI_CASE_26_2A7));
        break;
case27_found:
        func_8041B768(D_800E54A4->v.f.unk0, arg0, var_s0);
        goto case27_done;
    case 27:                                        /* switch 1 */
        func_8040E958(D_800E54A4->v.panelView.players[arg0].panel, 1);
        temp_s2 = 0;
        var_s1 = 1; /* FAKEMATCH: retain the active flag for the slot checks. */
        func_8041B768(D_800E54A4->v.f.unk0, arg0, CHECK_0_ID);
        do {
loop_69:
        if (temp_s2 == var_s1) {
            goto case27_one;
        }
        if (temp_s2 >= 2) {
            goto case27_check_two;
        }
        if (temp_s2 == 0) {
            goto case27_zero;
        }
        var_s0 = CHECK_DEFAULT_ID;
        goto case27_selected;
case27_check_two:
        if (temp_s2 == 2) {
            goto case27_two;
        }
        var_s0 = CHECK_DEFAULT_ID;
        goto case27_selected;
case27_zero:
        var_s0 = CHECK_0_ID;
        goto case27_selected;
case27_one:
        var_s0 = CHECK_1_ID;
        goto case27_selected;
case27_two:
        var_s0 = CHECK_2_ID;
case27_selected:
        slot_active = func_80264634(temp_s2);
        temp_s2 += 1;
        if (slot_active == var_s1) {
            goto case27_found;
        }
        } while (temp_s2 < 4);
case27_done:
        func_80433F14(arg0);
        var_v0 = arg0 * 8;
        break;
    case 28:                                        /* switch 1 */
        temp_s0_20 = arg0 * 0xB68;
        temp_v0_26 = func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_20])->root, UI_CASE_28_2DE);
        ((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_20])->panel = temp_v0_26;
        func_8040E958(temp_v0_26, 1);
        func_8041B95C(D_800E54A4->v.f.unk4, arg0, func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_20])->panel, UI_CASE_28_2DF));
        break;
    case 29:                                        /* switch 1 */
        temp_s0_21 = arg0 * 0xB68;
        temp_v0_27 = func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_21])->root, UI_CASE_29_2BF);
        ((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_21])->panel = temp_v0_27;
        func_8040E958(temp_v0_27, 1);
        func_8041B95C(D_800E54A4->v.f.unk4, arg0, func_8040ECB0(((PlayerPanel *)&D_800E54A4->v.bytes[temp_s0_21])->panel, UI_CASE_29_2C0));
        var_v0 = arg0 * 8;
        break;
    default:                                        /* switch 1 */
block_84:
        var_v0 = arg0 * 8;
        break;
    }
    ((func_80432488_S9 *)D_800E54A4->v.panelView.players[arg0].panel)->unk10 = 0x96;
}

#endif

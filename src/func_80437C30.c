#ifdef NON_MATCHING
/* Initializes the results screen and records match results for the active player. */
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
/* The values func_80437C30 loads by address:
 * 0x800E1F40 = 0.06666667 (float, D_800E1F40 in this cartridge's tables; not a literal: a variable, its value in the image, since D_800E1F40: `addiu` at %lo(D_800E1F40) in func_8043847C.s)
 */
void * func_80252FFC(s32);
s32 func_80265670(s32, s32);
void func_802656A8(u8 *, s32, s32);
void func_8028D35C(void *, s32, void *, s32);
void * func_802A101C(void *, int, u32);
u8 * func_802A125C(u8 *, u8 *);
u8 * func_802A1494(u8 *);
s32 func_802A1C08(void *, s32, ...);
void func_802A338C(void);
void func_8040E958(void *, int);
void func_8040E9D0(void *, int);
void * func_8040ECB0(void *, unsigned short);
void func_8041B190(s32);
s32 func_8041F1B0(s32);
s32 func_804251F4(s32);
char * func_804255A8(s32);
s32 func_80425854(s32);
void func_80425BC0(s32);
void * func_80425E50(s32, s32, s32);
void func_80425EF4(s32);
void func_8043847C(void);
void func_804387F4(void);
void func_80438C68(void);
void func_8043C3F0(s32 *, s32, s32, s32, s32);
void func_8043C458(s32 *);
typedef struct { s8 state; s8 active; char pad[0x18E]; } func_80437C30_PlayerState;
extern func_80437C30_PlayerState D_80102B0D[];
extern struct { s8 value; char pad[0x190 - sizeof(s8)]; } D_80102B0E[];
extern struct { u8 value; char pad[0x190 - sizeof(u8)]; } D_80102B0F[];
extern struct { u8 value; char pad[0x190 - sizeof(u8)]; } D_80102B17[];
extern struct { u8 value; char pad[0x190 - sizeof(u8)]; } D_80102B4A[];
extern struct { u8 value; char pad[0x190 - sizeof(u8)]; } D_80102B54[];
extern struct { u8 value; char pad[0x190 - sizeof(u8)]; } D_80102B7D[];
extern struct { s32 value[100]; } D_80102B94[];
extern struct { u8 value; char pad[0x190 - sizeof(u8)]; } D_80102C24[];
extern u8 D_8011FE88;
extern u8 D_801462C8;
extern u8 D_80146398;
extern struct { s8 value; char pad[0x95]; } D_80146418[];
extern s32 D_80146894;
extern s32 D_80154028;
extern s32 D_8015402C;
extern f32 D_800E1F40[2];
extern struct { s32 *value; char pad[0x6C]; } D_800E3ABC[];
extern u8 *D_800E4680[4];
extern s32 *D_800E5830;
extern s32 D_800D75A4;                 /* const */
extern u8 *D_800D75A8;           /* const */
extern s32 D_800D75AC;                 /* const */
extern s32 D_800D75B4;                 /* const */
extern s32 D_800D75B8;                 /* const */
extern s32 D_800D75BC;                 /* const */
extern s32 D_800D75C0;                 /* const */
extern s32 D_800D75C4[4]; 
typedef struct func_80437C30_S1 func_80437C30_S1;
typedef struct func_80437C30_S2 func_80437C30_S2;
typedef struct func_80437C30_S3 func_80437C30_S3;
typedef struct func_80437C30_S4 func_80437C30_S4;
typedef struct func_80437C30_S5 func_80437C30_S5;
typedef struct func_80437C30_S6 func_80437C30_S6;
typedef struct func_80437C30_S7 func_80437C30_S7;
typedef struct func_80437C30_S8 func_80437C30_S8;
typedef struct func_80437C30_S9 func_80437C30_S9;
typedef struct func_80437C30_S10 func_80437C30_S10;
typedef struct func_80437C30_S11 func_80437C30_S11;
typedef struct func_80437C30_S12 func_80437C30_S12;
typedef struct func_80437C30_S13 func_80437C30_S13;
typedef struct func_80437C30_S14 func_80437C30_S14;
typedef struct func_80437C30_S15 func_80437C30_S15;
typedef struct func_80437C30_S16 func_80437C30_S16;
typedef struct func_80437C30_S17 func_80437C30_S17;
typedef union func_80437C30_S2_U50 { u8 v0; s32 v1; } func_80437C30_S2_U50;
typedef union func_80437C30_S2_U18C { s8 v0; u8 v1; s32 v2; } func_80437C30_S2_U18C;
struct func_80437C30_S1 {
    char pad0[0x20];
    void* unk20;
};
struct func_80437C30_S2 {
    char pad0[0x1C];
    s32 unk1C;
    void* unk20;
    void* unk24;
    char pad24[0x28];
    func_80437C30_S2_U50 unk50;
    char pad50[0x3C];
    s32 unk90;
    s32 unk94;
    s32 unk98;
    s32 unk9C;
    char pad9C[0xC];
    s8* unkAC;
    char padAC[0xDC];
    func_80437C30_S2_U18C unk18C;
    char pad18C[0x30];
    s32 unk1C0;
};
struct func_80437C30_S3 {
    char pad0[0x10];
    s8 unk10;
};
struct func_80437C30_S4 {
    char pad0[0x10];
    s8 unk10;
};
struct func_80437C30_S5 {
    char pad0[0x10];
    s8 unk10;
};
struct func_80437C30_S6 {
    char pad0[0x10];
    s8 unk10;
};
struct func_80437C30_S7 {
    char pad0[0x78];
    u8 unk78;
    char pad78[0x1D];
    char unk96;
};
struct func_80437C30_S8 {
    char pad0[0xD];
    u8 unkD;
    char padD[0x5CA];
    u8 unk5D8;
    char pad5D8[0xA7];
    s32 unk680;
};
struct func_80437C30_S9 {
    char pad0[0x10];
    u8 unk10;
    char pad10[0x27];
    s32 unk38;
};
struct func_80437C30_S10 {
    char pad0[0x10];
    u8 unk10;
    char pad10[0x27];
    s32* unk38;
};
struct func_80437C30_S11 {
    char pad0[0x14];
    f32 unk14;
    char pad14[0x90];
    s32 unkA8;
};
struct func_80437C30_S12 {
    char pad0[0x24];
    u8 unk24;
};
struct func_80437C30_S13 {
    char pad0[0x10];
    u8 unk10;
    char pad10[0x27];
    s32 unk38;
};
struct func_80437C30_S14 {
    char pad0[0x10];
    u8 unk10;
    char pad10[0x27];
    s32 unk38;
};
struct func_80437C30_S15 {
    char pad0[0x38];
    s32 unk38;
};
struct func_80437C30_S16 {
    char pad0[0x38];
    s32 unk38;
};
struct func_80437C30_S17 {
    char pad0[0x38];
    s32* unk38;
};

/* const */

s32 func_80437C30(void *arg0) {
    u8 sp18[0x40];
    u8 *var_v1;
    func_80437C30_S2 *result_state; /* FAKEMATCH: keep the results pointer live through failure-only branches. */
    s32 search_state; /* FAKEMATCH: initialize the search comparison before the final widget store. */
    func_80437C30_S6 *search_widget;
    u8 *unlock_cursor; /* FAKEMATCH: retain and advance the unlock-data base across its two calls. */
    s32 *temp_v0;
    s32 temp_a0;
    s32 *stage_ptr;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_f2;
    s32 temp_s0;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;
    func_80437C30_PlayerState *var_v1_2;
    func_80437C30_S12 *temp_a2;
    func_80437C30_S16 *temp_s0_2;
    func_80437C30_S17 *temp_s0_3;
    func_80437C30_S11 *temp_s1;
    func_80437C30_S9 *temp_v0_3;
    func_80437C30_S10 *temp_v0_6;
    func_80437C30_S13 *temp_v0_7;
    func_80437C30_S14 *temp_v0_8;

    temp_v0 = func_80252FFC(0x1C8);
    D_800E5830 = temp_v0;
    (((func_80437C30_S1 *)(temp_v0))->unk20) = arg0;
    func_8040E958(arg0, 0);
    func_8043C3F0(D_800E5830, 0x67, 0, 0, 0);
    func_8043C458(D_800E5830);
    (((func_80437C30_S2 *)(D_800E5830))->unk1C) = 1;
    (((func_80437C30_S3 *)(func_8040ECB0(arg0, 0x26FU)))->unk10) = 0x6E;
    (((func_80437C30_S4 *)(func_8040ECB0(arg0, 0x274U)))->unk10) = 0x14;
    (((func_80437C30_S5 *)(func_8040ECB0(arg0, 0x271U)))->unk10) = 0x14;
    search_widget = func_8040ECB0(arg0, 0x284U);
    search_state = 1;
    search_widget->unk10 = 0x19;
    (((func_80437C30_S2 *)(D_800E5830))->unk94) = 0;
    var_v1 = &D_80146398;
    for (var_a0 = 0; var_a0 < 4; var_a0++) {
        if ((((func_80437C30_S7 *)(var_v1))->unk78) == search_state) {
            (((func_80437C30_S2 *)(D_800E5830))->unk94) = var_a0;
            break;
        }
        var_v1 = &((func_80437C30_S7 *)(var_v1))->unk96;
    }
    func_80438C68();
    result_state = (func_80437C30_S2 *)D_800E5830;
    result_state->unk98 = -1;
    switch ((((func_80437C30_S8 *)(&D_801462C8))->unkD)) {    /* irregular */
    case 1:
        temp_s0 = (((func_80437C30_S8 *)(&D_801462C8))->unk680);
        if (temp_s0 == (((func_80437C30_S8 *)(&D_801462C8))->unkD)) {
            func_80425EF4((((func_80437C30_S2 *)(D_800E5830))->unk94));
            (((func_80437C30_S2 *)(D_800E5830))->unk9C) = -1;
            if ((**D_800E4680 != 0) && (temp_v0_2 = ((func_80437C30_S2 *)D_800E5830)->unk94 * 0x190, func_80265670((s32)((s8 *)&D_80102C24[((func_80437C30_S2 *)D_800E5830)->unk94].pad[0] + D_80102B0F[((func_80437C30_S2 *)D_800E5830)->unk94].value * 5), D_8015402C) == temp_s0)) {
                temp_v0_3 = func_8040ECB0((((func_80437C30_S2 *)(D_800E5830))->unk20), 0x282U);
                func_8040E958(temp_v0_3, 1);
                temp_v0_3->unk10 = 0xAF;
                temp_v0_3->unk38 = (s32) D_800D75AC;
            } else {
                temp_v0_4 = func_804251F4((((func_80437C30_S2 *)(D_800E5830))->unk94));
                (((func_80437C30_S2 *)(D_800E5830))->unk9C) = temp_v0_4;
                (((func_80437C30_S2 *)(D_800E5830))->unkAC) = func_804255A8(temp_v0_4);
            }
            (((func_80437C30_S2 *)(D_800E5830))->unk98) = -1;
            switch (D_8015402C) {
            default: var_s0 = -1; break;
            case 4: var_s0 = 0x2D; break;
            case 9: var_s0 = 0x2E; break;
            case 0x16: var_s0 = 0x2F; break;
            case 0x23: var_s0 = 0x30; break;
            }
            if ((var_s0 != -1) && (func_80265670((s32) ((s8 *)&D_80102B4A[((func_80437C30_S2 *)D_800E5830)->unk94].value), var_s0) == 0)) {
                func_802656A8((s8 *)&D_80102B4A[((func_80437C30_S2 *)D_800E5830)->unk94].value, var_s0, 1);
                (((func_80437C30_S2 *)(D_800E5830))->unk98) = var_s0;
                func_80425BC0((((func_80437C30_S2 *)(D_800E5830))->unk94));
            }
            temp_v1 = (((func_80437C30_S2 *)(D_800E5830))->unk94) * 0x190;
            if ((u8) D_80102B17[((func_80437C30_S2 *)D_800E5830)->unk94].value >= 0x12U) {
                func_802656A8((s8 *)&D_80102B7D[((func_80437C30_S2 *)D_800E5830)->unk94].value, 1, 1);
            }
            temp_v1_2 = (((func_80437C30_S2 *)(D_800E5830))->unk94) * 0x190;
            if ((u8) D_80102B17[((func_80437C30_S2 *)D_800E5830)->unk94].value >= 0x24U) {
                func_802656A8((s8 *)&D_80102B7D[((func_80437C30_S2 *)D_800E5830)->unk94].value, 2, 1);
            }
            if (D_8015402C >= 0x23) {
                temp_a3 = (((func_80437C30_S2 *)(D_800E5830))->unk94);
                unlock_cursor = &D_80102B54[0].value;
                func_802656A8(unlock_cursor + temp_a3 * 0x190, (s32) D_80146418[temp_a3].value, 1);
                unlock_cursor += 0x2A;
                func_802A101C(unlock_cursor + ((func_80437C30_S2 *)D_800E5830)->unk94 * 0x190, 0, 5U);
                temp_v0_5 = func_80425854((((func_80437C30_S2 *)(D_800E5830))->unk94));
                if (temp_v0_5 >= 0) {
                    func_802A1C08(&((func_80437C30_S2 *)(D_800E5830))->unk18C.v0, D_800D75A4, *D_800E3ABC[func_8041F1B0(temp_v0_5)].value);
                    goto block_49;
                }
            }
        } else {
            goto block_48;
        }
        break;
    case 3:
        temp_s1 = (void *)&((func_80437C30_S8 *)(&D_801462C8))->unk5D8;
        if (temp_s1->unkA8 == 1) {
            func_80425EF4((((func_80437C30_S2 *)(D_800E5830))->unk94));
            stage_ptr = &D_8015402C;
            temp_a2 = func_80425E50(*stage_ptr, 3, 0);
            temp_a0 = (*stage_ptr * 4) + ((((func_80437C30_S2 *)(D_800E5830))->unk94) * 0x190);
            temp_a1 = D_80102B94[((func_80437C30_S2 *)D_800E5830)->unk94].value[*stage_ptr];
            temp_f2 = (s32) (temp_s1->unk14 * *D_800E1F40);
            if (temp_a1 == 0) {
                D_80102B94[((func_80437C30_S2 *)D_800E5830)->unk94].value[*stage_ptr] = temp_a2->unk24 - temp_f2;
            } else {
                temp_v1_3 = temp_a2->unk24 - temp_f2;
                if (temp_v1_3 < temp_a1) {
                    D_80102B94[((func_80437C30_S2 *)D_800E5830)->unk94].value[*stage_ptr] = temp_v1_3;
                }
            }
            if (D_8015402C == 0x23) {
                temp_v0_7 = func_8040ECB0((((func_80437C30_S2 *)(D_800E5830))->unk20), 0x283U);
                temp_v0_7->unk10 = 0xAF;
                func_8040E958(temp_v0_7, 1);
                temp_v0_7->unk38 = (s32) *D_800D75C4;
            }
        } else {
            goto block_48;
        }
        break;
    case 4:
        if ((((func_80437C30_S8 *)(&D_801462C8))->unk680) == 1) {
            func_80425EF4((((func_80437C30_S2 *)(D_800E5830))->unk94));
            if (D_8015402C == 0x23) {
                temp_v0_8 = func_8040ECB0((((func_80437C30_S2 *)(D_800E5830))->unk20), 0x283U);
                temp_v0_8->unk10 = 0xAF;
                func_8040E958(temp_v0_8, 1);
                temp_v0_8->unk38 = (s32) D_800D75C0;
            }
        } else {
            goto block_48;
        }
        break;
    }
    goto block_50;
loopbody:
    func_8040E9D0(func_8040ECB0(arg0, 0x273U), 0);
    goto afterloop;
block_48:
    func_802A125C(&result_state->unk18C.v1, D_800D75A8);
block_49:
    temp_v0_6 = func_8040ECB0((((func_80437C30_S2 *)(D_800E5830))->unk20), 0x283U);
    temp_v0_6->unk10 = 0xAF;
    func_8040E958(temp_v0_6, 1);
    temp_v0_6->unk38 = &((func_80437C30_S2 *)(D_800E5830))->unk18C.v2;
block_50:
    func_8043847C();
    func_804387F4();
    func_8041B190(0x272);
    func_8041B190(0x273);
    func_8041B190(0x277);
    func_8040E9D0(func_8040ECB0(arg0, 0x273U), 1);
    for (var_a0_2 = 0; var_a0_2 < 4; var_a0_2++) {
        if (D_80102B0D[var_a0_2].state >= 0 && D_80102B0E[var_a0_2].value == 0) {
            goto loopbody;
        }
    }
afterloop:
    (((func_80437C30_S15 *)(func_8040ECB0((((func_80437C30_S2 *)(D_800E5830))->unk20), 0x275U)))->unk38) = (s32) D_800D75B4;
    temp_s0_2 = func_8040ECB0((((func_80437C30_S2 *)(D_800E5830))->unk20), 0x276U);
    if (D_80154028 == 0) {
        temp_s0_2->unk38 = (s32) D_800D75BC;
    } else {
        temp_s0_2->unk38 = (s32) D_800D75B8;
    }
    temp_s0_2 = func_8040ECB0(arg0, 0x270U);
    func_8028D35C(&D_8011FE88, D_8015402C, sp18, 0x3F);
    func_802A125C(&((func_80437C30_S2 *)(D_800E5830))->unk50.v0, func_802A1494(sp18));
    ((func_80437C30_S17 *)temp_s0_2)->unk38 = &((func_80437C30_S2 *)(D_800E5830))->unk50.v1;
    (((func_80437C30_S2 *)(D_800E5830))->unk24) = func_8040ECB0(arg0, 0x278U);
    (((func_80437C30_S2 *)(D_800E5830))->unk1C0) = 1;
    D_80146894 = 1;
    (((func_80437C30_S2 *)(D_800E5830))->unk90) = 0;
    func_802A338C();
    return 0;
}

#endif

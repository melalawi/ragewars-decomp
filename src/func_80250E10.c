/* Allocates the resource-manager pools, initializes their free lists and queues, and starts its worker thread. */
#include "basetypes.h"
typedef struct Entry {char pad[12];s32 value;char tail[24];} Entry;
extern char D_252450[],D_80104560[],D_80104598[],D_801047E0[],D_801048F8[],D_80105140[],D_801051A0[];
extern s32 D_8010515C,D_800D2B2C;
extern u32 D_800D0920;
extern char **D_80104564;
extern void func_80255280(u32),func_80255C40(void *,s32,s32),func_80255CB4(void *,void *),func_802567C4(void *),func_802A101C(void *,s32,s32),func_802BFD50(void *,void *,s32),func_802BFD80(void *,s32,void *,s32,void *,s32),func_802C0390(void *,s32,s32),func_802C0510(void *,s32,s32),func_802C0840(void *),func_802C2040(s32);
extern char *func_802558C0(void *,s32);
extern s32 func_802C2020(void);
extern u32 func_80265370(void);
#define WORD(p,o) (*(s32 *)((char *)(p)+(o)))
#define PTR(p,o) (*(char **)((char *)(p)+(o)))
void func_80250E10(s32 unused, s32 arg1) {
    char **temp_s2;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 var_a2;
    s32 var_s1;
    u32 var_s0;
    u32 first_count;
    void *temp_a1;
    void *temp_s1;
    Entry *temp_v1_2;

    func_802567C4(&D_80105140);
    temp_a0 = func_802C2020();
    temp_v1 = D_8010515C + 1;
    D_8010515C = temp_v1;
    if (temp_v1 != 1) {
        func_802C2040(temp_a0);
        func_802C0390(&D_80105140, 0, 1);
    } else {
        func_802C2040(temp_a0);
    }
    D_800D0920 = 0x400;
    if (func_80265370() > 0x400000U) {
        D_800D0920 *= 2;
    }
    PTR(D_80104560,0x0) = func_802558C0(&D_801051A0, D_800D0920 * 0x28);
    PTR(D_80104560,0x4) = func_802558C0(&D_801051A0, D_800D0920 * 4);
    PTR(D_80104560,0xC) = func_802558C0(&D_801051A0, D_800D0920 * 0x2C);
    func_802BFD50(D_80104560 + 0xC00, D_80104560 + 0xC18, 1);
    WORD(D_80104560,0x44) = 0;
    WORD(D_80104560,0x40) = 0;
    func_80255C40(D_80104560 + 0x10, 0x18, 0x1C);
    func_80255C40(D_80104560 + 0x24, 0x20, 0x24);
    var_s0 = 0;
    WORD(D_80104560,0xBDC) = 0;
    first_count=D_800D0920;
    if (first_count != 0) {
        char *pool = D_80104560;
        var_a2 = 0;
        do {
            temp_v1_2 = (Entry *)(PTR(pool,0) + var_a2);
            WORD(temp_v1_2,12) = 0;
            *(char **)((char *)D_80104564 + var_s0 * 4) = temp_v1_2;
            WORD(pool,0xBDC) += 1;
            var_a2 += 0x28;
            var_s0 += 1;
        } while (var_s0 < first_count);
    }
    { s32 *state=(s32 *)D_80104598; state[1]=1; state[0]=1; }
    WORD(D_80104598,0x10) = -1;
    WORD(D_80104598,0xB9C) = 0;
    WORD(D_80104598,0xBA0) = 0;
    WORD(D_80104598,-0x30) = 0;
    WORD(D_80104598,0xBE4) = 1;
    WORD(D_80104598,0xBE8) = 0;
    func_80255C40(D_80104598 + 0xB60, 0x28, 0x24);
    func_80255C40(D_80104598 + 0xB74, 0x28, 0x24);
    func_80255C40(D_80104598 + 0xB88, 0x28, 0x24);
    var_s0 = 0;
    if (D_800D0920 != 0) {
        temp_s2 = (char **)(D_80104598 - 0x2C);
        var_s1 = 0;
        do {
            temp_a1 = *temp_s2 + var_s1;
            WORD(temp_a1,0x10) = 0;
            func_80255CB4((char *)temp_s2 + 0xB8C, temp_a1);
            var_s1 += 0x2C;
            var_s0 += 1;
        } while (var_s0 < (u32) D_800D0920);
    }
    func_80255280(D_800D0920);
    func_802BFD50(D_801047E0, D_801047E0 + 0x18, 0x40);
    temp_v0_2 = func_802C2020();
    temp_v1_3 = D_8010515C - 1;
    D_8010515C = temp_v1_3;
    if (temp_v1_3 != 0) {
        func_802C2040(temp_v0_2);
        func_802C0510(D_801047E0 + 0x960, 0, 1);
    } else {
        func_802C2040(temp_v0_2);
    }
    func_802A101C(D_801048F8, arg1, 0x800);
    temp_s1 = D_801048F8 - 0x348;
    func_802BFD80(temp_s1, arg1, &D_252450, 0, D_801048F8 + 0x800, D_800D2B2C);
    func_802C0840(temp_s1);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D2B2C_4[] = {0x00, 0x00, 0x00, 0x0F};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800CE49C_4[] = {0x00, 0x00, 0x00, 0x0F};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800CEE6C_4[] = {0x00, 0x00, 0x00, 0x0F};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800CD8BC_4[] = {0x00, 0x00, 0x00, 0x0F};
#endif

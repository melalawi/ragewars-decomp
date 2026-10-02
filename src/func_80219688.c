/* NON_MATCHING: owner fuzzy candidate; PAL assembly rows remain active. */
/* Writes kill and death messages into both players' four-line logs and posts them to their views; integer address casts preserve addition operand ordering. */
#include "shared/settings.h"
#include "shared/player.h"
#include "shared/status.h"
#include "shared/menu_language.h"
extern Shared_Settings D_801462C8[];
extern char *D_800D7A6C,*D_800D7A70,*D_800D7A74[],*D_800D7A84[];
extern char *D_800D7A80;
extern void func_80239760(void *,s32,void *,float),func_802934A4(void *,void *);
#if defined(VERSION_EU)
extern char *D_800E3354[];
extern char *eu_D_800E3364[];
extern char *D_800E3374[];
extern char *D_800E33A4[];
extern char *D_800E33B4[];
#elif defined(VERSION_EU_X)
extern char *D_800DE8F4[];
extern char *D_800DE900[];
extern char *D_800DE90C[];
extern char *D_800DE930[];
extern char *D_800DE93C[];
#endif
void func_80219688(char *arg0, char *arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    char *temp_v1;
    char *var_a0;
    char *var_a1;

    Shared_Settings *settings = D_801462C8;
    if (settings->hudShown != 0) {
        if (arg0 != arg1) {
            temp_v1 = (char *)&settings->rules;
            if (((Shared_Status *)(((SharedPlayer *)(arg0))->views5D8.view5D8_5.info))->enabled != 0) {
                if (((Shared_MatchRules *)(temp_v1))->countRule != 0) {
                    func_802934A4(arg0 + ((((SharedPlayer *)(arg0))->messageIndex * 0x19) + 0x13EC), RW_LOCALIZED_TEXT(D_800D7A6C, D_800E3354, D_800DE8F4, settings->language));
                    func_802934A4((char *)((((SharedPlayer *)(arg0))->messageIndex * 0x19) + (s32)arg0 + 0x13F6), ((SharedPlayer *)arg1)->views5D8.view5D8_5.info + 0x84);
                    temp_a1 = (s32) ((SharedPlayer *)(arg0))->views5DC.view5DC_0.unk5DC;
                    if (temp_a1 != 0) {
                        func_80239760((char *)settings - 0x1240, temp_a1, arg0 + ((((SharedPlayer *)(arg0))->messageIndex * 0x19) + 0x13EC), 1.5f);
                    }
                    ((SharedPlayer *)(arg0))->messageIndex += 1;
                    ((SharedPlayer *)(arg0))->messageIndex %= 4;
                    func_802934A4(arg1 + ((((SharedPlayer *)(arg1))->messageIndex * 0x19) + 0x13EC), RW_LOCALIZED_TEXT(D_800D7A70, eu_D_800E3364, D_800DE900, settings->language));
                    var_a0 = (char *)((((SharedPlayer *)(arg1))->messageIndex * 0x19) + (s32)arg1 + 0x13F7);
                    var_a1 = ((SharedPlayer *)arg0)->views5D8.view5D8_5.info + 0x84;
                    func_802934A4(var_a0, var_a1);
                    goto posted;
                }
                if (((Shared_MatchRules *)(temp_v1))->squads != 0) {
                    func_802934A4(arg0 + ((((SharedPlayer *)(arg0))->messageIndex * 0x19) + 0x13EC), RW_LOCALIZED_TEXT(*D_800D7A74, D_800E3374, D_800DE90C, settings->language));
                    func_802934A4((char *)((((SharedPlayer *)(arg0))->messageIndex * 0x19) + (s32)arg0 + 0x13F6), ((SharedPlayer *)arg1)->views5D8.view5D8_5.info + 0x84);
                    temp_a1_2 = (s32) ((SharedPlayer *)(arg0))->views5DC.view5DC_0.unk5DC;
                    if (temp_a1_2 != 0) {
                        func_80239760((char *)settings - 0x1240, temp_a1_2, arg0 + ((((SharedPlayer *)(arg0))->messageIndex * 0x19) + 0x13EC), 1.5f);
                    }
                    ((SharedPlayer *)(arg0))->messageIndex += 1;
                    ((SharedPlayer *)(arg0))->messageIndex %= 4;
                    temp_v0 = ((SharedPlayer *)(arg0))->messageIndex;
                    temp_a0_3 = temp_v0 * 0x19 + 0x13EC;
                    ((SharedPlayer *)(arg0))->messageIndex = temp_v0;
                    /* FAKEMATCH: keep the recovered index store between the address arithmetic stages. */
                    do { } while (0);
                    func_802934A4(arg0 + temp_a0_3, RW_LOCALIZED_TEXT(D_800D7A80, D_800E33A4, D_800DE930, settings->language));
                    temp_a1_3 = (s32) ((SharedPlayer *)(arg0))->views5DC.view5DC_0.unk5DC;
                    if (temp_a1_3 != 0) {
                        func_80239760((char *)settings - 0x1240, temp_a1_3, arg0 + ((((SharedPlayer *)(arg0))->messageIndex * 0x19) + 0x13EC), 1.5f);
                    }
                    ((SharedPlayer *)(arg0))->messageIndex += 1;
                    ((SharedPlayer *)(arg0))->messageIndex %= 4;
                    func_802934A4(arg1 + ((((SharedPlayer *)(arg1))->messageIndex * 0x19) + 0x13EC), RW_LOCALIZED_TEXT(D_800D7A70, eu_D_800E3364, D_800DE900, settings->language));
                    func_802934A4((char *)((((SharedPlayer *)(arg1))->messageIndex * 0x19) + (s32)arg1 + 0x13F7), ((SharedPlayer *)arg0)->views5D8.view5D8_5.info + 0x84);
                    temp_a1_4 = (s32) ((SharedPlayer *)(arg1))->views5DC.view5DC_0.unk5DC;
                    if (temp_a1_4 != 0) {
                        func_80239760((char *)settings - 0x1240, temp_a1_4, arg1 + ((((SharedPlayer *)(arg1))->messageIndex * 0x19) + 0x13EC), 1.5f);
                    }
                    ((SharedPlayer *)(arg1))->messageIndex += 1;
                    ((SharedPlayer *)(arg1))->messageIndex %= 4;
                    temp_v0_2 = ((SharedPlayer *)(arg1))->messageIndex;
                    ((SharedPlayer *)(arg1))->messageIndex = temp_v0_2;
                    var_a1 = RW_LOCALIZED_TEXT(*D_800D7A84, D_800E33B4, D_800DE93C, settings->language);
                    var_a0 = arg1 + ((temp_v0_2 * 0x19) + 0x13EC);
block_23:
                    func_802934A4(var_a0, var_a1);
posted:
                    temp_a1_5 = (s32) ((SharedPlayer *)(arg1))->views5DC.view5DC_0.unk5DC;
                    if (temp_a1_5 != 0) {
                        func_80239760((char *)settings - 0x1240, temp_a1_5, arg1 + ((((SharedPlayer *)(arg1))->messageIndex * 0x19) + 0x13EC), 1.5f);
                    }
                    goto block_25;
                }
            }
        } else {
block_25:
                    ((SharedPlayer *)(arg1))->messageIndex += 1;
                    ((SharedPlayer *)(arg1))->messageIndex %= 4;
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4DCC_4 = 65536.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9F8C_4 = 65536.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4E54_4 = 1.41421354f;
const float unbake_rodata_800C4E58_4 = 0.5f;
#endif

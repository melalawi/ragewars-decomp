/* Selects and records a player's reaction to an interaction. */
#include "basetypes.h"
#include "shared/reaction_statistics.h"
#include "shared/matchrules.h"

/* Reaction thresholds are loaded from the cartridge's shared float table. */
void * func_8020CFE0(char *, s32);
void func_80219688(char *, char *, void *);
void func_802297F0(void *, f32);
void func_80229F74(void *, void *);
s32 func_8022A590(void *, unsigned int);
s32 func_8022ABF0(void *);
int func_8022B168(void *);
int func_80245774(void);
int func_80245788(void);
void func_80282A18(void *, s32);
void func_802830A0(void *, s32);
void * func_8028B2D4(void *, u16 *);
s32 func_802A11E8(void);
float func_802BB630(float);
float func_802BC200(float);
#if defined(VERSION_EU)
s32 func_8021C070(); /* extern */
#elif defined(VERSION_EU_X)
s32 func_8021C078(); /* extern */
#elif defined(VERSION_DE)
s32 func_8021BFC4(); /* extern */
#else
s32 func_8021BFBC(); /* extern */
#endif
#if defined(VERSION_EU_X)
extern s32 D_80108AE0[];
#elif defined(VERSION_DE)
extern s32 D_800FEAE0[];
#else
extern s32 D_80102AE0[];
#endif
extern s32 D_8011FE88;
extern s32 D_80121990;
extern s8 D_8013B364;
extern s32 D_80145040;
extern s32 D_801462C8;
extern s32 D_801468A0;
extern volatile s32 D_801468C4; /* FAKEMATCH: preserve the score-update ordering. */
#if defined(VERSION_US)
extern volatile s32 D_8014080C[]; /* FAKEMATCH: retain distinct score reads in each branch. */
#elif defined(VERSION_EU)
extern volatile s32 D_8015280C[]; /* FAKEMATCH: retain distinct score reads in each branch. */
#elif defined(VERSION_EU_X)
extern volatile s32 D_8014C80C[]; /* FAKEMATCH: retain distinct score reads in each branch. */
#elif defined(VERSION_DE)
extern volatile s32 D_8014280C[]; /* FAKEMATCH: retain distinct score reads in each branch. */
#else
extern volatile s32 D_801468CC[]; /* FAKEMATCH: retain distinct score reads in each branch. */
#endif
extern s32 D_801468F4;
extern s32 D_80146918;
extern f32 D_800C73C0;
#if defined(VERSION_US)
extern f32 D_800C2208;
#elif defined(VERSION_EU)
extern f32 D_800C2578;
#elif defined(VERSION_EU_X)
extern f32 D_800C25B8;
#elif defined(VERSION_DE)
extern f32 D_800C22D8;
#else
extern f32 D_800C73C8;
#endif
#if defined(VERSION_US)
extern f32 D_800C220C;
#elif defined(VERSION_EU)
extern f32 D_800C257C;
#elif defined(VERSION_EU_X)
extern f32 D_800C25BC;
#elif defined(VERSION_DE)
extern f32 D_800C22DC;
#else
extern f32 D_800C73CC;
#endif
#if defined(VERSION_US)
extern f32 D_800C2210;
#elif defined(VERSION_EU)
extern f32 D_800C2580;
#elif defined(VERSION_EU_X)
extern f32 D_800C25C0;
#elif defined(VERSION_DE)
extern f32 D_800C22E0;
#else
extern f32 D_800C73D0;
#endif
void func_80219A40(ReactionActor *arg0, s32 arg1, ReactionInteraction *arg2) {
    f32 temp_f20;
    f32 temp_f3;
    f32 var_f0;
    volatile s32 *var_v1_4;
    s32 temp_a0_5;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_s5;
    s32 temp_s6;
    s32 temp_v0_5;
    s32 temp_v1_2;
    s32 temp_v1_9;
    s32 var_s3;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    ReactionSource *temp_a0_2;
    ReactionPlayer *temp_s1;
    ReactionPlayer *var_s2;
    u16 *temp_a1;
    s32 temp_v1;
    u16 temp_v1_4;
    s32 temp_v1_6; /* FAKEMATCH: share the projectile selector and actor score index so the allocator retains v1. */
    s32 temp_a0_6;
    s32 temp_a0_8;
    s32 score_owner_6;
    s32 score_owner_8;
    volatile s32 *first_score_slot; /* FAKEMATCH: keep the first score address separate through allocation. */
    s32 temp_v1_12;
    u8 temp_v1_3;
    ReactionObjectKind *temp_a0;
    ReactionPlayer *temp_a1_2;
    ReactionSource *reaction_source; /* FAKEMATCH: retain the source only for the directional reaction. */
    ReactionAttribution *temp_a0_3;
    ReactionPlayerIndex *attributed_actor;
    s32 projectile_present; /* FAKEMATCH: keep the source-presence decision separate from the actor fallback. */
    ReactionStatistics *temp_a0_4;
    ReactionStatistics *temp_a0_7;
    ReactionFlags *temp_v0;
    ReactionObjectStatistics *temp_v0_6;

    ReactionStatistics *temp_v1_10;
    ReactionScoreCounter *temp_v1_11;
    ReactionStatistics *temp_v1_13;
    ReactionStatistics *temp_v1_14;
    ReactionScoreCounter *temp_v1_15;
    ReactionStatistics *temp_v1_16;
    ReactionStatistics *temp_v1_5;
    ReactionStatistics *temp_v1_7;

    var_s2 = NULL;
    var_s3 = -1;
    if ((func_80245788() == 0) && (func_80245774() == 0) && !(D_801462C8 & 1)) {
        temp_s1 = arg0->unk1D8;
        temp_a1 = temp_s1->unk14;
        temp_s6 = temp_s1->unk5E4 > 0;
        if (temp_a1 == NULL) {
            goto flag_clear;
        }
        /* FAKEMATCH: retain a loop entry through allocation so reload forgets
         * the saved null pointer before materializing the independent flag. */
        while (temp_a1 != NULL) {
            temp_v0 = func_8028B2D4(&D_8011FE88, temp_a1);
            var_v1 = 0;
            if (temp_v0 == NULL) {
                break;
            }
            var_v1 = 1;
            if (temp_v0->unk52 & 0x40) {
                goto flag_done;
            }
            break;
        }
flag_clear:
        var_v1 = 0;
flag_done:

        if (var_v1 != 0) {
            var_s3 = 0x17;
        }
        if (temp_s1->unk650 == 0x20) {
            var_s3 = 0x20;
        }
        if (arg2 != NULL) {
            temp_a0 = arg2->unk0;
            if ((temp_a0 != NULL) && (temp_a0->unk0 == 2)) {
                temp_v1 = temp_a0->unk4;
                if (temp_v1 == 0x432) {
                    goto block_45;
                }
                if (temp_v1 < 0x433) {
                    if (temp_v1 == 0x405) {
                        goto block_33;
                    }
                    if (temp_v1 < 0x406) {
                        if ((temp_v1 == 0x402) || (temp_v1 == 0x404)) {
                            goto block_38;
                        }
                        goto block_47;
                    }
                    if (temp_v1 < 0x41E) {
                        if (temp_v1 < 0x41B) {
                            goto block_47;
                        }
                        goto block_early_return;
                    }
                    goto block_46;
                }
                if (temp_v1 < 0x4E0) {
                    if (temp_v1 >= 0x4DD) {
                        goto block_early_return;
                    }
                    if (temp_v1 == 0x43C) {
                        goto block_38;
                    }
                    if (temp_v1 == 0x4DA) {
                        goto block_33;
                    }
                    goto block_47;
                }
                if (temp_v1 == 0x4E3) {
                    goto block_45;
                }
                goto block_47;
block_early_return:
                if (temp_s1->unk5E4 > 0) {
                    func_802297F0(temp_s1, 2.5f);
                }
                return;
block_33:
                if (temp_s1->unk5E4 > 0) {
                    var_f0 = temp_s1->unk11E0 + ((ReactionFloatValue *)&D_800C73C0)->unk4;
#if defined(VERSION_US)
                    temp_s1->unk11E0 = var_f0 < D_800C2208 ? D_800C2208 : var_f0;
#elif defined(VERSION_EU)
                    temp_s1->unk11E0 = var_f0 < D_800C2578 ? D_800C2578 : var_f0;
#elif defined(VERSION_EU_X)
                    temp_s1->unk11E0 = var_f0 < D_800C25B8 ? D_800C25B8 : var_f0;
#elif defined(VERSION_DE)
                    temp_s1->unk11E0 = var_f0 < D_800C22D8 ? D_800C22D8 : var_f0;
#else
                    temp_s1->unk11E0 = var_f0 < D_800C73C8 ? D_800C73C8 : var_f0;
#endif
                }
                arg2->unk4 = 0x100;
                goto block_46;
block_38:
                if (temp_s1->unk122C & 0x1000) {
                    temp_v1_2 = temp_s1->unk5E4;
                    if (temp_v1_2 <= 0) {
                        arg2->unk4 = 0;
                    } else {
                        temp_s0 = temp_v1_2 + arg2->unk4;
                        var_v1_2 = func_8022ABF0(temp_s1);
                        if (temp_s0 < var_v1_2) {
                            var_v1_2 = temp_s0;
                        }
                        temp_s1->unk5E4 = var_v1_2;
                        goto block_45;
                    }
                }
                goto block_47;
block_45:
                arg2->unk4 = 0;
                goto block_46;
            } else {
block_46:
                goto block_47;
            }
        } else {
block_47:
            func_80229F74(temp_s1, arg2);
#if defined(VERSION_EU)
            func_8021C070(temp_s1, arg0, arg2->unk4, arg2->unkC, var_s3);
#elif defined(VERSION_EU_X)
            func_8021C078(temp_s1, arg0, arg2->unk4, arg2->unkC, var_s3);
#elif defined(VERSION_DE)
            func_8021BFC4(temp_s1, arg0, arg2->unk4, arg2->unkC, var_s3);
#else
            func_8021BFBC(temp_s1, arg0, arg2->unk4, arg2->unkC, var_s3);
#endif
            temp_a0_2 = arg2->unk0;
            if (temp_a0_2 != NULL) {
                temp_v1_3 = temp_a0_2->unk0;
                if (temp_v1_3 != 1) {
                    if (temp_v1_3 == 2) {
                        temp_a1_2 = temp_a0_2->unk12C;
                        reaction_source = temp_a0_2;
                        if (temp_a1_2 != NULL) {
                            if (temp_a1_2->unk0 == 1) {
                                if (temp_a1_2->unk100 & 0x300000) {
                                    var_s2 = temp_a1_2;
                                } else if (temp_a1_2->unkE4 == 0x40C) {
                                    var_s2 = temp_a1_2->unk1D8;
                                }
                            }
                            temp_v1_4 = reaction_source->unk4;
                            if (((temp_v1_4 == 0x3EB) || (temp_v1_4 == 0x416)) && (temp_s6 != 0) && (func_8022B168(temp_s1) != 0)) {
                                temp_v1_5 = (void *)var_s2->unk5D8;
                                temp_v1_5->special_hits = (u16) (temp_v1_5->special_hits + 1);
                            }
                            temp_f20 = func_802BC200(arg0->unk6C);
                            temp_f3 = ((temp_s1->unk8 - reaction_source->unk8) * -temp_f20) + ((temp_s1->unk10 - reaction_source->unk10) * -func_802BB630(arg0->unk6C));
#if defined(VERSION_US)
                            if (temp_f3 < D_800C220C) {
#elif defined(VERSION_EU)
                            if (temp_f3 < D_800C257C) {
#elif defined(VERSION_EU_X)
                            if (temp_f3 < D_800C25BC) {
#elif defined(VERSION_DE)
                            if (temp_f3 < D_800C22DC) {
#else
                            if (temp_f3 < D_800C73CC) {
#endif
                                temp_s1->unk13C4 = 1;
#if defined(VERSION_US)
                            } else if (temp_f3 > D_800C2210) {
#elif defined(VERSION_EU)
                            } else if (temp_f3 > D_800C2580) {
#elif defined(VERSION_EU_X)
                            } else if (temp_f3 > D_800C25C0) {
#elif defined(VERSION_DE)
                            } else if (temp_f3 > D_800C22E0) {
#else
                            } else if (temp_f3 > D_800C73D0) {
#endif
                                temp_s1->unk13C4 = 2;
                            } else {
                                goto block_69;
                            }
                        }
                    }
                } else {
                    if (temp_a0_2->unk100 & 0x300000) {
                        var_s2 = temp_a0_2->unk1D8;
                    }
block_69:
                    temp_s1->unk13C4 = 0;
                }
            } else {
                var_s2 = temp_s1;
            }
            if (var_s2 != NULL) {
                if (arg2 != NULL) {
                    temp_a0_3 = arg2->unk0;
                    projectile_present = temp_a0_3 != NULL;
                    do { /* FAKEMATCH: retain the separate projectile and actor decisions. */
                      if (!projectile_present) { break; }
                      if (temp_a0_3->unk0 == 2) {
                        temp_v1_6 = temp_a0_3->unk4;
                        switch (temp_v1_6) {
                            case 0x404:
                            case 0x40F:
                                goto block_88;
                            case 0x402:
                            case 0x427:
                                goto block_87;
                            default:
                                if (!(arg2->unkC & 0x100000)) {
                                    temp_v1_6 = var_s2->unk5D4;
                                    goto block_86;
                                }
                                goto block_87;
                        }
                    }
                    } while (0);
                    if ((temp_a0_3 != NULL) && (temp_a0_3->unk0 == 1) && (temp_a0_3->unk100 & 0x300000)) {
                        attributed_actor = temp_a0_3->unk1D8;
                        if (!(arg2->unkC & 0x100000)) {
                            temp_v1_6 = attributed_actor->unk5D4;
block_86:
#if defined(VERSION_EU_X)
                            ++D_80108AE0[temp_v1_6];
#elif defined(VERSION_DE)
                            ++D_800FEAE0[temp_v1_6];
#else
                            ++D_80102AE0[temp_v1_6];
#endif
                        }
                    }
                    goto block_87;
                }
block_87:
                if (var_s2 != NULL) {
block_88:
                    if ((var_s2 != temp_s1) && (temp_s1->unk1450 != 0)) {
                        temp_s1->unk1454->unk328 = var_s2;
                        temp_s1->unk1454->unk324 = 0x1F4;
                    }
                    if ((var_s2 != NULL) && (temp_s1->unk5E4 == 0)) {
                        temp_v1_7 = (void *)temp_s1->unk5D8;
                        if (temp_v1_7->counted == 0) {
                            temp_v1_7->counted = 1U;
                            temp_s5 = func_8022A590(&D_80145040, (u32) var_s2);
                            temp_a0_4 = (void *)temp_s1->unk5D8;
                            if ((temp_a0_4->unk8F == 1) && ((((ReactionMatchState *)(&D_80145040))->unk18B4) != 0)) {
                                temp_a0_4->kills_special[temp_s5]++;
                            } else {
                                temp_s1->unk5D8->kills_normal[temp_s5]++;
                            }
                            temp_s3 = func_8022A590(&D_80145040, (u32) temp_s1);
                            if ((temp_s1->unk5D8->unk8F == 1) && ((((ReactionMatchState *)(&D_80145040))->unk18B4) != 0)) {
                                var_s2->unk5D8->deaths_special[temp_s3]++;
                            } else {
                                var_s2->unk5D8->deaths_normal[temp_s3]++;
                            }
                            func_80219688((char *)temp_s1, (char *)var_s2, arg2);
                            if (var_s2 != NULL) {
                                temp_a0_5 = var_s2->unk1338;
                                temp_v1_9 = temp_a0_5 + 1;
                                var_v0_2 = temp_v1_9;
                                if (temp_v1_9 < 0) {
                                    var_v0_2 = temp_a0_5 + 8;
                                }
                                temp_v0_5 = temp_v1_9 - ((var_v0_2 >> 3) * 8);
                                var_s2->unk1338 = temp_v0_5;
                                var_s2->unk12CC[temp_v0_5] = temp_s1;
                                var_s2->unk12F4[var_s2->unk1338] = 0xFF;
                            }
                            if (temp_s1 != NULL) {
                                temp_s1->unk12EC = var_s2;
                                temp_s1->unk12F0 = (s32) (func_802A11E8() % 7);
                            }
                            if (temp_s5 == temp_s3) {
                                temp_v1_10 = (void *)temp_s1->unk5D8;
                                temp_v1_10->deaths_self = (u16) (temp_v1_10->deaths_self + 1);
                                temp_v1_11 = (void *)temp_s1->unk5D8;
                                temp_v1_11->unk4 = (u16) (temp_v1_11->unk4 - 1);
                                if (D_801468C4 != 0) {
                                    temp_v1_12 = temp_s1->unk5D8->unk92;
                                    /* FAKEMATCH: keep the signed bounds decisions separate. */
                                    if (temp_v1_12 >= 0) {
                                        if (temp_v1_12 < 5) {
#if defined(VERSION_US)
                                            var_v1_4 = &D_8014080C[temp_v1_12];
#elif defined(VERSION_EU)
                                            var_v1_4 = &D_8015280C[temp_v1_12];
#elif defined(VERSION_EU_X)
                                            var_v1_4 = &D_8014C80C[temp_v1_12];
#elif defined(VERSION_DE)
                                            var_v1_4 = &D_8014280C[temp_v1_12];
#else
                                            var_v1_4 = &D_801468CC[temp_v1_12];
#endif
                                            if (D_80146918 == 0) {
                                                if (D_801468F4 != 0) {

                                                } else {
                                                    goto block_134;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                temp_v1_13 = (void *)temp_s1->unk5D8;
                                temp_v1_13->deaths_other = (u16) (temp_v1_13->deaths_other + 1);
                                temp_v0_6 = func_8020CFE0(&D_8013B364, temp_s1->unk1454->unk4);
                                temp_v0_6->unk38 = (s32) (temp_v0_6->unk38 + 1);
                                temp_v0_6 = func_8020CFE0(&D_8013B364, var_s2->unk1454->unk4);
                                temp_v0_6->unk3C = (s32) (temp_v0_6->unk3C + 1);
                                if (temp_s1->unk5D8->unk8F == 1) {
                                    if ((((Shared_MatchRules *)(&D_801468A0))->countRule) != 0) {
                                        temp_v1_14 = (void *)var_s2->unk5D8;
                                        var_s2->unk12C4 = temp_s1;
                                        temp_v1_14->special_kills = (u16) (temp_v1_14->special_kills + 1);
                                        temp_v1_15 = (void *)var_s2->unk5D8;
                                        temp_v1_15->unk4 = (u16) (temp_v1_15->unk4 + 1);
                                        if (D_801468C4 != 0) {
                                            temp_a0_6 = var_s2->unk5D8->unk92;
                                            score_owner_6 = temp_s1->unk5D8->unk92;
                                            /* FAKEMATCH: keep the signed bounds decisions separate. */
                                            if (temp_a0_6 >= 0) {
                                                if (temp_a0_6 < 5) {
#if defined(VERSION_US)
                                                    first_score_slot = &D_8014080C[temp_a0_6];
#elif defined(VERSION_EU)
                                                    first_score_slot = &D_8015280C[temp_a0_6];
#elif defined(VERSION_EU_X)
                                                    first_score_slot = &D_8014C80C[temp_a0_6];
#elif defined(VERSION_DE)
                                                    first_score_slot = &D_8014280C[temp_a0_6];
#else
                                                    first_score_slot = &D_801468CC[temp_a0_6];
#endif
                                                    var_v1_4 = first_score_slot;
                                                    if (score_owner_6 != temp_a0_6) {
                                                        do { /* FAKEMATCH: spell out each score store so cross jumping shares only the store. */
                                                            *first_score_slot = *first_score_slot + 1;
                                                            goto reaction_statistics_done;
                                                        } while (0);
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((((Shared_MatchRules *)(&D_801468A0))->squads) != 0) {
                                        var_s2->unk12C8 = temp_s1;
                                    } else {
                                        goto block_124;
                                    }
                                } else {
block_124:
                                    if (D_801468C4 != 0) {
                                        temp_a0_7 = (void *)var_s2->unk5D8;
                                        if (temp_a0_7->unk92 == temp_s1->unk5D8->unk92) {
                                            temp_a0_7->score = (u16) (temp_a0_7->score - 1);
                                        } else {
                                            temp_a0_7->score = (u16) (temp_a0_7->score + 1);
                                        }
                                    } else {
                                        temp_v1_16 = (void *)var_s2->unk5D8;
                                        temp_v1_16->score = (u16) (temp_v1_16->score + 1);
                                    }
                                    if (D_801468C4 != 0) {
                                        temp_a0_8 = var_s2->unk5D8->unk92;
                                        score_owner_8 = temp_s1->unk5D8->unk92;
                                        /* FAKEMATCH: keep the signed bounds decisions separate. */
                                        if (temp_a0_8 >= 0) {
                                            if (temp_a0_8 < 5) {
#if defined(VERSION_US)
                                                var_v1_4 = &D_8014080C[temp_a0_8];
#elif defined(VERSION_EU)
                                                var_v1_4 = &D_8015280C[temp_a0_8];
#elif defined(VERSION_EU_X)
                                                var_v1_4 = &D_8014C80C[temp_a0_8];
#elif defined(VERSION_DE)
                                                var_v1_4 = &D_8014280C[temp_a0_8];
#else
                                                var_v1_4 = &D_801468CC[temp_a0_8];
#endif
                                                if (score_owner_8 != temp_a0_8) {
                                                    *var_v1_4 = *var_v1_4 + 1;
                                                } else {
block_134:
                                                    *var_v1_4 = *var_v1_4 - 1;
                                                }

                                            }
                                        }
                                    }
                                }
                            }
reaction_statistics_done:
                            func_80282A18(&D_80121990, (s32) temp_s1);
                            func_802830A0(&D_80121990, (s32) temp_s1);
                        }
                    }
                }
            }
        }
    }
}

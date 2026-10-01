#ifdef NON_MATCHING
/* Loads and formats player, weapon, and menu image paths for the current mode. */
#if defined(VERSION_US)
#define D_8011FED4 D_80119E14
#define D_8011FEA4 D_80119DE4
#define D_800CA374 D_800C51B4
#define D_800D7380 D_800D2000
#define D_800D7378 D_800D1FF8
#define D_800D737C D_800D1FFC
#define D_800D738C D_800D200C
#define D_800D7384 D_800D2004
#define D_800D7388 D_800D2008
#define D_800D7390 D_800D2010
#define D_800D7394 D_800D2014
#define D_800D73BC D_800D203C
#define D_800D7360 D_800D1FE0
#define D_800D73C0 D_800D2040
#define D_800D7364 D_800D1FE4
#define D_800D7368 D_800D1FE8
#define D_800D736C D_800D1FEC
#define D_800D7398 D_800D2018
#define D_800D739C D_800D201C
#define D_800D73B4 D_800D2034
#define D_800D73B8 D_800D2038
#define D_800D73A0 D_800D2020
#define D_800D73AC D_800D202C
#define D_800D73A4 D_800D2024
#define D_800D73B0 D_800D2030
#define D_800D73A8 D_800D2028
#define D_8011FE9C D_80119DDC
#define D_8011FEA0 D_80119DE0
#define D_8011FE98 D_80119DD8
#define D_800CA3D4 D_800C5214
#define D_800D73C4 D_800D2044
#elif defined(VERSION_EU)
#define D_8011FED4 D_8012BE14
#define D_8011FEA4 D_8012BDE4
#define D_800CA374 D_800C5534
#define D_8011FE9C D_8012BDDC
#define D_8011FEA0 D_8012BDE0
#define D_8011FE98 D_8012BDD8
#define D_800CA3D4 D_800C5594
#define D_800D7380 D_800E17A4
#define D_800D7378 D_800E1784
#define D_800D737C D_800E1794
#define D_800D738C D_800E17D4
#define D_800D7384 D_800E17B4
#define D_800D7388 D_800E17C4
#define D_800D7390 D_800E17E4
#define D_800D7394 D_800E17F4
#define D_800D73BC D_800E1894
#define D_800D7360 D_800E1724
#define D_800D73C0 D_800E18A4
#define D_800D7364 D_800E1734
#define D_800D7368 D_800E1744
#define D_800D736C D_800E1754
#define D_800D7398 D_800E1804
#define D_800D739C D_800E1814
#define D_800D73B4 D_800E1874
#define D_800D73B8 D_800E1884
#define D_800D73A0 D_800E1824
#define D_800D73AC D_800E1854
#define D_800D73A4 D_800E1834
#define D_800D73B0 D_800E1864
#define D_800D73A8 D_800E1844
#define D_800E3ABC D_800F00DC
#define D_800D73C4 D_800E18B4
#elif defined(VERSION_EU_X)
#define D_8011FED4 D_80125E14
#define D_8011FEA4 D_80125DE4
#define D_800CA374 D_800C5574
#define D_8011FE9C D_80125DDC
#define D_8011FEA0 D_80125DE0
#define D_8011FE98 D_80125DD8
#define D_800CA3D4 D_800C55D4
#define D_800D7380 D_800DD430
#define D_800D7378 D_800DD418
#define D_800D737C D_800DD424
#define D_800D738C D_800DD454
#define D_800D7384 D_800DD43C
#define D_800D7388 D_800DD448
#define D_800D7390 D_800DD460
#define D_800D7394 D_800DD46C
#define D_800D73BC D_800DD4E4
#define D_800D7360 D_800DD3D0
#define D_800D73C0 D_800DD4F0
#define D_800D7364 D_800DD3DC
#define D_800D7368 D_800DD3E8
#define D_800D736C D_800DD3F4
#define D_800D7398 D_800DD478
#define D_800D739C D_800DD484
#define D_800D73B4 D_800DD4CC
#define D_800D73B8 D_800DD4D8
#define D_800D73A0 D_800DD490
#define D_800D73AC D_800DD4B4
#define D_800D73A4 D_800DD49C
#define D_800D73B0 D_800DD4C0
#define D_800D73A8 D_800DD4A8
#define D_800E3ABC D_800EB29C
#define D_800D73C4 D_800DD4FC
#elif defined(VERSION_DE)
#define D_8011FED4 D_8011BE14
#define D_8011FEA4 D_8011BDE4
#define D_800CA374 D_800C5284
#define D_800D7380 D_800D3354
#define D_800D7378 D_800D334C
#define D_800D737C D_800D3350
#define D_800D738C D_800D3360
#define D_800D7384 D_800D3358
#define D_800D7388 D_800D335C
#define D_800D7390 D_800D3364
#define D_800D7394 de_D_800D3368
#define D_800D73BC de_D_800D3390
#define D_800D7360 D_800D3334
#define D_800D73C0 D_800D3394
#define D_800D7364 D_800D3338
#define D_800D7368 D_800D333C
#define D_800D736C D_800D3340
#define D_800D7398 D_800D336C
#define D_800D739C D_800D3370
#define D_800D73B4 D_800D3388
#define D_800D73B8 D_800D338C
#define D_800D73A0 D_800D3374
#define D_800D73AC D_800D3380
#define D_800D73A4 D_800D3378
#define D_800D73B0 D_800D3384
#define D_800D73A8 D_800D337C
#define D_8011FE9C D_8011BDDC
#define D_8011FEA0 D_8011BDE0
#define D_8011FE98 D_8011BDD8
#define D_800CA3D4 D_800C52E4
#define D_800D73C4 D_800D3398
#endif
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
typedef s32 M2C_UNK;
typedef struct func_8028A924_MenuEntry func_8028A924_MenuEntry;
typedef struct func_8028A924_S1 func_8028A924_S1;
typedef struct func_8028A924_S2 func_8028A924_S2;
typedef struct func_8028A924_S3 func_8028A924_S3;
typedef struct func_8028A924_S4 func_8028A924_S4;
typedef struct func_8028A924_S5 func_8028A924_S5;
void func_80245A68(int);
void func_80245AB8(void);
void func_802537D8(void *, void *);
s32 func_80254224(s32, void **, s32, void *);
void ** func_802543A8(s32, s32, s32, s32, s32, s32, void *);
void func_8028DA50(void *);
int func_8028FE08(int *, int, int);
s32 func_8028FE1C(s32, s32, s32, s32 *);
s32 func_802A1C08(void *, s32, ...);
void * func_802C2490(void *, const void *, int);
s32 func_8041F1B0(s32);
s32 func_8022F444();                   /* extern */
s32 *func_802518DC(); /* extern */
extern M2C_UNK D_285130;
extern func_8028A924_S4 D_80102B00;
extern M2C_UNK D_8011FE88;
extern s32 D_8011FE94;
extern s32 D_8011FE98;
extern s32 *D_8011FE9C;
extern s32 D_8011FEA0;
extern s32 D_8011FEA4;
extern s32 *D_8011FED4;
extern s32 D_8013B294;
extern u8 D_801462D5;
extern func_8028A924_S2 D_80154028;
extern s32 D_8015402C;
extern M2C_UNK D_800CA200;                          /* unable to generate initializer: unknown type */
extern M2C_UNK D_800CA374;                          /* unable to generate initializer: unknown type */
extern M2C_UNK D_800CA380;                          /* unable to generate initializer: unknown type */
extern M2C_UNK D_800CA3AC;                          /* unable to generate initializer: unknown type */
extern M2C_UNK D_800CA3D4;                          /* unable to generate initializer: unknown type */
extern s32 D_800D7330[0xC];
struct func_8028A924_MenuEntry {
    s32 *value;
    char pad4[0x6C];
};
extern func_8028A924_MenuEntry D_800E3ABC[];
extern func_8028A924_S3 *D_800E4680[4];
#if defined(VERSION_EU) || defined(VERSION_EU_X)
struct func_8028A924_Settings { char pad0[0xD]; u8 players; char padE[0x581 - 0xE]; u8 language; };
extern struct func_8028A924_Settings D_801462C8;
#define FORMAT(x) ((x)[settings_modes->language])
#define FIRST_FORMAT(x) ((x)[settings_first->language])
#define MENU_FORMAT(x) ((x)[settings_menu->language])
extern u8 D_80152789;
#define DIRECT_FORMAT(x) ((x)[D_80152789])
#define FORMAT_ARRAY(x) FORMAT(x)
#define FIRST_FORMAT_ARRAY(x) FIRST_FORMAT(x)
extern s32 D_800D7360[];
extern s32 D_800D7364[];
extern s32 D_800D7368[];
extern s32 D_800D736C[];
extern s32 D_800D7370[];
extern s32 D_800D7374[];
extern s32 D_800D7378[];
extern s32 D_800D737C[];
extern s32 D_800D7380[];
extern s32 D_800D7384[];
extern s32 D_800D7388[];
extern s32 D_800D738C[];
extern s32 D_800D7390[];
extern s32 D_800D7394[];
extern s32 D_800D7398[];
extern s32 D_800D739C[];
extern s32 D_800D73A0[];
extern s32 D_800D73A4[];
extern s32 D_800D73A8[];
extern s32 D_800D73AC[];
extern s32 D_800D73B0[];
extern s32 D_800D73B4[];
extern s32 D_800D73B8[];
extern s32 D_800D73BC[];
extern s32 D_800D73C0[];
#else
#define FORMAT(x) (x)
#define FIRST_FORMAT(x) (x)
#define MENU_FORMAT(x) (x)
#define DIRECT_FORMAT(x) (x)
#define FORMAT_ARRAY(x) (*(x))
#define FIRST_FORMAT_ARRAY(x) (*(x))
extern s32 D_800D7360;                 /* const */
extern s32 D_800D7364;                 /* const */
extern s32 D_800D7368;                 /* const */
extern s32 D_800D736C[3]; /* const */
extern s32 D_800D7378;                 /* const */
extern s32 D_800D737C;                 /* const */
extern s32 D_800D7380;                 /* const */
extern s32 D_800D7384;                 /* const */
extern s32 D_800D7388;                 /* const */
extern s32 D_800D738C;                 /* const */
extern s32 D_800D7390;                 /* const */
extern s32 D_800D7394;                 /* const */
extern s32 D_800D7398;                 /* const */
extern s32 D_800D739C;                 /* const */
extern s32 D_800D73A0;                 /* const */
extern s32 D_800D73A4;                 /* const */
extern s32 D_800D73A8;                 /* const */
extern s32 D_800D73AC;                 /* const */
extern s32 D_800D73B0;                 /* const */
extern s32 D_800D73B4;                 /* const */
extern s32 D_800D73B8;                 /* const */
extern s32 D_800D73BC;                 /* const */
extern s32 D_800D73C0;                 /* const */

#endif
extern s32 D_800D73C4[0x36]; 
struct func_8028A924_S1 {
    void* unk0;
    s32 unk4;
};
struct func_8028A924_S2 {
    s32 unk0;
    s32 unk4;
};
struct func_8028A924_S3 {
    char pad0[0x21];
    u8 unk21;
    u8 unk22;
    u8 unk23;
    u8 unk24;
    char pad24[0x3];
    u8 unk28;
};
struct func_8028A924_S4 {
    char pad0[0xF];
    u8 unkF;
};
struct func_8028A924_S5 {
    char pad0[0x4];
    u8 unk4;
};

void func_8028A924(void) {
#if defined(VERSION_EU) || defined(VERSION_EU_X)
    struct func_8028A924_Settings *settings_first;
    struct func_8028A924_Settings *settings_modes;
    struct func_8028A924_Settings *settings_menu;
#endif
    char sp28[40];
    char sp50[40];
    void *sp78;
    s32 sp7C;
    char *var_a0;
    /* FAKEMATCH: preserve the shared buffer address across its first two calls. */
    char *initial_path;
    s32 *temp_v0_3;
    s32 *temp_v0_4;
    s32 temp_a2;
    s32 temp_s0_2;
    /* FAKEMATCH: keep the load address separate from its value for argument scheduling. */
    s32 *load_address;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_a1_5;
    s32 var_a2;
    /* FAKEMATCH: expand the clamp against a separate bound before folding constants. */
    s32 clamp_limit;
    s32 var_a3;
    s32 var_v0;
    u8 temp_s0;
    s32 var_a2_2;
    u8 var_a2_3;
    void **temp_v0_2;
    func_8028A924_S3 *player;
    /* FAKEMATCH: keep the two resource-loader flags live across both loads. */
    s32 load_kind;
    s32 load_flag;
    /* FAKEMATCH: preserve the tested resource size for the duplicate arguments. */
    s32 load_size;
    /* FAKEMATCH: split the tested size from the duplicate loader argument. */
    s32 loader_size_arg;
    s32 menu_index;

    func_80245AB8();
    temp_s3 = D_8015402C;
    temp_v0 = func_8028FE08(D_8011FED4, D_8011FEA4, temp_s3);
    temp_s2 = func_80254224(0, &sp78, temp_v0, &D_800CA200);
    temp_v0_2 = func_802543A8(0, (s32) sp78, 8, temp_v0, (s32) &D_8011FE88, 0, &D_800CA374);
    var_a2 = (((func_8028A924_S1 *)(temp_v0_2))->unk4);
    initial_path = sp28;
    clamp_limit = 0x3F;
    if (clamp_limit < var_a2) {
        var_a2 = 0x3F;
    }
    func_802C2490(initial_path, (((func_8028A924_S1 *)(temp_v0_2))->unk0), var_a2);
    func_802537D8(NULL, temp_v0_2);
    if (D_8013B294 != temp_s3) {
        func_802537D8(NULL, (void *) temp_s2);
    }
    func_80245A68((s32) initial_path);
#if defined(VERSION_EU) || defined(VERSION_EU_X)
    settings_first = &D_801462C8;
    if (settings_first->players != 0) {
#else
    if (D_801462D5 != 0) {
#endif
        switch (D_80154028.unk0) { /* switch 1; irregular */
        case 0:                                     /* switch 1 */
#if defined(VERSION_EU) || defined(VERSION_EU_X)
            if (settings_first->players == 2)
#else
            if (D_801462D5 == 2)
#endif
            {
                var_a1 = FIRST_FORMAT(D_800D7380);
                var_a2_2 = (D_800E4680[0]->unk23);
            } else if ((u8) (D_800E4680[0]->unk23) < 2U) {
                var_a1 = FIRST_FORMAT(D_800D7378);
                var_a2_2 = (D_800E4680[0]->unk23);
            } else {
                var_a1 = FIRST_FORMAT(D_800D737C);
                var_a2_2 = (D_800E4680[0]->unk23);
            }
            goto block_40;
        case 1:                                     /* switch 1 */
#if defined(VERSION_EU) || defined(VERSION_EU_X)
            if (settings_first->players == 2)
#else
            if (D_801462D5 == 2)
#endif
            {
                var_a1 = FIRST_FORMAT(D_800D738C);
                var_a2_2 = (D_800E4680[0]->unk21);
            } else if ((u8) (D_800E4680[0]->unk21) < 2U) {
                var_a1 = FIRST_FORMAT(D_800D7384);
                var_a2_2 = (D_800E4680[0]->unk21);
            } else {
                var_a1 = FIRST_FORMAT(D_800D7388);
                var_a2_2 = (D_800E4680[0]->unk21);
            }
            goto block_40;
        case 2:                                     /* switch 1 */
            if ((u8) (D_800E4680[0]->unk21) < 2U) {
                var_a1 = FIRST_FORMAT(D_800D7390);
                var_a2_2 = (D_800E4680[0]->unk21);
            } else {
                var_a1 = FIRST_FORMAT(D_800D7394);
                var_a2_2 = (D_800E4680[0]->unk21);
            }
            goto block_40;
        case 3:                                     /* switch 1 */
            switch (D_80154028.unk4) { /* switch 2; irregular */
            case 4:                                 /* switch 2 */
                var_a1 = FIRST_FORMAT(D_800D73BC);
                var_a2_2 = FIRST_FORMAT(D_800D7360);
                goto block_40;
            case 9:                                 /* switch 2 */
                func_802A1C08(sp50, FIRST_FORMAT(D_800D73C0), FIRST_FORMAT(D_800D7364), FIRST_FORMAT_ARRAY(D_800D7330));
                goto path_done;
            case 22:                                /* switch 2 */
                var_a1 = FIRST_FORMAT(D_800D73BC);
                var_a2_2 = FIRST_FORMAT(D_800D7368);
                goto block_40;
            case 35:                                /* switch 2 */
                var_a1 = FIRST_FORMAT(D_800D73BC);
                var_a2_2 = FIRST_FORMAT_ARRAY(D_800D736C);
                goto block_40;
            default:                                /* switch 2 */
                player = D_800E4680[0];
#if defined(VERSION_EU) || defined(VERSION_EU_X)
                if (player->unk22 < 2U) {
                    var_a1 = DIRECT_FORMAT(D_800D7398);
                    var_a2_2 = player->unk22;
                } else {
                    var_a1 = DIRECT_FORMAT(D_800D739C);
                    var_a2_2 = player->unk22;
                }
#else
                if (player->unk22 < 2U) {
                    var_a1 = FIRST_FORMAT(D_800D7398);
                } else {
                    var_a1 = FIRST_FORMAT(D_800D739C);
                }
                var_a2_2 = player->unk22;
#endif
                goto block_40;
            }
block_40:
            func_802A1C08(sp50, var_a1, var_a2_2);
            break;
        }
path_done:
#if defined(VERSION_EU) || defined(VERSION_EU_X)
        settings_modes = &D_801462C8;
        temp_s0 = settings_modes->players;
#else
        temp_s0 = D_801462D5;
#endif
        switch (temp_s0) {                          /* switch 3; irregular */
        case 1:                                     /* switch 3 */
            func_80245A68((s32) sp50);
            temp_a2 = ((u32) (func_8022F444(&D_80102B00, D_80102B00.unkF) & 0xFF) >> 1) + 1;
            if (temp_a2 < 2) {
                var_a1_2 = FORMAT(D_800D73B4);
            } else {
                var_a1_2 = FORMAT(D_800D73B8);
            }
            func_802A1C08(sp28, var_a1_2, temp_a2);
            func_80245A68((s32) sp28);
            break;
        case 3:                                     /* switch 3 */
            func_80245A68((s32) sp50);
            if (D_800E4680[0]->unk24 < 61) {
                func_802A1C08(sp28, FORMAT(D_800D73A0), D_800E4680[0]->unk24);
            } else {
                var_a2_3 = (D_800E4680[0]->unk24 / 60) & 0xFF;
                if (var_a2_3 < 2U) {
                    var_a3 = (D_800E4680[0]->unk24 % 60) & 0xFF;
                    if (var_a3 == 0) {
                        func_802A1C08(sp28, FORMAT(D_800D73AC), var_a2_3);
                    } else {
                        func_802A1C08(sp28, FORMAT(D_800D73A4), var_a2_3, var_a3);
                    }
                } else {
                    var_a3 = (D_800E4680[0]->unk24 % 60) & 0xFF;
                    if (var_a3 == 0) {
                        func_802A1C08(sp28, FORMAT(D_800D73B0), var_a2_3);
                    } else {
                        func_802A1C08(sp28, FORMAT(D_800D73A8), var_a2_3, var_a3);
                    }
                }
            }
            func_80245A68((s32) sp28);
            break;
        case 4:                                     /* switch 3 */
            temp_s1 = D_8015402C;
            if ((D_8011FE9C != NULL) && (D_8011FEA0 == temp_s1)) {
                goto block_69;
            }
            func_8028DA50(&D_8011FE88);
            /* FAKEMATCH: the volatile read preserves the loader argument ordering. */
            loader_size_arg = (load_size = *(volatile s32 *)&D_8011FE94);
            if (load_size == 0) {
                goto block_69;
            }
            load_flag = 1;
            load_kind = 0x10;
            temp_v0_3 = func_802518DC(0, loader_size_arg, loader_size_arg, *(load_address = &D_8011FE98), load_kind, 0, NULL, &D_800CA380, load_flag);
            if (temp_v0_3 == NULL) {
                goto block_69;
            }
            load_size = D_8011FE94;
            temp_s0_2 = func_8028FE1C(*temp_v0_3, load_size, temp_s1, &sp7C);
            func_802537D8(NULL, temp_v0_3);
            temp_v0_4 = func_802518DC(0, temp_s0_2, temp_s0_2, sp7C, load_kind, 0, &D_285130, &D_800CA3AC, load_flag);
            D_8011FE9C = temp_v0_4;
            if (temp_v0_4 == NULL) {
                temp_v0_4 = NULL;
                goto menu_ready;
            }
            D_8011FEA0 = temp_s1;
block_69:
            temp_v0_4 = D_8011FE9C;
            if (temp_v0_4 == NULL) {
                temp_v0_4 = NULL;
            } else {
                temp_v0_4 = (s32 *) *temp_v0_4;
            }
menu_ready:
            menu_index = func_8041F1B0((s32) (((func_8028A924_S5 *)(temp_v0_4))->unk4));
#if defined(VERSION_EU) || defined(VERSION_EU_X)
            settings_menu = &D_801462C8;
            func_802A1C08(sp28, (s32) &D_800CA3D4, D_800E3ABC[menu_index].value[settings_menu->language]);
#else
            func_802A1C08(sp28, (s32) &D_800CA3D4, *D_800E3ABC[menu_index].value);
#endif
            func_80245A68((s32) sp28);
            func_80245A68((s32) sp50);
            player = D_800E4680[0];
            if (player->unk28 < 2U) {
                var_a1_5 = MENU_FORMAT(D_800D73B4);
#if defined(VERSION_EU) || defined(VERSION_EU_X)
                var_a2_2 = player->unk28;
#endif
            } else {
                var_a1_5 = MENU_FORMAT(D_800D73B8);
#if defined(VERSION_EU) || defined(VERSION_EU_X)
                var_a2_2 = player->unk28;
#endif
            }
#if defined(VERSION_EU) || defined(VERSION_EU_X)
            func_802A1C08(sp28, var_a1_5, var_a2_2);
#else
            func_802A1C08(sp28, var_a1_5, player->unk28);
#endif
            func_80245A68((s32) sp28);
            break;
        case 2:                                     /* switch 3 */
            func_80245A68((s32) sp50);
            if ((D_80154028.unk0 == 1) || ((D_80154028.unk0 >= 2) && (D_80154028.unk0 == temp_s0))) {
                func_80245A68((s32) FORMAT_ARRAY(D_800D73C4));
            }
            break;
        }
    }
}

#endif

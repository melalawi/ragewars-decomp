/* NON_MATCHING: owner fuzzy candidate; PAL assembly rows remain active. */
#include "shared/menu_state_records.h"
#include "shared/menu_language.h"

/* Returns the message text for an event result from func_804251F4: for results 5001 to 5057 the
   text pointer jtbl_800E1878 selects for the result, where result 5002 picks between two texts by
   bit 0 of func_8022F444 for the first player's current slot; zero for any other result. The
   dispatch and return sit in a one-pass loop, whose weighting gives the text its register as the
   cartridge has it. */


extern Record D_80102B00[];
extern void *jtbl_800E1878[];
extern char *D_800D7510;
extern char *D_800D7514;
extern char *D_800D7518;
extern char *D_800D751C;
extern char *D_800D7520;
extern char *D_800D7524;
extern char *D_800D7528;
extern char *D_800D752C;
extern char *D_800D7530;
extern char *D_800D7534;
extern char *D_800D7538;
extern char *D_800D753C;
extern char *D_800D7540;
extern char *D_800D7544;
extern char *D_800D7548;
extern char *D_800D754C;
extern char *D_800D7550;
extern char *D_800D7554;
extern char *D_800D7558;
extern char *D_800D755C;
extern char *D_800D7560;
extern char *D_800D7564;
extern char *D_800D7568;
extern char *D_800D756C;
extern char *D_800D7570;
extern char *D_800D7574;
extern char *D_800D7578;
extern char *D_800D757C;
extern char *D_800D7580;
extern char *D_800D7584;
extern char *D_800D7588;
extern char *D_800D758C;
extern char *D_800D7590;
extern char *D_800D7594;
extern char *D_800D7598;
extern char *D_800D759C;
extern char *D_800D75A0;
extern s32 func_8022F444(Record *, s32);

#if defined(VERSION_EU)
extern char *D_800E1DE4[];
extern char *D_800E1DF4[];
extern char *D_800E1E04[];
extern char *D_800E1E14[];
extern char *D_800E1E24[];
extern char *D_800E1E34[];
extern char *D_800E1E44[];
extern char *D_800E1E54[];
extern char *D_800E1E64[];
extern char *D_800E1E74[];
extern char *D_800E1E84[];
extern char *D_800E1E94[];
extern char *D_800E1EA4[];
extern char *D_800E1EB4[];
extern char *D_800E1EC4[];
extern char *D_800E1ED4[];
extern char *D_800E1EE4[];
extern char *D_800E1EF4[];
extern char *D_800E1F04[];
extern char *D_800E1F14[];
extern char *D_800E1F24[];
extern char *D_800E1F34[];
extern char *D_800E1F44[];
extern char *D_800E1F64[];
extern char *D_800E1F74[];
extern char *D_800E1F94[];
extern char *D_800E1FA4[];
extern char *D_800E1FB4[];
extern char *D_800E1FC4[];
extern char *D_800E1FD4[];
extern char *D_800E1FE4[];
extern char *D_800E1FF4[];
extern char *D_800E2004[];
extern char *D_800E2014[];
extern char *D_800E2024[];
extern char *eu_D_800E1F54[];
extern char *eu_D_800E1F84[];
#elif defined(VERSION_EU_X)
extern char *D_800DD8E0[];
extern char *D_800DD8EC[];
extern char *D_800DD8F8[];
extern char *D_800DD904[];
extern char *D_800DD910[];
extern char *D_800DD91C[];
extern char *D_800DD928[];
extern char *D_800DD934[];
extern char *D_800DD940[];
extern char *D_800DD94C[];
extern char *D_800DD958[];
extern char *D_800DD964[];
extern char *D_800DD970[];
extern char *D_800DD97C[];
extern char *D_800DD988[];
extern char *D_800DD994[];
extern char *D_800DD9A0[];
extern char *D_800DD9AC[];
extern char *D_800DD9B8[];
extern char *D_800DD9C4[];
extern char *D_800DD9D0[];
extern char *D_800DD9DC[];
extern char *D_800DD9E8[];
extern char *D_800DD9F4[];
extern char *D_800DDA00[];
extern char *D_800DDA0C[];
extern char *D_800DDA18[];
extern char *D_800DDA24[];
extern char *D_800DDA30[];
extern char *D_800DDA3C[];
extern char *D_800DDA48[];
extern char *D_800DDA54[];
extern char *D_800DDA60[];
extern char *D_800DDA6C[];
extern char *D_800DDA78[];
extern char *D_800DDA84[];
extern char *D_800DDA90[];
#endif
#if defined(VERSION_EU) || defined(VERSION_EU_X)
extern u8 D_80152789;
#endif
char *func_804255A8(s32 result) {
    /* FAKEMATCH: retain the recovered resident jump-table labels and one-pass dispatch scheduling. */
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&text_0, &&text_1, &&text_2, &&text_3, &&text_4, &&text_5, &&text_6, &&text_7,
        &&text_8, &&text_9, &&text_10, &&text_11, &&text_12, &&text_13, &&text_14, &&text_15,
        &&text_16, &&text_17, &&text_18, &&text_19, &&text_20, &&text_21, &&text_22, &&text_23,
        &&text_24, &&text_25, &&text_26, &&text_27, &&text_28, &&text_29, &&text_30, &&text_31,
        &&text_32, &&text_33, &&text_34, &&text_35, &&done
    };
    Record *player = D_80102B00;
    char *text = 0;
    u32 index;

    do {
        if (result < 0) {
            goto done;
        }
        index = result - 5001;
        if (index >= 57) {
            goto done;
        }
        goto *jtbl_800E1878[index];
    text_0:
        text = RW_LOCALIZED_TEXT(D_800D7510, D_800E1DE4, D_800DD8E0, D_80152789);
        goto done;
    text_1:
        if ((func_8022F444(player, player->slot) & 1) == 0) {
            text = RW_LOCALIZED_TEXT(D_800D7518, D_800E1E04, D_800DD8F8, D_80152789);
        } else {
            text = RW_LOCALIZED_TEXT(D_800D7514, D_800E1DF4, D_800DD8EC, D_80152789);
        }
        goto done;
    text_2:
        text = RW_LOCALIZED_TEXT(D_800D753C, D_800E1E94, D_800DD964, D_80152789);
        goto done;
    text_3:
        text = RW_LOCALIZED_TEXT(D_800D757C, D_800E1F94, D_800DDA24, D_80152789);
        goto done;
    text_4:
        text = RW_LOCALIZED_TEXT(D_800D7590, D_800E1FE4, D_800DDA60, D_80152789);
        goto done;
    text_5:
        text = RW_LOCALIZED_TEXT(D_800D7548, D_800E1EC4, D_800DD988, D_80152789);
        goto done;
    text_6:
        text = RW_LOCALIZED_TEXT(D_800D7554, D_800E1EF4, D_800DD9AC, D_80152789);
        goto done;
    text_7:
        text = RW_LOCALIZED_TEXT(D_800D7538, D_800E1E84, D_800DD958, D_80152789);
        goto done;
    text_8:
        text = RW_LOCALIZED_TEXT(D_800D7550, D_800E1EE4, D_800DD9A0, D_80152789);
        goto done;
    text_9:
        text = RW_LOCALIZED_TEXT(D_800D758C, D_800E1FD4, D_800DDA54, D_80152789);
        goto done;
    text_10:
        text = RW_LOCALIZED_TEXT(D_800D7580, D_800E1FA4, D_800DDA30, D_80152789);
        goto done;
    text_11:
        text = RW_LOCALIZED_TEXT(D_800D7594, D_800E1FF4, D_800DDA6C, D_80152789);
        goto done;
    text_12:
        text = RW_LOCALIZED_TEXT(D_800D7570, D_800E1F64, D_800DDA00, D_80152789);
        goto done;
    text_13:
        text = RW_LOCALIZED_TEXT(D_800D7540, D_800E1EA4, D_800DD970, D_80152789);
        goto done;
    text_14:
        text = RW_LOCALIZED_TEXT(D_800D751C, D_800E1E14, D_800DD904, D_80152789);
        goto done;
    text_15:
        text = RW_LOCALIZED_TEXT(D_800D756C, eu_D_800E1F54, D_800DD9F4, D_80152789);
        goto done;
    text_16:
        text = RW_LOCALIZED_TEXT(D_800D7568, D_800E1F44, D_800DD9E8, D_80152789);
        goto done;
    text_17:
        text = RW_LOCALIZED_TEXT(D_800D7578, eu_D_800E1F84, D_800DDA18, D_80152789);
        goto done;
    text_18:
        text = RW_LOCALIZED_TEXT(D_800D7564, D_800E1F34, D_800DD9DC, D_80152789);
        goto done;
    text_19:
        text = RW_LOCALIZED_TEXT(D_800D7544, D_800E1EB4, D_800DD97C, D_80152789);
        goto done;
    text_20:
        text = RW_LOCALIZED_TEXT(D_800D7574, D_800E1F74, D_800DDA0C, D_80152789);
        goto done;
    text_21:
        text = RW_LOCALIZED_TEXT(D_800D7524, D_800E1E34, D_800DD91C, D_80152789);
        goto done;
    text_22:
        text = RW_LOCALIZED_TEXT(D_800D7520, D_800E1E24, D_800DD910, D_80152789);
        goto done;
    text_23:
        text = RW_LOCALIZED_TEXT(D_800D7598, D_800E2004, D_800DDA78, D_80152789);
        goto done;
    text_24:
        text = RW_LOCALIZED_TEXT(D_800D7558, D_800E1F04, D_800DD9B8, D_80152789);
        goto done;
    text_25:
        text = RW_LOCALIZED_TEXT(D_800D7588, D_800E1FC4, D_800DDA48, D_80152789);
        goto done;
    text_26:
        text = RW_LOCALIZED_TEXT(D_800D755C, D_800E1F14, D_800DD9C4, D_80152789);
        goto done;
    text_27:
        text = RW_LOCALIZED_TEXT(D_800D754C, D_800E1ED4, D_800DD994, D_80152789);
        goto done;
    text_28:
        text = RW_LOCALIZED_TEXT(D_800D759C, D_800E2014, D_800DDA84, D_80152789);
        goto done;
    text_29:
        text = RW_LOCALIZED_TEXT(D_800D7534, D_800E1E74, D_800DD94C, D_80152789);
        goto done;
    text_30:
        text = RW_LOCALIZED_TEXT(D_800D7584, D_800E1FB4, D_800DDA3C, D_80152789);
        goto done;
    text_31:
        text = RW_LOCALIZED_TEXT(D_800D75A0, D_800E2024, D_800DDA90, D_80152789);
        goto done;
    text_32:
        text = RW_LOCALIZED_TEXT(D_800D7560, D_800E1F24, D_800DD9D0, D_80152789);
        goto done;
    text_33:
        text = RW_LOCALIZED_TEXT(D_800D7528, D_800E1E44, D_800DD928, D_80152789);
        goto done;
    text_34:
        text = RW_LOCALIZED_TEXT(D_800D752C, D_800E1E54, D_800DD934, D_80152789);
        goto done;
    text_35:
        text = RW_LOCALIZED_TEXT(D_800D7530, D_800E1E64, D_800DD940, D_80152789);
    done:
        return text;
    } while (0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800D2190_4[] = {0x80, 0x0C, 0xF5, 0x40};
const unsigned char unbake_rodata_800D2194_4[] = {0x80, 0x0C, 0xF5, 0x60};
const unsigned char unbake_rodata_800D2198_4[] = {0x80, 0x0C, 0xF5, 0x94};
const unsigned char unbake_rodata_800D219C_4[] = {0x80, 0x0C, 0xF5, 0xC4};
const unsigned char unbake_rodata_800D21A0_4[] = {0x80, 0x0C, 0xF5, 0xF0};
const unsigned char unbake_rodata_800D21A4_4[] = {0x80, 0x0C, 0xF6, 0x1C};
const unsigned char unbake_rodata_800D21A8_4[] = {0x80, 0x0C, 0xF6, 0x48};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D7510_4[] = {0x80, 0x0D, 0x48, 0xC0};
const unsigned char unbake_rodata_800D7514_4[] = {0x80, 0x0D, 0x48, 0xE0};
const unsigned char unbake_rodata_800D7518_4[] = {0x80, 0x0D, 0x49, 0x14};
const unsigned char unbake_rodata_800D751C_4[] = {0x80, 0x0D, 0x49, 0x44};
const unsigned char unbake_rodata_800D7520_4[] = {0x80, 0x0D, 0x49, 0x70};
const unsigned char unbake_rodata_800D7524_4[] = {0x80, 0x0D, 0x49, 0x9C};
const unsigned char unbake_rodata_800D7528_4[] = {0x80, 0x0D, 0x49, 0xC8};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800D34E4_4[] = {0x80, 0x0D, 0x04, 0x80};
const unsigned char unbake_rodata_800D34E8_4[] = {0x80, 0x0D, 0x04, 0xAC};
const unsigned char unbake_rodata_800D34EC_4[] = {0x80, 0x0D, 0x04, 0xE0};
const unsigned char unbake_rodata_800D34F0_4[] = {0x80, 0x0D, 0x05, 0x18};
const unsigned char unbake_rodata_800D34F4_4[] = {0x80, 0x0D, 0x05, 0x4C};
const unsigned char unbake_rodata_800D34F8_4[] = {0x80, 0x0D, 0x05, 0x7C};
const unsigned char unbake_rodata_800D34FC_4[] = {0x80, 0x0D, 0x05, 0xB4};
#endif

#include "common/types.h"
#include "span_16E000/code_804233DC.h"
#include "span_16E000/types.h"

/* NON_MATCHING: owner fuzzy candidate; PAL assembly rows remain active. */

/* Returns the message text for an event result from func_80425014_de: for results 5001 to 5057 the
   text pointer jtbl_800DD848 selects for the result, where result 5002 picks between two texts by
   bit 0 of func_8022F454_de for the first player's current slot; zero for any other result. The
   dispatch and return sit in a one-pass loop, whose weighting gives the text its register as the
   cartridge has it. */


extern Record_func_80433914_de D_800FEB00[];
extern void *jtbl_800DD848[];
extern char *D_800D34E4;
extern char *D_800D34E8;
extern char *D_800D34EC;
extern char *D_800D34F0;
extern char *D_800D34F4;
extern char *D_800D34F8;
extern char *D_800D34FC;
extern char *D_800D3500;
extern char *D_800D3504;
extern char *D_800D3508;
extern char *D_800D350C;
extern char *D_800D3510;
extern char *D_800D3514;
extern char *D_800D3518;
extern char *D_800D351C;
extern char *D_800D3520;
extern char *D_800D3524;
extern char *D_800D3528;
extern char *D_800D352C;
extern char *D_800D3530;
extern char *D_800D3534;
extern char *D_800D3538;
extern char *D_800D353C;
extern char *D_800D3540;
extern char *D_800D3544;
extern char *D_800D3548;
extern char *D_800D354C;
extern char *D_800D3550;
extern char *D_800D3554;
extern char *D_800D3558;
extern char *D_800D355C;
extern char *D_800D3560;
extern char *D_800D3564;
extern char *D_800D3568;
extern char *D_800D356C;
extern char *D_800D3570;
extern char *D_800D3574;
extern s32 func_8022F454_de(Record_func_80433914_de *, s32);

#if defined(VERSION_EU)
extern char *D_800E1DE4[];
extern char *D_800E1DF4[];
extern char *D_800E1E04[];
extern char *D_800E1E14[];
extern char *D_800E1E24_eu[];
extern char *D_800E1E34[];
extern char *D_800E1E44[];
extern char *D_800E1E54[];
extern char *D_800E1E64[];
extern char *D_800E1E74[];
extern char *D_800E1E84[];
extern char *D_800E1E94[];
extern char *D_800E1EA4_eu[];
extern char *D_800E1EB4[];
extern char *D_800E1EC4[];
extern char *D_800E1ED4[];
extern char *D_800E1EE4[];
extern char *D_800E1EF4[];
extern char *D_800E1F04_eu[];
extern char *D_800E1F14[];
extern char *D_800E1F24[];
extern char *D_800E1F34_eu[];
extern char *D_800E1F44_eu[];
extern char *D_800E1F64_eu[];
extern char *D_800E1F74_eu[];
extern char *D_800E1F94[];
extern char *D_800E1FA4[];
extern char *D_800E1FB4_eu[];
extern char *D_800E1FC4[];
extern char *D_800E1FD4[];
extern char *D_800E1FE4[];
extern char *D_800E1FF4[];
extern char *D_800E2004_eu[];
extern char *D_800E2014[];
extern char *D_800E2024[];
extern char *D_800E1F54_eu[];
extern char *D_800E1F84_eu[];
#elif defined(VERSION_EU_X)
extern char *D_800E1DE4[];
extern char *D_800E1DF4[];
extern char *D_800E1E04[];
extern char *D_800E1E14[];
extern char *D_800E1E24_eu[];
extern char *D_800E1E34[];
extern char *D_800E1E44[];
extern char *D_800E1E54[];
extern char *D_800E1E64[];
extern char *D_800E1E74[];
extern char *D_800E1E84[];
extern char *D_800E1E94[];
extern char *D_800E1EA4_eu[];
extern char *D_800E1EB4[];
extern char *D_800E1EC4[];
extern char *D_800E1ED4[];
extern char *D_800E1EE4_eu[];
extern char *D_800E1EF4[];
extern char *D_800DD9B8[];
extern char *D_800E1F14[];
extern char *D_800E1F24[];
extern char *D_800E1F34_eu[];
extern char *D_800E1F44_eu[];
extern char *D_800E1F54_eu[];
extern char *D_800E1F64_eu[];
extern char *D_800E1F74_eu[];
extern char *D_800E1F84_eu[];
extern char *D_800E1F94_eu[];
extern char *D_800E1FA4[];
extern char *D_800E1FB4_eu[];
extern char *D_800E1FC4_eu[];
extern char *D_800E1FD4_eu[];
extern char *D_800E1FE4[];
extern char *D_800E1FF4[];
extern char *D_800DDA78[];
extern char *D_800E2014[];
extern char *D_800DDA90[];
#endif
#if defined(VERSION_EU) || defined(VERSION_EU_X)
extern u8 D_80152789;
#endif
char *func_804253C8_de(s32 result) {
    /* FAKEMATCH: retain the recovered resident jump-table labels and one-pass dispatch scheduling. */
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&text_0, &&text_1, &&text_2, &&text_3, &&text_4, &&text_5, &&text_6, &&text_7,
        &&text_8, &&text_9, &&text_10, &&text_11, &&text_12, &&text_13, &&text_14, &&text_15,
        &&text_16, &&text_17, &&text_18, &&text_19, &&text_20, &&text_21, &&text_22, &&text_23,
        &&text_24, &&text_25, &&text_26, &&text_27, &&text_28, &&text_29, &&text_30, &&text_31,
        &&text_32, &&text_33, &&text_34, &&text_35, &&done
    };
    Record_func_80433914_de *player = D_800FEB00;
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
        goto *jtbl_800DD848[index];
    text_0:
        text = RW_LOCALIZED_TEXT(D_800D34E4, D_800E1DE4, D_800E1DE4, D_80152789);
        goto done;
    text_1:
        if ((func_8022F454_de(player, player->slot) & 1) == 0) {
            text = RW_LOCALIZED_TEXT(D_800D34EC, D_800E1E04, D_800E1E04, D_80152789);
        } else {
            text = RW_LOCALIZED_TEXT(D_800D34E8, D_800E1DF4, D_800E1DF4, D_80152789);
        }
        goto done;
    text_2:
        text = RW_LOCALIZED_TEXT(D_800D3510, D_800E1E94, D_800E1E94, D_80152789);
        goto done;
    text_3:
        text = RW_LOCALIZED_TEXT(D_800D3550, D_800E1F94, D_800E1F94_eu, D_80152789);
        goto done;
    text_4:
        text = RW_LOCALIZED_TEXT(D_800D3564, D_800E1FE4, D_800E1FE4, D_80152789);
        goto done;
    text_5:
        text = RW_LOCALIZED_TEXT(D_800D351C, D_800E1EC4, D_800E1EC4, D_80152789);
        goto done;
    text_6:
        text = RW_LOCALIZED_TEXT(D_800D3528, D_800E1EF4, D_800E1EF4, D_80152789);
        goto done;
    text_7:
        text = RW_LOCALIZED_TEXT(D_800D350C, D_800E1E84, D_800E1E84, D_80152789);
        goto done;
    text_8:
        text = RW_LOCALIZED_TEXT(D_800D3524, D_800E1EE4, D_800E1EE4_eu, D_80152789);
        goto done;
    text_9:
        text = RW_LOCALIZED_TEXT(D_800D3560, D_800E1FD4, D_800E1FD4_eu, D_80152789);
        goto done;
    text_10:
        text = RW_LOCALIZED_TEXT(D_800D3554, D_800E1FA4, D_800E1FA4, D_80152789);
        goto done;
    text_11:
        text = RW_LOCALIZED_TEXT(D_800D3568, D_800E1FF4, D_800E1FF4, D_80152789);
        goto done;
    text_12:
        text = RW_LOCALIZED_TEXT(D_800D3544, D_800E1F64_eu, D_800E1F64_eu, D_80152789);
        goto done;
    text_13:
        text = RW_LOCALIZED_TEXT(D_800D3514, D_800E1EA4_eu, D_800E1EA4_eu, D_80152789);
        goto done;
    text_14:
        text = RW_LOCALIZED_TEXT(D_800D34F0, D_800E1E14, D_800E1E14, D_80152789);
        goto done;
    text_15:
        text = RW_LOCALIZED_TEXT(D_800D3540, D_800E1F54_eu, D_800E1F54_eu, D_80152789);
        goto done;
    text_16:
        text = RW_LOCALIZED_TEXT(D_800D353C, D_800E1F44_eu, D_800E1F44_eu, D_80152789);
        goto done;
    text_17:
        text = RW_LOCALIZED_TEXT(D_800D354C, D_800E1F84_eu, D_800E1F84_eu, D_80152789);
        goto done;
    text_18:
        text = RW_LOCALIZED_TEXT(D_800D3538, D_800E1F34_eu, D_800E1F34_eu, D_80152789);
        goto done;
    text_19:
        text = RW_LOCALIZED_TEXT(D_800D3518, D_800E1EB4, D_800E1EB4, D_80152789);
        goto done;
    text_20:
        text = RW_LOCALIZED_TEXT(D_800D3548, D_800E1F74_eu, D_800E1F74_eu, D_80152789);
        goto done;
    text_21:
        text = RW_LOCALIZED_TEXT(D_800D34F8, D_800E1E34, D_800E1E34, D_80152789);
        goto done;
    text_22:
        text = RW_LOCALIZED_TEXT(D_800D34F4, D_800E1E24_eu, D_800E1E24_eu, D_80152789);
        goto done;
    text_23:
        text = RW_LOCALIZED_TEXT(D_800D356C, D_800E2004_eu, D_800DDA78, D_80152789);
        goto done;
    text_24:
        text = RW_LOCALIZED_TEXT(D_800D352C, D_800E1F04_eu, D_800DD9B8, D_80152789);
        goto done;
    text_25:
        text = RW_LOCALIZED_TEXT(D_800D355C, D_800E1FC4, D_800E1FC4_eu, D_80152789);
        goto done;
    text_26:
        text = RW_LOCALIZED_TEXT(D_800D3530, D_800E1F14, D_800E1F14, D_80152789);
        goto done;
    text_27:
        text = RW_LOCALIZED_TEXT(D_800D3520, D_800E1ED4, D_800E1ED4, D_80152789);
        goto done;
    text_28:
        text = RW_LOCALIZED_TEXT(D_800D3570, D_800E2014, D_800E2014, D_80152789);
        goto done;
    text_29:
        text = RW_LOCALIZED_TEXT(D_800D3508, D_800E1E74, D_800E1E74, D_80152789);
        goto done;
    text_30:
        text = RW_LOCALIZED_TEXT(D_800D3558, D_800E1FB4_eu, D_800E1FB4_eu, D_80152789);
        goto done;
    text_31:
        text = RW_LOCALIZED_TEXT(D_800D3574, D_800E2024, D_800DDA90, D_80152789);
        goto done;
    text_32:
        text = RW_LOCALIZED_TEXT(D_800D3534, D_800E1F24, D_800E1F24, D_80152789);
        goto done;
    text_33:
        text = RW_LOCALIZED_TEXT(D_800D34FC, D_800E1E44, D_800E1E44, D_80152789);
        goto done;
    text_34:
        text = RW_LOCALIZED_TEXT(D_800D3500, D_800E1E54, D_800E1E54, D_80152789);
        goto done;
    text_35:
        text = RW_LOCALIZED_TEXT(D_800D3504, D_800E1E64, D_800E1E64, D_80152789);
    done:
        return text;
    } while (0);
}

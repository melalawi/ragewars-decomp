#include "basetypes.h"

/* Returns the index of the first of the 36 pixel formats in D_800E2B20 whose words 1, 2 and 5 to 8 equal the same words of format arg0, or zero when none does. */
typedef struct Format {
    s32 word[13];
} Format;

extern Format D_800E2B20[];

s32 func_80412D60(Format *format) {
    s32 i;

    for (i = 0; i < 36; i++) {
        if (D_800E2B20[i].word[1] == format->word[1] && D_800E2B20[i].word[2] == format->word[2] &&
            D_800E2B20[i].word[5] == format->word[5] && D_800E2B20[i].word[6] == format->word[6] &&
            D_800E2B20[i].word[7] == format->word[7] && D_800E2B20[i].word[8] == format->word[8]) {
            return i;
        }
    }
    return 0;
}

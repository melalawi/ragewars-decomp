/* Checks the entered code D_800E5CAC against the twelve cheat codes of D_0044FB90 (each stored with
   every character xored with its index): for each one that matches, ors its flags into the cheat word of D_801462C8,
   copies them to D_8013B2D4, records its index in D_80154030 (-1 when none) and plays its sound. */
#include "basetypes.h"

typedef struct {
    u8 *code;
    s32 unk4;
    s32 flags;
    s32 sound;
} CheatCode;

extern CheatCode D_0044FB90[];
extern u8 D_800E5CAC[];
typedef struct {
    s32 unk0;
    s32 cheats;
} Settings;

extern Settings D_801462C8;
extern s32 D_8013B2D4;
extern s32 D_80154030;

extern s32 func_802C24F0(u8 *);
extern void func_8025DF54(s32);

s32 func_8043CFD8(void)
{
    u32 i;
    s32 j;
    s32 match;
    s32 hasSound; /* FAKEMATCH: flag local orders the sound load before the D_80154030 store */
    Settings *settings;
    u8 *code;

    D_80154030 = -1;
    for (i = 0; i < 12; i++) {
        code = D_0044FB90[i].code;
        j = 0;
        if (func_802C24F0(code) != func_802C24F0(D_800E5CAC)) {
            match = 0;
        } else {
            for (;;) {
                if (j < func_802C24F0(code)) {
                    if ((code[j] ^ j) != D_800E5CAC[j]) {
                        match = 0;
                        break;
                    }
                    j++;
                } else {
                    match = 1;
                    break;
                }
            }
        }
        if (match) {
            D_801462C8.cheats |= D_0044FB90[i].flags;
            settings = &D_801462C8;
            do {
                D_8013B2D4 = settings->cheats;
            } while (0);
            hasSound = D_0044FB90[i].sound != 0;
            D_80154030 = i;
            if (hasSound) {
                func_8025DF54((s16)D_0044FB90[i].sound);
            }
        }
    }
    return 0;
}

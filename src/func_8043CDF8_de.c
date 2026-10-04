#include "common/types.h"
#include "span_166000/code_80426234.h"
#include "types.h"
/* Checks the entered code D_800E5CAC against the twelve cheat codes of D_0044FB90 (each stored with
   every character xored with its index): for each one that matches, ors its flags into the cheat word of D_801462C8,
   copies them to D_8013B2D4, records its index in D_80154030 (-1 when none) and plays its sound. */



extern CheatCode D_0044EF40[];
extern u8 D_800E1C5C[];


extern struct Shape_func_802764D4_de_2 D_80142208_de;

extern s32 D_8014DDA0;

extern s32 func_802BD400_de(u8 *);
extern void func_8025DF34_de(s32);

s32 func_8043CDF8_de(void)
{
    u32 i;
    s32 j;
    s32 match;
    s32 hasSound; /* FAKEMATCH: flag local orders the sound load before the D_80154030 store */
    struct Shape_func_802764D4_de_2 *settings;
    u8 *code;

    D_8014DDA0 = -1;
    for (i = 0; i < 12; i++) {
        code = D_0044EF40[i].code;
        j = 0;
        if (func_802BD400_de(code) != func_802BD400_de(D_800E1C5C)) {
            match = 0;
        } else {
            for (;;) {
                if (j < func_802BD400_de(code)) {
                    if ((code[j] ^ j) != D_800E1C5C[j]) {
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
            D_80142208_de.field_4 |= D_0044EF40[i].flags;
            settings = &D_80142208_de;
            do {
                D_80137214 = settings->field_4;
            } while (0);
            hasSound = D_0044EF40[i].sound != 0;
            D_8014DDA0 = i;
            if (hasSound) {
                func_8025DF34_de((s16)D_0044EF40[i].sound);
            }
        }
    }
    return 0;
}

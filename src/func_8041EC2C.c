/* Returns the score of the three entries: 5, 10 or 20 points by kind for each active one, repeating the previous award for other kinds. */
#include "basetypes.h"

typedef struct {
    s32 owner;
    s32 kind;
    char pad8[0x14];
} Entry;

extern Entry D_80153F80[];

s32 func_8041EC2C(void) {
    s32 score;
    s32 points;
    s32 i;

    score = 0;
    points = 0;
    for (i = 0; i < 3; i++) {
        if (D_80153F80[i].owner >= 0) {
            switch (D_80153F80[i].kind) {
            case 0:
                points = 5;
                break;
            case 1:
                points = 10;
                break;
            case 2:
                points = 20;
                break;
            }
            score += points;
        }
    }
    return score;
}

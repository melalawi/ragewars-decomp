#include "basetypes.h"

/* Returns whether an index lies inside the table bound D_80153C40, from zero up to but not
   including it. */
extern s16 D_80153C40;

s32 func_80411E70(s32 index) {
    if (index >= 0 && index < D_80153C40) {
        return 1;
    }
    return 0;
}

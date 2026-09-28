#include "basetypes.h"

/* Returns whether func_80442020 gives a non-zero answer for the third argument. */
extern s32 func_80442020(void *);

s32 func_804424F4(void *first, void *second, void *third) {
    return func_80442020(third) != 0;
}

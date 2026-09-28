#include "basetypes.h"

/* Calls func_80442934 with the third argument, the second argument and the resource D_4503E8,
   and returns one. */
extern char D_4503E8[];
extern void func_80442934(void *, void *, void *);

s32 func_8043EE10(void *first, void *second, void *third) {
    func_80442934(third, second, D_4503E8);
    return 1;
}

#include "basetypes.h"

/* Calls func_80442934 with the third argument, the second argument and the resource D_451BD4,
   and returns one. */
extern char D_451BD4[];
extern void func_80442934(void *, void *, void *);

s32 func_804459A4(void *first, void *second, void *third) {
    func_80442934(third, second, D_451BD4);
    return 1;
}

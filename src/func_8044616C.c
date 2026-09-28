#include "basetypes.h"

/* Calls func_80442934 with the third argument, the second argument and the resource D_451E38,
   and returns one. */
extern char D_451E38[];
extern void func_80442934(void *, void *, void *);

s32 func_8044616C(void *first, void *second, void *third) {
    func_80442934(third, second, D_451E38);
    return 1;
}

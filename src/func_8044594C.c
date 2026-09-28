#include "basetypes.h"

/* Calls func_80442934 with the third argument, the second argument and the resource D_4500F4,
   and returns one. */
extern char D_4500F4[];
extern void func_80442934(void *, void *, void *);

s32 func_8044594C(void *first, void *second, void *third) {
    func_80442934(third, second, D_4500F4);
    return 1;
}

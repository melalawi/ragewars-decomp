#include "basetypes.h"

/* Calls func_80442934 with the third argument, the second argument and the resource D_4500F4,
   and returns one. */
extern char D_4500F4[];
extern char D_451AF0[];
extern void func_80442934(void *, void *, void *);

s32 func_8044594C(void *first, void *second, void *third) {
#if defined(VERSION_EU)
    func_80442934(third, second, D_451AF0);
#elif defined(VERSION_EU_X)
    func_80442934(third, second, D_451AF0);
#else
    func_80442934(third, second, D_4500F4);
#endif
    return 1;
}

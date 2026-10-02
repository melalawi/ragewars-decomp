#include "basetypes.h"

/* Calls func_80442934 with the third argument, the second argument and the resource D_451AF0,
   and returns one. */
extern char D_451AF0[];
extern char D_451B34[];
extern char D_451C64[];
extern void func_80442934(void *, void *, void *);

s32 func_80445920(void *first, void *second, void *third) {
#if defined(VERSION_EU)
    func_80442934(third, second, D_451B34);
#elif defined(VERSION_EU_X)
    func_80442934(third, second, D_451C64);
#else
    func_80442934(third, second, D_451AF0);
#endif
    return 1;
}

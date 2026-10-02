#include "basetypes.h"

/* Calls func_80442934 with the third argument, the second argument and the resource D_4503E8,
   and returns one. */
extern char D_4503E8[];
extern char D_4500F4[];
extern void func_80442934(void *, void *, void *);

s32 func_80445978(void *first, void *second, void *third) {
#if defined(VERSION_EU)
    func_80442934(third, second, D_4500F4);
#elif defined(VERSION_EU_X)
    func_80442934(third, second, D_4500F4);
#else
    func_80442934(third, second, D_4503E8);
#endif
    return 1;
}

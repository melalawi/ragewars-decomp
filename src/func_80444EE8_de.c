#include "span_16E000/code_80444F9C.h"
#include "types.h"

/* Calls func_804427C4_de with the third argument, the second argument and the resource D_451AF0,
   and returns one. */
extern char D_00450E9C[];
extern char D_00451B34[];
extern char D_00451C64[];
extern void func_804427C4_de(void *, void *, void *);

s32 func_80444EE8_de(void *first, void *second, void *third) {
#if defined(VERSION_EU)
    func_804427C4_de(third, second, D_00451B34);
#elif defined(VERSION_EU_X)
    func_804427C4_de(third, second, D_00451C64);
#else
    func_804427C4_de(third, second, D_00450E9C);
#endif
    return 1;
}

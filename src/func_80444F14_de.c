#include "span_16E000/code_80444F9C.h"
#include "types.h"

/* Calls func_804427C4_de with the third argument, the second argument and the resource D_4500F4,
   and returns one. */
extern char D_0044F4A4[];
extern char D_00450E9C[];
extern void func_804427C4_de(void *, void *, void *);

s32 func_80444F14_de(void *first, void *second, void *third) {
#if defined(VERSION_EU)
    func_804427C4_de(third, second, D_00450E9C);
#elif defined(VERSION_EU_X)
    func_804427C4_de(third, second, D_00450E9C);
#else
    func_804427C4_de(third, second, D_0044F4A4);
#endif
    return 1;
}

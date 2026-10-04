#include "span_16E000/code_80445CE8.h"
#include "types.h"

/* Calls func_804427C4_de with the third argument, the second argument and the resource D_451E38,
   and returns one. */
extern char D_00451E38[];
extern void func_804427C4_de(void *, void *, void *);

s32 func_8044616C_us_rev1(void *first, void *second, void *third) {
    func_804427C4_de(third, second, D_00451E38);
    return 1;
}

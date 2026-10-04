#include "span_16E000/code_80444F9C.h"
#include "types.h"

/* Calls func_804427C4_de with the third argument, the second argument and the resource D_4514B4,
   and returns one. */
extern char D_00450884[];
extern void func_804427C4_de(void *, void *, void *);

s32 func_80444EBC_de(void *first, void *second, void *third) {
    func_804427C4_de(third, second, D_00450884);
    return 1;
}

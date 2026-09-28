#include "basetypes.h"

/* Calls func_80442934 with the third argument, the second argument and the resource D_450C18,
   and returns one. */
extern char D_450C18[];
extern void func_80442934(void *, void *, void *);

s32 func_8043EEF0(void *first, void *second, void *third) {
    func_80442934(third, second, D_450C18);
    return 1;
}

#include "basetypes.h"

/* Calls func_8025E3A4 and then returns what func_804424F4 gives for the same three arguments. */
extern void func_8025E3A4();
extern s32 func_804424F4(void *, void *, void *);

s32 func_8043F238(void *first, void *second, void *third) {
    func_8025E3A4();
    return func_804424F4(first, second, third);
}

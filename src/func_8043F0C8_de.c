#include "span_16E000/code_8043EEC0.h"
#include "types.h"

/* Calls func_8025E384_de and then returns what func_80442384_de gives for the same three arguments. */
extern void func_8025E384_de();
extern s32 func_80442384_de(void *, void *, void *);

s32 func_8043F0C8_de(void *first, void *second, void *third) {
    func_8025E384_de();
    return func_80442384_de(first, second, third);
}

#include "common/types.h"
#include "span_1000/code_8025DB64.h"
#include "types.h"


extern s32 D_80109E0C;


void func_8025E2D4_de(s32 a) {
    if (D_801427D0 == 0) {
        s32 *p = &D_80109E0C;
        if (*p != a) {
            *p = a;
            if (a == 0) {
                func_8025E318_de();
            }
        }
    }
}

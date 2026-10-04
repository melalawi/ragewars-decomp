#include "span_1000/code_80203B1C.h"
#include "span_1000/types.h"
#include "types.h"

extern s32 func_80285F58_de(void *, void *);
extern s32 D_8011BDC8;




void func_80203C40_de(void *arg0) {
    if (func_80285F58_de(&D_8011BDC8, arg0) == 0) {
        ((func_80203C40_S1 *)(arg0))->unk100 |= 0x2100;
    }
}

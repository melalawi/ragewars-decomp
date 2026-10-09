#include "span_1000/code_80275E44.h"
#include "types.h"

extern void *func_8028B2F8_de(char *arg0, s32 arg1);
extern char D_8011FE88;




u8 func_80276088_de(s32 arg0) {
    void *temp = func_8028B2F8_de(&D_8011FE88, arg0);
    if (temp == 0) {
        return 0;
    }
    return ((func_802760F8_S1 *)(temp))->unk59;
}

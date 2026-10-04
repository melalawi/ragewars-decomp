#include "span_1000/code_8024E6C8.h"
#include "types.h"

extern char D_8011BDC8;
extern int func_8028B25C_de(void *arg0, int arg1);




int func_8024E924_de(void *arg0) {
    if (*(u8 *)arg0 == 1) {
        return ((func_8024E914_S1 *)(arg0))->unkE4;
    }
    return func_8028B25C_de(&D_8011BDC8, ((func_8024E914_S1 *)(arg0))->unk4);
}

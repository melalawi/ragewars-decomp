#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8024E914.h"
#include "types.h"

extern char D_8011BDC8;
extern int func_8028B25C_de(void *arg0, int arg1);




int func_8024E924_de(void *arg0) {
    if (*(u8 *)arg0 == 1) {
        return ((func_8024E914_S1 *)(arg0))->unkE4;
    }
    return func_8028B25C_de(&D_8011BDC8, ((func_8024E914_S1 *)(arg0))->unk4);
}

/** Return the selected record field, or negative one for another type. */
int func_8024E968_de(void *record) {
    int result = -1;
    if (*(unsigned char *)record == 1) {
        result = ((func_8023EBEC_S1 *)(record))->unk3C;
    }
    return result;
}

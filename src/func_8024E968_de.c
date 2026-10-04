#include "span_1000/code_8024E6C8.h"
#include "span_1000/types.h"



/** Return the selected record field, or negative one for another type. */
int func_8024E968_de(void *record) {
    int result = -1;
    if (*(unsigned char *)record == 1) {
        result = ((func_8023EBEC_S1 *)(record))->unk3C;
    }
    return result;
}

#include "span_1000/code_802BF740.h"
#include "span_1000/types.h"
extern void *D_800D5270;




/** Return offset 0x14 from the supplied object or the default global object. */
unsigned int func_802BAD80_de(void *object) {
    if (object == 0) {
        object = D_800D5270;
    }
    return ((func_80205494_S3 *)(object))->unk14;
}

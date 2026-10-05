#include "span_1000/code_802BAC58.h"
#include "common/types_1dc8418c21db.h"

/** Return the global word at D_800D92A4. */
extern int D_800D5274;

int func_802BAD70_de(void) {
    return D_800D5274;
}

extern void *D_800D5270;




/** Return offset 0x14 from the supplied object or the default global object. */
unsigned int func_802BAD80_de(void *object) {
    if (object == 0) {
        object = D_800D5270;
    }
    return ((func_80205494_S3 *)(object))->unk14;
}

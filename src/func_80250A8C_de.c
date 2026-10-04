#include "span_1000/code_8024F944.h"
#include "span_1000/types.h"



/** Read the signed byte at offset 0xE from the object's linked record. */
signed char func_80250A8C_de(void *object) {
    void *linked = ((func_80205314_S1 *)(object))->unk18;
    return ((signed char *)linked)[0xE];
}

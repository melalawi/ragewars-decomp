#include "span_1000/code_8024E6C8.h"
#include "span_1000/types.h"
/** Stores D_800D2988 times the float at 0x20 of the object at 0x18 in the float at 0x1A4. */
extern float D_800CD738;





void func_8024F618_de(void *arg0) {
    void *p = ((func_8024F608_S1 *)(arg0))->unk18;
    ((func_8024F608_S1 *)(arg0))->unk1A4 = (D_800CD738) * (((func_8022CA04_S3 *)(p))->unk20);
}

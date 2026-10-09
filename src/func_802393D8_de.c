#include "span_1000/code_80233920.h"

extern float D_800C8630;



/** Reset the object fields from 0xFC through 0x118. */
void func_802393D8_de(void *arg0) {
    float value = D_800C8630;
    ((func_802393C8_S1 *)(arg0))->unkFC = 0;
    ((func_802393C8_S1 *)(arg0))->unk100 = 0;
    ((func_802393C8_S1 *)(arg0))->unk104 = 0;
    ((func_802393C8_S1 *)(arg0))->unk108 = 0;
    ((func_802393C8_S1 *)(arg0))->unk10C = 0;
    ((func_802393C8_S1 *)(arg0))->unk118 = 0;
    ((func_802393C8_S1 *)(arg0))->unk110 = value;
    ((func_802393C8_S1 *)(arg0))->unk114 = value;
}

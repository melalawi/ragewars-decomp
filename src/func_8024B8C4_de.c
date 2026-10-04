#include "span_1000/code_8024B644.h"
#include "types.h"





void func_8024B8C4_de(void *arg0) {
    s32 temp_a1;
    temp_a1 = (((struct IntegerState104 *) ((s8 *) arg0))->unk_B4);
    (((struct IntegerState104 *) ((s8 *) arg0))->unk_B4) = 0;
    (((struct IntegerState104 *) ((s8 *) arg0))->unk_BC) = 0;
    (((struct IntegerState104 *) ((s8 *) arg0))->unk_C0) = 0;
    (((struct IntegerState104 *) ((s8 *) arg0))->unk_100) = (s32) ((((struct IntegerState104 *) ((s8 *) arg0))->unk_100) & ~0x200);
    (((struct IntegerState104 *) ((s8 *) arg0))->unk_B8) = temp_a1;
}

#include "span_1000/code_8028DF6C.h"
#include "span_1000/types.h"
#include "types.h"





s32 func_802BD170_de(s32);
void func_8028F864_de(void *arg0, void *arg1, s32 arg2) {
    s32 temp_v0;
    temp_v0 = func_802BD170_de(1);
    (((struct func_8020CB3C_S1 *) ((s8 *) arg1))->unk4) = arg2;
    (((struct func_8020CB3C_S1 *) ((s8 *) arg1))->unk0) = (void *) (((struct ObjectLinks2E4 *) ((s8 *) arg0))->unk_2E0);
    (((struct ObjectLinks2E4 *) ((s8 *) arg0))->unk_2E0) = arg1;
    func_802BD170_de(temp_v0);
}

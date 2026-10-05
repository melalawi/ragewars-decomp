#include "span_1000/code_80256220.h"
#include "types.h"
typedef s32 M2C_UNK;





extern M2C_UNK D_002571F0;
extern M2C_UNK D_80107928;
extern M2C_UNK D_80107DF0;
M2C_UNK *func_80256E6C_de(M2C_UNK **arg0) {
    if ((((struct ObjectLinksC *) ((s8 *) (&D_80107DF0)))->unk_0) == 0) {
        (((struct ObjectLinksC *) ((s8 *) (&D_80107DF0)))->unk_8) = &D_80107928;
        (((struct ObjectLinksC *) ((s8 *) (&D_80107DF0)))->unk_4) = 0;
        (((struct ObjectLinksC *) ((s8 *) (&D_80107DF0)))->unk_0) = 1U;
    }
    *arg0 = &D_80107DF0;
    return &D_002571F0;
}

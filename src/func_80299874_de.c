#include "common/types_1dc8418c21db.h"
#include "span_1000/code_80297CD0.h"
#include "types.h"





extern s32 D_80146E00;
void func_80299874_de(s32 arg0, s32 arg1) {
    s32 var_a2;
    void *var_v1;
    var_a2 = 0;
    var_v1 = D_80146E00 + 0x1C;
    do {
        if ((((struct func_8029A838_S1 *) ((s8 *) var_v1))->unk0) == arg0) {
            (((struct func_8029A838_S1 *) ((s8 *) var_v1))->unk10) = arg1;
        }
        var_a2 += 1;
        var_v1 += 0x14;
    } while (var_a2 < 0x40);
}

#include "common/types_06e4f7ef1f9e.h"
#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8025D948.h"
#include "types.h"





extern f32 D_800C4030_de;









void func_8025DC88_de(void *arg0) {
    char *o = (char *) arg0;
    f32 var_f20;
    void *temp_v0;

    if (((ObjectState40 *)(o))->unk_38 != 0) {
        f32 prod = ((struct func_80258BB4_S1 *) ((ObjectState40 *) o)->unk_0.v0)->unk2BA4;
        prod = prod * ((func_802077F4_S2 *)(&D_800C4020_de))->unk4;
        var_f20 = (f32) (((ObjectState40 *)(o))->unk_24);
        var_f20 = var_f20 * prod;
        var_f20 = var_f20 * ((ObjectState40 *)(o))->unk_3C;
        goto do_update;
    }
    temp_v0 = ((ObjectState40 *)(o))->unk_0.v1;
    var_f20 = (f32) (((ObjectState40 *)(o))->unk_24) * (((ObjectState2BBC *)(temp_v0))->unk_2BA4 * D_800C4028_de);
    if (((ObjectState2BBC *)(temp_v0))->unk_2BB8 != 0) {
        var_f20 = var_f20 * (0.699999988079071f);
    }
    if (var_f20 != ((ObjectState40 *)(o))->unk_2C) {
do_update:
        func_802AFF60_de(((ObjectState40 *)(o))->unk_14, (s16) (s32) (var_f20 * D_800C4030_de));
        ((ObjectState40 *)(o))->unk_2C = var_f20;
    }
}

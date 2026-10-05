#include "common/types_1dc8418c21db.h"
#include "span_1000/code_80243A80.h"
#include "span_1000/code_802944E8.h"
#include "types.h"




extern Entry80294AC4 D_800CD788[];

extern void func_8025E214_de(s32 arg0);
extern void func_80264854_de(s32 arg0);




void func_80294AB0_de(void *arg0) {
    void (*callback)(void *arg0);
    s32 index;

    if ((D_80142CA8 == 2) &&
        (((func_80294AC4_S1 *)(arg0))->unk26DD0 == 0)) {
        index = ((func_80294AC4_S1 *)(arg0))->unk26DBC;
        ((func_80294AC4_S1 *)(arg0))->unk26DB0 = 0;
        ((func_80294AC4_S1 *)(arg0))->unk26DB8 = index;
        func_802456A0_de();
        func_8025E214_de(-1);
        func_80264854_de(0);
        callback = D_800CD788[((func_80294AC4_S1 *)(arg0))->unk26DB8].callback;
        if (callback != 0) {
            callback(arg0);
        }
    }
}

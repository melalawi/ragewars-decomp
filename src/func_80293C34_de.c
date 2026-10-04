#include "common/types.h"
#include "span_1000/code_8029193C.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"



extern Vector4f D_801427E0;
extern f32 D_800CD738;








void func_80293C34_de(void *arg0) {
    f32 t1;
    f32 t2;
    f32 t3;

    if (((func_80293C20_S1 *)(arg0))->unk26DD4 == 0) {
        t1 = D_801427E0.x + D_800CD738;
        D_801427E0.x = t1;
        if (D_800C54AC_de <= t1) {
            t2 = D_801427E0.y + ((func_802077F4_S2 *)(&D_800C54AC_de))->unk4;
            D_801427E0.x = t1 - D_800C54AC_de;
            D_801427E0.y = t2;
            if (D_800C54B4_de <= t2) {
                t3 = D_801427E0.z + ((func_802077F4_S2 *)(&D_800C54AC_de))->unk4;
                D_801427E0.y = t2 - D_800C54B4_de;
                D_801427E0.z = t3;
                if (D_800C54B4_de <= t3) {
                    D_801427E0.z = t3 - D_800C54B4_de;
                    D_801427E0.w = D_801427E0.w + ((func_802077F4_S2 *)(&D_800C54AC_de))->unk4;
                }
            }
        }
    }
}

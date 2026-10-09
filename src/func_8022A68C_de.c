#include "common/types_8a8189af7b05.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_8022A274.h"
#include "types.h"




























/** Start the round-end sequence once no menu or transition is active and any player is flagged. */
extern int func_80245798_de(void);
extern int func_80245784_de(void);



extern State_func_8022A68C_de D_801468A0;






int func_8022A68C_de(char *arg0) {
    SharedPlayer_func_8022A398_de *p;
    int count;
    State_func_8022A68C_de *s;
    State_func_8022A68C_de *t;

    if (func_80245798_de() != 0 || func_80245784_de() != 0 || D_801371DC != 0) {
        return 0;
    }
    t = &D_801468A0;
    if (t->active != 0 || t->armed == 0) {
        return 0;
    }
    count = 0;
    for (p = ((func_8022A67C_S1 *)(arg0))->unk20; p != 0; p = p->views16E0.view16E0_1.next) {
        if (p->views5D8.view5D8_5.info[0x8E] == 1) {
            count++;
        }
    }
    if (count <= 0) {
        return 0;
    }
    s = &D_801468A0;
    s->active = 1;
    s->armed = 0;
    return 1;
}

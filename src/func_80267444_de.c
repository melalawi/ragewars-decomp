#include "common/types.h"
#include "span_1000/code_8026565C.h"
#include "span_C76B0/data.h"
#include "types.h"




extern void func_80271FC8_de(void *arg0, f32 t, void *a, void *b);
extern f32 func_8024D284_de(void *arg0);






s32 func_80267444_de(void *arg0, Vec3 *arg1) {
    Vec3 first;
    Vec3 second;
    char *actor;
    s16 state;
    s32 result;

    result = 0;
    if ((*(u8 *)arg0 == 1) &&
        ((((func_8026745C_S1 *)(arg0))->unk100 & 0x300000) != 0)) {
        actor = ((func_8026745C_S1 *)(arg0))->unk1D8;
        if (arg0 == (char *)actor + 0x2E8) {
            state = ((func_8026745C_S2 *)(actor))->unk62E;
            if ((state == 0) || (state == 0x11) || (state == 0x10)) {
                first = *arg1;
                second = ((func_8026745C_S2 *)(actor))->unk8;
                func_80271FC8_de(arg1, 0.75f, &first, &second);
                arg1->y += func_8024D284_de(actor) * D_800C4430_de;
                result = 1;
            }
        }
    }
    return result;
}

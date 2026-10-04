#include "common/types.h"
#include "span_1000/code_8028DF6C.h"
#include "types.h"

/* Reports whether arg1 is within range of arg0, using its type and state to pick the check. */





extern void func_80271F68_de(Vec3 *arg0, Vec3 *arg1, Vec3 *arg2);




s32 func_8028E860_de(Obj_func_8028E860_de *arg0, Vec3 *arg1) {
    Vec3 delta;
    u16 type;

    if (arg0->unk0 == 1 && *arg0->unk18 == 7) {
        func_80271F68_de(&delta, &((Player *)(arg0))->pos, arg1);
        delta.y = 0;
        if (262144.0f < delta.x * delta.x + delta.z * delta.z) {
            return 0;
        }
        return 0xFF;
    }
    if (*arg0->unk18 != 1) {
        return 0;
    }
    type = arg0->unkE4;
    if (type == 0x44E || type == 0x453 || type == 0x451 || type == 0x450 ||
        type == 0x454 || type == 0x455 || type == 0x456) {
        return 0xFF;
    }
    return 0;
}

/* Reports whether the object's float at 0x718 is above the constant after D_800C7EC8. */
#include "basetypes.h"

extern f32 D_800C7EC8;

typedef struct func_8022DC0C_S1 func_8022DC0C_S1;
typedef struct func_8022DC0C_S2 func_8022DC0C_S2;
struct func_8022DC0C_S1 {
    char pad0[0x718];
    f32 unk718;
};
struct func_8022DC0C_S2 {
    char pad0[0x4];
    f32 unk4;
};

s32 func_8022DC0C(void *arg0) {
    f32 field = ((func_8022DC0C_S1 *)(arg0))->unk718;
    f32 konst = ((func_8022DC0C_S2 *)(&D_800C7EC8))->unk4;
    s32 result = 1;
    if (!(konst < field)) {
        result = 0;
    }
    return result;
}

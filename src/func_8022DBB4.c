/* Returns the constant after D_800C7EC0 less the cube of its difference from the argument. */
#include "basetypes.h"

extern f32 D_800C7EC0;

typedef struct func_8022DBB4_S1 func_8022DBB4_S1;
struct func_8022DBB4_S1 {
    char pad0[0x4];
    f32 unk4;
};

f32 func_8022DBB4(f32 arg0) {
    f32 temp = ((func_8022DBB4_S1 *)(&D_800C7EC0))->unk4 - arg0;
    return ((func_8022DBB4_S1 *)(&D_800C7EC0))->unk4 - (temp * temp * temp);
}

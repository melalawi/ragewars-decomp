/* Returns the constant after D_800C7EC0 less the cube of its difference from the argument. */
#include "basetypes.h"

extern f32 D_800C7EC0;

f32 func_8022DBB4(f32 arg0) {
    f32 temp = *(f32 *)((char *)&D_800C7EC0 + 4) - arg0;
    return *(f32 *)((char *)&D_800C7EC0 + 4) - (temp * temp * temp);
}

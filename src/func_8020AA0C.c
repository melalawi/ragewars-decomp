/** Returns the difference between the constant after D_800C6E20 and func_80209AE8's result, scaled by D_800C6E28. */
#include "basetypes.h"

extern f32 func_80209AE8(void);

extern f32 D_800C6E20;
extern f32 D_800C6E28;

f32 func_8020AA0C(void) {
    return (*(f32 *)((char *)&D_800C6E20 + 4) - func_80209AE8()) * (D_800C6E28);
}

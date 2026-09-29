/** Returns the difference between the constant after D_800C6E20 and func_80209AE8's result, scaled by D_800C6E28. */
#include "basetypes.h"

extern f32 func_80209AE8(void);

extern f32 D_800C6E20;
extern f32 D_800C6E28;

typedef struct func_8020AA0C_S1 func_8020AA0C_S1;
struct func_8020AA0C_S1 {
    char pad0[0x4];
    f32 unk4;
};

f32 func_8020AA0C(void) {
    return (((func_8020AA0C_S1 *)(&D_800C6E20))->unk4 - func_80209AE8()) * (D_800C6E28);
}

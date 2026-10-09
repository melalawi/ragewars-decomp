#include "span_16E000/code_8043962C.h"
#include "types.h"





extern s32 D_800DE890;
extern Pulse *D_800E1900;

extern void func_802A2360_de(void);
extern f32 func_802B6560_de(f32);

/* Advances a sine-driven pulse phase and writes the resulting display intensity byte. */
s32 func_80439628_de(s32 arg0, s32 arg1, s32 arg2) {
    if (D_800DE890 >= 2) {
        return 0;
    }
    func_802A2360_de();
    D_800E1900->phase += arg2;
    D_800E1900->light->field_10 = (u32)(func_802B6560_de(D_800E1900->phase * 0.005f) * 100.0f + 150.0f);
    return 0;
}

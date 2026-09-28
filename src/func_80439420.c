#include "basetypes.h"

/* Builds a two-slider menu: allocates eight bytes into D_800E58A4 through func_80252FFC, creates the
   sliders VALUE_1D5/VALUE_1D5+1 and VALUE_1D5+2/VALUE_1D5+3 through func_8041A600, stores them in the block and sets them
   to the option bytes D_801462E0[0] and [1] through func_8041A76C, then calls func_8041B190 with
   VV_01D3. Returns zero. */

#if defined(VERSION_DE)
#define VALUE_1D5 0x1D1
#define VV_01D3 0x1CF
#elif defined(VERSION_EU_MUL)
#define VALUE_1D5 0x1D8
#define VV_01D3 0x1DC
#else
#define VALUE_1D5 0x1D5
#define VV_01D3 0x1D3
#endif

extern void **D_800E58A4;
extern u8 D_801462E0[];
extern void **func_80252FFC(s32);
extern void *func_8041A600(s32, s32, s32);
extern void func_8041A76C(void *, s32);
extern void func_8041B190(s32);

s32 func_80439420(void) {
    u8 *options;
    void *slider;

    D_800E58A4 = func_80252FFC(8);
    slider = func_8041A600(VALUE_1D5, VALUE_1D5 + 1, 0xFF);
    options = D_801462E0;
    D_800E58A4[0] = slider;
    func_8041A76C(slider, options[0]);
    slider = func_8041A600(VALUE_1D5 + 2, VALUE_1D5 + 3, 0xFF);
    D_800E58A4[1] = slider;
    func_8041A76C(slider, options[1]);
    func_8041B190(VV_01D3);
    return 0;
}

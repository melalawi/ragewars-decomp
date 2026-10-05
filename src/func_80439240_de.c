#include "span_16E000/code_8041B020.h"
#include "span_16E000/code_804379C8.h"
#include "types.h"

/* Builds a two-slider menu: allocates eight bytes into D_800E58A4 through func_8025305C_de, creates the
   sliders VALUE_1D5/VALUE_1D5+1 and VALUE_1D5+2/VALUE_1D5+3 through func_8041A580_de, stores them in the block and sets them
   to the option bytes D_801462E0[0] and [1] through func_8041A6EC_de, then calls func_8041B110_de with
   VV_01D3. Returns zero. */

#if defined(VERSION_DE)
#define VALUE_1D5 0x1D1
#define VV_01D3 0x1CF
#elif defined(VERSION_EU_X)
#define VALUE_1D5 0x1D8
#define VV_01D3 0x1DC
#else
#define VALUE_1D5 0x1D5
#define VV_01D3 0x1D3
#endif

extern void **D_800E1854_de;
extern u8 D_80142220[];
extern void **func_8025305C_de(s32);
extern void *func_8041A580_de(s32, s32, s32);
extern void func_8041A6EC_de(void *, s32);


s32 func_80439240_de(void) {
    u8 *options;
    void *slider;

    D_800E1854_de = func_8025305C_de(8);
    slider = func_8041A580_de(VALUE_1D5, VALUE_1D5 + 1, 0xFF);
    options = D_80142220;
    D_800E1854_de[0] = slider;
    func_8041A6EC_de(slider, options[0]);
    slider = func_8041A580_de(VALUE_1D5 + 2, VALUE_1D5 + 3, 0xFF);
    D_800E1854_de[1] = slider;
    func_8041A6EC_de(slider, options[1]);
    func_8041B110_de(VV_01D3);
    return 0;
}

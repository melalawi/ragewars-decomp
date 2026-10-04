#include "span_16E000/code_8043847C.h"
#include "types.h"

#ifdef VERSION_EU_X
#define VV_01D3 0x1DC
#elif defined(VERSION_DE)
#define VV_01D3 0x1CF
#else
#define VV_01D3 0x1D3
#endif

/* Calls func_8029973C_de; when func_80299A08_de reports 0x1D3, passes -1 to func_8042E988_de if
   func_802999A0_de reports 0x16 for zero and 0xB otherwise, then calls func_802998A8_de. Returns zero. */
extern void func_8029973C_de();
extern s32 func_80299A08_de();
extern s32 func_802999A0_de(s32);
extern void func_8042E988_de(s32);
extern void func_802998A8_de();

s32 func_804393A8_de(void) {
    func_8029973C_de();
    if (func_80299A08_de() == VV_01D3) {
        func_8042E988_de(func_802999A0_de(0) == 0x16 ? -1 : 0xB);
        func_802998A8_de();
    }
    return 0;
}

#include "basetypes.h"

#ifdef VERSION_EU_X
#define VV_01D3 0x1DC
#elif defined(VERSION_DE)
#define VV_01D3 0x1CF
#else
#define VV_01D3 0x1D3
#endif

/* Calls func_8029A73C; when func_8029AA08 reports 0x1D3, passes -1 to func_8042EB68 if
   func_8029A9A0 reports 0x16 for zero and 0xB otherwise, then calls func_8029A8A8. Returns zero. */
extern void func_8029A73C();
extern s32 func_8029AA08();
extern s32 func_8029A9A0(s32);
extern void func_8042EB68(s32);
extern void func_8029A8A8();

s32 func_80439588(void) {
    func_8029A73C();
    if (func_8029AA08() == VV_01D3) {
        func_8042EB68(func_8029A9A0(0) == 0x16 ? -1 : 0xB);
        func_8029A8A8();
    }
    return 0;
}

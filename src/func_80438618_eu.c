#include "span_16E000/code_804379C8.h"
#include "types.h"

#ifdef VERSION_EU_X
#define VV_03D0 0x3D4
#define VV_03D1 0x3D5
#elif defined(VERSION_DE)
#define VV_03D0 0x3CA
#define VV_03D1 0x3CB
#else
#define VV_03D0 0x3D0
#define VV_03D1 0x3D1
#endif

/* Calls func_8041B110_de with 0x3D0 and then 0x3D1, and returns zero. */
extern void func_8041B110_de(s32);

s32 func_80438618_eu(void) {
    func_8041B110_de(VV_03D0);
    func_8041B110_de(VV_03D1);
    return 0;
}
